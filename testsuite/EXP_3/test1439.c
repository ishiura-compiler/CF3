#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 0;
int8_t x414 = 19;
static int32_t t2 = 65258958;
int8_t x682 = 24;
int16_t x755 = INT16_MIN;
int32_t t6 = -186;
int8_t x900 = 5;
static volatile int32_t t8 = -121600918;
uint8_t x1113 = UINT8_MAX;
uint8_t x1120 = 9U;
int32_t t12 = -160;
int64_t x1335 = -1LL;
uint16_t x1649 = 14U;
int8_t x1672 = INT8_MAX;
static int32_t t15 = 2161;
uint8_t x1702 = 0U;
volatile int32_t x1704 = INT32_MIN;
int16_t x1739 = INT16_MIN;
static int64_t x1972 = INT64_MIN;
uint32_t x1997 = 1970777684U;
int32_t t24 = -28503;
uint32_t x2113 = 1U;
volatile uint8_t x2114 = 5U;
int64_t x2236 = INT64_MAX;
volatile int32_t x2346 = 1;
uint64_t x2347 = UINT64_MAX;
static volatile uint64_t x2348 = UINT64_MAX;
static int32_t t30 = -2333;
int32_t t33 = -2874466;
int32_t x2435 = 1807775;
int8_t x2581 = INT8_MAX;
uint64_t x2641 = 1LLU;
int32_t t37 = -172;
volatile uint32_t x2745 = UINT32_MAX;
static uint32_t x2748 = 3004391U;
volatile int16_t x2977 = 524;
uint64_t x2979 = 26194165791003LLU;
uint32_t x3137 = 960519U;
int32_t t44 = 208956;
static uint64_t x3216 = 81165520591LLU;
static volatile int32_t t45 = -97;
int16_t x3409 = 1;
static int64_t x3548 = -1LL;
int64_t x3556 = -92578447760872LL;
static uint8_t x3582 = 23U;
int32_t t56 = -468825;
uint32_t x3798 = 1U;
static int16_t x3799 = -22;
static uint16_t x3933 = 0U;
uint16_t x4002 = 2U;
uint64_t x4004 = 11212210850075LLU;
volatile int16_t x4092 = -951;
uint16_t x4278 = 6U;
static uint16_t x4280 = 1U;
static uint16_t x4301 = 2U;
uint16_t x4514 = 0U;
int8_t x4646 = 6;
volatile uint16_t x4749 = 7U;
uint8_t x4750 = 1U;
int16_t x4751 = -1;
static uint16_t x4933 = UINT16_MAX;
static uint32_t x4961 = 599U;
volatile int32_t t71 = -20210324;
int32_t t72 = -262;
volatile int8_t x5042 = 0;
static uint8_t x5194 = 14U;
static uint8_t x5214 = 2U;
int64_t x5216 = 1388022LL;
static volatile int64_t x5261 = 12LL;
uint8_t x5426 = 22U;
volatile int32_t t81 = 14030090;
uint16_t x5458 = 29U;
uint8_t x5467 = 60U;
int32_t t83 = 2332645;
volatile uint8_t x5605 = 0U;
int8_t x5606 = 0;
int32_t x5681 = 5457;
int16_t x5825 = INT16_MAX;
volatile int8_t x5826 = 7;
int8_t x5827 = INT8_MAX;
int8_t x5866 = 1;
static uint32_t x5908 = 290964U;
uint16_t x5913 = UINT16_MAX;
int16_t x5915 = -1;
volatile uint8_t x5918 = 2U;
int32_t x6033 = 254;
volatile uint16_t x6034 = 19U;
volatile int32_t t97 = -15761;
uint8_t x6073 = 1U;
static volatile int32_t t98 = -549561;
static uint16_t x6080 = UINT16_MAX;


