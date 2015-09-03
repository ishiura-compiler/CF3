#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x171 = 1;
uint8_t x313 = 10U;
uint16_t x315 = 1U;
uint16_t x354 = UINT16_MAX;
volatile uint32_t x378 = UINT32_MAX;
int16_t x671 = 0;
int32_t t7 = 1029571;
static uint64_t x731 = 0LLU;
int32_t t9 = 234461620;
static uint16_t x936 = UINT16_MAX;
uint64_t x1046 = UINT64_MAX;
uint8_t x1146 = 2U;
static uint32_t x1158 = UINT32_MAX;
int32_t t14 = -2924;
int8_t x1171 = 1;
uint64_t x1193 = 253LLU;
uint8_t x1279 = 1U;
int16_t x1321 = INT16_MIN;
uint8_t x1426 = 85U;
uint8_t x1511 = 12U;
static uint64_t x1569 = 206267704LLU;
uint8_t x1783 = 0U;
static int16_t x1949 = INT16_MIN;
uint16_t x2037 = 0U;
static volatile int32_t t27 = -18;
volatile int32_t t28 = -22;
uint16_t x2054 = UINT16_MAX;
int32_t t31 = 2089199;
static uint16_t x2163 = 0U;
volatile int32_t t33 = -1938169;
int32_t t35 = -11;
static uint32_t x2284 = 1522052849U;
int32_t t39 = -852103;
int16_t x2586 = INT16_MAX;
uint64_t x2598 = 901224234460063LLU;
uint8_t x2627 = 14U;
uint16_t x2652 = 26199U;
uint8_t x2675 = 0U;
int8_t x2697 = 20;
uint64_t x2700 = 42360LLU;
int16_t x2945 = INT16_MAX;
volatile int64_t x2948 = INT64_MAX;
int64_t x3221 = INT64_MAX;
volatile int16_t x3222 = 23;
int32_t t53 = -32992;
volatile int8_t x3411 = 17;
volatile int16_t x3412 = 480;
int32_t x3445 = INT32_MIN;
static int32_t t57 = -2861781;
static uint16_t x3490 = 231U;
int8_t x3494 = 26;
static uint16_t x3495 = 1U;
uint8_t x3699 = 28U;
int32_t x3708 = INT32_MAX;
volatile uint64_t x3724 = UINT64_MAX;
volatile int32_t t67 = -489594;
uint16_t x3874 = UINT16_MAX;
volatile int32_t t69 = -951;
static volatile int8_t x3960 = INT8_MAX;
static uint16_t x4026 = 822U;
int8_t x4027 = 14;
volatile int32_t t72 = -255;
uint8_t x4234 = UINT8_MAX;
static int16_t x4253 = -1;
int8_t x4339 = 15;
volatile int64_t x4369 = INT64_MIN;
int16_t x4392 = INT16_MIN;
static uint16_t x4697 = 167U;
volatile int32_t t84 = 6;
volatile uint8_t x4901 = UINT8_MAX;
uint8_t x5015 = 0U;
static volatile int32_t t87 = -3806;
int32_t x5129 = INT32_MAX;
volatile int8_t x5174 = INT8_MAX;
volatile uint8_t x5175 = 9U;
int32_t x5341 = INT32_MIN;
int32_t x5377 = -8193519;
static volatile int16_t x5497 = 54;


