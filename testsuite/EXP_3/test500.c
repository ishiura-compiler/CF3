#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 290969457114862LLU;
uint64_t x209 = UINT64_MAX;
volatile uint16_t x257 = 1U;
static uint32_t x258 = 35855496U;
int8_t x259 = INT8_MAX;
int16_t x373 = INT16_MIN;
int64_t x610 = 1854LL;
int64_t x667 = -26LL;
int32_t x789 = INT32_MIN;
volatile int32_t t7 = -247;
static uint64_t x871 = UINT64_MAX;
volatile int32_t t8 = -55884;
int8_t x905 = INT8_MIN;
uint8_t x907 = 0U;
int16_t x953 = -1;
static volatile int32_t t10 = 0;
uint32_t x977 = 128241U;
int16_t x978 = -915;
int8_t x1194 = -1;
volatile uint8_t x1195 = 0U;
static int8_t x1250 = 6;
int8_t x1252 = -1;
volatile int64_t t16 = 42720956LL;
int32_t x1536 = 0;
int64_t x1666 = INT64_MAX;
volatile int32_t t21 = 300998;
int8_t x1765 = INT8_MAX;
int16_t x1767 = 0;
static int8_t x1768 = INT8_MAX;
static int16_t x1899 = INT16_MIN;
int16_t x1900 = 0;
volatile int64_t x1942 = INT64_MAX;
int64_t t24 = -802828362445190084LL;
int16_t x1964 = 0;
uint16_t x2063 = 9345U;
uint64_t t26 = 82918LLU;
int16_t x2083 = -1;
static volatile int32_t x2084 = -1;
uint8_t x2098 = 19U;
int8_t x2163 = -3;
int64_t x2167 = -1LL;
volatile int64_t x2168 = -1LL;
uint32_t x2241 = UINT32_MAX;
int32_t x2244 = INT32_MIN;
volatile int32_t x2398 = -1;
volatile int64_t x2400 = INT64_MIN;
volatile int32_t t36 = 813;
int8_t x2432 = 0;
int64_t t40 = -55598669541911LL;
int16_t x2599 = -10;
uint32_t t42 = 6U;
static volatile uint64_t t45 = 1812266423LLU;
int32_t x3007 = INT32_MIN;
int64_t x3065 = -6093877152753LL;
int16_t x3066 = -1;
volatile int32_t x3067 = -1;
int64_t x3121 = INT64_MIN;
int16_t x3162 = INT16_MIN;
volatile int32_t t50 = 6885;
uint64_t x3358 = 1543993616616854577LLU;
int16_t x3437 = INT16_MAX;
static uint64_t x3590 = 2LLU;
static int32_t x3591 = -1;
uint32_t x3611 = UINT32_MAX;
int32_t x3673 = INT32_MAX;
int64_t x3790 = 39952195861608LL;
volatile uint64_t x3901 = 879191702LLU;
volatile uint64_t t60 = 7996307631LLU;
uint16_t x3909 = 51U;
volatile int64_t x3910 = INT64_MAX;
static uint16_t x3973 = 2548U;
int64_t x4117 = -15670033LL;
uint16_t x4243 = 0U;
int64_t t67 = -55502945076644LL;
static uint64_t x4410 = UINT64_MAX;
volatile uint64_t t68 = 4055233153795LLU;
int16_t x4431 = 23;
uint8_t x4440 = 0U;
static volatile int64_t t71 = -20LL;
uint64_t t72 = 267322745LLU;
static volatile int16_t x4692 = INT16_MIN;
volatile uint32_t x4794 = 11400U;
uint32_t t77 = 42U;
volatile uint32_t x4893 = UINT32_MAX;
volatile int16_t x4894 = -842;
int16_t x4896 = 0;
int32_t x5009 = -1;
int16_t x5011 = INT16_MIN;
uint16_t x5190 = 11U;
uint64_t x5310 = 28611LLU;
int32_t x5338 = 1833241;
int8_t x5397 = -1;
uint32_t t89 = 2U;
uint8_t x5682 = UINT8_MAX;
uint8_t x5770 = 57U;
int16_t x5898 = INT16_MAX;
static volatile int32_t t97 = -3974;
static uint32_t x5958 = UINT32_MAX;
static volatile int32_t x5959 = -1;
uint32_t t98 = 221687U;
uint32_t x6349 = 12930109U;
static uint32_t t99 = 120466U;


