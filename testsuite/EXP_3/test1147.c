#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x483 = INT32_MAX;
static volatile uint16_t x607 = 7128U;
uint8_t x723 = 5U;
uint8_t x724 = 15U;
int8_t x731 = INT8_MAX;
static uint8_t x787 = 3U;
uint8_t x971 = 64U;
int32_t t12 = -19660;
uint32_t x974 = 482869U;
uint64_t x1063 = 15277125313612LLU;
static uint64_t t16 = 53245063154LLU;
int32_t x1165 = 14;
uint32_t x1193 = 997U;
uint64_t x1194 = 67457430313632372LLU;
volatile int64_t x1214 = -828029581043590024LL;
static int8_t x1215 = 7;
int8_t x1315 = 0;
static volatile uint64_t t22 = 10063LLU;
uint64_t x1418 = UINT64_MAX;
uint64_t t23 = 6584462839954244331LLU;
volatile int64_t t25 = 125LL;
uint8_t x1736 = 3U;
int8_t x1770 = INT8_MIN;
volatile int8_t x1794 = -26;
uint32_t x1795 = 59U;
uint16_t x1805 = UINT16_MAX;
volatile int16_t x1833 = -12648;
volatile int8_t x1834 = -1;
static volatile uint64_t t32 = 44842034848697234LLU;
int32_t x1927 = INT32_MAX;
uint8_t x2052 = 2U;
volatile uint16_t x2240 = 14U;
int32_t x2329 = 80044;
volatile int16_t x2540 = 1;
uint16_t x2658 = UINT16_MAX;
static int32_t x2659 = INT32_MAX;
uint16_t x2672 = 26U;
uint64_t x2846 = 13LLU;
static int16_t x2910 = 40;
uint8_t x3032 = 0U;
uint8_t x3042 = 81U;
volatile uint64_t x3121 = 81LLU;
int32_t x3132 = 4;
static int8_t x3136 = 10;
uint32_t t50 = 281U;
static uint32_t x3211 = 88683U;
static int32_t x3212 = 15;
uint8_t x3226 = UINT8_MAX;
static int64_t t53 = -2758561805LL;
int64_t x3285 = INT64_MIN;
int64_t x3286 = INT64_MIN;
static int16_t x3287 = 262;
int64_t x3365 = 794407418823LL;
uint8_t x3651 = 13U;
int8_t x3721 = INT8_MIN;
static volatile int8_t x3729 = INT8_MAX;
int8_t x3731 = 0;
int32_t t61 = 25;
int64_t x3810 = -1LL;
int64_t t62 = 16762797173989LL;
static int8_t x3837 = INT8_MIN;
volatile uint8_t x3840 = 17U;
uint64_t x3847 = UINT64_MAX;
static uint64_t x3885 = 6925410594LLU;
volatile uint64_t t65 = 20237326405462941LLU;
int16_t x4022 = INT16_MIN;
uint8_t x4024 = 0U;
static int8_t x4068 = 2;
volatile int64_t t72 = -17791363502LL;
uint32_t x4499 = 557202554U;
uint16_t x4623 = 1318U;
uint32_t x4704 = 1U;
int16_t x4730 = INT16_MIN;
uint64_t x4735 = 1892326254184698436LLU;
int8_t x4742 = -1;
uint32_t x4743 = 373162396U;
int16_t x4744 = 4;
volatile uint32_t t82 = 26705130U;
int64_t x4918 = INT64_MAX;
int16_t x4920 = 1;
uint32_t x4938 = UINT32_MAX;
volatile uint32_t x4939 = 2960U;
int16_t x4940 = 0;
uint32_t x4983 = UINT32_MAX;
volatile int64_t t91 = 4692LL;
uint64_t x5567 = 1609906998318LLU;
int16_t x5585 = INT16_MIN;
static int32_t x5614 = -2;
int32_t x5621 = 6937625;
volatile int8_t x5637 = -1;
int8_t x5639 = 14;
volatile uint8_t x5640 = 8U;


