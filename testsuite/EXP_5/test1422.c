#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = 5686;
static volatile int64_t x371 = 2046911LL;
uint32_t t4 = 2410U;
int32_t t5 = -376;
volatile int8_t x586 = INT8_MIN;
int64_t x602 = -378LL;
int64_t x641 = -1LL;
static volatile int64_t t8 = 430497259051LL;
uint32_t x694 = 6U;
uint32_t x695 = UINT32_MAX;
volatile uint8_t x696 = 27U;
uint8_t x760 = 0U;
static uint8_t x778 = 6U;
int32_t t11 = 416;
int8_t x799 = INT8_MIN;
volatile uint8_t x800 = 7U;
volatile int64_t t13 = 3908882LL;
int64_t x955 = INT64_MAX;
static volatile int16_t x989 = INT16_MIN;
int16_t x1083 = -1;
int8_t x1258 = INT8_MIN;
static volatile int32_t t18 = 31628;
static volatile int32_t t20 = -1452;
uint8_t x1319 = 52U;
int64_t x1565 = -1LL;
volatile uint32_t x1566 = 98U;
volatile int8_t x1685 = INT8_MIN;
volatile int16_t x1794 = INT16_MIN;
uint8_t x1796 = 1U;
volatile int32_t t28 = 32458323;
static int8_t x1837 = INT8_MIN;
int32_t x1838 = INT32_MIN;
static int16_t x1850 = INT16_MIN;
static uint64_t x1852 = 0LLU;
int16_t x1926 = INT16_MIN;
static int32_t x1928 = 0;
int32_t x2118 = -37600;
static int8_t x2140 = 15;
int16_t x2169 = -2;
uint8_t x2200 = 6U;
int64_t t37 = 423772361LL;
uint64_t t39 = 519968954612LLU;
volatile int32_t t42 = -6;
static int8_t x2490 = INT8_MAX;
int32_t x2664 = 0;
static uint8_t x2764 = 7U;
int16_t x2866 = INT16_MIN;
int8_t x2867 = INT8_MAX;
uint8_t x2868 = 29U;
volatile int32_t t49 = -6595;
int64_t x2980 = 0LL;
int8_t x3014 = INT8_MIN;
uint32_t x3081 = 889312U;
int16_t x3082 = INT16_MIN;
static uint32_t x3589 = 1375U;
uint16_t x3602 = 17U;
uint64_t x3603 = 4108056601LLU;
int32_t t60 = 2;
int32_t t61 = 58223409;
uint32_t x4002 = 124890U;
uint32_t t62 = 273723437U;
int16_t x4267 = INT16_MIN;
uint8_t x4307 = 9U;
uint32_t x4356 = 0U;
int8_t x4494 = INT8_MIN;
static int32_t x4521 = INT32_MIN;
int8_t x4522 = INT8_MIN;
volatile uint8_t x4688 = 4U;
int32_t x4689 = 20;
volatile int8_t x4745 = INT8_MIN;
static int8_t x4815 = -1;
volatile int32_t t73 = -17901080;
int64_t t74 = -25188131180409LL;
int64_t x4870 = INT64_MIN;
int32_t x4874 = INT32_MIN;
volatile uint16_t x4887 = UINT16_MAX;
static int32_t t78 = -131;
volatile int32_t x4926 = INT32_MIN;
static int32_t x4928 = 3;
int64_t x4974 = INT64_MIN;
static volatile int16_t x4976 = 29;
volatile int64_t x5075 = INT64_MAX;
uint8_t x5076 = 0U;
int16_t x5145 = INT16_MIN;
int32_t x5146 = INT32_MIN;
uint64_t x5147 = UINT64_MAX;
uint8_t x5220 = 0U;
static volatile int32_t t84 = 6073;
int32_t x5565 = INT32_MIN;
static volatile uint16_t x5567 = 37U;
int8_t x5680 = 0;
volatile int64_t t88 = 3021877838733LL;
int16_t x5813 = -1;
volatile int8_t x5930 = -1;
volatile uint16_t x5943 = 3U;
int16_t x6073 = INT16_MAX;
int32_t t94 = -18031;
int64_t x6527 = 22LL;
uint8_t x6528 = 3U;


