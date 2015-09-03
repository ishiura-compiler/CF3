#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x94 = 6;
static int8_t x151 = INT8_MIN;
uint64_t x152 = UINT64_MAX;
volatile uint8_t x441 = 1U;
uint8_t x442 = 21U;
static uint8_t x622 = 10U;
static int32_t t3 = 23;
static int8_t x874 = 6;
static volatile int32_t t4 = 251672;
static int64_t x899 = INT64_MAX;
int64_t x913 = 2034907864LL;
uint16_t x914 = 13U;
volatile int64_t t6 = 1LL;
volatile int8_t x926 = 26;
volatile int16_t x932 = -1;
volatile uint16_t x937 = 1U;
volatile uint16_t x938 = 1U;
volatile uint32_t x963 = UINT32_MAX;
volatile int32_t t11 = -3203578;
int8_t x1069 = 18;
int8_t x1561 = 16;
uint8_t x1632 = UINT8_MAX;
uint8_t x1725 = 0U;
static volatile uint16_t x1893 = 461U;
static volatile int16_t x1896 = INT16_MIN;
uint32_t x1964 = 3U;
uint64_t x2024 = UINT64_MAX;
int8_t x2106 = 5;
static int16_t x2225 = INT16_MAX;
static int16_t x2330 = 0;
int32_t t35 = -1;
int8_t x2343 = INT8_MIN;
volatile int8_t x2509 = INT8_MAX;
volatile int32_t x2510 = 1;
volatile int8_t x2566 = 1;
uint64_t x2567 = UINT64_MAX;
uint64_t x2568 = 383238110776LLU;
int64_t x2616 = INT64_MIN;
uint64_t t43 = 15LLU;
int32_t t44 = -20;
int64_t x2742 = 0LL;
uint8_t x2922 = 3U;
static volatile int64_t x2924 = INT64_MIN;
static uint64_t x2969 = UINT64_MAX;
volatile uint64_t t49 = 1514LLU;
volatile uint32_t x3165 = 12U;
volatile uint32_t x3166 = 1U;
int32_t x3168 = INT32_MAX;
uint32_t t52 = 400242350U;
uint16_t x3225 = UINT16_MAX;
static int32_t t55 = -5072;
uint16_t x3322 = 21U;
volatile uint64_t t58 = 26456737683491466LLU;
static uint64_t x3382 = 1LLU;
int16_t x3510 = 29;
int8_t x3664 = INT8_MIN;
int8_t x3762 = 2;
uint32_t t62 = 108U;
volatile int32_t t63 = -5;
int64_t x3787 = -1LL;
uint8_t x3798 = 14U;
static uint8_t x3846 = 34U;
volatile int8_t x3848 = -1;
static int8_t x4038 = 29;
int32_t t68 = 489;
int16_t x4075 = -5;
static volatile uint8_t x4114 = 4U;
volatile int32_t t71 = -243377872;
int32_t x4378 = 0;
int16_t x4379 = -6311;
int32_t x4502 = 11;
int8_t x4510 = 4;
volatile int64_t x4511 = INT64_MIN;
volatile uint64_t x4512 = 3981258038LLU;
int32_t t75 = -28798142;
uint64_t x4645 = UINT64_MAX;
volatile uint64_t x4685 = UINT64_MAX;
uint64_t x4828 = 3249523764692011LLU;
volatile uint32_t x4829 = 245809952U;
static volatile int16_t x4863 = 287;
volatile int32_t t84 = 40670084;
volatile uint16_t x4869 = UINT16_MAX;
volatile int32_t t87 = -652830968;
static int64_t x5063 = -1LL;
int64_t t89 = 44437322LL;
static int32_t x5339 = -3998;
volatile uint64_t t91 = 112953870084061028LLU;
uint16_t x5398 = 48U;
volatile uint64_t t92 = 73228LLU;
static volatile int32_t x5412 = -7;
static int32_t x5443 = -1;
static volatile uint8_t x5481 = 6U;
uint16_t x5482 = 3U;
volatile int64_t x5483 = -1LL;
int64_t t97 = 1LL;


