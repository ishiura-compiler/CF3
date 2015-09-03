#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1;
int16_t x99 = INT16_MAX;
int16_t x100 = -1;
int32_t x112 = 1;
uint32_t t4 = 14U;
static int16_t x303 = INT16_MIN;
int32_t x304 = 1;
static volatile uint8_t x352 = 11U;
int32_t t6 = -82840;
volatile int8_t x403 = INT8_MIN;
volatile int32_t t8 = 3463723;
volatile int16_t x414 = 11897;
int8_t x765 = 9;
static int8_t x922 = -13;
int8_t x971 = -1;
uint64_t x1187 = UINT64_MAX;
volatile uint32_t x1202 = UINT32_MAX;
int8_t x1333 = 0;
volatile int32_t t19 = -84225930;
uint8_t x1435 = UINT8_MAX;
uint32_t x1520 = 17U;
int16_t x1564 = 30;
uint32_t x1793 = UINT32_MAX;
uint64_t x2113 = UINT64_MAX;
int32_t x2166 = INT32_MAX;
int8_t x2167 = INT8_MIN;
static volatile uint64_t t31 = 10LLU;
volatile int64_t x2363 = INT64_MAX;
int8_t x2370 = INT8_MAX;
int8_t x2387 = 0;
static uint16_t x2388 = 8U;
volatile int32_t t35 = -31115;
volatile int16_t x2440 = -1;
volatile uint16_t x2468 = 1U;
uint64_t x2517 = UINT64_MAX;
uint8_t x2530 = 4U;
static uint8_t x2531 = UINT8_MAX;
uint16_t x2532 = 0U;
int32_t t39 = INT32_MAX;
int8_t x2634 = 31;
uint64_t x2665 = 1763588437513LLU;
volatile int32_t x2686 = INT32_MAX;
static int8_t x2841 = 25;
static volatile int32_t x2921 = INT32_MAX;
int64_t x2958 = INT64_MIN;
volatile int64_t t46 = -501LL;
static int64_t x2973 = 6LL;
static int32_t x2976 = -1;
int64_t x2983 = INT64_MIN;
static uint32_t x3153 = 20505828U;
int8_t x3156 = 11;
volatile uint16_t x3286 = 761U;
volatile int32_t x3287 = -7;
static int8_t x3370 = -1;
volatile int32_t t54 = -287;
int16_t x3394 = INT16_MIN;
volatile int16_t x3395 = -2;
volatile int64_t x3422 = -1LL;
volatile uint32_t t56 = 36301U;
volatile uint8_t x3426 = 119U;
static int32_t x3449 = INT32_MAX;
int16_t x3469 = INT16_MAX;
int16_t x3487 = 1;
uint64_t t60 = 5362084107LLU;
uint16_t x3577 = 6869U;
volatile int32_t x3580 = 0;
uint64_t x3637 = UINT64_MAX;
uint16_t x3692 = 1U;
uint64_t x3729 = 8209088092329459668LLU;
uint16_t x3732 = 33U;
static int64_t x3810 = INT64_MAX;
int32_t t65 = 4;
static volatile int32_t x3867 = INT32_MIN;
uint16_t x3984 = 27U;
int32_t x4069 = INT32_MAX;
uint32_t t70 = 39840536U;
static uint64_t t71 = 2LLU;
static uint32_t x4280 = 1U;
static int64_t x4294 = -1LL;
volatile uint8_t x4320 = 6U;
int16_t x4350 = INT16_MIN;
int32_t t76 = 42611;
int16_t x4450 = INT16_MIN;
uint16_t x4452 = 10U;
int64_t x4527 = INT64_MIN;
volatile int64_t t81 = 2LL;
uint32_t x4819 = UINT32_MAX;
int8_t x4897 = 29;
int32_t x4898 = INT32_MIN;
uint32_t x4899 = 113U;
static volatile int32_t t84 = -610385;
int32_t x4923 = -751215272;
volatile uint8_t x4996 = 30U;
volatile int32_t t86 = 27348086;
uint32_t x5065 = UINT32_MAX;
uint32_t t88 = 713041310U;
int64_t t89 = 86727130LL;
static volatile int8_t x5186 = -1;
volatile uint8_t x5236 = 4U;
int8_t x5360 = 27;
uint32_t x5408 = 7U;
volatile int16_t x5414 = 6376;
uint64_t x5425 = 3841673977279042675LLU;
uint8_t x5472 = 4U;
static int64_t x5483 = -1LL;
static volatile int32_t x5563 = INT32_MIN;


