#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x337 = 40;
uint64_t x340 = 13005LLU;
volatile int32_t t1 = 4773034;
uint16_t x713 = 23U;
int32_t x716 = INT32_MIN;
volatile uint16_t x800 = UINT16_MAX;
uint8_t x853 = 5U;
uint32_t x855 = 5U;
static volatile int16_t x1021 = 2697;
static volatile uint16_t x1022 = 0U;
volatile int16_t x1090 = 0;
uint32_t x1207 = 288137U;
int16_t x1476 = 1;
volatile uint16_t x1584 = 1U;
int32_t t17 = 12;
uint32_t x1753 = 64156U;
static int32_t t18 = 2399;
int32_t x1758 = 5;
int64_t x1823 = 407887001201LL;
int16_t x1876 = INT16_MIN;
int8_t x2090 = 3;
uint8_t x2122 = 28U;
int32_t t26 = 498;
int64_t x2145 = 0LL;
int32_t x2268 = INT32_MIN;
volatile uint16_t x2399 = 4041U;
int32_t x2447 = INT32_MAX;
static uint64_t x2577 = UINT64_MAX;
volatile int64_t x2578 = 6LL;
int8_t x2732 = INT8_MIN;
volatile int32_t x2820 = INT32_MIN;
static volatile int32_t t37 = -1309602;
uint8_t x2857 = 5U;
int64_t x2859 = -719648438865LL;
uint32_t x2862 = 6U;
static int32_t x2863 = INT32_MIN;
int32_t t39 = 167;
uint64_t x2897 = UINT64_MAX;
volatile uint16_t x2898 = 6U;
int32_t t40 = 265399;
static volatile int16_t x3006 = 6;
volatile int32_t t41 = -16455718;
uint8_t x3310 = 1U;
uint16_t x3349 = 36U;
uint8_t x3428 = 7U;
int8_t x3467 = -1;
static int8_t x3477 = INT8_MAX;
uint8_t x3478 = 24U;
int16_t x3479 = -2;
uint8_t x3893 = UINT8_MAX;
static int64_t x3896 = 13377954431LL;
int32_t t48 = 4;
volatile int8_t x3921 = 1;
uint16_t x3974 = 2U;
static int16_t x4117 = INT16_MAX;
static volatile uint8_t x4220 = UINT8_MAX;
int32_t x4368 = INT32_MAX;
volatile int32_t t55 = -985370987;
volatile int32_t t60 = -2122;
static int64_t x5147 = INT64_MAX;
uint8_t x5148 = UINT8_MAX;
volatile int32_t t61 = -1;
static volatile int16_t x5597 = 0;
uint32_t x5598 = 3U;
int64_t x5673 = 302LL;
int16_t x5676 = -1;
static volatile int32_t t65 = 12934359;
uint64_t x6201 = 157024613LLU;
static volatile int8_t x6202 = 2;
int32_t x6204 = -1;
int32_t t70 = -22424725;
uint64_t x6529 = UINT64_MAX;
uint64_t x6641 = 3307524190536587LLU;
static int8_t x6644 = INT8_MIN;
volatile int32_t t72 = -36349104;
static volatile uint64_t x6670 = 13LLU;
uint32_t x6671 = UINT32_MAX;
static volatile uint32_t x6825 = UINT32_MAX;
volatile int16_t x6880 = -53;
static uint32_t x6921 = 1261229U;
int64_t x7072 = -8955087724LL;
volatile int32_t t79 = -13202;
int32_t x7395 = INT32_MIN;
uint64_t x7623 = 28194749575LLU;
static int64_t x7877 = 1LL;
int32_t x7879 = 182404211;
static int16_t x8031 = INT16_MIN;
static volatile int32_t t90 = 7;
int8_t x8204 = INT8_MIN;
static volatile int16_t x8404 = INT16_MAX;
static uint16_t x8460 = 5U;
static volatile int16_t x8490 = 1;
static int8_t x8518 = 0;
uint32_t x8759 = UINT32_MAX;
uint64_t x8760 = 2022LLU;


