
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

static int8_t x59 = INT8_MIN;
static int32_t x60 = INT32_MIN;
static uint64_t x153 = UINT64_MAX;
volatile uint64_t t1 = 348587372322686LLU;
int16_t x314 = 12;
static uint32_t x386 = 50U;
int32_t x392 = -34;
volatile int32_t x419 = -1;
volatile int32_t t7 = -5;
uint8_t x443 = 9U;
uint8_t x455 = UINT8_MAX;
volatile int32_t t9 = -215352859;
int64_t x569 = INT64_MAX;
volatile int64_t t10 = 90968052669133LL;
static uint64_t x577 = UINT64_MAX;
int8_t x578 = 0;
static volatile int32_t x579 = -1;
static int8_t x727 = 4;
int16_t x753 = 11971;
static uint64_t x755 = 1065226LLU;
static int8_t x783 = 5;
static int64_t x821 = 962LL;
volatile uint8_t x822 = 16U;
int8_t x823 = 0;
uint32_t x885 = 527U;
int8_t x887 = INT8_MAX;
uint32_t t19 = 17801U;
volatile uint64_t x972 = UINT64_MAX;
uint8_t x982 = 1U;
static int32_t t22 = 164000;
volatile int32_t t24 = 1672;
int32_t x1082 = 9;
uint16_t x1162 = 3U;
volatile int8_t x1163 = INT8_MAX;
volatile uint64_t x1220 = 2243LLU;
int8_t x1253 = 1;
static uint8_t x1254 = 6U;
int64_t x1429 = 47548766284LL;
volatile uint64_t x1431 = UINT64_MAX;
static int16_t x1434 = 1;
static volatile uint64_t t33 = 1715460949LLU;
uint8_t x1494 = 31U;
uint64_t x1517 = 761LLU;
static uint8_t x1518 = 6U;
uint32_t x1639 = 16980474U;
static int64_t t37 = INT64_MAX;
uint64_t x1641 = 212LLU;
volatile uint64_t t38 = 1291201609020LLU;
int32_t x1656 = -7146485;
int64_t x1887 = 227709LL;
volatile int32_t x2231 = -1;
volatile int16_t x2232 = -4624;
int8_t x2343 = INT8_MIN;
static int8_t x2493 = INT8_MAX;
volatile int32_t x2495 = INT32_MIN;
static int8_t x2496 = INT8_MAX;
int64_t x2668 = 463146085544LL;
static int8_t x2671 = INT8_MIN;
int8_t x2677 = 2;
int16_t x2679 = INT16_MAX;
int8_t x2694 = 3;
static int8_t x2696 = INT8_MIN;
uint64_t x2741 = 59LLU;
uint32_t x2743 = 1966096269U;
uint64_t t58 = 12858761484LLU;
int32_t x2817 = INT32_MAX;
volatile int8_t x2843 = INT8_MIN;
int32_t x2851 = INT32_MIN;
int32_t t62 = 14;
uint16_t x2973 = 5359U;
int64_t x3079 = -1LL;
uint64_t x3107 = 8853658820886LLU;
uint64_t t65 = 872LLU;
int64_t x3223 = INT64_MIN;
volatile int32_t t66 = 1331;
uint16_t x3250 = 12U;
int64_t x3253 = INT64_MAX;
uint16_t x3256 = UINT16_MAX;
uint16_t x3434 = 42U;
int32_t t82 = -980379;
int16_t x4440 = INT16_MAX;
int16_t x4604 = INT16_MIN;
uint64_t x4715 = UINT64_MAX;
static volatile int32_t t86 = 0;


