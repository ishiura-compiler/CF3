
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

uint16_t x237 = UINT16_MAX;
volatile int64_t x361 = INT64_MAX;
int8_t x362 = 0;
static uint16_t x363 = UINT16_MAX;
int16_t x403 = -1;
uint8_t x475 = UINT8_MAX;
volatile int32_t t5 = 2;
static uint64_t x509 = 4032479795351206362LLU;
int16_t x559 = INT16_MAX;
int64_t x560 = 1281529LL;
static int16_t x574 = 4;
volatile int32_t t8 = 1514;
static volatile int32_t t9 = INT32_MAX;
volatile int8_t x742 = 4;
int16_t x765 = INT16_MAX;
static int8_t x767 = INT8_MIN;
volatile int32_t t11 = -833218;
volatile uint16_t x826 = 0U;
int32_t x827 = INT32_MIN;
volatile uint8_t x930 = 5U;
volatile uint32_t x1041 = 90239U;
int8_t x1042 = 1;
volatile uint32_t t14 = 12U;
int16_t x1131 = 0;
uint64_t x1213 = UINT64_MAX;
uint64_t t16 = 2405418477237449LLU;
int64_t x1305 = INT64_MAX;
static volatile int64_t t17 = 27665175130LL;
int16_t x1802 = 1;
uint32_t x1803 = 129U;
uint64_t x1960 = UINT64_MAX;
int64_t x2115 = -435LL;
volatile int8_t x2116 = INT8_MIN;
volatile int32_t t24 = -735800;
volatile uint16_t x2318 = 6U;
static int64_t x2320 = INT64_MIN;
static int8_t x2383 = INT8_MAX;
static int32_t t26 = -1912975;
volatile uint8_t x2665 = 1U;
uint8_t x2668 = 12U;
volatile uint16_t x2702 = 2U;
static int32_t x2804 = INT32_MAX;
int32_t x2809 = 4465611;
uint8_t x2890 = 7U;
volatile int32_t x2892 = INT32_MIN;
int8_t x2998 = 1;
static int64_t x3003 = -1LL;
static uint16_t x3004 = 5U;
uint8_t x3116 = 9U;
uint64_t x3214 = 1LLU;
int16_t x3215 = INT16_MIN;
int64_t t38 = 5184147632217998LL;
static int8_t x3337 = 0;
uint16_t x3338 = 5U;
int64_t x3341 = INT64_MAX;
uint8_t x3342 = 1U;
static int16_t x3344 = INT16_MIN;
static uint32_t t43 = 7476U;
int8_t x3443 = 1;
volatile int64_t x3444 = 15LL;
static uint64_t x3501 = 918769501715LLU;
int64_t x3504 = INT64_MAX;
static volatile int32_t t46 = -2;
int8_t x3638 = 5;
int8_t x3698 = 1;
uint32_t x3945 = UINT32_MAX;
static int8_t x3947 = -7;
uint64_t x4125 = 305785819942443LLU;
uint8_t x4363 = UINT8_MAX;
static volatile uint16_t x4430 = 53U;
static volatile uint64_t t56 = 52534494437LLU;
int16_t x4440 = INT16_MIN;
static volatile int16_t x4451 = INT16_MIN;
uint16_t x4452 = UINT16_MAX;
static uint32_t t58 = 3306848U;
uint64_t x4775 = 15LLU;
volatile int32_t t59 = -197;
int16_t x4867 = -1;
static volatile int32_t t61 = 16833;
uint8_t x4898 = 1U;
volatile int16_t x4900 = INT16_MIN;
int16_t x4947 = 149;
uint64_t t64 = 285150542394348763LLU;
int32_t x5231 = INT32_MAX;
volatile uint32_t x5252 = 1206283U;
int16_t x5292 = -1;
uint32_t x5359 = 1780U;
uint64_t x5481 = UINT64_MAX;
volatile int8_t x5498 = 27;
uint8_t x5666 = 52U;
volatile uint32_t x5667 = UINT32_MAX;
static uint32_t x5675 = 0U;
volatile uint8_t x5689 = 1U;
uint8_t x5690 = 1U;
int32_t x5784 = INT32_MIN;
int64_t t75 = -98540317177275963LL;
static uint16_t x5922 = 25U;
uint8_t x5970 = 1U;
int64_t x5972 = INT64_MIN;
static volatile uint64_t x5981 = 1284234LLU;
uint8_t x6031 = UINT8_MAX;
static uint8_t x6242 = 14U;
int64_t x6243 = -1LL;
static uint32_t x6377 = UINT32_MAX;
uint8_t x7366 = 1U;
volatile int64_t t92 = -7327342LL;
uint8_t x7401 = UINT8_MAX;
int8_t x7402 = 5;
uint64_t x7436 = UINT64_MAX;
volatile int64_t x7525 = 10645LL;
uint16_t x7526 = 18U;
int64_t x7527 = INT64_MIN;
volatile int8_t x7535 = 2;
volatile int64_t t98 = -455454763LL;
volatile int32_t t99 = -29417095;
uint8_t x7794 = 0U;
int32_t x7834 = 1;
uint64_t x7889 = UINT64_MAX;
int8_t x7892 = 50;


