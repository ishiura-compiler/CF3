#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x40 = 59U;
static int16_t x50 = 0;
static int32_t x81 = 0;
uint8_t x82 = 15U;
int8_t x89 = 1;
int8_t x90 = 11;
uint16_t x92 = 658U;
int32_t x107 = INT32_MIN;
static volatile int32_t t5 = 19611;
int8_t x139 = -1;
volatile uint8_t x205 = 49U;
static volatile int32_t t7 = 845528544;
uint8_t x218 = 4U;
int64_t x236 = INT64_MIN;
int8_t x365 = 57;
int32_t t14 = -198;
volatile int32_t x488 = -110043;
volatile int8_t x618 = 3;
int64_t x651 = INT64_MAX;
int32_t x672 = INT32_MIN;
uint64_t x685 = 1886593720LLU;
int32_t t21 = -124;
uint8_t x815 = 13U;
static volatile int32_t t23 = -92374;
static int32_t x832 = 120289;
static volatile int8_t x954 = 5;
int32_t t26 = 30241735;
int16_t x1234 = 0;
int32_t x1236 = 4;
int32_t x1255 = 332043;
uint8_t x1261 = 123U;
volatile int32_t t30 = -480552711;
volatile uint64_t x1312 = 29406694089611624LLU;
volatile int64_t x1657 = 37LL;
volatile uint16_t x1659 = 10163U;
int64_t x1789 = 186386893405LL;
int16_t x1791 = -1;
uint8_t x2069 = UINT8_MAX;
int8_t x2071 = -3;
int32_t x2221 = INT32_MAX;
volatile int64_t x2289 = 129187182LL;
int8_t x2292 = 1;
static volatile int32_t t43 = 44129;
uint8_t x2294 = 3U;
int32_t t45 = 2876;
uint16_t x2381 = 18142U;
int8_t x2390 = 8;
int32_t t47 = 1858019;
static volatile int8_t x2398 = 1;
int64_t x2441 = 42693928LL;
int16_t x2442 = 13;
static uint16_t x2457 = UINT16_MAX;
int16_t x2459 = -164;
volatile uint8_t x2514 = 0U;
uint16_t x2516 = 9061U;
int32_t t51 = 635759786;
volatile uint8_t x2541 = 116U;
uint8_t x2542 = 5U;
uint16_t x2558 = 2U;
volatile int32_t t54 = -3;
int32_t x2572 = INT32_MIN;
uint8_t x2613 = 0U;
int32_t x2615 = 3770;
int8_t x2651 = -45;
uint16_t x2652 = 2U;
uint64_t x2791 = UINT64_MAX;
volatile int64_t x2792 = 520954432856LL;
volatile int64_t x2802 = 0LL;
static int32_t t63 = -10;
volatile int32_t t64 = -7;
int16_t x3087 = -1;
static volatile int32_t t65 = 0;
int32_t x3095 = -23807;
volatile int32_t t66 = 74607434;
int64_t x3151 = 111961824695LL;
static volatile int32_t t68 = -59857;
uint32_t x3198 = 7U;
volatile int8_t x3327 = -1;
static volatile int32_t t73 = -1;
volatile uint64_t x3405 = 1508023LLU;
static int8_t x3421 = 5;
volatile int32_t t75 = -461022595;
int8_t x3426 = 14;
int64_t x3455 = -4LL;
volatile int64_t x3483 = 31155821705293712LL;
int16_t x3490 = 1;
static int32_t x3492 = INT32_MIN;
volatile int32_t t79 = -54299;
static int32_t x3591 = -4145;
int32_t t81 = 24919819;
uint64_t x3664 = 8062951LLU;
static int32_t t84 = -533740496;
uint64_t x3945 = 15LLU;
static uint16_t x3947 = 6006U;
int16_t x3976 = -1;
int32_t t87 = 0;
int32_t t88 = -332782204;
int32_t t89 = 404995448;
uint64_t x4127 = UINT64_MAX;
int32_t x4137 = INT32_MAX;
uint32_t x4139 = 1754616U;
int64_t x4140 = INT64_MIN;
static int64_t x4273 = 14760LL;
uint8_t x4394 = 3U;
volatile uint64_t x4468 = 42546589LLU;
uint16_t x4605 = UINT16_MAX;
int32_t t97 = -153;
int16_t x4651 = -1;
uint32_t x4665 = UINT32_MAX;


