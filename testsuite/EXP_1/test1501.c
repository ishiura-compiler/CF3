#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x35 = 3U;
volatile int16_t x45 = -3973;
int64_t x94 = INT64_MAX;
int32_t x102 = INT32_MAX;
int32_t t3 = -295721;
int64_t x114 = INT64_MIN;
int16_t x115 = 4;
int32_t t4 = 4456874;
int16_t x130 = -199;
int64_t x318 = -5523866LL;
int64_t x357 = INT64_MIN;
int32_t x358 = -3569380;
int8_t x359 = INT8_MAX;
uint16_t x367 = 250U;
int16_t x450 = -1;
static volatile int32_t t12 = 17339;
int64_t x655 = 556638759059440LL;
volatile int64_t x681 = 1619LL;
int8_t x682 = INT8_MIN;
int8_t x697 = INT8_MAX;
int64_t x698 = INT64_MIN;
int64_t x761 = INT64_MIN;
uint64_t x764 = 2LLU;
int16_t x864 = 1;
volatile int16_t x1117 = -10529;
static int64_t x1229 = -4619LL;
int8_t x1313 = 0;
int64_t x1315 = 39LL;
volatile int64_t t21 = 226284222567586101LL;
int64_t x1429 = 83976LL;
uint16_t x1798 = UINT16_MAX;
int8_t x1799 = 2;
uint16_t x1802 = 497U;
int64_t x1833 = INT64_MIN;
int16_t x1835 = INT16_MAX;
static int8_t x1852 = 1;
volatile int32_t t28 = 195380750;
static int32_t t30 = 20265656;
int16_t x1915 = INT16_MAX;
volatile int8_t x2037 = -1;
int16_t x2042 = -1;
uint64_t x2082 = 1907831822375026099LLU;
static uint16_t x2201 = 0U;
int32_t x2277 = INT32_MAX;
static uint64_t x2363 = 26324828051LLU;
int32_t x2449 = 112233;
uint64_t x2461 = UINT64_MAX;
int32_t t42 = 8346469;
int64_t x2496 = 13LL;
volatile uint64_t t43 = 190934766761409678LLU;
volatile int32_t x2513 = -1;
volatile uint8_t x2516 = 27U;
uint8_t x2564 = 23U;
int8_t x2812 = 1;
int32_t x2858 = -1;
uint8_t x3059 = 6U;
uint32_t x3070 = 532676038U;
volatile int8_t x3072 = 0;
uint16_t x3155 = 6U;
static volatile int16_t x3254 = INT16_MIN;
int8_t x3292 = 1;
int64_t x3418 = 7LL;
int32_t t60 = 240;
uint8_t x3424 = 7U;
uint32_t x3580 = 4U;
static uint16_t x3617 = 2U;
int64_t x3619 = 47617193LL;
volatile int64_t t63 = -6179LL;
int64_t x3789 = -1LL;
volatile uint8_t x3955 = 58U;
int64_t x4033 = INT64_MAX;
static int16_t x4100 = 0;
volatile int64_t t69 = -1959LL;
uint64_t x4200 = 10LLU;
volatile int32_t t70 = 212471;
uint16_t x4249 = 25U;
uint32_t x4251 = UINT32_MAX;
int64_t x4353 = INT64_MAX;
int32_t x4397 = -109349227;
int32_t x4542 = INT32_MIN;
uint8_t x4614 = 0U;
int16_t x4694 = INT16_MIN;
uint16_t x4695 = 15U;
int32_t t78 = -27;
static uint16_t x4702 = UINT16_MAX;
static int32_t t79 = -7477915;
volatile int64_t x4807 = 42110303LL;
int64_t t80 = -16492269LL;
int8_t x5105 = INT8_MIN;
uint64_t x5107 = 2778841691159LLU;
uint16_t x5217 = UINT16_MAX;
uint8_t x5308 = 15U;
volatile uint64_t t87 = 77250821LLU;
int8_t x5583 = 36;
volatile int32_t t89 = 61263;
int8_t x5623 = 46;
static volatile int32_t x5798 = INT32_MAX;
int8_t x5810 = INT8_MIN;
static int16_t x5812 = 51;
int32_t t93 = 24515212;
uint16_t x5980 = 17U;
volatile uint8_t x6054 = UINT8_MAX;
static int32_t t97 = 42;
int64_t x6152 = 1LL;
volatile int8_t x6177 = 36;


