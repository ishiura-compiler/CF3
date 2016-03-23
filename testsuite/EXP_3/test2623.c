
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

uint16_t x166 = 1U;
uint8_t x225 = 59U;
static volatile uint64_t x228 = 8346LLU;
uint64_t t1 = 3673791LLU;
uint32_t t2 = 4081670U;
int16_t x250 = 1;
uint32_t x380 = 6354816U;
volatile uint64_t x400 = 141482LLU;
static volatile uint64_t t5 = 1820614LLU;
int64_t x495 = 0LL;
volatile int32_t t9 = 191557;
int16_t x922 = 1;
uint64_t t10 = 255913307253LLU;
uint32_t x1341 = 208U;
volatile int64_t t12 = 18LL;
volatile uint64_t t13 = 0LLU;
int8_t x1374 = 2;
volatile int32_t x1542 = 0;
int64_t t16 = -98LL;
uint64_t x1591 = 8299LLU;
int8_t x1821 = INT8_MAX;
uint8_t x1824 = UINT8_MAX;
static uint32_t x1833 = UINT32_MAX;
uint32_t x1834 = 0U;
volatile uint32_t t21 = 3934854U;
uint8_t x1906 = 7U;
volatile uint32_t x1961 = 7535U;
volatile int16_t x1964 = -231;
uint8_t x1982 = 0U;
int64_t t26 = 1803113982LL;
int32_t x2122 = 0;
volatile int64_t t27 = -59517550715481LL;
int64_t x2163 = INT64_MAX;
int64_t t29 = -7561LL;
int64_t x2440 = 262778476901664LL;
uint8_t x2451 = 15U;
uint64_t t37 = 3LLU;
int16_t x2575 = INT16_MAX;
static int32_t x2601 = 380330877;
int16_t x2694 = 15;
static uint32_t t42 = 1723U;
uint64_t x2697 = 272619LLU;
static volatile uint16_t x2822 = 24U;
static int8_t x3106 = 9;
int32_t t47 = 1;
int8_t x3388 = INT8_MIN;
static int32_t x3523 = INT32_MIN;
int8_t x3524 = INT8_MAX;
volatile int8_t x3534 = 0;
uint64_t t54 = 567439644LLU;
int64_t x3731 = INT64_MAX;
int8_t x3810 = 0;
static int16_t x3811 = INT16_MAX;
int32_t t56 = -826;
uint16_t x4039 = 1U;
int32_t x4060 = 1;
uint16_t x4242 = 1U;
volatile uint16_t x4244 = 9U;
volatile int16_t x4292 = -1;
static uint32_t t64 = 1U;
uint8_t x4426 = 14U;
uint16_t x4488 = UINT16_MAX;
int64_t t71 = 2175632374642571635LL;
int8_t x4690 = 21;
volatile int8_t x4691 = INT8_MAX;
uint16_t x4692 = 21U;
volatile int32_t t72 = -173920630;
volatile int32_t x4819 = 388047016;
static uint64_t x4826 = 24LLU;
static int32_t t74 = -480262;
uint16_t x4837 = 4089U;
uint16_t x4844 = UINT16_MAX;
int64_t x4945 = INT64_MAX;
volatile uint8_t x5057 = 4U;
volatile int16_t x5067 = INT16_MIN;
uint8_t x5149 = 1U;
static int16_t x5209 = INT16_MAX;
static uint16_t x5210 = 4U;
uint32_t x5260 = 1U;
volatile uint32_t x5351 = 2399635U;
static uint8_t x5362 = 0U;


