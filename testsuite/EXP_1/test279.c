#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 2603859;
int32_t x114 = -1;
int32_t x151 = -1;
volatile int32_t t2 = -207749;
int32_t x271 = -1;
int8_t x272 = 0;
volatile int32_t t4 = 47330;
volatile int32_t t5 = 103018;
volatile uint8_t x384 = 28U;
static int8_t x414 = INT8_MIN;
volatile int32_t t9 = 20;
uint64_t x567 = 14483LLU;
uint8_t x621 = UINT8_MAX;
int8_t x631 = 53;
volatile int32_t t13 = 26667;
int16_t x809 = INT16_MIN;
volatile int32_t t19 = 887115746;
int16_t x825 = -1;
int16_t x826 = -1;
int64_t x871 = INT64_MIN;
int8_t x1014 = 1;
uint8_t x1016 = 3U;
volatile int32_t t24 = 2516;
static int32_t t25 = 5081;
uint16_t x1060 = 1U;
int16_t x1157 = -1;
static uint64_t x1174 = 75965286LLU;
volatile int32_t t30 = -597399;
uint16_t x1220 = 0U;
volatile int32_t t33 = -56843;
int8_t x1368 = 14;
int64_t x1370 = -6169937821075LL;
static int8_t x1385 = INT8_MIN;
uint32_t x1386 = UINT32_MAX;
int32_t x1394 = -1;
static volatile int32_t t37 = -822541079;
int8_t x1490 = INT8_MIN;
static int32_t t40 = 3;
uint32_t x1562 = 70789069U;
int64_t x1569 = INT64_MAX;
volatile uint16_t x1594 = 4357U;
static uint64_t x1606 = 24690382100995376LLU;
int32_t t45 = -30545705;
int64_t x1866 = -5332619LL;
int32_t t47 = 414271;
int32_t x2001 = -1;
static volatile int32_t t51 = 130577;
int8_t x2101 = INT8_MAX;
static int64_t x2106 = INT64_MIN;
int32_t t56 = 41567604;
uint16_t x2141 = 0U;
int32_t x2165 = 96;
static volatile uint8_t x2166 = 46U;
int16_t x2178 = INT16_MIN;
static int64_t x2217 = -941761203290332LL;
volatile int32_t t60 = -830022278;
volatile uint8_t x2384 = 3U;
int16_t x2403 = INT16_MAX;
static int64_t x2405 = INT64_MIN;
int64_t x2513 = INT64_MAX;
volatile uint32_t x2514 = 9239U;
int32_t t65 = 31691;
int32_t x2523 = -1;
int8_t x2583 = -1;
int64_t x2584 = 11LL;
int8_t x2591 = 7;
volatile int32_t t68 = 291;
int16_t x2667 = -1;
volatile uint16_t x2668 = 1U;
uint32_t x2673 = 4103U;
uint64_t x2735 = UINT64_MAX;
volatile int32_t t74 = 37799761;
int32_t x2886 = INT32_MIN;
int16_t x2914 = INT16_MAX;
int8_t x2958 = -1;
uint32_t x2980 = 1U;
int32_t x2981 = -2461366;
int16_t x2999 = INT16_MIN;
int32_t t84 = 12176;
static int32_t t86 = -886;
int32_t t87 = 53874;
int16_t x3278 = INT16_MIN;
uint16_t x3280 = 2U;
int32_t t90 = 859329240;
int16_t x3292 = 1;
int32_t x3361 = INT32_MAX;
int8_t x3377 = INT8_MAX;
uint16_t x3378 = UINT16_MAX;
uint16_t x3379 = UINT16_MAX;
int16_t x3453 = INT16_MIN;
static uint8_t x3456 = 3U;
int8_t x3555 = 0;
uint32_t x3607 = UINT32_MAX;
uint8_t x3642 = UINT8_MAX;
int32_t t97 = 9863263;


