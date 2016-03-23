
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 12;
uint8_t x41 = UINT8_MAX;
static int8_t x48 = INT8_MIN;
volatile uint32_t x62 = UINT32_MAX;
int32_t x64 = -1;
int32_t t4 = 4754940;
static int32_t x86 = INT32_MIN;
static volatile uint32_t t5 = UINT32_MAX;
uint8_t x112 = 1U;
static int8_t x162 = 41;
volatile int16_t x202 = -4528;
int8_t x204 = -1;
int32_t t9 = -7012;
int64_t x216 = INT64_MAX;
volatile uint8_t x228 = 12U;
static uint64_t x249 = 8702LLU;
volatile uint64_t x261 = 326464090948425897LLU;
int16_t x264 = INT16_MIN;
int64_t x288 = -76990LL;
static volatile int64_t t14 = INT64_MAX;
volatile uint16_t x295 = 4U;
uint32_t t17 = 231U;
int16_t x358 = INT16_MAX;
volatile int32_t t18 = 15;
uint64_t x385 = 30600820809690152LLU;
volatile int64_t x410 = 1LL;
uint16_t x412 = UINT16_MAX;
uint32_t x422 = 24U;
int8_t x425 = 60;
volatile uint32_t x428 = 15451U;
uint32_t x439 = UINT32_MAX;
int16_t x463 = 0;
volatile int64_t x464 = INT64_MIN;
int64_t x468 = INT64_MIN;
volatile int8_t x470 = 3;
int64_t x514 = 1338958832LL;
static uint8_t x521 = 6U;
volatile int32_t x523 = 462261;
static int8_t x534 = -9;
uint16_t x537 = 5U;
uint16_t x538 = 682U;
uint8_t x571 = 33U;
volatile int32_t t33 = 270226;
uint8_t x574 = 29U;
volatile int64_t x631 = -1LL;
int16_t x632 = INT16_MIN;
static int32_t x658 = -109887;
int32_t x690 = INT32_MIN;
int16_t x739 = -1;
int32_t x783 = 42128;
volatile int64_t x793 = 3192721407579391925LL;
uint16_t x794 = 4056U;
int64_t t49 = 15LL;
static uint16_t x797 = UINT16_MAX;
int32_t x808 = INT32_MAX;
volatile int64_t x836 = -223313LL;
volatile uint32_t t52 = 49U;
volatile uint8_t x867 = 14U;
uint64_t t54 = 529255608550553045LLU;
uint32_t x904 = UINT32_MAX;
uint8_t x922 = 1U;
int32_t x923 = INT32_MIN;
volatile int64_t x924 = -484609LL;
int32_t x925 = INT32_MAX;
int8_t x948 = INT8_MIN;
volatile int32_t x990 = 28902;
uint16_t x1001 = 292U;
static uint32_t x1004 = 509158500U;
static volatile int32_t x1005 = INT32_MAX;
uint16_t x1009 = UINT16_MAX;
int8_t x1012 = INT8_MIN;
static int32_t t66 = -5;
uint8_t x1045 = 6U;
uint8_t x1046 = 1U;
int32_t t69 = -6;
uint8_t x1057 = 3U;
int32_t x1060 = 350960728;
int32_t t70 = 16014535;
int64_t x1065 = 6456808519749LL;
uint8_t x1071 = 4U;
volatile int16_t x1074 = INT16_MAX;
uint16_t x1075 = UINT16_MAX;
int8_t x1076 = -1;
int64_t x1077 = 52651354513LL;
uint64_t t75 = UINT64_MAX;
int8_t x1094 = 54;
int32_t x1096 = INT32_MIN;
int8_t x1097 = 0;
volatile int32_t t77 = 1;
volatile uint8_t x1109 = 12U;
volatile int8_t x1111 = INT8_MIN;
int64_t x1162 = INT64_MIN;
int16_t x1174 = -1;
static int8_t x1176 = INT8_MIN;
volatile int32_t x1218 = -1;
static uint32_t x1262 = 7U;
volatile int8_t x1266 = -31;
uint16_t x1279 = 488U;
int16_t x1294 = -1;
uint64_t t90 = 57536LLU;
uint16_t x1312 = 191U;
static volatile int32_t t92 = 7;
uint8_t x1333 = UINT8_MAX;
static volatile int32_t t93 = -917948;
uint32_t x1348 = 667832648U;
volatile int32_t t94 = 1;
int64_t x1354 = -1LL;
volatile uint32_t t95 = 176U;
uint8_t x1365 = 1U;
volatile int8_t x1366 = 0;
int32_t x1367 = INT32_MAX;
volatile int32_t t96 = 496661717;
int32_t x1415 = -53;
int32_t t97 = -2706;
static int16_t x1457 = 49;
volatile uint16_t x1459 = 41U;
int8_t x1479 = INT8_MIN;
static int32_t x1480 = -1993251;
int8_t x1494 = 1;
int32_t x1496 = INT32_MIN;
static uint32_t x1550 = UINT32_MAX;
static int16_t x1551 = 52;
static uint8_t x1552 = 9U;
uint64_t x1581 = 444533381026803521LLU;
uint32_t x1583 = 5U;
static int32_t x1595 = 31;
int64_t x1656 = -1LL;
static uint16_t x1671 = 3U;
uint64_t x1703 = UINT64_MAX;
static int16_t x1704 = INT16_MIN;
volatile int8_t x1728 = -30;
int8_t x1771 = INT8_MIN;
static volatile uint32_t t118 = UINT32_MAX;
uint32_t x1807 = UINT32_MAX;
uint64_t x1855 = 2830779983472LLU;
static volatile uint32_t t124 = 1175U;
static volatile int64_t x1882 = 53585247466LL;
int32_t t126 = -432070;
volatile uint8_t x1951 = 3U;
int16_t x1960 = 22;
volatile uint8_t x2042 = 0U;
volatile int32_t x2044 = INT32_MAX;
uint8_t x2049 = 46U;
static volatile int8_t x2051 = 27;
uint16_t x2054 = 4U;
int16_t x2064 = INT16_MIN;
volatile int32_t x2075 = INT32_MIN;
uint16_t x2094 = 0U;
int64_t x2111 = -1LL;
int64_t x2129 = INT64_MAX;
volatile uint32_t x2130 = UINT32_MAX;
static int64_t x2131 = INT64_MAX;
static int8_t x2157 = INT8_MAX;
int8_t x2159 = 26;
static volatile int32_t t141 = 107278378;
int32_t x2172 = INT32_MIN;
int8_t x2181 = 2;
static int8_t x2182 = 5;
volatile uint32_t x2231 = 62U;
int16_t x2269 = INT16_MAX;
int32_t x2270 = INT32_MAX;
static uint32_t x2319 = UINT32_MAX;
static int32_t x2327 = INT32_MAX;
static int8_t x2337 = INT8_MAX;
int64_t x2342 = INT64_MAX;
volatile int32_t x2344 = INT32_MIN;
int64_t x2351 = 314467266439427438LL;
static int32_t t154 = 154221964;
int16_t x2366 = -254;
int16_t x2382 = 1;
int64_t x2384 = -1LL;
volatile int32_t t156 = -109;
static int8_t x2393 = INT8_MAX;
static int32_t t157 = -123911;
uint64_t x2410 = UINT64_MAX;
static int32_t t159 = -384184;
int32_t t161 = -33668608;
int16_t x2537 = INT16_MAX;
uint64_t x2541 = 869LLU;
int16_t x2542 = -2162;
volatile int32_t x2543 = 7391;
volatile uint8_t x2564 = 7U;
volatile int32_t t167 = 13233860;
int8_t x2578 = -1;
int64_t x2579 = INT64_MIN;
uint8_t x2586 = UINT8_MAX;
static uint16_t x2587 = 28842U;
int32_t t170 = -66062983;
int16_t x2603 = INT16_MAX;
int8_t x2634 = INT8_MIN;
static int32_t x2640 = -1;
int32_t t174 = INT32_MAX;
static uint8_t x2656 = 118U;
static volatile int32_t t175 = 130476;
static volatile uint32_t x2658 = 78489471U;
int32_t x2682 = -2;
static int32_t x2684 = INT32_MIN;
volatile uint32_t x2699 = 187499717U;
int8_t x2705 = 3;
uint8_t x2710 = 0U;
int64_t x2719 = INT64_MIN;
int32_t t182 = -7982;
uint32_t x2723 = 382113U;
uint8_t x2727 = 0U;
int64_t x2728 = -1LL;
int8_t x2770 = -1;
uint32_t x2772 = 71779829U;
volatile uint64_t t186 = 20592549969LLU;
int32_t x2784 = -5;
volatile int8_t x2795 = INT8_MIN;
volatile uint64_t t188 = UINT64_MAX;
uint64_t x2808 = 8LLU;
uint16_t x2826 = 25U;
static volatile uint64_t t192 = UINT64_MAX;
int8_t x2864 = INT8_MIN;
uint32_t x2877 = UINT32_MAX;
volatile uint64_t x2883 = 1472749345260702106LLU;
uint8_t x2901 = UINT8_MAX;
int32_t x2925 = 0;


