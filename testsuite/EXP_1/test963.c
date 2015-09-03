#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x16 = -26;
int16_t x192 = INT16_MIN;
int8_t x218 = 0;
int16_t x219 = INT16_MIN;
uint16_t x322 = 23U;
volatile int16_t x383 = INT16_MAX;
volatile uint64_t x384 = 185236603166481LLU;
volatile uint64_t t5 = 0LLU;
uint8_t x414 = 2U;
uint8_t x416 = 0U;
static volatile int16_t x419 = INT16_MIN;
uint8_t x422 = 3U;
int64_t t8 = -8509506LL;
volatile uint8_t x479 = 31U;
volatile uint16_t x622 = 1U;
int8_t x782 = 4;
static int64_t x855 = INT64_MIN;
int32_t x899 = INT32_MIN;
static volatile int32_t t17 = 6846;
int16_t x1018 = 1;
static volatile uint64_t x1225 = 261092974649467LLU;
volatile int8_t x1228 = -1;
static volatile int32_t t23 = -311055;
int32_t t25 = -15;
int64_t x1823 = -1LL;
int16_t x1824 = 1;
static int64_t x1861 = 1263LL;
uint16_t x1916 = UINT16_MAX;
int64_t t30 = INT64_MAX;
int16_t x2166 = 0;
uint16_t x2184 = UINT16_MAX;
int32_t t32 = 383889061;
int32_t x2290 = 0;
int64_t t34 = 45983275LL;
int32_t x2331 = INT32_MIN;
int16_t x2429 = INT16_MAX;
static uint8_t x2430 = 5U;
static int32_t x2431 = INT32_MAX;
volatile int32_t t38 = 370;
static uint8_t x2649 = 98U;
int8_t x2821 = 1;
uint16_t x2824 = UINT16_MAX;
static int16_t x2829 = 2;
int64_t x2831 = 353535713202230679LL;
int64_t x2917 = 244086548750LL;
static volatile int32_t x2918 = 2;
uint8_t x3098 = 16U;
int64_t x3203 = INT64_MIN;
static uint8_t x3505 = 29U;
static int16_t x3508 = -1;
uint64_t x3584 = 32110LLU;
uint8_t x3678 = 13U;
uint16_t x3717 = 285U;
int32_t t58 = 14386033;
volatile int64_t x3956 = -1LL;
volatile int64_t t59 = -6LL;
static volatile uint32_t x4049 = 69267936U;
uint8_t x4050 = 2U;
static uint16_t x4086 = 3U;
int64_t t61 = INT64_MAX;
volatile uint8_t x4146 = 11U;
int64_t x4243 = -1LL;
volatile int8_t x4273 = 5;
int8_t x4276 = -2;
volatile uint16_t x4310 = 1U;
static uint8_t x4312 = 97U;
int8_t x4495 = -1;
uint8_t x4638 = 17U;
static uint8_t x4639 = 0U;
uint16_t x4871 = 2U;
int8_t x5103 = INT8_MAX;
volatile int8_t x5154 = 29;
volatile uint64_t x5292 = 2487180209LLU;
int16_t x5349 = 11;
int64_t x5485 = 97LL;
int16_t x5487 = -1;
static int32_t x5623 = 26556;
static int8_t x5666 = 1;
volatile int64_t x5706 = 5LL;
int32_t x5707 = -1;
volatile uint8_t x5708 = 2U;
int8_t x5787 = -1;
uint16_t x6033 = 9U;
static uint8_t x6034 = 1U;
uint8_t x6050 = 0U;
uint16_t x6133 = 2U;
volatile int8_t x6262 = 0;
static uint16_t x6263 = 1U;
volatile uint64_t t95 = 90356891340671791LLU;
volatile int64_t x6289 = 1502424848463617151LL;
static uint64_t x6381 = 2190286088706LLU;
int32_t x6383 = -1;
static volatile uint32_t x6393 = 41657U;


