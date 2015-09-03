#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x21 = -1;
static int32_t x23 = 0;
int32_t t2 = -524407616;
uint32_t x76 = UINT32_MAX;
uint8_t x96 = 12U;
int16_t x165 = INT16_MIN;
static uint8_t x167 = 10U;
int16_t x168 = INT16_MIN;
int32_t t6 = 480310350;
int64_t x265 = INT64_MIN;
uint8_t x267 = 2U;
uint64_t x268 = 305LLU;
volatile uint64_t t9 = 380264LLU;
uint64_t x345 = UINT64_MAX;
uint64_t t11 = 55825924297LLU;
volatile int64_t t12 = 2LL;
int16_t x415 = 0;
int64_t x457 = INT64_MAX;
uint32_t x498 = 676856U;
int16_t x499 = 2;
int64_t t16 = 4925593462162LL;
int8_t x713 = -1;
volatile uint8_t x714 = 18U;
volatile int8_t x862 = -1;
static int8_t x877 = INT8_MAX;
uint64_t x878 = 15204197LLU;
static uint16_t x918 = UINT16_MAX;
int16_t x919 = 0;
int8_t x941 = 6;
int8_t x1009 = -1;
static int8_t x1059 = 4;
static int16_t x1060 = INT16_MAX;
volatile uint64_t x1114 = UINT64_MAX;
int16_t x1116 = INT16_MAX;
int32_t x1300 = -1;
volatile int16_t x1364 = 3427;
static uint8_t x1431 = 14U;
static uint32_t t39 = 67999U;
volatile int64_t t40 = 542317LL;
int32_t x1514 = INT32_MAX;
uint32_t t42 = 1U;
static uint16_t x1567 = 8U;
int64_t x1569 = INT64_MAX;
static uint32_t x1572 = UINT32_MAX;
volatile uint64_t t51 = 3027378558134405LLU;
volatile int8_t x1910 = INT8_MIN;
static uint64_t x1912 = 17LLU;
volatile uint64_t t52 = 16183033558LLU;
int16_t x1921 = INT16_MAX;
volatile int32_t t55 = 18;
static uint64_t x2049 = 102166885272186LLU;
uint32_t x2129 = 16176680U;
static uint64_t t58 = 320202342LLU;
volatile int32_t x2146 = 4110218;
static int16_t x2148 = -1880;
static uint8_t x2171 = 0U;
volatile uint64_t t60 = 242LLU;
int64_t x2289 = -1LL;
uint16_t x2291 = 17U;
static volatile int64_t x2385 = INT64_MAX;
uint32_t x2386 = 5333U;
int32_t x2388 = INT32_MIN;
uint8_t x2484 = 57U;
volatile uint8_t x2538 = UINT8_MAX;
uint32_t t68 = 22649593U;
volatile int8_t x2590 = -1;
uint32_t x2613 = 15610U;
int8_t x2615 = 15;
int32_t x2646 = INT32_MIN;
volatile int64_t x2670 = -233910383758455235LL;
int16_t x2671 = 1;
int32_t x2674 = 454;
volatile uint32_t t75 = 214951981U;
volatile uint16_t x2827 = 0U;
static volatile uint8_t x2839 = 0U;
int8_t x2894 = 12;
int8_t x2895 = 0;
uint64_t t80 = 886869815156305915LLU;
static int64_t t84 = 1461892034LL;
volatile int8_t x3114 = INT8_MAX;
volatile uint64_t t86 = 23175785947178763LLU;
volatile uint32_t x3137 = UINT32_MAX;
uint8_t x3139 = 2U;
int16_t x3140 = 13;
static uint16_t x3153 = UINT16_MAX;
uint8_t x3154 = 2U;
int64_t x3156 = -11291LL;
uint64_t x3168 = UINT64_MAX;
uint64_t t89 = 237588784305302LLU;
int8_t x3253 = -1;
static int64_t x3337 = INT64_MIN;
volatile uint64_t x3338 = 447932306321205115LLU;
int8_t x3455 = 2;
int8_t x3489 = -1;
int8_t x3491 = 1;
int32_t t96 = -226;
volatile uint32_t t97 = 2446591U;
int16_t x3590 = 3909;
int16_t x3636 = INT16_MIN;