void f0(void) {
    	int32_t x9 = INT32_MAX;
	int8_t x10 = -7;
	volatile int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MIN;
	volatile int32_t t0 = INT32_MAX;

    t0 = (x9>>(x10*(x11<=x12)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x25 = INT16_MAX;
	volatile uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 123820945U;
	int16_t x28 = INT16_MAX;

    t1 = (x25>>(x26*(x27<=x28)));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MAX;
	int64_t x44 = -54LL;
	static volatile int32_t t2 = 122;

    t2 = (x41>>(x42*(x43<=x44)));

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	volatile uint16_t x46 = 4450U;
	volatile int8_t x47 = INT8_MAX;
	volatile int32_t t3 = 3;

    t3 = (x45>>(x46*(x47<=x48)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x61 = 42U;
	int16_t x63 = INT16_MAX;

    t4 = (x61>>(x62*(x63<=x64)));

    if (t4 != 42) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x85 = UINT32_MAX;
	uint64_t x87 = 599431150726593524LLU;
	static uint32_t x88 = 36U;

    t5 = (x85>>(x86*(x87<=x88)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x109 = 20U;
	volatile uint8_t x110 = 20U;
	int64_t x111 = INT64_MIN;
	int32_t t6 = 956157923;

    t6 = (x109>>(x110*(x111<=x112)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x157 = UINT8_MAX;
	volatile int16_t x158 = -1;
	static uint16_t x159 = 179U;
	int8_t x160 = 8;
	static int32_t t7 = -14;

    t7 = (x157>>(x158*(x159<=x160)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x161 = 119613LLU;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -1LL;
	volatile uint64_t t8 = 49556162716781LLU;

    t8 = (x161>>(x162*(x163<=x164)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x201 = 52;
	int32_t x203 = INT32_MAX;

    t9 = (x201>>(x202*(x203<=x204)));

    if (t9 != 52) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x213 = 0LL;
	volatile uint8_t x214 = 0U;
	uint32_t x215 = 2U;
	static int64_t t10 = 1690394812722617LL;

    t10 = (x213>>(x214*(x215<=x216)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x225 = 1;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MAX;
	int32_t t11 = 231156;

    t11 = (x225>>(x226*(x227<=x228)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = 133680LL;
	volatile uint64_t t12 = 644LLU;

    t12 = (x249>>(x250*(x251<=x252)));

    if (t12 != 8702LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = -525LL;
	volatile uint64_t t13 = 23LLU;

    t13 = (x261>>(x262*(x263<=x264)));

    if (t13 != 326464090948425897LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x285 = INT64_MAX;
	static volatile int64_t x286 = 10270800084527188LL;
	int16_t x287 = -1;

    t14 = (x285>>(x286*(x287<=x288)));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x293 = 4455;
	int8_t x294 = 27;
	uint64_t x296 = UINT64_MAX;
	static int32_t t15 = -502;

    t15 = (x293>>(x294*(x295<=x296)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x337 = 6U;
	static volatile int64_t x338 = INT64_MAX;
	volatile uint16_t x339 = 798U;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t16 = -362452233;

    t16 = (x337>>(x338*(x339<=x340)));

    if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x353 = 41531018U;
	static int32_t x354 = INT32_MIN;
	int32_t x355 = 5045207;
	static volatile uint32_t x356 = 654359U;

    t17 = (x353>>(x354*(x355<=x356)));

    if (t17 != 41531018U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x357 = 9845U;
	int16_t x359 = 197;
	volatile uint8_t x360 = 4U;

    t18 = (x357>>(x358*(x359<=x360)));

    if (t18 != 9845) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x386 = UINT64_MAX;
	static int16_t x387 = -1;
	int64_t x388 = INT64_MIN;
	static uint64_t t19 = 132897LLU;

    t19 = (x385>>(x386*(x387<=x388)));

    if (t19 != 30600820809690152LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x409 = 6;
	static int8_t x411 = -48;
	static volatile int32_t t20 = -114361474;

    t20 = (x409>>(x410*(x411<=x412)));

    if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x421 = UINT64_MAX;
	static int16_t x423 = 10243;
	int64_t x424 = INT64_MIN;
	volatile uint64_t t21 = UINT64_MAX;

    t21 = (x421>>(x422*(x423<=x424)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x426 = UINT32_MAX;
	volatile int16_t x427 = -3;
	static volatile int32_t t22 = -110297937;

    t22 = (x425>>(x426*(x427<=x428)));

    if (t22 != 60) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x437 = UINT8_MAX;
	static uint32_t x438 = 402U;
	int32_t x440 = INT32_MAX;
	volatile int32_t t23 = 4647;

    t23 = (x437>>(x438*(x439<=x440)));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x461 = 3U;
	uint16_t x462 = UINT16_MAX;
	int32_t t24 = 552;

    t24 = (x461>>(x462*(x463<=x464)));

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x465 = 1U;
	uint32_t x466 = 198536560U;
	uint64_t x467 = UINT64_MAX;
	static int32_t t25 = 59005;

    t25 = (x465>>(x466*(x467<=x468)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x469 = 51U;
	static int32_t x471 = INT32_MAX;
	int32_t x472 = INT32_MIN;
	uint32_t t26 = 7911842U;

    t26 = (x469>>(x470*(x471<=x472)));

    if (t26 != 51U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x473 = 311535091182940288LLU;
	volatile int32_t x474 = 86376;
	int64_t x475 = 170174017398597422LL;
	volatile int32_t x476 = INT32_MIN;
	uint64_t t27 = 575831LLU;

    t27 = (x473>>(x474*(x475<=x476)));

    if (t27 != 311535091182940288LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x513 = 59;
	int32_t x515 = -108;
	int32_t x516 = -1930284;
	int32_t t28 = -3;

    t28 = (x513>>(x514*(x515<=x516)));

    if (t28 != 59) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x522 = INT32_MAX;
	volatile int16_t x524 = INT16_MAX;
	int32_t t29 = 13135207;

    t29 = (x521>>(x522*(x523<=x524)));

    if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x529 = UINT64_MAX;
	volatile int64_t x530 = 7592511LL;
	int16_t x531 = 6653;
	volatile uint16_t x532 = 31U;
	uint64_t t30 = UINT64_MAX;

    t30 = (x529>>(x530*(x531<=x532)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x533 = UINT16_MAX;
	uint32_t x535 = 25U;
	int8_t x536 = 0;
	int32_t t31 = -2048005;

    t31 = (x533>>(x534*(x535<=x536)));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x539 = INT8_MAX;
	static int64_t x540 = -1LL;
	volatile int32_t t32 = -1811;

    t32 = (x537>>(x538*(x539<=x540)));

    if (t32 != 5) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x569 = 57U;
	uint32_t x570 = UINT32_MAX;
	int64_t x572 = -1LL;

    t33 = (x569>>(x570*(x571<=x572)));

    if (t33 != 57) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x573 = 1U;
	int8_t x575 = INT8_MAX;
	volatile uint8_t x576 = UINT8_MAX;
	volatile int32_t t34 = -21;

    t34 = (x573>>(x574*(x575<=x576)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x585 = 1;
	volatile int32_t x586 = INT32_MIN;
	static uint8_t x587 = UINT8_MAX;
	static volatile uint16_t x588 = 14U;
	int32_t t35 = -54;

    t35 = (x585>>(x586*(x587<=x588)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x593 = 192146U;
	static int32_t x594 = INT32_MIN;
	int16_t x595 = -1;
	static volatile int32_t x596 = -1396;
	uint32_t t36 = 189927762U;

    t36 = (x593>>(x594*(x595<=x596)));

    if (t36 != 192146U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x601 = 155649536U;
	volatile int64_t x602 = INT64_MIN;
	static uint16_t x603 = UINT16_MAX;
	int16_t x604 = -4;
	volatile uint32_t t37 = 36380U;

    t37 = (x601>>(x602*(x603<=x604)));

    if (t37 != 155649536U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x629 = 1U;
	volatile int64_t x630 = -1LL;
	volatile int32_t t38 = 844959193;

    t38 = (x629>>(x630*(x631<=x632)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x633 = INT16_MAX;
	uint8_t x634 = 12U;
	static volatile int32_t x635 = INT32_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t39 = 184517;

    t39 = (x633>>(x634*(x635<=x636)));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x637 = 391183491092835598LLU;
	uint8_t x638 = 8U;
	uint16_t x639 = 7U;
	uint32_t x640 = 3431U;
	uint64_t t40 = 832LLU;

    t40 = (x637>>(x638*(x639<=x640)));

    if (t40 != 1528060512081389LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x657 = UINT64_MAX;
	int64_t x659 = INT64_MAX;
	int32_t x660 = INT32_MIN;
	static uint64_t t41 = UINT64_MAX;

    t41 = (x657>>(x658*(x659<=x660)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x681 = 28LLU;
	int32_t x682 = INT32_MIN;
	int8_t x683 = INT8_MIN;
	static int16_t x684 = -4104;
	volatile uint64_t t42 = 143LLU;

    t42 = (x681>>(x682*(x683<=x684)));

    if (t42 != 28LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x689 = 933279122U;
	int8_t x691 = 1;
	uint8_t x692 = 0U;
	uint32_t t43 = 8U;

    t43 = (x689>>(x690*(x691<=x692)));

    if (t43 != 933279122U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x705 = UINT32_MAX;
	static uint8_t x706 = 11U;
	int8_t x707 = INT8_MAX;
	int64_t x708 = INT64_MAX;
	static uint32_t t44 = 157981U;

    t44 = (x705>>(x706*(x707<=x708)));

    if (t44 != 2097151U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x717 = 7U;
	static uint16_t x718 = 0U;
	int16_t x719 = 5;
	int8_t x720 = 4;
	int32_t t45 = -1284;

    t45 = (x717>>(x718*(x719<=x720)));

    if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x737 = 547526369955663797LLU;
	static int32_t x738 = -1;
	volatile int64_t x740 = INT64_MIN;
	volatile uint64_t t46 = 146394140LLU;

    t46 = (x737>>(x738*(x739<=x740)));

    if (t46 != 547526369955663797LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x741 = UINT8_MAX;
	uint8_t x742 = 14U;
	int64_t x743 = 1521087LL;
	static int8_t x744 = INT8_MAX;
	volatile int32_t t47 = 10;

    t47 = (x741>>(x742*(x743<=x744)));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x781 = 1308U;
	uint16_t x782 = UINT16_MAX;
	int32_t x784 = -1;
	static volatile int32_t t48 = 480;

    t48 = (x781>>(x782*(x783<=x784)));

    if (t48 != 1308) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x795 = 55;
	static int32_t x796 = -132;

    t49 = (x793>>(x794*(x795<=x796)));

    if (t49 != 3192721407579391925LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x798 = 8981U;
	int16_t x799 = INT16_MAX;
	uint64_t x800 = 7LLU;
	int32_t t50 = 5894;

    t50 = (x797>>(x798*(x799<=x800)));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x805 = 601459U;
	static int16_t x806 = -1;
	uint64_t x807 = 4740338749118LLU;
	uint32_t t51 = 388559245U;

    t51 = (x805>>(x806*(x807<=x808)));

    if (t51 != 601459U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x833 = 7600U;
	uint16_t x834 = 7U;
	int32_t x835 = -42751;

    t52 = (x833>>(x834*(x835<=x836)));

    if (t52 != 7600U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x849 = 3574273158334259LL;
	int8_t x850 = INT8_MAX;
	int32_t x851 = 2083842;
	uint32_t x852 = 3267U;
	int64_t t53 = 46745509284883LL;

    t53 = (x849>>(x850*(x851<=x852)));

    if (t53 != 3574273158334259LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x865 = 1087385680158776224LLU;
	volatile int64_t x866 = 1044320039LL;
	static int8_t x868 = -15;

    t54 = (x865>>(x866*(x867<=x868)));

    if (t54 != 1087385680158776224LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x893 = INT32_MAX;
	static uint64_t x894 = 1936189361LLU;
	static volatile int32_t x895 = INT32_MAX;
	uint8_t x896 = 0U;
	static int32_t t55 = INT32_MAX;

    t55 = (x893>>(x894*(x895<=x896)));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x901 = 104225051369LLU;
	volatile int8_t x902 = 0;
	volatile uint8_t x903 = 27U;
	volatile uint64_t t56 = 4354976787737500161LLU;

    t56 = (x901>>(x902*(x903<=x904)));

    if (t56 != 104225051369LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x921 = 1;
	int32_t t57 = 9338927;

    t57 = (x921>>(x922*(x923<=x924)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x926 = -1;
	int32_t x927 = INT32_MAX;
	uint8_t x928 = 48U;
	static volatile int32_t t58 = INT32_MAX;

    t58 = (x925>>(x926*(x927<=x928)));

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x945 = 2U;
	static uint8_t x946 = 3U;
	int64_t x947 = -15LL;
	volatile int32_t t59 = -8577;

    t59 = (x945>>(x946*(x947<=x948)));

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x965 = 13U;
	static int64_t x966 = INT64_MIN;
	static int32_t x967 = 21;
	uint8_t x968 = 0U;
	volatile int32_t t60 = 359409604;

    t60 = (x965>>(x966*(x967<=x968)));

    if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x985 = INT32_MAX;
	uint8_t x986 = 0U;
	volatile uint64_t x987 = UINT64_MAX;
	int32_t x988 = -251;
	volatile int32_t t61 = INT32_MAX;

    t61 = (x985>>(x986*(x987<=x988)));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x989 = UINT8_MAX;
	volatile int32_t x991 = -34;
	static volatile int64_t x992 = INT64_MIN;
	int32_t t62 = -66697016;

    t62 = (x989>>(x990*(x991<=x992)));

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x1002 = 381U;
	uint64_t x1003 = UINT64_MAX;
	volatile int32_t t63 = -512680317;

    t63 = (x1001>>(x1002*(x1003<=x1004)));

    if (t63 != 292) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x1006 = 0U;
	uint8_t x1007 = UINT8_MAX;
	int8_t x1008 = INT8_MIN;
	static volatile int32_t t64 = INT32_MAX;

    t64 = (x1005>>(x1006*(x1007<=x1008)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x1010 = -2276024LL;
	static uint16_t x1011 = UINT16_MAX;
	volatile int32_t t65 = -2429767;

    t65 = (x1009>>(x1010*(x1011<=x1012)));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x1017 = UINT8_MAX;
	int32_t x1018 = INT32_MIN;
	uint32_t x1019 = 397512873U;
	uint16_t x1020 = 142U;

    t66 = (x1017>>(x1018*(x1019<=x1020)));

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x1033 = 0;
	uint16_t x1034 = 218U;
	int8_t x1035 = INT8_MAX;
	uint8_t x1036 = 0U;
	volatile int32_t t67 = 5643945;

    t67 = (x1033>>(x1034*(x1035<=x1036)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x1041 = UINT16_MAX;
	volatile int16_t x1042 = -1;
	static uint16_t x1043 = 2025U;
	int8_t x1044 = INT8_MIN;
	int32_t t68 = -4743173;

    t68 = (x1041>>(x1042*(x1043<=x1044)));

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x1047 = 4532420LLU;
	uint32_t x1048 = UINT32_MAX;

    t69 = (x1045>>(x1046*(x1047<=x1048)));

    if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x1058 = 26LLU;
	uint64_t x1059 = 8628791095561LLU;

    t70 = (x1057>>(x1058*(x1059<=x1060)));

    if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x1066 = 0U;
	int64_t x1067 = INT64_MIN;
	int64_t x1068 = INT64_MIN;
	volatile int64_t t71 = -421128LL;

    t71 = (x1065>>(x1066*(x1067<=x1068)));

    if (t71 != 6456808519749LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x1069 = INT64_MAX;
	volatile uint16_t x1070 = UINT16_MAX;
	volatile int8_t x1072 = -1;
	volatile int64_t t72 = INT64_MAX;

    t72 = (x1069>>(x1070*(x1071<=x1072)));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x1073 = UINT32_MAX;
	static volatile uint32_t t73 = UINT32_MAX;

    t73 = (x1073>>(x1074*(x1075<=x1076)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x1078 = -1;
	static int32_t x1079 = 39989098;
	volatile uint8_t x1080 = 6U;
	volatile int64_t t74 = -2778582057LL;

    t74 = (x1077>>(x1078*(x1079<=x1080)));

    if (t74 != 52651354513LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x1085 = UINT64_MAX;
	uint64_t x1086 = 34336LLU;
	uint64_t x1087 = UINT64_MAX;
	static uint8_t x1088 = 3U;

    t75 = (x1085>>(x1086*(x1087<=x1088)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x1093 = 12741LLU;
	uint16_t x1095 = 473U;
	static uint64_t t76 = 1850451LLU;

    t76 = (x1093>>(x1094*(x1095<=x1096)));

    if (t76 != 12741LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x1098 = 3035690142345532LLU;
	int64_t x1099 = INT64_MAX;
	int8_t x1100 = INT8_MIN;

    t77 = (x1097>>(x1098*(x1099<=x1100)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x1110 = 26682U;
	uint64_t x1112 = 12474802963490164LLU;
	int32_t t78 = -449;

    t78 = (x1109>>(x1110*(x1111<=x1112)));

    if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint32_t x1113 = UINT32_MAX;
	int32_t x1114 = -1;
	int16_t x1115 = 35;
	static int64_t x1116 = INT64_MIN;
	volatile uint32_t t79 = UINT32_MAX;

    t79 = (x1113>>(x1114*(x1115<=x1116)));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x1161 = 8395;
	int16_t x1163 = INT16_MIN;
	int64_t x1164 = INT64_MIN;
	volatile int32_t t80 = 106;

    t80 = (x1161>>(x1162*(x1163<=x1164)));

    if (t80 != 8395) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x1173 = 19983787;
	volatile int8_t x1175 = -1;
	volatile int32_t t81 = 95953;

    t81 = (x1173>>(x1174*(x1175<=x1176)));

    if (t81 != 19983787) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x1185 = 0LL;
	volatile int64_t x1186 = 1764360367040LL;
	int8_t x1187 = INT8_MAX;
	int32_t x1188 = -419781748;
	int64_t t82 = -90LL;

    t82 = (x1185>>(x1186*(x1187<=x1188)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x1217 = INT8_MAX;
	static int32_t x1219 = -1;
	static int32_t x1220 = -5091;
	static volatile int32_t t83 = 119529;

    t83 = (x1217>>(x1218*(x1219<=x1220)));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x1233 = UINT16_MAX;
	uint8_t x1234 = 6U;
	uint64_t x1235 = 53867042107619LLU;
	int32_t x1236 = -406;
	int32_t t84 = -181711624;

    t84 = (x1233>>(x1234*(x1235<=x1236)));

    if (t84 != 1023) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x1249 = INT8_MAX;
	int8_t x1250 = 26;
	uint16_t x1251 = 98U;
	uint64_t x1252 = 92762LLU;
	volatile int32_t t85 = -67330;

    t85 = (x1249>>(x1250*(x1251<=x1252)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x1261 = INT16_MAX;
	int8_t x1263 = INT8_MIN;
	int64_t x1264 = INT64_MIN;
	volatile int32_t t86 = 1;

    t86 = (x1261>>(x1262*(x1263<=x1264)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x1265 = UINT16_MAX;
	static int32_t x1267 = 120881761;
	int64_t x1268 = -1LL;
	volatile int32_t t87 = 956;

    t87 = (x1265>>(x1266*(x1267<=x1268)));

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x1277 = 3U;
	int64_t x1278 = -3418590998686332LL;
	int16_t x1280 = -1;
	int32_t t88 = 899;

    t88 = (x1277>>(x1278*(x1279<=x1280)));

    if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x1293 = 21038969628650LL;
	static uint8_t x1295 = 6U;
	int16_t x1296 = INT16_MIN;
	static int64_t t89 = 2918272100217671152LL;

    t89 = (x1293>>(x1294*(x1295<=x1296)));

    if (t89 != 21038969628650LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x1297 = 404554575LLU;
	int8_t x1298 = INT8_MIN;
	static uint32_t x1299 = UINT32_MAX;
	int8_t x1300 = INT8_MIN;

    t90 = (x1297>>(x1298*(x1299<=x1300)));

    if (t90 != 404554575LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x1309 = INT32_MAX;
	int8_t x1310 = INT8_MIN;
	uint64_t x1311 = UINT64_MAX;
	static volatile int32_t t91 = INT32_MAX;

    t91 = (x1309>>(x1310*(x1311<=x1312)));

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x1317 = 6U;
	int8_t x1318 = 8;
	static volatile uint32_t x1319 = 1536875U;
	int8_t x1320 = 30;

    t92 = (x1317>>(x1318*(x1319<=x1320)));

    if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x1334 = 4334561;
	int8_t x1335 = 0;
	static int32_t x1336 = -1;

    t93 = (x1333>>(x1334*(x1335<=x1336)));

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x1345 = 15;
	static uint64_t x1346 = 95536LLU;
	static int8_t x1347 = INT8_MIN;

    t94 = (x1345>>(x1346*(x1347<=x1348)));

    if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x1353 = 2U;
	int32_t x1355 = 908161256;
	int32_t x1356 = INT32_MIN;

    t95 = (x1353>>(x1354*(x1355<=x1356)));

    if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x1368 = -1;

    t96 = (x1365>>(x1366*(x1367<=x1368)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x1413 = 0;
	int32_t x1414 = INT32_MIN;
	static volatile uint64_t x1416 = 1802414397LLU;

    t97 = (x1413>>(x1414*(x1415<=x1416)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x1425 = UINT32_MAX;
	uint64_t x1426 = UINT64_MAX;
	static uint16_t x1427 = 4U;
	int16_t x1428 = INT16_MIN;
	uint32_t t98 = UINT32_MAX;

    t98 = (x1425>>(x1426*(x1427<=x1428)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x1458 = -1LL;
	int8_t x1460 = 1;
	int32_t t99 = 914034265;

    t99 = (x1457>>(x1458*(x1459<=x1460)));

    if (t99 != 49) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x1477 = 7006;
	static int8_t x1478 = INT8_MIN;
	static volatile int32_t t100 = 3451539;

    t100 = (x1477>>(x1478*(x1479<=x1480)));

    if (t100 != 7006) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x1489 = 1783500357230664LL;
	uint16_t x1490 = 756U;
	int32_t x1491 = -1;
	volatile int32_t x1492 = INT32_MIN;
	int64_t t101 = -479232500715994LL;

    t101 = (x1489>>(x1490*(x1491<=x1492)));

    if (t101 != 1783500357230664LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x1493 = UINT32_MAX;
	int32_t x1495 = INT32_MIN;
	uint32_t t102 = 201950583U;

    t102 = (x1493>>(x1494*(x1495<=x1496)));

    if (t102 != 2147483647U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x1525 = 579U;
	volatile int16_t x1526 = -3500;
	static uint16_t x1527 = 23937U;
	int16_t x1528 = 0;
	volatile int32_t t103 = 991656;

    t103 = (x1525>>(x1526*(x1527<=x1528)));

    if (t103 != 579) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x1533 = 119952303181853792LLU;
	static uint8_t x1534 = 4U;
	uint64_t x1535 = 316569651816202LLU;
	int16_t x1536 = -1;
	uint64_t t104 = 2265794LLU;

    t104 = (x1533>>(x1534*(x1535<=x1536)));

    if (t104 != 7497018948865862LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x1549 = 114496860LL;
	int64_t t105 = 529109002749509380LL;

    t105 = (x1549>>(x1550*(x1551<=x1552)));

    if (t105 != 114496860LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x1577 = INT16_MAX;
	static uint32_t x1578 = 7U;
	int64_t x1579 = -40LL;
	uint8_t x1580 = UINT8_MAX;
	static volatile int32_t t106 = -7;

    t106 = (x1577>>(x1578*(x1579<=x1580)));

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x1582 = INT16_MIN;
	uint8_t x1584 = 1U;
	uint64_t t107 = 489253LLU;

    t107 = (x1581>>(x1582*(x1583<=x1584)));

    if (t107 != 444533381026803521LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x1593 = 0;
	int8_t x1594 = 1;
	int16_t x1596 = -1;
	volatile int32_t t108 = 751824568;

    t108 = (x1593>>(x1594*(x1595<=x1596)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x1629 = INT8_MAX;
	static uint8_t x1630 = UINT8_MAX;
	uint64_t x1631 = 4379446739733LLU;
	int16_t x1632 = 2458;
	int32_t t109 = -87998;

    t109 = (x1629>>(x1630*(x1631<=x1632)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x1637 = 6290469LL;
	uint32_t x1638 = 1221075U;
	volatile int32_t x1639 = 10479;
	int32_t x1640 = -1;
	volatile int64_t t110 = 50165704073617816LL;

    t110 = (x1637>>(x1638*(x1639<=x1640)));

    if (t110 != 6290469LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x1653 = UINT16_MAX;
	volatile int64_t x1654 = INT64_MIN;
	static uint8_t x1655 = UINT8_MAX;
	volatile int32_t t111 = -17411769;

    t111 = (x1653>>(x1654*(x1655<=x1656)));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x1669 = UINT64_MAX;
	uint64_t x1670 = 19551LLU;
	int8_t x1672 = -59;
	uint64_t t112 = UINT64_MAX;

    t112 = (x1669>>(x1670*(x1671<=x1672)));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x1701 = 14;
	int16_t x1702 = INT16_MIN;
	volatile int32_t t113 = -1;

    t113 = (x1701>>(x1702*(x1703<=x1704)));

    if (t113 != 14) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x1725 = 12U;
	int8_t x1726 = INT8_MIN;
	uint32_t x1727 = UINT32_MAX;
	static volatile int32_t t114 = -1;

    t114 = (x1725>>(x1726*(x1727<=x1728)));

    if (t114 != 12) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x1753 = 125478U;
	static int64_t x1754 = 137500720248217LL;
	int8_t x1755 = INT8_MIN;
	uint32_t x1756 = 8U;
	uint32_t t115 = 0U;

    t115 = (x1753>>(x1754*(x1755<=x1756)));

    if (t115 != 125478U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x1769 = UINT8_MAX;
	static int16_t x1770 = INT16_MAX;
	static int16_t x1772 = INT16_MIN;
	int32_t t116 = -79;

    t116 = (x1769>>(x1770*(x1771<=x1772)));

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x1773 = INT32_MAX;
	static uint64_t x1774 = 37446084792160LLU;
	int32_t x1775 = 0;
	int16_t x1776 = -1;
	static volatile int32_t t117 = INT32_MAX;

    t117 = (x1773>>(x1774*(x1775<=x1776)));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x1777 = UINT32_MAX;
	static int16_t x1778 = 201;
	volatile uint8_t x1779 = 4U;
	int16_t x1780 = INT16_MIN;

    t118 = (x1777>>(x1778*(x1779<=x1780)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x1785 = 3U;
	uint8_t x1786 = 30U;
	int32_t x1787 = INT32_MIN;
	volatile int16_t x1788 = INT16_MIN;
	volatile int32_t t119 = 109345;

    t119 = (x1785>>(x1786*(x1787<=x1788)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x1797 = 782336LL;
	static volatile int64_t x1798 = -1LL;
	volatile int64_t x1799 = INT64_MAX;
	volatile uint64_t x1800 = 155573523436LLU;
	static volatile int64_t t120 = -28261095958105535LL;

    t120 = (x1797>>(x1798*(x1799<=x1800)));

    if (t120 != 782336LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x1805 = 75U;
	volatile int32_t x1806 = -738518510;
	int32_t x1808 = 220;
	int32_t t121 = 394434576;

    t121 = (x1805>>(x1806*(x1807<=x1808)));

    if (t121 != 75) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1817 = 10;
	static int64_t x1818 = -1LL;
	int32_t x1819 = INT32_MAX;
	volatile int64_t x1820 = -1280587706298LL;
	volatile int32_t t122 = 2299192;

    t122 = (x1817>>(x1818*(x1819<=x1820)));

    if (t122 != 10) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x1853 = UINT64_MAX;
	int8_t x1854 = INT8_MIN;
	uint8_t x1856 = UINT8_MAX;
	volatile uint64_t t123 = UINT64_MAX;

    t123 = (x1853>>(x1854*(x1855<=x1856)));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1869 = 56U;
	int8_t x1870 = INT8_MAX;
	volatile uint32_t x1871 = UINT32_MAX;
	int16_t x1872 = INT16_MIN;

    t124 = (x1869>>(x1870*(x1871<=x1872)));

    if (t124 != 56U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x1881 = INT32_MAX;
	int8_t x1883 = -1;
	uint64_t x1884 = 1248LLU;
	static int32_t t125 = INT32_MAX;

    t125 = (x1881>>(x1882*(x1883<=x1884)));

    if (t125 != INT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1885 = 108567;
	volatile int8_t x1886 = INT8_MIN;
	int8_t x1887 = -4;
	static int8_t x1888 = INT8_MIN;

    t126 = (x1885>>(x1886*(x1887<=x1888)));

    if (t126 != 108567) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1929 = UINT8_MAX;
	int32_t x1930 = INT32_MAX;
	int32_t x1931 = 447857;
	int8_t x1932 = -1;
	volatile int32_t t127 = 3;

    t127 = (x1929>>(x1930*(x1931<=x1932)));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1949 = 44U;
	static int64_t x1950 = INT64_MAX;
	int16_t x1952 = -1;
	volatile int32_t t128 = 4659620;

    t128 = (x1949>>(x1950*(x1951<=x1952)));

    if (t128 != 44) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x1957 = 1177LL;
	int32_t x1958 = 120976933;
	int64_t x1959 = INT64_MAX;
	volatile int64_t t129 = 220575062504481374LL;

    t129 = (x1957>>(x1958*(x1959<=x1960)));

    if (t129 != 1177LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x1965 = 1;
	uint64_t x1966 = 21890479135652LLU;
	int64_t x1967 = 12940780581262735LL;
	int64_t x1968 = -1LL;
	volatile int32_t t130 = 194;

    t130 = (x1965>>(x1966*(x1967<=x1968)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x2041 = 17891U;
	static int8_t x2043 = -5;
	volatile int32_t t131 = -27199011;

    t131 = (x2041>>(x2042*(x2043<=x2044)));

    if (t131 != 17891) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x2050 = -2;
	uint8_t x2052 = 11U;
	int32_t t132 = 9928458;

    t132 = (x2049>>(x2050*(x2051<=x2052)));

    if (t132 != 46) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x2053 = 91U;
	uint64_t x2055 = UINT64_MAX;
	int16_t x2056 = INT16_MAX;
	volatile int32_t t133 = 19999773;

    t133 = (x2053>>(x2054*(x2055<=x2056)));

    if (t133 != 91) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x2061 = 2380U;
	int64_t x2062 = -1LL;
	uint8_t x2063 = UINT8_MAX;
	volatile int32_t t134 = 0;

    t134 = (x2061>>(x2062*(x2063<=x2064)));

    if (t134 != 2380) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x2073 = 14587U;
	uint8_t x2074 = 16U;
	int16_t x2076 = INT16_MIN;
	volatile uint32_t t135 = 260012548U;

    t135 = (x2073>>(x2074*(x2075<=x2076)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x2093 = 1421;
	int32_t x2095 = INT32_MIN;
	volatile int8_t x2096 = INT8_MIN;
	int32_t t136 = 1442233;

    t136 = (x2093>>(x2094*(x2095<=x2096)));

    if (t136 != 1421) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x2105 = INT32_MAX;
	volatile int32_t x2106 = INT32_MIN;
	int64_t x2107 = INT64_MAX;
	static int16_t x2108 = -33;
	volatile int32_t t137 = INT32_MAX;

    t137 = (x2105>>(x2106*(x2107<=x2108)));

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x2109 = INT32_MAX;
	static uint8_t x2110 = UINT8_MAX;
	volatile int32_t x2112 = INT32_MIN;
	volatile int32_t t138 = INT32_MAX;

    t138 = (x2109>>(x2110*(x2111<=x2112)));

    if (t138 != INT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x2132 = 44;
	static volatile int64_t t139 = INT64_MAX;

    t139 = (x2129>>(x2130*(x2131<=x2132)));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x2133 = 6;
	int64_t x2134 = INT64_MIN;
	static uint32_t x2135 = 2U;
	volatile int64_t x2136 = -26251970LL;
	volatile int32_t t140 = -5845;

    t140 = (x2133>>(x2134*(x2135<=x2136)));

    if (t140 != 6) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x2158 = -54854650877479122LL;
	volatile int8_t x2160 = INT8_MIN;

    t141 = (x2157>>(x2158*(x2159<=x2160)));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x2169 = INT8_MAX;
	volatile uint8_t x2170 = 70U;
	volatile int16_t x2171 = -1;
	static int32_t t142 = -789678307;

    t142 = (x2169>>(x2170*(x2171<=x2172)));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x2177 = 5052U;
	int16_t x2178 = INT16_MAX;
	int64_t x2179 = INT64_MAX;
	int8_t x2180 = INT8_MIN;
	volatile uint32_t t143 = 11558581U;

    t143 = (x2177>>(x2178*(x2179<=x2180)));

    if (t143 != 5052U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x2183 = -2278;
	uint64_t x2184 = UINT64_MAX;
	volatile int32_t t144 = -117;

    t144 = (x2181>>(x2182*(x2183<=x2184)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x2229 = 3171836U;
	uint8_t x2230 = 106U;
	volatile int16_t x2232 = 51;
	volatile uint32_t t145 = 199U;

    t145 = (x2229>>(x2230*(x2231<=x2232)));

    if (t145 != 3171836U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x2245 = UINT8_MAX;
	int8_t x2246 = 8;
	uint16_t x2247 = 963U;
	int16_t x2248 = -62;
	volatile int32_t t146 = 7;

    t146 = (x2245>>(x2246*(x2247<=x2248)));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x2249 = 40;
	int32_t x2250 = -1;
	int8_t x2251 = INT8_MAX;
	int32_t x2252 = INT32_MIN;
	int32_t t147 = -1;

    t147 = (x2249>>(x2250*(x2251<=x2252)));

    if (t147 != 40) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x2271 = INT8_MIN;
	volatile uint32_t x2272 = 451858U;
	volatile int32_t t148 = 31690;

    t148 = (x2269>>(x2270*(x2271<=x2272)));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x2317 = 4322280357989LL;
	uint8_t x2318 = 3U;
	uint64_t x2320 = UINT64_MAX;
	int64_t t149 = -24028940232451LL;

    t149 = (x2317>>(x2318*(x2319<=x2320)));

    if (t149 != 540285044748LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x2325 = 0U;
	static volatile int64_t x2326 = INT64_MIN;
	volatile uint32_t x2328 = 6U;
	static int32_t t150 = -3757229;

    t150 = (x2325>>(x2326*(x2327<=x2328)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x2338 = INT8_MIN;
	uint8_t x2339 = 10U;
	int64_t x2340 = INT64_MIN;
	static int32_t t151 = 0;

    t151 = (x2337>>(x2338*(x2339<=x2340)));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x2341 = 4U;
	int8_t x2343 = INT8_MAX;
	int32_t t152 = 0;

    t152 = (x2341>>(x2342*(x2343<=x2344)));

    if (t152 != 4) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x2345 = 6779U;
	int32_t x2346 = INT32_MAX;
	int64_t x2347 = INT64_MAX;
	int8_t x2348 = -1;
	static int32_t t153 = -157655;

    t153 = (x2345>>(x2346*(x2347<=x2348)));

    if (t153 != 6779) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x2349 = 15;
	static uint64_t x2350 = 53500854960LLU;
	int8_t x2352 = INT8_MIN;

    t154 = (x2349>>(x2350*(x2351<=x2352)));

    if (t154 != 15) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x2365 = INT64_MAX;
	static int8_t x2367 = INT8_MIN;
	static volatile uint64_t x2368 = 474LLU;
	int64_t t155 = INT64_MAX;

    t155 = (x2365>>(x2366*(x2367<=x2368)));

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x2381 = 11;
	static int16_t x2383 = INT16_MIN;

    t156 = (x2381>>(x2382*(x2383<=x2384)));

    if (t156 != 5) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x2394 = UINT8_MAX;
	volatile uint16_t x2395 = 6U;
	volatile int64_t x2396 = INT64_MIN;

    t157 = (x2393>>(x2394*(x2395<=x2396)));

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x2401 = 1LLU;
	volatile int8_t x2402 = INT8_MIN;
	uint8_t x2403 = UINT8_MAX;
	static int64_t x2404 = INT64_MIN;
	uint64_t t158 = 6041LLU;

    t158 = (x2401>>(x2402*(x2403<=x2404)));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x2409 = 3U;
	static uint8_t x2411 = UINT8_MAX;
	static int8_t x2412 = -1;

    t159 = (x2409>>(x2410*(x2411<=x2412)));

    if (t159 != 3) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x2477 = INT64_MAX;
	int8_t x2478 = -4;
	static volatile uint64_t x2479 = UINT64_MAX;
	int8_t x2480 = 57;
	volatile int64_t t160 = INT64_MAX;

    t160 = (x2477>>(x2478*(x2479<=x2480)));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x2497 = 0;
	int8_t x2498 = -1;
	volatile int8_t x2499 = 0;
	int8_t x2500 = -1;

    t161 = (x2497>>(x2498*(x2499<=x2500)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x2538 = 4U;
	int16_t x2539 = INT16_MAX;
	static volatile uint32_t x2540 = 221U;
	int32_t t162 = -384193604;

    t162 = (x2537>>(x2538*(x2539<=x2540)));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x2544 = INT64_MIN;
	uint64_t t163 = 5001451883LLU;

    t163 = (x2541>>(x2542*(x2543<=x2544)));

    if (t163 != 869LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x2553 = 1LL;
	static volatile int16_t x2554 = 16374;
	volatile int8_t x2555 = INT8_MIN;
	uint64_t x2556 = 21523LLU;
	volatile int64_t t164 = -1LL;

    t164 = (x2553>>(x2554*(x2555<=x2556)));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x2557 = 4222LLU;
	uint32_t x2558 = 3187U;
	static int16_t x2559 = 3395;
	int16_t x2560 = -1;
	volatile uint64_t t165 = 7194615667685LLU;

    t165 = (x2557>>(x2558*(x2559<=x2560)));

    if (t165 != 4222LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x2561 = 0;
	int32_t x2562 = INT32_MAX;
	static uint32_t x2563 = 62141156U;
	volatile int32_t t166 = 2348;

    t166 = (x2561>>(x2562*(x2563<=x2564)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x2569 = 0;
	static uint64_t x2570 = 244355357LLU;
	static volatile int8_t x2571 = -1;
	int64_t x2572 = INT64_MIN;

    t167 = (x2569>>(x2570*(x2571<=x2572)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x2577 = 12217271LL;
	uint64_t x2580 = 916355095052LLU;
	volatile int64_t t168 = 719337375235LL;

    t168 = (x2577>>(x2578*(x2579<=x2580)));

    if (t168 != 12217271LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x2585 = 2U;
	static int16_t x2588 = -1;
	volatile int32_t t169 = 1603;

    t169 = (x2585>>(x2586*(x2587<=x2588)));

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x2593 = 14131U;
	uint8_t x2594 = 61U;
	uint8_t x2595 = UINT8_MAX;
	int32_t x2596 = INT32_MIN;

    t170 = (x2593>>(x2594*(x2595<=x2596)));

    if (t170 != 14131) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x2601 = UINT16_MAX;
	int16_t x2602 = INT16_MAX;
	int32_t x2604 = INT32_MIN;
	volatile int32_t t171 = 1055915;

    t171 = (x2601>>(x2602*(x2603<=x2604)));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x2633 = 10U;
	uint8_t x2635 = UINT8_MAX;
	int32_t x2636 = INT32_MIN;
	int32_t t172 = 1;

    t172 = (x2633>>(x2634*(x2635<=x2636)));

    if (t172 != 10) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x2637 = 7;
	static int32_t x2638 = 253927380;
	volatile uint16_t x2639 = 89U;
	volatile int32_t t173 = 171515921;

    t173 = (x2637>>(x2638*(x2639<=x2640)));

    if (t173 != 7) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x2645 = INT32_MAX;
	int8_t x2646 = INT8_MIN;
	uint32_t x2647 = UINT32_MAX;
	uint64_t x2648 = 45618326LLU;

    t174 = (x2645>>(x2646*(x2647<=x2648)));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x2653 = 2;
	int16_t x2654 = INT16_MIN;
	uint16_t x2655 = 424U;

    t175 = (x2653>>(x2654*(x2655<=x2656)));

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x2657 = INT16_MAX;
	uint16_t x2659 = UINT16_MAX;
	int16_t x2660 = 4443;
	int32_t t176 = -37;

    t176 = (x2657>>(x2658*(x2659<=x2660)));

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x2661 = 7;
	static int8_t x2662 = INT8_MAX;
	static int32_t x2663 = INT32_MIN;
	static uint32_t x2664 = 505138975U;
	static int32_t t177 = -33048561;

    t177 = (x2661>>(x2662*(x2663<=x2664)));

    if (t177 != 7) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x2681 = 48U;
	int8_t x2683 = INT8_MAX;
	int32_t t178 = 796462;

    t178 = (x2681>>(x2682*(x2683<=x2684)));

    if (t178 != 48) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x2697 = UINT32_MAX;
	int8_t x2698 = INT8_MAX;
	static int8_t x2700 = 1;
	volatile uint32_t t179 = UINT32_MAX;

    t179 = (x2697>>(x2698*(x2699<=x2700)));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x2706 = -1;
	static uint64_t x2707 = UINT64_MAX;
	uint64_t x2708 = 14473078LLU;
	int32_t t180 = 3951059;

    t180 = (x2705>>(x2706*(x2707<=x2708)));

    if (t180 != 3) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x2709 = 16U;
	int16_t x2711 = INT16_MIN;
	int64_t x2712 = INT64_MIN;
	int32_t t181 = 73645400;

    t181 = (x2709>>(x2710*(x2711<=x2712)));

    if (t181 != 16) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x2717 = 1181;
	int8_t x2718 = -1;
	uint64_t x2720 = 517LLU;

    t182 = (x2717>>(x2718*(x2719<=x2720)));

    if (t182 != 1181) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x2721 = UINT8_MAX;
	static int8_t x2722 = -1;
	uint8_t x2724 = 7U;
	volatile int32_t t183 = 4911;

    t183 = (x2721>>(x2722*(x2723<=x2724)));

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x2725 = INT16_MAX;
	static int8_t x2726 = INT8_MAX;
	volatile int32_t t184 = -8147341;

    t184 = (x2725>>(x2726*(x2727<=x2728)));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x2741 = INT16_MAX;
	static int16_t x2742 = INT16_MIN;
	int64_t x2743 = INT64_MAX;
	int16_t x2744 = INT16_MAX;
	static int32_t t185 = -142860;

    t185 = (x2741>>(x2742*(x2743<=x2744)));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x2769 = 6974737LLU;
	int32_t x2771 = INT32_MIN;

    t186 = (x2769>>(x2770*(x2771<=x2772)));

    if (t186 != 6974737LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x2781 = INT64_MAX;
	uint16_t x2782 = UINT16_MAX;
	int32_t x2783 = -1;
	volatile int64_t t187 = INT64_MAX;

    t187 = (x2781>>(x2782*(x2783<=x2784)));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint64_t x2793 = UINT64_MAX;
	int16_t x2794 = 166;
	int32_t x2796 = INT32_MIN;

    t188 = (x2793>>(x2794*(x2795<=x2796)));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x2805 = 487U;
	static volatile int8_t x2806 = -32;
	int64_t x2807 = INT64_MIN;
	static volatile int32_t t189 = -11;

    t189 = (x2805>>(x2806*(x2807<=x2808)));

    if (t189 != 487) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x2825 = 102U;
	static int32_t x2827 = INT32_MIN;
	int8_t x2828 = INT8_MAX;
	volatile int32_t t190 = 88;

    t190 = (x2825>>(x2826*(x2827<=x2828)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x2841 = 1240;
	int64_t x2842 = 16369337542LL;
	int64_t x2843 = INT64_MAX;
	volatile int8_t x2844 = -1;
	static volatile int32_t t191 = 6;

    t191 = (x2841>>(x2842*(x2843<=x2844)));

    if (t191 != 1240) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x2849 = UINT64_MAX;
	int16_t x2850 = 506;
	int16_t x2851 = 1;
	int16_t x2852 = INT16_MIN;

    t192 = (x2849>>(x2850*(x2851<=x2852)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x2861 = INT8_MAX;
	int64_t x2862 = INT64_MAX;
	volatile uint8_t x2863 = 1U;
	static volatile int32_t t193 = 174209;

    t193 = (x2861>>(x2862*(x2863<=x2864)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x2878 = 1866447952954LL;
	volatile int64_t x2879 = -1LL;
	volatile uint64_t x2880 = 54610247694565LLU;
	uint32_t t194 = UINT32_MAX;

    t194 = (x2877>>(x2878*(x2879<=x2880)));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x2881 = 2809;
	uint16_t x2882 = 0U;
	uint64_t x2884 = 355638LLU;
	volatile int32_t t195 = -19573;

    t195 = (x2881>>(x2882*(x2883<=x2884)));

    if (t195 != 2809) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x2897 = INT64_MAX;
	static uint32_t x2898 = 0U;
	volatile int64_t x2899 = INT64_MIN;
	volatile int16_t x2900 = -1490;
	volatile int64_t t196 = INT64_MAX;

    t196 = (x2897>>(x2898*(x2899<=x2900)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x2902 = 3;
	int8_t x2903 = INT8_MAX;
	uint8_t x2904 = 7U;
	static int32_t t197 = -137691030;

    t197 = (x2901>>(x2902*(x2903<=x2904)));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x2909 = UINT32_MAX;
	uint8_t x2910 = 18U;
	int16_t x2911 = INT16_MIN;
	uint32_t x2912 = 327602278U;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = (x2909>>(x2910*(x2911<=x2912)));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x2926 = 147LLU;
	int64_t x2927 = 4194496869LL;
	uint16_t x2928 = 0U;
	static volatile int32_t t199 = -1946;

    t199 = (x2925>>(x2926*(x2927<=x2928)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