void f0(void) {
	uint8_t x1 = 24U;
	static int64_t x3 = INT64_MIN;
	static int16_t x4 = INT16_MAX;
	static int32_t t0 = -4536809;

	t0 = ((x1>>x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 1U;
	volatile int16_t x279 = INT16_MAX;
	uint32_t x280 = 431U;
	volatile int32_t t1 = 3930;

	t1 = ((x277>>x278)<(x279<x280));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x413 = 421576LL;
	static int32_t x415 = INT32_MIN;
	int8_t x416 = -1;

	t2 = ((x413>>x414)<(x415<x416));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x469 = 4765;
	static uint8_t x470 = 0U;
	int16_t x471 = INT16_MAX;
	int8_t x472 = 1;
	volatile int32_t t3 = 826807751;

	t3 = ((x469>>x470)<(x471<x472));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x649 = UINT8_MAX;
	uint8_t x650 = 11U;
	int32_t x651 = INT32_MIN;
	uint64_t x652 = 912LLU;
	static int32_t t4 = -378;

	t4 = ((x649>>x650)<(x651<x652));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x681 = 1909816999U;
	volatile int8_t x683 = INT8_MAX;
	static volatile int64_t x684 = -1LL;
	static int32_t t5 = -324997;

	t5 = ((x681>>x682)<(x683<x684));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x753 = UINT32_MAX;
	int8_t x754 = 1;
	int16_t x756 = -1;

	t6 = ((x753>>x754)<(x755<x756));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x897 = INT32_MAX;
	uint8_t x898 = 7U;
	static uint64_t x899 = 751278572025491933LLU;
	int32_t t7 = 0;

	t7 = ((x897>>x898)<(x899<x900));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x1021 = 1LLU;
	uint32_t x1022 = 12U;
	uint32_t x1023 = 7U;
	static volatile uint64_t x1024 = UINT64_MAX;

	t8 = ((x1021>>x1022)<(x1023<x1024));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x1045 = 3LLU;
	static volatile int64_t x1046 = 6LL;
	int8_t x1047 = -21;
	static volatile int64_t x1048 = -853LL;
	volatile int32_t t9 = 17;

	t9 = ((x1045>>x1046)<(x1047<x1048));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1114 = 1;
	uint32_t x1115 = 54U;
	volatile int16_t x1116 = -60;
	volatile int32_t t10 = -2976;

	t10 = ((x1113>>x1114)<(x1115<x1116));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x1117 = 201536LLU;
	static volatile int16_t x1118 = 5;
	static int16_t x1119 = -1;
	int32_t t11 = -14;

	t11 = ((x1117>>x1118)<(x1119<x1120));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1193 = INT8_MAX;
	uint16_t x1194 = 7U;
	int32_t x1195 = -1;
	uint8_t x1196 = 2U;

	t12 = ((x1193>>x1194)<(x1195<x1196));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x1333 = 5U;
	uint8_t x1334 = 0U;
	volatile uint16_t x1336 = 3466U;
	int32_t t13 = 320;

	t13 = ((x1333>>x1334)<(x1335<x1336));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x1650 = 2U;
	int64_t x1651 = INT64_MIN;
	static volatile int32_t x1652 = 0;
	static volatile int32_t t14 = -72;

	t14 = ((x1649>>x1650)<(x1651<x1652));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1669 = 26U;
	uint16_t x1670 = 7U;
	int8_t x1671 = INT8_MAX;

	t15 = ((x1669>>x1670)<(x1671<x1672));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1701 = INT64_MAX;
	int8_t x1703 = 1;
	int32_t t16 = -3880404;

	t16 = ((x1701>>x1702)<(x1703<x1704));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1721 = 3;
	volatile uint8_t x1722 = 23U;
	int64_t x1723 = INT64_MIN;
	static uint16_t x1724 = UINT16_MAX;
	int32_t t17 = -6131503;

	t17 = ((x1721>>x1722)<(x1723<x1724));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x1737 = INT64_MAX;
	uint8_t x1738 = 0U;
	static uint8_t x1740 = 15U;
	volatile int32_t t18 = 2570;

	t18 = ((x1737>>x1738)<(x1739<x1740));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1877 = 42201935U;
	volatile int8_t x1878 = 1;
	static int64_t x1879 = 435381277789545596LL;
	int8_t x1880 = 12;
	volatile int32_t t19 = 0;

	t19 = ((x1877>>x1878)<(x1879<x1880));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1925 = 53U;
	static uint64_t x1926 = 2LLU;
	int8_t x1927 = 2;
	uint8_t x1928 = UINT8_MAX;
	int32_t t20 = -657341;

	t20 = ((x1925>>x1926)<(x1927<x1928));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1937 = UINT8_MAX;
	volatile int16_t x1938 = 1;
	static int64_t x1939 = INT64_MIN;
	int64_t x1940 = -16547537LL;
	int32_t t21 = 154;

	t21 = ((x1937>>x1938)<(x1939<x1940));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1945 = INT32_MAX;
	static uint32_t x1946 = 7U;
	uint16_t x1947 = 1U;
	volatile int64_t x1948 = INT64_MAX;
	int32_t t22 = 89;

	t22 = ((x1945>>x1946)<(x1947<x1948));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1969 = UINT8_MAX;
	int8_t x1970 = 16;
	static uint64_t x1971 = UINT64_MAX;
	volatile int32_t t23 = -11965;

	t23 = ((x1969>>x1970)<(x1971<x1972));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1998 = 2;
	volatile int64_t x1999 = -1LL;
	int16_t x2000 = INT16_MIN;

	t24 = ((x1997>>x1998)<(x1999<x2000));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x2115 = 14U;
	int8_t x2116 = -1;
	volatile int32_t t25 = 222;

	t25 = ((x2113>>x2114)<(x2115<x2116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2133 = INT64_MAX;
	int8_t x2134 = 27;
	int8_t x2135 = INT8_MIN;
	static uint64_t x2136 = UINT64_MAX;
	volatile int32_t t26 = -52;

	t26 = ((x2133>>x2134)<(x2135<x2136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x2173 = 39U;
	int16_t x2174 = 1;
	uint16_t x2175 = 1754U;
	volatile int32_t x2176 = 108;
	static int32_t t27 = 92786694;

	t27 = ((x2173>>x2174)<(x2175<x2176));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2233 = 43;
	uint8_t x2234 = 0U;
	int16_t x2235 = INT16_MAX;
	static int32_t t28 = -7129122;

	t28 = ((x2233>>x2234)<(x2235<x2236));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2345 = 74U;
	volatile int32_t t29 = 40;

	t29 = ((x2345>>x2346)<(x2347<x2348));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2353 = 133450267;
	uint8_t x2354 = 6U;
	static uint32_t x2355 = 101826U;
	int32_t x2356 = INT32_MAX;

	t30 = ((x2353>>x2354)<(x2355<x2356));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x2377 = UINT8_MAX;
	static uint8_t x2378 = 12U;
	volatile int32_t x2379 = 3628661;
	int8_t x2380 = -1;
	int32_t t31 = 334265414;

	t31 = ((x2377>>x2378)<(x2379<x2380));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2401 = 2073714613545681997LLU;
	static uint32_t x2402 = 3U;
	int32_t x2403 = 49079772;
	int16_t x2404 = -2014;
	volatile int32_t t32 = 1;

	t32 = ((x2401>>x2402)<(x2403<x2404));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2421 = 58;
	uint8_t x2422 = 7U;
	static uint8_t x2423 = 8U;
	int8_t x2424 = INT8_MIN;

	t33 = ((x2421>>x2422)<(x2423<x2424));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2433 = INT8_MAX;
	static volatile uint8_t x2434 = 5U;
	uint8_t x2436 = 1U;
	volatile int32_t t34 = 572519;

	t34 = ((x2433>>x2434)<(x2435<x2436));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2505 = 950542LLU;
	int8_t x2506 = 19;
	int8_t x2507 = 3;
	uint64_t x2508 = 5LLU;
	int32_t t35 = 2;

	t35 = ((x2505>>x2506)<(x2507<x2508));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x2582 = 7U;
	static volatile uint64_t x2583 = 7781072834589LLU;
	static int32_t x2584 = -54;
	volatile int32_t t36 = 1;

	t36 = ((x2581>>x2582)<(x2583<x2584));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x2642 = 8U;
	int8_t x2643 = -1;
	static uint64_t x2644 = UINT64_MAX;

	t37 = ((x2641>>x2642)<(x2643<x2644));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2746 = 0U;
	volatile int16_t x2747 = INT16_MIN;
	int32_t t38 = 78695050;

	t38 = ((x2745>>x2746)<(x2747<x2748));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2805 = 132U;
	uint16_t x2806 = 5U;
	static int8_t x2807 = -21;
	int8_t x2808 = INT8_MIN;
	int32_t t39 = -7642233;

	t39 = ((x2805>>x2806)<(x2807<x2808));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2978 = 7U;
	static volatile int16_t x2980 = INT16_MIN;
	int32_t t40 = -886499;

	t40 = ((x2977>>x2978)<(x2979<x2980));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3077 = 6;
	uint32_t x3078 = 2U;
	int64_t x3079 = -1LL;
	int16_t x3080 = 0;
	int32_t t41 = 175780;

	t41 = ((x3077>>x3078)<(x3079<x3080));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3089 = UINT8_MAX;
	uint8_t x3090 = 4U;
	int32_t x3091 = INT32_MIN;
	int32_t x3092 = -1;
	volatile int32_t t42 = -10;

	t42 = ((x3089>>x3090)<(x3091<x3092));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3138 = 7;
	static int8_t x3139 = -1;
	volatile int64_t x3140 = INT64_MIN;
	volatile int32_t t43 = 411650958;

	t43 = ((x3137>>x3138)<(x3139<x3140));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x3201 = 130509LLU;
	int16_t x3202 = 28;
	uint8_t x3203 = UINT8_MAX;
	int32_t x3204 = -1;

	t44 = ((x3201>>x3202)<(x3203<x3204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3213 = INT8_MAX;
	static uint32_t x3214 = 15U;
	volatile uint32_t x3215 = 57U;

	t45 = ((x3213>>x3214)<(x3215<x3216));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3233 = 45;
	uint8_t x3234 = 0U;
	uint16_t x3235 = UINT16_MAX;
	int8_t x3236 = INT8_MIN;
	volatile int32_t t46 = -13071;

	t46 = ((x3233>>x3234)<(x3235<x3236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3385 = 175846682660LLU;
	uint16_t x3386 = 6U;
	int8_t x3387 = INT8_MIN;
	int8_t x3388 = INT8_MIN;
	int32_t t47 = -40205341;

	t47 = ((x3385>>x3386)<(x3387<x3388));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x3410 = 6U;
	int16_t x3411 = -109;
	int8_t x3412 = INT8_MIN;
	volatile int32_t t48 = 6977;

	t48 = ((x3409>>x3410)<(x3411<x3412));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3545 = 1398597433119857LLU;
	int16_t x3546 = 1;
	int64_t x3547 = -1LL;
	volatile int32_t t49 = -13027345;

	t49 = ((x3545>>x3546)<(x3547<x3548));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3553 = UINT32_MAX;
	uint16_t x3554 = 6U;
	int8_t x3555 = -1;
	int32_t t50 = 27392039;

	t50 = ((x3553>>x3554)<(x3555<x3556));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3581 = 166474620U;
	int64_t x3583 = -18817281825077829LL;
	static int32_t x3584 = 611986;
	volatile int32_t t51 = -7656;

	t51 = ((x3581>>x3582)<(x3583<x3584));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3585 = 1013;
	uint8_t x3586 = 7U;
	int8_t x3587 = -1;
	volatile int8_t x3588 = INT8_MIN;
	volatile int32_t t52 = -124;

	t52 = ((x3585>>x3586)<(x3587<x3588));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3597 = INT16_MAX;
	uint8_t x3598 = 5U;
	uint32_t x3599 = UINT32_MAX;
	int8_t x3600 = INT8_MAX;
	volatile int32_t t53 = -798853534;

	t53 = ((x3597>>x3598)<(x3599<x3600));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3657 = INT32_MAX;
	uint16_t x3658 = 22U;
	volatile uint32_t x3659 = 34174605U;
	static volatile uint16_t x3660 = 6507U;
	volatile int32_t t54 = -477;

	t54 = ((x3657>>x3658)<(x3659<x3660));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3685 = 7441;
	uint8_t x3686 = 1U;
	volatile int32_t x3687 = -1;
	static int32_t x3688 = -1;
	volatile int32_t t55 = 43171;

	t55 = ((x3685>>x3686)<(x3687<x3688));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3693 = UINT8_MAX;
	static uint8_t x3694 = 14U;
	volatile int8_t x3695 = -4;
	int16_t x3696 = 5687;

	t56 = ((x3693>>x3694)<(x3695<x3696));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3749 = 2U;
	uint8_t x3750 = 6U;
	int64_t x3751 = INT64_MIN;
	int32_t x3752 = INT32_MIN;
	int32_t t57 = -2587;

	t57 = ((x3749>>x3750)<(x3751<x3752));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3797 = UINT64_MAX;
	volatile int32_t x3800 = INT32_MIN;
	static volatile int32_t t58 = 2;

	t58 = ((x3797>>x3798)<(x3799<x3800));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3934 = 0U;
	int8_t x3935 = INT8_MIN;
	static int8_t x3936 = INT8_MIN;
	int32_t t59 = -3541030;

	t59 = ((x3933>>x3934)<(x3935<x3936));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3937 = INT16_MAX;
	uint8_t x3938 = 15U;
	volatile int64_t x3939 = -1LL;
	static uint32_t x3940 = 2U;
	volatile int32_t t60 = -7421121;

	t60 = ((x3937>>x3938)<(x3939<x3940));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4001 = 1U;
	uint16_t x4003 = 49U;
	static volatile int32_t t61 = -2796638;

	t61 = ((x4001>>x4002)<(x4003<x4004));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x4089 = 103938304077840LL;
	uint8_t x4090 = 1U;
	int16_t x4091 = INT16_MAX;
	volatile int32_t t62 = -1040586;

	t62 = ((x4089>>x4090)<(x4091<x4092));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x4277 = INT32_MAX;
	int16_t x4279 = INT16_MIN;
	volatile int32_t t63 = -1;

	t63 = ((x4277>>x4278)<(x4279<x4280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4302 = 0U;
	uint16_t x4303 = UINT16_MAX;
	int64_t x4304 = -7LL;
	int32_t t64 = 5;

	t64 = ((x4301>>x4302)<(x4303<x4304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4513 = 268;
	int32_t x4515 = -1;
	static int8_t x4516 = INT8_MIN;
	int32_t t65 = -257;

	t65 = ((x4513>>x4514)<(x4515<x4516));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4645 = UINT64_MAX;
	int64_t x4647 = INT64_MIN;
	volatile uint8_t x4648 = UINT8_MAX;
	volatile int32_t t66 = -1;

	t66 = ((x4645>>x4646)<(x4647<x4648));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x4752 = INT8_MAX;
	int32_t t67 = 276033;

	t67 = ((x4749>>x4750)<(x4751<x4752));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4777 = 26814565LL;
	static int16_t x4778 = 0;
	int8_t x4779 = INT8_MAX;
	int16_t x4780 = -1;
	volatile int32_t t68 = 21810504;

	t68 = ((x4777>>x4778)<(x4779<x4780));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x4841 = 10291U;
	volatile int8_t x4842 = 1;
	int64_t x4843 = -1LL;
	static uint64_t x4844 = UINT64_MAX;
	int32_t t69 = 1346;

	t69 = ((x4841>>x4842)<(x4843<x4844));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4934 = 7U;
	int8_t x4935 = INT8_MIN;
	static uint8_t x4936 = 54U;
	volatile int32_t t70 = -5;

	t70 = ((x4933>>x4934)<(x4935<x4936));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4962 = 3U;
	static int32_t x4963 = -1;
	volatile int16_t x4964 = -1;

	t71 = ((x4961>>x4962)<(x4963<x4964));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x5025 = 485119349119477LLU;
	int8_t x5026 = 3;
	volatile int16_t x5027 = INT16_MIN;
	int64_t x5028 = 2145343447492LL;

	t72 = ((x5025>>x5026)<(x5027<x5028));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5041 = UINT64_MAX;
	volatile int32_t x5043 = INT32_MIN;
	int32_t x5044 = INT32_MAX;
	static int32_t t73 = -1249;

	t73 = ((x5041>>x5042)<(x5043<x5044));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5149 = 0;
	int8_t x5150 = 1;
	int64_t x5151 = INT64_MIN;
	int16_t x5152 = 6;
	static volatile int32_t t74 = 0;

	t74 = ((x5149>>x5150)<(x5151<x5152));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x5193 = UINT8_MAX;
	int32_t x5195 = INT32_MIN;
	int16_t x5196 = -2852;
	static int32_t t75 = -436;

	t75 = ((x5193>>x5194)<(x5195<x5196));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5201 = 0LLU;
	volatile uint8_t x5202 = 27U;
	static volatile int8_t x5203 = 9;
	uint16_t x5204 = UINT16_MAX;
	int32_t t76 = -404968766;

	t76 = ((x5201>>x5202)<(x5203<x5204));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5209 = 101;
	uint16_t x5210 = 3U;
	static volatile int8_t x5211 = -1;
	static int8_t x5212 = -1;
	int32_t t77 = -617999927;

	t77 = ((x5209>>x5210)<(x5211<x5212));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5213 = 2056637LLU;
	int8_t x5215 = INT8_MIN;
	volatile int32_t t78 = -4;

	t78 = ((x5213>>x5214)<(x5215<x5216));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5262 = 48U;
	int32_t x5263 = -1;
	volatile uint64_t x5264 = 65252944815732107LLU;
	static int32_t t79 = 58;

	t79 = ((x5261>>x5262)<(x5263<x5264));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5333 = INT16_MAX;
	int16_t x5334 = 11;
	static int32_t x5335 = INT32_MAX;
	static volatile int8_t x5336 = -1;
	int32_t t80 = 1600757;

	t80 = ((x5333>>x5334)<(x5335<x5336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5425 = 15584;
	static uint32_t x5427 = 52U;
	int8_t x5428 = INT8_MIN;

	t81 = ((x5425>>x5426)<(x5427<x5428));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5457 = 124710000U;
	volatile int32_t x5459 = -4673415;
	volatile int16_t x5460 = INT16_MIN;
	volatile int32_t t82 = 572610;

	t82 = ((x5457>>x5458)<(x5459<x5460));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5465 = INT16_MAX;
	int8_t x5466 = 1;
	int16_t x5468 = -13;

	t83 = ((x5465>>x5466)<(x5467<x5468));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x5477 = UINT16_MAX;
	uint16_t x5478 = 29U;
	volatile uint32_t x5479 = UINT32_MAX;
	uint64_t x5480 = UINT64_MAX;
	volatile int32_t t84 = 0;

	t84 = ((x5477>>x5478)<(x5479<x5480));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5481 = UINT32_MAX;
	volatile uint32_t x5482 = 5U;
	int32_t x5483 = -1;
	static int64_t x5484 = INT64_MIN;
	static int32_t t85 = 58;

	t85 = ((x5481>>x5482)<(x5483<x5484));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5607 = INT16_MIN;
	static int8_t x5608 = -1;
	static volatile int32_t t86 = -307908627;

	t86 = ((x5605>>x5606)<(x5607<x5608));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5682 = 1;
	int32_t x5683 = INT32_MAX;
	int8_t x5684 = INT8_MIN;
	static int32_t t87 = 2;

	t87 = ((x5681>>x5682)<(x5683<x5684));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5777 = 409178U;
	volatile int8_t x5778 = 1;
	int16_t x5779 = -1;
	int64_t x5780 = -9613612LL;
	static volatile int32_t t88 = -369158;

	t88 = ((x5777>>x5778)<(x5779<x5780));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5828 = -475;
	volatile int32_t t89 = 31514586;

	t89 = ((x5825>>x5826)<(x5827<x5828));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5865 = UINT16_MAX;
	uint8_t x5867 = 98U;
	int16_t x5868 = INT16_MIN;
	int32_t t90 = 62544;

	t90 = ((x5865>>x5866)<(x5867<x5868));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5905 = UINT16_MAX;
	int16_t x5906 = 0;
	static uint8_t x5907 = 7U;
	volatile int32_t t91 = 632906;

	t91 = ((x5905>>x5906)<(x5907<x5908));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x5914 = 2;
	int8_t x5916 = INT8_MAX;
	int32_t t92 = 39235;

	t92 = ((x5913>>x5914)<(x5915<x5916));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5917 = 2953434U;
	int32_t x5919 = INT32_MIN;
	uint16_t x5920 = 6326U;
	volatile int32_t t93 = 891;

	t93 = ((x5917>>x5918)<(x5919<x5920));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5989 = INT8_MAX;
	uint32_t x5990 = 1U;
	static volatile uint16_t x5991 = 1U;
	static volatile int64_t x5992 = INT64_MIN;
	volatile int32_t t94 = 115406855;

	t94 = ((x5989>>x5990)<(x5991<x5992));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6005 = UINT32_MAX;
	uint32_t x6006 = 13U;
	int16_t x6007 = INT16_MAX;
	int32_t x6008 = INT32_MAX;
	volatile int32_t t95 = -23471849;

	t95 = ((x6005>>x6006)<(x6007<x6008));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6021 = 23U;
	volatile uint64_t x6022 = 4LLU;
	int16_t x6023 = -1;
	int8_t x6024 = INT8_MIN;
	volatile int32_t t96 = -973;

	t96 = ((x6021>>x6022)<(x6023<x6024));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x6035 = 15U;
	uint8_t x6036 = UINT8_MAX;

	t97 = ((x6033>>x6034)<(x6035<x6036));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6074 = 1U;
	uint16_t x6075 = 117U;
	int32_t x6076 = INT32_MAX;

	t98 = ((x6073>>x6074)<(x6075<x6076));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6077 = UINT16_MAX;
	int8_t x6078 = 0;
	volatile int16_t x6079 = INT16_MIN;
	int32_t t99 = 340;

	t99 = ((x6077>>x6078)<(x6079<x6080));

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