void f0(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t0 = -45392;

	t0 = (((x21/x22)<<x23)/x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x25 = INT32_MAX;
	volatile int64_t x26 = INT64_MAX;
	int8_t x27 = 10;
	static volatile int16_t x28 = INT16_MIN;
	volatile int64_t t1 = 950786792508614LL;

	t1 = (((x25/x26)<<x27)/x28);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MAX;
	uint8_t x47 = 12U;
	volatile int16_t x48 = INT16_MAX;

	t2 = (((x45/x46)<<x47)/x48);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x73 = 6U;
	static uint64_t x74 = 2936090436133LLU;
	uint32_t x75 = 5U;
	uint64_t t3 = 22596271LLU;

	t3 = (((x73/x74)<<x75)/x76);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x93 = -454149189837222147LL;
	int16_t x94 = INT16_MIN;
	int32_t x95 = 1;
	int64_t t4 = 46073131073LL;

	t4 = (((x93/x94)<<x95)/x96);

	if (t4 != 2309922230210LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x166 = INT32_MIN;
	int32_t t5 = 3547;

	t5 = (((x165/x166)<<x167)/x168);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x185 = -1;
	uint16_t x186 = 3U;
	static int8_t x187 = 21;
	uint8_t x188 = 6U;

	t6 = (((x185/x186)<<x187)/x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x266 = 122036306776887LLU;
	static uint64_t t7 = 250177014567LLU;

	t7 = (((x265/x266)<<x267)/x268);

	if (t7 != 991LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MAX;
	volatile uint8_t x295 = 0U;
	volatile int8_t x296 = INT8_MAX;
	uint32_t t8 = 66U;

	t8 = (((x293/x294)<<x295)/x296);

	if (t8 != 266288U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x297 = 135569313250681542LLU;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = 45U;
	int8_t x300 = INT8_MIN;

	t9 = (((x297/x298)<<x299)/x300);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x301 = -1;
	int32_t x302 = 9;
	uint16_t x303 = 1U;
	int32_t x304 = 10;
	volatile int32_t t10 = -1;

	t10 = (((x301/x302)<<x303)/x304);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x346 = -40;
	static uint8_t x347 = 4U;
	int32_t x348 = -1;

	t11 = (((x345/x346)<<x347)/x348);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x405 = INT32_MAX;
	static int64_t x406 = INT64_MIN;
	uint32_t x407 = 11U;
	int16_t x408 = -1;

	t12 = (((x405/x406)<<x407)/x408);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x413 = 7976780LLU;
	int32_t x414 = INT32_MIN;
	volatile int16_t x416 = 3;
	uint64_t t13 = 15005301LLU;

	t13 = (((x413/x414)<<x415)/x416);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x458 = INT64_MIN;
	int8_t x459 = 1;
	int32_t x460 = 182309447;
	volatile int64_t t14 = 11LL;

	t14 = (((x457/x458)<<x459)/x460);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x477 = INT8_MAX;
	uint64_t x478 = UINT64_MAX;
	uint64_t x479 = 8LLU;
	int32_t x480 = -306;
	volatile uint64_t t15 = 77183LLU;

	t15 = (((x477/x478)<<x479)/x480);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x497 = INT32_MIN;
	volatile int64_t x500 = INT64_MIN;

	t16 = (((x497/x498)<<x499)/x500);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x509 = -1;
	uint32_t x510 = 35U;
	volatile int16_t x511 = 0;
	uint32_t x512 = UINT32_MAX;
	volatile uint32_t t17 = 486U;

	t17 = (((x509/x510)<<x511)/x512);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x715 = 1;
	volatile uint16_t x716 = UINT16_MAX;
	static int32_t t18 = 2;

	t18 = (((x713/x714)<<x715)/x716);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x861 = 247235LLU;
	uint16_t x863 = 6U;
	int8_t x864 = 54;
	static volatile uint64_t t19 = 1413LLU;

	t19 = (((x861/x862)<<x863)/x864);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x865 = 6U;
	volatile uint32_t x866 = 176369033U;
	uint8_t x867 = 25U;
	int8_t x868 = INT8_MIN;
	static volatile uint32_t t20 = 1361369U;

	t20 = (((x865/x866)<<x867)/x868);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x879 = 1U;
	int8_t x880 = 7;
	volatile uint64_t t21 = 5095LLU;

	t21 = (((x877/x878)<<x879)/x880);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x917 = INT8_MIN;
	volatile uint8_t x920 = 15U;
	int32_t t22 = -80000;

	t22 = (((x917/x918)<<x919)/x920);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x929 = 116U;
	volatile int16_t x930 = INT16_MIN;
	uint32_t x931 = 9U;
	int64_t x932 = INT64_MIN;
	int64_t t23 = -730317LL;

	t23 = (((x929/x930)<<x931)/x932);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x942 = INT32_MAX;
	int32_t x943 = 0;
	int32_t x944 = -1323034;
	int32_t t24 = 7;

	t24 = (((x941/x942)<<x943)/x944);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x957 = INT64_MIN;
	uint64_t x958 = 397LLU;
	uint8_t x959 = 1U;
	static int32_t x960 = INT32_MAX;
	uint64_t t25 = 3169813164790642LLU;

	t25 = (((x957/x958)<<x959)/x960);

	if (t25 != 21637114LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1001 = -1;
	uint32_t x1002 = 263436U;
	int8_t x1003 = 0;
	uint16_t x1004 = 5026U;
	volatile uint32_t t26 = 1U;

	t26 = (((x1001/x1002)<<x1003)/x1004);

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1005 = INT32_MIN;
	static uint64_t x1006 = 14207857LLU;
	int32_t x1007 = 0;
	int64_t x1008 = 16850485LL;
	uint64_t t27 = 448281353025126LLU;

	t27 = (((x1005/x1006)<<x1007)/x1008);

	if (t27 != 77051LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x1010 = INT32_MIN;
	static int8_t x1011 = 27;
	uint16_t x1012 = 2U;
	int32_t t28 = -109;

	t28 = (((x1009/x1010)<<x1011)/x1012);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1013 = 77U;
	volatile int64_t x1014 = -197196LL;
	static uint8_t x1015 = 27U;
	uint8_t x1016 = 1U;
	volatile int64_t t29 = 0LL;

	t29 = (((x1013/x1014)<<x1015)/x1016);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1057 = INT16_MAX;
	int16_t x1058 = 871;
	volatile int32_t t30 = -524709958;

	t30 = (((x1057/x1058)<<x1059)/x1060);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1113 = -4;
	int16_t x1115 = 5;
	uint64_t t31 = 3948000285146196605LLU;

	t31 = (((x1113/x1114)<<x1115)/x1116);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1249 = INT8_MAX;
	int32_t x1250 = 401;
	uint8_t x1251 = 2U;
	volatile int32_t x1252 = -1;
	static int32_t t32 = 25;

	t32 = (((x1249/x1250)<<x1251)/x1252);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1297 = 71;
	static int16_t x1298 = INT16_MIN;
	int8_t x1299 = 3;
	static int32_t t33 = 93;

	t33 = (((x1297/x1298)<<x1299)/x1300);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1305 = 0;
	volatile int32_t x1306 = -1054905;
	int8_t x1307 = 24;
	static int16_t x1308 = INT16_MIN;
	int32_t t34 = -65;

	t34 = (((x1305/x1306)<<x1307)/x1308);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1333 = 0;
	int64_t x1334 = INT64_MIN;
	static volatile uint16_t x1335 = 62U;
	int16_t x1336 = -1;
	int64_t t35 = 6301271270377778LL;

	t35 = (((x1333/x1334)<<x1335)/x1336);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1361 = -1;
	volatile int32_t x1362 = 118371;
	volatile uint8_t x1363 = 3U;
	static int32_t t36 = 7;

	t36 = (((x1361/x1362)<<x1363)/x1364);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1385 = INT32_MIN;
	int64_t x1386 = 403252334723303989LL;
	uint8_t x1387 = 52U;
	int64_t x1388 = INT64_MIN;
	volatile int64_t t37 = 983874711047922LL;

	t37 = (((x1385/x1386)<<x1387)/x1388);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1405 = -60185;
	int64_t x1406 = -739028149895LL;
	uint16_t x1407 = 2U;
	static uint64_t x1408 = UINT64_MAX;
	static volatile uint64_t t38 = 7LLU;

	t38 = (((x1405/x1406)<<x1407)/x1408);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1429 = UINT16_MAX;
	uint32_t x1430 = 321U;
	uint8_t x1432 = UINT8_MAX;

	t39 = (((x1429/x1430)<<x1431)/x1432);

	if (t39 != 13107U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1473 = 7U;
	int64_t x1474 = -778717359223LL;
	int8_t x1475 = 6;
	volatile int32_t x1476 = -1;

	t40 = (((x1473/x1474)<<x1475)/x1476);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x1485 = 68U;
	uint64_t x1486 = 1LLU;
	int32_t x1487 = 47;
	static int64_t x1488 = INT64_MIN;
	volatile uint64_t t41 = 278896697142369LLU;

	t41 = (((x1485/x1486)<<x1487)/x1488);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1513 = 214U;
	static uint32_t x1515 = 28U;
	uint32_t x1516 = 10798U;

	t42 = (((x1513/x1514)<<x1515)/x1516);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1565 = -1;
	static int8_t x1566 = -1;
	uint16_t x1568 = 9U;
	static volatile int32_t t43 = 101;

	t43 = (((x1565/x1566)<<x1567)/x1568);

	if (t43 != 28) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x1570 = 499773550286LLU;
	static int64_t x1571 = 0LL;
	uint64_t t44 = 391LLU;

	t44 = (((x1569/x1570)<<x1571)/x1572);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1605 = 152006LLU;
	int64_t x1606 = INT64_MAX;
	int8_t x1607 = 0;
	int8_t x1608 = INT8_MIN;
	volatile uint64_t t45 = 3454027781508609974LLU;

	t45 = (((x1605/x1606)<<x1607)/x1608);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x1633 = UINT16_MAX;
	uint16_t x1634 = UINT16_MAX;
	static volatile uint16_t x1635 = 6U;
	int8_t x1636 = INT8_MAX;
	static volatile int32_t t46 = 81199;

	t46 = (((x1633/x1634)<<x1635)/x1636);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1657 = UINT64_MAX;
	uint8_t x1658 = 13U;
	uint16_t x1659 = 48U;
	int32_t x1660 = -11690599;
	uint64_t t47 = 25204LLU;

	t47 = (((x1657/x1658)<<x1659)/x1660);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1661 = INT32_MIN;
	int8_t x1662 = INT8_MIN;
	int16_t x1663 = 0;
	int32_t x1664 = -1;
	volatile int32_t t48 = -83;

	t48 = (((x1661/x1662)<<x1663)/x1664);

	if (t48 != -16777216) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x1685 = 14499950255636LLU;
	int16_t x1686 = -1;
	uint8_t x1687 = 7U;
	int8_t x1688 = INT8_MIN;
	volatile uint64_t t49 = 31261458950LLU;

	t49 = (((x1685/x1686)<<x1687)/x1688);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1829 = -426329098846517716LL;
	int64_t x1830 = -1443489212LL;
	static uint8_t x1831 = 0U;
	uint32_t x1832 = 65198964U;
	int64_t t50 = 12451628932864LL;

	t50 = (((x1829/x1830)<<x1831)/x1832);

	if (t50 != 4LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1837 = 205377U;
	volatile int32_t x1838 = 1;
	uint8_t x1839 = 2U;
	uint64_t x1840 = 71LLU;

	t51 = (((x1837/x1838)<<x1839)/x1840);

	if (t51 != 11570LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1909 = -256693404966898LL;
	uint16_t x1911 = 5U;

	t52 = (((x1909/x1910)<<x1911)/x1912);

	if (t52 != 3774903014217LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1922 = UINT32_MAX;
	uint8_t x1923 = 14U;
	int32_t x1924 = INT32_MIN;
	volatile uint32_t t53 = 13630641U;

	t53 = (((x1921/x1922)<<x1923)/x1924);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1945 = 0;
	int16_t x1946 = INT16_MIN;
	uint32_t x1947 = 31U;
	volatile uint64_t x1948 = 509166716LLU;
	static uint64_t t54 = 14300793LLU;

	t54 = (((x1945/x1946)<<x1947)/x1948);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x1973 = INT32_MAX;
	volatile uint16_t x1974 = 46U;
	uint8_t x1975 = 4U;
	uint16_t x1976 = UINT16_MAX;

	t55 = (((x1973/x1974)<<x1975)/x1976);

	if (t55 != 11397) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2050 = 975;
	uint16_t x2051 = 2U;
	int16_t x2052 = 51;
	uint64_t t56 = 219LLU;

	t56 = (((x2049/x2050)<<x2051)/x2052);

	if (t56 != 8218552862LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2061 = -1;
	int64_t x2062 = -1LL;
	static int32_t x2063 = 1;
	volatile uint16_t x2064 = UINT16_MAX;
	int64_t t57 = -4401951254344334185LL;

	t57 = (((x2061/x2062)<<x2063)/x2064);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2130 = UINT64_MAX;
	static int8_t x2131 = 5;
	uint16_t x2132 = 1930U;

	t58 = (((x2129/x2130)<<x2131)/x2132);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2145 = -1LL;
	volatile uint8_t x2147 = 11U;
	volatile int64_t t59 = 71726250134280257LL;

	t59 = (((x2145/x2146)<<x2147)/x2148);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2169 = 66LLU;
	int32_t x2170 = INT32_MAX;
	static uint8_t x2172 = UINT8_MAX;

	t60 = (((x2169/x2170)<<x2171)/x2172);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2290 = INT64_MIN;
	uint32_t x2292 = 64288654U;
	volatile int64_t t61 = 103LL;

	t61 = (((x2289/x2290)<<x2291)/x2292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2341 = -124LL;
	int32_t x2342 = INT32_MIN;
	uint8_t x2343 = 3U;
	uint8_t x2344 = UINT8_MAX;
	volatile int64_t t62 = -1758743618LL;

	t62 = (((x2341/x2342)<<x2343)/x2344);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2387 = 0U;
	volatile int64_t t63 = -29025674786501094LL;

	t63 = (((x2385/x2386)<<x2387)/x2388);

	if (t63 != -805356LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2397 = INT32_MAX;
	int8_t x2398 = INT8_MAX;
	static uint16_t x2399 = 0U;
	volatile uint16_t x2400 = 5675U;
	int32_t t64 = 24;

	t64 = (((x2397/x2398)<<x2399)/x2400);

	if (t64 != 2979) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2481 = INT16_MIN;
	volatile int64_t x2482 = INT64_MAX;
	static uint8_t x2483 = 5U;
	volatile int64_t t65 = 0LL;

	t65 = (((x2481/x2482)<<x2483)/x2484);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x2501 = INT8_MAX;
	static uint16_t x2502 = 1U;
	uint16_t x2503 = 0U;
	static volatile int8_t x2504 = INT8_MAX;
	int32_t t66 = 0;

	t66 = (((x2501/x2502)<<x2503)/x2504);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2537 = -1LL;
	uint32_t x2539 = 1U;
	static int32_t x2540 = INT32_MIN;
	int64_t t67 = 2430128494804417LL;

	t67 = (((x2537/x2538)<<x2539)/x2540);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2569 = 117406735U;
	uint16_t x2570 = 385U;
	uint16_t x2571 = 20U;
	int32_t x2572 = INT32_MAX;

	t68 = (((x2569/x2570)<<x2571)/x2572);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2589 = -105;
	int8_t x2591 = 3;
	static int16_t x2592 = -354;
	int32_t t69 = -80815;

	t69 = (((x2589/x2590)<<x2591)/x2592);

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2614 = 3U;
	int64_t x2616 = -1LL;
	static int64_t t70 = -784232433333LL;

	t70 = (((x2613/x2614)<<x2615)/x2616);

	if (t70 != -170491904LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2645 = INT32_MIN;
	volatile uint16_t x2647 = 7U;
	static volatile int16_t x2648 = 1;
	static int32_t t71 = -42533;

	t71 = (((x2645/x2646)<<x2647)/x2648);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2669 = 2;
	int16_t x2672 = INT16_MAX;
	int64_t t72 = -142LL;

	t72 = (((x2669/x2670)<<x2671)/x2672);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2673 = -1;
	volatile uint32_t x2675 = 0U;
	int8_t x2676 = -9;
	int32_t t73 = 71166;

	t73 = (((x2673/x2674)<<x2675)/x2676);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2685 = 239;
	volatile int16_t x2686 = INT16_MIN;
	int16_t x2687 = 1;
	int16_t x2688 = 6193;
	int32_t t74 = -1;

	t74 = (((x2685/x2686)<<x2687)/x2688);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2761 = 2U;
	uint8_t x2762 = UINT8_MAX;
	uint16_t x2763 = 1U;
	volatile int8_t x2764 = INT8_MIN;

	t75 = (((x2761/x2762)<<x2763)/x2764);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2769 = -1LL;
	static int32_t x2770 = INT32_MAX;
	static uint8_t x2771 = 3U;
	volatile int32_t x2772 = -1;
	static int64_t t76 = 10607LL;

	t76 = (((x2769/x2770)<<x2771)/x2772);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2773 = 4U;
	int32_t x2774 = -41386;
	volatile uint8_t x2775 = 14U;
	int64_t x2776 = INT64_MIN;
	volatile int64_t t77 = -42872789LL;

	t77 = (((x2773/x2774)<<x2775)/x2776);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x2825 = 114U;
	int32_t x2826 = -1;
	volatile uint16_t x2828 = 1U;
	uint32_t t78 = 36356961U;

	t78 = (((x2825/x2826)<<x2827)/x2828);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2837 = INT64_MAX;
	volatile uint64_t x2838 = UINT64_MAX;
	int32_t x2840 = -21;
	volatile uint64_t t79 = 23816LLU;

	t79 = (((x2837/x2838)<<x2839)/x2840);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x2893 = UINT32_MAX;
	uint64_t x2896 = 94438362042198LLU;

	t80 = (((x2893/x2894)<<x2895)/x2896);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x2913 = UINT32_MAX;
	static uint64_t x2914 = 118324650LLU;
	uint64_t x2915 = 37LLU;
	volatile int16_t x2916 = INT16_MIN;
	volatile uint64_t t81 = 492254524896LLU;

	t81 = (((x2913/x2914)<<x2915)/x2916);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x2929 = 13900498U;
	uint32_t x2930 = 1795301U;
	static uint8_t x2931 = 5U;
	uint32_t x2932 = UINT32_MAX;
	static uint32_t t82 = 40814149U;

	t82 = (((x2929/x2930)<<x2931)/x2932);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2997 = 27;
	uint64_t x2998 = 59LLU;
	static uint64_t x2999 = 50LLU;
	uint64_t x3000 = 1175112957930196LLU;
	volatile uint64_t t83 = 171626302579686LLU;

	t83 = (((x2997/x2998)<<x2999)/x3000);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3101 = 29301727596LL;
	int64_t x3102 = 311085LL;
	uint8_t x3103 = 21U;
	int8_t x3104 = -1;

	t84 = (((x3101/x3102)<<x3103)/x3104);

	if (t84 != -197534941184LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3113 = 1U;
	int8_t x3115 = 1;
	volatile int64_t x3116 = INT64_MIN;
	int64_t t85 = -2LL;

	t85 = (((x3113/x3114)<<x3115)/x3116);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3133 = -1LL;
	int16_t x3134 = INT16_MIN;
	static uint8_t x3135 = 1U;
	uint64_t x3136 = 2091271LLU;

	t86 = (((x3133/x3134)<<x3135)/x3136);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3138 = INT16_MIN;
	uint32_t t87 = 1525U;

	t87 = (((x3137/x3138)<<x3139)/x3140);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x3155 = 5U;
	volatile int64_t t88 = -185337LL;

	t88 = (((x3153/x3154)<<x3155)/x3156);

	if (t88 != -92LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3165 = 3U;
	uint8_t x3166 = 103U;
	uint32_t x3167 = 20U;

	t89 = (((x3165/x3166)<<x3167)/x3168);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3254 = INT16_MIN;
	uint32_t x3255 = 0U;
	int64_t x3256 = INT64_MIN;
	volatile int64_t t90 = 0LL;

	t90 = (((x3253/x3254)<<x3255)/x3256);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x3293 = 77U;
	volatile int32_t x3294 = INT32_MIN;
	static uint16_t x3295 = 11U;
	uint64_t x3296 = 1337LLU;
	uint64_t t91 = 339410093190LLU;

	t91 = (((x3293/x3294)<<x3295)/x3296);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3339 = 1U;
	volatile uint32_t x3340 = UINT32_MAX;
	uint64_t t92 = 4432165432834900286LLU;

	t92 = (((x3337/x3338)<<x3339)/x3340);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x3421 = INT32_MAX;
	uint64_t x3422 = 54604470723715LLU;
	int32_t x3423 = 7;
	volatile int64_t x3424 = INT64_MIN;
	uint64_t t93 = 8879797059885410723LLU;

	t93 = (((x3421/x3422)<<x3423)/x3424);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3453 = 8;
	int8_t x3454 = INT8_MIN;
	uint32_t x3456 = 5U;
	uint32_t t94 = 953U;

	t94 = (((x3453/x3454)<<x3455)/x3456);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3465 = 3U;
	volatile int8_t x3466 = INT8_MIN;
	static uint8_t x3467 = 6U;
	uint64_t x3468 = 31LLU;
	uint64_t t95 = 2717200878747325020LLU;

	t95 = (((x3465/x3466)<<x3467)/x3468);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3490 = -4027686;
	int8_t x3492 = INT8_MAX;

	t96 = (((x3489/x3490)<<x3491)/x3492);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3553 = -1;
	int32_t x3554 = -1;
	int8_t x3555 = 22;
	uint32_t x3556 = UINT32_MAX;

	t97 = (((x3553/x3554)<<x3555)/x3556);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3589 = -3220;
	uint64_t x3591 = 0LLU;
	static int16_t x3592 = 1762;
	static volatile int32_t t98 = 971;

	t98 = (((x3589/x3590)<<x3591)/x3592);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x3633 = INT64_MIN;
	int64_t x3634 = INT64_MIN;
	uint8_t x3635 = 1U;
	static volatile int64_t t99 = -2263LL;

	t99 = (((x3633/x3634)<<x3635)/x3636);

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

