#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
static int8_t x4 = 1;
static uint64_t x17 = UINT64_MAX;
volatile uint8_t x152 = 16U;
int16_t x174 = -1;
volatile int32_t t4 = 1;
uint8_t x200 = 8U;
int8_t x211 = 5;
uint8_t x387 = 0U;
volatile int8_t x388 = 6;
volatile uint64_t t8 = UINT64_MAX;
int64_t x420 = 27LL;
static int64_t x429 = -1LL;
int32_t x549 = 11624;
volatile uint16_t x550 = 5U;
int32_t x552 = 3;
static volatile int64_t x599 = INT64_MAX;
static int16_t x606 = INT16_MAX;
int8_t x608 = 1;
int32_t x649 = INT32_MIN;
volatile int64_t x662 = INT64_MAX;
volatile int16_t x663 = 1;
int8_t x664 = 1;
static int32_t t17 = 2621;
int8_t x692 = 1;
int32_t t19 = -46628356;
int8_t x730 = INT8_MAX;
volatile int16_t x814 = -205;
volatile uint16_t x945 = 10665U;
int16_t x946 = -1;
static volatile int32_t t26 = -21;
uint64_t x997 = UINT64_MAX;
uint64_t t28 = UINT64_MAX;
int8_t x1036 = 14;
int32_t t29 = INT32_MIN;
int32_t t30 = -1;
int32_t x1079 = 30625548;
int32_t x1105 = INT32_MIN;
uint8_t x1248 = 16U;
int32_t x1313 = -1;
static int32_t t35 = 878957;
volatile uint8_t x1328 = 1U;
volatile uint32_t t36 = 2U;
static uint16_t x1346 = 169U;
int64_t t37 = 382LL;
volatile uint32_t x1373 = 62387267U;
int16_t x1374 = -1;
int32_t t40 = -19731;
int64_t x1627 = 5699551LL;
volatile int32_t t41 = -28223834;
uint8_t x1650 = 99U;
int64_t x1682 = 1839693708432006526LL;
uint16_t x1684 = 0U;
int32_t t45 = 84;
static uint8_t x1756 = 2U;
static int64_t x1843 = INT64_MIN;
volatile int8_t x1855 = INT8_MIN;
int32_t t49 = 21;
uint8_t x1968 = 3U;
uint32_t t51 = 504313264U;
uint16_t x1981 = 20U;
int16_t x1982 = INT16_MIN;
volatile int8_t x2003 = -12;
volatile int8_t x2021 = INT8_MIN;
volatile uint16_t x2022 = UINT16_MAX;
static volatile uint8_t x2041 = UINT8_MAX;
int32_t x2075 = INT32_MIN;
uint32_t x2084 = 15U;
int32_t t58 = -3051;
static int64_t x2099 = 5430LL;
volatile uint32_t x2114 = 168260391U;
int8_t x2116 = 19;
uint32_t t60 = UINT32_MAX;
static int8_t x2131 = INT8_MIN;
int64_t x2132 = 0LL;
uint8_t x2139 = UINT8_MAX;
volatile int8_t x2146 = -1;
uint64_t x2254 = 125061312389LLU;
volatile uint16_t x2256 = 9U;
volatile int8_t x2423 = INT8_MAX;
uint16_t x2442 = UINT16_MAX;
int16_t x2443 = INT16_MAX;
volatile int32_t t68 = -11013;
volatile uint32_t x2462 = 423U;
volatile int64_t t69 = 1792100197422859715LL;
int32_t t71 = -1;
int32_t t73 = 20218;
int32_t t74 = 12;
int8_t x2710 = INT8_MAX;
volatile int32_t x2711 = INT32_MIN;
int64_t x2722 = INT64_MAX;
static uint8_t x2724 = 6U;
uint32_t t76 = UINT32_MAX;
static uint64_t x2850 = UINT64_MAX;
uint8_t x2852 = 28U;
int32_t x2904 = 0;
uint64_t x2933 = 32LLU;
static int32_t x2934 = INT32_MIN;
uint64_t x2935 = 64498LLU;
int8_t x2941 = INT8_MIN;
uint64_t x2943 = 1005894882287939LLU;
static uint8_t x2985 = 9U;
int32_t t86 = 2;
static volatile uint16_t x3032 = 1U;
volatile int32_t x3037 = -1;
int32_t x3045 = 9381;
static volatile int32_t x3046 = 267856;
volatile uint16_t x3105 = UINT16_MAX;
uint8_t x3107 = UINT8_MAX;
volatile int32_t t91 = 103114;
int32_t x3137 = 10152;
static volatile uint16_t x3140 = 3U;
static int32_t t93 = 298486846;
int64_t x3174 = INT64_MAX;
int32_t t96 = -6108005;
volatile int32_t t98 = -55476;
uint16_t x3258 = 2U;
static int32_t x3260 = 26;


