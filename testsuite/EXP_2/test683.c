#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x29 = -3;
int8_t x123 = -1;
static int32_t t2 = 13;
int16_t x262 = INT16_MAX;
int8_t x263 = INT8_MIN;
uint32_t x264 = 25U;
volatile uint64_t t5 = 42885384329750LLU;
int32_t x490 = INT32_MAX;
int32_t x579 = INT32_MAX;
uint64_t x605 = UINT64_MAX;
uint16_t x733 = 6U;
int32_t t11 = 783643581;
uint64_t x738 = 233155204LLU;
static volatile uint16_t x740 = 25U;
static volatile int64_t x766 = INT64_MIN;
static int16_t x767 = INT16_MIN;
int16_t x827 = INT16_MIN;
volatile int32_t t15 = -345;
static volatile int32_t x862 = INT32_MIN;
int8_t x864 = 3;
uint16_t x892 = 0U;
volatile uint64_t t17 = 31478481LLU;
uint64_t t18 = 34075LLU;
uint8_t x1052 = 9U;
volatile int16_t x1166 = 5092;
uint32_t x1168 = 6U;
int8_t x1174 = INT8_MIN;
volatile int32_t t24 = 19457872;
static uint16_t x1246 = 1872U;
static int8_t x1247 = INT8_MAX;
int32_t x1427 = -1;
uint64_t t29 = 3107652144939939612LLU;
uint16_t x1447 = UINT16_MAX;
uint64_t t30 = 2363173LLU;
int8_t x1496 = 0;
uint16_t x1504 = 7U;
int64_t x1564 = 0LL;
volatile int16_t x1595 = INT16_MIN;
static uint16_t x1596 = 1U;
static int32_t x1599 = -198279576;
static volatile int32_t t35 = 627125;
int64_t t36 = 9728940LL;
volatile uint32_t t37 = 20U;
uint8_t x1706 = UINT8_MAX;
volatile int16_t x1707 = INT16_MAX;
static uint16_t x1726 = UINT16_MAX;
int64_t x1731 = -1LL;
static int64_t x1807 = INT64_MIN;
uint8_t x1836 = 0U;
static int32_t t43 = 1027391;
volatile uint8_t x1891 = UINT8_MAX;
int32_t x1892 = 0;
uint32_t x1913 = UINT32_MAX;
volatile int32_t x1915 = -1;
uint8_t x1916 = 1U;
int64_t x1921 = INT64_MAX;
static uint8_t x2098 = 3U;
volatile uint16_t x2100 = 1U;
static volatile int32_t t48 = -7036;
int64_t x2307 = -1LL;
int64_t t54 = -273LL;
uint64_t x2343 = 178120579585250401LLU;
uint8_t x2344 = 13U;
static int64_t x2367 = -1LL;
volatile uint64_t t57 = 14921LLU;
static int16_t x2369 = -326;
int16_t x2371 = -129;
volatile int32_t t59 = -3;
int64_t x2473 = -1LL;
static volatile int64_t x2475 = INT64_MIN;
volatile int64_t x2710 = 7247LL;
uint8_t x2712 = 8U;
volatile int64_t t62 = -1525321LL;
uint64_t t63 = 31914LLU;
static uint16_t x2912 = 1U;
int32_t x2929 = -1;
int16_t x2974 = INT16_MIN;
static volatile int16_t x3005 = INT16_MAX;
volatile int32_t t67 = 6709;
int32_t x3028 = 1;
uint32_t x3037 = UINT32_MAX;
int64_t x3038 = -1LL;
int8_t x3040 = 5;
static volatile uint64_t t69 = 8507630578227128109LLU;
volatile int16_t x3073 = INT16_MAX;
uint32_t x3074 = 2U;
volatile int32_t x3157 = -1;
volatile uint16_t x3253 = UINT16_MAX;
uint8_t x3256 = 1U;
static volatile uint64_t x3264 = 1LLU;
volatile int32_t t77 = 115;
uint64_t x3378 = UINT64_MAX;
int32_t x3380 = 56;
uint64_t x3442 = UINT64_MAX;
int8_t x3444 = 3;
volatile uint64_t t90 = 105430609476516LLU;
uint8_t x3723 = 3U;
uint32_t x3793 = UINT32_MAX;
static volatile uint32_t t92 = 119212U;
int8_t x3797 = 41;
volatile uint64_t t93 = 1036780779416363598LLU;
int16_t x3935 = INT16_MIN;
uint8_t x3936 = 13U;
volatile int32_t x3938 = INT32_MAX;
volatile int32_t t98 = 20214;
int32_t x4055 = 19133711;


