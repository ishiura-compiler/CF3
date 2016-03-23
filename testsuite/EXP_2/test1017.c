
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

uint16_t x118 = 9745U;
uint64_t x119 = 3LLU;
int8_t x348 = INT8_MIN;
static volatile int32_t t3 = 1565;
volatile int8_t x365 = INT8_MIN;
int16_t x457 = INT16_MIN;
volatile uint8_t x459 = 6U;
int32_t x460 = INT32_MAX;
int32_t x621 = -1;
int8_t x623 = 4;
volatile int32_t t8 = 0;
int16_t x679 = 10;
uint8_t x681 = 11U;
int32_t x697 = INT32_MIN;
uint32_t x699 = 16U;
int8_t x707 = 0;
int32_t x713 = -1;
int16_t x715 = 3;
uint16_t x829 = 25U;
uint16_t x831 = 13U;
static int16_t x910 = 0;
static uint16_t x911 = 0U;
volatile int32_t t17 = -29568;
volatile int32_t t18 = 8819;
int8_t x1161 = -1;
uint8_t x1163 = 11U;
int16_t x1192 = 117;
static volatile uint8_t x1954 = 0U;
uint32_t x2054 = UINT32_MAX;
volatile uint32_t x2214 = 10737U;
uint32_t x2521 = 7934U;
uint8_t x2648 = UINT8_MAX;
int16_t x2670 = 102;
static int16_t x2746 = 6;
uint32_t x2990 = 298U;
int32_t t43 = -165980242;
int64_t x3136 = -422LL;
int32_t t44 = 284765962;
uint8_t x3143 = 12U;
int8_t x3144 = INT8_MIN;
uint64_t x3198 = 837LLU;
static volatile int32_t x3199 = 0;
static int8_t x3277 = INT8_MIN;
uint8_t x3279 = 3U;
volatile int32_t x3280 = 32135512;
uint8_t x3447 = 0U;
volatile int32_t t53 = -321568;
int8_t x3838 = INT8_MAX;
uint16_t x3839 = 9U;
int32_t x3840 = INT32_MIN;
volatile int16_t x3868 = -1;
int8_t x4009 = INT8_MAX;
uint8_t x4091 = 9U;
static int32_t t59 = 4213659;
volatile uint8_t x4137 = 11U;
static uint32_t x4138 = UINT32_MAX;
int16_t x4197 = INT16_MIN;
uint64_t x4200 = 2894490654LLU;
volatile int32_t x4310 = 333866;
volatile int32_t t62 = -5812192;
int8_t x4498 = 0;
uint8_t x4499 = 0U;
volatile int8_t x4625 = INT8_MAX;
volatile uint64_t x4685 = 51612932829LLU;
static int8_t x4699 = 12;
uint8_t x4739 = 6U;
volatile int32_t x4746 = 1;
int32_t x4748 = INT32_MAX;
int8_t x4841 = INT8_MIN;
int32_t t71 = 20129;
int32_t x4987 = 9;
int32_t x4998 = 42;
static volatile int16_t x5023 = 1;
int32_t x5093 = 74435;
static uint16_t x5095 = 5U;
volatile int64_t x5096 = 260911414715432LL;
static volatile uint8_t x5235 = 1U;
static volatile int8_t x5236 = 6;
int16_t x5285 = INT16_MIN;
uint8_t x5288 = UINT8_MAX;


