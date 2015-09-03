#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x53 = UINT32_MAX;
int8_t x65 = 17;
static int64_t t1 = 141832915628494215LL;
uint64_t x97 = 6480738547062823LLU;
int32_t x104 = -1;
volatile int64_t t3 = -195LL;
int32_t x263 = -1;
static volatile int64_t x264 = -1LL;
volatile int64_t t4 = 251243857LL;
uint64_t x345 = 511297225200546LLU;
volatile uint32_t x346 = 49U;
int8_t x501 = 1;
uint8_t x559 = UINT8_MAX;
volatile int32_t t13 = 18;
int64_t t14 = -1875451LL;
volatile int32_t x746 = 1;
int64_t x748 = INT64_MAX;
int64_t t15 = -459542LL;
int16_t x808 = -28;
static uint64_t t17 = 1885329911809703LLU;
int64_t x908 = 227806382LL;
uint32_t x965 = 1199U;
static uint8_t x998 = 3U;
volatile uint8_t x1054 = 3U;
volatile int64_t t22 = 5578485272689543LL;
uint64_t x1067 = UINT64_MAX;
uint8_t x1087 = UINT8_MAX;
volatile uint16_t x1178 = 9U;
int8_t x1262 = 0;
volatile int64_t x1263 = INT64_MIN;
static int8_t x1321 = 7;
int64_t x1351 = 31347880LL;
uint8_t x1367 = UINT8_MAX;
int64_t x1368 = INT64_MIN;
static volatile uint64_t t31 = 368517353176361LLU;
volatile uint64_t t32 = 4687LLU;
static uint16_t x1422 = 3U;
int8_t x1423 = -2;
static int64_t x1424 = -1LL;
static uint16_t x1527 = UINT16_MAX;
uint32_t t37 = 5613U;
uint32_t x1622 = 3U;
static volatile int16_t x1663 = -1;
int16_t x1699 = INT16_MIN;
volatile uint8_t x1710 = 5U;
uint32_t x1730 = 11U;
volatile int64_t x1732 = -1LL;
uint64_t t43 = 1136091010LLU;
int32_t x1739 = -1;
uint64_t t45 = 73887525034645802LLU;
static int64_t t46 = INT64_MAX;
static uint64_t x1877 = 6314574410119806LLU;
static int16_t x1993 = 11;
volatile int8_t x1996 = INT8_MAX;
int64_t x2209 = INT64_MAX;
uint8_t x2212 = UINT8_MAX;
volatile uint32_t x2235 = 191U;
volatile uint8_t x2236 = 49U;
int8_t x2294 = 5;
int64_t x2296 = 435567968457438329LL;
static uint32_t x2305 = UINT32_MAX;
volatile uint16_t x2380 = 41U;
volatile int16_t x2415 = INT16_MIN;
volatile int64_t t57 = 1398854227LL;
uint8_t x2439 = 22U;
volatile int8_t x2566 = 3;
int32_t x2568 = -1;
int64_t x2572 = INT64_MAX;
static volatile int64_t t62 = 221559949942LL;
int32_t t63 = 65;
uint8_t x2730 = 7U;
static int32_t t64 = -292624;
volatile uint64_t x2829 = 6284231765449LLU;
uint8_t x2901 = UINT8_MAX;
uint8_t x2902 = 1U;
uint16_t x2918 = 30U;
volatile int32_t x2919 = -698240841;
int64_t t67 = 57262LL;
uint16_t x2964 = 136U;
static int32_t x2999 = -52;
int64_t x3155 = -266LL;
int64_t t70 = -177781768LL;
uint16_t x3190 = 3U;
int16_t x3476 = INT16_MIN;
static int16_t x3492 = -63;
volatile uint32_t t76 = 2994572U;
uint64_t x3546 = 15LLU;
static uint16_t x3548 = 38U;
volatile int16_t x3597 = 35;
uint64_t x3600 = 13233LLU;
volatile uint64_t t78 = 3305699642827723LLU;
int64_t x3708 = INT64_MAX;
volatile int32_t t83 = 1018;
int8_t x3928 = -62;
static int16_t x4103 = -1;
int64_t x4235 = -13396486427778LL;
static int64_t t88 = -346LL;
volatile uint64_t t89 = 6175384481397663222LLU;
volatile int16_t x4492 = -1;
int32_t t90 = -128;
int64_t x4548 = 1620587LL;
static volatile uint64_t t91 = 3752714806912733LLU;
static volatile uint64_t x4677 = UINT64_MAX;
volatile int64_t t93 = 1084044456761471LL;
uint8_t x4710 = 6U;
int32_t x4711 = INT32_MIN;
int64_t x4760 = INT64_MIN;
static int32_t x4810 = 1;
uint64_t x4869 = 2940769160830326892LLU;
volatile uint64_t t99 = 1464LLU;


