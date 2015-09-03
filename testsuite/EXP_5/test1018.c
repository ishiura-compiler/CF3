#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x59 = 1;
volatile int32_t t0 = -1316865;
uint16_t x73 = 1636U;
volatile int16_t x76 = 1847;
static uint64_t t2 = 1421809761258262942LLU;
uint64_t t3 = 5523953185667035LLU;
volatile int64_t x195 = 8LL;
uint8_t x241 = 114U;
static int8_t x466 = 4;
int64_t x474 = INT64_MAX;
static uint8_t x578 = 0U;
int32_t x679 = 4;
volatile uint32_t x826 = 1777890U;
static volatile uint8_t x827 = 1U;
int16_t x1003 = 2;
uint64_t x1004 = UINT64_MAX;
uint32_t x1026 = 12467885U;
int64_t x1028 = 772LL;
volatile int8_t x1078 = 1;
volatile uint16_t x1079 = 1U;
uint8_t x1099 = 22U;
int32_t x1208 = INT32_MAX;
uint16_t x1254 = UINT16_MAX;
volatile int64_t t19 = 1LL;
int8_t x1519 = 1;
static uint16_t x1520 = UINT16_MAX;
static int16_t x1676 = -1;
uint32_t x1694 = UINT32_MAX;
volatile uint8_t x1695 = 30U;
uint64_t t26 = 10968LLU;
static volatile int32_t t28 = 82437;
int64_t x1725 = -1LL;
volatile uint32_t x1726 = UINT32_MAX;
int8_t x1757 = -28;
static int64_t x1760 = -1LL;
static uint8_t x1884 = 2U;
volatile int8_t x2036 = INT8_MAX;
static uint16_t x2105 = 2U;
int64_t t34 = -2063486LL;
int64_t x2126 = 2LL;
volatile int8_t x2175 = 1;
static volatile int64_t t39 = 186193LL;
int16_t x2184 = -3817;
static volatile uint32_t t40 = 127734135U;
int32_t x2273 = 18827;
uint16_t x2274 = 5U;
volatile int16_t x2275 = 1;
int32_t t41 = -3946100;
static uint32_t x2437 = 3U;
static volatile uint8_t x2439 = 30U;
volatile uint32_t t42 = 10831U;
int16_t x2531 = 0;
volatile uint32_t x2550 = UINT32_MAX;
volatile int64_t x2552 = INT64_MIN;
uint64_t t45 = 3260457496720320LLU;
volatile uint64_t x2562 = 5LLU;
uint32_t t47 = 13451470U;
static int16_t x2733 = -14433;
uint64_t x2734 = UINT64_MAX;
uint64_t x2750 = 1555082592288LLU;
uint64_t x2754 = UINT64_MAX;
uint16_t x2755 = 54U;
int8_t x2756 = INT8_MAX;
uint64_t t50 = 16468LLU;
int64_t x2909 = -15654573906LL;
uint8_t x2911 = 0U;
uint32_t x2935 = 4U;
int64_t x2936 = -556314LL;
int16_t x2943 = 0;
int16_t x2997 = -1;
uint16_t x2999 = 3U;
volatile int32_t t57 = 372866669;
uint64_t x3070 = UINT64_MAX;
uint64_t x3142 = 830644987LLU;
uint8_t x3143 = 2U;
int32_t x3144 = INT32_MIN;
volatile uint32_t t61 = 627530U;
int32_t x3194 = 12110;
int32_t x3238 = 798668;
uint32_t x3258 = 1329U;
int32_t x3260 = INT32_MAX;
uint16_t x3286 = 8U;
int8_t x3325 = 1;
int8_t x3327 = 1;
volatile int8_t x3360 = INT8_MIN;
uint32_t x3394 = 2641400U;
static uint32_t t69 = 985U;
volatile uint64_t t72 = 115224228636879LLU;
static volatile int64_t x3542 = 11079834831LL;
int8_t x3543 = 0;
int64_t x3578 = 469LL;
volatile uint32_t t75 = 234U;
static uint16_t x3748 = UINT16_MAX;
int8_t x3756 = -1;
static int64_t t77 = -782999LL;
static uint32_t x3760 = 29263U;
int16_t x3843 = 0;
int32_t x3857 = -13494;
static int64_t t83 = 1844LL;
int64_t x4197 = INT64_MIN;
int16_t x4352 = 8006;
uint16_t x4555 = 3U;
static uint8_t x4566 = UINT8_MAX;
uint64_t x4572 = UINT64_MAX;
uint64_t t91 = 1LLU;
volatile int16_t x4712 = INT16_MIN;
static volatile uint64_t t93 = 3831839498904LLU;
uint16_t x4730 = UINT16_MAX;
uint32_t x4732 = UINT32_MAX;
uint8_t x4775 = 30U;
volatile uint32_t x4914 = 40324202U;
int16_t x4925 = INT16_MIN;
static uint64_t x4926 = 15261811387824429LLU;
uint16_t x4927 = 0U;
int8_t x4928 = INT8_MIN;
int16_t x4989 = INT16_MIN;
volatile int64_t t98 = -28611797569340275LL;