void f0(void) {
	static uint16_t x89 = 120U;
	static volatile int8_t x90 = -1;
	static int32_t x91 = INT32_MIN;
	volatile uint16_t x92 = 13U;

	t0 = (((x89-x90)<x91)<<x92);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x113 = INT16_MAX;
	volatile int8_t x115 = -14;
	volatile int8_t x116 = 1;
	volatile int32_t t1 = -491118814;

	t1 = (((x113-x114)<x115)<<x116);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MAX;
	uint8_t x152 = 24U;

	t2 = (((x149-x150)<x151)<<x152);

	if (t2 != 16777216) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x261 = 10;
	uint32_t x262 = UINT32_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	int8_t x264 = 0;
	int32_t t3 = -54948723;

	t3 = (((x261-x262)<x263)<<x264);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x269 = 1601523026LL;
	uint8_t x270 = 61U;

	t4 = (((x269-x270)<x271)<<x272);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 19304080745430LLU;
	static int64_t x363 = INT64_MAX;
	uint8_t x364 = 1U;

	t5 = (((x361-x362)<x363)<<x364);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = 10U;
	uint8_t x383 = UINT8_MAX;
	static int32_t t6 = 61275614;

	t6 = (((x381-x382)<x383)<<x384);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x413 = UINT8_MAX;
	uint32_t x415 = 1227693436U;
	volatile uint8_t x416 = 13U;
	int32_t t7 = 11000084;

	t7 = (((x413-x414)<x415)<<x416);

	if (t7 != 8192) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x437 = INT8_MIN;
	volatile int8_t x438 = INT8_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	static volatile int32_t x440 = 0;
	static int32_t t8 = -1;

	t8 = (((x437-x438)<x439)<<x440);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x513 = INT16_MIN;
	static uint8_t x514 = 29U;
	int32_t x515 = INT32_MAX;
	volatile int16_t x516 = 17;

	t9 = (((x513-x514)<x515)<<x516);

	if (t9 != 131072) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x565 = -883;
	int8_t x566 = INT8_MIN;
	uint8_t x568 = 10U;
	int32_t t10 = 701390;

	t10 = (((x565-x566)<x567)<<x568);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x593 = -1;
	volatile int16_t x594 = INT16_MAX;
	uint8_t x595 = UINT8_MAX;
	uint32_t x596 = 2U;
	static volatile int32_t t11 = -38;

	t11 = (((x593-x594)<x595)<<x596);

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x622 = 22742U;
	int32_t x623 = -50193;
	int8_t x624 = 8;
	int32_t t12 = 26;

	t12 = (((x621-x622)<x623)<<x624);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x629 = -1;
	int32_t x630 = INT32_MIN;
	volatile uint64_t x632 = 0LLU;

	t13 = (((x629-x630)<x631)<<x632);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x653 = UINT32_MAX;
	uint64_t x654 = 232LLU;
	static int16_t x655 = INT16_MIN;
	uint8_t x656 = 0U;
	static int32_t t14 = -549186496;

	t14 = (((x653-x654)<x655)<<x656);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x661 = INT32_MIN;
	uint16_t x662 = 0U;
	volatile int16_t x663 = INT16_MIN;
	static uint8_t x664 = 1U;
	volatile int32_t t15 = 7578978;

	t15 = (((x661-x662)<x663)<<x664);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x697 = -1;
	volatile int8_t x698 = -1;
	static int16_t x699 = 1;
	uint16_t x700 = 5U;
	int32_t t16 = 1;

	t16 = (((x697-x698)<x699)<<x700);

	if (t16 != 32) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x745 = -1;
	int64_t x746 = -1LL;
	volatile uint8_t x747 = UINT8_MAX;
	int32_t x748 = 0;
	volatile int32_t t17 = 596412;

	t17 = (((x745-x746)<x747)<<x748);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x810 = 82U;
	int8_t x811 = INT8_MIN;
	static uint8_t x812 = 1U;
	volatile int32_t t18 = -16630483;

	t18 = (((x809-x810)<x811)<<x812);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x813 = -27546;
	uint32_t x814 = 1512U;
	volatile int16_t x815 = -1;
	int8_t x816 = 1;

	t19 = (((x813-x814)<x815)<<x816);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x827 = UINT64_MAX;
	uint8_t x828 = 14U;
	int32_t t20 = 1980351;

	t20 = (((x825-x826)<x827)<<x828);

	if (t20 != 16384) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x869 = -1LL;
	volatile int16_t x870 = -2092;
	static uint8_t x872 = 0U;
	static int32_t t21 = 197267;

	t21 = (((x869-x870)<x871)<<x872);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x889 = INT8_MIN;
	uint64_t x890 = 1718750044LLU;
	uint8_t x891 = UINT8_MAX;
	int16_t x892 = 0;
	volatile int32_t t22 = 239083839;

	t22 = (((x889-x890)<x891)<<x892);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x1009 = 34U;
	static volatile int16_t x1010 = INT16_MIN;
	volatile int64_t x1011 = -9473332015LL;
	static int8_t x1012 = 25;
	static int32_t t23 = -48;

	t23 = (((x1009-x1010)<x1011)<<x1012);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1013 = -15;
	uint16_t x1015 = UINT16_MAX;

	t24 = (((x1013-x1014)<x1015)<<x1016);

	if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1021 = INT16_MIN;
	volatile int16_t x1022 = INT16_MIN;
	uint8_t x1023 = 1U;
	volatile uint32_t x1024 = 6U;

	t25 = (((x1021-x1022)<x1023)<<x1024);

	if (t25 != 64) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1057 = 3180LLU;
	int32_t x1058 = 1623;
	int32_t x1059 = 6;
	volatile int32_t t26 = 3849;

	t26 = (((x1057-x1058)<x1059)<<x1060);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1097 = UINT32_MAX;
	static int16_t x1098 = INT16_MAX;
	static int32_t x1099 = INT32_MIN;
	volatile uint16_t x1100 = 21U;
	volatile int32_t t27 = 1;

	t27 = (((x1097-x1098)<x1099)<<x1100);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1158 = INT32_MAX;
	static uint16_t x1159 = 6U;
	static volatile uint32_t x1160 = 13U;
	int32_t t28 = -1917162;

	t28 = (((x1157-x1158)<x1159)<<x1160);

	if (t28 != 8192) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1173 = 2U;
	uint8_t x1175 = 3U;
	uint8_t x1176 = 16U;
	int32_t t29 = -1796898;

	t29 = (((x1173-x1174)<x1175)<<x1176);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1185 = -361655528624546598LL;
	uint16_t x1186 = 100U;
	static int64_t x1187 = -18787196LL;
	uint8_t x1188 = 3U;

	t30 = (((x1185-x1186)<x1187)<<x1188);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1209 = -24;
	volatile uint8_t x1210 = 0U;
	uint64_t x1211 = UINT64_MAX;
	uint8_t x1212 = 9U;
	int32_t t31 = 7446893;

	t31 = (((x1209-x1210)<x1211)<<x1212);

	if (t31 != 512) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1217 = UINT8_MAX;
	static int16_t x1218 = INT16_MAX;
	int8_t x1219 = -1;
	volatile int32_t t32 = -80628;

	t32 = (((x1217-x1218)<x1219)<<x1220);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1249 = 2;
	int32_t x1250 = -4405;
	int64_t x1251 = INT64_MIN;
	static uint8_t x1252 = 3U;

	t33 = (((x1249-x1250)<x1251)<<x1252);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1365 = 8U;
	int8_t x1366 = 3;
	int32_t x1367 = INT32_MIN;
	volatile int32_t t34 = -981499;

	t34 = (((x1365-x1366)<x1367)<<x1368);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x1369 = INT8_MAX;
	int16_t x1371 = 2282;
	uint32_t x1372 = 1U;
	volatile int32_t t35 = 2000805;

	t35 = (((x1369-x1370)<x1371)<<x1372);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1387 = 147LL;
	int8_t x1388 = 18;
	static int32_t t36 = 114217893;

	t36 = (((x1385-x1386)<x1387)<<x1388);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1393 = 13U;
	uint8_t x1395 = 9U;
	static uint16_t x1396 = 14U;

	t37 = (((x1393-x1394)<x1395)<<x1396);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1417 = INT64_MIN;
	uint64_t x1418 = UINT64_MAX;
	int32_t x1419 = INT32_MAX;
	volatile uint8_t x1420 = 3U;
	static volatile int32_t t38 = -4452;

	t38 = (((x1417-x1418)<x1419)<<x1420);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1437 = UINT8_MAX;
	static uint32_t x1438 = 83945U;
	int64_t x1439 = 39172268665596LL;
	volatile int8_t x1440 = 5;
	volatile int32_t t39 = -73001955;

	t39 = (((x1437-x1438)<x1439)<<x1440);

	if (t39 != 32) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1489 = -1LL;
	volatile uint8_t x1491 = 1U;
	volatile int8_t x1492 = 1;

	t40 = (((x1489-x1490)<x1491)<<x1492);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1561 = UINT64_MAX;
	static uint16_t x1563 = 3828U;
	int8_t x1564 = 31;
	int32_t t41 = -3334;

	t41 = (((x1561-x1562)<x1563)<<x1564);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1570 = 5LLU;
	int64_t x1571 = INT64_MIN;
	static uint32_t x1572 = 26U;
	int32_t t42 = 3328;

	t42 = (((x1569-x1570)<x1571)<<x1572);

	if (t42 != 67108864) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1593 = UINT16_MAX;
	static int64_t x1595 = INT64_MIN;
	static uint16_t x1596 = 1U;
	int32_t t43 = 39013152;

	t43 = (((x1593-x1594)<x1595)<<x1596);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1605 = UINT16_MAX;
	int16_t x1607 = -1;
	uint16_t x1608 = 7U;
	int32_t t44 = 36;

	t44 = (((x1605-x1606)<x1607)<<x1608);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1773 = 2;
	int8_t x1774 = INT8_MIN;
	int8_t x1775 = INT8_MIN;
	static uint8_t x1776 = 2U;

	t45 = (((x1773-x1774)<x1775)<<x1776);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1849 = INT16_MAX;
	int8_t x1850 = INT8_MIN;
	int8_t x1851 = -1;
	volatile uint8_t x1852 = 6U;
	static volatile int32_t t46 = 4021;

	t46 = (((x1849-x1850)<x1851)<<x1852);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1865 = UINT64_MAX;
	uint64_t x1867 = 801LLU;
	volatile uint32_t x1868 = 6U;

	t47 = (((x1865-x1866)<x1867)<<x1868);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1885 = 1602;
	static uint8_t x1886 = 5U;
	volatile int32_t x1887 = 2828131;
	uint8_t x1888 = 1U;
	int32_t t48 = 34;

	t48 = (((x1885-x1886)<x1887)<<x1888);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1933 = 19U;
	uint32_t x1934 = 263U;
	int32_t x1935 = -403420;
	int32_t x1936 = 1;
	int32_t t49 = -3302;

	t49 = (((x1933-x1934)<x1935)<<x1936);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1997 = -293376LL;
	static volatile int32_t x1998 = INT32_MAX;
	int16_t x1999 = INT16_MIN;
	uint16_t x2000 = 1U;
	volatile int32_t t50 = 420653;

	t50 = (((x1997-x1998)<x1999)<<x2000);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2002 = INT32_MIN;
	uint32_t x2003 = 29U;
	uint8_t x2004 = 9U;

	t51 = (((x2001-x2002)<x2003)<<x2004);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2029 = -2;
	static volatile int32_t x2030 = INT32_MIN;
	static volatile int32_t x2031 = INT32_MIN;
	int8_t x2032 = 0;
	static int32_t t52 = 3380425;

	t52 = (((x2029-x2030)<x2031)<<x2032);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2053 = UINT64_MAX;
	int64_t x2054 = -499352710430429LL;
	int64_t x2055 = -215886050LL;
	volatile uint8_t x2056 = 27U;
	int32_t t53 = -709;

	t53 = (((x2053-x2054)<x2055)<<x2056);

	if (t53 != 134217728) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2102 = 0;
	static int8_t x2103 = -1;
	int8_t x2104 = 23;
	volatile int32_t t54 = -295;

	t54 = (((x2101-x2102)<x2103)<<x2104);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2105 = UINT64_MAX;
	static int16_t x2107 = -1;
	int8_t x2108 = 7;
	int32_t t55 = 1;

	t55 = (((x2105-x2106)<x2107)<<x2108);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2137 = -4;
	uint32_t x2138 = 2744305U;
	int64_t x2139 = INT64_MIN;
	int8_t x2140 = 25;

	t56 = (((x2137-x2138)<x2139)<<x2140);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2142 = INT8_MIN;
	uint32_t x2143 = 299866U;
	static uint8_t x2144 = 1U;
	volatile int32_t t57 = 57663;

	t57 = (((x2141-x2142)<x2143)<<x2144);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2167 = INT8_MIN;
	volatile int8_t x2168 = 1;
	int32_t t58 = 1383;

	t58 = (((x2165-x2166)<x2167)<<x2168);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2177 = INT8_MAX;
	int8_t x2179 = 34;
	static int32_t x2180 = 20;
	static volatile int32_t t59 = 95;

	t59 = (((x2177-x2178)<x2179)<<x2180);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2218 = 71U;
	int8_t x2219 = 0;
	int8_t x2220 = 0;

	t60 = (((x2217-x2218)<x2219)<<x2220);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2381 = -155726;
	int16_t x2382 = -5;
	uint8_t x2383 = UINT8_MAX;
	volatile int32_t t61 = 3099384;

	t61 = (((x2381-x2382)<x2383)<<x2384);

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2401 = -1LL;
	int16_t x2402 = -1;
	uint32_t x2404 = 11U;
	volatile int32_t t62 = -513;

	t62 = (((x2401-x2402)<x2403)<<x2404);

	if (t62 != 2048) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2406 = -1LL;
	uint64_t x2407 = 513155LLU;
	int64_t x2408 = 23LL;
	int32_t t63 = 76;

	t63 = (((x2405-x2406)<x2407)<<x2408);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x2501 = 6833U;
	int64_t x2502 = 180002740862983LL;
	uint64_t x2503 = 181LLU;
	int16_t x2504 = 14;
	volatile int32_t t64 = 108701;

	t64 = (((x2501-x2502)<x2503)<<x2504);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2515 = INT8_MIN;
	int8_t x2516 = 1;

	t65 = (((x2513-x2514)<x2515)<<x2516);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2521 = 10756;
	int8_t x2522 = 5;
	int8_t x2524 = 1;
	volatile int32_t t66 = -1;

	t66 = (((x2521-x2522)<x2523)<<x2524);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2581 = 2;
	int32_t x2582 = 351091;
	volatile int32_t t67 = -1433338;

	t67 = (((x2581-x2582)<x2583)<<x2584);

	if (t67 != 2048) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2589 = 21474LL;
	volatile int16_t x2590 = INT16_MIN;
	static int16_t x2592 = 8;

	t68 = (((x2589-x2590)<x2591)<<x2592);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2625 = 26;
	int64_t x2626 = 79862891169974082LL;
	int32_t x2627 = -1;
	uint8_t x2628 = 0U;
	int32_t t69 = 797;

	t69 = (((x2625-x2626)<x2627)<<x2628);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2665 = INT32_MIN;
	volatile int64_t x2666 = INT64_MIN;
	int32_t t70 = 50620;

	t70 = (((x2665-x2666)<x2667)<<x2668);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2674 = UINT16_MAX;
	volatile uint32_t x2675 = 2641U;
	int16_t x2676 = 7;
	volatile int32_t t71 = -2140;

	t71 = (((x2673-x2674)<x2675)<<x2676);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2733 = UINT8_MAX;
	int8_t x2734 = -1;
	static uint8_t x2736 = 1U;
	static volatile int32_t t72 = -289617;

	t72 = (((x2733-x2734)<x2735)<<x2736);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x2777 = 3248LLU;
	volatile int32_t x2778 = INT32_MAX;
	int16_t x2779 = INT16_MIN;
	int8_t x2780 = 1;
	volatile int32_t t73 = -424411846;

	t73 = (((x2777-x2778)<x2779)<<x2780);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2849 = INT32_MIN;
	int32_t x2850 = -1;
	int64_t x2851 = -1LL;
	uint8_t x2852 = 4U;

	t74 = (((x2849-x2850)<x2851)<<x2852);

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2853 = INT32_MAX;
	uint64_t x2854 = 43054478697190LLU;
	uint8_t x2855 = 1U;
	volatile int64_t x2856 = 0LL;
	int32_t t75 = -36555284;

	t75 = (((x2853-x2854)<x2855)<<x2856);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2877 = -1;
	uint64_t x2878 = 187926831LLU;
	int16_t x2879 = INT16_MAX;
	volatile uint32_t x2880 = 16U;
	volatile int32_t t76 = 23888644;

	t76 = (((x2877-x2878)<x2879)<<x2880);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2885 = -1;
	uint32_t x2887 = 2U;
	uint16_t x2888 = 3U;
	int32_t t77 = 62662681;

	t77 = (((x2885-x2886)<x2887)<<x2888);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x2913 = -1;
	static uint64_t x2915 = UINT64_MAX;
	volatile uint8_t x2916 = 25U;
	int32_t t78 = 7518;

	t78 = (((x2913-x2914)<x2915)<<x2916);

	if (t78 != 33554432) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2929 = UINT64_MAX;
	int64_t x2930 = INT64_MIN;
	volatile int8_t x2931 = INT8_MIN;
	uint8_t x2932 = 2U;
	volatile int32_t t79 = -73769;

	t79 = (((x2929-x2930)<x2931)<<x2932);

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x2957 = UINT32_MAX;
	uint8_t x2959 = UINT8_MAX;
	uint8_t x2960 = 2U;
	volatile int32_t t80 = -200903535;

	t80 = (((x2957-x2958)<x2959)<<x2960);

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2977 = UINT64_MAX;
	volatile uint64_t x2978 = 33408807202105882LLU;
	int64_t x2979 = INT64_MIN;
	static int32_t t81 = -13;

	t81 = (((x2977-x2978)<x2979)<<x2980);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2982 = -1LL;
	int8_t x2983 = -5;
	static int16_t x2984 = 5;
	static int32_t t82 = 49609397;

	t82 = (((x2981-x2982)<x2983)<<x2984);

	if (t82 != 32) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2993 = 43U;
	int32_t x2994 = INT32_MIN;
	int8_t x2995 = 1;
	int16_t x2996 = 11;
	int32_t t83 = 26;

	t83 = (((x2993-x2994)<x2995)<<x2996);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2997 = UINT8_MAX;
	int8_t x2998 = INT8_MIN;
	int16_t x3000 = 1;

	t84 = (((x2997-x2998)<x2999)<<x3000);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3013 = 12U;
	int32_t x3014 = -1;
	int64_t x3015 = -1LL;
	uint32_t x3016 = 3U;
	int32_t t85 = 23077813;

	t85 = (((x3013-x3014)<x3015)<<x3016);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3037 = UINT8_MAX;
	volatile int8_t x3038 = INT8_MIN;
	int8_t x3039 = 0;
	static int32_t x3040 = 11;

	t86 = (((x3037-x3038)<x3039)<<x3040);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3165 = 1U;
	int16_t x3166 = INT16_MAX;
	volatile uint8_t x3167 = 105U;
	static uint64_t x3168 = 2LLU;

	t87 = (((x3165-x3166)<x3167)<<x3168);

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3257 = 3099;
	uint8_t x3258 = 19U;
	static int64_t x3259 = INT64_MIN;
	int16_t x3260 = 1;
	volatile int32_t t88 = -22695206;

	t88 = (((x3257-x3258)<x3259)<<x3260);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3277 = INT8_MIN;
	int16_t x3279 = INT16_MIN;
	static int32_t t89 = -29906955;

	t89 = (((x3277-x3278)<x3279)<<x3280);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3285 = UINT8_MAX;
	int32_t x3286 = 502169661;
	int16_t x3287 = INT16_MIN;
	int16_t x3288 = 0;

	t90 = (((x3285-x3286)<x3287)<<x3288);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3289 = INT32_MIN;
	uint64_t x3290 = 86LLU;
	static int8_t x3291 = INT8_MIN;
	static int32_t t91 = -83;

	t91 = (((x3289-x3290)<x3291)<<x3292);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x3362 = 24;
	uint16_t x3363 = 27U;
	volatile int8_t x3364 = 0;
	static volatile int32_t t92 = -174779120;

	t92 = (((x3361-x3362)<x3363)<<x3364);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x3380 = 24U;
	int32_t t93 = -1;

	t93 = (((x3377-x3378)<x3379)<<x3380);

	if (t93 != 16777216) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3454 = INT16_MAX;
	uint32_t x3455 = 520004788U;
	volatile int32_t t94 = -22507573;

	t94 = (((x3453-x3454)<x3455)<<x3456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3553 = -1;
	static int16_t x3554 = INT16_MIN;
	uint8_t x3556 = 2U;
	int32_t t95 = -168710523;

	t95 = (((x3553-x3554)<x3555)<<x3556);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3605 = -1LL;
	int16_t x3606 = INT16_MAX;
	uint32_t x3608 = 7U;
	int32_t t96 = -444408188;

	t96 = (((x3605-x3606)<x3607)<<x3608);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3641 = 21136U;
	uint16_t x3643 = 88U;
	uint16_t x3644 = 3U;

	t97 = (((x3641-x3642)<x3643)<<x3644);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3657 = INT32_MAX;
	uint32_t x3658 = 894117116U;
	static int16_t x3659 = 2363;
	volatile uint8_t x3660 = 25U;
	volatile int32_t t98 = 7;

	t98 = (((x3657-x3658)<x3659)<<x3660);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3689 = INT32_MIN;
	int8_t x3690 = INT8_MIN;
	uint8_t x3691 = UINT8_MAX;
	static int8_t x3692 = 2;
	int32_t t99 = 85435570;

	t99 = (((x3689-x3690)<x3691)<<x3692);

	if (t99 != 4) { NG(); } else { ; }
	
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

