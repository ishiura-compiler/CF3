#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x91 = 22444U;
static volatile int8_t x92 = 0;
volatile int64_t x121 = 52866396LL;
static int32_t x134 = -425;
uint64_t x135 = 678390817966LLU;
static uint64_t t2 = 6LLU;
int8_t x147 = 1;
uint16_t x165 = UINT16_MAX;
int16_t x439 = 0;
volatile uint64_t t8 = 7075063464LLU;
static uint64_t x618 = 1185216LLU;
int32_t x619 = INT32_MIN;
int64_t x629 = 23258233008535LL;
int8_t x632 = 11;
uint8_t x637 = 25U;
uint32_t x806 = UINT32_MAX;
static int16_t x807 = INT16_MIN;
uint8_t x808 = 20U;
static volatile int32_t x865 = INT32_MIN;
int8_t x972 = 1;
uint64_t t15 = 60537735LLU;
volatile int64_t t16 = -3049793769407LL;
int32_t x1113 = INT32_MAX;
volatile int8_t x1116 = 6;
int16_t x1167 = INT16_MIN;
uint64_t t19 = 44923752889228LLU;
int32_t t20 = 292674;
uint16_t x1323 = 11U;
int16_t x1324 = 1;
uint64_t x1405 = 35466LLU;
static uint8_t x1407 = 6U;
static uint64_t t22 = 1580603435LLU;
int8_t x1537 = 1;
uint64_t x1593 = UINT64_MAX;
uint32_t x1595 = 105U;
volatile uint64_t t26 = 2844039LLU;
uint64_t x1731 = 36LLU;
static int16_t x1732 = 16;
int16_t x1784 = 1;
uint32_t x1861 = 7683U;
int8_t x1862 = 4;
int64_t x1863 = INT64_MIN;
int16_t x1977 = INT16_MIN;
int8_t x2059 = 1;
int8_t x2060 = 1;
static uint64_t x2102 = UINT64_MAX;
static uint64_t t37 = 19138409LLU;
static uint32_t x2109 = UINT32_MAX;
int16_t x2110 = -404;
int32_t x2111 = INT32_MIN;
int16_t x2250 = INT16_MIN;
volatile int16_t x2306 = -1;
int32_t x2308 = 5;
static uint64_t t42 = 4833460941704658LLU;
int8_t x2330 = INT8_MIN;
int32_t x2458 = INT32_MAX;
uint64_t x2459 = 11860917LLU;
uint8_t x2460 = 6U;
volatile uint64_t t45 = 215981160LLU;
static volatile int32_t x2517 = INT32_MAX;
volatile uint16_t x2548 = 3U;
uint16_t x2646 = UINT16_MAX;
int8_t x2912 = 34;
volatile uint64_t x3002 = UINT64_MAX;
uint16_t x3105 = 18605U;
uint64_t x3138 = 2036812467675926045LLU;
int16_t x3142 = INT16_MIN;
int64_t x3147 = INT64_MIN;
uint32_t t59 = 2781329U;
static volatile int32_t t61 = -1;
int64_t x3532 = 4LL;
volatile int32_t x3922 = 3640977;
uint8_t x3926 = UINT8_MAX;
uint32_t x3975 = 11U;
volatile uint8_t x3976 = 2U;
uint64_t t67 = 73671348875465LLU;
int16_t x4169 = INT16_MIN;
uint16_t x4171 = 784U;
uint8_t x4282 = 4U;
static int8_t x4305 = INT8_MIN;
int8_t x4307 = INT8_MAX;
uint64_t t72 = 280373722057213346LLU;
uint8_t x4465 = 3U;
int64_t t75 = 103493LL;
int64_t x4559 = INT64_MIN;
static uint8_t x4596 = 1U;
volatile uint32_t t78 = 0U;
uint64_t t79 = 2032LLU;
int8_t x4681 = 3;
volatile int8_t x4686 = INT8_MIN;
static int8_t x4687 = INT8_MIN;
volatile int32_t x4884 = 0;
static volatile uint32_t x4920 = 1U;
uint32_t x4930 = UINT32_MAX;
uint64_t t86 = 134464897479755361LLU;
uint64_t x5043 = UINT64_MAX;
static uint64_t t87 = 415LLU;
volatile int64_t x5081 = -3LL;
int64_t t88 = -1195114LL;
int16_t x5177 = -5577;
int8_t x5179 = INT8_MAX;
int64_t x5187 = 116282429724415LL;
int32_t x5353 = 2760639;
volatile int16_t x5355 = INT16_MIN;
volatile uint32_t t92 = 634055767U;
int32_t x5601 = -1;
uint16_t x5648 = 15U;
uint64_t t96 = 498LLU;
int16_t x5653 = -19;
uint8_t x5654 = 12U;
volatile int16_t x5695 = 10187;
volatile uint64_t t98 = 62LLU;
volatile int8_t x5719 = INT8_MAX;


