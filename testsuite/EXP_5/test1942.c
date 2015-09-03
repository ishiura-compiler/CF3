#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x77 = -1;
volatile int16_t x79 = INT16_MAX;
volatile uint64_t t4 = 1LLU;
int8_t x385 = INT8_MAX;
uint64_t x386 = 27177587570804404LLU;
uint64_t t5 = 69229LLU;
uint32_t t6 = 2127959U;
uint16_t x557 = 44U;
int8_t x783 = INT8_MAX;
volatile uint64_t x842 = UINT64_MAX;
uint32_t x946 = 29181U;
uint8_t x1053 = 1U;
int8_t x1406 = 46;
int16_t x1417 = INT16_MIN;
int16_t x1428 = 2;
volatile uint64_t t18 = 2067122360133961LLU;
int8_t x1592 = 11;
uint32_t x1678 = UINT32_MAX;
int8_t x1679 = INT8_MAX;
uint64_t x1681 = 4LLU;
uint16_t x1697 = UINT16_MAX;
uint32_t x1698 = 368U;
int32_t x1783 = -233695;
volatile uint64_t t26 = 222944258619860849LLU;
uint16_t x2074 = 3U;
int8_t x2101 = 0;
static int16_t x2104 = 1;
volatile int16_t x2189 = 497;
static volatile uint64_t t29 = 80937580LLU;
uint8_t x2198 = UINT8_MAX;
int64_t t31 = -550211757043510416LL;
int32_t x2298 = INT32_MAX;
volatile int32_t t32 = -311294;
int64_t x2311 = INT64_MAX;
int32_t x2333 = INT32_MIN;
uint32_t x2334 = 0U;
uint32_t x2367 = UINT32_MAX;
uint32_t t35 = 1U;
volatile uint32_t x2408 = 4U;
static volatile int64_t t36 = -2191334981LL;
volatile int32_t x2694 = INT32_MAX;
uint16_t x2701 = 3187U;
int64_t x2917 = 440LL;
uint16_t x2918 = UINT16_MAX;
uint16_t x2919 = UINT16_MAX;
int64_t t42 = -51145390LL;
uint16_t x2991 = UINT16_MAX;
volatile int64_t t43 = -96716669LL;
volatile int32_t x3153 = -34528;
int32_t x3381 = -20;
uint64_t x3382 = 121204484659888746LLU;
int64_t x3383 = INT64_MAX;
volatile int32_t x3430 = -1;
uint32_t x3575 = 309U;
int32_t x3594 = INT32_MAX;
volatile uint32_t t52 = 1392779U;
volatile int64_t x3701 = INT64_MIN;
uint32_t x3702 = 15608892U;
int8_t x3722 = 1;
volatile int32_t x3723 = 49152194;
int16_t x3724 = 0;
uint64_t t55 = 42393534586466025LLU;
int8_t x3997 = INT8_MAX;
volatile uint16_t x4013 = 276U;
static uint64_t x4015 = 3696197572LLU;
static int64_t x4088 = 0LL;
uint32_t x4258 = 1033U;
volatile int64_t t65 = 13276221209LL;
volatile uint8_t x4433 = UINT8_MAX;
static uint64_t x4434 = 479637434317971LLU;
uint32_t x4435 = 4136102U;
static int64_t t69 = 1LL;
static uint16_t x4589 = 54U;
uint64_t t70 = 30150756LLU;
uint16_t x4604 = 14U;
volatile uint8_t x4676 = 12U;
volatile uint32_t t73 = 8U;
static uint64_t x4701 = 151448964322508LLU;
volatile uint64_t t74 = 15677413794456LLU;
static volatile int32_t x4713 = INT32_MIN;
uint64_t x4747 = 33515488LLU;
volatile uint64_t x5042 = 22813182523025LLU;
volatile uint64_t x5043 = 1809061LLU;
uint64_t x5122 = UINT64_MAX;
volatile uint16_t x5123 = 77U;
uint64_t x5326 = 356700409455018426LLU;
int8_t x5385 = INT8_MIN;
int64_t x5510 = 20LL;
int64_t x5665 = -122LL;
int16_t x5815 = -1;
int64_t x5878 = INT64_MAX;
volatile uint32_t t94 = 487009U;
static uint64_t x6046 = UINT64_MAX;
int8_t x6047 = INT8_MAX;
uint8_t x6264 = 1U;


