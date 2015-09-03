#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x30 = 20298191LLU;
volatile uint64_t t0 = 1984831142394LLU;
uint32_t x126 = 333994U;
uint16_t x128 = 15U;
static int64_t x173 = -1LL;
int16_t x174 = 2;
volatile int8_t x175 = 2;
uint32_t x477 = 107057U;
int8_t x480 = 15;
uint32_t t6 = 1U;
int16_t x550 = -1;
uint8_t x577 = UINT8_MAX;
static int32_t x578 = INT32_MIN;
uint16_t x620 = 5U;
int16_t x826 = INT16_MIN;
int16_t x827 = INT16_MIN;
uint8_t x828 = 5U;
int16_t x927 = -6;
volatile uint16_t x964 = 6U;
volatile int32_t x1015 = INT32_MIN;
uint64_t x1230 = 106741LLU;
volatile int16_t x1269 = -14;
volatile int64_t t19 = 474LL;
uint8_t x1397 = 2U;
uint8_t x1622 = UINT8_MAX;
uint64_t t25 = 1161100377469348LLU;
int64_t x1809 = 238435275959169761LL;
uint32_t x1952 = 23U;
uint32_t x2061 = UINT32_MAX;
volatile uint64_t x2063 = 1233672363033484942LLU;
int8_t x2075 = 8;
static volatile uint32_t x2135 = UINT32_MAX;
int16_t x2259 = INT16_MAX;
volatile int8_t x2289 = 17;
uint16_t x2290 = 180U;
uint32_t x2331 = 129888U;
volatile int16_t x2366 = INT16_MIN;
int64_t t39 = 4183452676023452LL;
int64_t x2463 = INT64_MIN;
int32_t t44 = -266;
static int16_t x2672 = 0;
static uint64_t t48 = 781LLU;
int16_t x2837 = INT16_MIN;
volatile uint64_t t52 = 6565096440LLU;
uint32_t t54 = 2U;
int32_t x2959 = -1;
int8_t x2995 = 9;
volatile uint16_t x2996 = 1U;
uint16_t x3050 = 6U;
int8_t x3104 = 0;
int64_t x3225 = -1LL;
int16_t x3399 = INT16_MAX;
static uint16_t x3400 = 8U;
uint64_t t62 = 290977232096LLU;
uint32_t x3700 = 10U;
uint32_t t64 = 114U;
uint32_t x3745 = UINT32_MAX;
volatile uint64_t t65 = 446860762094586LLU;
volatile uint64_t t66 = 873791435LLU;
int8_t x4187 = 1;
volatile int16_t x4434 = INT16_MAX;
uint8_t x4518 = UINT8_MAX;
uint16_t x4579 = 4U;
int32_t x4694 = 2;
int16_t x4696 = 1;
int16_t x4762 = INT16_MIN;
volatile uint64_t t80 = 371LLU;
uint64_t t81 = 26557167362LLU;
volatile int32_t t82 = 608;
uint8_t x4924 = 5U;
static int32_t t86 = 15;
static int32_t x4961 = -1;
uint16_t x5017 = UINT16_MAX;
int8_t x5019 = INT8_MIN;
uint64_t t91 = 4664210267LLU;
uint8_t x5173 = 1U;
uint64_t x5277 = 182196684LLU;
static uint32_t x5280 = 0U;
uint16_t x5304 = 4U;
int16_t x5392 = 3;
volatile uint16_t x5553 = 33U;
uint32_t x5555 = 0U;
uint32_t t97 = 50459346U;
int64_t x5641 = -1211262913831300LL;
uint32_t x5643 = 2U;
uint64_t x5659 = 59733249LLU;


