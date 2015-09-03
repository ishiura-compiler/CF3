#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x33 = UINT64_MAX;
int64_t x159 = -296721238155940964LL;
volatile int32_t x501 = 71463518;
int8_t x504 = -1;
volatile int64_t t6 = 221LL;
volatile uint64_t x835 = 5LLU;
int64_t x836 = -37048527498LL;
static volatile int8_t x947 = INT8_MIN;
uint32_t t9 = 35973887U;
volatile uint32_t x1111 = UINT32_MAX;
volatile uint32_t t11 = 702U;
int64_t x1151 = -1LL;
static volatile uint64_t x1152 = 33119LLU;
int16_t x1229 = INT16_MAX;
uint16_t x1282 = 5U;
volatile int32_t t15 = 251215588;
volatile int64_t x1356 = 70623076LL;
uint64_t t19 = 56303LLU;
uint64_t x1461 = 98LLU;
volatile uint64_t t20 = 8969153708LLU;
uint16_t x1545 = 373U;
static uint16_t x1546 = 6U;
int8_t x1548 = INT8_MIN;
static uint32_t x1806 = 17U;
volatile int64_t t24 = 5584079274LL;
int16_t x1988 = 736;
uint64_t x2005 = 31LLU;
uint32_t x2006 = 1U;
int64_t x2007 = -59906463LL;
static volatile int32_t t29 = 74137;
int16_t x2068 = INT16_MAX;
static int32_t t31 = -204952;
int64_t x2219 = INT64_MIN;
int16_t x2220 = INT16_MIN;
volatile uint64_t t32 = 3740LLU;
uint32_t x2300 = 16U;
int16_t x2317 = 0;
uint16_t x2318 = 1U;
int64_t x2320 = INT64_MIN;
volatile uint64_t t35 = 20084423LLU;
int16_t x2363 = -1;
volatile int16_t x2364 = INT16_MIN;
uint8_t x2379 = UINT8_MAX;
int8_t x2407 = -1;
static volatile int32_t t41 = -754242514;
static int32_t t42 = -24581;
int16_t x2726 = 2;
uint64_t x2895 = 3705360682131LLU;
volatile int32_t x2998 = 0;
int32_t x3020 = INT32_MIN;
static int64_t x3053 = INT64_MAX;
int64_t x3056 = 3418LL;
uint16_t x3058 = 1U;
uint64_t x3202 = 5LLU;
int32_t x3211 = INT32_MIN;
uint32_t x3212 = UINT32_MAX;
static int16_t x3218 = 9;
int16_t x3465 = 163;
int8_t x3466 = 6;
uint32_t x3509 = 0U;
uint8_t x3512 = UINT8_MAX;
int8_t x3536 = -35;
int16_t x3584 = -1;
volatile uint64_t t63 = 2039LLU;
int8_t x3814 = 15;
int64_t t65 = 6005061787LL;
int64_t x4032 = -419652161295626LL;
uint32_t x4241 = 27315315U;
volatile int32_t x4244 = -5028;
uint8_t x4321 = 108U;
uint16_t x4322 = 2U;
int32_t x4358 = 0;
int64_t x4399 = -1LL;
volatile int64_t t71 = -54278100114600LL;
uint8_t x4514 = 4U;
int16_t x4515 = INT16_MAX;
int64_t x4516 = -93035068118329LL;
int64_t t73 = 216248127216241LL;
uint16_t x4726 = 1U;
static volatile int32_t x4783 = 78;
volatile uint32_t x4833 = UINT32_MAX;
int32_t x4900 = INT32_MIN;
int16_t x4945 = 4;
uint8_t x5101 = 48U;
uint16_t x5102 = 2U;
volatile int8_t x5104 = INT8_MIN;
int32_t x5124 = -1;
volatile int64_t t82 = 36662868094776LL;
int8_t x5286 = 1;
int32_t x5288 = INT32_MAX;
uint32_t x5522 = 3U;
uint64_t x5553 = 6318976973771235888LLU;
static int32_t x5556 = -151519819;
uint32_t t89 = 914451375U;
uint8_t x5670 = 14U;
uint32_t x5745 = UINT32_MAX;
int8_t x5921 = 1;
int8_t x5923 = INT8_MIN;
uint16_t x6022 = 0U;
uint8_t x6023 = UINT8_MAX;
int32_t t95 = -1404;
uint16_t x6086 = 1U;
uint32_t x6087 = 604U;


