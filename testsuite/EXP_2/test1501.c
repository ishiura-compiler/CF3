#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x29 = 849;
uint8_t x146 = 2U;
int16_t x318 = INT16_MIN;
uint32_t x354 = UINT32_MAX;
static uint32_t x355 = 1644U;
volatile int32_t t5 = 0;
int32_t x366 = -622;
static volatile uint64_t t6 = 8049LLU;
int16_t x570 = 1;
int32_t x571 = 12591882;
volatile int64_t t9 = -5245391516248LL;
int32_t x819 = INT32_MAX;
int32_t t10 = -1394396;
uint32_t x821 = 1206437U;
static int16_t x822 = -1;
volatile int16_t x826 = -1125;
volatile int32_t x843 = INT32_MIN;
int16_t x844 = 6;
volatile uint16_t x932 = 1U;
volatile int16_t x1035 = -34;
int8_t x1036 = 0;
volatile uint32_t t16 = 49742547U;
static uint32_t x1069 = 1838695971U;
int8_t x1113 = INT8_MAX;
int8_t x1116 = 2;
static int8_t x1160 = 1;
int16_t x1298 = INT16_MIN;
int32_t x1299 = INT32_MIN;
int64_t x1311 = 1LL;
uint64_t x1345 = UINT64_MAX;
int64_t x1481 = 452724002LL;
static int16_t x1482 = INT16_MIN;
static int64_t t25 = -78LL;
uint64_t t26 = 2LLU;
uint8_t x1673 = 0U;
int16_t x1675 = -3642;
int32_t x1676 = 1;
volatile uint16_t x1690 = 15758U;
int32_t t28 = -124;
volatile uint32_t x1765 = 271460971U;
volatile uint32_t t29 = 61U;
volatile int16_t x1780 = 0;
uint16_t x1885 = 1430U;
volatile uint8_t x1973 = 117U;
static volatile uint8_t x1976 = 1U;
volatile int64_t x1993 = 4370LL;
int8_t x2133 = 2;
static volatile int32_t t36 = 1018;
volatile uint64_t t37 = 39069084LLU;
volatile int32_t t38 = -87054;
volatile int32_t t40 = 101;
int32_t t43 = 127;
int32_t x2445 = 142;
volatile int16_t x2502 = INT16_MIN;
static uint8_t x2504 = 0U;
uint8_t x2561 = 61U;
static volatile int32_t t46 = 0;
uint32_t t47 = 64271946U;
uint8_t x2664 = 6U;
int32_t x2905 = INT32_MAX;
static int64_t x2921 = 32039749LL;
volatile int8_t x2922 = 0;
uint8_t x2924 = 0U;
volatile int16_t x2930 = -1558;
uint64_t t51 = 45929725598654469LLU;
volatile int32_t x2966 = INT32_MIN;
volatile uint8_t x3024 = 0U;
static int32_t t54 = -3;
uint16_t x3207 = 1448U;
int16_t x3208 = 5;
volatile uint64_t x3250 = 16966194301583822LLU;
int8_t x3272 = 1;
uint64_t x3345 = 1045959906LLU;
static volatile int32_t t61 = -47970;
int16_t x3541 = INT16_MAX;
uint16_t x3548 = 15U;
uint32_t x3570 = UINT32_MAX;
int32_t t65 = -27393;
int32_t x3887 = INT32_MAX;
volatile uint8_t x3888 = 2U;
int64_t x4022 = INT64_MAX;
uint8_t x4023 = UINT8_MAX;
static int8_t x4044 = 29;
uint32_t x4393 = 25U;
int32_t x4395 = 0;
static uint8_t x4396 = 28U;
static int64_t x4431 = -1LL;
uint32_t x4432 = 5U;
volatile uint32_t t75 = 2U;
uint64_t x4561 = 185831897817LLU;
int8_t x4562 = -1;
static int32_t t79 = 176;
static uint64_t x4637 = 5079749232LLU;
static volatile int32_t t81 = 18;
volatile int32_t t82 = -5614594;
static int16_t x4783 = -1;
int32_t t84 = -51683676;
volatile uint64_t x4918 = 13735118LLU;
int8_t x4941 = INT8_MAX;
int8_t x4943 = 34;
static int16_t x4944 = 5;
static volatile int16_t x4954 = INT16_MIN;
volatile int32_t x4978 = INT32_MAX;
volatile uint8_t x5342 = 47U;
static uint32_t x5364 = 5U;
static uint8_t x5405 = 12U;
static int32_t x5407 = -1;
static volatile int32_t t95 = 919635;
volatile uint32_t t96 = 790216069U;
uint64_t x5581 = UINT64_MAX;
static uint64_t x5641 = UINT64_MAX;
int8_t x5676 = 0;