void f0(void) {
	uint8_t x61 = UINT8_MAX;
	static int16_t x62 = -1395;
	uint64_t x63 = 23820745185LLU;
	int16_t x64 = 19;
	uint64_t t0 = 43842378792LLU;

	t0 = ((x61&x62)*(x63>>x64));

	if (t0 != 6406194LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x177 = -5;
	int16_t x178 = 4769;
	static uint32_t x179 = 1U;
	static int16_t x180 = 1;
	uint32_t t1 = 98051525U;

	t1 = ((x177&x178)*(x179>>x180));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x481 = INT16_MIN;
	volatile int32_t x482 = -61029;
	int8_t x484 = 30;
	static int32_t t2 = 3;

	t2 = ((x481&x482)*(x483>>x484));

	if (t2 != -65536) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x517 = 209426U;
	static int32_t x518 = 40;
	uint64_t x519 = 6254050793483723LLU;
	volatile uint8_t x520 = 9U;
	volatile uint64_t t3 = 1138LLU;

	t3 = ((x517&x518)*(x519>>x520));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x525 = 4108911438LLU;
	int64_t x526 = INT64_MIN;
	int8_t x527 = 1;
	static uint8_t x528 = 1U;
	uint64_t t4 = 1LLU;

	t4 = ((x525&x526)*(x527>>x528));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x585 = 0U;
	static int32_t x586 = -1364713;
	uint16_t x587 = 0U;
	uint64_t x588 = 21LLU;
	static int32_t t5 = -66930;

	t5 = ((x585&x586)*(x587>>x588));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x605 = -40;
	static uint64_t x606 = 548021584LLU;
	int8_t x608 = 0;
	volatile uint64_t t6 = 26805621LLU;

	t6 = ((x605&x606)*(x607>>x608));

	if (t6 != 3906297850752LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x701 = INT32_MAX;
	int32_t x702 = 88136;
	int32_t x703 = INT32_MAX;
	uint16_t x704 = 19U;
	volatile int32_t t7 = 121861;

	t7 = ((x701&x702)*(x703>>x704));

	if (t7 != 360916920) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x721 = -1;
	volatile uint32_t x722 = UINT32_MAX;
	uint32_t t8 = 70560456U;

	t8 = ((x721&x722)*(x723>>x724));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x729 = 5U;
	uint32_t x730 = 128235336U;
	uint32_t x732 = 2U;
	uint32_t t9 = 503U;

	t9 = ((x729&x730)*(x731>>x732));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x785 = -1;
	static int8_t x786 = 0;
	uint8_t x788 = 9U;
	int32_t t10 = 45;

	t10 = ((x785&x786)*(x787>>x788));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x877 = INT32_MIN;
	uint8_t x878 = 7U;
	int64_t x879 = 1385350627828LL;
	uint16_t x880 = 56U;
	volatile int64_t t11 = -6389261391620098LL;

	t11 = ((x877&x878)*(x879>>x880));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x969 = -1;
	int16_t x970 = INT16_MIN;
	static uint8_t x972 = 26U;

	t12 = ((x969&x970)*(x971>>x972));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x973 = 2171;
	uint8_t x975 = 25U;
	static uint16_t x976 = 16U;
	volatile uint32_t t13 = 2094541890U;

	t13 = ((x973&x974)*(x975>>x976));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1061 = INT64_MIN;
	volatile int64_t x1062 = -1LL;
	uint64_t x1064 = 63LLU;
	volatile uint64_t t14 = 6537LLU;

	t14 = ((x1061&x1062)*(x1063>>x1064));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1077 = 62356LL;
	static volatile int16_t x1078 = 11;
	static uint64_t x1079 = UINT64_MAX;
	uint64_t x1080 = 42LLU;
	uint64_t t15 = 1295LLU;

	t15 = ((x1077&x1078)*(x1079>>x1080));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1153 = 2U;
	volatile int8_t x1154 = INT8_MIN;
	uint64_t x1155 = 444306512061LLU;
	int32_t x1156 = 0;

	t16 = ((x1153&x1154)*(x1155>>x1156));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1166 = INT32_MIN;
	static int8_t x1167 = 0;
	volatile int8_t x1168 = 2;
	volatile int32_t t17 = -6315291;

	t17 = ((x1165&x1166)*(x1167>>x1168));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1195 = 0;
	int8_t x1196 = 0;
	volatile uint64_t t18 = 730LLU;

	t18 = ((x1193&x1194)*(x1195>>x1196));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1213 = 178LLU;
	uint16_t x1216 = 9U;
	static volatile uint64_t t19 = 63941434264051933LLU;

	t19 = ((x1213&x1214)*(x1215>>x1216));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1273 = 345317;
	int32_t x1274 = 1825;
	int64_t x1275 = INT64_MAX;
	uint16_t x1276 = 37U;
	volatile int64_t t20 = -26255455683LL;

	t20 = ((x1273&x1274)*(x1275>>x1276));

	if (t20 != 70934068191LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1313 = INT16_MIN;
	int32_t x1314 = INT32_MIN;
	volatile uint8_t x1316 = 15U;
	volatile int32_t t21 = -1;

	t21 = ((x1313&x1314)*(x1315>>x1316));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1349 = 3;
	volatile uint64_t x1350 = UINT64_MAX;
	static uint32_t x1351 = 1U;
	int8_t x1352 = 2;

	t22 = ((x1349&x1350)*(x1351>>x1352));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1417 = 61;
	volatile uint16_t x1419 = 61U;
	static int16_t x1420 = 0;

	t23 = ((x1417&x1418)*(x1419>>x1420));

	if (t23 != 3721LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1473 = -1;
	int8_t x1474 = INT8_MIN;
	int16_t x1475 = 1847;
	uint16_t x1476 = 1U;
	volatile int32_t t24 = 32855300;

	t24 = ((x1473&x1474)*(x1475>>x1476));

	if (t24 != -118144) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1557 = INT64_MIN;
	int16_t x1558 = 6836;
	int8_t x1559 = INT8_MAX;
	int32_t x1560 = 3;

	t25 = ((x1557&x1558)*(x1559>>x1560));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1733 = INT64_MAX;
	volatile int64_t x1734 = INT64_MIN;
	uint32_t x1735 = 2947108U;
	volatile int64_t t26 = 0LL;

	t26 = ((x1733&x1734)*(x1735>>x1736));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1769 = 117018LLU;
	uint32_t x1771 = UINT32_MAX;
	static volatile int64_t x1772 = 14LL;
	static uint64_t t27 = 38LLU;

	t27 = ((x1769&x1770)*(x1771>>x1772));

	if (t27 != 30668633856LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1793 = -2433;
	int8_t x1796 = 1;
	volatile uint32_t t28 = 26U;

	t28 = ((x1793&x1794)*(x1795>>x1796));

	if (t28 != 4294896014U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1806 = INT8_MIN;
	uint32_t x1807 = UINT32_MAX;
	uint8_t x1808 = 4U;
	uint32_t t29 = 7147375U;

	t29 = ((x1805&x1806)*(x1807>>x1808));

	if (t29 != 4294901888U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1835 = 671LL;
	int8_t x1836 = 0;
	volatile int64_t t30 = 793614192LL;

	t30 = ((x1833&x1834)*(x1835>>x1836));

	if (t30 != -8486808LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1849 = INT8_MIN;
	uint32_t x1850 = 7522404U;
	uint8_t x1851 = 37U;
	volatile int8_t x1852 = 10;
	uint32_t t31 = 8U;

	t31 = ((x1849&x1850)*(x1851>>x1852));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1909 = UINT16_MAX;
	int16_t x1910 = INT16_MIN;
	uint64_t x1911 = 1250196LLU;
	uint32_t x1912 = 13U;

	t32 = ((x1909&x1910)*(x1911>>x1912));

	if (t32 != 4980736LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x1925 = 1U;
	uint16_t x1926 = 29U;
	uint8_t x1928 = 0U;
	volatile int32_t t33 = INT32_MAX;

	t33 = ((x1925&x1926)*(x1927>>x1928));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2049 = UINT16_MAX;
	static int16_t x2050 = INT16_MIN;
	static uint8_t x2051 = UINT8_MAX;
	int32_t t34 = 27622;

	t34 = ((x2049&x2050)*(x2051>>x2052));

	if (t34 != 2064384) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2057 = -1LL;
	static int8_t x2058 = -1;
	volatile int8_t x2059 = 34;
	int8_t x2060 = 8;
	int64_t t35 = -64063029473772648LL;

	t35 = ((x2057&x2058)*(x2059>>x2060));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2073 = INT32_MIN;
	static uint16_t x2074 = 197U;
	uint16_t x2075 = 13U;
	uint16_t x2076 = 3U;
	int32_t t36 = -31327026;

	t36 = ((x2073&x2074)*(x2075>>x2076));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2237 = 2136;
	static int16_t x2238 = INT16_MIN;
	uint8_t x2239 = 1U;
	int32_t t37 = -12845;

	t37 = ((x2237&x2238)*(x2239>>x2240));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x2330 = INT32_MIN;
	volatile uint64_t x2331 = 2339212LLU;
	int32_t x2332 = 7;
	volatile uint64_t t38 = 130314291890974LLU;

	t38 = ((x2329&x2330)*(x2331>>x2332));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2537 = 18;
	int32_t x2538 = INT32_MIN;
	int32_t x2539 = 1;
	volatile int32_t t39 = -1;

	t39 = ((x2537&x2538)*(x2539>>x2540));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2641 = 11601775U;
	int8_t x2642 = INT8_MAX;
	uint32_t x2643 = 26971U;
	static uint32_t x2644 = 0U;
	uint32_t t40 = 1998U;

	t40 = ((x2641&x2642)*(x2643>>x2644));

	if (t40 != 2993781U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2657 = UINT8_MAX;
	uint8_t x2660 = 23U;
	int32_t t41 = -1974159;

	t41 = ((x2657&x2658)*(x2659>>x2660));

	if (t41 != 65025) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2669 = INT8_MAX;
	volatile int64_t x2670 = INT64_MIN;
	uint64_t x2671 = 265456857708LLU;
	uint64_t t42 = 255520LLU;

	t42 = ((x2669&x2670)*(x2671>>x2672));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2845 = INT64_MAX;
	int16_t x2847 = INT16_MAX;
	uint32_t x2848 = 8U;
	uint64_t t43 = 500LLU;

	t43 = ((x2845&x2846)*(x2847>>x2848));

	if (t43 != 1651LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2909 = UINT8_MAX;
	volatile uint8_t x2911 = 49U;
	uint8_t x2912 = 0U;
	volatile int32_t t44 = 1;

	t44 = ((x2909&x2910)*(x2911>>x2912));

	if (t44 != 1960) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x3029 = UINT8_MAX;
	int64_t x3030 = 97LL;
	static volatile int16_t x3031 = INT16_MAX;
	volatile int64_t t45 = 33583822859LL;

	t45 = ((x3029&x3030)*(x3031>>x3032));

	if (t45 != 3178399LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x3041 = INT64_MAX;
	uint16_t x3043 = UINT16_MAX;
	uint32_t x3044 = 14U;
	int64_t t46 = -501LL;

	t46 = ((x3041&x3042)*(x3043>>x3044));

	if (t46 != 243LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x3053 = 17350794LLU;
	int64_t x3054 = INT64_MIN;
	uint64_t x3055 = 194055898433LLU;
	int16_t x3056 = 13;
	static uint64_t t47 = 17555579475012LLU;

	t47 = ((x3053&x3054)*(x3055>>x3056));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3122 = -1LL;
	uint16_t x3123 = 390U;
	uint8_t x3124 = 30U;
	volatile uint64_t t48 = 85675451052LLU;

	t48 = ((x3121&x3122)*(x3123>>x3124));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3129 = UINT64_MAX;
	int64_t x3130 = INT64_MIN;
	static int16_t x3131 = INT16_MAX;
	uint64_t t49 = 301918137487LLU;

	t49 = ((x3129&x3130)*(x3131>>x3132));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x3133 = 6U;
	int32_t x3134 = INT32_MIN;
	uint32_t x3135 = 1048982U;

	t50 = ((x3133&x3134)*(x3135>>x3136));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3185 = -6;
	volatile int8_t x3186 = INT8_MIN;
	int32_t x3187 = 74154600;
	uint8_t x3188 = 22U;
	volatile int32_t t51 = -2819;

	t51 = ((x3185&x3186)*(x3187>>x3188));

	if (t51 != -2176) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3209 = -937;
	uint8_t x3210 = UINT8_MAX;
	static uint32_t t52 = 241142904U;

	t52 = ((x3209&x3210)*(x3211>>x3212));

	if (t52 != 174U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3225 = INT16_MIN;
	int64_t x3227 = INT64_MAX;
	static uint8_t x3228 = 14U;

	t53 = ((x3225&x3226)*(x3227>>x3228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3288 = 15U;
	int64_t t54 = -117744241230LL;

	t54 = ((x3285&x3286)*(x3287>>x3288));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3366 = INT16_MIN;
	uint64_t x3367 = 1451909648871740LLU;
	int16_t x3368 = 2;
	static uint64_t t55 = 630197990716996LLU;

	t55 = ((x3365&x3366)*(x3367>>x3368));

	if (t55 != 3381300977780981760LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3381 = INT8_MIN;
	static uint8_t x3382 = 47U;
	static volatile int16_t x3383 = 0;
	uint8_t x3384 = 26U;
	volatile int32_t t56 = 2;

	t56 = ((x3381&x3382)*(x3383>>x3384));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3525 = INT64_MAX;
	uint32_t x3526 = 3447U;
	volatile uint16_t x3527 = 25149U;
	uint16_t x3528 = 1U;
	volatile int64_t t57 = -24393LL;

	t57 = ((x3525&x3526)*(x3527>>x3528));

	if (t57 != 43342578LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3569 = INT32_MIN;
	uint64_t x3570 = 2189208104320564LLU;
	static uint64_t x3571 = 51849591343129166LLU;
	uint8_t x3572 = 16U;
	uint64_t t58 = 48506233LLU;

	t58 = ((x3569&x3570)*(x3571>>x3572));

	if (t58 != 12887599481796689920LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3649 = 1;
	volatile uint8_t x3650 = 82U;
	uint16_t x3652 = 3U;
	int32_t t59 = -7077235;

	t59 = ((x3649&x3650)*(x3651>>x3652));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3722 = -1287LL;
	volatile uint8_t x3723 = 4U;
	uint16_t x3724 = 4U;
	int64_t t60 = -204LL;

	t60 = ((x3721&x3722)*(x3723>>x3724));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3730 = INT8_MAX;
	volatile int32_t x3732 = 1;

	t61 = ((x3729&x3730)*(x3731>>x3732));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3809 = -2;
	volatile uint16_t x3811 = 14184U;
	uint8_t x3812 = 1U;

	t62 = ((x3809&x3810)*(x3811>>x3812));

	if (t62 != -14184LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3838 = INT16_MAX;
	int32_t x3839 = 0;
	int32_t t63 = 189476817;

	t63 = ((x3837&x3838)*(x3839>>x3840));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3845 = 12349U;
	int8_t x3846 = INT8_MIN;
	static uint16_t x3848 = 37U;
	uint64_t t64 = 50074524LLU;

	t64 = ((x3845&x3846)*(x3847>>x3848));

	if (t64 != 1649267429376LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x3886 = 131094248U;
	uint64_t x3887 = 31LLU;
	uint8_t x3888 = 29U;

	t65 = ((x3885&x3886)*(x3887>>x3888));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4021 = 47U;
	int8_t x4023 = INT8_MAX;
	static uint32_t t66 = 29763846U;

	t66 = ((x4021&x4022)*(x4023>>x4024));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4065 = INT32_MIN;
	uint32_t x4066 = 105169156U;
	uint8_t x4067 = 38U;
	uint32_t t67 = 140U;

	t67 = ((x4065&x4066)*(x4067>>x4068));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4149 = INT32_MAX;
	int8_t x4150 = -4;
	int8_t x4151 = 14;
	uint8_t x4152 = 21U;
	int32_t t68 = 227;

	t68 = ((x4149&x4150)*(x4151>>x4152));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4321 = -1LL;
	int8_t x4322 = -1;
	static uint8_t x4323 = UINT8_MAX;
	volatile int8_t x4324 = 7;
	static int64_t t69 = -30150654LL;

	t69 = ((x4321&x4322)*(x4323>>x4324));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4361 = INT16_MAX;
	static int64_t x4362 = -1LL;
	uint16_t x4363 = 187U;
	uint8_t x4364 = 13U;
	volatile int64_t t70 = 19709LL;

	t70 = ((x4361&x4362)*(x4363>>x4364));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4393 = 7102U;
	static int8_t x4394 = INT8_MIN;
	int16_t x4395 = INT16_MAX;
	static int8_t x4396 = 15;
	int32_t t71 = -37590018;

	t71 = ((x4393&x4394)*(x4395>>x4396));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4449 = -1;
	uint8_t x4450 = 29U;
	int64_t x4451 = 3333LL;
	int16_t x4452 = 3;

	t72 = ((x4449&x4450)*(x4451>>x4452));

	if (t72 != 12064LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4481 = -191415LL;
	int16_t x4482 = INT16_MAX;
	static uint16_t x4483 = UINT16_MAX;
	uint8_t x4484 = 7U;
	int64_t t73 = 4438536598516985312LL;

	t73 = ((x4481&x4482)*(x4483>>x4484));

	if (t73 != 2653623LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x4497 = 6U;
	uint32_t x4498 = 84U;
	static int16_t x4500 = 11;
	uint32_t t74 = 30U;

	t74 = ((x4497&x4498)*(x4499>>x4500));

	if (t74 != 1088284U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x4605 = INT32_MIN;
	int16_t x4606 = INT16_MAX;
	int8_t x4607 = INT8_MAX;
	static volatile int8_t x4608 = 2;
	static volatile int32_t t75 = 0;

	t75 = ((x4605&x4606)*(x4607>>x4608));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x4621 = -56398LL;
	uint64_t x4622 = 5280LLU;
	int8_t x4624 = 1;
	uint64_t t76 = 5391471957273810012LLU;

	t76 = ((x4621&x4622)*(x4623>>x4624));

	if (t76 != 105440LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4629 = 0;
	int16_t x4630 = INT16_MAX;
	int8_t x4631 = INT8_MAX;
	static uint64_t x4632 = 1LLU;
	volatile int32_t t77 = 1756663;

	t77 = ((x4629&x4630)*(x4631>>x4632));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4701 = -5LL;
	uint64_t x4702 = 294232586949LLU;
	static uint8_t x4703 = UINT8_MAX;
	uint64_t t78 = 22907509228078675LLU;

	t78 = ((x4701&x4702)*(x4703>>x4704));

	if (t78 != 37367538542015LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4729 = 1791;
	uint64_t x4731 = 1LLU;
	static uint64_t x4732 = 2LLU;
	volatile uint64_t t79 = 628128497480183LLU;

	t79 = ((x4729&x4730)*(x4731>>x4732));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4733 = UINT8_MAX;
	volatile int32_t x4734 = 2;
	volatile int16_t x4736 = 6;
	volatile uint64_t t80 = 7LLU;

	t80 = ((x4733&x4734)*(x4735>>x4736));

	if (t80 != 59135195443271826LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4741 = 6;
	static volatile uint32_t t81 = 816769U;

	t81 = ((x4741&x4742)*(x4743>>x4744));

	if (t81 != 139935894U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4745 = 65173399U;
	uint8_t x4746 = 125U;
	uint32_t x4747 = 284734666U;
	uint16_t x4748 = 0U;

	t82 = ((x4745&x4746)*(x4747>>x4748));

	if (t82 != 1684460690U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4757 = 1654086740U;
	uint8_t x4758 = 2U;
	int8_t x4759 = 0;
	int8_t x4760 = 3;
	uint32_t t83 = 151675U;

	t83 = ((x4757&x4758)*(x4759>>x4760));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4889 = INT8_MIN;
	uint64_t x4890 = 34164039294455LLU;
	static int16_t x4891 = INT16_MAX;
	int16_t x4892 = 1;
	volatile uint64_t t84 = 1LLU;

	t84 = ((x4889&x4890)*(x4891>>x4892));

	if (t84 != 559709455759106688LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4917 = UINT8_MAX;
	uint32_t x4919 = 64415541U;
	int64_t t85 = 23065773491377LL;

	t85 = ((x4917&x4918)*(x4919>>x4920));

	if (t85 != 8212981350LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x4937 = -3;
	static uint32_t t86 = 1048U;

	t86 = ((x4937&x4938)*(x4939>>x4940));

	if (t86 != 4294958416U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4981 = -891759993926965LL;
	int64_t x4982 = 0LL;
	static int8_t x4984 = 0;
	volatile int64_t t87 = -3960331037556LL;

	t87 = ((x4981&x4982)*(x4983>>x4984));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x5049 = 66121163940596401LLU;
	int16_t x5050 = INT16_MAX;
	volatile int16_t x5051 = 4;
	uint16_t x5052 = 30U;
	volatile uint64_t t88 = 29325385007LLU;

	t88 = ((x5049&x5050)*(x5051>>x5052));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5157 = INT8_MIN;
	int16_t x5158 = -43;
	uint32_t x5159 = UINT32_MAX;
	static uint8_t x5160 = 0U;
	uint32_t t89 = 7607407U;

	t89 = ((x5157&x5158)*(x5159>>x5160));

	if (t89 != 128U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x5273 = UINT32_MAX;
	volatile uint8_t x5274 = UINT8_MAX;
	static int16_t x5275 = INT16_MAX;
	uint8_t x5276 = 1U;
	uint32_t t90 = 6209089U;

	t90 = ((x5273&x5274)*(x5275>>x5276));

	if (t90 != 4177665U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5389 = 127U;
	int64_t x5390 = INT64_MIN;
	int8_t x5391 = 7;
	uint16_t x5392 = 6U;

	t91 = ((x5389&x5390)*(x5391>>x5392));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x5541 = 53074195581LLU;
	uint8_t x5542 = UINT8_MAX;
	static volatile uint16_t x5543 = 100U;
	static uint8_t x5544 = 1U;
	volatile uint64_t t92 = 222LLU;

	t92 = ((x5541&x5542)*(x5543>>x5544));

	if (t92 != 6250LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5549 = -1;
	uint16_t x5550 = UINT16_MAX;
	uint32_t x5551 = UINT32_MAX;
	uint16_t x5552 = 0U;
	uint32_t t93 = 961982754U;

	t93 = ((x5549&x5550)*(x5551>>x5552));

	if (t93 != 4294901761U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5565 = INT16_MIN;
	int8_t x5566 = -21;
	volatile uint16_t x5568 = 8U;
	static volatile uint64_t t94 = 345704801931LLU;

	t94 = ((x5565&x5566)*(x5567>>x5568));

	if (t94 != 18446538005613772800LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5573 = 0U;
	volatile int32_t x5574 = INT32_MIN;
	uint8_t x5575 = 9U;
	uint32_t x5576 = 2U;
	volatile int32_t t95 = 1605;

	t95 = ((x5573&x5574)*(x5575>>x5576));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x5586 = 84844651U;
	uint8_t x5587 = 14U;
	volatile uint8_t x5588 = 1U;
	static volatile uint32_t t96 = 0U;

	t96 = ((x5585&x5586)*(x5587>>x5588));

	if (t96 != 593854464U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5613 = UINT16_MAX;
	uint64_t x5615 = 63014LLU;
	uint16_t x5616 = 1U;
	volatile uint64_t t97 = 216LLU;

	t97 = ((x5613&x5614)*(x5615>>x5616));

	if (t97 != 2064779738LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5622 = UINT16_MAX;
	int8_t x5623 = INT8_MAX;
	uint32_t x5624 = 19U;
	int32_t t98 = -1630445;

	t98 = ((x5621&x5622)*(x5623>>x5624));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5638 = 19LLU;
	static uint64_t t99 = 63333117084005LLU;

	t99 = ((x5637&x5638)*(x5639>>x5640));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