void f0(void) {
	int8_t x34 = 2;
	int8_t x35 = 1;
	volatile int32_t x36 = -1;
	static uint64_t t0 = 216522037085239LLU;

	t0 = (((x33>>x34)&x35)+x36);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x157 = INT16_MAX;
	uint16_t x158 = 6U;
	int8_t x160 = -4;
	volatile int64_t t1 = -68479107464021065LL;

	t1 = (((x157>>x158)&x159)+x160);

	if (t1 != 408LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x233 = UINT64_MAX;
	static uint8_t x234 = 3U;
	static volatile uint64_t x235 = 5027LLU;
	volatile uint8_t x236 = 3U;
	volatile uint64_t t2 = 1691LLU;

	t2 = (((x233>>x234)&x235)+x236);

	if (t2 != 5030LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x309 = 819848U;
	uint8_t x310 = 6U;
	static int16_t x311 = INT16_MAX;
	uint32_t x312 = UINT32_MAX;
	uint32_t t3 = 21116U;

	t3 = (((x309>>x310)&x311)+x312);

	if (t3 != 12809U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x502 = 0U;
	static int64_t x503 = -1LL;
	static int64_t t4 = -3898773128722478896LL;

	t4 = (((x501>>x502)&x503)+x504);

	if (t4 != 71463517LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x613 = INT8_MAX;
	uint8_t x614 = 23U;
	uint8_t x615 = 23U;
	volatile int16_t x616 = 12;
	int32_t t5 = -42194590;

	t5 = (((x613>>x614)&x615)+x616);

	if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x709 = 31685U;
	uint8_t x710 = 17U;
	static int64_t x711 = 255225270971105993LL;
	static uint8_t x712 = UINT8_MAX;

	t6 = (((x709>>x710)&x711)+x712);

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x749 = 15194U;
	int8_t x750 = 1;
	int16_t x751 = 1083;
	int32_t x752 = -1246493;
	static int32_t t7 = -4087938;

	t7 = (((x749>>x750)&x751)+x752);

	if (t7 != -1245428) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x833 = UINT32_MAX;
	uint8_t x834 = 1U;
	volatile uint64_t t8 = 182LLU;

	t8 = (((x833>>x834)&x835)+x836);

	if (t8 != 18446744036661024123LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x945 = UINT32_MAX;
	volatile uint8_t x946 = 18U;
	uint16_t x948 = 31635U;

	t9 = (((x945>>x946)&x947)+x948);

	if (t9 != 47891U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x1105 = UINT64_MAX;
	uint8_t x1106 = 0U;
	int8_t x1107 = -5;
	uint32_t x1108 = 122927163U;
	static volatile uint64_t t10 = 75LLU;

	t10 = (((x1105>>x1106)&x1107)+x1108);

	if (t10 != 122927158LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1109 = UINT8_MAX;
	volatile uint8_t x1110 = 10U;
	static int8_t x1112 = INT8_MIN;

	t11 = (((x1109>>x1110)&x1111)+x1112);

	if (t11 != 4294967168U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x1149 = UINT16_MAX;
	int32_t x1150 = 1;
	volatile uint64_t t12 = 1243244495579252LLU;

	t12 = (((x1149>>x1150)&x1151)+x1152);

	if (t12 != 65886LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x1161 = INT32_MAX;
	int8_t x1162 = 1;
	int8_t x1163 = -1;
	int32_t x1164 = INT32_MIN;
	int32_t t13 = -26627;

	t13 = (((x1161>>x1162)&x1163)+x1164);

	if (t13 != -1073741825) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1230 = 19U;
	int16_t x1231 = -6165;
	volatile int16_t x1232 = INT16_MAX;
	static int32_t t14 = 77;

	t14 = (((x1229>>x1230)&x1231)+x1232);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1281 = 2U;
	uint16_t x1283 = UINT16_MAX;
	volatile int16_t x1284 = INT16_MIN;

	t15 = (((x1281>>x1282)&x1283)+x1284);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1309 = 2079LLU;
	int8_t x1310 = 0;
	int8_t x1311 = INT8_MAX;
	volatile int16_t x1312 = INT16_MIN;
	volatile uint64_t t16 = 4413LLU;

	t16 = (((x1309>>x1310)&x1311)+x1312);

	if (t16 != 18446744073709518879LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x1353 = UINT16_MAX;
	uint16_t x1354 = 10U;
	uint8_t x1355 = 13U;
	volatile int64_t t17 = 90LL;

	t17 = (((x1353>>x1354)&x1355)+x1356);

	if (t17 != 70623089LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1357 = 470162858U;
	uint8_t x1358 = 4U;
	volatile uint8_t x1359 = 4U;
	int32_t x1360 = -1;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (((x1357>>x1358)&x1359)+x1360);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1453 = 896977709165LLU;
	int8_t x1454 = 4;
	int16_t x1455 = -1;
	volatile int8_t x1456 = INT8_MIN;

	t19 = (((x1453>>x1454)&x1455)+x1456);

	if (t19 != 56061106694LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1462 = 1;
	int8_t x1463 = INT8_MAX;
	volatile uint8_t x1464 = UINT8_MAX;

	t20 = (((x1461>>x1462)&x1463)+x1464);

	if (t20 != 304LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1547 = 23811889LLU;
	static uint64_t t21 = 807LLU;

	t21 = (((x1545>>x1546)&x1547)+x1548);

	if (t21 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1693 = INT64_MAX;
	uint32_t x1694 = 1U;
	volatile int32_t x1695 = INT32_MIN;
	int64_t x1696 = -1LL;
	static volatile int64_t t22 = -1LL;

	t22 = (((x1693>>x1694)&x1695)+x1696);

	if (t22 != 4611686016279904255LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1769 = 20534444LLU;
	uint8_t x1770 = 23U;
	uint8_t x1771 = 37U;
	volatile int8_t x1772 = INT8_MAX;
	static volatile uint64_t t23 = 8381286LLU;

	t23 = (((x1769>>x1770)&x1771)+x1772);

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1805 = UINT8_MAX;
	static int64_t x1807 = -1LL;
	volatile int8_t x1808 = 0;

	t24 = (((x1805>>x1806)&x1807)+x1808);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1829 = INT64_MAX;
	uint16_t x1830 = 2U;
	int64_t x1831 = INT64_MIN;
	static int64_t x1832 = -1LL;
	volatile int64_t t25 = -8275345620014079LL;

	t25 = (((x1829>>x1830)&x1831)+x1832);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1945 = 8U;
	uint8_t x1946 = 1U;
	int64_t x1947 = 11739630775470LL;
	int16_t x1948 = 215;
	volatile int64_t t26 = -3LL;

	t26 = (((x1945>>x1946)&x1947)+x1948);

	if (t26 != 219LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1985 = 0LL;
	uint16_t x1986 = 5U;
	uint16_t x1987 = UINT16_MAX;
	volatile int64_t t27 = -2409LL;

	t27 = (((x1985>>x1986)&x1987)+x1988);

	if (t27 != 736LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2008 = INT64_MAX;
	uint64_t t28 = 1216LLU;

	t28 = (((x2005>>x2006)&x2007)+x2008);

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2057 = UINT8_MAX;
	uint16_t x2058 = 1U;
	volatile int8_t x2059 = -11;
	int32_t x2060 = INT32_MIN;

	t29 = (((x2057>>x2058)&x2059)+x2060);

	if (t29 != -2147483531) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x2065 = UINT64_MAX;
	static uint32_t x2066 = 60U;
	int8_t x2067 = INT8_MIN;
	uint64_t t30 = 422470LLU;

	t30 = (((x2065>>x2066)&x2067)+x2068);

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2185 = 11156U;
	int16_t x2186 = 22;
	uint8_t x2187 = 104U;
	int8_t x2188 = -1;

	t31 = (((x2185>>x2186)&x2187)+x2188);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2217 = UINT64_MAX;
	uint16_t x2218 = 2U;

	t32 = (((x2217>>x2218)&x2219)+x2220);

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2297 = UINT32_MAX;
	int64_t x2298 = 0LL;
	int8_t x2299 = INT8_MIN;
	static uint32_t t33 = 7U;

	t33 = (((x2297>>x2298)&x2299)+x2300);

	if (t33 != 4294967184U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2309 = INT16_MAX;
	volatile uint16_t x2310 = 30U;
	uint64_t x2311 = UINT64_MAX;
	static int16_t x2312 = INT16_MIN;
	volatile uint64_t t34 = 63991536397017898LLU;

	t34 = (((x2309>>x2310)&x2311)+x2312);

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2319 = 180LLU;

	t35 = (((x2317>>x2318)&x2319)+x2320);

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x2361 = UINT8_MAX;
	uint8_t x2362 = 2U;
	int32_t t36 = -48667431;

	t36 = (((x2361>>x2362)&x2363)+x2364);

	if (t36 != -32705) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2377 = 17U;
	volatile uint8_t x2378 = 10U;
	uint32_t x2380 = 3939727U;
	uint32_t t37 = 96U;

	t37 = (((x2377>>x2378)&x2379)+x2380);

	if (t37 != 3939727U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2405 = INT16_MAX;
	volatile int32_t x2406 = 1;
	static uint64_t x2408 = 696017388885LLU;
	static volatile uint64_t t38 = 54131331144070LLU;

	t38 = (((x2405>>x2406)&x2407)+x2408);

	if (t38 != 696017405268LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2425 = UINT8_MAX;
	uint8_t x2426 = 19U;
	int32_t x2427 = INT32_MIN;
	int8_t x2428 = INT8_MIN;
	static volatile int32_t t39 = 4209;

	t39 = (((x2425>>x2426)&x2427)+x2428);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2429 = 15518U;
	uint64_t x2430 = 0LLU;
	static int8_t x2431 = INT8_MIN;
	uint64_t x2432 = 5LLU;
	uint64_t t40 = 8210156LLU;

	t40 = (((x2429>>x2430)&x2431)+x2432);

	if (t40 != 15493LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2493 = INT32_MAX;
	volatile uint16_t x2494 = 0U;
	int16_t x2495 = 9;
	static int16_t x2496 = INT16_MAX;

	t41 = (((x2493>>x2494)&x2495)+x2496);

	if (t41 != 32776) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2573 = INT32_MAX;
	volatile int8_t x2574 = 14;
	int32_t x2575 = INT32_MAX;
	int8_t x2576 = INT8_MIN;

	t42 = (((x2573>>x2574)&x2575)+x2576);

	if (t42 != 130943) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x2645 = UINT32_MAX;
	int8_t x2646 = 9;
	uint32_t x2647 = 977U;
	static int8_t x2648 = INT8_MIN;
	volatile uint32_t t43 = 2946979U;

	t43 = (((x2645>>x2646)&x2647)+x2648);

	if (t43 != 849U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2725 = 1;
	int32_t x2727 = INT32_MAX;
	uint64_t x2728 = 7154935LLU;
	uint64_t t44 = 567221972LLU;

	t44 = (((x2725>>x2726)&x2727)+x2728);

	if (t44 != 7154935LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2893 = 4U;
	int32_t x2894 = 0;
	static volatile uint8_t x2896 = 121U;
	volatile uint64_t t45 = 7593922385528LLU;

	t45 = (((x2893>>x2894)&x2895)+x2896);

	if (t45 != 121LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2913 = 9U;
	int8_t x2914 = 0;
	uint64_t x2915 = 114LLU;
	uint64_t x2916 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (((x2913>>x2914)&x2915)+x2916);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2997 = 223702U;
	uint8_t x2999 = 10U;
	int8_t x3000 = -1;
	uint32_t t47 = 253U;

	t47 = (((x2997>>x2998)&x2999)+x3000);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3017 = 1LL;
	int8_t x3018 = 19;
	int8_t x3019 = INT8_MIN;
	volatile int64_t t48 = -1098204627936LL;

	t48 = (((x3017>>x3018)&x3019)+x3020);

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3054 = 0U;
	volatile int16_t x3055 = 173;
	static int64_t t49 = 83826503LL;

	t49 = (((x3053>>x3054)&x3055)+x3056);

	if (t49 != 3591LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3057 = 6332470;
	int32_t x3059 = INT32_MAX;
	int16_t x3060 = -1;
	int32_t t50 = -1033258461;

	t50 = (((x3057>>x3058)&x3059)+x3060);

	if (t50 != 3166234) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x3201 = 22U;
	int8_t x3203 = 2;
	volatile uint8_t x3204 = UINT8_MAX;
	volatile int32_t t51 = 5824734;

	t51 = (((x3201>>x3202)&x3203)+x3204);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3209 = INT32_MAX;
	int64_t x3210 = 28LL;
	uint32_t t52 = UINT32_MAX;

	t52 = (((x3209>>x3210)&x3211)+x3212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3217 = INT16_MAX;
	int16_t x3219 = 15138;
	uint32_t x3220 = UINT32_MAX;
	uint32_t t53 = 392U;

	t53 = (((x3217>>x3218)&x3219)+x3220);

	if (t53 != 33U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3301 = INT8_MAX;
	int8_t x3302 = 6;
	int32_t x3303 = -193191866;
	int16_t x3304 = -1;
	static volatile int32_t t54 = 119397902;

	t54 = (((x3301>>x3302)&x3303)+x3304);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3385 = UINT64_MAX;
	static uint16_t x3386 = 0U;
	static volatile uint32_t x3387 = 8065U;
	static uint64_t x3388 = 455526615225941413LLU;
	uint64_t t55 = 202LLU;

	t55 = (((x3385>>x3386)&x3387)+x3388);

	if (t55 != 455526615225949478LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x3445 = 531U;
	uint16_t x3446 = 19U;
	int64_t x3447 = -72LL;
	static volatile int8_t x3448 = INT8_MIN;
	int64_t t56 = 25944LL;

	t56 = (((x3445>>x3446)&x3447)+x3448);

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3453 = 14U;
	volatile uint8_t x3454 = 13U;
	uint32_t x3455 = UINT32_MAX;
	int64_t x3456 = INT64_MAX;
	volatile int64_t t57 = INT64_MAX;

	t57 = (((x3453>>x3454)&x3455)+x3456);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3467 = 2510490739LLU;
	int32_t x3468 = INT32_MIN;
	static volatile uint64_t t58 = 7487LLU;

	t58 = (((x3465>>x3466)&x3467)+x3468);

	if (t58 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3481 = 7012LLU;
	int64_t x3482 = 0LL;
	volatile int64_t x3483 = 1938131980337006LL;
	static volatile int8_t x3484 = INT8_MIN;
	volatile uint64_t t59 = 595610054LLU;

	t59 = (((x3481>>x3482)&x3483)+x3484);

	if (t59 != 6884LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3510 = 4U;
	volatile uint8_t x3511 = 36U;
	uint32_t t60 = 6844089U;

	t60 = (((x3509>>x3510)&x3511)+x3512);

	if (t60 != 255U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3529 = UINT32_MAX;
	volatile int8_t x3530 = 0;
	uint8_t x3531 = UINT8_MAX;
	int8_t x3532 = INT8_MAX;
	volatile uint32_t t61 = 1513U;

	t61 = (((x3529>>x3530)&x3531)+x3532);

	if (t61 != 382U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3533 = UINT32_MAX;
	int8_t x3534 = 0;
	int32_t x3535 = -12921680;
	static uint32_t t62 = 1U;

	t62 = (((x3533>>x3534)&x3535)+x3536);

	if (t62 != 4282045581U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3581 = 1467455573118LLU;
	int8_t x3582 = 0;
	int16_t x3583 = -1;

	t63 = (((x3581>>x3582)&x3583)+x3584);

	if (t63 != 1467455573117LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3589 = 0;
	uint32_t x3590 = 10U;
	uint32_t x3591 = 0U;
	int32_t x3592 = -52794561;
	volatile uint32_t t64 = 745890U;

	t64 = (((x3589>>x3590)&x3591)+x3592);

	if (t64 != 4242172735U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3813 = 117;
	volatile int64_t x3815 = INT64_MAX;
	volatile uint8_t x3816 = 126U;

	t65 = (((x3813>>x3814)&x3815)+x3816);

	if (t65 != 126LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4029 = 61;
	uint8_t x4030 = 3U;
	int8_t x4031 = INT8_MIN;
	volatile int64_t t66 = 6079790484578LL;

	t66 = (((x4029>>x4030)&x4031)+x4032);

	if (t66 != -419652161295626LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4133 = 126U;
	volatile int8_t x4134 = 3;
	uint64_t x4135 = 143177524934271LLU;
	volatile uint16_t x4136 = 15U;
	volatile uint64_t t67 = 397889LLU;

	t67 = (((x4133>>x4134)&x4135)+x4136);

	if (t67 != 30LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4242 = 3;
	static int32_t x4243 = INT32_MIN;
	static uint32_t t68 = 7328U;

	t68 = (((x4241>>x4242)&x4243)+x4244);

	if (t68 != 4294962268U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x4323 = INT64_MAX;
	static int8_t x4324 = -1;
	volatile int64_t t69 = -1065601077LL;

	t69 = (((x4321>>x4322)&x4323)+x4324);

	if (t69 != 26LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4357 = INT64_MAX;
	uint64_t x4359 = 564325608860290504LLU;
	int64_t x4360 = INT64_MIN;
	uint64_t t70 = 26796550LLU;

	t70 = (((x4357>>x4358)&x4359)+x4360);

	if (t70 != 9787697645715066312LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4397 = 14U;
	uint8_t x4398 = 1U;
	static int32_t x4400 = INT32_MAX;

	t71 = (((x4397>>x4398)&x4399)+x4400);

	if (t71 != 2147483654LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4473 = INT8_MAX;
	int16_t x4474 = 2;
	int32_t x4475 = INT32_MAX;
	int32_t x4476 = INT32_MIN;
	int32_t t72 = -1131058;

	t72 = (((x4473>>x4474)&x4475)+x4476);

	if (t72 != -2147483617) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4513 = 418954226021295LL;

	t73 = (((x4513>>x4514)&x4515)+x4516);

	if (t73 != -93035068111359LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4701 = UINT64_MAX;
	volatile int16_t x4702 = 1;
	uint16_t x4703 = UINT16_MAX;
	static int64_t x4704 = -1LL;
	volatile uint64_t t74 = 2734LLU;

	t74 = (((x4701>>x4702)&x4703)+x4704);

	if (t74 != 65534LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4725 = 12U;
	volatile int8_t x4727 = INT8_MAX;
	int32_t x4728 = INT32_MIN;
	int32_t t75 = -2;

	t75 = (((x4725>>x4726)&x4727)+x4728);

	if (t75 != -2147483642) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4781 = 5335447501446149090LLU;
	uint8_t x4782 = 30U;
	int16_t x4784 = INT16_MIN;
	volatile uint64_t t76 = 15488476712LLU;

	t76 = (((x4781>>x4782)&x4783)+x4784);

	if (t76 != 18446744073709518926LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x4834 = 2LL;
	static volatile uint32_t x4835 = 359177257U;
	int16_t x4836 = -1;
	volatile uint32_t t77 = 970U;

	t77 = (((x4833>>x4834)&x4835)+x4836);

	if (t77 != 359177256U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x4893 = UINT16_MAX;
	volatile uint8_t x4894 = 4U;
	uint8_t x4895 = 1U;
	volatile int64_t x4896 = INT64_MIN;
	int64_t t78 = 1055437970924LL;

	t78 = (((x4893>>x4894)&x4895)+x4896);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4897 = 950U;
	int32_t x4898 = 0;
	static int16_t x4899 = -1;
	int32_t t79 = -63079829;

	t79 = (((x4897>>x4898)&x4899)+x4900);

	if (t79 != -2147482698) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4946 = 7U;
	static int64_t x4947 = -1LL;
	static int8_t x4948 = -3;
	volatile int64_t t80 = -97095678LL;

	t80 = (((x4945>>x4946)&x4947)+x4948);

	if (t80 != -3LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5103 = 3LL;
	int64_t t81 = -18028483446564LL;

	t81 = (((x5101>>x5102)&x5103)+x5104);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x5121 = UINT16_MAX;
	uint8_t x5122 = 19U;
	int64_t x5123 = INT64_MIN;

	t82 = (((x5121>>x5122)&x5123)+x5124);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x5217 = 25721;
	uint8_t x5218 = 0U;
	volatile int64_t x5219 = -1LL;
	int8_t x5220 = 49;
	int64_t t83 = -84150440LL;

	t83 = (((x5217>>x5218)&x5219)+x5220);

	if (t83 != 25770LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x5285 = UINT32_MAX;
	static volatile uint64_t x5287 = 530327096961035LLU;
	volatile uint64_t t84 = 403LLU;

	t84 = (((x5285>>x5286)&x5287)+x5288);

	if (t84 != 3862603786LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5357 = INT64_MAX;
	uint16_t x5358 = 1U;
	int16_t x5359 = INT16_MAX;
	int32_t x5360 = INT32_MAX;
	int64_t t85 = 576592730681LL;

	t85 = (((x5357>>x5358)&x5359)+x5360);

	if (t85 != 2147516414LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5465 = INT64_MAX;
	uint16_t x5466 = 63U;
	int16_t x5467 = -1;
	volatile int32_t x5468 = INT32_MIN;
	static int64_t t86 = -37LL;

	t86 = (((x5465>>x5466)&x5467)+x5468);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5521 = INT64_MAX;
	static volatile int64_t x5523 = INT64_MAX;
	uint32_t x5524 = 34937348U;
	volatile int64_t t87 = 115625534794LL;

	t87 = (((x5521>>x5522)&x5523)+x5524);

	if (t87 != 1152921504641784323LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5554 = 0U;
	static uint64_t x5555 = UINT64_MAX;
	volatile uint64_t t88 = 176914415072LLU;

	t88 = (((x5553>>x5554)&x5555)+x5556);

	if (t88 != 6318976973619716069LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5617 = 820070340U;
	static int8_t x5618 = 14;
	volatile int8_t x5619 = 39;
	int8_t x5620 = INT8_MIN;

	t89 = (((x5617>>x5618)&x5619)+x5620);

	if (t89 != 4294967173U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5669 = INT32_MAX;
	static uint8_t x5671 = 30U;
	int16_t x5672 = INT16_MIN;
	int32_t t90 = 44701;

	t90 = (((x5669>>x5670)&x5671)+x5672);

	if (t90 != -32738) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5741 = 1080LLU;
	uint8_t x5742 = 1U;
	int32_t x5743 = INT32_MIN;
	int16_t x5744 = INT16_MIN;
	static volatile uint64_t t91 = 10533LLU;

	t91 = (((x5741>>x5742)&x5743)+x5744);

	if (t91 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x5746 = 15U;
	int8_t x5747 = INT8_MIN;
	volatile int32_t x5748 = 860;
	static uint32_t t92 = 164701209U;

	t92 = (((x5745>>x5746)&x5747)+x5748);

	if (t92 != 131804U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5773 = 1LL;
	volatile int16_t x5774 = 0;
	volatile uint64_t x5775 = UINT64_MAX;
	uint64_t x5776 = 67207784088LLU;
	volatile uint64_t t93 = 3LLU;

	t93 = (((x5773>>x5774)&x5775)+x5776);

	if (t93 != 67207784089LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5922 = 7U;
	static int8_t x5924 = INT8_MIN;
	volatile int32_t t94 = 32023;

	t94 = (((x5921>>x5922)&x5923)+x5924);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6021 = UINT8_MAX;
	int16_t x6024 = INT16_MAX;

	t95 = (((x6021>>x6022)&x6023)+x6024);

	if (t95 != 33022) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6085 = 8;
	static uint8_t x6088 = UINT8_MAX;
	uint32_t t96 = 100U;

	t96 = (((x6085>>x6086)&x6087)+x6088);

	if (t96 != 259U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6109 = 127U;
	int32_t x6110 = 0;
	int16_t x6111 = INT16_MAX;
	int16_t x6112 = INT16_MAX;
	volatile int32_t t97 = -472843532;

	t97 = (((x6109>>x6110)&x6111)+x6112);

	if (t97 != 32894) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x6249 = 6088066835554877LLU;
	int8_t x6250 = 0;
	uint32_t x6251 = UINT32_MAX;
	int64_t x6252 = INT64_MIN;
	static uint64_t t98 = 6441327LLU;

	t98 = (((x6249>>x6250)&x6251)+x6252);

	if (t98 != 9223372039087858237LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6269 = 9763535576406203LLU;
	uint8_t x6270 = 15U;
	static int64_t x6271 = INT64_MIN;
	uint64_t x6272 = UINT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (((x6269>>x6270)&x6271)+x6272);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