void f0(void) {
	uint64_t x1 = 42316478891714878LLU;
	uint16_t x2 = 3U;
	uint64_t t0 = 1428210039LLU;

	t0 = (x1|((x2<x3)>>x4));

	if (t0 != 42316478891714878LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x18 = 43U;
	int32_t x19 = 4748309;
	volatile uint8_t x20 = 23U;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x17|((x18<x19)>>x20));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x129 = -1LL;
	uint64_t x130 = 5712473707LLU;
	volatile uint32_t x131 = UINT32_MAX;
	int8_t x132 = 1;
	int64_t t2 = -2LL;

	t2 = (x129|((x130<x131)>>x132));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = UINT8_MAX;
	int16_t x151 = -1;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x149|((x150<x151)>>x152));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x173 = -53;
	volatile uint16_t x175 = 7U;
	int64_t x176 = 17LL;

	t4 = (x173|((x174<x175)>>x176));

	if (t4 != -53) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x197 = 3U;
	volatile int16_t x198 = -1;
	int32_t x199 = INT32_MIN;
	volatile int32_t t5 = -47;

	t5 = (x197|((x198<x199)>>x200));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x209 = 0;
	int32_t x210 = INT32_MIN;
	int8_t x212 = 2;
	volatile int32_t t6 = 29648;

	t6 = (x209|((x210<x211)>>x212));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = -19;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x385|((x386<x387)>>x388));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x405 = UINT64_MAX;
	int8_t x406 = INT8_MIN;
	static uint32_t x407 = UINT32_MAX;
	static int8_t x408 = 23;

	t8 = (x405|((x406<x407)>>x408));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x417 = -204;
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	int32_t t9 = 13956;

	t9 = (x417|((x418<x419)>>x420));

	if (t9 != -204) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x430 = 866U;
	int16_t x431 = 4;
	int8_t x432 = 10;
	int64_t t10 = 691949485756246544LL;

	t10 = (x429|((x430<x431)>>x432));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x541 = 622;
	volatile uint64_t x542 = UINT64_MAX;
	uint16_t x543 = UINT16_MAX;
	volatile int64_t x544 = 2LL;
	int32_t t11 = 451090;

	t11 = (x541|((x542<x543)>>x544));

	if (t11 != 622) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x551 = INT8_MIN;
	volatile int32_t t12 = -9586;

	t12 = (x549|((x550<x551)>>x552));

	if (t12 != 11624) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x597 = 861451U;
	static int8_t x598 = -31;
	volatile uint32_t x600 = 1U;
	volatile uint32_t t13 = 6033U;

	t13 = (x597|((x598<x599)>>x600));

	if (t13 != 861451U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x605 = 25546U;
	int64_t x607 = INT64_MIN;
	volatile int32_t t14 = 205198596;

	t14 = (x605|((x606<x607)>>x608));

	if (t14 != 25546) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x621 = 1102154716U;
	int8_t x622 = INT8_MAX;
	uint16_t x623 = UINT16_MAX;
	int8_t x624 = 15;
	uint32_t t15 = 628U;

	t15 = (x621|((x622<x623)>>x624));

	if (t15 != 1102154716U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x650 = INT16_MAX;
	uint16_t x651 = 4429U;
	int32_t x652 = 9;
	int32_t t16 = INT32_MIN;

	t16 = (x649|((x650<x651)>>x652));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x661 = -3;

	t17 = (x661|((x662<x663)>>x664));

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x689 = -1;
	volatile uint32_t x690 = UINT32_MAX;
	int8_t x691 = -1;
	static volatile int32_t t18 = 4;

	t18 = (x689|((x690<x691)>>x692));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x693 = INT8_MIN;
	int64_t x694 = INT64_MAX;
	static volatile uint16_t x695 = 107U;
	static uint8_t x696 = 7U;

	t19 = (x693|((x694<x695)>>x696));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x713 = UINT8_MAX;
	static int64_t x714 = INT64_MIN;
	uint8_t x715 = UINT8_MAX;
	int8_t x716 = 1;
	volatile int32_t t20 = -30845250;

	t20 = (x713|((x714<x715)>>x716));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x729 = 229768639U;
	int8_t x731 = INT8_MIN;
	uint8_t x732 = 27U;
	static uint32_t t21 = 541262U;

	t21 = (x729|((x730<x731)>>x732));

	if (t21 != 229768639U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x777 = UINT8_MAX;
	volatile int8_t x778 = INT8_MIN;
	int32_t x779 = -1;
	static uint8_t x780 = 1U;
	int32_t t22 = 1;

	t22 = (x777|((x778<x779)>>x780));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x813 = 9;
	volatile uint32_t x815 = UINT32_MAX;
	static uint32_t x816 = 11U;
	static volatile int32_t t23 = 865161;

	t23 = (x813|((x814<x815)>>x816));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x833 = -1;
	volatile int8_t x834 = -25;
	volatile uint16_t x835 = 1800U;
	uint64_t x836 = 0LLU;
	volatile int32_t t24 = 56647394;

	t24 = (x833|((x834<x835)>>x836));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x921 = UINT8_MAX;
	int16_t x922 = 51;
	uint16_t x923 = 462U;
	static int8_t x924 = 3;
	volatile int32_t t25 = 155471;

	t25 = (x921|((x922<x923)>>x924));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x947 = 593539;
	uint64_t x948 = 21LLU;

	t26 = (x945|((x946<x947)>>x948));

	if (t26 != 10665) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x953 = 7988;
	int32_t x954 = -1;
	int8_t x955 = -1;
	static uint16_t x956 = 6U;
	static int32_t t27 = 6580242;

	t27 = (x953|((x954<x955)>>x956));

	if (t27 != 7988) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x998 = INT32_MIN;
	int32_t x999 = 0;
	volatile uint8_t x1000 = 11U;

	t28 = (x997|((x998<x999)>>x1000));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1033 = INT32_MIN;
	int16_t x1034 = INT16_MAX;
	int64_t x1035 = 2423002532023LL;

	t29 = (x1033|((x1034<x1035)>>x1036));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1053 = INT16_MIN;
	volatile uint16_t x1054 = 5U;
	static int64_t x1055 = 54292136LL;
	uint8_t x1056 = 6U;

	t30 = (x1053|((x1054<x1055)>>x1056));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1077 = 6275290LLU;
	int64_t x1078 = INT64_MIN;
	volatile int8_t x1080 = 1;
	static uint64_t t31 = 6536784107762552LLU;

	t31 = (x1077|((x1078<x1079)>>x1080));

	if (t31 != 6275290LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1093 = -2092375401328331695LL;
	static int64_t x1094 = INT64_MAX;
	int16_t x1095 = INT16_MIN;
	int32_t x1096 = 20;
	int64_t t32 = -32609740862750LL;

	t32 = (x1093|((x1094<x1095)>>x1096));

	if (t32 != -2092375401328331695LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1106 = INT8_MIN;
	uint8_t x1107 = 21U;
	uint8_t x1108 = 1U;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x1105|((x1106<x1107)>>x1108));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1245 = 1U;
	int16_t x1246 = INT16_MAX;
	static int8_t x1247 = INT8_MIN;
	int32_t t34 = -1;

	t34 = (x1245|((x1246<x1247)>>x1248));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1314 = INT32_MAX;
	int64_t x1315 = INT64_MAX;
	static volatile uint8_t x1316 = 0U;

	t35 = (x1313|((x1314<x1315)>>x1316));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1325 = 13U;
	int64_t x1326 = -20163LL;
	static volatile uint16_t x1327 = 2444U;

	t36 = (x1325|((x1326<x1327)>>x1328));

	if (t36 != 13U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1345 = 745539117901LL;
	static int32_t x1347 = INT32_MIN;
	static int8_t x1348 = 15;

	t37 = (x1345|((x1346<x1347)>>x1348));

	if (t37 != 745539117901LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1375 = UINT32_MAX;
	int16_t x1376 = 18;
	uint32_t t38 = 7962567U;

	t38 = (x1373|((x1374<x1375)>>x1376));

	if (t38 != 62387267U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1437 = INT16_MIN;
	int16_t x1438 = INT16_MIN;
	volatile int16_t x1439 = INT16_MIN;
	uint64_t x1440 = 29LLU;
	volatile int32_t t39 = 6093;

	t39 = (x1437|((x1438<x1439)>>x1440));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1541 = UINT8_MAX;
	uint16_t x1542 = 4U;
	int8_t x1543 = -1;
	static uint8_t x1544 = 0U;

	t40 = (x1541|((x1542<x1543)>>x1544));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1625 = INT16_MAX;
	uint32_t x1626 = UINT32_MAX;
	uint64_t x1628 = 22LLU;

	t41 = (x1625|((x1626<x1627)>>x1628));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1649 = 943181U;
	int8_t x1651 = -1;
	static volatile uint64_t x1652 = 0LLU;
	uint32_t t42 = 15U;

	t42 = (x1649|((x1650<x1651)>>x1652));

	if (t42 != 943181U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1681 = INT8_MAX;
	volatile int16_t x1683 = INT16_MIN;
	static volatile int32_t t43 = 1175441;

	t43 = (x1681|((x1682<x1683)>>x1684));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1689 = -1;
	volatile uint32_t x1690 = 46767U;
	int32_t x1691 = -13;
	int16_t x1692 = 4;
	volatile int32_t t44 = 3;

	t44 = (x1689|((x1690<x1691)>>x1692));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1713 = 14U;
	int32_t x1714 = -46525199;
	int32_t x1715 = 706485087;
	uint8_t x1716 = 25U;

	t45 = (x1713|((x1714<x1715)>>x1716));

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1753 = 4;
	uint32_t x1754 = UINT32_MAX;
	int8_t x1755 = -1;
	int32_t t46 = 701382320;

	t46 = (x1753|((x1754<x1755)>>x1756));

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1841 = UINT64_MAX;
	int32_t x1842 = 271467559;
	uint8_t x1844 = 8U;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x1841|((x1842<x1843)>>x1844));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1853 = 0;
	static volatile int32_t x1854 = INT32_MAX;
	int8_t x1856 = 12;
	static int32_t t48 = 933322828;

	t48 = (x1853|((x1854<x1855)>>x1856));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1905 = 3529U;
	static volatile int64_t x1906 = INT64_MIN;
	int16_t x1907 = -1;
	uint16_t x1908 = 2U;

	t49 = (x1905|((x1906<x1907)>>x1908));

	if (t49 != 3529) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1965 = -12006;
	int16_t x1966 = -2;
	uint8_t x1967 = UINT8_MAX;
	static int32_t t50 = -255423705;

	t50 = (x1965|((x1966<x1967)>>x1968));

	if (t50 != -12006) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1969 = 20137U;
	int64_t x1970 = INT64_MIN;
	int16_t x1971 = 1;
	int32_t x1972 = 0;

	t51 = (x1969|((x1970<x1971)>>x1972));

	if (t51 != 20137U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1983 = 2;
	volatile int16_t x1984 = 0;
	static volatile int32_t t52 = 284;

	t52 = (x1981|((x1982<x1983)>>x1984));

	if (t52 != 21) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2001 = -1;
	int8_t x2002 = INT8_MIN;
	int8_t x2004 = 3;
	volatile int32_t t53 = -423135251;

	t53 = (x2001|((x2002<x2003)>>x2004));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x2023 = INT64_MIN;
	uint16_t x2024 = 3U;
	int32_t t54 = 1737;

	t54 = (x2021|((x2022<x2023)>>x2024));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2042 = INT64_MIN;
	uint32_t x2043 = UINT32_MAX;
	uint32_t x2044 = 3U;
	int32_t t55 = -978;

	t55 = (x2041|((x2042<x2043)>>x2044));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2069 = 22;
	volatile int32_t x2070 = INT32_MAX;
	uint64_t x2071 = 929872686LLU;
	static int8_t x2072 = 0;
	int32_t t56 = 389498;

	t56 = (x2069|((x2070<x2071)>>x2072));

	if (t56 != 22) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2073 = 2850U;
	int8_t x2074 = -1;
	int64_t x2076 = 1LL;
	uint32_t t57 = 101580U;

	t57 = (x2073|((x2074<x2075)>>x2076));

	if (t57 != 2850U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2081 = 1832;
	uint64_t x2082 = 964189931798411676LLU;
	static uint8_t x2083 = UINT8_MAX;

	t58 = (x2081|((x2082<x2083)>>x2084));

	if (t58 != 1832) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2097 = INT8_MIN;
	uint32_t x2098 = 15U;
	volatile int16_t x2100 = 0;
	int32_t t59 = 122317;

	t59 = (x2097|((x2098<x2099)>>x2100));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2113 = UINT32_MAX;
	uint8_t x2115 = UINT8_MAX;

	t60 = (x2113|((x2114<x2115)>>x2116));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2121 = -1;
	int8_t x2122 = INT8_MIN;
	int32_t x2123 = INT32_MIN;
	volatile uint8_t x2124 = 16U;
	int32_t t61 = 1377;

	t61 = (x2121|((x2122<x2123)>>x2124));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2129 = 17LL;
	static uint8_t x2130 = UINT8_MAX;
	static int64_t t62 = 414149910831034LL;

	t62 = (x2129|((x2130<x2131)>>x2132));

	if (t62 != 17LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2137 = INT16_MAX;
	static int32_t x2138 = -211;
	uint8_t x2140 = 2U;
	static volatile int32_t t63 = 44262;

	t63 = (x2137|((x2138<x2139)>>x2140));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2145 = 77U;
	uint16_t x2147 = 3U;
	uint16_t x2148 = 2U;
	volatile int32_t t64 = -74620768;

	t64 = (x2145|((x2146<x2147)>>x2148));

	if (t64 != 77) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x2253 = UINT16_MAX;
	int32_t x2255 = -1;
	static volatile int32_t t65 = -187;

	t65 = (x2253|((x2254<x2255)>>x2256));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2421 = 1819;
	static int32_t x2422 = INT32_MIN;
	uint32_t x2424 = 2U;
	volatile int32_t t66 = 10846;

	t66 = (x2421|((x2422<x2423)>>x2424));

	if (t66 != 1819) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2441 = INT32_MIN;
	int8_t x2444 = 1;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x2441|((x2442<x2443)>>x2444));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2445 = 16U;
	static int16_t x2446 = INT16_MIN;
	int64_t x2447 = -1LL;
	int16_t x2448 = 3;

	t68 = (x2445|((x2446<x2447)>>x2448));

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2461 = -6LL;
	uint64_t x2463 = 51LLU;
	uint32_t x2464 = 1U;

	t69 = (x2461|((x2462<x2463)>>x2464));

	if (t69 != -6LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2485 = -621837473958LL;
	int64_t x2486 = INT64_MIN;
	uint16_t x2487 = 6071U;
	uint32_t x2488 = 24U;
	volatile int64_t t70 = 3927028176163139675LL;

	t70 = (x2485|((x2486<x2487)>>x2488));

	if (t70 != -621837473958LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2565 = -25;
	int8_t x2566 = INT8_MAX;
	volatile uint64_t x2567 = UINT64_MAX;
	int32_t x2568 = 1;

	t71 = (x2565|((x2566<x2567)>>x2568));

	if (t71 != -25) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2613 = 37U;
	int32_t x2614 = INT32_MIN;
	uint32_t x2615 = 4602517U;
	uint8_t x2616 = 1U;
	static int32_t t72 = 393;

	t72 = (x2613|((x2614<x2615)>>x2616));

	if (t72 != 37) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x2657 = 61U;
	int64_t x2658 = INT64_MIN;
	int64_t x2659 = 7986224778763LL;
	volatile uint8_t x2660 = 4U;

	t73 = (x2657|((x2658<x2659)>>x2660));

	if (t73 != 61) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2693 = -1;
	static int32_t x2694 = INT32_MIN;
	volatile uint32_t x2695 = UINT32_MAX;
	static int8_t x2696 = 0;

	t74 = (x2693|((x2694<x2695)>>x2696));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2709 = UINT32_MAX;
	uint16_t x2712 = 14U;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x2709|((x2710<x2711)>>x2712));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2721 = UINT32_MAX;
	static volatile int16_t x2723 = INT16_MIN;

	t76 = (x2721|((x2722<x2723)>>x2724));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2733 = INT32_MIN;
	static int8_t x2734 = -1;
	uint32_t x2735 = 1U;
	int64_t x2736 = 1LL;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x2733|((x2734<x2735)>>x2736));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2817 = INT16_MAX;
	volatile int32_t x2818 = 1;
	volatile uint16_t x2819 = UINT16_MAX;
	int8_t x2820 = 1;
	volatile int32_t t78 = 1;

	t78 = (x2817|((x2818<x2819)>>x2820));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2825 = INT8_MIN;
	static volatile int16_t x2826 = -1;
	uint64_t x2827 = 1897347348548888LLU;
	int16_t x2828 = 7;
	int32_t t79 = -103414;

	t79 = (x2825|((x2826<x2827)>>x2828));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2849 = -1;
	uint8_t x2851 = 24U;
	int32_t t80 = -1;

	t80 = (x2849|((x2850<x2851)>>x2852));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2901 = INT64_MIN;
	uint32_t x2902 = 49531U;
	static volatile int16_t x2903 = INT16_MIN;
	volatile int64_t t81 = -398785104632235011LL;

	t81 = (x2901|((x2902<x2903)>>x2904));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2936 = 1U;
	uint64_t t82 = 816LLU;

	t82 = (x2933|((x2934<x2935)>>x2936));

	if (t82 != 32LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2942 = INT8_MIN;
	volatile uint32_t x2944 = 1U;
	int32_t t83 = 15;

	t83 = (x2941|((x2942<x2943)>>x2944));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2953 = 14U;
	volatile uint16_t x2954 = 131U;
	static volatile uint64_t x2955 = 925732899726572LLU;
	uint32_t x2956 = 6U;
	int32_t t84 = 16558874;

	t84 = (x2953|((x2954<x2955)>>x2956));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2977 = -79583;
	uint32_t x2978 = 16717404U;
	volatile uint64_t x2979 = UINT64_MAX;
	static int16_t x2980 = 0;
	int32_t t85 = -839741200;

	t85 = (x2977|((x2978<x2979)>>x2980));

	if (t85 != -79583) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2986 = 43783130U;
	volatile uint16_t x2987 = 14757U;
	static int32_t x2988 = 29;

	t86 = (x2985|((x2986<x2987)>>x2988));

	if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3029 = 7176849U;
	int8_t x3030 = INT8_MIN;
	static uint64_t x3031 = 338777LLU;
	static uint32_t t87 = 11095U;

	t87 = (x3029|((x3030<x3031)>>x3032));

	if (t87 != 7176849U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x3038 = -1LL;
	static int16_t x3039 = -7473;
	int8_t x3040 = 0;
	volatile int32_t t88 = 535700246;

	t88 = (x3037|((x3038<x3039)>>x3040));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3047 = -1;
	int16_t x3048 = 0;
	int32_t t89 = -3623;

	t89 = (x3045|((x3046<x3047)>>x3048));

	if (t89 != 9381) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3093 = UINT8_MAX;
	static uint64_t x3094 = 2016039LLU;
	int32_t x3095 = INT32_MAX;
	int8_t x3096 = 1;
	volatile int32_t t90 = -1;

	t90 = (x3093|((x3094<x3095)>>x3096));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3106 = INT16_MAX;
	static uint8_t x3108 = 6U;

	t91 = (x3105|((x3106<x3107)>>x3108));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3138 = 22;
	int16_t x3139 = INT16_MAX;
	volatile int32_t t92 = -1769436;

	t92 = (x3137|((x3138<x3139)>>x3140));

	if (t92 != 10152) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3157 = -8;
	int16_t x3158 = INT16_MAX;
	int32_t x3159 = 1429;
	static int16_t x3160 = 2;

	t93 = (x3157|((x3158<x3159)>>x3160));

	if (t93 != -8) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3173 = -1;
	int16_t x3175 = INT16_MAX;
	int16_t x3176 = 1;
	int32_t t94 = -12884;

	t94 = (x3173|((x3174<x3175)>>x3176));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3177 = -7;
	static int16_t x3178 = INT16_MIN;
	static uint32_t x3179 = UINT32_MAX;
	volatile uint8_t x3180 = 0U;
	volatile int32_t t95 = -39242;

	t95 = (x3177|((x3178<x3179)>>x3180));

	if (t95 != -7) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3209 = 6U;
	int8_t x3210 = INT8_MAX;
	int8_t x3211 = 1;
	int8_t x3212 = 1;

	t96 = (x3209|((x3210<x3211)>>x3212));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3213 = INT64_MAX;
	static uint32_t x3214 = 28752U;
	int8_t x3215 = INT8_MAX;
	uint16_t x3216 = 12U;
	static int64_t t97 = INT64_MAX;

	t97 = (x3213|((x3214<x3215)>>x3216));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3229 = -1;
	int8_t x3230 = 0;
	volatile int32_t x3231 = -5701;
	volatile uint8_t x3232 = 3U;

	t98 = (x3229|((x3230<x3231)>>x3232));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3257 = -25537LL;
	int32_t x3259 = INT32_MAX;
	volatile int64_t t99 = 53508820620472510LL;

	t99 = (x3257|((x3258<x3259)>>x3260));

	if (t99 != -25537LL) { NG(); } else { ; }
	
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

