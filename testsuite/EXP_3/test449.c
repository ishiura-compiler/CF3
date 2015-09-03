#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x85 = UINT16_MAX;
volatile int8_t x86 = 1;
int16_t x111 = INT16_MIN;
static volatile int16_t x193 = INT16_MAX;
uint16_t x196 = 0U;
uint16_t x226 = 0U;
uint32_t x227 = UINT32_MAX;
int32_t x238 = INT32_MIN;
int64_t x239 = INT64_MIN;
int32_t x288 = -1;
volatile int32_t t8 = 3499776;
volatile int32_t x327 = 0;
static int32_t x342 = 29152;
uint32_t x367 = 0U;
int32_t x388 = INT32_MIN;
volatile int32_t t12 = -400647;
static volatile int32_t t13 = -513;
int16_t x433 = 99;
uint16_t x438 = UINT16_MAX;
volatile int32_t t15 = 0;
volatile int64_t x467 = -1LL;
int32_t t16 = 509148;
volatile int32_t t18 = -14098408;
int8_t x533 = -1;
uint32_t x536 = UINT32_MAX;
int16_t x596 = -1;
static volatile int32_t x600 = -1;
volatile int32_t t22 = 243574;
volatile int32_t x661 = INT32_MIN;
int32_t x692 = -1;
int32_t x726 = INT32_MAX;
int16_t x762 = INT16_MIN;
static uint64_t x789 = UINT64_MAX;
volatile int8_t x792 = 1;
int32_t t32 = -7;
int8_t x1252 = 15;
static uint8_t x1255 = 40U;
int8_t x1256 = 0;
int32_t t34 = 139293;
uint16_t x1262 = 1310U;
uint64_t x1264 = UINT64_MAX;
int32_t t35 = 330839297;
static volatile int8_t x1298 = -1;
int8_t x1334 = -1;
int32_t x1381 = INT32_MIN;
int8_t x1513 = 5;
static int8_t x1515 = 4;
volatile uint16_t x1516 = 5U;
uint16_t x1541 = 25U;
volatile int64_t x1557 = -7218171073870LL;
uint32_t x1565 = 94U;
int16_t x1566 = INT16_MAX;
int32_t x1567 = -212381157;
uint8_t x1568 = 0U;
static volatile int32_t t48 = -1678;
int32_t t49 = 3438016;
int64_t x1694 = INT64_MIN;
int16_t x1821 = INT16_MIN;
volatile int32_t t51 = -500570;
int16_t x1838 = -1;
int16_t x1905 = -1;
int8_t x1908 = 1;
int32_t x2028 = -1;
int64_t x2131 = 0LL;
volatile int32_t t59 = -878668922;
uint32_t x2167 = 0U;
int16_t x2290 = 1468;
int16_t x2386 = -4019;
static uint8_t x2465 = UINT8_MAX;
int8_t x2484 = 0;
uint64_t x2517 = 362498055029LLU;
static int32_t x2534 = INT32_MIN;
int8_t x2598 = -43;
int8_t x2646 = -1;
int32_t t77 = 2;
uint8_t x2655 = 0U;
static int8_t x2656 = -1;
volatile int16_t x2696 = -7641;
int32_t x2702 = INT32_MAX;
int32_t t82 = 44837276;
uint64_t x2769 = 943LLU;
uint64_t x2777 = 13855LLU;
int64_t x2855 = -1LL;
static int32_t t86 = 1300;
uint16_t x3037 = 6823U;
int8_t x3038 = -13;
int8_t x3040 = 2;
uint16_t x3123 = 439U;
int64_t x3185 = -1LL;
int32_t x3186 = INT32_MIN;
static int16_t x3187 = 0;
volatile int16_t x3191 = -1;
int32_t t94 = 18;
uint32_t x3308 = 1U;
volatile int64_t x3351 = INT64_MIN;


