#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x65 = UINT32_MAX;
volatile int32_t t1 = -363756;
static int16_t x117 = INT16_MAX;
uint64_t t5 = 123869147422LLU;
int8_t x362 = INT8_MIN;
volatile int8_t x411 = -1;
int64_t x425 = INT64_MIN;
uint32_t x552 = 12U;
uint64_t t10 = 248789LLU;
uint32_t x803 = 1171067019U;
volatile uint32_t t12 = 2U;
int16_t x872 = 0;
uint32_t x932 = 6U;
volatile int64_t x958 = INT64_MAX;
int64_t t17 = -58162229862LL;
uint8_t x1072 = 1U;
uint32_t x1077 = 0U;
volatile uint32_t t19 = 40366U;
int64_t x1199 = INT64_MIN;
volatile int16_t x1217 = INT16_MIN;
volatile uint64_t t21 = 975990950861LLU;
volatile int32_t t22 = -17;
uint64_t x1522 = UINT64_MAX;
int16_t x1526 = -1;
int8_t x1573 = 1;
volatile uint64_t t30 = 139001100497LLU;
static uint8_t x1593 = UINT8_MAX;
volatile uint16_t x1596 = 0U;
static int32_t x1650 = INT32_MIN;
volatile int64_t x1791 = INT64_MIN;
uint32_t x1895 = 3109555U;
volatile int16_t x2257 = INT16_MIN;
int8_t x2260 = 6;
volatile uint64_t t43 = 1076786221386579797LLU;
volatile int64_t x2379 = INT64_MIN;
static volatile uint64_t x2467 = UINT64_MAX;
volatile int8_t x2509 = -1;
volatile uint8_t x2512 = 30U;
static uint64_t x2557 = 3212317809818LLU;
volatile uint32_t t51 = 1U;
int64_t x2671 = INT64_MIN;
static int64_t t53 = 3038LL;
volatile uint64_t x2955 = UINT64_MAX;
volatile int16_t x2956 = 29;
volatile uint64_t t56 = 7LLU;
static int8_t x3071 = INT8_MAX;
int16_t x3094 = INT16_MIN;
uint64_t t58 = 15361569487662465LLU;
int8_t x3270 = INT8_MIN;
int32_t t61 = -3;
int16_t x3393 = 2256;
uint8_t x3395 = 1U;
int8_t x3420 = 7;
int8_t x3430 = 1;
int64_t x3538 = INT64_MIN;
uint64_t t66 = 15624725352315803LLU;
uint64_t x3577 = 317402938924231138LLU;
uint64_t t67 = 2346LLU;
volatile uint64_t x3650 = UINT64_MAX;
int8_t x3651 = INT8_MIN;
static volatile uint64_t t70 = 123868379LLU;
int16_t x3833 = INT16_MIN;
uint64_t x3834 = 4768487LLU;
volatile int32_t x3835 = -1;
uint8_t x3936 = 31U;
uint64_t t73 = 475044199173865LLU;
int16_t x4154 = 1;
uint64_t x4155 = 2147533556030558LLU;
uint8_t x4253 = UINT8_MAX;
int16_t x4254 = -1;
int8_t x4339 = INT8_MIN;
uint8_t x4480 = 3U;
static int8_t x4524 = 1;
static uint32_t x4839 = 831626535U;
uint64_t t88 = 51LLU;
volatile uint16_t x5014 = 6679U;
uint64_t t89 = 4LLU;
int8_t x5069 = 22;
int16_t x5070 = -1;
volatile uint64_t x5117 = 156489931LLU;
int32_t x5118 = INT32_MIN;
volatile uint64_t t94 = 4410040541889722LLU;
uint64_t x5138 = UINT64_MAX;
int32_t x5139 = INT32_MIN;
static uint8_t x5179 = 85U;
uint8_t x5180 = 17U;
uint64_t x5281 = UINT64_MAX;
uint32_t x5284 = 0U;
static int16_t x5412 = 0;
int64_t t99 = -713256794294806624LL;