void f0(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = 170935474676091LLU;
	volatile uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = 0U;

	t0 = ((x125^x126)<<(x127*x128));

	if (t0 != 18446573138234892667LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x193 = 2760354365489622484LLU;
	static int8_t x194 = 0;
	volatile int8_t x195 = 1;
	uint8_t x196 = 11U;
	volatile uint64_t t1 = 4166462017615607LLU;

	t1 = ((x193^x194)<<(x195*x196));

	if (t1 != 8502053967624052736LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x210 = UINT32_MAX;
	uint32_t x211 = UINT32_MAX;
	static volatile int32_t x212 = -1;
	volatile uint64_t t2 = 18587827785096LLU;

	t2 = ((x209^x210)<<(x211*x212));

	if (t2 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x260 = 0;
	volatile uint32_t t3 = 80932U;

	t3 = ((x257^x258)<<(x259*x260));

	if (t3 != 35855497U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x374 = 545728448630LLU;
	static int64_t x375 = -1LL;
	volatile uint16_t x376 = 0U;
	volatile uint64_t t4 = 993733618402LLU;

	t4 = ((x373^x374)<<(x375*x376));

	if (t4 != 18446743527981107318LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x609 = 34627;
	volatile int16_t x611 = -1;
	static uint64_t x612 = UINT64_MAX;
	volatile int64_t t5 = -67534730447203348LL;

	t5 = ((x609^x610)<<(x611*x612));

	if (t5 != 65786LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x665 = INT32_MAX;
	uint32_t x666 = UINT32_MAX;
	int8_t x668 = -1;
	volatile uint32_t t6 = 94369826U;

	t6 = ((x665^x666)<<(x667*x668));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x790 = INT8_MIN;
	uint32_t x791 = 1158U;
	int32_t x792 = INT32_MIN;

	t7 = ((x789^x790)<<(x791*x792));

	if (t7 != 2147483520) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x869 = -1;
	int8_t x870 = -56;
	int64_t x872 = -1LL;

	t8 = ((x869^x870)<<(x871*x872));

	if (t8 != 110) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x906 = -3692;
	int64_t x908 = -3826721094978677074LL;
	volatile int32_t t9 = 20;

	t9 = ((x905^x906)<<(x907*x908));

	if (t9 != 3604) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x954 = -1;
	volatile uint32_t x955 = 1840072210U;
	int8_t x956 = 0;

	t10 = ((x953^x954)<<(x955*x956));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x979 = -1LL;
	int32_t x980 = -1;
	static volatile uint32_t t11 = 932713U;

	t11 = ((x977^x978)<<(x979*x980));

	if (t11 != 4294709560U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x989 = INT8_MAX;
	uint8_t x990 = UINT8_MAX;
	uint8_t x991 = 0U;
	int32_t x992 = -1;
	volatile int32_t t12 = -123443;

	t12 = ((x989^x990)<<(x991*x992));

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1025 = UINT64_MAX;
	volatile int64_t x1026 = 0LL;
	static int8_t x1027 = 5;
	int8_t x1028 = 0;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x1025^x1026)<<(x1027*x1028));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1193 = INT8_MIN;
	volatile uint8_t x1196 = UINT8_MAX;
	static int32_t t14 = 0;

	t14 = ((x1193^x1194)<<(x1195*x1196));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1217 = 3990LLU;
	int8_t x1218 = -1;
	int16_t x1219 = -1;
	volatile uint64_t x1220 = UINT64_MAX;
	volatile uint64_t t15 = 65773708LLU;

	t15 = ((x1217^x1218)<<(x1219*x1220));

	if (t15 != 18446744073709543634LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1249 = 0LL;
	volatile uint64_t x1251 = UINT64_MAX;

	t16 = ((x1249^x1250)<<(x1251*x1252));

	if (t16 != 12LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1533 = UINT64_MAX;
	uint16_t x1534 = 5U;
	int32_t x1535 = -1;
	uint64_t t17 = 178693LLU;

	t17 = ((x1533^x1534)<<(x1535*x1536));

	if (t17 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1661 = 902U;
	uint32_t x1662 = UINT32_MAX;
	int8_t x1663 = -1;
	uint64_t x1664 = UINT64_MAX;
	volatile uint32_t t18 = 512108U;

	t18 = ((x1661^x1662)<<(x1663*x1664));

	if (t18 != 4294965490U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1665 = 165;
	static volatile int16_t x1667 = 0;
	static int16_t x1668 = INT16_MIN;
	int64_t t19 = 3288367LL;

	t19 = ((x1665^x1666)<<(x1667*x1668));

	if (t19 != 9223372036854775642LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1693 = INT16_MIN;
	volatile int64_t x1694 = -1356278LL;
	uint32_t x1695 = 108983379U;
	static int8_t x1696 = 0;
	volatile int64_t t20 = -22788LL;

	t20 = ((x1693^x1694)<<(x1695*x1696));

	if (t20 != 1363466LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1701 = INT32_MAX;
	static int32_t x1702 = INT32_MAX;
	int16_t x1703 = 0;
	static uint64_t x1704 = 107055266667LLU;

	t21 = ((x1701^x1702)<<(x1703*x1704));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1766 = INT64_MAX;
	static volatile int64_t t22 = 580LL;

	t22 = ((x1765^x1766)<<(x1767*x1768));

	if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1897 = -1;
	int8_t x1898 = INT8_MIN;
	volatile int32_t t23 = 227019;

	t23 = ((x1897^x1898)<<(x1899*x1900));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1941 = 7833U;
	int16_t x1943 = INT16_MIN;
	int8_t x1944 = 0;

	t24 = ((x1941^x1942)<<(x1943*x1944));

	if (t24 != 9223372036854767974LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1961 = INT32_MIN;
	int64_t x1962 = INT64_MIN;
	int32_t x1963 = 319;
	volatile int64_t t25 = 12139923905LL;

	t25 = ((x1961^x1962)<<(x1963*x1964));

	if (t25 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2061 = 1897539LLU;
	int8_t x2062 = INT8_MIN;
	static uint16_t x2064 = 0U;

	t26 = ((x2061^x2062)<<(x2063*x2064));

	if (t26 != 18446744073707654083LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2081 = INT16_MIN;
	int16_t x2082 = -36;
	static volatile int32_t t27 = -1;

	t27 = ((x2081^x2082)<<(x2083*x2084));

	if (t27 != 65464) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2097 = 24U;
	volatile int32_t x2099 = -1;
	int16_t x2100 = -1;
	int32_t t28 = -19556396;

	t28 = ((x2097^x2098)<<(x2099*x2100));

	if (t28 != 22) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x2161 = 28;
	static uint64_t x2162 = UINT64_MAX;
	volatile int32_t x2164 = -1;
	uint64_t t29 = 95441032700792175LLU;

	t29 = ((x2161^x2162)<<(x2163*x2164));

	if (t29 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2165 = 596523858090329209LL;
	uint8_t x2166 = UINT8_MAX;
	volatile int64_t t30 = 4858929911223272LL;

	t30 = ((x2165^x2166)<<(x2167*x2168));

	if (t30 != 1193047716180658444LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2169 = -1;
	volatile int16_t x2170 = INT16_MIN;
	volatile int64_t x2171 = -1LL;
	int32_t x2172 = -1;
	static volatile int32_t t31 = 0;

	t31 = ((x2169^x2170)<<(x2171*x2172));

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2189 = 0;
	volatile int32_t x2190 = INT32_MAX;
	uint8_t x2191 = 0U;
	static uint16_t x2192 = UINT16_MAX;
	int32_t t32 = INT32_MAX;

	t32 = ((x2189^x2190)<<(x2191*x2192));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2229 = UINT8_MAX;
	static int8_t x2230 = 1;
	int8_t x2231 = -1;
	static int16_t x2232 = -1;
	volatile int32_t t33 = 0;

	t33 = ((x2229^x2230)<<(x2231*x2232));

	if (t33 != 508) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2242 = 11179325855921LL;
	uint32_t x2243 = 134344730U;
	volatile int64_t t34 = -70576760853497778LL;

	t34 = ((x2241^x2242)<<(x2243*x2244));

	if (t34 != 11175978919758LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2317 = 14806547019169768LLU;
	volatile uint8_t x2318 = 3U;
	uint64_t x2319 = UINT64_MAX;
	int32_t x2320 = -1;
	uint64_t t35 = 999683LLU;

	t35 = ((x2317^x2318)<<(x2319*x2320));

	if (t35 != 29613094038339542LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2397 = -1;
	int8_t x2399 = 0;

	t36 = ((x2397^x2398)<<(x2399*x2400));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2405 = -15;
	volatile uint64_t x2406 = UINT64_MAX;
	uint8_t x2407 = 38U;
	static uint8_t x2408 = 1U;
	static uint64_t t37 = 427003LLU;

	t37 = ((x2405^x2406)<<(x2407*x2408));

	if (t37 != 3848290697216LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2417 = 24LL;
	uint8_t x2418 = 2U;
	static volatile int16_t x2419 = 86;
	static volatile int16_t x2420 = 0;
	static volatile int64_t t38 = -1462LL;

	t38 = ((x2417^x2418)<<(x2419*x2420));

	if (t38 != 26LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2429 = 1;
	volatile uint64_t x2430 = UINT64_MAX;
	int8_t x2431 = 3;
	volatile uint64_t t39 = 782352859658990LLU;

	t39 = ((x2429^x2430)<<(x2431*x2432));

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2517 = 83316382819748788LL;
	volatile uint8_t x2518 = UINT8_MAX;
	int64_t x2519 = -1LL;
	uint8_t x2520 = 0U;

	t40 = ((x2517^x2518)<<(x2519*x2520));

	if (t40 != 83316382819748683LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2553 = -1;
	static int64_t x2554 = INT64_MIN;
	volatile uint32_t x2555 = UINT32_MAX;
	int16_t x2556 = 0;
	volatile int64_t t41 = INT64_MAX;

	t41 = ((x2553^x2554)<<(x2555*x2556));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2597 = INT16_MAX;
	uint32_t x2598 = UINT32_MAX;
	int16_t x2600 = -1;

	t42 = ((x2597^x2598)<<(x2599*x2600));

	if (t42 != 4261412864U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2605 = INT32_MIN;
	volatile uint64_t x2606 = UINT64_MAX;
	static int64_t x2607 = -1LL;
	volatile int8_t x2608 = -31;
	volatile uint64_t t43 = 50011837412831007LLU;

	t43 = ((x2605^x2606)<<(x2607*x2608));

	if (t43 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2877 = INT64_MAX;
	uint8_t x2878 = 27U;
	int8_t x2879 = 0;
	int32_t x2880 = -1021;
	int64_t t44 = 1977859919418LL;

	t44 = ((x2877^x2878)<<(x2879*x2880));

	if (t44 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2909 = UINT64_MAX;
	static int64_t x2910 = -1LL;
	int32_t x2911 = -1;
	volatile int8_t x2912 = -1;

	t45 = ((x2909^x2910)<<(x2911*x2912));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3005 = 1U;
	int8_t x3006 = 3;
	int32_t x3008 = 0;
	int32_t t46 = 240;

	t46 = ((x3005^x3006)<<(x3007*x3008));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3068 = -1;
	volatile int64_t t47 = 129377107802LL;

	t47 = ((x3065^x3066)<<(x3067*x3068));

	if (t47 != 12187754305504LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3077 = UINT64_MAX;
	uint8_t x3078 = 0U;
	volatile uint64_t x3079 = 3122696443795LLU;
	uint8_t x3080 = 0U;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x3077^x3078)<<(x3079*x3080));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3122 = 4028305LLU;
	static uint32_t x3123 = 0U;
	static uint8_t x3124 = 14U;
	uint64_t t49 = 89049705500LLU;

	t49 = ((x3121^x3122)<<(x3123*x3124));

	if (t49 != 9223372036858804113LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3161 = -1;
	uint32_t x3163 = 0U;
	uint64_t x3164 = 39517735784198LLU;

	t50 = ((x3161^x3162)<<(x3163*x3164));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3237 = -12853;
	static volatile int32_t x3238 = INT32_MIN;
	int64_t x3239 = INT64_MIN;
	volatile uint64_t x3240 = 10677586308LLU;
	int32_t t51 = -1;

	t51 = ((x3237^x3238)<<(x3239*x3240));

	if (t51 != 2147470795) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3357 = -4339306LL;
	int32_t x3359 = -1;
	volatile int32_t x3360 = -23;
	volatile uint64_t t52 = 1609670471LLU;

	t52 = ((x3357^x3358)<<(x3359*x3360));

	if (t52 != 18318720714300981248LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x3438 = 6310U;
	static int32_t x3439 = -1;
	uint64_t x3440 = UINT64_MAX;
	volatile int32_t t53 = 2791;

	t53 = ((x3437^x3438)<<(x3439*x3440));

	if (t53 != 52914) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3589 = INT64_MIN;
	int8_t x3592 = -1;
	static uint64_t t54 = 928805LLU;

	t54 = ((x3589^x3590)<<(x3591*x3592));

	if (t54 != 4LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x3609 = UINT8_MAX;
	int16_t x3610 = 0;
	int16_t x3612 = -1;
	volatile int32_t t55 = -597596358;

	t55 = ((x3609^x3610)<<(x3611*x3612));

	if (t55 != 510) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3674 = INT8_MAX;
	uint8_t x3675 = 0U;
	uint32_t x3676 = 26279732U;
	int32_t t56 = -10;

	t56 = ((x3673^x3674)<<(x3675*x3676));

	if (t56 != 2147483520) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3733 = 3183381U;
	uint64_t x3734 = 1255825998LLU;
	int16_t x3735 = -1;
	int32_t x3736 = -1;
	uint64_t t57 = 3645667295800476LLU;

	t57 = ((x3733^x3734)<<(x3735*x3736));

	if (t57 != 2513822390LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3789 = UINT8_MAX;
	int16_t x3791 = -1;
	volatile int16_t x3792 = -1;
	int64_t t58 = -1245073728LL;

	t58 = ((x3789^x3790)<<(x3791*x3792));

	if (t58 != 79904391723310LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3805 = 7826008U;
	int16_t x3806 = -1;
	volatile uint8_t x3807 = 0U;
	uint32_t x3808 = 97U;
	static volatile uint32_t t59 = 190520U;

	t59 = ((x3805^x3806)<<(x3807*x3808));

	if (t59 != 4287141287U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3902 = UINT32_MAX;
	int32_t x3903 = -30;
	volatile int8_t x3904 = -1;

	t60 = ((x3901^x3902)<<(x3903*x3904));

	if (t60 != 3667661115602501632LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3911 = 0;
	uint16_t x3912 = 63U;
	static volatile int64_t t61 = -33850745LL;

	t61 = ((x3909^x3910)<<(x3911*x3912));

	if (t61 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3917 = 1863025692037LLU;
	int32_t x3918 = INT32_MIN;
	volatile int8_t x3919 = INT8_MIN;
	static int64_t x3920 = 0LL;
	volatile uint64_t t62 = 236201188LLU;

	t62 = ((x3917^x3918)<<(x3919*x3920));

	if (t62 != 18446742210851114373LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3974 = 1142798903U;
	static int64_t x3975 = -1LL;
	volatile uint64_t x3976 = UINT64_MAX;
	uint32_t t63 = 1U;

	t63 = ((x3973^x3974)<<(x3975*x3976));

	if (t63 != 2285594502U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4118 = UINT64_MAX;
	uint8_t x4119 = 5U;
	static int16_t x4120 = 3;
	static volatile uint64_t t64 = 0LLU;

	t64 = ((x4117^x4118)<<(x4119*x4120));

	if (t64 != 513475608576LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4121 = 155733LLU;
	int32_t x4122 = -395;
	int32_t x4123 = -1;
	int16_t x4124 = -1;
	volatile uint64_t t65 = 69421112814018391LLU;

	t65 = ((x4121^x4122)<<(x4123*x4124));

	if (t65 != 18446744073709239360LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x4241 = -221811434LL;
	int32_t x4242 = INT32_MIN;
	static int32_t x4244 = -11;
	static volatile int64_t t66 = -1122LL;

	t66 = ((x4241^x4242)<<(x4243*x4244));

	if (t66 != 1925672214LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4273 = INT8_MIN;
	int64_t x4274 = -1LL;
	static int64_t x4275 = -1LL;
	int8_t x4276 = -37;

	t67 = ((x4273^x4274)<<(x4275*x4276));

	if (t67 != 17454747090944LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x4409 = INT64_MIN;
	int32_t x4411 = -1;
	volatile int32_t x4412 = -1;

	t68 = ((x4409^x4410)<<(x4411*x4412));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4425 = -4008563;
	int8_t x4426 = INT8_MIN;
	int8_t x4427 = 0;
	static volatile int16_t x4428 = INT16_MAX;
	int32_t t69 = 2751;

	t69 = ((x4425^x4426)<<(x4427*x4428));

	if (t69 != 4008461) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4429 = UINT64_MAX;
	volatile uint16_t x4430 = 8185U;
	uint8_t x4432 = 1U;
	uint64_t t70 = 203LLU;

	t70 = ((x4429^x4430)<<(x4431*x4432));

	if (t70 != 18446744005040406528LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4437 = INT8_MIN;
	static volatile int64_t x4438 = INT64_MIN;
	int32_t x4439 = INT32_MAX;

	t71 = ((x4437^x4438)<<(x4439*x4440));

	if (t71 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4525 = 6LLU;
	int64_t x4526 = INT64_MAX;
	uint32_t x4527 = UINT32_MAX;
	int16_t x4528 = -1;

	t72 = ((x4525^x4526)<<(x4527*x4528));

	if (t72 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4689 = INT8_MAX;
	uint32_t x4690 = 279U;
	static uint64_t x4691 = 0LLU;
	volatile uint32_t t73 = 153246U;

	t73 = ((x4689^x4690)<<(x4691*x4692));

	if (t73 != 360U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4725 = 1458013888U;
	volatile uint64_t x4726 = UINT64_MAX;
	static int8_t x4727 = 25;
	uint8_t x4728 = 0U;
	uint64_t t74 = 1LLU;

	t74 = ((x4725^x4726)<<(x4727*x4728));

	if (t74 != 18446744072251537727LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4793 = INT32_MAX;
	volatile uint16_t x4795 = 0U;
	int16_t x4796 = 3;
	volatile uint32_t t75 = 213181U;

	t75 = ((x4793^x4794)<<(x4795*x4796));

	if (t75 != 2147472247U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4809 = INT16_MIN;
	static int64_t x4810 = -509633841513920LL;
	volatile int16_t x4811 = 0;
	int8_t x4812 = -1;
	volatile int64_t t76 = 16LL;

	t76 = ((x4809^x4810)<<(x4811*x4812));

	if (t76 != 509633841510976LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4817 = 508769U;
	uint8_t x4818 = 32U;
	uint32_t x4819 = 0U;
	uint64_t x4820 = 3673166575790795LLU;

	t77 = ((x4817^x4818)<<(x4819*x4820));

	if (t77 != 508737U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4895 = UINT16_MAX;
	uint32_t t78 = 0U;

	t78 = ((x4893^x4894)<<(x4895*x4896));

	if (t78 != 841U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x5010 = 60U;
	uint8_t x5012 = 0U;
	uint32_t t79 = 10U;

	t79 = ((x5009^x5010)<<(x5011*x5012));

	if (t79 != 4294967235U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5017 = 250LLU;
	uint64_t x5018 = UINT64_MAX;
	uint64_t x5019 = UINT64_MAX;
	int64_t x5020 = 0LL;
	volatile uint64_t t80 = 10147787260LLU;

	t80 = ((x5017^x5018)<<(x5019*x5020));

	if (t80 != 18446744073709551365LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x5081 = -6794;
	uint32_t x5082 = 32736U;
	static volatile uint16_t x5083 = 0U;
	volatile int64_t x5084 = INT64_MIN;
	volatile uint32_t t81 = 27U;

	t81 = ((x5081^x5082)<<(x5083*x5084));

	if (t81 != 4294941334U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5189 = UINT8_MAX;
	static uint8_t x5191 = 0U;
	int16_t x5192 = INT16_MIN;
	volatile int32_t t82 = -3846838;

	t82 = ((x5189^x5190)<<(x5191*x5192));

	if (t82 != 244) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5249 = UINT64_MAX;
	int16_t x5250 = INT16_MIN;
	volatile int32_t x5251 = -1;
	uint32_t x5252 = UINT32_MAX;
	static volatile uint64_t t83 = 15751299026488987LLU;

	t83 = ((x5249^x5250)<<(x5251*x5252));

	if (t83 != 65534LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x5261 = 1449913;
	int64_t x5262 = 141981347788426LL;
	int64_t x5263 = -1LL;
	int8_t x5264 = -8;
	volatile int64_t t84 = -390141829760381LL;

	t84 = ((x5261^x5262)<<(x5263*x5264));

	if (t84 != 36347225267843840LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5273 = INT16_MIN;
	uint64_t x5274 = 3802LLU;
	int32_t x5275 = -1;
	volatile int16_t x5276 = -1;
	uint64_t t85 = 66586492531LLU;

	t85 = ((x5273^x5274)<<(x5275*x5276));

	if (t85 != 18446744073709493684LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5309 = 1633653U;
	uint32_t x5311 = 47135398U;
	volatile int32_t x5312 = INT32_MIN;
	uint64_t t86 = 122656077LLU;

	t86 = ((x5309^x5310)<<(x5311*x5312));

	if (t86 != 1606326LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5337 = 0U;
	volatile uint32_t x5339 = 256U;
	int8_t x5340 = 0;
	int32_t t87 = -1;

	t87 = ((x5337^x5338)<<(x5339*x5340));

	if (t87 != 1833241) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5398 = INT16_MIN;
	int8_t x5399 = -10;
	int8_t x5400 = -1;
	int32_t t88 = -52;

	t88 = ((x5397^x5398)<<(x5399*x5400));

	if (t88 != 33553408) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5429 = 194037191U;
	uint8_t x5430 = 76U;
	int32_t x5431 = -1;
	uint64_t x5432 = UINT64_MAX;

	t89 = ((x5429^x5430)<<(x5431*x5432));

	if (t89 != 388074262U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5621 = INT8_MIN;
	volatile int8_t x5622 = -62;
	uint64_t x5623 = 0LLU;
	uint16_t x5624 = 0U;
	int32_t t90 = 909697;

	t90 = ((x5621^x5622)<<(x5623*x5624));

	if (t90 != 66) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5649 = -1;
	int8_t x5650 = -59;
	int64_t x5651 = -1LL;
	int32_t x5652 = -15;
	volatile int32_t t91 = 1059;

	t91 = ((x5649^x5650)<<(x5651*x5652));

	if (t91 != 1900544) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5681 = 0U;
	volatile int8_t x5683 = -1;
	int16_t x5684 = -1;
	volatile int32_t t92 = -10960;

	t92 = ((x5681^x5682)<<(x5683*x5684));

	if (t92 != 510) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5705 = 0U;
	static int64_t x5706 = 245LL;
	volatile int16_t x5707 = -20;
	uint32_t x5708 = UINT32_MAX;
	volatile int64_t t93 = 0LL;

	t93 = ((x5705^x5706)<<(x5707*x5708));

	if (t93 != 256901120LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5713 = INT16_MIN;
	static int64_t x5714 = INT64_MIN;
	uint16_t x5715 = 0U;
	volatile int64_t x5716 = -2267818184079861134LL;
	int64_t t94 = -1195884018940607LL;

	t94 = ((x5713^x5714)<<(x5715*x5716));

	if (t94 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x5729 = -2;
	int32_t x5730 = INT32_MIN;
	volatile uint64_t x5731 = 160449204LLU;
	int64_t x5732 = INT64_MIN;
	volatile int32_t t95 = 6282;

	t95 = ((x5729^x5730)<<(x5731*x5732));

	if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5769 = 2U;
	int8_t x5771 = -4;
	static int8_t x5772 = 0;
	volatile int32_t t96 = -101076;

	t96 = ((x5769^x5770)<<(x5771*x5772));

	if (t96 != 59) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5897 = UINT16_MAX;
	volatile uint16_t x5899 = 0U;
	uint32_t x5900 = UINT32_MAX;

	t97 = ((x5897^x5898)<<(x5899*x5900));

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5957 = -1;
	int64_t x5960 = -1LL;

	t98 = ((x5957^x5958)<<(x5959*x5960));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x6350 = -1;
	uint8_t x6351 = 0U;
	int64_t x6352 = INT64_MIN;

	t99 = ((x6349^x6350)<<(x6351*x6352));

	if (t99 != 4282037186U) { NG(); } else { ; }
	
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