void f0(void) {
    	uint8_t x165 = 26U;
	uint16_t x167 = 5U;
	volatile int64_t x168 = -38322675215853757LL;
	int64_t t0 = -2119201LL;

    t0 = ((x165<<x166)%(x167^x168));

    if (t0 != 52LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x226 = 2U;
	uint32_t x227 = 110238684U;

    t1 = ((x225<<x226)%(x227^x228));

    if (t1 != 236LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 3U;
	int8_t x235 = INT8_MAX;
	volatile uint16_t x236 = 240U;

    t2 = ((x233<<x234)%(x235^x236));

    if (t2 != 40U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x249 = 420LLU;
	int64_t x251 = INT64_MAX;
	int16_t x252 = -7;
	uint64_t t3 = 627LLU;

    t3 = ((x249<<x250)%(x251^x252));

    if (t3 != 840LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x377 = 6;
	static volatile uint16_t x378 = 24U;
	int8_t x379 = -3;
	uint32_t t4 = 5U;

    t4 = ((x377<<x378)%(x379^x380));

    if (t4 != 100663296U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x397 = 1508998671LLU;
	uint8_t x398 = 0U;
	int64_t x399 = -283816207250659049LL;

    t5 = ((x397<<x398)%(x399^x400));

    if (t5 != 1508998671LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x493 = UINT8_MAX;
	uint16_t x494 = 1U;
	volatile uint8_t x496 = UINT8_MAX;
	int64_t t6 = -2LL;

    t6 = ((x493<<x494)%(x495^x496));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x649 = 31LLU;
	uint16_t x650 = 26U;
	int64_t x651 = 16606136864LL;
	int64_t x652 = -133672LL;
	volatile uint64_t t7 = 58818540286292833LLU;

    t7 = ((x649<<x650)%(x651^x652));

    if (t7 != 2080374784LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x825 = 0U;
	uint16_t x826 = 4U;
	uint8_t x827 = 31U;
	uint64_t x828 = UINT64_MAX;
	static volatile uint64_t t8 = 636LLU;

    t8 = ((x825<<x826)%(x827^x828));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x829 = 29U;
	uint8_t x830 = 0U;
	uint8_t x831 = 62U;
	int16_t x832 = INT16_MIN;

    t9 = ((x829<<x830)%(x831^x832));

    if (t9 != 29) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x921 = INT16_MAX;
	volatile uint64_t x923 = UINT64_MAX;
	static uint8_t x924 = 1U;

    t10 = ((x921<<x922)%(x923^x924));

    if (t10 != 65534LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1233 = 1;
	uint8_t x1234 = 19U;
	static int8_t x1235 = INT8_MAX;
	uint64_t x1236 = 480909LLU;
	volatile uint64_t t11 = 354943427404740232LLU;

    t11 = ((x1233<<x1234)%(x1235^x1236));

    if (t11 != 43278LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1342 = 1;
	int64_t x1343 = INT64_MIN;
	int16_t x1344 = -1;

    t12 = ((x1341<<x1342)%(x1343^x1344));

    if (t12 != 416LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x1353 = 8153U;
	uint8_t x1354 = 12U;
	volatile int64_t x1355 = INT64_MIN;
	uint64_t x1356 = 13LLU;

    t13 = ((x1353<<x1354)%(x1355^x1356));

    if (t13 != 33394688LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1373 = 1895;
	volatile int32_t x1375 = INT32_MIN;
	int8_t x1376 = INT8_MIN;
	volatile int32_t t14 = -1;

    t14 = ((x1373<<x1374)%(x1375^x1376));

    if (t14 != 7580) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x1541 = 7U;
	int16_t x1543 = -1;
	int16_t x1544 = 1;
	int32_t t15 = 17;

    t15 = ((x1541<<x1542)%(x1543^x1544));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1557 = 2;
	int16_t x1558 = 3;
	int16_t x1559 = INT16_MIN;
	static int64_t x1560 = INT64_MIN;

    t16 = ((x1557<<x1558)%(x1559^x1560));

    if (t16 != 16LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x1589 = UINT64_MAX;
	int8_t x1590 = 0;
	static int64_t x1592 = INT64_MIN;
	volatile uint64_t t17 = 30407228153LLU;

    t17 = ((x1589<<x1590)%(x1591^x1592));

    if (t17 != 9223372036854767508LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1677 = 2;
	uint8_t x1678 = 3U;
	static uint32_t x1679 = UINT32_MAX;
	int32_t x1680 = INT32_MIN;
	volatile uint32_t t18 = 26346668U;

    t18 = ((x1677<<x1678)%(x1679^x1680));

    if (t18 != 16U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1822 = 3U;
	volatile int16_t x1823 = 3;
	volatile int32_t t19 = -1;

    t19 = ((x1821<<x1822)%(x1823^x1824));

    if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1829 = UINT8_MAX;
	int16_t x1830 = 0;
	static uint16_t x1831 = 30U;
	int8_t x1832 = -1;
	int32_t t20 = 22758;

    t20 = ((x1829<<x1830)%(x1831^x1832));

    if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x1835 = 30372U;
	int8_t x1836 = INT8_MIN;

    t21 = ((x1833<<x1834)%(x1835^x1836));

    if (t21 != 30427U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x1893 = 24;
	uint16_t x1894 = 14U;
	uint8_t x1895 = 3U;
	int64_t x1896 = INT64_MIN;
	int64_t t22 = 2023595751LL;

    t22 = ((x1893<<x1894)%(x1895^x1896));

    if (t22 != 393216LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1905 = 0;
	static int64_t x1907 = INT64_MIN;
	int64_t x1908 = INT64_MAX;
	volatile int64_t t23 = -15954206217900LL;

    t23 = ((x1905<<x1906)%(x1907^x1908));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1962 = 0LL;
	static uint16_t x1963 = 1256U;
	uint32_t t24 = 33U;

    t24 = ((x1961<<x1962)%(x1963^x1964));

    if (t24 != 7535U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x1981 = UINT32_MAX;
	volatile int8_t x1983 = INT8_MIN;
	int16_t x1984 = -285;
	volatile uint32_t t25 = 17635U;

    t25 = ((x1981<<x1982)%(x1983^x1984));

    if (t25 != 150U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2017 = INT8_MAX;
	uint16_t x2018 = 3U;
	int8_t x2019 = 1;
	volatile int64_t x2020 = INT64_MAX;

    t26 = ((x2017<<x2018)%(x2019^x2020));

    if (t26 != 1016LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2121 = 6U;
	uint16_t x2123 = 11U;
	volatile int64_t x2124 = -1LL;

    t27 = ((x2121<<x2122)%(x2123^x2124));

    if (t27 != 6LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2145 = 5659111;
	int16_t x2146 = 2;
	int8_t x2147 = -1;
	int64_t x2148 = INT64_MAX;
	int64_t t28 = -815LL;

    t28 = ((x2145<<x2146)%(x2147^x2148));

    if (t28 != 22636444LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x2161 = UINT32_MAX;
	int16_t x2162 = 1;
	int32_t x2164 = INT32_MIN;

    t29 = ((x2161<<x2162)%(x2163^x2164));

    if (t29 != 4294967294LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x2345 = 242924U;
	uint16_t x2346 = 18U;
	volatile int32_t x2347 = INT32_MIN;
	uint32_t x2348 = UINT32_MAX;
	volatile uint32_t t30 = 936667U;

    t30 = ((x2345<<x2346)%(x2347^x2348));

    if (t30 != 1404043265U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x2409 = INT32_MAX;
	uint64_t x2410 = 0LLU;
	int8_t x2411 = -1;
	static volatile int8_t x2412 = INT8_MIN;
	volatile int32_t t31 = -2;

    t31 = ((x2409<<x2410)%(x2411^x2412));

    if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2421 = 1U;
	int16_t x2422 = 30;
	static volatile uint64_t x2423 = 254729661296983539LLU;
	int16_t x2424 = -15286;
	uint64_t t32 = 1458226657807630LLU;

    t32 = ((x2421<<x2422)%(x2423^x2424));

    if (t32 != 1073741824LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2437 = 102U;
	uint8_t x2438 = 2U;
	uint32_t x2439 = 252200U;
	static int64_t t33 = 86785LL;

    t33 = ((x2437<<x2438)%(x2439^x2440));

    if (t33 != 408LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x2449 = 7124U;
	int8_t x2450 = 0;
	int64_t x2452 = INT64_MIN;
	int64_t t34 = 2LL;

    t34 = ((x2449<<x2450)%(x2451^x2452));

    if (t34 != 7124LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2469 = UINT8_MAX;
	int8_t x2470 = 0;
	static uint32_t x2471 = UINT32_MAX;
	uint8_t x2472 = UINT8_MAX;
	uint32_t t35 = 11U;

    t35 = ((x2469<<x2470)%(x2471^x2472));

    if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x2505 = 1;
	uint8_t x2506 = 1U;
	int64_t x2507 = -1LL;
	int64_t x2508 = 284302LL;
	volatile int64_t t36 = -119819841337234LL;

    t36 = ((x2505<<x2506)%(x2507^x2508));

    if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x2541 = 5355;
	volatile int64_t x2542 = 0LL;
	static int16_t x2543 = 7044;
	static uint64_t x2544 = 2743341096733965376LLU;

    t37 = ((x2541<<x2542)%(x2543^x2544));

    if (t37 != 5355LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x2573 = 1846;
	uint16_t x2574 = 0U;
	volatile int8_t x2576 = -1;
	int32_t t38 = -43;

    t38 = ((x2573<<x2574)%(x2575^x2576));

    if (t38 != 1846) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2602 = 0;
	uint8_t x2603 = 125U;
	volatile uint64_t x2604 = 4362254498226334LLU;
	uint64_t t39 = 248LLU;

    t39 = ((x2601<<x2602)%(x2603^x2604));

    if (t39 != 380330877LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x2621 = 2;
	uint8_t x2622 = 2U;
	int32_t x2623 = -26;
	int64_t x2624 = INT64_MIN;
	int64_t t40 = 14787183432LL;

    t40 = ((x2621<<x2622)%(x2623^x2624));

    if (t40 != 8LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x2625 = UINT16_MAX;
	static uint8_t x2626 = 2U;
	int8_t x2627 = 8;
	int32_t x2628 = INT32_MAX;
	volatile int32_t t41 = -88145030;

    t41 = ((x2625<<x2626)%(x2627^x2628));

    if (t41 != 262140) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2693 = 1;
	volatile int32_t x2695 = INT32_MIN;
	uint32_t x2696 = 57U;

    t42 = ((x2693<<x2694)%(x2695^x2696));

    if (t42 != 32768U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x2698 = 1U;
	static int32_t x2699 = INT32_MAX;
	int8_t x2700 = INT8_MIN;
	volatile uint64_t t43 = 1730420976LLU;

    t43 = ((x2697<<x2698)%(x2699^x2700));

    if (t43 != 545238LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2757 = UINT64_MAX;
	int16_t x2758 = 2;
	int32_t x2759 = -1;
	static volatile int64_t x2760 = INT64_MIN;
	static uint64_t t44 = 511905248200507LLU;

    t44 = ((x2757<<x2758)%(x2759^x2760));

    if (t44 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x2821 = 0;
	volatile int32_t x2823 = 632994;
	int16_t x2824 = INT16_MIN;
	volatile int32_t t45 = -1;

    t45 = ((x2821<<x2822)%(x2823^x2824));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x3105 = UINT16_MAX;
	uint64_t x3107 = 1952036730289518LLU;
	volatile int16_t x3108 = INT16_MIN;
	uint64_t t46 = 6617387566LLU;

    t46 = ((x3105<<x3106)%(x3107^x3108));

    if (t46 != 33553920LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x3241 = UINT8_MAX;
	int16_t x3242 = 1;
	volatile int8_t x3243 = -1;
	uint8_t x3244 = 0U;

    t47 = ((x3241<<x3242)%(x3243^x3244));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x3305 = 1U;
	uint8_t x3306 = 0U;
	uint8_t x3307 = 0U;
	int32_t x3308 = INT32_MIN;
	volatile int32_t t48 = -162;

    t48 = ((x3305<<x3306)%(x3307^x3308));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3385 = 65175LL;
	uint32_t x3386 = 1U;
	static volatile uint32_t x3387 = 95267U;
	static volatile int64_t t49 = 261514LL;

    t49 = ((x3385<<x3386)%(x3387^x3388));

    if (t49 != 130350LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3433 = INT64_MAX;
	int16_t x3434 = 0;
	int32_t x3435 = 0;
	uint16_t x3436 = 1240U;
	volatile int64_t t50 = 88948777294856663LL;

    t50 = ((x3433<<x3434)%(x3435^x3436));

    if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x3457 = 43620885U;
	volatile int64_t x3458 = 2LL;
	volatile int32_t x3459 = INT32_MIN;
	uint8_t x3460 = 2U;
	volatile uint32_t t51 = 522U;

    t51 = ((x3457<<x3458)%(x3459^x3460));

    if (t51 != 174483540U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x3521 = 2U;
	uint8_t x3522 = 8U;
	int32_t t52 = -1670;

    t52 = ((x3521<<x3522)%(x3523^x3524));

    if (t52 != 512) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3533 = UINT64_MAX;
	static volatile int32_t x3535 = -1;
	uint16_t x3536 = UINT16_MAX;
	uint64_t t53 = 470438LLU;

    t53 = ((x3533<<x3534)%(x3535^x3536));

    if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x3693 = 24475873163LLU;
	uint8_t x3694 = 6U;
	volatile uint16_t x3695 = UINT16_MAX;
	int8_t x3696 = INT8_MIN;

    t54 = ((x3693<<x3694)%(x3695^x3696));

    if (t54 != 1566455882432LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x3729 = 1179U;
	volatile uint16_t x3730 = 1U;
	static volatile int64_t x3732 = -18LL;
	static volatile int64_t t55 = 18836256131128646LL;

    t55 = ((x3729<<x3730)%(x3731^x3732));

    if (t55 != 2358LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x3809 = 3U;
	int32_t x3812 = -1;

    t56 = ((x3809<<x3810)%(x3811^x3812));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x3881 = 44;
	volatile uint8_t x3882 = 19U;
	int32_t x3883 = -1;
	uint32_t x3884 = 2U;
	static uint32_t t57 = 4624U;

    t57 = ((x3881<<x3882)%(x3883^x3884));

    if (t57 != 23068672U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3909 = 698964422U;
	volatile int8_t x3910 = 7;
	static int32_t x3911 = INT32_MAX;
	int16_t x3912 = INT16_MIN;
	uint32_t t58 = 0U;

    t58 = ((x3909<<x3910)%(x3911^x3912));

    if (t58 != 1420583681U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x4037 = 1572U;
	static uint8_t x4038 = 20U;
	uint16_t x4040 = UINT16_MAX;
	uint32_t t59 = 127853206U;

    t59 = ((x4037<<x4038)%(x4039^x4040));

    if (t59 != 50304U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x4057 = 61954788LLU;
	int8_t x4058 = 61;
	int16_t x4059 = -6;
	volatile uint64_t t60 = 26LLU;

    t60 = ((x4057<<x4058)%(x4059^x4060));

    if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x4125 = INT8_MAX;
	int32_t x4126 = 8;
	uint32_t x4127 = UINT32_MAX;
	volatile uint32_t x4128 = 0U;
	static volatile uint32_t t61 = 1U;

    t61 = ((x4125<<x4126)%(x4127^x4128));

    if (t61 != 32512U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x4153 = UINT64_MAX;
	static uint16_t x4154 = 3U;
	int8_t x4155 = 42;
	int8_t x4156 = INT8_MAX;
	uint64_t t62 = 157LLU;

    t62 = ((x4153<<x4154)%(x4155^x4156));

    if (t62 != 78LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x4241 = UINT64_MAX;
	static int64_t x4243 = 325923LL;
	uint64_t t63 = 770LLU;

    t63 = ((x4241<<x4242)%(x4243^x4244));

    if (t63 != 172054LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x4289 = UINT8_MAX;
	int8_t x4290 = 1;
	volatile uint32_t x4291 = 50469U;

    t64 = ((x4289<<x4290)%(x4291^x4292));

    if (t64 != 510U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x4321 = UINT16_MAX;
	volatile uint8_t x4322 = 0U;
	int64_t x4323 = INT64_MIN;
	int32_t x4324 = INT32_MAX;
	static volatile int64_t t65 = -520511127202043LL;

    t65 = ((x4321<<x4322)%(x4323^x4324));

    if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x4409 = INT8_MAX;
	int8_t x4410 = 9;
	static uint16_t x4411 = 15U;
	int8_t x4412 = INT8_MIN;
	volatile int32_t t66 = -7725772;

    t66 = ((x4409<<x4410)%(x4411^x4412));

    if (t66 != 49) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x4425 = 1;
	uint32_t x4427 = 60927729U;
	uint64_t x4428 = 1495601367547LLU;
	static volatile uint64_t t67 = 0LLU;

    t67 = ((x4425<<x4426)%(x4427^x4428));

    if (t67 != 16384LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x4461 = 17626135U;
	uint8_t x4462 = 13U;
	int64_t x4463 = -31614926175362LL;
	int32_t x4464 = 623934;
	volatile int64_t t68 = 298182979LL;

    t68 = ((x4461<<x4462)%(x4463^x4464));

    if (t68 != 2659377152LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x4485 = 454U;
	volatile int8_t x4486 = 0;
	int8_t x4487 = INT8_MIN;
	volatile int32_t t69 = 19293;

    t69 = ((x4485<<x4486)%(x4487^x4488));

    if (t69 != 454) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x4517 = 16054U;
	uint16_t x4518 = 0U;
	uint64_t x4519 = 33699267866LLU;
	int16_t x4520 = INT16_MIN;
	uint64_t t70 = 1475433367LLU;

    t70 = ((x4517<<x4518)%(x4519^x4520));

    if (t70 != 16054LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x4621 = 1U;
	int8_t x4622 = 2;
	int64_t x4623 = INT64_MIN;
	uint16_t x4624 = 1257U;

    t71 = ((x4621<<x4622)%(x4623^x4624));

    if (t71 != 4LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x4689 = 120U;

    t72 = ((x4689<<x4690)%(x4691^x4692));

    if (t72 != 36) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x4817 = 11508072243LLU;
	static uint8_t x4818 = 2U;
	uint32_t x4820 = 135U;
	uint64_t t73 = 23414902208LLU;

    t73 = ((x4817<<x4818)%(x4819^x4820));

    if (t73 != 242755362LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x4825 = 2U;
	static uint16_t x4827 = 7U;
	static int16_t x4828 = 5073;

    t74 = ((x4825<<x4826)%(x4827^x4828));

    if (t74 != 4086) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x4838 = 1;
	int8_t x4839 = -1;
	uint16_t x4840 = 26056U;
	int32_t t75 = -96335225;

    t75 = ((x4837<<x4838)%(x4839^x4840));

    if (t75 != 8178) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x4841 = 6267U;
	uint8_t x4842 = 2U;
	volatile int64_t x4843 = -1LL;
	volatile int64_t t76 = 134075347011155177LL;

    t76 = ((x4841<<x4842)%(x4843^x4844));

    if (t76 != 25068LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x4901 = 17U;
	uint16_t x4902 = 24U;
	int64_t x4903 = INT64_MIN;
	static uint16_t x4904 = UINT16_MAX;
	int64_t t77 = -34683442166918804LL;

    t77 = ((x4901<<x4902)%(x4903^x4904));

    if (t77 != 285212672LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4946 = 0;
	static int8_t x4947 = INT8_MIN;
	volatile int16_t x4948 = INT16_MIN;
	volatile int64_t t78 = 800828LL;

    t78 = ((x4945<<x4946)%(x4947^x4948));

    if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x5005 = UINT32_MAX;
	uint8_t x5006 = 2U;
	uint64_t x5007 = UINT64_MAX;
	static volatile int16_t x5008 = INT16_MIN;
	volatile uint64_t t79 = 39292084615LLU;

    t79 = ((x5005<<x5006)%(x5007^x5008));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x5058 = 2U;
	int64_t x5059 = INT64_MIN;
	int16_t x5060 = 16;
	volatile int64_t t80 = -115478061LL;

    t80 = ((x5057<<x5058)%(x5059^x5060));

    if (t80 != 16LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x5065 = INT32_MAX;
	uint64_t x5066 = 0LLU;
	volatile int32_t x5068 = INT32_MIN;
	volatile int32_t t81 = -887021788;

    t81 = ((x5065<<x5066)%(x5067^x5068));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x5077 = 3914U;
	int16_t x5078 = 30;
	uint16_t x5079 = UINT16_MAX;
	static uint32_t x5080 = 210833U;
	volatile uint32_t t82 = 2859U;

    t82 = ((x5077<<x5078)%(x5079^x5080));

    if (t82 != 17932U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x5085 = 1;
	volatile uint16_t x5086 = 28U;
	volatile int16_t x5087 = -2786;
	int8_t x5088 = 0;
	int32_t t83 = 0;

    t83 = ((x5085<<x5086)%(x5087^x5088));

    if (t83 != 1570) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x5150 = 0LLU;
	volatile int64_t x5151 = INT64_MIN;
	int8_t x5152 = -1;
	int64_t t84 = -3970082290613739LL;

    t84 = ((x5149<<x5150)%(x5151^x5152));

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x5211 = -2940;
	int64_t x5212 = -92472841251240LL;
	int64_t t85 = -1565542LL;

    t85 = ((x5209<<x5210)%(x5211^x5212));

    if (t85 != 524272LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x5221 = 4459799761265823LLU;
	uint8_t x5222 = 1U;
	uint64_t x5223 = 2022031LLU;
	int8_t x5224 = INT8_MIN;
	uint64_t t86 = 959LLU;

    t86 = ((x5221<<x5222)%(x5223^x5224));

    if (t86 != 8919599522531646LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x5257 = 4U;
	uint32_t x5258 = 0U;
	uint8_t x5259 = 0U;
	uint32_t t87 = 2U;

    t87 = ((x5257<<x5258)%(x5259^x5260));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5349 = UINT32_MAX;
	static volatile int8_t x5350 = 23;
	int16_t x5352 = -1;
	uint32_t t88 = 48269785U;

    t88 = ((x5349<<x5350)%(x5351^x5352));

    if (t88 != 4286578688U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x5361 = 155U;
	int16_t x5363 = INT16_MIN;
	int64_t x5364 = INT64_MAX;
	int64_t t89 = -51LL;

    t89 = ((x5361<<x5362)%(x5363^x5364));

    if (t89 != 155LL) { NG(); } else { ; }
	
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


    return 0;
}

