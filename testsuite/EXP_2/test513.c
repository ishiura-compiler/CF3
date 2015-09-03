#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x59 = -1;
static volatile uint32_t x149 = 501U;
volatile uint32_t t1 = 25267U;
int8_t x322 = 45;
uint8_t x344 = 2U;
volatile int64_t t4 = 202LL;
static uint64_t x423 = UINT64_MAX;
static int8_t x486 = 13;
uint32_t x487 = 38328U;
static volatile uint32_t t6 = 5U;
uint64_t x599 = 2920762LLU;
volatile int64_t x600 = 4LL;
int8_t x673 = -1;
int8_t x715 = -1;
static volatile uint64_t x760 = 0LLU;
int8_t x770 = INT8_MIN;
uint8_t x772 = 0U;
volatile int8_t x796 = 44;
uint64_t t13 = 679938187707LLU;
int32_t x942 = -220;
uint8_t x962 = 2U;
uint64_t x963 = 5783762281004LLU;
int32_t x970 = -1;
volatile int32_t t16 = -3755;
int8_t x1056 = 1;
uint16_t x1177 = UINT16_MAX;
static volatile uint16_t x1344 = 5U;
static int8_t x1406 = -1;
int16_t x1441 = INT16_MIN;
static int8_t x1509 = -1;
static uint64_t t25 = 8266791621421LLU;
volatile uint32_t x1538 = 7U;
static uint16_t x1568 = 7U;
static uint64_t t27 = 3LLU;
static uint32_t x1584 = 7U;
uint8_t x1612 = 13U;
static volatile int64_t t30 = 1LL;
int16_t x1728 = 24;
volatile int64_t t31 = 6681942522LL;
int8_t x1790 = INT8_MIN;
static uint16_t x1843 = UINT16_MAX;
static int16_t x1909 = 1;
volatile uint32_t x1911 = 559U;
static uint8_t x1912 = 1U;
static uint8_t x1916 = 20U;
int32_t x1933 = 7631378;
uint16_t x1936 = 2U;
static volatile int32_t x2015 = INT32_MIN;
uint8_t x2244 = 21U;
volatile uint16_t x2260 = 0U;
static volatile uint32_t x2304 = 1U;
static int64_t x2387 = INT64_MIN;
int64_t x2557 = -1LL;
int64_t x2558 = 1054630074LL;
uint32_t x2589 = 770U;
uint64_t x2622 = UINT64_MAX;
static volatile uint64_t t52 = 7558906705LLU;
static int32_t x2712 = 43;
static uint64_t t54 = 494958879610LLU;
static uint8_t x2788 = 2U;
int64_t t56 = -31283679941142317LL;
int16_t x2963 = INT16_MIN;
static int32_t x3043 = INT32_MIN;
static int16_t x3242 = INT16_MIN;
uint32_t x3367 = 1452902U;
static volatile int32_t t63 = -14949;
uint16_t x3562 = 63U;
static int16_t x3563 = INT16_MAX;
uint64_t t66 = 413827324886463923LLU;
int8_t x3573 = INT8_MIN;
uint8_t x3613 = 65U;
static uint32_t x3614 = UINT32_MAX;
int16_t x3630 = INT16_MIN;
int16_t x3631 = INT16_MIN;
uint64_t t69 = 95722LLU;
int32_t x3711 = INT32_MAX;
uint8_t x3832 = 16U;
uint32_t t73 = 149518U;
uint32_t x3861 = 1216009U;
static uint16_t x3864 = 0U;
static int8_t x3963 = -1;
uint64_t t79 = 1618LLU;
int8_t x4068 = 3;
int32_t t80 = 2058;
volatile int64_t x4157 = -1LL;
int32_t x4159 = INT32_MAX;
int8_t x4160 = 1;
uint8_t x4260 = 3U;
int8_t x4289 = 7;
static uint32_t x4350 = UINT32_MAX;
int8_t x4352 = 6;
volatile int32_t x4415 = 19;
uint64_t x4416 = 7LLU;
uint8_t x4418 = UINT8_MAX;
volatile int64_t x4419 = 124984340525LL;
int16_t x4496 = 5;
uint64_t x4763 = UINT64_MAX;
uint64_t x4815 = 362337LLU;
volatile uint64_t t97 = 120469574987LLU;
int8_t x4919 = INT8_MAX;
static uint64_t x4934 = 2276712580656LLU;
volatile uint64_t t99 = 8001767560131280544LLU;


