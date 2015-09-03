#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x17 = 16U;
uint8_t x19 = 0U;
int8_t x271 = 8;
static int8_t x405 = INT8_MIN;
volatile int16_t x407 = 7;
int32_t t6 = 108088;
static uint8_t x450 = UINT8_MAX;
int8_t x451 = 1;
static int32_t t7 = 26488;
static int32_t x464 = INT32_MIN;
volatile int32_t t8 = 388464109;
uint16_t x633 = UINT16_MAX;
uint8_t x636 = 79U;
int64_t x710 = 2LL;
static int8_t x712 = 4;
int32_t x840 = -25763;
volatile uint32_t t12 = UINT32_MAX;
volatile uint16_t x926 = 38U;
volatile uint64_t x990 = UINT64_MAX;
int8_t x991 = 7;
int64_t x1098 = INT64_MAX;
volatile int16_t x1333 = INT16_MAX;
uint16_t x1335 = 17U;
volatile uint8_t x1492 = 3U;
int32_t t22 = 19945834;
uint16_t x1582 = 6U;
volatile int64_t t27 = INT64_MIN;
uint16_t x1714 = UINT16_MAX;
int32_t x1716 = 190933369;
int8_t x1768 = INT8_MIN;
int8_t x1957 = -1;
volatile int8_t x2063 = 7;
int32_t x2203 = 1;
volatile int32_t t32 = 101789;
static int32_t x2352 = INT32_MIN;
volatile uint64_t t34 = 1465133301820477LLU;
int32_t x2369 = INT32_MIN;
static volatile int16_t x2372 = INT16_MAX;
uint64_t x2569 = 524755447211094LLU;
static volatile int32_t x2585 = -13;
uint8_t x2588 = UINT8_MAX;
static int32_t x2647 = 3;
uint8_t x2828 = 0U;
static volatile int64_t t44 = -49556139178177505LL;
int16_t x2967 = 1;
uint8_t x2968 = 6U;
volatile int32_t t45 = -11;
uint8_t x2972 = 48U;
static uint32_t x3048 = UINT32_MAX;
int32_t t47 = -17132;
uint64_t x3078 = 33790883279029LLU;
uint8_t x3375 = 3U;
static int8_t x3388 = -45;
int8_t x3400 = INT8_MAX;
int64_t t55 = 149694236638023LL;
uint16_t x3443 = 18U;
int32_t t58 = -872918;
int32_t x3705 = 0;
uint8_t x3842 = 3U;
uint64_t t62 = 1718747963555LLU;
volatile uint8_t x3946 = 110U;
int8_t x3947 = 15;
static uint64_t x4050 = 5288412873LLU;
volatile uint64_t x4141 = 3600666495LLU;
uint8_t x4144 = 15U;
static volatile uint16_t x4278 = 108U;
uint16_t x4279 = 18U;
int32_t x4397 = INT32_MIN;
int32_t t68 = INT32_MIN;
static volatile int32_t x4457 = -1;
int8_t x4545 = -1;
int32_t x4661 = INT32_MIN;
uint8_t x4663 = 3U;
static int16_t x4729 = INT16_MIN;
volatile uint8_t x4809 = 2U;
uint8_t x4810 = 0U;
int16_t x4812 = 0;
volatile int64_t t75 = -110602919808459263LL;
int32_t t76 = -2291045;
int32_t t79 = -924;
volatile int32_t x5270 = INT32_MAX;
uint8_t x5271 = 1U;
static int16_t x5317 = 183;
static uint32_t x5321 = 6U;
static uint8_t x5326 = 3U;
static int16_t x5362 = INT16_MAX;
int8_t x5483 = 9;
uint16_t x5484 = 319U;
static int32_t t87 = INT32_MIN;
volatile int8_t x5515 = 1;
volatile uint64_t x5568 = UINT64_MAX;
static int16_t x5689 = -7;
int16_t x5729 = -1;
static int8_t x5731 = 0;
uint64_t x5856 = UINT64_MAX;
volatile int64_t t94 = -831086088806827435LL;
int64_t x5894 = 20298236LL;
uint8_t x6098 = 2U;