void f0(void) {
	static volatile uint16_t x30 = 1U;
	uint16_t x31 = 2U;
	static int8_t x32 = 1;
	volatile int32_t t0 = 1;

	t0 = ((x29|(x30<x31))<<x32);

	if (t0 != 1698) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x137 = 53;
	int32_t x138 = -1;
	static volatile int32_t x139 = INT32_MAX;
	uint16_t x140 = 7U;
	int32_t t1 = -9877703;

	t1 = ((x137|(x138<x139))<<x140);

	if (t1 != 6784) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x145 = 7;
	volatile int16_t x147 = -1;
	uint64_t x148 = 3LLU;
	volatile int32_t t2 = 1;

	t2 = ((x145|(x146<x147))<<x148);

	if (t2 != 56) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x309 = INT16_MAX;
	int64_t x310 = -1LL;
	uint16_t x311 = 40U;
	uint16_t x312 = 6U;
	static int32_t t3 = -297976;

	t3 = ((x309|(x310<x311))<<x312);

	if (t3 != 2097088) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x317 = UINT32_MAX;
	static volatile int16_t x319 = INT16_MIN;
	uint8_t x320 = 2U;
	volatile uint32_t t4 = 130676460U;

	t4 = ((x317|(x318<x319))<<x320);

	if (t4 != 4294967292U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x353 = 63;
	int16_t x356 = 1;

	t5 = ((x353|(x354<x355))<<x356);

	if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x365 = UINT64_MAX;
	uint32_t x367 = 5206U;
	static volatile int8_t x368 = 14;

	t6 = ((x365|(x366<x367))<<x368);

	if (t6 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x369 = UINT32_MAX;
	uint8_t x370 = 8U;
	int64_t x371 = 355210LL;
	int8_t x372 = 22;
	volatile uint32_t t7 = 4053191U;

	t7 = ((x369|(x370<x371))<<x372);

	if (t7 != 4290772992U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x469 = 2758;
	uint8_t x470 = UINT8_MAX;
	static int32_t x471 = INT32_MIN;
	volatile int8_t x472 = 1;
	volatile int32_t t8 = -45;

	t8 = ((x469|(x470<x471))<<x472);

	if (t8 != 5516) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x569 = 380431LL;
	uint16_t x572 = 36U;

	t9 = ((x569|(x570<x571))<<x572);

	if (t9 != 26143019254153216LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x817 = 0U;
	int64_t x818 = INT64_MAX;
	uint16_t x820 = 0U;

	t10 = ((x817|(x818<x819))<<x820);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x823 = -30524010280LL;
	uint8_t x824 = 1U;
	uint32_t t11 = 15645U;

	t11 = ((x821|(x822<x823))<<x824);

	if (t11 != 2412874U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x825 = 134U;
	volatile uint32_t x827 = 4U;
	uint8_t x828 = 2U;
	int32_t t12 = -432977;

	t12 = ((x825|(x826<x827))<<x828);

	if (t12 != 536) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x841 = 63LL;
	int32_t x842 = INT32_MIN;
	int64_t t13 = -17343067250299LL;

	t13 = ((x841|(x842<x843))<<x844);

	if (t13 != 4032LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x929 = 32679U;
	int32_t x930 = INT32_MAX;
	uint64_t x931 = UINT64_MAX;
	int32_t t14 = -3;

	t14 = ((x929|(x930<x931))<<x932);

	if (t14 != 65358) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1033 = 36U;
	int64_t x1034 = INT64_MAX;
	int32_t t15 = 233489;

	t15 = ((x1033|(x1034<x1035))<<x1036);

	if (t15 != 36) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x1045 = UINT32_MAX;
	int64_t x1046 = INT64_MIN;
	uint16_t x1047 = UINT16_MAX;
	uint32_t x1048 = 12U;

	t16 = ((x1045|(x1046<x1047))<<x1048);

	if (t16 != 4294963200U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1070 = INT32_MIN;
	int64_t x1071 = INT64_MIN;
	int8_t x1072 = 14;
	volatile uint32_t t17 = 1513U;

	t17 = ((x1069|(x1070<x1071))<<x1072);

	if (t17 != 294174720U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1089 = INT16_MAX;
	int16_t x1090 = -1389;
	uint8_t x1091 = 26U;
	volatile uint8_t x1092 = 0U;
	volatile int32_t t18 = -2361;

	t18 = ((x1089|(x1090<x1091))<<x1092);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1114 = INT32_MAX;
	int16_t x1115 = INT16_MIN;
	volatile int32_t t19 = 3233909;

	t19 = ((x1113|(x1114<x1115))<<x1116);

	if (t19 != 508) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1157 = 6;
	int16_t x1158 = -173;
	int8_t x1159 = INT8_MIN;
	static int32_t t20 = -32565915;

	t20 = ((x1157|(x1158<x1159))<<x1160);

	if (t20 != 14) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1297 = UINT64_MAX;
	static int8_t x1300 = 0;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x1297|(x1298<x1299))<<x1300);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x1309 = UINT32_MAX;
	volatile int16_t x1310 = INT16_MIN;
	uint8_t x1312 = 2U;
	static volatile uint32_t t22 = 11603U;

	t22 = ((x1309|(x1310<x1311))<<x1312);

	if (t22 != 4294967292U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1346 = 121LLU;
	uint16_t x1347 = UINT16_MAX;
	int16_t x1348 = 35;
	static volatile uint64_t t23 = 166607341850151LLU;

	t23 = ((x1345|(x1346<x1347))<<x1348);

	if (t23 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1377 = 28114U;
	static volatile uint32_t x1378 = 808445455U;
	uint32_t x1379 = UINT32_MAX;
	int8_t x1380 = 0;
	volatile int32_t t24 = -6;

	t24 = ((x1377|(x1378<x1379))<<x1380);

	if (t24 != 28115) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1483 = 498433762U;
	uint16_t x1484 = 3U;

	t25 = ((x1481|(x1482<x1483))<<x1484);

	if (t25 != 3621792016LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1645 = UINT64_MAX;
	volatile int64_t x1646 = -218047LL;
	int32_t x1647 = 146;
	int16_t x1648 = 49;

	t26 = ((x1645|(x1646<x1647))<<x1648);

	if (t26 != 18446181123756130304LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1674 = 37U;
	static int32_t t27 = -13;

	t27 = ((x1673|(x1674<x1675))<<x1676);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1689 = 195U;
	int32_t x1691 = -1;
	static uint8_t x1692 = 3U;

	t28 = ((x1689|(x1690<x1691))<<x1692);

	if (t28 != 1560) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1766 = 4147U;
	uint16_t x1767 = 20U;
	int16_t x1768 = 0;

	t29 = ((x1765|(x1766<x1767))<<x1768);

	if (t29 != 271460971U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1777 = 4965236895033270454LLU;
	volatile int16_t x1778 = 0;
	int64_t x1779 = INT64_MAX;
	volatile uint64_t t30 = 410136442484437454LLU;

	t30 = ((x1777|(x1778<x1779))<<x1780);

	if (t30 != 4965236895033270455LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1886 = -1;
	int32_t x1887 = -1238;
	volatile int8_t x1888 = 6;
	volatile int32_t t31 = -2258;

	t31 = ((x1885|(x1886<x1887))<<x1888);

	if (t31 != 91520) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1901 = 0U;
	uint16_t x1902 = UINT16_MAX;
	volatile int64_t x1903 = INT64_MIN;
	uint8_t x1904 = 1U;
	int32_t t32 = 316118;

	t32 = ((x1901|(x1902<x1903))<<x1904);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1974 = -7;
	uint8_t x1975 = 31U;
	volatile int32_t t33 = 0;

	t33 = ((x1973|(x1974<x1975))<<x1976);

	if (t33 != 234) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1994 = INT32_MIN;
	int64_t x1995 = -1LL;
	uint32_t x1996 = 5U;
	static int64_t t34 = -615LL;

	t34 = ((x1993|(x1994<x1995))<<x1996);

	if (t34 != 139872LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2049 = 2970114U;
	int32_t x2050 = -1732;
	int8_t x2051 = -1;
	int32_t x2052 = 0;
	uint32_t t35 = 10297354U;

	t35 = ((x2049|(x2050<x2051))<<x2052);

	if (t35 != 2970115U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2134 = 14LLU;
	uint16_t x2135 = 14299U;
	static uint16_t x2136 = 20U;

	t36 = ((x2133|(x2134<x2135))<<x2136);

	if (t36 != 3145728) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x2149 = UINT64_MAX;
	int32_t x2150 = INT32_MAX;
	volatile int32_t x2151 = -1;
	uint8_t x2152 = 12U;

	t37 = ((x2149|(x2150<x2151))<<x2152);

	if (t37 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2185 = INT8_MAX;
	int64_t x2186 = INT64_MAX;
	int32_t x2187 = -8673649;
	static uint8_t x2188 = 20U;

	t38 = ((x2185|(x2186<x2187))<<x2188);

	if (t38 != 133169152) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x2249 = 2222455U;
	int64_t x2250 = INT64_MIN;
	static int16_t x2251 = INT16_MAX;
	uint16_t x2252 = 1U;
	volatile uint32_t t39 = 8762935U;

	t39 = ((x2249|(x2250<x2251))<<x2252);

	if (t39 != 4444910U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2293 = 3U;
	int32_t x2294 = -1;
	int64_t x2295 = INT64_MIN;
	uint8_t x2296 = 2U;

	t40 = ((x2293|(x2294<x2295))<<x2296);

	if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x2313 = INT8_MAX;
	int32_t x2314 = -1;
	static uint64_t x2315 = UINT64_MAX;
	int8_t x2316 = 3;
	int32_t t41 = 578593;

	t41 = ((x2313|(x2314<x2315))<<x2316);

	if (t41 != 1016) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2369 = 2U;
	volatile int16_t x2370 = INT16_MIN;
	volatile int64_t x2371 = -58502293780137100LL;
	uint16_t x2372 = 4U;
	volatile int32_t t42 = 1;

	t42 = ((x2369|(x2370<x2371))<<x2372);

	if (t42 != 32) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2385 = UINT16_MAX;
	int8_t x2386 = INT8_MIN;
	int8_t x2387 = -1;
	uint32_t x2388 = 3U;

	t43 = ((x2385|(x2386<x2387))<<x2388);

	if (t43 != 524280) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2446 = INT8_MIN;
	static int32_t x2447 = INT32_MIN;
	uint16_t x2448 = 0U;
	static int32_t t44 = 70;

	t44 = ((x2445|(x2446<x2447))<<x2448);

	if (t44 != 142) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2501 = INT16_MAX;
	uint32_t x2503 = 26U;
	int32_t t45 = -677;

	t45 = ((x2501|(x2502<x2503))<<x2504);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2562 = -1;
	uint64_t x2563 = UINT64_MAX;
	volatile int32_t x2564 = 5;

	t46 = ((x2561|(x2562<x2563))<<x2564);

	if (t46 != 1952) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2617 = 159U;
	volatile uint32_t x2618 = UINT32_MAX;
	uint16_t x2619 = 2U;
	static uint16_t x2620 = 0U;

	t47 = ((x2617|(x2618<x2619))<<x2620);

	if (t47 != 159U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2661 = UINT8_MAX;
	int64_t x2662 = INT64_MIN;
	uint64_t x2663 = UINT64_MAX;
	volatile int32_t t48 = -1836;

	t48 = ((x2661|(x2662<x2663))<<x2664);

	if (t48 != 16320) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2906 = 6814016088LLU;
	static volatile int32_t x2907 = INT32_MIN;
	static volatile int16_t x2908 = 0;
	volatile int32_t t49 = INT32_MAX;

	t49 = ((x2905|(x2906<x2907))<<x2908);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2923 = INT64_MIN;
	static volatile int64_t t50 = 8095LL;

	t50 = ((x2921|(x2922<x2923))<<x2924);

	if (t50 != 32039749LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2929 = 5718LLU;
	uint64_t x2931 = 387LLU;
	uint8_t x2932 = 1U;

	t51 = ((x2929|(x2930<x2931))<<x2932);

	if (t51 != 11436LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2965 = 1;
	int8_t x2967 = -1;
	uint8_t x2968 = 7U;
	int32_t t52 = -770739;

	t52 = ((x2965|(x2966<x2967))<<x2968);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3021 = 3U;
	int32_t x3022 = -1;
	int32_t x3023 = 5297;
	static volatile int32_t t53 = -2665;

	t53 = ((x3021|(x3022<x3023))<<x3024);

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3185 = 28;
	volatile int16_t x3186 = -3;
	int8_t x3187 = INT8_MAX;
	uint8_t x3188 = 0U;

	t54 = ((x3185|(x3186<x3187))<<x3188);

	if (t54 != 29) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3205 = 273875113054262LLU;
	static int32_t x3206 = INT32_MAX;
	uint64_t t55 = 438515192592579235LLU;

	t55 = ((x3205|(x3206<x3207))<<x3208);

	if (t55 != 8764003617736384LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3237 = UINT32_MAX;
	static uint32_t x3238 = 4158U;
	int64_t x3239 = INT64_MIN;
	uint8_t x3240 = 6U;
	volatile uint32_t t56 = 7U;

	t56 = ((x3237|(x3238<x3239))<<x3240);

	if (t56 != 4294967232U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3249 = INT16_MAX;
	int32_t x3251 = INT32_MIN;
	volatile uint8_t x3252 = 5U;
	volatile int32_t t57 = 2;

	t57 = ((x3249|(x3250<x3251))<<x3252);

	if (t57 != 1048544) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3269 = 13942U;
	uint8_t x3270 = UINT8_MAX;
	uint64_t x3271 = 910491634774248LLU;
	uint32_t t58 = 802729U;

	t58 = ((x3269|(x3270<x3271))<<x3272);

	if (t58 != 27886U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3309 = 26U;
	static uint16_t x3310 = UINT16_MAX;
	uint8_t x3311 = 7U;
	int8_t x3312 = 18;
	static volatile uint32_t t59 = 7155515U;

	t59 = ((x3309|(x3310<x3311))<<x3312);

	if (t59 != 6815744U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3346 = INT8_MIN;
	volatile int32_t x3347 = INT32_MAX;
	int16_t x3348 = 5;
	uint64_t t60 = 2322740066082378320LLU;

	t60 = ((x3345|(x3346<x3347))<<x3348);

	if (t60 != 33470717024LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3501 = INT16_MAX;
	uint8_t x3502 = UINT8_MAX;
	uint8_t x3503 = UINT8_MAX;
	int8_t x3504 = 0;

	t61 = ((x3501|(x3502<x3503))<<x3504);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3542 = 1;
	uint32_t x3543 = 4668U;
	uint8_t x3544 = 4U;
	int32_t t62 = -13389;

	t62 = ((x3541|(x3542<x3543))<<x3544);

	if (t62 != 524272) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3545 = 1;
	static int32_t x3546 = INT32_MIN;
	int64_t x3547 = INT64_MIN;
	int32_t t63 = 173850467;

	t63 = ((x3545|(x3546<x3547))<<x3548);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3569 = UINT32_MAX;
	static int64_t x3571 = INT64_MIN;
	int16_t x3572 = 1;
	uint32_t t64 = 15U;

	t64 = ((x3569|(x3570<x3571))<<x3572);

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3649 = 121U;
	int64_t x3650 = -1LL;
	int8_t x3651 = INT8_MIN;
	uint8_t x3652 = 2U;

	t65 = ((x3649|(x3650<x3651))<<x3652);

	if (t65 != 484) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3817 = 87U;
	int16_t x3818 = INT16_MIN;
	int32_t x3819 = INT32_MIN;
	static uint8_t x3820 = 22U;
	int32_t t66 = 1450486;

	t66 = ((x3817|(x3818<x3819))<<x3820);

	if (t66 != 364904448) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3865 = 8U;
	static volatile int32_t x3866 = INT32_MAX;
	int16_t x3867 = INT16_MIN;
	int16_t x3868 = 26;
	volatile int32_t t67 = 967854645;

	t67 = ((x3865|(x3866<x3867))<<x3868);

	if (t67 != 536870912) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3885 = 387U;
	static volatile int32_t x3886 = INT32_MIN;
	volatile int32_t t68 = 232;

	t68 = ((x3885|(x3886<x3887))<<x3888);

	if (t68 != 1548) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3937 = 14464U;
	static volatile int16_t x3938 = INT16_MAX;
	int64_t x3939 = -1LL;
	uint8_t x3940 = 1U;
	uint32_t t69 = 1839516697U;

	t69 = ((x3937|(x3938<x3939))<<x3940);

	if (t69 != 28928U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x4021 = 2U;
	static int8_t x4024 = 1;
	int32_t t70 = 1929;

	t70 = ((x4021|(x4022<x4023))<<x4024);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4041 = 5910LLU;
	uint32_t x4042 = 2104303074U;
	uint64_t x4043 = 15LLU;
	uint64_t t71 = 2285942195519699329LLU;

	t71 = ((x4041|(x4042<x4043))<<x4044);

	if (t71 != 3172907089920LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4281 = 0U;
	int32_t x4282 = -1;
	int16_t x4283 = -5743;
	static uint16_t x4284 = 14U;
	int32_t t72 = -9491857;

	t72 = ((x4281|(x4282<x4283))<<x4284);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4313 = 86283LLU;
	int8_t x4314 = INT8_MAX;
	int8_t x4315 = INT8_MIN;
	static int8_t x4316 = 6;
	volatile uint64_t t73 = 223963471450523LLU;

	t73 = ((x4313|(x4314<x4315))<<x4316);

	if (t73 != 5522112LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x4394 = 7069U;
	uint32_t t74 = 9276285U;

	t74 = ((x4393|(x4394<x4395))<<x4396);

	if (t74 != 2415919104U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4429 = UINT32_MAX;
	int16_t x4430 = INT16_MIN;

	t75 = ((x4429|(x4430<x4431))<<x4432);

	if (t75 != 4294967264U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4445 = 2968252845973LL;
	uint16_t x4446 = 40U;
	uint32_t x4447 = 32680U;
	static uint16_t x4448 = 20U;
	int64_t t76 = -774LL;

	t76 = ((x4445|(x4446<x4447))<<x4448);

	if (t76 != 3112438696218984448LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4563 = 4977239717242697LL;
	uint8_t x4564 = 3U;
	volatile uint64_t t77 = 54917LLU;

	t77 = ((x4561|(x4562<x4563))<<x4564);

	if (t77 != 1486655182536LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4565 = UINT8_MAX;
	int32_t x4566 = INT32_MIN;
	int16_t x4567 = INT16_MAX;
	int64_t x4568 = 1LL;
	static volatile int32_t t78 = 5893;

	t78 = ((x4565|(x4566<x4567))<<x4568);

	if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4589 = 0U;
	uint16_t x4590 = 3966U;
	static int64_t x4591 = INT64_MIN;
	uint16_t x4592 = 3U;

	t79 = ((x4589|(x4590<x4591))<<x4592);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4638 = INT16_MIN;
	uint8_t x4639 = 23U;
	int32_t x4640 = 11;
	static uint64_t t80 = 9188594LLU;

	t80 = ((x4637|(x4638<x4639))<<x4640);

	if (t80 != 10403326429184LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4685 = INT8_MAX;
	static uint8_t x4686 = UINT8_MAX;
	static volatile uint32_t x4687 = UINT32_MAX;
	uint16_t x4688 = 5U;

	t81 = ((x4685|(x4686<x4687))<<x4688);

	if (t81 != 4064) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4761 = UINT8_MAX;
	int64_t x4762 = INT64_MAX;
	static uint8_t x4763 = 82U;
	uint8_t x4764 = 2U;

	t82 = ((x4761|(x4762<x4763))<<x4764);

	if (t82 != 1020) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4781 = 90;
	int8_t x4782 = INT8_MIN;
	uint8_t x4784 = 6U;
	volatile int32_t t83 = -382250488;

	t83 = ((x4781|(x4782<x4783))<<x4784);

	if (t83 != 5824) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x4833 = INT8_MAX;
	uint64_t x4834 = UINT64_MAX;
	static int64_t x4835 = INT64_MIN;
	int16_t x4836 = 6;

	t84 = ((x4833|(x4834<x4835))<<x4836);

	if (t84 != 8128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4885 = INT16_MAX;
	uint8_t x4886 = UINT8_MAX;
	uint64_t x4887 = UINT64_MAX;
	uint32_t x4888 = 1U;
	volatile int32_t t85 = 33;

	t85 = ((x4885|(x4886<x4887))<<x4888);

	if (t85 != 65534) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4917 = 612109;
	int64_t x4919 = -1LL;
	int16_t x4920 = 0;
	volatile int32_t t86 = -18;

	t86 = ((x4917|(x4918<x4919))<<x4920);

	if (t86 != 612109) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4942 = 56;
	volatile int32_t t87 = -749001;

	t87 = ((x4941|(x4942<x4943))<<x4944);

	if (t87 != 4064) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4953 = 3892U;
	int64_t x4955 = INT64_MAX;
	volatile int16_t x4956 = 11;
	uint32_t t88 = 3U;

	t88 = ((x4953|(x4954<x4955))<<x4956);

	if (t88 != 7972864U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4977 = 30U;
	int8_t x4979 = INT8_MIN;
	volatile int32_t x4980 = 26;
	int32_t t89 = -20697377;

	t89 = ((x4977|(x4978<x4979))<<x4980);

	if (t89 != 2013265920) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x5209 = 2238190257042LLU;
	int64_t x5210 = 11611586109247LL;
	int8_t x5211 = INT8_MAX;
	uint32_t x5212 = 1U;
	volatile uint64_t t90 = 7238LLU;

	t90 = ((x5209|(x5210<x5211))<<x5212);

	if (t90 != 4476380514084LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5337 = INT16_MAX;
	volatile int16_t x5338 = INT16_MAX;
	int16_t x5339 = 1;
	static uint32_t x5340 = 0U;
	int32_t t91 = -3;

	t91 = ((x5337|(x5338<x5339))<<x5340);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5341 = UINT8_MAX;
	static volatile uint64_t x5343 = 7205569286972293LLU;
	volatile int64_t x5344 = 6LL;
	int32_t t92 = 0;

	t92 = ((x5341|(x5342<x5343))<<x5344);

	if (t92 != 16320) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5361 = UINT8_MAX;
	uint8_t x5362 = UINT8_MAX;
	uint32_t x5363 = 9U;
	static int32_t t93 = 13100;

	t93 = ((x5361|(x5362<x5363))<<x5364);

	if (t93 != 8160) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x5385 = 0;
	static int16_t x5386 = INT16_MIN;
	uint16_t x5387 = 0U;
	uint8_t x5388 = 1U;
	volatile int32_t t94 = -421413;

	t94 = ((x5385|(x5386<x5387))<<x5388);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5406 = UINT64_MAX;
	volatile int8_t x5408 = 2;

	t95 = ((x5405|(x5406<x5407))<<x5408);

	if (t95 != 48) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x5477 = 1742395U;
	static int16_t x5478 = INT16_MIN;
	volatile int64_t x5479 = INT64_MIN;
	uint8_t x5480 = 5U;

	t96 = ((x5477|(x5478<x5479))<<x5480);

	if (t96 != 55756640U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5582 = 3188528759LL;
	uint8_t x5583 = UINT8_MAX;
	int8_t x5584 = 3;
	volatile uint64_t t97 = 1305LLU;

	t97 = ((x5581|(x5582<x5583))<<x5584);

	if (t97 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5642 = 494522833974226122LL;
	static int16_t x5643 = 1850;
	volatile int8_t x5644 = 0;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = ((x5641|(x5642<x5643))<<x5644);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5673 = 389;
	static int16_t x5674 = -1;
	volatile int8_t x5675 = INT8_MAX;
	static volatile int32_t t99 = 24870729;

	t99 = ((x5673|(x5674<x5675))<<x5676);

	if (t99 != 389) { NG(); } else { ; }
	
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

