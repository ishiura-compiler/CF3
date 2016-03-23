
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

uint32_t x19 = UINT32_MAX;
int8_t x20 = 5;
int32_t t1 = -14;
volatile int32_t t2 = 4513150;
volatile uint16_t x193 = 380U;
volatile int32_t t5 = -4;
volatile uint8_t x358 = UINT8_MAX;
uint64_t x359 = 4133826155028388LLU;
int64_t x443 = INT64_MAX;
static int16_t x450 = INT16_MIN;
uint32_t x452 = 0U;
uint32_t x801 = UINT32_MAX;
uint32_t x881 = 3944689U;
static volatile uint8_t x884 = 1U;
uint32_t x902 = 11U;
volatile int32_t t14 = 4;
int32_t t15 = 33;
uint64_t x1395 = 223102668961224LLU;
int8_t x1709 = -1;
int32_t t18 = 3902399;
uint16_t x1928 = 3U;
int32_t x1997 = -1;
uint32_t x2095 = 1702591U;
int32_t t22 = 6;
volatile uint16_t x2348 = 2U;
static volatile int32_t t25 = 124;
uint8_t x2444 = 1U;
static int8_t x2469 = INT8_MAX;
uint64_t x2475 = UINT64_MAX;
volatile int32_t t29 = 17;
int32_t x2477 = INT32_MAX;
volatile int32_t x2479 = 12;
volatile int16_t x2480 = 1;
volatile uint32_t x2549 = UINT32_MAX;
int32_t x2550 = INT32_MIN;
volatile int32_t t32 = 166570;
static volatile int32_t t35 = 0;
uint32_t x2731 = UINT32_MAX;
volatile uint16_t x2751 = UINT16_MAX;
volatile int32_t t37 = -1;
static int16_t x2822 = INT16_MIN;
static int64_t x2971 = INT64_MAX;
static int8_t x2998 = 39;
static volatile int32_t x2999 = 2272422;
uint64_t x3061 = 21956930LLU;
int64_t x3182 = -165020937884362LL;
static volatile uint64_t x3207 = 20396LLU;
int8_t x3335 = 11;
static uint32_t x3336 = 3U;
int64_t x3443 = 49038422LL;
uint16_t x3444 = 12U;
uint64_t x3543 = 1LLU;
static int32_t t53 = -35757557;
static int8_t x3710 = INT8_MAX;
static uint16_t x4001 = 1472U;
volatile uint16_t x4004 = 1U;
int32_t t56 = 15082264;
volatile int32_t t58 = 14028746;
int16_t x4065 = 316;
int16_t x4079 = 43;
uint16_t x4178 = 7U;
int64_t x4207 = INT64_MAX;
int32_t x4235 = INT32_MAX;
volatile int32_t t63 = 13785604;
static int64_t x4378 = INT64_MIN;
uint32_t x4379 = UINT32_MAX;
uint16_t x4380 = 2U;
int8_t x4396 = 2;
uint16_t x4513 = UINT16_MAX;
int8_t x4529 = -1;
int32_t x4759 = INT32_MAX;
int64_t x4841 = -1LL;
int8_t x4844 = 0;
static int64_t x4877 = INT64_MIN;
volatile int64_t x4905 = -1LL;
int16_t x4906 = 808;
int8_t x4914 = -31;
uint16_t x5024 = 0U;
volatile int32_t t73 = -345;
uint16_t x5105 = 19U;
uint16_t x5107 = UINT16_MAX;
uint8_t x5135 = UINT8_MAX;
int16_t x5136 = 1;
uint16_t x5219 = 4839U;
static volatile uint8_t x5244 = 0U;
volatile uint16_t x5332 = 24U;
static int64_t x5402 = INT64_MIN;
volatile int8_t x5669 = INT8_MIN;
int8_t x5686 = INT8_MIN;
volatile int32_t t85 = -310;
uint16_t x5909 = UINT16_MAX;
uint8_t x5912 = 11U;
int8_t x6117 = INT8_MIN;
int64_t x6118 = INT64_MAX;
int8_t x6210 = -1;
int16_t x6470 = -169;
uint16_t x6471 = 164U;
int32_t t92 = -2423834;
volatile int32_t t93 = -876345;
static uint8_t x6857 = 0U;
volatile uint32_t x6997 = 21U;
int8_t x7121 = INT8_MIN;
int16_t x7122 = -1;
static uint8_t x7124 = 1U;
int8_t x7126 = INT8_MIN;
uint8_t x7154 = 0U;
static int32_t t99 = 4631;
static int16_t x7269 = -1;
uint64_t x7271 = 7651484758801992LLU;
int8_t x7382 = -1;
int32_t t104 = 54;
volatile int8_t x7601 = INT8_MIN;
uint8_t x7604 = 2U;
uint8_t x7664 = 0U;
int32_t x7677 = -1;
volatile int32_t t107 = -8486183;
int8_t x7740 = 1;
int64_t x7858 = INT64_MIN;
uint8_t x7860 = 6U;
int32_t t109 = 36;