void f0(void) {
	int32_t x57 = -32625;
	int64_t x58 = -31LL;
	uint64_t x59 = 6545204290120524LLU;
	volatile uint8_t x60 = 11U;
	static uint64_t t0 = 1450860785848449LLU;

	t0 = (x57%((x58|x59)>>x60));

	if (t0 != 9007199254710414LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 430U;
	uint8_t x67 = 71U;
	uint16_t x68 = 6U;
	volatile int32_t t1 = -811;

	t1 = (x65%((x66|x67)>>x68));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x78 = INT64_MAX;
	static uint16_t x80 = 1U;
	volatile int64_t t2 = -15LL;

	t2 = (x77%((x78|x79)>>x80));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x109 = 13847U;
	uint8_t x110 = 13U;
	static int32_t x111 = 2;
	int8_t x112 = 0;
	volatile int32_t t3 = 16128;

	t3 = (x109%((x110|x111)>>x112));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x141 = -6LL;
	uint64_t x142 = 14408135LLU;
	int16_t x143 = INT16_MIN;
	int8_t x144 = 23;

	t4 = (x141%((x142|x143)>>x144));

	if (t4 != 8388602LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 8U;

	t5 = (x385%((x386|x387)>>x388));

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x473 = 10;
	volatile uint32_t x474 = UINT32_MAX;
	volatile int8_t x475 = INT8_MAX;
	volatile uint32_t x476 = 1U;

	t6 = (x473%((x474|x475)>>x476));

	if (t6 != 10U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x541 = INT8_MAX;
	uint64_t x542 = UINT64_MAX;
	int8_t x543 = -1;
	uint16_t x544 = 18U;
	volatile uint64_t t7 = 77525867LLU;

	t7 = (x541%((x542|x543)>>x544));

	if (t7 != 127LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x558 = -2420LL;
	uint64_t x559 = 73359885LLU;
	static volatile uint8_t x560 = 3U;
	volatile uint64_t t8 = 117010874LLU;

	t8 = (x557%((x558|x559)>>x560));

	if (t8 != 44LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x781 = -1;
	static int32_t x782 = 7106;
	uint16_t x784 = 0U;
	static int32_t t9 = -722854;

	t9 = (x781%((x782|x783)>>x784));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x841 = INT64_MAX;
	static int32_t x843 = INT32_MAX;
	static volatile int16_t x844 = 0;
	uint64_t t10 = 758068235436LLU;

	t10 = (x841%((x842|x843)>>x844));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x865 = 10669LL;
	int8_t x866 = INT8_MAX;
	static uint64_t x867 = 1400120557842841737LLU;
	int8_t x868 = 0;
	uint64_t t11 = 150858065018442LLU;

	t11 = (x865%((x866|x867)>>x868));

	if (t11 != 10669LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x945 = -1LL;
	uint64_t x947 = UINT64_MAX;
	int8_t x948 = 6;
	volatile uint64_t t12 = 1712628970LLU;

	t12 = (x945%((x946|x947)>>x948));

	if (t12 != 63LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1054 = 39630129;
	volatile uint64_t x1055 = 1902LLU;
	uint16_t x1056 = 14U;
	static volatile uint64_t t13 = 56373LLU;

	t13 = (x1053%((x1054|x1055)>>x1056));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1249 = INT16_MIN;
	static int16_t x1250 = -47;
	uint32_t x1251 = UINT32_MAX;
	volatile int8_t x1252 = 1;
	uint32_t t14 = 8U;

	t14 = (x1249%((x1250|x1251)>>x1252));

	if (t14 != 2147450881U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1301 = -1;
	uint32_t x1302 = 43U;
	static int8_t x1303 = 1;
	volatile int16_t x1304 = 3;
	volatile uint32_t t15 = 1644U;

	t15 = (x1301%((x1302|x1303)>>x1304));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1405 = INT32_MAX;
	uint64_t x1407 = 378390309724LLU;
	static uint16_t x1408 = 7U;
	static uint64_t t16 = 2265LLU;

	t16 = (x1405%((x1406|x1407)>>x1408));

	if (t16 != 2147483647LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1418 = UINT64_MAX;
	uint32_t x1419 = 458325139U;
	uint8_t x1420 = 35U;
	uint64_t t17 = 8281334408LLU;

	t17 = (x1417%((x1418|x1419)>>x1420));

	if (t17 != 536838207LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1425 = 5U;
	volatile int64_t x1426 = -3795758554LL;
	static uint64_t x1427 = 3230159590LLU;

	t18 = (x1425%((x1426|x1427)>>x1428));

	if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1549 = INT16_MIN;
	volatile int8_t x1550 = -1;
	uint64_t x1551 = 596LLU;
	int8_t x1552 = 15;
	uint64_t t19 = 16776LLU;

	t19 = (x1549%((x1550|x1551)>>x1552));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1589 = -1;
	static volatile uint64_t x1590 = UINT64_MAX;
	int8_t x1591 = -1;
	volatile uint64_t t20 = 1080439112772850163LLU;

	t20 = (x1589%((x1590|x1591)>>x1592));

	if (t20 != 2047LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1677 = UINT32_MAX;
	uint8_t x1680 = 27U;
	uint32_t t21 = 499567630U;

	t21 = (x1677%((x1678|x1679)>>x1680));

	if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x1682 = INT64_MAX;
	uint32_t x1683 = 426U;
	uint8_t x1684 = 19U;
	uint64_t t22 = 10825200880244LLU;

	t22 = (x1681%((x1682|x1683)>>x1684));

	if (t22 != 4LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1693 = -1;
	static int64_t x1694 = 1LL;
	uint64_t x1695 = 86548224870LLU;
	int16_t x1696 = 11;
	static volatile uint64_t t23 = 173150990087LLU;

	t23 = (x1693%((x1694|x1695)>>x1696));

	if (t23 != 2543115LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1699 = -1;
	int16_t x1700 = 3;
	uint32_t t24 = 27777U;

	t24 = (x1697%((x1698|x1699)>>x1700));

	if (t24 != 65535U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x1705 = 1U;
	uint64_t x1706 = UINT64_MAX;
	uint8_t x1707 = UINT8_MAX;
	int8_t x1708 = 0;
	volatile uint64_t t25 = 3802789271147LLU;

	t25 = (x1705%((x1706|x1707)>>x1708));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1781 = 904LLU;
	static uint32_t x1782 = 13529U;
	static uint64_t x1784 = 0LLU;

	t26 = (x1781%((x1782|x1783)>>x1784));

	if (t26 != 904LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2073 = 382952;
	volatile int16_t x2075 = INT16_MAX;
	int16_t x2076 = 2;
	int32_t t27 = -136553;

	t27 = (x2073%((x2074|x2075)>>x2076));

	if (t27 != 6166) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2102 = 57U;
	static uint32_t x2103 = 17940U;
	static volatile uint32_t t28 = 457599025U;

	t28 = (x2101%((x2102|x2103)>>x2104));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2190 = 927772226751701LLU;
	volatile int8_t x2191 = 2;
	int8_t x2192 = 7;

	t29 = (x2189%((x2190|x2191)>>x2192));

	if (t29 != 497LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2197 = 4370186474504058455LLU;
	int32_t x2199 = INT32_MAX;
	uint16_t x2200 = 3U;
	uint64_t t30 = 118355581028LLU;

	t30 = (x2197%((x2198|x2199)>>x2200));

	if (t30 != 157830575LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2233 = -6;
	static int64_t x2234 = INT64_MAX;
	uint8_t x2235 = 1U;
	uint8_t x2236 = 1U;

	t31 = (x2233%((x2234|x2235)>>x2236));

	if (t31 != -6LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2297 = INT32_MAX;
	int8_t x2299 = 57;
	uint64_t x2300 = 7LLU;

	t32 = (x2297%((x2298|x2299)>>x2300));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x2309 = INT8_MIN;
	volatile int64_t x2310 = INT64_MAX;
	int16_t x2312 = 4;
	static int64_t t33 = -2669458855834LL;

	t33 = (x2309%((x2310|x2311)>>x2312));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2335 = 267829995856215834LLU;
	uint16_t x2336 = 1U;
	uint64_t t34 = 175LLU;

	t34 = (x2333%((x2334|x2335)>>x2336));

	if (t34 != 100389355411283339LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x2365 = -1;
	uint16_t x2366 = 7U;
	static uint8_t x2368 = 0U;

	t35 = (x2365%((x2366|x2367)>>x2368));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2405 = INT8_MIN;
	int64_t x2406 = INT64_MAX;
	volatile int64_t x2407 = 6495LL;

	t36 = (x2405%((x2406|x2407)>>x2408));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2593 = UINT16_MAX;
	static int64_t x2594 = INT64_MAX;
	uint32_t x2595 = UINT32_MAX;
	uint8_t x2596 = 36U;
	static int64_t t37 = -116489696767923273LL;

	t37 = (x2593%((x2594|x2595)>>x2596));

	if (t37 != 65535LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2693 = -1;
	volatile int8_t x2695 = 56;
	uint32_t x2696 = 0U;
	int32_t t38 = 0;

	t38 = (x2693%((x2694|x2695)>>x2696));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2702 = -276464;
	volatile uint64_t x2703 = UINT64_MAX;
	volatile uint8_t x2704 = 6U;
	static uint64_t t39 = 7LLU;

	t39 = (x2701%((x2702|x2703)>>x2704));

	if (t39 != 3187LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2753 = -51;
	static int32_t x2754 = 1042;
	int32_t x2755 = INT32_MAX;
	volatile int32_t x2756 = 1;
	static int32_t t40 = 1;

	t40 = (x2753%((x2754|x2755)>>x2756));

	if (t40 != -51) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2901 = UINT16_MAX;
	uint32_t x2902 = 234U;
	int64_t x2903 = INT64_MAX;
	uint16_t x2904 = 15U;
	volatile int64_t t41 = -108971568234218326LL;

	t41 = (x2901%((x2902|x2903)>>x2904));

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2920 = 0;

	t42 = (x2917%((x2918|x2919)>>x2920));

	if (t42 != 440LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2989 = -2;
	int64_t x2990 = 19583613128LL;
	volatile int8_t x2992 = 19;

	t43 = (x2989%((x2990|x2991)>>x2992));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3154 = 1349;
	volatile int64_t x3155 = INT64_MAX;
	int8_t x3156 = 1;
	int64_t t44 = 67555059347LL;

	t44 = (x3153%((x3154|x3155)>>x3156));

	if (t44 != -34528LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3157 = -87;
	uint8_t x3158 = UINT8_MAX;
	uint32_t x3159 = UINT32_MAX;
	volatile uint64_t x3160 = 18LLU;
	volatile uint32_t t45 = 140U;

	t45 = (x3157%((x3158|x3159)>>x3160));

	if (t45 != 16312U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x3201 = INT32_MAX;
	volatile uint8_t x3202 = 1U;
	static int8_t x3203 = INT8_MAX;
	int8_t x3204 = 4;
	volatile int32_t t46 = 45;

	t46 = (x3201%((x3202|x3203)>>x3204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x3373 = INT32_MIN;
	volatile uint32_t x3374 = 1130U;
	static int8_t x3375 = INT8_MIN;
	volatile uint8_t x3376 = 0U;
	static volatile uint32_t t47 = 43U;

	t47 = (x3373%((x3374|x3375)>>x3376));

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3384 = 1U;
	static uint64_t t48 = 9820LLU;

	t48 = (x3381%((x3382|x3383)>>x3384));

	if (t48 != 4611686018427387887LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x3429 = INT16_MIN;
	volatile uint64_t x3431 = 19932826399956LLU;
	uint32_t x3432 = 1U;
	uint64_t t49 = 279275711109000LLU;

	t49 = (x3429%((x3430|x3431)>>x3432));

	if (t49 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3573 = -1;
	volatile int8_t x3574 = -1;
	uint32_t x3576 = 0U;
	volatile uint32_t t50 = 1138416699U;

	t50 = (x3573%((x3574|x3575)>>x3576));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3593 = 9U;
	volatile uint32_t x3595 = UINT32_MAX;
	volatile uint8_t x3596 = 2U;
	uint32_t t51 = 0U;

	t51 = (x3593%((x3594|x3595)>>x3596));

	if (t51 != 9U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3689 = -11193;
	uint32_t x3690 = 13136512U;
	int32_t x3691 = -1;
	static volatile uint16_t x3692 = 4U;

	t52 = (x3689%((x3690|x3691)>>x3692));

	if (t52 != 268424278U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3703 = 1U;
	uint8_t x3704 = 13U;
	static int64_t t53 = -67500087000377LL;

	t53 = (x3701%((x3702|x3703)>>x3704));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3721 = -1;
	int32_t t54 = 2874;

	t54 = (x3721%((x3722|x3723)>>x3724));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3805 = 3160234LLU;
	static int16_t x3806 = INT16_MAX;
	uint8_t x3807 = 0U;
	static uint8_t x3808 = 0U;

	t55 = (x3805%((x3806|x3807)>>x3808));

	if (t55 != 14602LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3849 = INT64_MIN;
	int8_t x3850 = INT8_MAX;
	uint8_t x3851 = UINT8_MAX;
	int8_t x3852 = 2;
	int64_t t56 = 103372670LL;

	t56 = (x3849%((x3850|x3851)>>x3852));

	if (t56 != -8LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3921 = -1;
	uint8_t x3922 = 98U;
	uint32_t x3923 = UINT32_MAX;
	static volatile int8_t x3924 = 0;
	uint32_t t57 = 979280U;

	t57 = (x3921%((x3922|x3923)>>x3924));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3969 = 1;
	volatile int8_t x3970 = 1;
	uint8_t x3971 = UINT8_MAX;
	volatile int8_t x3972 = 0;
	volatile int32_t t58 = 11;

	t58 = (x3969%((x3970|x3971)>>x3972));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3977 = UINT8_MAX;
	int16_t x3978 = INT16_MAX;
	uint8_t x3979 = 1U;
	int8_t x3980 = 1;
	int32_t t59 = -1092;

	t59 = (x3977%((x3978|x3979)>>x3980));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3998 = 2LLU;
	static int8_t x3999 = -1;
	uint8_t x4000 = 1U;
	uint64_t t60 = 2700059130556LLU;

	t60 = (x3997%((x3998|x3999)>>x4000));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4014 = 4262981566LL;
	uint16_t x4016 = 1U;
	volatile uint64_t t61 = 26547891LLU;

	t61 = (x4013%((x4014|x4015)>>x4016));

	if (t61 != 276LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4085 = INT64_MAX;
	volatile uint32_t x4086 = 8237442U;
	static int32_t x4087 = -1;
	int64_t t62 = 33LL;

	t62 = (x4085%((x4086|x4087)>>x4088));

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x4113 = 1U;
	uint16_t x4114 = 0U;
	int32_t x4115 = 490866862;
	static volatile uint32_t x4116 = 1U;
	volatile int32_t t63 = -675;

	t63 = (x4113%((x4114|x4115)>>x4116));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4185 = 126451927LLU;
	int16_t x4186 = -180;
	static uint32_t x4187 = 26997U;
	uint8_t x4188 = 24U;
	uint64_t t64 = 482087976167590LLU;

	t64 = (x4185%((x4186|x4187)>>x4188));

	if (t64 != 232LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x4257 = INT64_MIN;
	uint32_t x4259 = UINT32_MAX;
	int8_t x4260 = 25;

	t65 = (x4257%((x4258|x4259)>>x4260));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4361 = -1;
	int32_t x4362 = INT32_MAX;
	int64_t x4363 = 688191LL;
	uint8_t x4364 = 8U;
	volatile int64_t t66 = 598738970LL;

	t66 = (x4361%((x4362|x4363)>>x4364));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x4365 = INT16_MIN;
	static uint64_t x4366 = UINT64_MAX;
	uint8_t x4367 = UINT8_MAX;
	volatile int8_t x4368 = 3;
	uint64_t t67 = 355396462196LLU;

	t67 = (x4365%((x4366|x4367)>>x4368));

	if (t67 != 2305843009213661191LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4436 = 0;
	volatile uint64_t t68 = 18346LLU;

	t68 = (x4433%((x4434|x4435)>>x4436));

	if (t68 != 255LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4449 = INT8_MAX;
	int64_t x4450 = INT64_MAX;
	uint8_t x4451 = UINT8_MAX;
	static int8_t x4452 = 1;

	t69 = (x4449%((x4450|x4451)>>x4452));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4590 = 24LLU;
	volatile int8_t x4591 = 29;
	uint8_t x4592 = 1U;

	t70 = (x4589%((x4590|x4591)>>x4592));

	if (t70 != 12LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4601 = 593085U;
	uint16_t x4602 = 52U;
	uint64_t x4603 = 206100014370LLU;
	static volatile uint64_t t71 = 3509903166760308451LLU;

	t71 = (x4601%((x4602|x4603)>>x4604));

	if (t71 != 593085LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4653 = INT64_MIN;
	uint64_t x4654 = 9066058458LLU;
	int16_t x4655 = 1920;
	int32_t x4656 = 0;
	uint64_t t72 = 3LLU;

	t72 = (x4653%((x4654|x4655)>>x4656));

	if (t72 != 6682022692LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4673 = INT16_MAX;
	volatile uint32_t x4674 = UINT32_MAX;
	static uint8_t x4675 = 40U;

	t73 = (x4673%((x4674|x4675)>>x4676));

	if (t73 != 32767U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4702 = UINT16_MAX;
	volatile uint8_t x4703 = 1U;
	uint16_t x4704 = 6U;

	t74 = (x4701%((x4702|x4703)>>x4704));

	if (t74 != 446LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4714 = 1585082487775866LLU;
	static volatile uint64_t x4715 = 282786807777837342LLU;
	uint16_t x4716 = 2U;
	uint64_t t75 = 86LLU;

	t75 = (x4713%((x4714|x4715)>>x4716));

	if (t75 != 47268416274775428LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4745 = 112LL;
	int16_t x4746 = INT16_MIN;
	uint8_t x4748 = 12U;
	uint64_t t76 = 152LLU;

	t76 = (x4745%((x4746|x4747)>>x4748));

	if (t76 != 112LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4953 = -1;
	volatile int8_t x4954 = INT8_MIN;
	uint32_t x4955 = UINT32_MAX;
	volatile uint8_t x4956 = 9U;
	static volatile uint32_t t77 = 3U;

	t77 = (x4953%((x4954|x4955)>>x4956));

	if (t77 != 511U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5041 = 3681425LLU;
	uint8_t x5044 = 7U;
	static uint64_t t78 = 1LLU;

	t78 = (x5041%((x5042|x5043)>>x5044));

	if (t78 != 3681425LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5121 = UINT64_MAX;
	volatile int16_t x5124 = 1;
	uint64_t t79 = 3736181LLU;

	t79 = (x5121%((x5122|x5123)>>x5124));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5125 = INT8_MAX;
	int32_t x5126 = INT32_MIN;
	uint32_t x5127 = UINT32_MAX;
	static uint8_t x5128 = 21U;
	volatile uint32_t t80 = 34803U;

	t80 = (x5125%((x5126|x5127)>>x5128));

	if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5245 = -1LL;
	uint8_t x5246 = 3U;
	volatile int64_t x5247 = INT64_MAX;
	static uint32_t x5248 = 4U;
	int64_t t81 = -117324LL;

	t81 = (x5245%((x5246|x5247)>>x5248));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5325 = INT64_MAX;
	uint8_t x5327 = 30U;
	uint16_t x5328 = 1U;
	volatile uint64_t t82 = 746328512915535959LLU;

	t82 = (x5325%((x5326|x5327)>>x5328));

	if (t82 != 127511595751805842LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5365 = -1;
	int32_t x5366 = -24601878;
	uint32_t x5367 = 2871U;
	int16_t x5368 = 16;
	volatile uint32_t t83 = 1006U;

	t83 = (x5365%((x5366|x5367)>>x5368));

	if (t83 != 11055U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x5386 = 6357;
	int8_t x5387 = 6;
	uint8_t x5388 = 7U;
	volatile int32_t t84 = 2;

	t84 = (x5385%((x5386|x5387)>>x5388));

	if (t84 != -30) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x5481 = 3U;
	int8_t x5482 = INT8_MAX;
	uint64_t x5483 = 3634079392LLU;
	static uint16_t x5484 = 28U;
	uint64_t t85 = 4062960198429502LLU;

	t85 = (x5481%((x5482|x5483)>>x5484));

	if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x5509 = INT16_MIN;
	static uint64_t x5511 = 59900260202LLU;
	int8_t x5512 = 6;
	uint64_t t86 = 2727538293926LLU;

	t86 = (x5509%((x5510|x5511)>>x5512));

	if (t86 != 708231363LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5661 = INT32_MAX;
	static uint32_t x5662 = 5U;
	volatile int8_t x5663 = -53;
	static uint8_t x5664 = 28U;
	static volatile uint32_t t87 = 1815463U;

	t87 = (x5661%((x5662|x5663)>>x5664));

	if (t87 != 7U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5666 = INT16_MAX;
	volatile uint64_t x5667 = UINT64_MAX;
	static volatile uint16_t x5668 = 31U;
	volatile uint64_t t88 = 1099906LLU;

	t88 = (x5665%((x5666|x5667)>>x5668));

	if (t88 != 2147483526LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x5753 = 1283566LLU;
	int64_t x5754 = -1LL;
	uint64_t x5755 = 4883216793LLU;
	int8_t x5756 = 10;
	static volatile uint64_t t89 = 122655671LLU;

	t89 = (x5753%((x5754|x5755)>>x5756));

	if (t89 != 1283566LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x5761 = -494;
	volatile uint32_t x5762 = 646453U;
	int8_t x5763 = INT8_MIN;
	int32_t x5764 = 5;
	static uint32_t t90 = 121U;

	t90 = (x5761%((x5762|x5763)>>x5764));

	if (t90 != 134217327U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5797 = 909784LLU;
	volatile int16_t x5798 = INT16_MAX;
	volatile int8_t x5799 = INT8_MAX;
	uint8_t x5800 = 1U;
	volatile uint64_t t91 = 18735844LLU;

	t91 = (x5797%((x5798|x5799)>>x5800));

	if (t91 != 8719LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x5813 = INT64_MIN;
	uint32_t x5814 = UINT32_MAX;
	volatile int16_t x5816 = 0;
	int64_t t92 = -1739196506LL;

	t92 = (x5813%((x5814|x5815)>>x5816));

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5877 = -1;
	uint8_t x5879 = 7U;
	int16_t x5880 = 0;
	int64_t t93 = 3859992539255036350LL;

	t93 = (x5877%((x5878|x5879)>>x5880));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5913 = INT32_MAX;
	uint32_t x5914 = 4507593U;
	uint32_t x5915 = 1684387U;
	volatile int32_t x5916 = 1;

	t94 = (x5913%((x5914|x5915)>>x5916));

	if (t94 != 1311218U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5961 = -8978481878930496LL;
	int32_t x5962 = 24788;
	int16_t x5963 = 9;
	uint32_t x5964 = 0U;
	int64_t t95 = 324308517LL;

	t95 = (x5961%((x5962|x5963)>>x5964));

	if (t95 != -20364LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6045 = INT32_MIN;
	uint8_t x6048 = 3U;
	volatile uint64_t t96 = 18792034184320LLU;

	t96 = (x6045%((x6046|x6047)>>x6048));

	if (t96 != 2305843007066210311LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6261 = UINT32_MAX;
	volatile uint16_t x6262 = 126U;
	uint32_t x6263 = 59590441U;
	volatile uint32_t t97 = 11U;

	t97 = (x6261%((x6262|x6263)>>x6264));

	if (t97 != 4449423U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6349 = UINT64_MAX;
	uint64_t x6350 = 173979LLU;
	int32_t x6351 = INT32_MIN;
	static uint32_t x6352 = 0U;
	volatile uint64_t t98 = 7645LLU;

	t98 = (x6349%((x6350|x6351)>>x6352));

	if (t98 != 2147309668LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6433 = UINT8_MAX;
	int16_t x6434 = 7;
	volatile int8_t x6435 = 5;
	static uint16_t x6436 = 1U;
	static int32_t t99 = -44777;

	t99 = (x6433%((x6434|x6435)>>x6436));

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