void f0(void) {
	static volatile uint16_t x66 = 116U;
	int16_t x67 = INT16_MAX;
	static int32_t x68 = 1;
	uint32_t t0 = 3885814U;

	t0 = ((x65|(x66/x67))<<x68);

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x105 = 0U;
	int16_t x106 = -1;
	static int32_t x107 = 64;
	uint8_t x108 = 6U;

	t1 = ((x105|(x106/x107))<<x108);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x118 = INT16_MAX;
	uint32_t x119 = 167U;
	uint32_t x120 = 19U;
	static volatile uint32_t t2 = 7U;

	t2 = ((x117|(x118/x119))<<x120);

	if (t2 != 4294443008U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x125 = 13712U;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MAX;
	uint16_t x128 = 14U;
	int32_t t3 = -426422149;

	t3 = ((x125|(x126/x127))<<x128);

	if (t3 != 224657408) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MIN;
	volatile uint16_t x139 = 1U;
	uint16_t x140 = 12U;
	uint64_t t4 = 79487350056025497LLU;

	t4 = ((x137|(x138/x139))<<x140);

	if (t4 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = 1231355490LLU;
	int8_t x162 = INT8_MIN;
	int32_t x163 = -1;
	uint8_t x164 = 25U;

	t5 = ((x161|(x162/x163))<<x164);

	if (t5 != 41317438351998976LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x361 = 16484;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 0U;
	volatile int32_t t6 = -11289455;

	t6 = ((x361|(x362/x363))<<x364);

	if (t6 != 16485) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x409 = 3U;
	uint64_t x410 = UINT64_MAX;
	int16_t x412 = 1;
	uint64_t t7 = 81445LLU;

	t7 = ((x409|(x410/x411))<<x412);

	if (t7 != 6LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x426 = INT16_MIN;
	uint64_t x427 = 538766949657428483LLU;
	volatile int16_t x428 = 25;
	volatile uint64_t t8 = 25LLU;

	t8 = ((x425|(x426/x427))<<x428);

	if (t8 != 1140850688LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x525 = 26;
	static volatile int32_t x526 = INT32_MIN;
	int64_t x527 = -245390402060422869LL;
	uint8_t x528 = 0U;
	int64_t t9 = 1349328864588142978LL;

	t9 = ((x525|(x526/x527))<<x528);

	if (t9 != 26LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x549 = INT64_MIN;
	uint64_t x550 = 120289LLU;
	static int8_t x551 = -1;

	t10 = ((x549|(x550/x551))<<x552);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x673 = 44;
	int64_t x674 = INT64_MAX;
	int8_t x675 = 55;
	static volatile int8_t x676 = 0;
	int64_t t11 = 47157974392695LL;

	t11 = ((x673|(x674/x675))<<x676);

	if (t11 != 167697673397359596LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x801 = INT16_MIN;
	uint32_t x802 = UINT32_MAX;
	uint16_t x804 = 27U;

	t12 = ((x801|(x802/x803))<<x804);

	if (t12 != 402653184U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x869 = UINT64_MAX;
	uint8_t x870 = 4U;
	uint8_t x871 = 8U;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x869|(x870/x871))<<x872);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x913 = 32368702U;
	uint8_t x914 = UINT8_MAX;
	int8_t x915 = -3;
	uint8_t x916 = 4U;
	volatile uint32_t t14 = 657U;

	t14 = ((x913|(x914/x915))<<x916);

	if (t14 != 4294966256U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x929 = -1LL;
	uint64_t x930 = 5097LLU;
	int8_t x931 = -3;
	uint64_t t15 = 547552353016762LLU;

	t15 = ((x929|(x930/x931))<<x932);

	if (t15 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x953 = 9U;
	volatile int64_t x954 = 637612776LL;
	int64_t x955 = INT64_MIN;
	int8_t x956 = 0;
	volatile int64_t t16 = 240244161016239528LL;

	t16 = ((x953|(x954/x955))<<x956);

	if (t16 != 9LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x957 = INT8_MAX;
	uint32_t x959 = UINT32_MAX;
	int8_t x960 = 1;

	t17 = ((x957|(x958/x959))<<x960);

	if (t17 != 4294967550LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1069 = UINT16_MAX;
	uint16_t x1070 = UINT16_MAX;
	uint32_t x1071 = UINT32_MAX;
	static volatile uint32_t t18 = 26552328U;

	t18 = ((x1069|(x1070/x1071))<<x1072);

	if (t18 != 131070U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1078 = 1566U;
	volatile uint16_t x1079 = UINT16_MAX;
	static int16_t x1080 = 0;

	t19 = ((x1077|(x1078/x1079))<<x1080);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1197 = INT8_MAX;
	uint64_t x1198 = 7335037108452LLU;
	uint16_t x1200 = 7U;
	volatile uint64_t t20 = 91LLU;

	t20 = ((x1197|(x1198/x1199))<<x1200);

	if (t20 != 16256LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1218 = 949;
	uint64_t x1219 = 24357LLU;
	uint16_t x1220 = 2U;

	t21 = ((x1217|(x1218/x1219))<<x1220);

	if (t21 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1313 = 0;
	uint8_t x1314 = 47U;
	int8_t x1315 = INT8_MIN;
	int16_t x1316 = 1;

	t22 = ((x1313|(x1314/x1315))<<x1316);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1413 = -1;
	static uint64_t x1414 = UINT64_MAX;
	int8_t x1415 = -24;
	static uint8_t x1416 = 12U;
	uint64_t t23 = 17660535744453LLU;

	t23 = ((x1413|(x1414/x1415))<<x1416);

	if (t23 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1461 = UINT16_MAX;
	static uint16_t x1462 = 72U;
	uint16_t x1463 = 2U;
	int16_t x1464 = 0;
	int32_t t24 = -4;

	t24 = ((x1461|(x1462/x1463))<<x1464);

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1473 = 102U;
	uint64_t x1474 = 802564LLU;
	uint64_t x1475 = UINT64_MAX;
	uint8_t x1476 = 0U;
	uint64_t t25 = 1325174951078LLU;

	t25 = ((x1473|(x1474/x1475))<<x1476);

	if (t25 != 102LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1489 = 7260U;
	uint16_t x1490 = UINT16_MAX;
	int8_t x1491 = 1;
	int8_t x1492 = 1;
	int32_t t26 = 820;

	t26 = ((x1489|(x1490/x1491))<<x1492);

	if (t26 != 131070) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1521 = 21U;
	static int8_t x1523 = INT8_MIN;
	uint16_t x1524 = 35U;
	volatile uint64_t t27 = 180841210650LLU;

	t27 = ((x1521|(x1522/x1523))<<x1524);

	if (t27 != 721554505728LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1525 = 6181;
	volatile int8_t x1527 = -1;
	uint8_t x1528 = 15U;
	static int32_t t28 = -6313774;

	t28 = ((x1525|(x1526/x1527))<<x1528);

	if (t28 != 202539008) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1574 = 50;
	int8_t x1575 = INT8_MIN;
	uint8_t x1576 = 1U;
	static volatile int32_t t29 = -434;

	t29 = ((x1573|(x1574/x1575))<<x1576);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1585 = 1;
	uint64_t x1586 = UINT64_MAX;
	static uint32_t x1587 = 14U;
	int16_t x1588 = 23;

	t30 = ((x1585|(x1586/x1587))<<x1588);

	if (t30 != 5270498306772959232LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1594 = UINT16_MAX;
	uint64_t x1595 = 2168654421743776LLU;
	uint64_t t31 = 187822766LLU;

	t31 = ((x1593|(x1594/x1595))<<x1596);

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1649 = 634;
	uint64_t x1651 = 354570LLU;
	static uint16_t x1652 = 3U;
	uint64_t t32 = 8440LLU;

	t32 = ((x1649|(x1650/x1651))<<x1652);

	if (t32 != 416205410983920LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1657 = 49U;
	int32_t x1658 = -1;
	int64_t x1659 = 868508838830LL;
	int8_t x1660 = 1;
	volatile int64_t t33 = -4127889LL;

	t33 = ((x1657|(x1658/x1659))<<x1660);

	if (t33 != 98LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1689 = UINT8_MAX;
	int64_t x1690 = -1LL;
	uint8_t x1691 = 2U;
	volatile int8_t x1692 = 8;
	int64_t t34 = -2141169LL;

	t34 = ((x1689|(x1690/x1691))<<x1692);

	if (t34 != 65280LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1701 = 2U;
	uint16_t x1702 = UINT16_MAX;
	int32_t x1703 = INT32_MAX;
	int16_t x1704 = 21;
	volatile int32_t t35 = 21;

	t35 = ((x1701|(x1702/x1703))<<x1704);

	if (t35 != 4194304) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1709 = 2947U;
	int16_t x1710 = -1;
	volatile int16_t x1711 = INT16_MAX;
	volatile uint8_t x1712 = 1U;
	static uint32_t t36 = 66367412U;

	t36 = ((x1709|(x1710/x1711))<<x1712);

	if (t36 != 5894U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1733 = UINT32_MAX;
	volatile int32_t x1734 = INT32_MIN;
	volatile int8_t x1735 = 23;
	volatile int8_t x1736 = 4;
	static uint32_t t37 = 197464U;

	t37 = ((x1733|(x1734/x1735))<<x1736);

	if (t37 != 4294967280U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1789 = 1U;
	static uint32_t x1790 = 3035U;
	volatile uint32_t x1792 = 11U;
	volatile int64_t t38 = -257461606534092LL;

	t38 = ((x1789|(x1790/x1791))<<x1792);

	if (t38 != 2048LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1893 = 15U;
	static uint8_t x1894 = 1U;
	uint32_t x1896 = 2U;
	static volatile uint32_t t39 = 684553250U;

	t39 = ((x1893|(x1894/x1895))<<x1896);

	if (t39 != 60U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2013 = 98704U;
	int32_t x2014 = INT32_MIN;
	volatile int16_t x2015 = INT16_MAX;
	volatile uint32_t x2016 = 5U;
	uint32_t t40 = 1U;

	t40 = ((x2013|(x2014/x2015))<<x2016);

	if (t40 != 4294967232U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2085 = INT8_MAX;
	static uint8_t x2086 = 14U;
	static int16_t x2087 = INT16_MIN;
	int8_t x2088 = 1;
	static volatile int32_t t41 = -6222;

	t41 = ((x2085|(x2086/x2087))<<x2088);

	if (t41 != 254) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2258 = INT16_MIN;
	uint32_t x2259 = 20U;
	uint32_t t42 = 5U;

	t42 = ((x2257|(x2258/x2259))<<x2260);

	if (t42 != 4294023552U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2369 = UINT64_MAX;
	volatile uint32_t x2370 = 0U;
	uint8_t x2371 = 1U;
	int8_t x2372 = 10;

	t43 = ((x2369|(x2370/x2371))<<x2372);

	if (t43 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2377 = UINT32_MAX;
	uint32_t x2378 = UINT32_MAX;
	static uint64_t x2380 = 3LLU;
	int64_t t44 = 6772LL;

	t44 = ((x2377|(x2378/x2379))<<x2380);

	if (t44 != 34359738360LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2437 = INT8_MIN;
	uint64_t x2438 = 17474329246947LLU;
	int64_t x2439 = -74679644271LL;
	volatile uint16_t x2440 = 8U;
	uint64_t t45 = 155166918LLU;

	t45 = ((x2437|(x2438/x2439))<<x2440);

	if (t45 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2453 = 1;
	volatile uint64_t x2454 = 5LLU;
	uint32_t x2455 = UINT32_MAX;
	int32_t x2456 = 29;
	static volatile uint64_t t46 = 152057058LLU;

	t46 = ((x2453|(x2454/x2455))<<x2456);

	if (t46 != 536870912LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2465 = INT16_MIN;
	volatile uint64_t x2466 = UINT64_MAX;
	static uint8_t x2468 = 8U;
	uint64_t t47 = 13555LLU;

	t47 = ((x2465|(x2466/x2467))<<x2468);

	if (t47 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2477 = 3007743U;
	int16_t x2478 = -15;
	uint64_t x2479 = UINT64_MAX;
	int8_t x2480 = 1;
	volatile uint64_t t48 = 244836340734346291LLU;

	t48 = ((x2477|(x2478/x2479))<<x2480);

	if (t48 != 6015486LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2510 = 1059526LLU;
	int32_t x2511 = -10;
	volatile uint64_t t49 = 26165467667LLU;

	t49 = ((x2509|(x2510/x2511))<<x2512);

	if (t49 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2558 = INT64_MAX;
	volatile int16_t x2559 = 1;
	static uint8_t x2560 = 4U;
	uint64_t t50 = 379LLU;

	t50 = ((x2557|(x2558/x2559))<<x2560);

	if (t50 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2589 = 289;
	static uint8_t x2590 = 78U;
	uint32_t x2591 = 57U;
	uint16_t x2592 = 2U;

	t51 = ((x2589|(x2590/x2591))<<x2592);

	if (t51 != 1156U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2653 = -1;
	uint64_t x2654 = UINT64_MAX;
	int64_t x2655 = INT64_MIN;
	static int8_t x2656 = 7;
	volatile uint64_t t52 = 6333776614611LLU;

	t52 = ((x2653|(x2654/x2655))<<x2656);

	if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x2669 = 11761U;
	int8_t x2670 = -1;
	uint8_t x2672 = 2U;

	t53 = ((x2669|(x2670/x2671))<<x2672);

	if (t53 != 47044LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2905 = UINT64_MAX;
	int32_t x2906 = INT32_MIN;
	int64_t x2907 = INT64_MIN;
	uint16_t x2908 = 47U;
	uint64_t t54 = 58289LLU;

	t54 = ((x2905|(x2906/x2907))<<x2908);

	if (t54 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2929 = UINT8_MAX;
	int64_t x2930 = INT64_MIN;
	int16_t x2931 = INT16_MIN;
	volatile uint16_t x2932 = 3U;
	int64_t t55 = -242542840LL;

	t55 = ((x2929|(x2930/x2931))<<x2932);

	if (t55 != 2251799813687288LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2953 = UINT32_MAX;
	static volatile int64_t x2954 = INT64_MIN;

	t56 = ((x2953|(x2954/x2955))<<x2956);

	if (t56 != 2305843008676823040LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x3069 = 164129LLU;
	static volatile uint64_t x3070 = 28606LLU;
	int8_t x3072 = 0;
	uint64_t t57 = 61102285678601874LLU;

	t57 = ((x3069|(x3070/x3071))<<x3072);

	if (t57 != 164321LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3093 = INT32_MIN;
	volatile uint64_t x3095 = 1136LLU;
	volatile uint16_t x3096 = 20U;

	t58 = ((x3093|(x3094/x3095))<<x3096);

	if (t58 != 18444809428768129024LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3237 = -1;
	int16_t x3238 = 469;
	uint64_t x3239 = 30559LLU;
	volatile int16_t x3240 = 1;
	volatile uint64_t t59 = 283288443712345LLU;

	t59 = ((x3237|(x3238/x3239))<<x3240);

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3269 = 1U;
	volatile uint32_t x3271 = 283U;
	uint8_t x3272 = 9U;
	uint32_t t60 = 54572087U;

	t60 = ((x3269|(x3270/x3271))<<x3272);

	if (t60 != 3475432960U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3305 = INT8_MAX;
	volatile int8_t x3306 = 1;
	static int8_t x3307 = INT8_MAX;
	int64_t x3308 = 1LL;

	t61 = ((x3305|(x3306/x3307))<<x3308);

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3369 = -18;
	int8_t x3370 = -4;
	static uint64_t x3371 = UINT64_MAX;
	uint32_t x3372 = 6U;
	volatile uint64_t t62 = 135904200962906LLU;

	t62 = ((x3369|(x3370/x3371))<<x3372);

	if (t62 != 18446744073709550464LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3394 = INT8_MAX;
	int16_t x3396 = 0;
	static volatile int32_t t63 = -24391;

	t63 = ((x3393|(x3394/x3395))<<x3396);

	if (t63 != 2303) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3417 = 5776;
	uint32_t x3418 = UINT32_MAX;
	int16_t x3419 = INT16_MIN;
	uint32_t t64 = 41302626U;

	t64 = ((x3417|(x3418/x3419))<<x3420);

	if (t64 != 739456U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3429 = INT64_MAX;
	uint8_t x3431 = 5U;
	static uint8_t x3432 = 0U;
	static volatile int64_t t65 = INT64_MAX;

	t65 = ((x3429|(x3430/x3431))<<x3432);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3537 = 31991LLU;
	int32_t x3539 = INT32_MIN;
	uint8_t x3540 = 42U;

	t66 = ((x3537|(x3538/x3539))<<x3540);

	if (t66 != 140697905936728064LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3578 = 2559535U;
	uint8_t x3579 = 62U;
	static int8_t x3580 = 0;

	t67 = ((x3577|(x3578/x3579))<<x3580);

	if (t67 != 317402938924263906LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3649 = -20256576LL;
	volatile int16_t x3652 = 2;
	uint64_t t68 = 27429810658657619LLU;

	t68 = ((x3649|(x3650/x3651))<<x3652);

	if (t68 != 18446744073628525316LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3729 = -1;
	volatile uint64_t x3730 = 1771875LLU;
	int32_t x3731 = -1;
	volatile uint8_t x3732 = 13U;
	uint64_t t69 = 3414LLU;

	t69 = ((x3729|(x3730/x3731))<<x3732);

	if (t69 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3769 = INT16_MAX;
	static uint64_t x3770 = 3159003612885LLU;
	volatile int8_t x3771 = INT8_MIN;
	volatile uint8_t x3772 = 5U;

	t70 = ((x3769|(x3770/x3771))<<x3772);

	if (t70 != 1048544LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3836 = 1;
	uint64_t t71 = 1300786LLU;

	t71 = ((x3833|(x3834/x3835))<<x3836);

	if (t71 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3921 = 0;
	uint8_t x3922 = 5U;
	int16_t x3923 = INT16_MAX;
	int8_t x3924 = 1;
	int32_t t72 = -3173157;

	t72 = ((x3921|(x3922/x3923))<<x3924);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3933 = INT16_MIN;
	volatile int8_t x3934 = -1;
	uint64_t x3935 = 536797016LLU;

	t73 = ((x3933|(x3934/x3935))<<x3936);

	if (t73 != 18446698192721412096LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3981 = -17;
	uint64_t x3982 = 1341191908863LLU;
	volatile uint64_t x3983 = 21507348298591033LLU;
	uint8_t x3984 = 2U;
	static volatile uint64_t t74 = 19665740246649438LLU;

	t74 = ((x3981|(x3982/x3983))<<x3984);

	if (t74 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4081 = 1;
	uint16_t x4082 = 21954U;
	int32_t x4083 = INT32_MIN;
	int8_t x4084 = 2;
	int32_t t75 = -181887773;

	t75 = ((x4081|(x4082/x4083))<<x4084);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4117 = -122394950;
	uint64_t x4118 = 592055629278549819LLU;
	uint16_t x4119 = UINT16_MAX;
	uint8_t x4120 = 4U;
	uint64_t t76 = 18427030LLU;

	t76 = ((x4117|(x4118/x4119))<<x4120);

	if (t76 != 18446744073639226352LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4153 = -1;
	static uint8_t x4156 = 57U;
	static uint64_t t77 = 147876171659LLU;

	t77 = ((x4153|(x4154/x4155))<<x4156);

	if (t77 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4255 = UINT32_MAX;
	int8_t x4256 = 3;
	uint32_t t78 = 4290U;

	t78 = ((x4253|(x4254/x4255))<<x4256);

	if (t78 != 2040U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4333 = INT16_MIN;
	uint64_t x4334 = 6034068126183453LLU;
	static uint16_t x4335 = UINT16_MAX;
	uint32_t x4336 = 1U;
	static uint64_t t79 = 424860179158630516LLU;

	t79 = ((x4333|(x4334/x4335))<<x4336);

	if (t79 != 18446744073709538942LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4337 = 545824718365674389LL;
	int8_t x4338 = INT8_MIN;
	int8_t x4340 = 3;
	int64_t t80 = -398702891LL;

	t80 = ((x4337|(x4338/x4339))<<x4340);

	if (t80 != 4366597746925395112LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4353 = 61033498U;
	uint8_t x4354 = 15U;
	uint32_t x4355 = 2794U;
	static uint16_t x4356 = 9U;
	static uint32_t t81 = 108641U;

	t81 = ((x4353|(x4354/x4355))<<x4356);

	if (t81 != 1184379904U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4477 = 232U;
	int64_t x4478 = INT64_MAX;
	int16_t x4479 = 10;
	volatile int64_t t82 = -3173302LL;

	t82 = ((x4477|(x4478/x4479))<<x4480);

	if (t82 != 7378697629483820896LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x4485 = 1;
	uint32_t x4486 = 11040U;
	static uint8_t x4487 = UINT8_MAX;
	int16_t x4488 = 1;
	static volatile uint32_t t83 = 52382843U;

	t83 = ((x4485|(x4486/x4487))<<x4488);

	if (t83 != 86U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4517 = UINT32_MAX;
	static uint64_t x4518 = 235028877918261LLU;
	volatile int64_t x4519 = INT64_MIN;
	static uint16_t x4520 = 2U;
	volatile uint64_t t84 = 44244543007LLU;

	t84 = ((x4517|(x4518/x4519))<<x4520);

	if (t84 != 17179869180LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4521 = INT8_MIN;
	uint32_t x4522 = 164U;
	static uint64_t x4523 = 475250814LLU;
	uint64_t t85 = 17164LLU;

	t85 = ((x4521|(x4522/x4523))<<x4524);

	if (t85 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4837 = 12LLU;
	volatile int64_t x4838 = -428000060575LL;
	static uint16_t x4840 = 13U;
	uint64_t t86 = 450697403251899585LLU;

	t86 = ((x4837|(x4838/x4839))<<x4840);

	if (t86 != 18446744073705340928LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4845 = 1;
	static int16_t x4846 = INT16_MIN;
	static uint32_t x4847 = UINT32_MAX;
	int8_t x4848 = 0;
	static uint32_t t87 = 45557501U;

	t87 = ((x4845|(x4846/x4847))<<x4848);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x4989 = 2LLU;
	volatile uint32_t x4990 = UINT32_MAX;
	int8_t x4991 = INT8_MIN;
	int32_t x4992 = 1;

	t88 = ((x4989|(x4990/x4991))<<x4992);

	if (t88 != 6LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5013 = 7522U;
	uint64_t x5015 = 5955903352885093LLU;
	uint8_t x5016 = 4U;

	t89 = ((x5013|(x5014/x5015))<<x5016);

	if (t89 != 120352LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5033 = UINT8_MAX;
	int32_t x5034 = -1;
	int16_t x5035 = INT16_MAX;
	static volatile uint8_t x5036 = 0U;
	int32_t t90 = 7;

	t90 = ((x5033|(x5034/x5035))<<x5036);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5065 = INT8_MAX;
	static uint32_t x5066 = UINT32_MAX;
	volatile int16_t x5067 = -1;
	static int8_t x5068 = 0;
	static volatile uint32_t t91 = 2U;

	t91 = ((x5065|(x5066/x5067))<<x5068);

	if (t91 != 127U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x5071 = UINT8_MAX;
	int8_t x5072 = 21;
	volatile int32_t t92 = -11355;

	t92 = ((x5069|(x5070/x5071))<<x5072);

	if (t92 != 46137344) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5085 = INT32_MAX;
	static int16_t x5086 = -1;
	static int64_t x5087 = -862776575173LL;
	int8_t x5088 = 6;
	int64_t t93 = 371205671015559180LL;

	t93 = ((x5085|(x5086/x5087))<<x5088);

	if (t93 != 137438953408LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5119 = INT16_MIN;
	uint8_t x5120 = 1U;

	t94 = ((x5117|(x5118/x5119))<<x5120);

	if (t94 != 312979862LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5137 = UINT32_MAX;
	int64_t x5140 = 5LL;
	uint64_t t95 = 122069LLU;

	t95 = ((x5137|(x5138/x5139))<<x5140);

	if (t95 != 137438953440LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5169 = UINT8_MAX;
	int64_t x5170 = -1LL;
	int32_t x5171 = INT32_MIN;
	uint16_t x5172 = 14U;
	static int64_t t96 = -49692LL;

	t96 = ((x5169|(x5170/x5171))<<x5172);

	if (t96 != 4177920LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5177 = UINT8_MAX;
	uint16_t x5178 = 217U;
	volatile int32_t t97 = 7635370;

	t97 = ((x5177|(x5178/x5179))<<x5180);

	if (t97 != 33423360) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5282 = INT8_MIN;
	int8_t x5283 = -1;
	uint64_t t98 = UINT64_MAX;

	t98 = ((x5281|(x5282/x5283))<<x5284);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5409 = 3;
	int8_t x5410 = -1;
	int64_t x5411 = INT64_MIN;

	t99 = ((x5409|(x5410/x5411))<<x5412);

	if (t99 != 3LL) { NG(); } else { ; }
	
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