void f0(void) {
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x20 = INT32_MIN;
	int32_t t0 = 881938;

	t0 = (x17+((x18>>x19)<x20));

	if (t0 != 16) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = 3574344383LL;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 1U;
	uint8_t x24 = 6U;
	int64_t t1 = -7046LL;

	t1 = (x21+((x22>>x23)<x24));

	if (t1 != 3574344383LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x41 = -5;
	uint32_t x42 = 32353418U;
	int32_t x43 = 0;
	static int32_t x44 = -456;
	static volatile int32_t t2 = -232;

	t2 = (x41+((x42>>x43)<x44));

	if (t2 != -4) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x205 = -138729LL;
	uint32_t x206 = 1490811U;
	uint8_t x207 = 1U;
	static int16_t x208 = 863;
	int64_t t3 = -69461680864LL;

	t3 = (x205+((x206>>x207)<x208));

	if (t3 != -138729LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x245 = -1LL;
	int32_t x246 = 115;
	uint16_t x247 = 0U;
	uint32_t x248 = 360912U;
	volatile int64_t t4 = -50044LL;

	t4 = (x245+((x246>>x247)<x248));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x269 = INT16_MIN;
	static uint64_t x270 = 230174712716554LLU;
	int32_t x272 = -5701534;
	int32_t t5 = 3;

	t5 = (x269+((x270>>x271)<x272));

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x406 = 360422294290808LL;
	static volatile uint8_t x408 = UINT8_MAX;

	t6 = (x405+((x406>>x407)<x408));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x449 = -1;
	static int8_t x452 = -1;

	t7 = (x449+((x450>>x451)<x452));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x461 = -2;
	uint32_t x462 = UINT32_MAX;
	volatile uint32_t x463 = 24U;

	t8 = (x461+((x462>>x463)<x464));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x634 = INT16_MAX;
	int8_t x635 = 1;
	int32_t t9 = 30405;

	t9 = (x633+((x634>>x635)<x636));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x709 = UINT8_MAX;
	static uint8_t x711 = 16U;
	volatile int32_t t10 = 1;

	t10 = (x709+((x710>>x711)<x712));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x785 = INT64_MIN;
	int32_t x786 = INT32_MAX;
	static int8_t x787 = 0;
	int8_t x788 = 1;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x785+((x786>>x787)<x788));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x837 = UINT32_MAX;
	volatile int64_t x838 = INT64_MAX;
	volatile int32_t x839 = 20;

	t12 = (x837+((x838>>x839)<x840));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x925 = UINT16_MAX;
	volatile int32_t x927 = 0;
	uint64_t x928 = 20159279806LLU;
	volatile int32_t t13 = -34;

	t13 = (x925+((x926>>x927)<x928));

	if (t13 != 65536) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x989 = 14510024193LLU;
	int32_t x992 = INT32_MIN;
	uint64_t t14 = 2626392LLU;

	t14 = (x989+((x990>>x991)<x992));

	if (t14 != 14510024194LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1073 = INT32_MIN;
	volatile uint32_t x1074 = UINT32_MAX;
	static volatile int32_t x1075 = 3;
	static uint64_t x1076 = 121966724750054891LLU;
	volatile int32_t t15 = -230;

	t15 = (x1073+((x1074>>x1075)<x1076));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1097 = 16;
	uint8_t x1099 = 1U;
	int8_t x1100 = -1;
	static volatile int32_t t16 = 620;

	t16 = (x1097+((x1098>>x1099)<x1100));

	if (t16 != 16) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1101 = 2U;
	uint64_t x1102 = 297244444410LLU;
	int8_t x1103 = 9;
	int8_t x1104 = -36;
	volatile int32_t t17 = 7616;

	t17 = (x1101+((x1102>>x1103)<x1104));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x1334 = 2081U;
	volatile int16_t x1336 = INT16_MAX;
	volatile int32_t t18 = 126;

	t18 = (x1333+((x1334>>x1335)<x1336));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1357 = INT16_MAX;
	uint8_t x1358 = 0U;
	int8_t x1359 = 1;
	int16_t x1360 = -1;
	volatile int32_t t19 = -3;

	t19 = (x1357+((x1358>>x1359)<x1360));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1389 = -1;
	uint64_t x1390 = 2044590LLU;
	static int16_t x1391 = 23;
	static int16_t x1392 = INT16_MIN;
	static volatile int32_t t20 = -616093;

	t20 = (x1389+((x1390>>x1391)<x1392));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1469 = -1;
	static volatile uint8_t x1470 = 67U;
	int8_t x1471 = 24;
	volatile int64_t x1472 = INT64_MIN;
	volatile int32_t t21 = 62770;

	t21 = (x1469+((x1470>>x1471)<x1472));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1489 = -119;
	uint64_t x1490 = 28730LLU;
	int8_t x1491 = 0;

	t22 = (x1489+((x1490>>x1491)<x1492));

	if (t22 != -119) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1565 = INT16_MAX;
	int16_t x1566 = 125;
	uint8_t x1567 = 9U;
	static int32_t x1568 = INT32_MIN;
	int32_t t23 = -493352;

	t23 = (x1565+((x1566>>x1567)<x1568));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1581 = -697LL;
	uint64_t x1583 = 7LLU;
	int16_t x1584 = -1;
	int64_t t24 = -1074849069350598565LL;

	t24 = (x1581+((x1582>>x1583)<x1584));

	if (t24 != -697LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1621 = 15967555977727513LLU;
	static int16_t x1622 = INT16_MAX;
	uint16_t x1623 = 0U;
	int32_t x1624 = 614809;
	static uint64_t t25 = 590820972228108788LLU;

	t25 = (x1621+((x1622>>x1623)<x1624));

	if (t25 != 15967555977727514LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x1649 = UINT16_MAX;
	int64_t x1650 = 0LL;
	static uint64_t x1651 = 51LLU;
	int16_t x1652 = 3505;
	static int32_t t26 = 116435;

	t26 = (x1649+((x1650>>x1651)<x1652));

	if (t26 != 65536) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1665 = INT64_MIN;
	static uint8_t x1666 = UINT8_MAX;
	uint16_t x1667 = 0U;
	static int8_t x1668 = 44;

	t27 = (x1665+((x1666>>x1667)<x1668));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1713 = 126467841720437LLU;
	uint8_t x1715 = 3U;
	volatile uint64_t t28 = 825397368009LLU;

	t28 = (x1713+((x1714>>x1715)<x1716));

	if (t28 != 126467841720438LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1765 = 0;
	uint32_t x1766 = 223260U;
	static int16_t x1767 = 0;
	static volatile int32_t t29 = 1;

	t29 = (x1765+((x1766>>x1767)<x1768));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1958 = UINT8_MAX;
	uint8_t x1959 = 1U;
	uint64_t x1960 = UINT64_MAX;
	static volatile int32_t t30 = -206;

	t30 = (x1957+((x1958>>x1959)<x1960));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2061 = 11833975;
	int8_t x2062 = 11;
	uint64_t x2064 = 202923LLU;
	volatile int32_t t31 = -80;

	t31 = (x2061+((x2062>>x2063)<x2064));

	if (t31 != 11833976) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2201 = INT16_MIN;
	volatile uint8_t x2202 = UINT8_MAX;
	int32_t x2204 = -117300;

	t32 = (x2201+((x2202>>x2203)<x2204));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2349 = INT16_MIN;
	int8_t x2350 = 3;
	volatile uint32_t x2351 = 4U;
	static volatile int32_t t33 = 31890955;

	t33 = (x2349+((x2350>>x2351)<x2352));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2357 = 23887476730569LLU;
	int32_t x2358 = 8360347;
	uint8_t x2359 = 1U;
	int64_t x2360 = -1LL;

	t34 = (x2357+((x2358>>x2359)<x2360));

	if (t34 != 23887476730569LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2370 = 1U;
	uint16_t x2371 = 2U;
	int32_t t35 = 63;

	t35 = (x2369+((x2370>>x2371)<x2372));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2377 = -1;
	static uint32_t x2378 = UINT32_MAX;
	volatile uint16_t x2379 = 0U;
	uint64_t x2380 = 382302802688LLU;
	int32_t t36 = 31521809;

	t36 = (x2377+((x2378>>x2379)<x2380));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2570 = 46760LL;
	volatile int8_t x2571 = 27;
	static volatile int64_t x2572 = INT64_MAX;
	volatile uint64_t t37 = 31281853949LLU;

	t37 = (x2569+((x2570>>x2571)<x2572));

	if (t37 != 524755447211095LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2586 = 1LL;
	static volatile uint8_t x2587 = 5U;
	static int32_t t38 = -1051025074;

	t38 = (x2585+((x2586>>x2587)<x2588));

	if (t38 != -12) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2645 = 13934;
	uint16_t x2646 = UINT16_MAX;
	static int32_t x2648 = -2;
	volatile int32_t t39 = -13;

	t39 = (x2645+((x2646>>x2647)<x2648));

	if (t39 != 13934) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2749 = 101U;
	uint8_t x2750 = 1U;
	uint32_t x2751 = 0U;
	int32_t x2752 = -47;
	int32_t t40 = 1;

	t40 = (x2749+((x2750>>x2751)<x2752));

	if (t40 != 101) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2801 = INT32_MIN;
	volatile uint32_t x2802 = UINT32_MAX;
	volatile uint32_t x2803 = 4U;
	volatile int16_t x2804 = INT16_MIN;
	int32_t t41 = 58289325;

	t41 = (x2801+((x2802>>x2803)<x2804));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2809 = 2062U;
	uint16_t x2810 = 0U;
	int32_t x2811 = 4;
	uint64_t x2812 = 52821514038432380LLU;
	static int32_t t42 = 11006;

	t42 = (x2809+((x2810>>x2811)<x2812));

	if (t42 != 2063) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2825 = 479161;
	int32_t x2826 = 88825159;
	static uint8_t x2827 = 8U;
	volatile int32_t t43 = 4;

	t43 = (x2825+((x2826>>x2827)<x2828));

	if (t43 != 479161) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2909 = -1LL;
	int64_t x2910 = 2107655584079333376LL;
	volatile uint8_t x2911 = 23U;
	int32_t x2912 = INT32_MIN;

	t44 = (x2909+((x2910>>x2911)<x2912));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2965 = INT8_MIN;
	int32_t x2966 = 814821;

	t45 = (x2965+((x2966>>x2967)<x2968));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2969 = 77;
	static uint32_t x2970 = 6838U;
	int32_t x2971 = 7;
	int32_t t46 = -1292;

	t46 = (x2969+((x2970>>x2971)<x2972));

	if (t46 != 77) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3045 = -1;
	volatile uint64_t x3046 = UINT64_MAX;
	uint16_t x3047 = 42U;

	t47 = (x3045+((x3046>>x3047)<x3048));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3073 = INT16_MIN;
	uint16_t x3074 = 49U;
	int8_t x3075 = 1;
	int16_t x3076 = 2;
	int32_t t48 = 602683;

	t48 = (x3073+((x3074>>x3075)<x3076));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3077 = UINT32_MAX;
	uint8_t x3079 = 0U;
	int8_t x3080 = INT8_MIN;
	static uint32_t t49 = 21U;

	t49 = (x3077+((x3078>>x3079)<x3080));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x3261 = UINT8_MAX;
	uint32_t x3262 = UINT32_MAX;
	static int8_t x3263 = 1;
	int8_t x3264 = INT8_MIN;
	int32_t t50 = -91;

	t50 = (x3261+((x3262>>x3263)<x3264));

	if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x3373 = -1279;
	volatile int64_t x3374 = 5518635237977LL;
	int32_t x3376 = -1;
	volatile int32_t t51 = 2;

	t51 = (x3373+((x3374>>x3375)<x3376));

	if (t51 != -1279) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3385 = INT32_MIN;
	uint32_t x3386 = 1270461U;
	int16_t x3387 = 1;
	int32_t t52 = 136798901;

	t52 = (x3385+((x3386>>x3387)<x3388));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3397 = 7;
	volatile uint16_t x3398 = 4U;
	uint8_t x3399 = 2U;
	int32_t t53 = -14;

	t53 = (x3397+((x3398>>x3399)<x3400));

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3417 = 1LLU;
	int32_t x3418 = 138901726;
	static volatile uint16_t x3419 = 1U;
	static int32_t x3420 = INT32_MAX;
	uint64_t t54 = 127LLU;

	t54 = (x3417+((x3418>>x3419)<x3420));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3437 = INT64_MIN;
	uint16_t x3438 = 2630U;
	volatile int8_t x3439 = 0;
	uint16_t x3440 = UINT16_MAX;

	t55 = (x3437+((x3438>>x3439)<x3440));

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3441 = 63;
	volatile uint32_t x3442 = 342191088U;
	int64_t x3444 = INT64_MAX;
	volatile int32_t t56 = -142;

	t56 = (x3441+((x3442>>x3443)<x3444));

	if (t56 != 64) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x3509 = 15866U;
	uint16_t x3510 = 271U;
	uint16_t x3511 = 29U;
	static uint16_t x3512 = 254U;
	volatile uint32_t t57 = 3035U;

	t57 = (x3509+((x3510>>x3511)<x3512));

	if (t57 != 15867U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3517 = UINT8_MAX;
	volatile uint32_t x3518 = 918750367U;
	static int8_t x3519 = 0;
	static int64_t x3520 = -1LL;

	t58 = (x3517+((x3518>>x3519)<x3520));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x3653 = 6U;
	volatile uint8_t x3654 = UINT8_MAX;
	static int32_t x3655 = 30;
	volatile uint8_t x3656 = 0U;
	volatile int32_t t59 = -7811282;

	t59 = (x3653+((x3654>>x3655)<x3656));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3706 = 115U;
	int8_t x3707 = 5;
	static int64_t x3708 = INT64_MIN;
	int32_t t60 = 32753524;

	t60 = (x3705+((x3706>>x3707)<x3708));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3709 = -1LL;
	volatile int32_t x3710 = INT32_MAX;
	uint32_t x3711 = 0U;
	int16_t x3712 = 8453;
	static volatile int64_t t61 = -515704492635446436LL;

	t61 = (x3709+((x3710>>x3711)<x3712));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3841 = 449904111884LLU;
	int32_t x3843 = 5;
	static int64_t x3844 = -1LL;

	t62 = (x3841+((x3842>>x3843)<x3844));

	if (t62 != 449904111884LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3945 = UINT16_MAX;
	volatile int16_t x3948 = INT16_MAX;
	static int32_t t63 = 1;

	t63 = (x3945+((x3946>>x3947)<x3948));

	if (t63 != 65536) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4049 = INT8_MAX;
	uint16_t x4051 = 5U;
	uint32_t x4052 = 23451732U;
	static volatile int32_t t64 = -74331;

	t64 = (x4049+((x4050>>x4051)<x4052));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4093 = UINT32_MAX;
	uint8_t x4094 = 1U;
	volatile uint16_t x4095 = 25U;
	uint8_t x4096 = 0U;
	uint32_t t65 = UINT32_MAX;

	t65 = (x4093+((x4094>>x4095)<x4096));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4142 = 3;
	uint8_t x4143 = 3U;
	uint64_t t66 = 2243573110468LLU;

	t66 = (x4141+((x4142>>x4143)<x4144));

	if (t66 != 3600666496LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4277 = UINT16_MAX;
	int8_t x4280 = -16;
	static int32_t t67 = 52834;

	t67 = (x4277+((x4278>>x4279)<x4280));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4398 = 92454414;
	uint16_t x4399 = 1U;
	static int8_t x4400 = INT8_MAX;

	t68 = (x4397+((x4398>>x4399)<x4400));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4458 = UINT64_MAX;
	uint8_t x4459 = 62U;
	uint16_t x4460 = 36U;
	volatile int32_t t69 = 0;

	t69 = (x4457+((x4458>>x4459)<x4460));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4473 = 0;
	uint16_t x4474 = 7769U;
	uint16_t x4475 = 8U;
	int16_t x4476 = -1;
	int32_t t70 = -40765094;

	t70 = (x4473+((x4474>>x4475)<x4476));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x4546 = 170398;
	static int8_t x4547 = 17;
	volatile uint32_t x4548 = 1085370545U;
	int32_t t71 = -3;

	t71 = (x4545+((x4546>>x4547)<x4548));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4662 = INT16_MAX;
	uint16_t x4664 = UINT16_MAX;
	volatile int32_t t72 = -1632;

	t72 = (x4661+((x4662>>x4663)<x4664));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4730 = 8435477805089317LLU;
	volatile int8_t x4731 = 0;
	int8_t x4732 = -13;
	int32_t t73 = -1438;

	t73 = (x4729+((x4730>>x4731)<x4732));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4811 = 13LLU;
	static int32_t t74 = 0;

	t74 = (x4809+((x4810>>x4811)<x4812));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4861 = -22144997803642864LL;
	volatile uint32_t x4862 = 1U;
	int8_t x4863 = 2;
	int32_t x4864 = -1;

	t75 = (x4861+((x4862>>x4863)<x4864));

	if (t75 != -22144997803642863LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4933 = 3U;
	int8_t x4934 = 5;
	volatile uint16_t x4935 = 3U;
	int32_t x4936 = 5482;

	t76 = (x4933+((x4934>>x4935)<x4936));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4997 = -1;
	int8_t x4998 = INT8_MAX;
	static int8_t x4999 = 14;
	uint8_t x5000 = 1U;
	int32_t t77 = 0;

	t77 = (x4997+((x4998>>x4999)<x5000));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5133 = -1;
	uint16_t x5134 = 8U;
	uint64_t x5135 = 0LLU;
	int64_t x5136 = -177795723LL;
	volatile int32_t t78 = 298970288;

	t78 = (x5133+((x5134>>x5135)<x5136));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5201 = -3893;
	static uint64_t x5202 = UINT64_MAX;
	static uint8_t x5203 = 13U;
	int16_t x5204 = 0;

	t79 = (x5201+((x5202>>x5203)<x5204));

	if (t79 != -3893) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5269 = 64590328LLU;
	int32_t x5272 = INT32_MIN;
	volatile uint64_t t80 = 14524LLU;

	t80 = (x5269+((x5270>>x5271)<x5272));

	if (t80 != 64590328LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x5318 = 576903095535505327LLU;
	int64_t x5319 = 1LL;
	static int8_t x5320 = INT8_MIN;
	int32_t t81 = -1018;

	t81 = (x5317+((x5318>>x5319)<x5320));

	if (t81 != 184) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5322 = 8688518LLU;
	uint8_t x5323 = 24U;
	static volatile uint64_t x5324 = UINT64_MAX;
	volatile uint32_t t82 = 57889127U;

	t82 = (x5321+((x5322>>x5323)<x5324));

	if (t82 != 7U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5325 = 431690286032905734LLU;
	int32_t x5327 = 3;
	static uint64_t x5328 = 453282255757658LLU;
	static volatile uint64_t t83 = 488786243023447255LLU;

	t83 = (x5325+((x5326>>x5327)<x5328));

	if (t83 != 431690286032905735LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5345 = 344750589U;
	volatile uint16_t x5346 = 21U;
	int8_t x5347 = 3;
	volatile int8_t x5348 = INT8_MIN;
	static volatile uint32_t t84 = 83971224U;

	t84 = (x5345+((x5346>>x5347)<x5348));

	if (t84 != 344750589U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5361 = INT32_MIN;
	volatile int32_t x5363 = 6;
	uint64_t x5364 = 479825LLU;
	volatile int32_t t85 = 1943180;

	t85 = (x5361+((x5362>>x5363)<x5364));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5437 = INT64_MAX;
	int64_t x5438 = 98517LL;
	volatile uint64_t x5439 = 3LLU;
	int16_t x5440 = INT16_MIN;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x5437+((x5438>>x5439)<x5440));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x5481 = INT32_MIN;
	uint64_t x5482 = 197152179LLU;

	t87 = (x5481+((x5482>>x5483)<x5484));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5513 = 49U;
	uint8_t x5514 = 2U;
	uint8_t x5516 = 21U;
	int32_t t88 = -25337163;

	t88 = (x5513+((x5514>>x5515)<x5516));

	if (t88 != 50) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5565 = INT8_MIN;
	uint32_t x5566 = UINT32_MAX;
	volatile uint8_t x5567 = 1U;
	static int32_t t89 = -7;

	t89 = (x5565+((x5566>>x5567)<x5568));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5690 = 58U;
	volatile uint8_t x5691 = 1U;
	int16_t x5692 = 1149;
	static volatile int32_t t90 = -2;

	t90 = (x5689+((x5690>>x5691)<x5692));

	if (t90 != -6) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5730 = INT8_MAX;
	static int32_t x5732 = INT32_MIN;
	static volatile int32_t t91 = 1938030;

	t91 = (x5729+((x5730>>x5731)<x5732));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5737 = UINT64_MAX;
	int32_t x5738 = 221711367;
	int8_t x5739 = 3;
	int64_t x5740 = 979282LL;
	uint64_t t92 = UINT64_MAX;

	t92 = (x5737+((x5738>>x5739)<x5740));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x5813 = -1;
	uint8_t x5814 = 1U;
	uint8_t x5815 = 28U;
	int16_t x5816 = INT16_MIN;
	int32_t t93 = 2411;

	t93 = (x5813+((x5814>>x5815)<x5816));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5853 = 293LL;
	volatile int64_t x5854 = 13384446824667LL;
	volatile int8_t x5855 = 1;

	t94 = (x5853+((x5854>>x5855)<x5856));

	if (t94 != 294LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x5893 = -4;
	uint8_t x5895 = 0U;
	int16_t x5896 = INT16_MIN;
	int32_t t95 = 33402974;

	t95 = (x5893+((x5894>>x5895)<x5896));

	if (t95 != -4) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x6049 = INT64_MAX;
	uint16_t x6050 = 3711U;
	volatile int16_t x6051 = 1;
	int16_t x6052 = -18;
	static volatile int64_t t96 = INT64_MAX;

	t96 = (x6049+((x6050>>x6051)<x6052));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x6065 = INT32_MIN;
	uint32_t x6066 = 7U;
	uint32_t x6067 = 6U;
	uint64_t x6068 = 15722868266411195LLU;
	volatile int32_t t97 = -31442;

	t97 = (x6065+((x6066>>x6067)<x6068));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6073 = 1U;
	volatile uint64_t x6074 = 543941328816144897LLU;
	uint8_t x6075 = 1U;
	int32_t x6076 = -1;
	int32_t t98 = 0;

	t98 = (x6073+((x6074>>x6075)<x6076));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6097 = 1;
	volatile uint8_t x6099 = 11U;
	int64_t x6100 = -1LL;
	static int32_t t99 = -926123;

	t99 = (x6097+((x6098>>x6099)<x6100));

	if (t99 != 1) { NG(); } else { ; }
	
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