void f0(void) {
	int32_t x57 = 2968;
	uint64_t x58 = 9090544LLU;
	static int8_t x60 = 20;
	static uint64_t t0 = 2570LLU;

	t0 = ((x57+(x58/x59))<<x60);

	if (t0 != 3112173568LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x150 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	static volatile int16_t x152 = 3;

	t1 = ((x149+(x150/x151))<<x152);

	if (t1 != 4008U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = -1;
	static int16_t x279 = INT16_MIN;
	static int32_t x280 = 25;
	uint32_t t2 = 574768267U;

	t2 = ((x277+(x278/x279))<<x280);

	if (t2 != 4261412864U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x321 = UINT64_MAX;
	static uint8_t x323 = 54U;
	static uint16_t x324 = 0U;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x321+(x322/x323))<<x324);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = -1LL;
	uint8_t x343 = 3U;

	t4 = ((x341+(x342/x343))<<x344);

	if (t4 != 508LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = -3622628277947366083LL;
	static volatile int64_t x424 = 8LL;
	static uint64_t t5 = 1189892154798LLU;

	t5 = ((x421+(x422/x423))<<x424);

	if (t5 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x485 = INT8_MIN;
	uint8_t x488 = 1U;

	t6 = ((x485+(x486/x487))<<x488);

	if (t6 != 4294967040U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x529 = UINT64_MAX;
	volatile uint32_t x530 = 142214932U;
	static int64_t x531 = INT64_MIN;
	uint16_t x532 = 4U;
	volatile uint64_t t7 = 264865LLU;

	t7 = ((x529+(x530/x531))<<x532);

	if (t7 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x597 = INT32_MAX;
	uint16_t x598 = 45U;
	volatile uint64_t t8 = 477761418527LLU;

	t8 = ((x597+(x598/x599))<<x600);

	if (t8 != 34359738352LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x674 = UINT64_MAX;
	int64_t x675 = -63561786LL;
	uint16_t x676 = 50U;
	uint64_t t9 = 440569612664966309LLU;

	t9 = ((x673+(x674/x675))<<x676);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x713 = 82807495LLU;
	uint32_t x714 = 55700U;
	volatile uint64_t x716 = 2LLU;
	static volatile uint64_t t10 = 35084614286456LLU;

	t10 = ((x713+(x714/x715))<<x716);

	if (t10 != 331229980LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x757 = UINT32_MAX;
	static int16_t x758 = -1;
	uint16_t x759 = UINT16_MAX;
	uint32_t t11 = UINT32_MAX;

	t11 = ((x757+(x758/x759))<<x760);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x769 = -1;
	uint64_t x771 = 93LLU;
	volatile uint64_t t12 = 60473LLU;

	t12 = ((x769+(x770/x771))<<x772);

	if (t12 != 198352086814081197LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x793 = 31270663;
	int16_t x794 = INT16_MAX;
	uint64_t x795 = UINT64_MAX;

	t13 = ((x793+(x794/x795))<<x796);

	if (t13 != 15163743090658770944LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x941 = 60432LLU;
	int32_t x943 = INT32_MIN;
	int16_t x944 = 2;
	volatile uint64_t t14 = 61259996861753125LLU;

	t14 = ((x941+(x942/x943))<<x944);

	if (t14 != 241728LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x961 = INT64_MAX;
	int16_t x964 = 1;
	volatile uint64_t t15 = 376581935LLU;

	t15 = ((x961+(x962/x963))<<x964);

	if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x969 = 12922U;
	static volatile uint16_t x971 = 3U;
	static int16_t x972 = 0;

	t16 = ((x969+(x970/x971))<<x972);

	if (t16 != 12922) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1053 = 5205U;
	int16_t x1054 = -1;
	int8_t x1055 = INT8_MIN;
	int32_t t17 = 0;

	t17 = ((x1053+(x1054/x1055))<<x1056);

	if (t17 != 10410) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1178 = INT64_MIN;
	int8_t x1179 = -5;
	uint16_t x1180 = 1U;
	volatile int64_t t18 = -45286068166704802LL;

	t18 = ((x1177+(x1178/x1179))<<x1180);

	if (t18 != 3689348814742041392LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1253 = INT16_MAX;
	uint8_t x1254 = 1U;
	int8_t x1255 = 1;
	static uint8_t x1256 = 5U;
	int32_t t19 = 1;

	t19 = ((x1253+(x1254/x1255))<<x1256);

	if (t19 != 1048576) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1341 = 12LL;
	int32_t x1342 = 89009;
	static uint32_t x1343 = 97840U;
	int64_t t20 = -1622526961894551743LL;

	t20 = ((x1341+(x1342/x1343))<<x1344);

	if (t20 != 384LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1405 = INT16_MAX;
	uint16_t x1407 = 1U;
	int8_t x1408 = 7;
	int32_t t21 = -2632926;

	t21 = ((x1405+(x1406/x1407))<<x1408);

	if (t21 != 4194048) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1442 = 18426584026491042LLU;
	uint32_t x1443 = UINT32_MAX;
	volatile uint32_t x1444 = 8U;
	uint64_t t22 = 60098387263LLU;

	t22 = ((x1441+(x1442/x1443))<<x1444);

	if (t22 != 1089921280LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1453 = UINT64_MAX;
	uint8_t x1454 = 3U;
	int8_t x1455 = INT8_MAX;
	int16_t x1456 = 1;
	volatile uint64_t t23 = 830812785276706LLU;

	t23 = ((x1453+(x1454/x1455))<<x1456);

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1510 = 2011926812975LLU;
	volatile int64_t x1511 = INT64_MIN;
	int8_t x1512 = 1;
	static uint64_t t24 = 135256937572LLU;

	t24 = ((x1509+(x1510/x1511))<<x1512);

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1529 = 201866610441109LL;
	int64_t x1530 = -17954LL;
	uint64_t x1531 = 14364600LLU;
	int16_t x1532 = 0;

	t25 = ((x1529+(x1530/x1531))<<x1532);

	if (t25 != 203150791279678LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1537 = -340;
	uint8_t x1539 = 16U;
	static uint64_t x1540 = 1LLU;
	uint32_t t26 = 41984U;

	t26 = ((x1537+(x1538/x1539))<<x1540);

	if (t26 != 4294966616U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1565 = 72255741868LLU;
	volatile int32_t x1566 = INT32_MIN;
	static int64_t x1567 = INT64_MIN;

	t27 = ((x1565+(x1566/x1567))<<x1568);

	if (t27 != 9248734959104LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1581 = INT8_MAX;
	uint64_t x1582 = UINT64_MAX;
	int32_t x1583 = INT32_MAX;
	static volatile uint64_t t28 = 9LLU;

	t28 = ((x1581+(x1582/x1583))<<x1584);

	if (t28 != 1099511644544LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1601 = INT8_MIN;
	uint32_t x1602 = UINT32_MAX;
	int16_t x1603 = INT16_MAX;
	int32_t x1604 = 4;
	uint32_t t29 = 73795373U;

	t29 = ((x1601+(x1602/x1603))<<x1604);

	if (t29 != 2095168U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1609 = INT8_MAX;
	int16_t x1610 = INT16_MIN;
	int64_t x1611 = -1233628LL;

	t30 = ((x1609+(x1610/x1611))<<x1612);

	if (t30 != 1040384LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1725 = -1;
	int32_t x1726 = -1;
	int64_t x1727 = -1LL;

	t31 = ((x1725+(x1726/x1727))<<x1728);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1733 = INT32_MIN;
	uint32_t x1734 = UINT32_MAX;
	uint64_t x1735 = 13753792728LLU;
	int16_t x1736 = 1;
	volatile uint64_t t32 = 13LLU;

	t32 = ((x1733+(x1734/x1735))<<x1736);

	if (t32 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1753 = -1;
	uint64_t x1754 = 301LLU;
	static uint16_t x1755 = UINT16_MAX;
	volatile int8_t x1756 = 7;
	volatile uint64_t t33 = 12476726LLU;

	t33 = ((x1753+(x1754/x1755))<<x1756);

	if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1789 = UINT64_MAX;
	uint64_t x1791 = UINT64_MAX;
	uint8_t x1792 = 9U;
	volatile uint64_t t34 = 241212872LLU;

	t34 = ((x1789+(x1790/x1791))<<x1792);

	if (t34 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1841 = 1430646U;
	uint8_t x1842 = 0U;
	uint8_t x1844 = 5U;
	uint32_t t35 = 40U;

	t35 = ((x1841+(x1842/x1843))<<x1844);

	if (t35 != 45780672U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1910 = INT8_MAX;
	static uint32_t t36 = 2U;

	t36 = ((x1909+(x1910/x1911))<<x1912);

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1913 = INT32_MIN;
	uint8_t x1914 = 0U;
	uint64_t x1915 = 2060383044887876047LLU;
	uint64_t t37 = 1234402LLU;

	t37 = ((x1913+(x1914/x1915))<<x1916);

	if (t37 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1934 = UINT8_MAX;
	int8_t x1935 = -1;
	static volatile int32_t t38 = -8275541;

	t38 = ((x1933+(x1934/x1935))<<x1936);

	if (t38 != 30524492) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2013 = 1174326643LL;
	volatile int64_t x2014 = INT64_MIN;
	volatile uint8_t x2016 = 1U;
	static volatile int64_t t39 = -15857890269276LL;

	t39 = ((x2013+(x2014/x2015))<<x2016);

	if (t39 != 10938587878LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2041 = INT32_MIN;
	int64_t x2042 = INT64_MIN;
	int16_t x2043 = INT16_MIN;
	volatile uint64_t x2044 = 8LLU;
	int64_t t40 = 115889241754801LL;

	t40 = ((x2041+(x2042/x2043))<<x2044);

	if (t40 != 72057044282114048LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2157 = 152;
	int16_t x2158 = INT16_MIN;
	static int64_t x2159 = -726074541175LL;
	int16_t x2160 = 1;
	volatile int64_t t41 = -8909LL;

	t41 = ((x2157+(x2158/x2159))<<x2160);

	if (t41 != 304LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2169 = 7U;
	int64_t x2170 = INT64_MAX;
	int64_t x2171 = INT64_MAX;
	uint32_t x2172 = 14U;
	volatile int64_t t42 = 1371398547491491655LL;

	t42 = ((x2169+(x2170/x2171))<<x2172);

	if (t42 != 131072LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2241 = 0;
	int64_t x2242 = -1LL;
	int16_t x2243 = -1;
	volatile int64_t t43 = 8845LL;

	t43 = ((x2241+(x2242/x2243))<<x2244);

	if (t43 != 2097152LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2257 = INT16_MAX;
	int8_t x2258 = INT8_MIN;
	volatile int64_t x2259 = INT64_MAX;
	int64_t t44 = 10207099LL;

	t44 = ((x2257+(x2258/x2259))<<x2260);

	if (t44 != 32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2301 = 5518573U;
	uint64_t x2302 = UINT64_MAX;
	int8_t x2303 = -20;
	uint64_t t45 = 139795LLU;

	t45 = ((x2301+(x2302/x2303))<<x2304);

	if (t45 != 11037148LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2381 = 2114250770U;
	volatile int8_t x2382 = -18;
	int32_t x2383 = INT32_MAX;
	int16_t x2384 = 0;
	volatile uint32_t t46 = 60496U;

	t46 = ((x2381+(x2382/x2383))<<x2384);

	if (t46 != 2114250770U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2385 = 0U;
	static int16_t x2386 = INT16_MAX;
	uint16_t x2388 = 13U;
	volatile int64_t t47 = 3330839LL;

	t47 = ((x2385+(x2386/x2387))<<x2388);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2533 = UINT64_MAX;
	int16_t x2534 = INT16_MAX;
	volatile int8_t x2535 = INT8_MAX;
	int8_t x2536 = 1;
	static uint64_t t48 = 19464LLU;

	t48 = ((x2533+(x2534/x2535))<<x2536);

	if (t48 != 514LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2559 = UINT16_MAX;
	volatile int32_t x2560 = 0;
	int64_t t49 = -684957035257724267LL;

	t49 = ((x2557+(x2558/x2559))<<x2560);

	if (t49 != 16091LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2590 = INT64_MIN;
	uint64_t x2591 = 17587532LLU;
	uint64_t x2592 = 7LLU;
	volatile uint64_t t50 = 56LLU;

	t50 = ((x2589+(x2590/x2591))<<x2592);

	if (t50 != 67126622567040LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x2621 = 86U;
	uint16_t x2623 = 8059U;
	uint16_t x2624 = 2U;
	static uint64_t t51 = 1035458930925537704LLU;

	t51 = ((x2621+(x2622/x2623))<<x2624);

	if (t51 != 9155847660359964LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2681 = -1;
	int64_t x2682 = INT64_MIN;
	uint64_t x2683 = 5LLU;
	int8_t x2684 = 0;

	t52 = ((x2681+(x2682/x2683))<<x2684);

	if (t52 != 1844674407370955160LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2709 = 3720;
	static int32_t x2710 = INT32_MAX;
	int64_t x2711 = INT64_MIN;
	int64_t t53 = 3197407995604LL;

	t53 = ((x2709+(x2710/x2711))<<x2712);

	if (t53 != 32721466042613760LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2773 = INT8_MIN;
	uint64_t x2774 = UINT64_MAX;
	int8_t x2775 = -1;
	uint8_t x2776 = 4U;

	t54 = ((x2773+(x2774/x2775))<<x2776);

	if (t54 != 18446744073709549584LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2785 = UINT64_MAX;
	int16_t x2786 = 193;
	int8_t x2787 = INT8_MIN;
	static uint64_t t55 = 67802343LLU;

	t55 = ((x2785+(x2786/x2787))<<x2788);

	if (t55 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2869 = 32329U;
	int16_t x2870 = 0;
	int64_t x2871 = INT64_MAX;
	uint16_t x2872 = 17U;

	t56 = ((x2869+(x2870/x2871))<<x2872);

	if (t56 != 4237426688LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2877 = 28159496645079LLU;
	volatile int8_t x2878 = INT8_MIN;
	uint16_t x2879 = 50U;
	uint8_t x2880 = 11U;
	uint64_t t57 = 803LLU;

	t57 = ((x2877+(x2878/x2879))<<x2880);

	if (t57 != 57670649129117696LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2961 = 4073U;
	volatile int32_t x2962 = INT32_MIN;
	uint8_t x2964 = 0U;
	volatile int32_t t58 = -65797335;

	t58 = ((x2961+(x2962/x2963))<<x2964);

	if (t58 != 69609) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3041 = 6U;
	uint16_t x3042 = 2095U;
	uint32_t x3044 = 2U;
	static volatile int32_t t59 = 410373;

	t59 = ((x3041+(x3042/x3043))<<x3044);

	if (t59 != 24) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3241 = INT16_MAX;
	int16_t x3243 = INT16_MIN;
	static int32_t x3244 = 1;
	static int32_t t60 = 22847775;

	t60 = ((x3241+(x3242/x3243))<<x3244);

	if (t60 != 65536) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3281 = 10223;
	int32_t x3282 = -5285;
	static uint64_t x3283 = 1940145LLU;
	uint16_t x3284 = 7U;
	uint64_t t61 = 3886427LLU;

	t61 = ((x3281+(x3282/x3283))<<x3284);

	if (t61 != 1217013802562944LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3365 = 71128027653058537LLU;
	volatile int16_t x3366 = INT16_MIN;
	int8_t x3368 = 17;
	volatile uint64_t t62 = 6596LLU;

	t62 = ((x3365+(x3366/x3367))<<x3368);

	if (t62 != 7287083318752444416LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3445 = INT16_MAX;
	static uint16_t x3446 = 3468U;
	uint16_t x3447 = 723U;
	uint8_t x3448 = 5U;

	t63 = ((x3445+(x3446/x3447))<<x3448);

	if (t63 != 1048672) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3517 = UINT64_MAX;
	volatile int8_t x3518 = INT8_MAX;
	int64_t x3519 = -7LL;
	uint8_t x3520 = 2U;
	uint64_t t64 = 72312435799443LLU;

	t64 = ((x3517+(x3518/x3519))<<x3520);

	if (t64 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3541 = 7146100048209LLU;
	int64_t x3542 = 1251194698LL;
	int64_t x3543 = INT64_MIN;
	int8_t x3544 = 35;
	uint64_t t65 = 733671474579126515LLU;

	t65 = ((x3541+(x3542/x3543))<<x3544);

	if (t65 != 11964386939294973952LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3561 = 187608140867LLU;
	volatile uint8_t x3564 = 4U;

	t66 = ((x3561+(x3562/x3563))<<x3564);

	if (t66 != 3001730253872LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x3574 = -531268LL;
	int32_t x3575 = -1;
	volatile uint8_t x3576 = 1U;
	volatile int64_t t67 = -27005LL;

	t67 = ((x3573+(x3574/x3575))<<x3576);

	if (t67 != 1062280LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x3615 = -1;
	static uint8_t x3616 = 8U;
	uint32_t t68 = 495615U;

	t68 = ((x3613+(x3614/x3615))<<x3616);

	if (t68 != 16896U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3629 = 4021218908280817LLU;
	volatile int64_t x3632 = 43LL;

	t69 = ((x3629+(x3630/x3631))<<x3632);

	if (t69 != 13600747729356587008LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3677 = INT16_MAX;
	static int32_t x3678 = INT32_MIN;
	int64_t x3679 = -1719678166874686111LL;
	static uint8_t x3680 = 1U;
	volatile int64_t t70 = 4395966178362LL;

	t70 = ((x3677+(x3678/x3679))<<x3680);

	if (t70 != 65534LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3709 = 0;
	int8_t x3710 = -13;
	static volatile int16_t x3712 = 23;
	static volatile int32_t t71 = -16;

	t71 = ((x3709+(x3710/x3711))<<x3712);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3829 = 0U;
	int32_t x3830 = 1504;
	static int32_t x3831 = INT32_MIN;
	int32_t t72 = -28988432;

	t72 = ((x3829+(x3830/x3831))<<x3832);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3837 = 1741640;
	static uint32_t x3838 = 924789U;
	volatile int16_t x3839 = INT16_MIN;
	uint64_t x3840 = 0LLU;

	t73 = ((x3837+(x3838/x3839))<<x3840);

	if (t73 != 1741640U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3862 = 223U;
	uint16_t x3863 = UINT16_MAX;
	volatile uint32_t t74 = 3U;

	t74 = ((x3861+(x3862/x3863))<<x3864);

	if (t74 != 1216009U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3901 = 6137U;
	int64_t x3902 = 251LL;
	static int64_t x3903 = -5810889LL;
	volatile uint64_t x3904 = 1LLU;
	int64_t t75 = 70LL;

	t75 = ((x3901+(x3902/x3903))<<x3904);

	if (t75 != 12274LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3925 = -635153912;
	uint16_t x3926 = UINT16_MAX;
	static uint64_t x3927 = UINT64_MAX;
	uint32_t x3928 = 10U;
	volatile uint64_t t76 = 1356798654245LLU;

	t76 = ((x3925+(x3926/x3927))<<x3928);

	if (t76 != 18446743423311945728LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3961 = 41U;
	int64_t x3962 = -5565394LL;
	uint8_t x3964 = 5U;
	volatile int64_t t77 = -133586820205494506LL;

	t77 = ((x3961+(x3962/x3963))<<x3964);

	if (t77 != 178093920LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3985 = -1;
	static uint16_t x3986 = UINT16_MAX;
	uint64_t x3987 = 665971679LLU;
	static volatile int8_t x3988 = 8;
	uint64_t t78 = 35139LLU;

	t78 = ((x3985+(x3986/x3987))<<x3988);

	if (t78 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4037 = UINT64_MAX;
	volatile int64_t x4038 = 395835637230193LL;
	int64_t x4039 = -5603256LL;
	uint8_t x4040 = 5U;

	t79 = ((x4037+(x4038/x4039))<<x4040);

	if (t79 != 18446744071448948064LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4065 = 1;
	int16_t x4066 = INT16_MAX;
	int32_t x4067 = 55702;

	t80 = ((x4065+(x4066/x4067))<<x4068);

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x4081 = UINT8_MAX;
	int8_t x4082 = 13;
	int32_t x4083 = -1;
	volatile int8_t x4084 = 5;
	volatile int32_t t81 = -28547;

	t81 = ((x4081+(x4082/x4083))<<x4084);

	if (t81 != 7744) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4158 = 612424581004090393LLU;
	uint64_t t82 = 2208096216317677002LLU;

	t82 = ((x4157+(x4158/x4159))<<x4160);

	if (t82 != 570364834LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4257 = 1321053379962LLU;
	int32_t x4258 = INT32_MAX;
	static int32_t x4259 = -11848;
	uint64_t t83 = 4616387946136LLU;

	t83 = ((x4257+(x4258/x4259))<<x4260);

	if (t83 != 10568425589680LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4290 = -1;
	int8_t x4291 = -1;
	int16_t x4292 = 0;
	volatile int32_t t84 = 749;

	t84 = ((x4289+(x4290/x4291))<<x4292);

	if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4297 = 92331458LLU;
	int16_t x4298 = INT16_MIN;
	volatile int16_t x4299 = -1;
	uint8_t x4300 = 49U;
	volatile uint64_t t85 = 564989291LLU;

	t85 = ((x4297+(x4298/x4299))<<x4300);

	if (t85 != 13511924782018330624LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4325 = INT64_MAX;
	volatile int32_t x4326 = 14953182;
	uint64_t x4327 = 290304760597LLU;
	uint8_t x4328 = 17U;
	volatile uint64_t t86 = 13042749758311074LLU;

	t86 = ((x4325+(x4326/x4327))<<x4328);

	if (t86 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x4349 = -1;
	static int16_t x4351 = -1;
	volatile uint32_t t87 = 659351U;

	t87 = ((x4349+(x4350/x4351))<<x4352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4413 = -4;
	uint32_t x4414 = UINT32_MAX;
	volatile uint32_t t88 = 136662U;

	t88 = ((x4413+(x4414/x4415))<<x4416);

	if (t88 != 3164712192U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4417 = 5127657LL;
	uint8_t x4420 = 2U;
	volatile int64_t t89 = 49118707LL;

	t89 = ((x4417+(x4418/x4419))<<x4420);

	if (t89 != 20510628LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4421 = UINT64_MAX;
	int32_t x4422 = INT32_MIN;
	volatile int16_t x4423 = -7127;
	uint8_t x4424 = 0U;
	volatile uint64_t t90 = 5LLU;

	t90 = ((x4421+(x4422/x4423))<<x4424);

	if (t90 != 301315LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4493 = -1LL;
	uint64_t x4494 = UINT64_MAX;
	int8_t x4495 = INT8_MIN;
	static uint64_t t91 = 2008054144LLU;

	t91 = ((x4493+(x4494/x4495))<<x4496);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4605 = INT16_MAX;
	static volatile int16_t x4606 = INT16_MIN;
	int64_t x4607 = 3LL;
	uint8_t x4608 = 2U;
	static int64_t t92 = -48910490703737432LL;

	t92 = ((x4605+(x4606/x4607))<<x4608);

	if (t92 != 87380LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x4761 = INT32_MIN;
	uint64_t x4762 = 492259LLU;
	uint64_t x4764 = 62LLU;
	uint64_t t93 = 7028LLU;

	t93 = ((x4761+(x4762/x4763))<<x4764);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x4769 = 245584;
	int16_t x4770 = -1;
	uint8_t x4771 = UINT8_MAX;
	uint8_t x4772 = 8U;
	volatile int32_t t94 = -5068668;

	t94 = ((x4769+(x4770/x4771))<<x4772);

	if (t94 != 62869504) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4785 = 19U;
	volatile int8_t x4786 = -1;
	static uint64_t x4787 = 56474827421LLU;
	uint8_t x4788 = 6U;
	volatile uint64_t t95 = 152LLU;

	t95 = ((x4785+(x4786/x4787))<<x4788);

	if (t95 != 20904741824LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4809 = 102325432149LLU;
	volatile int64_t x4810 = INT64_MIN;
	int64_t x4811 = INT64_MAX;
	uint16_t x4812 = 15U;
	static uint64_t t96 = 1410730636078601LLU;

	t96 = ((x4809+(x4810/x4811))<<x4812);

	if (t96 != 3352999760625664LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4813 = 24;
	int8_t x4814 = 17;
	volatile uint8_t x4816 = 9U;

	t97 = ((x4813+(x4814/x4815))<<x4816);

	if (t97 != 12288LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x4917 = UINT16_MAX;
	static int16_t x4918 = -1;
	uint16_t x4920 = 0U;
	volatile int32_t t98 = -1;

	t98 = ((x4917+(x4918/x4919))<<x4920);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4933 = 0U;
	int8_t x4935 = INT8_MAX;
	static uint8_t x4936 = 60U;

	t99 = ((x4933+(x4934/x4935))<<x4936);

	if (t99 != 10376293541461622784LLU) { NG(); } else { ; }
	
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

