#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -705831732070LL;
int16_t x90 = 2;
int64_t t1 = 9740980LL;
volatile int16_t x209 = INT16_MAX;
uint16_t x211 = 29U;
uint8_t x265 = 2U;
static int32_t x268 = 3452976;
uint16_t x458 = 26U;
int64_t t8 = 360167LL;
volatile int8_t x470 = 20;
volatile int64_t x471 = INT64_MAX;
volatile uint64_t t10 = 352480201LLU;
volatile int32_t x542 = 1;
static uint32_t x622 = 2U;
int32_t x624 = INT32_MAX;
uint16_t x866 = 22U;
uint64_t x883 = 22461425289002LLU;
int16_t x911 = INT16_MIN;
uint32_t t18 = 88U;
uint8_t x977 = 18U;
static uint64_t t20 = 887045781144649564LLU;
uint32_t x1154 = 29U;
volatile uint64_t t24 = 18594294962LLU;
uint32_t x1323 = 145771U;
volatile int16_t x1325 = INT16_MAX;
int64_t x1425 = INT64_MAX;
int8_t x1486 = 12;
uint32_t x1544 = UINT32_MAX;
uint8_t x1617 = UINT8_MAX;
int8_t x1626 = 27;
int8_t x1840 = INT8_MIN;
int16_t x1843 = INT16_MAX;
static volatile uint16_t x1863 = 1U;
int8_t x1908 = INT8_MIN;
volatile uint64_t t44 = 8335577221786307LLU;
static uint16_t x2002 = 6U;
static volatile int8_t x2004 = 44;
uint8_t x2039 = 1U;
int16_t x2261 = 42;
int8_t x2272 = -26;
static uint16_t x2274 = 1U;
volatile int64_t t50 = 6LL;
int64_t x2425 = 23LL;
volatile uint16_t x2495 = 1982U;
uint16_t x2530 = 0U;
int32_t t55 = 91398;
uint8_t x2926 = 1U;
uint64_t x2945 = UINT64_MAX;
volatile int8_t x2946 = 1;
static uint64_t t58 = 450253LLU;
static uint16_t x2957 = 13777U;
uint16_t x2960 = UINT16_MAX;
volatile int8_t x3078 = 0;
volatile int64_t t61 = 413LL;
uint64_t t62 = 2562404379LLU;
uint64_t x3450 = 5LLU;
static int64_t x3475 = INT64_MIN;
int64_t t64 = 8112184993863LL;
uint32_t t67 = 332U;
volatile uint64_t x3765 = 726640022LLU;
int64_t x3766 = 1LL;
static uint16_t x3767 = UINT16_MAX;
uint64_t x3768 = 2079LLU;
uint64_t t69 = 48844924LLU;
int16_t x3793 = 0;
int64_t x3795 = INT64_MAX;
uint16_t x3822 = 5U;
uint64_t x3865 = 1376758LLU;
int32_t x3866 = 0;
int32_t x4049 = 511058552;
int32_t x4052 = INT32_MAX;
volatile int64_t t76 = -125832447LL;
uint8_t x4162 = 2U;
int32_t x4163 = -4405;
static uint16_t x4422 = 3U;
int8_t x4546 = 25;
int16_t x4574 = 1;
volatile int8_t x4576 = 3;
static volatile uint8_t x4681 = 31U;
static int8_t x4700 = 61;
volatile uint64_t x4785 = UINT64_MAX;
int64_t x4816 = INT64_MIN;
int16_t x4825 = 2564;
uint32_t x4826 = 11U;
int16_t x5154 = 1;
int32_t x5155 = INT32_MIN;
volatile uint64_t x5170 = 27LLU;
static int64_t x5172 = 86LL;
uint64_t x5213 = 1742324411LLU;
int32_t x5217 = 95993;
int16_t x5311 = 248;
uint64_t t93 = 77555064927017LLU;
int32_t x5316 = 250793;
int8_t x5358 = 1;
uint64_t x5359 = 672214279LLU;
int8_t x5577 = 20;
static volatile int8_t x5579 = 15;
uint8_t x5582 = 8U;
volatile uint64_t t98 = 4890709769110072LLU;
volatile int64_t t99 = 59LL;