void f0(void) {
	int64_t x93 = 110779324858537203LL;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	volatile int64_t t0 = -216673LL;

	t0 = (x93>>(x94-(x95<x96)));

	if (t0 != 1730926950914643LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x149 = INT64_MAX;
	static int8_t x150 = 20;
	static int64_t t1 = -1748288259720LL;

	t1 = (x149>>(x150-(x151<x152)));

	if (t1 != 17592186044415LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x443 = UINT64_MAX;
	uint8_t x444 = UINT8_MAX;
	int32_t t2 = 82;

	t2 = (x441>>(x442-(x443<x444)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x621 = 6645248;
	volatile int8_t x623 = INT8_MAX;
	uint8_t x624 = 2U;

	t3 = (x621>>(x622-(x623<x624)));

	if (t3 != 6489) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x873 = 96U;
	uint16_t x875 = 1732U;
	uint8_t x876 = UINT8_MAX;

	t4 = (x873>>(x874-(x875<x876)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x897 = INT32_MAX;
	uint8_t x898 = 2U;
	volatile uint64_t x900 = 49547611797670495LLU;
	int32_t t5 = -247306675;

	t5 = (x897>>(x898-(x899<x900)));

	if (t5 != 536870911) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x915 = -4399;
	volatile int8_t x916 = INT8_MIN;

	t6 = (x913>>(x914-(x915<x916)));

	if (t6 != 496803LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x925 = INT16_MAX;
	int32_t x927 = INT32_MIN;
	uint32_t x928 = 2U;
	int32_t t7 = -4;

	t7 = (x925>>(x926-(x927<x928)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x929 = 7;
	uint16_t x930 = 5U;
	uint16_t x931 = 915U;
	int32_t t8 = -8064;

	t8 = (x929>>(x930-(x931<x932)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x939 = -1;
	int32_t x940 = -801;
	int32_t t9 = -22015;

	t9 = (x937>>(x938-(x939<x940)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x961 = INT32_MAX;
	static uint8_t x962 = 4U;
	uint8_t x964 = 0U;
	int32_t t10 = 194;

	t10 = (x961>>(x962-(x963<x964)));

	if (t10 != 134217727) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x977 = UINT16_MAX;
	int8_t x978 = 0;
	static uint16_t x979 = 0U;
	volatile int32_t x980 = -1;

	t11 = (x977>>(x978-(x979<x980)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1053 = INT32_MAX;
	static uint64_t x1054 = 31LLU;
	uint8_t x1055 = 1U;
	uint32_t x1056 = UINT32_MAX;
	int32_t t12 = -95;

	t12 = (x1053>>(x1054-(x1055<x1056)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x1057 = INT32_MAX;
	uint8_t x1058 = 1U;
	uint8_t x1059 = 63U;
	volatile int16_t x1060 = -1795;
	volatile int32_t t13 = -6109;

	t13 = (x1057>>(x1058-(x1059<x1060)));

	if (t13 != 1073741823) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1070 = 7LLU;
	int8_t x1071 = 0;
	int64_t x1072 = INT64_MAX;
	volatile int32_t t14 = 8;

	t14 = (x1069>>(x1070-(x1071<x1072)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1129 = 35728LLU;
	uint8_t x1130 = 61U;
	int32_t x1131 = 10434;
	int8_t x1132 = -1;
	uint64_t t15 = 10146LLU;

	t15 = (x1129>>(x1130-(x1131<x1132)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1477 = 1001;
	volatile uint16_t x1478 = 1U;
	int32_t x1479 = -569;
	int8_t x1480 = INT8_MIN;
	int32_t t16 = 312554275;

	t16 = (x1477>>(x1478-(x1479<x1480)));

	if (t16 != 1001) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x1525 = 22684U;
	uint8_t x1526 = 1U;
	static uint16_t x1527 = 2U;
	int64_t x1528 = INT64_MAX;
	uint32_t t17 = 100U;

	t17 = (x1525>>(x1526-(x1527<x1528)));

	if (t17 != 22684U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1529 = UINT16_MAX;
	uint8_t x1530 = 30U;
	int32_t x1531 = INT32_MAX;
	int64_t x1532 = INT64_MIN;
	int32_t t18 = 636144;

	t18 = (x1529>>(x1530-(x1531<x1532)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1562 = 1U;
	volatile int8_t x1563 = 1;
	uint64_t x1564 = UINT64_MAX;
	int32_t t19 = -16317881;

	t19 = (x1561>>(x1562-(x1563<x1564)));

	if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1629 = 10LLU;
	uint64_t x1630 = 29LLU;
	int16_t x1631 = 396;
	volatile uint64_t t20 = 245652LLU;

	t20 = (x1629>>(x1630-(x1631<x1632)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1641 = 18U;
	uint8_t x1642 = 2U;
	static int8_t x1643 = 13;
	volatile int64_t x1644 = -1LL;
	volatile int32_t t21 = 2625;

	t21 = (x1641>>(x1642-(x1643<x1644)));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1697 = 2693589392400LLU;
	uint16_t x1698 = 34U;
	uint16_t x1699 = 9U;
	uint8_t x1700 = 7U;
	volatile uint64_t t22 = 796LLU;

	t22 = (x1697>>(x1698-(x1699<x1700)));

	if (t22 != 156LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1726 = 1U;
	int32_t x1727 = INT32_MIN;
	int32_t x1728 = -1;
	volatile int32_t t23 = -3;

	t23 = (x1725>>(x1726-(x1727<x1728)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1745 = 20U;
	uint32_t x1746 = 25U;
	uint32_t x1747 = UINT32_MAX;
	int32_t x1748 = INT32_MIN;
	uint32_t t24 = 2227U;

	t24 = (x1745>>(x1746-(x1747<x1748)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1877 = UINT8_MAX;
	static int32_t x1878 = 1;
	volatile uint64_t x1879 = UINT64_MAX;
	int64_t x1880 = INT64_MIN;
	int32_t t25 = 0;

	t25 = (x1877>>(x1878-(x1879<x1880)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1894 = 4U;
	int8_t x1895 = -1;
	volatile int32_t t26 = 15163794;

	t26 = (x1893>>(x1894-(x1895<x1896)));

	if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1961 = 1274575696741863LLU;
	uint16_t x1962 = 1U;
	volatile uint8_t x1963 = UINT8_MAX;
	uint64_t t27 = 25LLU;

	t27 = (x1961>>(x1962-(x1963<x1964)));

	if (t27 != 637287848370931LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2009 = UINT8_MAX;
	int8_t x2010 = 14;
	int32_t x2011 = -2270;
	int32_t x2012 = INT32_MIN;
	volatile int32_t t28 = -789774459;

	t28 = (x2009>>(x2010-(x2011<x2012)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x2013 = INT64_MAX;
	int8_t x2014 = 0;
	uint8_t x2015 = 0U;
	int8_t x2016 = INT8_MIN;
	int64_t t29 = INT64_MAX;

	t29 = (x2013>>(x2014-(x2015<x2016)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2021 = 4367525016483LLU;
	uint8_t x2022 = 3U;
	static uint8_t x2023 = 122U;
	uint64_t t30 = 1403793061711LLU;

	t30 = (x2021>>(x2022-(x2023<x2024)));

	if (t30 != 1091881254120LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2105 = 44U;
	uint8_t x2107 = 23U;
	uint16_t x2108 = 36U;
	int32_t t31 = 23;

	t31 = (x2105>>(x2106-(x2107<x2108)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2226 = 1U;
	int16_t x2227 = -11;
	uint32_t x2228 = 1109697U;
	volatile int32_t t32 = -1648;

	t32 = (x2225>>(x2226-(x2227<x2228)));

	if (t32 != 16383) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2265 = UINT16_MAX;
	uint8_t x2266 = 2U;
	int8_t x2267 = INT8_MIN;
	volatile int32_t x2268 = INT32_MIN;
	int32_t t33 = 9690;

	t33 = (x2265>>(x2266-(x2267<x2268)));

	if (t33 != 16383) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2313 = UINT8_MAX;
	uint32_t x2314 = 4U;
	volatile uint16_t x2315 = 1103U;
	uint32_t x2316 = UINT32_MAX;
	volatile int32_t t34 = 2;

	t34 = (x2313>>(x2314-(x2315<x2316)));

	if (t34 != 31) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2329 = INT8_MAX;
	int32_t x2331 = 3696763;
	static int16_t x2332 = INT16_MIN;

	t35 = (x2329>>(x2330-(x2331<x2332)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2341 = INT64_MAX;
	static uint16_t x2342 = 1U;
	int32_t x2344 = 32672;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x2341>>(x2342-(x2343<x2344)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2381 = 372U;
	uint16_t x2382 = 9U;
	static int16_t x2383 = INT16_MIN;
	int8_t x2384 = INT8_MIN;
	static volatile uint32_t t37 = 2U;

	t37 = (x2381>>(x2382-(x2383<x2384)));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x2397 = UINT32_MAX;
	uint32_t x2398 = 22U;
	int8_t x2399 = 1;
	int32_t x2400 = -10704;
	volatile uint32_t t38 = 23U;

	t38 = (x2397>>(x2398-(x2399<x2400)));

	if (t38 != 1023U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2511 = INT16_MIN;
	int64_t x2512 = INT64_MIN;
	static int32_t t39 = -30499;

	t39 = (x2509>>(x2510-(x2511<x2512)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2521 = 16U;
	static int16_t x2522 = 0;
	uint32_t x2523 = UINT32_MAX;
	static int32_t x2524 = INT32_MIN;
	int32_t t40 = -4012;

	t40 = (x2521>>(x2522-(x2523<x2524)));

	if (t40 != 16) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2565 = 3343680538400LLU;
	uint64_t t41 = 40747928375LLU;

	t41 = (x2565>>(x2566-(x2567<x2568)));

	if (t41 != 1671840269200LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2613 = 0;
	static uint8_t x2614 = 0U;
	int16_t x2615 = INT16_MIN;
	int32_t t42 = 1;

	t42 = (x2613>>(x2614-(x2615<x2616)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2665 = 59056153963444279LLU;
	int16_t x2666 = 0;
	uint32_t x2667 = 6U;
	int64_t x2668 = INT64_MIN;

	t43 = (x2665>>(x2666-(x2667<x2668)));

	if (t43 != 59056153963444279LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2689 = UINT16_MAX;
	uint8_t x2690 = 3U;
	int64_t x2691 = INT64_MIN;
	static int8_t x2692 = INT8_MIN;

	t44 = (x2689>>(x2690-(x2691<x2692)));

	if (t44 != 16383) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2741 = 0;
	int16_t x2743 = -140;
	uint32_t x2744 = 29U;
	int32_t t45 = -1;

	t45 = (x2741>>(x2742-(x2743<x2744)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2921 = UINT64_MAX;
	uint32_t x2923 = 524048102U;
	uint64_t t46 = 1715395941LLU;

	t46 = (x2921>>(x2922-(x2923<x2924)));

	if (t46 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2970 = 13;
	static int32_t x2971 = 15;
	uint8_t x2972 = 1U;
	volatile uint64_t t47 = 2643330276426LLU;

	t47 = (x2969>>(x2970-(x2971<x2972)));

	if (t47 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3021 = INT16_MAX;
	uint16_t x3022 = 3U;
	volatile int64_t x3023 = -1LL;
	uint32_t x3024 = 52237U;
	static int32_t t48 = 7630;

	t48 = (x3021>>(x3022-(x3023<x3024)));

	if (t48 != 8191) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x3033 = 837540119564LLU;
	int16_t x3034 = 3;
	static volatile int64_t x3035 = -3454242296620858535LL;
	int64_t x3036 = -366323161841300LL;

	t49 = (x3033>>(x3034-(x3035<x3036)));

	if (t49 != 209385029891LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3065 = UINT8_MAX;
	static uint8_t x3066 = 3U;
	uint16_t x3067 = UINT16_MAX;
	static int64_t x3068 = 28527718LL;
	int32_t t50 = -2;

	t50 = (x3065>>(x3066-(x3067<x3068)));

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3073 = UINT64_MAX;
	uint8_t x3074 = 6U;
	int16_t x3075 = INT16_MIN;
	static int16_t x3076 = INT16_MAX;
	uint64_t t51 = 871375632LLU;

	t51 = (x3073>>(x3074-(x3075<x3076)));

	if (t51 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3167 = INT32_MIN;

	t52 = (x3165>>(x3166-(x3167<x3168)));

	if (t52 != 12U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3213 = 1LL;
	uint8_t x3214 = 4U;
	uint32_t x3215 = 22719U;
	int16_t x3216 = 432;
	int64_t t53 = -184LL;

	t53 = (x3213>>(x3214-(x3215<x3216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3226 = 11;
	static int32_t x3227 = INT32_MAX;
	static int64_t x3228 = -4279LL;
	volatile int32_t t54 = 1360;

	t54 = (x3225>>(x3226-(x3227<x3228)));

	if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3265 = INT16_MAX;
	uint8_t x3266 = 7U;
	volatile int32_t x3267 = 0;
	int64_t x3268 = 4008935514LL;

	t55 = (x3265>>(x3266-(x3267<x3268)));

	if (t55 != 511) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3321 = 39922U;
	volatile int64_t x3323 = INT64_MIN;
	uint8_t x3324 = UINT8_MAX;
	uint32_t t56 = 2509U;

	t56 = (x3321>>(x3322-(x3323<x3324)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3337 = 104U;
	static uint8_t x3338 = 1U;
	static uint16_t x3339 = 1U;
	static int16_t x3340 = INT16_MAX;
	volatile int32_t t57 = 455669;

	t57 = (x3337>>(x3338-(x3339<x3340)));

	if (t57 != 104) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3377 = UINT64_MAX;
	int8_t x3378 = 29;
	int64_t x3379 = INT64_MIN;
	int16_t x3380 = INT16_MIN;

	t58 = (x3377>>(x3378-(x3379<x3380)));

	if (t58 != 68719476735LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3381 = INT16_MAX;
	uint16_t x3383 = 182U;
	volatile int32_t x3384 = -1;
	volatile int32_t t59 = -5195088;

	t59 = (x3381>>(x3382-(x3383<x3384)));

	if (t59 != 16383) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x3509 = 7;
	int16_t x3511 = INT16_MIN;
	int32_t x3512 = INT32_MAX;
	static int32_t t60 = 2058327;

	t60 = (x3509>>(x3510-(x3511<x3512)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3661 = 441714LL;
	volatile uint8_t x3662 = 21U;
	int32_t x3663 = 119480629;
	volatile int64_t t61 = 11682638LL;

	t61 = (x3661>>(x3662-(x3663<x3664)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3761 = 11494296U;
	int8_t x3763 = 30;
	volatile int32_t x3764 = -1;

	t62 = (x3761>>(x3762-(x3763<x3764)));

	if (t62 != 2873574U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x3777 = UINT16_MAX;
	uint8_t x3778 = 2U;
	int16_t x3779 = INT16_MIN;
	int64_t x3780 = -3861708734LL;

	t63 = (x3777>>(x3778-(x3779<x3780)));

	if (t63 != 16383) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3785 = 64U;
	int8_t x3786 = 0;
	int16_t x3788 = -1;
	volatile int32_t t64 = 358647402;

	t64 = (x3785>>(x3786-(x3787<x3788)));

	if (t64 != 64) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3797 = 0;
	uint8_t x3799 = UINT8_MAX;
	int8_t x3800 = -1;
	int32_t t65 = 141;

	t65 = (x3797>>(x3798-(x3799<x3800)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3845 = UINT64_MAX;
	volatile uint16_t x3847 = 1U;
	volatile uint64_t t66 = 16556367371LLU;

	t66 = (x3845>>(x3846-(x3847<x3848)));

	if (t66 != 1073741823LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3933 = INT32_MAX;
	int8_t x3934 = 12;
	int8_t x3935 = INT8_MAX;
	int16_t x3936 = INT16_MAX;
	int32_t t67 = -127584;

	t67 = (x3933>>(x3934-(x3935<x3936)));

	if (t67 != 1048575) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4037 = 0;
	volatile uint32_t x4039 = 225368548U;
	int8_t x4040 = INT8_MIN;

	t68 = (x4037>>(x4038-(x4039<x4040)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4073 = INT8_MAX;
	static uint16_t x4074 = 15U;
	int8_t x4076 = INT8_MIN;
	volatile int32_t t69 = -45;

	t69 = (x4073>>(x4074-(x4075<x4076)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4089 = 2849187U;
	volatile uint16_t x4090 = 6U;
	volatile int64_t x4091 = -69807816980723961LL;
	static uint8_t x4092 = UINT8_MAX;
	volatile uint32_t t70 = 146959U;

	t70 = (x4089>>(x4090-(x4091<x4092)));

	if (t70 != 89037U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4113 = 1;
	static int16_t x4115 = 39;
	int64_t x4116 = INT64_MIN;

	t71 = (x4113>>(x4114-(x4115<x4116)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4377 = 813801544U;
	static int16_t x4380 = INT16_MIN;
	uint32_t t72 = 121U;

	t72 = (x4377>>(x4378-(x4379<x4380)));

	if (t72 != 813801544U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4401 = 65563LLU;
	static uint8_t x4402 = 16U;
	uint16_t x4403 = 362U;
	volatile uint32_t x4404 = UINT32_MAX;
	volatile uint64_t t73 = 229433LLU;

	t73 = (x4401>>(x4402-(x4403<x4404)));

	if (t73 != 2LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4501 = 0U;
	int32_t x4503 = -2074736;
	int64_t x4504 = INT64_MAX;
	static int32_t t74 = 337;

	t74 = (x4501>>(x4502-(x4503<x4504)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4509 = UINT8_MAX;

	t75 = (x4509>>(x4510-(x4511<x4512)));

	if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4577 = 1909418195U;
	int32_t x4578 = 6;
	uint32_t x4579 = 764U;
	volatile uint16_t x4580 = UINT16_MAX;
	static uint32_t t76 = 1559076039U;

	t76 = (x4577>>(x4578-(x4579<x4580)));

	if (t76 != 59669318U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4613 = INT8_MAX;
	uint8_t x4614 = 27U;
	uint64_t x4615 = 32290048445LLU;
	int16_t x4616 = INT16_MIN;
	static int32_t t77 = 3102762;

	t77 = (x4613>>(x4614-(x4615<x4616)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4646 = 5U;
	uint8_t x4647 = 0U;
	uint32_t x4648 = 5U;
	uint64_t t78 = 294818516267802150LLU;

	t78 = (x4645>>(x4646-(x4647<x4648)));

	if (t78 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4686 = 1LLU;
	int16_t x4687 = 13269;
	uint64_t x4688 = 292139361800LLU;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x4685>>(x4686-(x4687<x4688)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x4781 = UINT16_MAX;
	uint8_t x4782 = 8U;
	int16_t x4783 = -1;
	static int32_t x4784 = 174187468;
	int32_t t80 = 0;

	t80 = (x4781>>(x4782-(x4783<x4784)));

	if (t80 != 511) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x4809 = 54093377;
	volatile int32_t x4810 = 3;
	uint64_t x4811 = 6543527662336134LLU;
	int16_t x4812 = INT16_MAX;
	int32_t t81 = -1;

	t81 = (x4809>>(x4810-(x4811<x4812)));

	if (t81 != 6761672) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4825 = 2U;
	uint8_t x4826 = 17U;
	volatile int64_t x4827 = INT64_MAX;
	volatile int32_t t82 = 104443;

	t82 = (x4825>>(x4826-(x4827<x4828)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4830 = 22U;
	uint32_t x4831 = 11013220U;
	volatile int64_t x4832 = 271803166873333LL;
	volatile uint32_t t83 = 1857U;

	t83 = (x4829>>(x4830-(x4831<x4832)));

	if (t83 != 117U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4861 = 29;
	static volatile uint32_t x4862 = 8U;
	static uint8_t x4864 = 1U;

	t84 = (x4861>>(x4862-(x4863<x4864)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4870 = 27;
	uint32_t x4871 = 117U;
	static int32_t x4872 = INT32_MIN;
	volatile int32_t t85 = -62;

	t85 = (x4869>>(x4870-(x4871<x4872)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5033 = INT16_MAX;
	uint64_t x5034 = 16LLU;
	static int16_t x5035 = INT16_MIN;
	uint16_t x5036 = 1813U;
	volatile int32_t t86 = 48246613;

	t86 = (x5033>>(x5034-(x5035<x5036)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5041 = UINT8_MAX;
	volatile uint16_t x5042 = 7U;
	uint64_t x5043 = UINT64_MAX;
	static volatile uint8_t x5044 = UINT8_MAX;

	t87 = (x5041>>(x5042-(x5043<x5044)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5061 = 23;
	uint8_t x5062 = 1U;
	static volatile uint32_t x5064 = 0U;
	int32_t t88 = 66;

	t88 = (x5061>>(x5062-(x5063<x5064)));

	if (t88 != 23) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5177 = 403694915LL;
	int64_t x5178 = 1LL;
	static uint32_t x5179 = 16425U;
	int16_t x5180 = INT16_MIN;

	t89 = (x5177>>(x5178-(x5179<x5180)));

	if (t89 != 403694915LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5337 = 6184623LL;
	static int8_t x5338 = 20;
	volatile uint16_t x5340 = 0U;
	volatile int64_t t90 = 22LL;

	t90 = (x5337>>(x5338-(x5339<x5340)));

	if (t90 != 11LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5361 = 29035896LLU;
	volatile uint16_t x5362 = 2U;
	int64_t x5363 = INT64_MIN;
	volatile int64_t x5364 = 1908350LL;

	t91 = (x5361>>(x5362-(x5363<x5364)));

	if (t91 != 14517948LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5397 = 3879LLU;
	uint16_t x5399 = UINT16_MAX;
	int64_t x5400 = INT64_MIN;

	t92 = (x5397>>(x5398-(x5399<x5400)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5405 = 369800;
	int8_t x5406 = 3;
	static int32_t x5407 = INT32_MIN;
	int16_t x5408 = INT16_MAX;
	static int32_t t93 = 487;

	t93 = (x5405>>(x5406-(x5407<x5408)));

	if (t93 != 92450) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5409 = INT8_MAX;
	int16_t x5410 = 0;
	volatile int64_t x5411 = 378138LL;
	int32_t t94 = -2;

	t94 = (x5409>>(x5410-(x5411<x5412)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5441 = UINT8_MAX;
	uint16_t x5442 = 1U;
	int64_t x5444 = 11197LL;
	volatile int32_t t95 = 4928;

	t95 = (x5441>>(x5442-(x5443<x5444)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x5484 = INT32_MIN;
	int32_t t96 = -454482841;

	t96 = (x5481>>(x5482-(x5483<x5484)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x5525 = 209LL;
	int16_t x5526 = 1;
	volatile int8_t x5527 = INT8_MAX;
	static int32_t x5528 = INT32_MIN;

	t97 = (x5525>>(x5526-(x5527<x5528)));

	if (t97 != 104LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5549 = 3585886U;
	static uint8_t x5550 = 1U;
	int32_t x5551 = INT32_MIN;
	uint8_t x5552 = 2U;
	uint32_t t98 = 48668U;

	t98 = (x5549>>(x5550-(x5551<x5552)));

	if (t98 != 3585886U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x5565 = 4U;
	uint32_t x5566 = 1U;
	int16_t x5567 = -3;
	volatile int64_t x5568 = 27773348LL;
	int32_t t99 = 1;

	t99 = (x5565>>(x5566-(x5567<x5568)));

	if (t99 != 4) { NG(); } else { ; }
	
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

