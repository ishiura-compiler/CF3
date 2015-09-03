#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x107 = -1;
static volatile int32_t t1 = -28434756;
int32_t x193 = INT32_MAX;
volatile int32_t t2 = 4562;
int8_t x254 = INT8_MIN;
int8_t x256 = 5;
int64_t t3 = 4747502295148LL;
volatile uint8_t x262 = 16U;
int32_t x330 = INT32_MIN;
int8_t x331 = INT8_MIN;
static int8_t x487 = -1;
uint8_t x488 = 1U;
int8_t x530 = INT8_MIN;
static uint8_t x585 = 1U;
int32_t x590 = INT32_MIN;
int64_t x678 = -1LL;
uint8_t x746 = 6U;
int8_t x818 = INT8_MIN;
static int16_t x820 = 0;
int8_t x977 = INT8_MAX;
int32_t t18 = 58481937;
static int64_t x1314 = -56548LL;
uint32_t t21 = 19U;
int16_t x1406 = -1130;
uint32_t x1531 = 555322U;
static int16_t x1801 = INT16_MIN;
volatile int32_t t24 = -1;
volatile int32_t x1857 = -920;
int16_t x1860 = 2;
volatile uint32_t t26 = 521U;
volatile int32_t x2010 = -1;
static uint8_t x2011 = 9U;
static uint64_t x2098 = 48815209LLU;
int16_t x2306 = INT16_MIN;
int16_t x2357 = INT16_MAX;
int8_t x2446 = INT8_MIN;
int32_t t31 = -829853;
int64_t x2679 = 37058LL;
uint8_t x2680 = 12U;
volatile uint32_t x2704 = 25U;
volatile uint16_t x2797 = 199U;
int8_t x3044 = 0;
volatile int16_t x3137 = -1;
uint16_t x3143 = 8316U;
uint8_t x3216 = 1U;
uint8_t x3227 = 5U;
uint8_t x3228 = 12U;
int32_t x3274 = INT32_MIN;
int8_t x3339 = INT8_MIN;
uint32_t x3341 = 14U;
int8_t x3343 = INT8_MIN;
uint8_t x3344 = 4U;
uint16_t x3350 = 0U;
int8_t x3359 = 26;
uint64_t t51 = 12828027LLU;
volatile uint16_t x3458 = UINT16_MAX;
volatile uint64_t t53 = 2567764196485LLU;
volatile uint8_t x3613 = UINT8_MAX;
volatile int32_t t57 = -5;
int32_t x3670 = 13;
volatile uint64_t x3674 = 102762885239617308LLU;
int64_t x3701 = 2459674309LL;
uint16_t x3888 = 2U;
volatile uint64_t t62 = 22392622LLU;
uint64_t x3942 = 9563LLU;
int8_t x3944 = 0;
uint32_t x3956 = 11U;
int32_t t66 = 269;
uint64_t x4182 = 34300963843790LLU;
volatile uint32_t t69 = 2032U;
static int8_t x4321 = 3;
uint32_t x4437 = 16U;
uint16_t x4527 = 25182U;
volatile uint64_t x4670 = 2050LLU;
uint64_t x4974 = 155LLU;
uint64_t x5002 = 983LLU;
uint64_t x5004 = 1LLU;
static volatile int64_t t81 = 2923762LL;
uint64_t x5175 = UINT64_MAX;
int32_t x5230 = INT32_MIN;
int32_t t83 = 12;
uint32_t x5294 = 13339U;
static int32_t x5342 = 24;
int8_t x5377 = -1;
static uint64_t x5378 = 8393435103LLU;
volatile int8_t x5456 = 1;
int8_t x5567 = -15;
int16_t x5578 = -1;
volatile int32_t x5612 = 0;
int32_t x5878 = -99566591;
uint64_t x6217 = 506LLU;
static uint64_t x6218 = 197954180LLU;
int8_t x6539 = INT8_MAX;
int16_t x6626 = -1;
volatile int32_t t98 = -4470054;
uint32_t x6654 = 45U;
volatile uint64_t x6655 = UINT64_MAX;


