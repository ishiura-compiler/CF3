#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 0U;
volatile uint8_t x3 = 1U;
static volatile int32_t t0 = 53720;
static int8_t x105 = 1;
uint16_t x114 = 1U;
uint32_t x167 = 14044U;
uint32_t x225 = UINT32_MAX;
uint8_t x254 = 4U;
int32_t x275 = -1;
uint16_t x310 = 1U;
int64_t t9 = 276067530333195840LL;
volatile uint32_t x390 = 2U;
int16_t x392 = -1;
int8_t x605 = INT8_MAX;
volatile int32_t t16 = 9166;
uint64_t x709 = 120870LLU;
uint16_t x794 = 0U;
int16_t x795 = INT16_MIN;
int32_t t18 = -65436;
uint16_t x896 = UINT16_MAX;
uint32_t x906 = 18U;
int8_t x916 = INT8_MIN;
volatile uint32_t t21 = 346384684U;
int8_t x917 = 1;
int32_t t22 = -192524322;
volatile uint8_t x1149 = UINT8_MAX;
volatile int16_t x1376 = INT16_MIN;
uint16_t x1440 = UINT16_MAX;
static volatile uint32_t t29 = 806142224U;
uint64_t x1509 = UINT64_MAX;
uint8_t x1573 = 66U;
static uint8_t x1574 = 23U;
uint16_t x1601 = 110U;
uint16_t x1610 = 7U;
volatile int8_t x1611 = INT8_MAX;
volatile int32_t t33 = -3;
volatile uint8_t x1617 = UINT8_MAX;
static uint32_t x1619 = 249480308U;
volatile int16_t x1677 = 0;
uint32_t t36 = 1679784984U;
volatile uint16_t x1738 = 6U;
uint64_t t37 = 6077083327915LLU;
static int8_t x1822 = 1;
int32_t x1913 = 0;
int32_t t40 = -14421;
volatile int64_t x1927 = INT64_MAX;
uint64_t t42 = UINT64_MAX;
int64_t x2009 = INT64_MAX;
uint16_t x2053 = 5U;
volatile uint8_t x2054 = 12U;
int16_t x2079 = INT16_MAX;
uint16_t x2389 = UINT16_MAX;
int16_t x2391 = 1366;
static volatile uint8_t x2397 = 106U;
uint32_t x2449 = 14531081U;
int16_t x2451 = -1;
uint32_t t52 = UINT32_MAX;
uint64_t x2454 = 1LLU;
uint32_t x2552 = 7301426U;
static uint32_t t54 = UINT32_MAX;
uint8_t x2678 = 6U;
uint16_t x2750 = 1U;
volatile int32_t t57 = -11;
volatile int32_t t59 = -80417;
uint32_t x3274 = 16U;
static int16_t x3280 = -1;
int32_t x3397 = 0;
uint64_t x3441 = 34851924766255LLU;
int32_t t66 = 4009;
uint16_t x3492 = UINT16_MAX;
int32_t t67 = 191723;
int16_t x3509 = 0;
static int32_t x3511 = INT32_MIN;
volatile uint64_t x3609 = 1274993LLU;
uint16_t x3610 = 0U;
static uint64_t x3777 = 5656982022791644643LLU;
volatile int32_t x3779 = -1;
uint64_t x3965 = 10LLU;
uint64_t x4029 = UINT64_MAX;
static uint16_t x4030 = 2U;
volatile int8_t x4317 = 0;
volatile uint32_t x4320 = 1U;
volatile int64_t t78 = INT64_MAX;
uint8_t x4441 = UINT8_MAX;
int8_t x4473 = 1;
uint8_t x4542 = 12U;
volatile uint8_t x4590 = 1U;
int64_t x4592 = -1LL;
static volatile uint16_t x4611 = 7128U;
int64_t x4696 = -1422LL;
volatile int64_t t85 = -903029432LL;
int8_t x4835 = INT8_MAX;
static uint8_t x4894 = 13U;
int8_t x5099 = INT8_MAX;
volatile int16_t x5100 = INT16_MAX;
volatile int32_t t91 = 38758852;
uint32_t x5164 = 32962U;
uint16_t x5445 = UINT16_MAX;
uint16_t x5568 = 9U;
int32_t x5708 = INT32_MIN;
volatile int32_t t98 = 878582;
uint64_t t99 = UINT64_MAX;