void f0(void) {
    	uint8_t x1 = 10U;
	int16_t x2 = INT16_MAX;
	int8_t x3 = 1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 0;

    t0 = ((x1*(x2<<x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x113 = 662;
	uint8_t x114 = 100U;
	int32_t x115 = 3;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t1 = 1793;

    t1 = ((x113*(x114<<x115))>x116);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t2 = 39;

    t2 = ((x117*(x118<<x119))>x120);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x345 = -609798LL;
	int32_t x346 = INT32_MAX;
	volatile int64_t x347 = 0LL;

    t3 = ((x345*(x346<<x347))>x348);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x366 = 2585LL;
	int16_t x367 = 29;
	int16_t x368 = INT16_MIN;
	volatile int32_t t4 = 1398192;

    t4 = ((x365*(x366<<x367))>x368);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x458 = 15;
	static int32_t t5 = 0;

    t5 = ((x457*(x458<<x459))>x460);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x469 = 0;
	volatile uint8_t x470 = UINT8_MAX;
	static uint64_t x471 = 2LLU;
	uint32_t x472 = 32U;
	volatile int32_t t6 = 118320536;

    t6 = ((x469*(x470<<x471))>x472);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x481 = INT32_MAX;
	volatile uint32_t x482 = 63318417U;
	int16_t x483 = 2;
	int64_t x484 = INT64_MAX;
	int32_t t7 = -46;

    t7 = ((x481*(x482<<x483))>x484);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x622 = 13;
	static int64_t x624 = 51369LL;

    t8 = ((x621*(x622<<x623))>x624);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x633 = INT8_MAX;
	int8_t x634 = INT8_MAX;
	int16_t x635 = 12;
	volatile int8_t x636 = 2;
	volatile int32_t t9 = -2961631;

    t9 = ((x633*(x634<<x635))>x636);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x677 = 11137U;
	uint32_t x678 = 452320U;
	uint16_t x680 = 53U;
	int32_t t10 = 105;

    t10 = ((x677*(x678<<x679))>x680);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x682 = 6499U;
	uint8_t x683 = 0U;
	int32_t x684 = 33748;
	int32_t t11 = 5517871;

    t11 = ((x681*(x682<<x683))>x684);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x698 = 19LLU;
	uint16_t x700 = UINT16_MAX;
	static volatile int32_t t12 = 15;

    t12 = ((x697*(x698<<x699))>x700);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x706 = UINT8_MAX;
	uint32_t x708 = 1764U;
	int32_t t13 = 1862;

    t13 = ((x705*(x706<<x707))>x708);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x714 = INT16_MAX;
	uint32_t x716 = 2901244U;
	int32_t t14 = -181349;

    t14 = ((x713*(x714<<x715))>x716);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x830 = 0LL;
	static uint8_t x832 = UINT8_MAX;
	int32_t t15 = 474;

    t15 = ((x829*(x830<<x831))>x832);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x909 = UINT64_MAX;
	volatile int16_t x912 = INT16_MAX;
	volatile int32_t t16 = 97;

    t16 = ((x909*(x910<<x911))>x912);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x913 = INT64_MIN;
	volatile int8_t x914 = 0;
	uint8_t x915 = 23U;
	int32_t x916 = INT32_MIN;

    t17 = ((x913*(x914<<x915))>x916);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x969 = UINT8_MAX;
	uint16_t x970 = UINT16_MAX;
	volatile int16_t x971 = 3;
	int64_t x972 = INT64_MIN;

    t18 = ((x969*(x970<<x971))>x972);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x1149 = 24950323U;
	static uint64_t x1150 = 6644009012836360LLU;
	static int32_t x1151 = 2;
	int16_t x1152 = INT16_MIN;
	int32_t t19 = -1;

    t19 = ((x1149*(x1150<<x1151))>x1152);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x1162 = UINT16_MAX;
	int64_t x1164 = -1LL;
	volatile int32_t t20 = -3;

    t20 = ((x1161*(x1162<<x1163))>x1164);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1189 = 18LLU;
	volatile uint8_t x1190 = 2U;
	uint8_t x1191 = 1U;
	static volatile int32_t t21 = -308;

    t21 = ((x1189*(x1190<<x1191))>x1192);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1297 = -2;
	uint32_t x1298 = UINT32_MAX;
	int8_t x1299 = 19;
	uint32_t x1300 = 1509671U;
	static volatile int32_t t22 = 21068513;

    t22 = ((x1297*(x1298<<x1299))>x1300);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x1377 = 952654250044283LLU;
	uint8_t x1378 = 2U;
	int32_t x1379 = 8;
	static int8_t x1380 = -1;
	static volatile int32_t t23 = 28942;

    t23 = ((x1377*(x1378<<x1379))>x1380);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1437 = 1;
	uint8_t x1438 = 0U;
	uint8_t x1439 = 7U;
	static int64_t x1440 = INT64_MIN;
	volatile int32_t t24 = -508;

    t24 = ((x1437*(x1438<<x1439))>x1440);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1673 = INT32_MIN;
	volatile uint32_t x1674 = UINT32_MAX;
	volatile int16_t x1675 = 1;
	int16_t x1676 = -1;
	static volatile int32_t t25 = -128;

    t25 = ((x1673*(x1674<<x1675))>x1676);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x1785 = 5U;
	uint8_t x1786 = UINT8_MAX;
	uint8_t x1787 = 14U;
	int64_t x1788 = -331170491028374LL;
	int32_t t26 = -714;

    t26 = ((x1785*(x1786<<x1787))>x1788);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1917 = UINT16_MAX;
	uint16_t x1918 = 8U;
	int8_t x1919 = 0;
	int32_t x1920 = -1664941;
	int32_t t27 = 22113;

    t27 = ((x1917*(x1918<<x1919))>x1920);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1921 = -1;
	uint64_t x1922 = UINT64_MAX;
	uint8_t x1923 = 58U;
	int8_t x1924 = 3;
	volatile int32_t t28 = 1;

    t28 = ((x1921*(x1922<<x1923))>x1924);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1953 = -2;
	int8_t x1955 = 0;
	int8_t x1956 = INT8_MIN;
	int32_t t29 = -10;

    t29 = ((x1953*(x1954<<x1955))>x1956);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x2053 = INT32_MAX;
	uint16_t x2055 = 6U;
	uint32_t x2056 = 54687U;
	static int32_t t30 = -18;

    t30 = ((x2053*(x2054<<x2055))>x2056);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x2073 = UINT32_MAX;
	int8_t x2074 = 31;
	volatile uint16_t x2075 = 1U;
	int32_t x2076 = -1;
	static volatile int32_t t31 = -1850257;

    t31 = ((x2073*(x2074<<x2075))>x2076);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x2213 = -1;
	static uint32_t x2215 = 9U;
	static int16_t x2216 = INT16_MAX;
	volatile int32_t t32 = -348545;

    t32 = ((x2213*(x2214<<x2215))>x2216);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x2522 = UINT32_MAX;
	uint32_t x2523 = 30U;
	uint32_t x2524 = 45341520U;
	int32_t t33 = 18744;

    t33 = ((x2521*(x2522<<x2523))>x2524);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2553 = INT16_MIN;
	uint16_t x2554 = 1654U;
	uint8_t x2555 = 0U;
	static int64_t x2556 = INT64_MAX;
	static volatile int32_t t34 = 897455;

    t34 = ((x2553*(x2554<<x2555))>x2556);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x2645 = -93;
	static uint16_t x2646 = 23U;
	uint8_t x2647 = 9U;
	volatile int32_t t35 = -546279579;

    t35 = ((x2645*(x2646<<x2647))>x2648);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2669 = INT16_MIN;
	int16_t x2671 = 1;
	int64_t x2672 = -1LL;
	int32_t t36 = -38493279;

    t36 = ((x2669*(x2670<<x2671))>x2672);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2677 = 986798803LL;
	uint16_t x2678 = 1937U;
	static uint8_t x2679 = 2U;
	uint32_t x2680 = 1U;
	int32_t t37 = -600010;

    t37 = ((x2677*(x2678<<x2679))>x2680);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2745 = -1;
	uint16_t x2747 = 22U;
	int32_t x2748 = INT32_MAX;
	static int32_t t38 = -6977;

    t38 = ((x2745*(x2746<<x2747))>x2748);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2761 = 133272;
	uint64_t x2762 = 24345LLU;
	static uint16_t x2763 = 60U;
	int16_t x2764 = -1;
	static int32_t t39 = -5;

    t39 = ((x2761*(x2762<<x2763))>x2764);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2877 = 912681409028LLU;
	static uint16_t x2878 = 1847U;
	uint8_t x2879 = 16U;
	volatile int32_t x2880 = INT32_MIN;
	int32_t t40 = 469;

    t40 = ((x2877*(x2878<<x2879))>x2880);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2901 = INT16_MIN;
	uint64_t x2902 = 44513037LLU;
	uint16_t x2903 = 28U;
	uint8_t x2904 = 0U;
	volatile int32_t t41 = -14992467;

    t41 = ((x2901*(x2902<<x2903))>x2904);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x2989 = INT32_MIN;
	int8_t x2991 = 22;
	static int8_t x2992 = -1;
	static volatile int32_t t42 = 3653755;

    t42 = ((x2989*(x2990<<x2991))>x2992);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x3117 = -16191;
	uint64_t x3118 = 25604300280463LLU;
	uint32_t x3119 = 21U;
	volatile int16_t x3120 = -31;

    t43 = ((x3117*(x3118<<x3119))>x3120);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x3133 = 6106U;
	volatile uint8_t x3134 = 8U;
	int8_t x3135 = 13;

    t44 = ((x3133*(x3134<<x3135))>x3136);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x3141 = -1LL;
	uint8_t x3142 = UINT8_MAX;
	int32_t t45 = -222030985;

    t45 = ((x3141*(x3142<<x3143))>x3144);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3157 = -3;
	uint32_t x3158 = UINT32_MAX;
	volatile uint8_t x3159 = 1U;
	static int8_t x3160 = INT8_MIN;
	int32_t t46 = 2032848;

    t46 = ((x3157*(x3158<<x3159))>x3160);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3165 = -1035;
	uint64_t x3166 = 32610687001557LLU;
	uint16_t x3167 = 51U;
	static int64_t x3168 = 161858588LL;
	int32_t t47 = -166351;

    t47 = ((x3165*(x3166<<x3167))>x3168);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x3197 = INT16_MIN;
	int32_t x3200 = -1;
	int32_t t48 = 6162379;

    t48 = ((x3197*(x3198<<x3199))>x3200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x3278 = INT16_MAX;
	volatile int32_t t49 = 2719;

    t49 = ((x3277*(x3278<<x3279))>x3280);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x3313 = 5;
	int8_t x3314 = 7;
	static volatile uint8_t x3315 = 7U;
	int8_t x3316 = INT8_MIN;
	int32_t t50 = 0;

    t50 = ((x3313*(x3314<<x3315))>x3316);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x3445 = 41040227U;
	volatile uint64_t x3446 = 654497LLU;
	uint32_t x3448 = 22U;
	static volatile int32_t t51 = -6030647;

    t51 = ((x3445*(x3446<<x3447))>x3448);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x3589 = INT8_MIN;
	uint64_t x3590 = UINT64_MAX;
	uint8_t x3591 = 10U;
	int32_t x3592 = -1;
	int32_t t52 = 10362603;

    t52 = ((x3589*(x3590<<x3591))>x3592);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3697 = 0LLU;
	static uint32_t x3698 = 110U;
	static uint8_t x3699 = 1U;
	static volatile int32_t x3700 = -479035;

    t53 = ((x3697*(x3698<<x3699))>x3700);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3721 = 2;
	static volatile int8_t x3722 = INT8_MAX;
	static int16_t x3723 = 21;
	int8_t x3724 = -1;
	int32_t t54 = 21287;

    t54 = ((x3721*(x3722<<x3723))>x3724);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3805 = 2876398764LL;
	uint16_t x3806 = 2066U;
	static uint8_t x3807 = 1U;
	uint64_t x3808 = UINT64_MAX;
	int32_t t55 = 3075;

    t55 = ((x3805*(x3806<<x3807))>x3808);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3837 = INT16_MAX;
	volatile int32_t t56 = 60;

    t56 = ((x3837*(x3838<<x3839))>x3840);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3865 = 3838998LLU;
	static int32_t x3866 = INT32_MAX;
	uint8_t x3867 = 0U;
	int32_t t57 = 639119;

    t57 = ((x3865*(x3866<<x3867))>x3868);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x4010 = 13881579U;
	uint16_t x4011 = 0U;
	uint64_t x4012 = 14442939LLU;
	int32_t t58 = -78283557;

    t58 = ((x4009*(x4010<<x4011))>x4012);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4089 = UINT64_MAX;
	volatile uint64_t x4090 = 1595LLU;
	int16_t x4092 = -3;

    t59 = ((x4089*(x4090<<x4091))>x4092);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x4139 = 5U;
	int16_t x4140 = -15;
	volatile int32_t t60 = 118540898;

    t60 = ((x4137*(x4138<<x4139))>x4140);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x4198 = INT16_MAX;
	int8_t x4199 = 1;
	volatile int32_t t61 = 33882;

    t61 = ((x4197*(x4198<<x4199))>x4200);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x4309 = 10182LL;
	uint16_t x4311 = 7U;
	uint16_t x4312 = 1607U;

    t62 = ((x4309*(x4310<<x4311))>x4312);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x4405 = -3936607LL;
	uint32_t x4406 = 5687U;
	int16_t x4407 = 0;
	volatile int16_t x4408 = INT16_MIN;
	volatile int32_t t63 = -2137;

    t63 = ((x4405*(x4406<<x4407))>x4408);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x4437 = 23LLU;
	int32_t x4438 = 7330886;
	static uint8_t x4439 = 0U;
	int8_t x4440 = INT8_MIN;
	static volatile int32_t t64 = 313420741;

    t64 = ((x4437*(x4438<<x4439))>x4440);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x4497 = 1435201480U;
	uint16_t x4500 = 1144U;
	volatile int32_t t65 = 506366;

    t65 = ((x4497*(x4498<<x4499))>x4500);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4626 = 7U;
	uint8_t x4627 = 0U;
	volatile uint64_t x4628 = UINT64_MAX;
	int32_t t66 = -186095973;

    t66 = ((x4625*(x4626<<x4627))>x4628);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x4686 = INT16_MAX;
	uint8_t x4687 = 1U;
	uint16_t x4688 = 124U;
	volatile int32_t t67 = -423577727;

    t67 = ((x4685*(x4686<<x4687))>x4688);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x4697 = UINT64_MAX;
	int8_t x4698 = 11;
	volatile int32_t x4700 = -5977628;
	int32_t t68 = -1;

    t68 = ((x4697*(x4698<<x4699))>x4700);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x4737 = -1;
	volatile uint8_t x4738 = 0U;
	int16_t x4740 = -42;
	int32_t t69 = 18001691;

    t69 = ((x4737*(x4738<<x4739))>x4740);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x4745 = -1;
	int8_t x4747 = 0;
	volatile int32_t t70 = 15620;

    t70 = ((x4745*(x4746<<x4747))>x4748);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x4842 = INT8_MAX;
	uint32_t x4843 = 4U;
	uint16_t x4844 = 179U;

    t71 = ((x4841*(x4842<<x4843))>x4844);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x4849 = INT32_MIN;
	int32_t x4850 = 1;
	uint8_t x4851 = 0U;
	uint16_t x4852 = 539U;
	volatile int32_t t72 = 50212273;

    t72 = ((x4849*(x4850<<x4851))>x4852);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x4981 = -1;
	static int64_t x4982 = INT64_MAX;
	int16_t x4983 = 0;
	uint8_t x4984 = 2U;
	volatile int32_t t73 = -32540;

    t73 = ((x4981*(x4982<<x4983))>x4984);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x4985 = UINT32_MAX;
	uint64_t x4986 = 97LLU;
	volatile uint32_t x4988 = 2261U;
	volatile int32_t t74 = 97;

    t74 = ((x4985*(x4986<<x4987))>x4988);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x4997 = 58536067LLU;
	uint8_t x4999 = 10U;
	int16_t x5000 = 1351;
	volatile int32_t t75 = -1;

    t75 = ((x4997*(x4998<<x4999))>x5000);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x5021 = UINT16_MAX;
	uint8_t x5022 = 5U;
	int64_t x5024 = -1LL;
	volatile int32_t t76 = 0;

    t76 = ((x5021*(x5022<<x5023))>x5024);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x5094 = UINT32_MAX;
	int32_t t77 = 26455811;

    t77 = ((x5093*(x5094<<x5095))>x5096);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x5185 = INT16_MIN;
	static volatile uint32_t x5186 = 67U;
	volatile int8_t x5187 = 4;
	int64_t x5188 = -1LL;
	int32_t t78 = -36978;

    t78 = ((x5185*(x5186<<x5187))>x5188);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x5233 = -40710;
	static uint8_t x5234 = 3U;
	int32_t t79 = -126617889;

    t79 = ((x5233*(x5234<<x5235))>x5236);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x5286 = 1;
	uint32_t x5287 = 6U;
	volatile int32_t t80 = -508;

    t80 = ((x5285*(x5286<<x5287))>x5288);

    if (t80 != 0) { NG(); } else { ; }
	
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


    return 0;
}