void f0(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = -1;
	volatile int32_t x23 = -1;
	int8_t x24 = 3;

	t0 = (x21>>((x22==x23)+x24));

	if (t0 != 15) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x89 = UINT32_MAX;
	static uint32_t x90 = 32523U;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 0U;
	uint32_t t1 = UINT32_MAX;

	t1 = (x89>>((x90==x91)+x92));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MAX;
	static uint32_t t2 = UINT32_MAX;

	t2 = (x97>>((x98==x99)+x100));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x109 = 0LL;
	int8_t x110 = 1;
	volatile uint64_t x111 = 341710433LLU;
	static int64_t t3 = -10506764644510LL;

	t3 = (x109>>((x110==x111)+x112));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x285 = 14U;
	static int64_t x286 = INT64_MAX;
	static uint16_t x287 = 242U;
	static int8_t x288 = 28;

	t4 = (x285>>((x286==x287)+x288));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x301 = 1LL;
	int64_t x302 = -1LL;
	volatile int64_t t5 = 11620316866LL;

	t5 = (x301>>((x302==x303)+x304));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x349 = 5451422;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = -258LL;

	t6 = (x349>>((x350==x351)+x352));

	if (t6 != 2661) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x397 = INT64_MAX;
	int64_t x398 = -1LL;
	int8_t x399 = 3;
	static volatile uint8_t x400 = 1U;
	int64_t t7 = -98058047LL;

	t7 = (x397>>((x398==x399)+x400));

	if (t7 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x401 = 2767;
	int16_t x402 = -8235;
	volatile uint64_t x404 = 12LLU;

	t8 = (x401>>((x402==x403)+x404));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x413 = UINT64_MAX;
	uint8_t x415 = 9U;
	int16_t x416 = 3;
	volatile uint64_t t9 = 56222162055196LLU;

	t9 = (x413>>((x414==x415)+x416));

	if (t9 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x541 = 61;
	uint16_t x542 = UINT16_MAX;
	uint32_t x543 = 4347U;
	volatile uint8_t x544 = 3U;
	volatile int32_t t10 = 1473488;

	t10 = (x541>>((x542==x543)+x544));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x766 = -1;
	volatile int32_t x767 = INT32_MIN;
	int16_t x768 = 1;
	static volatile int32_t t11 = 15021289;

	t11 = (x765>>((x766==x767)+x768));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x789 = UINT8_MAX;
	static uint16_t x790 = UINT16_MAX;
	int16_t x791 = -10926;
	uint8_t x792 = 24U;
	volatile int32_t t12 = -271695803;

	t12 = (x789>>((x790==x791)+x792));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x877 = 57228625U;
	int16_t x878 = INT16_MIN;
	volatile int32_t x879 = 0;
	static uint16_t x880 = 3U;
	volatile uint32_t t13 = 1140U;

	t13 = (x877>>((x878==x879)+x880));

	if (t13 != 7153578U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x921 = 0;
	static int16_t x923 = INT16_MIN;
	uint8_t x924 = 9U;
	volatile int32_t t14 = -11;

	t14 = (x921>>((x922==x923)+x924));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x969 = INT64_MAX;
	volatile uint16_t x970 = 0U;
	static uint8_t x972 = 0U;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x969>>((x970==x971)+x972));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x1185 = 10136;
	static int64_t x1186 = 1861285561LL;
	uint8_t x1188 = 12U;
	static int32_t t16 = 14314983;

	t16 = (x1185>>((x1186==x1187)+x1188));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1197 = 85U;
	static int16_t x1198 = -1;
	int64_t x1199 = INT64_MAX;
	uint32_t x1200 = 1U;
	volatile uint32_t t17 = 1584453072U;

	t17 = (x1197>>((x1198==x1199)+x1200));

	if (t17 != 42U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1201 = 0U;
	static uint16_t x1203 = 91U;
	static int8_t x1204 = 0;
	int32_t t18 = 79687023;

	t18 = (x1201>>((x1202==x1203)+x1204));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1334 = -1;
	uint8_t x1335 = UINT8_MAX;
	uint8_t x1336 = 2U;

	t19 = (x1333>>((x1334==x1335)+x1336));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1433 = UINT64_MAX;
	int64_t x1434 = INT64_MIN;
	int32_t x1436 = 1;
	uint64_t t20 = 22901LLU;

	t20 = (x1433>>((x1434==x1435)+x1436));

	if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1453 = 23U;
	static int8_t x1454 = INT8_MIN;
	int64_t x1455 = INT64_MAX;
	volatile int8_t x1456 = 0;
	volatile int32_t t21 = 13329;

	t21 = (x1453>>((x1454==x1455)+x1456));

	if (t21 != 23) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1517 = 38196187945LLU;
	uint8_t x1518 = 40U;
	static int32_t x1519 = -1;
	volatile uint64_t t22 = 28163367032974LLU;

	t22 = (x1517>>((x1518==x1519)+x1520));

	if (t22 != 291413LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1561 = INT8_MAX;
	volatile int64_t x1562 = -1LL;
	int64_t x1563 = -1LL;
	int32_t t23 = -7585194;

	t23 = (x1561>>((x1562==x1563)+x1564));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1794 = INT8_MIN;
	volatile int32_t x1795 = INT32_MIN;
	int8_t x1796 = 0;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x1793>>((x1794==x1795)+x1796));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1981 = 6U;
	uint8_t x1982 = 26U;
	static volatile int64_t x1983 = INT64_MAX;
	static uint32_t x1984 = 7U;
	uint32_t t25 = 3921U;

	t25 = (x1981>>((x1982==x1983)+x1984));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2049 = 19649;
	int64_t x2050 = INT64_MIN;
	int16_t x2051 = -13;
	int16_t x2052 = 0;
	static int32_t t26 = -6907792;

	t26 = (x2049>>((x2050==x2051)+x2052));

	if (t26 != 19649) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x2114 = 8464080707746332744LLU;
	int8_t x2115 = INT8_MAX;
	static int32_t x2116 = 0;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x2113>>((x2114==x2115)+x2116));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2125 = INT16_MAX;
	volatile int16_t x2126 = INT16_MAX;
	int16_t x2127 = INT16_MIN;
	volatile int16_t x2128 = 6;
	static volatile int32_t t28 = 11986;

	t28 = (x2125>>((x2126==x2127)+x2128));

	if (t28 != 511) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2165 = INT16_MAX;
	int8_t x2168 = 19;
	int32_t t29 = -6;

	t29 = (x2165>>((x2166==x2167)+x2168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x2177 = INT32_MAX;
	int64_t x2178 = 299618994950447612LL;
	static int32_t x2179 = -421819100;
	int8_t x2180 = 0;
	static volatile int32_t t30 = INT32_MAX;

	t30 = (x2177>>((x2178==x2179)+x2180));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2209 = 1573LLU;
	int8_t x2210 = INT8_MAX;
	int16_t x2211 = 171;
	static uint8_t x2212 = 27U;

	t31 = (x2209>>((x2210==x2211)+x2212));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x2305 = 116U;
	volatile uint32_t x2306 = UINT32_MAX;
	volatile uint8_t x2307 = UINT8_MAX;
	int8_t x2308 = 3;
	static volatile uint32_t t32 = 8112U;

	t32 = (x2305>>((x2306==x2307)+x2308));

	if (t32 != 14U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2361 = INT32_MAX;
	int32_t x2362 = INT32_MAX;
	volatile uint8_t x2364 = 3U;
	int32_t t33 = 32;

	t33 = (x2361>>((x2362==x2363)+x2364));

	if (t33 != 268435455) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2369 = 2U;
	int32_t x2371 = INT32_MIN;
	uint16_t x2372 = 19U;
	int32_t t34 = -154668;

	t34 = (x2369>>((x2370==x2371)+x2372));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2385 = 1U;
	static int32_t x2386 = -1;

	t35 = (x2385>>((x2386==x2387)+x2388));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2437 = UINT32_MAX;
	int64_t x2438 = INT64_MIN;
	int64_t x2439 = INT64_MIN;
	static volatile uint32_t t36 = UINT32_MAX;

	t36 = (x2437>>((x2438==x2439)+x2440));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2465 = 32142979U;
	uint64_t x2466 = 8726394869433144809LLU;
	int16_t x2467 = -1186;
	uint32_t t37 = 757057129U;

	t37 = (x2465>>((x2466==x2467)+x2468));

	if (t37 != 16071489U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2518 = UINT64_MAX;
	int16_t x2519 = -1;
	int16_t x2520 = 24;
	uint64_t t38 = 90179032579LLU;

	t38 = (x2517>>((x2518==x2519)+x2520));

	if (t38 != 549755813887LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x2529 = INT32_MAX;

	t39 = (x2529>>((x2530==x2531)+x2532));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2633 = 35920605U;
	int16_t x2635 = INT16_MIN;
	uint16_t x2636 = 3U;
	uint32_t t40 = 1450443U;

	t40 = (x2633>>((x2634==x2635)+x2636));

	if (t40 != 4490075U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2666 = 1;
	int8_t x2667 = INT8_MIN;
	uint64_t x2668 = 11LLU;
	uint64_t t41 = 1LLU;

	t41 = (x2665>>((x2666==x2667)+x2668));

	if (t41 != 861127166LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2685 = 1U;
	int8_t x2687 = 3;
	static int8_t x2688 = 1;
	volatile int32_t t42 = -276131;

	t42 = (x2685>>((x2686==x2687)+x2688));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2725 = 1923706116U;
	uint64_t x2726 = UINT64_MAX;
	volatile int32_t x2727 = INT32_MIN;
	volatile uint8_t x2728 = 20U;
	volatile uint32_t t43 = 138792U;

	t43 = (x2725>>((x2726==x2727)+x2728));

	if (t43 != 1834U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2842 = 1U;
	static volatile uint16_t x2843 = 924U;
	volatile int8_t x2844 = 1;
	int32_t t44 = -6347095;

	t44 = (x2841>>((x2842==x2843)+x2844));

	if (t44 != 12) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2922 = 75;
	volatile int64_t x2923 = 14201991121629631LL;
	int16_t x2924 = 0;
	int32_t t45 = INT32_MAX;

	t45 = (x2921>>((x2922==x2923)+x2924));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2957 = INT64_MAX;
	uint16_t x2959 = 12U;
	volatile uint16_t x2960 = 2U;

	t46 = (x2957>>((x2958==x2959)+x2960));

	if (t46 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2974 = UINT32_MAX;
	static int8_t x2975 = -1;
	int64_t t47 = 488647716629LL;

	t47 = (x2973>>((x2974==x2975)+x2976));

	if (t47 != 6LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2981 = 2828;
	int32_t x2982 = -698;
	volatile int8_t x2984 = 0;
	static int32_t t48 = 7996;

	t48 = (x2981>>((x2982==x2983)+x2984));

	if (t48 != 2828) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3154 = INT16_MIN;
	int8_t x3155 = -1;
	uint32_t t49 = 106022319U;

	t49 = (x3153>>((x3154==x3155)+x3156));

	if (t49 != 10012U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3245 = INT64_MAX;
	int8_t x3246 = -5;
	int32_t x3247 = INT32_MIN;
	volatile int32_t x3248 = 0;
	static volatile int64_t t50 = INT64_MAX;

	t50 = (x3245>>((x3246==x3247)+x3248));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3285 = 1U;
	static int32_t x3288 = 0;
	volatile int32_t t51 = -16785067;

	t51 = (x3285>>((x3286==x3287)+x3288));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x3289 = 3394904015956LL;
	uint8_t x3290 = 3U;
	static volatile int64_t x3291 = INT64_MIN;
	int8_t x3292 = 5;
	int64_t t52 = 243LL;

	t52 = (x3289>>((x3290==x3291)+x3292));

	if (t52 != 106090750498LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3369 = 16;
	int8_t x3371 = 10;
	uint64_t x3372 = 3LLU;
	volatile int32_t t53 = 81993;

	t53 = (x3369>>((x3370==x3371)+x3372));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3377 = 0;
	static volatile int32_t x3378 = INT32_MIN;
	uint16_t x3379 = 179U;
	int8_t x3380 = 1;

	t54 = (x3377>>((x3378==x3379)+x3380));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3393 = 24480U;
	volatile uint16_t x3396 = 30U;
	volatile int32_t t55 = 85150;

	t55 = (x3393>>((x3394==x3395)+x3396));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3421 = UINT32_MAX;
	uint64_t x3423 = 15955808838041572LLU;
	volatile uint16_t x3424 = 1U;

	t56 = (x3421>>((x3422==x3423)+x3424));

	if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3425 = UINT32_MAX;
	int8_t x3427 = INT8_MIN;
	uint8_t x3428 = 15U;
	static uint32_t t57 = 15934U;

	t57 = (x3425>>((x3426==x3427)+x3428));

	if (t57 != 131071U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3450 = INT8_MAX;
	int8_t x3451 = INT8_MIN;
	int8_t x3452 = 1;
	int32_t t58 = 65858727;

	t58 = (x3449>>((x3450==x3451)+x3452));

	if (t58 != 1073741823) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3470 = UINT32_MAX;
	uint64_t x3471 = 16875878144045LLU;
	int8_t x3472 = 6;
	volatile int32_t t59 = 369125464;

	t59 = (x3469>>((x3470==x3471)+x3472));

	if (t59 != 511) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3485 = 373LLU;
	uint16_t x3486 = UINT16_MAX;
	uint8_t x3488 = 26U;

	t60 = (x3485>>((x3486==x3487)+x3488));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3578 = -170LL;
	volatile uint16_t x3579 = 36U;
	volatile int32_t t61 = -27622869;

	t61 = (x3577>>((x3578==x3579)+x3580));

	if (t61 != 6869) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x3638 = INT32_MIN;
	static uint32_t x3639 = 1181U;
	int8_t x3640 = 0;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x3637>>((x3638==x3639)+x3640));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3689 = 16U;
	volatile int32_t x3690 = INT32_MIN;
	static int16_t x3691 = -1;
	static uint32_t t63 = 59U;

	t63 = (x3689>>((x3690==x3691)+x3692));

	if (t63 != 8U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3730 = INT8_MAX;
	static volatile int16_t x3731 = INT16_MIN;
	volatile uint64_t t64 = 387884985375578416LLU;

	t64 = (x3729>>((x3730==x3731)+x3732));

	if (t64 != 955663632LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3809 = 41U;
	int8_t x3811 = INT8_MIN;
	uint8_t x3812 = 8U;

	t65 = (x3809>>((x3810==x3811)+x3812));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3853 = UINT32_MAX;
	static int8_t x3854 = -1;
	int64_t x3855 = -1LL;
	int32_t x3856 = -1;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x3853>>((x3854==x3855)+x3856));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3865 = UINT8_MAX;
	int32_t x3866 = INT32_MIN;
	uint32_t x3868 = UINT32_MAX;
	int32_t t67 = 3564;

	t67 = (x3865>>((x3866==x3867)+x3868));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3981 = 0U;
	uint32_t x3982 = 881564U;
	int32_t x3983 = INT32_MIN;
	int32_t t68 = -275038;

	t68 = (x3981>>((x3982==x3983)+x3984));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x4070 = INT32_MAX;
	volatile int8_t x4071 = -1;
	int16_t x4072 = 1;
	volatile int32_t t69 = 0;

	t69 = (x4069>>((x4070==x4071)+x4072));

	if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4101 = UINT32_MAX;
	static int32_t x4102 = INT32_MIN;
	static uint64_t x4103 = 9156319264886720119LLU;
	uint64_t x4104 = 13LLU;

	t70 = (x4101>>((x4102==x4103)+x4104));

	if (t70 != 524287U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4233 = 551686488666LLU;
	volatile uint8_t x4234 = UINT8_MAX;
	int16_t x4235 = -10;
	int8_t x4236 = 5;

	t71 = (x4233>>((x4234==x4235)+x4236));

	if (t71 != 17240202770LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4277 = INT8_MAX;
	int16_t x4278 = -1;
	int64_t x4279 = INT64_MIN;
	static int32_t t72 = -1019255308;

	t72 = (x4277>>((x4278==x4279)+x4280));

	if (t72 != 63) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4293 = 80914995;
	int64_t x4295 = INT64_MIN;
	uint8_t x4296 = 0U;
	volatile int32_t t73 = -176910;

	t73 = (x4293>>((x4294==x4295)+x4296));

	if (t73 != 80914995) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4317 = 8239019949LL;
	uint16_t x4318 = UINT16_MAX;
	static int8_t x4319 = INT8_MIN;
	volatile int64_t t74 = 487019045787258LL;

	t74 = (x4317>>((x4318==x4319)+x4320));

	if (t74 != 128734686LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x4333 = 2442LL;
	uint16_t x4334 = 3424U;
	int8_t x4335 = 7;
	uint8_t x4336 = 25U;
	int64_t t75 = 82046718560LL;

	t75 = (x4333>>((x4334==x4335)+x4336));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4349 = 7U;
	uint64_t x4351 = 4622LLU;
	static uint8_t x4352 = 7U;

	t76 = (x4349>>((x4350==x4351)+x4352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4369 = 969853519U;
	uint64_t x4370 = 8538953930722971LLU;
	volatile int32_t x4371 = INT32_MIN;
	volatile int16_t x4372 = 11;
	volatile uint32_t t77 = 2541295U;

	t77 = (x4369>>((x4370==x4371)+x4372));

	if (t77 != 473561U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x4433 = INT64_MAX;
	uint8_t x4434 = 17U;
	static uint32_t x4435 = UINT32_MAX;
	static uint8_t x4436 = 1U;
	int64_t t78 = -2080199433014148LL;

	t78 = (x4433>>((x4434==x4435)+x4436));

	if (t78 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4449 = 0;
	int8_t x4451 = -1;
	static int32_t t79 = 1128;

	t79 = (x4449>>((x4450==x4451)+x4452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4525 = 3U;
	uint64_t x4526 = 0LLU;
	volatile uint16_t x4528 = 2U;
	volatile int32_t t80 = -6078631;

	t80 = (x4525>>((x4526==x4527)+x4528));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4593 = 55LL;
	int32_t x4594 = -18845197;
	volatile int16_t x4595 = -1;
	int8_t x4596 = 0;

	t81 = (x4593>>((x4594==x4595)+x4596));

	if (t81 != 55LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x4709 = 141560113849801290LLU;
	uint16_t x4710 = UINT16_MAX;
	int64_t x4711 = -109042749585141LL;
	static uint16_t x4712 = 30U;
	volatile uint64_t t82 = 7975146555695LLU;

	t82 = (x4709>>((x4710==x4711)+x4712));

	if (t82 != 131838129LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4817 = 88U;
	static int32_t x4818 = INT32_MIN;
	uint8_t x4820 = 1U;
	volatile int32_t t83 = 16;

	t83 = (x4817>>((x4818==x4819)+x4820));

	if (t83 != 44) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4900 = 1;

	t84 = (x4897>>((x4898==x4899)+x4900));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4921 = 0U;
	int32_t x4922 = -1;
	uint8_t x4924 = 11U;
	volatile int32_t t85 = -4176575;

	t85 = (x4921>>((x4922==x4923)+x4924));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4993 = INT8_MAX;
	volatile int8_t x4994 = -1;
	volatile int8_t x4995 = INT8_MIN;

	t86 = (x4993>>((x4994==x4995)+x4996));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x5066 = INT16_MAX;
	int16_t x5067 = 6444;
	int32_t x5068 = 9;
	uint32_t t87 = 3U;

	t87 = (x5065>>((x5066==x5067)+x5068));

	if (t87 != 8388607U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x5109 = 396675U;
	static int64_t x5110 = -1023735618628502902LL;
	int32_t x5111 = INT32_MIN;
	uint8_t x5112 = 0U;

	t88 = (x5109>>((x5110==x5111)+x5112));

	if (t88 != 396675U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5117 = INT64_MAX;
	int64_t x5118 = INT64_MAX;
	int8_t x5119 = -1;
	uint8_t x5120 = 3U;

	t89 = (x5117>>((x5118==x5119)+x5120));

	if (t89 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5145 = INT16_MAX;
	static int32_t x5146 = INT32_MIN;
	static int16_t x5147 = INT16_MIN;
	uint16_t x5148 = 8U;
	int32_t t90 = 141022045;

	t90 = (x5145>>((x5146==x5147)+x5148));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x5185 = 15U;
	volatile int32_t x5187 = 135870090;
	int8_t x5188 = 27;
	volatile int32_t t91 = -44037;

	t91 = (x5185>>((x5186==x5187)+x5188));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5233 = UINT8_MAX;
	uint16_t x5234 = 21006U;
	volatile uint32_t x5235 = 24U;
	volatile int32_t t92 = 137072;

	t92 = (x5233>>((x5234==x5235)+x5236));

	if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5357 = UINT8_MAX;
	uint64_t x5358 = 4005854554712LLU;
	static volatile int16_t x5359 = INT16_MIN;
	volatile int32_t t93 = 19719862;

	t93 = (x5357>>((x5358==x5359)+x5360));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5405 = UINT32_MAX;
	volatile uint16_t x5406 = 1U;
	static int16_t x5407 = INT16_MIN;
	uint32_t t94 = 1164672U;

	t94 = (x5405>>((x5406==x5407)+x5408));

	if (t94 != 33554431U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5413 = 3383342467365862110LL;
	static volatile int32_t x5415 = INT32_MAX;
	int8_t x5416 = 1;
	static volatile int64_t t95 = 12705638912873LL;

	t95 = (x5413>>((x5414==x5415)+x5416));

	if (t95 != 1691671233682931055LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5426 = -1;
	int64_t x5427 = 2000301341900104618LL;
	volatile uint16_t x5428 = 0U;
	volatile uint64_t t96 = 4355550962541529222LLU;

	t96 = (x5425>>((x5426==x5427)+x5428));

	if (t96 != 3841673977279042675LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x5469 = UINT32_MAX;
	static int16_t x5470 = INT16_MAX;
	int64_t x5471 = INT64_MAX;
	volatile uint32_t t97 = 1U;

	t97 = (x5469>>((x5470==x5471)+x5472));

	if (t97 != 268435455U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5481 = 15U;
	static uint16_t x5482 = 1U;
	uint16_t x5484 = 1U;
	volatile int32_t t98 = -31431;

	t98 = (x5481>>((x5482==x5483)+x5484));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5561 = UINT32_MAX;
	int64_t x5562 = INT64_MAX;
	volatile uint8_t x5564 = 2U;
	volatile uint32_t t99 = 12689U;

	t99 = (x5561>>((x5562==x5563)+x5564));

	if (t99 != 1073741823U) { NG(); } else { ; }
	
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

