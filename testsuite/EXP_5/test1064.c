#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 4U;
volatile int64_t x87 = 1LL;
uint32_t x289 = 52170U;
int32_t x297 = -19830655;
static int64_t t5 = 822475446028951LL;
static volatile uint16_t x391 = 3U;
volatile int8_t x400 = 63;
uint32_t x615 = 0U;
static volatile int32_t t14 = -64019;
int16_t x835 = 13;
int32_t t15 = 20462951;
static int32_t x846 = INT32_MAX;
volatile int64_t t16 = 243LL;
int64_t x929 = INT64_MIN;
volatile int32_t x1078 = 35;
int16_t x1080 = -1;
uint8_t x1499 = 25U;
uint8_t x1503 = 3U;
int8_t x1504 = INT8_MAX;
static int16_t x1597 = -34;
uint32_t x1650 = 8319790U;
static uint16_t x1652 = UINT16_MAX;
static uint32_t t27 = 7283U;
int8_t x1654 = 2;
static uint64_t x1717 = 81316093629950735LLU;
uint64_t x1718 = UINT64_MAX;
int8_t x1724 = -1;
int16_t x1762 = INT16_MAX;
volatile int64_t x1764 = INT64_MAX;
uint16_t x1868 = UINT16_MAX;
uint16_t x1872 = 19792U;
int64_t t34 = 83450LL;
static uint32_t t35 = 267065870U;
int32_t x1954 = INT32_MAX;
uint8_t x1991 = 1U;
int32_t x2129 = -705;
int32_t t40 = 0;
volatile int64_t x2184 = -333121LL;
int8_t x2203 = 11;
volatile int8_t x2281 = 1;
volatile int64_t x2284 = INT64_MIN;
int32_t x2357 = 14916;
int64_t x2464 = INT64_MIN;
volatile uint64_t t45 = 569185486LLU;
int64_t x2476 = -176177653929413758LL;
uint64_t x2534 = UINT64_MAX;
volatile uint64_t t47 = 16733573907LLU;
uint32_t x2589 = 15U;
int8_t x2763 = 3;
volatile int32_t t51 = -1;
uint16_t x2905 = 7079U;
uint32_t x2908 = UINT32_MAX;
uint64_t t53 = 334628321LLU;
volatile uint8_t x3017 = UINT8_MAX;
uint32_t t55 = 22809U;
uint64_t x3030 = UINT64_MAX;
uint64_t t56 = 18747LLU;
int8_t x3044 = INT8_MAX;
volatile int64_t t59 = 36942LL;
uint8_t x3110 = 64U;
volatile uint32_t x3112 = 796041340U;
volatile uint32_t t60 = 118266U;
int32_t x3116 = -7814;
volatile uint16_t x3362 = 70U;
volatile int32_t t64 = 0;
uint32_t x3510 = 6153U;
uint64_t x3512 = UINT64_MAX;
int32_t x3587 = 0;
int8_t x3681 = INT8_MIN;
volatile uint16_t x3682 = 3U;
int16_t x3683 = 3;
volatile int32_t t69 = 0;
uint8_t x3695 = 0U;
static volatile int8_t x3735 = 7;
volatile int8_t x3743 = 1;
int32_t x3802 = INT32_MAX;
volatile uint32_t t75 = 299923U;
int32_t t76 = -37;
uint64_t x3852 = 128066760LLU;
uint8_t x3859 = 5U;
int64_t x4109 = -37014LL;
volatile uint64_t t80 = 992720273LLU;
static int16_t x4229 = INT16_MIN;
int16_t x4230 = INT16_MAX;
static int32_t t82 = -404;
uint8_t x4511 = 0U;
static volatile uint64_t t85 = 23100099916880658LLU;
static volatile int8_t x4633 = -1;
int16_t x4677 = -1;
int64_t x4691 = 1LL;
volatile int32_t t89 = -286835042;
static volatile uint64_t x4749 = 182837LLU;
uint16_t x4823 = 11U;
int8_t x4872 = -24;
int8_t x4950 = 0;
int16_t x4952 = 2045;
int16_t x4992 = INT16_MIN;
volatile uint32_t t96 = UINT32_MAX;
int8_t x5053 = -6;


