#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x66 = 53966824U;
int16_t x162 = 534;
int8_t x193 = -1;
volatile uint32_t x194 = 605U;
uint16_t x195 = 95U;
int64_t x241 = INT64_MAX;
static uint16_t x261 = UINT16_MAX;
int16_t x273 = INT16_MIN;
volatile int32_t t7 = -1240;
int8_t x292 = 1;
uint8_t x297 = UINT8_MAX;
volatile int32_t t11 = 13729050;
int32_t x364 = 5;
int8_t x378 = INT8_MAX;
static int64_t x379 = 335631476396342079LL;
volatile int32_t t15 = 60828449;
uint64_t x446 = 2229509484LLU;
uint8_t x448 = 1U;
uint64_t x459 = 43276595149342LLU;
volatile int32_t t17 = -157826133;
volatile int32_t t18 = -1657;
int32_t x546 = INT32_MIN;
uint32_t x547 = 58156404U;
uint16_t x597 = UINT16_MAX;
volatile uint16_t x599 = 1U;
volatile int8_t x638 = INT8_MIN;
static int8_t x763 = INT8_MIN;
static int32_t t29 = 197;
volatile int8_t x967 = INT8_MAX;
uint8_t x1058 = 86U;
volatile uint32_t x1151 = UINT32_MAX;
uint8_t x1174 = UINT8_MAX;
int32_t t34 = -173415335;
int32_t t36 = 793;
volatile int32_t x1299 = INT32_MIN;
int32_t t40 = -33167;
static int64_t x1327 = INT64_MIN;
static int32_t x1342 = INT32_MIN;
int64_t x1343 = INT64_MIN;
volatile int8_t x1344 = 0;
int32_t x1350 = 120803;
volatile int32_t t43 = -3;
int8_t x1455 = 2;
int32_t t44 = 12;
int32_t x1517 = -53725324;
uint32_t x1519 = 51592U;
int64_t x1526 = 1173991LL;
static int8_t x1528 = 0;
volatile int32_t t47 = 343;
int8_t x1568 = 1;
volatile int32_t t49 = 1309249;
int16_t x1633 = INT16_MIN;
uint32_t x1655 = UINT32_MAX;
int64_t x1669 = -675386285558440LL;
volatile int32_t t53 = -25;
int8_t x1818 = INT8_MAX;
int8_t x1820 = 0;
uint8_t x1844 = 2U;
uint8_t x1896 = 4U;
uint32_t x1906 = 0U;
static volatile uint16_t x1908 = 5U;
int64_t x1921 = INT64_MIN;
volatile uint8_t x1924 = 4U;
volatile int32_t t59 = 399383611;
uint8_t x1940 = 30U;
static volatile int64_t x1951 = -15168386362972370LL;
uint8_t x1952 = 0U;
static int8_t x1957 = 2;
uint32_t x1959 = 6664U;
int32_t x2026 = INT32_MAX;
int8_t x2038 = -1;
volatile uint8_t x2039 = 22U;
int64_t x2053 = -16658870LL;
volatile int32_t x2089 = 425986203;
uint8_t x2128 = 25U;
int32_t t71 = 6459;
static int8_t x2189 = -12;
volatile int32_t t73 = 8;
static uint16_t x2201 = UINT16_MAX;
int64_t x2241 = -1LL;
volatile int32_t x2253 = 20080004;
uint8_t x2256 = 1U;
volatile uint64_t x2293 = UINT64_MAX;
volatile int32_t t79 = 1;
static int16_t x2357 = -1;
static volatile int32_t t82 = 3;
uint8_t x2389 = UINT8_MAX;
int8_t x2392 = 0;
uint32_t x2406 = 1013580U;
int32_t t84 = 3089366;
uint8_t x2505 = 36U;
int16_t x2508 = 27;
int8_t x2558 = -18;
volatile int32_t t87 = 28547748;
int16_t x2617 = -12;
uint64_t x2620 = 25LLU;
volatile int32_t t89 = 439;
static uint16_t x2706 = 7U;
int16_t x2739 = -1013;
volatile int32_t t95 = 2855;
static volatile int32_t x2763 = 962070;
volatile uint8_t x2789 = UINT8_MAX;
int32_t t97 = -500505;
uint8_t x2798 = 0U;
uint64_t x2814 = 852819474LLU;
int32_t t99 = -10575;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = INT8_MIN;
	volatile uint32_t x3 = 104257849U;
	static volatile uint16_t x4 = 2U;
	static int32_t t0 = 24069;

	t0 = ((x1==(x2<=x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x49 = INT64_MAX;
	int16_t x50 = 1;
	int64_t x51 = INT64_MIN;
	static int16_t x52 = 2;
	static int32_t t1 = 54395295;

	t1 = ((x49==(x50<=x51))<<x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x65 = 8213349975LLU;
	static volatile int64_t x67 = -1LL;
	uint32_t x68 = 14U;
	volatile int32_t t2 = 18;

	t2 = ((x65==(x66<=x67))<<x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x161 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	uint16_t x164 = 1U;
	int32_t t3 = 5;

	t3 = ((x161==(x162<=x163))<<x164);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x196 = 0U;
	static int32_t t4 = 4731;

	t4 = ((x193==(x194<=x195))<<x196);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x242 = 0U;
	uint8_t x243 = 56U;
	uint16_t x244 = 1U;
	static int32_t t5 = -701941;

	t5 = ((x241==(x242<=x243))<<x244);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x262 = 38;
	static int8_t x263 = 0;
	static volatile uint64_t x264 = 3LLU;
	volatile int32_t t6 = 6924894;

	t6 = ((x261==(x262<=x263))<<x264);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x274 = UINT16_MAX;
	uint64_t x275 = 11700799LLU;
	int8_t x276 = 0;

	t7 = ((x273==(x274<=x275))<<x276);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x281 = UINT16_MAX;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -1LL;
	uint8_t x284 = 1U;
	volatile int32_t t8 = -214380;

	t8 = ((x281==(x282<=x283))<<x284);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x289 = INT8_MAX;
	uint16_t x290 = 774U;
	int64_t x291 = INT64_MIN;
	int32_t t9 = 226;

	t9 = ((x289==(x290<=x291))<<x292);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x298 = 15268;
	uint8_t x299 = UINT8_MAX;
	uint16_t x300 = 2U;
	int32_t t10 = 5867;

	t10 = ((x297==(x298<=x299))<<x300);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	volatile int8_t x331 = -1;
	volatile uint8_t x332 = 1U;

	t11 = ((x329==(x330<=x331))<<x332);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x361 = 3755744055571LL;
	int16_t x362 = INT16_MIN;
	int64_t x363 = -1LL;
	static volatile int32_t t12 = -5863136;

	t12 = ((x361==(x362<=x363))<<x364);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x377 = INT16_MAX;
	static uint32_t x380 = 0U;
	volatile int32_t t13 = -1;

	t13 = ((x377==(x378<=x379))<<x380);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x417 = 416013105109737151LLU;
	int8_t x418 = -3;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = 1U;
	volatile int32_t t14 = 13171961;

	t14 = ((x417==(x418<=x419))<<x420);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x421 = 248;
	volatile uint16_t x422 = 0U;
	int16_t x423 = -1;
	int8_t x424 = 1;

	t15 = ((x421==(x422<=x423))<<x424);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x445 = -1;
	uint32_t x447 = 31U;
	static volatile int32_t t16 = -89295049;

	t16 = ((x445==(x446<=x447))<<x448);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x457 = INT32_MAX;
	int32_t x458 = INT32_MAX;
	uint8_t x460 = 3U;

	t17 = ((x457==(x458<=x459))<<x460);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MIN;
	int64_t x471 = INT64_MIN;
	int8_t x472 = 5;

	t18 = ((x469==(x470<=x471))<<x472);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x477 = UINT64_MAX;
	static uint64_t x478 = 7110165251LLU;
	int32_t x479 = INT32_MAX;
	uint16_t x480 = 3U;
	volatile int32_t t19 = 4488;

	t19 = ((x477==(x478<=x479))<<x480);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x545 = 1;
	uint8_t x548 = 30U;
	volatile int32_t t20 = 505288;

	t20 = ((x545==(x546<=x547))<<x548);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x557 = 14U;
	int64_t x558 = INT64_MIN;
	uint32_t x559 = UINT32_MAX;
	static volatile uint32_t x560 = 31U;
	volatile int32_t t21 = -107;

	t21 = ((x557==(x558<=x559))<<x560);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x585 = INT64_MIN;
	int64_t x586 = -226541770527LL;
	static uint64_t x587 = 412463LLU;
	int8_t x588 = 19;
	static volatile int32_t t22 = 8;

	t22 = ((x585==(x586<=x587))<<x588);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x589 = 0LL;
	volatile uint16_t x590 = 1493U;
	uint8_t x591 = 0U;
	static volatile uint8_t x592 = 6U;
	volatile int32_t t23 = 28;

	t23 = ((x589==(x590<=x591))<<x592);

	if (t23 != 64) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x598 = UINT32_MAX;
	static int32_t x600 = 0;
	static int32_t t24 = 68675;

	t24 = ((x597==(x598<=x599))<<x600);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x637 = UINT8_MAX;
	uint64_t x639 = 1076541149532046LLU;
	uint16_t x640 = 15U;
	volatile int32_t t25 = -1045435;

	t25 = ((x637==(x638<=x639))<<x640);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x645 = 360307474;
	volatile int8_t x646 = -1;
	volatile int64_t x647 = INT64_MIN;
	volatile uint16_t x648 = 2U;
	int32_t t26 = -225987;

	t26 = ((x645==(x646<=x647))<<x648);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x737 = 6;
	int64_t x738 = INT64_MAX;
	int16_t x739 = 30;
	volatile int8_t x740 = 0;
	volatile int32_t t27 = -2491941;

	t27 = ((x737==(x738<=x739))<<x740);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x761 = INT32_MAX;
	uint32_t x762 = 8798U;
	uint8_t x764 = 23U;
	volatile int32_t t28 = 0;

	t28 = ((x761==(x762<=x763))<<x764);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x909 = 1;
	volatile int64_t x910 = -1LL;
	volatile int32_t x911 = -244093243;
	volatile uint16_t x912 = 1U;

	t29 = ((x909==(x910<=x911))<<x912);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x965 = INT64_MAX;
	int8_t x966 = 1;
	static volatile uint8_t x968 = 2U;
	volatile int32_t t30 = -66289;

	t30 = ((x965==(x966<=x967))<<x968);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1001 = INT64_MAX;
	int64_t x1002 = INT64_MIN;
	volatile int64_t x1003 = 17467124463681017LL;
	volatile int16_t x1004 = 3;
	int32_t t31 = -38739;

	t31 = ((x1001==(x1002<=x1003))<<x1004);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x1057 = UINT16_MAX;
	int8_t x1059 = 15;
	static uint8_t x1060 = 9U;
	volatile int32_t t32 = 590700;

	t32 = ((x1057==(x1058<=x1059))<<x1060);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1149 = INT64_MIN;
	volatile int16_t x1150 = INT16_MIN;
	uint16_t x1152 = 0U;
	volatile int32_t t33 = -9;

	t33 = ((x1149==(x1150<=x1151))<<x1152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1173 = 3U;
	static int16_t x1175 = -1;
	uint8_t x1176 = 2U;

	t34 = ((x1173==(x1174<=x1175))<<x1176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1193 = 2;
	volatile uint32_t x1194 = UINT32_MAX;
	uint64_t x1195 = UINT64_MAX;
	uint16_t x1196 = 4U;
	volatile int32_t t35 = 28677652;

	t35 = ((x1193==(x1194<=x1195))<<x1196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1249 = -1;
	volatile uint16_t x1250 = 737U;
	int16_t x1251 = -768;
	static volatile int8_t x1252 = 0;

	t36 = ((x1249==(x1250<=x1251))<<x1252);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1253 = -73582LL;
	int16_t x1254 = 737;
	uint8_t x1255 = 13U;
	int16_t x1256 = 3;
	volatile int32_t t37 = 121;

	t37 = ((x1253==(x1254<=x1255))<<x1256);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1265 = 28662U;
	uint16_t x1266 = 1U;
	static int8_t x1267 = INT8_MAX;
	uint32_t x1268 = 1U;
	volatile int32_t t38 = 23142;

	t38 = ((x1265==(x1266<=x1267))<<x1268);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x1281 = -1;
	static int32_t x1282 = INT32_MIN;
	uint8_t x1283 = UINT8_MAX;
	uint8_t x1284 = 27U;
	volatile int32_t t39 = 51736448;

	t39 = ((x1281==(x1282<=x1283))<<x1284);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1297 = 28U;
	static int16_t x1298 = -6;
	int8_t x1300 = 9;

	t40 = ((x1297==(x1298<=x1299))<<x1300);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1325 = -1;
	uint16_t x1326 = 421U;
	static uint8_t x1328 = 3U;
	static int32_t t41 = 52918;

	t41 = ((x1325==(x1326<=x1327))<<x1328);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1341 = UINT64_MAX;
	int32_t t42 = -127;

	t42 = ((x1341==(x1342<=x1343))<<x1344);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1349 = 6025U;
	uint8_t x1351 = 3U;
	volatile uint16_t x1352 = 1U;

	t43 = ((x1349==(x1350<=x1351))<<x1352);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x1453 = -1;
	int64_t x1454 = -1LL;
	static int8_t x1456 = 1;

	t44 = ((x1453==(x1454<=x1455))<<x1456);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1518 = -1665;
	volatile int8_t x1520 = 0;
	int32_t t45 = -1580070;

	t45 = ((x1517==(x1518<=x1519))<<x1520);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1525 = 36U;
	uint32_t x1527 = UINT32_MAX;
	int32_t t46 = 3;

	t46 = ((x1525==(x1526<=x1527))<<x1528);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1549 = 12;
	static int64_t x1550 = INT64_MIN;
	uint32_t x1551 = UINT32_MAX;
	static volatile int16_t x1552 = 5;

	t47 = ((x1549==(x1550<=x1551))<<x1552);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1565 = INT32_MIN;
	volatile uint16_t x1566 = UINT16_MAX;
	int32_t x1567 = -1;
	volatile int32_t t48 = 16265;

	t48 = ((x1565==(x1566<=x1567))<<x1568);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1573 = UINT8_MAX;
	static uint8_t x1574 = UINT8_MAX;
	volatile int16_t x1575 = INT16_MIN;
	static uint32_t x1576 = 8U;

	t49 = ((x1573==(x1574<=x1575))<<x1576);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1634 = 141685246883757269LLU;
	static int16_t x1635 = INT16_MIN;
	uint16_t x1636 = 2U;
	int32_t t50 = -21189;

	t50 = ((x1633==(x1634<=x1635))<<x1636);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1653 = UINT64_MAX;
	volatile uint16_t x1654 = UINT16_MAX;
	uint16_t x1656 = 7U;
	static int32_t t51 = 168;

	t51 = ((x1653==(x1654<=x1655))<<x1656);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x1670 = 8254257369881109128LLU;
	uint16_t x1671 = UINT16_MAX;
	uint8_t x1672 = 15U;
	volatile int32_t t52 = -77231;

	t52 = ((x1669==(x1670<=x1671))<<x1672);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1733 = 2U;
	static int8_t x1734 = INT8_MIN;
	volatile int32_t x1735 = INT32_MIN;
	uint8_t x1736 = 0U;

	t53 = ((x1733==(x1734<=x1735))<<x1736);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1757 = 7;
	volatile uint8_t x1758 = UINT8_MAX;
	volatile int64_t x1759 = INT64_MIN;
	uint8_t x1760 = 10U;
	static volatile int32_t t54 = 1;

	t54 = ((x1757==(x1758<=x1759))<<x1760);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1817 = 47;
	volatile int64_t x1819 = -1LL;
	static int32_t t55 = -1617656;

	t55 = ((x1817==(x1818<=x1819))<<x1820);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1841 = -25813;
	volatile int32_t x1842 = INT32_MIN;
	int16_t x1843 = INT16_MIN;
	static int32_t t56 = -35;

	t56 = ((x1841==(x1842<=x1843))<<x1844);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1893 = INT16_MAX;
	int8_t x1894 = INT8_MAX;
	uint32_t x1895 = UINT32_MAX;
	volatile int32_t t57 = 110;

	t57 = ((x1893==(x1894<=x1895))<<x1896);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1905 = -1LL;
	int8_t x1907 = INT8_MAX;
	int32_t t58 = -1863835;

	t58 = ((x1905==(x1906<=x1907))<<x1908);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x1922 = 793U;
	int16_t x1923 = INT16_MAX;

	t59 = ((x1921==(x1922<=x1923))<<x1924);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1937 = 6706954832200LLU;
	int8_t x1938 = 14;
	static int32_t x1939 = INT32_MAX;
	volatile int32_t t60 = 51;

	t60 = ((x1937==(x1938<=x1939))<<x1940);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1949 = 7U;
	static uint16_t x1950 = 6U;
	int32_t t61 = -11877;

	t61 = ((x1949==(x1950<=x1951))<<x1952);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1958 = INT64_MAX;
	volatile int8_t x1960 = 2;
	static volatile int32_t t62 = -1045;

	t62 = ((x1957==(x1958<=x1959))<<x1960);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2013 = INT8_MIN;
	int64_t x2014 = 3738862395910530LL;
	int32_t x2015 = -328811;
	uint8_t x2016 = 23U;
	int32_t t63 = -149;

	t63 = ((x2013==(x2014<=x2015))<<x2016);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2025 = 90164648U;
	volatile int32_t x2027 = 154621623;
	int8_t x2028 = 1;
	int32_t t64 = 1;

	t64 = ((x2025==(x2026<=x2027))<<x2028);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2037 = INT64_MIN;
	static uint8_t x2040 = 24U;
	static volatile int32_t t65 = -115;

	t65 = ((x2037==(x2038<=x2039))<<x2040);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2054 = -1;
	uint32_t x2055 = 264619036U;
	static uint8_t x2056 = 7U;
	int32_t t66 = 9;

	t66 = ((x2053==(x2054<=x2055))<<x2056);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2061 = -671256646;
	uint8_t x2062 = 1U;
	int8_t x2063 = INT8_MIN;
	int16_t x2064 = 0;
	static int32_t t67 = -103977037;

	t67 = ((x2061==(x2062<=x2063))<<x2064);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2073 = 2;
	uint8_t x2074 = 1U;
	static uint16_t x2075 = 3U;
	uint16_t x2076 = 22U;
	int32_t t68 = -1780517;

	t68 = ((x2073==(x2074<=x2075))<<x2076);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x2085 = INT32_MIN;
	uint64_t x2086 = 172199443701LLU;
	static int64_t x2087 = -126194LL;
	int8_t x2088 = 29;
	static int32_t t69 = 2980193;

	t69 = ((x2085==(x2086<=x2087))<<x2088);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2090 = 2U;
	uint8_t x2091 = 0U;
	int16_t x2092 = 0;
	volatile int32_t t70 = 12491;

	t70 = ((x2089==(x2090<=x2091))<<x2092);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2125 = -1;
	static int32_t x2126 = INT32_MIN;
	uint32_t x2127 = 152U;

	t71 = ((x2125==(x2126<=x2127))<<x2128);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x2149 = 16579372391430430LLU;
	uint8_t x2150 = 43U;
	int16_t x2151 = -1;
	int8_t x2152 = 0;
	int32_t t72 = -128532970;

	t72 = ((x2149==(x2150<=x2151))<<x2152);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x2190 = INT32_MAX;
	uint16_t x2191 = 24047U;
	static uint16_t x2192 = 3U;

	t73 = ((x2189==(x2190<=x2191))<<x2192);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2202 = INT8_MIN;
	static volatile uint32_t x2203 = 89531U;
	static volatile uint16_t x2204 = 5U;
	int32_t t74 = 40510178;

	t74 = ((x2201==(x2202<=x2203))<<x2204);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2225 = INT64_MIN;
	uint64_t x2226 = UINT64_MAX;
	uint32_t x2227 = 32743870U;
	int64_t x2228 = 7LL;
	volatile int32_t t75 = 1140;

	t75 = ((x2225==(x2226<=x2227))<<x2228);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x2242 = -430;
	uint32_t x2243 = 1U;
	int8_t x2244 = 1;
	volatile int32_t t76 = -2581277;

	t76 = ((x2241==(x2242<=x2243))<<x2244);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2254 = 6721570U;
	volatile int8_t x2255 = -10;
	volatile int32_t t77 = 9;

	t77 = ((x2253==(x2254<=x2255))<<x2256);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2265 = INT32_MIN;
	static uint16_t x2266 = UINT16_MAX;
	int8_t x2267 = INT8_MAX;
	static uint64_t x2268 = 15LLU;
	volatile int32_t t78 = 25832126;

	t78 = ((x2265==(x2266<=x2267))<<x2268);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2294 = INT16_MAX;
	volatile uint8_t x2295 = 14U;
	uint64_t x2296 = 29LLU;

	t79 = ((x2293==(x2294<=x2295))<<x2296);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2337 = INT32_MIN;
	int64_t x2338 = 9609779966LL;
	uint64_t x2339 = 42363265208447LLU;
	static int32_t x2340 = 2;
	volatile int32_t t80 = 45670502;

	t80 = ((x2337==(x2338<=x2339))<<x2340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2345 = INT8_MAX;
	volatile int64_t x2346 = INT64_MAX;
	volatile int64_t x2347 = -1LL;
	volatile uint16_t x2348 = 2U;
	static int32_t t81 = 878016;

	t81 = ((x2345==(x2346<=x2347))<<x2348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2358 = INT16_MIN;
	static uint8_t x2359 = 0U;
	int8_t x2360 = 5;

	t82 = ((x2357==(x2358<=x2359))<<x2360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2390 = -1LL;
	static uint16_t x2391 = UINT16_MAX;
	int32_t t83 = -973566;

	t83 = ((x2389==(x2390<=x2391))<<x2392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2405 = 108;
	int32_t x2407 = INT32_MAX;
	int8_t x2408 = 0;

	t84 = ((x2405==(x2406<=x2407))<<x2408);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2506 = 2U;
	volatile int64_t x2507 = INT64_MIN;
	int32_t t85 = 1813236;

	t85 = ((x2505==(x2506<=x2507))<<x2508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2513 = -1;
	static volatile int16_t x2514 = -4449;
	uint32_t x2515 = 997175764U;
	int8_t x2516 = 0;
	static int32_t t86 = 38238840;

	t86 = ((x2513==(x2514<=x2515))<<x2516);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x2557 = INT64_MAX;
	volatile uint64_t x2559 = UINT64_MAX;
	volatile uint8_t x2560 = 27U;

	t87 = ((x2557==(x2558<=x2559))<<x2560);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x2613 = INT8_MIN;
	int64_t x2614 = INT64_MAX;
	volatile int16_t x2615 = INT16_MIN;
	uint32_t x2616 = 0U;
	int32_t t88 = 16741;

	t88 = ((x2613==(x2614<=x2615))<<x2616);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2618 = 11;
	uint8_t x2619 = 3U;

	t89 = ((x2617==(x2618<=x2619))<<x2620);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2705 = 1;
	int64_t x2707 = -1407LL;
	static volatile uint16_t x2708 = 8U;
	static int32_t t90 = -1954;

	t90 = ((x2705==(x2706<=x2707))<<x2708);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2725 = UINT64_MAX;
	volatile int8_t x2726 = -3;
	int64_t x2727 = 1LL;
	uint8_t x2728 = 29U;
	volatile int32_t t91 = -1072239386;

	t91 = ((x2725==(x2726<=x2727))<<x2728);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x2729 = -180662;
	uint32_t x2730 = UINT32_MAX;
	int32_t x2731 = -1;
	uint16_t x2732 = 6U;
	volatile int32_t t92 = -1843;

	t92 = ((x2729==(x2730<=x2731))<<x2732);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x2737 = UINT64_MAX;
	uint64_t x2738 = 8398235823LLU;
	static uint16_t x2740 = 19U;
	static volatile int32_t t93 = 59159790;

	t93 = ((x2737==(x2738<=x2739))<<x2740);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2741 = 9;
	int32_t x2742 = -1;
	uint16_t x2743 = 2U;
	uint8_t x2744 = 1U;
	volatile int32_t t94 = 39;

	t94 = ((x2741==(x2742<=x2743))<<x2744);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2753 = INT16_MIN;
	volatile int32_t x2754 = -33441;
	static int32_t x2755 = INT32_MAX;
	int8_t x2756 = 0;

	t95 = ((x2753==(x2754<=x2755))<<x2756);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2761 = INT16_MAX;
	int64_t x2762 = INT64_MAX;
	uint8_t x2764 = 2U;
	int32_t t96 = 404;

	t96 = ((x2761==(x2762<=x2763))<<x2764);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2790 = 13U;
	volatile int64_t x2791 = INT64_MAX;
	uint8_t x2792 = 3U;

	t97 = ((x2789==(x2790<=x2791))<<x2792);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2797 = 17;
	int8_t x2799 = 45;
	uint16_t x2800 = 3U;
	volatile int32_t t98 = -340076137;

	t98 = ((x2797==(x2798<=x2799))<<x2800);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2813 = 681;
	volatile int32_t x2815 = INT32_MIN;
	int8_t x2816 = 0;

	t99 = ((x2813==(x2814<=x2815))<<x2816);

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

