#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x117 = INT8_MAX;
int32_t x210 = -21372689;
uint8_t x258 = 27U;
int16_t x259 = -1;
volatile uint16_t x361 = 0U;
static uint16_t x481 = 2U;
static uint32_t x482 = 16318U;
static uint8_t x484 = 23U;
static int32_t x502 = 1;
static int32_t t8 = -105478630;
uint16_t x622 = UINT16_MAX;
static volatile uint64_t t10 = 148LLU;
uint32_t x655 = 150761U;
uint32_t x673 = UINT32_MAX;
int8_t x725 = INT8_MAX;
int64_t x885 = 98563580156631LL;
uint16_t x982 = UINT16_MAX;
volatile uint32_t x1063 = UINT32_MAX;
volatile int32_t t20 = -1;
static int8_t x1086 = -1;
static uint32_t x1088 = 24U;
int32_t t21 = -11369226;
int8_t x1128 = 1;
static uint64_t x1281 = 8792375093379738721LLU;
static uint8_t x1284 = 6U;
uint8_t x1290 = UINT8_MAX;
int16_t x1291 = INT16_MIN;
int16_t x1430 = -5788;
uint8_t x1663 = 2U;
static uint8_t x1664 = 4U;
uint32_t t30 = 155190797U;
int32_t x1723 = INT32_MIN;
int32_t x1845 = INT32_MAX;
volatile int8_t x1846 = INT8_MAX;
int32_t x1939 = INT32_MAX;
int32_t x1948 = 13;
int64_t t36 = 1065842799157392692LL;
static int32_t x1979 = INT32_MIN;
uint8_t x2136 = 1U;
uint8_t x2169 = UINT8_MAX;
int32_t t41 = -422436;
uint32_t x2324 = 1U;
int64_t t46 = -7239253412LL;
int32_t x2474 = 1197;
volatile uint8_t x2475 = 24U;
static uint16_t x2543 = UINT16_MAX;
uint8_t x2963 = UINT8_MAX;
volatile int32_t t52 = 10012531;
int16_t x2987 = INT16_MIN;
int32_t t56 = 7868263;
static int8_t x3526 = -1;
int64_t x3547 = INT64_MIN;
int8_t x3548 = 4;
int32_t x3578 = 14817940;
int16_t x3580 = 1;
volatile int32_t t60 = 0;
int8_t x3721 = INT8_MAX;
int64_t x3783 = -237514902874LL;
volatile uint8_t x3845 = 15U;
static uint8_t x3847 = 106U;
uint16_t x3940 = 1U;
int8_t x4048 = 1;
volatile int64_t t68 = INT64_MAX;
static int64_t x4102 = INT64_MIN;
static uint8_t x4104 = 2U;
uint8_t x4497 = 41U;
int8_t x4498 = INT8_MAX;
int32_t t73 = 0;
uint32_t x4608 = 1U;
int16_t x4708 = 9;
static int32_t t80 = -136328374;
static int16_t x4920 = 9;
uint8_t x5013 = 1U;
int64_t x5014 = -546LL;
volatile int32_t t86 = 940;
uint64_t x5166 = 422732434984819930LLU;
static uint8_t x5169 = UINT8_MAX;
static uint16_t x5170 = UINT16_MAX;
int32_t x5171 = 0;
int8_t x5172 = 30;
volatile int32_t x5285 = INT32_MAX;
int32_t x5302 = INT32_MAX;
volatile int8_t x5304 = 1;
static uint16_t x5321 = 10823U;
uint8_t x5322 = 80U;
int32_t x5385 = INT32_MAX;
int8_t x5387 = 17;
uint16_t x5682 = 145U;
int64_t x5684 = 1LL;
int8_t x5890 = 0;
uint8_t x5910 = UINT8_MAX;
int16_t x6062 = INT16_MIN;
uint8_t x6064 = 0U;