void f0(void) {
    	int64_t x57 = 194167583LL;
	volatile int8_t x58 = 5;
	static volatile int64_t t0 = -4675651583381LL;

    t0 = (x57>>(x58-(x59<=x60)));

    if (t0 != 6067736LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x154 = 1;
	int8_t x155 = -1;
	int64_t x156 = INT64_MIN;

    t1 = (x153>>(x154-(x155<=x156)));

    if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x241 = INT64_MAX;
	volatile int32_t x242 = 2;
	static volatile int16_t x243 = -1;
	static int64_t x244 = -1LL;
	volatile int64_t t2 = 19LL;

    t2 = (x241>>(x242-(x243<=x244)));

    if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x313 = 36196U;
	int8_t x315 = -1;
	int64_t x316 = INT64_MIN;
	uint32_t t3 = 170U;

    t3 = (x313>>(x314-(x315<=x316)));

    if (t3 != 8U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x377 = 246051961LLU;
	int8_t x378 = 31;
	int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	static uint64_t t4 = 982360332000014LLU;

    t4 = (x377>>(x378-(x379<=x380)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x385 = 1070206LLU;
	static uint64_t x387 = 83752215063030LLU;
	uint16_t x388 = UINT16_MAX;
	uint64_t t5 = 208526661753874LLU;

    t5 = (x385>>(x386-(x387<=x388)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x389 = 100U;
	int64_t x390 = 17LL;
	uint16_t x391 = 3U;
	volatile int32_t t6 = 188892;

    t6 = (x389>>(x390-(x391<=x392)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x417 = 689;
	volatile int16_t x418 = 1;
	volatile uint16_t x420 = 1U;

    t7 = (x417>>(x418-(x419<=x420)));

    if (t7 != 689) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x441 = 7LLU;
	static uint16_t x442 = 1U;
	int64_t x444 = -1LL;
	uint64_t t8 = 528LLU;

    t8 = (x441>>(x442-(x443<=x444)));

    if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x453 = INT32_MAX;
	uint32_t x454 = 4U;
	volatile int32_t x456 = INT32_MIN;

    t9 = (x453>>(x454-(x455<=x456)));

    if (t9 != 134217727) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x570 = 3U;
	int64_t x571 = INT64_MAX;
	int32_t x572 = -682903782;

    t10 = (x569>>(x570-(x571<=x572)));

    if (t10 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x580 = INT64_MIN;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = (x577>>(x578-(x579<=x580)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x641 = INT32_MAX;
	int16_t x642 = 3;
	volatile int16_t x643 = INT16_MIN;
	uint8_t x644 = 5U;
	volatile int32_t t12 = -59;

    t12 = (x641>>(x642-(x643<=x644)));

    if (t12 != 536870911) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x725 = UINT32_MAX;
	int8_t x726 = 5;
	int8_t x728 = -1;
	volatile uint32_t t13 = 199442U;

    t13 = (x725>>(x726-(x727<=x728)));

    if (t13 != 134217727U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x754 = 0U;
	int16_t x756 = 1697;
	int32_t t14 = 31102;

    t14 = (x753>>(x754-(x755<=x756)));

    if (t14 != 11971) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x781 = INT16_MAX;
	uint16_t x782 = 1U;
	int8_t x784 = -1;
	volatile int32_t t15 = -14993;

    t15 = (x781>>(x782-(x783<=x784)));

    if (t15 != 16383) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x824 = -1LL;
	volatile int64_t t16 = 3006LL;

    t16 = (x821>>(x822-(x823<=x824)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x825 = 544444722028160LLU;
	uint64_t x826 = 7LLU;
	int64_t x827 = -6820378LL;
	uint8_t x828 = 116U;
	uint64_t t17 = 144928062922390029LLU;

    t17 = (x825>>(x826-(x827<=x828)));

    if (t17 != 8506948781690LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x865 = 0;
	static uint32_t x866 = 7U;
	static uint64_t x867 = UINT64_MAX;
	int64_t x868 = INT64_MIN;
	int32_t t18 = 13279304;

    t18 = (x865>>(x866-(x867<=x868)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x886 = 0U;
	static int8_t x888 = 1;

    t19 = (x885>>(x886-(x887<=x888)));

    if (t19 != 527U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x969 = UINT8_MAX;
	int8_t x970 = 1;
	uint32_t x971 = 6U;
	static int32_t t20 = 398617080;

    t20 = (x969>>(x970-(x971<=x972)));

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x973 = INT16_MAX;
	static int8_t x974 = 6;
	uint16_t x975 = 1U;
	int32_t x976 = INT32_MIN;
	int32_t t21 = 3685492;

    t21 = (x973>>(x974-(x975<=x976)));

    if (t21 != 511) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x981 = 58;
	int64_t x983 = INT64_MIN;
	uint8_t x984 = UINT8_MAX;

    t22 = (x981>>(x982-(x983<=x984)));

    if (t22 != 58) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1033 = 560185468;
	int8_t x1034 = 1;
	int64_t x1035 = -1LL;
	int64_t x1036 = 115251363384LL;
	static volatile int32_t t23 = -30120774;

    t23 = (x1033>>(x1034-(x1035<=x1036)));

    if (t23 != 560185468) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1041 = INT8_MAX;
	int8_t x1042 = 8;
	int16_t x1043 = -168;
	static int8_t x1044 = INT8_MIN;

    t24 = (x1041>>(x1042-(x1043<=x1044)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1081 = INT32_MAX;
	uint32_t x1083 = 13517562U;
	volatile uint8_t x1084 = UINT8_MAX;
	volatile int32_t t25 = -5190;

    t25 = (x1081>>(x1082-(x1083<=x1084)));

    if (t25 != 4194303) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1105 = INT16_MAX;
	volatile uint32_t x1106 = 6U;
	int64_t x1107 = INT64_MAX;
	static volatile uint8_t x1108 = UINT8_MAX;
	volatile int32_t t26 = -2;

    t26 = (x1105>>(x1106-(x1107<=x1108)));

    if (t26 != 511) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1161 = UINT16_MAX;
	volatile int32_t x1164 = INT32_MAX;
	int32_t t27 = 1;

    t27 = (x1161>>(x1162-(x1163<=x1164)));

    if (t27 != 16383) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1217 = 0U;
	volatile uint8_t x1218 = 2U;
	volatile uint16_t x1219 = 1364U;
	int32_t t28 = 20820;

    t28 = (x1217>>(x1218-(x1219<=x1220)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1255 = INT16_MIN;
	int64_t x1256 = INT64_MAX;
	static int32_t t29 = 403447;

    t29 = (x1253>>(x1254-(x1255<=x1256)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x1313 = UINT64_MAX;
	uint8_t x1314 = 4U;
	uint8_t x1315 = 6U;
	volatile int8_t x1316 = INT8_MIN;
	static volatile uint64_t t30 = 9342652043385LLU;

    t30 = (x1313>>(x1314-(x1315<=x1316)));

    if (t30 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x1430 = 35U;
	volatile int8_t x1432 = INT8_MIN;
	int64_t t31 = 56030LL;

    t31 = (x1429>>(x1430-(x1431<=x1432)));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1433 = 0;
	int16_t x1435 = INT16_MIN;
	int64_t x1436 = INT64_MIN;
	int32_t t32 = 0;

    t32 = (x1433>>(x1434-(x1435<=x1436)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x1437 = UINT64_MAX;
	static uint8_t x1438 = 51U;
	int64_t x1439 = 0LL;
	uint8_t x1440 = 97U;

    t33 = (x1437>>(x1438-(x1439<=x1440)));

    if (t33 != 16383LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1441 = 70U;
	volatile int16_t x1442 = 3;
	int8_t x1443 = INT8_MAX;
	uint64_t x1444 = UINT64_MAX;
	int32_t t34 = -3;

    t34 = (x1441>>(x1442-(x1443<=x1444)));

    if (t34 != 17) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1493 = 342249959U;
	volatile int64_t x1495 = -750468117LL;
	int64_t x1496 = INT64_MAX;
	uint32_t t35 = 3860127U;

    t35 = (x1493>>(x1494-(x1495<=x1496)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1519 = -392;
	uint8_t x1520 = UINT8_MAX;
	volatile uint64_t t36 = 3283LLU;

    t36 = (x1517>>(x1518-(x1519<=x1520)));

    if (t36 != 23LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x1637 = INT64_MAX;
	uint16_t x1638 = 0U;
	uint8_t x1640 = 5U;

    t37 = (x1637>>(x1638-(x1639<=x1640)));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1642 = 5;
	int32_t x1643 = INT32_MAX;
	uint32_t x1644 = 3126U;

    t38 = (x1641>>(x1642-(x1643<=x1644)));

    if (t38 != 6LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1653 = 41U;
	int8_t x1654 = 0;
	int32_t x1655 = 1005;
	uint32_t t39 = 31740848U;

    t39 = (x1653>>(x1654-(x1655<=x1656)));

    if (t39 != 41U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x1669 = 1898549408U;
	int8_t x1670 = 2;
	int8_t x1671 = INT8_MIN;
	int32_t x1672 = INT32_MIN;
	uint32_t t40 = 1U;

    t40 = (x1669>>(x1670-(x1671<=x1672)));

    if (t40 != 474637352U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x1705 = INT32_MAX;
	uint8_t x1706 = 0U;
	int8_t x1707 = -3;
	static volatile int64_t x1708 = INT64_MIN;
	int32_t t41 = INT32_MAX;

    t41 = (x1705>>(x1706-(x1707<=x1708)));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x1841 = UINT16_MAX;
	int8_t x1842 = 6;
	int16_t x1843 = -1;
	int32_t x1844 = 1910;
	static volatile int32_t t42 = -7578;

    t42 = (x1841>>(x1842-(x1843<=x1844)));

    if (t42 != 2047) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x1885 = 134942327LL;
	uint8_t x1886 = 36U;
	uint32_t x1888 = 65U;
	int64_t t43 = 80830LL;

    t43 = (x1885>>(x1886-(x1887<=x1888)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2101 = INT32_MAX;
	int16_t x2102 = 1;
	uint16_t x2103 = 4U;
	uint64_t x2104 = 1321699221797806801LLU;
	volatile int32_t t44 = INT32_MAX;

    t44 = (x2101>>(x2102-(x2103<=x2104)));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x2157 = 1061944U;
	uint32_t x2158 = 1U;
	int64_t x2159 = INT64_MIN;
	static int16_t x2160 = -1;
	volatile uint32_t t45 = 111013U;

    t45 = (x2157>>(x2158-(x2159<=x2160)));

    if (t45 != 1061944U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2229 = UINT8_MAX;
	static int8_t x2230 = 1;
	volatile int32_t t46 = -499810227;

    t46 = (x2229>>(x2230-(x2231<=x2232)));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2237 = INT32_MAX;
	uint8_t x2238 = 11U;
	static int16_t x2239 = 35;
	volatile uint32_t x2240 = 28372584U;
	volatile int32_t t47 = -4068430;

    t47 = (x2237>>(x2238-(x2239<=x2240)));

    if (t47 != 2097151) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x2245 = UINT32_MAX;
	uint16_t x2246 = 11U;
	int8_t x2247 = INT8_MAX;
	uint8_t x2248 = 81U;
	volatile uint32_t t48 = 302748837U;

    t48 = (x2245>>(x2246-(x2247<=x2248)));

    if (t48 != 2097151U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x2329 = 1468U;
	volatile uint8_t x2330 = 25U;
	int8_t x2331 = -1;
	static int64_t x2332 = -1LL;
	volatile int32_t t49 = 248744;

    t49 = (x2329>>(x2330-(x2331<=x2332)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x2341 = UINT64_MAX;
	int8_t x2342 = 11;
	int8_t x2344 = -1;
	volatile uint64_t t50 = 52862335LLU;

    t50 = (x2341>>(x2342-(x2343<=x2344)));

    if (t50 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x2361 = 1397344U;
	uint8_t x2362 = 11U;
	int16_t x2363 = -37;
	volatile int32_t x2364 = -412948;
	static volatile uint32_t t51 = 1886U;

    t51 = (x2361>>(x2362-(x2363<=x2364)));

    if (t51 != 682U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x2494 = 2;
	volatile int32_t t52 = 12048;

    t52 = (x2493>>(x2494-(x2495<=x2496)));

    if (t52 != 63) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2549 = INT32_MAX;
	uint8_t x2550 = 21U;
	static int64_t x2551 = 31LL;
	int16_t x2552 = INT16_MIN;
	volatile int32_t t53 = -306985;

    t53 = (x2549>>(x2550-(x2551<=x2552)));

    if (t53 != 1023) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x2665 = UINT8_MAX;
	uint16_t x2666 = 7U;
	static int8_t x2667 = -1;
	volatile int32_t t54 = 105605;

    t54 = (x2665>>(x2666-(x2667<=x2668)));

    if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x2669 = UINT8_MAX;
	uint16_t x2670 = 12U;
	uint8_t x2672 = UINT8_MAX;
	int32_t t55 = -2;

    t55 = (x2669>>(x2670-(x2671<=x2672)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2678 = 1U;
	static int16_t x2680 = INT16_MIN;
	int32_t t56 = 1;

    t56 = (x2677>>(x2678-(x2679<=x2680)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x2693 = 2U;
	static int32_t x2695 = -1086;
	volatile int32_t t57 = -14097;

    t57 = (x2693>>(x2694-(x2695<=x2696)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x2742 = 19;
	int64_t x2744 = 313470LL;

    t58 = (x2741>>(x2742-(x2743<=x2744)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x2818 = 12U;
	static int64_t x2819 = -58392572736LL;
	volatile int8_t x2820 = INT8_MIN;
	int32_t t59 = 17;

    t59 = (x2817>>(x2818-(x2819<=x2820)));

    if (t59 != 1048575) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x2825 = 763U;
	volatile uint64_t x2826 = 1LLU;
	volatile int32_t x2827 = 1476194;
	static int64_t x2828 = 61010168930287LL;
	volatile int32_t t60 = 468640641;

    t60 = (x2825>>(x2826-(x2827<=x2828)));

    if (t60 != 763) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2841 = INT8_MAX;
	uint8_t x2842 = 27U;
	static int32_t x2844 = INT32_MAX;
	volatile int32_t t61 = -5;

    t61 = (x2841>>(x2842-(x2843<=x2844)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x2849 = INT8_MAX;
	int16_t x2850 = 25;
	volatile int8_t x2852 = INT8_MIN;

    t62 = (x2849>>(x2850-(x2851<=x2852)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x2974 = 3U;
	int16_t x2975 = INT16_MAX;
	int16_t x2976 = INT16_MIN;
	int32_t t63 = 34;

    t63 = (x2973>>(x2974-(x2975<=x2976)));

    if (t63 != 669) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x3077 = 542586947LLU;
	static uint8_t x3078 = 20U;
	uint8_t x3080 = UINT8_MAX;
	static volatile uint64_t t64 = 11343346LLU;

    t64 = (x3077>>(x3078-(x3079<=x3080)));

    if (t64 != 1034LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x3105 = 21611073709496LLU;
	int8_t x3106 = 1;
	uint8_t x3108 = 3U;

    t65 = (x3105>>(x3106-(x3107<=x3108)));

    if (t65 != 10805536854748LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x3221 = 22;
	uint8_t x3222 = 1U;
	int8_t x3224 = 46;

    t66 = (x3221>>(x3222-(x3223<=x3224)));

    if (t66 != 22) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3249 = 1;
	volatile int8_t x3251 = -6;
	int8_t x3252 = 7;
	static int32_t t67 = -19324;

    t67 = (x3249>>(x3250-(x3251<=x3252)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x3254 = 9;
	int32_t x3255 = -1;
	volatile int64_t t68 = 316881254693771LL;

    t68 = (x3253>>(x3254-(x3255<=x3256)));

    if (t68 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3337 = 4043;
	uint16_t x3338 = 2U;
	uint8_t x3339 = UINT8_MAX;
	static uint32_t x3340 = 43213U;
	int32_t t69 = 1;

    t69 = (x3337>>(x3338-(x3339<=x3340)));

    if (t69 != 2021) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3433 = 5831077LLU;
	int64_t x3435 = -1LL;
	uint64_t x3436 = 49333498LLU;
	uint64_t t70 = 6039LLU;

    t70 = (x3433>>(x3434-(x3435<=x3436)));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x3457 = 63U;
	int32_t x3458 = 1;
	static uint16_t x3459 = 6U;
	int64_t x3460 = INT64_MAX;
	volatile int32_t t71 = -95;

    t71 = (x3457>>(x3458-(x3459<=x3460)));

    if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x3465 = UINT8_MAX;
	volatile int8_t x3466 = 10;
	volatile int32_t x3467 = 2116012;
	int64_t x3468 = INT64_MIN;
	volatile int32_t t72 = -3357944;

    t72 = (x3465>>(x3466-(x3467<=x3468)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x3469 = 12861049LLU;
	volatile int16_t x3470 = 0;
	uint8_t x3471 = 2U;
	int64_t x3472 = INT64_MIN;
	uint64_t t73 = 4705838216465484654LLU;

    t73 = (x3469>>(x3470-(x3471<=x3472)));

    if (t73 != 12861049LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3545 = 2068862;
	static volatile int64_t x3546 = 20LL;
	int16_t x3547 = 1190;
	volatile int32_t x3548 = -123;
	int32_t t74 = 115;

    t74 = (x3545>>(x3546-(x3547<=x3548)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x3625 = 127U;
	static uint16_t x3626 = 17U;
	int8_t x3627 = INT8_MIN;
	static int64_t x3628 = INT64_MAX;
	uint32_t t75 = 8U;

    t75 = (x3625>>(x3626-(x3627<=x3628)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x3669 = INT8_MAX;
	int8_t x3670 = 29;
	int16_t x3671 = INT16_MAX;
	uint32_t x3672 = 822078U;
	int32_t t76 = 7322;

    t76 = (x3669>>(x3670-(x3671<=x3672)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x3693 = 4271101U;
	volatile int8_t x3694 = 14;
	int32_t x3695 = -1;
	static volatile int16_t x3696 = 14696;
	uint32_t t77 = 505352U;

    t77 = (x3693>>(x3694-(x3695<=x3696)));

    if (t77 != 521U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x3793 = 765535888248858LLU;
	uint16_t x3794 = 11U;
	volatile int64_t x3795 = INT64_MIN;
	static volatile uint32_t x3796 = UINT32_MAX;
	volatile uint64_t t78 = 1451723285222LLU;

    t78 = (x3793>>(x3794-(x3795<=x3796)));

    if (t78 != 747593640868LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x3881 = 836646436U;
	int8_t x3882 = 3;
	int64_t x3883 = INT64_MIN;
	uint64_t x3884 = UINT64_MAX;
	static uint32_t t79 = 447405378U;

    t79 = (x3881>>(x3882-(x3883<=x3884)));

    if (t79 != 209161609U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x4237 = 328430U;
	int8_t x4238 = 1;
	static int32_t x4239 = INT32_MIN;
	uint8_t x4240 = UINT8_MAX;
	static uint32_t t80 = 1U;

    t80 = (x4237>>(x4238-(x4239<=x4240)));

    if (t80 != 328430U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x4261 = 52601492192LLU;
	uint16_t x4262 = 28U;
	int32_t x4263 = -2370203;
	volatile uint16_t x4264 = 7U;
	volatile uint64_t t81 = 3LLU;

    t81 = (x4261>>(x4262-(x4263<=x4264)));

    if (t81 != 391LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x4293 = INT16_MAX;
	uint8_t x4294 = 4U;
	volatile int8_t x4295 = -1;
	int32_t x4296 = INT32_MIN;

    t82 = (x4293>>(x4294-(x4295<=x4296)));

    if (t82 != 2047) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x4437 = 7LLU;
	static uint32_t x4438 = 14U;
	static int64_t x4439 = INT64_MAX;
	uint64_t t83 = 1500381249578894306LLU;

    t83 = (x4437>>(x4438-(x4439<=x4440)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x4601 = INT16_MAX;
	volatile int64_t x4602 = 0LL;
	int8_t x4603 = 12;
	int32_t t84 = 77;

    t84 = (x4601>>(x4602-(x4603<=x4604)));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x4713 = 491593716U;
	static int8_t x4714 = 0;
	int32_t x4716 = INT32_MAX;
	volatile uint32_t t85 = 9935U;

    t85 = (x4713>>(x4714-(x4715<=x4716)));

    if (t85 != 491593716U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x4761 = 0U;
	volatile uint8_t x4762 = 3U;
	volatile uint16_t x4763 = 10028U;
	int16_t x4764 = -1;

    t86 = (x4761>>(x4762-(x4763<=x4764)));

    if (t86 != 0) { NG(); } else { ; }
	
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


    return 0;
}

