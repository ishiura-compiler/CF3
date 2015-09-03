#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x51 = INT32_MIN;
int8_t x140 = INT8_MIN;
int32_t t2 = 146536;
int32_t x207 = INT32_MAX;
uint16_t x236 = 1027U;
volatile uint8_t x395 = UINT8_MAX;
int32_t t5 = 4804953;
volatile uint8_t x574 = 3U;
int32_t x576 = -1408;
static volatile int32_t t6 = -306593702;
int64_t x608 = INT64_MAX;
uint32_t x852 = 2321401U;
int16_t x907 = INT16_MIN;
uint16_t x908 = 90U;
int16_t x922 = 1;
int64_t x948 = 152LL;
int16_t x971 = INT16_MAX;
int64_t x972 = INT64_MIN;
static int32_t t12 = 777738737;
int16_t x1008 = INT16_MIN;
int32_t x1095 = INT32_MIN;
uint16_t x1134 = 2U;
int32_t t16 = 1;
uint16_t x1162 = 0U;
uint32_t x1215 = UINT32_MAX;
static int32_t t19 = 4349739;
int16_t x1342 = 3;
int16_t x1475 = -4;
uint8_t x1504 = UINT8_MAX;
static volatile uint8_t x1530 = 2U;
int16_t x1532 = 4;
volatile uint8_t x1618 = 0U;
int16_t x1620 = INT16_MIN;
volatile uint64_t x1712 = UINT64_MAX;
volatile int32_t t27 = 0;
int32_t t29 = -168519;
static volatile uint16_t x1849 = 47U;
volatile int32_t t30 = 57519;
volatile int8_t x1998 = 4;
volatile uint16_t x2005 = 19U;
int32_t x2007 = 56776;
int64_t x2232 = INT64_MAX;
int32_t t34 = 3;
int16_t x2520 = INT16_MIN;
static volatile int32_t t39 = 429309;
volatile uint8_t x2526 = 1U;
int16_t x2528 = INT16_MAX;
int64_t x2624 = INT64_MIN;
int16_t x2631 = INT16_MAX;
volatile uint8_t x2721 = 2U;
int16_t x2736 = -1;
int32_t x2774 = 1;
int16_t x2781 = INT16_MAX;
int8_t x2825 = INT8_MAX;
int8_t x3063 = INT8_MIN;
uint16_t x3064 = UINT16_MAX;
static int8_t x3092 = 1;
volatile int32_t t51 = -7070839;
uint8_t x3122 = 1U;
int32_t x3124 = INT32_MIN;
volatile uint8_t x3195 = UINT8_MAX;
uint64_t x3273 = 35369LLU;
static volatile int8_t x3301 = 1;
int8_t x3304 = -1;
volatile int8_t x3614 = 0;
uint64_t x3768 = 2728LLU;
int32_t t62 = 574635;
uint16_t x3886 = 0U;
volatile uint8_t x3954 = 7U;
uint8_t x3956 = UINT8_MAX;
int32_t t64 = -5140;
static uint8_t x3986 = 6U;
int16_t x4162 = 24;
uint16_t x4225 = 239U;
static int16_t x4283 = -1;
uint64_t x4284 = UINT64_MAX;
uint32_t x4748 = 340890539U;
int32_t x4780 = -10737;
int32_t t71 = 13452030;
uint32_t x4841 = UINT32_MAX;
int16_t x4842 = 4;
int64_t x4844 = -1032246811556484LL;
volatile int64_t x4968 = 7989469075804LL;
int16_t x5039 = -1662;
uint32_t x5040 = 50226101U;
static volatile int8_t x5065 = 11;
int8_t x5206 = 1;
int8_t x5207 = -1;
uint32_t x5370 = 2U;
uint32_t x5371 = 0U;
uint64_t x5437 = UINT64_MAX;
int32_t x5440 = 121327810;
int16_t x5604 = INT16_MIN;
static int8_t x5737 = INT8_MAX;
static int8_t x5738 = 0;
static uint64_t x5740 = 143433169054138827LLU;
static int64_t x5797 = 12517157750LL;
uint8_t x5922 = 0U;
static volatile uint8_t x5965 = 12U;
uint32_t x5967 = 61929243U;
int8_t x5968 = INT8_MIN;
int8_t x6348 = INT8_MIN;
uint64_t x6419 = UINT64_MAX;
volatile int8_t x6420 = INT8_MAX;
int32_t t91 = 6;
uint8_t x6423 = UINT8_MAX;
volatile int32_t t93 = 10502960;
int32_t x6536 = 146345;
int64_t x6595 = INT64_MIN;
volatile int16_t x6747 = INT16_MAX;
uint16_t x6765 = 5U;
static int8_t x6766 = 1;