void f0(void) {
	int64_t x77 = INT64_MAX;
	volatile int8_t x78 = 2;
	int8_t x79 = -1;
	uint16_t x80 = 709U;

	t0 = ((x77>>x78)/(x79%x80));

	if (t0 != -2305843009213693951LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x89 = 136192941235LL;
	int8_t x91 = 5;
	volatile int64_t x92 = INT64_MIN;

	t1 = ((x89>>x90)/(x91%x92));

	if (t1 != 6809647061LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x137 = 5U;
	int16_t x138 = 14;
	uint32_t x139 = 37U;
	volatile int64_t x140 = INT64_MAX;
	static volatile int64_t t2 = 0LL;

	t2 = ((x137>>x138)/(x139%x140));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x149 = INT64_MAX;
	volatile uint8_t x150 = 7U;
	static volatile int16_t x151 = 139;
	int64_t x152 = 8356210144857703LL;
	static int64_t t3 = 0LL;

	t3 = ((x149>>x150)/(x151%x152));

	if (t3 != 518399957107395LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x210 = 11;
	static volatile int16_t x212 = INT16_MAX;
	volatile int32_t t4 = -429;

	t4 = ((x209>>x210)/(x211%x212));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x266 = 6U;
	volatile int16_t x267 = -3616;
	volatile int32_t t5 = 397337214;

	t5 = ((x265>>x266)/(x267%x268));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x341 = 2650U;
	volatile uint8_t x342 = 5U;
	uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 21358LLU;
	volatile uint64_t t6 = 1439LLU;

	t6 = ((x341>>x342)/(x343%x344));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x405 = INT64_MAX;
	volatile int16_t x406 = 28;
	int64_t x407 = INT64_MIN;
	static uint8_t x408 = 3U;
	volatile int64_t t7 = 1964777117207615982LL;

	t7 = ((x405>>x406)/(x407%x408));

	if (t7 != -17179869183LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x459 = 18;
	volatile int64_t x460 = INT64_MIN;

	t8 = ((x457>>x458)/(x459%x460));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x469 = UINT8_MAX;
	volatile int64_t x472 = INT64_MIN;
	int64_t t9 = 280463822427403257LL;

	t9 = ((x469>>x470)/(x471%x472));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x473 = 1353864741658LLU;
	uint8_t x474 = 0U;
	static volatile uint16_t x475 = UINT16_MAX;
	int64_t x476 = -1027347990LL;

	t10 = ((x473>>x474)/(x475%x476));

	if (t10 != 20658651LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x541 = 34U;
	volatile int16_t x543 = INT16_MIN;
	int64_t x544 = INT64_MIN;
	int64_t t11 = -4143LL;

	t11 = ((x541>>x542)/(x543%x544));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x621 = 1;
	uint32_t x623 = 791505U;
	uint32_t t12 = 3U;

	t12 = ((x621>>x622)/(x623%x624));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x713 = 7U;
	int16_t x714 = 0;
	volatile int64_t x715 = -1837LL;
	int64_t x716 = -34762021118980LL;
	volatile int64_t t13 = -4542700516LL;

	t13 = ((x713>>x714)/(x715%x716));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x865 = INT16_MAX;
	int16_t x867 = INT16_MIN;
	int32_t x868 = -15;
	static volatile int32_t t14 = -7;

	t14 = ((x865>>x866)/(x867%x868));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x881 = UINT8_MAX;
	volatile int64_t x882 = 4LL;
	static int64_t x884 = INT64_MIN;
	uint64_t t15 = 79421LLU;

	t15 = ((x881>>x882)/(x883%x884));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x889 = 539378583LL;
	volatile int16_t x890 = 0;
	uint8_t x891 = 1U;
	int16_t x892 = 2;
	int64_t t16 = 1141510471353LL;

	t16 = ((x889>>x890)/(x891%x892));

	if (t16 != 539378583LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x909 = INT64_MAX;
	static int16_t x910 = 4;
	int32_t x912 = INT32_MAX;
	int64_t t17 = -1024900136990978114LL;

	t17 = ((x909>>x910)/(x911%x912));

	if (t17 != -17592186044415LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x933 = 2U;
	int8_t x934 = 8;
	static volatile uint32_t x935 = UINT32_MAX;
	int16_t x936 = INT16_MAX;

	t18 = ((x933>>x934)/(x935%x936));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x978 = 0U;
	volatile int64_t x979 = -1LL;
	uint16_t x980 = UINT16_MAX;
	static int64_t t19 = 246259828094788LL;

	t19 = ((x977>>x978)/(x979%x980));

	if (t19 != -18LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x993 = 3378816328832494556LLU;
	uint64_t x994 = 29LLU;
	int32_t x995 = -1;
	int8_t x996 = -2;

	t20 = ((x993>>x994)/(x995%x996));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x997 = 1;
	volatile uint32_t x998 = 28U;
	int8_t x999 = INT8_MAX;
	int16_t x1000 = 4964;
	volatile int32_t t21 = 250776625;

	t21 = ((x997>>x998)/(x999%x1000));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1057 = INT16_MAX;
	uint64_t x1058 = 9LLU;
	int32_t x1059 = -1;
	static volatile uint16_t x1060 = 5742U;
	volatile int32_t t22 = 15338337;

	t22 = ((x1057>>x1058)/(x1059%x1060));

	if (t22 != -63) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1153 = UINT64_MAX;
	volatile uint64_t x1155 = 85290900104619LLU;
	static int32_t x1156 = -1;
	volatile uint64_t t23 = 68730767900032LLU;

	t23 = ((x1153>>x1154)/(x1155%x1156));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1305 = 499LLU;
	int32_t x1306 = 1;
	int16_t x1307 = INT16_MIN;
	int64_t x1308 = INT64_MAX;

	t24 = ((x1305>>x1306)/(x1307%x1308));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1321 = 178199039LLU;
	uint32_t x1322 = 1U;
	static volatile int8_t x1324 = INT8_MIN;
	volatile uint64_t t25 = 4LLU;

	t25 = ((x1321>>x1322)/(x1323%x1324));

	if (t25 != 611LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1326 = 9U;
	int32_t x1327 = INT32_MAX;
	uint8_t x1328 = 10U;
	int32_t t26 = 53176;

	t26 = ((x1325>>x1326)/(x1327%x1328));

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1333 = 1;
	static int8_t x1334 = 14;
	volatile uint64_t x1335 = 56589LLU;
	static volatile uint32_t x1336 = UINT32_MAX;
	static uint64_t t27 = 139175223591781LLU;

	t27 = ((x1333>>x1334)/(x1335%x1336));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x1426 = 15U;
	uint32_t x1427 = UINT32_MAX;
	static uint64_t x1428 = 1179027073510999LLU;
	uint64_t t28 = 8863389449288LLU;

	t28 = ((x1425>>x1426)/(x1427%x1428));

	if (t28 != 65536LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1485 = 13897926534LLU;
	uint32_t x1487 = 1U;
	uint32_t x1488 = 30U;
	uint64_t t29 = 98282874141LLU;

	t29 = ((x1485>>x1486)/(x1487%x1488));

	if (t29 != 3393048LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1541 = INT32_MAX;
	uint16_t x1542 = 4U;
	int64_t x1543 = INT64_MIN;
	int64_t t30 = 3LL;

	t30 = ((x1541>>x1542)/(x1543%x1544));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1549 = 45900341LLU;
	uint32_t x1550 = 1U;
	int32_t x1551 = INT32_MIN;
	int8_t x1552 = INT8_MAX;
	volatile uint64_t t31 = 31512128127LLU;

	t31 = ((x1549>>x1550)/(x1551%x1552));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1577 = 386307560U;
	static uint16_t x1578 = 0U;
	static int16_t x1579 = INT16_MAX;
	uint32_t x1580 = UINT32_MAX;
	uint32_t t32 = 1856U;

	t32 = ((x1577>>x1578)/(x1579%x1580));

	if (t32 != 11789U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1618 = 1U;
	volatile uint16_t x1619 = 56U;
	uint64_t x1620 = 10267391847873982LLU;
	volatile uint64_t t33 = 121653458444LLU;

	t33 = ((x1617>>x1618)/(x1619%x1620));

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1625 = 1087842667428837LL;
	volatile int64_t x1627 = -2554LL;
	static int64_t x1628 = -300939117033693LL;
	int64_t t34 = 178047369943LL;

	t34 = ((x1625>>x1626)/(x1627%x1628));

	if (t34 != -3173LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1641 = 12;
	uint64_t x1642 = 26LLU;
	static uint64_t x1643 = UINT64_MAX;
	static int64_t x1644 = 3056059415127942LL;
	uint64_t t35 = 11LLU;

	t35 = ((x1641>>x1642)/(x1643%x1644));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1661 = 5064789LL;
	int8_t x1662 = 0;
	static int16_t x1663 = INT16_MAX;
	int64_t x1664 = INT64_MAX;
	volatile int64_t t36 = -478783220828931LL;

	t36 = ((x1661>>x1662)/(x1663%x1664));

	if (t36 != 154LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1717 = 1109185696827224LLU;
	static int8_t x1718 = 0;
	static uint32_t x1719 = 8534U;
	int16_t x1720 = INT16_MIN;
	volatile uint64_t t37 = 178358304230632LLU;

	t37 = ((x1717>>x1718)/(x1719%x1720));

	if (t37 != 129972544741LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1741 = UINT64_MAX;
	int16_t x1742 = 0;
	int16_t x1743 = INT16_MIN;
	volatile uint64_t x1744 = UINT64_MAX;
	uint64_t t38 = 1771395324LLU;

	t38 = ((x1741>>x1742)/(x1743%x1744));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1837 = UINT32_MAX;
	static volatile uint64_t x1838 = 1LLU;
	volatile uint16_t x1839 = 364U;
	uint32_t t39 = 91321719U;

	t39 = ((x1837>>x1838)/(x1839%x1840));

	if (t39 != 19884107U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1841 = UINT32_MAX;
	int32_t x1842 = 20;
	int64_t x1844 = 1940707577LL;
	volatile int64_t t40 = 9340624943450LL;

	t40 = ((x1841>>x1842)/(x1843%x1844));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1861 = 13U;
	static uint16_t x1862 = 1U;
	volatile int64_t x1864 = -3466913635866540LL;
	volatile int64_t t41 = 8267120428712850LL;

	t41 = ((x1861>>x1862)/(x1863%x1864));

	if (t41 != 6LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1881 = 9U;
	static int8_t x1882 = 0;
	static volatile int32_t x1883 = INT32_MIN;
	int32_t x1884 = 331;
	volatile int32_t t42 = -79;

	t42 = ((x1881>>x1882)/(x1883%x1884));

	if (t42 != -4) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1905 = 3404823098499LLU;
	volatile uint8_t x1906 = 61U;
	uint64_t x1907 = UINT64_MAX;
	volatile uint64_t t43 = 23LLU;

	t43 = ((x1905>>x1906)/(x1907%x1908));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1993 = UINT64_MAX;
	volatile uint16_t x1994 = 7U;
	uint16_t x1995 = 1U;
	static int16_t x1996 = -94;

	t44 = ((x1993>>x1994)/(x1995%x1996));

	if (t44 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2001 = 1;
	uint8_t x2003 = 56U;
	int32_t t45 = -3;

	t45 = ((x2001>>x2002)/(x2003%x2004));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x2037 = 306581816844507257LLU;
	int8_t x2038 = 0;
	int8_t x2040 = INT8_MIN;
	uint64_t t46 = 68562458770LLU;

	t46 = ((x2037>>x2038)/(x2039%x2040));

	if (t46 != 306581816844507257LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2262 = 2U;
	int8_t x2263 = -1;
	int16_t x2264 = INT16_MIN;
	volatile int32_t t47 = 743211390;

	t47 = ((x2261>>x2262)/(x2263%x2264));

	if (t47 != -10) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2269 = UINT16_MAX;
	static int8_t x2270 = 2;
	int32_t x2271 = -1;
	int32_t t48 = 18544;

	t48 = ((x2269>>x2270)/(x2271%x2272));

	if (t48 != -16383) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2273 = 0;
	volatile int64_t x2275 = INT64_MIN;
	volatile int16_t x2276 = INT16_MAX;
	int64_t t49 = 176213817870LL;

	t49 = ((x2273>>x2274)/(x2275%x2276));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2385 = INT32_MAX;
	uint32_t x2386 = 2U;
	static uint8_t x2387 = UINT8_MAX;
	int64_t x2388 = INT64_MIN;

	t50 = ((x2385>>x2386)/(x2387%x2388));

	if (t50 != 2105376LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2426 = 3U;
	uint64_t x2427 = 7681497LLU;
	volatile int8_t x2428 = INT8_MAX;
	uint64_t t51 = 2173LLU;

	t51 = ((x2425>>x2426)/(x2427%x2428));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2457 = 5U;
	int32_t x2458 = 1;
	int8_t x2459 = INT8_MIN;
	int64_t x2460 = INT64_MAX;
	volatile int64_t t52 = -2276920LL;

	t52 = ((x2457>>x2458)/(x2459%x2460));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2493 = 1776LLU;
	uint8_t x2494 = 3U;
	volatile uint32_t x2496 = UINT32_MAX;
	uint64_t t53 = 6410918717275941LLU;

	t53 = ((x2493>>x2494)/(x2495%x2496));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2529 = 349046456U;
	int64_t x2531 = 3366270690147LL;
	int32_t x2532 = 823;
	volatile int64_t t54 = -1LL;

	t54 = ((x2529>>x2530)/(x2531%x2532));

	if (t54 != 450964LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2601 = INT8_MAX;
	static volatile uint8_t x2602 = 0U;
	int16_t x2603 = INT16_MAX;
	int8_t x2604 = -14;

	t55 = ((x2601>>x2602)/(x2603%x2604));

	if (t55 != 18) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2697 = UINT32_MAX;
	volatile int8_t x2698 = 3;
	int32_t x2699 = INT32_MAX;
	uint8_t x2700 = UINT8_MAX;
	static uint32_t t56 = 1050418U;

	t56 = ((x2697>>x2698)/(x2699%x2700));

	if (t56 != 4227330U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2925 = 2929U;
	int64_t x2927 = -1LL;
	volatile int16_t x2928 = INT16_MIN;
	int64_t t57 = -1367852LL;

	t57 = ((x2925>>x2926)/(x2927%x2928));

	if (t57 != -1464LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2947 = 66428356151587736LLU;
	static int64_t x2948 = INT64_MAX;

	t58 = ((x2945>>x2946)/(x2947%x2948));

	if (t58 != 138LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x2958 = 0;
	uint8_t x2959 = UINT8_MAX;
	int32_t t59 = 3991;

	t59 = ((x2957>>x2958)/(x2959%x2960));

	if (t59 != 54) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3049 = INT8_MAX;
	uint8_t x3050 = 26U;
	static int16_t x3051 = INT16_MIN;
	int64_t x3052 = 15620182LL;
	static volatile int64_t t60 = -2044244213641605LL;

	t60 = ((x3049>>x3050)/(x3051%x3052));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3077 = 0;
	volatile int64_t x3079 = INT64_MIN;
	volatile int16_t x3080 = -448;

	t61 = ((x3077>>x3078)/(x3079%x3080));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3429 = UINT32_MAX;
	uint8_t x3430 = 3U;
	int64_t x3431 = INT64_MIN;
	uint64_t x3432 = 542350802836660LLU;

	t62 = ((x3429>>x3430)/(x3431%x3432));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3449 = 82LLU;
	int32_t x3451 = INT32_MAX;
	int16_t x3452 = -13998;
	uint64_t t63 = 21846LLU;

	t63 = ((x3449>>x3450)/(x3451%x3452));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3473 = INT32_MAX;
	uint32_t x3474 = 11U;
	static volatile uint16_t x3476 = 27895U;

	t64 = ((x3473>>x3474)/(x3475%x3476));

	if (t64 != -224LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3533 = INT16_MAX;
	uint32_t x3534 = 4U;
	int8_t x3535 = INT8_MIN;
	volatile int16_t x3536 = INT16_MIN;
	int32_t t65 = 857846285;

	t65 = ((x3533>>x3534)/(x3535%x3536));

	if (t65 != -15) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3545 = UINT8_MAX;
	uint32_t x3546 = 14U;
	int64_t x3547 = -1LL;
	static uint16_t x3548 = 26243U;
	volatile int64_t t66 = 57012147466675LL;

	t66 = ((x3545>>x3546)/(x3547%x3548));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3557 = INT16_MAX;
	static uint8_t x3558 = 14U;
	uint32_t x3559 = 13291U;
	static int16_t x3560 = -1;

	t67 = ((x3557>>x3558)/(x3559%x3560));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3617 = 674157841629548728LL;
	volatile int8_t x3618 = 2;
	volatile int32_t x3619 = INT32_MAX;
	volatile int32_t x3620 = -20390;
	volatile int64_t t68 = 35723LL;

	t68 = ((x3617>>x3618)/(x3619%x3620));

	if (t68 != 19050464610307LL) { NG(); } else { ; }
	
}

void f69(void) {


	t69 = ((x3765>>x3766)/(x3767%x3768));

	if (t69 != 334548LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3794 = 0;
	uint16_t x3796 = UINT16_MAX;
	volatile int64_t t70 = 3941466528924LL;

	t70 = ((x3793>>x3794)/(x3795%x3796));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3821 = 30012738015312911LLU;
	int8_t x3823 = INT8_MIN;
	int16_t x3824 = INT16_MAX;
	volatile uint64_t t71 = 4087846582242064LLU;

	t71 = ((x3821>>x3822)/(x3823%x3824));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3845 = UINT64_MAX;
	uint8_t x3846 = 2U;
	uint64_t x3847 = 423387421907LLU;
	int16_t x3848 = INT16_MIN;
	uint64_t t72 = 96302LLU;

	t72 = ((x3845>>x3846)/(x3847%x3848));

	if (t72 != 10892354LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3867 = INT8_MAX;
	int16_t x3868 = INT16_MAX;
	uint64_t t73 = 490183074614853957LLU;

	t73 = ((x3865>>x3866)/(x3867%x3868));

	if (t73 != 10840LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3933 = 13410338U;
	static volatile uint16_t x3934 = 0U;
	volatile int64_t x3935 = INT64_MAX;
	uint32_t x3936 = 4U;
	static int64_t t74 = -439LL;

	t74 = ((x3933>>x3934)/(x3935%x3936));

	if (t74 != 4470112LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4005 = 217974LL;
	uint32_t x4006 = 3U;
	static int32_t x4007 = INT32_MIN;
	int32_t x4008 = INT32_MAX;
	volatile int64_t t75 = -13LL;

	t75 = ((x4005>>x4006)/(x4007%x4008));

	if (t75 != -27246LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4050 = 13U;
	static int64_t x4051 = INT64_MAX;

	t76 = ((x4049>>x4050)/(x4051%x4052));

	if (t76 != 62385LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x4117 = 15;
	static volatile int8_t x4118 = 2;
	int64_t x4119 = INT64_MAX;
	uint32_t x4120 = 19072509U;
	static int64_t t77 = 410LL;

	t77 = ((x4117>>x4118)/(x4119%x4120));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4161 = 2822742574LLU;
	int16_t x4164 = INT16_MAX;
	uint64_t t78 = 204779053LLU;

	t78 = ((x4161>>x4162)/(x4163%x4164));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4401 = UINT16_MAX;
	int8_t x4402 = 14;
	int16_t x4403 = INT16_MAX;
	static int64_t x4404 = INT64_MAX;
	volatile int64_t t79 = 2898087126763LL;

	t79 = ((x4401>>x4402)/(x4403%x4404));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4421 = 11289;
	int64_t x4423 = INT64_MIN;
	uint8_t x4424 = UINT8_MAX;
	volatile int64_t t80 = 46796423883335048LL;

	t80 = ((x4421>>x4422)/(x4423%x4424));

	if (t80 != -11LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4545 = 1578610980283LLU;
	uint32_t x4547 = 978354929U;
	volatile int8_t x4548 = INT8_MIN;
	uint64_t t81 = 1LLU;

	t81 = ((x4545>>x4546)/(x4547%x4548));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4573 = INT64_MAX;
	int64_t x4575 = INT64_MAX;
	volatile int64_t t82 = 185102151336510LL;

	t82 = ((x4573>>x4574)/(x4575%x4576));

	if (t82 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4682 = 1;
	uint32_t x4683 = 1827192U;
	static int8_t x4684 = 22;
	volatile uint32_t t83 = 231576U;

	t83 = ((x4681>>x4682)/(x4683%x4684));

	if (t83 != 3U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4697 = 0LLU;
	uint8_t x4698 = 54U;
	int8_t x4699 = 2;
	uint64_t t84 = 1903789LLU;

	t84 = ((x4697>>x4698)/(x4699%x4700));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4713 = 52U;
	uint16_t x4714 = 27U;
	int8_t x4715 = INT8_MAX;
	uint64_t x4716 = 5453269780318388LLU;
	static uint64_t t85 = 172588019977LLU;

	t85 = ((x4713>>x4714)/(x4715%x4716));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4786 = 0U;
	static uint16_t x4787 = UINT16_MAX;
	volatile int32_t x4788 = INT32_MIN;
	volatile uint64_t t86 = 6026400230LLU;

	t86 = ((x4785>>x4786)/(x4787%x4788));

	if (t86 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4813 = 464;
	uint32_t x4814 = 12U;
	uint16_t x4815 = 9523U;
	volatile int64_t t87 = 1081583210193LL;

	t87 = ((x4813>>x4814)/(x4815%x4816));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4827 = -1;
	static int32_t x4828 = -774457;
	int32_t t88 = -151837561;

	t88 = ((x4825>>x4826)/(x4827%x4828));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x5153 = 1U;
	volatile uint8_t x5156 = 48U;
	int32_t t89 = -11;

	t89 = ((x5153>>x5154)/(x5155%x5156));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5169 = 5077515665608250LLU;
	uint32_t x5171 = 15076U;
	uint64_t t90 = 4446785705603415LLU;

	t90 = ((x5169>>x5170)/(x5171%x5172));

	if (t90 != 1455016LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5214 = 5U;
	int64_t x5215 = INT64_MIN;
	volatile uint64_t x5216 = 14887160932207LLU;
	volatile uint64_t t91 = 0LLU;

	t91 = ((x5213>>x5214)/(x5215%x5216));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5218 = 0U;
	int16_t x5219 = -5679;
	int8_t x5220 = INT8_MIN;
	volatile int32_t t92 = -2;

	t92 = ((x5217>>x5218)/(x5219%x5220));

	if (t92 != -2042) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5309 = INT16_MAX;
	volatile int8_t x5310 = 1;
	static uint64_t x5312 = 5034774249LLU;

	t93 = ((x5309>>x5310)/(x5311%x5312));

	if (t93 != 66LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5313 = 514867366U;
	volatile uint16_t x5314 = 3U;
	uint16_t x5315 = 12140U;
	volatile uint32_t t94 = 36454429U;

	t94 = ((x5313>>x5314)/(x5315%x5316));

	if (t94 != 5301U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5357 = INT8_MAX;
	static int8_t x5360 = 7;
	volatile uint64_t t95 = 9905031063LLU;

	t95 = ((x5357>>x5358)/(x5359%x5360));

	if (t95 != 31LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5493 = 5U;
	int8_t x5494 = 30;
	static int8_t x5495 = 1;
	volatile int64_t x5496 = 715101LL;
	volatile int64_t t96 = -13LL;

	t96 = ((x5493>>x5494)/(x5495%x5496));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5578 = 13U;
	uint8_t x5580 = UINT8_MAX;
	volatile int32_t t97 = 1;

	t97 = ((x5577>>x5578)/(x5579%x5580));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5581 = 34297847LLU;
	int64_t x5583 = 35928779417LL;
	int8_t x5584 = INT8_MAX;

	t98 = ((x5581>>x5582)/(x5583%x5584));

	if (t98 != 1125LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5585 = UINT16_MAX;
	static volatile int8_t x5586 = 16;
	int64_t x5587 = INT64_MIN;
	volatile int32_t x5588 = INT32_MAX;

	t99 = ((x5585>>x5586)/(x5587%x5588));

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

