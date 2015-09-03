#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x41 = 6U;
volatile int16_t x44 = 13;
volatile int16_t x85 = INT16_MIN;
uint8_t x241 = UINT8_MAX;
int32_t x242 = INT32_MAX;
uint16_t x376 = 7U;
int16_t x380 = 1;
int8_t x440 = 0;
volatile int8_t x456 = 1;
int16_t x713 = 631;
static uint64_t t9 = 2064303LLU;
uint32_t x758 = 232U;
static int32_t t10 = -556;
uint16_t x800 = 1U;
static volatile int32_t t12 = 487;
int32_t t13 = 97397199;
int64_t x941 = INT64_MAX;
uint32_t x943 = 620U;
int32_t x1025 = -1;
uint64_t x1027 = 57LLU;
uint16_t x1162 = 442U;
int32_t x1326 = INT32_MIN;
volatile uint64_t x1328 = 2LLU;
int16_t x1464 = 28;
int32_t t23 = 1446158;
static int32_t x1693 = -926112;
volatile uint64_t x1736 = 6LLU;
int8_t x1750 = INT8_MIN;
uint64_t t28 = 27LLU;
int16_t x1839 = INT16_MIN;
static int32_t x1925 = INT32_MIN;
uint64_t x1926 = 218235698822876LLU;
int16_t x1927 = INT16_MIN;
static volatile int32_t t31 = -32808729;
int16_t x2013 = INT16_MAX;
volatile uint8_t x2126 = UINT8_MAX;
static int16_t x2161 = -1;
int16_t x2162 = -1;
int16_t x2197 = -23;
static volatile int32_t x2457 = 926285438;
int16_t x2497 = -1;
volatile int16_t x2498 = -61;
int8_t x2499 = -33;
volatile int64_t t41 = -1054675381177LL;
volatile uint8_t x2700 = 14U;
int64_t t47 = 5LL;
int64_t x2999 = -1LL;
volatile int64_t t48 = 4959634LL;
uint64_t x3118 = 6308816472LLU;
volatile int32_t t52 = -857;
int32_t x3396 = 1;
uint64_t t55 = 449625LLU;
uint16_t x3405 = 948U;
uint16_t x3406 = UINT16_MAX;
uint64_t x3407 = 40119189586LLU;
uint64_t t56 = 5LLU;
static int16_t x3440 = 3;
static int8_t x3559 = -32;
int8_t x3571 = -2;
volatile int32_t x3573 = INT32_MIN;
int64_t t61 = -1011482LL;
uint8_t x3672 = 0U;
int64_t x3679 = -1LL;
uint32_t t65 = 2039U;
static volatile uint8_t x3816 = 3U;
static volatile int64_t x3898 = INT64_MIN;
int16_t x3900 = 3;
int32_t x3914 = INT32_MIN;
uint64_t x3915 = 91196496696LLU;
static uint64_t t69 = 42408891632LLU;
volatile uint16_t x3997 = UINT16_MAX;
volatile int16_t x3998 = 122;
uint8_t x4012 = 5U;
volatile int32_t x4028 = 1;
int32_t t72 = -29;
static int32_t x4105 = 2190900;
uint32_t x4153 = UINT32_MAX;
uint64_t x4209 = 87398641992914142LLU;
static int32_t x4210 = -514562;
static volatile uint32_t t76 = 376695U;
static int32_t x4397 = -1;
volatile uint64_t x4399 = 766155237627163002LLU;
int16_t x4717 = 2;
int32_t x4744 = 0;
uint16_t x4761 = 3U;
volatile int32_t t83 = -117465404;
int32_t x4785 = INT32_MAX;
uint64_t x4788 = 0LLU;
int64_t x4801 = INT64_MIN;
int32_t x4802 = INT32_MAX;
volatile int32_t t88 = -6742309;
int64_t x4999 = -1LL;
static int64_t x5137 = 870431524LL;
static uint64_t x5139 = 323660892078LLU;
static uint16_t x5149 = UINT16_MAX;
int8_t x5168 = 6;
int8_t x5416 = 0;
uint32_t x5591 = UINT32_MAX;
int8_t x5639 = -1;
int32_t t98 = -2149;
int32_t x5689 = 106092;
int64_t x5690 = 0LL;
static int32_t t99 = -8;