void f0(void) {
	int32_t x54 = 0;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 2U;
	uint32_t t0 = 18326U;

	t0 = ((x53>>x54)-(x55%x56));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x66 = 2U;
	int64_t x67 = -1866457830972900703LL;
	volatile int64_t x68 = INT64_MIN;

	t1 = ((x65>>x66)-(x67%x68));

	if (t1 != 1866457830972900707LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x98 = 1;
	int16_t x99 = -11660;
	volatile int32_t x100 = INT32_MIN;
	uint64_t t2 = 1411209LLU;

	t2 = ((x97>>x98)-(x99%x100));

	if (t2 != 3240369273543071LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x101 = 5U;
	uint8_t x102 = 1U;
	static int64_t x103 = 1692411549616993LL;

	t3 = ((x101>>x102)-(x103%x104));

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x262 = 25U;

	t4 = ((x261>>x262)-(x263%x264));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x329 = 3;
	static int32_t x330 = 8;
	uint16_t x331 = 7U;
	uint8_t x332 = UINT8_MAX;
	static int32_t t5 = -293340;

	t5 = ((x329>>x330)-(x331%x332));

	if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x347 = UINT16_MAX;
	volatile int8_t x348 = INT8_MAX;
	uint64_t t6 = 14993804968272LLU;

	t6 = ((x345>>x346)-(x347%x348));

	if (t6 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x393 = 443970LLU;
	uint32_t x394 = 1U;
	uint16_t x395 = 7U;
	volatile uint8_t x396 = UINT8_MAX;
	volatile uint64_t t7 = 1285419LLU;

	t7 = ((x393>>x394)-(x395%x396));

	if (t7 != 221978LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x429 = INT32_MAX;
	int8_t x430 = 30;
	int16_t x431 = -1;
	uint64_t x432 = 226770648LLU;
	static volatile uint64_t t8 = 538829377694LLU;

	t8 = ((x429>>x430)-(x431%x432));

	if (t8 != 18446744073608283266LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x457 = 3;
	int8_t x458 = 0;
	static int32_t x459 = INT32_MAX;
	static int8_t x460 = INT8_MIN;
	int32_t t9 = 29654394;

	t9 = ((x457>>x458)-(x459%x460));

	if (t9 != -124) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x481 = INT64_MAX;
	uint16_t x482 = 4U;
	int8_t x483 = -1;
	volatile int16_t x484 = 67;
	int64_t t10 = -240LL;

	t10 = ((x481>>x482)-(x483%x484));

	if (t10 != 576460752303423488LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x502 = 7U;
	volatile int16_t x503 = -8059;
	volatile int32_t x504 = -846;
	volatile int32_t t11 = 19154;

	t11 = ((x501>>x502)-(x503%x504));

	if (t11 != 445) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x521 = INT8_MAX;
	static volatile uint8_t x522 = 9U;
	int16_t x523 = 32;
	volatile uint8_t x524 = 8U;
	int32_t t12 = -50230113;

	t12 = ((x521>>x522)-(x523%x524));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x557 = 55;
	uint8_t x558 = 1U;
	int8_t x560 = INT8_MIN;

	t13 = ((x557>>x558)-(x559%x560));

	if (t13 != -100) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x605 = UINT8_MAX;
	static uint16_t x606 = 3U;
	uint32_t x607 = 1924186141U;
	int64_t x608 = INT64_MIN;

	t14 = ((x605>>x606)-(x607%x608));

	if (t14 != -1924186110LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x745 = INT64_MAX;
	uint8_t x747 = UINT8_MAX;

	t15 = ((x745>>x746)-(x747%x748));

	if (t15 != 4611686018427387648LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x805 = UINT32_MAX;
	int8_t x806 = 3;
	int16_t x807 = -1;
	volatile uint32_t t16 = 29067078U;

	t16 = ((x805>>x806)-(x807%x808));

	if (t16 != 536870912U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x809 = UINT8_MAX;
	uint16_t x810 = 16U;
	uint8_t x811 = 2U;
	volatile uint64_t x812 = 9767151977850232LLU;

	t17 = ((x809>>x810)-(x811%x812));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x877 = 479164554901LLU;
	volatile int16_t x878 = 1;
	int64_t x879 = INT64_MAX;
	volatile uint32_t x880 = 10U;
	volatile uint64_t t18 = 3LLU;

	t18 = ((x877>>x878)-(x879%x880));

	if (t18 != 239582277443LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x905 = 20588575200317LLU;
	int16_t x906 = 29;
	int64_t x907 = 898211LL;
	uint64_t t19 = 6099663667900481671LLU;

	t19 = ((x905>>x906)-(x907%x908));

	if (t19 != 18446744073708691754LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x966 = 15U;
	volatile int32_t x967 = INT32_MIN;
	static volatile uint64_t x968 = 150168037LLU;
	uint64_t t20 = 128118492895507LLU;

	t20 = ((x965>>x966)-(x967%x968));

	if (t20 != 18446744073569475613LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x997 = UINT16_MAX;
	uint8_t x999 = 15U;
	uint8_t x1000 = 2U;
	volatile int32_t t21 = -300;

	t21 = ((x997>>x998)-(x999%x1000));

	if (t21 != 8190) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1053 = INT64_MAX;
	int64_t x1055 = INT64_MIN;
	volatile uint32_t x1056 = 1862319312U;

	t22 = ((x1053>>x1054)-(x1055%x1056));

	if (t22 != 1152921505794436799LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1065 = 2U;
	volatile uint8_t x1066 = 29U;
	int8_t x1068 = INT8_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = ((x1065>>x1066)-(x1067%x1068));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1085 = 302793LL;
	static int8_t x1086 = 1;
	int8_t x1088 = -41;
	static int64_t t24 = -2093357581138311975LL;

	t24 = ((x1085>>x1086)-(x1087%x1088));

	if (t24 != 151387LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1097 = UINT64_MAX;
	uint32_t x1098 = 14U;
	int32_t x1099 = -1;
	static uint64_t x1100 = 6536326LLU;
	volatile uint64_t t25 = 752406043770255976LLU;

	t25 = ((x1097>>x1098)-(x1099%x1100));

	if (t25 != 1125899903439234LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1129 = INT16_MAX;
	uint8_t x1130 = 0U;
	int64_t x1131 = -1LL;
	static int64_t x1132 = INT64_MIN;
	volatile int64_t t26 = 293733400725644LL;

	t26 = ((x1129>>x1130)-(x1131%x1132));

	if (t26 != 32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1177 = INT32_MAX;
	int16_t x1179 = -25;
	static volatile int32_t x1180 = -966831156;
	int32_t t27 = 631336;

	t27 = ((x1177>>x1178)-(x1179%x1180));

	if (t27 != 4194328) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1261 = INT32_MAX;
	int64_t x1264 = 322178081175LL;
	int64_t t28 = 1027240634522LL;

	t28 = ((x1261>>x1262)-(x1263%x1264));

	if (t28 != 261247829130LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1322 = 3U;
	int16_t x1323 = INT16_MAX;
	int32_t x1324 = INT32_MAX;
	int32_t t29 = 186;

	t29 = ((x1321>>x1322)-(x1323%x1324));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1349 = 2;
	int8_t x1350 = 0;
	int16_t x1352 = INT16_MIN;
	volatile int64_t t30 = -882LL;

	t30 = ((x1349>>x1350)-(x1351%x1352));

	if (t30 != -21670LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1365 = 1LLU;
	uint8_t x1366 = 23U;

	t31 = ((x1365>>x1366)-(x1367%x1368));

	if (t31 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1393 = 223788072854656451LLU;
	uint8_t x1394 = 51U;
	static int32_t x1395 = 1254;
	static volatile int32_t x1396 = -3;

	t32 = ((x1393>>x1394)-(x1395%x1396));

	if (t32 != 99LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1409 = 14587914504649LL;
	static volatile uint64_t x1410 = 0LLU;
	static uint64_t x1411 = 15155LLU;
	uint32_t x1412 = UINT32_MAX;
	static uint64_t t33 = 119366917292LLU;

	t33 = ((x1409>>x1410)-(x1411%x1412));

	if (t33 != 14587914489494LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1421 = INT32_MAX;
	volatile int64_t t34 = -1142LL;

	t34 = ((x1421>>x1422)-(x1423%x1424));

	if (t34 != 268435455LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1477 = 582321LLU;
	volatile uint8_t x1478 = 3U;
	int16_t x1479 = -11;
	int32_t x1480 = -1;
	uint64_t t35 = 123235325LLU;

	t35 = ((x1477>>x1478)-(x1479%x1480));

	if (t35 != 72790LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1525 = INT8_MAX;
	uint8_t x1526 = 0U;
	volatile int64_t x1528 = 31650497LL;
	volatile int64_t t36 = -2333LL;

	t36 = ((x1525>>x1526)-(x1527%x1528));

	if (t36 != -65408LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1537 = 1U;
	uint16_t x1538 = 28U;
	uint8_t x1539 = UINT8_MAX;
	uint8_t x1540 = 24U;

	t37 = ((x1537>>x1538)-(x1539%x1540));

	if (t37 != 4294967281U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1621 = 5153U;
	volatile int64_t x1623 = INT64_MAX;
	int32_t x1624 = -27551121;
	static int64_t t38 = 0LL;

	t38 = ((x1621>>x1622)-(x1623%x1624));

	if (t38 != -4255316LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1661 = 3487925U;
	int32_t x1662 = 1;
	int64_t x1664 = INT64_MAX;
	int64_t t39 = -1391942660416989LL;

	t39 = ((x1661>>x1662)-(x1663%x1664));

	if (t39 != 1743963LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1697 = INT8_MAX;
	uint8_t x1698 = 1U;
	int8_t x1700 = INT8_MIN;
	volatile int32_t t40 = 4975704;

	t40 = ((x1697>>x1698)-(x1699%x1700));

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1709 = 1973;
	static int8_t x1711 = INT8_MIN;
	volatile uint16_t x1712 = 6815U;
	volatile int32_t t41 = 7207724;

	t41 = ((x1709>>x1710)-(x1711%x1712));

	if (t41 != 189) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1729 = 21031130U;
	int32_t x1731 = INT32_MAX;
	int64_t t42 = 3819865858101573LL;

	t42 = ((x1729>>x1730)-(x1731%x1732));

	if (t42 != 10269LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1733 = INT16_MAX;
	uint8_t x1734 = 5U;
	int32_t x1735 = 8632198;
	static uint64_t x1736 = 138543466521075637LLU;

	t43 = ((x1733>>x1734)-(x1735%x1736));

	if (t43 != 18446744073700920441LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1737 = 25645893;
	uint8_t x1738 = 11U;
	uint8_t x1740 = 59U;
	static int32_t t44 = -147203745;

	t44 = ((x1737>>x1738)-(x1739%x1740));

	if (t44 != 12523) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1773 = INT8_MAX;
	static uint8_t x1774 = 1U;
	int32_t x1775 = INT32_MIN;
	uint64_t x1776 = 124386583308161658LLU;

	t45 = ((x1773>>x1774)-(x1775%x1776));

	if (t45 != 18409214331755409095LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1817 = INT64_MAX;
	int16_t x1818 = 0;
	volatile int64_t x1819 = -1LL;
	int16_t x1820 = -1;

	t46 = ((x1817>>x1818)-(x1819%x1820));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1878 = 24U;
	int64_t x1879 = -1LL;
	static int8_t x1880 = INT8_MAX;
	uint64_t t47 = 3LLU;

	t47 = ((x1877>>x1878)-(x1879%x1880));

	if (t47 != 376377965LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1921 = 47282426U;
	volatile int8_t x1922 = 0;
	int16_t x1923 = INT16_MIN;
	int16_t x1924 = INT16_MAX;
	static volatile uint32_t t48 = 1U;

	t48 = ((x1921>>x1922)-(x1923%x1924));

	if (t48 != 47282427U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1994 = 16LL;
	volatile uint64_t x1995 = UINT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x1993>>x1994)-(x1995%x1996));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2193 = INT64_MAX;
	int8_t x2194 = 1;
	uint64_t x2195 = 105651762789814LLU;
	int16_t x2196 = -26;
	volatile uint64_t t50 = 850931485994052101LLU;

	t50 = ((x2193>>x2194)-(x2195%x2196));

	if (t50 != 4611580366664598089LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2210 = 1;
	uint64_t x2211 = 1471430532LLU;
	volatile uint64_t t51 = 107995016137636401LLU;

	t51 = ((x2209>>x2210)-(x2211%x2212));

	if (t51 != 4611686018427387696LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2233 = UINT64_MAX;
	static int64_t x2234 = 0LL;
	volatile uint64_t t52 = 17675348303549LLU;

	t52 = ((x2233>>x2234)-(x2235%x2236));

	if (t52 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2293 = 408136429;
	int8_t x2295 = 17;
	volatile int64_t t53 = -111992500238LL;

	t53 = ((x2293>>x2294)-(x2295%x2296));

	if (t53 != 12754246LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2306 = 1U;
	uint32_t x2307 = UINT32_MAX;
	int64_t x2308 = 610LL;
	static int64_t t54 = 6742LL;

	t54 = ((x2305>>x2306)-(x2307%x2308));

	if (t54 != 2147483042LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2357 = 33;
	static int8_t x2358 = 1;
	static int32_t x2359 = -1;
	int32_t x2360 = INT32_MIN;
	int32_t t55 = -44996;

	t55 = ((x2357>>x2358)-(x2359%x2360));

	if (t55 != 17) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2377 = INT64_MAX;
	static uint8_t x2378 = 21U;
	static uint8_t x2379 = 57U;
	int64_t t56 = -51928930164487998LL;

	t56 = ((x2377>>x2378)-(x2379%x2380));

	if (t56 != 4398046511087LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2413 = 0LL;
	static int8_t x2414 = 0;
	int16_t x2416 = INT16_MIN;

	t57 = ((x2413>>x2414)-(x2415%x2416));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2437 = INT16_MAX;
	static int8_t x2438 = 10;
	static int8_t x2440 = -1;
	volatile int32_t t58 = -115499;

	t58 = ((x2437>>x2438)-(x2439%x2440));

	if (t58 != 31) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2561 = INT8_MAX;
	volatile uint8_t x2562 = 0U;
	volatile int64_t x2563 = -222302233320562LL;
	static uint16_t x2564 = 1950U;
	int64_t t59 = 174LL;

	t59 = ((x2561>>x2562)-(x2563%x2564));

	if (t59 != 1289LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2565 = 247863U;
	int8_t x2567 = -4;
	uint32_t t60 = 9475U;

	t60 = ((x2565>>x2566)-(x2567%x2568));

	if (t60 != 30982U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2569 = UINT32_MAX;
	int8_t x2570 = 2;
	static volatile int16_t x2571 = INT16_MIN;
	static int64_t t61 = 84459166537LL;

	t61 = ((x2569>>x2570)-(x2571%x2572));

	if (t61 != 1073774591LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2657 = 0LL;
	static volatile uint8_t x2658 = 7U;
	static int8_t x2659 = INT8_MAX;
	volatile int64_t x2660 = INT64_MAX;

	t62 = ((x2657>>x2658)-(x2659%x2660));

	if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x2705 = INT8_MAX;
	int32_t x2706 = 0;
	static volatile uint8_t x2707 = UINT8_MAX;
	int8_t x2708 = INT8_MAX;

	t63 = ((x2705>>x2706)-(x2707%x2708));

	if (t63 != 126) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2729 = 33U;
	uint8_t x2731 = 26U;
	int16_t x2732 = -107;

	t64 = ((x2729>>x2730)-(x2731%x2732));

	if (t64 != -26) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2830 = 0;
	static volatile int64_t x2831 = INT64_MAX;
	int32_t x2832 = INT32_MAX;
	uint64_t t65 = 1965274561LLU;

	t65 = ((x2829>>x2830)-(x2831%x2832));

	if (t65 != 6284231765448LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2903 = UINT32_MAX;
	uint16_t x2904 = 3524U;
	uint32_t t66 = 427487U;

	t66 = ((x2901>>x2902)-(x2903%x2904));

	if (t66 != 4294966752U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2917 = 18;
	int64_t x2920 = INT64_MIN;

	t67 = ((x2917>>x2918)-(x2919%x2920));

	if (t67 != 698240841LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2961 = 1;
	static int8_t x2962 = 1;
	int64_t x2963 = INT64_MIN;
	int64_t t68 = 0LL;

	t68 = ((x2961>>x2962)-(x2963%x2964));

	if (t68 != 128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2997 = 51;
	uint16_t x2998 = 1U;
	uint16_t x3000 = 24862U;
	int32_t t69 = -953;

	t69 = ((x2997>>x2998)-(x2999%x3000));

	if (t69 != 77) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3153 = 23U;
	int8_t x3154 = 7;
	uint32_t x3156 = 3042807U;

	t70 = ((x3153>>x3154)-(x3155%x3156));

	if (t70 != 266LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3189 = 1U;
	int8_t x3191 = 1;
	int8_t x3192 = -1;
	int32_t t71 = -11526;

	t71 = ((x3189>>x3190)-(x3191%x3192));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3285 = 846340;
	uint8_t x3286 = 1U;
	static uint32_t x3287 = UINT32_MAX;
	static int8_t x3288 = INT8_MIN;
	uint32_t t72 = 4032449U;

	t72 = ((x3285>>x3286)-(x3287%x3288));

	if (t72 != 423043U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3425 = 80U;
	volatile uint16_t x3426 = 10U;
	int16_t x3427 = 10915;
	int16_t x3428 = INT16_MIN;
	volatile uint32_t t73 = 462028U;

	t73 = ((x3425>>x3426)-(x3427%x3428));

	if (t73 != 4294956381U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3465 = 83U;
	uint64_t x3466 = 3LLU;
	static volatile int32_t x3467 = -29556588;
	int64_t x3468 = 782458103697LL;
	int64_t t74 = 3452486LL;

	t74 = ((x3465>>x3466)-(x3467%x3468));

	if (t74 != 29556598LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3473 = 8301513LLU;
	uint8_t x3474 = 50U;
	int64_t x3475 = INT64_MIN;
	uint64_t t75 = 0LLU;

	t75 = ((x3473>>x3474)-(x3475%x3476));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3489 = UINT32_MAX;
	static int32_t x3490 = 1;
	static int32_t x3491 = 1344090;

	t76 = ((x3489>>x3490)-(x3491%x3492));

	if (t76 != 2147483599U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3545 = 0;
	uint16_t x3547 = 181U;
	int32_t t77 = 48596;

	t77 = ((x3545>>x3546)-(x3547%x3548));

	if (t77 != -29) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3598 = 0;
	int16_t x3599 = INT16_MIN;

	t78 = ((x3597>>x3598)-(x3599%x3600));

	if (t78 != 18446744073709551073LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3705 = 851748648889LL;
	volatile uint8_t x3706 = 1U;
	int8_t x3707 = INT8_MAX;
	static volatile int64_t t79 = -85055953LL;

	t79 = ((x3705>>x3706)-(x3707%x3708));

	if (t79 != 425874324317LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3725 = UINT64_MAX;
	static uint16_t x3726 = 50U;
	volatile int16_t x3727 = INT16_MIN;
	uint8_t x3728 = 13U;
	volatile uint64_t t80 = 11LLU;

	t80 = ((x3725>>x3726)-(x3727%x3728));

	if (t80 != 16391LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3737 = UINT64_MAX;
	uint32_t x3738 = 22U;
	static int64_t x3739 = INT64_MAX;
	int64_t x3740 = -829LL;
	volatile uint64_t t81 = 1279307972516176LLU;

	t81 = ((x3737>>x3738)-(x3739%x3740));

	if (t81 != 4398046510494LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3753 = 2603U;
	volatile int8_t x3754 = 3;
	uint64_t x3755 = UINT64_MAX;
	uint16_t x3756 = 106U;
	uint64_t t82 = 44LLU;

	t82 = ((x3753>>x3754)-(x3755%x3756));

	if (t82 != 258LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3785 = 23;
	static uint64_t x3786 = 17LLU;
	static uint8_t x3787 = UINT8_MAX;
	static int16_t x3788 = INT16_MAX;

	t83 = ((x3785>>x3786)-(x3787%x3788));

	if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3925 = UINT32_MAX;
	static volatile int16_t x3926 = 1;
	int8_t x3927 = -1;
	volatile uint32_t t84 = 1530140U;

	t84 = ((x3925>>x3926)-(x3927%x3928));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4057 = 3LLU;
	uint32_t x4058 = 6U;
	static int64_t x4059 = -1LL;
	int8_t x4060 = INT8_MAX;
	volatile uint64_t t85 = 6869387LLU;

	t85 = ((x4057>>x4058)-(x4059%x4060));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4101 = 1604U;
	volatile uint32_t x4102 = 0U;
	int64_t x4104 = -62LL;
	int64_t t86 = 25LL;

	t86 = ((x4101>>x4102)-(x4103%x4104));

	if (t86 != 1605LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4233 = UINT64_MAX;
	int8_t x4234 = 0;
	static uint64_t x4236 = UINT64_MAX;
	volatile uint64_t t87 = 3LLU;

	t87 = ((x4233>>x4234)-(x4235%x4236));

	if (t87 != 13396486427777LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4273 = 1107U;
	uint8_t x4274 = 1U;
	int64_t x4275 = -181277211827LL;
	int32_t x4276 = -1;

	t88 = ((x4273>>x4274)-(x4275%x4276));

	if (t88 != 553LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4341 = UINT64_MAX;
	static volatile int8_t x4342 = 0;
	uint16_t x4343 = 3U;
	int8_t x4344 = INT8_MIN;

	t89 = ((x4341>>x4342)-(x4343%x4344));

	if (t89 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4489 = 12U;
	static int32_t x4490 = 1;
	static int8_t x4491 = -1;

	t90 = ((x4489>>x4490)-(x4491%x4492));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4545 = 6U;
	int16_t x4546 = 5;
	volatile uint64_t x4547 = UINT64_MAX;

	t91 = ((x4545>>x4546)-(x4547%x4548));

	if (t91 != 18446744073709250932LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x4678 = 16U;
	int16_t x4679 = INT16_MIN;
	static uint8_t x4680 = 25U;
	uint64_t t92 = 852LLU;

	t92 = ((x4677>>x4678)-(x4679%x4680));

	if (t92 != 281474976710673LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x4697 = 24814U;
	uint8_t x4698 = 28U;
	int64_t x4699 = -391471LL;
	volatile uint8_t x4700 = 10U;

	t93 = ((x4697>>x4698)-(x4699%x4700));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4709 = 2U;
	int32_t x4712 = INT32_MIN;
	static volatile int32_t t94 = -3;

	t94 = ((x4709>>x4710)-(x4711%x4712));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x4745 = 29;
	int8_t x4746 = 1;
	static uint16_t x4747 = 8123U;
	static uint64_t x4748 = 1637236041LLU;
	uint64_t t95 = 3484086236048LLU;

	t95 = ((x4745>>x4746)-(x4747%x4748));

	if (t95 != 18446744073709543507LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4757 = UINT8_MAX;
	int8_t x4758 = 0;
	int16_t x4759 = -2882;
	volatile int64_t t96 = 2072077LL;

	t96 = ((x4757>>x4758)-(x4759%x4760));

	if (t96 != 3137LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x4801 = 1U;
	static uint8_t x4802 = 7U;
	volatile uint16_t x4803 = 12U;
	uint16_t x4804 = UINT16_MAX;
	int32_t t97 = 18608241;

	t97 = ((x4801>>x4802)-(x4803%x4804));

	if (t97 != -12) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4809 = 14U;
	int64_t x4811 = INT64_MIN;
	int32_t x4812 = -20;
	int64_t t98 = -18751741LL;

	t98 = ((x4809>>x4810)-(x4811%x4812));

	if (t98 != 15LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4870 = 1;
	static uint16_t x4871 = 324U;
	volatile int32_t x4872 = -1401501;

	t99 = ((x4869>>x4870)-(x4871%x4872));

	if (t99 != 1470384580415163122LLU) { NG(); } else { ; }
	
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