void f0(void) {
    	uint64_t x17 = 7331698LLU;
	volatile uint16_t x18 = 122U;
	int32_t t0 = -88;

    t0 = (x17<=(x18/(x19>>x20)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x41 = INT32_MIN;
	int16_t x42 = 12936;
	uint16_t x43 = UINT16_MAX;
	uint16_t x44 = 7U;

    t1 = (x41<=(x42/(x43>>x44)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x113 = 13U;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MAX;
	volatile uint8_t x116 = 12U;

    t2 = (x113<=(x114/(x115>>x116)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x173 = INT32_MAX;
	volatile int16_t x174 = INT16_MAX;
	uint32_t x175 = 267U;
	static uint16_t x176 = 4U;
	int32_t t3 = -155185;

    t3 = (x173<=(x174/(x175>>x176)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x194 = INT64_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	static int16_t x196 = 0;
	volatile int32_t t4 = -14;

    t4 = (x193<=(x194/(x195>>x196)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x197 = 156339934106663LL;
	static volatile int8_t x198 = INT8_MIN;
	uint16_t x199 = 544U;
	int32_t x200 = 4;

    t5 = (x197<=(x198/(x199>>x200)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x357 = 0U;
	uint16_t x360 = 37U;
	int32_t t6 = 185640;

    t6 = (x357<=(x358/(x359>>x360)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x393 = -129;
	volatile int16_t x394 = -119;
	volatile uint16_t x395 = 30304U;
	uint16_t x396 = 11U;
	int32_t t7 = -1575914;

    t7 = (x393<=(x394/(x395>>x396)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x441 = 179349447396926LLU;
	uint8_t x442 = 39U;
	uint8_t x444 = 10U;
	static volatile int32_t t8 = -13441790;

    t8 = (x441<=(x442/(x443>>x444)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x449 = INT16_MAX;
	uint32_t x451 = 125474096U;
	static int32_t t9 = 2;

    t9 = (x449<=(x450/(x451>>x452)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x525 = INT64_MIN;
	static uint64_t x526 = 6696634008560211LLU;
	volatile int8_t x527 = INT8_MAX;
	volatile int8_t x528 = 1;
	int32_t t10 = -315199609;

    t10 = (x525<=(x526/(x527>>x528)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x802 = 90928U;
	int64_t x803 = INT64_MAX;
	uint8_t x804 = 2U;
	int32_t t11 = -868445;

    t11 = (x801<=(x802/(x803>>x804)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x882 = INT8_MIN;
	uint64_t x883 = UINT64_MAX;
	static volatile int32_t t12 = -51904;

    t12 = (x881<=(x882/(x883>>x884)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x901 = -1;
	static int64_t x903 = 523955294624945LL;
	int8_t x904 = 2;
	int32_t t13 = -203;

    t13 = (x901<=(x902/(x903>>x904)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1153 = -1;
	int8_t x1154 = INT8_MAX;
	volatile uint16_t x1155 = UINT16_MAX;
	static uint8_t x1156 = 5U;

    t14 = (x1153<=(x1154/(x1155>>x1156)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1337 = INT64_MIN;
	volatile uint16_t x1338 = 1U;
	int16_t x1339 = INT16_MAX;
	static uint8_t x1340 = 4U;

    t15 = (x1337<=(x1338/(x1339>>x1340)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1393 = INT8_MAX;
	volatile uint32_t x1394 = 23400367U;
	static volatile uint32_t x1396 = 22U;
	int32_t t16 = 2785897;

    t16 = (x1393<=(x1394/(x1395>>x1396)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x1710 = -53;
	uint64_t x1711 = 182411948LLU;
	uint32_t x1712 = 0U;
	volatile int32_t t17 = 16611731;

    t17 = (x1709<=(x1710/(x1711>>x1712)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x1809 = INT8_MAX;
	static int16_t x1810 = INT16_MIN;
	uint32_t x1811 = UINT32_MAX;
	int8_t x1812 = 3;

    t18 = (x1809<=(x1810/(x1811>>x1812)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1925 = UINT16_MAX;
	volatile int64_t x1926 = INT64_MIN;
	static volatile int8_t x1927 = INT8_MAX;
	static int32_t t19 = 1;

    t19 = (x1925<=(x1926/(x1927>>x1928)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1998 = INT64_MAX;
	volatile uint64_t x1999 = UINT64_MAX;
	volatile uint16_t x2000 = 14U;
	volatile int32_t t20 = -28476074;

    t20 = (x1997<=(x1998/(x1999>>x2000)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x2037 = UINT64_MAX;
	int64_t x2038 = INT64_MIN;
	uint32_t x2039 = UINT32_MAX;
	static uint16_t x2040 = 16U;
	int32_t t21 = 10817377;

    t21 = (x2037<=(x2038/(x2039>>x2040)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x2093 = -1;
	int32_t x2094 = INT32_MIN;
	volatile uint8_t x2096 = 14U;

    t22 = (x2093<=(x2094/(x2095>>x2096)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x2101 = -57;
	volatile uint64_t x2102 = UINT64_MAX;
	uint32_t x2103 = 2172928U;
	uint16_t x2104 = 0U;
	volatile int32_t t23 = 670496;

    t23 = (x2101<=(x2102/(x2103>>x2104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x2345 = INT32_MAX;
	static volatile int16_t x2346 = -2;
	uint8_t x2347 = UINT8_MAX;
	int32_t t24 = 10;

    t24 = (x2345<=(x2346/(x2347>>x2348)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2405 = 12713272214LLU;
	int8_t x2406 = 19;
	uint16_t x2407 = UINT16_MAX;
	uint8_t x2408 = 5U;

    t25 = (x2405<=(x2406/(x2407>>x2408)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x2413 = 1;
	static uint8_t x2414 = UINT8_MAX;
	static volatile uint8_t x2415 = 77U;
	uint8_t x2416 = 1U;
	volatile int32_t t26 = -850;

    t26 = (x2413<=(x2414/(x2415>>x2416)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2441 = 4;
	int32_t x2442 = -82;
	uint32_t x2443 = 8939857U;
	volatile int32_t t27 = 5779;

    t27 = (x2441<=(x2442/(x2443>>x2444)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x2470 = INT16_MAX;
	volatile uint16_t x2471 = 29U;
	static int8_t x2472 = 3;
	volatile int32_t t28 = -6273540;

    t28 = (x2469<=(x2470/(x2471>>x2472)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2473 = UINT8_MAX;
	volatile int16_t x2474 = INT16_MIN;
	uint32_t x2476 = 32U;

    t29 = (x2473<=(x2474/(x2475>>x2476)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x2478 = INT32_MIN;
	volatile int32_t t30 = 172912;

    t30 = (x2477<=(x2478/(x2479>>x2480)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x2551 = 111154U;
	volatile uint16_t x2552 = 11U;
	volatile int32_t t31 = -1301;

    t31 = (x2549<=(x2550/(x2551>>x2552)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x2569 = 0;
	static volatile uint32_t x2570 = 992513U;
	int64_t x2571 = INT64_MAX;
	uint8_t x2572 = 29U;

    t32 = (x2569<=(x2570/(x2571>>x2572)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x2573 = 62308126728803LLU;
	static uint16_t x2574 = 138U;
	volatile uint64_t x2575 = UINT64_MAX;
	uint8_t x2576 = 2U;
	int32_t t33 = -250604221;

    t33 = (x2573<=(x2574/(x2575>>x2576)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x2585 = -489;
	uint8_t x2586 = 16U;
	uint32_t x2587 = UINT32_MAX;
	static uint8_t x2588 = 4U;
	static volatile int32_t t34 = 16644751;

    t34 = (x2585<=(x2586/(x2587>>x2588)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x2669 = INT8_MAX;
	int16_t x2670 = 4264;
	uint16_t x2671 = 825U;
	uint8_t x2672 = 0U;

    t35 = (x2669<=(x2670/(x2671>>x2672)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2729 = INT8_MAX;
	uint64_t x2730 = 6321307583LLU;
	uint8_t x2732 = 3U;
	int32_t t36 = 12;

    t36 = (x2729<=(x2730/(x2731>>x2732)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x2749 = -2010;
	static volatile int16_t x2750 = 3;
	uint16_t x2752 = 1U;

    t37 = (x2749<=(x2750/(x2751>>x2752)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x2757 = -1LL;
	int8_t x2758 = INT8_MAX;
	static uint64_t x2759 = 42778850883LLU;
	volatile uint8_t x2760 = 4U;
	int32_t t38 = -3366993;

    t38 = (x2757<=(x2758/(x2759>>x2760)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2821 = 26;
	static volatile uint16_t x2823 = UINT16_MAX;
	uint8_t x2824 = 14U;
	int32_t t39 = 12;

    t39 = (x2821<=(x2822/(x2823>>x2824)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2917 = 1084U;
	int64_t x2918 = INT64_MIN;
	uint32_t x2919 = 117U;
	volatile uint32_t x2920 = 1U;
	volatile int32_t t40 = -106719830;

    t40 = (x2917<=(x2918/(x2919>>x2920)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x2969 = INT64_MIN;
	uint64_t x2970 = 13641LLU;
	uint64_t x2972 = 1LLU;
	int32_t t41 = 30408175;

    t41 = (x2969<=(x2970/(x2971>>x2972)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x2997 = 157;
	uint8_t x3000 = 0U;
	static volatile int32_t t42 = 0;

    t42 = (x2997<=(x2998/(x2999>>x3000)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x3062 = -56201729;
	uint64_t x3063 = UINT64_MAX;
	static volatile int16_t x3064 = 19;
	int32_t t43 = -2;

    t43 = (x3061<=(x3062/(x3063>>x3064)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x3145 = UINT64_MAX;
	int16_t x3146 = 0;
	static volatile uint64_t x3147 = 95454LLU;
	volatile int8_t x3148 = 3;
	static volatile int32_t t44 = 0;

    t44 = (x3145<=(x3146/(x3147>>x3148)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x3181 = INT8_MIN;
	volatile uint64_t x3183 = UINT64_MAX;
	static volatile uint8_t x3184 = 1U;
	volatile int32_t t45 = -291;

    t45 = (x3181<=(x3182/(x3183>>x3184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x3205 = -13;
	int32_t x3206 = -1;
	uint8_t x3208 = 0U;
	int32_t t46 = 0;

    t46 = (x3205<=(x3206/(x3207>>x3208)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3277 = -117;
	volatile int8_t x3278 = INT8_MAX;
	int8_t x3279 = 31;
	int8_t x3280 = 0;
	volatile int32_t t47 = 11;

    t47 = (x3277<=(x3278/(x3279>>x3280)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x3333 = UINT64_MAX;
	static uint8_t x3334 = 3U;
	static int32_t t48 = 129108;

    t48 = (x3333<=(x3334/(x3335>>x3336)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x3369 = 49U;
	uint8_t x3370 = 61U;
	int64_t x3371 = INT64_MAX;
	volatile uint8_t x3372 = 31U;
	volatile int32_t t49 = 26;

    t49 = (x3369<=(x3370/(x3371>>x3372)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x3437 = 116U;
	static int64_t x3438 = 173391297189344659LL;
	static int64_t x3439 = 17459139784109LL;
	volatile uint8_t x3440 = 1U;
	int32_t t50 = -480895;

    t50 = (x3437<=(x3438/(x3439>>x3440)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x3441 = UINT16_MAX;
	volatile int32_t x3442 = INT32_MIN;
	static int32_t t51 = 351620479;

    t51 = (x3441<=(x3442/(x3443>>x3444)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x3461 = 49;
	int64_t x3462 = INT64_MIN;
	static int32_t x3463 = 14038;
	static int8_t x3464 = 4;
	volatile int32_t t52 = 3919;

    t52 = (x3461<=(x3462/(x3463>>x3464)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3541 = 26423595LLU;
	static int8_t x3542 = INT8_MIN;
	static uint8_t x3544 = 0U;

    t53 = (x3541<=(x3542/(x3543>>x3544)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3673 = INT8_MIN;
	int16_t x3674 = INT16_MAX;
	static uint8_t x3675 = 15U;
	static int16_t x3676 = 0;
	static volatile int32_t t54 = 1443;

    t54 = (x3673<=(x3674/(x3675>>x3676)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3709 = INT32_MIN;
	int64_t x3711 = 3403047641305708953LL;
	uint8_t x3712 = 10U;
	static int32_t t55 = -1;

    t55 = (x3709<=(x3710/(x3711>>x3712)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x4002 = 51;
	int16_t x4003 = INT16_MAX;

    t56 = (x4001<=(x4002/(x4003>>x4004)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x4009 = -22624LL;
	uint8_t x4010 = 8U;
	uint8_t x4011 = UINT8_MAX;
	uint64_t x4012 = 0LLU;
	volatile int32_t t57 = 44966;

    t57 = (x4009<=(x4010/(x4011>>x4012)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x4053 = 328017851487366998LL;
	uint8_t x4054 = 6U;
	static uint16_t x4055 = UINT16_MAX;
	volatile uint16_t x4056 = 3U;

    t58 = (x4053<=(x4054/(x4055>>x4056)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x4066 = 3052U;
	volatile int64_t x4067 = 93896931LL;
	static int16_t x4068 = 2;
	int32_t t59 = -12;

    t59 = (x4065<=(x4066/(x4067>>x4068)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x4077 = -1LL;
	uint16_t x4078 = 4906U;
	int16_t x4080 = 0;
	int32_t t60 = -19;

    t60 = (x4077<=(x4078/(x4079>>x4080)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x4177 = INT64_MIN;
	uint8_t x4179 = 5U;
	static uint8_t x4180 = 0U;
	int32_t t61 = 588;

    t61 = (x4177<=(x4178/(x4179>>x4180)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x4205 = UINT16_MAX;
	int32_t x4206 = 60;
	int32_t x4208 = 3;
	volatile int32_t t62 = -1701;

    t62 = (x4205<=(x4206/(x4207>>x4208)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x4233 = 51U;
	int16_t x4234 = -1350;
	volatile uint8_t x4236 = 20U;

    t63 = (x4233<=(x4234/(x4235>>x4236)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x4377 = INT8_MIN;
	volatile int32_t t64 = -1;

    t64 = (x4377<=(x4378/(x4379>>x4380)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x4393 = 157U;
	int32_t x4394 = 13860;
	static int8_t x4395 = INT8_MAX;
	volatile int32_t t65 = -827;

    t65 = (x4393<=(x4394/(x4395>>x4396)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x4514 = INT16_MIN;
	volatile uint16_t x4515 = UINT16_MAX;
	volatile int16_t x4516 = 6;
	volatile int32_t t66 = 17837;

    t66 = (x4513<=(x4514/(x4515>>x4516)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x4530 = 126295502884371LLU;
	uint64_t x4531 = UINT64_MAX;
	volatile int16_t x4532 = 1;
	int32_t t67 = -29877;

    t67 = (x4529<=(x4530/(x4531>>x4532)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x4757 = INT8_MAX;
	static uint32_t x4758 = UINT32_MAX;
	uint16_t x4760 = 23U;
	int32_t t68 = 17910227;

    t68 = (x4757<=(x4758/(x4759>>x4760)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x4842 = 33231889898948LLU;
	uint16_t x4843 = 3850U;
	volatile int32_t t69 = 352061000;

    t69 = (x4841<=(x4842/(x4843>>x4844)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x4878 = INT8_MIN;
	int64_t x4879 = INT64_MAX;
	uint8_t x4880 = 0U;
	int32_t t70 = 150;

    t70 = (x4877<=(x4878/(x4879>>x4880)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x4907 = 4169522664LL;
	uint8_t x4908 = 1U;
	int32_t t71 = -5697;

    t71 = (x4905<=(x4906/(x4907>>x4908)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x4913 = -27639849478LL;
	uint64_t x4915 = 43132556LLU;
	uint64_t x4916 = 1LLU;
	int32_t t72 = 3521543;

    t72 = (x4913<=(x4914/(x4915>>x4916)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x5021 = UINT8_MAX;
	int8_t x5022 = -1;
	static volatile uint8_t x5023 = UINT8_MAX;

    t73 = (x5021<=(x5022/(x5023>>x5024)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x5106 = INT64_MIN;
	int8_t x5108 = 0;
	int32_t t74 = 727264415;

    t74 = (x5105<=(x5106/(x5107>>x5108)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x5133 = UINT16_MAX;
	volatile int16_t x5134 = INT16_MIN;
	static int32_t t75 = -116473;

    t75 = (x5133<=(x5134/(x5135>>x5136)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x5173 = INT64_MAX;
	static uint8_t x5174 = UINT8_MAX;
	uint16_t x5175 = 116U;
	static uint32_t x5176 = 3U;
	volatile int32_t t76 = 9;

    t76 = (x5173<=(x5174/(x5175>>x5176)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x5217 = 49766466696227LLU;
	int16_t x5218 = 2135;
	uint8_t x5220 = 4U;
	int32_t t77 = 28786737;

    t77 = (x5217<=(x5218/(x5219>>x5220)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x5241 = INT8_MIN;
	static int8_t x5242 = 1;
	uint16_t x5243 = 62U;
	int32_t t78 = -7;

    t78 = (x5241<=(x5242/(x5243>>x5244)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x5329 = UINT64_MAX;
	volatile int8_t x5330 = -1;
	static volatile uint32_t x5331 = UINT32_MAX;
	int32_t t79 = 7373;

    t79 = (x5329<=(x5330/(x5331>>x5332)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x5401 = -30;
	static int64_t x5403 = 11662148454LL;
	uint8_t x5404 = 0U;
	volatile int32_t t80 = -10;

    t80 = (x5401<=(x5402/(x5403>>x5404)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x5517 = INT64_MAX;
	int64_t x5518 = INT64_MAX;
	uint32_t x5519 = UINT32_MAX;
	int8_t x5520 = 1;
	volatile int32_t t81 = -342595065;

    t81 = (x5517<=(x5518/(x5519>>x5520)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x5670 = UINT8_MAX;
	int32_t x5671 = 8138;
	uint16_t x5672 = 2U;
	int32_t t82 = 67168;

    t82 = (x5669<=(x5670/(x5671>>x5672)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x5685 = -1;
	static volatile uint32_t x5687 = UINT32_MAX;
	int8_t x5688 = 7;
	volatile int32_t t83 = -12121;

    t83 = (x5685<=(x5686/(x5687>>x5688)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x5725 = 5426U;
	int64_t x5726 = -1LL;
	volatile uint32_t x5727 = 1018471660U;
	int16_t x5728 = 2;
	volatile int32_t t84 = -52510032;

    t84 = (x5725<=(x5726/(x5727>>x5728)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x5741 = INT16_MIN;
	volatile int8_t x5742 = 5;
	static uint32_t x5743 = 1354183U;
	int8_t x5744 = 1;

    t85 = (x5741<=(x5742/(x5743>>x5744)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x5910 = -3475181;
	static volatile int16_t x5911 = INT16_MAX;
	int32_t t86 = 185157063;

    t86 = (x5909<=(x5910/(x5911>>x5912)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x6041 = 35U;
	int8_t x6042 = 46;
	uint32_t x6043 = UINT32_MAX;
	volatile int8_t x6044 = 28;
	int32_t t87 = -418780;

    t87 = (x6041<=(x6042/(x6043>>x6044)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x6069 = -1;
	int64_t x6070 = INT64_MIN;
	uint32_t x6071 = 103194143U;
	int32_t x6072 = 23;
	volatile int32_t t88 = -4;

    t88 = (x6069<=(x6070/(x6071>>x6072)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x6119 = 255U;
	static volatile uint8_t x6120 = 1U;
	int32_t t89 = -4375577;

    t89 = (x6117<=(x6118/(x6119>>x6120)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x6209 = 46893058305LL;
	volatile uint32_t x6211 = 3U;
	uint8_t x6212 = 1U;
	int32_t t90 = 994469;

    t90 = (x6209<=(x6210/(x6211>>x6212)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x6441 = INT32_MAX;
	uint64_t x6442 = 420239LLU;
	int64_t x6443 = 2337LL;
	int8_t x6444 = 6;
	int32_t t91 = -170;

    t91 = (x6441<=(x6442/(x6443>>x6444)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x6469 = INT16_MAX;
	uint8_t x6472 = 4U;

    t92 = (x6469<=(x6470/(x6471>>x6472)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x6561 = UINT32_MAX;
	int32_t x6562 = INT32_MIN;
	static volatile int64_t x6563 = INT64_MAX;
	int8_t x6564 = 21;

    t93 = (x6561<=(x6562/(x6563>>x6564)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x6858 = -3;
	uint16_t x6859 = UINT16_MAX;
	uint16_t x6860 = 7U;
	volatile int32_t t94 = 571;

    t94 = (x6857<=(x6858/(x6859>>x6860)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x6973 = 131;
	volatile int8_t x6974 = -17;
	int8_t x6975 = INT8_MAX;
	static uint32_t x6976 = 3U;
	int32_t t95 = 0;

    t95 = (x6973<=(x6974/(x6975>>x6976)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x6998 = INT64_MAX;
	static uint32_t x6999 = UINT32_MAX;
	uint8_t x7000 = 12U;
	volatile int32_t t96 = 464;

    t96 = (x6997<=(x6998/(x6999>>x7000)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x7123 = 15U;
	int32_t t97 = -24;

    t97 = (x7121<=(x7122/(x7123>>x7124)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x7125 = 60;
	volatile int64_t x7127 = INT64_MAX;
	volatile uint32_t x7128 = 3U;
	int32_t t98 = -769;

    t98 = (x7125<=(x7126/(x7127>>x7128)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x7153 = 40U;
	int64_t x7155 = INT64_MAX;
	volatile uint64_t x7156 = 22LLU;

    t99 = (x7153<=(x7154/(x7155>>x7156)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x7257 = -1;
	static int32_t x7258 = 530734697;
	uint16_t x7259 = UINT16_MAX;
	int8_t x7260 = 3;
	static volatile int32_t t100 = -4117;

    t100 = (x7257<=(x7258/(x7259>>x7260)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x7270 = 4312;
	static volatile uint16_t x7272 = 7U;
	volatile int32_t t101 = -118793027;

    t101 = (x7269<=(x7270/(x7271>>x7272)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x7329 = INT32_MIN;
	volatile int16_t x7330 = 58;
	volatile uint16_t x7331 = UINT16_MAX;
	int8_t x7332 = 9;
	volatile int32_t t102 = -14;

    t102 = (x7329<=(x7330/(x7331>>x7332)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x7381 = -1;
	int16_t x7383 = 3;
	static volatile int32_t x7384 = 1;
	volatile int32_t t103 = 51881894;

    t103 = (x7381<=(x7382/(x7383>>x7384)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x7445 = INT64_MIN;
	uint32_t x7446 = UINT32_MAX;
	uint64_t x7447 = 355751737553271668LLU;
	static volatile uint8_t x7448 = 11U;

    t104 = (x7445<=(x7446/(x7447>>x7448)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x7602 = INT16_MIN;
	uint8_t x7603 = UINT8_MAX;
	volatile int32_t t105 = -136016139;

    t105 = (x7601<=(x7602/(x7603>>x7604)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x7661 = -1;
	static int64_t x7662 = 16298417742LL;
	uint16_t x7663 = 561U;
	volatile int32_t t106 = 0;

    t106 = (x7661<=(x7662/(x7663>>x7664)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x7678 = INT64_MAX;
	uint64_t x7679 = 170050157554532842LLU;
	static int8_t x7680 = 15;

    t107 = (x7677<=(x7678/(x7679>>x7680)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x7737 = -43664;
	int32_t x7738 = -21069948;
	static int64_t x7739 = 11575290LL;
	int32_t t108 = -60631013;

    t108 = (x7737<=(x7738/(x7739>>x7740)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x7857 = -1071959849171LL;
	uint32_t x7859 = 1568888U;

    t109 = (x7857<=(x7858/(x7859>>x7860)));

    if (t109 != 0) { NG(); } else { ; }
	
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


    return 0;
}