void f0(void) {
	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MAX;
	uint16_t x32 = 0U;
	int32_t t0 = -195;

	t0 = ((x29+(x30%x31))>>x32);

	if (t0 != 124) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x69 = UINT16_MAX;
	int8_t x70 = -31;
	static uint8_t x71 = 41U;
	uint8_t x72 = 7U;
	static int32_t t1 = -1701;

	t1 = ((x69+(x70%x71))>>x72);

	if (t1 != 511) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x121 = 39U;
	static volatile uint8_t x122 = 23U;
	volatile int16_t x124 = 1;

	t2 = ((x121+(x122%x123))>>x124);

	if (t2 != 19) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint16_t x170 = 62U;
	uint16_t x171 = 20269U;
	static uint64_t x172 = 5LLU;
	volatile uint64_t t3 = 22798848LLU;

	t3 = ((x169+(x170%x171))>>x172);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x261 = 4U;
	volatile int32_t t4 = 0;

	t4 = ((x261+(x262%x263))>>x264);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x301 = 1013578977947LLU;
	static volatile int64_t x302 = INT64_MAX;
	uint8_t x303 = 1U;
	uint16_t x304 = 0U;

	t5 = ((x301+(x302%x303))>>x304);

	if (t5 != 1013578977947LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x489 = INT16_MIN;
	static uint32_t x491 = 235U;
	uint8_t x492 = 1U;
	volatile uint32_t t6 = 200U;

	t6 = ((x489+(x490%x491))>>x492);

	if (t6 != 2147467297U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x569 = 434U;
	int16_t x570 = 6273;
	int16_t x571 = -1;
	static int8_t x572 = 15;
	static volatile uint32_t t7 = 718U;

	t7 = ((x569+(x570%x571))>>x572);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x577 = UINT8_MAX;
	uint64_t x578 = 2256LLU;
	volatile int16_t x580 = 0;
	uint64_t t8 = 33021191LLU;

	t8 = ((x577+(x578%x579))>>x580);

	if (t8 != 2511LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x606 = 4599U;
	volatile uint64_t x607 = 22559707276LLU;
	uint16_t x608 = 14U;
	uint64_t t9 = 62587LLU;

	t9 = ((x605+(x606%x607))>>x608);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x729 = -1;
	static int8_t x730 = 37;
	int8_t x731 = INT8_MAX;
	int8_t x732 = 23;
	int32_t t10 = -110151753;

	t10 = ((x729+(x730%x731))>>x732);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x734 = 2174;
	static volatile uint8_t x735 = 85U;
	volatile uint8_t x736 = 1U;

	t11 = ((x733+(x734%x735))>>x736);

	if (t11 != 27) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x737 = 1928U;
	uint64_t x739 = UINT64_MAX;
	uint64_t t12 = 18202770432197LLU;

	t12 = ((x737+(x738%x739))>>x740);

	if (t12 != 6LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x761 = 0U;
	volatile int32_t x762 = INT32_MIN;
	int16_t x763 = INT16_MIN;
	uint8_t x764 = 1U;
	static volatile int32_t t13 = 138628;

	t13 = ((x761+(x762%x763))>>x764);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x765 = 35LL;
	int16_t x768 = 57;
	volatile int64_t t14 = -244627646078679LL;

	t14 = ((x765+(x766%x767))>>x768);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x825 = INT8_MIN;
	uint16_t x826 = UINT16_MAX;
	static uint32_t x828 = 10U;

	t15 = ((x825+(x826%x827))>>x828);

	if (t15 != 31) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x861 = UINT64_MAX;
	static uint16_t x863 = 250U;
	static uint64_t t16 = 9430518685LLU;

	t16 = ((x861+(x862%x863))>>x864);

	if (t16 != 2305843009213693933LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x889 = 1117LLU;
	volatile int64_t x890 = INT64_MIN;
	uint8_t x891 = 8U;

	t17 = ((x889+(x890%x891))>>x892);

	if (t17 != 1117LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x953 = UINT32_MAX;
	volatile uint64_t x954 = 46432387278544LLU;
	int8_t x955 = 5;
	static volatile uint16_t x956 = 62U;

	t18 = ((x953+(x954%x955))>>x956);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x977 = 6LL;
	volatile int64_t x978 = -1LL;
	int16_t x979 = INT16_MAX;
	volatile uint8_t x980 = 6U;
	volatile int64_t t19 = 22LL;

	t19 = ((x977+(x978%x979))>>x980);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1045 = 29;
	int64_t x1046 = INT64_MAX;
	uint64_t x1047 = UINT64_MAX;
	volatile uint16_t x1048 = 13U;
	volatile uint64_t t20 = 1LLU;

	t20 = ((x1045+(x1046%x1047))>>x1048);

	if (t20 != 1125899906842624LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1049 = 696;
	static int8_t x1050 = INT8_MAX;
	uint16_t x1051 = 1876U;
	int32_t t21 = 255633339;

	t21 = ((x1049+(x1050%x1051))>>x1052);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1161 = UINT64_MAX;
	int16_t x1162 = INT16_MIN;
	uint16_t x1163 = UINT16_MAX;
	uint8_t x1164 = 13U;
	static volatile uint64_t t22 = 821637271LLU;

	t22 = ((x1161+(x1162%x1163))>>x1164);

	if (t22 != 2251799813685243LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1165 = 1218U;
	volatile uint64_t x1167 = 19183195521793760LLU;
	uint64_t t23 = 84483LLU;

	t23 = ((x1165+(x1166%x1167))>>x1168);

	if (t23 != 98LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1173 = UINT8_MAX;
	volatile uint8_t x1175 = 50U;
	volatile uint8_t x1176 = 2U;

	t24 = ((x1173+(x1174%x1175))>>x1176);

	if (t24 != 56) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1245 = UINT64_MAX;
	volatile uint8_t x1248 = 52U;
	volatile uint64_t t25 = 1LLU;

	t25 = ((x1245+(x1246%x1247))>>x1248);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1337 = -1;
	volatile int32_t x1338 = INT32_MAX;
	int64_t x1339 = INT64_MIN;
	uint16_t x1340 = 30U;
	static int64_t t26 = 30186855288LL;

	t26 = ((x1337+(x1338%x1339))>>x1340);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1345 = -1;
	uint64_t x1346 = 6155706096992LLU;
	int16_t x1347 = INT16_MIN;
	int32_t x1348 = 0;
	uint64_t t27 = 21902722708LLU;

	t27 = ((x1345+(x1346%x1347))>>x1348);

	if (t27 != 6155706096991LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1381 = 54867344U;
	uint16_t x1382 = 147U;
	volatile int8_t x1383 = INT8_MAX;
	static uint16_t x1384 = 2U;
	volatile uint32_t t28 = 228U;

	t28 = ((x1381+(x1382%x1383))>>x1384);

	if (t28 != 13716841U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1425 = INT32_MAX;
	uint64_t x1426 = 1419646082391361LLU;
	uint16_t x1428 = 52U;

	t29 = ((x1425+(x1426%x1427))>>x1428);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1445 = INT8_MIN;
	uint64_t x1446 = UINT64_MAX;
	static int64_t x1448 = 1LL;

	t30 = ((x1445+(x1446%x1447))>>x1448);

	if (t30 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1493 = UINT64_MAX;
	int8_t x1494 = 17;
	int64_t x1495 = INT64_MIN;
	uint64_t t31 = 9665587LLU;

	t31 = ((x1493+(x1494%x1495))>>x1496);

	if (t31 != 16LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1501 = 3U;
	volatile int16_t x1502 = 1922;
	static int16_t x1503 = INT16_MIN;
	volatile int32_t t32 = -51547503;

	t32 = ((x1501+(x1502%x1503))>>x1504);

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1561 = UINT8_MAX;
	static int32_t x1562 = -1;
	int32_t x1563 = INT32_MIN;
	int32_t t33 = 11;

	t33 = ((x1561+(x1562%x1563))>>x1564);

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1593 = INT32_MIN;
	uint32_t x1594 = UINT32_MAX;
	volatile uint32_t t34 = 1662658680U;

	t34 = ((x1593+(x1594%x1595))>>x1596);

	if (t34 != 1073758207U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1597 = 24U;
	static int16_t x1598 = 1641;
	int8_t x1600 = 8;

	t35 = ((x1597+(x1598%x1599))>>x1600);

	if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1617 = INT16_MAX;
	uint8_t x1618 = 61U;
	int64_t x1619 = INT64_MIN;
	volatile int8_t x1620 = 61;

	t36 = ((x1617+(x1618%x1619))>>x1620);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1629 = -1;
	static uint32_t x1630 = UINT32_MAX;
	int8_t x1631 = INT8_MIN;
	int8_t x1632 = 0;

	t37 = ((x1629+(x1630%x1631))>>x1632);

	if (t37 != 126U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1689 = UINT16_MAX;
	volatile int8_t x1690 = INT8_MIN;
	int64_t x1691 = -7LL;
	uint8_t x1692 = 16U;
	volatile int64_t t38 = -13031403088LL;

	t38 = ((x1689+(x1690%x1691))>>x1692);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1705 = 11U;
	volatile uint8_t x1708 = 0U;
	volatile int32_t t39 = -44317;

	t39 = ((x1705+(x1706%x1707))>>x1708);

	if (t39 != 266) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1725 = 26;
	int16_t x1727 = -17;
	static volatile int64_t x1728 = 0LL;
	static volatile int32_t t40 = -15975;

	t40 = ((x1725+(x1726%x1727))>>x1728);

	if (t40 != 26) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1729 = 7U;
	int8_t x1730 = INT8_MAX;
	static uint8_t x1732 = 2U;
	static volatile int64_t t41 = -2860LL;

	t41 = ((x1729+(x1730%x1731))>>x1732);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1805 = INT32_MAX;
	volatile int32_t x1806 = 3;
	int8_t x1808 = 7;
	volatile int64_t t42 = -149921872575454LL;

	t42 = ((x1805+(x1806%x1807))>>x1808);

	if (t42 != 16777216LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1833 = 37U;
	static uint8_t x1834 = 30U;
	static int8_t x1835 = -8;

	t43 = ((x1833+(x1834%x1835))>>x1836);

	if (t43 != 43) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1889 = UINT32_MAX;
	int32_t x1890 = INT32_MAX;
	static volatile uint32_t t44 = 1820437202U;

	t44 = ((x1889+(x1890%x1891))>>x1892);

	if (t44 != 126U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1914 = INT64_MIN;
	volatile int64_t t45 = -604493477622981674LL;

	t45 = ((x1913+(x1914%x1915))>>x1916);

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1922 = INT8_MIN;
	int32_t x1923 = -1;
	uint8_t x1924 = 11U;
	volatile int64_t t46 = 62448011466895LL;

	t46 = ((x1921+(x1922%x1923))>>x1924);

	if (t46 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2005 = UINT16_MAX;
	volatile int16_t x2006 = -1;
	static int8_t x2007 = INT8_MIN;
	int32_t x2008 = 1;
	volatile int32_t t47 = 2926;

	t47 = ((x2005+(x2006%x2007))>>x2008);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2097 = INT16_MAX;
	uint16_t x2099 = UINT16_MAX;

	t48 = ((x2097+(x2098%x2099))>>x2100);

	if (t48 != 16385) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2117 = UINT16_MAX;
	static int32_t x2118 = -151952;
	uint64_t x2119 = 1972436LLU;
	uint16_t x2120 = 4U;
	volatile uint64_t t49 = 55663227LLU;

	t49 = ((x2117+(x2118%x2119))>>x2120);

	if (t49 != 13634LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2205 = 5867381;
	volatile uint64_t x2206 = UINT64_MAX;
	static uint32_t x2207 = UINT32_MAX;
	int16_t x2208 = 1;
	volatile uint64_t t50 = 22925047056140755LLU;

	t50 = ((x2205+(x2206%x2207))>>x2208);

	if (t50 != 2933690LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2217 = -1;
	int8_t x2218 = INT8_MAX;
	volatile uint32_t x2219 = 504453U;
	uint16_t x2220 = 3U;
	volatile uint32_t t51 = 21273391U;

	t51 = ((x2217+(x2218%x2219))>>x2220);

	if (t51 != 15U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2237 = -2;
	int64_t x2238 = INT64_MAX;
	volatile int64_t x2239 = INT64_MIN;
	static uint8_t x2240 = 21U;
	volatile int64_t t52 = -1404448125886LL;

	t52 = ((x2237+(x2238%x2239))>>x2240);

	if (t52 != 4398046511103LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2305 = 1LLU;
	int16_t x2306 = INT16_MAX;
	uint8_t x2308 = 62U;
	static volatile uint64_t t53 = 77353598474LLU;

	t53 = ((x2305+(x2306%x2307))>>x2308);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2317 = 28712U;
	int64_t x2318 = 3362592758337698LL;
	int64_t x2319 = -1LL;
	static int32_t x2320 = 3;

	t54 = ((x2317+(x2318%x2319))>>x2320);

	if (t54 != 3589LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2325 = INT32_MAX;
	int8_t x2326 = INT8_MIN;
	int16_t x2327 = INT16_MAX;
	uint16_t x2328 = 1U;
	static int32_t t55 = 1512149;

	t55 = ((x2325+(x2326%x2327))>>x2328);

	if (t55 != 1073741759) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2341 = INT64_MAX;
	int16_t x2342 = -1;
	uint64_t t56 = 768046333541188604LLU;

	t56 = ((x2341+(x2342%x2343))>>x2344);

	if (t56 != 1138146534824650LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2365 = UINT64_MAX;
	static int16_t x2366 = INT16_MIN;
	static uint8_t x2368 = 13U;

	t57 = ((x2365+(x2366%x2367))>>x2368);

	if (t57 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2370 = UINT64_MAX;
	uint8_t x2372 = 0U;
	volatile uint64_t t58 = 12955500421665LLU;

	t58 = ((x2369+(x2370%x2371))>>x2372);

	if (t58 != 18446744073709551418LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2433 = INT16_MAX;
	int8_t x2434 = INT8_MIN;
	static int16_t x2435 = -1;
	volatile uint32_t x2436 = 6U;

	t59 = ((x2433+(x2434%x2435))>>x2436);

	if (t59 != 511) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2474 = INT32_MAX;
	volatile uint8_t x2476 = 0U;
	volatile int64_t t60 = 1350748175674304LL;

	t60 = ((x2473+(x2474%x2475))>>x2476);

	if (t60 != 2147483646LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2497 = INT32_MAX;
	int16_t x2498 = -1;
	int32_t x2499 = -1;
	int32_t x2500 = 1;
	static int32_t t61 = -133;

	t61 = ((x2497+(x2498%x2499))>>x2500);

	if (t61 != 1073741823) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2709 = 12;
	int32_t x2711 = INT32_MAX;

	t62 = ((x2709+(x2710%x2711))>>x2712);

	if (t62 != 28LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2829 = UINT32_MAX;
	volatile int64_t x2830 = INT64_MIN;
	uint64_t x2831 = UINT64_MAX;
	int8_t x2832 = 1;

	t63 = ((x2829+(x2830%x2831))>>x2832);

	if (t63 != 4611686020574871551LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2909 = 3710U;
	uint64_t x2910 = UINT64_MAX;
	int32_t x2911 = -15549;
	static uint64_t t64 = 8135LLU;

	t64 = ((x2909+(x2910%x2911))>>x2912);

	if (t64 != 9629LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2930 = UINT64_MAX;
	static int64_t x2931 = INT64_MAX;
	static int8_t x2932 = 0;
	volatile uint64_t t65 = 598771161191657LLU;

	t65 = ((x2929+(x2930%x2931))>>x2932);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2973 = 267975U;
	int16_t x2975 = INT16_MAX;
	volatile uint16_t x2976 = 5U;
	volatile uint32_t t66 = 1390972U;

	t66 = ((x2973+(x2974%x2975))>>x2976);

	if (t66 != 8374U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3006 = INT32_MIN;
	int8_t x3007 = INT8_MIN;
	static volatile uint8_t x3008 = 0U;

	t67 = ((x3005+(x3006%x3007))>>x3008);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3025 = -1LL;
	int64_t x3026 = INT64_MAX;
	int32_t x3027 = INT32_MIN;
	volatile int64_t t68 = 261394LL;

	t68 = ((x3025+(x3026%x3027))>>x3028);

	if (t68 != 1073741823LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3039 = UINT64_MAX;

	t69 = ((x3037+(x3038%x3039))>>x3040);

	if (t69 != 134217727LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3075 = 48941957U;
	uint32_t x3076 = 0U;
	volatile uint32_t t70 = 1147212U;

	t70 = ((x3073+(x3074%x3075))>>x3076);

	if (t70 != 32769U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3101 = UINT64_MAX;
	int16_t x3102 = -1;
	static volatile int8_t x3103 = INT8_MAX;
	uint8_t x3104 = 1U;
	volatile uint64_t t71 = 620347523183LLU;

	t71 = ((x3101+(x3102%x3103))>>x3104);

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3158 = 21344825043818904LLU;
	int64_t x3159 = -208256LL;
	int32_t x3160 = 0;
	uint64_t t72 = 30490716542737942LLU;

	t72 = ((x3157+(x3158%x3159))>>x3160);

	if (t72 != 21344825043818903LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x3205 = UINT16_MAX;
	int16_t x3206 = -1;
	uint8_t x3207 = 8U;
	int8_t x3208 = 1;
	int32_t t73 = -216782;

	t73 = ((x3205+(x3206%x3207))>>x3208);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3213 = UINT16_MAX;
	int8_t x3214 = INT8_MAX;
	static int64_t x3215 = INT64_MIN;
	int8_t x3216 = 0;
	int64_t t74 = -1LL;

	t74 = ((x3213+(x3214%x3215))>>x3216);

	if (t74 != 65662LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3254 = 41;
	int32_t x3255 = INT32_MIN;
	volatile int32_t t75 = -6157;

	t75 = ((x3253+(x3254%x3255))>>x3256);

	if (t75 != 32788) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3261 = INT8_MAX;
	static int64_t x3262 = INT64_MIN;
	volatile int16_t x3263 = INT16_MAX;
	volatile int64_t t76 = 91LL;

	t76 = ((x3261+(x3262%x3263))>>x3264);

	if (t76 != 59LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3285 = INT8_MAX;
	int8_t x3286 = INT8_MAX;
	static volatile int32_t x3287 = INT32_MIN;
	uint16_t x3288 = 0U;

	t77 = ((x3285+(x3286%x3287))>>x3288);

	if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3341 = 3;
	static int8_t x3342 = 12;
	int64_t x3343 = 2174325892443142LL;
	int64_t x3344 = 18LL;
	int64_t t78 = 621LL;

	t78 = ((x3341+(x3342%x3343))>>x3344);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3353 = 3U;
	volatile int32_t x3354 = INT32_MIN;
	int16_t x3355 = -1;
	int8_t x3356 = 3;
	volatile int32_t t79 = 3;

	t79 = ((x3353+(x3354%x3355))>>x3356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x3377 = UINT32_MAX;
	uint64_t x3379 = 17469501496788LLU;
	uint64_t t80 = 101336140LLU;

	t80 = ((x3377+(x3378%x3379))>>x3380);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3381 = UINT8_MAX;
	int8_t x3382 = -22;
	int32_t x3383 = INT32_MIN;
	uint16_t x3384 = 1U;
	int32_t t81 = 4240;

	t81 = ((x3381+(x3382%x3383))>>x3384);

	if (t81 != 116) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3397 = 3LL;
	uint8_t x3398 = 3U;
	static volatile int8_t x3399 = INT8_MIN;
	int32_t x3400 = 1;
	int64_t t82 = -8579847953LL;

	t82 = ((x3397+(x3398%x3399))>>x3400);

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3425 = -1;
	uint16_t x3426 = 26405U;
	int8_t x3427 = INT8_MIN;
	uint8_t x3428 = 7U;
	volatile int32_t t83 = 0;

	t83 = ((x3425+(x3426%x3427))>>x3428);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3441 = -309LL;
	int32_t x3443 = INT32_MIN;
	volatile uint64_t t84 = 446890902824LLU;

	t84 = ((x3441+(x3442%x3443))>>x3444);

	if (t84 != 268435417LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3465 = 1U;
	uint8_t x3466 = 3U;
	uint16_t x3467 = 6616U;
	uint16_t x3468 = 6U;
	int32_t t85 = 1168;

	t85 = ((x3465+(x3466%x3467))>>x3468);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3485 = INT16_MIN;
	volatile uint64_t x3486 = 1567LLU;
	int16_t x3487 = -1;
	static uint16_t x3488 = 6U;
	uint64_t t86 = 1096701960527LLU;

	t86 = ((x3485+(x3486%x3487))>>x3488);

	if (t86 != 288230376151711256LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x3541 = 0;
	static uint16_t x3542 = 51U;
	volatile int16_t x3543 = -408;
	int8_t x3544 = 8;
	volatile int32_t t87 = -96592;

	t87 = ((x3541+(x3542%x3543))>>x3544);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3641 = INT64_MAX;
	uint64_t x3642 = 7034239636605166LLU;
	static uint8_t x3643 = 3U;
	volatile int8_t x3644 = 1;
	static volatile uint64_t t88 = 5533545369728464502LLU;

	t88 = ((x3641+(x3642%x3643))>>x3644);

	if (t88 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3645 = UINT32_MAX;
	int32_t x3646 = INT32_MIN;
	int8_t x3647 = -1;
	volatile uint32_t x3648 = 15U;
	volatile uint32_t t89 = 1U;

	t89 = ((x3645+(x3646%x3647))>>x3648);

	if (t89 != 131071U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3709 = 11632LLU;
	uint8_t x3710 = 22U;
	int32_t x3711 = INT32_MAX;
	static uint8_t x3712 = 1U;

	t90 = ((x3709+(x3710%x3711))>>x3712);

	if (t90 != 5827LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3721 = 287219313785041015LLU;
	static int32_t x3722 = 36;
	static volatile uint16_t x3724 = 7U;
	static volatile uint64_t t91 = 292437066522808LLU;

	t91 = ((x3721+(x3722%x3723))>>x3724);

	if (t91 != 2243900888945632LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3794 = 62U;
	uint32_t x3795 = 48677231U;
	uint64_t x3796 = 1LLU;

	t92 = ((x3793+(x3794%x3795))>>x3796);

	if (t92 != 30U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3798 = 4908183550738LLU;
	volatile int32_t x3799 = INT32_MIN;
	volatile uint8_t x3800 = 42U;

	t93 = ((x3797+(x3798%x3799))>>x3800);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3881 = 51U;
	uint16_t x3882 = 26400U;
	int32_t x3883 = 54051;
	int8_t x3884 = 4;
	uint32_t t94 = 14U;

	t94 = ((x3881+(x3882%x3883))>>x3884);

	if (t94 != 1653U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x3913 = 6U;
	int8_t x3914 = INT8_MIN;
	static int8_t x3915 = INT8_MAX;
	volatile uint16_t x3916 = 7U;
	volatile int32_t t95 = -2;

	t95 = ((x3913+(x3914%x3915))>>x3916);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x3921 = 37U;
	uint32_t x3922 = 10863271U;
	int32_t x3923 = INT32_MAX;
	static volatile uint16_t x3924 = 14U;
	volatile uint32_t t96 = 15970U;

	t96 = ((x3921+(x3922%x3923))>>x3924);

	if (t96 != 663U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x3933 = 166906;
	int8_t x3934 = -1;
	static volatile int32_t t97 = 56;

	t97 = ((x3933+(x3934%x3935))>>x3936);

	if (t97 != 20) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x3937 = 0U;
	static uint16_t x3939 = 108U;
	int8_t x3940 = 23;

	t98 = ((x3937+(x3938%x3939))>>x3940);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x4053 = UINT32_MAX;
	volatile int64_t x4054 = 1164LL;
	uint16_t x4056 = 1U;
	int64_t t99 = 36957377LL;

	t99 = ((x4053+(x4054%x4055))>>x4056);

	if (t99 != 2147484229LL) { NG(); } else { ; }
	
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

