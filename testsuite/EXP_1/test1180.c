#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 388565U;
static uint8_t x6 = 1U;
int32_t t1 = -3102;
int16_t x114 = 0;
volatile int8_t x116 = INT8_MIN;
volatile int8_t x170 = 9;
int16_t x172 = INT16_MAX;
static int64_t x371 = INT64_MAX;
int32_t t9 = 972;
static volatile int8_t x526 = 17;
static uint32_t x527 = UINT32_MAX;
uint8_t x605 = UINT8_MAX;
volatile int32_t t12 = -51449;
uint64_t x613 = 2593LLU;
int16_t x616 = INT16_MAX;
int32_t t13 = -41315;
uint32_t x657 = 58855U;
int8_t x658 = 16;
volatile int32_t t16 = 7;
static volatile int32_t t17 = -12647;
uint16_t x754 = 3U;
static int32_t x755 = INT32_MAX;
static int32_t t19 = 9700640;
static uint32_t x941 = UINT32_MAX;
int8_t x942 = 7;
volatile uint64_t x979 = UINT64_MAX;
int64_t x1072 = -155964949106677LL;
uint16_t x1177 = 0U;
volatile int32_t x1248 = INT32_MIN;
volatile int32_t t26 = 81;
volatile int16_t x1574 = 1;
int8_t x1575 = -4;
volatile int32_t t27 = -2130;
static int32_t x1707 = INT32_MIN;
uint16_t x1776 = 1U;
uint64_t x1784 = 213339882764522736LLU;
volatile uint32_t x1818 = 1U;
volatile int32_t t34 = 7381162;
int32_t x1933 = INT32_MAX;
uint8_t x1934 = 10U;
int16_t x1935 = INT16_MAX;
int32_t t35 = -593232127;
int16_t x2211 = 28;
static uint8_t x2258 = 4U;
int8_t x2312 = INT8_MAX;
uint16_t x2350 = 1U;
static int64_t x2369 = INT64_MAX;
volatile int32_t t44 = 79072;
int64_t x2419 = INT64_MAX;
static uint8_t x2434 = 1U;
static uint8_t x2446 = 2U;
uint64_t x2448 = 1105545211LLU;
int16_t x2516 = -1;
uint8_t x2517 = 120U;
volatile uint64_t x2673 = 48399510LLU;
static int8_t x2676 = INT8_MIN;
int32_t x2730 = 4;
int8_t x2732 = -49;
volatile int32_t t53 = 847;
int32_t x2767 = -1;
int16_t x2837 = 8782;
static volatile uint8_t x2886 = 16U;
volatile uint8_t x2887 = 7U;
uint8_t x2931 = UINT8_MAX;
int32_t x2932 = INT32_MIN;
int32_t t62 = -8;
int32_t t63 = 4;
uint8_t x2950 = 16U;
int16_t x3053 = INT16_MAX;
volatile int16_t x3081 = 14718;
int16_t x3108 = INT16_MIN;
uint8_t x3129 = 3U;
volatile int32_t t68 = -10565;
uint8_t x3201 = UINT8_MAX;
int16_t x3202 = 1;
static int64_t x3204 = -1LL;
uint64_t x3507 = UINT64_MAX;
uint8_t x3706 = 15U;
uint16_t x3766 = 2U;
static uint64_t x3773 = UINT64_MAX;
static volatile int32_t t81 = -4597;
volatile int8_t x4011 = INT8_MIN;
volatile int32_t t82 = 184606187;
volatile uint8_t x4050 = 7U;
int32_t t83 = 7338483;
uint8_t x4070 = 37U;
uint32_t x4214 = 15U;
uint8_t x4215 = 11U;
uint32_t x4274 = 0U;
int32_t x4276 = INT32_MIN;
int8_t x4366 = 21;
int16_t x4393 = 7;
static int64_t x4523 = INT64_MAX;
int32_t t89 = 27428;
volatile int32_t x4556 = -1;
uint8_t x4675 = 4U;
uint8_t x4768 = 1U;
volatile int16_t x4891 = -1;
uint32_t x4912 = 3U;
uint16_t x4967 = 647U;
uint32_t x5193 = 2U;
volatile int16_t x5295 = INT16_MIN;
uint32_t x5296 = UINT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint32_t x2 = 29U;
	uint64_t x3 = 55172LLU;
	int32_t t0 = 7546380;

	t0 = (((x1>>x2)^x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2578362U;
	static uint8_t x7 = 27U;
	uint32_t x8 = UINT32_MAX;

	t1 = (((x5>>x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint16_t x10 = 0U;
	int16_t x11 = -1;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -1275;

	t2 = (((x9>>x10)^x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x105 = UINT8_MAX;
	volatile int16_t x106 = 0;
	static volatile int64_t x107 = -3940175915894347LL;
	int32_t x108 = INT32_MAX;
	int32_t t3 = 178278456;

	t3 = (((x105>>x106)^x107)<=x108);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x113 = 1485643;
	volatile int8_t x115 = -1;
	volatile int32_t t4 = -8230077;

	t4 = (((x113>>x114)^x115)<=x116);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile int8_t x171 = 0;
	static volatile int32_t t5 = -456867;

	t5 = (((x169>>x170)^x171)<=x172);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x313 = 11332035LLU;
	static volatile uint16_t x314 = 4U;
	uint16_t x315 = 248U;
	int16_t x316 = INT16_MIN;
	int32_t t6 = -421459;

	t6 = (((x313>>x314)^x315)<=x316);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x317 = 108687888;
	uint8_t x318 = 0U;
	int32_t x319 = -14;
	int16_t x320 = -1;
	volatile int32_t t7 = 5743;

	t7 = (((x317>>x318)^x319)<=x320);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x369 = 17;
	uint16_t x370 = 8U;
	int32_t x372 = INT32_MIN;
	int32_t t8 = 313543486;

	t8 = (((x369>>x370)^x371)<=x372);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x465 = 0LLU;
	static int8_t x466 = 1;
	static uint8_t x467 = 0U;
	int32_t x468 = -14;

	t9 = (((x465>>x466)^x467)<=x468);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x525 = 40U;
	static uint8_t x528 = 123U;
	int32_t t10 = 155;

	t10 = (((x525>>x526)^x527)<=x528);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x549 = 45;
	int16_t x550 = 4;
	static int16_t x551 = -1;
	static int8_t x552 = -1;
	int32_t t11 = 3;

	t11 = (((x549>>x550)^x551)<=x552);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x606 = 10U;
	volatile int32_t x607 = INT32_MAX;
	int64_t x608 = INT64_MIN;

	t12 = (((x605>>x606)^x607)<=x608);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x614 = 20U;
	int32_t x615 = INT32_MAX;

	t13 = (((x613>>x614)^x615)<=x616);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x625 = 10U;
	int8_t x626 = 3;
	int8_t x627 = INT8_MIN;
	uint32_t x628 = 18138020U;
	int32_t t14 = 196;

	t14 = (((x625>>x626)^x627)<=x628);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x659 = UINT8_MAX;
	volatile int32_t x660 = -1;
	volatile int32_t t15 = 370844;

	t15 = (((x657>>x658)^x659)<=x660);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x733 = INT32_MAX;
	volatile uint16_t x734 = 0U;
	uint64_t x735 = UINT64_MAX;
	int64_t x736 = INT64_MIN;

	t16 = (((x733>>x734)^x735)<=x736);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x745 = 2;
	static int16_t x746 = 2;
	static int64_t x747 = INT64_MAX;
	uint64_t x748 = 1604682LLU;

	t17 = (((x745>>x746)^x747)<=x748);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x753 = 7057581351048LLU;
	int64_t x756 = INT64_MIN;
	int32_t t18 = 2852110;

	t18 = (((x753>>x754)^x755)<=x756);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x821 = 29095U;
	uint8_t x822 = 13U;
	int64_t x823 = INT64_MIN;
	int64_t x824 = INT64_MAX;

	t19 = (((x821>>x822)^x823)<=x824);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x841 = 35U;
	static int8_t x842 = 30;
	int8_t x843 = INT8_MIN;
	int64_t x844 = INT64_MIN;
	static volatile int32_t t20 = 61720960;

	t20 = (((x841>>x842)^x843)<=x844);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x943 = INT16_MAX;
	uint64_t x944 = 4015288123482299LLU;
	volatile int32_t t21 = -520442523;

	t21 = (((x941>>x942)^x943)<=x944);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x977 = UINT8_MAX;
	uint16_t x978 = 5U;
	static int8_t x980 = -1;
	int32_t t22 = -22;

	t22 = (((x977>>x978)^x979)<=x980);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1069 = INT8_MAX;
	int8_t x1070 = 1;
	volatile int16_t x1071 = -1;
	int32_t t23 = -84654;

	t23 = (((x1069>>x1070)^x1071)<=x1072);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1178 = 3;
	static int32_t x1179 = INT32_MAX;
	int32_t x1180 = INT32_MIN;
	static int32_t t24 = 8121;

	t24 = (((x1177>>x1178)^x1179)<=x1180);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1245 = 10LLU;
	uint16_t x1246 = 11U;
	volatile int32_t x1247 = INT32_MIN;
	volatile int32_t t25 = 4;

	t25 = (((x1245>>x1246)^x1247)<=x1248);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1469 = UINT64_MAX;
	uint32_t x1470 = 0U;
	int16_t x1471 = INT16_MIN;
	int16_t x1472 = -1;

	t26 = (((x1469>>x1470)^x1471)<=x1472);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1573 = UINT32_MAX;
	volatile int64_t x1576 = INT64_MIN;

	t27 = (((x1573>>x1574)^x1575)<=x1576);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1697 = 7901U;
	static uint32_t x1698 = 31U;
	static int16_t x1699 = INT16_MIN;
	uint8_t x1700 = UINT8_MAX;
	int32_t t28 = 1;

	t28 = (((x1697>>x1698)^x1699)<=x1700);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1705 = INT8_MAX;
	static int8_t x1706 = 1;
	volatile int64_t x1708 = 23520496LL;
	static volatile int32_t t29 = 484947;

	t29 = (((x1705>>x1706)^x1707)<=x1708);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1773 = 42U;
	uint16_t x1774 = 2U;
	uint32_t x1775 = 434U;
	volatile int32_t t30 = 2240852;

	t30 = (((x1773>>x1774)^x1775)<=x1776);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1781 = 50U;
	int8_t x1782 = 0;
	int64_t x1783 = INT64_MIN;
	int32_t t31 = 95728124;

	t31 = (((x1781>>x1782)^x1783)<=x1784);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1817 = 17708U;
	volatile uint32_t x1819 = UINT32_MAX;
	static int64_t x1820 = -1LL;
	volatile int32_t t32 = -247;

	t32 = (((x1817>>x1818)^x1819)<=x1820);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1829 = 1393972U;
	uint8_t x1830 = 1U;
	static uint32_t x1831 = UINT32_MAX;
	int64_t x1832 = INT64_MIN;
	int32_t t33 = -1341;

	t33 = (((x1829>>x1830)^x1831)<=x1832);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1841 = 482351587506LLU;
	static int32_t x1842 = 0;
	volatile int64_t x1843 = INT64_MIN;
	int16_t x1844 = INT16_MIN;

	t34 = (((x1841>>x1842)^x1843)<=x1844);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1936 = INT16_MIN;

	t35 = (((x1933>>x1934)^x1935)<=x1936);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1941 = INT32_MAX;
	uint16_t x1942 = 4U;
	int16_t x1943 = 4213;
	uint32_t x1944 = 13U;
	int32_t t36 = 9585;

	t36 = (((x1941>>x1942)^x1943)<=x1944);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1973 = 0;
	static int16_t x1974 = 0;
	int64_t x1975 = INT64_MIN;
	static int32_t x1976 = INT32_MAX;
	volatile int32_t t37 = 682797055;

	t37 = (((x1973>>x1974)^x1975)<=x1976);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2073 = UINT64_MAX;
	uint8_t x2074 = 3U;
	uint8_t x2075 = UINT8_MAX;
	volatile int16_t x2076 = INT16_MAX;
	int32_t t38 = 0;

	t38 = (((x2073>>x2074)^x2075)<=x2076);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2209 = 6U;
	static volatile uint16_t x2210 = 15U;
	int32_t x2212 = -26920788;
	volatile int32_t t39 = 17;

	t39 = (((x2209>>x2210)^x2211)<=x2212);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2221 = 11;
	volatile int8_t x2222 = 11;
	volatile int32_t x2223 = -25;
	volatile int16_t x2224 = -473;
	static volatile int32_t t40 = -11;

	t40 = (((x2221>>x2222)^x2223)<=x2224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2257 = 4U;
	int32_t x2259 = -1;
	int8_t x2260 = INT8_MIN;
	int32_t t41 = 5;

	t41 = (((x2257>>x2258)^x2259)<=x2260);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2309 = 1U;
	int8_t x2310 = 1;
	volatile uint8_t x2311 = 11U;
	int32_t t42 = 744004943;

	t42 = (((x2309>>x2310)^x2311)<=x2312);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2349 = UINT32_MAX;
	int8_t x2351 = INT8_MIN;
	int32_t x2352 = -1;
	static volatile int32_t t43 = 7797277;

	t43 = (((x2349>>x2350)^x2351)<=x2352);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2370 = 18U;
	volatile int16_t x2371 = 1;
	int16_t x2372 = INT16_MIN;

	t44 = (((x2369>>x2370)^x2371)<=x2372);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2417 = INT8_MAX;
	uint8_t x2418 = 0U;
	volatile int64_t x2420 = -1LL;
	volatile int32_t t45 = 14064;

	t45 = (((x2417>>x2418)^x2419)<=x2420);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x2433 = UINT16_MAX;
	volatile int16_t x2435 = INT16_MIN;
	int16_t x2436 = INT16_MIN;
	volatile int32_t t46 = -3;

	t46 = (((x2433>>x2434)^x2435)<=x2436);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2445 = INT8_MAX;
	int8_t x2447 = 0;
	volatile int32_t t47 = 1851;

	t47 = (((x2445>>x2446)^x2447)<=x2448);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x2481 = 512348794U;
	int8_t x2482 = 1;
	uint8_t x2483 = 1U;
	static int32_t x2484 = -76;
	static volatile int32_t t48 = 1531;

	t48 = (((x2481>>x2482)^x2483)<=x2484);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2489 = INT64_MAX;
	int64_t x2490 = 4LL;
	uint8_t x2491 = UINT8_MAX;
	uint32_t x2492 = 1871892193U;
	volatile int32_t t49 = 2993;

	t49 = (((x2489>>x2490)^x2491)<=x2492);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2513 = 104755518LLU;
	int8_t x2514 = 5;
	volatile int64_t x2515 = INT64_MIN;
	static int32_t t50 = -33111;

	t50 = (((x2513>>x2514)^x2515)<=x2516);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2518 = 10U;
	uint8_t x2519 = UINT8_MAX;
	volatile int32_t x2520 = INT32_MIN;
	int32_t t51 = -76259303;

	t51 = (((x2517>>x2518)^x2519)<=x2520);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2674 = 6U;
	volatile int64_t x2675 = -1LL;
	volatile int32_t t52 = -539426517;

	t52 = (((x2673>>x2674)^x2675)<=x2676);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2729 = 4737U;
	volatile uint16_t x2731 = UINT16_MAX;

	t53 = (((x2729>>x2730)^x2731)<=x2732);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2741 = 214038U;
	uint8_t x2742 = 2U;
	int16_t x2743 = INT16_MAX;
	int64_t x2744 = -1LL;
	int32_t t54 = 104075241;

	t54 = (((x2741>>x2742)^x2743)<=x2744);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2761 = 44U;
	uint16_t x2762 = 6U;
	static int8_t x2763 = INT8_MIN;
	static volatile uint64_t x2764 = 13224677084281597LLU;
	static volatile int32_t t55 = 1375407;

	t55 = (((x2761>>x2762)^x2763)<=x2764);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2765 = 810596807286LLU;
	int8_t x2766 = 3;
	int64_t x2768 = INT64_MAX;
	volatile int32_t t56 = -1585068;

	t56 = (((x2765>>x2766)^x2767)<=x2768);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2773 = UINT64_MAX;
	int8_t x2774 = 1;
	volatile uint16_t x2775 = 401U;
	int32_t x2776 = INT32_MIN;
	int32_t t57 = 68263;

	t57 = (((x2773>>x2774)^x2775)<=x2776);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2801 = 86;
	static int16_t x2802 = 0;
	volatile int64_t x2803 = -1LL;
	int64_t x2804 = -1LL;
	volatile int32_t t58 = 28292;

	t58 = (((x2801>>x2802)^x2803)<=x2804);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2833 = INT32_MAX;
	volatile uint8_t x2834 = 3U;
	static int32_t x2835 = INT32_MIN;
	volatile int32_t x2836 = INT32_MIN;
	int32_t t59 = 2;

	t59 = (((x2833>>x2834)^x2835)<=x2836);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x2838 = 3U;
	int16_t x2839 = INT16_MIN;
	static int32_t x2840 = 0;
	volatile int32_t t60 = -72;

	t60 = (((x2837>>x2838)^x2839)<=x2840);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2885 = 1U;
	volatile int8_t x2888 = 1;
	static volatile int32_t t61 = 1050105825;

	t61 = (((x2885>>x2886)^x2887)<=x2888);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2929 = 52028880U;
	int8_t x2930 = 0;

	t62 = (((x2929>>x2930)^x2931)<=x2932);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2937 = 7384U;
	static int16_t x2938 = 0;
	int64_t x2939 = INT64_MAX;
	volatile int32_t x2940 = INT32_MIN;

	t63 = (((x2937>>x2938)^x2939)<=x2940);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2949 = 508808U;
	int64_t x2951 = INT64_MIN;
	int32_t x2952 = INT32_MIN;
	volatile int32_t t64 = 489235;

	t64 = (((x2949>>x2950)^x2951)<=x2952);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3054 = 11U;
	int8_t x3055 = 4;
	static int8_t x3056 = -14;
	int32_t t65 = -4;

	t65 = (((x3053>>x3054)^x3055)<=x3056);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3082 = 17U;
	int8_t x3083 = INT8_MIN;
	int8_t x3084 = -1;
	volatile int32_t t66 = 4819305;

	t66 = (((x3081>>x3082)^x3083)<=x3084);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3105 = 467891605LLU;
	int8_t x3106 = 19;
	volatile int16_t x3107 = INT16_MIN;
	int32_t t67 = 571640;

	t67 = (((x3105>>x3106)^x3107)<=x3108);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3130 = 5U;
	uint64_t x3131 = 745526332LLU;
	int8_t x3132 = -2;

	t68 = (((x3129>>x3130)^x3131)<=x3132);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3193 = 2U;
	int16_t x3194 = 25;
	int64_t x3195 = INT64_MAX;
	int64_t x3196 = INT64_MAX;
	int32_t t69 = 0;

	t69 = (((x3193>>x3194)^x3195)<=x3196);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x3203 = -635781;
	static volatile int32_t t70 = 628485979;

	t70 = (((x3201>>x3202)^x3203)<=x3204);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3481 = 0U;
	uint8_t x3482 = 25U;
	volatile uint8_t x3483 = 7U;
	int32_t x3484 = INT32_MIN;
	int32_t t71 = -2172;

	t71 = (((x3481>>x3482)^x3483)<=x3484);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x3505 = 178026;
	uint32_t x3506 = 1U;
	int32_t x3508 = INT32_MIN;
	volatile int32_t t72 = 19;

	t72 = (((x3505>>x3506)^x3507)<=x3508);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3605 = INT8_MAX;
	int8_t x3606 = 0;
	uint8_t x3607 = UINT8_MAX;
	int16_t x3608 = 0;
	int32_t t73 = 5483271;

	t73 = (((x3605>>x3606)^x3607)<=x3608);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3677 = INT64_MAX;
	uint16_t x3678 = 1U;
	static uint16_t x3679 = 483U;
	uint16_t x3680 = 170U;
	volatile int32_t t74 = -11803672;

	t74 = (((x3677>>x3678)^x3679)<=x3680);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x3705 = 3246338LLU;
	int32_t x3707 = 319;
	int64_t x3708 = 415895555400LL;
	static int32_t t75 = 215;

	t75 = (((x3705>>x3706)^x3707)<=x3708);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3725 = 4U;
	uint8_t x3726 = 6U;
	static int64_t x3727 = INT64_MAX;
	uint32_t x3728 = 1773621912U;
	volatile int32_t t76 = -1;

	t76 = (((x3725>>x3726)^x3727)<=x3728);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x3765 = 1702367;
	int32_t x3767 = INT32_MIN;
	volatile int64_t x3768 = -4313863963097593LL;
	static volatile int32_t t77 = 3955;

	t77 = (((x3765>>x3766)^x3767)<=x3768);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x3774 = 44U;
	static int32_t x3775 = INT32_MIN;
	int16_t x3776 = 1;
	int32_t t78 = 390976;

	t78 = (((x3773>>x3774)^x3775)<=x3776);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x3785 = 79238LLU;
	uint8_t x3786 = 7U;
	int64_t x3787 = -1LL;
	int32_t x3788 = 12;
	static volatile int32_t t79 = -22;

	t79 = (((x3785>>x3786)^x3787)<=x3788);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3885 = 1768802404825239LLU;
	uint16_t x3886 = 3U;
	uint64_t x3887 = 29905702LLU;
	uint16_t x3888 = 409U;
	int32_t t80 = -18284;

	t80 = (((x3885>>x3886)^x3887)<=x3888);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3917 = UINT64_MAX;
	volatile uint16_t x3918 = 7U;
	static int8_t x3919 = INT8_MAX;
	int8_t x3920 = -1;

	t81 = (((x3917>>x3918)^x3919)<=x3920);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x4009 = 10097LLU;
	uint32_t x4010 = 0U;
	int8_t x4012 = 1;

	t82 = (((x4009>>x4010)^x4011)<=x4012);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4049 = 45023566LLU;
	int16_t x4051 = 1;
	int8_t x4052 = 1;

	t83 = (((x4049>>x4050)^x4051)<=x4052);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4069 = 4097027LLU;
	static int64_t x4071 = -897728051749208LL;
	int8_t x4072 = -1;
	static volatile int32_t t84 = 194;

	t84 = (((x4069>>x4070)^x4071)<=x4072);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4213 = INT64_MAX;
	static int32_t x4216 = INT32_MIN;
	static int32_t t85 = 20485527;

	t85 = (((x4213>>x4214)^x4215)<=x4216);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4273 = 7;
	uint32_t x4275 = UINT32_MAX;
	int32_t t86 = -211277;

	t86 = (((x4273>>x4274)^x4275)<=x4276);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4365 = 469068U;
	static int32_t x4367 = INT32_MIN;
	uint32_t x4368 = 194272627U;
	volatile int32_t t87 = 25;

	t87 = (((x4365>>x4366)^x4367)<=x4368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x4394 = 3U;
	volatile int32_t x4395 = -1;
	static volatile uint32_t x4396 = 21U;
	volatile int32_t t88 = -71903;

	t88 = (((x4393>>x4394)^x4395)<=x4396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4521 = 1048U;
	volatile uint8_t x4522 = 0U;
	volatile int64_t x4524 = -1LL;

	t89 = (((x4521>>x4522)^x4523)<=x4524);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4553 = 7U;
	uint8_t x4554 = 14U;
	uint32_t x4555 = 2076490311U;
	int32_t t90 = 743802276;

	t90 = (((x4553>>x4554)^x4555)<=x4556);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4673 = 44U;
	uint8_t x4674 = 7U;
	uint8_t x4676 = 1U;
	int32_t t91 = -2440188;

	t91 = (((x4673>>x4674)^x4675)<=x4676);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4765 = 5U;
	int8_t x4766 = 1;
	static volatile int64_t x4767 = -810251360LL;
	static int32_t t92 = -239347;

	t92 = (((x4765>>x4766)^x4767)<=x4768);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4889 = 5U;
	uint8_t x4890 = 4U;
	static int16_t x4892 = 3;
	static volatile int32_t t93 = -828333932;

	t93 = (((x4889>>x4890)^x4891)<=x4892);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4893 = INT16_MAX;
	static int16_t x4894 = 1;
	uint64_t x4895 = 1LLU;
	volatile uint16_t x4896 = UINT16_MAX;
	volatile int32_t t94 = -29873;

	t94 = (((x4893>>x4894)^x4895)<=x4896);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x4909 = UINT16_MAX;
	uint8_t x4910 = 8U;
	static int64_t x4911 = -1LL;
	int32_t t95 = 1555;

	t95 = (((x4909>>x4910)^x4911)<=x4912);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4965 = 5693U;
	int32_t x4966 = 7;
	int8_t x4968 = INT8_MAX;
	int32_t t96 = -911898;

	t96 = (((x4965>>x4966)^x4967)<=x4968);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5117 = UINT32_MAX;
	volatile uint32_t x5118 = 0U;
	volatile uint8_t x5119 = UINT8_MAX;
	volatile int16_t x5120 = -180;
	int32_t t97 = 11616913;

	t97 = (((x5117>>x5118)^x5119)<=x5120);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5194 = 3;
	static uint8_t x5195 = 13U;
	static int32_t x5196 = INT32_MAX;
	int32_t t98 = 1380212;

	t98 = (((x5193>>x5194)^x5195)<=x5196);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5293 = INT32_MAX;
	static volatile uint8_t x5294 = 15U;
	int32_t t99 = 157020307;

	t99 = (((x5293>>x5294)^x5295)<=x5296);

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