void f0(void) {
	uint8_t x118 = 5U;
	volatile uint64_t x119 = UINT64_MAX;
	int16_t x120 = 0;
	volatile int32_t t0 = -66433;

	t0 = (x117>>((x118<=x119)>>x120));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x173 = INT64_MAX;
	static int64_t x174 = 3867139086222LL;
	volatile int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = 7U;
	int64_t t1 = INT64_MAX;

	t1 = (x173>>((x174<=x175)>>x176));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x209 = 1U;
	uint16_t x211 = UINT16_MAX;
	volatile uint16_t x212 = 5U;
	static int32_t t2 = 317878184;

	t2 = (x209>>((x210<=x211)>>x212));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x221 = 61671397192668LLU;
	int64_t x222 = INT64_MIN;
	int16_t x223 = -1;
	int16_t x224 = 0;
	volatile uint64_t t3 = 1657LLU;

	t3 = (x221>>((x222<=x223)>>x224));

	if (t3 != 30835698596334LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x257 = UINT8_MAX;
	volatile uint8_t x260 = 0U;
	volatile int32_t t4 = -76459;

	t4 = (x257>>((x258<=x259)>>x260));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x362 = 478U;
	static uint16_t x363 = 12485U;
	volatile int32_t x364 = 0;
	int32_t t5 = -91;

	t5 = (x361>>((x362<=x363)>>x364));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x483 = 333634U;
	int32_t t6 = -3293;

	t6 = (x481>>((x482<=x483)>>x484));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x501 = 63215LLU;
	uint16_t x503 = 21U;
	static uint8_t x504 = 8U;
	uint64_t t7 = 91806279LLU;

	t7 = (x501>>((x502<=x503)>>x504));

	if (t7 != 63215LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x537 = 476U;
	int64_t x538 = -1LL;
	uint64_t x539 = UINT64_MAX;
	uint32_t x540 = 0U;

	t8 = (x537>>((x538<=x539)>>x540));

	if (t8 != 238) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x621 = 5U;
	uint16_t x623 = 96U;
	static volatile uint8_t x624 = 6U;
	volatile int32_t t9 = -4731146;

	t9 = (x621>>((x622<=x623)>>x624));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x629 = 1094205787063LLU;
	static int16_t x630 = -8;
	volatile int16_t x631 = INT16_MIN;
	volatile int8_t x632 = 1;

	t10 = (x629>>((x630<=x631)>>x632));

	if (t10 != 1094205787063LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x653 = 11028;
	int64_t x654 = 24LL;
	static int16_t x656 = 7;
	int32_t t11 = 636;

	t11 = (x653>>((x654<=x655)>>x656));

	if (t11 != 11028) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x661 = 4049841991732041LL;
	uint16_t x662 = 0U;
	int32_t x663 = -1;
	int16_t x664 = 8;
	int64_t t12 = -10160039948623LL;

	t12 = (x661>>((x662<=x663)>>x664));

	if (t12 != 4049841991732041LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x674 = UINT8_MAX;
	int32_t x675 = 465478;
	int8_t x676 = 0;
	uint32_t t13 = 1170788U;

	t13 = (x673>>((x674<=x675)>>x676));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x726 = -84;
	uint16_t x727 = 3U;
	uint32_t x728 = 12U;
	volatile int32_t t14 = 1;

	t14 = (x725>>((x726<=x727)>>x728));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x745 = 3U;
	static int16_t x746 = 1238;
	volatile int8_t x747 = INT8_MAX;
	volatile int8_t x748 = 0;
	int32_t t15 = -5821959;

	t15 = (x745>>((x746<=x747)>>x748));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x789 = INT32_MAX;
	static int64_t x790 = INT64_MAX;
	int8_t x791 = 1;
	uint8_t x792 = 11U;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x789>>((x790<=x791)>>x792));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x886 = 24U;
	int16_t x887 = -1;
	static uint16_t x888 = 18U;
	int64_t t17 = -4409615LL;

	t17 = (x885>>((x886<=x887)>>x888));

	if (t17 != 98563580156631LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x897 = 407U;
	volatile int64_t x898 = -1LL;
	int64_t x899 = INT64_MIN;
	static volatile int8_t x900 = 2;
	static volatile int32_t t18 = 3211467;

	t18 = (x897>>((x898<=x899)>>x900));

	if (t18 != 407) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x981 = 1;
	int16_t x983 = INT16_MAX;
	static int8_t x984 = 1;
	static volatile int32_t t19 = 0;

	t19 = (x981>>((x982<=x983)>>x984));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1061 = INT16_MAX;
	int16_t x1062 = INT16_MIN;
	uint16_t x1064 = 1U;

	t20 = (x1061>>((x1062<=x1063)>>x1064));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1085 = 55U;
	int32_t x1087 = -1;

	t21 = (x1085>>((x1086<=x1087)>>x1088));

	if (t21 != 55) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1125 = UINT32_MAX;
	int32_t x1126 = -7;
	int16_t x1127 = 1;
	static volatile uint32_t t22 = UINT32_MAX;

	t22 = (x1125>>((x1126<=x1127)>>x1128));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1197 = 1;
	static int32_t x1198 = INT32_MIN;
	static volatile int8_t x1199 = 0;
	volatile int8_t x1200 = 5;
	volatile int32_t t23 = -130;

	t23 = (x1197>>((x1198<=x1199)>>x1200));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1277 = UINT32_MAX;
	volatile int8_t x1278 = -1;
	uint16_t x1279 = UINT16_MAX;
	uint8_t x1280 = 3U;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x1277>>((x1278<=x1279)>>x1280));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1282 = INT32_MAX;
	volatile int16_t x1283 = INT16_MIN;
	uint64_t t25 = 122582954946653335LLU;

	t25 = (x1281>>((x1282<=x1283)>>x1284));

	if (t25 != 8792375093379738721LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1289 = INT32_MAX;
	static uint32_t x1292 = 4U;
	int32_t t26 = INT32_MAX;

	t26 = (x1289>>((x1290<=x1291)>>x1292));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1429 = 580310U;
	int16_t x1431 = 1284;
	int8_t x1432 = 19;
	uint32_t t27 = 124U;

	t27 = (x1429>>((x1430<=x1431)>>x1432));

	if (t27 != 580310U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1509 = INT32_MAX;
	uint8_t x1510 = 52U;
	int16_t x1511 = -1;
	uint8_t x1512 = 4U;
	int32_t t28 = INT32_MAX;

	t28 = (x1509>>((x1510<=x1511)>>x1512));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1653 = 936LL;
	volatile uint8_t x1654 = 14U;
	int16_t x1655 = INT16_MIN;
	uint8_t x1656 = 1U;
	int64_t t29 = -4770LL;

	t29 = (x1653>>((x1654<=x1655)>>x1656));

	if (t29 != 936LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1661 = 105024489U;
	volatile int64_t x1662 = -1LL;

	t30 = (x1661>>((x1662<=x1663)>>x1664));

	if (t30 != 105024489U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x1665 = 1416321;
	int16_t x1666 = INT16_MAX;
	int8_t x1667 = INT8_MIN;
	uint8_t x1668 = 9U;
	static int32_t t31 = -212;

	t31 = (x1665>>((x1666<=x1667)>>x1668));

	if (t31 != 1416321) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1721 = UINT8_MAX;
	int16_t x1722 = INT16_MAX;
	volatile uint16_t x1724 = 1U;
	volatile int32_t t32 = 80;

	t32 = (x1721>>((x1722<=x1723)>>x1724));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1789 = 17552111411778LLU;
	int8_t x1790 = -1;
	uint64_t x1791 = 9172526LLU;
	uint8_t x1792 = 0U;
	uint64_t t33 = 28416188LLU;

	t33 = (x1789>>((x1790<=x1791)>>x1792));

	if (t33 != 17552111411778LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1847 = INT64_MIN;
	static uint8_t x1848 = 3U;
	static int32_t t34 = INT32_MAX;

	t34 = (x1845>>((x1846<=x1847)>>x1848));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1937 = INT32_MAX;
	int8_t x1938 = INT8_MIN;
	static volatile uint16_t x1940 = 24U;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x1937>>((x1938<=x1939)>>x1940));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1945 = 2084489628712LL;
	int16_t x1946 = -8198;
	int16_t x1947 = 1;

	t36 = (x1945>>((x1946<=x1947)>>x1948));

	if (t36 != 2084489628712LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1973 = INT8_MAX;
	uint16_t x1974 = 5076U;
	int8_t x1975 = INT8_MAX;
	uint16_t x1976 = 2U;
	static volatile int32_t t37 = -506689115;

	t37 = (x1973>>((x1974<=x1975)>>x1976));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1977 = INT16_MAX;
	uint16_t x1978 = 2U;
	static volatile int16_t x1980 = 1;
	volatile int32_t t38 = -68652;

	t38 = (x1977>>((x1978<=x1979)>>x1980));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2089 = 12876127U;
	uint64_t x2090 = UINT64_MAX;
	static int16_t x2091 = 1;
	static uint8_t x2092 = 1U;
	volatile uint32_t t39 = 349U;

	t39 = (x2089>>((x2090<=x2091)>>x2092));

	if (t39 != 12876127U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2133 = 56697;
	int64_t x2134 = INT64_MAX;
	int64_t x2135 = -1LL;
	volatile int32_t t40 = -32522088;

	t40 = (x2133>>((x2134<=x2135)>>x2136));

	if (t40 != 56697) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2170 = UINT16_MAX;
	int16_t x2171 = INT16_MIN;
	uint8_t x2172 = 13U;

	t41 = (x2169>>((x2170<=x2171)>>x2172));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2181 = 8U;
	int16_t x2182 = -6;
	static volatile uint32_t x2183 = 1290U;
	static int64_t x2184 = 11LL;
	int32_t t42 = 11254;

	t42 = (x2181>>((x2182<=x2183)>>x2184));

	if (t42 != 8) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2225 = INT64_MAX;
	int8_t x2226 = INT8_MIN;
	uint64_t x2227 = 31LLU;
	volatile int32_t x2228 = 15;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x2225>>((x2226<=x2227)>>x2228));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2309 = 326568653;
	uint32_t x2310 = 986333U;
	int64_t x2311 = -1LL;
	volatile uint16_t x2312 = 10U;
	static int32_t t44 = -4146641;

	t44 = (x2309>>((x2310<=x2311)>>x2312));

	if (t44 != 326568653) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2317 = INT16_MAX;
	volatile uint16_t x2318 = 1852U;
	volatile uint16_t x2319 = 1U;
	int16_t x2320 = 0;
	volatile int32_t t45 = -224553537;

	t45 = (x2317>>((x2318<=x2319)>>x2320));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2321 = 3275979435408920556LL;
	volatile int16_t x2322 = INT16_MIN;
	volatile int32_t x2323 = INT32_MIN;

	t46 = (x2321>>((x2322<=x2323)>>x2324));

	if (t46 != 3275979435408920556LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2473 = 27U;
	uint8_t x2476 = 5U;
	int32_t t47 = -51;

	t47 = (x2473>>((x2474<=x2475)>>x2476));

	if (t47 != 27) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x2541 = INT8_MAX;
	volatile int32_t x2542 = INT32_MIN;
	static int16_t x2544 = 9;
	volatile int32_t t48 = 645;

	t48 = (x2541>>((x2542<=x2543)>>x2544));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2773 = 254520LLU;
	int16_t x2774 = -969;
	uint32_t x2775 = UINT32_MAX;
	static uint32_t x2776 = 10U;
	volatile uint64_t t49 = 4086LLU;

	t49 = (x2773>>((x2774<=x2775)>>x2776));

	if (t49 != 254520LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2873 = INT16_MAX;
	uint8_t x2874 = 8U;
	int32_t x2875 = INT32_MAX;
	int64_t x2876 = 17LL;
	volatile int32_t t50 = 55721;

	t50 = (x2873>>((x2874<=x2875)>>x2876));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2961 = 7505;
	int64_t x2962 = INT64_MIN;
	volatile uint16_t x2964 = 13U;
	static volatile int32_t t51 = 50110;

	t51 = (x2961>>((x2962<=x2963)>>x2964));

	if (t51 != 7505) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2969 = 25;
	uint8_t x2970 = 15U;
	uint16_t x2971 = 52U;
	int8_t x2972 = 1;

	t52 = (x2969>>((x2970<=x2971)>>x2972));

	if (t52 != 25) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2985 = 151129LLU;
	static int16_t x2986 = INT16_MIN;
	uint64_t x2988 = 6LLU;
	volatile uint64_t t53 = 65LLU;

	t53 = (x2985>>((x2986<=x2987)>>x2988));

	if (t53 != 151129LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3061 = 31U;
	static int32_t x3062 = INT32_MIN;
	volatile int8_t x3063 = INT8_MIN;
	uint32_t x3064 = 0U;
	volatile int32_t t54 = -14956;

	t54 = (x3061>>((x3062<=x3063)>>x3064));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3237 = UINT64_MAX;
	int64_t x3238 = -1LL;
	uint8_t x3239 = 35U;
	uint8_t x3240 = 14U;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x3237>>((x3238<=x3239)>>x3240));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3273 = 127U;
	int64_t x3274 = 10027989LL;
	volatile int16_t x3275 = -1;
	uint8_t x3276 = 14U;

	t56 = (x3273>>((x3274<=x3275)>>x3276));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3525 = 902974534164231163LLU;
	int64_t x3527 = -1LL;
	uint8_t x3528 = 0U;
	volatile uint64_t t57 = 138336087737064942LLU;

	t57 = (x3525>>((x3526<=x3527)>>x3528));

	if (t57 != 451487267082115581LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3545 = 281U;
	int8_t x3546 = INT8_MIN;
	volatile int32_t t58 = 5881;

	t58 = (x3545>>((x3546<=x3547)>>x3548));

	if (t58 != 281) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3577 = 164395;
	uint64_t x3579 = 165932LLU;
	static volatile int32_t t59 = 1;

	t59 = (x3577>>((x3578<=x3579)>>x3580));

	if (t59 != 164395) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3597 = 1986U;
	int8_t x3598 = -55;
	int16_t x3599 = INT16_MAX;
	uint8_t x3600 = 30U;

	t60 = (x3597>>((x3598<=x3599)>>x3600));

	if (t60 != 1986) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3722 = -38;
	uint32_t x3723 = 99908U;
	int8_t x3724 = 6;
	static volatile int32_t t61 = -120;

	t61 = (x3721>>((x3722<=x3723)>>x3724));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3781 = 1990642U;
	int8_t x3782 = -2;
	int8_t x3784 = 2;
	uint32_t t62 = 131245117U;

	t62 = (x3781>>((x3782<=x3783)>>x3784));

	if (t62 != 1990642U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3846 = 15136837676062LLU;
	uint16_t x3848 = 9U;
	volatile int32_t t63 = 1;

	t63 = (x3845>>((x3846<=x3847)>>x3848));

	if (t63 != 15) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3925 = 18U;
	int64_t x3926 = -6571978050430386LL;
	static int32_t x3927 = -2353852;
	volatile int8_t x3928 = 12;
	volatile int32_t t64 = -20336125;

	t64 = (x3925>>((x3926<=x3927)>>x3928));

	if (t64 != 18) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3937 = INT64_MAX;
	int64_t x3938 = INT64_MIN;
	static uint64_t x3939 = 45680LLU;
	static int64_t t65 = INT64_MAX;

	t65 = (x3937>>((x3938<=x3939)>>x3940));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x4025 = 61;
	volatile uint32_t x4026 = 181U;
	int64_t x4027 = INT64_MAX;
	static uint8_t x4028 = 0U;
	int32_t t66 = 499040626;

	t66 = (x4025>>((x4026<=x4027)>>x4028));

	if (t66 != 30) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x4045 = UINT32_MAX;
	static int32_t x4046 = INT32_MAX;
	int32_t x4047 = INT32_MIN;
	volatile uint32_t t67 = UINT32_MAX;

	t67 = (x4045>>((x4046<=x4047)>>x4048));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4065 = INT64_MAX;
	uint16_t x4066 = 6810U;
	static uint64_t x4067 = 2771272LLU;
	uint32_t x4068 = 28U;

	t68 = (x4065>>((x4066<=x4067)>>x4068));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4073 = 4123351104LLU;
	int8_t x4074 = -2;
	int8_t x4075 = INT8_MIN;
	static uint8_t x4076 = 8U;
	volatile uint64_t t69 = 4877429056619849227LLU;

	t69 = (x4073>>((x4074<=x4075)>>x4076));

	if (t69 != 4123351104LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4085 = INT32_MAX;
	volatile int8_t x4086 = INT8_MIN;
	uint64_t x4087 = 8046702456LLU;
	int8_t x4088 = 1;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x4085>>((x4086<=x4087)>>x4088));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x4101 = 44;
	int16_t x4103 = INT16_MAX;
	int32_t t71 = -35559706;

	t71 = (x4101>>((x4102<=x4103)>>x4104));

	if (t71 != 44) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x4289 = INT16_MAX;
	int16_t x4290 = -13141;
	static volatile uint32_t x4291 = UINT32_MAX;
	uint8_t x4292 = 1U;
	volatile int32_t t72 = 3;

	t72 = (x4289>>((x4290<=x4291)>>x4292));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x4499 = -1LL;
	uint32_t x4500 = 6U;

	t73 = (x4497>>((x4498<=x4499)>>x4500));

	if (t73 != 41) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4569 = 4U;
	static volatile int32_t x4570 = -104002421;
	static int64_t x4571 = INT64_MAX;
	uint32_t x4572 = 4U;
	static volatile int32_t t74 = 1667;

	t74 = (x4569>>((x4570<=x4571)>>x4572));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4597 = 105U;
	int32_t x4598 = -1;
	int32_t x4599 = INT32_MIN;
	uint8_t x4600 = 3U;
	static volatile int32_t t75 = 95;

	t75 = (x4597>>((x4598<=x4599)>>x4600));

	if (t75 != 105) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x4605 = 28U;
	static int32_t x4606 = INT32_MIN;
	int16_t x4607 = 1865;
	uint32_t t76 = 7U;

	t76 = (x4605>>((x4606<=x4607)>>x4608));

	if (t76 != 28U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4673 = 34;
	volatile uint16_t x4674 = 58U;
	int16_t x4675 = -1;
	volatile uint16_t x4676 = 6U;
	volatile int32_t t77 = 4;

	t77 = (x4673>>((x4674<=x4675)>>x4676));

	if (t77 != 34) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4705 = UINT64_MAX;
	volatile int64_t x4706 = INT64_MAX;
	static uint32_t x4707 = 1766618340U;
	uint64_t t78 = UINT64_MAX;

	t78 = (x4705>>((x4706<=x4707)>>x4708));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4733 = 1416655U;
	int16_t x4734 = -1;
	int8_t x4735 = INT8_MIN;
	int8_t x4736 = 0;
	uint32_t t79 = 2U;

	t79 = (x4733>>((x4734<=x4735)>>x4736));

	if (t79 != 1416655U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4785 = INT8_MAX;
	int16_t x4786 = -32;
	static int16_t x4787 = 40;
	static uint8_t x4788 = 2U;

	t80 = (x4785>>((x4786<=x4787)>>x4788));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4917 = UINT64_MAX;
	uint32_t x4918 = UINT32_MAX;
	int32_t x4919 = INT32_MAX;
	static volatile uint64_t t81 = UINT64_MAX;

	t81 = (x4917>>((x4918<=x4919)>>x4920));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5015 = -1;
	static volatile uint8_t x5016 = 0U;
	volatile int32_t t82 = -443147570;

	t82 = (x5013>>((x5014<=x5015)>>x5016));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5033 = INT64_MAX;
	uint8_t x5034 = UINT8_MAX;
	int8_t x5035 = INT8_MIN;
	uint32_t x5036 = 4U;
	int64_t t83 = INT64_MAX;

	t83 = (x5033>>((x5034<=x5035)>>x5036));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x5077 = 0LLU;
	uint64_t x5078 = 30021334979LLU;
	int64_t x5079 = INT64_MIN;
	static int32_t x5080 = 0;
	volatile uint64_t t84 = 580595865639503LLU;

	t84 = (x5077>>((x5078<=x5079)>>x5080));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x5125 = 3861U;
	uint16_t x5126 = UINT16_MAX;
	static int8_t x5127 = -1;
	uint64_t x5128 = 1LLU;
	volatile int32_t t85 = 1;

	t85 = (x5125>>((x5126<=x5127)>>x5128));

	if (t85 != 3861) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5149 = 9958938;
	int16_t x5150 = INT16_MAX;
	static volatile int8_t x5151 = INT8_MIN;
	int16_t x5152 = 0;

	t86 = (x5149>>((x5150<=x5151)>>x5152));

	if (t86 != 9958938) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5165 = 1104260301LLU;
	uint32_t x5167 = 12U;
	uint16_t x5168 = 13U;
	static uint64_t t87 = 22124492425105LLU;

	t87 = (x5165>>((x5166<=x5167)>>x5168));

	if (t87 != 1104260301LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t t88 = 7714;

	t88 = (x5169>>((x5170<=x5171)>>x5172));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x5286 = -1;
	static uint16_t x5287 = 10U;
	int64_t x5288 = 1LL;
	static volatile int32_t t89 = INT32_MAX;

	t89 = (x5285>>((x5286<=x5287)>>x5288));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x5301 = 8851750097LLU;
	int8_t x5303 = INT8_MIN;
	volatile uint64_t t90 = 4577672780LLU;

	t90 = (x5301>>((x5302<=x5303)>>x5304));

	if (t90 != 8851750097LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5323 = -43;
	uint16_t x5324 = 1U;
	volatile int32_t t91 = 15815714;

	t91 = (x5321>>((x5322<=x5323)>>x5324));

	if (t91 != 10823) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5325 = 3LL;
	uint32_t x5326 = UINT32_MAX;
	volatile int64_t x5327 = 17451170164LL;
	int16_t x5328 = 7;
	volatile int64_t t92 = 103710790177879LL;

	t92 = (x5325>>((x5326<=x5327)>>x5328));

	if (t92 != 3LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5386 = -1;
	static uint8_t x5388 = 15U;
	static volatile int32_t t93 = INT32_MAX;

	t93 = (x5385>>((x5386<=x5387)>>x5388));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5653 = 4;
	int64_t x5654 = INT64_MAX;
	volatile int16_t x5655 = INT16_MAX;
	int16_t x5656 = 7;
	int32_t t94 = 1995526;

	t94 = (x5653>>((x5654<=x5655)>>x5656));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5681 = 54U;
	static int32_t x5683 = INT32_MIN;
	volatile int32_t t95 = 18;

	t95 = (x5681>>((x5682<=x5683)>>x5684));

	if (t95 != 54) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5785 = 4656;
	uint8_t x5786 = 10U;
	static uint32_t x5787 = 11U;
	uint16_t x5788 = 27U;
	volatile int32_t t96 = -511;

	t96 = (x5785>>((x5786<=x5787)>>x5788));

	if (t96 != 4656) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5889 = UINT64_MAX;
	int32_t x5891 = INT32_MIN;
	uint8_t x5892 = 0U;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x5889>>((x5890<=x5891)>>x5892));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x5909 = 750;
	int8_t x5911 = -1;
	uint16_t x5912 = 2U;
	static volatile int32_t t98 = -914163;

	t98 = (x5909>>((x5910<=x5911)>>x5912));

	if (t98 != 750) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x6061 = 24U;
	int32_t x6063 = -42;
	volatile int32_t t99 = 0;

	t99 = (x6061>>((x6062<=x6063)>>x6064));

	if (t99 != 12) { NG(); } else { ; }
	
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

