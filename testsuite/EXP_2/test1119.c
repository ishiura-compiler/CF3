#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 2U;
uint32_t x17 = UINT32_MAX;
uint64_t x20 = UINT64_MAX;
static uint16_t x25 = 426U;
int32_t x53 = INT32_MIN;
int16_t x54 = INT16_MAX;
uint64_t x102 = UINT64_MAX;
int64_t x137 = INT64_MAX;
uint32_t x169 = 110U;
static uint64_t x240 = 71630132LLU;
volatile uint64_t t7 = 16867401412459174LLU;
uint8_t x281 = UINT8_MAX;
uint64_t x282 = 3937986015620970699LLU;
int64_t x453 = -36418826850642LL;
uint16_t x454 = 4U;
int16_t x456 = INT16_MAX;
int64_t x527 = 0LL;
int16_t x709 = 6127;
uint8_t x710 = 54U;
static int32_t t18 = 942839605;
static volatile uint16_t x921 = 2U;
volatile uint32_t t19 = 3U;
int16_t x1064 = INT16_MAX;
int8_t x1078 = 43;
uint8_t x1079 = 14U;
static uint16_t x1080 = 3U;
uint64_t x1086 = UINT64_MAX;
volatile uint8_t x1351 = 0U;
int32_t t23 = -9701;
int32_t t24 = -131558659;
int32_t t26 = -1;
volatile int16_t x1629 = INT16_MIN;
static uint8_t x2146 = 3U;
uint16_t x2148 = 1U;
volatile int32_t x2149 = INT32_MAX;
int16_t x2185 = -1;
int16_t x2187 = 26;
volatile int32_t t33 = 0;
static int64_t x2238 = 0LL;
uint8_t x2239 = 48U;
static int32_t x2624 = INT32_MIN;
volatile int32_t t37 = 257760930;
static uint16_t x2725 = UINT16_MAX;
uint32_t x2874 = 398U;
volatile int16_t x2950 = INT16_MAX;
volatile int32_t x2952 = INT32_MIN;
uint8_t x2967 = 1U;
int16_t x3016 = INT16_MIN;
volatile int8_t x3082 = INT8_MAX;
volatile int8_t x3108 = INT8_MAX;
int8_t x3166 = INT8_MAX;
uint8_t x3167 = 1U;
int32_t x3168 = INT32_MIN;
int32_t t51 = INT32_MIN;
volatile int32_t t53 = -1;
uint8_t x3335 = 4U;
int32_t t54 = -426291598;
uint32_t x3342 = UINT32_MAX;
int8_t x3344 = INT8_MAX;
volatile uint32_t x3370 = UINT32_MAX;
uint32_t x3372 = 653281722U;
volatile uint32_t t56 = 468U;
volatile int64_t x3477 = INT64_MIN;
volatile uint32_t x3480 = 0U;
int32_t x3489 = -1231;
static int64_t x3669 = -1LL;
uint8_t x3672 = 4U;
int8_t x3789 = 22;
volatile uint8_t x3790 = 6U;
int8_t x3972 = INT8_MIN;
uint32_t x4044 = 751U;
int32_t t70 = -1;
uint16_t x4209 = UINT16_MAX;
int8_t x4210 = INT8_MAX;
uint8_t x4331 = 29U;
volatile uint16_t x4428 = 1007U;
volatile int32_t x4527 = 0;
uint32_t x4528 = 23241U;
static volatile uint32_t t75 = 44554U;
uint8_t x4534 = 14U;
uint16_t x4536 = UINT16_MAX;
int32_t t76 = -324;
int32_t x4537 = -1;
int32_t x4539 = 4;
static uint8_t x4591 = 5U;
volatile int64_t t78 = INT64_MAX;
static int32_t x4723 = 7;
uint32_t x4728 = 3873U;
uint32_t t80 = 9366187U;
uint32_t x4792 = 1561741481U;
uint32_t t81 = 311992736U;
int8_t x4811 = 0;
volatile int8_t x4852 = INT8_MAX;
static uint64_t x4984 = 4279792526109LLU;
uint16_t x5072 = 154U;
uint64_t x5094 = UINT64_MAX;
int32_t t86 = INT32_MIN;
int8_t x5130 = INT8_MAX;
uint16_t x5131 = 3U;
uint32_t x5242 = 10U;
int32_t x5244 = -2;
uint16_t x5317 = UINT16_MAX;
int16_t x5423 = 1;
int16_t x5557 = -1;
volatile uint64_t x5560 = 8339629046576LLU;
volatile int64_t t97 = 761116235LL;
volatile uint8_t x5749 = 4U;