void f0(void) {
    	uint16_t x117 = UINT16_MAX;
	int8_t x118 = 0;
	int16_t x119 = -1;
	int16_t x120 = 81;
	volatile int32_t t0 = -22754;

    t0 = (x117>>(x118|(x119/x120)));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x238 = 0U;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MIN;
	int32_t t1 = 5113;

    t1 = (x237>>(x238|(x239/x240)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x269 = 4U;
	uint64_t x270 = 23LLU;
	volatile int16_t x271 = -1;
	int32_t x272 = -1;
	volatile int32_t t2 = -13;

    t2 = (x269>>(x270|(x271/x272)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x364 = UINT16_MAX;
	static volatile int64_t t3 = 1LL;

    t3 = (x361>>(x362|(x363/x364)));

    if (t3 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint8_t x402 = 22U;
	int64_t x404 = INT64_MIN;
	volatile int32_t t4 = 590264;

    t4 = (x401>>(x402|(x403/x404)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x473 = 10U;
	static uint16_t x474 = 0U;
	uint8_t x476 = 80U;

    t5 = (x473>>(x474|(x475/x476)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x510 = 1U;
	static int32_t x511 = 8665856;
	uint64_t x512 = 1017221LLU;
	volatile uint64_t t6 = 110LLU;

    t6 = (x509>>(x510|(x511/x512)));

    if (t6 != 7875937100295324LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x557 = 9774223LLU;
	uint16_t x558 = 0U;
	uint64_t t7 = 463637743LLU;

    t7 = (x557>>(x558|(x559/x560)));

    if (t7 != 9774223LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x573 = 46;
	int8_t x575 = 23;
	uint32_t x576 = 103U;

    t8 = (x573>>(x574|(x575/x576)));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x589 = INT32_MAX;
	uint16_t x590 = 0U;
	int8_t x591 = INT8_MIN;
	static int16_t x592 = INT16_MIN;

    t9 = (x589>>(x590|(x591/x592)));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x741 = UINT32_MAX;
	int8_t x743 = INT8_MIN;
	int16_t x744 = INT16_MIN;
	uint32_t t10 = 3U;

    t10 = (x741>>(x742|(x743/x744)));

    if (t10 != 268435455U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x766 = 1;
	uint32_t x768 = UINT32_MAX;

    t11 = (x765>>(x766|(x767/x768)));

    if (t11 != 16383) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x825 = INT8_MAX;
	int64_t x828 = INT64_MIN;
	volatile int32_t t12 = -31884;

    t12 = (x825>>(x826|(x827/x828)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x929 = INT32_MAX;
	int64_t x931 = -1LL;
	uint8_t x932 = UINT8_MAX;
	static volatile int32_t t13 = 244;

    t13 = (x929>>(x930|(x931/x932)));

    if (t13 != 67108863) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1043 = 77U;
	uint32_t x1044 = 13901U;

    t14 = (x1041>>(x1042|(x1043/x1044)));

    if (t14 != 45119U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1129 = INT64_MAX;
	int8_t x1130 = 1;
	int64_t x1132 = -87229LL;
	volatile int64_t t15 = -2858352LL;

    t15 = (x1129>>(x1130|(x1131/x1132)));

    if (t15 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x1214 = 4;
	uint32_t x1215 = 121U;
	volatile int8_t x1216 = INT8_MIN;

    t16 = (x1213>>(x1214|(x1215/x1216)));

    if (t16 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x1306 = 26LLU;
	uint32_t x1307 = 6U;
	int32_t x1308 = INT32_MIN;

    t17 = (x1305>>(x1306|(x1307/x1308)));

    if (t17 != 137438953471LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x1333 = 3U;
	int32_t x1334 = 12;
	static uint32_t x1335 = 1830U;
	static int8_t x1336 = -1;
	volatile int32_t t18 = 1612762;

    t18 = (x1333>>(x1334|(x1335/x1336)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1453 = 2454574441LLU;
	static int16_t x1454 = 0;
	volatile int8_t x1455 = -1;
	int32_t x1456 = INT32_MAX;
	uint64_t t19 = 4596590375139816320LLU;

    t19 = (x1453>>(x1454|(x1455/x1456)));

    if (t19 != 2454574441LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x1741 = 0;
	uint8_t x1742 = 2U;
	int16_t x1743 = INT16_MIN;
	uint16_t x1744 = UINT16_MAX;
	volatile int32_t t20 = 95688763;

    t20 = (x1741>>(x1742|(x1743/x1744)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1801 = INT8_MAX;
	static volatile uint16_t x1804 = 351U;
	int32_t t21 = -16528351;

    t21 = (x1801>>(x1802|(x1803/x1804)));

    if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1941 = 22U;
	int16_t x1942 = 1;
	int32_t x1943 = 373;
	volatile int64_t x1944 = 37099719786044LL;
	uint32_t t22 = 365U;

    t22 = (x1941>>(x1942|(x1943/x1944)));

    if (t22 != 11U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x1957 = 23751347U;
	int8_t x1958 = 7;
	int32_t x1959 = -3139175;
	volatile uint32_t t23 = 359603741U;

    t23 = (x1957>>(x1958|(x1959/x1960)));

    if (t23 != 185557U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x2113 = INT8_MAX;
	uint64_t x2114 = 1LLU;

    t24 = (x2113>>(x2114|(x2115/x2116)));

    if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x2317 = INT64_MAX;
	uint64_t x2319 = UINT64_MAX;
	int64_t t25 = -52792143846886LL;

    t25 = (x2317>>(x2318|(x2319/x2320)));

    if (t25 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2381 = UINT8_MAX;
	int8_t x2382 = 0;
	uint16_t x2384 = UINT16_MAX;

    t26 = (x2381>>(x2382|(x2383/x2384)));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x2666 = 6;
	int8_t x2667 = -5;
	volatile int32_t t27 = 423504;

    t27 = (x2665>>(x2666|(x2667/x2668)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2701 = UINT16_MAX;
	int16_t x2703 = INT16_MAX;
	uint64_t x2704 = 3047828525157919167LLU;
	volatile int32_t t28 = -7;

    t28 = (x2701>>(x2702|(x2703/x2704)));

    if (t28 != 16383) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x2733 = 29895877U;
	int8_t x2734 = 1;
	int64_t x2735 = -1LL;
	volatile int32_t x2736 = 103797;
	uint32_t t29 = 5183489U;

    t29 = (x2733>>(x2734|(x2735/x2736)));

    if (t29 != 14947938U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x2801 = 160146396418467LL;
	static int32_t x2802 = 63;
	volatile int8_t x2803 = -1;
	static volatile int64_t t30 = -141406437557057833LL;

    t30 = (x2801>>(x2802|(x2803/x2804)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x2810 = 1;
	static volatile int16_t x2811 = -1;
	uint8_t x2812 = 3U;
	int32_t t31 = -7193047;

    t31 = (x2809>>(x2810|(x2811/x2812)));

    if (t31 != 2232805) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x2889 = INT8_MAX;
	volatile uint64_t x2891 = 441LLU;
	int32_t t32 = 1;

    t32 = (x2889>>(x2890|(x2891/x2892)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x2909 = UINT8_MAX;
	static uint16_t x2910 = 0U;
	int64_t x2911 = -1LL;
	uint32_t x2912 = 915574203U;
	volatile int32_t t33 = -14943;

    t33 = (x2909>>(x2910|(x2911/x2912)));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x2997 = 11U;
	int8_t x2999 = -18;
	static int64_t x3000 = INT64_MIN;
	volatile int32_t t34 = -547220;

    t34 = (x2997>>(x2998|(x2999/x3000)));

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x3001 = 29U;
	volatile int8_t x3002 = 1;
	volatile int32_t t35 = 929803602;

    t35 = (x3001>>(x3002|(x3003/x3004)));

    if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x3105 = UINT32_MAX;
	uint32_t x3106 = 1U;
	int8_t x3107 = -1;
	int8_t x3108 = INT8_MIN;
	uint32_t t36 = 7U;

    t36 = (x3105>>(x3106|(x3107/x3108)));

    if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3113 = 0U;
	volatile uint16_t x3114 = 11U;
	int16_t x3115 = 27;
	int32_t t37 = 131308;

    t37 = (x3113>>(x3114|(x3115/x3116)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x3213 = INT64_MAX;
	static volatile int32_t x3216 = INT32_MIN;

    t38 = (x3213>>(x3214|(x3215/x3216)));

    if (t38 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x3293 = 2U;
	static int8_t x3294 = 0;
	int8_t x3295 = INT8_MIN;
	int64_t x3296 = INT64_MAX;
	volatile int32_t t39 = -621;

    t39 = (x3293>>(x3294|(x3295/x3296)));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x3339 = -1;
	volatile int64_t x3340 = -1LL;
	int32_t t40 = 479;

    t40 = (x3337>>(x3338|(x3339/x3340)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x3343 = -53;
	int64_t t41 = 443196LL;

    t41 = (x3341>>(x3342|(x3343/x3344)));

    if (t41 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3357 = 9U;
	uint16_t x3358 = 7U;
	static int8_t x3359 = -1;
	uint32_t x3360 = UINT32_MAX;
	volatile int32_t t42 = -12331931;

    t42 = (x3357>>(x3358|(x3359/x3360)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3397 = 11U;
	int64_t x3398 = 0LL;
	int32_t x3399 = INT32_MAX;
	static volatile uint32_t x3400 = UINT32_MAX;

    t43 = (x3397>>(x3398|(x3399/x3400)));

    if (t43 != 11U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x3441 = UINT64_MAX;
	uint8_t x3442 = 40U;
	uint64_t t44 = 3487723186718113LLU;

    t44 = (x3441>>(x3442|(x3443/x3444)));

    if (t44 != 16777215LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x3502 = 21U;
	static volatile uint64_t x3503 = 32739LLU;
	volatile uint64_t t45 = 106596535LLU;

    t45 = (x3501>>(x3502|(x3503/x3504)));

    if (t45 != 438103LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x3577 = 0U;
	static volatile int16_t x3578 = 1;
	uint8_t x3579 = 54U;
	volatile uint32_t x3580 = 6569565U;

    t46 = (x3577>>(x3578|(x3579/x3580)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x3629 = 2070098744U;
	volatile uint8_t x3630 = 2U;
	volatile uint32_t x3631 = 68389U;
	int32_t x3632 = 6883;
	volatile uint32_t t47 = 344814U;

    t47 = (x3629>>(x3630|(x3631/x3632)));

    if (t47 != 1010790U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x3637 = 88U;
	int64_t x3639 = -1LL;
	uint64_t x3640 = UINT64_MAX;
	static uint32_t t48 = 13U;

    t48 = (x3637>>(x3638|(x3639/x3640)));

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x3673 = 22063778;
	uint16_t x3674 = 21U;
	int64_t x3675 = -2357LL;
	int32_t x3676 = 32631624;
	int32_t t49 = -1;

    t49 = (x3673>>(x3674|(x3675/x3676)));

    if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x3697 = 0U;
	int8_t x3699 = INT8_MAX;
	volatile int16_t x3700 = INT16_MIN;
	volatile int32_t t50 = 3;

    t50 = (x3697>>(x3698|(x3699/x3700)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3946 = 1LLU;
	uint8_t x3948 = 113U;
	volatile uint32_t t51 = 36547844U;

    t51 = (x3945>>(x3946|(x3947/x3948)));

    if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x4061 = INT16_MAX;
	int16_t x4062 = 14;
	uint8_t x4063 = 1U;
	int64_t x4064 = INT64_MIN;
	volatile int32_t t52 = -3846500;

    t52 = (x4061>>(x4062|(x4063/x4064)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x4105 = INT8_MAX;
	int8_t x4106 = 2;
	int64_t x4107 = -1LL;
	static uint16_t x4108 = UINT16_MAX;
	int32_t t53 = -188693167;

    t53 = (x4105>>(x4106|(x4107/x4108)));

    if (t53 != 31) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x4126 = 21;
	uint8_t x4127 = 12U;
	volatile int16_t x4128 = INT16_MIN;
	volatile uint64_t t54 = 55LLU;

    t54 = (x4125>>(x4126|(x4127/x4128)));

    if (t54 != 145810041LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x4361 = 95U;
	uint8_t x4362 = 3U;
	uint32_t x4364 = UINT32_MAX;
	int32_t t55 = -74;

    t55 = (x4361>>(x4362|(x4363/x4364)));

    if (t55 != 11) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x4429 = 6880307LLU;
	static int8_t x4431 = INT8_MAX;
	volatile int8_t x4432 = INT8_MIN;

    t56 = (x4429>>(x4430|(x4431/x4432)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x4437 = UINT64_MAX;
	int8_t x4438 = 1;
	uint64_t x4439 = 7016889691806958099LLU;
	uint64_t t57 = 172LLU;

    t57 = (x4437>>(x4438|(x4439/x4440)));

    if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x4449 = UINT32_MAX;
	uint8_t x4450 = 1U;

    t58 = (x4449>>(x4450|(x4451/x4452)));

    if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x4773 = 39;
	int32_t x4774 = 16;
	int32_t x4776 = INT32_MIN;

    t59 = (x4773>>(x4774|(x4775/x4776)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4849 = UINT64_MAX;
	int16_t x4850 = 0;
	volatile int8_t x4851 = -1;
	volatile int32_t x4852 = -2;
	uint64_t t60 = UINT64_MAX;

    t60 = (x4849>>(x4850|(x4851/x4852)));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x4865 = 0;
	static uint64_t x4866 = 6LLU;
	volatile uint32_t x4868 = UINT32_MAX;

    t61 = (x4865>>(x4866|(x4867/x4868)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x4897 = UINT32_MAX;
	static int8_t x4899 = INT8_MIN;
	uint32_t t62 = 782U;

    t62 = (x4897>>(x4898|(x4899/x4900)));

    if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x4929 = UINT8_MAX;
	int32_t x4930 = 1;
	int32_t x4931 = INT32_MAX;
	int64_t x4932 = INT64_MIN;
	volatile int32_t t63 = -1725;

    t63 = (x4929>>(x4930|(x4931/x4932)));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x4945 = UINT64_MAX;
	static uint8_t x4946 = 15U;
	volatile int64_t x4948 = INT64_MIN;

    t64 = (x4945>>(x4946|(x4947/x4948)));

    if (t64 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x5229 = UINT32_MAX;
	uint16_t x5230 = 28U;
	int32_t x5232 = INT32_MIN;
	uint32_t t65 = 41242U;

    t65 = (x5229>>(x5230|(x5231/x5232)));

    if (t65 != 15U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x5249 = 82U;
	volatile int8_t x5250 = 0;
	uint8_t x5251 = 124U;
	static volatile uint32_t t66 = 283335469U;

    t66 = (x5249>>(x5250|(x5251/x5252)));

    if (t66 != 82U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x5289 = UINT8_MAX;
	int8_t x5290 = 0;
	int8_t x5291 = -1;
	int32_t t67 = 3509;

    t67 = (x5289>>(x5290|(x5291/x5292)));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x5357 = 13U;
	volatile uint64_t x5358 = 24LLU;
	volatile uint32_t x5360 = 230U;
	int32_t t68 = 87002587;

    t68 = (x5357>>(x5358|(x5359/x5360)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x5482 = 14U;
	volatile uint16_t x5483 = 3189U;
	int32_t x5484 = INT32_MAX;
	uint64_t t69 = 10052LLU;

    t69 = (x5481>>(x5482|(x5483/x5484)));

    if (t69 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x5497 = UINT64_MAX;
	int16_t x5499 = INT16_MIN;
	uint32_t x5500 = UINT32_MAX;
	uint64_t t70 = 1102676124442LLU;

    t70 = (x5497>>(x5498|(x5499/x5500)));

    if (t70 != 137438953471LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x5597 = UINT32_MAX;
	uint8_t x5598 = 9U;
	uint16_t x5599 = 0U;
	int8_t x5600 = -3;
	uint32_t t71 = 354072U;

    t71 = (x5597>>(x5598|(x5599/x5600)));

    if (t71 != 8388607U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x5665 = UINT64_MAX;
	static int8_t x5668 = -58;
	static volatile uint64_t t72 = 7661156LLU;

    t72 = (x5665>>(x5666|(x5667/x5668)));

    if (t72 != 2047LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x5673 = 180473U;
	uint8_t x5674 = 0U;
	volatile int16_t x5676 = -24;
	uint32_t t73 = 562950U;

    t73 = (x5673>>(x5674|(x5675/x5676)));

    if (t73 != 180473U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x5691 = INT64_MIN;
	static volatile int64_t x5692 = INT64_MIN;
	int32_t t74 = 10;

    t74 = (x5689>>(x5690|(x5691/x5692)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5781 = 1298145006591LL;
	int16_t x5782 = 62;
	static uint8_t x5783 = UINT8_MAX;

    t75 = (x5781>>(x5782|(x5783/x5784)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x5921 = 1U;
	volatile int16_t x5923 = INT16_MIN;
	static int64_t x5924 = INT64_MIN;
	int32_t t76 = -385;

    t76 = (x5921>>(x5922|(x5923/x5924)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x5969 = UINT64_MAX;
	static int8_t x5971 = -6;
	uint64_t t77 = 32LLU;

    t77 = (x5969>>(x5970|(x5971/x5972)));

    if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x5982 = 2;
	static int8_t x5983 = INT8_MAX;
	int64_t x5984 = INT64_MIN;
	volatile uint64_t t78 = 113LLU;

    t78 = (x5981>>(x5982|(x5983/x5984)));

    if (t78 != 321058LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x6029 = UINT16_MAX;
	uint16_t x6030 = 1U;
	volatile int64_t x6032 = INT64_MAX;
	int32_t t79 = -86425779;

    t79 = (x6029>>(x6030|(x6031/x6032)));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x6069 = 3850498458LL;
	static volatile int8_t x6070 = 2;
	static int64_t x6071 = -1LL;
	int8_t x6072 = -1;
	int64_t t80 = 125503910LL;

    t80 = (x6069>>(x6070|(x6071/x6072)));

    if (t80 != 481312307LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x6241 = UINT32_MAX;
	int64_t x6244 = INT64_MAX;
	uint32_t t81 = 1209298299U;

    t81 = (x6241>>(x6242|(x6243/x6244)));

    if (t81 != 262143U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x6373 = INT8_MAX;
	int8_t x6374 = 1;
	uint32_t x6375 = 43U;
	int64_t x6376 = INT64_MIN;
	volatile int32_t t82 = -103513929;

    t82 = (x6373>>(x6374|(x6375/x6376)));

    if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x6378 = 5U;
	volatile int32_t x6379 = -18;
	volatile int32_t x6380 = -1;
	volatile uint32_t t83 = 2U;

    t83 = (x6377>>(x6378|(x6379/x6380)));

    if (t83 != 511U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x6393 = UINT64_MAX;
	int16_t x6394 = 41;
	volatile uint16_t x6395 = UINT16_MAX;
	static uint64_t x6396 = 37917LLU;
	uint64_t t84 = 1335157LLU;

    t84 = (x6393>>(x6394|(x6395/x6396)));

    if (t84 != 8388607LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint8_t x6541 = 1U;
	static uint8_t x6542 = 4U;
	static int64_t x6543 = -1LL;
	int8_t x6544 = INT8_MIN;
	int32_t t85 = 13404;

    t85 = (x6541>>(x6542|(x6543/x6544)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x6565 = 1U;
	int16_t x6566 = 2;
	int64_t x6567 = -26677440LL;
	int64_t x6568 = INT64_MAX;
	int32_t t86 = -14821693;

    t86 = (x6565>>(x6566|(x6567/x6568)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x6753 = 4349280727843840LLU;
	volatile uint64_t x6754 = 13LLU;
	static uint8_t x6755 = 56U;
	static volatile int16_t x6756 = INT16_MIN;
	static volatile uint64_t t87 = 8125093335LLU;

    t87 = (x6753>>(x6754|(x6755/x6756)));

    if (t87 != 530918057598LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x6845 = INT8_MAX;
	int16_t x6846 = 0;
	int32_t x6847 = INT32_MAX;
	uint64_t x6848 = 33540877733595679LLU;
	volatile int32_t t88 = -330656;

    t88 = (x6845>>(x6846|(x6847/x6848)));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x7145 = UINT8_MAX;
	static volatile uint8_t x7146 = 0U;
	int32_t x7147 = -1;
	uint64_t x7148 = UINT64_MAX;
	static int32_t t89 = -1073;

    t89 = (x7145>>(x7146|(x7147/x7148)));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x7225 = 17U;
	static volatile uint8_t x7226 = 1U;
	int32_t x7227 = -1;
	static int32_t x7228 = INT32_MAX;
	uint32_t t90 = 308328943U;

    t90 = (x7225>>(x7226|(x7227/x7228)));

    if (t90 != 8U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x7289 = 39114351LLU;
	int16_t x7290 = 1;
	int32_t x7291 = -1;
	volatile int8_t x7292 = 3;
	static uint64_t t91 = 366629831479829581LLU;

    t91 = (x7289>>(x7290|(x7291/x7292)));

    if (t91 != 19557175LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x7365 = 45766241LL;
	uint8_t x7367 = 1U;
	int16_t x7368 = -13269;

    t92 = (x7365>>(x7366|(x7367/x7368)));

    if (t92 != 22883120LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x7403 = -38;
	int8_t x7404 = INT8_MAX;
	volatile int32_t t93 = 704449815;

    t93 = (x7401>>(x7402|(x7403/x7404)));

    if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x7433 = 75U;
	static uint16_t x7434 = 18U;
	uint32_t x7435 = 0U;
	volatile uint32_t t94 = 0U;

    t94 = (x7433>>(x7434|(x7435/x7436)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x7528 = INT64_MIN;
	int64_t t95 = 2168580592459568738LL;

    t95 = (x7525>>(x7526|(x7527/x7528)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x7533 = UINT32_MAX;
	int8_t x7534 = 20;
	volatile int16_t x7536 = -138;
	static volatile uint32_t t96 = 10U;

    t96 = (x7533>>(x7534|(x7535/x7536)));

    if (t96 != 4095U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x7549 = 11;
	uint16_t x7550 = 7U;
	uint16_t x7551 = 160U;
	int64_t x7552 = INT64_MIN;
	static volatile int32_t t97 = 381013;

    t97 = (x7549>>(x7550|(x7551/x7552)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x7617 = INT64_MAX;
	volatile uint8_t x7618 = 1U;
	uint64_t x7619 = UINT64_MAX;
	static int32_t x7620 = INT32_MIN;

    t98 = (x7617>>(x7618|(x7619/x7620)));

    if (t98 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x7669 = 164U;
	uint8_t x7670 = 1U;
	int8_t x7671 = INT8_MAX;
	int8_t x7672 = INT8_MIN;

    t99 = (x7669>>(x7670|(x7671/x7672)));

    if (t99 != 82) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x7793 = 13U;
	uint8_t x7795 = 2U;
	static int16_t x7796 = 15;
	static volatile int32_t t100 = -1739;

    t100 = (x7793>>(x7794|(x7795/x7796)));

    if (t100 != 13) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x7833 = 5426;
	uint8_t x7835 = 20U;
	uint16_t x7836 = 27U;
	int32_t t101 = 144497;

    t101 = (x7833>>(x7834|(x7835/x7836)));

    if (t101 != 2713) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x7890 = 43;
	uint8_t x7891 = UINT8_MAX;
	uint64_t t102 = 2905LLU;

    t102 = (x7889>>(x7890|(x7891/x7892)));

    if (t102 != 131071LLU) { NG(); } else { ; }
	
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


    return 0;
}

