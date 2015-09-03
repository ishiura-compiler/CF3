#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x55 = 33;
static uint8_t x167 = 15U;
static uint64_t x264 = 3322623995LLU;
int16_t x442 = -1;
int8_t x457 = -1;
int8_t x491 = 0;
uint32_t x504 = UINT32_MAX;
uint64_t x509 = UINT64_MAX;
int64_t x510 = -39781932171518LL;
volatile uint64_t t9 = 1037550836962303LLU;
uint64_t t10 = 141618562631659977LLU;
volatile uint32_t t11 = 243094202U;
uint32_t t12 = 64085U;
int16_t x627 = 0;
uint64_t t13 = 495139441829323LLU;
volatile int8_t x635 = 1;
int32_t x653 = -26;
static int8_t x656 = INT8_MIN;
static int8_t x730 = INT8_MIN;
volatile int64_t t17 = -173062431243411781LL;
int8_t x736 = -1;
static volatile int64_t x785 = 16989289895837443LL;
uint8_t x787 = 58U;
volatile uint16_t x799 = 8U;
int32_t t21 = 55929710;
int32_t x826 = -2;
int64_t t22 = 3838032LL;
uint8_t x865 = 110U;
uint32_t x867 = 0U;
int16_t x868 = -15;
uint64_t t24 = 875258229131LLU;
int8_t x901 = INT8_MAX;
int8_t x902 = INT8_MIN;
volatile int32_t t26 = -54578339;
int64_t x984 = INT64_MIN;
uint64_t t27 = 69LLU;
uint32_t t28 = 115143U;
int64_t t30 = 293176659361LL;
int8_t x1311 = 6;
static volatile uint32_t x1399 = 0U;
static volatile uint8_t x1486 = 1U;
static uint32_t x1487 = 3U;
static int32_t x1788 = -1;
uint8_t x2085 = 13U;
volatile int32_t t45 = 485882;
static uint8_t x2117 = 12U;
uint64_t x2119 = 32LLU;
uint8_t x2125 = UINT8_MAX;
int8_t x2126 = INT8_MIN;
static int8_t x2127 = 1;
int32_t x2152 = INT32_MAX;
static volatile uint32_t t49 = 793280478U;
int16_t x2213 = 13113;
volatile int64_t t53 = -64414511663559LL;
static volatile int64_t x2526 = INT64_MIN;
int8_t x2528 = INT8_MAX;
int64_t t54 = -14633701369LL;
int16_t x2550 = INT16_MIN;
volatile int32_t t55 = 1;
int8_t x2563 = 6;
int64_t x2789 = INT64_MAX;
int16_t x2790 = -1;
int64_t t59 = -4047447751700LL;
uint64_t t60 = 0LLU;
static int64_t x2985 = INT64_MAX;
int8_t x2987 = 1;
static volatile int16_t x3163 = 0;
uint64_t x3199 = 15LLU;
static uint32_t x3269 = UINT32_MAX;
int8_t x3271 = 23;
static volatile uint64_t t69 = 123123595183889161LLU;
uint32_t x3499 = 21U;
int32_t t72 = -2;
volatile uint8_t x3729 = UINT8_MAX;
int8_t x3763 = 1;
int32_t x3768 = -1;
volatile int64_t x3801 = INT64_MAX;
static int64_t x3804 = -607LL;
static volatile int64_t x3818 = 3333798617398936267LL;
volatile int8_t x3819 = 0;
volatile int16_t x3820 = INT16_MAX;
static int16_t x3879 = 63;
static volatile int64_t x3880 = INT64_MAX;
volatile uint64_t t79 = 5LLU;
uint8_t x4109 = UINT8_MAX;
volatile uint8_t x4111 = 18U;
volatile uint64_t t82 = 13721333LLU;
int64_t x4175 = 1LL;
static int16_t x4201 = -27;
static uint8_t x4203 = 2U;
uint16_t x4281 = 13U;
int32_t x4282 = -63;
volatile int8_t x4299 = 0;
int64_t x4304 = INT64_MIN;
volatile uint64_t t88 = 12LLU;
uint64_t x4306 = UINT64_MAX;
uint64_t x4649 = 9LLU;
int64_t x4652 = -23234717099509LL;
uint64_t x4744 = UINT64_MAX;
volatile uint64_t t99 = 22460618556374LLU;