void f0(void) {
	uint8_t x1 = 111U;
	uint8_t x2 = 0U;
	int64_t x3 = -1713LL;
	int16_t x4 = -1;
	volatile int32_t t0 = 355753843;

	t0 = ((x1>>x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x37 = 3093U;
	uint8_t x38 = 28U;
	int8_t x39 = 1;
	volatile int32_t t1 = 27;

	t1 = ((x37>>x38)==(x39^x40));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x49 = 0;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 5U;
	int32_t t2 = -96919;

	t2 = ((x49>>x50)==(x51^x52));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x83 = INT8_MAX;
	uint8_t x84 = 13U;
	int32_t t3 = -30;

	t3 = ((x81>>x82)==(x83^x84));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x91 = -1LL;
	int32_t t4 = 9937;

	t4 = ((x89>>x90)==(x91^x92));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x105 = 14674004806088LL;
	int32_t x106 = 11;
	int16_t x108 = INT16_MIN;

	t5 = ((x105>>x106)==(x107^x108));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x137 = 1265;
	uint8_t x138 = 7U;
	uint16_t x140 = UINT16_MAX;
	int32_t t6 = 13133310;

	t6 = ((x137>>x138)==(x139^x140));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x206 = 20U;
	uint8_t x207 = 3U;
	volatile int16_t x208 = INT16_MIN;

	t7 = ((x205>>x206)==(x207^x208));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x217 = 2066281873U;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 333LLU;
	volatile int32_t t8 = 14377874;

	t8 = ((x217>>x218)==(x219^x220));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 4U;
	static volatile int32_t x235 = 16;
	static volatile int32_t t9 = -233714207;

	t9 = ((x233>>x234)==(x235^x236));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x253 = INT8_MAX;
	int8_t x254 = 3;
	int8_t x255 = 0;
	int64_t x256 = INT64_MAX;
	volatile int32_t t10 = 147;

	t10 = ((x253>>x254)==(x255^x256));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	static volatile uint8_t x294 = 6U;
	uint64_t x295 = UINT64_MAX;
	static int16_t x296 = -3;
	volatile int32_t t11 = 573;

	t11 = ((x293>>x294)==(x295^x296));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x353 = 36486495828261995LLU;
	int32_t x354 = 1;
	volatile int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	int32_t t12 = 119;

	t12 = ((x353>>x354)==(x355^x356));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x366 = 0;
	static int32_t x367 = INT32_MAX;
	static volatile int16_t x368 = INT16_MIN;
	int32_t t13 = -5942;

	t13 = ((x365>>x366)==(x367^x368));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x453 = 7;
	volatile uint8_t x454 = 1U;
	static volatile int8_t x455 = INT8_MAX;
	uint64_t x456 = 172LLU;

	t14 = ((x453>>x454)==(x455^x456));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x469 = UINT32_MAX;
	int8_t x470 = 3;
	int16_t x471 = 15;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t15 = 722812;

	t15 = ((x469>>x470)==(x471^x472));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x485 = 8;
	volatile int8_t x486 = 1;
	int8_t x487 = -1;
	int32_t t16 = 259451;

	t16 = ((x485>>x486)==(x487^x488));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x617 = 1698U;
	int64_t x619 = -1LL;
	volatile int16_t x620 = INT16_MIN;
	static int32_t t17 = 12024549;

	t17 = ((x617>>x618)==(x619^x620));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x649 = 7785009427567LLU;
	volatile uint8_t x650 = 14U;
	static volatile int16_t x652 = -42;
	int32_t t18 = 174727834;

	t18 = ((x649>>x650)==(x651^x652));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x669 = INT16_MAX;
	volatile uint16_t x670 = 19U;
	volatile uint8_t x671 = 31U;
	int32_t t19 = 802447012;

	t19 = ((x669>>x670)==(x671^x672));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x686 = 1LL;
	int64_t x687 = 8358228574932LL;
	uint64_t x688 = 558399943709LLU;
	volatile int32_t t20 = 0;

	t20 = ((x685>>x686)==(x687^x688));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x729 = UINT8_MAX;
	volatile int64_t x730 = 3LL;
	int16_t x731 = -6;
	int64_t x732 = INT64_MAX;

	t21 = ((x729>>x730)==(x731^x732));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x733 = 914U;
	int16_t x734 = 7;
	uint32_t x735 = 28147U;
	int64_t x736 = INT64_MAX;
	int32_t t22 = 4;

	t22 = ((x733>>x734)==(x735^x736));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x813 = UINT16_MAX;
	uint32_t x814 = 1U;
	int32_t x816 = 428865;

	t23 = ((x813>>x814)==(x815^x816));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x829 = 7246;
	uint16_t x830 = 11U;
	int32_t x831 = 500117166;
	int32_t t24 = 497848457;

	t24 = ((x829>>x830)==(x831^x832));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x953 = 0U;
	int8_t x955 = -1;
	int64_t x956 = INT64_MIN;
	volatile int32_t t25 = -2064508;

	t25 = ((x953>>x954)==(x955^x956));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1013 = 1932967;
	static uint8_t x1014 = 16U;
	int32_t x1015 = INT32_MAX;
	uint64_t x1016 = UINT64_MAX;

	t26 = ((x1013>>x1014)==(x1015^x1016));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1233 = UINT64_MAX;
	int16_t x1235 = INT16_MIN;
	static volatile int32_t t27 = -15951;

	t27 = ((x1233>>x1234)==(x1235^x1236));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1253 = INT64_MAX;
	static uint32_t x1254 = 34U;
	uint8_t x1256 = 7U;
	int32_t t28 = 3;

	t28 = ((x1253>>x1254)==(x1255^x1256));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1262 = 5LLU;
	int16_t x1263 = 2350;
	int64_t x1264 = -210LL;
	int32_t t29 = -5;

	t29 = ((x1261>>x1262)==(x1263^x1264));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1305 = 1U;
	int8_t x1306 = 3;
	volatile uint8_t x1307 = 23U;
	int64_t x1308 = -476LL;

	t30 = ((x1305>>x1306)==(x1307^x1308));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1309 = 53;
	uint8_t x1310 = 1U;
	volatile int16_t x1311 = INT16_MIN;
	int32_t t31 = 12164;

	t31 = ((x1309>>x1310)==(x1311^x1312));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1481 = 4;
	static uint8_t x1482 = 8U;
	uint16_t x1483 = 30046U;
	int32_t x1484 = -51;
	int32_t t32 = 20;

	t32 = ((x1481>>x1482)==(x1483^x1484));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1489 = UINT8_MAX;
	int16_t x1490 = 2;
	volatile int16_t x1491 = INT16_MIN;
	int8_t x1492 = INT8_MIN;
	int32_t t33 = 101859;

	t33 = ((x1489>>x1490)==(x1491^x1492));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1658 = 11U;
	uint8_t x1660 = UINT8_MAX;
	int32_t t34 = -448045195;

	t34 = ((x1657>>x1658)==(x1659^x1660));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1790 = 1;
	int64_t x1792 = INT64_MIN;
	volatile int32_t t35 = -7;

	t35 = ((x1789>>x1790)==(x1791^x1792));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1817 = 168171489871LL;
	static uint16_t x1818 = 11U;
	int64_t x1819 = 2221606834171571878LL;
	static uint8_t x1820 = 76U;
	int32_t t36 = 82501136;

	t36 = ((x1817>>x1818)==(x1819^x1820));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1857 = INT8_MAX;
	int16_t x1858 = 0;
	int64_t x1859 = INT64_MIN;
	uint16_t x1860 = UINT16_MAX;
	int32_t t37 = -26342663;

	t37 = ((x1857>>x1858)==(x1859^x1860));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1981 = INT8_MAX;
	uint8_t x1982 = 2U;
	int8_t x1983 = INT8_MAX;
	uint8_t x1984 = 23U;
	int32_t t38 = 905099689;

	t38 = ((x1981>>x1982)==(x1983^x1984));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x2070 = 11U;
	volatile int16_t x2072 = 1;
	static volatile int32_t t39 = 61408;

	t39 = ((x2069>>x2070)==(x2071^x2072));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2213 = 0;
	int8_t x2214 = 1;
	volatile int8_t x2215 = -1;
	int64_t x2216 = INT64_MIN;
	static int32_t t40 = -76163562;

	t40 = ((x2213>>x2214)==(x2215^x2216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2222 = 20;
	int8_t x2223 = INT8_MAX;
	static int32_t x2224 = -50218;
	volatile int32_t t41 = 2006;

	t41 = ((x2221>>x2222)==(x2223^x2224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2225 = UINT8_MAX;
	uint16_t x2226 = 1U;
	int16_t x2227 = -1;
	static int32_t x2228 = INT32_MAX;
	int32_t t42 = 4362516;

	t42 = ((x2225>>x2226)==(x2227^x2228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2290 = 1LLU;
	int8_t x2291 = 43;

	t43 = ((x2289>>x2290)==(x2291^x2292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2293 = UINT16_MAX;
	int8_t x2295 = INT8_MIN;
	static uint64_t x2296 = 15LLU;
	int32_t t44 = -78135;

	t44 = ((x2293>>x2294)==(x2295^x2296));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2341 = UINT64_MAX;
	int8_t x2342 = 0;
	volatile uint8_t x2343 = 2U;
	uint64_t x2344 = UINT64_MAX;

	t45 = ((x2341>>x2342)==(x2343^x2344));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2382 = 25;
	int8_t x2383 = -1;
	uint32_t x2384 = UINT32_MAX;
	volatile int32_t t46 = -1;

	t46 = ((x2381>>x2382)==(x2383^x2384));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2389 = INT32_MAX;
	volatile int32_t x2391 = INT32_MIN;
	volatile int64_t x2392 = INT64_MIN;

	t47 = ((x2389>>x2390)==(x2391^x2392));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2397 = INT32_MAX;
	static int64_t x2399 = INT64_MIN;
	int64_t x2400 = -1LL;
	static volatile int32_t t48 = -45755307;

	t48 = ((x2397>>x2398)==(x2399^x2400));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2443 = 1801U;
	volatile int16_t x2444 = 99;
	int32_t t49 = 136115957;

	t49 = ((x2441>>x2442)==(x2443^x2444));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2458 = 27;
	uint64_t x2460 = 3291LLU;
	volatile int32_t t50 = 1008230;

	t50 = ((x2457>>x2458)==(x2459^x2460));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2513 = UINT16_MAX;
	int8_t x2515 = INT8_MIN;

	t51 = ((x2513>>x2514)==(x2515^x2516));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2521 = 4723U;
	uint8_t x2522 = 4U;
	static uint64_t x2523 = 29681981024232689LLU;
	volatile int32_t x2524 = INT32_MIN;
	volatile int32_t t52 = 3;

	t52 = ((x2521>>x2522)==(x2523^x2524));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2543 = UINT32_MAX;
	volatile int32_t x2544 = 245505413;
	volatile int32_t t53 = -3;

	t53 = ((x2541>>x2542)==(x2543^x2544));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2557 = 1;
	static int8_t x2559 = 27;
	uint16_t x2560 = 8094U;

	t54 = ((x2557>>x2558)==(x2559^x2560));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2569 = UINT16_MAX;
	int8_t x2570 = 20;
	int16_t x2571 = -2526;
	volatile int32_t t55 = -571;

	t55 = ((x2569>>x2570)==(x2571^x2572));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2593 = 60U;
	uint8_t x2594 = 0U;
	uint64_t x2595 = UINT64_MAX;
	int8_t x2596 = 5;
	volatile int32_t t56 = 97007519;

	t56 = ((x2593>>x2594)==(x2595^x2596));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2614 = 1;
	int8_t x2616 = INT8_MAX;
	int32_t t57 = -737673;

	t57 = ((x2613>>x2614)==(x2615^x2616));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2649 = 111U;
	uint32_t x2650 = 2U;
	int32_t t58 = -115600613;

	t58 = ((x2649>>x2650)==(x2651^x2652));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x2669 = UINT32_MAX;
	uint64_t x2670 = 0LLU;
	int32_t x2671 = INT32_MIN;
	int8_t x2672 = INT8_MIN;
	int32_t t59 = -3815;

	t59 = ((x2669>>x2670)==(x2671^x2672));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x2789 = 58U;
	uint16_t x2790 = 3U;
	int32_t t60 = 1017010;

	t60 = ((x2789>>x2790)==(x2791^x2792));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2801 = 4;
	int32_t x2803 = 622234364;
	int8_t x2804 = INT8_MAX;
	int32_t t61 = -541;

	t61 = ((x2801>>x2802)==(x2803^x2804));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2853 = INT32_MAX;
	int8_t x2854 = 14;
	volatile int64_t x2855 = INT64_MAX;
	int32_t x2856 = INT32_MIN;
	int32_t t62 = -5145;

	t62 = ((x2853>>x2854)==(x2855^x2856));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2909 = INT64_MAX;
	static int8_t x2910 = 26;
	static volatile int16_t x2911 = -790;
	static int16_t x2912 = INT16_MAX;

	t63 = ((x2909>>x2910)==(x2911^x2912));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2913 = 59;
	static uint32_t x2914 = 0U;
	uint16_t x2915 = UINT16_MAX;
	int16_t x2916 = INT16_MIN;

	t64 = ((x2913>>x2914)==(x2915^x2916));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3085 = INT16_MAX;
	volatile int16_t x3086 = 1;
	uint8_t x3088 = UINT8_MAX;

	t65 = ((x3085>>x3086)==(x3087^x3088));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3093 = UINT16_MAX;
	static uint8_t x3094 = 2U;
	static int32_t x3096 = -1;

	t66 = ((x3093>>x3094)==(x3095^x3096));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3105 = UINT8_MAX;
	uint16_t x3106 = 0U;
	volatile int32_t x3107 = -789;
	static int8_t x3108 = -31;
	volatile int32_t t67 = -1;

	t67 = ((x3105>>x3106)==(x3107^x3108));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3149 = UINT64_MAX;
	uint8_t x3150 = 61U;
	volatile uint16_t x3152 = 0U;

	t68 = ((x3149>>x3150)==(x3151^x3152));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x3197 = 81U;
	uint16_t x3199 = 9U;
	uint16_t x3200 = 24848U;
	int32_t t69 = 218508;

	t69 = ((x3197>>x3198)==(x3199^x3200));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3229 = INT16_MAX;
	int8_t x3230 = 28;
	int8_t x3231 = INT8_MIN;
	int32_t x3232 = INT32_MIN;
	volatile int32_t t70 = -343206;

	t70 = ((x3229>>x3230)==(x3231^x3232));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x3249 = UINT64_MAX;
	int16_t x3250 = 0;
	volatile uint64_t x3251 = UINT64_MAX;
	volatile uint16_t x3252 = 8042U;
	volatile int32_t t71 = -3;

	t71 = ((x3249>>x3250)==(x3251^x3252));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x3277 = 311234034918LL;
	uint64_t x3278 = 35LLU;
	volatile int64_t x3279 = INT64_MAX;
	int32_t x3280 = 8317587;
	int32_t t72 = 2635;

	t72 = ((x3277>>x3278)==(x3279^x3280));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3325 = 4503072U;
	uint32_t x3326 = 21U;
	int8_t x3328 = INT8_MIN;

	t73 = ((x3325>>x3326)==(x3327^x3328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3406 = 0;
	int16_t x3407 = 3457;
	uint8_t x3408 = 13U;
	int32_t t74 = 30088302;

	t74 = ((x3405>>x3406)==(x3407^x3408));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3422 = 2U;
	volatile int32_t x3423 = INT32_MIN;
	static uint8_t x3424 = 7U;

	t75 = ((x3421>>x3422)==(x3423^x3424));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3425 = UINT8_MAX;
	int16_t x3427 = INT16_MIN;
	uint64_t x3428 = UINT64_MAX;
	volatile int32_t t76 = 11;

	t76 = ((x3425>>x3426)==(x3427^x3428));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3453 = 98LLU;
	static volatile int8_t x3454 = 51;
	static uint32_t x3456 = 22U;
	static int32_t t77 = -1;

	t77 = ((x3453>>x3454)==(x3455^x3456));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3481 = 59268LLU;
	volatile int16_t x3482 = 34;
	uint8_t x3484 = 3U;
	volatile int32_t t78 = 897384;

	t78 = ((x3481>>x3482)==(x3483^x3484));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3489 = UINT16_MAX;
	uint32_t x3491 = UINT32_MAX;

	t79 = ((x3489>>x3490)==(x3491^x3492));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3589 = 154;
	uint16_t x3590 = 0U;
	uint8_t x3592 = 0U;
	static int32_t t80 = -343711;

	t80 = ((x3589>>x3590)==(x3591^x3592));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3617 = UINT32_MAX;
	uint8_t x3618 = 1U;
	static int16_t x3619 = INT16_MAX;
	int32_t x3620 = INT32_MIN;

	t81 = ((x3617>>x3618)==(x3619^x3620));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x3661 = 22U;
	volatile uint64_t x3662 = 20LLU;
	int16_t x3663 = INT16_MIN;
	volatile int32_t t82 = -25568;

	t82 = ((x3661>>x3662)==(x3663^x3664));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3741 = 2326323894349115LL;
	uint16_t x3742 = 1U;
	volatile int16_t x3743 = INT16_MIN;
	static uint16_t x3744 = 4U;
	int32_t t83 = -11222;

	t83 = ((x3741>>x3742)==(x3743^x3744));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3869 = 1412U;
	int8_t x3870 = 0;
	static volatile uint64_t x3871 = 18262659575LLU;
	static int32_t x3872 = -15;

	t84 = ((x3869>>x3870)==(x3871^x3872));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3946 = 1U;
	int32_t x3948 = -1;
	int32_t t85 = 303481212;

	t85 = ((x3945>>x3946)==(x3947^x3948));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3973 = 109U;
	int8_t x3974 = 1;
	uint64_t x3975 = 15649836LLU;
	static volatile int32_t t86 = 33;

	t86 = ((x3973>>x3974)==(x3975^x3976));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x3993 = 2U;
	uint8_t x3994 = 2U;
	uint64_t x3995 = 21817050015996036LLU;
	static uint16_t x3996 = UINT16_MAX;

	t87 = ((x3993>>x3994)==(x3995^x3996));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4045 = 6;
	uint16_t x4046 = 2U;
	int8_t x4047 = -1;
	int32_t x4048 = INT32_MAX;

	t88 = ((x4045>>x4046)==(x4047^x4048));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4105 = INT32_MAX;
	int16_t x4106 = 8;
	static int16_t x4107 = -1;
	static int16_t x4108 = INT16_MIN;

	t89 = ((x4105>>x4106)==(x4107^x4108));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4125 = INT64_MAX;
	static int8_t x4126 = 0;
	static int32_t x4128 = 229913;
	static volatile int32_t t90 = -14309650;

	t90 = ((x4125>>x4126)==(x4127^x4128));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4138 = 2LL;
	static int32_t t91 = 9422778;

	t91 = ((x4137>>x4138)==(x4139^x4140));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x4274 = 3LLU;
	uint32_t x4275 = UINT32_MAX;
	int8_t x4276 = -1;
	int32_t t92 = -366934;

	t92 = ((x4273>>x4274)==(x4275^x4276));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4393 = 0;
	static int64_t x4395 = INT64_MIN;
	static uint32_t x4396 = 12U;
	volatile int32_t t93 = -59889;

	t93 = ((x4393>>x4394)==(x4395^x4396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4465 = 3707U;
	volatile uint16_t x4466 = 14U;
	volatile int16_t x4467 = -1;
	volatile int32_t t94 = 119;

	t94 = ((x4465>>x4466)==(x4467^x4468));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4601 = 16U;
	int8_t x4602 = 0;
	uint16_t x4603 = 993U;
	volatile int64_t x4604 = 12760243748600LL;
	static int32_t t95 = -324117;

	t95 = ((x4601>>x4602)==(x4603^x4604));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4606 = 0U;
	static int32_t x4607 = INT32_MIN;
	volatile int16_t x4608 = 13;
	static volatile int32_t t96 = -849793;

	t96 = ((x4605>>x4606)==(x4607^x4608));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4621 = INT64_MAX;
	volatile uint32_t x4622 = 6U;
	int8_t x4623 = 3;
	static int32_t x4624 = -1;

	t97 = ((x4621>>x4622)==(x4623^x4624));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x4649 = INT64_MAX;
	int16_t x4650 = 1;
	static int64_t x4652 = INT64_MIN;
	volatile int32_t t98 = 7997506;

	t98 = ((x4649>>x4650)==(x4651^x4652));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4666 = 7;
	uint64_t x4667 = 2041624LLU;
	static int16_t x4668 = INT16_MAX;
	volatile int32_t t99 = -3373759;

	t99 = ((x4665>>x4666)==(x4667^x4668));

	if (t99 != 0) { NG(); } else { ; }
	
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