void f0(void) {
	uint32_t x13 = UINT32_MAX;
	int64_t x14 = 0LL;
	int32_t x15 = INT32_MIN;
	int32_t t0 = 7;

	t0 = (((x13<<x14)<=x15)+x16);

	if (t0 != -26) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x189 = 38U;
	int16_t x190 = 18;
	uint8_t x191 = UINT8_MAX;
	int32_t t1 = 7250;

	t1 = (((x189<<x190)<=x191)+x192);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x217 = 0;
	int8_t x220 = INT8_MIN;
	static int32_t t2 = -2496;

	t2 = (((x217<<x218)<=x219)+x220);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x229 = 0U;
	static volatile uint8_t x230 = 24U;
	static int16_t x231 = INT16_MIN;
	int32_t x232 = 94;
	volatile int32_t t3 = -1;

	t3 = (((x229<<x230)<=x231)+x232);

	if (t3 != 94) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x321 = 988200U;
	uint32_t x323 = UINT32_MAX;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t4 = 14037299255LLU;

	t4 = (((x321<<x322)<=x323)+x324);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x381 = 13U;
	static volatile uint8_t x382 = 0U;

	t5 = (((x381<<x382)<=x383)+x384);

	if (t5 != 185236603166482LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x413 = UINT8_MAX;
	volatile uint64_t x415 = UINT64_MAX;
	static volatile int32_t t6 = 1235652;

	t6 = (((x413<<x414)<=x415)+x416);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x417 = 16256375LLU;
	uint8_t x418 = 33U;
	static uint16_t x420 = 12U;
	volatile int32_t t7 = 12947;

	t7 = (((x417<<x418)<=x419)+x420);

	if (t7 != 13) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x421 = 1053995151LLU;
	static int8_t x423 = 0;
	int64_t x424 = 10326LL;

	t8 = (((x421<<x422)<=x423)+x424);

	if (t8 != 10326LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x437 = 105916;
	int16_t x438 = 4;
	int8_t x439 = INT8_MIN;
	int16_t x440 = -1;
	static volatile int32_t t9 = -1;

	t9 = (((x437<<x438)<=x439)+x440);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x457 = 14U;
	static uint16_t x458 = 1U;
	int64_t x459 = -1LL;
	static int16_t x460 = 0;
	volatile int32_t t10 = 13;

	t10 = (((x457<<x458)<=x459)+x460);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x477 = 0U;
	volatile uint8_t x478 = 29U;
	static volatile uint16_t x480 = UINT16_MAX;
	volatile int32_t t11 = -10986;

	t11 = (((x477<<x478)<=x479)+x480);

	if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x589 = 1;
	uint16_t x590 = 15U;
	int8_t x591 = INT8_MIN;
	static int8_t x592 = INT8_MIN;
	int32_t t12 = 165740;

	t12 = (((x589<<x590)<=x591)+x592);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x621 = 18U;
	static int8_t x623 = 0;
	uint64_t x624 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (((x621<<x622)<=x623)+x624);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x737 = 654566899353014542LLU;
	int8_t x738 = 7;
	uint8_t x739 = UINT8_MAX;
	static volatile uint64_t x740 = 35282787068476LLU;
	uint64_t t14 = 6866323149798511LLU;

	t14 = (((x737<<x738)<=x739)+x740);

	if (t14 != 35282787068476LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x781 = 0U;
	static uint32_t x783 = UINT32_MAX;
	int16_t x784 = INT16_MIN;
	volatile int32_t t15 = 7;

	t15 = (((x781<<x782)<=x783)+x784);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x853 = 23;
	uint32_t x854 = 0U;
	static int8_t x856 = 2;
	volatile int32_t t16 = 2541;

	t16 = (((x853<<x854)<=x855)+x856);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x897 = 222;
	uint8_t x898 = 6U;
	uint16_t x900 = 12414U;

	t17 = (((x897<<x898)<=x899)+x900);

	if (t17 != 12414) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1001 = INT64_MAX;
	uint32_t x1002 = 0U;
	int16_t x1003 = INT16_MAX;
	uint32_t x1004 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (((x1001<<x1002)<=x1003)+x1004);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1017 = 3;
	volatile int16_t x1019 = -1;
	int8_t x1020 = -1;
	int32_t t19 = -238;

	t19 = (((x1017<<x1018)<=x1019)+x1020);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1097 = 269084U;
	volatile uint32_t x1098 = 3U;
	int32_t x1099 = INT32_MIN;
	volatile int8_t x1100 = -1;
	int32_t t20 = -4595;

	t20 = (((x1097<<x1098)<=x1099)+x1100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1105 = 94U;
	volatile int8_t x1106 = 1;
	static uint8_t x1107 = 0U;
	uint64_t x1108 = 17LLU;
	uint64_t t21 = 175756120661059LLU;

	t21 = (((x1105<<x1106)<=x1107)+x1108);

	if (t21 != 17LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1226 = 6;
	uint64_t x1227 = 52742949638LLU;
	int32_t t22 = -4050984;

	t22 = (((x1225<<x1226)<=x1227)+x1228);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1237 = 40U;
	int8_t x1238 = 1;
	int32_t x1239 = INT32_MAX;
	volatile int16_t x1240 = INT16_MIN;

	t23 = (((x1237<<x1238)<=x1239)+x1240);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1473 = 25958U;
	static uint16_t x1474 = 16U;
	uint16_t x1475 = 24U;
	int8_t x1476 = INT8_MAX;
	volatile int32_t t24 = -181;

	t24 = (((x1473<<x1474)<=x1475)+x1476);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1745 = 138U;
	volatile int16_t x1746 = 0;
	static uint16_t x1747 = 3468U;
	int16_t x1748 = -1;

	t25 = (((x1745<<x1746)<=x1747)+x1748);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1821 = INT8_MAX;
	int32_t x1822 = 20;
	int32_t t26 = -1;

	t26 = (((x1821<<x1822)<=x1823)+x1824);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1862 = 15U;
	int8_t x1863 = 3;
	uint16_t x1864 = UINT16_MAX;
	volatile int32_t t27 = -850;

	t27 = (((x1861<<x1862)<=x1863)+x1864);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x1881 = UINT32_MAX;
	int64_t x1882 = 1LL;
	int32_t x1883 = INT32_MIN;
	uint32_t x1884 = 1502U;
	volatile uint32_t t28 = 197749U;

	t28 = (((x1881<<x1882)<=x1883)+x1884);

	if (t28 != 1502U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1913 = 111U;
	static uint8_t x1914 = 0U;
	static int8_t x1915 = 47;
	int32_t t29 = 0;

	t29 = (((x1913<<x1914)<=x1915)+x1916);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2049 = 1;
	int64_t x2050 = 5LL;
	int8_t x2051 = INT8_MIN;
	static int64_t x2052 = INT64_MAX;

	t30 = (((x2049<<x2050)<=x2051)+x2052);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2165 = INT32_MAX;
	int64_t x2167 = INT64_MIN;
	static int32_t x2168 = 0;
	int32_t t31 = -5077;

	t31 = (((x2165<<x2166)<=x2167)+x2168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x2181 = 51954U;
	int16_t x2182 = 0;
	volatile int32_t x2183 = -425591;

	t32 = (((x2181<<x2182)<=x2183)+x2184);

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x2229 = 62729944U;
	uint8_t x2230 = 20U;
	uint32_t x2231 = 6524U;
	static uint64_t x2232 = 136286127044483248LLU;
	static volatile uint64_t t33 = 1558311672111LLU;

	t33 = (((x2229<<x2230)<=x2231)+x2232);

	if (t33 != 136286127044483248LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2289 = INT64_MAX;
	uint8_t x2291 = UINT8_MAX;
	int64_t x2292 = 34LL;

	t34 = (((x2289<<x2290)<=x2291)+x2292);

	if (t34 != 34LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2329 = 44830377117LLU;
	int16_t x2330 = 1;
	int64_t x2332 = 34027452344116LL;
	volatile int64_t t35 = 0LL;

	t35 = (((x2329<<x2330)<=x2331)+x2332);

	if (t35 != 34027452344117LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2432 = 947670U;
	uint32_t t36 = 3U;

	t36 = (((x2429<<x2430)<=x2431)+x2432);

	if (t36 != 947671U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2441 = 1U;
	int8_t x2442 = 1;
	static int64_t x2443 = INT64_MIN;
	int8_t x2444 = INT8_MIN;
	static int32_t t37 = 371;

	t37 = (((x2441<<x2442)<=x2443)+x2444);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2561 = UINT64_MAX;
	uint8_t x2562 = 12U;
	volatile int32_t x2563 = -1;
	volatile int32_t x2564 = -1;

	t38 = (((x2561<<x2562)<=x2563)+x2564);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2650 = 2;
	int64_t x2651 = INT64_MAX;
	int32_t x2652 = -8;
	int32_t t39 = 2022717;

	t39 = (((x2649<<x2650)<=x2651)+x2652);

	if (t39 != -7) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2725 = 0U;
	static uint16_t x2726 = 12U;
	uint64_t x2727 = 59410651LLU;
	int8_t x2728 = -26;
	int32_t t40 = 65;

	t40 = (((x2725<<x2726)<=x2727)+x2728);

	if (t40 != -25) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2817 = 203U;
	volatile int16_t x2818 = 0;
	int16_t x2819 = 1;
	static volatile int8_t x2820 = INT8_MAX;
	int32_t t41 = 77860;

	t41 = (((x2817<<x2818)<=x2819)+x2820);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2822 = 3;
	uint16_t x2823 = 1574U;
	volatile int32_t t42 = 73780;

	t42 = (((x2821<<x2822)<=x2823)+x2824);

	if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2830 = 1U;
	uint16_t x2832 = UINT16_MAX;
	volatile int32_t t43 = -8347879;

	t43 = (((x2829<<x2830)<=x2831)+x2832);

	if (t43 != 65536) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2853 = UINT16_MAX;
	uint8_t x2854 = 3U;
	int32_t x2855 = INT32_MAX;
	uint16_t x2856 = 1229U;
	volatile int32_t t44 = 7999701;

	t44 = (((x2853<<x2854)<=x2855)+x2856);

	if (t44 != 1230) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2919 = INT64_MIN;
	uint64_t x2920 = 1LLU;
	volatile uint64_t t45 = 23LLU;

	t45 = (((x2917<<x2918)<=x2919)+x2920);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3097 = 9U;
	int16_t x3099 = INT16_MIN;
	volatile int64_t x3100 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x3097<<x3098)<=x3099)+x3100);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3105 = UINT16_MAX;
	uint8_t x3106 = 0U;
	uint16_t x3107 = 144U;
	static uint64_t x3108 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x3105<<x3106)<=x3107)+x3108);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x3201 = 7U;
	uint32_t x3202 = 9U;
	int16_t x3204 = INT16_MIN;
	int32_t t48 = 2083;

	t48 = (((x3201<<x3202)<=x3203)+x3204);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3365 = 7664703237600LLU;
	uint32_t x3366 = 1U;
	static uint8_t x3367 = UINT8_MAX;
	int64_t x3368 = INT64_MIN;
	static volatile int64_t t49 = INT64_MIN;

	t49 = (((x3365<<x3366)<=x3367)+x3368);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x3453 = 95U;
	uint16_t x3454 = 2U;
	static volatile uint64_t x3455 = UINT64_MAX;
	int64_t x3456 = 28670735403LL;
	volatile int64_t t50 = 2280971LL;

	t50 = (((x3453<<x3454)<=x3455)+x3456);

	if (t50 != 28670735404LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x3506 = 0U;
	static int8_t x3507 = -1;
	int32_t t51 = 183;

	t51 = (((x3505<<x3506)<=x3507)+x3508);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3581 = 1900078409534510LLU;
	uint8_t x3582 = 3U;
	uint16_t x3583 = 11U;
	static uint64_t t52 = 1LLU;

	t52 = (((x3581<<x3582)<=x3583)+x3584);

	if (t52 != 32110LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3597 = INT64_MAX;
	static int8_t x3598 = 0;
	uint16_t x3599 = 2U;
	uint64_t x3600 = 7034683319LLU;
	uint64_t t53 = 1869265828022822292LLU;

	t53 = (((x3597<<x3598)<=x3599)+x3600);

	if (t53 != 7034683319LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3677 = UINT8_MAX;
	int64_t x3679 = -44872828932007272LL;
	uint8_t x3680 = UINT8_MAX;
	volatile int32_t t54 = -1684;

	t54 = (((x3677<<x3678)<=x3679)+x3680);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3713 = 0U;
	uint8_t x3714 = 2U;
	int32_t x3715 = INT32_MIN;
	int32_t x3716 = -1;
	int32_t t55 = 169;

	t55 = (((x3713<<x3714)<=x3715)+x3716);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3718 = 19U;
	uint32_t x3719 = UINT32_MAX;
	int8_t x3720 = 1;
	int32_t t56 = 10188;

	t56 = (((x3717<<x3718)<=x3719)+x3720);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3753 = 1;
	int8_t x3754 = 0;
	static int64_t x3755 = -1LL;
	uint8_t x3756 = 13U;
	int32_t t57 = 922;

	t57 = (((x3753<<x3754)<=x3755)+x3756);

	if (t57 != 13) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3861 = 137316477U;
	volatile int8_t x3862 = 8;
	int32_t x3863 = INT32_MIN;
	int32_t x3864 = -2213896;

	t58 = (((x3861<<x3862)<=x3863)+x3864);

	if (t58 != -2213895) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3953 = 1;
	uint16_t x3954 = 1U;
	static uint64_t x3955 = 35477316421311748LLU;

	t59 = (((x3953<<x3954)<=x3955)+x3956);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x4051 = -6485LL;
	int16_t x4052 = INT16_MAX;
	volatile int32_t t60 = -337605231;

	t60 = (((x4049<<x4050)<=x4051)+x4052);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4085 = 0U;
	volatile int32_t x4087 = -1;
	int64_t x4088 = INT64_MAX;

	t61 = (((x4085<<x4086)<=x4087)+x4088);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x4125 = 0;
	static uint16_t x4126 = 4U;
	uint32_t x4127 = UINT32_MAX;
	volatile uint16_t x4128 = 215U;
	static int32_t t62 = -2009;

	t62 = (((x4125<<x4126)<=x4127)+x4128);

	if (t62 != 216) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x4145 = 28U;
	volatile int8_t x4147 = -4;
	uint32_t x4148 = UINT32_MAX;
	volatile uint32_t t63 = 2831U;

	t63 = (((x4145<<x4146)<=x4147)+x4148);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x4177 = 5;
	uint8_t x4178 = 13U;
	static int64_t x4179 = INT64_MAX;
	volatile uint16_t x4180 = 1U;
	int32_t t64 = -1061533724;

	t64 = (((x4177<<x4178)<=x4179)+x4180);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x4241 = UINT64_MAX;
	uint8_t x4242 = 5U;
	int64_t x4244 = 7124LL;
	volatile int64_t t65 = 548959904307530LL;

	t65 = (((x4241<<x4242)<=x4243)+x4244);

	if (t65 != 7125LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4274 = 28;
	volatile int16_t x4275 = INT16_MIN;
	int32_t t66 = 88583049;

	t66 = (((x4273<<x4274)<=x4275)+x4276);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4309 = 1;
	static int8_t x4311 = INT8_MIN;
	static int32_t t67 = 7;

	t67 = (((x4309<<x4310)<=x4311)+x4312);

	if (t67 != 97) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4493 = 1U;
	uint8_t x4494 = 0U;
	static int8_t x4496 = INT8_MAX;
	static volatile int32_t t68 = -168;

	t68 = (((x4493<<x4494)<=x4495)+x4496);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4637 = 3U;
	uint32_t x4640 = UINT32_MAX;
	uint32_t t69 = UINT32_MAX;

	t69 = (((x4637<<x4638)<=x4639)+x4640);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4641 = 12;
	int8_t x4642 = 0;
	static int64_t x4643 = INT64_MIN;
	static volatile int16_t x4644 = 12;
	static volatile int32_t t70 = 227783;

	t70 = (((x4641<<x4642)<=x4643)+x4644);

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4869 = INT8_MAX;
	int8_t x4870 = 0;
	int32_t x4872 = -706;
	volatile int32_t t71 = -3;

	t71 = (((x4869<<x4870)<=x4871)+x4872);

	if (t71 != -706) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4933 = 113732LLU;
	volatile uint16_t x4934 = 30U;
	int16_t x4935 = -1;
	static uint64_t x4936 = 95037433737859645LLU;
	uint64_t t72 = 714317616690LLU;

	t72 = (((x4933<<x4934)<=x4935)+x4936);

	if (t72 != 95037433737859646LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4953 = 111143486250LLU;
	uint8_t x4954 = 12U;
	uint64_t x4955 = 17259579615LLU;
	int16_t x4956 = INT16_MAX;
	int32_t t73 = 4;

	t73 = (((x4953<<x4954)<=x4955)+x4956);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5097 = 1;
	int8_t x5098 = 11;
	uint64_t x5099 = 186811LLU;
	uint32_t x5100 = UINT32_MAX;
	static volatile uint32_t t74 = 3821U;

	t74 = (((x5097<<x5098)<=x5099)+x5100);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x5101 = UINT64_MAX;
	uint32_t x5102 = 4U;
	uint64_t x5104 = 2669336699999284LLU;
	uint64_t t75 = 350LLU;

	t75 = (((x5101<<x5102)<=x5103)+x5104);

	if (t75 != 2669336699999284LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x5153 = 0U;
	volatile int32_t x5155 = INT32_MAX;
	int64_t x5156 = INT64_MIN;
	int64_t t76 = 661LL;

	t76 = (((x5153<<x5154)<=x5155)+x5156);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5289 = 3U;
	uint16_t x5290 = 14U;
	int32_t x5291 = INT32_MIN;
	volatile uint64_t t77 = 725261178982LLU;

	t77 = (((x5289<<x5290)<=x5291)+x5292);

	if (t77 != 2487180209LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x5350 = 0U;
	static uint64_t x5351 = UINT64_MAX;
	static volatile int16_t x5352 = INT16_MIN;
	static volatile int32_t t78 = -1;

	t78 = (((x5349<<x5350)<=x5351)+x5352);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5389 = UINT16_MAX;
	uint32_t x5390 = 1U;
	int8_t x5391 = INT8_MIN;
	int8_t x5392 = INT8_MIN;
	volatile int32_t t79 = -1669;

	t79 = (((x5389<<x5390)<=x5391)+x5392);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5486 = 1U;
	int16_t x5488 = -1;
	int32_t t80 = -1;

	t80 = (((x5485<<x5486)<=x5487)+x5488);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x5501 = 1U;
	static uint32_t x5502 = 15U;
	volatile uint16_t x5503 = 4U;
	static uint16_t x5504 = UINT16_MAX;
	volatile int32_t t81 = 16080;

	t81 = (((x5501<<x5502)<=x5503)+x5504);

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5581 = 41U;
	volatile uint16_t x5582 = 16U;
	static int32_t x5583 = INT32_MIN;
	volatile int64_t x5584 = 1502438020949LL;
	int64_t t82 = -2623519768623688LL;

	t82 = (((x5581<<x5582)<=x5583)+x5584);

	if (t82 != 1502438020949LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5621 = 67U;
	static volatile uint8_t x5622 = 15U;
	static volatile uint64_t x5624 = UINT64_MAX;
	static uint64_t t83 = UINT64_MAX;

	t83 = (((x5621<<x5622)<=x5623)+x5624);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x5665 = INT16_MAX;
	static int16_t x5667 = INT16_MIN;
	static int8_t x5668 = -1;
	int32_t t84 = -50296;

	t84 = (((x5665<<x5666)<=x5667)+x5668);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5705 = 102;
	static volatile int32_t t85 = -1477073;

	t85 = (((x5705<<x5706)<=x5707)+x5708);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5737 = 1LLU;
	uint8_t x5738 = 1U;
	volatile uint16_t x5739 = 8046U;
	int32_t x5740 = 45239;
	volatile int32_t t86 = 34365483;

	t86 = (((x5737<<x5738)<=x5739)+x5740);

	if (t86 != 45240) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5785 = 994U;
	uint16_t x5786 = 10U;
	int64_t x5788 = 241459722470LL;
	volatile int64_t t87 = -111115LL;

	t87 = (((x5785<<x5786)<=x5787)+x5788);

	if (t87 != 241459722471LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5921 = 1232640372U;
	volatile int8_t x5922 = 0;
	int32_t x5923 = -1;
	static int64_t x5924 = 1LL;
	volatile int64_t t88 = 6070202LL;

	t88 = (((x5921<<x5922)<=x5923)+x5924);

	if (t88 != 2LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x6035 = INT64_MIN;
	uint32_t x6036 = 107007813U;
	volatile uint32_t t89 = 127519U;

	t89 = (((x6033<<x6034)<=x6035)+x6036);

	if (t89 != 107007813U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6049 = 1U;
	volatile int16_t x6051 = INT16_MIN;
	int32_t x6052 = -1;
	volatile int32_t t90 = -14;

	t90 = (((x6049<<x6050)<=x6051)+x6052);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6134 = 17;
	int32_t x6135 = INT32_MAX;
	int8_t x6136 = INT8_MIN;
	static volatile int32_t t91 = -7130618;

	t91 = (((x6133<<x6134)<=x6135)+x6136);

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x6141 = UINT16_MAX;
	uint16_t x6142 = 1U;
	static uint16_t x6143 = UINT16_MAX;
	int32_t x6144 = 138928803;
	int32_t t92 = -190229610;

	t92 = (((x6141<<x6142)<=x6143)+x6144);

	if (t92 != 138928803) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6149 = 25U;
	uint16_t x6150 = 2U;
	uint16_t x6151 = UINT16_MAX;
	volatile uint16_t x6152 = 141U;
	volatile int32_t t93 = 28749;

	t93 = (((x6149<<x6150)<=x6151)+x6152);

	if (t93 != 142) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6165 = 93U;
	int8_t x6166 = 5;
	uint64_t x6167 = 489469LLU;
	int32_t x6168 = INT32_MIN;
	static int32_t t94 = -1148;

	t94 = (((x6165<<x6166)<=x6167)+x6168);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6261 = 21;
	uint64_t x6264 = 2LLU;

	t95 = (((x6261<<x6262)<=x6263)+x6264);

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6290 = 1U;
	static uint8_t x6291 = 0U;
	int32_t x6292 = 854056852;
	volatile int32_t t96 = 52062;

	t96 = (((x6289<<x6290)<=x6291)+x6292);

	if (t96 != 854056852) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x6373 = 0;
	int8_t x6374 = 0;
	uint64_t x6375 = 2766LLU;
	int32_t x6376 = INT32_MIN;
	volatile int32_t t97 = 66126;

	t97 = (((x6373<<x6374)<=x6375)+x6376);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6382 = 18U;
	int8_t x6384 = INT8_MIN;
	volatile int32_t t98 = -421;

	t98 = (((x6381<<x6382)<=x6383)+x6384);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6394 = 0;
	int8_t x6395 = -1;
	static volatile int16_t x6396 = INT16_MIN;
	volatile int32_t t99 = 65186913;

	t99 = (((x6393<<x6394)<=x6395)+x6396);

	if (t99 != -32767) { NG(); } else { ; }
	
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

