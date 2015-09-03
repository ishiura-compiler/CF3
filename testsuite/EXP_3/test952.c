#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 23U;
int16_t x26 = 7;
volatile int32_t t1 = INT32_MAX;
static volatile int16_t x35 = 30;
volatile int64_t x149 = INT64_MIN;
uint8_t x151 = UINT8_MAX;
uint16_t x152 = 2U;
static int32_t t5 = 2035;
static uint16_t x306 = 67U;
static int64_t x307 = 11874790840LL;
volatile int64_t t6 = 20610304LL;
uint64_t x469 = UINT64_MAX;
int64_t t8 = 43LL;
uint32_t x583 = 170699675U;
uint16_t x584 = 0U;
int64_t x605 = INT64_MIN;
uint16_t x608 = 1U;
uint8_t x726 = 7U;
int64_t x747 = 24831LL;
static uint8_t x748 = 15U;
int64_t x898 = -1LL;
uint64_t x900 = 0LLU;
int16_t x988 = 1;
int32_t t16 = 415273392;
uint8_t x1034 = 47U;
uint16_t x1035 = UINT16_MAX;
static int32_t t18 = 1;
int32_t x1049 = INT32_MIN;
int16_t x1051 = INT16_MAX;
uint8_t x1052 = 1U;
int16_t x1110 = INT16_MAX;
volatile int8_t x1112 = 3;
static uint8_t x1192 = 13U;
uint64_t x1217 = 13897669788LLU;
static volatile uint8_t x1219 = 0U;
uint8_t x1220 = 23U;
uint64_t x1470 = 51LLU;
uint32_t t26 = 3U;
uint16_t x1531 = 0U;
uint32_t x1546 = UINT32_MAX;
uint8_t x1600 = 5U;
static uint16_t x1623 = 7U;
int32_t t30 = 938;
int64_t x1638 = -1LL;
int16_t x1778 = -1;
int64_t x1780 = 1LL;
uint8_t x1856 = 0U;
uint16_t x1899 = 113U;
volatile uint8_t x2098 = 0U;
volatile uint64_t t37 = 3754445727151LLU;
int8_t x2248 = 0;
volatile int16_t x2311 = 0;
static volatile int32_t t39 = 22;
int64_t x2349 = -95424128LL;
int8_t x2352 = 30;
static int8_t x2412 = 16;
int32_t x2441 = INT32_MAX;
int32_t x2442 = INT32_MIN;
uint8_t x2443 = 1U;
int32_t t43 = -46;
int32_t x2618 = 21722570;
uint8_t x2620 = 13U;
uint16_t x2689 = UINT16_MAX;
volatile int32_t x2797 = INT32_MIN;
volatile uint16_t x2971 = UINT16_MAX;
uint8_t x2972 = 7U;
int16_t x2973 = INT16_MIN;
uint64_t x2983 = 2LLU;
static volatile int8_t x2992 = 1;
int8_t x2997 = 63;
volatile int16_t x2998 = INT16_MAX;
uint16_t x3041 = 18U;
static int8_t x3043 = 0;
volatile int32_t t55 = -8164023;
uint64_t x3166 = 27243303197LLU;
int16_t x3215 = INT16_MAX;
int64_t x3216 = 1LL;
volatile uint8_t x3308 = 7U;
volatile int32_t x3372 = 9;
volatile int32_t x3389 = INT32_MIN;
int32_t x3390 = 3864786;
volatile int8_t x3391 = INT8_MAX;
volatile uint32_t x3434 = UINT32_MAX;
volatile int32_t t61 = -279854;
uint64_t x3547 = 34638246678067769LLU;
uint8_t x3548 = 31U;
int8_t x3650 = INT8_MIN;
int16_t x3842 = INT16_MIN;
volatile int64_t x3970 = 1614LL;
static volatile uint64_t t68 = 4LLU;
uint8_t x4092 = 0U;
static volatile int32_t t69 = -307;
int64_t x4189 = -1LL;
int8_t x4190 = -1;
int32_t t70 = 226;
volatile int8_t x4358 = INT8_MAX;
int64_t x4359 = 188492739880LL;
uint64_t x4387 = UINT64_MAX;
static volatile uint8_t x4437 = UINT8_MAX;
int64_t x4457 = INT64_MIN;
int8_t x4510 = -1;
uint16_t x4511 = UINT16_MAX;
static int16_t x4601 = -7876;
static int64_t x4606 = -66244833004502877LL;
uint64_t t77 = 1841479716255491949LLU;
int32_t t78 = 520184;
uint32_t x4825 = 6547U;
uint8_t x4826 = 84U;
uint64_t x4878 = 10835LLU;
volatile int32_t t81 = 6599540;
static int8_t x4962 = INT8_MIN;
int32_t x4963 = 2;
int8_t x5246 = INT8_MIN;
int8_t x5247 = 3;
volatile int16_t x5269 = INT16_MIN;
int32_t x5270 = -2291539;
volatile int8_t x5297 = 9;
volatile int32_t t91 = 2;
static int16_t x5725 = INT16_MAX;
static volatile int32_t t96 = -189963;
int64_t x5885 = 4348122897769LL;
static int32_t x5888 = 5;
int8_t x5926 = INT8_MIN;
static int32_t t98 = 1;
uint8_t x6004 = 0U;
volatile int32_t t99 = -1;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	volatile int32_t x2 = -85870531;
	uint8_t x3 = 3U;
	volatile int32_t t0 = 16;

	t0 = ((x1<x2)*(x3<<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x25 = -1;
	int32_t x27 = INT32_MAX;
	int16_t x28 = 0;

	t1 = ((x25<x26)*(x27<<x28));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x33 = INT8_MAX;
	volatile uint8_t x34 = 7U;
	static uint8_t x36 = 9U;
	int32_t t2 = -41956727;

	t2 = ((x33<x34)*(x35<<x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x150 = -1;
	volatile int32_t t3 = -6;

	t3 = ((x149<x150)*(x151<<x152));

	if (t3 != 1020) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x157 = 12U;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 3LLU;
	static int16_t x160 = 1;
	static uint64_t t4 = 1379608239177LLU;

	t4 = ((x157<x158)*(x159<<x160));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x281 = 38LL;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = UINT8_MAX;
	int16_t x284 = 3;

	t5 = ((x281<x282)*(x283<<x284));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x305 = 2U;
	int32_t x308 = 2;

	t6 = ((x305<x306)*(x307<<x308));

	if (t6 != 47499163360LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x357 = UINT8_MAX;
	static int32_t x358 = -1;
	int16_t x359 = 2998;
	static int8_t x360 = 0;
	volatile int32_t t7 = -6;

	t7 = ((x357<x358)*(x359<<x360));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x470 = INT32_MIN;
	int64_t x471 = 1LL;
	volatile uint16_t x472 = 2U;

	t8 = ((x469<x470)*(x471<<x472));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x581 = INT64_MIN;
	uint8_t x582 = 8U;
	uint32_t t9 = 61U;

	t9 = ((x581<x582)*(x583<<x584));

	if (t9 != 170699675U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x606 = 38U;
	uint16_t x607 = 0U;
	static int32_t t10 = 71;

	t10 = ((x605<x606)*(x607<<x608));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x725 = -456110006;
	uint64_t x727 = UINT64_MAX;
	int8_t x728 = 6;
	static uint64_t t11 = 0LLU;

	t11 = ((x725<x726)*(x727<<x728));

	if (t11 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x745 = INT32_MIN;
	int64_t x746 = 5458892458310978LL;
	int64_t t12 = -10085244243105125LL;

	t12 = ((x745<x746)*(x747<<x748));

	if (t12 != 813662208LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x797 = -86LL;
	int8_t x798 = 16;
	static uint64_t x799 = UINT64_MAX;
	uint8_t x800 = 2U;
	static uint64_t t13 = 14LLU;

	t13 = ((x797<x798)*(x799<<x800));

	if (t13 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x897 = -2542;
	int16_t x899 = INT16_MAX;
	volatile int32_t t14 = -16109;

	t14 = ((x897<x898)*(x899<<x900));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x985 = 49U;
	int16_t x986 = 5;
	static uint32_t x987 = UINT32_MAX;
	volatile uint32_t t15 = 2034309897U;

	t15 = ((x985<x986)*(x987<<x988));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x989 = -1;
	int64_t x990 = INT64_MIN;
	volatile int16_t x991 = INT16_MAX;
	static int8_t x992 = 0;

	t16 = ((x989<x990)*(x991<<x992));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1021 = INT8_MIN;
	volatile int16_t x1022 = 25;
	int8_t x1023 = 3;
	int8_t x1024 = 9;
	static int32_t t17 = 4796220;

	t17 = ((x1021<x1022)*(x1023<<x1024));

	if (t17 != 1536) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1033 = 1070U;
	uint16_t x1036 = 0U;

	t18 = ((x1033<x1034)*(x1035<<x1036));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1050 = UINT64_MAX;
	volatile int32_t t19 = -14597354;

	t19 = ((x1049<x1050)*(x1051<<x1052));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1109 = 9;
	static int16_t x1111 = INT16_MAX;
	int32_t t20 = -7739;

	t20 = ((x1109<x1110)*(x1111<<x1112));

	if (t20 != 262136) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1153 = 17668124U;
	int16_t x1154 = INT16_MAX;
	uint32_t x1155 = 1546622724U;
	int8_t x1156 = 24;
	static volatile uint32_t t21 = 7178U;

	t21 = ((x1153<x1154)*(x1155<<x1156));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1189 = 1007516991877550903LLU;
	volatile int8_t x1190 = INT8_MIN;
	static volatile int16_t x1191 = 1917;
	int32_t t22 = -15762;

	t22 = ((x1189<x1190)*(x1191<<x1192));

	if (t22 != 15704064) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x1218 = 498825LLU;
	static int32_t t23 = 0;

	t23 = ((x1217<x1218)*(x1219<<x1220));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1253 = 23974U;
	int32_t x1254 = -2728556;
	uint16_t x1255 = 555U;
	static int8_t x1256 = 0;
	volatile int32_t t24 = 11;

	t24 = ((x1253<x1254)*(x1255<<x1256));

	if (t24 != 555) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x1289 = UINT32_MAX;
	volatile int16_t x1290 = -41;
	uint16_t x1291 = 9U;
	volatile uint8_t x1292 = 0U;
	static volatile int32_t t25 = 3101122;

	t25 = ((x1289<x1290)*(x1291<<x1292));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1469 = 76U;
	uint32_t x1471 = 1U;
	uint8_t x1472 = 25U;

	t26 = ((x1469<x1470)*(x1471<<x1472));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1529 = UINT32_MAX;
	int32_t x1530 = -1;
	volatile uint16_t x1532 = 13U;
	volatile int32_t t27 = 372;

	t27 = ((x1529<x1530)*(x1531<<x1532));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1545 = -1378782;
	volatile uint8_t x1547 = 2U;
	int8_t x1548 = 6;
	volatile int32_t t28 = -598537329;

	t28 = ((x1545<x1546)*(x1547<<x1548));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1597 = UINT8_MAX;
	static uint16_t x1598 = UINT16_MAX;
	uint32_t x1599 = UINT32_MAX;
	volatile uint32_t t29 = 232211U;

	t29 = ((x1597<x1598)*(x1599<<x1600));

	if (t29 != 4294967264U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1621 = 316916372411788655LL;
	int64_t x1622 = INT64_MIN;
	uint8_t x1624 = 4U;

	t30 = ((x1621<x1622)*(x1623<<x1624));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1637 = UINT32_MAX;
	int8_t x1639 = INT8_MAX;
	static int32_t x1640 = 3;
	volatile int32_t t31 = 319118;

	t31 = ((x1637<x1638)*(x1639<<x1640));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1709 = 15630132U;
	volatile uint64_t x1710 = UINT64_MAX;
	uint64_t x1711 = 147150422LLU;
	volatile int8_t x1712 = 20;
	volatile uint64_t t32 = 1LLU;

	t32 = ((x1709<x1710)*(x1711<<x1712));

	if (t32 != 154298400899072LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1765 = -1LL;
	int8_t x1766 = -21;
	uint32_t x1767 = 77U;
	uint32_t x1768 = 6U;
	volatile uint32_t t33 = 1267U;

	t33 = ((x1765<x1766)*(x1767<<x1768));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1777 = INT16_MIN;
	int16_t x1779 = 9964;
	int32_t t34 = -3;

	t34 = ((x1777<x1778)*(x1779<<x1780));

	if (t34 != 19928) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1853 = INT8_MIN;
	int32_t x1854 = -3494;
	static uint32_t x1855 = 458435413U;
	volatile uint32_t t35 = 25366369U;

	t35 = ((x1853<x1854)*(x1855<<x1856));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1897 = -56311;
	uint16_t x1898 = 3609U;
	uint16_t x1900 = 5U;
	volatile int32_t t36 = 19773;

	t36 = ((x1897<x1898)*(x1899<<x1900));

	if (t36 != 3616) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2097 = -728340;
	uint64_t x2099 = 39938178228LLU;
	volatile uint16_t x2100 = 5U;

	t37 = ((x2097<x2098)*(x2099<<x2100));

	if (t37 != 1278021703296LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2245 = INT32_MIN;
	static uint16_t x2246 = UINT16_MAX;
	int8_t x2247 = INT8_MAX;
	int32_t t38 = 19;

	t38 = ((x2245<x2246)*(x2247<<x2248));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2309 = -1;
	int8_t x2310 = INT8_MIN;
	uint32_t x2312 = 1U;

	t39 = ((x2309<x2310)*(x2311<<x2312));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2350 = -2;
	static int16_t x2351 = 1;
	int32_t t40 = -70445;

	t40 = ((x2349<x2350)*(x2351<<x2352));

	if (t40 != 1073741824) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2405 = -1;
	uint64_t x2406 = 951580647000914150LLU;
	uint8_t x2407 = UINT8_MAX;
	uint64_t x2408 = 17LLU;
	int32_t t41 = -27752;

	t41 = ((x2405<x2406)*(x2407<<x2408));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2409 = INT8_MIN;
	volatile int32_t x2410 = INT32_MIN;
	uint8_t x2411 = 1U;
	volatile int32_t t42 = -655569;

	t42 = ((x2409<x2410)*(x2411<<x2412));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x2444 = 1;

	t43 = ((x2441<x2442)*(x2443<<x2444));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2585 = INT32_MAX;
	uint16_t x2586 = 9U;
	uint32_t x2587 = UINT32_MAX;
	uint8_t x2588 = 1U;
	uint32_t t44 = 2065U;

	t44 = ((x2585<x2586)*(x2587<<x2588));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2617 = -1590401363204LL;
	int16_t x2619 = INT16_MAX;
	int32_t t45 = -91714689;

	t45 = ((x2617<x2618)*(x2619<<x2620));

	if (t45 != 268427264) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2665 = INT8_MIN;
	int64_t x2666 = 119914287LL;
	static int16_t x2667 = INT16_MAX;
	volatile uint16_t x2668 = 1U;
	static int32_t t46 = 351;

	t46 = ((x2665<x2666)*(x2667<<x2668));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2690 = 0;
	int16_t x2691 = 0;
	int8_t x2692 = 14;
	volatile int32_t t47 = -1;

	t47 = ((x2689<x2690)*(x2691<<x2692));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2789 = INT64_MIN;
	int64_t x2790 = INT64_MAX;
	int8_t x2791 = INT8_MAX;
	volatile uint16_t x2792 = 12U;
	int32_t t48 = 30695918;

	t48 = ((x2789<x2790)*(x2791<<x2792));

	if (t48 != 520192) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x2798 = -1724148192535LL;
	static uint16_t x2799 = 7U;
	int8_t x2800 = 0;
	static volatile int32_t t49 = -3238853;

	t49 = ((x2797<x2798)*(x2799<<x2800));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2969 = UINT8_MAX;
	int64_t x2970 = INT64_MIN;
	static volatile int32_t t50 = 31182;

	t50 = ((x2969<x2970)*(x2971<<x2972));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2974 = INT32_MIN;
	uint16_t x2975 = UINT16_MAX;
	int16_t x2976 = 12;
	volatile int32_t t51 = 38621;

	t51 = ((x2973<x2974)*(x2975<<x2976));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2981 = 31040U;
	uint64_t x2982 = UINT64_MAX;
	int32_t x2984 = 0;
	static volatile uint64_t t52 = 4700587470LLU;

	t52 = ((x2981<x2982)*(x2983<<x2984));

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2989 = INT16_MAX;
	uint64_t x2990 = UINT64_MAX;
	int8_t x2991 = 4;
	int32_t t53 = -17071768;

	t53 = ((x2989<x2990)*(x2991<<x2992));

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2999 = INT8_MAX;
	uint8_t x3000 = 7U;
	volatile int32_t t54 = -2836;

	t54 = ((x2997<x2998)*(x2999<<x3000));

	if (t54 != 16256) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3042 = UINT8_MAX;
	int8_t x3044 = 14;

	t55 = ((x3041<x3042)*(x3043<<x3044));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3165 = INT32_MIN;
	static int32_t x3167 = INT32_MAX;
	int8_t x3168 = 0;
	int32_t t56 = -2622683;

	t56 = ((x3165<x3166)*(x3167<<x3168));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3213 = INT64_MIN;
	static int8_t x3214 = -2;
	volatile int32_t t57 = 31;

	t57 = ((x3213<x3214)*(x3215<<x3216));

	if (t57 != 65534) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3305 = UINT16_MAX;
	volatile uint64_t x3306 = 67367964179LLU;
	int64_t x3307 = 176LL;
	volatile int64_t t58 = -743204575LL;

	t58 = ((x3305<x3306)*(x3307<<x3308));

	if (t58 != 22528LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3369 = 33021973LLU;
	uint32_t x3370 = 170902677U;
	static uint32_t x3371 = UINT32_MAX;
	volatile uint32_t t59 = 25968125U;

	t59 = ((x3369<x3370)*(x3371<<x3372));

	if (t59 != 4294966784U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x3392 = 0U;
	static int32_t t60 = 2;

	t60 = ((x3389<x3390)*(x3391<<x3392));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3433 = INT16_MAX;
	uint16_t x3435 = 31113U;
	uint8_t x3436 = 1U;

	t61 = ((x3433<x3434)*(x3435<<x3436));

	if (t61 != 62226) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3545 = INT16_MIN;
	uint16_t x3546 = 30U;
	volatile uint64_t t62 = 983375078223498LLU;

	t62 = ((x3545<x3546)*(x3547<<x3548));

	if (t62 != 11705344836616847360LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x3553 = 6443U;
	int64_t x3554 = -1200747213674368174LL;
	int8_t x3555 = INT8_MAX;
	volatile uint8_t x3556 = 1U;
	int32_t t63 = -3791;

	t63 = ((x3553<x3554)*(x3555<<x3556));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3613 = UINT8_MAX;
	uint16_t x3614 = UINT16_MAX;
	static uint8_t x3615 = UINT8_MAX;
	volatile uint8_t x3616 = 17U;
	int32_t t64 = -1714429;

	t64 = ((x3613<x3614)*(x3615<<x3616));

	if (t64 != 33423360) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3649 = -3110;
	uint32_t x3651 = UINT32_MAX;
	volatile uint16_t x3652 = 0U;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = ((x3649<x3650)*(x3651<<x3652));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3841 = 1U;
	int64_t x3843 = 1972841106LL;
	uint16_t x3844 = 21U;
	int64_t t66 = 429978490LL;

	t66 = ((x3841<x3842)*(x3843<<x3844));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3925 = -7201729366258LL;
	static uint8_t x3926 = 48U;
	uint32_t x3927 = UINT32_MAX;
	uint16_t x3928 = 1U;
	volatile uint32_t t67 = 11310U;

	t67 = ((x3925<x3926)*(x3927<<x3928));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x3969 = INT32_MIN;
	volatile uint64_t x3971 = UINT64_MAX;
	uint8_t x3972 = 4U;

	t68 = ((x3969<x3970)*(x3971<<x3972));

	if (t68 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4089 = INT16_MIN;
	int16_t x4090 = INT16_MAX;
	int16_t x4091 = 0;

	t69 = ((x4089<x4090)*(x4091<<x4092));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4191 = 23U;
	uint32_t x4192 = 1U;

	t70 = ((x4189<x4190)*(x4191<<x4192));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4357 = 23046U;
	uint16_t x4360 = 11U;
	int64_t t71 = 7605865322LL;

	t71 = ((x4357<x4358)*(x4359<<x4360));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4385 = -1LL;
	static int8_t x4386 = INT8_MAX;
	int16_t x4388 = 0;
	static uint64_t t72 = UINT64_MAX;

	t72 = ((x4385<x4386)*(x4387<<x4388));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4438 = INT32_MIN;
	volatile uint8_t x4439 = 8U;
	int8_t x4440 = 0;
	static int32_t t73 = 112;

	t73 = ((x4437<x4438)*(x4439<<x4440));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4458 = 2369533544585240594LLU;
	static uint16_t x4459 = 6U;
	volatile int16_t x4460 = 5;
	volatile int32_t t74 = 7204;

	t74 = ((x4457<x4458)*(x4459<<x4460));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4509 = -1;
	uint16_t x4512 = 1U;
	static volatile int32_t t75 = 797767;

	t75 = ((x4509<x4510)*(x4511<<x4512));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4602 = 25U;
	static int32_t x4603 = 49369;
	int8_t x4604 = 4;
	int32_t t76 = 6;

	t76 = ((x4601<x4602)*(x4603<<x4604));

	if (t76 != 789904) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4605 = -1;
	uint64_t x4607 = UINT64_MAX;
	int16_t x4608 = 27;

	t77 = ((x4605<x4606)*(x4607<<x4608));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4633 = 0U;
	volatile uint32_t x4634 = 11U;
	uint8_t x4635 = UINT8_MAX;
	uint16_t x4636 = 1U;

	t78 = ((x4633<x4634)*(x4635<<x4636));

	if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4827 = 162842U;
	uint16_t x4828 = 4U;
	volatile uint32_t t79 = 6715U;

	t79 = ((x4825<x4826)*(x4827<<x4828));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4877 = INT64_MIN;
	uint64_t x4879 = UINT64_MAX;
	int16_t x4880 = 50;
	uint64_t t80 = 118822693283LLU;

	t80 = ((x4877<x4878)*(x4879<<x4880));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x4901 = 253916440;
	int32_t x4902 = -1;
	static int8_t x4903 = 0;
	volatile int16_t x4904 = 1;

	t81 = ((x4901<x4902)*(x4903<<x4904));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4929 = -1LL;
	int64_t x4930 = 1LL;
	uint8_t x4931 = 0U;
	int16_t x4932 = 1;
	volatile int32_t t82 = -766455;

	t82 = ((x4929<x4930)*(x4931<<x4932));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4961 = 8702285733948045LL;
	volatile uint8_t x4964 = 1U;
	int32_t t83 = -12793;

	t83 = ((x4961<x4962)*(x4963<<x4964));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x4989 = UINT64_MAX;
	volatile int64_t x4990 = INT64_MAX;
	volatile uint64_t x4991 = 185998865911LLU;
	int8_t x4992 = 0;
	uint64_t t84 = 359401100LLU;

	t84 = ((x4989<x4990)*(x4991<<x4992));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5101 = INT64_MIN;
	int64_t x5102 = INT64_MIN;
	uint64_t x5103 = 31740LLU;
	int8_t x5104 = 57;
	volatile uint64_t t85 = 1643176LLU;

	t85 = ((x5101<x5102)*(x5103<<x5104));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5189 = -21;
	uint32_t x5190 = UINT32_MAX;
	uint32_t x5191 = 302638U;
	volatile int8_t x5192 = 11;
	static volatile uint32_t t86 = 256723994U;

	t86 = ((x5189<x5190)*(x5191<<x5192));

	if (t86 != 619802624U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5245 = 0;
	static uint8_t x5248 = 0U;
	static volatile int32_t t87 = -2028097;

	t87 = ((x5245<x5246)*(x5247<<x5248));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5271 = UINT64_MAX;
	uint16_t x5272 = 1U;
	volatile uint64_t t88 = 292370825LLU;

	t88 = ((x5269<x5270)*(x5271<<x5272));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5298 = 1;
	uint64_t x5299 = 5151676915736861755LLU;
	uint8_t x5300 = 20U;
	static uint64_t t89 = 616948LLU;

	t89 = ((x5297<x5298)*(x5299<<x5300));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5405 = INT16_MIN;
	static uint64_t x5406 = UINT64_MAX;
	uint8_t x5407 = UINT8_MAX;
	volatile int16_t x5408 = 0;
	volatile int32_t t90 = 732029;

	t90 = ((x5405<x5406)*(x5407<<x5408));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5445 = INT64_MIN;
	int64_t x5446 = 61148773LL;
	uint16_t x5447 = UINT16_MAX;
	uint8_t x5448 = 0U;

	t91 = ((x5445<x5446)*(x5447<<x5448));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x5541 = INT16_MIN;
	static int32_t x5542 = -1;
	uint16_t x5543 = 2U;
	static uint16_t x5544 = 0U;
	volatile int32_t t92 = -936;

	t92 = ((x5541<x5542)*(x5543<<x5544));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x5633 = 256U;
	volatile int32_t x5634 = -1;
	volatile uint16_t x5635 = 364U;
	int32_t x5636 = 15;
	static volatile int32_t t93 = -115399;

	t93 = ((x5633<x5634)*(x5635<<x5636));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5669 = INT8_MIN;
	volatile int16_t x5670 = 11;
	static int8_t x5671 = 42;
	int8_t x5672 = 3;
	volatile int32_t t94 = 27264483;

	t94 = ((x5669<x5670)*(x5671<<x5672));

	if (t94 != 336) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x5726 = 2514U;
	uint32_t x5727 = 421960427U;
	static int8_t x5728 = 0;
	static volatile uint32_t t95 = 71284U;

	t95 = ((x5725<x5726)*(x5727<<x5728));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5881 = UINT32_MAX;
	int64_t x5882 = INT64_MIN;
	uint8_t x5883 = 3U;
	uint32_t x5884 = 0U;

	t96 = ((x5881<x5882)*(x5883<<x5884));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x5886 = 8844;
	volatile uint16_t x5887 = 208U;
	volatile int32_t t97 = 2;

	t97 = ((x5885<x5886)*(x5887<<x5888));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5925 = INT8_MIN;
	volatile uint16_t x5927 = UINT16_MAX;
	static uint8_t x5928 = 6U;

	t98 = ((x5925<x5926)*(x5927<<x5928));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6001 = 102516LL;
	volatile int8_t x6002 = -1;
	static uint8_t x6003 = 15U;

	t99 = ((x6001<x6002)*(x6003<<x6004));

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

