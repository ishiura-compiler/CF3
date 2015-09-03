#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x279 = UINT16_MAX;
static volatile uint64_t t1 = 90692LLU;
int8_t x284 = INT8_MAX;
int64_t x421 = INT64_MAX;
uint32_t x424 = UINT32_MAX;
volatile int64_t t5 = 11566581318003004LL;
uint32_t x550 = 8U;
int8_t x686 = 1;
uint8_t x766 = 0U;
int32_t x767 = INT32_MAX;
static volatile int8_t x956 = INT8_MAX;
volatile uint64_t t11 = 696223974LLU;
volatile int64_t x1072 = INT64_MIN;
int8_t x1097 = INT8_MAX;
uint64_t x1098 = 3LLU;
volatile int64_t x1186 = 15LL;
uint32_t x1215 = 3934954U;
static int32_t t18 = -203836788;
uint32_t x1353 = UINT32_MAX;
static int8_t x1354 = 0;
uint8_t x1374 = 19U;
int64_t x1375 = -108555624249LL;
static int16_t x1376 = INT16_MAX;
int32_t t22 = 919216;
volatile uint16_t x1718 = 12U;
uint8_t x1723 = 0U;
int32_t x1735 = INT32_MAX;
int32_t x1736 = INT32_MIN;
static uint8_t x1790 = 12U;
volatile uint32_t t29 = 66464U;
volatile int32_t t31 = -15;
uint64_t t32 = 101202216870LLU;
uint8_t x2021 = UINT8_MAX;
static volatile uint8_t x2066 = 4U;
int64_t x2068 = -1LL;
int32_t x2079 = INT32_MAX;
int64_t t37 = -11858365LL;
uint64_t x2342 = 1LLU;
static volatile int64_t x2343 = -1LL;
int32_t t39 = -2;
int32_t x2433 = 0;
int32_t x2436 = -83;
volatile int32_t t41 = 420946;
uint64_t x2581 = 59595929229LLU;
static uint64_t x2604 = 65599716562123LLU;
uint16_t x2731 = UINT16_MAX;
int32_t t46 = -3;
int64_t x2763 = INT64_MAX;
static volatile uint8_t x2821 = UINT8_MAX;
int8_t x2823 = INT8_MIN;
int16_t x2854 = 7;
int16_t x2865 = 571;
volatile int32_t t50 = 2812888;
static int64_t x2876 = -7633489304642LL;
volatile int32_t t51 = 3558236;
uint64_t x2897 = 390807LLU;
uint64_t x2899 = 9105005LLU;
uint64_t t52 = 181LLU;
volatile uint64_t x3049 = 120LLU;
uint64_t t54 = 6422021791866LLU;
static uint8_t x3333 = UINT8_MAX;
uint32_t x3501 = 1400999311U;
static int8_t x3502 = 1;
volatile int16_t x3531 = 16;
volatile int32_t t57 = -27;
uint16_t x3565 = UINT16_MAX;
static uint8_t x3575 = 39U;
static volatile uint8_t x3651 = 42U;
static int16_t x3723 = -428;
int8_t x3846 = 1;
static volatile uint32_t x3848 = 99U;
volatile int64_t t64 = -9803306810LL;
volatile int32_t t65 = 620763;
int64_t x3897 = INT64_MAX;
int32_t x3926 = 3;
uint8_t x3928 = 1U;
uint64_t t67 = 202839948153881LLU;
static uint8_t x4164 = UINT8_MAX;
static volatile int32_t t71 = -925;
int8_t x4450 = 51;
uint32_t t75 = 2790U;
uint64_t x4545 = UINT64_MAX;
int64_t x4620 = -1LL;
int32_t x4817 = 199;
int8_t x4949 = INT8_MAX;
static uint64_t x5041 = 793LLU;
int32_t x5042 = 35;
uint64_t t82 = 274944724414269LLU;
volatile int32_t x5220 = INT32_MIN;
int32_t t84 = -414666;
uint64_t t85 = 221LLU;
volatile int64_t t87 = 235242598LL;
static volatile int32_t t88 = -5468;
int64_t x5479 = INT64_MAX;
int16_t x5480 = 7447;
static volatile int32_t t89 = 969426411;
int32_t x5490 = 0;
uint16_t x5565 = 136U;
volatile int32_t t91 = 343393942;
uint16_t x5569 = 4U;
static uint8_t x5662 = 12U;
uint32_t x5801 = 462800U;
static uint16_t x5821 = 1520U;