void f0(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = 4;
	int8_t x36 = 14;
	int32_t t0 = 13;

	t0 = (((x33<x34)|x35)<<x36);

	if (t0 != 49152) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x46 = INT16_MIN;
	uint16_t x47 = 8U;
	uint16_t x48 = 7U;
	int32_t t1 = -12115793;

	t1 = (((x45<x46)|x47)<<x48);

	if (t1 != 1024) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x93 = UINT32_MAX;
	uint64_t x95 = 39LLU;
	static int32_t x96 = 1;
	volatile uint64_t t2 = 512180311LLU;

	t2 = (((x93<x94)|x95)<<x96);

	if (t2 != 78LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x101 = 939074LL;
	volatile uint16_t x103 = 17934U;
	uint16_t x104 = 1U;

	t3 = (((x101<x102)|x103)<<x104);

	if (t3 != 35870) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x113 = 1048U;
	uint16_t x116 = 1U;

	t4 = (((x113<x114)|x115)<<x116);

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x129 = 266272323733103LLU;
	uint16_t x131 = 0U;
	static int16_t x132 = 10;
	int32_t t5 = 265179865;

	t5 = (((x129<x130)|x131)<<x132);

	if (t5 != 1024) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = -16;
	int64_t x215 = 47422390350726LL;
	static uint16_t x216 = 3U;
	volatile int64_t t6 = -49399027LL;

	t6 = (((x213<x214)|x215)<<x216);

	if (t6 != 379379122805816LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x317 = INT64_MIN;
	uint8_t x319 = 1U;
	uint64_t x320 = 19LLU;
	static int32_t t7 = 14397548;

	t7 = (((x317<x318)|x319)<<x320);

	if (t7 != 524288) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x360 = 1U;
	static volatile int32_t t8 = -57722;

	t8 = (((x357<x358)|x359)<<x360);

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x365 = INT8_MAX;
	static int32_t x366 = INT32_MIN;
	static uint8_t x368 = 18U;
	int32_t t9 = 0;

	t9 = (((x365<x366)|x367)<<x368);

	if (t9 != 65536000) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x449 = UINT16_MAX;
	static uint8_t x451 = 17U;
	int8_t x452 = 3;
	int32_t t10 = -3205;

	t10 = (((x449<x450)|x451)<<x452);

	if (t10 != 136) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x569 = UINT16_MAX;
	int16_t x570 = 1;
	int16_t x571 = 2;
	static int16_t x572 = 27;
	volatile int32_t t11 = -276;

	t11 = (((x569<x570)|x571)<<x572);

	if (t11 != 268435456) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x613 = INT64_MAX;
	volatile int64_t x614 = -116005979208015LL;
	int8_t x615 = INT8_MAX;
	static uint8_t x616 = 20U;

	t12 = (((x613<x614)|x615)<<x616);

	if (t12 != 133169152) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x653 = 52LLU;
	static int64_t x654 = INT64_MIN;
	int8_t x656 = 7;
	volatile int64_t t13 = 64121164547875906LL;

	t13 = (((x653<x654)|x655)<<x656);

	if (t13 != 71249761159608448LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x683 = 31U;
	static int8_t x684 = 2;
	volatile uint32_t t14 = 37604229U;

	t14 = (((x681<x682)|x683)<<x684);

	if (t14 != 124U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x699 = 175837872;
	uint8_t x700 = 2U;
	int32_t t15 = 1207756;

	t15 = (((x697<x698)|x699)<<x700);

	if (t15 != 703351488) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x762 = 59206008LLU;
	uint32_t x763 = UINT32_MAX;
	uint32_t t16 = 51012842U;

	t16 = (((x761<x762)|x763)<<x764);

	if (t16 != 4294967292U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x861 = 32479059;
	int64_t x862 = INT64_MAX;
	uint8_t x863 = UINT8_MAX;
	int32_t t17 = -644455470;

	t17 = (((x861<x862)|x863)<<x864);

	if (t17 != 510) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1118 = INT8_MIN;
	static uint16_t x1119 = 1U;
	volatile int32_t x1120 = 0;
	volatile int32_t t18 = 115543589;

	t18 = (((x1117<x1118)|x1119)<<x1120);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1230 = -1151224667812138419LL;
	static uint64_t x1231 = 217663481827345678LLU;
	uint32_t x1232 = 1U;
	static uint64_t t19 = 401243830381811260LLU;

	t19 = (((x1229<x1230)|x1231)<<x1232);

	if (t19 != 435326963654691356LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1305 = -242959723137044LL;
	int8_t x1306 = INT8_MIN;
	volatile int64_t x1307 = INT64_MAX;
	static uint8_t x1308 = 0U;
	static volatile int64_t t20 = INT64_MAX;

	t20 = (((x1305<x1306)|x1307)<<x1308);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1314 = UINT64_MAX;
	uint32_t x1316 = 5U;

	t21 = (((x1313<x1314)|x1315)<<x1316);

	if (t21 != 1248LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x1425 = INT8_MAX;
	uint8_t x1426 = 9U;
	uint32_t x1427 = UINT32_MAX;
	uint32_t x1428 = 11U;
	volatile uint32_t t22 = 81739U;

	t22 = (((x1425<x1426)|x1427)<<x1428);

	if (t22 != 4294965248U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1430 = INT8_MIN;
	int64_t x1431 = 6LL;
	volatile uint8_t x1432 = 5U;
	volatile int64_t t23 = -3573879442560LL;

	t23 = (((x1429<x1430)|x1431)<<x1432);

	if (t23 != 192LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1641 = -1;
	uint64_t x1642 = 2068324LLU;
	uint16_t x1643 = 7U;
	int8_t x1644 = 19;
	volatile int32_t t24 = -53047;

	t24 = (((x1641<x1642)|x1643)<<x1644);

	if (t24 != 3670016) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1797 = INT8_MAX;
	int16_t x1800 = 2;
	volatile int32_t t25 = -1;

	t25 = (((x1797<x1798)|x1799)<<x1800);

	if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1801 = INT32_MIN;
	uint32_t x1803 = 24601U;
	volatile uint8_t x1804 = 6U;
	volatile uint32_t t26 = 19U;

	t26 = (((x1801<x1802)|x1803)<<x1804);

	if (t26 != 1574464U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1834 = UINT8_MAX;
	uint64_t x1836 = 0LLU;
	volatile int32_t t27 = -1625;

	t27 = (((x1833<x1834)|x1835)<<x1836);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1849 = 119246529U;
	int16_t x1850 = -1;
	uint16_t x1851 = 111U;

	t28 = (((x1849<x1850)|x1851)<<x1852);

	if (t28 != 222) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1853 = INT64_MIN;
	volatile int8_t x1854 = -1;
	static volatile uint32_t x1855 = 4100739U;
	int16_t x1856 = 4;
	uint32_t t29 = 19715U;

	t29 = (((x1853<x1854)|x1855)<<x1856);

	if (t29 != 65611824U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1861 = 10U;
	uint8_t x1862 = 23U;
	static uint8_t x1863 = UINT8_MAX;
	uint8_t x1864 = 3U;

	t30 = (((x1861<x1862)|x1863)<<x1864);

	if (t30 != 2040) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1913 = -1;
	uint32_t x1914 = 3865939U;
	int8_t x1916 = 1;
	volatile int32_t t31 = 106010192;

	t31 = (((x1913<x1914)|x1915)<<x1916);

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1925 = INT16_MAX;
	uint8_t x1926 = 25U;
	uint32_t x1927 = 1691436159U;
	uint16_t x1928 = 0U;
	static uint32_t t32 = 286611U;

	t32 = (((x1925<x1926)|x1927)<<x1928);

	if (t32 != 1691436159U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2038 = INT32_MIN;
	uint8_t x2039 = 39U;
	uint8_t x2040 = 2U;
	volatile int32_t t33 = 15;

	t33 = (((x2037<x2038)|x2039)<<x2040);

	if (t33 != 156) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2041 = -5683;
	uint8_t x2043 = 0U;
	int16_t x2044 = 1;
	int32_t t34 = 14;

	t34 = (((x2041<x2042)|x2043)<<x2044);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2081 = 0;
	int8_t x2083 = 0;
	static volatile uint8_t x2084 = 10U;
	volatile int32_t t35 = -276756;

	t35 = (((x2081<x2082)|x2083)<<x2084);

	if (t35 != 1024) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2202 = 113521733LLU;
	volatile uint64_t x2203 = UINT64_MAX;
	int64_t x2204 = 1LL;
	static volatile uint64_t t36 = 53368767297892LLU;

	t36 = (((x2201<x2202)|x2203)<<x2204);

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2278 = UINT32_MAX;
	uint16_t x2279 = 19820U;
	uint8_t x2280 = 1U;
	int32_t t37 = 0;

	t37 = (((x2277<x2278)|x2279)<<x2280);

	if (t37 != 39642) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2341 = INT8_MAX;
	uint32_t x2342 = 1U;
	static uint64_t x2343 = 16939921162LLU;
	volatile int8_t x2344 = 52;
	volatile uint64_t t38 = 6LLU;

	t38 = (((x2341<x2342)|x2343)<<x2344);

	if (t38 != 17338858565376409600LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2361 = -1;
	int8_t x2362 = -1;
	static int8_t x2364 = 0;
	static uint64_t t39 = 6801090950411334LLU;

	t39 = (((x2361<x2362)|x2363)<<x2364);

	if (t39 != 26324828051LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2425 = -843;
	int16_t x2426 = -11;
	uint64_t x2427 = UINT64_MAX;
	uint16_t x2428 = 55U;
	uint64_t t40 = 93699438076LLU;

	t40 = (((x2425<x2426)|x2427)<<x2428);

	if (t40 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2450 = INT64_MIN;
	static volatile uint16_t x2451 = UINT16_MAX;
	static int8_t x2452 = 1;
	volatile int32_t t41 = -106455900;

	t41 = (((x2449<x2450)|x2451)<<x2452);

	if (t41 != 131070) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2462 = 11342087988817363LLU;
	uint8_t x2463 = 2U;
	static uint8_t x2464 = 9U;

	t42 = (((x2461<x2462)|x2463)<<x2464);

	if (t42 != 1024) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2493 = 3565821U;
	int8_t x2494 = INT8_MIN;
	uint64_t x2495 = 8151544170870LLU;

	t43 = (((x2493<x2494)|x2495)<<x2496);

	if (t43 != 66777449847775232LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2497 = UINT32_MAX;
	uint16_t x2498 = UINT16_MAX;
	uint32_t x2499 = 76850440U;
	uint8_t x2500 = 10U;
	volatile uint32_t t44 = 46903938U;

	t44 = (((x2497<x2498)|x2499)<<x2500);

	if (t44 != 1385439232U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2514 = INT64_MIN;
	uint64_t x2515 = 1955881812802LLU;
	static volatile uint64_t t45 = 0LLU;

	t45 = (((x2513<x2514)|x2515)<<x2516);

	if (t45 != 4259596118872031232LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2561 = INT8_MAX;
	volatile int16_t x2562 = -23;
	uint32_t x2563 = 302751034U;
	uint32_t t46 = 9098U;

	t46 = (((x2561<x2562)|x2563)<<x2564);

	if (t46 != 2634022912U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2749 = 3856U;
	int8_t x2750 = INT8_MAX;
	uint8_t x2751 = 66U;
	uint8_t x2752 = 7U;
	int32_t t47 = 147647616;

	t47 = (((x2749<x2750)|x2751)<<x2752);

	if (t47 != 8448) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2809 = 5496854U;
	int8_t x2810 = INT8_MIN;
	uint8_t x2811 = UINT8_MAX;
	int32_t t48 = 0;

	t48 = (((x2809<x2810)|x2811)<<x2812);

	if (t48 != 510) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2857 = INT16_MIN;
	int16_t x2859 = INT16_MAX;
	volatile int16_t x2860 = 1;
	int32_t t49 = -55299;

	t49 = (((x2857<x2858)|x2859)<<x2860);

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2861 = INT16_MIN;
	static uint16_t x2862 = UINT16_MAX;
	uint32_t x2863 = 295U;
	volatile int16_t x2864 = 1;
	volatile uint32_t t50 = 558U;

	t50 = (((x2861<x2862)|x2863)<<x2864);

	if (t50 != 590U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2877 = UINT32_MAX;
	static int16_t x2878 = 288;
	uint32_t x2879 = UINT32_MAX;
	uint16_t x2880 = 2U;
	static volatile uint32_t t51 = 58669388U;

	t51 = (((x2877<x2878)|x2879)<<x2880);

	if (t51 != 4294967292U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2993 = 33U;
	volatile int32_t x2994 = INT32_MIN;
	uint8_t x2995 = 6U;
	uint16_t x2996 = 4U;
	int32_t t52 = -4003;

	t52 = (((x2993<x2994)|x2995)<<x2996);

	if (t52 != 96) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3057 = 26U;
	uint16_t x3058 = UINT16_MAX;
	int8_t x3060 = 1;
	int32_t t53 = 459;

	t53 = (((x3057<x3058)|x3059)<<x3060);

	if (t53 != 14) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3069 = INT8_MAX;
	volatile int16_t x3071 = 10;
	int32_t t54 = 6421;

	t54 = (((x3069<x3070)|x3071)<<x3072);

	if (t54 != 11) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3137 = -7;
	static uint64_t x3138 = 24405793LLU;
	uint16_t x3139 = UINT16_MAX;
	uint8_t x3140 = 0U;
	int32_t t55 = -221;

	t55 = (((x3137<x3138)|x3139)<<x3140);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3153 = INT64_MIN;
	volatile int16_t x3154 = -122;
	int64_t x3156 = 3LL;
	int32_t t56 = -51549013;

	t56 = (((x3153<x3154)|x3155)<<x3156);

	if (t56 != 56) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3237 = INT8_MIN;
	int64_t x3238 = -45032LL;
	int32_t x3239 = 31592708;
	uint8_t x3240 = 3U;
	int32_t t57 = 62;

	t57 = (((x3237<x3238)|x3239)<<x3240);

	if (t57 != 252741664) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3253 = INT32_MIN;
	static uint8_t x3255 = UINT8_MAX;
	uint8_t x3256 = 4U;
	volatile int32_t t58 = 74436;

	t58 = (((x3253<x3254)|x3255)<<x3256);

	if (t58 != 4080) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3289 = 460LL;
	volatile int8_t x3290 = INT8_MIN;
	uint32_t x3291 = UINT32_MAX;
	uint32_t t59 = 15840U;

	t59 = (((x3289<x3290)|x3291)<<x3292);

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3417 = INT16_MAX;
	int8_t x3419 = INT8_MAX;
	static uint8_t x3420 = 5U;

	t60 = (((x3417<x3418)|x3419)<<x3420);

	if (t60 != 4064) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3421 = 223013777LLU;
	static int32_t x3422 = INT32_MIN;
	int8_t x3423 = INT8_MAX;
	volatile int32_t t61 = 44794301;

	t61 = (((x3421<x3422)|x3423)<<x3424);

	if (t61 != 16256) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3577 = INT64_MIN;
	int16_t x3578 = -31;
	static uint64_t x3579 = UINT64_MAX;
	static uint64_t t62 = 4188LLU;

	t62 = (((x3577<x3578)|x3579)<<x3580);

	if (t62 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3618 = INT32_MIN;
	volatile uint8_t x3620 = 5U;

	t63 = (((x3617<x3618)|x3619)<<x3620);

	if (t63 != 1523750176LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x3665 = INT64_MAX;
	volatile int32_t x3666 = -129;
	uint64_t x3667 = UINT64_MAX;
	uint16_t x3668 = 1U;
	uint64_t t64 = 148656383LLU;

	t64 = (((x3665<x3666)|x3667)<<x3668);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3697 = 552905994LLU;
	static int32_t x3698 = INT32_MAX;
	int32_t x3699 = INT32_MAX;
	uint8_t x3700 = 0U;
	volatile int32_t t65 = INT32_MAX;

	t65 = (((x3697<x3698)|x3699)<<x3700);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3790 = 102956547863137640LLU;
	static int16_t x3791 = INT16_MAX;
	uint16_t x3792 = 11U;
	volatile int32_t t66 = 226458;

	t66 = (((x3789<x3790)|x3791)<<x3792);

	if (t66 != 67106816) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x3953 = 14;
	int64_t x3954 = INT64_MAX;
	int16_t x3956 = 8;
	volatile int32_t t67 = 0;

	t67 = (((x3953<x3954)|x3955)<<x3956);

	if (t67 != 15104) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4034 = UINT32_MAX;
	static uint32_t x4035 = UINT32_MAX;
	uint8_t x4036 = 0U;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x4033<x4034)|x4035)<<x4036);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4097 = 0;
	volatile uint64_t x4098 = 6513924699LLU;
	int64_t x4099 = 1568LL;

	t69 = (((x4097<x4098)|x4099)<<x4100);

	if (t69 != 1569LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4197 = INT16_MAX;
	static volatile uint16_t x4198 = 1406U;
	volatile int8_t x4199 = INT8_MAX;

	t70 = (((x4197<x4198)|x4199)<<x4200);

	if (t70 != 130048) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4250 = -8;
	uint8_t x4252 = 2U;
	uint32_t t71 = 4083U;

	t71 = (((x4249<x4250)|x4251)<<x4252);

	if (t71 != 4294967292U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4354 = INT8_MIN;
	int8_t x4355 = 10;
	uint16_t x4356 = 4U;
	volatile int32_t t72 = -506;

	t72 = (((x4353<x4354)|x4355)<<x4356);

	if (t72 != 160) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4398 = INT64_MIN;
	uint64_t x4399 = UINT64_MAX;
	uint16_t x4400 = 7U;
	static volatile uint64_t t73 = 4899416544802LLU;

	t73 = (((x4397<x4398)|x4399)<<x4400);

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4509 = -1;
	int32_t x4510 = -1;
	uint32_t x4511 = 1294903596U;
	volatile uint8_t x4512 = 1U;
	volatile uint32_t t74 = 251767U;

	t74 = (((x4509<x4510)|x4511)<<x4512);

	if (t74 != 2589807192U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4541 = 117;
	int64_t x4543 = 1755LL;
	volatile uint16_t x4544 = 2U;
	volatile int64_t t75 = 148629190893LL;

	t75 = (((x4541<x4542)|x4543)<<x4544);

	if (t75 != 7020LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4613 = INT32_MIN;
	static volatile uint64_t x4615 = UINT64_MAX;
	uint8_t x4616 = 1U;
	uint64_t t76 = 17LLU;

	t76 = (((x4613<x4614)|x4615)<<x4616);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4633 = UINT64_MAX;
	uint64_t x4634 = UINT64_MAX;
	static volatile uint64_t x4635 = UINT64_MAX;
	int8_t x4636 = 0;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (((x4633<x4634)|x4635)<<x4636);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4693 = INT16_MIN;
	int16_t x4696 = 0;

	t78 = (((x4693<x4694)|x4695)<<x4696);

	if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4701 = INT64_MAX;
	uint16_t x4703 = 3772U;
	uint16_t x4704 = 1U;

	t79 = (((x4701<x4702)|x4703)<<x4704);

	if (t79 != 7544) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4805 = INT16_MAX;
	int32_t x4806 = 633309884;
	uint8_t x4808 = 8U;

	t80 = (((x4805<x4806)|x4807)<<x4808);

	if (t80 != 10780237568LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4825 = -27821LL;
	uint64_t x4826 = UINT64_MAX;
	uint64_t x4827 = 1798LLU;
	int16_t x4828 = 1;
	uint64_t t81 = 747395337604758LLU;

	t81 = (((x4825<x4826)|x4827)<<x4828);

	if (t81 != 3598LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4925 = 450513446865193LL;
	int16_t x4926 = INT16_MIN;
	uint8_t x4927 = UINT8_MAX;
	uint8_t x4928 = 0U;
	static volatile int32_t t82 = -6;

	t82 = (((x4925<x4926)|x4927)<<x4928);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5106 = INT32_MIN;
	uint8_t x5108 = 8U;
	volatile uint64_t t83 = 1714LLU;

	t83 = (((x5105<x5106)|x5107)<<x5108);

	if (t83 != 711383472936704LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x5209 = UINT64_MAX;
	uint16_t x5210 = UINT16_MAX;
	uint64_t x5211 = UINT64_MAX;
	static int16_t x5212 = 36;
	uint64_t t84 = 1359700528702348LLU;

	t84 = (((x5209<x5210)|x5211)<<x5212);

	if (t84 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5218 = INT32_MAX;
	uint64_t x5219 = UINT64_MAX;
	static uint64_t x5220 = 12LLU;
	static volatile uint64_t t85 = 2208175129496379981LLU;

	t85 = (((x5217<x5218)|x5219)<<x5220);

	if (t85 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5305 = 15;
	int64_t x5306 = INT64_MAX;
	volatile uint64_t x5307 = UINT64_MAX;
	volatile uint64_t t86 = 213LLU;

	t86 = (((x5305<x5306)|x5307)<<x5308);

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5421 = INT64_MAX;
	int16_t x5422 = INT16_MIN;
	volatile uint64_t x5423 = UINT64_MAX;
	uint8_t x5424 = 2U;

	t87 = (((x5421<x5422)|x5423)<<x5424);

	if (t87 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x5581 = -4035LL;
	int32_t x5582 = INT32_MIN;
	int16_t x5584 = 0;
	volatile int32_t t88 = 10273467;

	t88 = (((x5581<x5582)|x5583)<<x5584);

	if (t88 != 36) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5617 = -1;
	static int64_t x5618 = INT64_MAX;
	int32_t x5619 = 13043;
	int16_t x5620 = 4;

	t89 = (((x5617<x5618)|x5619)<<x5620);

	if (t89 != 208688) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5621 = 0;
	static volatile int16_t x5622 = INT16_MIN;
	int16_t x5624 = 2;
	volatile int32_t t90 = -3;

	t90 = (((x5621<x5622)|x5623)<<x5624);

	if (t90 != 184) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5797 = INT64_MIN;
	int16_t x5799 = 0;
	static int32_t x5800 = 14;
	static int32_t t91 = -2520;

	t91 = (((x5797<x5798)|x5799)<<x5800);

	if (t91 != 16384) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5809 = INT64_MIN;
	uint64_t x5811 = 1079421794522142LLU;
	volatile uint64_t t92 = 1409237698249884336LLU;

	t92 = (((x5809<x5810)|x5811)<<x5812);

	if (t92 != 11599020840292712448LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5917 = INT8_MIN;
	int64_t x5918 = 62LL;
	uint8_t x5919 = UINT8_MAX;
	int8_t x5920 = 12;

	t93 = (((x5917<x5918)|x5919)<<x5920);

	if (t93 != 1044480) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5949 = 5;
	int8_t x5950 = INT8_MIN;
	int16_t x5951 = 8;
	int8_t x5952 = 2;
	volatile int32_t t94 = -13145;

	t94 = (((x5949<x5950)|x5951)<<x5952);

	if (t94 != 32) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x5977 = INT32_MIN;
	uint64_t x5978 = UINT64_MAX;
	int8_t x5979 = 10;
	int32_t t95 = -14;

	t95 = (((x5977<x5978)|x5979)<<x5980);

	if (t95 != 1441792) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6053 = 104U;
	volatile uint32_t x6055 = UINT32_MAX;
	uint16_t x6056 = 3U;
	volatile uint32_t t96 = 171U;

	t96 = (((x6053<x6054)|x6055)<<x6056);

	if (t96 != 4294967288U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x6061 = INT64_MIN;
	uint32_t x6062 = 75U;
	int8_t x6063 = INT8_MAX;
	int8_t x6064 = 0;

	t97 = (((x6061<x6062)|x6063)<<x6064);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6149 = -1;
	int8_t x6150 = 1;
	static uint16_t x6151 = UINT16_MAX;
	volatile int32_t t98 = 15028;

	t98 = (((x6149<x6150)|x6151)<<x6152);

	if (t98 != 131070) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6178 = 14962384U;
	uint16_t x6179 = 2U;
	uint8_t x6180 = 0U;
	volatile int32_t t99 = 281271;

	t99 = (((x6177<x6178)|x6179)<<x6180);

	if (t99 != 3) { NG(); } else { ; }
	
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