void f0(void) {
	int64_t x1 = -1LL;
	static uint8_t x3 = 5U;
	int16_t x4 = 131;
	volatile int32_t t0 = 305926;

	t0 = ((x1<(x2>>x3))+x4);

	if (t0 != 132) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x18 = UINT16_MAX;
	volatile int8_t x19 = 0;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x17<(x18>>x19))+x20);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x26 = 46771U;
	static uint8_t x27 = 8U;
	uint8_t x28 = 26U;
	int32_t t2 = 522;

	t2 = ((x25<(x26>>x27))+x28);

	if (t2 != 26) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x55 = 0LL;
	int8_t x56 = -1;
	int32_t t3 = 928208649;

	t3 = ((x53<(x54>>x55))+x56);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x101 = -2;
	uint16_t x103 = 3U;
	uint64_t x104 = 1267953117947LLU;
	uint64_t t4 = 25822319775709473LLU;

	t4 = ((x101<(x102>>x103))+x104);

	if (t4 != 1267953117947LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x138 = 4217692736075581416LLU;
	int8_t x139 = 0;
	volatile uint8_t x140 = 3U;
	static int32_t t5 = -22;

	t5 = ((x137<(x138>>x139))+x140);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x170 = 3U;
	static uint64_t x171 = 15LLU;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t6 = 223;

	t6 = ((x169<(x170>>x171))+x172);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x237 = 1;
	uint8_t x238 = 107U;
	static uint32_t x239 = 24U;

	t7 = ((x237<(x238>>x239))+x240);

	if (t7 != 71630132LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x283 = 29U;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t8 = -49;

	t8 = ((x281<(x282>>x283))+x284);

	if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x349 = 6U;
	int8_t x350 = 2;
	static int32_t x351 = 20;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t9 = 14952;

	t9 = ((x349<(x350>>x351))+x352);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x414 = INT32_MAX;
	volatile int8_t x415 = 1;
	static volatile int16_t x416 = INT16_MAX;
	int32_t t10 = -708;

	t10 = ((x413<(x414>>x415))+x416);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x455 = 26U;
	volatile int32_t t11 = 37289977;

	t11 = ((x453<(x454>>x455))+x456);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x509 = UINT32_MAX;
	static uint8_t x510 = 126U;
	static uint8_t x511 = 6U;
	int64_t x512 = -1LL;
	int64_t t12 = 1448445280303397LL;

	t12 = ((x509<(x510>>x511))+x512);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x525 = UINT16_MAX;
	int64_t x526 = 3197027114343896002LL;
	int8_t x528 = -19;
	volatile int32_t t13 = -1462305;

	t13 = ((x525<(x526>>x527))+x528);

	if (t13 != -18) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x701 = INT64_MAX;
	volatile uint64_t x702 = 110153LLU;
	uint16_t x703 = 21U;
	volatile int32_t x704 = INT32_MAX;
	volatile int32_t t14 = INT32_MAX;

	t14 = ((x701<(x702>>x703))+x704);

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x711 = 5;
	int8_t x712 = -1;
	volatile int32_t t15 = 75273;

	t15 = ((x709<(x710>>x711))+x712);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x849 = -171LL;
	uint64_t x850 = 2393465998104929889LLU;
	int8_t x851 = 0;
	static int32_t x852 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = ((x849<(x850>>x851))+x852);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x865 = -1;
	uint64_t x866 = 4089221483481567LLU;
	int16_t x867 = 0;
	static int32_t x868 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

	t17 = ((x865<(x866>>x867))+x868);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x885 = INT16_MIN;
	uint16_t x886 = UINT16_MAX;
	int16_t x887 = 9;
	volatile int32_t x888 = 2;

	t18 = ((x885<(x886>>x887))+x888);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x922 = INT8_MAX;
	static uint8_t x923 = 5U;
	uint32_t x924 = 2679U;

	t19 = ((x921<(x922>>x923))+x924);

	if (t19 != 2680U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1061 = 5411LLU;
	static volatile int8_t x1062 = 11;
	uint8_t x1063 = 0U;
	static int32_t t20 = -326091;

	t20 = ((x1061<(x1062>>x1063))+x1064);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1077 = INT8_MAX;
	static int32_t t21 = 3977;

	t21 = ((x1077<(x1078>>x1079))+x1080);

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1085 = 4727U;
	int16_t x1087 = 59;
	int16_t x1088 = INT16_MIN;
	volatile int32_t t22 = 64892;

	t22 = ((x1085<(x1086>>x1087))+x1088);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1349 = UINT16_MAX;
	volatile uint32_t x1350 = UINT32_MAX;
	uint8_t x1352 = UINT8_MAX;

	t23 = ((x1349<(x1350>>x1351))+x1352);

	if (t23 != 256) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1381 = 44LLU;
	int64_t x1382 = 150401LL;
	int8_t x1383 = 59;
	volatile int32_t x1384 = -252027;

	t24 = ((x1381<(x1382>>x1383))+x1384);

	if (t24 != -252027) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1461 = 50;
	int16_t x1462 = INT16_MAX;
	uint8_t x1463 = 0U;
	volatile int32_t x1464 = INT32_MIN;
	volatile int32_t t25 = -58;

	t25 = ((x1461<(x1462>>x1463))+x1464);

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1565 = INT64_MIN;
	static uint64_t x1566 = 119159LLU;
	volatile uint32_t x1567 = 5U;
	int8_t x1568 = -13;

	t26 = ((x1565<(x1566>>x1567))+x1568);

	if (t26 != -13) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x1577 = INT16_MAX;
	static int32_t x1578 = INT32_MAX;
	uint8_t x1579 = 2U;
	int16_t x1580 = INT16_MAX;
	volatile int32_t t27 = -157;

	t27 = ((x1577<(x1578>>x1579))+x1580);

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1630 = 13821U;
	volatile uint32_t x1631 = 0U;
	volatile int8_t x1632 = -1;
	int32_t t28 = 47;

	t28 = ((x1629<(x1630>>x1631))+x1632);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1741 = -1;
	int8_t x1742 = INT8_MAX;
	int8_t x1743 = 1;
	volatile int32_t x1744 = 8722484;
	static int32_t t29 = 26569133;

	t29 = ((x1741<(x1742>>x1743))+x1744);

	if (t29 != 8722485) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2049 = -1LL;
	uint16_t x2050 = UINT16_MAX;
	uint8_t x2051 = 1U;
	volatile int64_t x2052 = -71824628516819803LL;
	int64_t t30 = 136599804183600002LL;

	t30 = ((x2049<(x2050>>x2051))+x2052);

	if (t30 != -71824628516819802LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2145 = -1;
	int8_t x2147 = 0;
	static volatile int32_t t31 = -71;

	t31 = ((x2145<(x2146>>x2147))+x2148);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2150 = 713440136LLU;
	static uint32_t x2151 = 17U;
	int16_t x2152 = -1;
	static int32_t t32 = -69920663;

	t32 = ((x2149<(x2150>>x2151))+x2152);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2186 = UINT32_MAX;
	int32_t x2188 = -1;

	t33 = ((x2185<(x2186>>x2187))+x2188);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2237 = 2U;
	int64_t x2240 = -829303LL;
	volatile int64_t t34 = -41LL;

	t34 = ((x2237<(x2238>>x2239))+x2240);

	if (t34 != -829303LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2361 = -828;
	static int64_t x2362 = 11589622719118LL;
	static int8_t x2363 = 58;
	int8_t x2364 = INT8_MAX;
	int32_t t35 = 3;

	t35 = ((x2361<(x2362>>x2363))+x2364);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2489 = -7LL;
	int32_t x2490 = 303810248;
	int16_t x2491 = 0;
	volatile uint32_t x2492 = UINT32_MAX;
	volatile uint32_t t36 = 68271511U;

	t36 = ((x2489<(x2490>>x2491))+x2492);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2621 = 0;
	int16_t x2622 = INT16_MAX;
	static int32_t x2623 = 2;

	t37 = ((x2621<(x2622>>x2623))+x2624);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2721 = 2U;
	int16_t x2722 = INT16_MAX;
	int32_t x2723 = 10;
	uint32_t x2724 = 105U;
	static uint32_t t38 = 5U;

	t38 = ((x2721<(x2722>>x2723))+x2724);

	if (t38 != 106U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x2726 = INT64_MAX;
	static uint8_t x2727 = 26U;
	static int8_t x2728 = -1;
	static volatile int32_t t39 = 240;

	t39 = ((x2725<(x2726>>x2727))+x2728);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2733 = INT8_MIN;
	volatile uint8_t x2734 = UINT8_MAX;
	static uint8_t x2735 = 14U;
	uint8_t x2736 = 3U;
	int32_t t40 = -1250166;

	t40 = ((x2733<(x2734>>x2735))+x2736);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2861 = -1;
	int64_t x2862 = 1213047208LL;
	uint32_t x2863 = 0U;
	int8_t x2864 = -28;
	volatile int32_t t41 = -89;

	t41 = ((x2861<(x2862>>x2863))+x2864);

	if (t41 != -27) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2873 = -1;
	static int32_t x2875 = 0;
	volatile int8_t x2876 = 0;
	volatile int32_t t42 = -15640;

	t42 = ((x2873<(x2874>>x2875))+x2876);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2909 = INT8_MAX;
	uint64_t x2910 = 1718007657001672427LLU;
	uint32_t x2911 = 30U;
	uint8_t x2912 = 60U;
	volatile int32_t t43 = -264507795;

	t43 = ((x2909<(x2910>>x2911))+x2912);

	if (t43 != 61) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2925 = INT8_MAX;
	int64_t x2926 = INT64_MAX;
	uint8_t x2927 = 6U;
	uint8_t x2928 = 15U;
	int32_t t44 = -9966;

	t44 = ((x2925<(x2926>>x2927))+x2928);

	if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x2949 = 23854008;
	uint8_t x2951 = 1U;
	volatile int32_t t45 = INT32_MIN;

	t45 = ((x2949<(x2950>>x2951))+x2952);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2965 = INT32_MAX;
	static uint8_t x2966 = 5U;
	uint32_t x2968 = 385290007U;
	static volatile uint32_t t46 = 3772U;

	t46 = ((x2965<(x2966>>x2967))+x2968);

	if (t46 != 385290007U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x3013 = INT32_MIN;
	int32_t x3014 = 67713;
	int16_t x3015 = 2;
	static volatile int32_t t47 = 68887;

	t47 = ((x3013<(x3014>>x3015))+x3016);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3081 = 21229697962341486LL;
	uint16_t x3083 = 6U;
	volatile uint64_t x3084 = 53689662497591LLU;
	uint64_t t48 = 30204LLU;

	t48 = ((x3081<(x3082>>x3083))+x3084);

	if (t48 != 53689662497591LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3101 = -15;
	uint16_t x3102 = 3U;
	volatile uint8_t x3103 = 6U;
	int32_t x3104 = -1;
	static int32_t t49 = -8019751;

	t49 = ((x3101<(x3102>>x3103))+x3104);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x3105 = UINT16_MAX;
	uint32_t x3106 = 30U;
	uint8_t x3107 = 10U;
	static volatile int32_t t50 = 517005;

	t50 = ((x3105<(x3106>>x3107))+x3108);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3165 = 108U;

	t51 = ((x3165<(x3166>>x3167))+x3168);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3201 = 1065087072556946278LLU;
	static uint64_t x3202 = 2252714967141987139LLU;
	volatile uint16_t x3203 = 2U;
	volatile int32_t x3204 = INT32_MIN;
	static int32_t t52 = INT32_MIN;

	t52 = ((x3201<(x3202>>x3203))+x3204);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3209 = -1;
	int16_t x3210 = INT16_MAX;
	uint8_t x3211 = 16U;
	uint16_t x3212 = UINT16_MAX;

	t53 = ((x3209<(x3210>>x3211))+x3212);

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x3333 = 634U;
	int16_t x3334 = INT16_MAX;
	int16_t x3336 = INT16_MIN;

	t54 = ((x3333<(x3334>>x3335))+x3336);

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3341 = -1;
	volatile int16_t x3343 = 0;
	volatile int32_t t55 = -92795008;

	t55 = ((x3341<(x3342>>x3343))+x3344);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3369 = INT32_MIN;
	static int8_t x3371 = 1;

	t56 = ((x3369<(x3370>>x3371))+x3372);

	if (t56 != 653281722U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3425 = INT16_MIN;
	uint64_t x3426 = 33985939464405LLU;
	volatile uint8_t x3427 = 31U;
	int16_t x3428 = INT16_MIN;
	volatile int32_t t57 = -836;

	t57 = ((x3425<(x3426>>x3427))+x3428);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3429 = UINT32_MAX;
	static uint8_t x3430 = 51U;
	uint8_t x3431 = 5U;
	static uint8_t x3432 = UINT8_MAX;
	volatile int32_t t58 = -21;

	t58 = ((x3429<(x3430>>x3431))+x3432);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3478 = 0U;
	int32_t x3479 = 4;
	volatile uint32_t t59 = 1673557551U;

	t59 = ((x3477<(x3478>>x3479))+x3480);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3490 = 44U;
	uint32_t x3491 = 7U;
	int16_t x3492 = INT16_MIN;
	static volatile int32_t t60 = 925;

	t60 = ((x3489<(x3490>>x3491))+x3492);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3505 = 49LL;
	static int8_t x3506 = 1;
	volatile uint8_t x3507 = 26U;
	int16_t x3508 = -11;
	int32_t t61 = 16626534;

	t61 = ((x3505<(x3506>>x3507))+x3508);

	if (t61 != -11) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3537 = INT16_MAX;
	static uint8_t x3538 = 12U;
	int8_t x3539 = 4;
	int32_t x3540 = -4545;
	volatile int32_t t62 = -5270;

	t62 = ((x3537<(x3538>>x3539))+x3540);

	if (t62 != -4545) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3613 = INT32_MAX;
	uint32_t x3614 = 228841311U;
	uint16_t x3615 = 1U;
	int64_t x3616 = -1LL;
	volatile int64_t t63 = 971790071466845542LL;

	t63 = ((x3613<(x3614>>x3615))+x3616);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3670 = 1670092440U;
	static uint8_t x3671 = 3U;
	static int32_t t64 = 2;

	t64 = ((x3669<(x3670>>x3671))+x3672);

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3791 = 0U;
	volatile uint64_t x3792 = UINT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x3789<(x3790>>x3791))+x3792);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3797 = -1;
	uint32_t x3798 = 2240188U;
	uint32_t x3799 = 14U;
	int32_t x3800 = 9;
	static int32_t t66 = 135482;

	t66 = ((x3797<(x3798>>x3799))+x3800);

	if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3829 = 12;
	static volatile uint16_t x3830 = 20U;
	int8_t x3831 = 1;
	int8_t x3832 = -1;
	volatile int32_t t67 = 0;

	t67 = ((x3829<(x3830>>x3831))+x3832);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3969 = 514393667569546LLU;
	volatile uint16_t x3970 = UINT16_MAX;
	static uint16_t x3971 = 0U;
	volatile int32_t t68 = 2;

	t68 = ((x3969<(x3970>>x3971))+x3972);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4041 = INT32_MIN;
	int16_t x4042 = INT16_MAX;
	volatile int16_t x4043 = 9;
	static uint32_t t69 = 8630U;

	t69 = ((x4041<(x4042>>x4043))+x4044);

	if (t69 != 752U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x4189 = INT16_MAX;
	uint64_t x4190 = 2071136307LLU;
	int16_t x4191 = 1;
	int32_t x4192 = -1;

	t70 = ((x4189<(x4190>>x4191))+x4192);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x4211 = 3U;
	int64_t x4212 = -1LL;
	int64_t t71 = -83476252LL;

	t71 = ((x4209<(x4210>>x4211))+x4212);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4229 = 1413670294U;
	volatile int16_t x4230 = INT16_MAX;
	static int16_t x4231 = 3;
	uint16_t x4232 = 1333U;
	int32_t t72 = 50;

	t72 = ((x4229<(x4230>>x4231))+x4232);

	if (t72 != 1333) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4329 = 2;
	volatile uint16_t x4330 = 30U;
	int16_t x4332 = -1;
	volatile int32_t t73 = 14567689;

	t73 = ((x4329<(x4330>>x4331))+x4332);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x4425 = 3332314;
	uint8_t x4426 = 6U;
	uint16_t x4427 = 4U;
	volatile int32_t t74 = -8261614;

	t74 = ((x4425<(x4426>>x4427))+x4428);

	if (t74 != 1007) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x4525 = 1U;
	int8_t x4526 = 0;

	t75 = ((x4525<(x4526>>x4527))+x4528);

	if (t75 != 23241U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4533 = 99070U;
	uint8_t x4535 = 3U;

	t76 = ((x4533<(x4534>>x4535))+x4536);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4538 = 5U;
	uint64_t x4540 = 5967LLU;
	uint64_t t77 = 2LLU;

	t77 = ((x4537<(x4538>>x4539))+x4540);

	if (t77 != 5967LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4589 = 30514423U;
	uint32_t x4590 = 7U;
	int64_t x4592 = INT64_MAX;

	t78 = ((x4589<(x4590>>x4591))+x4592);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4721 = 11013U;
	volatile uint32_t x4722 = 67949110U;
	volatile uint8_t x4724 = 3U;
	int32_t t79 = 220717480;

	t79 = ((x4721<(x4722>>x4723))+x4724);

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4725 = INT32_MIN;
	uint64_t x4726 = 114764351720308LLU;
	volatile uint16_t x4727 = 5U;

	t80 = ((x4725<(x4726>>x4727))+x4728);

	if (t80 != 3873U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4789 = 11762U;
	static uint64_t x4790 = 2030046540619930LLU;
	volatile uint8_t x4791 = 1U;

	t81 = ((x4789<(x4790>>x4791))+x4792);

	if (t81 != 1561741482U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4809 = 580141130327348LL;
	uint8_t x4810 = 4U;
	int64_t x4812 = -1LL;
	int64_t t82 = -546LL;

	t82 = ((x4809<(x4810>>x4811))+x4812);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4849 = 1;
	volatile uint32_t x4850 = UINT32_MAX;
	int32_t x4851 = 19;
	static volatile int32_t t83 = -502310097;

	t83 = ((x4849<(x4850>>x4851))+x4852);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4981 = 15U;
	uint32_t x4982 = 0U;
	volatile int16_t x4983 = 0;
	static uint64_t t84 = 5715LLU;

	t84 = ((x4981<(x4982>>x4983))+x4984);

	if (t84 != 4279792526109LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5069 = UINT32_MAX;
	volatile int16_t x5070 = 1;
	int64_t x5071 = 5LL;
	int32_t t85 = -264;

	t85 = ((x5069<(x5070>>x5071))+x5072);

	if (t85 != 154) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5093 = INT16_MIN;
	static volatile uint8_t x5095 = 40U;
	int32_t x5096 = INT32_MIN;

	t86 = ((x5093<(x5094>>x5095))+x5096);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5117 = INT64_MIN;
	static int16_t x5118 = 9092;
	int8_t x5119 = 20;
	volatile int8_t x5120 = INT8_MIN;
	volatile int32_t t87 = -102697072;

	t87 = ((x5117<(x5118>>x5119))+x5120);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5129 = -3103950;
	uint32_t x5132 = 0U;
	volatile uint32_t t88 = 1040U;

	t88 = ((x5129<(x5130>>x5131))+x5132);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5241 = 3977941974064578LLU;
	uint16_t x5243 = 1U;
	int32_t t89 = 113331;

	t89 = ((x5241<(x5242>>x5243))+x5244);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5318 = 2;
	volatile int8_t x5319 = 1;
	int16_t x5320 = INT16_MIN;
	int32_t t90 = 28;

	t90 = ((x5317<(x5318>>x5319))+x5320);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x5325 = -236171247466041LL;
	uint64_t x5326 = UINT64_MAX;
	int32_t x5327 = 2;
	int8_t x5328 = INT8_MIN;
	volatile int32_t t91 = 20;

	t91 = ((x5325<(x5326>>x5327))+x5328);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x5397 = INT8_MIN;
	int16_t x5398 = INT16_MAX;
	volatile int8_t x5399 = 18;
	uint64_t x5400 = UINT64_MAX;
	volatile uint64_t t92 = 25081LLU;

	t92 = ((x5397<(x5398>>x5399))+x5400);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5421 = INT16_MIN;
	uint64_t x5422 = UINT64_MAX;
	int16_t x5424 = INT16_MAX;
	volatile int32_t t93 = -1;

	t93 = ((x5421<(x5422>>x5423))+x5424);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5425 = 1;
	static int16_t x5426 = 10;
	uint8_t x5427 = 31U;
	int8_t x5428 = INT8_MIN;
	volatile int32_t t94 = -1539430;

	t94 = ((x5425<(x5426>>x5427))+x5428);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x5558 = UINT64_MAX;
	volatile int8_t x5559 = 0;
	volatile uint64_t t95 = 237158035LLU;

	t95 = ((x5557<(x5558>>x5559))+x5560);

	if (t95 != 8339629046576LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5597 = -1LL;
	int16_t x5598 = INT16_MAX;
	int16_t x5599 = 14;
	uint64_t x5600 = UINT64_MAX;
	uint64_t t96 = 554LLU;

	t96 = ((x5597<(x5598>>x5599))+x5600);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5605 = -1LL;
	int16_t x5606 = INT16_MAX;
	static int8_t x5607 = 15;
	int64_t x5608 = -1LL;

	t97 = ((x5605<(x5606>>x5607))+x5608);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5750 = INT32_MAX;
	int8_t x5751 = 6;
	uint64_t x5752 = 6118728858995445772LLU;
	volatile uint64_t t98 = 0LLU;

	t98 = ((x5749<(x5750>>x5751))+x5752);

	if (t98 != 6118728858995445773LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5777 = INT8_MIN;
	static int8_t x5778 = 1;
	uint16_t x5779 = 1U;
	int32_t x5780 = INT32_MIN;
	static int32_t t99 = 8804;

	t99 = ((x5777<(x5778>>x5779))+x5780);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