void f0(void) {
	static volatile uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 12U;
	int32_t x135 = 44401;
	int32_t x136 = -136;
	volatile int32_t t0 = -31101;

	t0 = (x133>>(x134|(x135<x136)));

	if (t0 != 15) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 61U;
	uint64_t x280 = 13588702243279013LLU;

	t1 = (x277>>(x278|(x279<x280)));

	if (t1 != 7LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x281 = 29832896888LLU;
	uint8_t x282 = 3U;
	uint32_t x283 = 4330U;
	volatile uint64_t t2 = 22127926LLU;

	t2 = (x281>>(x282|(x283<x284)));

	if (t2 != 3729112111LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x422 = 0;
	int8_t x423 = INT8_MIN;
	static int64_t t3 = 6LL;

	t3 = (x421>>(x422|(x423<x424)));

	if (t3 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x469 = 7720U;
	int64_t x470 = 4LL;
	int8_t x471 = 30;
	int8_t x472 = INT8_MAX;
	static int32_t t4 = -1432;

	t4 = (x469>>(x470|(x471<x472)));

	if (t4 != 241) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x481 = 1LL;
	static uint8_t x482 = 10U;
	int32_t x483 = -37094360;
	static uint64_t x484 = UINT64_MAX;

	t5 = (x481>>(x482|(x483<x484)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x537 = 10U;
	volatile uint64_t x538 = 0LLU;
	int8_t x539 = -1;
	int8_t x540 = INT8_MAX;
	static volatile int32_t t6 = 3277;

	t6 = (x537>>(x538|(x539<x540)));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x549 = INT64_MAX;
	uint32_t x551 = UINT32_MAX;
	static int16_t x552 = -111;
	volatile int64_t t7 = 1LL;

	t7 = (x549>>(x550|(x551<x552)));

	if (t7 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x685 = UINT8_MAX;
	static volatile int64_t x687 = INT64_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t8 = 158;

	t8 = (x685>>(x686|(x687<x688)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x765 = 3U;
	volatile uint64_t x768 = 550328809529827LLU;
	static int32_t t9 = 1425;

	t9 = (x765>>(x766|(x767<x768)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x821 = INT64_MAX;
	static int8_t x822 = 15;
	volatile int16_t x823 = -1;
	volatile uint16_t x824 = 3U;
	int64_t t10 = 219665LL;

	t10 = (x821>>(x822|(x823<x824)));

	if (t10 != 281474976710655LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x953 = UINT64_MAX;
	uint8_t x954 = 32U;
	volatile uint16_t x955 = UINT16_MAX;

	t11 = (x953>>(x954|(x955<x956)));

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x965 = 2U;
	volatile int32_t x966 = 10;
	volatile int8_t x967 = -33;
	int64_t x968 = -1641678230071477881LL;
	volatile int32_t t12 = -20726;

	t12 = (x965>>(x966|(x967<x968)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1021 = UINT8_MAX;
	int8_t x1022 = 3;
	uint64_t x1023 = 7348448419046LLU;
	int32_t x1024 = 2187;
	volatile int32_t t13 = -216;

	t13 = (x1021>>(x1022|(x1023<x1024)));

	if (t13 != 31) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1069 = 99U;
	int16_t x1070 = 1;
	uint64_t x1071 = 287006826331031LLU;
	volatile int32_t t14 = -681;

	t14 = (x1069>>(x1070|(x1071<x1072)));

	if (t14 != 49) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x1099 = -1LL;
	int32_t x1100 = -16;
	static int32_t t15 = 20712379;

	t15 = (x1097>>(x1098|(x1099<x1100)));

	if (t15 != 15) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x1185 = INT32_MAX;
	uint8_t x1187 = 19U;
	int64_t x1188 = -3260LL;
	volatile int32_t t16 = -2152001;

	t16 = (x1185>>(x1186|(x1187<x1188)));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1201 = 352878U;
	uint8_t x1202 = 0U;
	uint64_t x1203 = 200248447658197452LLU;
	int32_t x1204 = INT32_MIN;
	static uint32_t t17 = 3382252U;

	t17 = (x1201>>(x1202|(x1203<x1204)));

	if (t17 != 176439U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1213 = INT8_MAX;
	int8_t x1214 = 0;
	int8_t x1216 = INT8_MIN;

	t18 = (x1213>>(x1214|(x1215<x1216)));

	if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1285 = 11;
	uint16_t x1286 = 6U;
	uint8_t x1287 = 2U;
	uint8_t x1288 = UINT8_MAX;
	static volatile int32_t t19 = -2;

	t19 = (x1285>>(x1286|(x1287<x1288)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1355 = 128U;
	uint16_t x1356 = 5229U;
	static uint32_t t20 = 263483912U;

	t20 = (x1353>>(x1354|(x1355<x1356)));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1373 = UINT16_MAX;
	int32_t t21 = -31598955;

	t21 = (x1373>>(x1374|(x1375<x1376)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1569 = UINT16_MAX;
	uint8_t x1570 = 9U;
	int64_t x1571 = -1LL;
	volatile uint64_t x1572 = UINT64_MAX;

	t22 = (x1569>>(x1570|(x1571<x1572)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1585 = UINT64_MAX;
	int16_t x1586 = 40;
	uint16_t x1587 = UINT16_MAX;
	volatile uint8_t x1588 = 29U;
	volatile uint64_t t23 = 256994826388LLU;

	t23 = (x1585>>(x1586|(x1587<x1588)));

	if (t23 != 16777215LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1661 = 1203449933278393829LL;
	uint16_t x1662 = 0U;
	static volatile uint8_t x1663 = 24U;
	uint16_t x1664 = UINT16_MAX;
	volatile int64_t t24 = -1759001639LL;

	t24 = (x1661>>(x1662|(x1663<x1664)));

	if (t24 != 601724966639196914LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1717 = UINT8_MAX;
	int64_t x1719 = -1LL;
	volatile uint16_t x1720 = 7404U;
	int32_t t25 = -1;

	t25 = (x1717>>(x1718|(x1719<x1720)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1721 = 125716948;
	uint8_t x1722 = 7U;
	static volatile int16_t x1724 = -1;
	static volatile int32_t t26 = 14;

	t26 = (x1721>>(x1722|(x1723<x1724)));

	if (t26 != 982163) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1733 = 0LL;
	uint8_t x1734 = 0U;
	volatile int64_t t27 = -334567951889LL;

	t27 = (x1733>>(x1734|(x1735<x1736)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1789 = INT16_MAX;
	uint32_t x1791 = 798U;
	static int8_t x1792 = 31;
	int32_t t28 = 1;

	t28 = (x1789>>(x1790|(x1791<x1792)));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1793 = 45U;
	uint16_t x1794 = 12U;
	int8_t x1795 = 36;
	uint32_t x1796 = 292031332U;

	t29 = (x1793>>(x1794|(x1795<x1796)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1825 = 13U;
	uint32_t x1826 = 8U;
	int32_t x1827 = -1524253;
	static uint16_t x1828 = 139U;
	static int32_t t30 = 6;

	t30 = (x1825>>(x1826|(x1827<x1828)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1909 = 1U;
	uint8_t x1910 = 0U;
	volatile uint16_t x1911 = 0U;
	int16_t x1912 = INT16_MAX;

	t31 = (x1909>>(x1910|(x1911<x1912)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1981 = 5739921230LLU;
	uint8_t x1982 = 10U;
	int32_t x1983 = -1;
	volatile int16_t x1984 = -1;

	t32 = (x1981>>(x1982|(x1983<x1984)));

	if (t32 != 5605391LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2013 = UINT8_MAX;
	volatile uint32_t x2014 = 9U;
	volatile int16_t x2015 = INT16_MIN;
	static int8_t x2016 = INT8_MIN;
	volatile int32_t t33 = -7;

	t33 = (x2013>>(x2014|(x2015<x2016)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2022 = 1U;
	int16_t x2023 = INT16_MIN;
	int64_t x2024 = INT64_MIN;
	volatile int32_t t34 = -26109;

	t34 = (x2021>>(x2022|(x2023<x2024)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2065 = 0U;
	int32_t x2067 = INT32_MAX;
	volatile int32_t t35 = -5808;

	t35 = (x2065>>(x2066|(x2067<x2068)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2077 = 77U;
	int16_t x2078 = 19;
	static uint32_t x2080 = UINT32_MAX;
	int32_t t36 = -14797;

	t36 = (x2077>>(x2078|(x2079<x2080)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x2257 = INT64_MAX;
	uint8_t x2258 = 1U;
	int8_t x2259 = -1;
	int8_t x2260 = -1;

	t37 = (x2257>>(x2258|(x2259<x2260)));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2341 = INT64_MAX;
	static int8_t x2344 = -1;
	int64_t t38 = -273204LL;

	t38 = (x2341>>(x2342|(x2343<x2344)));

	if (t38 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2397 = 2720;
	volatile uint8_t x2398 = 1U;
	uint8_t x2399 = 0U;
	volatile uint16_t x2400 = 795U;

	t39 = (x2397>>(x2398|(x2399<x2400)));

	if (t39 != 1360) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2434 = 0;
	uint16_t x2435 = 5442U;
	int32_t t40 = 313;

	t40 = (x2433>>(x2434|(x2435<x2436)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2557 = INT8_MAX;
	uint8_t x2558 = 6U;
	int8_t x2559 = INT8_MIN;
	uint64_t x2560 = 3699748462224LLU;

	t41 = (x2557>>(x2558|(x2559<x2560)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2582 = 63U;
	int32_t x2583 = INT32_MIN;
	int8_t x2584 = -6;
	volatile uint64_t t42 = 66988565604LLU;

	t42 = (x2581>>(x2582|(x2583<x2584)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2601 = INT64_MAX;
	int64_t x2602 = 13LL;
	static uint16_t x2603 = 1U;
	int64_t t43 = -15114LL;

	t43 = (x2601>>(x2602|(x2603<x2604)));

	if (t43 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2649 = INT64_MAX;
	int16_t x2650 = 29;
	int64_t x2651 = -1LL;
	static int64_t x2652 = INT64_MAX;
	volatile int64_t t44 = 239LL;

	t44 = (x2649>>(x2650|(x2651<x2652)));

	if (t44 != 17179869183LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x2721 = 150;
	volatile uint16_t x2722 = 0U;
	uint8_t x2723 = 3U;
	uint32_t x2724 = UINT32_MAX;
	int32_t t45 = -2179;

	t45 = (x2721>>(x2722|(x2723<x2724)));

	if (t45 != 75) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x2729 = INT32_MAX;
	static uint8_t x2730 = 14U;
	int64_t x2732 = -1LL;

	t46 = (x2729>>(x2730|(x2731<x2732)));

	if (t46 != 131071) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2761 = 95U;
	int64_t x2762 = 5LL;
	int8_t x2764 = INT8_MIN;
	int32_t t47 = 13;

	t47 = (x2761>>(x2762|(x2763<x2764)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2822 = 3;
	int32_t x2824 = INT32_MIN;
	int32_t t48 = -108242032;

	t48 = (x2821>>(x2822|(x2823<x2824)));

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2853 = 6U;
	static int32_t x2855 = INT32_MIN;
	int32_t x2856 = 49269142;
	int32_t t49 = 21088612;

	t49 = (x2853>>(x2854|(x2855<x2856)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2866 = 15U;
	int32_t x2867 = -2784;
	uint16_t x2868 = 224U;

	t50 = (x2865>>(x2866|(x2867<x2868)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x2873 = UINT16_MAX;
	uint16_t x2874 = 4U;
	int8_t x2875 = INT8_MAX;

	t51 = (x2873>>(x2874|(x2875<x2876)));

	if (t51 != 4095) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2898 = 6U;
	static int32_t x2900 = -8040;

	t52 = (x2897>>(x2898|(x2899<x2900)));

	if (t52 != 3053LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3009 = 80U;
	int8_t x3010 = 3;
	static int16_t x3011 = INT16_MIN;
	uint64_t x3012 = 328649LLU;
	int32_t t53 = 177;

	t53 = (x3009>>(x3010|(x3011<x3012)));

	if (t53 != 10) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3050 = 1;
	static int16_t x3051 = INT16_MIN;
	int8_t x3052 = INT8_MAX;

	t54 = (x3049>>(x3050|(x3051<x3052)));

	if (t54 != 60LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x3334 = 0U;
	volatile int64_t x3335 = INT64_MAX;
	uint8_t x3336 = UINT8_MAX;
	volatile int32_t t55 = -8852;

	t55 = (x3333>>(x3334|(x3335<x3336)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3503 = INT16_MIN;
	static int32_t x3504 = INT32_MIN;
	uint32_t t56 = 31614U;

	t56 = (x3501>>(x3502|(x3503<x3504)));

	if (t56 != 700499655U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3529 = 105093295;
	static uint16_t x3530 = 0U;
	static volatile uint32_t x3532 = 2U;

	t57 = (x3529>>(x3530|(x3531<x3532)));

	if (t57 != 105093295) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3566 = 3;
	volatile int16_t x3567 = INT16_MAX;
	volatile int8_t x3568 = INT8_MIN;
	static int32_t t58 = -516390530;

	t58 = (x3565>>(x3566|(x3567<x3568)));

	if (t58 != 8191) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x3573 = 1082163735625085896LLU;
	uint8_t x3574 = 61U;
	static int16_t x3576 = 403;
	static volatile uint64_t t59 = 211790454659LLU;

	t59 = (x3573>>(x3574|(x3575<x3576)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x3649 = 27239U;
	uint8_t x3650 = 24U;
	static volatile uint8_t x3652 = 5U;
	int32_t t60 = 6323193;

	t60 = (x3649>>(x3650|(x3651<x3652)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3721 = 4089388893081LLU;
	uint64_t x3722 = 2LLU;
	static uint32_t x3724 = 891U;
	volatile uint64_t t61 = 15451484773923505LLU;

	t61 = (x3721>>(x3722|(x3723<x3724)));

	if (t61 != 1022347223270LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3725 = INT16_MAX;
	uint16_t x3726 = 0U;
	volatile int32_t x3727 = INT32_MIN;
	uint64_t x3728 = UINT64_MAX;
	int32_t t62 = -254789;

	t62 = (x3725>>(x3726|(x3727<x3728)));

	if (t62 != 16383) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3829 = 86U;
	static int8_t x3830 = 10;
	static int16_t x3831 = INT16_MIN;
	static int32_t x3832 = 398;
	volatile int32_t t63 = -106;

	t63 = (x3829>>(x3830|(x3831<x3832)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3845 = INT64_MAX;
	int32_t x3847 = INT32_MIN;

	t64 = (x3845>>(x3846|(x3847<x3848)));

	if (t64 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3889 = UINT8_MAX;
	int8_t x3890 = 1;
	volatile int8_t x3891 = INT8_MIN;
	static volatile int32_t x3892 = INT32_MIN;

	t65 = (x3889>>(x3890|(x3891<x3892)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3898 = 2U;
	volatile int64_t x3899 = -1934302524625612LL;
	static int32_t x3900 = -311392582;
	static volatile int64_t t66 = 68657744089270991LL;

	t66 = (x3897>>(x3898|(x3899<x3900)));

	if (t66 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3925 = 7577755383548200LLU;
	volatile uint16_t x3927 = UINT16_MAX;

	t67 = (x3925>>(x3926|(x3927<x3928)));

	if (t67 != 947219422943525LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4005 = 14U;
	uint32_t x4006 = 1U;
	static int16_t x4007 = INT16_MAX;
	uint32_t x4008 = 31U;
	int32_t t68 = 15;

	t68 = (x4005>>(x4006|(x4007<x4008)));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4017 = 38438504;
	static uint16_t x4018 = 1U;
	static int32_t x4019 = INT32_MIN;
	uint64_t x4020 = 24219466LLU;
	volatile int32_t t69 = 1;

	t69 = (x4017>>(x4018|(x4019<x4020)));

	if (t69 != 19219252) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4157 = INT16_MAX;
	uint16_t x4158 = 1U;
	int8_t x4159 = 0;
	uint16_t x4160 = UINT16_MAX;
	volatile int32_t t70 = -7393;

	t70 = (x4157>>(x4158|(x4159<x4160)));

	if (t70 != 16383) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4161 = 3U;
	static uint8_t x4162 = 21U;
	int8_t x4163 = -16;

	t71 = (x4161>>(x4162|(x4163<x4164)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4197 = UINT8_MAX;
	uint8_t x4198 = 1U;
	volatile uint64_t x4199 = 27462LLU;
	volatile uint8_t x4200 = UINT8_MAX;
	int32_t t72 = -456943;

	t72 = (x4197>>(x4198|(x4199<x4200)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4329 = 220U;
	int16_t x4330 = 0;
	int8_t x4331 = INT8_MAX;
	int8_t x4332 = INT8_MAX;
	uint32_t t73 = 1933U;

	t73 = (x4329>>(x4330|(x4331<x4332)));

	if (t73 != 220U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4449 = INT64_MAX;
	uint8_t x4451 = UINT8_MAX;
	uint64_t x4452 = 1576577LLU;
	volatile int64_t t74 = -26708LL;

	t74 = (x4449>>(x4450|(x4451<x4452)));

	if (t74 != 4095LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x4501 = 60U;
	volatile int8_t x4502 = 6;
	int32_t x4503 = 14;
	int8_t x4504 = 9;

	t75 = (x4501>>(x4502|(x4503<x4504)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4546 = 0;
	uint64_t x4547 = UINT64_MAX;
	int32_t x4548 = INT32_MIN;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x4545>>(x4546|(x4547<x4548)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4617 = 66099872839788388LLU;
	static uint32_t x4618 = 1U;
	uint8_t x4619 = UINT8_MAX;
	static uint64_t t77 = 1623LLU;

	t77 = (x4617>>(x4618|(x4619<x4620)));

	if (t77 != 33049936419894194LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4689 = INT32_MAX;
	static int8_t x4690 = 1;
	static uint16_t x4691 = 400U;
	static volatile int16_t x4692 = INT16_MAX;
	int32_t t78 = -3763268;

	t78 = (x4689>>(x4690|(x4691<x4692)));

	if (t78 != 1073741823) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4818 = 6LLU;
	static int16_t x4819 = -1;
	int64_t x4820 = -2506910045630050297LL;
	int32_t t79 = -2606;

	t79 = (x4817>>(x4818|(x4819<x4820)));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4861 = 1317501U;
	uint8_t x4862 = 12U;
	volatile int16_t x4863 = 3867;
	int32_t x4864 = INT32_MIN;
	volatile uint32_t t80 = 8301076U;

	t80 = (x4861>>(x4862|(x4863<x4864)));

	if (t80 != 321U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4950 = 1;
	static uint32_t x4951 = 3U;
	static int16_t x4952 = -1;
	int32_t t81 = 146;

	t81 = (x4949>>(x4950|(x4951<x4952)));

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5043 = INT32_MIN;
	int8_t x5044 = INT8_MAX;

	t82 = (x5041>>(x5042|(x5043<x5044)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5101 = INT16_MAX;
	uint8_t x5102 = 6U;
	uint64_t x5103 = 3559940686LLU;
	int32_t x5104 = INT32_MIN;
	int32_t t83 = 404224926;

	t83 = (x5101>>(x5102|(x5103<x5104)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5217 = 9U;
	volatile int16_t x5218 = 23;
	static int16_t x5219 = -1026;

	t84 = (x5217>>(x5218|(x5219<x5220)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5309 = UINT64_MAX;
	volatile uint32_t x5310 = 1U;
	uint8_t x5311 = UINT8_MAX;
	static int8_t x5312 = -15;

	t85 = (x5309>>(x5310|(x5311<x5312)));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5385 = UINT64_MAX;
	int8_t x5386 = 47;
	int64_t x5387 = INT64_MIN;
	static uint8_t x5388 = 65U;
	volatile uint64_t t86 = 4391456012754836LLU;

	t86 = (x5385>>(x5386|(x5387<x5388)));

	if (t86 != 131071LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5429 = 62LL;
	int32_t x5430 = 1;
	uint8_t x5431 = UINT8_MAX;
	volatile uint32_t x5432 = 2589064U;

	t87 = (x5429>>(x5430|(x5431<x5432)));

	if (t87 != 31LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5461 = UINT8_MAX;
	volatile uint8_t x5462 = 3U;
	int8_t x5463 = INT8_MAX;
	uint32_t x5464 = UINT32_MAX;

	t88 = (x5461>>(x5462|(x5463<x5464)));

	if (t88 != 31) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5477 = 5440U;
	int8_t x5478 = 0;

	t89 = (x5477>>(x5478|(x5479<x5480)));

	if (t89 != 5440) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x5489 = 778U;
	static int16_t x5491 = -1;
	static volatile int8_t x5492 = -15;
	static volatile int32_t t90 = 43;

	t90 = (x5489>>(x5490|(x5491<x5492)));

	if (t90 != 778) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5566 = 10U;
	uint64_t x5567 = 4625729785715977852LLU;
	int8_t x5568 = INT8_MAX;

	t91 = (x5565>>(x5566|(x5567<x5568)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5570 = 24U;
	volatile int32_t x5571 = 3941;
	static int8_t x5572 = INT8_MIN;
	volatile int32_t t92 = 245015889;

	t92 = (x5569>>(x5570|(x5571<x5572)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5581 = 696;
	int8_t x5582 = 18;
	uint32_t x5583 = 3732234U;
	volatile int16_t x5584 = INT16_MAX;
	volatile int32_t t93 = -882965690;

	t93 = (x5581>>(x5582|(x5583<x5584)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5661 = INT64_MAX;
	static volatile int8_t x5663 = -15;
	static int16_t x5664 = 6639;
	volatile int64_t t94 = -9308140LL;

	t94 = (x5661>>(x5662|(x5663<x5664)));

	if (t94 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5713 = 0U;
	int8_t x5714 = 1;
	uint64_t x5715 = 22150682300517LLU;
	int64_t x5716 = INT64_MAX;
	volatile int32_t t95 = 102053828;

	t95 = (x5713>>(x5714|(x5715<x5716)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5802 = 1;
	int32_t x5803 = INT32_MAX;
	int32_t x5804 = INT32_MIN;
	uint32_t t96 = 1998U;

	t96 = (x5801>>(x5802|(x5803<x5804)));

	if (t96 != 231400U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5822 = 3U;
	volatile int8_t x5823 = INT8_MAX;
	volatile int16_t x5824 = INT16_MIN;
	static int32_t t97 = 2413690;

	t97 = (x5821>>(x5822|(x5823<x5824)));

	if (t97 != 190) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5833 = 7U;
	uint8_t x5834 = 19U;
	volatile int32_t x5835 = INT32_MIN;
	volatile uint8_t x5836 = 82U;
	volatile int32_t t98 = 483;

	t98 = (x5833>>(x5834|(x5835<x5836)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5977 = 0;
	uint8_t x5978 = 7U;
	int32_t x5979 = -1;
	volatile int32_t x5980 = -903487;
	static int32_t t99 = 9490830;

	t99 = (x5977>>(x5978|(x5979<x5980)));

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