void f0(void) {
	volatile uint16_t x69 = 4691U;
	static volatile int32_t x70 = INT32_MIN;
	volatile int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = 12U;
	static volatile int32_t t0 = -48701;

	t0 = (x69%((x70<x71)<<x72));

	if (t0 != 595) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x173 = INT16_MAX;
	volatile int8_t x174 = INT8_MIN;
	int16_t x175 = 6351;
	int16_t x176 = 6;

	t1 = (x173%((x174<x175)<<x176));

	if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = -135500193177766LL;
	volatile int8_t x283 = 31;
	int8_t x284 = 0;
	int32_t t2 = 512881376;

	t2 = (x281%((x282<x283)<<x284));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x369 = -1;
	static int16_t x370 = INT16_MAX;
	int8_t x372 = 12;
	static volatile int32_t t3 = -32;

	t3 = (x369%((x370<x371)<<x372));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x377 = UINT32_MAX;
	int32_t x378 = -193;
	volatile int8_t x379 = INT8_MAX;
	int16_t x380 = 5;

	t4 = (x377%((x378<x379)<<x380));

	if (t4 != 31U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x517 = 233;
	volatile int64_t x518 = INT64_MIN;
	static uint64_t x519 = UINT64_MAX;
	int8_t x520 = 1;

	t5 = (x517%((x518<x519)<<x520));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x585 = 1041167164U;
	uint32_t x587 = UINT32_MAX;
	int64_t x588 = 1LL;
	volatile uint32_t t6 = 52064U;

	t6 = (x585%((x586<x587)<<x588));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x601 = 4U;
	volatile int32_t x603 = INT32_MAX;
	uint8_t x604 = 6U;
	int32_t t7 = -1204;

	t7 = (x601%((x602<x603)<<x604));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x642 = 2120410476899893LLU;
	volatile int8_t x643 = -1;
	static volatile uint16_t x644 = 0U;

	t8 = (x641%((x642<x643)<<x644));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x693 = 4U;
	static volatile int32_t t9 = 56611;

	t9 = (x693%((x694<x695)<<x696));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x757 = 13U;
	uint64_t x758 = 5043551380859742LLU;
	volatile int32_t x759 = INT32_MIN;
	int32_t t10 = -63;

	t10 = (x757%((x758<x759)<<x760));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x777 = INT16_MAX;
	uint16_t x779 = 13U;
	uint8_t x780 = 4U;

	t11 = (x777%((x778<x779)<<x780));

	if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x793 = 91609078U;
	int16_t x794 = -1;
	int16_t x795 = INT16_MAX;
	static int8_t x796 = 1;
	uint32_t t12 = 10714891U;

	t12 = (x793%((x794<x795)<<x796));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x797 = INT64_MAX;
	static int32_t x798 = INT32_MIN;

	t13 = (x797%((x798<x799)<<x800));

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x953 = -6;
	int8_t x954 = 29;
	int8_t x956 = 0;
	static int32_t t14 = -1;

	t14 = (x953%((x954<x955)<<x956));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x990 = INT32_MIN;
	int16_t x991 = INT16_MIN;
	uint8_t x992 = 5U;
	volatile int32_t t15 = 32906278;

	t15 = (x989%((x990<x991)<<x992));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x1081 = 8;
	uint64_t x1082 = 747038805LLU;
	uint16_t x1084 = 1U;
	int32_t t16 = 9;

	t16 = (x1081%((x1082<x1083)<<x1084));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1161 = -2;
	volatile uint32_t x1162 = 22209393U;
	int32_t x1163 = INT32_MAX;
	static int8_t x1164 = 1;
	volatile int32_t t17 = -845117;

	t17 = (x1161%((x1162<x1163)<<x1164));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1257 = INT8_MAX;
	int8_t x1259 = -1;
	uint8_t x1260 = 6U;

	t18 = (x1257%((x1258<x1259)<<x1260));

	if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1261 = INT8_MAX;
	volatile uint8_t x1262 = 3U;
	uint32_t x1263 = 49U;
	static uint8_t x1264 = 0U;
	static volatile int32_t t19 = -729;

	t19 = (x1261%((x1262<x1263)<<x1264));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1309 = -1;
	volatile int64_t x1310 = -2322519235297390414LL;
	static int8_t x1311 = 0;
	uint64_t x1312 = 2LLU;

	t20 = (x1309%((x1310<x1311)<<x1312));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1317 = INT64_MIN;
	int16_t x1318 = -1;
	volatile int32_t x1320 = 26;
	int64_t t21 = 7396130LL;

	t21 = (x1317%((x1318<x1319)<<x1320));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1397 = -1;
	static uint8_t x1398 = 25U;
	uint64_t x1399 = 94326306LLU;
	int16_t x1400 = 1;
	int32_t t22 = 13076;

	t22 = (x1397%((x1398<x1399)<<x1400));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1513 = INT8_MAX;
	static int8_t x1514 = -1;
	int64_t x1515 = 748839400912621LL;
	volatile int8_t x1516 = 0;
	volatile int32_t t23 = 32025;

	t23 = (x1513%((x1514<x1515)<<x1516));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1525 = 456289094149LLU;
	int8_t x1526 = INT8_MIN;
	static int16_t x1527 = 56;
	uint64_t x1528 = 25LLU;
	volatile uint64_t t24 = 53167LLU;

	t24 = (x1525%((x1526<x1527)<<x1528));

	if (t24 != 15927813LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1567 = 73130;
	uint8_t x1568 = 1U;
	static int64_t t25 = 2603343030LL;

	t25 = (x1565%((x1566<x1567)<<x1568));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1686 = -3157990LL;
	uint32_t x1687 = 20979U;
	int8_t x1688 = 10;
	static int32_t t26 = -8089;

	t26 = (x1685%((x1686<x1687)<<x1688));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1793 = 518LLU;
	int8_t x1795 = INT8_MIN;
	uint64_t t27 = 5876364395057374LLU;

	t27 = (x1793%((x1794<x1795)<<x1796));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1813 = 13885U;
	uint32_t x1814 = 829U;
	int32_t x1815 = -12;
	int8_t x1816 = 18;

	t28 = (x1813%((x1814<x1815)<<x1816));

	if (t28 != 13885) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1839 = UINT32_MAX;
	uint8_t x1840 = 4U;
	static int32_t t29 = 382267;

	t29 = (x1837%((x1838<x1839)<<x1840));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1849 = 20;
	uint32_t x1851 = UINT32_MAX;
	static volatile int32_t t30 = 3;

	t30 = (x1849%((x1850<x1851)<<x1852));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1921 = INT8_MIN;
	int16_t x1922 = INT16_MIN;
	volatile int8_t x1923 = 29;
	volatile uint8_t x1924 = 0U;
	int32_t t31 = 104774015;

	t31 = (x1921%((x1922<x1923)<<x1924));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1925 = -7;
	int32_t x1927 = -1;
	int32_t t32 = -117892;

	t32 = (x1925%((x1926<x1927)<<x1928));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1961 = INT16_MIN;
	uint64_t x1962 = 187972470LLU;
	uint32_t x1963 = UINT32_MAX;
	uint16_t x1964 = 2U;
	volatile int32_t t33 = -1317608;

	t33 = (x1961%((x1962<x1963)<<x1964));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2117 = -1;
	int32_t x2119 = -1;
	static int8_t x2120 = 3;
	static int32_t t34 = -17693377;

	t34 = (x2117%((x2118<x2119)<<x2120));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2137 = INT32_MIN;
	volatile int16_t x2138 = 0;
	volatile int8_t x2139 = INT8_MAX;
	int32_t t35 = -3644337;

	t35 = (x2137%((x2138<x2139)<<x2140));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x2170 = -1;
	uint16_t x2171 = 2657U;
	uint8_t x2172 = 5U;
	int32_t t36 = 146;

	t36 = (x2169%((x2170<x2171)<<x2172));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2197 = INT64_MIN;
	volatile uint32_t x2198 = UINT32_MAX;
	uint64_t x2199 = 5638463630LLU;

	t37 = (x2197%((x2198<x2199)<<x2200));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2205 = -1;
	uint32_t x2206 = 66019U;
	volatile int16_t x2207 = -73;
	int8_t x2208 = 1;
	int32_t t38 = -9;

	t38 = (x2205%((x2206<x2207)<<x2208));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2317 = 382352506083268LLU;
	volatile int32_t x2318 = INT32_MIN;
	int8_t x2319 = -1;
	static int16_t x2320 = 9;

	t39 = (x2317%((x2318<x2319)<<x2320));

	if (t39 != 452LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2393 = 19U;
	uint8_t x2394 = 3U;
	uint64_t x2395 = 3592780627161LLU;
	static volatile int16_t x2396 = 30;
	volatile int32_t t40 = 736;

	t40 = (x2393%((x2394<x2395)<<x2396));

	if (t40 != 19) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2401 = -293;
	int32_t x2402 = INT32_MIN;
	int32_t x2403 = -1;
	uint8_t x2404 = 2U;
	volatile int32_t t41 = 8182341;

	t41 = (x2401%((x2402<x2403)<<x2404));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2421 = INT8_MIN;
	uint64_t x2422 = 1118360668755125LLU;
	int64_t x2423 = INT64_MAX;
	int64_t x2424 = 1LL;

	t42 = (x2421%((x2422<x2423)<<x2424));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2489 = INT64_MIN;
	uint64_t x2491 = UINT64_MAX;
	volatile uint16_t x2492 = 30U;
	static volatile int64_t t43 = -1352011331LL;

	t43 = (x2489%((x2490<x2491)<<x2492));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2529 = 3179U;
	volatile int64_t x2530 = -1LL;
	volatile uint8_t x2531 = 109U;
	uint32_t x2532 = 24U;
	int32_t t44 = -816336;

	t44 = (x2529%((x2530<x2531)<<x2532));

	if (t44 != 3179) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2661 = INT32_MIN;
	uint8_t x2662 = UINT8_MAX;
	static uint32_t x2663 = 65565088U;
	volatile int32_t t45 = 1639380;

	t45 = (x2661%((x2662<x2663)<<x2664));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2761 = INT64_MAX;
	static int16_t x2762 = INT16_MAX;
	uint64_t x2763 = 92840345182LLU;
	int64_t t46 = 2304295791754406LL;

	t46 = (x2761%((x2762<x2763)<<x2764));

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2865 = 12U;
	static int32_t t47 = -6;

	t47 = (x2865%((x2866<x2867)<<x2868));

	if (t47 != 12) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2873 = INT16_MIN;
	uint32_t x2874 = 1007133U;
	static uint64_t x2875 = UINT64_MAX;
	uint32_t x2876 = 1U;
	int32_t t48 = -1;

	t48 = (x2873%((x2874<x2875)<<x2876));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2965 = INT32_MIN;
	int32_t x2966 = 54;
	uint8_t x2967 = UINT8_MAX;
	int32_t x2968 = 1;

	t49 = (x2965%((x2966<x2967)<<x2968));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2977 = -31;
	static int64_t x2978 = INT64_MIN;
	volatile int32_t x2979 = INT32_MIN;
	int32_t t50 = 28699938;

	t50 = (x2977%((x2978<x2979)<<x2980));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3013 = 4136LLU;
	int16_t x3015 = -1;
	static volatile int8_t x3016 = 20;
	uint64_t t51 = 4176960267LLU;

	t51 = (x3013%((x3014<x3015)<<x3016));

	if (t51 != 4136LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3083 = 28U;
	volatile uint32_t x3084 = 1U;
	static volatile uint32_t t52 = 1757550U;

	t52 = (x3081%((x3082<x3083)<<x3084));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3269 = 237944879U;
	int64_t x3270 = INT64_MIN;
	uint64_t x3271 = UINT64_MAX;
	int32_t x3272 = 0;
	volatile uint32_t t53 = 3U;

	t53 = (x3269%((x3270<x3271)<<x3272));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x3297 = 164508670393621878LL;
	uint8_t x3298 = UINT8_MAX;
	static uint64_t x3299 = UINT64_MAX;
	volatile uint8_t x3300 = 3U;
	static int64_t t54 = -2402558619LL;

	t54 = (x3297%((x3298<x3299)<<x3300));

	if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3437 = -1;
	int32_t x3438 = -639;
	volatile uint8_t x3439 = UINT8_MAX;
	int8_t x3440 = 0;
	static int32_t t55 = -431;

	t55 = (x3437%((x3438<x3439)<<x3440));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3453 = -2065806226LL;
	uint32_t x3454 = 896717U;
	int16_t x3455 = INT16_MIN;
	volatile uint32_t x3456 = 6U;
	volatile int64_t t56 = 14662953237373LL;

	t56 = (x3453%((x3454<x3455)<<x3456));

	if (t56 != -18LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3590 = -38;
	int16_t x3591 = -1;
	int8_t x3592 = 1;
	static volatile uint32_t t57 = 840U;

	t57 = (x3589%((x3590<x3591)<<x3592));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3601 = 49;
	int16_t x3604 = 20;
	volatile int32_t t58 = 559;

	t58 = (x3601%((x3602<x3603)<<x3604));

	if (t58 != 49) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3605 = 2;
	static volatile uint64_t x3606 = 5417341LLU;
	int32_t x3607 = -3974611;
	static volatile int32_t x3608 = 2;
	volatile int32_t t59 = -13293;

	t59 = (x3605%((x3606<x3607)<<x3608));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3725 = -1;
	int64_t x3726 = INT64_MIN;
	volatile uint32_t x3727 = 10U;
	uint8_t x3728 = 0U;

	t60 = (x3725%((x3726<x3727)<<x3728));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3941 = 27402133;
	int16_t x3942 = INT16_MAX;
	int64_t x3943 = INT64_MAX;
	volatile int32_t x3944 = 0;

	t61 = (x3941%((x3942<x3943)<<x3944));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4001 = UINT32_MAX;
	volatile int8_t x4003 = -1;
	uint8_t x4004 = 5U;

	t62 = (x4001%((x4002<x4003)<<x4004));

	if (t62 != 31U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4265 = 1U;
	int64_t x4266 = INT64_MIN;
	static int8_t x4268 = 2;
	volatile int32_t t63 = -1;

	t63 = (x4265%((x4266<x4267)<<x4268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x4305 = 1052140288U;
	int64_t x4306 = INT64_MIN;
	int8_t x4308 = 6;
	uint32_t t64 = 1011137U;

	t64 = (x4305%((x4306<x4307)<<x4308));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x4353 = -1;
	int64_t x4354 = INT64_MIN;
	static uint8_t x4355 = UINT8_MAX;
	volatile int32_t t65 = 1;

	t65 = (x4353%((x4354<x4355)<<x4356));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4441 = 2004U;
	int8_t x4442 = 0;
	volatile int32_t x4443 = INT32_MAX;
	int8_t x4444 = 0;
	volatile uint32_t t66 = 6891U;

	t66 = (x4441%((x4442<x4443)<<x4444));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4493 = INT16_MIN;
	int8_t x4495 = -1;
	uint32_t x4496 = 8U;
	int32_t t67 = -2;

	t67 = (x4493%((x4494<x4495)<<x4496));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x4523 = INT16_MAX;
	uint16_t x4524 = 1U;
	int32_t t68 = -3787;

	t68 = (x4521%((x4522<x4523)<<x4524));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4589 = INT64_MIN;
	int32_t x4590 = 1;
	uint16_t x4591 = 646U;
	static uint8_t x4592 = 0U;
	volatile int64_t t69 = 200489449435363348LL;

	t69 = (x4589%((x4590<x4591)<<x4592));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4685 = 2497LLU;
	uint32_t x4686 = 7344096U;
	int64_t x4687 = 474393386LL;
	volatile uint64_t t70 = 946LLU;

	t70 = (x4685%((x4686<x4687)<<x4688));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4690 = INT64_MIN;
	int8_t x4691 = INT8_MIN;
	uint8_t x4692 = 6U;
	static int32_t t71 = -269733013;

	t71 = (x4689%((x4690<x4691)<<x4692));

	if (t71 != 20) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x4746 = INT32_MIN;
	static int64_t x4747 = -5LL;
	uint16_t x4748 = 8U;
	int32_t t72 = 34863;

	t72 = (x4745%((x4746<x4747)<<x4748));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4813 = INT8_MIN;
	uint32_t x4814 = 577148U;
	static uint64_t x4816 = 2LLU;

	t73 = (x4813%((x4814<x4815)<<x4816));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4841 = INT64_MIN;
	int32_t x4842 = INT32_MIN;
	int32_t x4843 = 33;
	volatile uint8_t x4844 = 4U;

	t74 = (x4841%((x4842<x4843)<<x4844));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4857 = UINT8_MAX;
	uint8_t x4858 = 28U;
	uint16_t x4859 = 1305U;
	int8_t x4860 = 14;
	int32_t t75 = 156;

	t75 = (x4857%((x4858<x4859)<<x4860));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4869 = 6;
	static int16_t x4871 = 3;
	uint8_t x4872 = 10U;
	static int32_t t76 = -17861;

	t76 = (x4869%((x4870<x4871)<<x4872));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4873 = -1;
	volatile int8_t x4875 = INT8_MAX;
	static uint32_t x4876 = 6U;
	static volatile int32_t t77 = -355209;

	t77 = (x4873%((x4874<x4875)<<x4876));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4885 = 25;
	static int32_t x4886 = -1;
	uint8_t x4888 = 0U;

	t78 = (x4885%((x4886<x4887)<<x4888));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4925 = UINT32_MAX;
	int64_t x4927 = 162562950150044LL;
	volatile uint32_t t79 = 755191U;

	t79 = (x4925%((x4926<x4927)<<x4928));

	if (t79 != 7U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4973 = 18;
	uint16_t x4975 = 10607U;
	volatile int32_t t80 = -26353;

	t80 = (x4973%((x4974<x4975)<<x4976));

	if (t80 != 18) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5073 = 49631;
	int32_t x5074 = -995;
	static volatile int32_t t81 = -47721578;

	t81 = (x5073%((x5074<x5075)<<x5076));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5148 = 15U;
	int32_t t82 = -834;

	t82 = (x5145%((x5146<x5147)<<x5148));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x5217 = INT64_MIN;
	int64_t x5218 = -877422794532161285LL;
	uint16_t x5219 = UINT16_MAX;
	static int64_t t83 = -77689647612325LL;

	t83 = (x5217%((x5218<x5219)<<x5220));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5233 = 6709;
	int64_t x5234 = -27561103233394LL;
	static int64_t x5235 = 7230LL;
	static volatile int8_t x5236 = 1;

	t84 = (x5233%((x5234<x5235)<<x5236));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5489 = 348U;
	volatile int32_t x5490 = INT32_MIN;
	int16_t x5491 = INT16_MIN;
	int32_t x5492 = 0;
	int32_t t85 = 14125693;

	t85 = (x5489%((x5490<x5491)<<x5492));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x5566 = -450LL;
	static uint8_t x5568 = 5U;
	static int32_t t86 = -747;

	t86 = (x5565%((x5566<x5567)<<x5568));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5613 = INT32_MAX;
	volatile uint64_t x5614 = 7LLU;
	volatile uint64_t x5615 = 2615626432215985LLU;
	uint16_t x5616 = 0U;
	int32_t t87 = 525250581;

	t87 = (x5613%((x5614<x5615)<<x5616));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5677 = INT64_MIN;
	int8_t x5678 = INT8_MIN;
	uint16_t x5679 = 13901U;

	t88 = (x5677%((x5678<x5679)<<x5680));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5785 = INT8_MAX;
	int32_t x5786 = 6;
	volatile uint8_t x5787 = 49U;
	uint8_t x5788 = 2U;
	int32_t t89 = 29555644;

	t89 = (x5785%((x5786<x5787)<<x5788));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5814 = INT16_MAX;
	int32_t x5815 = INT32_MAX;
	int16_t x5816 = 6;
	int32_t t90 = 0;

	t90 = (x5813%((x5814<x5815)<<x5816));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x5929 = UINT16_MAX;
	uint8_t x5931 = UINT8_MAX;
	uint8_t x5932 = 1U;
	int32_t t91 = 288906;

	t91 = (x5929%((x5930<x5931)<<x5932));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x5941 = 27595324540LLU;
	int64_t x5942 = -1LL;
	uint8_t x5944 = 4U;
	uint64_t t92 = 308973LLU;

	t92 = (x5941%((x5942<x5943)<<x5944));

	if (t92 != 12LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6074 = 114LLU;
	int16_t x6075 = INT16_MAX;
	static volatile uint8_t x6076 = 26U;
	volatile int32_t t93 = -1;

	t93 = (x6073%((x6074<x6075)<<x6076));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x6093 = INT32_MAX;
	int32_t x6094 = -8745;
	int8_t x6095 = -4;
	static uint8_t x6096 = 6U;

	t94 = (x6093%((x6094<x6095)<<x6096));

	if (t94 != 63) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6201 = INT32_MIN;
	int64_t x6202 = -106833873212LL;
	static volatile uint16_t x6203 = 1U;
	int16_t x6204 = 5;
	int32_t t95 = -108;

	t95 = (x6201%((x6202<x6203)<<x6204));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x6341 = 369591057;
	uint32_t x6342 = 146373U;
	volatile int32_t x6343 = INT32_MAX;
	uint8_t x6344 = 0U;
	int32_t t96 = -1721;

	t96 = (x6341%((x6342<x6343)<<x6344));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6385 = -1;
	static int64_t x6386 = INT64_MIN;
	uint8_t x6387 = UINT8_MAX;
	uint8_t x6388 = 0U;
	volatile int32_t t97 = 6052;

	t97 = (x6385%((x6386<x6387)<<x6388));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6513 = INT8_MIN;
	uint32_t x6514 = 103754U;
	int32_t x6515 = INT32_MIN;
	uint8_t x6516 = 21U;
	static volatile int32_t t98 = 3649740;

	t98 = (x6513%((x6514<x6515)<<x6516));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6525 = INT8_MAX;
	volatile int16_t x6526 = 1;
	volatile int32_t t99 = 53;

	t99 = (x6525%((x6526<x6527)<<x6528));

	if (t99 != 7) { NG(); } else { ; }
	
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