void f0(void) {
	int64_t x53 = -115674240LL;
	uint64_t x54 = 3453LLU;
	int64_t x56 = 2140614088533LL;
	uint64_t t0 = 62LLU;

	t0 = (((x53%x54)>>x55)/x56);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x165 = 1U;
	int16_t x166 = INT16_MAX;
	static int64_t x168 = INT64_MIN;
	volatile int64_t t1 = 6237039670LL;

	t1 = (((x165%x166)>>x167)/x168);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x173 = 4U;
	static int8_t x174 = -1;
	int8_t x175 = 13;
	static int8_t x176 = -5;
	static int32_t t2 = 797;

	t2 = (((x173%x174)>>x175)/x176);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x261 = 1304;
	int32_t x262 = INT32_MIN;
	static uint32_t x263 = 0U;
	volatile uint64_t t3 = 11948806650LLU;

	t3 = (((x261%x262)>>x263)/x264);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x301 = 5805275U;
	int16_t x302 = -410;
	int8_t x303 = 0;
	volatile int32_t x304 = INT32_MAX;
	volatile uint32_t t4 = 1877U;

	t4 = (((x301%x302)>>x303)/x304);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x441 = 2843U;
	int32_t x443 = 7;
	static uint32_t x444 = UINT32_MAX;
	uint32_t t5 = 1138589273U;

	t5 = (((x441%x442)>>x443)/x444);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x458 = -1;
	uint8_t x459 = 30U;
	volatile int32_t x460 = -1;
	int32_t t6 = -187839;

	t6 = (((x457%x458)>>x459)/x460);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x489 = 914LL;
	volatile int64_t x490 = -72689LL;
	int64_t x492 = 741771647102LL;
	volatile int64_t t7 = -24LL;

	t7 = (((x489%x490)>>x491)/x492);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MIN;
	uint16_t x503 = 20U;
	uint32_t t8 = 1U;

	t8 = (((x501%x502)>>x503)/x504);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x511 = 1;
	uint8_t x512 = 3U;

	t9 = (((x509%x510)>>x511)/x512);

	if (t9 != 6630322028586LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x561 = 14790048312LLU;
	static volatile int8_t x562 = 1;
	static volatile uint8_t x563 = 2U;
	volatile uint32_t x564 = 1158419405U;

	t10 = (((x561%x562)>>x563)/x564);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x577 = 4054685U;
	volatile int16_t x578 = INT16_MAX;
	uint16_t x579 = 19U;
	int16_t x580 = -1;

	t11 = (((x577%x578)>>x579)/x580);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x601 = 246;
	uint32_t x602 = 3079U;
	uint8_t x603 = 6U;
	uint16_t x604 = 981U;

	t12 = (((x601%x602)>>x603)/x604);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x625 = INT16_MAX;
	static uint64_t x626 = UINT64_MAX;
	int8_t x628 = -1;

	t13 = (((x625%x626)>>x627)/x628);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x633 = -111650696LL;
	int16_t x634 = -2;
	volatile int64_t x636 = 252975012701LL;
	static volatile int64_t t14 = -2393051693933LL;

	t14 = (((x633%x634)>>x635)/x636);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x654 = 728975U;
	int8_t x655 = 0;
	uint32_t t15 = 790393U;

	t15 = (((x653%x654)>>x655)/x656);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x701 = INT32_MIN;
	static uint16_t x702 = 1U;
	uint64_t x703 = 27LLU;
	volatile int64_t x704 = INT64_MIN;
	int64_t t16 = -2236873179978654643LL;

	t16 = (((x701%x702)>>x703)/x704);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x729 = INT32_MAX;
	static uint8_t x731 = 0U;
	int64_t x732 = INT64_MIN;

	t17 = (((x729%x730)>>x731)/x732);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x733 = INT64_MIN;
	int16_t x734 = INT16_MIN;
	static uint32_t x735 = 1U;
	static int64_t t18 = -501300484253471803LL;

	t18 = (((x733%x734)>>x735)/x736);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x786 = 423U;
	int32_t x788 = INT32_MIN;
	int64_t t19 = 146779366721LL;

	t19 = (((x785%x786)>>x787)/x788);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x797 = INT32_MIN;
	static int64_t x798 = -1LL;
	uint16_t x800 = 56U;
	int64_t t20 = 1LL;

	t20 = (((x797%x798)>>x799)/x800);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x809 = INT32_MIN;
	volatile int16_t x810 = INT16_MIN;
	volatile int16_t x811 = 4;
	static uint8_t x812 = 1U;

	t21 = (((x809%x810)>>x811)/x812);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x825 = INT64_MAX;
	int32_t x827 = 1;
	int32_t x828 = -1;

	t22 = (((x825%x826)>>x827)/x828);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x866 = 7U;
	volatile int32_t t23 = 10549843;

	t23 = (((x865%x866)>>x867)/x868);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x893 = INT8_MIN;
	volatile uint64_t x894 = 2292875410LLU;
	volatile int8_t x895 = 11;
	static volatile uint8_t x896 = UINT8_MAX;

	t24 = (((x893%x894)>>x895)/x896);

	if (t24 != 2259LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x897 = INT16_MIN;
	uint32_t x898 = UINT32_MAX;
	static uint16_t x899 = 6U;
	static uint64_t x900 = 654397114602555197LLU;
	volatile uint64_t t25 = 203405107742228641LLU;

	t25 = (((x897%x898)>>x899)/x900);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x903 = 1;
	static int32_t x904 = INT32_MIN;

	t26 = (((x901%x902)>>x903)/x904);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x981 = UINT16_MAX;
	uint64_t x982 = 169956439136LLU;
	int16_t x983 = 13;

	t27 = (((x981%x982)>>x983)/x984);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1213 = INT16_MIN;
	int16_t x1214 = INT16_MIN;
	static uint8_t x1215 = 0U;
	uint32_t x1216 = UINT32_MAX;

	t28 = (((x1213%x1214)>>x1215)/x1216);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1225 = 0U;
	uint16_t x1226 = UINT16_MAX;
	volatile uint8_t x1227 = 0U;
	volatile uint64_t x1228 = 1LLU;
	uint64_t t29 = 9901617714LLU;

	t29 = (((x1225%x1226)>>x1227)/x1228);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1245 = 3U;
	int32_t x1246 = INT32_MAX;
	uint32_t x1247 = 0U;
	int64_t x1248 = -1LL;

	t30 = (((x1245%x1246)>>x1247)/x1248);

	if (t30 != -3LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1277 = INT16_MIN;
	volatile int8_t x1278 = 1;
	int16_t x1279 = 6;
	int8_t x1280 = -2;
	static int32_t t31 = -49766;

	t31 = (((x1277%x1278)>>x1279)/x1280);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1309 = INT64_MIN;
	volatile int8_t x1310 = 1;
	static int64_t x1312 = 2LL;
	int64_t t32 = -416196758722LL;

	t32 = (((x1309%x1310)>>x1311)/x1312);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1397 = UINT32_MAX;
	int8_t x1398 = INT8_MIN;
	uint8_t x1400 = 19U;
	volatile uint32_t t33 = 60148820U;

	t33 = (((x1397%x1398)>>x1399)/x1400);

	if (t33 != 6U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1485 = INT32_MAX;
	uint8_t x1488 = 1U;
	int32_t t34 = 1;

	t34 = (((x1485%x1486)>>x1487)/x1488);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1489 = -1;
	uint64_t x1490 = 101341456506LLU;
	static int16_t x1491 = 0;
	int32_t x1492 = INT32_MIN;
	uint64_t t35 = 266020771742100LLU;

	t35 = (((x1489%x1490)>>x1491)/x1492);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1493 = 0U;
	volatile uint32_t x1494 = 7021973U;
	int8_t x1495 = 3;
	int64_t x1496 = -1LL;
	volatile int64_t t36 = -2989LL;

	t36 = (((x1493%x1494)>>x1495)/x1496);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1557 = 2;
	int64_t x1558 = -1LL;
	static int8_t x1559 = 0;
	int16_t x1560 = -4016;
	volatile int64_t t37 = 72777225275673595LL;

	t37 = (((x1557%x1558)>>x1559)/x1560);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1701 = INT16_MAX;
	int8_t x1702 = -1;
	uint64_t x1703 = 9LLU;
	uint64_t x1704 = 98539500603451520LLU;
	volatile uint64_t t38 = 3LLU;

	t38 = (((x1701%x1702)>>x1703)/x1704);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1785 = 3795LLU;
	volatile uint8_t x1786 = 1U;
	static volatile uint16_t x1787 = 6U;
	uint64_t t39 = 243521821522887LLU;

	t39 = (((x1785%x1786)>>x1787)/x1788);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1833 = -1;
	volatile int64_t x1834 = -1LL;
	volatile uint8_t x1835 = 42U;
	static uint64_t x1836 = 11697626483089LLU;
	volatile uint64_t t40 = 13708237LLU;

	t40 = (((x1833%x1834)>>x1835)/x1836);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1909 = 9U;
	static volatile uint32_t x1910 = UINT32_MAX;
	volatile int16_t x1911 = 1;
	volatile int16_t x1912 = -1;
	volatile uint32_t t41 = 238U;

	t41 = (((x1909%x1910)>>x1911)/x1912);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1917 = INT16_MAX;
	volatile int32_t x1918 = -8;
	uint8_t x1919 = 9U;
	static int8_t x1920 = INT8_MAX;
	volatile int32_t t42 = -348019513;

	t42 = (((x1917%x1918)>>x1919)/x1920);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1945 = 1760908190515LLU;
	static int8_t x1946 = -1;
	uint8_t x1947 = 3U;
	int16_t x1948 = INT16_MIN;
	static volatile uint64_t t43 = 2811208533592122LLU;

	t43 = (((x1945%x1946)>>x1947)/x1948);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2001 = 331U;
	int32_t x2002 = INT32_MIN;
	static uint8_t x2003 = 0U;
	int8_t x2004 = INT8_MAX;
	static volatile int32_t t44 = -571066030;

	t44 = (((x2001%x2002)>>x2003)/x2004);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2086 = -1;
	int64_t x2087 = 0LL;
	uint16_t x2088 = 29U;

	t45 = (((x2085%x2086)>>x2087)/x2088);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2093 = INT32_MAX;
	volatile int32_t x2094 = INT32_MIN;
	uint32_t x2095 = 21U;
	uint64_t x2096 = UINT64_MAX;
	uint64_t t46 = 3LLU;

	t46 = (((x2093%x2094)>>x2095)/x2096);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2118 = 1296304064054401LLU;
	uint8_t x2120 = 7U;
	uint64_t t47 = 0LLU;

	t47 = (((x2117%x2118)>>x2119)/x2120);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2128 = 7U;
	volatile int32_t t48 = 389;

	t48 = (((x2125%x2126)>>x2127)/x2128);

	if (t48 != 9) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2149 = 75323U;
	uint8_t x2150 = 115U;
	uint8_t x2151 = 0U;

	t49 = (((x2149%x2150)>>x2151)/x2152);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2177 = INT64_MAX;
	int8_t x2178 = INT8_MIN;
	int8_t x2179 = 0;
	volatile uint16_t x2180 = 16U;
	volatile int64_t t50 = 8218LL;

	t50 = (((x2177%x2178)>>x2179)/x2180);

	if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x2214 = INT64_MIN;
	volatile uint64_t x2215 = 36LLU;
	static int32_t x2216 = -1;
	int64_t t51 = 7947828LL;

	t51 = (((x2213%x2214)>>x2215)/x2216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2305 = 10991;
	uint16_t x2306 = 10U;
	int8_t x2307 = 0;
	volatile int32_t x2308 = INT32_MAX;
	volatile int32_t t52 = -245;

	t52 = (((x2305%x2306)>>x2307)/x2308);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2369 = 12654393600478197LL;
	int32_t x2370 = INT32_MIN;
	uint16_t x2371 = 15U;
	int16_t x2372 = 16078;

	t53 = (((x2369%x2370)>>x2371)/x2372);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2525 = INT16_MAX;
	static volatile uint16_t x2527 = 1U;

	t54 = (((x2525%x2526)>>x2527)/x2528);

	if (t54 != 129LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2549 = INT32_MAX;
	volatile int8_t x2551 = 6;
	int16_t x2552 = INT16_MIN;

	t55 = (((x2549%x2550)>>x2551)/x2552);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2561 = UINT16_MAX;
	int64_t x2562 = -2451413109413LL;
	int64_t x2564 = -2047LL;
	volatile int64_t t56 = 4427917587477022988LL;

	t56 = (((x2561%x2562)>>x2563)/x2564);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2701 = 1377088797925LL;
	int64_t x2702 = INT64_MIN;
	uint8_t x2703 = 5U;
	static int16_t x2704 = INT16_MIN;
	volatile int64_t t57 = 16852702523789267LL;

	t57 = (((x2701%x2702)>>x2703)/x2704);

	if (t57 != -1313294LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x2791 = 35U;
	uint16_t x2792 = 1594U;
	volatile int64_t t58 = 2593385743791858LL;

	t58 = (((x2789%x2790)>>x2791)/x2792);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2793 = -1LL;
	uint32_t x2794 = 1U;
	volatile uint8_t x2795 = 3U;
	int32_t x2796 = -1;

	t59 = (((x2793%x2794)>>x2795)/x2796);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2977 = 49485630325777935LLU;
	int32_t x2978 = INT32_MAX;
	int8_t x2979 = 29;
	uint8_t x2980 = 1U;

	t60 = (((x2977%x2978)>>x2979)/x2980);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2986 = 105588509;
	int64_t x2988 = INT64_MAX;
	int64_t t61 = -4100462397831LL;

	t61 = (((x2985%x2986)>>x2987)/x2988);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3013 = INT64_MAX;
	uint16_t x3014 = 120U;
	int16_t x3015 = 0;
	uint32_t x3016 = 201U;
	static int64_t t62 = -66636973LL;

	t62 = (((x3013%x3014)>>x3015)/x3016);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3061 = 1396473260U;
	int64_t x3062 = INT64_MIN;
	volatile int16_t x3063 = 1;
	uint64_t x3064 = 10LLU;
	uint64_t t63 = 309LLU;

	t63 = (((x3061%x3062)>>x3063)/x3064);

	if (t63 != 69823663LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x3145 = 533U;
	volatile int64_t x3146 = -50287159519756LL;
	int8_t x3147 = 30;
	volatile int16_t x3148 = 7793;
	static int64_t t64 = 70344949LL;

	t64 = (((x3145%x3146)>>x3147)/x3148);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3153 = 993340U;
	int8_t x3154 = INT8_MIN;
	int32_t x3155 = 0;
	int16_t x3156 = 6180;
	volatile uint32_t t65 = 14U;

	t65 = (((x3153%x3154)>>x3155)/x3156);

	if (t65 != 160U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3161 = 55724LLU;
	static volatile int8_t x3162 = 14;
	volatile uint16_t x3164 = UINT16_MAX;
	volatile uint64_t t66 = 124312LLU;

	t66 = (((x3161%x3162)>>x3163)/x3164);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3197 = -1;
	uint64_t x3198 = UINT64_MAX;
	uint64_t x3200 = 47LLU;
	volatile uint64_t t67 = 88932448642908LLU;

	t67 = (((x3197%x3198)>>x3199)/x3200);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3233 = 3U;
	int8_t x3234 = INT8_MIN;
	int16_t x3235 = 0;
	int64_t x3236 = -1LL;
	volatile int64_t t68 = -236LL;

	t68 = (((x3233%x3234)>>x3235)/x3236);

	if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3270 = INT8_MAX;
	uint64_t x3272 = 317LLU;

	t69 = (((x3269%x3270)>>x3271)/x3272);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3305 = INT8_MAX;
	static int64_t x3306 = -1LL;
	static int16_t x3307 = 0;
	int32_t x3308 = 1667262;
	int64_t t70 = -25625754494LL;

	t70 = (((x3305%x3306)>>x3307)/x3308);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3497 = 26U;
	static uint64_t x3498 = 124081703595LLU;
	int32_t x3500 = INT32_MAX;
	volatile uint64_t t71 = 1607306239876155LLU;

	t71 = (((x3497%x3498)>>x3499)/x3500);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3529 = 8674;
	uint16_t x3530 = 3158U;
	uint8_t x3531 = 6U;
	static int32_t x3532 = -1;

	t72 = (((x3529%x3530)>>x3531)/x3532);

	if (t72 != -36) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3657 = UINT8_MAX;
	uint16_t x3658 = UINT16_MAX;
	uint16_t x3659 = 7U;
	int64_t x3660 = INT64_MIN;
	volatile int64_t t73 = 99531972987476LL;

	t73 = (((x3657%x3658)>>x3659)/x3660);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3730 = -1;
	int8_t x3731 = 0;
	uint64_t x3732 = 50884LLU;
	static volatile uint64_t t74 = 15444747273LLU;

	t74 = (((x3729%x3730)>>x3731)/x3732);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3761 = INT16_MAX;
	int8_t x3762 = INT8_MIN;
	uint16_t x3764 = 1U;
	static int32_t t75 = 75281;

	t75 = (((x3761%x3762)>>x3763)/x3764);

	if (t75 != 63) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3765 = 337321421;
	uint16_t x3766 = 10U;
	int16_t x3767 = 4;
	static int32_t t76 = -9;

	t76 = (((x3765%x3766)>>x3767)/x3768);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3802 = 16941015393571697LLU;
	static int8_t x3803 = 23;
	volatile uint64_t t77 = 2940875365LLU;

	t77 = (((x3801%x3802)>>x3803)/x3804);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3817 = 4017;
	static int64_t t78 = -166869419116LL;

	t78 = (((x3817%x3818)>>x3819)/x3820);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x3877 = 32502LLU;
	int32_t x3878 = -13529;

	t79 = (((x3877%x3878)>>x3879)/x3880);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4089 = 7280142818847492LLU;
	volatile int8_t x4090 = INT8_MAX;
	uint8_t x4091 = 0U;
	static volatile int32_t x4092 = INT32_MIN;
	static uint64_t t80 = 182389857998923805LLU;

	t80 = (((x4089%x4090)>>x4091)/x4092);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x4110 = UINT8_MAX;
	static int64_t x4112 = 56842005696LL;
	static int64_t t81 = -230411834LL;

	t81 = (((x4109%x4110)>>x4111)/x4112);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4117 = INT16_MAX;
	static int64_t x4118 = INT64_MIN;
	uint16_t x4119 = 4U;
	static uint64_t x4120 = 12711LLU;

	t82 = (((x4117%x4118)>>x4119)/x4120);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4169 = INT8_MIN;
	uint64_t x4170 = 487587415369LLU;
	volatile uint8_t x4171 = 3U;
	static int32_t x4172 = -1;
	volatile uint64_t t83 = 8016608176855523LLU;

	t83 = (((x4169%x4170)>>x4171)/x4172);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4173 = INT32_MIN;
	int8_t x4174 = -1;
	int8_t x4176 = -1;
	int32_t t84 = 1317213;

	t84 = (((x4173%x4174)>>x4175)/x4176);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4202 = 443930722260LLU;
	static volatile int64_t x4204 = -27621361LL;
	static uint64_t t85 = 29737282LLU;

	t85 = (((x4201%x4202)>>x4203)/x4204);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4283 = 0U;
	uint8_t x4284 = 2U;
	int32_t t86 = -122;

	t86 = (((x4281%x4282)>>x4283)/x4284);

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4297 = 29468765U;
	volatile int8_t x4298 = INT8_MIN;
	int32_t x4300 = -1;
	uint32_t t87 = 201U;

	t87 = (((x4297%x4298)>>x4299)/x4300);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4301 = UINT64_MAX;
	int64_t x4302 = 3622074LL;
	int8_t x4303 = 6;

	t88 = (((x4301%x4302)>>x4303)/x4304);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4305 = UINT64_MAX;
	volatile uint16_t x4307 = 12U;
	int32_t x4308 = INT32_MIN;
	volatile uint64_t t89 = 56LLU;

	t89 = (((x4305%x4306)>>x4307)/x4308);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x4369 = INT16_MIN;
	int64_t x4370 = -1LL;
	uint8_t x4371 = 36U;
	volatile int32_t x4372 = 6406;
	int64_t t90 = -342159946772593LL;

	t90 = (((x4369%x4370)>>x4371)/x4372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4485 = 18274274415348LL;
	static uint16_t x4486 = 712U;
	int32_t x4487 = 39;
	int8_t x4488 = -19;
	volatile int64_t t91 = 9401LL;

	t91 = (((x4485%x4486)>>x4487)/x4488);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4581 = 32U;
	static uint8_t x4582 = 1U;
	uint16_t x4583 = 6U;
	int16_t x4584 = INT16_MAX;
	int32_t t92 = -30;

	t92 = (((x4581%x4582)>>x4583)/x4584);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4597 = 172112408354902LLU;
	uint8_t x4598 = 11U;
	static volatile int64_t x4599 = 1LL;
	int64_t x4600 = -215435LL;
	volatile uint64_t t93 = 6811247961LLU;

	t93 = (((x4597%x4598)>>x4599)/x4600);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4641 = 12061U;
	int16_t x4642 = -1;
	int16_t x4643 = 22;
	static uint64_t x4644 = UINT64_MAX;
	volatile uint64_t t94 = 2855421804LLU;

	t94 = (((x4641%x4642)>>x4643)/x4644);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4650 = INT16_MIN;
	volatile int32_t x4651 = 32;
	uint64_t t95 = 1936130LLU;

	t95 = (((x4649%x4650)>>x4651)/x4652);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4669 = INT16_MAX;
	int8_t x4670 = INT8_MAX;
	uint32_t x4671 = 19U;
	volatile uint32_t x4672 = 42217U;
	volatile uint32_t t96 = 3915181U;

	t96 = (((x4669%x4670)>>x4671)/x4672);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4697 = INT32_MIN;
	uint32_t x4698 = UINT32_MAX;
	uint8_t x4699 = 7U;
	uint16_t x4700 = 5457U;
	volatile uint32_t t97 = 1946U;

	t97 = (((x4697%x4698)>>x4699)/x4700);

	if (t97 != 3074U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x4737 = -1;
	uint64_t x4738 = UINT64_MAX;
	volatile int8_t x4739 = 1;
	volatile int32_t x4740 = INT32_MAX;
	volatile uint64_t t98 = 2LLU;

	t98 = (((x4737%x4738)>>x4739)/x4740);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x4741 = 1290741U;
	int64_t x4742 = INT64_MAX;
	static int8_t x4743 = 0;

	t99 = (((x4741%x4742)>>x4743)/x4744);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