void f0(void) {
	volatile uint8_t x37 = UINT8_MAX;
	volatile uint8_t x38 = UINT8_MAX;
	static uint8_t x39 = 3U;
	int8_t x40 = 4;
	volatile int32_t t0 = -5206;

	t0 = ((x37<x38)>>(x39*x40));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x87 = 0U;
	uint64_t x88 = 446422882393LLU;
	volatile int32_t t1 = 181315575;

	t1 = ((x85<x86)>>(x87*x88));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x109 = 1;
	volatile int8_t x110 = INT8_MIN;
	uint16_t x112 = 0U;
	volatile int32_t t2 = 34557;

	t2 = ((x109<x110)>>(x111*x112));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x149 = -1;
	int16_t x150 = INT16_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int64_t x152 = -1LL;
	volatile int32_t t3 = -650010155;

	t3 = ((x149<x150)>>(x151*x152));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x194 = INT64_MAX;
	int16_t x195 = 132;
	volatile int32_t t4 = -448;

	t4 = ((x193<x194)>>(x195*x196));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x225 = 14U;
	int16_t x228 = -9;
	int32_t t5 = -7;

	t5 = ((x225<x226)>>(x227*x228));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x237 = INT64_MIN;
	uint64_t x240 = 68257887652LLU;
	volatile int32_t t6 = 341347830;

	t6 = ((x237<x238)>>(x239*x240));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x269 = INT32_MAX;
	int8_t x270 = -19;
	volatile int16_t x271 = -1;
	static int64_t x272 = -1LL;
	int32_t t7 = -15;

	t7 = ((x269<x270)>>(x271*x272));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x285 = 5;
	volatile int16_t x286 = INT16_MAX;
	static volatile int8_t x287 = -16;

	t8 = ((x285<x286)>>(x287*x288));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x325 = -3453;
	static int32_t x326 = INT32_MAX;
	int32_t x328 = INT32_MAX;
	int32_t t9 = 0;

	t9 = ((x325<x326)>>(x327*x328));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x341 = -1;
	uint32_t x343 = UINT32_MAX;
	static volatile int8_t x344 = -1;
	int32_t t10 = 0;

	t10 = ((x341<x342)>>(x343*x344));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x365 = -8641;
	volatile uint64_t x366 = 1544381LLU;
	volatile int64_t x368 = INT64_MAX;
	int32_t t11 = 107423867;

	t11 = ((x365<x366)>>(x367*x368));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x385 = INT32_MAX;
	uint64_t x386 = 2099650699052037256LLU;
	uint32_t x387 = 491002U;

	t12 = ((x385<x386)>>(x387*x388));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	static int32_t x407 = INT32_MAX;
	uint16_t x408 = 0U;

	t13 = ((x405<x406)>>(x407*x408));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x434 = INT64_MIN;
	uint64_t x435 = 3LLU;
	static int32_t x436 = 1;
	volatile int32_t t14 = -164;

	t14 = ((x433<x434)>>(x435*x436));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x437 = INT32_MAX;
	uint16_t x439 = 0U;
	uint8_t x440 = 74U;

	t15 = ((x437<x438)>>(x439*x440));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x465 = 264U;
	static int8_t x466 = -4;
	uint64_t x468 = UINT64_MAX;

	t16 = ((x465<x466)>>(x467*x468));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x477 = 0U;
	int16_t x478 = -7945;
	uint64_t x479 = 0LLU;
	uint32_t x480 = 6U;
	int32_t t17 = -734206;

	t17 = ((x477<x478)>>(x479*x480));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x529 = INT64_MIN;
	static uint64_t x530 = 424477764650649LLU;
	volatile int8_t x531 = 0;
	int16_t x532 = -761;

	t18 = ((x529<x530)>>(x531*x532));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x534 = INT8_MIN;
	int8_t x535 = 0;
	int32_t t19 = 126;

	t19 = ((x533<x534)>>(x535*x536));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x593 = -1;
	int8_t x594 = INT8_MIN;
	int64_t x595 = -1LL;
	volatile int32_t t20 = -7;

	t20 = ((x593<x594)>>(x595*x596));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x597 = -10171;
	uint32_t x598 = 2058241188U;
	int64_t x599 = -1LL;
	static volatile int32_t t21 = -25008;

	t21 = ((x597<x598)>>(x599*x600));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x613 = UINT32_MAX;
	uint8_t x614 = 1U;
	int32_t x615 = 1;
	uint32_t x616 = 0U;

	t22 = ((x613<x614)>>(x615*x616));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x662 = 1077034836410LL;
	uint8_t x663 = 0U;
	int8_t x664 = 0;
	static int32_t t23 = 7;

	t23 = ((x661<x662)>>(x663*x664));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x689 = INT8_MIN;
	static int16_t x690 = INT16_MIN;
	int8_t x691 = -1;
	volatile int32_t t24 = -1;

	t24 = ((x689<x690)>>(x691*x692));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x725 = INT8_MIN;
	volatile int16_t x727 = -1;
	volatile int32_t x728 = -1;
	volatile int32_t t25 = -1314685;

	t25 = ((x725<x726)>>(x727*x728));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x761 = INT32_MIN;
	static int64_t x763 = -6722352LL;
	uint8_t x764 = 0U;
	int32_t t26 = 815442659;

	t26 = ((x761<x762)>>(x763*x764));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x790 = 32658330881594010LLU;
	int16_t x791 = 4;
	volatile int32_t t27 = -65534;

	t27 = ((x789<x790)>>(x791*x792));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x949 = UINT8_MAX;
	static uint32_t x950 = 53032584U;
	uint8_t x951 = 1U;
	int16_t x952 = 22;
	volatile int32_t t28 = 406879;

	t28 = ((x949<x950)>>(x951*x952));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1005 = 295;
	volatile int64_t x1006 = INT64_MIN;
	int8_t x1007 = -1;
	int8_t x1008 = -1;
	volatile int32_t t29 = 22305575;

	t29 = ((x1005<x1006)>>(x1007*x1008));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1129 = 6379650;
	uint32_t x1130 = 10672U;
	volatile int64_t x1131 = -1LL;
	int32_t x1132 = -1;
	static volatile int32_t t30 = 1;

	t30 = ((x1129<x1130)>>(x1131*x1132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1209 = -1;
	uint8_t x1210 = UINT8_MAX;
	volatile uint64_t x1211 = UINT64_MAX;
	int64_t x1212 = -1LL;
	int32_t t31 = -19426917;

	t31 = ((x1209<x1210)>>(x1211*x1212));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1241 = UINT8_MAX;
	uint32_t x1242 = 1479632208U;
	static volatile uint32_t x1243 = UINT32_MAX;
	int16_t x1244 = -1;

	t32 = ((x1241<x1242)>>(x1243*x1244));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1249 = INT16_MAX;
	int16_t x1250 = -1;
	uint8_t x1251 = 1U;
	int32_t t33 = -4;

	t33 = ((x1249<x1250)>>(x1251*x1252));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1253 = -26;
	int16_t x1254 = -13746;

	t34 = ((x1253<x1254)>>(x1255*x1256));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1261 = 0;
	static int16_t x1263 = -1;

	t35 = ((x1261<x1262)>>(x1263*x1264));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1297 = 5U;
	static int32_t x1299 = 72298;
	int8_t x1300 = 0;
	volatile int32_t t36 = 23;

	t36 = ((x1297<x1298)>>(x1299*x1300));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1333 = 5660;
	static int32_t x1335 = -1;
	volatile int32_t x1336 = -1;
	volatile int32_t t37 = -45680;

	t37 = ((x1333<x1334)>>(x1335*x1336));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1382 = INT16_MIN;
	static uint16_t x1383 = 3242U;
	static uint64_t x1384 = 0LLU;
	int32_t t38 = -1;

	t38 = ((x1381<x1382)>>(x1383*x1384));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1425 = 88U;
	uint64_t x1426 = 19809824806LLU;
	int16_t x1427 = 0;
	int16_t x1428 = INT16_MIN;
	volatile int32_t t39 = -46686648;

	t39 = ((x1425<x1426)>>(x1427*x1428));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1433 = 361331LL;
	uint32_t x1434 = 839794507U;
	int64_t x1435 = -661551281LL;
	uint8_t x1436 = 0U;
	volatile int32_t t40 = -923;

	t40 = ((x1433<x1434)>>(x1435*x1436));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1473 = -1;
	uint64_t x1474 = 164LLU;
	int16_t x1475 = -1;
	volatile int64_t x1476 = -1LL;
	volatile int32_t t41 = -13047;

	t41 = ((x1473<x1474)>>(x1475*x1476));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1514 = 21234465056LLU;
	int32_t t42 = -9385651;

	t42 = ((x1513<x1514)>>(x1515*x1516));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1533 = INT8_MIN;
	int64_t x1534 = 739997LL;
	static int16_t x1535 = -1;
	volatile uint8_t x1536 = 0U;
	static int32_t t43 = -5;

	t43 = ((x1533<x1534)>>(x1535*x1536));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1537 = UINT32_MAX;
	int32_t x1538 = INT32_MAX;
	volatile int32_t x1539 = INT32_MIN;
	uint32_t x1540 = 31031482U;
	volatile int32_t t44 = 38;

	t44 = ((x1537<x1538)>>(x1539*x1540));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1542 = 0;
	int8_t x1543 = 0;
	int8_t x1544 = INT8_MAX;
	int32_t t45 = -199688;

	t45 = ((x1541<x1542)>>(x1543*x1544));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1558 = 23514678959LLU;
	int8_t x1559 = -3;
	static int64_t x1560 = -1LL;
	int32_t t46 = 10;

	t46 = ((x1557<x1558)>>(x1559*x1560));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t t47 = -1;

	t47 = ((x1565<x1566)>>(x1567*x1568));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1609 = INT32_MAX;
	int32_t x1610 = -1;
	int8_t x1611 = -15;
	int8_t x1612 = 0;

	t48 = ((x1609<x1610)>>(x1611*x1612));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1613 = 92607LL;
	uint64_t x1614 = UINT64_MAX;
	static volatile int64_t x1615 = -1LL;
	static volatile int8_t x1616 = -8;

	t49 = ((x1613<x1614)>>(x1615*x1616));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x1693 = 1LLU;
	static int32_t x1695 = INT32_MAX;
	static int8_t x1696 = 0;
	volatile int32_t t50 = -33131;

	t50 = ((x1693<x1694)>>(x1695*x1696));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1822 = 3;
	uint32_t x1823 = UINT32_MAX;
	uint32_t x1824 = UINT32_MAX;

	t51 = ((x1821<x1822)>>(x1823*x1824));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1825 = UINT8_MAX;
	int8_t x1826 = 1;
	uint32_t x1827 = UINT32_MAX;
	volatile uint32_t x1828 = UINT32_MAX;
	volatile int32_t t52 = -144;

	t52 = ((x1825<x1826)>>(x1827*x1828));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1837 = -1101;
	static volatile uint8_t x1839 = UINT8_MAX;
	static uint8_t x1840 = 0U;
	static int32_t t53 = -12;

	t53 = ((x1837<x1838)>>(x1839*x1840));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1873 = INT8_MIN;
	volatile int8_t x1874 = -1;
	int64_t x1875 = INT64_MAX;
	static volatile uint32_t x1876 = 0U;
	static volatile int32_t t54 = 156264;

	t54 = ((x1873<x1874)>>(x1875*x1876));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x1877 = UINT64_MAX;
	int64_t x1878 = -1LL;
	volatile int32_t x1879 = -1;
	uint32_t x1880 = UINT32_MAX;
	volatile int32_t t55 = -211;

	t55 = ((x1877<x1878)>>(x1879*x1880));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1906 = INT8_MIN;
	int8_t x1907 = 3;
	volatile int32_t t56 = 13776;

	t56 = ((x1905<x1906)>>(x1907*x1908));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2025 = 484623470018211563LLU;
	int64_t x2026 = INT64_MIN;
	int8_t x2027 = -3;
	static volatile int32_t t57 = 4348;

	t57 = ((x2025<x2026)>>(x2027*x2028));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2093 = INT16_MIN;
	static int64_t x2094 = INT64_MAX;
	int32_t x2095 = -1;
	volatile int16_t x2096 = -1;
	static int32_t t58 = 241237099;

	t58 = ((x2093<x2094)>>(x2095*x2096));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2129 = INT16_MIN;
	int16_t x2130 = INT16_MIN;
	int8_t x2132 = INT8_MAX;

	t59 = ((x2129<x2130)>>(x2131*x2132));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2165 = INT32_MIN;
	int16_t x2166 = 0;
	int64_t x2168 = INT64_MAX;
	static int32_t t60 = 39084;

	t60 = ((x2165<x2166)>>(x2167*x2168));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2169 = 109427852403LLU;
	uint32_t x2170 = UINT32_MAX;
	int32_t x2171 = -1;
	static int16_t x2172 = -1;
	volatile int32_t t61 = 1;

	t61 = ((x2169<x2170)>>(x2171*x2172));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2265 = 89;
	int64_t x2266 = INT64_MIN;
	int8_t x2267 = -1;
	uint64_t x2268 = UINT64_MAX;
	volatile int32_t t62 = -300;

	t62 = ((x2265<x2266)>>(x2267*x2268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2289 = 727136LLU;
	static volatile int16_t x2291 = INT16_MIN;
	uint8_t x2292 = 0U;
	int32_t t63 = -2025;

	t63 = ((x2289<x2290)>>(x2291*x2292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2385 = INT8_MIN;
	int8_t x2387 = -1;
	static volatile int16_t x2388 = -1;
	static volatile int32_t t64 = -1;

	t64 = ((x2385<x2386)>>(x2387*x2388));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2445 = UINT32_MAX;
	volatile int8_t x2446 = INT8_MIN;
	uint64_t x2447 = UINT64_MAX;
	int64_t x2448 = -1LL;
	volatile int32_t t65 = -32753;

	t65 = ((x2445<x2446)>>(x2447*x2448));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2466 = 7;
	int8_t x2467 = 0;
	volatile int8_t x2468 = -52;
	static volatile int32_t t66 = -1023;

	t66 = ((x2465<x2466)>>(x2467*x2468));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2481 = INT8_MAX;
	int64_t x2482 = INT64_MIN;
	int8_t x2483 = INT8_MIN;
	volatile int32_t t67 = 2438476;

	t67 = ((x2481<x2482)>>(x2483*x2484));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2518 = 73LLU;
	int64_t x2519 = -1LL;
	volatile int64_t x2520 = -1LL;
	int32_t t68 = -499;

	t68 = ((x2517<x2518)>>(x2519*x2520));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2521 = INT16_MIN;
	int64_t x2522 = 4249017855027083LL;
	volatile uint8_t x2523 = 2U;
	volatile uint8_t x2524 = 2U;
	volatile int32_t t69 = -2344;

	t69 = ((x2521<x2522)>>(x2523*x2524));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2525 = -14;
	volatile uint32_t x2526 = 433U;
	int8_t x2527 = 1;
	uint8_t x2528 = 0U;
	volatile int32_t t70 = 1176229;

	t70 = ((x2525<x2526)>>(x2527*x2528));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x2533 = INT16_MAX;
	int8_t x2535 = 0;
	volatile uint64_t x2536 = UINT64_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x2533<x2534)>>(x2535*x2536));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2537 = 72U;
	uint32_t x2538 = UINT32_MAX;
	int32_t x2539 = 0;
	int32_t x2540 = -4;
	volatile int32_t t72 = 5024;

	t72 = ((x2537<x2538)>>(x2539*x2540));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2577 = INT8_MIN;
	uint8_t x2578 = 3U;
	int8_t x2579 = 1;
	volatile uint8_t x2580 = 4U;
	int32_t t73 = -3212291;

	t73 = ((x2577<x2578)>>(x2579*x2580));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2585 = 497891;
	int32_t x2586 = -1;
	static int8_t x2587 = -31;
	static int32_t x2588 = -1;
	static int32_t t74 = 14083;

	t74 = ((x2585<x2586)>>(x2587*x2588));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2593 = INT8_MIN;
	int64_t x2594 = INT64_MIN;
	uint8_t x2595 = 0U;
	int8_t x2596 = INT8_MAX;
	int32_t t75 = -5;

	t75 = ((x2593<x2594)>>(x2595*x2596));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2597 = 4;
	int32_t x2599 = -6;
	volatile int64_t x2600 = -1LL;
	volatile int32_t t76 = -913069571;

	t76 = ((x2597<x2598)>>(x2599*x2600));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2645 = -4;
	int32_t x2647 = 0;
	volatile int64_t x2648 = 1256LL;

	t77 = ((x2645<x2646)>>(x2647*x2648));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2653 = -2;
	uint64_t x2654 = 16321LLU;
	static volatile int32_t t78 = 466555582;

	t78 = ((x2653<x2654)>>(x2655*x2656));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2689 = 31359LLU;
	uint32_t x2690 = 60U;
	volatile int16_t x2691 = -14;
	static int32_t x2692 = -1;
	volatile int32_t t79 = 592680;

	t79 = ((x2689<x2690)>>(x2691*x2692));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2693 = -1;
	int64_t x2694 = 5868943658LL;
	uint16_t x2695 = 0U;
	int32_t t80 = -21594;

	t80 = ((x2693<x2694)>>(x2695*x2696));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x2701 = 1;
	volatile int32_t x2703 = -14;
	volatile uint64_t x2704 = UINT64_MAX;
	volatile int32_t t81 = 49863574;

	t81 = ((x2701<x2702)>>(x2703*x2704));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2749 = INT32_MIN;
	static int64_t x2750 = INT64_MIN;
	uint16_t x2751 = 3689U;
	uint16_t x2752 = 0U;

	t82 = ((x2749<x2750)>>(x2751*x2752));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x2770 = 3LLU;
	int16_t x2771 = INT16_MIN;
	uint8_t x2772 = 0U;
	volatile int32_t t83 = -22;

	t83 = ((x2769<x2770)>>(x2771*x2772));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2778 = 1U;
	volatile int32_t x2779 = 548053824;
	int8_t x2780 = 0;
	volatile int32_t t84 = -3;

	t84 = ((x2777<x2778)>>(x2779*x2780));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2821 = INT8_MIN;
	uint16_t x2822 = 3670U;
	volatile int32_t x2823 = -862;
	uint8_t x2824 = 0U;
	static volatile int32_t t85 = 517371;

	t85 = ((x2821<x2822)>>(x2823*x2824));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x2853 = INT32_MIN;
	volatile int32_t x2854 = INT32_MIN;
	int16_t x2856 = -1;

	t86 = ((x2853<x2854)>>(x2855*x2856));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2981 = UINT16_MAX;
	volatile int64_t x2982 = -27973130999441995LL;
	uint32_t x2983 = UINT32_MAX;
	static volatile int8_t x2984 = 0;
	static volatile int32_t t87 = -154178858;

	t87 = ((x2981<x2982)>>(x2983*x2984));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3039 = 0U;
	int32_t t88 = 649114;

	t88 = ((x3037<x3038)>>(x3039*x3040));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3045 = 56;
	int32_t x3046 = INT32_MAX;
	int8_t x3047 = 1;
	int32_t x3048 = 1;
	int32_t t89 = -935;

	t89 = ((x3045<x3046)>>(x3047*x3048));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3113 = 13;
	int32_t x3114 = -1;
	static int8_t x3115 = INT8_MAX;
	uint8_t x3116 = 0U;
	static volatile int32_t t90 = -669658;

	t90 = ((x3113<x3114)>>(x3115*x3116));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3121 = 23U;
	int16_t x3122 = INT16_MIN;
	volatile uint8_t x3124 = 0U;
	static volatile int32_t t91 = -1;

	t91 = ((x3121<x3122)>>(x3123*x3124));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3141 = INT8_MIN;
	int64_t x3142 = INT64_MAX;
	static int32_t x3143 = INT32_MIN;
	volatile uint32_t x3144 = 46U;
	int32_t t92 = 234644026;

	t92 = ((x3141<x3142)>>(x3143*x3144));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x3188 = INT64_MIN;
	int32_t t93 = -1;

	t93 = ((x3185<x3186)>>(x3187*x3188));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3189 = 16U;
	int32_t x3190 = INT32_MIN;
	int16_t x3192 = -1;

	t94 = ((x3189<x3190)>>(x3191*x3192));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x3217 = 15U;
	volatile int64_t x3218 = -551LL;
	int16_t x3219 = -3;
	int64_t x3220 = -1LL;
	volatile int32_t t95 = 1036179932;

	t95 = ((x3217<x3218)>>(x3219*x3220));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3293 = -1022757;
	int8_t x3294 = INT8_MAX;
	volatile int32_t x3295 = -1;
	static int8_t x3296 = 0;
	int32_t t96 = -396963;

	t96 = ((x3293<x3294)>>(x3295*x3296));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3305 = INT16_MIN;
	int8_t x3306 = INT8_MIN;
	volatile uint8_t x3307 = 1U;
	int32_t t97 = -403320241;

	t97 = ((x3305<x3306)>>(x3307*x3308));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3349 = -1;
	int32_t x3350 = -188760633;
	uint64_t x3352 = 82419054LLU;
	volatile int32_t t98 = 493003855;

	t98 = ((x3349<x3350)>>(x3351*x3352));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3365 = -1;
	int8_t x3366 = INT8_MIN;
	uint64_t x3367 = 1604191377587248LLU;
	static int64_t x3368 = INT64_MIN;
	volatile int32_t t99 = 1228;

	t99 = ((x3365<x3366)>>(x3367*x3368));

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

