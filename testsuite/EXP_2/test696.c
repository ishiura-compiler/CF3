#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 3U;
int32_t t0 = -12819205;
int8_t x114 = INT8_MIN;
volatile uint64_t t3 = 1905768LLU;
uint8_t x196 = 2U;
volatile int64_t t4 = -25332973LL;
uint32_t x220 = 18U;
uint64_t t5 = 2492906045929599411LLU;
static volatile int16_t x244 = 4;
int16_t x251 = INT16_MAX;
uint64_t x287 = 7725653111LLU;
static volatile uint64_t t8 = 403LLU;
volatile int64_t t9 = 6109295LL;
int16_t x318 = -1;
int64_t x319 = INT64_MIN;
volatile int32_t x340 = 21;
uint32_t x353 = UINT32_MAX;
int64_t x355 = -1LL;
int32_t x426 = INT32_MIN;
int16_t x438 = INT16_MIN;
int32_t t14 = -4128326;
uint8_t x536 = 1U;
int16_t x590 = -1544;
volatile uint32_t x649 = 725U;
volatile int16_t x888 = 0;
int32_t t21 = -84325019;
int32_t t22 = 13604830;
uint64_t t23 = 2775377773LLU;
static volatile uint16_t x1044 = 3U;
int32_t x1065 = 143;
uint16_t x1162 = UINT16_MAX;
uint64_t x1250 = UINT64_MAX;
uint16_t x1267 = UINT16_MAX;
static int32_t t31 = 2940206;
static int32_t x1325 = INT32_MIN;
int64_t x1370 = INT64_MIN;
int8_t x1372 = 1;
static uint32_t t36 = 880184U;
volatile int32_t x1437 = -1;
static uint64_t x1482 = UINT64_MAX;
int64_t x1483 = -8754481LL;
int64_t x1487 = INT64_MIN;
uint64_t x1534 = 7LLU;
static uint32_t x1567 = 34688U;
uint8_t x1568 = 0U;
static int8_t x1579 = 1;
int64_t x1642 = -303381216589813692LL;
int64_t t45 = -511582263LL;
volatile int16_t x1729 = -6;
uint8_t x1732 = 16U;
volatile uint64_t t49 = 141844153180966LLU;
int8_t x1789 = -7;
uint8_t x1792 = 53U;
static volatile int32_t x1806 = INT32_MIN;
static volatile uint8_t x1808 = 0U;
int16_t x1949 = -1;
static uint16_t x1952 = 0U;
uint8_t x1961 = 1U;
volatile int32_t x2082 = -7076;
volatile uint8_t x2084 = 0U;
uint64_t t56 = 1076038286212LLU;
uint16_t x2169 = 14U;
int64_t x2181 = INT64_MAX;
uint16_t x2184 = 11U;
int8_t x2199 = INT8_MIN;
static uint64_t x2200 = 62LLU;
int16_t x2362 = INT16_MIN;
volatile int16_t x2363 = INT16_MIN;
volatile uint64_t t62 = 7LLU;
uint64_t x2486 = 6216780941183110LLU;
uint8_t x2488 = 14U;
static uint16_t x2505 = 11U;
uint32_t x2547 = 15044U;
volatile uint64_t x2548 = 0LLU;
int8_t x2636 = 24;
static int64_t x2643 = 2235123116966253LL;
uint8_t x2656 = 13U;
volatile uint64_t t71 = 4050380102020008970LLU;
uint8_t x2663 = UINT8_MAX;
volatile uint32_t t73 = 1045964U;
uint32_t t74 = 102U;
uint16_t x2889 = UINT16_MAX;
static uint64_t x2892 = 0LLU;
static uint64_t x2931 = 204817508LLU;
int8_t x2932 = 9;
int16_t x3011 = INT16_MAX;
uint8_t x3012 = 1U;
static uint8_t x3036 = 33U;
int8_t x3037 = INT8_MAX;
uint64_t x3039 = 197020508778965LLU;
int16_t x3040 = 1;
volatile uint64_t x3131 = 7LLU;
volatile int8_t x3132 = 7;
uint64_t x3204 = 38LLU;
static volatile int64_t t89 = -6488430737LL;
int8_t x3243 = -1;
uint32_t x3244 = 10U;
volatile int64_t t90 = 7942701347LL;
uint64_t x3282 = 282196LLU;
uint8_t x3284 = 61U;
int64_t x3321 = INT64_MIN;
uint64_t x3322 = 382LLU;
uint64_t t93 = 1056758266348LLU;
volatile uint64_t t94 = 295732159785242LLU;
volatile int64_t x3469 = INT64_MAX;
int32_t x3470 = 248303;
int64_t x3471 = INT64_MAX;
int64_t x3590 = -1LL;