void f0(void) {
	uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 3U;
	uint16_t x135 = 3U;
	volatile int32_t x136 = -238;
	volatile int32_t t0 = -173;

	t0 = (x133<=((x134>>x135)&x136));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = 21921314850336968LLU;
	int32_t x172 = INT32_MAX;
	volatile int32_t t1 = -422022669;

	t1 = (x169<=((x170>>x171)&x172));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x241 = UINT32_MAX;
	uint64_t x242 = UINT64_MAX;
	volatile int16_t x243 = 6;
	volatile int8_t x244 = INT8_MIN;
	int32_t t2 = -3119431;

	t2 = (x241<=((x242>>x243)&x244));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x309 = 1913841612498717LLU;
	static int16_t x310 = 1;
	uint8_t x311 = 14U;
	volatile int16_t x312 = INT16_MAX;
	int32_t t3 = 6371516;

	t3 = (x309<=((x310>>x311)&x312));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x314 = UINT32_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t4 = -1;

	t4 = (x313<=((x314>>x315)&x316));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x355 = 10;
	int16_t x356 = -1;
	int32_t t5 = 252;

	t5 = (x353<=((x354>>x355)&x356));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x377 = INT64_MIN;
	uint32_t x379 = 2U;
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t6 = -527223091;

	t6 = (x377<=((x378>>x379)&x380));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x669 = 12442;
	uint8_t x670 = 3U;
	static int64_t x672 = INT64_MIN;

	t7 = (x669<=((x670>>x671)&x672));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x693 = INT16_MIN;
	uint64_t x694 = 9199434853809381LLU;
	uint8_t x695 = 41U;
	volatile uint8_t x696 = 28U;
	static int32_t t8 = -388;

	t8 = (x693<=((x694>>x695)&x696));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x729 = -14;
	int16_t x730 = INT16_MAX;
	volatile uint32_t x732 = 1935925U;

	t9 = (x729<=((x730>>x731)&x732));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x733 = UINT32_MAX;
	volatile int16_t x734 = 127;
	int8_t x735 = 3;
	volatile int64_t x736 = INT64_MIN;
	int32_t t10 = 1;

	t10 = (x733<=((x734>>x735)&x736));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x933 = 22919447399912715LL;
	volatile int16_t x934 = 85;
	int8_t x935 = 1;
	volatile int32_t t11 = -11289;

	t11 = (x933<=((x934>>x935)&x936));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1045 = -1;
	volatile uint64_t x1047 = 2LLU;
	uint16_t x1048 = 2326U;
	int32_t t12 = -359538;

	t12 = (x1045<=((x1046>>x1047)&x1048));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x1145 = -1LL;
	static uint16_t x1147 = 0U;
	static uint16_t x1148 = UINT16_MAX;
	static int32_t t13 = 0;

	t13 = (x1145<=((x1146>>x1147)&x1148));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1157 = 1U;
	int64_t x1159 = 0LL;
	volatile uint64_t x1160 = UINT64_MAX;

	t14 = (x1157<=((x1158>>x1159)&x1160));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1169 = 77U;
	volatile int32_t x1170 = 418413971;
	uint64_t x1172 = UINT64_MAX;
	volatile int32_t t15 = 1804;

	t15 = (x1169<=((x1170>>x1171)&x1172));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1194 = 2217033920LL;
	uint8_t x1195 = 10U;
	volatile uint64_t x1196 = UINT64_MAX;
	static int32_t t16 = 15160845;

	t16 = (x1193<=((x1194>>x1195)&x1196));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1277 = UINT16_MAX;
	volatile int8_t x1278 = INT8_MAX;
	int32_t x1280 = -1;
	int32_t t17 = -183;

	t17 = (x1277<=((x1278>>x1279)&x1280));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1322 = 907806214U;
	static volatile uint8_t x1323 = 0U;
	uint64_t x1324 = UINT64_MAX;
	int32_t t18 = -1;

	t18 = (x1321<=((x1322>>x1323)&x1324));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1425 = -1;
	int32_t x1427 = 0;
	int8_t x1428 = INT8_MIN;
	int32_t t19 = 210949;

	t19 = (x1425<=((x1426>>x1427)&x1428));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1429 = UINT16_MAX;
	int8_t x1430 = 6;
	static int8_t x1431 = 7;
	static int64_t x1432 = 1353594571881389147LL;
	volatile int32_t t20 = -1;

	t20 = (x1429<=((x1430>>x1431)&x1432));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1509 = 0;
	volatile uint8_t x1510 = 73U;
	static int32_t x1512 = INT32_MIN;
	int32_t t21 = 19402;

	t21 = (x1509<=((x1510>>x1511)&x1512));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1570 = INT8_MAX;
	uint8_t x1571 = 10U;
	static int16_t x1572 = INT16_MIN;
	int32_t t22 = 245735;

	t22 = (x1569<=((x1570>>x1571)&x1572));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1645 = INT32_MIN;
	int64_t x1646 = 1194825704640696646LL;
	int8_t x1647 = 0;
	uint32_t x1648 = UINT32_MAX;
	static volatile int32_t t23 = -1;

	t23 = (x1645<=((x1646>>x1647)&x1648));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1781 = 56380408882138036LLU;
	static int64_t x1782 = 22608223LL;
	volatile int32_t x1784 = INT32_MAX;
	int32_t t24 = 201;

	t24 = (x1781<=((x1782>>x1783)&x1784));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1837 = 81U;
	volatile int32_t x1838 = INT32_MAX;
	static uint8_t x1839 = 3U;
	volatile int8_t x1840 = 0;
	int32_t t25 = 4894;

	t25 = (x1837<=((x1838>>x1839)&x1840));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1950 = UINT8_MAX;
	volatile int8_t x1951 = 1;
	static int8_t x1952 = -1;
	int32_t t26 = -1;

	t26 = (x1949<=((x1950>>x1951)&x1952));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2038 = 3U;
	uint8_t x2039 = 3U;
	int32_t x2040 = -2;

	t27 = (x2037<=((x2038>>x2039)&x2040));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x2045 = 77;
	int32_t x2046 = INT32_MAX;
	uint8_t x2047 = 3U;
	uint8_t x2048 = 2U;

	t28 = (x2045<=((x2046>>x2047)&x2048));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2053 = -6;
	int8_t x2055 = 1;
	static int16_t x2056 = -60;
	static int32_t t29 = 5262;

	t29 = (x2053<=((x2054>>x2055)&x2056));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2069 = INT16_MIN;
	uint32_t x2070 = 731558U;
	static int16_t x2071 = 10;
	int16_t x2072 = INT16_MIN;
	volatile int32_t t30 = 14;

	t30 = (x2069<=((x2070>>x2071)&x2072));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x2145 = 0U;
	uint32_t x2146 = 1144739U;
	static volatile int16_t x2147 = 2;
	uint16_t x2148 = UINT16_MAX;

	t31 = (x2145<=((x2146>>x2147)&x2148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2161 = 463U;
	volatile uint32_t x2162 = UINT32_MAX;
	volatile int32_t x2164 = -12320;
	int32_t t32 = 50644854;

	t32 = (x2161<=((x2162>>x2163)&x2164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x2165 = INT16_MIN;
	static int16_t x2166 = INT16_MAX;
	uint8_t x2167 = 0U;
	int64_t x2168 = INT64_MIN;

	t33 = (x2165<=((x2166>>x2167)&x2168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2233 = 359U;
	int64_t x2234 = INT64_MAX;
	int16_t x2235 = 3;
	int64_t x2236 = INT64_MAX;
	static int32_t t34 = -44336057;

	t34 = (x2233<=((x2234>>x2235)&x2236));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x2265 = -1LL;
	volatile int16_t x2266 = 1;
	int8_t x2267 = 1;
	int8_t x2268 = INT8_MIN;

	t35 = (x2265<=((x2266>>x2267)&x2268));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2273 = INT16_MIN;
	volatile int16_t x2274 = INT16_MAX;
	uint8_t x2275 = 1U;
	int32_t x2276 = INT32_MIN;
	int32_t t36 = 2719593;

	t36 = (x2273<=((x2274>>x2275)&x2276));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2281 = 865LLU;
	int64_t x2282 = INT64_MAX;
	uint16_t x2283 = 7U;
	int32_t t37 = 105966340;

	t37 = (x2281<=((x2282>>x2283)&x2284));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2329 = -1;
	uint64_t x2330 = 123481370993LLU;
	uint32_t x2331 = 4U;
	int8_t x2332 = INT8_MIN;
	volatile int32_t t38 = -972162;

	t38 = (x2329<=((x2330>>x2331)&x2332));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2477 = UINT8_MAX;
	uint64_t x2478 = 11611465089493333LLU;
	static uint8_t x2479 = 6U;
	volatile uint32_t x2480 = 504018020U;

	t39 = (x2477<=((x2478>>x2479)&x2480));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2493 = 10U;
	int64_t x2494 = 4399455645524LL;
	int8_t x2495 = 0;
	int32_t x2496 = INT32_MIN;
	int32_t t40 = -22919025;

	t40 = (x2493<=((x2494>>x2495)&x2496));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2501 = -1;
	static uint16_t x2502 = 14U;
	static uint32_t x2503 = 3U;
	static int8_t x2504 = 1;
	static int32_t t41 = 210656844;

	t41 = (x2501<=((x2502>>x2503)&x2504));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2585 = -7;
	static volatile uint8_t x2587 = 0U;
	int16_t x2588 = INT16_MIN;
	int32_t t42 = 1000;

	t42 = (x2585<=((x2586>>x2587)&x2588));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2597 = 102U;
	volatile int8_t x2599 = 31;
	static uint64_t x2600 = 203LLU;
	volatile int32_t t43 = 779;

	t43 = (x2597<=((x2598>>x2599)&x2600));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2609 = INT64_MIN;
	volatile uint64_t x2610 = 28794073827475734LLU;
	static uint8_t x2611 = 23U;
	uint64_t x2612 = UINT64_MAX;
	int32_t t44 = 1;

	t44 = (x2609<=((x2610>>x2611)&x2612));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2625 = 6U;
	int64_t x2626 = INT64_MAX;
	volatile int32_t x2628 = 40304528;
	int32_t t45 = 11;

	t45 = (x2625<=((x2626>>x2627)&x2628));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2649 = -6058;
	int32_t x2650 = INT32_MAX;
	uint8_t x2651 = 8U;
	int32_t t46 = 78230020;

	t46 = (x2649<=((x2650>>x2651)&x2652));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2673 = INT32_MAX;
	volatile int64_t x2674 = 921160237485624354LL;
	volatile int16_t x2676 = -2;
	int32_t t47 = 344;

	t47 = (x2673<=((x2674>>x2675)&x2676));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2698 = 13956284805917152LL;
	int8_t x2699 = 7;
	int32_t t48 = 4007121;

	t48 = (x2697<=((x2698>>x2699)&x2700));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2849 = 31U;
	volatile uint16_t x2850 = 3920U;
	static uint16_t x2851 = 7U;
	uint32_t x2852 = 257970568U;
	int32_t t49 = -1776820;

	t49 = (x2849<=((x2850>>x2851)&x2852));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2946 = INT64_MAX;
	volatile uint8_t x2947 = 26U;
	int32_t t50 = 96487099;

	t50 = (x2945<=((x2946>>x2947)&x2948));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3181 = UINT32_MAX;
	uint16_t x3182 = UINT16_MAX;
	int8_t x3183 = 4;
	int8_t x3184 = INT8_MIN;
	volatile int32_t t51 = -196889;

	t51 = (x3181<=((x3182>>x3183)&x3184));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3223 = 1U;
	static volatile uint32_t x3224 = UINT32_MAX;
	volatile int32_t t52 = 463852;

	t52 = (x3221<=((x3222>>x3223)&x3224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3377 = -1;
	volatile int16_t x3378 = INT16_MAX;
	static uint8_t x3379 = 1U;
	int32_t x3380 = 1406;

	t53 = (x3377<=((x3378>>x3379)&x3380));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3397 = UINT8_MAX;
	static uint16_t x3398 = UINT16_MAX;
	int8_t x3399 = 9;
	int64_t x3400 = INT64_MIN;
	static volatile int32_t t54 = 5782249;

	t54 = (x3397<=((x3398>>x3399)&x3400));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3409 = INT64_MAX;
	int8_t x3410 = 1;
	int32_t t55 = 16840;

	t55 = (x3409<=((x3410>>x3411)&x3412));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3446 = 1189U;
	int8_t x3447 = 1;
	int16_t x3448 = -3844;
	int32_t t56 = -25077;

	t56 = (x3445<=((x3446>>x3447)&x3448));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3457 = INT64_MAX;
	uint8_t x3458 = 1U;
	uint32_t x3459 = 2U;
	int16_t x3460 = -1;

	t57 = (x3457<=((x3458>>x3459)&x3460));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3477 = INT16_MIN;
	uint64_t x3478 = UINT64_MAX;
	uint8_t x3479 = 12U;
	int16_t x3480 = 0;
	int32_t t58 = 7145;

	t58 = (x3477<=((x3478>>x3479)&x3480));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3489 = INT8_MAX;
	uint16_t x3491 = 1U;
	static int8_t x3492 = INT8_MIN;
	volatile int32_t t59 = -3183;

	t59 = (x3489<=((x3490>>x3491)&x3492));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x3493 = -1;
	uint64_t x3496 = UINT64_MAX;
	volatile int32_t t60 = 130;

	t60 = (x3493<=((x3494>>x3495)&x3496));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3641 = -1;
	int32_t x3642 = 2999;
	uint32_t x3643 = 15U;
	uint32_t x3644 = 28865U;
	int32_t t61 = 85440;

	t61 = (x3641<=((x3642>>x3643)&x3644));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3649 = INT32_MAX;
	static volatile int16_t x3650 = 8715;
	int8_t x3651 = 0;
	int16_t x3652 = INT16_MIN;
	volatile int32_t t62 = 1353;

	t62 = (x3649<=((x3650>>x3651)&x3652));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x3697 = INT32_MAX;
	uint16_t x3698 = UINT16_MAX;
	static volatile uint16_t x3700 = UINT16_MAX;
	volatile int32_t t63 = 342082;

	t63 = (x3697<=((x3698>>x3699)&x3700));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x3705 = 10U;
	int64_t x3706 = INT64_MAX;
	static uint16_t x3707 = 54U;
	static int32_t t64 = -14;

	t64 = (x3705<=((x3706>>x3707)&x3708));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3721 = 39U;
	static uint16_t x3722 = 0U;
	static volatile int8_t x3723 = 21;
	static int32_t t65 = -5;

	t65 = (x3721<=((x3722>>x3723)&x3724));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x3793 = -1;
	int16_t x3794 = INT16_MAX;
	int32_t x3795 = 5;
	uint8_t x3796 = UINT8_MAX;
	static volatile int32_t t66 = -47315438;

	t66 = (x3793<=((x3794>>x3795)&x3796));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3841 = INT64_MIN;
	static int32_t x3842 = 4;
	uint32_t x3843 = 20U;
	uint16_t x3844 = UINT16_MAX;

	t67 = (x3841<=((x3842>>x3843)&x3844));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3873 = UINT64_MAX;
	uint32_t x3875 = 3U;
	int16_t x3876 = INT16_MIN;
	int32_t t68 = 912501;

	t68 = (x3873<=((x3874>>x3875)&x3876));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3897 = -1;
	uint16_t x3898 = 3U;
	static int32_t x3899 = 0;
	int8_t x3900 = INT8_MIN;

	t69 = (x3897<=((x3898>>x3899)&x3900));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3957 = 1U;
	int16_t x3958 = INT16_MAX;
	volatile int8_t x3959 = 7;
	int32_t t70 = -101236877;

	t70 = (x3957<=((x3958>>x3959)&x3960));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x3965 = INT64_MAX;
	int64_t x3966 = INT64_MAX;
	int16_t x3967 = 1;
	volatile int8_t x3968 = -1;
	volatile int32_t t71 = 156801;

	t71 = (x3965<=((x3966>>x3967)&x3968));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x4025 = 13;
	int8_t x4028 = 4;

	t72 = (x4025<=((x4026>>x4027)&x4028));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4145 = 5U;
	int16_t x4146 = 0;
	static uint8_t x4147 = 1U;
	int64_t x4148 = 10016LL;
	int32_t t73 = 211567797;

	t73 = (x4145<=((x4146>>x4147)&x4148));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4209 = UINT32_MAX;
	static uint32_t x4210 = 124074833U;
	int16_t x4211 = 30;
	int8_t x4212 = INT8_MAX;
	static int32_t t74 = -25611;

	t74 = (x4209<=((x4210>>x4211)&x4212));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4233 = -1;
	int16_t x4235 = 1;
	int8_t x4236 = -1;
	volatile int32_t t75 = -10941;

	t75 = (x4233<=((x4234>>x4235)&x4236));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4254 = 73849780922248LLU;
	int8_t x4255 = 47;
	int16_t x4256 = -1;
	int32_t t76 = -853224225;

	t76 = (x4253<=((x4254>>x4255)&x4256));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4337 = INT32_MIN;
	uint64_t x4338 = 52LLU;
	uint32_t x4340 = 213217U;
	volatile int32_t t77 = -353095;

	t77 = (x4337<=((x4338>>x4339)&x4340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4370 = INT8_MAX;
	uint32_t x4371 = 17U;
	volatile int64_t x4372 = -1LL;
	volatile int32_t t78 = 588133326;

	t78 = (x4369<=((x4370>>x4371)&x4372));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4389 = INT16_MIN;
	int16_t x4390 = 1;
	uint16_t x4391 = 18U;
	static volatile int32_t t79 = 40612899;

	t79 = (x4389<=((x4390>>x4391)&x4392));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x4521 = 73U;
	static volatile int8_t x4522 = INT8_MAX;
	volatile int16_t x4523 = 21;
	int64_t x4524 = INT64_MIN;
	volatile int32_t t80 = 722;

	t80 = (x4521<=((x4522>>x4523)&x4524));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4621 = UINT32_MAX;
	volatile int64_t x4622 = INT64_MAX;
	static uint16_t x4623 = 1U;
	static int32_t x4624 = -214;
	int32_t t81 = 29133255;

	t81 = (x4621<=((x4622>>x4623)&x4624));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4637 = 59U;
	uint64_t x4638 = 2018616213043331008LLU;
	static uint8_t x4639 = 4U;
	volatile int32_t x4640 = -1;
	int32_t t82 = -2106;

	t82 = (x4637<=((x4638>>x4639)&x4640));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x4698 = 96U;
	volatile uint16_t x4699 = 1U;
	int8_t x4700 = INT8_MIN;
	static volatile int32_t t83 = -7;

	t83 = (x4697<=((x4698>>x4699)&x4700));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x4729 = 1013U;
	static uint32_t x4730 = 553217U;
	int8_t x4731 = 1;
	int16_t x4732 = -1;

	t84 = (x4729<=((x4730>>x4731)&x4732));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4902 = 292195800;
	static uint32_t x4903 = 0U;
	uint32_t x4904 = 753721422U;
	int32_t t85 = -48;

	t85 = (x4901<=((x4902>>x4903)&x4904));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4997 = INT8_MAX;
	volatile int64_t x4998 = 397548017969LL;
	int16_t x4999 = 1;
	int32_t x5000 = -1;
	volatile int32_t t86 = -476149;

	t86 = (x4997<=((x4998>>x4999)&x5000));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5013 = -17669218;
	int32_t x5014 = INT32_MAX;
	uint64_t x5016 = UINT64_MAX;

	t87 = (x5013<=((x5014>>x5015)&x5016));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x5021 = 79;
	int32_t x5022 = INT32_MAX;
	int8_t x5023 = 0;
	uint32_t x5024 = UINT32_MAX;
	volatile int32_t t88 = -766;

	t88 = (x5021<=((x5022>>x5023)&x5024));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5130 = 11;
	uint8_t x5131 = 11U;
	int8_t x5132 = 19;
	static int32_t t89 = -19;

	t89 = (x5129<=((x5130>>x5131)&x5132));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x5173 = -9;
	volatile int32_t x5176 = INT32_MAX;
	static volatile int32_t t90 = -1394603;

	t90 = (x5173<=((x5174>>x5175)&x5176));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x5253 = 2;
	int8_t x5254 = INT8_MAX;
	int8_t x5255 = 19;
	int16_t x5256 = -1;
	int32_t t91 = -182;

	t91 = (x5253<=((x5254>>x5255)&x5256));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5309 = INT64_MIN;
	uint32_t x5310 = 5891U;
	int32_t x5311 = 1;
	volatile int64_t x5312 = INT64_MIN;
	volatile int32_t t92 = 934610;

	t92 = (x5309<=((x5310>>x5311)&x5312));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x5321 = INT8_MIN;
	static uint64_t x5322 = UINT64_MAX;
	uint32_t x5323 = 1U;
	int64_t x5324 = INT64_MIN;
	int32_t t93 = -6;

	t93 = (x5321<=((x5322>>x5323)&x5324));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5342 = INT16_MAX;
	uint32_t x5343 = 20U;
	int16_t x5344 = INT16_MAX;
	int32_t t94 = -395589;

	t94 = (x5341<=((x5342>>x5343)&x5344));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5378 = 1;
	int16_t x5379 = 3;
	volatile int64_t x5380 = INT64_MIN;
	int32_t t95 = -67;

	t95 = (x5377<=((x5378>>x5379)&x5380));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x5401 = UINT32_MAX;
	uint64_t x5402 = UINT64_MAX;
	int8_t x5403 = 19;
	int16_t x5404 = -412;
	static volatile int32_t t96 = -6;

	t96 = (x5401<=((x5402>>x5403)&x5404));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5441 = 142687LLU;
	uint16_t x5442 = UINT16_MAX;
	static uint8_t x5443 = 5U;
	uint64_t x5444 = 6471LLU;
	volatile int32_t t97 = -60975;

	t97 = (x5441<=((x5442>>x5443)&x5444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x5498 = 4033U;
	int16_t x5499 = 13;
	static volatile int16_t x5500 = INT16_MIN;
	static int32_t t98 = -6567718;

	t98 = (x5497<=((x5498>>x5499)&x5500));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5509 = INT16_MAX;
	uint8_t x5510 = 28U;
	uint8_t x5511 = 19U;
	uint32_t x5512 = 20U;
	volatile int32_t t99 = 47;

	t99 = (x5509<=((x5510>>x5511)&x5512));

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