void f0(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = 0;
	int8_t x52 = -1;
	static volatile int32_t t0 = 15499;

	t0 = ((x49<<x50)<=(x51%x52));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x65 = 19923182;
	uint8_t x66 = 0U;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -1LL;
	static int32_t t1 = -14070658;

	t1 = ((x65<<x66)<=(x67%x68));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x137 = 1;
	uint8_t x138 = 1U;
	int16_t x139 = INT16_MIN;

	t2 = ((x137<<x138)<=(x139%x140));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x205 = 51;
	int8_t x206 = 7;
	int32_t x208 = -1;
	int32_t t3 = 1;

	t3 = ((x205<<x206)<=(x207%x208));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = 1LL;
	int8_t x235 = INT8_MIN;
	volatile int32_t t4 = -11135414;

	t4 = ((x233<<x234)<=(x235%x236));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x393 = 6;
	static int8_t x394 = 4;
	uint64_t x396 = UINT64_MAX;

	t5 = ((x393<<x394)<=(x395%x396));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x573 = INT8_MAX;
	volatile int8_t x575 = 56;

	t6 = ((x573<<x574)<=(x575%x576));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x605 = 174U;
	uint8_t x606 = 1U;
	volatile int32_t x607 = -29139;
	int32_t t7 = 38;

	t7 = ((x605<<x606)<=(x607%x608));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x849 = INT8_MAX;
	uint8_t x850 = 3U;
	int16_t x851 = 1;
	volatile int32_t t8 = 97718003;

	t8 = ((x849<<x850)<=(x851%x852));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x905 = 120;
	volatile uint16_t x906 = 2U;
	volatile int32_t t9 = -188720178;

	t9 = ((x905<<x906)<=(x907%x908));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x921 = UINT32_MAX;
	int64_t x923 = 207595263811LL;
	uint8_t x924 = 20U;
	int32_t t10 = -7778890;

	t10 = ((x921<<x922)<=(x923%x924));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x945 = UINT16_MAX;
	uint8_t x946 = 7U;
	int32_t x947 = INT32_MIN;
	volatile int32_t t11 = -1;

	t11 = ((x945<<x946)<=(x947%x948));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x969 = 319;
	static int32_t x970 = 3;

	t12 = ((x969<<x970)<=(x971%x972));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x997 = 527478512;
	uint8_t x998 = 1U;
	static int8_t x999 = 49;
	int64_t x1000 = INT64_MIN;
	volatile int32_t t13 = 43;

	t13 = ((x997<<x998)<=(x999%x1000));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1005 = 2575162;
	uint8_t x1006 = 5U;
	volatile uint32_t x1007 = UINT32_MAX;
	int32_t t14 = 1;

	t14 = ((x1005<<x1006)<=(x1007%x1008));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1093 = 1676U;
	static int8_t x1094 = 18;
	int16_t x1096 = INT16_MAX;
	volatile int32_t t15 = 395403;

	t15 = ((x1093<<x1094)<=(x1095%x1096));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1133 = 210837768772LLU;
	volatile int64_t x1135 = INT64_MIN;
	uint32_t x1136 = UINT32_MAX;

	t16 = ((x1133<<x1134)<=(x1135%x1136));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1161 = 36U;
	volatile int32_t x1163 = 3729;
	int8_t x1164 = INT8_MIN;
	int32_t t17 = -669092;

	t17 = ((x1161<<x1162)<=(x1163%x1164));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1213 = 3890;
	int8_t x1214 = 7;
	static uint8_t x1216 = UINT8_MAX;
	int32_t t18 = -3891679;

	t18 = ((x1213<<x1214)<=(x1215%x1216));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1249 = 0;
	int8_t x1250 = 26;
	static int8_t x1251 = -1;
	int32_t x1252 = 13;

	t19 = ((x1249<<x1250)<=(x1251%x1252));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1341 = INT16_MAX;
	static uint32_t x1343 = UINT32_MAX;
	static int32_t x1344 = -1;
	static int32_t t20 = -541163;

	t20 = ((x1341<<x1342)<=(x1343%x1344));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1437 = INT64_MAX;
	int16_t x1438 = 0;
	int8_t x1439 = INT8_MAX;
	uint64_t x1440 = 113123LLU;
	volatile int32_t t21 = -598701464;

	t21 = ((x1437<<x1438)<=(x1439%x1440));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1473 = UINT16_MAX;
	volatile uint16_t x1474 = 3U;
	uint32_t x1476 = UINT32_MAX;
	int32_t t22 = -89548122;

	t22 = ((x1473<<x1474)<=(x1475%x1476));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1501 = 7U;
	volatile int8_t x1502 = 3;
	int32_t x1503 = -1;
	volatile int32_t t23 = 7588;

	t23 = ((x1501<<x1502)<=(x1503%x1504));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1529 = INT8_MAX;
	static int8_t x1531 = INT8_MAX;
	int32_t t24 = 15;

	t24 = ((x1529<<x1530)<=(x1531%x1532));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1617 = 0U;
	int64_t x1619 = INT64_MIN;
	static int32_t t25 = -2826;

	t25 = ((x1617<<x1618)<=(x1619%x1620));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1709 = UINT32_MAX;
	volatile int8_t x1710 = 0;
	int64_t x1711 = -1142944453735113031LL;
	static int32_t t26 = -26;

	t26 = ((x1709<<x1710)<=(x1711%x1712));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1809 = 49906U;
	static uint64_t x1810 = 0LLU;
	uint16_t x1811 = 1U;
	int64_t x1812 = -1LL;

	t27 = ((x1809<<x1810)<=(x1811%x1812));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1817 = 433218049119LLU;
	uint8_t x1818 = 0U;
	int8_t x1819 = 0;
	uint8_t x1820 = UINT8_MAX;
	volatile int32_t t28 = 28183630;

	t28 = ((x1817<<x1818)<=(x1819%x1820));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1821 = 8232924LLU;
	volatile int8_t x1822 = 1;
	static int16_t x1823 = INT16_MIN;
	static volatile int32_t x1824 = -1;

	t29 = ((x1821<<x1822)<=(x1823%x1824));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1850 = 0;
	int8_t x1851 = 2;
	volatile uint64_t x1852 = UINT64_MAX;

	t30 = ((x1849<<x1850)<=(x1851%x1852));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1913 = 11504647LLU;
	volatile int16_t x1914 = 0;
	static volatile int8_t x1915 = INT8_MAX;
	static uint8_t x1916 = 5U;
	int32_t t31 = 761;

	t31 = ((x1913<<x1914)<=(x1915%x1916));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1997 = INT16_MAX;
	int64_t x1999 = INT64_MIN;
	static volatile int16_t x2000 = INT16_MAX;
	static volatile int32_t t32 = 430177397;

	t32 = ((x1997<<x1998)<=(x1999%x2000));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2006 = 0;
	static int32_t x2008 = -1;
	volatile int32_t t33 = 48987;

	t33 = ((x2005<<x2006)<=(x2007%x2008));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2229 = 70U;
	uint64_t x2230 = 8LLU;
	int32_t x2231 = -3697;

	t34 = ((x2229<<x2230)<=(x2231%x2232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2233 = UINT64_MAX;
	uint8_t x2234 = 9U;
	int8_t x2235 = INT8_MIN;
	int8_t x2236 = INT8_MAX;
	int32_t t35 = -106;

	t35 = ((x2233<<x2234)<=(x2235%x2236));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2237 = UINT64_MAX;
	uint64_t x2238 = 27LLU;
	uint16_t x2239 = 14U;
	uint64_t x2240 = UINT64_MAX;
	volatile int32_t t36 = -1488656;

	t36 = ((x2237<<x2238)<=(x2239%x2240));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2245 = INT16_MAX;
	uint16_t x2246 = 1U;
	static uint8_t x2247 = UINT8_MAX;
	int32_t x2248 = -1;
	int32_t t37 = 10;

	t37 = ((x2245<<x2246)<=(x2247%x2248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2433 = INT8_MAX;
	static int8_t x2434 = 1;
	int64_t x2435 = 48256777LL;
	uint8_t x2436 = UINT8_MAX;
	int32_t t38 = 3386;

	t38 = ((x2433<<x2434)<=(x2435%x2436));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2517 = 0;
	uint8_t x2518 = 5U;
	uint16_t x2519 = 43U;

	t39 = ((x2517<<x2518)<=(x2519%x2520));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x2525 = 32U;
	uint8_t x2527 = 41U;
	int32_t t40 = 2408566;

	t40 = ((x2525<<x2526)<=(x2527%x2528));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2573 = 448480712U;
	int8_t x2574 = 25;
	volatile uint64_t x2575 = 373LLU;
	int64_t x2576 = INT64_MIN;
	int32_t t41 = 13683978;

	t41 = ((x2573<<x2574)<=(x2575%x2576));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2621 = 1107947252U;
	uint8_t x2622 = 0U;
	static int8_t x2623 = -1;
	volatile int32_t t42 = 1;

	t42 = ((x2621<<x2622)<=(x2623%x2624));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2629 = 0U;
	uint32_t x2630 = 27U;
	volatile uint16_t x2632 = UINT16_MAX;
	static int32_t t43 = -109179;

	t43 = ((x2629<<x2630)<=(x2631%x2632));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2701 = 6719;
	uint8_t x2702 = 5U;
	int8_t x2703 = -6;
	uint8_t x2704 = UINT8_MAX;
	int32_t t44 = 55680;

	t44 = ((x2701<<x2702)<=(x2703%x2704));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2722 = 3;
	uint32_t x2723 = 666U;
	int64_t x2724 = INT64_MIN;
	int32_t t45 = 89101;

	t45 = ((x2721<<x2722)<=(x2723%x2724));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2733 = 494502593914LLU;
	uint32_t x2734 = 49U;
	int32_t x2735 = -4;
	int32_t t46 = -24216;

	t46 = ((x2733<<x2734)<=(x2735%x2736));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2773 = UINT16_MAX;
	uint32_t x2775 = 15767390U;
	static volatile int32_t x2776 = -149534462;
	static volatile int32_t t47 = -668691;

	t47 = ((x2773<<x2774)<=(x2775%x2776));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2782 = 0LLU;
	static int16_t x2783 = -2373;
	int64_t x2784 = INT64_MIN;
	volatile int32_t t48 = 3;

	t48 = ((x2781<<x2782)<=(x2783%x2784));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2826 = 14;
	int16_t x2827 = INT16_MIN;
	uint8_t x2828 = 40U;
	volatile int32_t t49 = -38308;

	t49 = ((x2825<<x2826)<=(x2827%x2828));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3061 = 4572U;
	uint8_t x3062 = 3U;
	volatile int32_t t50 = 3171159;

	t50 = ((x3061<<x3062)<=(x3063%x3064));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3089 = 239U;
	uint8_t x3090 = 1U;
	uint32_t x3091 = UINT32_MAX;

	t51 = ((x3089<<x3090)<=(x3091%x3092));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x3121 = UINT8_MAX;
	uint16_t x3123 = UINT16_MAX;
	static int32_t t52 = 770;

	t52 = ((x3121<<x3122)<=(x3123%x3124));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3145 = 443U;
	uint32_t x3146 = 17U;
	static int16_t x3147 = -5;
	int64_t x3148 = INT64_MIN;
	int32_t t53 = -52;

	t53 = ((x3145<<x3146)<=(x3147%x3148));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3193 = UINT8_MAX;
	uint64_t x3194 = 11LLU;
	int64_t x3196 = INT64_MIN;
	int32_t t54 = -219979;

	t54 = ((x3193<<x3194)<=(x3195%x3196));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x3274 = 11U;
	int64_t x3275 = INT64_MIN;
	int8_t x3276 = -1;
	volatile int32_t t55 = -1;

	t55 = ((x3273<<x3274)<=(x3275%x3276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3302 = 1U;
	volatile int32_t x3303 = -1;
	volatile int32_t t56 = -16680117;

	t56 = ((x3301<<x3302)<=(x3303%x3304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x3445 = 5U;
	volatile uint8_t x3446 = 1U;
	uint32_t x3447 = 550U;
	uint8_t x3448 = 108U;
	static int32_t t57 = 769717;

	t57 = ((x3445<<x3446)<=(x3447%x3448));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3481 = 1103U;
	uint8_t x3482 = 3U;
	int8_t x3483 = -1;
	int32_t x3484 = 3375449;
	int32_t t58 = -21921;

	t58 = ((x3481<<x3482)<=(x3483%x3484));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3613 = UINT32_MAX;
	int32_t x3615 = INT32_MIN;
	int16_t x3616 = -1;
	volatile int32_t t59 = -428744531;

	t59 = ((x3613<<x3614)<=(x3615%x3616));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3765 = 4482LL;
	uint8_t x3766 = 19U;
	volatile uint64_t x3767 = UINT64_MAX;
	int32_t t60 = -2877;

	t60 = ((x3765<<x3766)<=(x3767%x3768));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3857 = 172U;
	int8_t x3858 = 1;
	int64_t x3859 = INT64_MAX;
	volatile int8_t x3860 = -3;
	volatile int32_t t61 = 1;

	t61 = ((x3857<<x3858)<=(x3859%x3860));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3865 = 3U;
	static int16_t x3866 = 10;
	uint8_t x3867 = 2U;
	volatile int8_t x3868 = 42;

	t62 = ((x3865<<x3866)<=(x3867%x3868));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3885 = 2040U;
	int8_t x3887 = 0;
	int16_t x3888 = 1582;
	volatile int32_t t63 = 16232;

	t63 = ((x3885<<x3886)<=(x3887%x3888));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x3953 = 22120794573965LL;
	int64_t x3955 = INT64_MIN;

	t64 = ((x3953<<x3954)<=(x3955%x3956));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3985 = UINT8_MAX;
	static volatile int64_t x3987 = INT64_MIN;
	int8_t x3988 = -58;
	volatile int32_t t65 = 36498040;

	t65 = ((x3985<<x3986)<=(x3987%x3988));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4161 = 31U;
	int32_t x4163 = INT32_MAX;
	uint16_t x4164 = 936U;
	static int32_t t66 = -1998;

	t66 = ((x4161<<x4162)<=(x4163%x4164));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x4226 = 0;
	int32_t x4227 = INT32_MIN;
	int32_t x4228 = INT32_MAX;
	int32_t t67 = -1;

	t67 = ((x4225<<x4226)<=(x4227%x4228));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4281 = UINT64_MAX;
	int32_t x4282 = 1;
	volatile int32_t t68 = -8626460;

	t68 = ((x4281<<x4282)<=(x4283%x4284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4493 = UINT8_MAX;
	volatile uint16_t x4494 = 0U;
	int64_t x4495 = INT64_MIN;
	uint8_t x4496 = 3U;
	volatile int32_t t69 = -197857;

	t69 = ((x4493<<x4494)<=(x4495%x4496));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x4745 = 0;
	static uint32_t x4746 = 6U;
	static int8_t x4747 = INT8_MIN;
	int32_t t70 = -48972;

	t70 = ((x4745<<x4746)<=(x4747%x4748));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4777 = 1093U;
	volatile int16_t x4778 = 1;
	static uint64_t x4779 = 111002LLU;

	t71 = ((x4777<<x4778)<=(x4779%x4780));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4843 = INT16_MIN;
	volatile int32_t t72 = -24433076;

	t72 = ((x4841<<x4842)<=(x4843%x4844));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4965 = 589U;
	uint16_t x4966 = 3U;
	uint64_t x4967 = UINT64_MAX;
	static volatile int32_t t73 = -68020;

	t73 = ((x4965<<x4966)<=(x4967%x4968));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5037 = 620U;
	uint16_t x5038 = 8U;
	int32_t t74 = 1719;

	t74 = ((x5037<<x5038)<=(x5039%x5040));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x5066 = 8;
	uint8_t x5067 = 15U;
	uint64_t x5068 = 1300413LLU;
	int32_t t75 = 939498474;

	t75 = ((x5065<<x5066)<=(x5067%x5068));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5205 = 1190LLU;
	int32_t x5208 = INT32_MIN;
	static volatile int32_t t76 = 17;

	t76 = ((x5205<<x5206)<=(x5207%x5208));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x5369 = 3827823U;
	uint16_t x5372 = UINT16_MAX;
	int32_t t77 = 53;

	t77 = ((x5369<<x5370)<=(x5371%x5372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5438 = 42;
	static volatile int32_t x5439 = 52;
	volatile int32_t t78 = 1;

	t78 = ((x5437<<x5438)<=(x5439%x5440));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5473 = 8243;
	volatile int16_t x5474 = 9;
	int16_t x5475 = -1;
	int64_t x5476 = 10083133157415LL;
	volatile int32_t t79 = -153586157;

	t79 = ((x5473<<x5474)<=(x5475%x5476));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5601 = INT16_MAX;
	uint32_t x5602 = 4U;
	int8_t x5603 = -1;
	static int32_t t80 = 351483;

	t80 = ((x5601<<x5602)<=(x5603%x5604));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5629 = 332541U;
	static int8_t x5630 = 11;
	static uint32_t x5631 = 7U;
	int8_t x5632 = INT8_MAX;
	int32_t t81 = 2033867;

	t81 = ((x5629<<x5630)<=(x5631%x5632));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x5739 = 24;
	volatile int32_t t82 = 20872195;

	t82 = ((x5737<<x5738)<=(x5739%x5740));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x5798 = 0U;
	static int8_t x5799 = INT8_MIN;
	int64_t x5800 = 222769LL;
	int32_t t83 = -73;

	t83 = ((x5797<<x5798)<=(x5799%x5800));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5921 = 1280U;
	static uint8_t x5923 = UINT8_MAX;
	static int16_t x5924 = -9379;
	int32_t t84 = -1;

	t84 = ((x5921<<x5922)<=(x5923%x5924));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5945 = 52U;
	int8_t x5946 = 6;
	volatile int16_t x5947 = INT16_MAX;
	int16_t x5948 = -4;
	static int32_t t85 = -8470014;

	t85 = ((x5945<<x5946)<=(x5947%x5948));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5966 = 1;
	volatile int32_t t86 = 250877870;

	t86 = ((x5965<<x5966)<=(x5967%x5968));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5977 = UINT64_MAX;
	int32_t x5978 = 41;
	static int32_t x5979 = INT32_MIN;
	int8_t x5980 = INT8_MAX;
	volatile int32_t t87 = 105019403;

	t87 = ((x5977<<x5978)<=(x5979%x5980));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6101 = UINT16_MAX;
	int32_t x6102 = 7;
	volatile int8_t x6103 = -1;
	volatile uint64_t x6104 = 42150LLU;
	int32_t t88 = -5036;

	t88 = ((x6101<<x6102)<=(x6103%x6104));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x6329 = 1326U;
	static int8_t x6330 = 1;
	int32_t x6331 = INT32_MAX;
	int64_t x6332 = -1LL;
	volatile int32_t t89 = 508;

	t89 = ((x6329<<x6330)<=(x6331%x6332));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6345 = 36394192U;
	int8_t x6346 = 6;
	uint32_t x6347 = UINT32_MAX;
	volatile int32_t t90 = 951622;

	t90 = ((x6345<<x6346)<=(x6347%x6348));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x6417 = UINT16_MAX;
	static uint8_t x6418 = 7U;

	t91 = ((x6417<<x6418)<=(x6419%x6420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x6421 = 28U;
	volatile uint8_t x6422 = 2U;
	uint32_t x6424 = 72494564U;
	int32_t t92 = 39763;

	t92 = ((x6421<<x6422)<=(x6423%x6424));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6485 = INT8_MAX;
	int16_t x6486 = 1;
	int32_t x6487 = INT32_MAX;
	int16_t x6488 = -1;

	t93 = ((x6485<<x6486)<=(x6487%x6488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6533 = 125198586LLU;
	uint8_t x6534 = 60U;
	int32_t x6535 = INT32_MIN;
	int32_t t94 = 2;

	t94 = ((x6533<<x6534)<=(x6535%x6536));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6593 = INT8_MAX;
	static uint16_t x6594 = 13U;
	uint16_t x6596 = UINT16_MAX;
	volatile int32_t t95 = 22342806;

	t95 = ((x6593<<x6594)<=(x6595%x6596));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6677 = UINT32_MAX;
	uint8_t x6678 = 0U;
	uint32_t x6679 = 42436U;
	int16_t x6680 = 23;
	int32_t t96 = 9867;

	t96 = ((x6677<<x6678)<=(x6679%x6680));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6725 = UINT64_MAX;
	volatile uint8_t x6726 = 62U;
	int16_t x6727 = INT16_MIN;
	int8_t x6728 = INT8_MIN;
	volatile int32_t t97 = 47573643;

	t97 = ((x6725<<x6726)<=(x6727%x6728));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x6745 = 2760313LLU;
	int8_t x6746 = 52;
	volatile uint16_t x6748 = 186U;
	int32_t t98 = -1530338;

	t98 = ((x6745<<x6746)<=(x6747%x6748));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x6767 = 25438;
	volatile uint64_t x6768 = UINT64_MAX;
	volatile int32_t t99 = 93;

	t99 = ((x6765<<x6766)<=(x6767%x6768));

	if (t99 != 1) { NG(); } else { ; }
	
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