void f0(void) {
	uint16_t x145 = 4013U;
	static uint8_t x146 = 6U;
	uint16_t x147 = 1633U;
	int8_t x148 = -1;
	volatile int32_t t0 = 1;

	t0 = ((x145<<x146)<(x147<x148));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x338 = 14U;
	int32_t x339 = INT32_MIN;

	t1 = ((x337<<x338)<(x339<x340));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x714 = 6;
	volatile int16_t x715 = INT16_MIN;
	int32_t t2 = 367;

	t2 = ((x713<<x714)<(x715<x716));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x797 = UINT16_MAX;
	uint8_t x798 = 4U;
	int64_t x799 = -67LL;
	volatile int32_t t3 = 1287899;

	t3 = ((x797<<x798)<(x799<x800));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x854 = 8;
	uint64_t x856 = UINT64_MAX;
	volatile int32_t t4 = -9069;

	t4 = ((x853<<x854)<(x855<x856));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x881 = 9U;
	static uint64_t x882 = 22LLU;
	static volatile uint64_t x883 = UINT64_MAX;
	static int64_t x884 = INT64_MIN;
	volatile int32_t t5 = -2458714;

	t5 = ((x881<<x882)<(x883<x884));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x1023 = UINT8_MAX;
	int32_t x1024 = INT32_MIN;
	static int32_t t6 = -5437;

	t6 = ((x1021<<x1022)<(x1023<x1024));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x1089 = 3U;
	uint32_t x1091 = 1372365U;
	int64_t x1092 = -1LL;
	volatile int32_t t7 = -886805718;

	t7 = ((x1089<<x1090)<(x1091<x1092));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1113 = 104565LL;
	int8_t x1114 = 1;
	volatile int8_t x1115 = INT8_MIN;
	static int16_t x1116 = 227;
	volatile int32_t t8 = -16;

	t8 = ((x1113<<x1114)<(x1115<x1116));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x1205 = 11U;
	uint8_t x1206 = 2U;
	volatile uint16_t x1208 = 5U;
	volatile int32_t t9 = -18129;

	t9 = ((x1205<<x1206)<(x1207<x1208));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1221 = UINT8_MAX;
	static volatile uint16_t x1222 = 5U;
	int16_t x1223 = 80;
	int32_t x1224 = INT32_MIN;
	int32_t t10 = 25233;

	t10 = ((x1221<<x1222)<(x1223<x1224));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x1285 = 24206U;
	int8_t x1286 = 1;
	int32_t x1287 = -1;
	int32_t x1288 = INT32_MIN;
	volatile int32_t t11 = 64213;

	t11 = ((x1285<<x1286)<(x1287<x1288));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1413 = INT16_MAX;
	uint64_t x1414 = 15LLU;
	int64_t x1415 = -66114987643LL;
	uint16_t x1416 = UINT16_MAX;
	volatile int32_t t12 = 5;

	t12 = ((x1413<<x1414)<(x1415<x1416));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x1425 = 6494830LLU;
	uint8_t x1426 = 60U;
	uint16_t x1427 = 9973U;
	int16_t x1428 = INT16_MIN;
	volatile int32_t t13 = 36;

	t13 = ((x1425<<x1426)<(x1427<x1428));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1473 = 6181U;
	volatile int8_t x1474 = 7;
	uint32_t x1475 = 11008146U;
	int32_t t14 = 0;

	t14 = ((x1473<<x1474)<(x1475<x1476));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x1581 = 4U;
	int8_t x1582 = 0;
	static uint16_t x1583 = 53U;
	volatile int32_t t15 = 2976103;

	t15 = ((x1581<<x1582)<(x1583<x1584));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1637 = 1406U;
	static uint32_t x1638 = 31U;
	uint16_t x1639 = 2659U;
	volatile int16_t x1640 = INT16_MIN;
	int32_t t16 = 62065566;

	t16 = ((x1637<<x1638)<(x1639<x1640));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1721 = INT8_MAX;
	int8_t x1722 = 3;
	static int64_t x1723 = -1LL;
	volatile int16_t x1724 = 2;

	t17 = ((x1721<<x1722)<(x1723<x1724));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1754 = 3;
	static int32_t x1755 = -412;
	uint16_t x1756 = 1770U;

	t18 = ((x1753<<x1754)<(x1755<x1756));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1757 = 62U;
	int8_t x1759 = INT8_MIN;
	uint32_t x1760 = 5564U;
	volatile int32_t t19 = 309;

	t19 = ((x1757<<x1758)<(x1759<x1760));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1809 = INT8_MAX;
	static uint16_t x1810 = 11U;
	int32_t x1811 = INT32_MIN;
	uint64_t x1812 = 40818956LLU;
	int32_t t20 = -299730;

	t20 = ((x1809<<x1810)<(x1811<x1812));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1821 = INT8_MAX;
	static int8_t x1822 = 22;
	static volatile uint64_t x1824 = 1LLU;
	volatile int32_t t21 = -1;

	t21 = ((x1821<<x1822)<(x1823<x1824));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1873 = 41786929302363LL;
	static int8_t x1874 = 15;
	int64_t x1875 = -498798282LL;
	volatile int32_t t22 = -16525212;

	t22 = ((x1873<<x1874)<(x1875<x1876));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1993 = 120268883167LLU;
	volatile uint16_t x1994 = 0U;
	volatile int8_t x1995 = -1;
	int8_t x1996 = INT8_MAX;
	int32_t t23 = -1136833;

	t23 = ((x1993<<x1994)<(x1995<x1996));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x2013 = 264461494U;
	uint16_t x2014 = 24U;
	static int64_t x2015 = INT64_MIN;
	uint64_t x2016 = 929705017LLU;
	int32_t t24 = -3;

	t24 = ((x2013<<x2014)<(x2015<x2016));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2089 = 1;
	volatile uint16_t x2091 = UINT16_MAX;
	int8_t x2092 = INT8_MIN;
	int32_t t25 = 948695;

	t25 = ((x2089<<x2090)<(x2091<x2092));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x2121 = 92228785300390LLU;
	uint8_t x2123 = 5U;
	volatile int32_t x2124 = -185426368;

	t26 = ((x2121<<x2122)<(x2123<x2124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2146 = 27U;
	volatile int32_t x2147 = INT32_MAX;
	static int32_t x2148 = -1;
	int32_t t27 = -13877768;

	t27 = ((x2145<<x2146)<(x2147<x2148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2265 = 260005013U;
	volatile int32_t x2266 = 11;
	int64_t x2267 = -1LL;
	int32_t t28 = 446;

	t28 = ((x2265<<x2266)<(x2267<x2268));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x2353 = 1;
	int8_t x2354 = 11;
	int64_t x2355 = 5616765982679LL;
	int64_t x2356 = 149089LL;
	int32_t t29 = 130683;

	t29 = ((x2353<<x2354)<(x2355<x2356));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2397 = UINT32_MAX;
	static volatile uint8_t x2398 = 0U;
	static int16_t x2400 = -28;
	volatile int32_t t30 = -16564;

	t30 = ((x2397<<x2398)<(x2399<x2400));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x2445 = UINT32_MAX;
	uint16_t x2446 = 0U;
	uint8_t x2448 = UINT8_MAX;
	static int32_t t31 = -2;

	t31 = ((x2445<<x2446)<(x2447<x2448));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2553 = 1585U;
	uint8_t x2554 = 0U;
	volatile int8_t x2555 = INT8_MAX;
	uint32_t x2556 = UINT32_MAX;
	volatile int32_t t32 = -74368;

	t32 = ((x2553<<x2554)<(x2555<x2556));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2579 = 2U;
	static volatile int64_t x2580 = 162116064134275LL;
	int32_t t33 = 8525;

	t33 = ((x2577<<x2578)<(x2579<x2580));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2621 = 2;
	static uint16_t x2622 = 19U;
	int64_t x2623 = INT64_MIN;
	int64_t x2624 = INT64_MAX;
	static volatile int32_t t34 = -145529756;

	t34 = ((x2621<<x2622)<(x2623<x2624));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2729 = 97131267U;
	uint64_t x2730 = 11LLU;
	int64_t x2731 = INT64_MIN;
	static volatile int32_t t35 = 12810;

	t35 = ((x2729<<x2730)<(x2731<x2732));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2813 = 10U;
	volatile uint8_t x2814 = 16U;
	int32_t x2815 = -7200;
	volatile int8_t x2816 = INT8_MIN;
	volatile int32_t t36 = 1;

	t36 = ((x2813<<x2814)<(x2815<x2816));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2817 = 1U;
	int8_t x2818 = 0;
	int16_t x2819 = 37;

	t37 = ((x2817<<x2818)<(x2819<x2820));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x2858 = 2U;
	volatile int32_t x2860 = 10;
	volatile int32_t t38 = -107410;

	t38 = ((x2857<<x2858)<(x2859<x2860));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2861 = 1890LL;
	volatile int16_t x2864 = 0;

	t39 = ((x2861<<x2862)<(x2863<x2864));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2899 = INT16_MIN;
	int64_t x2900 = INT64_MIN;

	t40 = ((x2897<<x2898)<(x2899<x2900));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x3005 = 54394414981933LL;
	int8_t x3007 = -1;
	int16_t x3008 = -1;

	t41 = ((x3005<<x3006)<(x3007<x3008));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3309 = INT8_MAX;
	static int16_t x3311 = INT16_MIN;
	int64_t x3312 = 172855202LL;
	int32_t t42 = 4;

	t42 = ((x3309<<x3310)<(x3311<x3312));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3350 = 0U;
	volatile int8_t x3351 = 0;
	volatile int32_t x3352 = 62680587;
	volatile int32_t t43 = -155994;

	t43 = ((x3349<<x3350)<(x3351<x3352));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3425 = INT8_MAX;
	int32_t x3426 = 13;
	uint16_t x3427 = 25U;
	int32_t t44 = 0;

	t44 = ((x3425<<x3426)<(x3427<x3428));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3465 = 388672LL;
	uint8_t x3466 = 18U;
	uint16_t x3468 = UINT16_MAX;
	volatile int32_t t45 = -3428895;

	t45 = ((x3465<<x3466)<(x3467<x3468));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3480 = UINT32_MAX;
	static volatile int32_t t46 = -597273300;

	t46 = ((x3477<<x3478)<(x3479<x3480));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3737 = UINT32_MAX;
	uint16_t x3738 = 2U;
	uint16_t x3739 = UINT16_MAX;
	static int64_t x3740 = INT64_MIN;
	int32_t t47 = -149900305;

	t47 = ((x3737<<x3738)<(x3739<x3740));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3894 = 0U;
	uint16_t x3895 = 166U;

	t48 = ((x3893<<x3894)<(x3895<x3896));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3922 = 17U;
	int16_t x3923 = INT16_MIN;
	static volatile int16_t x3924 = 700;
	static int32_t t49 = 16966;

	t49 = ((x3921<<x3922)<(x3923<x3924));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3937 = 120050155202LLU;
	int64_t x3938 = 46LL;
	static int32_t x3939 = INT32_MIN;
	static volatile int32_t x3940 = 2896;
	int32_t t50 = 102921993;

	t50 = ((x3937<<x3938)<(x3939<x3940));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x3973 = 6359390U;
	uint16_t x3975 = UINT16_MAX;
	uint16_t x3976 = 1U;
	int32_t t51 = 9244;

	t51 = ((x3973<<x3974)<(x3975<x3976));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4118 = 1U;
	int32_t x4119 = 1873118;
	static int8_t x4120 = -1;
	int32_t t52 = 24;

	t52 = ((x4117<<x4118)<(x4119<x4120));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x4213 = 186551007361LL;
	uint8_t x4214 = 1U;
	int16_t x4215 = -50;
	static volatile uint16_t x4216 = 13578U;
	int32_t t53 = 2569;

	t53 = ((x4213<<x4214)<(x4215<x4216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x4217 = UINT16_MAX;
	uint8_t x4218 = 7U;
	volatile int16_t x4219 = -1221;
	static int32_t t54 = 480715;

	t54 = ((x4217<<x4218)<(x4219<x4220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x4365 = UINT8_MAX;
	volatile uint16_t x4366 = 13U;
	int8_t x4367 = INT8_MIN;

	t55 = ((x4365<<x4366)<(x4367<x4368));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4401 = 1930LL;
	uint8_t x4402 = 1U;
	int16_t x4403 = 4;
	static uint64_t x4404 = UINT64_MAX;
	int32_t t56 = 94292981;

	t56 = ((x4401<<x4402)<(x4403<x4404));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4445 = 1U;
	static int16_t x4446 = 1;
	volatile int16_t x4447 = INT16_MAX;
	int16_t x4448 = 7806;
	int32_t t57 = -5208;

	t57 = ((x4445<<x4446)<(x4447<x4448));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x4593 = 528;
	static uint32_t x4594 = 1U;
	int64_t x4595 = -3LL;
	int64_t x4596 = 32371LL;
	int32_t t58 = -238696422;

	t58 = ((x4593<<x4594)<(x4595<x4596));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x4973 = 80U;
	static uint64_t x4974 = 8LLU;
	volatile int32_t x4975 = INT32_MIN;
	volatile uint16_t x4976 = 2U;
	int32_t t59 = -4;

	t59 = ((x4973<<x4974)<(x4975<x4976));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x5057 = UINT32_MAX;
	volatile uint8_t x5058 = 11U;
	uint64_t x5059 = 2108683485LLU;
	volatile uint16_t x5060 = 81U;

	t60 = ((x5057<<x5058)<(x5059<x5060));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x5145 = 266008089LL;
	volatile uint8_t x5146 = 1U;

	t61 = ((x5145<<x5146)<(x5147<x5148));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x5509 = INT32_MAX;
	int8_t x5510 = 0;
	static int16_t x5511 = 2;
	uint32_t x5512 = 35897U;
	int32_t t62 = -1;

	t62 = ((x5509<<x5510)<(x5511<x5512));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x5599 = INT32_MIN;
	int32_t x5600 = -2;
	volatile int32_t t63 = -117;

	t63 = ((x5597<<x5598)<(x5599<x5600));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x5674 = 17;
	static int16_t x5675 = -2497;
	int32_t t64 = 126783;

	t64 = ((x5673<<x5674)<(x5675<x5676));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5777 = 53;
	int8_t x5778 = 1;
	int8_t x5779 = INT8_MAX;
	int64_t x5780 = -3103485LL;

	t65 = ((x5777<<x5778)<(x5779<x5780));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x5813 = 12847931U;
	int32_t x5814 = 1;
	uint16_t x5815 = 27756U;
	uint64_t x5816 = UINT64_MAX;
	int32_t t66 = 1953558;

	t66 = ((x5813<<x5814)<(x5815<x5816));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x6101 = 3;
	static int16_t x6102 = 3;
	uint16_t x6103 = 0U;
	volatile int8_t x6104 = 1;
	volatile int32_t t67 = -10043373;

	t67 = ((x6101<<x6102)<(x6103<x6104));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x6125 = 2008900682LL;
	uint8_t x6126 = 15U;
	int8_t x6127 = INT8_MIN;
	static volatile uint8_t x6128 = 5U;
	static volatile int32_t t68 = -1;

	t68 = ((x6125<<x6126)<(x6127<x6128));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x6203 = INT16_MIN;
	int32_t t69 = 20;

	t69 = ((x6201<<x6202)<(x6203<x6204));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x6513 = 8U;
	uint32_t x6514 = 17U;
	static int16_t x6515 = 15100;
	int32_t x6516 = -920822291;

	t70 = ((x6513<<x6514)<(x6515<x6516));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x6530 = 2U;
	int64_t x6531 = 155928438LL;
	int32_t x6532 = 663438935;
	static volatile int32_t t71 = 252930;

	t71 = ((x6529<<x6530)<(x6531<x6532));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x6642 = 1;
	volatile int64_t x6643 = INT64_MIN;

	t72 = ((x6641<<x6642)<(x6643<x6644));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x6657 = 1;
	volatile int8_t x6658 = 11;
	uint32_t x6659 = UINT32_MAX;
	int16_t x6660 = INT16_MAX;
	static int32_t t73 = 4073022;

	t73 = ((x6657<<x6658)<(x6659<x6660));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x6669 = INT8_MAX;
	volatile uint64_t x6672 = UINT64_MAX;
	volatile int32_t t74 = 0;

	t74 = ((x6669<<x6670)<(x6671<x6672));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x6693 = UINT16_MAX;
	int8_t x6694 = 0;
	uint8_t x6695 = UINT8_MAX;
	int16_t x6696 = INT16_MIN;
	volatile int32_t t75 = -3859;

	t75 = ((x6693<<x6694)<(x6695<x6696));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x6826 = 3U;
	uint16_t x6827 = 11U;
	int16_t x6828 = INT16_MIN;
	int32_t t76 = 2;

	t76 = ((x6825<<x6826)<(x6827<x6828));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x6877 = 4017934661932696LLU;
	uint16_t x6878 = 4U;
	static int64_t x6879 = INT64_MIN;
	static int32_t t77 = -87;

	t77 = ((x6877<<x6878)<(x6879<x6880));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x6922 = 4;
	volatile int8_t x6923 = 9;
	int64_t x6924 = INT64_MAX;
	static int32_t t78 = -1;

	t78 = ((x6921<<x6922)<(x6923<x6924));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x7069 = INT8_MAX;
	static uint8_t x7070 = 3U;
	uint16_t x7071 = UINT16_MAX;

	t79 = ((x7069<<x7070)<(x7071<x7072));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x7161 = UINT16_MAX;
	uint16_t x7162 = 1U;
	int16_t x7163 = INT16_MAX;
	static int16_t x7164 = 50;
	volatile int32_t t80 = -618766;

	t80 = ((x7161<<x7162)<(x7163<x7164));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x7185 = 4U;
	int64_t x7186 = 23LL;
	int64_t x7187 = INT64_MIN;
	int16_t x7188 = INT16_MIN;
	int32_t t81 = 33;

	t81 = ((x7185<<x7186)<(x7187<x7188));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x7341 = 112714891495059LL;
	int8_t x7342 = 8;
	volatile int32_t x7343 = INT32_MIN;
	int64_t x7344 = INT64_MIN;
	int32_t t82 = -4492;

	t82 = ((x7341<<x7342)<(x7343<x7344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x7393 = 2855U;
	volatile int16_t x7394 = 6;
	volatile int64_t x7396 = 5670751LL;
	int32_t t83 = -385951026;

	t83 = ((x7393<<x7394)<(x7395<x7396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x7425 = 313431LLU;
	int8_t x7426 = 5;
	int64_t x7427 = -410311833069LL;
	static volatile uint16_t x7428 = 26605U;
	int32_t t84 = -545;

	t84 = ((x7425<<x7426)<(x7427<x7428));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x7621 = 0LL;
	uint16_t x7622 = 38U;
	int32_t x7624 = INT32_MIN;
	volatile int32_t t85 = -74524106;

	t85 = ((x7621<<x7622)<(x7623<x7624));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x7837 = 242U;
	static volatile uint16_t x7838 = 4U;
	int16_t x7839 = 0;
	volatile int16_t x7840 = INT16_MIN;
	static int32_t t86 = 8135634;

	t86 = ((x7837<<x7838)<(x7839<x7840));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x7878 = 11U;
	int16_t x7880 = 13306;
	volatile int32_t t87 = 6;

	t87 = ((x7877<<x7878)<(x7879<x7880));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x7893 = UINT32_MAX;
	static volatile uint8_t x7894 = 0U;
	int64_t x7895 = -18513954625LL;
	uint16_t x7896 = 533U;
	volatile int32_t t88 = 20010;

	t88 = ((x7893<<x7894)<(x7895<x7896));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x8029 = 490381586670530LLU;
	static int8_t x8030 = 0;
	int32_t x8032 = INT32_MAX;
	volatile int32_t t89 = 1;

	t89 = ((x8029<<x8030)<(x8031<x8032));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x8057 = 51;
	uint32_t x8058 = 3U;
	int32_t x8059 = -1;
	static int32_t x8060 = -45525056;

	t90 = ((x8057<<x8058)<(x8059<x8060));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x8065 = UINT8_MAX;
	uint32_t x8066 = 1U;
	int64_t x8067 = 618015745533023677LL;
	uint16_t x8068 = 2554U;
	static volatile int32_t t91 = -17703502;

	t91 = ((x8065<<x8066)<(x8067<x8068));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x8089 = INT16_MAX;
	uint8_t x8090 = 5U;
	int64_t x8091 = -1LL;
	uint64_t x8092 = 88967742770088LLU;
	volatile int32_t t92 = -237;

	t92 = ((x8089<<x8090)<(x8091<x8092));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x8201 = 6U;
	static int8_t x8202 = 3;
	int8_t x8203 = INT8_MIN;
	int32_t t93 = -11433899;

	t93 = ((x8201<<x8202)<(x8203<x8204));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x8401 = UINT8_MAX;
	uint32_t x8402 = 16U;
	uint32_t x8403 = 116445924U;
	volatile int32_t t94 = -704516383;

	t94 = ((x8401<<x8402)<(x8403<x8404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x8457 = UINT16_MAX;
	static uint8_t x8458 = 3U;
	int64_t x8459 = -1LL;
	int32_t t95 = -51961;

	t95 = ((x8457<<x8458)<(x8459<x8460));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x8489 = 18U;
	int64_t x8491 = INT64_MAX;
	uint64_t x8492 = 5389826LLU;
	static volatile int32_t t96 = 1287;

	t96 = ((x8489<<x8490)<(x8491<x8492));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x8517 = 114U;
	uint8_t x8519 = 16U;
	static int32_t x8520 = 483237285;
	volatile int32_t t97 = 3178589;

	t97 = ((x8517<<x8518)<(x8519<x8520));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x8685 = UINT16_MAX;
	static volatile int64_t x8686 = 0LL;
	uint8_t x8687 = 101U;
	int32_t x8688 = INT32_MIN;
	volatile int32_t t98 = -1286965;

	t98 = ((x8685<<x8686)<(x8687<x8688));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x8757 = INT8_MAX;
	volatile int8_t x8758 = 0;
	static volatile int32_t t99 = 791997429;

	t99 = ((x8757<<x8758)<(x8759<x8760));

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