void f0(void) {
	volatile uint64_t x1 = 15509454965518LLU;
	static uint16_t x2 = 9183U;
	volatile uint16_t x3 = 0U;
	static uint64_t t0 = 134765LLU;

	t0 = (x1&((x2>>x3)/x4));

	if (t0 != 2054LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x85 = -1;
	uint64_t x86 = 1043247LLU;
	static int8_t x88 = INT8_MIN;
	uint64_t t1 = 196116611877379624LLU;

	t1 = (x85&((x86>>x87)/x88));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x97 = -1;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = 13;
	int16_t x100 = 1654;
	volatile uint32_t t2 = 235U;

	t2 = (x97&((x98>>x99)/x100));

	if (t2 != 316U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x290 = INT8_MAX;
	volatile uint8_t x291 = 3U;
	int32_t x292 = 7206;
	volatile uint32_t t3 = 16046900U;

	t3 = (x289&((x290>>x291)/x292));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x298 = 52083U;
	static uint8_t x299 = 2U;
	uint64_t x300 = UINT64_MAX;
	static uint64_t t4 = 17652127LLU;

	t4 = (x297&((x298>>x299)/x300));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x385 = 2748772830LL;
	volatile int16_t x386 = 1;
	volatile uint8_t x387 = 1U;
	int16_t x388 = INT16_MIN;

	t5 = (x385&((x386>>x387)/x388));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x389 = UINT16_MAX;
	uint8_t x390 = 2U;
	uint32_t x392 = 230447U;
	uint32_t t6 = 1333U;

	t6 = (x389&((x390>>x391)/x392));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 3U;
	int32_t t7 = 270209;

	t7 = (x397&((x398>>x399)/x400));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x429 = INT64_MIN;
	int16_t x430 = 73;
	static int8_t x431 = 0;
	uint8_t x432 = 7U;
	int64_t t8 = -1526626878664679LL;

	t8 = (x429&((x430>>x431)/x432));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x437 = INT8_MAX;
	uint32_t x438 = 2U;
	volatile int8_t x439 = 0;
	uint8_t x440 = UINT8_MAX;
	volatile uint32_t t9 = 14449U;

	t9 = (x437&((x438>>x439)/x440));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x501 = -1;
	uint16_t x502 = UINT16_MAX;
	static uint8_t x503 = 1U;
	int64_t x504 = -1LL;
	volatile int64_t t10 = -1LL;

	t10 = (x501&((x502>>x503)/x504));

	if (t10 != -32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x505 = 103765960;
	int64_t x506 = INT64_MAX;
	int16_t x507 = 37;
	static int64_t x508 = -1LL;
	volatile int64_t t11 = -3LL;

	t11 = (x505&((x506>>x507)/x508));

	if (t11 != 67108864LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x549 = -2289;
	int32_t x550 = INT32_MAX;
	static volatile uint32_t x551 = 2U;
	static volatile int32_t x552 = -18047789;
	volatile int32_t t12 = -62349;

	t12 = (x549&((x550>>x551)/x552));

	if (t12 != -2301) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x569 = 507LLU;
	volatile uint64_t x570 = 1235LLU;
	int8_t x571 = 11;
	int32_t x572 = INT32_MAX;
	uint64_t t13 = 388LLU;

	t13 = (x569&((x570>>x571)/x572));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x613 = -4;
	int16_t x614 = 31;
	int8_t x616 = -1;

	t14 = (x613&((x614>>x615)/x616));

	if (t14 != -32) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x833 = INT32_MIN;
	int16_t x834 = INT16_MAX;
	static uint8_t x836 = UINT8_MAX;

	t15 = (x833&((x834>>x835)/x836));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x845 = 18U;
	static uint32_t x847 = 3U;
	volatile int64_t x848 = INT64_MIN;

	t16 = (x845&((x846>>x847)/x848));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x930 = UINT8_MAX;
	uint64_t x931 = 1LLU;
	int16_t x932 = INT16_MAX;
	int64_t t17 = -34395426339527LL;

	t17 = (x929&((x930>>x931)/x932));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1077 = UINT16_MAX;
	static uint16_t x1079 = 11U;
	int32_t t18 = 0;

	t18 = (x1077&((x1078>>x1079)/x1080));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1093 = -1LL;
	static int8_t x1094 = INT8_MAX;
	volatile int16_t x1095 = 13;
	int32_t x1096 = INT32_MIN;
	volatile int64_t t19 = -330LL;

	t19 = (x1093&((x1094>>x1095)/x1096));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1345 = INT16_MIN;
	static int64_t x1346 = 17759944LL;
	volatile uint8_t x1347 = 9U;
	static uint64_t x1348 = 4486547114598200854LLU;
	uint64_t t20 = 2617972753513385230LLU;

	t20 = (x1345&((x1346>>x1347)/x1348));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1437 = 42U;
	uint16_t x1438 = 1001U;
	static uint8_t x1439 = 7U;
	int64_t x1440 = INT64_MAX;
	int64_t t21 = 27LL;

	t21 = (x1437&((x1438>>x1439)/x1440));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1497 = 1077558LL;
	uint32_t x1498 = 1U;
	uint32_t x1500 = 1710U;
	int64_t t22 = -6385510LL;

	t22 = (x1497&((x1498>>x1499)/x1500));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1501 = 22;
	static volatile int64_t x1502 = INT64_MAX;
	volatile int64_t t23 = 32022218665388935LL;

	t23 = (x1501&((x1502>>x1503)/x1504));

	if (t23 != 16LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1553 = INT8_MAX;
	int8_t x1554 = 0;
	static volatile uint8_t x1555 = 9U;
	static int64_t x1556 = INT64_MIN;
	int64_t t24 = -9168943472639673LL;

	t24 = (x1553&((x1554>>x1555)/x1556));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1598 = INT32_MAX;
	uint8_t x1599 = 3U;
	static uint64_t x1600 = UINT64_MAX;
	static uint64_t t25 = 228169631LLU;

	t25 = (x1597&((x1598>>x1599)/x1600));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1605 = -1;
	uint64_t x1606 = UINT64_MAX;
	uint64_t x1607 = 43LLU;
	int32_t x1608 = -953;
	static volatile uint64_t t26 = 658928LLU;

	t26 = (x1605&((x1606>>x1607)/x1608));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1649 = -1;
	uint8_t x1651 = 23U;

	t27 = (x1649&((x1650>>x1651)/x1652));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1653 = 768881039969LLU;
	int8_t x1655 = 1;
	int16_t x1656 = INT16_MAX;
	uint64_t t28 = 14423635LLU;

	t28 = (x1653&((x1654>>x1655)/x1656));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1719 = 27U;
	uint64_t x1720 = UINT64_MAX;
	volatile uint64_t t29 = 324894908272LLU;

	t29 = (x1717&((x1718>>x1719)/x1720));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1721 = 112829LLU;
	uint32_t x1722 = 175U;
	static int16_t x1723 = 1;
	volatile uint64_t t30 = 6485352917548162LLU;

	t30 = (x1721&((x1722>>x1723)/x1724));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1725 = UINT16_MAX;
	static int16_t x1726 = 0;
	volatile int8_t x1727 = 3;
	static volatile uint32_t x1728 = 2074133576U;
	uint32_t t31 = 903473945U;

	t31 = (x1725&((x1726>>x1727)/x1728));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1761 = 59864839407747853LLU;
	volatile int16_t x1763 = 4;
	uint64_t t32 = 10LLU;

	t32 = (x1761&((x1762>>x1763)/x1764));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1865 = 13;
	static int32_t x1866 = 7844805;
	uint8_t x1867 = 1U;
	int32_t t33 = 957816930;

	t33 = (x1865&((x1866>>x1867)/x1868));

	if (t33 != 9) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1869 = -19684516612413741LL;
	static int64_t x1870 = INT64_MAX;
	volatile uint64_t x1871 = 4LLU;

	t34 = (x1869&((x1870>>x1871)/x1872));

	if (t34 != 17631939699715LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1901 = INT16_MIN;
	uint32_t x1902 = UINT32_MAX;
	uint16_t x1903 = 6U;
	int32_t x1904 = -1;

	t35 = (x1901&((x1902>>x1903)/x1904));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1937 = -1;
	int8_t x1938 = 0;
	uint8_t x1939 = 2U;
	uint64_t x1940 = UINT64_MAX;
	uint64_t t36 = 3746272043629254609LLU;

	t36 = (x1937&((x1938>>x1939)/x1940));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1953 = 5807049830514141348LLU;
	static int16_t x1955 = 13;
	int64_t x1956 = INT64_MAX;
	volatile uint64_t t37 = 90065960729LLU;

	t37 = (x1953&((x1954>>x1955)/x1956));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1989 = -1LL;
	static volatile uint32_t x1990 = 1U;
	uint32_t x1992 = 42301U;
	volatile int64_t t38 = -32868LL;

	t38 = (x1989&((x1990>>x1991)/x1992));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2005 = -1;
	static int16_t x2006 = INT16_MAX;
	uint8_t x2007 = 22U;
	static int32_t x2008 = INT32_MAX;
	static volatile int32_t t39 = 0;

	t39 = (x2005&((x2006>>x2007)/x2008));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2130 = INT32_MAX;
	volatile int8_t x2131 = 0;
	int8_t x2132 = INT8_MAX;

	t40 = (x2129&((x2130>>x2131)/x2132));

	if (t40 != 16909320) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2181 = 43577U;
	static int16_t x2182 = INT16_MAX;
	uint8_t x2183 = 23U;
	static volatile int64_t t41 = -8136LL;

	t41 = (x2181&((x2182>>x2183)/x2184));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2201 = INT16_MAX;
	uint32_t x2202 = UINT32_MAX;
	static int16_t x2204 = 1655;
	volatile uint32_t t42 = 1362U;

	t42 = (x2201&((x2202>>x2203)/x2204));

	if (t42 != 1267U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2282 = 7LL;
	uint16_t x2283 = 0U;
	volatile int64_t t43 = -15LL;

	t43 = (x2281&((x2282>>x2283)/x2284));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2358 = 4U;
	int8_t x2359 = 18;
	int32_t x2360 = 5931;
	uint32_t t44 = 825U;

	t44 = (x2357&((x2358>>x2359)/x2360));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2461 = UINT64_MAX;
	volatile int64_t x2462 = 6294761545763LL;
	uint8_t x2463 = 6U;

	t45 = (x2461&((x2462>>x2463)/x2464));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2473 = UINT8_MAX;
	int64_t x2474 = INT64_MAX;
	volatile int16_t x2475 = 20;
	int64_t t46 = 29291794LL;

	t46 = (x2473&((x2474>>x2475)/x2476));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2533 = -10529178790160LL;
	volatile uint16_t x2535 = 0U;
	int16_t x2536 = 4;

	t47 = (x2533&((x2534>>x2535)/x2536));

	if (t47 != 4611675489248597744LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2590 = UINT64_MAX;
	static uint8_t x2591 = 29U;
	uint32_t x2592 = 1U;
	volatile uint64_t t48 = 4107883925641961269LLU;

	t48 = (x2589&((x2590>>x2591)/x2592));

	if (t48 != 15LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2761 = -112479785239LL;
	int8_t x2762 = 0;
	int16_t x2764 = 103;
	static volatile int64_t t49 = -13LL;

	t49 = (x2761&((x2762>>x2763)/x2764));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2877 = INT16_MIN;
	volatile uint32_t x2878 = 126808280U;
	int16_t x2879 = 1;
	int8_t x2880 = 34;
	volatile uint32_t t50 = 17624781U;

	t50 = (x2877&((x2878>>x2879)/x2880));

	if (t50 != 1835008U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2885 = INT8_MIN;
	volatile uint8_t x2886 = 7U;
	int8_t x2887 = 27;
	uint8_t x2888 = 1U;

	t51 = (x2885&((x2886>>x2887)/x2888));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2906 = 70432862LLU;
	uint16_t x2907 = 3U;
	uint64_t t52 = 4LLU;

	t52 = (x2905&((x2906>>x2907)/x2908));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2921 = -6LL;
	uint64_t x2922 = 444412483LLU;
	static uint8_t x2923 = 5U;
	volatile int8_t x2924 = -9;

	t53 = (x2921&((x2922>>x2923)/x2924));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3001 = -10734658464LL;
	static volatile uint16_t x3002 = 3089U;
	uint8_t x3003 = 1U;
	int16_t x3004 = -964;
	static int64_t t54 = 1579LL;

	t54 = (x3001&((x3002>>x3003)/x3004));

	if (t54 != -10734658464LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3018 = 1;
	uint8_t x3019 = 0U;
	volatile uint32_t x3020 = UINT32_MAX;

	t55 = (x3017&((x3018>>x3019)/x3020));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3029 = 46U;
	uint8_t x3031 = 7U;
	volatile int64_t x3032 = INT64_MIN;

	t56 = (x3029&((x3030>>x3031)/x3032));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3041 = UINT16_MAX;
	static uint32_t x3042 = 76349U;
	int16_t x3043 = 24;
	static volatile uint32_t t57 = 4087781U;

	t57 = (x3041&((x3042>>x3043)/x3044));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x3089 = INT8_MAX;
	int32_t x3090 = 0;
	volatile uint8_t x3091 = 11U;
	static uint32_t x3092 = UINT32_MAX;
	volatile uint32_t t58 = 781117921U;

	t58 = (x3089&((x3090>>x3091)/x3092));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x3105 = -1;
	uint32_t x3106 = 309509755U;
	int32_t x3107 = 6;
	static volatile int64_t x3108 = 29876594LL;

	t59 = (x3105&((x3106>>x3107)/x3108));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3109 = -1;
	static int8_t x3111 = 6;

	t60 = (x3109&((x3110>>x3111)/x3112));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3113 = -23754LL;
	static uint16_t x3114 = UINT16_MAX;
	uint8_t x3115 = 0U;
	volatile int64_t t61 = 11364484031LL;

	t61 = (x3113&((x3114>>x3115)/x3116));

	if (t61 != -23760LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3149 = INT8_MIN;
	volatile uint8_t x3150 = UINT8_MAX;
	static int16_t x3151 = 0;
	int8_t x3152 = -1;
	int32_t t62 = 215505;

	t62 = (x3149&((x3150>>x3151)/x3152));

	if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3177 = 117777373997133LL;
	uint8_t x3178 = 1U;
	int8_t x3179 = 26;
	static int32_t x3180 = INT32_MIN;
	static int64_t t63 = 7531296LL;

	t63 = (x3177&((x3178>>x3179)/x3180));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3361 = INT16_MIN;
	int64_t x3363 = 13LL;
	int16_t x3364 = -1;

	t64 = (x3361&((x3362>>x3363)/x3364));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3409 = INT32_MAX;
	uint32_t x3410 = UINT32_MAX;
	volatile uint8_t x3411 = 15U;
	uint32_t x3412 = 267133U;
	uint32_t t65 = 5U;

	t65 = (x3409&((x3410>>x3411)/x3412));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3509 = 2U;
	static uint8_t x3511 = 5U;
	volatile uint64_t t66 = 1356LLU;

	t66 = (x3509&((x3510>>x3511)/x3512));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3585 = INT16_MIN;
	int8_t x3586 = 15;
	int64_t x3588 = -6294673023186LL;
	int64_t t67 = -63767541128935294LL;

	t67 = (x3585&((x3586>>x3587)/x3588));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3665 = 2;
	volatile int64_t x3666 = 1609LL;
	int8_t x3667 = 0;
	int16_t x3668 = INT16_MIN;
	volatile int64_t t68 = 788388579677LL;

	t68 = (x3665&((x3666>>x3667)/x3668));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3684 = UINT8_MAX;

	t69 = (x3681&((x3682>>x3683)/x3684));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3693 = 55;
	static uint16_t x3694 = 5U;
	int64_t x3696 = INT64_MAX;
	volatile int64_t t70 = -8912461453LL;

	t70 = (x3693&((x3694>>x3695)/x3696));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3701 = INT16_MAX;
	int32_t x3702 = 888;
	volatile int8_t x3703 = 0;
	int8_t x3704 = INT8_MIN;
	volatile int32_t t71 = -1;

	t71 = (x3701&((x3702>>x3703)/x3704));

	if (t71 != 32762) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3733 = -1;
	int16_t x3734 = 1;
	uint32_t x3736 = UINT32_MAX;
	volatile uint32_t t72 = 2069662447U;

	t72 = (x3733&((x3734>>x3735)/x3736));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3741 = UINT8_MAX;
	volatile int8_t x3742 = 1;
	volatile uint16_t x3744 = UINT16_MAX;
	static volatile int32_t t73 = 320796239;

	t73 = (x3741&((x3742>>x3743)/x3744));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3801 = INT64_MAX;
	volatile int8_t x3803 = 0;
	int32_t x3804 = -1;
	volatile int64_t t74 = -785884LL;

	t74 = (x3801&((x3802>>x3803)/x3804));

	if (t74 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3829 = INT32_MIN;
	uint16_t x3830 = 25941U;
	uint16_t x3831 = 3U;
	uint32_t x3832 = 82U;

	t75 = (x3829&((x3830>>x3831)/x3832));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3845 = -10670;
	static int32_t x3846 = 163;
	int8_t x3847 = 1;
	volatile int8_t x3848 = 18;

	t76 = (x3845&((x3846>>x3847)/x3848));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3849 = INT64_MAX;
	uint8_t x3850 = 12U;
	uint8_t x3851 = 28U;
	volatile uint64_t t77 = 9490795845807227LLU;

	t77 = (x3849&((x3850>>x3851)/x3852));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3857 = UINT64_MAX;
	volatile uint64_t x3858 = UINT64_MAX;
	volatile int64_t x3860 = -29547483759086LL;
	uint64_t t78 = 1391863511684621123LLU;

	t78 = (x3857&((x3858>>x3859)/x3860));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x3961 = -12;
	int8_t x3962 = 41;
	uint16_t x3963 = 23U;
	int8_t x3964 = 6;
	int32_t t79 = 64255;

	t79 = (x3961&((x3962>>x3963)/x3964));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4110 = 43LLU;
	uint8_t x4111 = 9U;
	int8_t x4112 = INT8_MAX;

	t80 = (x4109&((x4110>>x4111)/x4112));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4153 = INT32_MAX;
	static volatile int16_t x4154 = INT16_MAX;
	uint8_t x4155 = 1U;
	int8_t x4156 = -3;
	static int32_t t81 = -32032;

	t81 = (x4153&((x4154>>x4155)/x4156));

	if (t81 != 2147478187) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4231 = 4U;
	int16_t x4232 = 1630;

	t82 = (x4229&((x4230>>x4231)/x4232));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4509 = -1;
	int64_t x4510 = 1LL;
	int16_t x4512 = -1;
	static volatile int64_t t83 = -39943360717650125LL;

	t83 = (x4509&((x4510>>x4511)/x4512));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4513 = 1848635038LLU;
	uint16_t x4514 = 1838U;
	int8_t x4515 = 1;
	int16_t x4516 = INT16_MIN;
	uint64_t t84 = 30892157LLU;

	t84 = (x4513&((x4514>>x4515)/x4516));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x4533 = 119477834264408368LLU;
	volatile uint64_t x4534 = 2086515196645LLU;
	uint16_t x4535 = 0U;
	uint64_t x4536 = 176LLU;

	t85 = (x4533&((x4534>>x4535)/x4536));

	if (t85 != 10285088LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x4634 = 199932341LL;
	int8_t x4635 = 18;
	static uint64_t x4636 = 667096965526LLU;
	volatile uint64_t t86 = 3376074LLU;

	t86 = (x4633&((x4634>>x4635)/x4636));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x4641 = -47647768;
	static int16_t x4642 = 4095;
	uint64_t x4643 = 18LLU;
	uint16_t x4644 = 4545U;
	static volatile int32_t t87 = -2;

	t87 = (x4641&((x4642>>x4643)/x4644));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4678 = 0U;
	static uint8_t x4679 = 21U;
	int16_t x4680 = INT16_MIN;
	static volatile int32_t t88 = -550;

	t88 = (x4677&((x4678>>x4679)/x4680));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x4689 = INT32_MIN;
	int8_t x4690 = 4;
	uint8_t x4692 = 6U;

	t89 = (x4689&((x4690>>x4691)/x4692));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4701 = 166294558U;
	volatile uint32_t x4702 = 10U;
	volatile uint16_t x4703 = 31U;
	int64_t x4704 = INT64_MIN;
	static volatile int64_t t90 = 34835723918499LL;

	t90 = (x4701&((x4702>>x4703)/x4704));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4750 = UINT32_MAX;
	volatile int8_t x4751 = 3;
	volatile int16_t x4752 = -1;
	static volatile uint64_t t91 = 8065467LLU;

	t91 = (x4749&((x4750>>x4751)/x4752));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4821 = 1;
	int8_t x4822 = 0;
	static volatile int64_t x4824 = INT64_MIN;
	volatile int64_t t92 = -99LL;

	t92 = (x4821&((x4822>>x4823)/x4824));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x4865 = INT16_MIN;
	static int64_t x4866 = 102425266334390015LL;
	int16_t x4867 = 6;
	uint16_t x4868 = UINT16_MAX;
	volatile int64_t t93 = -1477823911117276255LL;

	t93 = (x4865&((x4866>>x4867)/x4868));

	if (t93 != 24420450304LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4869 = 1563U;
	static uint32_t x4870 = UINT32_MAX;
	static uint16_t x4871 = 5U;
	uint32_t t94 = 1285344775U;

	t94 = (x4869&((x4870>>x4871)/x4872));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4949 = 4018657LL;
	int8_t x4951 = 26;
	static int64_t t95 = 102363645085120LL;

	t95 = (x4949&((x4950>>x4951)/x4952));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4989 = UINT32_MAX;
	static uint16_t x4990 = UINT16_MAX;
	volatile int8_t x4991 = 0;

	t96 = (x4989&((x4990>>x4991)/x4992));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5054 = 155340LLU;
	int32_t x5055 = 15;
	int16_t x5056 = INT16_MAX;
	uint64_t t97 = 1LLU;

	t97 = (x5053&((x5054>>x5055)/x5056));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5185 = INT8_MIN;
	volatile uint32_t x5186 = UINT32_MAX;
	uint8_t x5187 = 10U;
	static int32_t x5188 = 497476;
	volatile uint32_t t98 = 301051U;

	t98 = (x5185&((x5186>>x5187)/x5188));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5229 = UINT16_MAX;
	int8_t x5230 = 6;
	int16_t x5231 = 4;
	uint32_t x5232 = 418019857U;
	uint32_t t99 = 222316U;

	t99 = (x5229&((x5230>>x5231)/x5232));

	if (t99 != 0U) { NG(); } else { ; }
	
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