void f0(void) {
	int16_t x42 = INT16_MIN;
	int8_t x43 = -1;
	volatile int32_t t0 = -471440;

	t0 = (((x41<=x42)-x43)<<x44);

	if (t0 != 8192) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x86 = 57344321LL;
	int16_t x87 = -351;
	volatile uint16_t x88 = 1U;
	volatile int32_t t1 = -236519;

	t1 = (((x85<=x86)-x87)<<x88);

	if (t1 != 704) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int64_t x122 = 170782411442LL;
	int8_t x123 = -1;
	uint8_t x124 = 8U;
	volatile int32_t t2 = 5093;

	t2 = (((x121<=x122)-x123)<<x124);

	if (t2 != 512) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x237 = 126386705U;
	int16_t x238 = 2;
	volatile int8_t x239 = INT8_MIN;
	uint16_t x240 = 0U;
	int32_t t3 = -1;

	t3 = (((x237<=x238)-x239)<<x240);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x243 = 13654LLU;
	volatile uint16_t x244 = 8U;
	volatile uint64_t t4 = 300748880496295777LLU;

	t4 = (((x241<=x242)-x243)<<x244);

	if (t4 != 18446744073706056448LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MAX;
	int16_t x375 = -3;
	int32_t t5 = -533552573;

	t5 = (((x373<=x374)-x375)<<x376);

	if (t5 != 512) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x377 = 56;
	int16_t x378 = INT16_MAX;
	uint64_t x379 = 56LLU;
	uint64_t t6 = 148LLU;

	t6 = (((x377<=x378)-x379)<<x380);

	if (t6 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MIN;
	static int32_t x439 = -1;
	volatile int32_t t7 = 257083286;

	t7 = (((x437<=x438)-x439)<<x440);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x453 = -1;
	int64_t x454 = INT64_MAX;
	uint64_t x455 = 1070207692LLU;
	uint64_t t8 = 51836082079929908LLU;

	t8 = (((x453<=x454)-x455)<<x456);

	if (t8 != 18446744071569136234LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x714 = UINT16_MAX;
	static uint64_t x715 = 194806257081874361LLU;
	uint32_t x716 = 4U;

	t9 = (((x713<=x714)-x715)<<x716);

	if (t9 != 15329843960399561856LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x757 = INT32_MIN;
	int16_t x759 = -1;
	uint64_t x760 = 0LLU;

	t10 = (((x757<=x758)-x759)<<x760);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x781 = UINT32_MAX;
	volatile uint8_t x782 = 40U;
	volatile uint32_t x783 = UINT32_MAX;
	volatile int8_t x784 = 1;
	uint32_t t11 = 16U;

	t11 = (((x781<=x782)-x783)<<x784);

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x797 = INT16_MIN;
	uint32_t x798 = 503788U;
	static volatile int8_t x799 = -1;

	t12 = (((x797<=x798)-x799)<<x800);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x845 = INT16_MIN;
	int64_t x846 = 11594LL;
	volatile int16_t x847 = -1;
	int8_t x848 = 25;

	t13 = (((x845<=x846)-x847)<<x848);

	if (t13 != 67108864) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x853 = 64716U;
	static volatile int16_t x854 = INT16_MIN;
	static volatile int8_t x855 = INT8_MIN;
	uint8_t x856 = 7U;
	volatile int32_t t14 = 345976;

	t14 = (((x853<=x854)-x855)<<x856);

	if (t14 != 16512) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x857 = 11U;
	int32_t x858 = 34320;
	volatile int16_t x859 = -5;
	static volatile uint8_t x860 = 4U;
	volatile int32_t t15 = -56;

	t15 = (((x857<=x858)-x859)<<x860);

	if (t15 != 96) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x869 = INT32_MIN;
	int32_t x870 = 702;
	int64_t x871 = -1LL;
	static uint8_t x872 = 2U;
	static volatile int64_t t16 = 3275681561LL;

	t16 = (((x869<=x870)-x871)<<x872);

	if (t16 != 8LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x942 = INT8_MAX;
	uint16_t x944 = 25U;
	uint32_t t17 = 295601198U;

	t17 = (((x941<=x942)-x943)<<x944);

	if (t17 != 671088640U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x973 = INT64_MIN;
	int16_t x974 = 1;
	int32_t x975 = -1;
	volatile uint16_t x976 = 0U;
	int32_t t18 = 68364;

	t18 = (((x973<=x974)-x975)<<x976);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1026 = 181LLU;
	uint32_t x1028 = 1U;
	volatile uint64_t t19 = 6390287643LLU;

	t19 = (((x1025<=x1026)-x1027)<<x1028);

	if (t19 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1161 = 13879654100970LLU;
	uint32_t x1163 = 1769U;
	int8_t x1164 = 3;
	volatile uint32_t t20 = 91222515U;

	t20 = (((x1161<=x1162)-x1163)<<x1164);

	if (t20 != 4294953144U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1169 = 1U;
	int32_t x1170 = -1;
	static int8_t x1171 = -1;
	volatile uint8_t x1172 = 0U;
	volatile int32_t t21 = 23947;

	t21 = (((x1169<=x1170)-x1171)<<x1172);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1325 = -1322;
	uint32_t x1327 = 2U;
	uint32_t t22 = 739621577U;

	t22 = (((x1325<=x1326)-x1327)<<x1328);

	if (t22 != 4294967288U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1461 = -1;
	volatile uint64_t x1462 = 4166763792LLU;
	int16_t x1463 = -1;

	t23 = (((x1461<=x1462)-x1463)<<x1464);

	if (t23 != 268435456) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1605 = UINT8_MAX;
	int32_t x1606 = INT32_MIN;
	uint64_t x1607 = 1048187LLU;
	static uint32_t x1608 = 3U;
	static volatile uint64_t t24 = 162644126LLU;

	t24 = (((x1605<=x1606)-x1607)<<x1608);

	if (t24 != 18446744073701166120LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1694 = -1;
	uint32_t x1695 = UINT32_MAX;
	int64_t x1696 = 2LL;
	static uint32_t t25 = 35119U;

	t25 = (((x1693<=x1694)-x1695)<<x1696);

	if (t25 != 8U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1733 = 0U;
	int8_t x1734 = -1;
	volatile uint64_t x1735 = UINT64_MAX;
	uint64_t t26 = 4055537LLU;

	t26 = (((x1733<=x1734)-x1735)<<x1736);

	if (t26 != 64LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1745 = 36U;
	uint8_t x1746 = 64U;
	int16_t x1747 = INT16_MIN;
	int8_t x1748 = 8;
	volatile int32_t t27 = 4448;

	t27 = (((x1745<=x1746)-x1747)<<x1748);

	if (t27 != 8388864) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1749 = UINT32_MAX;
	uint64_t x1751 = 5646583750752891LLU;
	uint8_t x1752 = 2U;

	t28 = (((x1749<=x1750)-x1751)<<x1752);

	if (t28 != 18424157738706540052LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1785 = UINT16_MAX;
	uint64_t x1786 = 70818248124LLU;
	static int64_t x1787 = -1LL;
	uint16_t x1788 = 2U;
	int64_t t29 = -1096943366570LL;

	t29 = (((x1785<=x1786)-x1787)<<x1788);

	if (t29 != 8LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1837 = 6323;
	uint32_t x1838 = UINT32_MAX;
	uint16_t x1840 = 0U;
	volatile int32_t t30 = 11975;

	t30 = (((x1837<=x1838)-x1839)<<x1840);

	if (t30 != 32769) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1928 = 4;

	t31 = (((x1925<=x1926)-x1927)<<x1928);

	if (t31 != 524288) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2014 = 526U;
	int64_t x2015 = -1LL;
	uint8_t x2016 = 0U;
	int64_t t32 = -59887LL;

	t32 = (((x2013<=x2014)-x2015)<<x2016);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x2125 = -325692630;
	volatile int64_t x2127 = -1LL;
	int16_t x2128 = 1;
	int64_t t33 = 1961778431LL;

	t33 = (((x2125<=x2126)-x2127)<<x2128);

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2163 = -184;
	uint8_t x2164 = 3U;
	volatile int32_t t34 = -178;

	t34 = (((x2161<=x2162)-x2163)<<x2164);

	if (t34 != 1480) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2198 = 320282576LLU;
	int8_t x2199 = -17;
	uint8_t x2200 = 16U;
	static volatile int32_t t35 = -1;

	t35 = (((x2197<=x2198)-x2199)<<x2200);

	if (t35 != 1114112) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2325 = INT8_MIN;
	uint8_t x2326 = 10U;
	uint32_t x2327 = 22971573U;
	static int8_t x2328 = 1;
	uint32_t t36 = 85035U;

	t36 = (((x2325<=x2326)-x2327)<<x2328);

	if (t36 != 4249024152U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2458 = -4LL;
	uint16_t x2459 = 0U;
	volatile uint8_t x2460 = 1U;
	int32_t t37 = -1012977;

	t37 = (((x2457<=x2458)-x2459)<<x2460);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2500 = 2;
	volatile int32_t t38 = 363344;

	t38 = (((x2497<=x2498)-x2499)<<x2500);

	if (t38 != 132) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2525 = -526LL;
	uint16_t x2526 = 15729U;
	uint32_t x2527 = UINT32_MAX;
	int16_t x2528 = 6;
	uint32_t t39 = 534049335U;

	t39 = (((x2525<=x2526)-x2527)<<x2528);

	if (t39 != 128U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2629 = -1;
	int8_t x2630 = INT8_MAX;
	static volatile uint64_t x2631 = 6LLU;
	static volatile uint64_t x2632 = 4LLU;
	static volatile uint64_t t40 = 25436547966896LLU;

	t40 = (((x2629<=x2630)-x2631)<<x2632);

	if (t40 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2673 = INT64_MAX;
	static uint8_t x2674 = 80U;
	int64_t x2675 = -1LL;
	uint8_t x2676 = 2U;

	t41 = (((x2673<=x2674)-x2675)<<x2676);

	if (t41 != 4LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2697 = INT8_MIN;
	static uint64_t x2698 = 59381133779LLU;
	volatile uint64_t x2699 = 16699378929831714LLU;
	volatile uint64_t t42 = 1574614328715LLU;

	t42 = (((x2697<=x2698)-x2699)<<x2700);

	if (t42 != 3098536719280472064LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2701 = INT8_MIN;
	int32_t x2702 = INT32_MAX;
	uint64_t x2703 = 51204096784026LLU;
	volatile uint8_t x2704 = 5U;
	volatile uint64_t t43 = 825LLU;

	t43 = (((x2701<=x2702)-x2703)<<x2704);

	if (t43 != 18445105542612462816LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2717 = UINT16_MAX;
	int16_t x2718 = INT16_MIN;
	static uint64_t x2719 = 1002295930468LLU;
	int32_t x2720 = 1;
	volatile uint64_t t44 = 60078LLU;

	t44 = (((x2717<=x2718)-x2719)<<x2720);

	if (t44 != 18446742069117690680LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2809 = INT16_MAX;
	uint32_t x2810 = 2178U;
	int64_t x2811 = -174998179LL;
	volatile uint8_t x2812 = 0U;
	static volatile int64_t t45 = -115775LL;

	t45 = (((x2809<=x2810)-x2811)<<x2812);

	if (t45 != 174998179LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2901 = UINT32_MAX;
	static int64_t x2902 = INT64_MAX;
	int8_t x2903 = INT8_MIN;
	uint64_t x2904 = 8LLU;
	volatile int32_t t46 = -213008277;

	t46 = (((x2901<=x2902)-x2903)<<x2904);

	if (t46 != 33024) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2929 = UINT64_MAX;
	static uint64_t x2930 = 1485016931870LLU;
	int64_t x2931 = -639146977082LL;
	int16_t x2932 = 0;

	t47 = (((x2929<=x2930)-x2931)<<x2932);

	if (t47 != 639146977082LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2997 = INT16_MIN;
	volatile int32_t x2998 = INT32_MIN;
	uint8_t x3000 = 9U;

	t48 = (((x2997<=x2998)-x2999)<<x3000);

	if (t48 != 512LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3057 = INT64_MIN;
	volatile uint32_t x3058 = 16U;
	static uint32_t x3059 = 1170816749U;
	static uint8_t x3060 = 1U;
	uint32_t t49 = 1521U;

	t49 = (((x3057<=x3058)-x3059)<<x3060);

	if (t49 != 1953333800U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3097 = -1;
	static int8_t x3098 = -1;
	int64_t x3099 = -18696462610016LL;
	int8_t x3100 = 1;
	int64_t t50 = 5948381698LL;

	t50 = (((x3097<=x3098)-x3099)<<x3100);

	if (t50 != 37392925220034LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3117 = 7U;
	int64_t x3119 = -1LL;
	int8_t x3120 = 0;
	int64_t t51 = -113292784518215LL;

	t51 = (((x3117<=x3118)-x3119)<<x3120);

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3197 = INT16_MIN;
	int64_t x3198 = INT64_MIN;
	volatile int8_t x3199 = 0;
	static uint32_t x3200 = 26U;

	t52 = (((x3197<=x3198)-x3199)<<x3200);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x3225 = 388908860428515LLU;
	static int32_t x3226 = -20936463;
	volatile int8_t x3227 = INT8_MIN;
	int32_t x3228 = 2;
	volatile int32_t t53 = -3;

	t53 = (((x3225<=x3226)-x3227)<<x3228);

	if (t53 != 516) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3253 = -190;
	int8_t x3254 = INT8_MIN;
	volatile int8_t x3255 = INT8_MIN;
	volatile uint8_t x3256 = 8U;
	int32_t t54 = -167;

	t54 = (((x3253<=x3254)-x3255)<<x3256);

	if (t54 != 33024) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x3393 = UINT8_MAX;
	int8_t x3394 = 0;
	uint64_t x3395 = UINT64_MAX;

	t55 = (((x3393<=x3394)-x3395)<<x3396);

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3408 = 1U;

	t56 = (((x3405<=x3406)-x3407)<<x3408);

	if (t56 != 18446743993471172446LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3437 = INT32_MAX;
	uint8_t x3438 = 0U;
	int8_t x3439 = INT8_MIN;
	volatile int32_t t57 = -13;

	t57 = (((x3437<=x3438)-x3439)<<x3440);

	if (t57 != 1024) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3557 = -1;
	static int16_t x3558 = 1;
	uint8_t x3560 = 25U;
	int32_t t58 = -26;

	t58 = (((x3557<=x3558)-x3559)<<x3560);

	if (t58 != 1107296256) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3569 = INT8_MIN;
	volatile int64_t x3570 = -398011682622703097LL;
	uint8_t x3572 = 1U;
	volatile int32_t t59 = 0;

	t59 = (((x3569<=x3570)-x3571)<<x3572);

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3574 = INT8_MIN;
	static uint32_t x3575 = UINT32_MAX;
	uint8_t x3576 = 0U;
	volatile uint32_t t60 = 20U;

	t60 = (((x3573<=x3574)-x3575)<<x3576);

	if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3657 = INT16_MAX;
	uint32_t x3658 = 4318360U;
	int64_t x3659 = -2190815367452LL;
	int16_t x3660 = 0;

	t61 = (((x3657<=x3658)-x3659)<<x3660);

	if (t61 != 2190815367453LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3669 = INT32_MAX;
	int64_t x3670 = INT64_MIN;
	uint64_t x3671 = UINT64_MAX;
	uint64_t t62 = 1LLU;

	t62 = (((x3669<=x3670)-x3671)<<x3672);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3677 = INT64_MIN;
	uint32_t x3678 = 365U;
	uint16_t x3680 = 29U;
	volatile int64_t t63 = 2292361690684936848LL;

	t63 = (((x3677<=x3678)-x3679)<<x3680);

	if (t63 != 1073741824LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3769 = INT8_MIN;
	static uint64_t x3770 = 5941730719LLU;
	static volatile uint32_t x3771 = UINT32_MAX;
	uint16_t x3772 = 3U;
	uint32_t t64 = 1061314U;

	t64 = (((x3769<=x3770)-x3771)<<x3772);

	if (t64 != 8U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3777 = 1;
	int8_t x3778 = INT8_MIN;
	uint32_t x3779 = 2U;
	static uint64_t x3780 = 2LLU;

	t65 = (((x3777<=x3778)-x3779)<<x3780);

	if (t65 != 4294967288U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x3813 = 27U;
	int16_t x3814 = 27;
	static volatile int64_t x3815 = -147097LL;
	int64_t t66 = 1622579LL;

	t66 = (((x3813<=x3814)-x3815)<<x3816);

	if (t66 != 1176784LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3893 = -1LL;
	volatile int8_t x3894 = -1;
	uint64_t x3895 = 7419357514448LLU;
	int64_t x3896 = 1LL;
	uint64_t t67 = 47543LLU;

	t67 = (((x3893<=x3894)-x3895)<<x3896);

	if (t67 != 18446729234994522722LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3897 = UINT16_MAX;
	uint32_t x3899 = UINT32_MAX;
	volatile uint32_t t68 = 8U;

	t68 = (((x3897<=x3898)-x3899)<<x3900);

	if (t68 != 8U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x3913 = INT64_MIN;
	int16_t x3916 = 1;

	t69 = (((x3913<=x3914)-x3915)<<x3916);

	if (t69 != 18446743891316558226LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3999 = -1LL;
	int8_t x4000 = 1;
	volatile int64_t t70 = -239375LL;

	t70 = (((x3997<=x3998)-x3999)<<x4000);

	if (t70 != 2LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x4009 = INT64_MIN;
	static uint16_t x4010 = 175U;
	uint32_t x4011 = UINT32_MAX;
	uint32_t t71 = 696397464U;

	t71 = (((x4009<=x4010)-x4011)<<x4012);

	if (t71 != 64U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4025 = INT64_MIN;
	int32_t x4026 = 2131;
	uint16_t x4027 = 0U;

	t72 = (((x4025<=x4026)-x4027)<<x4028);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4106 = 44921654331950140LLU;
	int8_t x4107 = -39;
	uint8_t x4108 = 1U;
	static volatile int32_t t73 = -10;

	t73 = (((x4105<=x4106)-x4107)<<x4108);

	if (t73 != 80) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4154 = 44949414604213575LL;
	static int8_t x4155 = -1;
	static uint32_t x4156 = 1U;
	int32_t t74 = 527234;

	t74 = (((x4153<=x4154)-x4155)<<x4156);

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4189 = 10550LLU;
	uint16_t x4190 = UINT16_MAX;
	int16_t x4191 = INT16_MIN;
	uint16_t x4192 = 7U;
	int32_t t75 = -11477;

	t75 = (((x4189<=x4190)-x4191)<<x4192);

	if (t75 != 4194432) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4211 = 0U;
	volatile uint8_t x4212 = 28U;

	t76 = (((x4209<=x4210)-x4211)<<x4212);

	if (t76 != 268435456U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4233 = 34U;
	int16_t x4234 = INT16_MIN;
	static int16_t x4235 = -1;
	int64_t x4236 = 7LL;
	int32_t t77 = 3422960;

	t77 = (((x4233<=x4234)-x4235)<<x4236);

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x4398 = INT32_MAX;
	static uint8_t x4400 = 0U;
	volatile uint64_t t78 = 839945714178217LLU;

	t78 = (((x4397<=x4398)-x4399)<<x4400);

	if (t78 != 17680588836082388615LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4697 = 250554LLU;
	static int16_t x4698 = INT16_MIN;
	volatile int8_t x4699 = INT8_MIN;
	volatile uint16_t x4700 = 2U;
	volatile int32_t t79 = 15249;

	t79 = (((x4697<=x4698)-x4699)<<x4700);

	if (t79 != 516) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x4718 = 6U;
	uint64_t x4719 = UINT64_MAX;
	volatile uint8_t x4720 = 0U;
	uint64_t t80 = 240804909956LLU;

	t80 = (((x4717<=x4718)-x4719)<<x4720);

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4725 = -1;
	int64_t x4726 = 62891LL;
	int16_t x4727 = -3;
	int8_t x4728 = 6;
	int32_t t81 = -337387;

	t81 = (((x4725<=x4726)-x4727)<<x4728);

	if (t81 != 256) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x4741 = 13U;
	volatile int64_t x4742 = -22461185940222LL;
	static int8_t x4743 = INT8_MIN;
	int32_t t82 = 59;

	t82 = (((x4741<=x4742)-x4743)<<x4744);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4762 = -915858990395770974LL;
	static int32_t x4763 = -1262;
	uint8_t x4764 = 1U;

	t83 = (((x4761<=x4762)-x4763)<<x4764);

	if (t83 != 2524) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4773 = INT32_MAX;
	int16_t x4774 = INT16_MIN;
	uint64_t x4775 = UINT64_MAX;
	uint64_t x4776 = 16LLU;
	uint64_t t84 = 3053LLU;

	t84 = (((x4773<=x4774)-x4775)<<x4776);

	if (t84 != 65536LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4786 = 0;
	int64_t x4787 = -1LL;
	static volatile int64_t t85 = -184LL;

	t85 = (((x4785<=x4786)-x4787)<<x4788);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4803 = -1LL;
	uint8_t x4804 = 0U;
	volatile int64_t t86 = -3186780932LL;

	t86 = (((x4801<=x4802)-x4803)<<x4804);

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4845 = INT8_MAX;
	static volatile int16_t x4846 = INT16_MIN;
	volatile uint32_t x4847 = 83553881U;
	uint8_t x4848 = 3U;
	volatile uint32_t t87 = 1953624U;

	t87 = (((x4845<=x4846)-x4847)<<x4848);

	if (t87 != 3626536248U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4853 = 14289380U;
	uint8_t x4854 = 1U;
	int8_t x4855 = -1;
	uint8_t x4856 = 1U;

	t88 = (((x4853<=x4854)-x4855)<<x4856);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x4913 = UINT64_MAX;
	static volatile int16_t x4914 = -759;
	int16_t x4915 = -9;
	static volatile int8_t x4916 = 1;
	int32_t t89 = 626;

	t89 = (((x4913<=x4914)-x4915)<<x4916);

	if (t89 != 18) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4949 = 1261775999U;
	int32_t x4950 = -6689862;
	static int8_t x4951 = INT8_MIN;
	uint8_t x4952 = 19U;
	volatile int32_t t90 = -53239694;

	t90 = (((x4949<=x4950)-x4951)<<x4952);

	if (t90 != 67633152) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x4997 = -1;
	volatile int16_t x4998 = INT16_MAX;
	volatile int16_t x5000 = 3;
	int64_t t91 = -34080300914821036LL;

	t91 = (((x4997<=x4998)-x4999)<<x5000);

	if (t91 != 16LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x5138 = INT32_MAX;
	uint16_t x5140 = 11U;
	uint64_t t92 = 46838068272491909LLU;

	t92 = (((x5137<=x5138)-x5139)<<x5140);

	if (t92 != 18446081216202577920LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5150 = INT64_MIN;
	int16_t x5151 = -1;
	int8_t x5152 = 5;
	int32_t t93 = 132142;

	t93 = (((x5149<=x5150)-x5151)<<x5152);

	if (t93 != 32) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5165 = -1;
	uint32_t x5166 = UINT32_MAX;
	int8_t x5167 = -1;
	volatile int32_t t94 = 29253;

	t94 = (((x5165<=x5166)-x5167)<<x5168);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5413 = INT8_MIN;
	uint64_t x5414 = UINT64_MAX;
	int16_t x5415 = INT16_MIN;
	volatile int32_t t95 = 860729;

	t95 = (((x5413<=x5414)-x5415)<<x5416);

	if (t95 != 32769) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5473 = 5U;
	uint64_t x5474 = UINT64_MAX;
	uint32_t x5475 = 135875U;
	volatile uint8_t x5476 = 15U;
	uint32_t t96 = 2U;

	t96 = (((x5473<=x5474)-x5475)<<x5476);

	if (t96 != 4137615360U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5589 = 11U;
	int8_t x5590 = INT8_MIN;
	uint16_t x5592 = 0U;
	volatile uint32_t t97 = 512462U;

	t97 = (((x5589<=x5590)-x5591)<<x5592);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5637 = -1;
	int32_t x5638 = 117149465;
	static uint8_t x5640 = 1U;

	t98 = (((x5637<=x5638)-x5639)<<x5640);

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x5691 = INT8_MIN;
	volatile uint32_t x5692 = 2U;

	t99 = (((x5689<=x5690)-x5691)<<x5692);

	if (t99 != 512) { NG(); } else { ; }
	
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