void f0(void) {
	int8_t x57 = 0;
	volatile uint16_t x58 = 153U;
	int8_t x60 = INT8_MAX;

	t0 = (x57/((x58>>x59)+x60));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x74 = INT64_MAX;
	static uint32_t x75 = 1U;
	int64_t t1 = -49LL;

	t1 = (x73/((x74>>x75)+x76));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x77 = 24052326LLU;
	int32_t x78 = 45576982;
	uint8_t x79 = 10U;
	volatile uint32_t x80 = 260715989U;

	t2 = (x77/((x78>>x79)+x80));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 716706840214LLU;
	uint64_t x139 = 38LLU;
	int16_t x140 = INT16_MIN;

	t3 = (x137/((x138>>x139)+x140));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x193 = -1151620733787LL;
	int8_t x194 = INT8_MAX;
	int16_t x196 = INT16_MAX;
	volatile int64_t t4 = 431863LL;

	t4 = (x193/((x194>>x195)+x196));

	if (t4 != -35145748LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x242 = 5172659500LLU;
	int8_t x243 = 0;
	static int16_t x244 = INT16_MAX;
	uint64_t t5 = 893LLU;

	t5 = (x241/((x242>>x243)+x244));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x465 = -1;
	volatile uint16_t x467 = 17U;
	int32_t x468 = INT32_MIN;
	volatile int32_t t6 = -61930449;

	t6 = (x465/((x466>>x467)+x468));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x473 = 1156;
	uint8_t x475 = 5U;
	int8_t x476 = INT8_MAX;
	static volatile int64_t t7 = -753639LL;

	t7 = (x473/((x474>>x475)+x476));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x577 = INT32_MIN;
	uint16_t x579 = 3U;
	static int64_t x580 = 1934468LL;
	static int64_t t8 = 3146602039546950191LL;

	t8 = (x577/((x578>>x579)+x580));

	if (t8 != -1110LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x677 = INT32_MIN;
	int8_t x678 = 2;
	int8_t x680 = INT8_MAX;
	volatile int32_t t9 = 109696139;

	t9 = (x677/((x678>>x679)+x680));

	if (t9 != -16909320) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x825 = INT64_MAX;
	volatile int32_t x828 = -1;
	volatile int64_t t10 = -88326467LL;

	t10 = (x825/((x826>>x827)+x828));

	if (t10 != 10375650251146LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x865 = 52;
	uint32_t x866 = UINT32_MAX;
	int16_t x867 = 0;
	static uint32_t x868 = UINT32_MAX;
	uint32_t t11 = 662U;

	t11 = (x865/((x866>>x867)+x868));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x905 = 13U;
	uint64_t x906 = 4LLU;
	uint8_t x907 = 58U;
	int64_t x908 = -1LL;
	uint64_t t12 = 28LLU;

	t12 = (x905/((x906>>x907)+x908));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x1001 = INT8_MIN;
	int32_t x1002 = 44576;
	uint64_t t13 = 12273438839713LLU;

	t13 = (x1001/((x1002>>x1003)+x1004));

	if (t13 != 1655455808463569LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1025 = -1;
	int16_t x1027 = 0;
	static int64_t t14 = -62773LL;

	t14 = (x1025/((x1026>>x1027)+x1028));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x1077 = UINT16_MAX;
	int16_t x1080 = INT16_MIN;
	static volatile int32_t t15 = 181;

	t15 = (x1077/((x1078>>x1079)+x1080));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1097 = -1LL;
	uint8_t x1098 = 1U;
	static volatile uint8_t x1100 = 25U;
	volatile int64_t t16 = 3LL;

	t16 = (x1097/((x1098>>x1099)+x1100));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1153 = UINT64_MAX;
	int8_t x1154 = 17;
	uint8_t x1155 = 8U;
	static volatile uint32_t x1156 = 17252U;
	uint64_t t17 = 230674178LLU;

	t17 = (x1153/((x1154>>x1155)+x1156));

	if (t17 != 1069252496737163LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1205 = 633055355U;
	uint64_t x1206 = 22090LLU;
	static uint32_t x1207 = 5U;
	uint64_t t18 = 9971178672LLU;

	t18 = (x1205/((x1206>>x1207)+x1208));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1253 = INT32_MAX;
	int8_t x1255 = 1;
	static int64_t x1256 = -50957LL;

	t19 = (x1253/((x1254>>x1255)+x1256));

	if (t19 != -118058LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1349 = -694;
	uint16_t x1350 = UINT16_MAX;
	uint8_t x1351 = 1U;
	int64_t x1352 = INT64_MIN;
	volatile int64_t t20 = -438346994156633164LL;

	t20 = (x1349/((x1350>>x1351)+x1352));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1517 = INT64_MIN;
	volatile uint8_t x1518 = UINT8_MAX;
	volatile int64_t t21 = 12592690835095742LL;

	t21 = (x1517/((x1518>>x1519)+x1520));

	if (t21 != -140467424642179LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1525 = -1;
	static uint64_t x1526 = UINT64_MAX;
	uint8_t x1527 = 1U;
	int8_t x1528 = INT8_MIN;
	uint64_t t22 = 12215578LLU;

	t22 = (x1525/((x1526>>x1527)+x1528));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1597 = -111;
	volatile uint8_t x1598 = 15U;
	volatile uint8_t x1599 = 0U;
	volatile uint16_t x1600 = UINT16_MAX;
	static int32_t t23 = -44217;

	t23 = (x1597/((x1598>>x1599)+x1600));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1673 = -1801124695771LL;
	uint32_t x1674 = 640U;
	int8_t x1675 = 19;
	int64_t t24 = 1814595LL;

	t24 = (x1673/((x1674>>x1675)+x1676));

	if (t24 != -419LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1693 = -1;
	uint64_t x1696 = 1LLU;
	volatile uint64_t t25 = 5513905108673190698LLU;

	t25 = (x1693/((x1694>>x1695)+x1696));

	if (t25 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1701 = -13398;
	static uint64_t x1702 = 300025738981335198LLU;
	int32_t x1703 = 3;
	int16_t x1704 = -1;

	t26 = (x1701/((x1702>>x1703)+x1704));

	if (t26 != 491LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1705 = 2U;
	int64_t x1706 = INT64_MAX;
	uint8_t x1707 = 6U;
	int64_t x1708 = -24LL;
	static volatile int64_t t27 = 154735LL;

	t27 = (x1705/((x1706>>x1707)+x1708));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1717 = 748028054;
	uint8_t x1718 = 41U;
	static int8_t x1719 = 1;
	int8_t x1720 = -8;

	t28 = (x1717/((x1718>>x1719)+x1720));

	if (t28 != 62335671) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1727 = 1U;
	static volatile int16_t x1728 = INT16_MIN;
	volatile int64_t t29 = 6LL;

	t29 = (x1725/((x1726>>x1727)+x1728));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1758 = INT8_MAX;
	volatile uint8_t x1759 = 5U;
	volatile int64_t t30 = 912028468999LL;

	t30 = (x1757/((x1758>>x1759)+x1760));

	if (t30 != -14LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1857 = 29;
	static int64_t x1858 = 2421870LL;
	uint64_t x1859 = 7LLU;
	static int8_t x1860 = INT8_MIN;
	static int64_t t31 = -616624LL;

	t31 = (x1857/((x1858>>x1859)+x1860));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1881 = 0U;
	int32_t x1882 = 104226258;
	int32_t x1883 = 15;
	volatile int32_t t32 = 6;

	t32 = (x1881/((x1882>>x1883)+x1884));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x2033 = INT64_MAX;
	uint32_t x2034 = UINT32_MAX;
	uint32_t x2035 = 15U;
	int64_t t33 = -40053498LL;

	t33 = (x2033/((x2034>>x2035)+x2036));

	if (t33 != 70301163408396LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2106 = INT64_MAX;
	static int8_t x2107 = 15;
	int8_t x2108 = -1;

	t34 = (x2105/((x2106>>x2107)+x2108));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2125 = -178;
	static uint8_t x2127 = 6U;
	uint64_t x2128 = 118649992286LLU;
	volatile uint64_t t35 = 167408814802014LLU;

	t35 = (x2125/((x2126>>x2127)+x2128));

	if (t35 != 155471936LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2137 = 124U;
	uint8_t x2138 = UINT8_MAX;
	uint8_t x2139 = 2U;
	static int64_t x2140 = INT64_MIN;
	int64_t t36 = 203835348553022LL;

	t36 = (x2137/((x2138>>x2139)+x2140));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2145 = INT64_MIN;
	volatile int8_t x2146 = 6;
	volatile uint16_t x2147 = 1U;
	uint64_t x2148 = UINT64_MAX;
	uint64_t t37 = 17156991873559LLU;

	t37 = (x2145/((x2146>>x2147)+x2148));

	if (t37 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2161 = -2;
	volatile int64_t x2162 = INT64_MAX;
	int16_t x2163 = 1;
	int16_t x2164 = 461;
	static int64_t t38 = -10706074312LL;

	t38 = (x2161/((x2162>>x2163)+x2164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2173 = -1;
	volatile int64_t x2174 = 66165224149245LL;
	int16_t x2176 = INT16_MAX;

	t39 = (x2173/((x2174>>x2175)+x2176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2181 = 0;
	uint32_t x2182 = UINT32_MAX;
	volatile int32_t x2183 = 28;

	t40 = (x2181/((x2182>>x2183)+x2184));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2276 = UINT8_MAX;

	t41 = (x2273/((x2274>>x2275)+x2276));

	if (t41 != 73) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2438 = 1U;
	uint16_t x2440 = 977U;

	t42 = (x2437/((x2438>>x2439)+x2440));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2529 = 4U;
	uint32_t x2530 = 45U;
	static int32_t x2532 = INT32_MAX;
	uint32_t t43 = 39409164U;

	t43 = (x2529/((x2530>>x2531)+x2532));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2549 = UINT16_MAX;
	volatile uint8_t x2551 = 5U;
	static volatile int64_t t44 = 4560136740LL;

	t44 = (x2549/((x2550>>x2551)+x2552));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x2553 = 339;
	volatile uint8_t x2554 = 0U;
	uint8_t x2555 = 0U;
	uint64_t x2556 = UINT64_MAX;

	t45 = (x2553/((x2554>>x2555)+x2556));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x2561 = UINT8_MAX;
	uint8_t x2563 = 26U;
	int64_t x2564 = INT64_MIN;
	uint64_t t46 = 2052109229555322294LLU;

	t46 = (x2561/((x2562>>x2563)+x2564));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2681 = UINT16_MAX;
	static volatile uint32_t x2682 = 3U;
	uint8_t x2683 = 5U;
	int32_t x2684 = INT32_MAX;

	t47 = (x2681/((x2682>>x2683)+x2684));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x2735 = 3;
	static uint8_t x2736 = 0U;
	volatile uint64_t t48 = 128650067LLU;

	t48 = (x2733/((x2734>>x2735)+x2736));

	if (t48 != 7LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2749 = 56U;
	static uint8_t x2751 = 1U;
	static int8_t x2752 = 0;
	uint64_t t49 = 29605409781449LLU;

	t49 = (x2749/((x2750>>x2751)+x2752));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2753 = 3855591171925034313LL;

	t50 = (x2753/((x2754>>x2755)+x2756));

	if (t50 != 3352687975586986LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2821 = -2454854938409623371LL;
	uint64_t x2822 = 1LLU;
	uint8_t x2823 = 4U;
	uint32_t x2824 = 1U;
	uint64_t t51 = 2936841733245LLU;

	t51 = (x2821/((x2822>>x2823)+x2824));

	if (t51 != 15991889135299928245LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2881 = 301436359LLU;
	uint8_t x2882 = UINT8_MAX;
	uint8_t x2883 = 25U;
	int8_t x2884 = -2;
	uint64_t t52 = 3822119664504LLU;

	t52 = (x2881/((x2882>>x2883)+x2884));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2910 = UINT32_MAX;
	int16_t x2912 = INT16_MAX;
	int64_t t53 = 2034294815LL;

	t53 = (x2909/((x2910>>x2911)+x2912));

	if (t53 != -477768LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x2933 = 12U;
	volatile uint8_t x2934 = 1U;
	volatile int64_t t54 = -443008LL;

	t54 = (x2933/((x2934>>x2935)+x2936));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2941 = -1;
	int8_t x2942 = 0;
	uint32_t x2944 = 276065721U;
	volatile uint32_t t55 = 12418U;

	t55 = (x2941/((x2942>>x2943)+x2944));

	if (t55 != 15U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2998 = UINT8_MAX;
	volatile int8_t x3000 = INT8_MAX;
	int32_t t56 = -252332;

	t56 = (x2997/((x2998>>x2999)+x3000));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3001 = UINT16_MAX;
	volatile int16_t x3002 = INT16_MAX;
	volatile uint8_t x3003 = 1U;
	static int8_t x3004 = 7;

	t57 = (x3001/((x3002>>x3003)+x3004));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3025 = INT32_MIN;
	static volatile uint32_t x3026 = 13979791U;
	int8_t x3027 = 1;
	volatile uint32_t x3028 = UINT32_MAX;
	static uint32_t t58 = 1835U;

	t58 = (x3025/((x3026>>x3027)+x3028));

	if (t58 != 307U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3069 = INT8_MIN;
	static uint32_t x3071 = 46U;
	volatile uint64_t x3072 = UINT64_MAX;
	volatile uint64_t t59 = 725162661024430LLU;

	t59 = (x3069/((x3070>>x3071)+x3072));

	if (t59 != 70369281052672LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3141 = UINT16_MAX;
	uint64_t t60 = 981906785927LLU;

	t60 = (x3141/((x3142>>x3143)+x3144));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3157 = INT32_MIN;
	int32_t x3158 = INT32_MAX;
	volatile uint8_t x3159 = 1U;
	uint32_t x3160 = 12606U;

	t61 = (x3157/((x3158>>x3159)+x3160));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3177 = INT64_MIN;
	static uint8_t x3178 = 6U;
	static volatile uint32_t x3179 = 9U;
	int8_t x3180 = INT8_MIN;
	volatile int64_t t62 = 10722859317230LL;

	t62 = (x3177/((x3178>>x3179)+x3180));

	if (t62 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3193 = 2776895;
	uint8_t x3195 = 0U;
	uint8_t x3196 = UINT8_MAX;
	int32_t t63 = -179703;

	t63 = (x3193/((x3194>>x3195)+x3196));

	if (t63 != 224) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3237 = INT32_MIN;
	uint8_t x3239 = 3U;
	int8_t x3240 = -1;
	static volatile int32_t t64 = -191679;

	t64 = (x3237/((x3238>>x3239)+x3240));

	if (t64 != -21510) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3257 = -1;
	uint8_t x3259 = 7U;
	static volatile uint32_t t65 = 38490466U;

	t65 = (x3257/((x3258>>x3259)+x3260));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3285 = UINT64_MAX;
	static volatile uint8_t x3287 = 11U;
	uint64_t x3288 = UINT64_MAX;
	uint64_t t66 = 3207936LLU;

	t66 = (x3285/((x3286>>x3287)+x3288));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3326 = 124;
	uint64_t x3328 = 53066750578883LLU;
	static uint64_t t67 = 11246511472LLU;

	t67 = (x3325/((x3326>>x3327)+x3328));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3357 = -1;
	uint32_t x3358 = 230U;
	int16_t x3359 = 25;
	volatile uint32_t t68 = 11297U;

	t68 = (x3357/((x3358>>x3359)+x3360));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3393 = INT16_MIN;
	uint8_t x3395 = 10U;
	uint16_t x3396 = 3U;

	t69 = (x3393/((x3394>>x3395)+x3396));

	if (t69 != 1663413U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3413 = 15U;
	int8_t x3414 = 27;
	uint16_t x3415 = 27U;
	int32_t x3416 = INT32_MIN;
	volatile int32_t t70 = -83;

	t70 = (x3413/((x3414>>x3415)+x3416));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3493 = UINT16_MAX;
	uint8_t x3494 = 3U;
	volatile int8_t x3495 = 1;
	static uint64_t x3496 = 1144692616LLU;
	static uint64_t t71 = 2747020025LLU;

	t71 = (x3493/((x3494>>x3495)+x3496));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3529 = 95418LLU;
	volatile int32_t x3530 = 0;
	uint16_t x3531 = 2U;
	volatile int16_t x3532 = INT16_MAX;

	t72 = (x3529/((x3530>>x3531)+x3532));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x3541 = 527187219371157LL;
	int32_t x3544 = INT32_MAX;
	volatile int64_t t73 = -506216707557714LL;

	t73 = (x3541/((x3542>>x3543)+x3544));

	if (t73 != 39855LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3577 = INT64_MIN;
	static volatile int8_t x3579 = 1;
	int8_t x3580 = INT8_MIN;
	volatile int64_t t74 = -1LL;

	t74 = (x3577/((x3578>>x3579)+x3580));

	if (t74 != -87012943743912979LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3697 = -147;
	uint32_t x3698 = 11431U;
	int8_t x3699 = 2;
	int32_t x3700 = -1;

	t75 = (x3697/((x3698>>x3699)+x3700));

	if (t75 != 1503840U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3745 = -1LL;
	int32_t x3746 = INT32_MAX;
	uint32_t x3747 = 1U;
	int64_t t76 = -13100LL;

	t76 = (x3745/((x3746>>x3747)+x3748));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3753 = 524626928;
	int64_t x3754 = 89LL;
	uint8_t x3755 = 21U;

	t77 = (x3753/((x3754>>x3755)+x3756));

	if (t77 != -524626928LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3757 = UINT32_MAX;
	uint32_t x3758 = 667U;
	int8_t x3759 = 21;
	uint32_t t78 = 98935U;

	t78 = (x3757/((x3758>>x3759)+x3760));

	if (t78 != 146771U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3841 = 2U;
	volatile int64_t x3842 = INT64_MAX;
	int32_t x3844 = -206779075;
	volatile int64_t t79 = 3417861925292LL;

	t79 = (x3841/((x3842>>x3843)+x3844));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3858 = UINT64_MAX;
	static int32_t x3859 = 2;
	uint16_t x3860 = 65U;
	volatile uint64_t t80 = 411892598LLU;

	t80 = (x3857/((x3858>>x3859)+x3860));

	if (t80 != 3LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x3897 = 6274508LLU;
	volatile int32_t x3898 = 15401;
	int32_t x3899 = 3;
	int8_t x3900 = -1;
	static uint64_t t81 = 117532859576LLU;

	t81 = (x3897/((x3898>>x3899)+x3900));

	if (t81 != 3261LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4121 = UINT32_MAX;
	uint8_t x4122 = 127U;
	int8_t x4123 = 1;
	static uint16_t x4124 = UINT16_MAX;
	uint32_t t82 = 220160725U;

	t82 = (x4121/((x4122>>x4123)+x4124));

	if (t82 != 65474U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4141 = INT16_MIN;
	volatile int64_t x4142 = INT64_MAX;
	static uint16_t x4143 = 1U;
	int64_t x4144 = INT64_MIN;

	t83 = (x4141/((x4142>>x4143)+x4144));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4177 = INT8_MAX;
	uint64_t x4178 = 6544332033022LLU;
	int32_t x4179 = 6;
	uint16_t x4180 = 629U;
	volatile uint64_t t84 = 210893LLU;

	t84 = (x4177/((x4178>>x4179)+x4180));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4198 = 6448595U;
	uint8_t x4199 = 8U;
	int64_t x4200 = INT64_MIN;
	volatile int64_t t85 = 41139LL;

	t85 = (x4197/((x4198>>x4199)+x4200));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4349 = INT8_MAX;
	int16_t x4350 = 149;
	volatile uint32_t x4351 = 3U;
	int32_t t86 = -55999;

	t86 = (x4349/((x4350>>x4351)+x4352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4449 = -38;
	uint64_t x4450 = 2311807800LLU;
	int8_t x4451 = 1;
	volatile int32_t x4452 = -56;
	uint64_t t87 = 23LLU;

	t87 = (x4449/((x4450>>x4451)+x4452));

	if (t87 != 15958718512LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4505 = INT64_MIN;
	uint32_t x4506 = UINT32_MAX;
	int8_t x4507 = 0;
	uint64_t x4508 = 1056558831143LLU;
	static volatile uint64_t t88 = 10887LLU;

	t88 = (x4505/((x4506>>x4507)+x4508));

	if (t88 != 8694291LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4553 = INT16_MAX;
	static int8_t x4554 = INT8_MAX;
	static int32_t x4556 = INT32_MIN;
	volatile int32_t t89 = 11000736;

	t89 = (x4553/((x4554>>x4555)+x4556));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4565 = INT16_MAX;
	int16_t x4567 = 0;
	int16_t x4568 = -186;
	volatile int32_t t90 = 25218092;

	t90 = (x4565/((x4566>>x4567)+x4568));

	if (t90 != 474) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x4569 = UINT8_MAX;
	uint32_t x4570 = 2041U;
	int8_t x4571 = 1;

	t91 = (x4569/((x4570>>x4571)+x4572));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x4657 = INT8_MIN;
	uint32_t x4658 = 18994U;
	uint8_t x4659 = 17U;
	uint32_t x4660 = UINT32_MAX;
	volatile uint32_t t92 = 125402209U;

	t92 = (x4657/((x4658>>x4659)+x4660));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x4709 = 979668473429121114LLU;
	static int32_t x4710 = INT32_MAX;
	int16_t x4711 = 1;

	t93 = (x4709/((x4710>>x4711)+x4712));

	if (t93 != 912415210LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4729 = INT64_MIN;
	int8_t x4731 = 3;
	int64_t t94 = -1494742LL;

	t94 = (x4729/((x4730>>x4731)+x4732));

	if (t94 != -1126174851874820LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x4773 = UINT64_MAX;
	volatile uint32_t x4774 = 1897647U;
	int64_t x4776 = INT64_MIN;
	volatile uint64_t t95 = 1112148460LLU;

	t95 = (x4773/((x4774>>x4775)+x4776));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4913 = 2U;
	int8_t x4915 = 1;
	volatile int32_t x4916 = 63515908;
	volatile uint32_t t96 = 215599148U;

	t96 = (x4913/((x4914>>x4915)+x4916));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t t97 = 19934238507LLU;

	t97 = (x4925/((x4926>>x4927)+x4928));

	if (t97 != 1208LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4990 = INT64_MAX;
	static int8_t x4991 = 10;
	volatile int8_t x4992 = INT8_MAX;

	t98 = (x4989/((x4990>>x4991)+x4992));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5009 = 164LL;
	uint8_t x5010 = 91U;
	uint8_t x5011 = 2U;
	int32_t x5012 = INT32_MIN;
	static volatile int64_t t99 = 6153LL;

	t99 = (x5009/((x5010>>x5011)+x5012));

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