void f0(void) {
	static volatile int16_t x105 = -1;
	int16_t x106 = -949;
	volatile uint8_t x108 = 1U;
	int32_t t0 = -7159888;

	t0 = ((x105%(x106<x107))>>x108);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x141 = INT8_MIN;
	volatile uint8_t x142 = 0U;
	int8_t x143 = 7;
	int8_t x144 = 0;

	t1 = ((x141%(x142<x143))>>x144);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x194 = INT16_MIN;
	int8_t x195 = 50;
	uint8_t x196 = 3U;

	t2 = ((x193%(x194<x195))>>x196);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x253 = -1LL;
	int16_t x255 = INT16_MAX;

	t3 = ((x253%(x254<x255))>>x256);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int16_t x263 = 3452;
	int8_t x264 = 11;
	static uint64_t t4 = 1091989111146884468LLU;

	t4 = ((x261%(x262<x263))>>x264);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x313 = 444205LLU;
	int64_t x314 = INT64_MIN;
	uint16_t x315 = 278U;
	volatile int8_t x316 = 33;
	volatile uint64_t t5 = 142384597120224LLU;

	t5 = ((x313%(x314<x315))>>x316);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x329 = 1U;
	uint64_t x332 = 11LLU;
	volatile int32_t t6 = -1;

	t6 = ((x329%(x330<x331))>>x332);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x473 = -1;
	int32_t x474 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	static int8_t x476 = 2;
	volatile int32_t t7 = 7;

	t7 = ((x473%(x474<x475))>>x476);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x485 = 87759U;
	int16_t x486 = INT16_MIN;
	volatile uint32_t t8 = 3097294U;

	t8 = ((x485%(x486<x487))>>x488);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x529 = 3U;
	volatile uint16_t x531 = UINT16_MAX;
	int8_t x532 = 24;
	volatile int32_t t9 = 184136;

	t9 = ((x529%(x530<x531))>>x532);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x577 = INT64_MIN;
	static volatile int8_t x578 = INT8_MIN;
	int64_t x579 = 108285LL;
	int8_t x580 = 0;
	int64_t t10 = -2771267LL;

	t10 = ((x577%(x578<x579))>>x580);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x586 = -14;
	static int16_t x587 = INT16_MAX;
	uint8_t x588 = 6U;
	int32_t t11 = -14947;

	t11 = ((x585%(x586<x587))>>x588);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x589 = INT8_MIN;
	volatile int16_t x591 = -2;
	uint8_t x592 = 0U;
	static volatile int32_t t12 = 226;

	t12 = ((x589%(x590<x591))>>x592);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x677 = 3593957640814173622LLU;
	uint8_t x679 = UINT8_MAX;
	static uint32_t x680 = 1U;
	volatile uint64_t t13 = 6629600912LLU;

	t13 = ((x677%(x678<x679))>>x680);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x745 = INT8_MAX;
	volatile uint64_t x747 = 10LLU;
	static volatile uint16_t x748 = 0U;
	volatile int32_t t14 = 2005359;

	t14 = ((x745%(x746<x747))>>x748);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x817 = INT64_MIN;
	volatile uint64_t x819 = UINT64_MAX;
	volatile int64_t t15 = 1876317LL;

	t15 = ((x817%(x818<x819))>>x820);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x978 = 0LLU;
	int64_t x979 = INT64_MIN;
	int8_t x980 = 3;
	static volatile int32_t t16 = 10650;

	t16 = ((x977%(x978<x979))>>x980);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1021 = INT32_MIN;
	int32_t x1022 = INT32_MIN;
	volatile int32_t x1023 = INT32_MAX;
	uint8_t x1024 = 26U;
	volatile int32_t t17 = -1436;

	t17 = ((x1021%(x1022<x1023))>>x1024);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1157 = 6;
	uint32_t x1158 = 310U;
	static uint16_t x1159 = UINT16_MAX;
	static int32_t x1160 = 0;

	t18 = ((x1157%(x1158<x1159))>>x1160);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1313 = UINT16_MAX;
	int16_t x1315 = 194;
	static int64_t x1316 = 1LL;
	volatile int32_t t19 = -9;

	t19 = ((x1313%(x1314<x1315))>>x1316);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1349 = INT64_MIN;
	uint8_t x1350 = 10U;
	uint16_t x1351 = 16275U;
	uint16_t x1352 = 0U;
	int64_t t20 = -245118915485LL;

	t20 = ((x1349%(x1350<x1351))>>x1352);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1369 = 3790U;
	volatile int64_t x1370 = INT64_MIN;
	volatile uint64_t x1371 = UINT64_MAX;
	uint32_t x1372 = 11U;

	t21 = ((x1369%(x1370<x1371))>>x1372);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1405 = INT32_MIN;
	int8_t x1407 = INT8_MIN;
	static volatile uint8_t x1408 = 1U;
	int32_t t22 = 1;

	t22 = ((x1405%(x1406<x1407))>>x1408);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1529 = INT8_MIN;
	int64_t x1530 = INT64_MIN;
	volatile uint16_t x1532 = 0U;
	int32_t t23 = -23066;

	t23 = ((x1529%(x1530<x1531))>>x1532);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1802 = INT16_MIN;
	static int8_t x1803 = 8;
	int8_t x1804 = 1;

	t24 = ((x1801%(x1802<x1803))>>x1804);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1858 = INT16_MIN;
	int8_t x1859 = INT8_MIN;
	static int32_t t25 = 405150486;

	t25 = ((x1857%(x1858<x1859))>>x1860);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1937 = 11U;
	static volatile int8_t x1938 = 1;
	int16_t x1939 = INT16_MAX;
	volatile uint8_t x1940 = 0U;

	t26 = ((x1937%(x1938<x1939))>>x1940);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x2009 = INT8_MAX;
	uint16_t x2012 = 5U;
	volatile int32_t t27 = -1129;

	t27 = ((x2009%(x2010<x2011))>>x2012);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2097 = -1;
	int16_t x2099 = -95;
	volatile uint8_t x2100 = 4U;
	int32_t t28 = 3926504;

	t28 = ((x2097%(x2098<x2099))>>x2100);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2305 = -1;
	int64_t x2307 = -1LL;
	static uint16_t x2308 = 0U;
	static int32_t t29 = 0;

	t29 = ((x2305%(x2306<x2307))>>x2308);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x2358 = 14U;
	int16_t x2359 = 205;
	uint8_t x2360 = 19U;
	int32_t t30 = 12056;

	t30 = ((x2357%(x2358<x2359))>>x2360);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2445 = INT16_MIN;
	volatile int8_t x2447 = -2;
	uint16_t x2448 = 6U;

	t31 = ((x2445%(x2446<x2447))>>x2448);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x2481 = -2;
	int64_t x2482 = INT64_MIN;
	volatile int16_t x2483 = -1;
	uint16_t x2484 = 0U;
	volatile int32_t t32 = 29;

	t32 = ((x2481%(x2482<x2483))>>x2484);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2569 = INT16_MAX;
	int32_t x2570 = INT32_MIN;
	int64_t x2571 = -1LL;
	static uint16_t x2572 = 16U;
	volatile int32_t t33 = -68110095;

	t33 = ((x2569%(x2570<x2571))>>x2572);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2613 = INT8_MIN;
	volatile int64_t x2614 = INT64_MIN;
	int16_t x2615 = -1;
	uint16_t x2616 = 0U;
	int32_t t34 = -7;

	t34 = ((x2613%(x2614<x2615))>>x2616);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2677 = 8891U;
	int16_t x2678 = INT16_MIN;
	volatile int32_t t35 = -1144227;

	t35 = ((x2677%(x2678<x2679))>>x2680);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2701 = -1LL;
	int8_t x2702 = INT8_MIN;
	int16_t x2703 = INT16_MAX;
	static int64_t t36 = 5906408040LL;

	t36 = ((x2701%(x2702<x2703))>>x2704);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2709 = INT8_MIN;
	uint8_t x2710 = UINT8_MAX;
	int64_t x2711 = INT64_MAX;
	uint16_t x2712 = 11U;
	int32_t t37 = 1920020;

	t37 = ((x2709%(x2710<x2711))>>x2712);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2798 = INT32_MIN;
	volatile int16_t x2799 = 104;
	uint64_t x2800 = 1LLU;
	volatile int32_t t38 = 13;

	t38 = ((x2797%(x2798<x2799))>>x2800);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x3041 = -1;
	volatile uint64_t x3042 = 1994026848LLU;
	int64_t x3043 = INT64_MAX;
	static int32_t t39 = -92044;

	t39 = ((x3041%(x3042<x3043))>>x3044);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x3081 = UINT16_MAX;
	static int16_t x3082 = INT16_MIN;
	int32_t x3083 = 860;
	int8_t x3084 = 9;
	int32_t t40 = 88613;

	t40 = ((x3081%(x3082<x3083))>>x3084);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x3125 = 3U;
	uint16_t x3126 = UINT16_MAX;
	volatile uint64_t x3127 = UINT64_MAX;
	volatile int8_t x3128 = 5;
	int32_t t41 = 17163924;

	t41 = ((x3125%(x3126<x3127))>>x3128);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x3138 = INT32_MIN;
	int16_t x3139 = 5;
	uint16_t x3140 = 2U;
	volatile int32_t t42 = 23648530;

	t42 = ((x3137%(x3138<x3139))>>x3140);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x3141 = INT64_MIN;
	int16_t x3142 = -189;
	uint32_t x3144 = 0U;
	int64_t t43 = -439817591314322662LL;

	t43 = ((x3141%(x3142<x3143))>>x3144);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x3213 = -1159359;
	uint32_t x3214 = 96U;
	static uint8_t x3215 = UINT8_MAX;
	int32_t t44 = 5;

	t44 = ((x3213%(x3214<x3215))>>x3216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3225 = 0;
	int32_t x3226 = INT32_MIN;
	int32_t t45 = -9;

	t45 = ((x3225%(x3226<x3227))>>x3228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x3273 = INT64_MIN;
	int8_t x3275 = INT8_MIN;
	volatile uint8_t x3276 = 46U;
	volatile int64_t t46 = -469817LL;

	t46 = ((x3273%(x3274<x3275))>>x3276);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3337 = -1LL;
	uint32_t x3338 = 64103845U;
	static uint32_t x3340 = 0U;
	volatile int64_t t47 = -232702671622754LL;

	t47 = ((x3337%(x3338<x3339))>>x3340);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x3342 = -4341;
	static volatile uint32_t t48 = 4959U;

	t48 = ((x3341%(x3342<x3343))>>x3344);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3349 = 2029885U;
	uint64_t x3351 = UINT64_MAX;
	volatile int16_t x3352 = 1;
	volatile uint32_t t49 = 172U;

	t49 = ((x3349%(x3350<x3351))>>x3352);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3357 = UINT32_MAX;
	int8_t x3358 = 1;
	int16_t x3360 = 11;
	static volatile uint32_t t50 = 1704107762U;

	t50 = ((x3357%(x3358<x3359))>>x3360);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3389 = 15LLU;
	static int64_t x3390 = -1LL;
	int16_t x3391 = 1444;
	uint8_t x3392 = 0U;

	t51 = ((x3389%(x3390<x3391))>>x3392);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3393 = -1;
	int64_t x3394 = 5739LL;
	static uint64_t x3395 = 380211387717LLU;
	uint16_t x3396 = 0U;
	int32_t t52 = 1;

	t52 = ((x3393%(x3394<x3395))>>x3396);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3457 = 44261552486619463LLU;
	static int64_t x3459 = INT64_MAX;
	uint8_t x3460 = 4U;

	t53 = ((x3457%(x3458<x3459))>>x3460);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3565 = 1U;
	int16_t x3566 = INT16_MIN;
	volatile int16_t x3567 = -1;
	int8_t x3568 = 13;
	int32_t t54 = -6828853;

	t54 = ((x3565%(x3566<x3567))>>x3568);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3569 = UINT8_MAX;
	int16_t x3570 = 4;
	static uint8_t x3571 = UINT8_MAX;
	uint64_t x3572 = 3LLU;
	static int32_t t55 = -1;

	t55 = ((x3569%(x3570<x3571))>>x3572);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3593 = -1;
	static uint64_t x3594 = 5LLU;
	volatile int8_t x3595 = -1;
	uint16_t x3596 = 20U;
	int32_t t56 = -1;

	t56 = ((x3593%(x3594<x3595))>>x3596);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3614 = 1;
	int32_t x3615 = 112573;
	uint8_t x3616 = 0U;

	t57 = ((x3613%(x3614<x3615))>>x3616);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3669 = -48LL;
	static uint8_t x3671 = 114U;
	static int8_t x3672 = 1;
	static int64_t t58 = 5799203524631486LL;

	t58 = ((x3669%(x3670<x3671))>>x3672);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3673 = INT64_MIN;
	int64_t x3675 = INT64_MIN;
	uint8_t x3676 = 3U;
	static int64_t t59 = -14289062402LL;

	t59 = ((x3673%(x3674<x3675))>>x3676);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3702 = INT64_MIN;
	uint16_t x3703 = UINT16_MAX;
	int32_t x3704 = 0;
	volatile int64_t t60 = -197171583703702LL;

	t60 = ((x3701%(x3702<x3703))>>x3704);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x3885 = -1;
	int8_t x3886 = INT8_MAX;
	volatile int32_t x3887 = 35131;
	int32_t t61 = -682;

	t61 = ((x3885%(x3886<x3887))>>x3888);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3897 = UINT64_MAX;
	int16_t x3898 = INT16_MIN;
	int16_t x3899 = 7758;
	int32_t x3900 = 0;

	t62 = ((x3897%(x3898<x3899))>>x3900);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3941 = 121039LLU;
	uint32_t x3943 = UINT32_MAX;
	volatile uint64_t t63 = 60429118LLU;

	t63 = ((x3941%(x3942<x3943))>>x3944);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3953 = 6U;
	int32_t x3954 = -292819;
	int32_t x3955 = 2044340;
	volatile int32_t t64 = 125;

	t64 = ((x3953%(x3954<x3955))>>x3956);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3961 = 0U;
	static volatile int64_t x3962 = -15021LL;
	int8_t x3963 = -1;
	int16_t x3964 = 1;
	volatile int32_t t65 = -1;

	t65 = ((x3961%(x3962<x3963))>>x3964);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4029 = INT16_MIN;
	static uint32_t x4030 = 5U;
	int32_t x4031 = INT32_MAX;
	uint8_t x4032 = 11U;

	t66 = ((x4029%(x4030<x4031))>>x4032);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4125 = 9U;
	int16_t x4126 = INT16_MIN;
	uint16_t x4127 = 20U;
	static uint8_t x4128 = 0U;
	static int32_t t67 = 0;

	t67 = ((x4125%(x4126<x4127))>>x4128);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4181 = INT64_MIN;
	volatile int8_t x4183 = INT8_MIN;
	volatile int8_t x4184 = 56;
	int64_t t68 = -136774066622553033LL;

	t68 = ((x4181%(x4182<x4183))>>x4184);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4205 = UINT32_MAX;
	static volatile int8_t x4206 = 0;
	volatile uint32_t x4207 = 20U;
	uint32_t x4208 = 0U;

	t69 = ((x4205%(x4206<x4207))>>x4208);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4322 = 467U;
	uint32_t x4323 = 1767014023U;
	uint16_t x4324 = 2U;
	volatile int32_t t70 = 1879024;

	t70 = ((x4321%(x4322<x4323))>>x4324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x4438 = 174U;
	volatile uint64_t x4439 = UINT64_MAX;
	uint16_t x4440 = 16U;
	static uint32_t t71 = 36208486U;

	t71 = ((x4437%(x4438<x4439))>>x4440);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x4497 = UINT8_MAX;
	int8_t x4498 = -3;
	int32_t x4499 = 4494;
	static int8_t x4500 = 0;
	static int32_t t72 = 0;

	t72 = ((x4497%(x4498<x4499))>>x4500);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4501 = -7323LL;
	uint8_t x4502 = 85U;
	uint64_t x4503 = 5584LLU;
	uint16_t x4504 = 23U;
	int64_t t73 = 4399655LL;

	t73 = ((x4501%(x4502<x4503))>>x4504);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x4525 = 0;
	static int8_t x4526 = INT8_MAX;
	uint16_t x4528 = 0U;
	static volatile int32_t t74 = -59852;

	t74 = ((x4525%(x4526<x4527))>>x4528);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x4601 = 15U;
	static int64_t x4602 = INT64_MIN;
	int64_t x4603 = -129214446335LL;
	static int16_t x4604 = 0;
	volatile uint32_t t75 = 15U;

	t75 = ((x4601%(x4602<x4603))>>x4604);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4621 = 1U;
	volatile int32_t x4622 = INT32_MIN;
	static uint8_t x4623 = 45U;
	int8_t x4624 = 3;
	volatile int32_t t76 = -608116726;

	t76 = ((x4621%(x4622<x4623))>>x4624);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4649 = 167840511892855026LLU;
	volatile int32_t x4650 = -127840603;
	int16_t x4651 = INT16_MAX;
	uint16_t x4652 = 2U;
	uint64_t t77 = 8305308799LLU;

	t77 = ((x4649%(x4650<x4651))>>x4652);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4669 = 60U;
	int64_t x4671 = 53002910333766LL;
	volatile uint8_t x4672 = 7U;
	volatile int32_t t78 = -60;

	t78 = ((x4669%(x4670<x4671))>>x4672);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4757 = 43U;
	uint32_t x4758 = 282U;
	int16_t x4759 = INT16_MIN;
	static uint32_t x4760 = 4U;
	int32_t t79 = -28591849;

	t79 = ((x4757%(x4758<x4759))>>x4760);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4973 = INT64_MIN;
	int64_t x4975 = -397029786201644701LL;
	uint8_t x4976 = 1U;
	int64_t t80 = -122910289LL;

	t80 = ((x4973%(x4974<x4975))>>x4976);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5001 = 30LL;
	volatile int16_t x5003 = -6433;

	t81 = ((x5001%(x5002<x5003))>>x5004);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5173 = INT32_MIN;
	static int16_t x5174 = INT16_MAX;
	volatile uint8_t x5176 = 1U;
	int32_t t82 = -278;

	t82 = ((x5173%(x5174<x5175))>>x5176);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5229 = INT16_MAX;
	int64_t x5231 = 266553957451142LL;
	static int8_t x5232 = 26;

	t83 = ((x5229%(x5230<x5231))>>x5232);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5241 = INT64_MIN;
	int64_t x5242 = -3851LL;
	uint64_t x5243 = UINT64_MAX;
	int32_t x5244 = 1;
	volatile int64_t t84 = 59278LL;

	t84 = ((x5241%(x5242<x5243))>>x5244);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x5293 = -1;
	int32_t x5295 = INT32_MIN;
	int64_t x5296 = 4LL;
	int32_t t85 = 1554;

	t85 = ((x5293%(x5294<x5295))>>x5296);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x5341 = 0U;
	int16_t x5343 = 1721;
	static uint8_t x5344 = 31U;
	volatile int32_t t86 = -2112316;

	t86 = ((x5341%(x5342<x5343))>>x5344);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5379 = -1;
	volatile uint8_t x5380 = 21U;
	static volatile int32_t t87 = 284387629;

	t87 = ((x5377%(x5378<x5379))>>x5380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5453 = 0U;
	int32_t x5454 = -990221223;
	volatile int32_t x5455 = INT32_MAX;
	volatile int32_t t88 = -650730;

	t88 = ((x5453%(x5454<x5455))>>x5456);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5565 = INT16_MIN;
	volatile int16_t x5566 = -69;
	int16_t x5568 = 10;
	int32_t t89 = 1;

	t89 = ((x5565%(x5566<x5567))>>x5568);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5577 = -2;
	volatile int32_t x5579 = 5;
	int8_t x5580 = 3;
	int32_t t90 = 1;

	t90 = ((x5577%(x5578<x5579))>>x5580);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5609 = 8477U;
	int8_t x5610 = 2;
	uint32_t x5611 = 19U;
	int32_t t91 = -2066;

	t91 = ((x5609%(x5610<x5611))>>x5612);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5753 = 44885779067349919LLU;
	int16_t x5754 = -47;
	volatile int64_t x5755 = -1LL;
	int32_t x5756 = 0;
	uint64_t t92 = 1513402021LLU;

	t92 = ((x5753%(x5754<x5755))>>x5756);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5877 = 834U;
	volatile int64_t x5879 = INT64_MAX;
	volatile int64_t x5880 = 1LL;
	volatile int32_t t93 = -8073;

	t93 = ((x5877%(x5878<x5879))>>x5880);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x6065 = -2;
	int32_t x6066 = -18154;
	uint16_t x6067 = 1U;
	static volatile uint8_t x6068 = 3U;
	volatile int32_t t94 = 122730;

	t94 = ((x6065%(x6066<x6067))>>x6068);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6219 = -1;
	uint8_t x6220 = 1U;
	uint64_t t95 = 2664937517160LLU;

	t95 = ((x6217%(x6218<x6219))>>x6220);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x6525 = 2830;
	uint64_t x6526 = 133889134LLU;
	int64_t x6527 = -5449692409815974LL;
	int8_t x6528 = 0;
	volatile int32_t t96 = 262723;

	t96 = ((x6525%(x6526<x6527))>>x6528);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6537 = INT16_MIN;
	int16_t x6538 = -6;
	static uint16_t x6540 = 31U;
	int32_t t97 = -1;

	t97 = ((x6537%(x6538<x6539))>>x6540);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x6625 = INT32_MAX;
	int8_t x6627 = INT8_MAX;
	uint8_t x6628 = 1U;

	t98 = ((x6625%(x6626<x6627))>>x6628);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6653 = 13U;
	uint8_t x6656 = 27U;
	volatile uint32_t t99 = 3806U;

	t99 = ((x6653%(x6654<x6655))>>x6656);

	if (t99 != 0U) { NG(); } else { ; }
	
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

