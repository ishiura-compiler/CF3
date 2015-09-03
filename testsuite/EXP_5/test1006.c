#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x106 = 8078;
int64_t t1 = 6LL;
uint16_t x255 = 8U;
int64_t x256 = -6335751004LL;
uint32_t x446 = 2836480U;
static volatile uint8_t x447 = 1U;
volatile int64_t x516 = -1LL;
int64_t x717 = -1LL;
uint32_t t10 = 53078692U;
int32_t x901 = INT32_MIN;
static volatile int64_t x921 = -1LL;
static volatile uint16_t x922 = UINT16_MAX;
static volatile int64_t t14 = 81LL;
int8_t x1122 = 0;
volatile uint64_t t19 = 23956427856206LLU;
static volatile int64_t x1214 = 49441957130888199LL;
uint8_t x1215 = 2U;
int64_t t20 = 1LL;
static int16_t x1273 = -1;
volatile int16_t x1274 = INT16_MAX;
static int8_t x1336 = INT8_MAX;
uint32_t t22 = 13918U;
static volatile uint64_t t26 = 452314687362821356LLU;
int64_t x1729 = 805LL;
static volatile int8_t x1730 = 0;
uint32_t x1731 = 0U;
static int8_t x1747 = 1;
volatile int64_t t28 = -561525LL;
int8_t x1945 = INT8_MIN;
uint32_t x1946 = 631987U;
int16_t x1947 = 0;
static uint32_t x2106 = 2042U;
volatile uint64_t t33 = 17LLU;
volatile int32_t t34 = 1;
uint32_t x2236 = UINT32_MAX;
int16_t x2474 = INT16_MAX;
uint16_t x2475 = 4U;
static int8_t x2499 = 0;
int16_t x2500 = INT16_MIN;
int32_t x2842 = 116999772;
static int8_t x2843 = 0;
uint16_t x2846 = UINT16_MAX;
uint8_t x3059 = 3U;
int8_t x3085 = INT8_MAX;
volatile uint8_t x3107 = 31U;
volatile uint16_t x3112 = 64U;
uint32_t x3205 = 91225U;
uint32_t x3416 = 9911718U;
uint16_t x3440 = 958U;
uint32_t x3574 = UINT32_MAX;
int16_t x3575 = 1;
volatile int32_t x3865 = -1;
int32_t x3885 = INT32_MIN;
int16_t x3961 = INT16_MAX;
int16_t x4057 = INT16_MAX;
uint64_t x4058 = UINT64_MAX;
uint8_t x4060 = 0U;
int32_t x4148 = INT32_MAX;
static uint64_t t59 = 61643600LLU;
int64_t t60 = -14045LL;
uint8_t x4483 = 26U;
uint32_t t62 = 41433322U;
volatile uint32_t t63 = 6219U;
static uint64_t x4894 = 835731476527852726LLU;
uint64_t t68 = 42816831379LLU;
uint8_t x5313 = 2U;
int16_t x5315 = 1;
uint64_t t70 = 10265LLU;
int8_t x5318 = INT8_MAX;
static uint32_t x5320 = UINT32_MAX;
volatile uint8_t x5338 = 30U;
volatile uint8_t x5339 = 0U;
int8_t x5369 = -1;
volatile uint64_t t73 = 306638LLU;
int8_t x5492 = 0;
volatile int32_t t75 = 1502;
static volatile uint8_t x5518 = UINT8_MAX;
int8_t x5581 = -1;
static int8_t x5583 = 0;
uint64_t t77 = 48007369103570361LLU;
uint8_t x6127 = 0U;
int16_t x6128 = INT16_MAX;
int8_t x6163 = 0;
uint16_t x6319 = 7U;
static int32_t x6600 = INT32_MAX;
uint64_t x6769 = 96961927618151337LLU;
uint32_t x6770 = UINT32_MAX;
volatile uint32_t x6938 = UINT32_MAX;
uint8_t x6940 = UINT8_MAX;
volatile uint32_t t90 = 131116500U;
uint16_t x7050 = 200U;
static volatile uint64_t x7285 = UINT64_MAX;
int8_t x7287 = 1;
int8_t x7351 = 34;
uint64_t x7385 = 8152070648912LLU;
int32_t x7486 = 110;