void f0(void) {
	int64_t x29 = INT64_MAX;
	volatile int64_t x31 = -5363904LL;
	uint16_t x32 = 2U;

	t0 = (x29+((x30^x31)<<x32));

	if (t0 != 9223372036761352763LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x93 = 3U;
	static volatile uint64_t x94 = 1077355096639LLU;
	uint64_t x95 = 563873LLU;
	static uint16_t x96 = 10U;
	uint64_t t1 = 16629728LLU;

	t1 = (x93+((x94^x95)<<x96));

	if (t1 != 1103211117312003LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x125 = INT64_MIN;
	uint8_t x127 = 6U;
	volatile int64_t t2 = -51574LL;

	t2 = (x125+((x126^x127)<<x128));

	if (t2 != -9223372034500329472LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x176 = 4U;
	static volatile int64_t t3 = 15086638LL;

	t3 = (x173+((x174^x175)<<x176));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x449 = 3U;
	int16_t x450 = INT16_MIN;
	volatile uint32_t x451 = 1U;
	uint8_t x452 = 5U;
	uint32_t t4 = 169U;

	t4 = (x449+((x450^x451)<<x452));

	if (t4 != 4293918755U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x473 = INT16_MIN;
	static volatile uint16_t x474 = 1233U;
	volatile uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 1U;
	volatile uint64_t t5 = 7LLU;

	t5 = (x473+((x474^x475)<<x476));

	if (t5 != 18446744073709516380LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x478 = -5;
	volatile int8_t x479 = -1;

	t6 = (x477+((x478^x479)<<x480));

	if (t6 != 238129U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x549 = INT16_MIN;
	static int8_t x551 = INT8_MIN;
	int8_t x552 = 0;
	volatile int32_t t7 = -84449144;

	t7 = (x549+((x550^x551)<<x552));

	if (t7 != -32641) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x573 = 9321U;
	uint64_t x574 = 7981084818432406337LLU;
	int32_t x575 = INT32_MAX;
	uint16_t x576 = 9U;
	uint64_t t8 = 2LLU;

	t8 = (x573+((x574^x575)<<x576));

	if (t8 != 9584986388065525865LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x579 = -1LL;
	volatile uint16_t x580 = 0U;
	static volatile int64_t t9 = 7059801092LL;

	t9 = (x577+((x578^x579)<<x580));

	if (t9 != 2147483902LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x617 = INT64_MIN;
	int64_t x618 = -107079LL;
	int8_t x619 = INT8_MIN;
	volatile int64_t t10 = 9308820710007113LL;

	t10 = (x617+((x618^x619)<<x620));

	if (t10 != -9223372036851349728LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x825 = 3U;
	int32_t t11 = 1676;

	t11 = (x825+((x826^x827)<<x828));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x881 = INT32_MIN;
	static uint32_t x882 = UINT32_MAX;
	int8_t x883 = INT8_MIN;
	uint16_t x884 = 1U;
	volatile uint32_t t12 = 126147U;

	t12 = (x881+((x882^x883)<<x884));

	if (t12 != 2147483902U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x917 = INT8_MIN;
	volatile int64_t x918 = -53266591LL;
	volatile int64_t x919 = -712843LL;
	static int8_t x920 = 0;
	static volatile int64_t t13 = -290732717538394LL;

	t13 = (x917+((x918^x919)<<x920));

	if (t13 != 52832148LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x925 = 130858290056LLU;
	int32_t x926 = -1;
	int16_t x928 = 2;
	volatile uint64_t t14 = 7959068274111881738LLU;

	t14 = (x925+((x926^x927)<<x928));

	if (t14 != 130858290076LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x961 = INT16_MIN;
	uint8_t x962 = UINT8_MAX;
	static uint8_t x963 = 2U;
	int32_t t15 = -31916;

	t15 = (x961+((x962^x963)<<x964));

	if (t15 != -16576) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1013 = 0;
	uint64_t x1014 = 6492477946868LLU;
	uint8_t x1016 = 11U;
	uint64_t t16 = 239970055250369LLU;

	t16 = (x1013+((x1014^x1015)<<x1016));

	if (t16 != 18433445681292091392LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1229 = INT64_MIN;
	uint16_t x1231 = 3U;
	volatile int64_t x1232 = 0LL;
	uint64_t t17 = 62641518952550LLU;

	t17 = (x1229+((x1230^x1231)<<x1232));

	if (t17 != 9223372036854882550LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1270 = UINT16_MAX;
	volatile int16_t x1271 = 2766;
	uint8_t x1272 = 2U;
	int32_t t18 = -19;

	t18 = (x1269+((x1270^x1271)<<x1272));

	if (t18 != 251062) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1309 = -1LL;
	int16_t x1310 = INT16_MIN;
	volatile int32_t x1311 = -1;
	static uint8_t x1312 = 16U;

	t19 = (x1309+((x1310^x1311)<<x1312));

	if (t19 != 2147418111LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1398 = INT32_MIN;
	int32_t x1399 = INT32_MIN;
	uint16_t x1400 = 9U;
	static volatile int32_t t20 = 1;

	t20 = (x1397+((x1398^x1399)<<x1400));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1401 = -1;
	uint64_t x1402 = 4135463733154LLU;
	int64_t x1403 = -11039LL;
	uint64_t x1404 = 0LLU;
	uint64_t t21 = 14LLU;

	t21 = (x1401+((x1402^x1403)<<x1404));

	if (t21 != 18446739938245808962LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1449 = -827;
	uint64_t x1450 = 1529684313216LLU;
	int8_t x1451 = INT8_MAX;
	static int8_t x1452 = 44;
	static volatile uint64_t t22 = 260851987535295335LLU;

	t22 = (x1449+((x1450^x1451)<<x1452));

	if (t22 != 11839945828170988741LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1557 = INT8_MIN;
	static int8_t x1558 = -15;
	int8_t x1559 = INT8_MIN;
	uint8_t x1560 = 0U;
	volatile int32_t t23 = -25;

	t23 = (x1557+((x1558^x1559)<<x1560));

	if (t23 != -15) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1621 = INT16_MIN;
	volatile int8_t x1623 = 3;
	int32_t x1624 = 18;
	int32_t t24 = -847921;

	t24 = (x1621+((x1622^x1623)<<x1624));

	if (t24 != 66027520) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1625 = UINT64_MAX;
	static uint8_t x1626 = 5U;
	uint32_t x1627 = 2985U;
	uint8_t x1628 = 5U;

	t25 = (x1625+((x1626^x1627)<<x1628));

	if (t25 != 95615LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1677 = INT8_MAX;
	volatile uint16_t x1678 = UINT16_MAX;
	uint16_t x1679 = UINT16_MAX;
	volatile uint32_t x1680 = 2U;
	volatile int32_t t26 = -14402;

	t26 = (x1677+((x1678^x1679)<<x1680));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1810 = 11U;
	uint16_t x1811 = UINT16_MAX;
	static uint8_t x1812 = 3U;
	volatile int64_t t27 = 952LL;

	t27 = (x1809+((x1810^x1811)<<x1812));

	if (t27 != 238435275959693953LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1929 = 445368024668685LLU;
	uint16_t x1930 = UINT16_MAX;
	static volatile uint64_t x1931 = UINT64_MAX;
	static uint8_t x1932 = 22U;
	uint64_t t28 = 1467743148576740LLU;

	t28 = (x1929+((x1930^x1931)<<x1932));

	if (t28 != 445093146761741LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1933 = -6;
	volatile int16_t x1934 = INT16_MIN;
	static uint64_t x1935 = UINT64_MAX;
	uint16_t x1936 = 5U;
	volatile uint64_t t29 = 2366887994LLU;

	t29 = (x1933+((x1934^x1935)<<x1936));

	if (t29 != 1048538LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1949 = INT8_MIN;
	volatile int64_t x1950 = -1LL;
	int32_t x1951 = INT32_MIN;
	int64_t t30 = 539160977273314074LL;

	t30 = (x1949+((x1950^x1951)<<x1952));

	if (t30 != 18014398501093248LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1969 = -52950LL;
	uint64_t x1970 = 1875901413LLU;
	uint64_t x1971 = UINT64_MAX;
	int8_t x1972 = 1;
	volatile uint64_t t31 = 84624891520093003LLU;

	t31 = (x1969+((x1970^x1971)<<x1972));

	if (t31 != 18446744069957695838LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2062 = 4;
	int64_t x2064 = 1LL;
	uint64_t t32 = 7991570057418633LLU;

	t32 = (x2061+((x2062^x2063)<<x2064));

	if (t32 != 2467344730361937171LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2073 = INT16_MIN;
	int16_t x2074 = INT16_MAX;
	uint16_t x2076 = 8U;
	static int32_t t33 = -82072890;

	t33 = (x2073+((x2074^x2075)<<x2076));

	if (t33 != 8353536) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2133 = INT64_MIN;
	int32_t x2134 = -1;
	int32_t x2136 = 1;
	volatile int64_t t34 = INT64_MIN;

	t34 = (x2133+((x2134^x2135)<<x2136));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2165 = 223008918944222LLU;
	static volatile int64_t x2166 = INT64_MAX;
	uint8_t x2167 = 44U;
	static uint16_t x2168 = 0U;
	uint64_t t35 = 20107LLU;

	t35 = (x2165+((x2166^x2167)<<x2168));

	if (t35 != 9223595045773719985LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2257 = -11160;
	uint64_t x2258 = UINT64_MAX;
	uint32_t x2260 = 21U;
	volatile uint64_t t36 = 15576736120LLU;

	t36 = (x2257+((x2258^x2259)<<x2260));

	if (t36 != 18446744004990063720LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2291 = UINT64_MAX;
	uint16_t x2292 = 39U;
	static uint64_t t37 = 4190922274LLU;

	t37 = (x2289+((x2290^x2291)<<x2292));

	if (t37 != 18446644567907237905LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2329 = 2U;
	volatile uint8_t x2330 = UINT8_MAX;
	int16_t x2332 = 3;
	uint32_t t38 = 10U;

	t38 = (x2329+((x2330^x2331)<<x2332));

	if (t38 != 1039610U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2365 = INT64_MIN;
	static uint32_t x2367 = 17126U;
	uint8_t x2368 = 8U;

	t39 = (x2365+((x2366^x2367)<<x2368));

	if (t39 != -9223372032563812864LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x2441 = 6;
	static int32_t x2442 = -150720254;
	uint64_t x2443 = 1662LLU;
	static volatile int8_t x2444 = 1;
	volatile uint64_t t40 = 31864LLU;

	t40 = (x2441+((x2442^x2443)<<x2444));

	if (t40 != 18446744073408114430LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2461 = -49;
	int64_t x2462 = -1LL;
	int8_t x2464 = 0;
	static volatile int64_t t41 = -94540680237451232LL;

	t41 = (x2461+((x2462^x2463)<<x2464));

	if (t41 != 9223372036854775758LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2465 = -264851068LL;
	int64_t x2466 = -1LL;
	int64_t x2467 = -1LL;
	int8_t x2468 = 24;
	volatile int64_t t42 = -22LL;

	t42 = (x2465+((x2466^x2467)<<x2468));

	if (t42 != -264851068LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2501 = UINT32_MAX;
	volatile int64_t x2502 = -1LL;
	int16_t x2503 = INT16_MIN;
	int64_t x2504 = 1LL;
	int64_t t43 = 749080801623799346LL;

	t43 = (x2501+((x2502^x2503)<<x2504));

	if (t43 != 4295032829LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2617 = -1;
	int16_t x2618 = INT16_MIN;
	volatile int16_t x2619 = -1;
	static uint16_t x2620 = 0U;

	t44 = (x2617+((x2618^x2619)<<x2620));

	if (t44 != 32766) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2669 = -1;
	int16_t x2670 = -6;
	volatile int32_t x2671 = INT32_MIN;
	static int32_t t45 = -642611287;

	t45 = (x2669+((x2670^x2671)<<x2672));

	if (t45 != 2147483641) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2701 = INT32_MIN;
	uint64_t x2702 = 2065575778712337795LLU;
	static int8_t x2703 = 15;
	volatile int32_t x2704 = 61;
	volatile uint64_t t46 = 187581792943231LLU;

	t46 = (x2701+((x2702^x2703)<<x2704));

	if (t46 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2709 = UINT32_MAX;
	int64_t x2710 = -1LL;
	volatile int16_t x2711 = -1;
	static uint8_t x2712 = 2U;
	int64_t t47 = 3674876799563656LL;

	t47 = (x2709+((x2710^x2711)<<x2712));

	if (t47 != 4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2729 = INT32_MAX;
	static int16_t x2730 = INT16_MAX;
	volatile uint64_t x2731 = UINT64_MAX;
	static volatile uint8_t x2732 = 12U;

	t48 = (x2729+((x2730^x2731)<<x2732));

	if (t48 != 2013265919LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2753 = -3627;
	static volatile int16_t x2754 = INT16_MIN;
	uint64_t x2755 = 654144916382208283LLU;
	static int32_t x2756 = 0;
	uint64_t t49 = 35437112175049503LLU;

	t49 = (x2753+((x2754^x2755)<<x2756));

	if (t49 != 17792599157327348464LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2797 = 9084450LLU;
	volatile uint32_t x2798 = UINT32_MAX;
	int64_t x2799 = 49LL;
	uint8_t x2800 = 17U;
	volatile uint64_t t50 = 56LLU;

	t50 = (x2797+((x2798^x2799)<<x2800));

	if (t50 != 562949955952162LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2805 = 14025U;
	uint8_t x2806 = 124U;
	int16_t x2807 = INT16_MAX;
	int16_t x2808 = 5;
	uint32_t t51 = 181791881U;

	t51 = (x2805+((x2806^x2807)<<x2808));

	if (t51 != 1058601U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2838 = UINT64_MAX;
	uint32_t x2839 = 1337U;
	uint8_t x2840 = 13U;

	t52 = (x2837+((x2838^x2839)<<x2840));

	if (t52 != 18446744073698557952LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2881 = 51349;
	uint8_t x2882 = UINT8_MAX;
	uint8_t x2883 = 3U;
	uint8_t x2884 = 8U;
	volatile int32_t t53 = -6123037;

	t53 = (x2881+((x2882^x2883)<<x2884));

	if (t53 != 115861) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2901 = 269012U;
	static volatile int8_t x2902 = -1;
	volatile int16_t x2903 = INT16_MIN;
	volatile uint8_t x2904 = 3U;

	t54 = (x2901+((x2902^x2903)<<x2904));

	if (t54 != 531148U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2957 = -1LL;
	volatile int64_t x2958 = -153LL;
	int8_t x2960 = 0;
	volatile int64_t t55 = -44LL;

	t55 = (x2957+((x2958^x2959)<<x2960));

	if (t55 != 151LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2993 = INT16_MIN;
	uint16_t x2994 = 63U;
	volatile int32_t t56 = -263102174;

	t56 = (x2993+((x2994^x2995)<<x2996));

	if (t56 != -32660) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3049 = INT64_MAX;
	uint64_t x3051 = UINT64_MAX;
	int8_t x3052 = 1;
	uint64_t t57 = 38924616LLU;

	t57 = (x3049+((x3050^x3051)<<x3052));

	if (t57 != 9223372036854775793LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3101 = UINT64_MAX;
	volatile int8_t x3102 = INT8_MIN;
	uint64_t x3103 = 1039089LLU;
	uint64_t t58 = 333115995LLU;

	t58 = (x3101+((x3102^x3103)<<x3104));

	if (t58 != 18446744073708512624LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3177 = 672U;
	int16_t x3178 = -1;
	static int64_t x3179 = -1LL;
	uint8_t x3180 = 7U;
	int64_t t59 = 9LL;

	t59 = (x3177+((x3178^x3179)<<x3180));

	if (t59 != 672LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x3226 = -12263;
	uint32_t x3227 = UINT32_MAX;
	uint8_t x3228 = 8U;
	volatile int64_t t60 = 48172LL;

	t60 = (x3225+((x3226^x3227)<<x3228));

	if (t60 != 3139071LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3397 = -31;
	int16_t x3398 = 81;
	volatile int32_t t61 = 84175712;

	t61 = (x3397+((x3398^x3399)<<x3400));

	if (t61 != 8367585) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3405 = -1;
	uint64_t x3406 = 57329132221LLU;
	int16_t x3407 = INT16_MAX;
	static int8_t x3408 = 0;

	t62 = (x3405+((x3406^x3407)<<x3408));

	if (t62 != 57329147201LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3621 = -7;
	uint32_t x3622 = UINT32_MAX;
	static int32_t x3623 = INT32_MAX;
	uint64_t x3624 = 14LLU;
	volatile uint32_t t63 = 320U;

	t63 = (x3621+((x3622^x3623)<<x3624));

	if (t63 != 4294967289U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3697 = INT16_MIN;
	int32_t x3698 = -1;
	uint32_t x3699 = UINT32_MAX;

	t64 = (x3697+((x3698^x3699)<<x3700));

	if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3746 = 1;
	uint64_t x3747 = UINT64_MAX;
	uint16_t x3748 = 0U;

	t65 = (x3745+((x3746^x3747)<<x3748));

	if (t65 != 4294967293LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3753 = -55LL;
	static uint64_t x3754 = UINT64_MAX;
	uint16_t x3755 = 689U;
	int16_t x3756 = 5;

	t66 = (x3753+((x3754^x3755)<<x3756));

	if (t66 != 18446744073709529481LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x3921 = 29U;
	int16_t x3922 = INT16_MIN;
	uint32_t x3923 = UINT32_MAX;
	uint16_t x3924 = 14U;
	uint32_t t67 = 27026356U;

	t67 = (x3921+((x3922^x3923)<<x3924));

	if (t67 != 536854557U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3985 = -110;
	int16_t x3986 = INT16_MIN;
	int32_t x3987 = -1;
	static uint8_t x3988 = 5U;
	int32_t t68 = 381152605;

	t68 = (x3985+((x3986^x3987)<<x3988));

	if (t68 != 1048434) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x4037 = -22;
	int16_t x4038 = INT16_MIN;
	static int64_t x4039 = -1LL;
	static uint32_t x4040 = 5U;
	volatile int64_t t69 = 493965LL;

	t69 = (x4037+((x4038^x4039)<<x4040));

	if (t69 != 1048522LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4093 = INT8_MIN;
	static volatile uint32_t x4094 = UINT32_MAX;
	static int8_t x4095 = -1;
	static uint16_t x4096 = 1U;
	uint32_t t70 = 26686526U;

	t70 = (x4093+((x4094^x4095)<<x4096));

	if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4161 = UINT64_MAX;
	uint32_t x4162 = 12U;
	int64_t x4163 = 1014LL;
	uint64_t x4164 = 35LLU;
	volatile uint64_t t71 = 347504622120LLU;

	t71 = (x4161+((x4162^x4163)<<x4164));

	if (t71 != 34978213658623LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x4185 = -148721LL;
	uint8_t x4186 = UINT8_MAX;
	volatile uint8_t x4188 = 4U;
	static int64_t t72 = -16278LL;

	t72 = (x4185+((x4186^x4187)<<x4188));

	if (t72 != -144657LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x4433 = -12;
	static uint64_t x4435 = 418905965509966142LLU;
	uint8_t x4436 = 7U;
	uint64_t t73 = 51622LLU;

	t73 = (x4433+((x4434^x4435)<<x4436));

	if (t73 != 16726475437852811380LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4517 = UINT8_MAX;
	uint32_t x4519 = 1341510U;
	uint16_t x4520 = 13U;
	volatile uint32_t t74 = 1107U;

	t74 = (x4517+((x4518^x4519)<<x4520));

	if (t74 != 2400657663U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4577 = 81;
	volatile uint16_t x4578 = 0U;
	volatile int8_t x4580 = 1;
	static int32_t t75 = 395;

	t75 = (x4577+((x4578^x4579)<<x4580));

	if (t75 != 89) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4625 = -1;
	volatile int32_t x4626 = -1;
	static int64_t x4627 = -1LL;
	uint16_t x4628 = 36U;
	static volatile int64_t t76 = -288187964125121LL;

	t76 = (x4625+((x4626^x4627)<<x4628));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4689 = INT16_MIN;
	uint32_t x4690 = 1646970248U;
	uint32_t x4691 = UINT32_MAX;
	static uint8_t x4692 = 12U;
	uint32_t t77 = 2550U;

	t77 = (x4689+((x4690^x4691)<<x4692));

	if (t77 != 1403449344U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4693 = 2U;
	int32_t x4695 = 301;
	int32_t t78 = -759480148;

	t78 = (x4693+((x4694^x4695)<<x4696));

	if (t78 != 608) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x4729 = INT64_MAX;
	uint64_t x4730 = UINT64_MAX;
	static int32_t x4731 = 1;
	volatile uint8_t x4732 = 42U;
	uint64_t t79 = 21916LLU;

	t79 = (x4729+((x4730^x4731)<<x4732));

	if (t79 != 9223363240761753599LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4761 = INT32_MIN;
	volatile uint64_t x4763 = UINT64_MAX;
	volatile uint8_t x4764 = 46U;

	t80 = (x4761+((x4762^x4763)<<x4764));

	if (t80 != 2305772638322032640LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4769 = UINT32_MAX;
	uint8_t x4770 = 77U;
	uint64_t x4771 = UINT64_MAX;
	uint8_t x4772 = 0U;

	t81 = (x4769+((x4770^x4771)<<x4772));

	if (t81 != 4294967217LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4797 = 14U;
	int16_t x4798 = -3410;
	int8_t x4799 = INT8_MIN;
	uint8_t x4800 = 2U;

	t82 = (x4797+((x4798^x4799)<<x4800));

	if (t82 != 13510) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4845 = 1;
	uint32_t x4846 = 9U;
	int32_t x4847 = INT32_MAX;
	uint64_t x4848 = 2LLU;
	volatile uint32_t t83 = 263U;

	t83 = (x4845+((x4846^x4847)<<x4848));

	if (t83 != 4294967257U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4909 = INT8_MIN;
	static int8_t x4910 = -1;
	static int16_t x4911 = -128;
	uint16_t x4912 = 0U;
	int32_t t84 = -1904;

	t84 = (x4909+((x4910^x4911)<<x4912));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4921 = -1;
	int16_t x4922 = INT16_MAX;
	volatile uint32_t x4923 = 11123U;
	uint32_t t85 = 237U;

	t85 = (x4921+((x4922^x4923)<<x4924));

	if (t85 != 692607U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x4945 = INT8_MIN;
	static int8_t x4946 = INT8_MIN;
	int32_t x4947 = -1;
	int8_t x4948 = 0;

	t86 = (x4945+((x4946^x4947)<<x4948));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4962 = 92980065U;
	uint8_t x4963 = 61U;
	volatile uint8_t x4964 = 4U;
	uint32_t t87 = 22877U;

	t87 = (x4961+((x4962^x4963)<<x4964));

	if (t87 != 1487680959U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4985 = 4U;
	static int64_t x4986 = 123048510LL;
	volatile int32_t x4987 = 0;
	int8_t x4988 = 18;
	int64_t t88 = 206LL;

	t88 = (x4985+((x4986^x4987)<<x4988));

	if (t88 != 32256428605444LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x5013 = INT8_MIN;
	int64_t x5014 = 17LL;
	uint64_t x5015 = 19317541LLU;
	static volatile uint16_t x5016 = 24U;
	volatile uint64_t t89 = 69619LLU;

	t89 = (x5013+((x5014^x5015)<<x5016));

	if (t89 != 324094809603968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5018 = -5496LL;
	uint32_t x5020 = 5U;
	static int64_t t90 = -166628LL;

	t90 = (x5017+((x5018^x5019)<<x5020));

	if (t90 != 237823LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5117 = 64576407LLU;
	static int64_t x5118 = 407838584522LL;
	int16_t x5119 = 26;
	volatile int8_t x5120 = 1;

	t91 = (x5117+((x5118^x5119)<<x5120));

	if (t91 != 815741745463LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5174 = -79388;
	uint64_t x5175 = 423LLU;
	int32_t x5176 = 4;
	uint64_t t92 = 277256325059439212LLU;

	t92 = (x5173+((x5174^x5175)<<x5176));

	if (t92 != 18446744073708274737LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x5278 = 416196168921379LLU;
	volatile uint8_t x5279 = 14U;
	volatile uint64_t t93 = 328713763LLU;

	t93 = (x5277+((x5278^x5279)<<x5280));

	if (t93 != 416196351118073LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5301 = -57833463217425117LL;
	uint8_t x5302 = 4U;
	static uint16_t x5303 = 2U;
	volatile int64_t t94 = -2719LL;

	t94 = (x5301+((x5302^x5303)<<x5304));

	if (t94 != -57833463217425021LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5337 = 27910U;
	static uint32_t x5338 = 162U;
	uint16_t x5339 = 11U;
	uint8_t x5340 = 1U;
	static uint32_t t95 = 21U;

	t95 = (x5337+((x5338^x5339)<<x5340));

	if (t95 != 28248U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5389 = UINT32_MAX;
	static uint64_t x5390 = 583466088134677807LLU;
	int32_t x5391 = 3718;
	uint64_t t96 = 2965070528LLU;

	t96 = (x5389+((x5390^x5391)<<x5392));

	if (t96 != 4667728709372403015LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x5554 = INT16_MIN;
	uint16_t x5556 = 0U;

	t97 = (x5553+((x5554^x5555)<<x5556));

	if (t97 != 4294934561U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5642 = UINT16_MAX;
	volatile uint16_t x5644 = 5U;
	volatile int64_t t98 = 1113925LL;

	t98 = (x5641+((x5642^x5643)<<x5644));

	if (t98 != -1211262911734244LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5657 = 3U;
	int8_t x5658 = -1;
	volatile uint8_t x5660 = 32U;
	uint64_t t99 = 101213279918LLU;

	t99 = (x5657+((x5658^x5659)<<x5660));

	if (t99 != 18190191718475759619LLU) { NG(); } else { ; }
	
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