void f0(void) {
	uint16_t x9 = UINT16_MAX;
	static uint8_t x10 = 1U;
	int16_t x11 = INT16_MAX;

	t0 = ((x9-(x10%x11))>>x12);

	if (t0 != 8191) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = UINT32_MAX;
	volatile uint32_t x22 = 12194090U;
	volatile uint8_t x23 = UINT8_MAX;
	static int16_t x24 = 0;
	static uint32_t t1 = 109U;

	t1 = ((x21-(x22%x23))>>x24);

	if (t1 != 4294967050U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x113 = 67U;
	int32_t x115 = -1;
	volatile int16_t x116 = 3;
	static volatile uint32_t t2 = 18562245U;

	t2 = ((x113-(x114%x115))>>x116);

	if (t2 != 8U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x133 = 13504977288LLU;
	uint64_t x134 = UINT64_MAX;
	int8_t x135 = 15;
	int8_t x136 = 8;

	t3 = ((x133-(x134%x135))>>x136);

	if (t3 != 52753817LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;

	t4 = ((x193-(x194%x195))>>x196);

	if (t4 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x217 = 0U;
	volatile uint64_t x218 = 384837008789LLU;
	static int64_t x219 = INT64_MIN;

	t5 = ((x217-(x218%x219))>>x220);

	if (t5 != 70368742709627LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x241 = 0U;
	int8_t x242 = -3;
	int64_t x243 = INT64_MAX;
	volatile int64_t t6 = 30LL;

	t6 = ((x241-(x242%x243))>>x244);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x249 = INT32_MIN;
	static uint32_t x250 = 382U;
	int8_t x252 = 0;
	uint32_t t7 = 80U;

	t7 = ((x249-(x250%x251))>>x252);

	if (t7 != 2147483266U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 1508U;
	uint8_t x288 = 46U;

	t8 = ((x285-(x286%x287))>>x288);

	if (t8 != 262143LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x301 = 7105082635LL;
	static int32_t x302 = -193693;
	int16_t x303 = INT16_MIN;
	static volatile uint8_t x304 = 1U;

	t9 = ((x301-(x302%x303))>>x304);

	if (t9 != 3552556244LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x317 = 3U;
	uint16_t x320 = 0U;
	static volatile int64_t t10 = 500649LL;

	t10 = ((x317-(x318%x319))>>x320);

	if (t10 != 4LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x337 = 52647U;
	volatile int8_t x338 = -1;
	int32_t x339 = INT32_MIN;
	volatile uint32_t t11 = 59U;

	t11 = ((x337-(x338%x339))>>x340);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x354 = 2U;
	int8_t x356 = 0;
	static int64_t t12 = 20832LL;

	t12 = ((x353-(x354%x355))>>x356);

	if (t12 != 4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x425 = -1LL;
	uint64_t x427 = 355173155207741LLU;
	uint8_t x428 = 0U;
	uint64_t t13 = 90961890536LLU;

	t13 = ((x425-(x426%x427))>>x428);

	if (t13 != 18446628164171927964LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x437 = INT32_MAX;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = 1U;

	t14 = ((x437-(x438%x439))>>x440);

	if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x533 = UINT16_MAX;
	volatile int16_t x534 = INT16_MIN;
	static int8_t x535 = 7;
	volatile int32_t t15 = 166834;

	t15 = ((x533-(x534%x535))>>x536);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x589 = -21LL;
	int64_t x591 = INT64_MIN;
	int8_t x592 = 1;
	int64_t t16 = -68640970LL;

	t16 = ((x589-(x590%x591))>>x592);

	if (t16 != 761LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x593 = 9233158LLU;
	static int8_t x594 = INT8_MIN;
	uint64_t x595 = 10545LLU;
	int16_t x596 = 14;
	volatile uint64_t t17 = 34LLU;

	t17 = ((x593-(x594%x595))>>x596);

	if (t17 != 563LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x650 = -2;
	int32_t x651 = 98246770;
	volatile int8_t x652 = 7;
	volatile uint32_t t18 = 7U;

	t18 = ((x649-(x650%x651))>>x652);

	if (t18 != 5U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x781 = INT8_MAX;
	static uint16_t x782 = 5U;
	volatile uint32_t x783 = UINT32_MAX;
	uint16_t x784 = 30U;
	uint32_t t19 = 111U;

	t19 = ((x781-(x782%x783))>>x784);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x869 = 53U;
	int64_t x870 = INT64_MIN;
	static int64_t x871 = INT64_MIN;
	uint8_t x872 = 27U;
	volatile int64_t t20 = 22LL;

	t20 = ((x869-(x870%x871))>>x872);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x885 = 2U;
	int16_t x886 = -21;
	int32_t x887 = 211410;

	t21 = ((x885-(x886%x887))>>x888);

	if (t21 != 23) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x913 = INT32_MAX;
	volatile int16_t x914 = -279;
	uint8_t x915 = 3U;
	uint64_t x916 = 1LLU;

	t22 = ((x913-(x914%x915))>>x916);

	if (t22 != 1073741823) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x917 = UINT32_MAX;
	int32_t x918 = INT32_MIN;
	volatile uint64_t x919 = UINT64_MAX;
	static uint64_t x920 = 57LLU;

	t23 = ((x917-(x918%x919))>>x920);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1001 = 0U;
	static uint8_t x1002 = UINT8_MAX;
	uint32_t x1003 = 1919727479U;
	int8_t x1004 = 1;
	uint32_t t24 = 403545U;

	t24 = ((x1001-(x1002%x1003))>>x1004);

	if (t24 != 2147483520U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1041 = INT8_MAX;
	uint32_t x1042 = UINT32_MAX;
	uint8_t x1043 = 2U;
	uint32_t t25 = 711622U;

	t25 = ((x1041-(x1042%x1043))>>x1044);

	if (t25 != 15U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1066 = 0U;
	int16_t x1067 = INT16_MIN;
	uint32_t x1068 = 0U;
	static volatile uint32_t t26 = 5U;

	t26 = ((x1065-(x1066%x1067))>>x1068);

	if (t26 != 143U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1089 = INT64_MIN;
	int64_t x1090 = INT64_MIN;
	volatile uint64_t x1091 = UINT64_MAX;
	static uint16_t x1092 = 18U;
	volatile uint64_t t27 = 5897746624905LLU;

	t27 = ((x1089-(x1090%x1091))>>x1092);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1161 = INT64_MAX;
	int32_t x1163 = INT32_MIN;
	int8_t x1164 = 1;
	int64_t t28 = -3LL;

	t28 = ((x1161-(x1162%x1163))>>x1164);

	if (t28 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1177 = INT64_MAX;
	int32_t x1178 = -1;
	uint32_t x1179 = 181U;
	uint32_t x1180 = 19U;
	volatile int64_t t29 = -14247821979LL;

	t29 = ((x1177-(x1178%x1179))>>x1180);

	if (t29 != 17592186044415LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1249 = INT64_MAX;
	uint8_t x1251 = UINT8_MAX;
	volatile uint8_t x1252 = 0U;
	static uint64_t t30 = 6268181539956885101LLU;

	t30 = ((x1249-(x1250%x1251))>>x1252);

	if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1265 = INT16_MIN;
	static int32_t x1266 = INT32_MIN;
	static int16_t x1268 = 8;

	t31 = ((x1265-(x1266%x1267))>>x1268);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1326 = INT32_MIN;
	volatile uint64_t x1327 = UINT64_MAX;
	uint8_t x1328 = 16U;
	volatile uint64_t t32 = 339961293316LLU;

	t32 = ((x1325-(x1326%x1327))>>x1328);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1361 = -1;
	volatile uint32_t x1362 = UINT32_MAX;
	static uint16_t x1363 = UINT16_MAX;
	uint16_t x1364 = 5U;
	uint32_t t33 = 50810192U;

	t33 = ((x1361-(x1362%x1363))>>x1364);

	if (t33 != 134217727U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1369 = 1;
	uint32_t x1371 = UINT32_MAX;
	static volatile int64_t t34 = 1LL;

	t34 = ((x1369-(x1370%x1371))>>x1372);

	if (t34 != 1073741824LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1389 = 14664279LL;
	volatile int8_t x1390 = INT8_MAX;
	int64_t x1391 = INT64_MIN;
	static int32_t x1392 = 52;
	volatile int64_t t35 = 5LL;

	t35 = ((x1389-(x1390%x1391))>>x1392);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x1397 = 13070676U;
	uint32_t x1398 = 11U;
	volatile uint16_t x1399 = UINT16_MAX;
	uint8_t x1400 = 7U;

	t36 = ((x1397-(x1398%x1399))>>x1400);

	if (t36 != 102114U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1438 = 1U;
	volatile uint32_t x1439 = 103U;
	int64_t x1440 = 1LL;
	volatile uint32_t t37 = 5315323U;

	t37 = ((x1437-(x1438%x1439))>>x1440);

	if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1481 = 0U;
	int64_t x1484 = 1LL;
	uint64_t t38 = 14LLU;

	t38 = ((x1481-(x1482%x1483))>>x1484);

	if (t38 != 9223372036850398568LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1485 = INT32_MAX;
	uint64_t x1486 = UINT64_MAX;
	int8_t x1488 = 1;
	static volatile uint64_t t39 = 64236806578LLU;

	t39 = ((x1485-(x1486%x1487))>>x1488);

	if (t39 != 4611686019501129728LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1533 = 16748LL;
	uint16_t x1535 = 3307U;
	uint8_t x1536 = 1U;
	volatile uint64_t t40 = 514LLU;

	t40 = ((x1533-(x1534%x1535))>>x1536);

	if (t40 != 8370LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1561 = UINT64_MAX;
	int64_t x1562 = -776247158552096LL;
	uint8_t x1563 = UINT8_MAX;
	static uint8_t x1564 = 51U;
	uint64_t t41 = 3239956655LLU;

	t41 = ((x1561-(x1562%x1563))>>x1564);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1565 = 3429604239692823604LLU;
	uint8_t x1566 = 2U;
	volatile uint64_t t42 = 12677LLU;

	t42 = ((x1565-(x1566%x1567))>>x1568);

	if (t42 != 3429604239692823602LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1577 = UINT64_MAX;
	int16_t x1578 = INT16_MAX;
	int8_t x1580 = 49;
	static uint64_t t43 = 192366728308LLU;

	t43 = ((x1577-(x1578%x1579))>>x1580);

	if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1637 = 4U;
	static uint16_t x1638 = 5600U;
	uint64_t x1639 = 1792890707363848919LLU;
	static uint32_t x1640 = 2U;
	static volatile uint64_t t44 = 1208093348005LLU;

	t44 = ((x1637-(x1638%x1639))>>x1640);

	if (t44 != 4611686018427386505LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1641 = 963LL;
	volatile int32_t x1643 = INT32_MIN;
	static uint64_t x1644 = 26LLU;

	t45 = ((x1641-(x1642%x1643))>>x1644);

	if (t45 != 27LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1661 = 79U;
	static volatile int8_t x1662 = -1;
	int64_t x1663 = INT64_MIN;
	volatile int16_t x1664 = 0;
	static int64_t t46 = 0LL;

	t46 = ((x1661-(x1662%x1663))>>x1664);

	if (t46 != 80LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1730 = INT64_MIN;
	volatile uint32_t x1731 = 933099202U;
	int64_t t47 = 0LL;

	t47 = ((x1729-(x1730%x1731))>>x1732);

	if (t47 != 8184LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1745 = 6U;
	int8_t x1746 = INT8_MIN;
	volatile uint8_t x1747 = UINT8_MAX;
	uint16_t x1748 = 27U;
	volatile int32_t t48 = 241321;

	t48 = ((x1745-(x1746%x1747))>>x1748);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x1765 = UINT64_MAX;
	static int64_t x1766 = 5951LL;
	uint8_t x1767 = UINT8_MAX;
	uint8_t x1768 = 1U;

	t49 = ((x1765-(x1766%x1767))>>x1768);

	if (t49 != 9223372036854775764LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1790 = 1738800456262668LLU;
	uint16_t x1791 = 9439U;
	uint64_t t50 = 9090496942LLU;

	t50 = ((x1789-(x1790%x1791))>>x1792);

	if (t50 != 2047LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1805 = 23867040;
	int64_t x1807 = 2841543LL;
	int64_t t51 = -758609929330485523LL;

	t51 = ((x1805-(x1806%x1807))>>x1808);

	if (t51 != 25985723LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x1950 = 17959085141363536LLU;
	int8_t x1951 = INT8_MIN;
	uint64_t t52 = 4063180983951334214LLU;

	t52 = ((x1949-(x1950%x1951))>>x1952);

	if (t52 != 18428784988568188079LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1962 = -1;
	uint16_t x1963 = 4U;
	static int16_t x1964 = 1;
	int32_t t53 = -41;

	t53 = ((x1961-(x1962%x1963))>>x1964);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2029 = UINT8_MAX;
	int64_t x2030 = INT64_MIN;
	static uint16_t x2031 = 1U;
	volatile int64_t x2032 = 1LL;
	int64_t t54 = -6413LL;

	t54 = ((x2029-(x2030%x2031))>>x2032);

	if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2073 = INT32_MIN;
	uint16_t x2074 = UINT16_MAX;
	uint32_t x2075 = 679662U;
	uint32_t x2076 = 22U;
	volatile uint32_t t55 = 59383U;

	t55 = ((x2073-(x2074%x2075))>>x2076);

	if (t55 != 511U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x2081 = 2U;
	uint64_t x2083 = 863786317526LLU;

	t56 = ((x2081-(x2082%x2083))>>x2084);

	if (t56 != 18446743321677337232LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2170 = UINT64_MAX;
	static int32_t x2171 = -225;
	int8_t x2172 = 0;
	volatile uint64_t t57 = 134579709LLU;

	t57 = ((x2169-(x2170%x2171))>>x2172);

	if (t57 != 18446744073709551406LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2182 = -12;
	uint32_t x2183 = 1151U;
	volatile int64_t t58 = -19930155LL;

	t58 = ((x2181-(x2182%x2183))>>x2184);

	if (t58 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2197 = 1;
	uint64_t x2198 = UINT64_MAX;
	volatile uint64_t t59 = 25839LLU;

	t59 = ((x2197-(x2198%x2199))>>x2200);

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2269 = 2664940746453LLU;
	int32_t x2270 = INT32_MIN;
	int32_t x2271 = -1;
	uint8_t x2272 = 2U;
	volatile uint64_t t60 = 48024758560986LLU;

	t60 = ((x2269-(x2270%x2271))>>x2272);

	if (t60 != 666235186613LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2361 = UINT32_MAX;
	static uint16_t x2364 = 6U;
	static uint32_t t61 = 12662696U;

	t61 = ((x2361-(x2362%x2363))>>x2364);

	if (t61 != 67108863U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2445 = INT8_MAX;
	volatile uint32_t x2446 = 8U;
	uint64_t x2447 = UINT64_MAX;
	static volatile uint64_t x2448 = 15LLU;

	t62 = ((x2445-(x2446%x2447))>>x2448);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2485 = UINT32_MAX;
	volatile int32_t x2487 = INT32_MAX;
	uint64_t t63 = 222935116190LLU;

	t63 = ((x2485-(x2486%x2487))>>x2488);

	if (t63 != 233658LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2506 = 6;
	int64_t x2507 = 20506896867762LL;
	uint8_t x2508 = 3U;
	volatile int64_t t64 = 5405596295355088LL;

	t64 = ((x2505-(x2506%x2507))>>x2508);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2541 = -55172LL;
	uint64_t x2542 = 219348025LLU;
	volatile int64_t x2543 = 410LL;
	uint32_t x2544 = 6U;
	volatile uint64_t t65 = 7287104551141590LLU;

	t65 = ((x2541-(x2542%x2543))>>x2544);

	if (t65 != 288230376151710880LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2545 = -198;
	int8_t x2546 = -2;
	uint32_t t66 = 55690908U;

	t66 = ((x2545-(x2546%x2547))>>x2548);

	if (t66 != 4294956496U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2581 = -1;
	volatile int8_t x2582 = INT8_MIN;
	static uint64_t x2583 = 137789332532LLU;
	uint16_t x2584 = 0U;
	volatile uint64_t t67 = 46888172040LLU;

	t67 = ((x2581-(x2582%x2583))>>x2584);

	if (t67 != 18446744069256353419LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2633 = UINT64_MAX;
	volatile int16_t x2634 = INT16_MIN;
	static uint16_t x2635 = UINT16_MAX;
	volatile uint64_t t68 = 15386074816LLU;

	t68 = ((x2633-(x2634%x2635))>>x2636);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2641 = -1;
	int64_t x2642 = -232694399990405909LL;
	static volatile uint8_t x2644 = 25U;
	int64_t t69 = -1369776230846LL;

	t69 = ((x2641-(x2642%x2643))>>x2644);

	if (t69 != 7200116LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2649 = 3;
	uint32_t x2650 = 807274U;
	int8_t x2651 = -3;
	uint8_t x2652 = 15U;
	uint32_t t70 = 147603U;

	t70 = ((x2649-(x2650%x2651))>>x2652);

	if (t70 != 131047U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2653 = -1LL;
	int32_t x2654 = INT32_MIN;
	volatile uint64_t x2655 = 232599LLU;

	t71 = ((x2653-(x2654%x2655))>>x2656);

	if (t71 != 2251799813685238LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2661 = -1;
	int8_t x2662 = INT8_MIN;
	static volatile uint16_t x2664 = 7U;
	static volatile int32_t t72 = -366557773;

	t72 = ((x2661-(x2662%x2663))>>x2664);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2693 = UINT32_MAX;
	uint8_t x2694 = UINT8_MAX;
	uint32_t x2695 = 11U;
	int16_t x2696 = 2;

	t73 = ((x2693-(x2694%x2695))>>x2696);

	if (t73 != 1073741823U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2705 = UINT32_MAX;
	int16_t x2706 = INT16_MAX;
	volatile int32_t x2707 = -6176157;
	uint8_t x2708 = 26U;

	t74 = ((x2705-(x2706%x2707))>>x2708);

	if (t74 != 63U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2721 = 86;
	int16_t x2722 = 0;
	static int8_t x2723 = -3;
	volatile uint8_t x2724 = 5U;
	volatile int32_t t75 = 1120206;

	t75 = ((x2721-(x2722%x2723))>>x2724);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x2853 = UINT32_MAX;
	static volatile int64_t x2854 = -1LL;
	volatile int16_t x2855 = INT16_MIN;
	int8_t x2856 = 0;
	int64_t t76 = 101045LL;

	t76 = ((x2853-(x2854%x2855))>>x2856);

	if (t76 != 4294967296LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2890 = -26;
	int8_t x2891 = 4;
	int32_t t77 = -591;

	t77 = ((x2889-(x2890%x2891))>>x2892);

	if (t77 != 65537) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2929 = INT8_MAX;
	int32_t x2930 = INT32_MIN;
	volatile uint64_t t78 = 310977519LLU;

	t78 = ((x2929-(x2930%x2931))>>x2932);

	if (t78 != 36028797018841779LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x2985 = UINT8_MAX;
	int8_t x2986 = INT8_MIN;
	static volatile int64_t x2987 = INT64_MIN;
	volatile int8_t x2988 = 0;
	int64_t t79 = -1664LL;

	t79 = ((x2985-(x2986%x2987))>>x2988);

	if (t79 != 383LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3009 = INT16_MAX;
	int16_t x3010 = INT16_MIN;
	int32_t t80 = -86553004;

	t80 = ((x3009-(x3010%x3011))>>x3012);

	if (t80 != 16384) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3013 = INT8_MAX;
	int8_t x3014 = INT8_MAX;
	static volatile uint64_t x3015 = UINT64_MAX;
	uint8_t x3016 = 0U;
	volatile uint64_t t81 = 4LLU;

	t81 = ((x3013-(x3014%x3015))>>x3016);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3033 = UINT64_MAX;
	uint16_t x3034 = UINT16_MAX;
	volatile int16_t x3035 = INT16_MAX;
	volatile uint64_t t82 = 33118347117182LLU;

	t82 = ((x3033-(x3034%x3035))>>x3036);

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x3038 = INT8_MIN;
	uint64_t t83 = 9LLU;

	t83 = ((x3037-(x3038%x3039))>>x3040);

	if (t83 != 9223318097978467637LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3045 = UINT16_MAX;
	uint64_t x3046 = UINT64_MAX;
	static int64_t x3047 = 160175LL;
	int8_t x3048 = 14;
	uint64_t t84 = 194591156249LLU;

	t84 = ((x3045-(x3046%x3047))>>x3048);

	if (t84 != 1125899906842620LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3069 = 90U;
	static uint8_t x3070 = 32U;
	static volatile uint32_t x3071 = 3404522U;
	volatile int8_t x3072 = 7;
	volatile uint32_t t85 = 11U;

	t85 = ((x3069-(x3070%x3071))>>x3072);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3129 = 270LLU;
	volatile int16_t x3130 = -1;
	uint64_t t86 = 1739692LLU;

	t86 = ((x3129-(x3130%x3131))>>x3132);

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x3133 = INT16_MIN;
	uint32_t x3134 = 32402U;
	volatile int16_t x3135 = INT16_MIN;
	volatile int8_t x3136 = 1;
	static uint32_t t87 = 401406U;

	t87 = ((x3133-(x3134%x3135))>>x3136);

	if (t87 != 2147451063U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3173 = 8LL;
	int32_t x3174 = -1;
	int64_t x3175 = -1LL;
	static int16_t x3176 = 1;
	volatile int64_t t88 = -3LL;

	t88 = ((x3173-(x3174%x3175))>>x3176);

	if (t88 != 4LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3201 = INT8_MIN;
	static volatile int32_t x3202 = INT32_MIN;
	volatile int64_t x3203 = -1744288297850310390LL;

	t89 = ((x3201-(x3202%x3203))>>x3204);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3241 = 20;
	int64_t x3242 = INT64_MIN;

	t90 = ((x3241-(x3242%x3243))>>x3244);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x3261 = 84U;
	static int8_t x3262 = 9;
	int8_t x3263 = 1;
	static int16_t x3264 = 0;
	int32_t t91 = -353;

	t91 = ((x3261-(x3262%x3263))>>x3264);

	if (t91 != 84) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3281 = INT32_MAX;
	uint8_t x3283 = UINT8_MAX;
	uint64_t t92 = 49570859775LLU;

	t92 = ((x3281-(x3282%x3283))>>x3284);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3323 = INT64_MIN;
	uint8_t x3324 = 3U;

	t93 = ((x3321-(x3322%x3323))>>x3324);

	if (t93 != 1152921504606846928LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x3361 = -1200;
	uint64_t x3362 = 1978630928427LLU;
	int64_t x3363 = 23974722517LL;
	uint32_t x3364 = 36U;

	t94 = ((x3361-(x3362%x3363))>>x3364);

	if (t94 != 268435455LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x3472 = 0;
	int64_t t95 = -130894156837182LL;

	t95 = ((x3469-(x3470%x3471))>>x3472);

	if (t95 != 9223372036854527504LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x3489 = 9400U;
	int64_t x3490 = -1LL;
	uint16_t x3491 = UINT16_MAX;
	int16_t x3492 = 1;
	int64_t t96 = -7LL;

	t96 = ((x3489-(x3490%x3491))>>x3492);

	if (t96 != 4700LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3537 = -887;
	static uint16_t x3538 = UINT16_MAX;
	uint32_t x3539 = UINT32_MAX;
	int32_t x3540 = 3;
	uint32_t t97 = 122695U;

	t97 = ((x3537-(x3538%x3539))>>x3540);

	if (t97 != 536862609U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3589 = 630;
	volatile uint64_t x3591 = 6349047LLU;
	uint8_t x3592 = 31U;
	volatile uint64_t t98 = 188013093525LLU;

	t98 = ((x3589-(x3590%x3591))>>x3592);

	if (t98 != 8589934591LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3613 = 28531U;
	static volatile uint16_t x3614 = 1695U;
	static int16_t x3615 = INT16_MIN;
	volatile uint64_t x3616 = 0LLU;
	int32_t t99 = -266;

	t99 = ((x3613-(x3614%x3615))>>x3616);

	if (t99 != 26836) { NG(); } else { ; }
	
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