void f0(void) {
	int8_t x25 = INT8_MIN;
	uint8_t x26 = 22U;
	int8_t x27 = 1;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t0 = 8235160430183LLU;

	t0 = (x25%((x26<<x27)^x28));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x105 = INT32_MIN;
	static int16_t x107 = 2;
	int64_t x108 = -1LL;

	t1 = (x105%((x106<<x107)^x108));

	if (t1 != -26294LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x253 = 58;
	uint64_t x254 = 365137026635005909LLU;
	uint64_t t2 = 5613208845LLU;

	t2 = (x253%((x254<<x255)^x256));

	if (t2 != 58LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x445 = INT8_MIN;
	int8_t x448 = -3;
	uint32_t t3 = 4388U;

	t3 = (x445%((x446<<x447)^x448));

	if (t3 != 5672835U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x465 = 7U;
	static uint32_t x466 = 1895U;
	int32_t x467 = 5;
	int8_t x468 = INT8_MAX;
	volatile uint32_t t4 = 19420742U;

	t4 = (x465%((x466<<x467)^x468));

	if (t4 != 7U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x513 = INT64_MIN;
	uint8_t x514 = 64U;
	uint8_t x515 = 6U;
	int64_t t5 = 640357658LL;

	t5 = (x513%((x514<<x515)^x516));

	if (t5 != -4089LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x569 = INT32_MAX;
	static volatile uint8_t x570 = UINT8_MAX;
	uint8_t x571 = 0U;
	uint32_t x572 = 794612842U;
	static volatile uint32_t t6 = 21025532U;

	t6 = (x569%((x570<<x571)^x572));

	if (t6 != 558257877U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x617 = 99U;
	uint32_t x618 = 3891191U;
	static uint32_t x619 = 28U;
	volatile uint8_t x620 = 61U;
	static volatile uint32_t t7 = 239185325U;

	t7 = (x617%((x618<<x619)^x620));

	if (t7 != 99U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x718 = 4U;
	int8_t x719 = 22;
	static uint32_t x720 = 32U;
	volatile int64_t t8 = 76550334LL;

	t8 = (x717%((x718<<x719)^x720));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x733 = -4;
	uint8_t x734 = 45U;
	int8_t x735 = 0;
	static int32_t x736 = INT32_MAX;
	int32_t t9 = -1;

	t9 = (x733%((x734<<x735)^x736));

	if (t9 != -4) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x849 = 9U;
	static uint16_t x850 = 26965U;
	uint8_t x851 = 2U;
	int32_t x852 = -55748;

	t10 = (x849%((x850<<x851)^x852));

	if (t10 != 9U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x861 = -732470LL;
	uint64_t x862 = 960380509LLU;
	volatile uint8_t x863 = 1U;
	volatile int64_t x864 = -1LL;
	volatile uint64_t t11 = 7226LLU;

	t11 = (x861%((x862<<x863)^x864));

	if (t11 != 1920028549LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x889 = INT16_MAX;
	static int8_t x890 = INT8_MAX;
	uint16_t x891 = 11U;
	static int8_t x892 = INT8_MAX;
	volatile int32_t t12 = 179;

	t12 = (x889%((x890<<x891)^x892));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x902 = 16U;
	static uint8_t x903 = 11U;
	static volatile int32_t x904 = INT32_MIN;
	int32_t t13 = -1;

	t13 = (x901%((x902<<x903)^x904));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x923 = 0U;
	volatile int8_t x924 = INT8_MIN;

	t14 = (x921%((x922<<x923)^x924));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x925 = 7U;
	int8_t x926 = 3;
	volatile uint8_t x927 = 22U;
	uint32_t x928 = 345U;
	static uint32_t t15 = 1932189924U;

	t15 = (x925%((x926<<x927)^x928));

	if (t15 != 7U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1009 = INT32_MIN;
	static int32_t x1010 = 4506916;
	static int8_t x1011 = 1;
	static volatile uint8_t x1012 = 1U;
	volatile int32_t t16 = -83911025;

	t16 = (x1009%((x1010<<x1011)^x1012));

	if (t16 != -2191394) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1057 = INT16_MIN;
	uint8_t x1058 = UINT8_MAX;
	uint8_t x1059 = 18U;
	uint16_t x1060 = 13U;
	int32_t t17 = -222179349;

	t17 = (x1057%((x1058<<x1059)^x1060));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1121 = 24517292U;
	int8_t x1123 = 0;
	uint64_t x1124 = 145669203957LLU;
	uint64_t t18 = 757028470LLU;

	t18 = (x1121%((x1122<<x1123)^x1124));

	if (t18 != 24517292LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1149 = UINT8_MAX;
	static uint8_t x1150 = UINT8_MAX;
	uint16_t x1151 = 2U;
	volatile uint64_t x1152 = 134401LLU;

	t19 = (x1149%((x1150<<x1151)^x1152));

	if (t19 != 255LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1213 = 34U;
	int32_t x1216 = INT32_MAX;

	t20 = (x1213%((x1214<<x1215)^x1216));

	if (t20 != 34LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1275 = 0U;
	static int8_t x1276 = INT8_MIN;
	volatile int32_t t21 = 402;

	t21 = (x1273%((x1274<<x1275)^x1276));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1333 = -1;
	volatile uint32_t x1334 = UINT32_MAX;
	uint32_t x1335 = 1U;

	t22 = (x1333%((x1334<<x1335)^x1336));

	if (t22 != 126U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1373 = 16163;
	uint16_t x1374 = UINT16_MAX;
	static uint8_t x1375 = 12U;
	int64_t x1376 = -18167195661LL;
	int64_t t23 = -16222584796311292LL;

	t23 = (x1373%((x1374<<x1375)^x1376));

	if (t23 != 16163LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1469 = 28U;
	static int8_t x1470 = 2;
	int8_t x1471 = 1;
	static uint32_t x1472 = 14494U;
	uint32_t t24 = 6509301U;

	t24 = (x1469%((x1470<<x1471)^x1472));

	if (t24 != 28U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1625 = INT64_MAX;
	static uint32_t x1626 = 3377U;
	int8_t x1627 = 2;
	int32_t x1628 = -34435;
	volatile int64_t t25 = -2204619LL;

	t25 = (x1625%((x1626<<x1627)^x1628));

	if (t25 != 3188919988LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1689 = -1;
	uint64_t x1690 = 24981942LLU;
	static volatile int8_t x1691 = 0;
	int16_t x1692 = INT16_MIN;

	t26 = (x1689%((x1690<<x1691)^x1692));

	if (t26 != 24989257LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1732 = INT8_MIN;
	volatile int64_t t27 = 21703LL;

	t27 = (x1729%((x1730<<x1731)^x1732));

	if (t27 != 37LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1745 = INT16_MAX;
	int64_t x1746 = 2LL;
	int16_t x1748 = 0;

	t28 = (x1745%((x1746<<x1747)^x1748));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1777 = 2U;
	uint32_t x1778 = 21142U;
	uint8_t x1779 = 29U;
	int64_t x1780 = INT64_MAX;
	int64_t t29 = -2554704496LL;

	t29 = (x1777%((x1778<<x1779)^x1780));

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1825 = 610840044U;
	volatile uint64_t x1826 = UINT64_MAX;
	uint8_t x1827 = 9U;
	volatile uint64_t x1828 = 22231145806395LLU;
	static uint64_t t30 = 151427LLU;

	t30 = (x1825%((x1826<<x1827)^x1828));

	if (t30 != 610840044LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1913 = -1;
	uint8_t x1914 = UINT8_MAX;
	uint64_t x1915 = 22LLU;
	int64_t x1916 = INT64_MIN;
	int64_t t31 = -81087801750562LL;

	t31 = (x1913%((x1914<<x1915)^x1916));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1948 = -103;
	uint32_t t32 = 3192U;

	t32 = (x1945%((x1946<<x1947)^x1948));

	if (t32 != 631894U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2105 = -1;
	uint8_t x2107 = 0U;
	uint64_t x2108 = UINT64_MAX;

	t33 = (x2105%((x2106<<x2107)^x2108));

	if (t33 != 2042LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2225 = -1;
	int8_t x2226 = 1;
	static volatile uint16_t x2227 = 2U;
	uint16_t x2228 = 28841U;

	t34 = (x2225%((x2226<<x2227)^x2228));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2233 = INT16_MIN;
	uint16_t x2234 = 19920U;
	volatile uint16_t x2235 = 10U;
	volatile uint32_t t35 = 5947725U;

	t35 = (x2233%((x2234<<x2235)^x2236));

	if (t35 != 20365313U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2361 = 1759942061968LLU;
	uint16_t x2362 = 4U;
	uint8_t x2363 = 0U;
	uint8_t x2364 = UINT8_MAX;
	volatile uint64_t t36 = 1610313318LLU;

	t36 = (x2361%((x2362<<x2363)^x2364));

	if (t36 != 106LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2473 = 1;
	uint64_t x2476 = 18LLU;
	volatile uint64_t t37 = 160206LLU;

	t37 = (x2473%((x2474<<x2475)^x2476));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2497 = 1;
	static int16_t x2498 = INT16_MAX;
	volatile int32_t t38 = -6745399;

	t38 = (x2497%((x2498<<x2499)^x2500));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2841 = UINT64_MAX;
	int64_t x2844 = -1LL;
	uint64_t t39 = 290326971095180LLU;

	t39 = (x2841%((x2842<<x2843)^x2844));

	if (t39 != 116999772LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2845 = INT16_MIN;
	int8_t x2847 = 0;
	int32_t x2848 = 3124;
	volatile int32_t t40 = 0;

	t40 = (x2845%((x2846<<x2847)^x2848));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2949 = INT16_MAX;
	int8_t x2950 = 4;
	uint16_t x2951 = 1U;
	int8_t x2952 = INT8_MIN;
	int32_t t41 = -31702505;

	t41 = (x2949%((x2950<<x2951)^x2952));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3057 = -13;
	static uint32_t x3058 = UINT32_MAX;
	int16_t x3060 = -66;
	uint32_t t42 = 97559994U;

	t42 = (x3057%((x3058<<x3059)^x3060));

	if (t42 != 33U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x3061 = INT64_MAX;
	uint32_t x3062 = 1343877U;
	int16_t x3063 = 5;
	static int32_t x3064 = INT32_MIN;
	volatile int64_t t43 = 18077LL;

	t43 = (x3061%((x3062<<x3063)^x3064));

	if (t43 != 1396151967LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3086 = 431;
	int8_t x3087 = 8;
	int8_t x3088 = 28;
	volatile int32_t t44 = 181;

	t44 = (x3085%((x3086<<x3087)^x3088));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3105 = 19U;
	static uint64_t x3106 = 532900051721576LLU;
	uint8_t x3108 = 1U;
	volatile uint64_t t45 = 2165582520202LLU;

	t45 = (x3105%((x3106<<x3107)^x3108));

	if (t45 != 19LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x3109 = INT16_MAX;
	static uint64_t x3110 = 9112061978675682525LLU;
	static uint8_t x3111 = 3U;
	volatile uint64_t t46 = 34464950457930LLU;

	t46 = (x3109%((x3110<<x3111)^x3112));

	if (t46 != 32767LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3206 = 1512680321U;
	volatile uint16_t x3207 = 10U;
	int16_t x3208 = 0;
	uint32_t t47 = 34619553U;

	t47 = (x3205%((x3206<<x3207)^x3208));

	if (t47 != 91225U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x3413 = UINT16_MAX;
	int8_t x3414 = INT8_MAX;
	static uint32_t x3415 = 0U;
	uint32_t t48 = 5406954U;

	t48 = (x3413%((x3414<<x3415)^x3416));

	if (t48 != 65535U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3437 = INT16_MIN;
	uint32_t x3438 = 143467719U;
	static uint8_t x3439 = 0U;
	uint32_t t49 = 11460U;

	t49 = (x3437%((x3438<<x3439)^x3440));

	if (t49 != 134350667U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3573 = UINT64_MAX;
	int16_t x3576 = INT16_MIN;
	volatile uint64_t t50 = 1172000366LLU;

	t50 = (x3573%((x3574<<x3575)^x3576));

	if (t50 != 255LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3589 = -1;
	volatile uint8_t x3590 = 40U;
	int16_t x3591 = 4;
	uint8_t x3592 = 30U;
	volatile int32_t t51 = 177015696;

	t51 = (x3589%((x3590<<x3591)^x3592));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x3866 = 3593;
	static int8_t x3867 = 1;
	volatile int32_t x3868 = -1;
	volatile int32_t t52 = 157278;

	t52 = (x3865%((x3866<<x3867)^x3868));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3886 = INT8_MAX;
	uint8_t x3887 = 2U;
	int16_t x3888 = -10;
	volatile int32_t t53 = -64;

	t53 = (x3885%((x3886<<x3887)^x3888));

	if (t53 != -438) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3945 = -3;
	uint8_t x3946 = 3U;
	int16_t x3947 = 0;
	int32_t x3948 = -1;
	int32_t t54 = -1;

	t54 = (x3945%((x3946<<x3947)^x3948));

	if (t54 != -3) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3962 = 0;
	int8_t x3963 = 1;
	uint64_t x3964 = 7165196137006583LLU;
	static uint64_t t55 = 27729LLU;

	t55 = (x3961%((x3962<<x3963)^x3964));

	if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4025 = INT16_MIN;
	volatile int16_t x4026 = 6180;
	int8_t x4027 = 0;
	int64_t x4028 = INT64_MIN;
	volatile int64_t t56 = 0LL;

	t56 = (x4025%((x4026<<x4027)^x4028));

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x4059 = 3U;
	uint64_t t57 = 1972566130714779707LLU;

	t57 = (x4057%((x4058<<x4059)^x4060));

	if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x4145 = INT64_MAX;
	int8_t x4146 = 3;
	volatile uint16_t x4147 = 0U;
	static volatile int64_t t58 = 2LL;

	t58 = (x4145%((x4146<<x4147)^x4148));

	if (t58 != 31LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4297 = 11U;
	static uint64_t x4298 = 489991LLU;
	static int16_t x4299 = 7;
	uint16_t x4300 = UINT16_MAX;

	t59 = (x4297%((x4298<<x4299)^x4300));

	if (t59 != 11LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4337 = -1;
	int8_t x4338 = 31;
	static uint8_t x4339 = 3U;
	int64_t x4340 = -1048008171034LL;

	t60 = (x4337%((x4338<<x4339)^x4340));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4389 = 1U;
	int64_t x4390 = 330414405549149LL;
	uint16_t x4391 = 0U;
	volatile uint8_t x4392 = 5U;
	static int64_t t61 = 37538LL;

	t61 = (x4389%((x4390<<x4391)^x4392));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4481 = 32U;
	uint8_t x4482 = 1U;
	volatile int32_t x4484 = -25333407;

	t62 = (x4481%((x4482<<x4483)^x4484));

	if (t62 != 32U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x4581 = -1;
	static uint32_t x4582 = 1633226U;
	volatile int8_t x4583 = 0;
	static int16_t x4584 = -3;

	t63 = (x4581%((x4582<<x4583)^x4584));

	if (t63 != 1633224U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4605 = INT16_MIN;
	uint32_t x4606 = 20343U;
	volatile uint16_t x4607 = 2U;
	uint8_t x4608 = 4U;
	volatile uint32_t t64 = 8865216U;

	t64 = (x4605%((x4606<<x4607)^x4608));

	if (t64 != 6016U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4641 = -18;
	int16_t x4642 = 2270;
	static int16_t x4643 = 7;
	int32_t x4644 = -1;
	int32_t t65 = -854843;

	t65 = (x4641%((x4642<<x4643)^x4644));

	if (t65 != -18) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4701 = INT16_MIN;
	uint8_t x4702 = 69U;
	int8_t x4703 = 5;
	int64_t x4704 = INT64_MIN;
	int64_t t66 = -128641525LL;

	t66 = (x4701%((x4702<<x4703)^x4704));

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x4837 = -1;
	int16_t x4838 = 8871;
	static volatile int16_t x4839 = 5;
	uint32_t x4840 = UINT32_MAX;
	volatile uint32_t t67 = 912954U;

	t67 = (x4837%((x4838<<x4839)^x4840));

	if (t67 != 283872U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4893 = -1;
	int16_t x4895 = 0;
	int32_t x4896 = 40578586;

	t68 = (x4893%((x4894<<x4895)^x4896));

	if (t68 != 60651590709790007LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4933 = -1;
	int16_t x4934 = INT16_MAX;
	uint32_t x4935 = 1U;
	static volatile int32_t x4936 = INT32_MIN;
	int32_t t69 = -1;

	t69 = (x4933%((x4934<<x4935)^x4936));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5314 = INT16_MAX;
	uint64_t x5316 = 195716719697355896LLU;

	t70 = (x5313%((x5314<<x5315)^x5316));

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5317 = 9U;
	int16_t x5319 = 0;
	uint32_t t71 = 9260582U;

	t71 = (x5317%((x5318<<x5319)^x5320));

	if (t71 != 9U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x5337 = INT64_MIN;
	uint8_t x5340 = 113U;
	static volatile int64_t t72 = 201865686686464LL;

	t72 = (x5337%((x5338<<x5339)^x5340));

	if (t72 != -80LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5370 = 20LLU;
	int8_t x5371 = 0;
	int16_t x5372 = 1613;

	t73 = (x5369%((x5370<<x5371)^x5372));

	if (t73 != 990LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5437 = 0;
	uint64_t x5438 = 247320632LLU;
	uint8_t x5439 = 10U;
	static int32_t x5440 = INT32_MAX;
	uint64_t t74 = 311LLU;

	t74 = (x5437%((x5438<<x5439)^x5440));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5489 = INT8_MAX;
	static int32_t x5490 = 4088;
	int8_t x5491 = 1;

	t75 = (x5489%((x5490<<x5491)^x5492));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5517 = UINT8_MAX;
	uint16_t x5519 = 3U;
	volatile int32_t x5520 = INT32_MAX;
	int32_t t76 = 1;

	t76 = (x5517%((x5518<<x5519)^x5520));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x5582 = 31593707505595449LLU;
	int8_t x5584 = -1;

	t77 = (x5581%((x5582<<x5583)^x5584));

	if (t77 != 31593707505595449LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5637 = INT32_MIN;
	uint16_t x5638 = 123U;
	static uint64_t x5639 = 5LLU;
	int64_t x5640 = INT64_MIN;
	static int64_t t78 = 169772337LL;

	t78 = (x5637%((x5638<<x5639)^x5640));

	if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5997 = INT16_MIN;
	uint8_t x5998 = UINT8_MAX;
	int64_t x5999 = 0LL;
	uint64_t x6000 = UINT64_MAX;
	volatile uint64_t t79 = 2341818207LLU;

	t79 = (x5997%((x5998<<x5999)^x6000));

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x6125 = 1U;
	uint16_t x6126 = UINT16_MAX;
	int32_t t80 = 107785040;

	t80 = (x6125%((x6126<<x6127)^x6128));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x6161 = INT16_MIN;
	static uint16_t x6162 = 1187U;
	static int32_t x6164 = INT32_MAX;
	int32_t t81 = 79355;

	t81 = (x6161%((x6162<<x6163)^x6164));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x6317 = INT32_MAX;
	int8_t x6318 = INT8_MAX;
	int32_t x6320 = INT32_MAX;
	static int32_t t82 = 1586;

	t82 = (x6317%((x6318<<x6319)^x6320));

	if (t82 != 16256) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6541 = INT32_MIN;
	uint64_t x6542 = 93939579LLU;
	uint16_t x6543 = 3U;
	int64_t x6544 = -1LL;
	volatile uint64_t t83 = 14854555023638LLU;

	t83 = (x6541%((x6542<<x6543)^x6544));

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x6597 = 114U;
	uint32_t x6598 = 7670U;
	int16_t x6599 = 0;
	uint32_t t84 = 8165459U;

	t84 = (x6597%((x6598<<x6599)^x6600));

	if (t84 != 114U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6601 = 7;
	uint64_t x6602 = UINT64_MAX;
	uint32_t x6603 = 7U;
	int64_t x6604 = INT64_MIN;
	volatile uint64_t t85 = 120LLU;

	t85 = (x6601%((x6602<<x6603)^x6604));

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x6771 = 12;
	volatile int8_t x6772 = -1;
	volatile uint64_t t86 = 48385190349LLU;

	t86 = (x6769%((x6770<<x6771)^x6772));

	if (t86 != 3927LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x6893 = UINT16_MAX;
	int8_t x6894 = INT8_MAX;
	int16_t x6895 = 1;
	volatile int8_t x6896 = INT8_MIN;
	volatile int32_t t87 = -1;

	t87 = (x6893%((x6894<<x6895)^x6896));

	if (t87 != 15) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x6929 = INT32_MAX;
	uint16_t x6930 = 1539U;
	uint8_t x6931 = 7U;
	int16_t x6932 = INT16_MIN;
	static volatile int32_t t88 = 1558080;

	t88 = (x6929%((x6930<<x6931)^x6932));

	if (t88 != 225663) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6937 = 0;
	uint8_t x6939 = 22U;
	uint32_t t89 = 469U;

	t89 = (x6937%((x6938<<x6939)^x6940));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x6997 = 1035633558U;
	volatile int8_t x6998 = 0;
	static uint64_t x6999 = 0LLU;
	int8_t x7000 = INT8_MAX;

	t90 = (x6997%((x6998<<x6999)^x7000));

	if (t90 != 120U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x7021 = INT16_MIN;
	uint64_t x7022 = 47949327LLU;
	static volatile uint8_t x7023 = 1U;
	volatile int8_t x7024 = INT8_MIN;
	uint64_t t91 = 272592366403285056LLU;

	t91 = (x7021%((x7022<<x7023)^x7024));

	if (t91 != 95865954LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x7049 = INT16_MIN;
	volatile uint8_t x7051 = 13U;
	volatile uint8_t x7052 = 16U;
	int32_t t92 = 2000;

	t92 = (x7049%((x7050<<x7051)^x7052));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x7286 = 7935U;
	int8_t x7288 = -37;
	volatile uint64_t t93 = 10770464670161665LLU;

	t93 = (x7285%((x7286<<x7287)^x7288));

	if (t93 != 250747224LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x7329 = INT8_MAX;
	int16_t x7330 = 88;
	static int64_t x7331 = 0LL;
	int8_t x7332 = INT8_MIN;
	int32_t t94 = -31819134;

	t94 = (x7329%((x7330<<x7331)^x7332));

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x7333 = INT8_MAX;
	int8_t x7334 = INT8_MAX;
	int8_t x7335 = 1;
	int16_t x7336 = 1;
	static volatile int32_t t95 = -3;

	t95 = (x7333%((x7334<<x7335)^x7336));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x7349 = 25375U;
	volatile uint64_t x7350 = 22LLU;
	volatile uint64_t x7352 = UINT64_MAX;
	uint64_t t96 = 3016269714LLU;

	t96 = (x7349%((x7350<<x7351)^x7352));

	if (t96 != 25375LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x7386 = UINT32_MAX;
	int32_t x7387 = 19;
	volatile uint8_t x7388 = UINT8_MAX;
	volatile uint64_t t97 = 9362LLU;

	t97 = (x7385%((x7386<<x7387)^x7388));

	if (t97 != 1217335738LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x7449 = INT8_MIN;
	uint64_t x7450 = UINT64_MAX;
	int8_t x7451 = 1;
	static int32_t x7452 = 7727154;
	static volatile uint64_t t98 = 3855LLU;

	t98 = (x7449%((x7450<<x7451)^x7452));

	if (t98 != 7727028LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x7485 = 3869U;
	int8_t x7487 = 4;
	volatile int16_t x7488 = 6;
	int32_t t99 = 2;

	t99 = (x7485%((x7486<<x7487)^x7488));

	if (t99 != 337) { NG(); } else { ; }
	
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