void f0(void) {
	uint32_t x2 = 14U;
	int32_t x4 = INT32_MIN;

	t0 = (((x1<<x2)|x3)|x4);

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint8_t x6 = 19U;
	static uint16_t x7 = 11103U;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -1;

	t1 = (((x5<<x6)|x7)|x8);

	if (t1 != 133758975) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x106 = 0U;
	int32_t x107 = INT32_MAX;
	volatile int16_t x108 = INT16_MAX;
	int32_t t2 = INT32_MAX;

	t2 = (((x105<<x106)|x107)|x108);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x113 = 112U;
	static int64_t x115 = -1LL;
	uint8_t x116 = UINT8_MAX;
	static int64_t t3 = -10LL;

	t3 = (((x113<<x114)|x115)|x116);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x149 = 52510U;
	static uint32_t x150 = 0U;
	static int8_t x151 = 0;
	uint32_t x152 = 754U;
	volatile uint32_t t4 = 191373U;

	t4 = (((x149<<x150)|x151)|x152);

	if (t4 != 53246U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x165 = 61314454U;
	static uint16_t x166 = 1U;
	int16_t x168 = -149;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (((x165<<x166)|x167)|x168);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x226 = 3;
	uint64_t x227 = 5672404791LLU;
	int64_t x228 = INT64_MIN;
	uint64_t t6 = 412535785021LLU;

	t6 = (((x225<<x226)|x227)|x228);

	if (t6 != 9223372045444710399LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x253 = 441U;
	int64_t x255 = -22LL;
	int64_t x256 = 5763540142080018LL;
	int64_t t7 = -354LL;

	t7 = (((x253<<x254)|x255)|x256);

	if (t7 != -6LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x273 = 3900;
	volatile int16_t x274 = 0;
	int64_t x276 = INT64_MIN;
	int64_t t8 = 122047355LL;

	t8 = (((x273<<x274)|x275)|x276);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x309 = 5U;
	volatile int8_t x311 = -1;
	int64_t x312 = -1LL;

	t9 = (((x309<<x310)|x311)|x312);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x357 = UINT32_MAX;
	uint8_t x358 = 14U;
	int8_t x359 = -1;
	int64_t x360 = INT64_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (((x357<<x358)|x359)|x360);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x389 = 420U;
	int32_t x391 = INT32_MIN;
	int32_t t11 = 460441;

	t11 = (((x389<<x390)|x391)|x392);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x413 = 0U;
	uint8_t x414 = 1U;
	volatile int64_t x415 = INT64_MIN;
	uint8_t x416 = 18U;
	int64_t t12 = -63791LL;

	t12 = (((x413<<x414)|x415)|x416);

	if (t12 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x465 = UINT8_MAX;
	int16_t x466 = 0;
	uint8_t x467 = UINT8_MAX;
	static int32_t x468 = INT32_MAX;
	int32_t t13 = INT32_MAX;

	t13 = (((x465<<x466)|x467)|x468);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x521 = UINT64_MAX;
	uint8_t x522 = 1U;
	int64_t x523 = INT64_MAX;
	int16_t x524 = -9602;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (((x521<<x522)|x523)|x524);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x577 = 2U;
	uint16_t x578 = 28U;
	int8_t x579 = INT8_MIN;
	static uint16_t x580 = 10381U;
	static volatile int32_t t15 = 0;

	t15 = (((x577<<x578)|x579)|x580);

	if (t15 != -115) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x606 = 1U;
	int16_t x607 = -1909;
	static volatile uint16_t x608 = UINT16_MAX;

	t16 = (((x605<<x606)|x607)|x608);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x710 = 1LL;
	int64_t x711 = INT64_MAX;
	int16_t x712 = INT16_MIN;
	uint64_t t17 = UINT64_MAX;

	t17 = (((x709<<x710)|x711)|x712);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x793 = 44;
	volatile int32_t x796 = -1;

	t18 = (((x793<<x794)|x795)|x796);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x893 = UINT32_MAX;
	uint8_t x894 = 19U;
	int8_t x895 = -1;
	uint32_t t19 = UINT32_MAX;

	t19 = (((x893<<x894)|x895)|x896);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x905 = 3U;
	uint8_t x907 = 0U;
	volatile int32_t x908 = INT32_MIN;
	volatile uint32_t t20 = 26881335U;

	t20 = (((x905<<x906)|x907)|x908);

	if (t20 != 2148270080U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x913 = 1167U;
	uint8_t x914 = 2U;
	uint32_t x915 = 62125904U;

	t21 = (((x913<<x914)|x915)|x916);

	if (t21 != 4294967292U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x918 = 1LL;
	int16_t x919 = -1;
	uint8_t x920 = UINT8_MAX;

	t22 = (((x917<<x918)|x919)|x920);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1061 = 0U;
	uint8_t x1062 = 1U;
	int8_t x1063 = -1;
	static int16_t x1064 = INT16_MAX;
	static int32_t t23 = 0;

	t23 = (((x1061<<x1062)|x1063)|x1064);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1081 = 0;
	int16_t x1082 = 7;
	uint8_t x1083 = UINT8_MAX;
	int8_t x1084 = -1;
	int32_t t24 = 575383;

	t24 = (((x1081<<x1082)|x1083)|x1084);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1150 = 2U;
	int64_t x1151 = -1LL;
	int64_t x1152 = -1LL;
	volatile int64_t t25 = -434LL;

	t25 = (((x1149<<x1150)|x1151)|x1152);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1233 = 11230694LL;
	int16_t x1234 = 26;
	int32_t x1235 = INT32_MAX;
	int8_t x1236 = 1;
	static int64_t t26 = -4LL;

	t26 = (((x1233<<x1234)|x1235)|x1236);

	if (t26 != 753680861102079LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1265 = 4085U;
	volatile uint16_t x1266 = 1U;
	uint32_t x1267 = 32U;
	volatile uint8_t x1268 = UINT8_MAX;
	volatile uint32_t t27 = 105U;

	t27 = (((x1265<<x1266)|x1267)|x1268);

	if (t27 != 8191U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1373 = UINT64_MAX;
	uint8_t x1374 = 21U;
	volatile int32_t x1375 = -1;
	uint64_t t28 = UINT64_MAX;

	t28 = (((x1373<<x1374)|x1375)|x1376);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1437 = 331702U;
	static int16_t x1438 = 1;
	volatile int32_t x1439 = INT32_MAX;

	t29 = (((x1437<<x1438)|x1439)|x1440);

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1510 = 18;
	static uint32_t x1511 = 21483976U;
	int8_t x1512 = INT8_MIN;
	uint64_t t30 = 15149109721LLU;

	t30 = (((x1509<<x1510)|x1511)|x1512);

	if (t30 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1575 = INT8_MAX;
	int16_t x1576 = 1;
	int32_t t31 = 26968;

	t31 = (((x1573<<x1574)|x1575)|x1576);

	if (t31 != 553648255) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1602 = 0U;
	int32_t x1603 = -1;
	int16_t x1604 = -1;
	volatile int32_t t32 = -135;

	t32 = (((x1601<<x1602)|x1603)|x1604);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1609 = 238;
	volatile int16_t x1612 = INT16_MAX;

	t33 = (((x1609<<x1610)|x1611)|x1612);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1618 = 1U;
	uint8_t x1620 = UINT8_MAX;
	volatile uint32_t t34 = 264U;

	t34 = (((x1617<<x1618)|x1619)|x1620);

	if (t34 != 249480703U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x1661 = UINT8_MAX;
	int8_t x1662 = 0;
	uint32_t x1663 = 1826291U;
	volatile int32_t x1664 = -1;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x1661<<x1662)|x1663)|x1664);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1678 = 0U;
	uint16_t x1679 = UINT16_MAX;
	uint32_t x1680 = 11688849U;

	t36 = (((x1677<<x1678)|x1679)|x1680);

	if (t36 != 11730943U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1737 = 22629266869LLU;
	volatile int32_t x1739 = INT32_MIN;
	int8_t x1740 = -3;

	t37 = (((x1737<<x1738)|x1739)|x1740);

	if (t37 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1821 = UINT32_MAX;
	int8_t x1823 = INT8_MAX;
	int32_t x1824 = INT32_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x1821<<x1822)|x1823)|x1824);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1853 = UINT64_MAX;
	uint8_t x1854 = 13U;
	uint8_t x1855 = UINT8_MAX;
	int32_t x1856 = INT32_MIN;
	static volatile uint64_t t39 = 139427958681764566LLU;

	t39 = (((x1853<<x1854)|x1855)|x1856);

	if (t39 != 18446744073709543679LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x1914 = 1U;
	int16_t x1915 = 3062;
	int32_t x1916 = INT32_MIN;

	t40 = (((x1913<<x1914)|x1915)|x1916);

	if (t40 != -2147480586) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1925 = UINT8_MAX;
	int8_t x1926 = 4;
	int32_t x1928 = -1;
	static int64_t t41 = 6359834972125LL;

	t41 = (((x1925<<x1926)|x1927)|x1928);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1941 = UINT64_MAX;
	uint64_t x1942 = 25LLU;
	int8_t x1943 = -1;
	int32_t x1944 = -65655791;

	t42 = (((x1941<<x1942)|x1943)|x1944);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2010 = 0;
	int32_t x2011 = INT32_MAX;
	uint64_t x2012 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

	t43 = (((x2009<<x2010)|x2011)|x2012);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2055 = 1U;
	static volatile int16_t x2056 = INT16_MAX;
	int32_t t44 = -5178;

	t44 = (((x2053<<x2054)|x2055)|x2056);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x2077 = 2;
	volatile uint8_t x2078 = 11U;
	uint64_t x2080 = UINT64_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x2077<<x2078)|x2079)|x2080);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2133 = 13U;
	static volatile int16_t x2134 = 0;
	int8_t x2135 = 2;
	volatile int8_t x2136 = INT8_MIN;
	volatile int32_t t46 = -756920778;

	t46 = (((x2133<<x2134)|x2135)|x2136);

	if (t46 != -113) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2285 = INT64_MAX;
	volatile int16_t x2286 = 0;
	int16_t x2287 = -846;
	static int32_t x2288 = INT32_MIN;
	volatile int64_t t47 = 3571LL;

	t47 = (((x2285<<x2286)|x2287)|x2288);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2361 = INT16_MAX;
	uint8_t x2362 = 2U;
	volatile int16_t x2363 = INT16_MIN;
	volatile int8_t x2364 = INT8_MAX;
	volatile int32_t t48 = 55978;

	t48 = (((x2361<<x2362)|x2363)|x2364);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x2390 = 1;
	uint16_t x2392 = UINT16_MAX;
	volatile int32_t t49 = -7;

	t49 = (((x2389<<x2390)|x2391)|x2392);

	if (t49 != 131071) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2398 = 1;
	int32_t x2399 = INT32_MAX;
	volatile uint64_t x2400 = 55365884547578255LLU;
	volatile uint64_t t50 = 4692055193392136LLU;

	t50 = (((x2397<<x2398)|x2399)|x2400);

	if (t50 != 55365886541823999LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2437 = UINT64_MAX;
	uint16_t x2438 = 0U;
	int32_t x2439 = INT32_MAX;
	int64_t x2440 = INT64_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x2437<<x2438)|x2439)|x2440);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2450 = 8U;
	int32_t x2452 = -1;

	t52 = (((x2449<<x2450)|x2451)|x2452);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x2453 = UINT8_MAX;
	uint8_t x2455 = 1U;
	volatile int64_t x2456 = INT64_MIN;
	int64_t t53 = -52168084919974913LL;

	t53 = (((x2453<<x2454)|x2455)|x2456);

	if (t53 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x2549 = 5;
	uint8_t x2550 = 0U;
	int16_t x2551 = -2;

	t54 = (((x2549<<x2550)|x2551)|x2552);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2677 = 431885U;
	static uint64_t x2679 = 11190251216LLU;
	int64_t x2680 = INT64_MIN;
	uint64_t t55 = 43081312LLU;

	t55 = (((x2677<<x2678)|x2679)|x2680);

	if (t55 != 9223372048061820880LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2749 = INT8_MAX;
	int32_t x2751 = -1;
	int32_t x2752 = -1;
	volatile int32_t t56 = -14;

	t56 = (((x2749<<x2750)|x2751)|x2752);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2941 = 930U;
	uint8_t x2942 = 4U;
	int16_t x2943 = INT16_MIN;
	uint16_t x2944 = UINT16_MAX;

	t57 = (((x2941<<x2942)|x2943)|x2944);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3037 = UINT8_MAX;
	volatile uint16_t x3038 = 3U;
	volatile int64_t x3039 = INT64_MIN;
	static volatile int64_t x3040 = -1LL;
	static volatile int64_t t58 = -7398510768920LL;

	t58 = (((x3037<<x3038)|x3039)|x3040);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3201 = INT32_MAX;
	int32_t x3202 = 0;
	static uint16_t x3203 = 10627U;
	int32_t x3204 = INT32_MIN;

	t59 = (((x3201<<x3202)|x3203)|x3204);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3273 = 7U;
	static int8_t x3275 = INT8_MIN;
	int16_t x3276 = -1;
	volatile int32_t t60 = -427235;

	t60 = (((x3273<<x3274)|x3275)|x3276);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3277 = 2866;
	uint16_t x3278 = 1U;
	static volatile int32_t x3279 = 86725817;
	volatile int32_t t61 = 35289935;

	t61 = (((x3277<<x3278)|x3279)|x3280);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3281 = 1LLU;
	uint16_t x3282 = 57U;
	uint32_t x3283 = 10469U;
	static int8_t x3284 = INT8_MIN;
	volatile uint64_t t62 = 37037LLU;

	t62 = (((x3281<<x3282)|x3283)|x3284);

	if (t62 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3309 = INT16_MAX;
	int8_t x3310 = 1;
	volatile int16_t x3311 = -1;
	static int8_t x3312 = 0;
	volatile int32_t t63 = 539;

	t63 = (((x3309<<x3310)|x3311)|x3312);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3398 = 11;
	int64_t x3399 = -969637667LL;
	uint8_t x3400 = UINT8_MAX;
	static volatile int64_t t64 = -1056342437976158LL;

	t64 = (((x3397<<x3398)|x3399)|x3400);

	if (t64 != -969637633LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x3442 = 0;
	static volatile uint64_t x3443 = UINT64_MAX;
	uint32_t x3444 = 298U;
	static uint64_t t65 = UINT64_MAX;

	t65 = (((x3441<<x3442)|x3443)|x3444);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3485 = UINT8_MAX;
	uint8_t x3486 = 15U;
	volatile uint8_t x3487 = 3U;
	static int16_t x3488 = -1;

	t66 = (((x3485<<x3486)|x3487)|x3488);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x3489 = UINT8_MAX;
	int64_t x3490 = 1LL;
	int32_t x3491 = 15121204;

	t67 = (((x3489<<x3490)|x3491)|x3492);

	if (t67 != 15138815) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3510 = 3U;
	uint32_t x3512 = 1382238U;
	uint32_t t68 = 124095271U;

	t68 = (((x3509<<x3510)|x3511)|x3512);

	if (t68 != 2148865886U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x3611 = INT16_MIN;
	volatile uint64_t x3612 = 589946813613268123LLU;
	volatile uint64_t t69 = 46104LLU;

	t69 = (((x3609<<x3610)|x3611)|x3612);

	if (t69 != 18446744073709550843LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x3778 = 1;
	uint32_t x3780 = 1325U;
	uint64_t t70 = UINT64_MAX;

	t70 = (((x3777<<x3778)|x3779)|x3780);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3789 = 10;
	int8_t x3790 = 7;
	uint8_t x3791 = 1U;
	uint16_t x3792 = 4150U;
	volatile int32_t t71 = 365;

	t71 = (((x3789<<x3790)|x3791)|x3792);

	if (t71 != 5431) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3937 = UINT32_MAX;
	static uint8_t x3938 = 2U;
	static uint16_t x3939 = 3U;
	uint64_t x3940 = 15197457819LLU;
	volatile uint64_t t72 = 100968757626747LLU;

	t72 = (((x3937<<x3938)|x3939)|x3940);

	if (t72 != 17179869183LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3966 = 2U;
	static int8_t x3967 = INT8_MIN;
	int8_t x3968 = -13;
	uint64_t t73 = 909922462307LLU;

	t73 = (((x3965<<x3966)|x3967)|x3968);

	if (t73 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4031 = -38;
	uint16_t x4032 = UINT16_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (((x4029<<x4030)|x4031)|x4032);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x4093 = 2;
	uint8_t x4094 = 1U;
	int16_t x4095 = 20;
	int64_t x4096 = INT64_MIN;
	int64_t t75 = -1315LL;

	t75 = (((x4093<<x4094)|x4095)|x4096);

	if (t75 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4113 = 7U;
	static volatile int32_t x4114 = 1;
	static int16_t x4115 = INT16_MIN;
	static uint32_t x4116 = UINT32_MAX;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (((x4113<<x4114)|x4115)|x4116);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4133 = 1U;
	static uint8_t x4134 = 8U;
	uint32_t x4135 = 1300705U;
	volatile int64_t x4136 = -1LL;
	int64_t t77 = -8874580LL;

	t77 = (((x4133<<x4134)|x4135)|x4136);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4318 = 1;
	int64_t x4319 = INT64_MAX;

	t78 = (((x4317<<x4318)|x4319)|x4320);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4442 = 0;
	static uint32_t x4443 = 1U;
	uint8_t x4444 = 87U;
	uint32_t t79 = 955U;

	t79 = (((x4441<<x4442)|x4443)|x4444);

	if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4453 = 2U;
	uint32_t x4454 = 1U;
	int32_t x4455 = INT32_MAX;
	uint32_t x4456 = 88U;
	static volatile uint32_t t80 = 1506097U;

	t80 = (((x4453<<x4454)|x4455)|x4456);

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4474 = 22U;
	int8_t x4475 = INT8_MAX;
	int8_t x4476 = 0;
	static int32_t t81 = 103;

	t81 = (((x4473<<x4474)|x4475)|x4476);

	if (t81 != 4194431) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4541 = 1U;
	uint16_t x4543 = UINT16_MAX;
	static uint64_t x4544 = UINT64_MAX;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x4541<<x4542)|x4543)|x4544);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4589 = 26403822U;
	int16_t x4591 = INT16_MAX;
	volatile int64_t t83 = 106646LL;

	t83 = (((x4589<<x4590)|x4591)|x4592);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4609 = INT16_MAX;
	volatile int8_t x4610 = 2;
	volatile uint32_t x4612 = 30055U;
	volatile uint32_t t84 = 227247U;

	t84 = (((x4609<<x4610)|x4611)|x4612);

	if (t84 != 131071U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4693 = 879;
	static int64_t x4694 = 0LL;
	int64_t x4695 = INT64_MIN;

	t85 = (((x4693<<x4694)|x4695)|x4696);

	if (t85 != -1153LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x4833 = 48331LLU;
	uint8_t x4834 = 56U;
	int32_t x4836 = 1;
	static uint64_t t86 = 375339435996240904LLU;

	t86 = (((x4833<<x4834)|x4835)|x4836);

	if (t86 != 14627691589699371135LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4893 = UINT8_MAX;
	int8_t x4895 = INT8_MIN;
	uint64_t x4896 = 0LLU;
	static volatile uint64_t t87 = 0LLU;

	t87 = (((x4893<<x4894)|x4895)|x4896);

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4969 = 2;
	uint8_t x4970 = 8U;
	int8_t x4971 = -1;
	int64_t x4972 = INT64_MIN;
	int64_t t88 = -3036798887LL;

	t88 = (((x4969<<x4970)|x4971)|x4972);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x5033 = 1858LLU;
	uint32_t x5034 = 0U;
	static int32_t x5035 = -1;
	static volatile uint16_t x5036 = 3188U;
	uint64_t t89 = UINT64_MAX;

	t89 = (((x5033<<x5034)|x5035)|x5036);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5057 = 3631987;
	int16_t x5058 = 0;
	int32_t x5059 = INT32_MIN;
	uint64_t x5060 = 260972LLU;
	volatile uint64_t t90 = 1623887638LLU;

	t90 = (((x5057<<x5058)|x5059)|x5060);

	if (t90 != 18446744071565736831LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5097 = 1U;
	volatile uint32_t x5098 = 1U;

	t91 = (((x5097<<x5098)|x5099)|x5100);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5129 = 98U;
	static int16_t x5130 = 0;
	volatile uint8_t x5131 = 32U;
	uint32_t x5132 = 14413U;
	uint32_t t92 = 87U;

	t92 = (((x5129<<x5130)|x5131)|x5132);

	if (t92 != 14447U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5161 = 7;
	int8_t x5162 = 7;
	int8_t x5163 = -1;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (((x5161<<x5162)|x5163)|x5164);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5446 = 11;
	int64_t x5447 = INT64_MIN;
	int64_t x5448 = INT64_MIN;
	int64_t t94 = -537LL;

	t94 = (((x5445<<x5446)|x5447)|x5448);

	if (t94 != -9223372036720560128LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5513 = 45642214813108399LLU;
	uint8_t x5514 = 29U;
	int32_t x5515 = 7633148;
	int16_t x5516 = INT16_MIN;
	volatile uint64_t t95 = 30903374906067LLU;

	t95 = (((x5513<<x5514)|x5515)|x5516);

	if (t95 != 18446744073709549820LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5565 = INT16_MAX;
	uint8_t x5566 = 7U;
	uint32_t x5567 = 5100808U;
	uint32_t t96 = 2U;

	t96 = (((x5565<<x5566)|x5567)|x5568);

	if (t96 != 8388489U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5705 = 0;
	uint8_t x5706 = 6U;
	int16_t x5707 = INT16_MIN;
	int32_t t97 = -45;

	t97 = (((x5705<<x5706)|x5707)|x5708);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5713 = UINT8_MAX;
	uint32_t x5714 = 1U;
	static int32_t x5715 = INT32_MIN;
	int16_t x5716 = INT16_MIN;

	t98 = (((x5713<<x5714)|x5715)|x5716);

	if (t98 != -32258) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5745 = 4U;
	volatile uint16_t x5746 = 1U;
	volatile uint64_t x5747 = UINT64_MAX;
	static volatile int32_t x5748 = -1;

	t99 = (((x5745<<x5746)|x5747)|x5748);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