void f0(void) {
	static uint16_t x89 = 255U;
	int8_t x90 = 1;
	int32_t t0 = 823;

	t0 = ((x89-(x90&x91))<<x92);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x122 = 2545U;
	uint64_t x123 = 599189412633455720LLU;
	uint8_t x124 = 6U;
	volatile uint64_t t1 = 1731946282147141769LLU;

	t1 = ((x121-(x122&x123))<<x124);

	if (t1 != 3383312128LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x133 = -1;
	volatile uint16_t x136 = 9U;

	t2 = ((x133-(x134&x135))<<x136);

	if (t2 != 18446396737610838528LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x146 = 3771517U;
	uint8_t x148 = 2U;
	uint32_t t3 = 71U;

	t3 = ((x145-(x146&x147))<<x148);

	if (t3 != 131064U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x166 = 1735;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = 0;
	volatile uint64_t t4 = 5893LLU;

	t4 = ((x165-(x166&x167))<<x168);

	if (t4 != 63800LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x185 = 1U;
	static int8_t x186 = -1;
	int16_t x187 = -1;
	volatile uint8_t x188 = 1U;
	volatile int32_t t5 = 7027;

	t5 = ((x185-(x186&x187))<<x188);

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x397 = 5526115LL;
	static uint16_t x398 = 1U;
	static int16_t x399 = -1;
	uint16_t x400 = 1U;
	static volatile int64_t t6 = 10999LL;

	t6 = ((x397-(x398&x399))<<x400);

	if (t6 != 11052228LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x437 = 1159U;
	uint32_t x438 = UINT32_MAX;
	uint8_t x440 = 2U;
	static volatile uint32_t t7 = 646667U;

	t7 = ((x437-(x438&x439))<<x440);

	if (t7 != 4636U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x553 = 4645LLU;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = INT16_MAX;
	int8_t x556 = 1;

	t8 = ((x553-(x554&x555))<<x556);

	if (t8 != 18446744073709495372LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x617 = -3;
	volatile uint32_t x620 = 7U;
	uint64_t t9 = 1LLU;

	t9 = ((x617-(x618&x619))<<x620);

	if (t9 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x630 = INT16_MAX;
	uint16_t x631 = 8U;
	int64_t t10 = 225355185924133772LL;

	t10 = ((x629-(x630&x631))<<x632);

	if (t10 != 47632861201463296LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x638 = -1;
	int16_t x639 = 0;
	static volatile int16_t x640 = 14;
	static volatile int32_t t11 = 857272956;

	t11 = ((x637-(x638&x639))<<x640);

	if (t11 != 409600) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x677 = INT8_MIN;
	uint64_t x678 = UINT64_MAX;
	uint32_t x679 = UINT32_MAX;
	volatile int8_t x680 = 55;
	uint64_t t12 = 0LLU;

	t12 = ((x677-(x678&x679))<<x680);

	if (t12 != 13871086852301127680LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x805 = 10LLU;
	volatile uint64_t t13 = 58874339LLU;

	t13 = ((x805-(x806&x807))<<x808);

	if (t13 != 18442240508452405248LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x866 = 12802423U;
	uint64_t x867 = UINT64_MAX;
	int8_t x868 = 3;
	uint64_t t14 = 1011037162522232852LLU;

	t14 = ((x865-(x866&x867))<<x868);

	if (t14 != 18446744056427263048LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x969 = 115631943LLU;
	int64_t x970 = 276041379491365764LL;
	volatile int16_t x971 = -1;

	t15 = ((x969-(x970&x971))<<x972);

	if (t15 != 17894661314958083974LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x993 = UINT16_MAX;
	volatile uint8_t x994 = 0U;
	static volatile int64_t x995 = 8805LL;
	int64_t x996 = 3LL;

	t16 = ((x993-(x994&x995))<<x996);

	if (t16 != 524280LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1049 = INT8_MAX;
	int32_t x1050 = -369959924;
	uint16_t x1051 = 0U;
	volatile uint16_t x1052 = 0U;
	volatile int32_t t17 = -5;

	t17 = ((x1049-(x1050&x1051))<<x1052);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1114 = UINT32_MAX;
	volatile uint64_t x1115 = UINT64_MAX;
	volatile uint64_t t18 = 14LLU;

	t18 = ((x1113-(x1114&x1115))<<x1116);

	if (t18 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1165 = 994666LLU;
	static int32_t x1166 = INT32_MIN;
	uint16_t x1168 = 48U;

	t19 = ((x1165-(x1166&x1167))<<x1168);

	if (t19 != 3272428079238086656LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1205 = UINT16_MAX;
	volatile uint16_t x1206 = 13052U;
	uint16_t x1207 = 6394U;
	uint8_t x1208 = 10U;

	t20 = ((x1205-(x1206&x1207))<<x1208);

	if (t20 != 62659584) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1321 = 3LLU;
	uint64_t x1322 = 34713133639LLU;
	volatile uint64_t t21 = 9538145LLU;

	t21 = ((x1321-(x1322&x1323))<<x1324);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1406 = 2133341;
	static volatile int16_t x1408 = 0;

	t22 = ((x1405-(x1406&x1407))<<x1408);

	if (t22 != 35462LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1437 = 15U;
	static uint32_t x1438 = 163826682U;
	int16_t x1439 = 17;
	int8_t x1440 = 3;
	volatile uint32_t t23 = 463U;

	t23 = ((x1437-(x1438&x1439))<<x1440);

	if (t23 != 4294967288U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1538 = 1;
	int64_t x1539 = -86889475LL;
	uint16_t x1540 = 11U;
	static volatile int64_t t24 = 641LL;

	t24 = ((x1537-(x1538&x1539))<<x1540);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1565 = -1;
	int8_t x1566 = INT8_MIN;
	int32_t x1567 = -1;
	uint8_t x1568 = 3U;
	volatile int32_t t25 = -264085953;

	t25 = ((x1565-(x1566&x1567))<<x1568);

	if (t25 != 1016) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1594 = INT16_MIN;
	static uint32_t x1596 = 6U;

	t26 = ((x1593-(x1594&x1595))<<x1596);

	if (t26 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1633 = 68394227LLU;
	int64_t x1634 = -1LL;
	int8_t x1635 = -4;
	int8_t x1636 = 1;
	static volatile uint64_t t27 = 4100114LLU;

	t27 = ((x1633-(x1634&x1635))<<x1636);

	if (t27 != 136788462LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1729 = 7U;
	volatile int8_t x1730 = 12;
	volatile uint64_t t28 = 9125646435612559878LLU;

	t28 = ((x1729-(x1730&x1731))<<x1732);

	if (t28 != 196608LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1781 = UINT32_MAX;
	volatile uint32_t x1782 = UINT32_MAX;
	static uint32_t x1783 = UINT32_MAX;
	uint32_t t29 = 1U;

	t29 = ((x1781-(x1782&x1783))<<x1784);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1864 = 1U;
	int64_t t30 = 29670LL;

	t30 = ((x1861-(x1862&x1863))<<x1864);

	if (t30 != 15366LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1877 = UINT8_MAX;
	static int64_t x1878 = INT64_MIN;
	static volatile uint8_t x1879 = 119U;
	static volatile uint8_t x1880 = 27U;
	int64_t t31 = 70864032LL;

	t31 = ((x1877-(x1878&x1879))<<x1880);

	if (t31 != 34225520640LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1921 = -1;
	int8_t x1922 = -9;
	int8_t x1923 = -1;
	volatile uint8_t x1924 = 0U;
	int32_t t32 = 538;

	t32 = ((x1921-(x1922&x1923))<<x1924);

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x1929 = 837U;
	int8_t x1930 = INT8_MIN;
	volatile uint32_t x1931 = 152831295U;
	uint8_t x1932 = 1U;
	volatile uint32_t t33 = 474U;

	t33 = ((x1929-(x1930&x1931))<<x1932);

	if (t33 != 3989306506U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x1978 = 92639U;
	int16_t x1979 = INT16_MIN;
	volatile int8_t x1980 = 28;
	uint32_t t34 = 99774147U;

	t34 = ((x1977-(x1978&x1979))<<x1980);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2057 = 3483978678238LLU;
	volatile uint64_t x2058 = 64742LLU;
	uint64_t t35 = 79LLU;

	t35 = ((x2057-(x2058&x2059))<<x2060);

	if (t35 != 6967957356476LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2089 = 1U;
	volatile int8_t x2090 = INT8_MIN;
	int32_t x2091 = -29;
	uint16_t x2092 = 1U;
	uint32_t t36 = 5882U;

	t36 = ((x2089-(x2090&x2091))<<x2092);

	if (t36 != 258U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2101 = INT32_MAX;
	int8_t x2103 = INT8_MAX;
	int8_t x2104 = 1;

	t37 = ((x2101-(x2102&x2103))<<x2104);

	if (t37 != 4294967040LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2112 = 8U;
	volatile uint32_t t38 = 248742U;

	t38 = ((x2109-(x2110&x2111))<<x2112);

	if (t38 != 4294967040U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2249 = 524U;
	static volatile int32_t x2251 = INT32_MIN;
	uint32_t x2252 = 10U;
	uint32_t t39 = 202U;

	t39 = ((x2249-(x2250&x2251))<<x2252);

	if (t39 != 536576U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2269 = -63;
	int64_t x2270 = -1LL;
	int32_t x2271 = INT32_MIN;
	int8_t x2272 = 1;
	int64_t t40 = 32614081704LL;

	t40 = ((x2269-(x2270&x2271))<<x2272);

	if (t40 != 4294967170LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2305 = 0;
	static int8_t x2307 = -1;
	volatile int32_t t41 = 3932;

	t41 = ((x2305-(x2306&x2307))<<x2308);

	if (t41 != 32) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2321 = 127892371072088LLU;
	volatile int16_t x2322 = -1;
	volatile int8_t x2323 = -1;
	static uint8_t x2324 = 0U;

	t42 = ((x2321-(x2322&x2323))<<x2324);

	if (t42 != 127892371072089LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2329 = INT32_MAX;
	uint64_t x2331 = 127LLU;
	static int16_t x2332 = 19;
	static volatile uint64_t t43 = 6623624386117563229LLU;

	t43 = ((x2329-(x2330&x2331))<<x2332);

	if (t43 != 1125899906318336LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2417 = 381702765U;
	int64_t x2418 = -5LL;
	int32_t x2419 = -716345441;
	int8_t x2420 = 5;
	int64_t t44 = 679663008278425LL;

	t44 = ((x2417-(x2418&x2419))<<x2420);

	if (t44 != 35137542720LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2457 = 7547960723551LL;

	t45 = ((x2457-(x2458&x2459))<<x2460);

	if (t45 != 483068727208576LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2518 = 0U;
	int32_t x2519 = INT32_MAX;
	uint8_t x2520 = 0U;
	volatile int32_t t46 = INT32_MAX;

	t46 = ((x2517-(x2518&x2519))<<x2520);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2545 = INT32_MIN;
	int8_t x2546 = -44;
	static uint32_t x2547 = 990U;
	uint32_t t47 = 301U;

	t47 = ((x2545-(x2546&x2547))<<x2548);

	if (t47 != 4294959456U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2645 = 792;
	uint8_t x2647 = 8U;
	int8_t x2648 = 16;
	static int32_t t48 = -10183;

	t48 = ((x2645-(x2646&x2647))<<x2648);

	if (t48 != 51380224) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2817 = 130786185LLU;
	int8_t x2818 = INT8_MIN;
	static int16_t x2819 = -1914;
	volatile int32_t x2820 = 0;
	static uint64_t t49 = 257031727086186LLU;

	t49 = ((x2817-(x2818&x2819))<<x2820);

	if (t49 != 130788105LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2909 = INT64_MIN;
	uint32_t x2910 = 11990336U;
	uint64_t x2911 = 876458937LLU;
	uint64_t t50 = 1350836239272847LLU;

	t50 = ((x2909-(x2910&x2911))<<x2912);

	if (t50 != 18387418824321269760LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2981 = 228;
	uint64_t x2982 = 7897542LLU;
	int64_t x2983 = -44LL;
	int8_t x2984 = 5;
	uint64_t t51 = 15257LLU;

	t51 = ((x2981-(x2982&x2983))<<x2984);

	if (t51 != 18446744073456837632LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3001 = UINT32_MAX;
	int8_t x3003 = INT8_MIN;
	static uint64_t x3004 = 29LLU;
	volatile uint64_t t52 = 16850960801090619LLU;

	t52 = ((x3001-(x3002&x3003))<<x3004);

	if (t52 != 2305843077396299776LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3106 = INT16_MAX;
	int32_t x3107 = INT32_MIN;
	uint8_t x3108 = 6U;
	static int32_t t53 = 15217;

	t53 = ((x3105-(x3106&x3107))<<x3108);

	if (t53 != 1190720) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3109 = INT8_MIN;
	uint64_t x3110 = 117LLU;
	int32_t x3111 = 54390993;
	int16_t x3112 = 3;
	uint64_t t54 = 1186370907918LLU;

	t54 = ((x3109-(x3110&x3111))<<x3112);

	if (t54 != 18446744073709549944LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3137 = -13;
	uint64_t x3139 = 2768818LLU;
	static int32_t x3140 = 43;
	uint64_t t55 = 5645963LLU;

	t55 = ((x3137-(x3138&x3139))<<x3140);

	if (t55 != 13803277771192926208LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3141 = 1208913980U;
	uint32_t x3143 = 17U;
	uint8_t x3144 = 7U;
	uint32_t t56 = 167U;

	t56 = ((x3141-(x3142&x3143))<<x3144);

	if (t56 != 122166784U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3145 = UINT16_MAX;
	volatile int8_t x3146 = 0;
	uint8_t x3148 = 12U;
	volatile int64_t t57 = 865919990907582978LL;

	t57 = ((x3145-(x3146&x3147))<<x3148);

	if (t57 != 268431360LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3229 = UINT64_MAX;
	int8_t x3230 = 0;
	int8_t x3231 = INT8_MAX;
	static int8_t x3232 = 1;
	uint64_t t58 = 265837921288484LLU;

	t58 = ((x3229-(x3230&x3231))<<x3232);

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3301 = 1;
	uint32_t x3302 = 7U;
	int16_t x3303 = INT16_MAX;
	uint16_t x3304 = 3U;

	t59 = ((x3301-(x3302&x3303))<<x3304);

	if (t59 != 4294967248U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3421 = UINT64_MAX;
	volatile uint16_t x3422 = UINT16_MAX;
	uint16_t x3423 = 2925U;
	volatile uint16_t x3424 = 39U;
	uint64_t t60 = 102102515LLU;

	t60 = ((x3421-(x3422&x3423))<<x3424);

	if (t60 != 18445135488198115328LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3517 = INT16_MAX;
	int32_t x3518 = -7953043;
	int32_t x3519 = -243;
	static volatile uint8_t x3520 = 2U;

	t61 = ((x3517-(x3518&x3519))<<x3520);

	if (t61 != 31943624) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3529 = 109U;
	static int8_t x3530 = 62;
	uint16_t x3531 = 138U;
	static int32_t t62 = -179620028;

	t62 = ((x3529-(x3530&x3531))<<x3532);

	if (t62 != 1584) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3921 = INT64_MIN;
	uint64_t x3923 = UINT64_MAX;
	int8_t x3924 = 0;
	uint64_t t63 = 518282789LLU;

	t63 = ((x3921-(x3922&x3923))<<x3924);

	if (t63 != 9223372036851134831LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3925 = -1;
	uint64_t x3927 = UINT64_MAX;
	int8_t x3928 = 1;
	volatile uint64_t t64 = 14381965110486LLU;

	t64 = ((x3925-(x3926&x3927))<<x3928);

	if (t64 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3957 = -1;
	uint16_t x3958 = 3U;
	volatile uint32_t x3959 = 2411U;
	volatile uint8_t x3960 = 0U;
	volatile uint32_t t65 = 7776520U;

	t65 = ((x3957-(x3958&x3959))<<x3960);

	if (t65 != 4294967292U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x3973 = INT16_MAX;
	int16_t x3974 = INT16_MIN;
	volatile uint32_t t66 = 8U;

	t66 = ((x3973-(x3974&x3975))<<x3976);

	if (t66 != 131068U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4073 = 165436875068800LL;
	static volatile int16_t x4074 = -1;
	uint64_t x4075 = UINT64_MAX;
	static int8_t x4076 = 24;

	t67 = ((x4073-(x4074&x4075))<<x4076);

	if (t67 != 8558576337856495616LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4170 = UINT64_MAX;
	static uint8_t x4172 = 54U;
	uint64_t t68 = 2618117408186926388LLU;

	t68 = ((x4169-(x4170&x4171))<<x4172);

	if (t68 != 4323455642275676160LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x4253 = 77U;
	volatile uint16_t x4254 = 65U;
	uint8_t x4255 = 21U;
	int8_t x4256 = 1;
	int32_t t69 = -3235;

	t69 = ((x4253-(x4254&x4255))<<x4256);

	if (t69 != 152) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4281 = INT16_MAX;
	uint32_t x4283 = UINT32_MAX;
	int8_t x4284 = 6;
	uint32_t t70 = 70893U;

	t70 = ((x4281-(x4282&x4283))<<x4284);

	if (t70 != 2096832U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4306 = 1806978240LLU;
	int8_t x4308 = 1;
	uint64_t t71 = 532LLU;

	t71 = ((x4305-(x4306&x4307))<<x4308);

	if (t71 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4365 = 12347119003405161LLU;
	int64_t x4366 = -5379LL;
	int64_t x4367 = -1LL;
	int16_t x4368 = 2;

	t72 = ((x4365-(x4366&x4367))<<x4368);

	if (t72 != 49388476013642160LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4373 = INT8_MIN;
	volatile int16_t x4374 = 12514;
	uint64_t x4375 = 92LLU;
	int8_t x4376 = 29;
	uint64_t t73 = 22525LLU;

	t73 = ((x4373-(x4374&x4375))<<x4376);

	if (t73 != 18446743970630336512LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4421 = -1LL;
	int8_t x4422 = INT8_MIN;
	uint64_t x4423 = 3966LLU;
	uint16_t x4424 = 5U;
	static volatile uint64_t t74 = 153394LLU;

	t74 = ((x4421-(x4422&x4423))<<x4424);

	if (t74 != 18446744073709428704LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4466 = 30;
	int64_t x4467 = INT64_MIN;
	uint8_t x4468 = 7U;

	t75 = ((x4465-(x4466&x4467))<<x4468);

	if (t75 != 384LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4505 = INT16_MAX;
	static int8_t x4506 = INT8_MAX;
	int64_t x4507 = INT64_MIN;
	int8_t x4508 = 0;
	volatile int64_t t76 = -882272265190005LL;

	t76 = ((x4505-(x4506&x4507))<<x4508);

	if (t76 != 32767LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4557 = 1U;
	volatile int32_t x4558 = INT32_MAX;
	volatile uint16_t x4560 = 4U;
	volatile int64_t t77 = 2901875LL;

	t77 = ((x4557-(x4558&x4559))<<x4560);

	if (t77 != 16LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4593 = UINT32_MAX;
	uint32_t x4594 = UINT32_MAX;
	static volatile uint8_t x4595 = 0U;

	t78 = ((x4593-(x4594&x4595))<<x4596);

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x4605 = 12154854LLU;
	int32_t x4606 = INT32_MIN;
	uint16_t x4607 = 389U;
	uint16_t x4608 = 10U;

	t79 = ((x4605-(x4606&x4607))<<x4608);

	if (t79 != 12446570496LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4645 = 10LLU;
	int8_t x4646 = INT8_MIN;
	uint32_t x4647 = 1623218611U;
	static uint8_t x4648 = 49U;
	volatile uint64_t t80 = 34085LLU;

	t80 = ((x4645-(x4646&x4647))<<x4648);

	if (t80 != 5554064240454664192LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x4682 = INT64_MIN;
	int16_t x4683 = INT16_MAX;
	volatile uint32_t x4684 = 30U;
	volatile int64_t t81 = -239379004220217LL;

	t81 = ((x4681-(x4682&x4683))<<x4684);

	if (t81 != 3221225472LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4685 = 127027608213017LLU;
	static uint8_t x4688 = 0U;
	static uint64_t t82 = 3217208478477847LLU;

	t82 = ((x4685-(x4686&x4687))<<x4688);

	if (t82 != 127027608213145LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x4813 = -1;
	uint64_t x4814 = UINT64_MAX;
	volatile uint8_t x4815 = 0U;
	static uint8_t x4816 = 0U;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = ((x4813-(x4814&x4815))<<x4816);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4881 = UINT64_MAX;
	int32_t x4882 = INT32_MAX;
	static int64_t x4883 = -497616LL;
	uint64_t t84 = 329825760508LLU;

	t84 = ((x4881-(x4882&x4883))<<x4884);

	if (t84 != 18446744071562565583LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x4917 = 52U;
	int8_t x4918 = -1;
	int8_t x4919 = -16;
	int32_t t85 = 57;

	t85 = ((x4917-(x4918&x4919))<<x4920);

	if (t85 != 136) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4929 = 4834513U;
	uint64_t x4931 = 2LLU;
	uint8_t x4932 = 4U;

	t86 = ((x4929-(x4930&x4931))<<x4932);

	if (t86 != 77352176LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5041 = 206U;
	int8_t x5042 = INT8_MAX;
	int16_t x5044 = 4;

	t87 = ((x5041-(x5042&x5043))<<x5044);

	if (t87 != 1264LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5082 = INT8_MIN;
	static int16_t x5083 = -12517;
	int32_t x5084 = 0;

	t88 = ((x5081-(x5082&x5083))<<x5084);

	if (t88 != 12541LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x5178 = 7966LLU;
	static int8_t x5180 = 0;
	volatile uint64_t t89 = 1186729608950LLU;

	t89 = ((x5177-(x5178&x5179))<<x5180);

	if (t89 != 18446744073709546009LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5185 = 366LL;
	int32_t x5186 = 4;
	int16_t x5188 = 5;
	int64_t t90 = 23692924LL;

	t90 = ((x5185-(x5186&x5187))<<x5188);

	if (t90 != 11584LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5281 = 0;
	static int16_t x5282 = -11;
	int16_t x5283 = -1;
	uint8_t x5284 = 15U;
	int32_t t91 = 18;

	t91 = ((x5281-(x5282&x5283))<<x5284);

	if (t91 != 360448) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5354 = 79909U;
	uint16_t x5356 = 1U;

	t92 = ((x5353-(x5354&x5355))<<x5356);

	if (t92 != 5390206U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5441 = UINT16_MAX;
	int32_t x5442 = -1;
	int64_t x5443 = -1LL;
	uint64_t x5444 = 7LLU;
	volatile int64_t t93 = -487014244LL;

	t93 = ((x5441-(x5442&x5443))<<x5444);

	if (t93 != 8388608LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5577 = 162052U;
	static int32_t x5578 = -4610;
	int32_t x5579 = 61069597;
	volatile int16_t x5580 = 9;
	volatile uint32_t t94 = 914905253U;

	t94 = ((x5577-(x5578&x5579))<<x5580);

	if (t94 != 3177172992U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5602 = -3884;
	int64_t x5603 = INT64_MIN;
	int16_t x5604 = 0;
	int64_t t95 = INT64_MAX;

	t95 = ((x5601-(x5602&x5603))<<x5604);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5645 = UINT8_MAX;
	static int16_t x5646 = -1;
	uint64_t x5647 = 60448837845560739LLU;

	t96 = ((x5645-(x5646&x5647))<<x5648);

	if (t96 != 11460841437305634816LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5655 = UINT64_MAX;
	uint8_t x5656 = 0U;
	static volatile uint64_t t97 = 2060695685026977499LLU;

	t97 = ((x5653-(x5654&x5655))<<x5656);

	if (t97 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5693 = 3981562966LLU;
	uint16_t x5694 = UINT16_MAX;
	int16_t x5696 = 50;

	t98 = ((x5693-(x5694&x5695))<<x5696);

	if (t98 != 12838636637726441472LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x5717 = UINT32_MAX;
	static volatile uint8_t x5718 = 71U;
	static volatile uint8_t x5720 = 2U;
	volatile uint32_t t99 = 13747697U;

	t99 = ((x5717-(x5718&x5719))<<x5720);

	if (t99 != 4294967008U) { NG(); } else { ; }
	
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

