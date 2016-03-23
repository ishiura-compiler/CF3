
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

static int16_t x80 = INT16_MIN;
uint32_t x161 = 0U;
static uint32_t x163 = 1U;
uint32_t x200 = 613646U;
int8_t x381 = INT8_MAX;
uint8_t x382 = 3U;
int32_t x400 = 33302463;
uint64_t x607 = 3195649576639785601LLU;
int64_t x699 = -370LL;
static uint16_t x739 = 28471U;
int16_t x740 = INT16_MIN;
uint8_t x932 = 0U;
int16_t x1160 = 7;
uint32_t t13 = 3356482U;
int32_t x1217 = INT32_MAX;
int32_t x1219 = INT32_MIN;
static uint16_t x1438 = 2U;
uint32_t x1439 = 23731626U;
volatile uint32_t t16 = 5115U;
int32_t x1522 = 0;
volatile uint64_t t19 = 52LLU;
int64_t x1593 = 1584LL;
int64_t t20 = 443798665LL;
uint8_t x1846 = 28U;
uint32_t x1847 = UINT32_MAX;
volatile uint64_t x2155 = 154101263786928LLU;
uint64_t x2377 = 5664LLU;
int64_t x2585 = INT64_MAX;
volatile uint64_t x2587 = UINT64_MAX;
int64_t x2605 = 1348008261LL;
uint8_t x2756 = 1U;
volatile int64_t t29 = 4286468321LL;
int32_t x2845 = 265;
int64_t x2935 = -1LL;
uint32_t x2936 = UINT32_MAX;
uint8_t x2949 = UINT8_MAX;
uint8_t x3021 = 91U;
int8_t x3022 = 0;
int8_t x3032 = INT8_MIN;
static int32_t x3105 = 119;
int16_t x3106 = 10;
int16_t x3107 = INT16_MIN;
static volatile int64_t x3108 = -1LL;
int64_t t35 = 51831LL;
volatile int64_t t36 = 27586588LL;
uint32_t x3137 = UINT32_MAX;
int16_t x3138 = 1;
static int8_t x3591 = 45;
volatile int32_t t45 = 243235923;
uint32_t x3965 = 45U;
static volatile int64_t x4369 = 37LL;
uint16_t x4371 = 3298U;
uint8_t x4372 = 2U;
volatile int64_t t48 = -2767604223130982644LL;
volatile uint64_t t49 = 15706510688LLU;
uint8_t x4413 = UINT8_MAX;
uint8_t x4537 = 32U;
volatile int8_t x4538 = 1;
int8_t x4539 = INT8_MIN;
static volatile int8_t x4709 = INT8_MAX;
int16_t x4736 = INT16_MIN;
static int64_t x4964 = INT64_MIN;
volatile uint8_t x4990 = 2U;
int8_t x4991 = -1;
int64_t x4992 = 18368325LL;
volatile int64_t t59 = 626364280LL;
static uint8_t x5266 = 1U;
uint16_t x5267 = 76U;
uint16_t x5268 = UINT16_MAX;
uint32_t t60 = 27U;
uint16_t x5537 = 486U;
int32_t x5538 = 1;
uint64_t t61 = 2759448388589923867LLU;
int32_t x5551 = 48;
int32_t t62 = -903226423;
uint8_t x5998 = 6U;
static int8_t x6020 = -12;
volatile uint64_t t68 = 230LLU;
uint8_t x6299 = UINT8_MAX;
int16_t x6336 = 3;
uint16_t x6558 = 54U;
uint32_t x6886 = 0U;
uint32_t x6936 = 220161546U;
static volatile uint32_t t77 = 4619U;
int64_t x7039 = 35898271966LL;
uint8_t x7067 = 3U;
static volatile int64_t x7137 = INT64_MAX;
static uint64_t x7287 = 26691365658361166LLU;
int16_t x7288 = -1;
uint64_t x7337 = 847456961044463718LLU;
static int8_t x7442 = 2;
volatile uint8_t x7502 = 6U;
static uint64_t t88 = 2573LLU;
int64_t x7696 = -1LL;
int8_t x7772 = -20;
uint16_t x7775 = 12U;
static uint8_t x7818 = 15U;
int8_t x7819 = INT8_MIN;
volatile int32_t t92 = -899585;
static int16_t x7860 = -96;
int64_t x7865 = 13062698796771LL;
volatile uint16_t x7934 = 0U;
uint64_t x8021 = UINT64_MAX;
static volatile uint64_t t98 = 1516305LLU;
static int16_t x8114 = 1;
uint32_t x8393 = 1U;
int32_t x8467 = INT32_MAX;
uint32_t t108 = 860042819U;
uint8_t x8622 = 2U;
uint8_t x8623 = 1U;
volatile uint32_t t109 = 2039U;
static volatile uint8_t x8749 = 47U;
uint32_t x8751 = 1U;
int32_t x8817 = INT32_MAX;
uint64_t t111 = 22LLU;
static int64_t x8947 = -1LL;
static int8_t x8970 = 0;
int16_t x9055 = -1;
static int32_t t116 = 35558;
uint32_t x9140 = 13883U;
volatile uint32_t t120 = 23773569U;
int16_t x9307 = INT16_MAX;
uint32_t x9379 = 589U;
static uint64_t t123 = 827LLU;
uint64_t x9453 = 632441673705556LLU;
static int8_t x9456 = -1;
static uint64_t x9671 = 742794LLU;
int8_t x9791 = INT8_MAX;
static volatile uint64_t x9856 = UINT64_MAX;
volatile uint32_t x9984 = 1549288U;
static int8_t x10290 = 0;
int32_t x10300 = -1;
static volatile uint64_t t133 = 608369883879426LLU;
uint32_t x10434 = 1U;
volatile int32_t t134 = -71273;
int16_t x10575 = -1;
int64_t x10576 = 29374LL;
uint8_t x10578 = 1U;
uint32_t x10579 = 42044278U;
static volatile uint8_t x10609 = 120U;
static int8_t x10612 = INT8_MIN;
static int32_t t137 = -30747989;
volatile uint64_t t138 = 13530785205LLU;
uint16_t x10776 = 1U;
static volatile int64_t t139 = -13804179LL;
static int8_t x10839 = INT8_MIN;
static uint64_t x10840 = UINT64_MAX;
static int8_t x11056 = -1;
uint64_t x11097 = UINT64_MAX;
uint16_t x11197 = 215U;
static uint8_t x11200 = 10U;
uint8_t x11264 = UINT8_MAX;
int8_t x11467 = 13;
volatile uint16_t x11596 = 5U;
volatile uint64_t t150 = 1998903531910143811LLU;
int64_t x11629 = INT64_MAX;
int8_t x11632 = -1;
int8_t x11666 = 1;
uint32_t x11667 = UINT32_MAX;
uint32_t t153 = 391706296U;
uint8_t x11846 = 1U;
volatile int32_t t155 = 457740;
uint16_t x12050 = 17U;
static uint64_t t158 = 360365816176LLU;
uint64_t t159 = 19LLU;
static volatile uint32_t x12260 = UINT32_MAX;
static uint16_t x12298 = 1U;
int64_t x12348 = INT64_MAX;
volatile uint16_t x12582 = 7U;
volatile uint32_t x12711 = 15548658U;
volatile int64_t x12812 = 1693323375945239283LL;
volatile uint32_t t167 = 18468468U;
static int8_t x12878 = 1;
volatile uint64_t t168 = 6425733256969LLU;
uint16_t x13123 = 264U;
static uint8_t x13124 = 31U;
uint8_t x13186 = 1U;
volatile uint16_t x13253 = 3803U;
volatile uint16_t x13256 = UINT16_MAX;
volatile int32_t t173 = -12303123;
uint16_t x13381 = 20U;
static uint32_t t175 = 5U;
uint32_t x13733 = UINT32_MAX;
static int16_t x13735 = 3;
uint32_t x13942 = 19U;
static int64_t t184 = 3746202196645776359LL;
int16_t x14022 = 1;
uint32_t t185 = 75633U;
static volatile int8_t x14055 = -20;
uint16_t x14340 = 20U;
uint32_t t189 = UINT32_MAX;
int8_t x14497 = 1;
int16_t x14498 = 10;
static uint32_t x14562 = 1U;
uint32_t x14563 = 48819245U;
volatile int8_t x14583 = -1;
int64_t x14584 = INT64_MAX;
volatile int8_t x14725 = INT8_MAX;
static uint8_t x14828 = UINT8_MAX;
static int32_t x14835 = -1;


void f0(void) {
    	volatile uint16_t x77 = 179U;
	int8_t x78 = 2;
	static uint32_t x79 = UINT32_MAX;
	static volatile uint32_t t0 = 7790U;

    t0 = ((x77>>x78)+(x79*x80));

    if (t0 != 32812U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x81 = INT64_MAX;
	static volatile uint32_t x82 = 0U;
	volatile int64_t x83 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = ((x81>>x82)+(x83*x84));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x97 = INT64_MAX;
	int64_t x98 = 2LL;
	uint32_t x99 = 22800320U;
	int8_t x100 = -1;
	static int64_t t2 = -7708900934041826LL;

    t2 = ((x97>>x98)+(x99*x100));

    if (t2 != 2305843013485860927LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x162 = 10U;
	uint16_t x164 = UINT16_MAX;
	static volatile uint32_t t3 = 825U;

    t3 = ((x161>>x162)+(x163*x164));

    if (t3 != 65535U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x197 = INT32_MAX;
	uint8_t x198 = 2U;
	static int16_t x199 = 2735;
	static uint32_t t4 = 1665524U;

    t4 = ((x197>>x198)+(x199*x200));

    if (t4 != 2215192721U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x383 = INT8_MAX;
	static int8_t x384 = INT8_MIN;
	int32_t t5 = -35538859;

    t5 = ((x381>>x382)+(x383*x384));

    if (t5 != -16241) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x397 = 661755931;
	uint32_t x398 = 13U;
	int64_t x399 = 13647663LL;
	volatile int64_t t6 = 125989265638128LL;

    t6 = ((x397>>x398)+(x399*x400));

    if (t6 != 454500792174749LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x605 = 65044LL;
	volatile uint8_t x606 = 44U;
	static volatile int32_t x608 = INT32_MAX;
	volatile uint64_t t7 = 4013LLU;

    t7 = ((x605>>x606)+(x607*x608));

    if (t7 != 13602483740872938879LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x689 = INT8_MAX;
	uint8_t x690 = 25U;
	uint32_t x691 = UINT32_MAX;
	static int32_t x692 = INT32_MAX;
	static uint32_t t8 = 448295U;

    t8 = ((x689>>x690)+(x691*x692));

    if (t8 != 2147483649U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x697 = UINT32_MAX;
	int16_t x698 = 0;
	volatile int64_t x700 = -1LL;
	int64_t t9 = 2879399193739030652LL;

    t9 = ((x697>>x698)+(x699*x700));

    if (t9 != 4294967665LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x737 = INT64_MAX;
	uint8_t x738 = 1U;
	volatile int64_t t10 = 8598505288318062LL;

    t10 = ((x737>>x738)+(x739*x740));

    if (t10 != 4611686017494450175LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x877 = UINT64_MAX;
	uint16_t x878 = 13U;
	uint32_t x879 = 24085U;
	int32_t x880 = INT32_MAX;
	volatile uint64_t t11 = 23934797795LLU;

    t11 = ((x877>>x878)+(x879*x880));

    if (t11 != 2251801961144810LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x929 = 1575;
	uint8_t x930 = 10U;
	int64_t x931 = -1LL;
	volatile int64_t t12 = -46289210956921548LL;

    t12 = ((x929>>x930)+(x931*x932));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1157 = UINT32_MAX;
	int8_t x1158 = 0;
	uint8_t x1159 = 4U;

    t13 = ((x1157>>x1158)+(x1159*x1160));

    if (t13 != 27U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1218 = 13U;
	uint64_t x1220 = UINT64_MAX;
	volatile uint64_t t14 = 1LLU;

    t14 = ((x1217>>x1218)+(x1219*x1220));

    if (t14 != 2147745791LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x1297 = 56495;
	static int16_t x1298 = 13;
	uint64_t x1299 = UINT64_MAX;
	volatile int16_t x1300 = INT16_MAX;
	static uint64_t t15 = 2840864314848690LLU;

    t15 = ((x1297>>x1298)+(x1299*x1300));

    if (t15 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1437 = UINT8_MAX;
	static uint16_t x1440 = 299U;

    t16 = ((x1437>>x1438)+(x1439*x1440));

    if (t16 != 2800788941U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1521 = 487U;
	static int8_t x1523 = INT8_MAX;
	volatile uint16_t x1524 = UINT16_MAX;
	volatile uint32_t t17 = 558494082U;

    t17 = ((x1521>>x1522)+(x1523*x1524));

    if (t17 != 8323432U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1529 = 3731959U;
	int32_t x1530 = 0;
	volatile int32_t x1531 = -1;
	uint64_t x1532 = 397454LLU;
	uint64_t t18 = 49844391060LLU;

    t18 = ((x1529>>x1530)+(x1531*x1532));

    if (t18 != 3334505LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1533 = 19874U;
	static uint32_t x1534 = 1U;
	static volatile int8_t x1535 = INT8_MIN;
	uint64_t x1536 = UINT64_MAX;

    t19 = ((x1533>>x1534)+(x1535*x1536));

    if (t19 != 10065LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1594 = 15U;
	int8_t x1595 = -19;
	int32_t x1596 = -32977676;

    t20 = ((x1593>>x1594)+(x1595*x1596));

    if (t20 != 626575844LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x1725 = UINT8_MAX;
	static uint8_t x1726 = 2U;
	volatile int32_t x1727 = -1;
	uint8_t x1728 = UINT8_MAX;
	int32_t t21 = 0;

    t21 = ((x1725>>x1726)+(x1727*x1728));

    if (t21 != -192) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1801 = 31352743LL;
	uint8_t x1802 = 9U;
	int64_t x1803 = INT64_MAX;
	static uint64_t x1804 = 14297LLU;
	volatile uint64_t t22 = 171579495382901463LLU;

    t22 = ((x1801>>x1802)+(x1803*x1804));

    if (t22 != 9223372036854822746LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x1845 = 3073308U;
	int16_t x1848 = INT16_MIN;
	static uint32_t t23 = 107U;

    t23 = ((x1845>>x1846)+(x1847*x1848));

    if (t23 != 32768U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x2153 = 3718721U;
	uint8_t x2154 = 5U;
	static uint16_t x2156 = 2750U;
	static uint64_t t24 = 1264273325LLU;

    t24 = ((x2153>>x2154)+(x2155*x2156));

    if (t24 != 423778475414168210LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x2378 = 51U;
	uint64_t x2379 = 255746660843109091LLU;
	int8_t x2380 = INT8_MIN;
	uint64_t t25 = 14411759160207048LLU;

    t25 = ((x2377>>x2378)+(x2379*x2380));

    if (t25 != 4157915559501139584LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2586 = 1U;
	static int16_t x2588 = -530;
	uint64_t t26 = 852098935664355LLU;

    t26 = ((x2585>>x2586)+(x2587*x2588));

    if (t26 != 4611686018427388433LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x2606 = 11U;
	volatile int64_t x2607 = INT64_MIN;
	uint64_t x2608 = 6635270958489LLU;
	volatile uint64_t t27 = 3581LLU;

    t27 = ((x2605>>x2606)+(x2607*x2608));

    if (t27 != 9223372036855434015LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x2625 = INT8_MAX;
	uint16_t x2626 = 0U;
	volatile int64_t x2627 = -35LL;
	int8_t x2628 = INT8_MIN;
	static volatile int64_t t28 = 41379961965725LL;

    t28 = ((x2625>>x2626)+(x2627*x2628));

    if (t28 != 4607LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x2753 = UINT16_MAX;
	uint8_t x2754 = 5U;
	int64_t x2755 = INT64_MIN;

    t29 = ((x2753>>x2754)+(x2755*x2756));

    if (t29 != -9223372036854773761LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x2846 = 20U;
	uint8_t x2847 = 96U;
	int16_t x2848 = INT16_MAX;
	volatile int32_t t30 = 70776385;

    t30 = ((x2845>>x2846)+(x2847*x2848));

    if (t30 != 3145632) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2933 = 248102667524977110LLU;
	volatile uint16_t x2934 = 55U;
	uint64_t t31 = 7LLU;

    t31 = ((x2933>>x2934)+(x2935*x2936));

    if (t31 != 18446744069414584327LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2950 = 27U;
	static volatile int8_t x2951 = -5;
	uint16_t x2952 = 1645U;
	int32_t t32 = 2;

    t32 = ((x2949>>x2950)+(x2951*x2952));

    if (t32 != -8225) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x3023 = INT8_MIN;
	int8_t x3024 = INT8_MAX;
	static volatile int32_t t33 = 9686767;

    t33 = ((x3021>>x3022)+(x3023*x3024));

    if (t33 != -16165) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x3029 = UINT8_MAX;
	volatile int8_t x3030 = 28;
	uint32_t x3031 = 492726452U;
	uint32_t t34 = 1864302U;

    t34 = ((x3029>>x3030)+(x3031*x3032));

    if (t34 != 1355523584U) { NG(); } else { ; }
	
}

void f35(void) {
    

    t35 = ((x3105>>x3106)+(x3107*x3108));

    if (t35 != 32768LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3121 = 7674LL;
	uint8_t x3122 = 1U;
	uint32_t x3123 = 10620U;
	uint32_t x3124 = 124391U;

    t36 = ((x3121>>x3122)+(x3123*x3124));

    if (t36 != 1321036257LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3139 = 310U;
	uint16_t x3140 = UINT16_MAX;
	volatile uint32_t t37 = 96681U;

    t37 = ((x3137>>x3138)+(x3139*x3140));

    if (t37 != 2167799497U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x3161 = UINT64_MAX;
	uint16_t x3162 = 1U;
	int16_t x3163 = -1;
	int8_t x3164 = INT8_MAX;
	volatile uint64_t t38 = 48624071320147309LLU;

    t38 = ((x3161>>x3162)+(x3163*x3164));

    if (t38 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x3213 = 387U;
	static uint8_t x3214 = 1U;
	int8_t x3215 = -11;
	int64_t x3216 = -1LL;
	volatile int64_t t39 = 702706239750LL;

    t39 = ((x3213>>x3214)+(x3215*x3216));

    if (t39 != 204LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x3257 = 7U;
	uint8_t x3258 = 3U;
	uint64_t x3259 = 38LLU;
	int16_t x3260 = INT16_MIN;
	volatile uint64_t t40 = 5888468585LLU;

    t40 = ((x3257>>x3258)+(x3259*x3260));

    if (t40 != 18446744073708306432LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3433 = 49867321U;
	static uint8_t x3434 = 22U;
	static int32_t x3435 = 10569;
	static uint16_t x3436 = 1U;
	uint32_t t41 = 6668U;

    t41 = ((x3433>>x3434)+(x3435*x3436));

    if (t41 != 10580U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x3589 = UINT16_MAX;
	uint32_t x3590 = 24U;
	uint8_t x3592 = 1U;
	int32_t t42 = 29;

    t42 = ((x3589>>x3590)+(x3591*x3592));

    if (t42 != 45) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x3633 = INT32_MAX;
	uint32_t x3634 = 13U;
	volatile uint32_t x3635 = UINT32_MAX;
	static volatile int8_t x3636 = -7;
	static uint32_t t43 = 781747U;

    t43 = ((x3633>>x3634)+(x3635*x3636));

    if (t43 != 262150U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3661 = 15;
	uint8_t x3662 = 0U;
	int16_t x3663 = 15711;
	static int64_t x3664 = 22622112LL;
	int64_t t44 = 212673169283026LL;

    t44 = ((x3661>>x3662)+(x3663*x3664));

    if (t44 != 355416001647LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3729 = UINT16_MAX;
	volatile uint16_t x3730 = 30U;
	volatile int16_t x3731 = INT16_MIN;
	uint16_t x3732 = 154U;

    t45 = ((x3729>>x3730)+(x3731*x3732));

    if (t45 != -5046272) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x3966 = 0U;
	int8_t x3967 = -7;
	int64_t x3968 = -1LL;
	volatile int64_t t46 = 86647803052264625LL;

    t46 = ((x3965>>x3966)+(x3967*x3968));

    if (t46 != 52LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x4149 = INT64_MAX;
	int8_t x4150 = 3;
	static volatile int8_t x4151 = 4;
	int64_t x4152 = -1LL;
	volatile int64_t t47 = -233LL;

    t47 = ((x4149>>x4150)+(x4151*x4152));

    if (t47 != 1152921504606846971LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x4370 = 27LLU;

    t48 = ((x4369>>x4370)+(x4371*x4372));

    if (t48 != 6596LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x4373 = 12U;
	uint64_t x4374 = 2LLU;
	uint64_t x4375 = 1359LLU;
	static volatile int8_t x4376 = -1;

    t49 = ((x4373>>x4374)+(x4375*x4376));

    if (t49 != 18446744073709550260LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x4414 = 1;
	static volatile uint8_t x4415 = 7U;
	int8_t x4416 = 0;
	volatile int32_t t50 = -40;

    t50 = ((x4413>>x4414)+(x4415*x4416));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x4469 = INT64_MAX;
	int8_t x4470 = 2;
	uint64_t x4471 = 11463817027309LLU;
	static volatile int8_t x4472 = INT8_MIN;
	uint64_t t51 = 13260828151666LLU;

    t51 = ((x4469>>x4470)+(x4471*x4472));

    if (t51 != 2304375640634198399LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x4509 = 966U;
	uint8_t x4510 = 3U;
	int8_t x4511 = -1;
	uint16_t x4512 = UINT16_MAX;
	int32_t t52 = -3;

    t52 = ((x4509>>x4510)+(x4511*x4512));

    if (t52 != -65415) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x4540 = -1LL;
	volatile int64_t t53 = -3907520981708136563LL;

    t53 = ((x4537>>x4538)+(x4539*x4540));

    if (t53 != 144LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x4710 = 18U;
	uint64_t x4711 = 1960122LLU;
	int64_t x4712 = 828060LL;
	uint64_t t54 = 1691397427965LLU;

    t54 = ((x4709>>x4710)+(x4711*x4712));

    if (t54 != 1623098623320LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x4733 = UINT64_MAX;
	uint8_t x4734 = 58U;
	static int64_t x4735 = -1LL;
	uint64_t t55 = 789938LLU;

    t55 = ((x4733>>x4734)+(x4735*x4736));

    if (t55 != 32831LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x4805 = 94U;
	static int8_t x4806 = 0;
	uint16_t x4807 = 0U;
	int16_t x4808 = 1985;
	static volatile int32_t t56 = -160238910;

    t56 = ((x4805>>x4806)+(x4807*x4808));

    if (t56 != 94) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x4833 = 6U;
	uint8_t x4834 = 1U;
	uint32_t x4835 = 1U;
	static int32_t x4836 = INT32_MIN;
	volatile uint32_t t57 = 202U;

    t57 = ((x4833>>x4834)+(x4835*x4836));

    if (t57 != 2147483651U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x4961 = 353U;
	uint8_t x4962 = 1U;
	volatile int64_t x4963 = 1LL;
	int64_t t58 = 22573LL;

    t58 = ((x4961>>x4962)+(x4963*x4964));

    if (t58 != -9223372036854775632LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x4989 = 14678U;

    t59 = ((x4989>>x4990)+(x4991*x4992));

    if (t59 != -18364656LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x5265 = UINT32_MAX;

    t60 = ((x5265>>x5266)+(x5267*x5268));

    if (t60 != 2152464307U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x5539 = 95047482348LLU;
	volatile uint64_t x5540 = UINT64_MAX;

    t61 = ((x5537>>x5538)+(x5539*x5540));

    if (t61 != 18446743978662069511LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x5549 = INT8_MAX;
	static int64_t x5550 = 23LL;
	uint8_t x5552 = UINT8_MAX;

    t62 = ((x5549>>x5550)+(x5551*x5552));

    if (t62 != 12240) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x5669 = INT64_MAX;
	int8_t x5670 = 26;
	int16_t x5671 = INT16_MAX;
	int32_t x5672 = -1;
	volatile int64_t t63 = 11208943541208LL;

    t63 = ((x5669>>x5670)+(x5671*x5672));

    if (t63 != 137438920704LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x5913 = UINT8_MAX;
	uint8_t x5914 = 8U;
	int16_t x5915 = INT16_MIN;
	volatile int8_t x5916 = -1;
	int32_t t64 = 36;

    t64 = ((x5913>>x5914)+(x5915*x5916));

    if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x5941 = 1;
	static volatile uint32_t x5942 = 1U;
	int8_t x5943 = -1;
	int32_t x5944 = 3;
	int32_t t65 = -164;

    t65 = ((x5941>>x5942)+(x5943*x5944));

    if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x5985 = 2521706279808888282LLU;
	uint64_t x5986 = 2LLU;
	volatile int8_t x5987 = -1;
	int16_t x5988 = -1;
	volatile uint64_t t66 = 3479976293414261969LLU;

    t66 = ((x5985>>x5986)+(x5987*x5988));

    if (t66 != 630426569952222071LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint32_t x5997 = 7632U;
	volatile int8_t x5999 = -1;
	volatile int8_t x6000 = 0;
	volatile uint32_t t67 = 1U;

    t67 = ((x5997>>x5998)+(x5999*x6000));

    if (t67 != 119U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x6017 = 12LLU;
	int8_t x6018 = 0;
	uint16_t x6019 = 177U;

    t68 = ((x6017>>x6018)+(x6019*x6020));

    if (t68 != 18446744073709549504LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x6297 = UINT16_MAX;
	uint8_t x6298 = 3U;
	static int32_t x6300 = -37730;
	volatile int32_t t69 = -148820;

    t69 = ((x6297>>x6298)+(x6299*x6300));

    if (t69 != -9612959) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x6333 = 0LL;
	uint8_t x6334 = 50U;
	static volatile int16_t x6335 = INT16_MIN;
	volatile int64_t t70 = 287820270646125LL;

    t70 = ((x6333>>x6334)+(x6335*x6336));

    if (t70 != -98304LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x6409 = 0U;
	int8_t x6410 = 15;
	int64_t x6411 = -1LL;
	static int8_t x6412 = -1;
	int64_t t71 = 20950LL;

    t71 = ((x6409>>x6410)+(x6411*x6412));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x6557 = INT64_MAX;
	uint16_t x6559 = UINT16_MAX;
	volatile int16_t x6560 = INT16_MIN;
	volatile int64_t t72 = 1634881445LL;

    t72 = ((x6557>>x6558)+(x6559*x6560));

    if (t72 != -2147450369LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x6829 = UINT64_MAX;
	static uint8_t x6830 = 43U;
	volatile uint8_t x6831 = 0U;
	uint32_t x6832 = 1063U;
	volatile uint64_t t73 = 129LLU;

    t73 = ((x6829>>x6830)+(x6831*x6832));

    if (t73 != 2097151LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x6837 = 2;
	int8_t x6838 = 0;
	uint16_t x6839 = 165U;
	int16_t x6840 = 1;
	static int32_t t74 = -1353;

    t74 = ((x6837>>x6838)+(x6839*x6840));

    if (t74 != 167) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x6845 = 500U;
	uint16_t x6846 = 0U;
	uint32_t x6847 = UINT32_MAX;
	static int16_t x6848 = -6;
	volatile uint32_t t75 = 0U;

    t75 = ((x6845>>x6846)+(x6847*x6848));

    if (t75 != 506U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x6885 = 42;
	int16_t x6887 = INT16_MAX;
	uint8_t x6888 = UINT8_MAX;
	int32_t t76 = 63465;

    t76 = ((x6885>>x6886)+(x6887*x6888));

    if (t76 != 8355627) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x6933 = UINT8_MAX;
	volatile uint16_t x6934 = 1U;
	uint32_t x6935 = 4885U;

    t77 = ((x6933>>x6934)+(x6935*x6936));

    if (t77 != 1747328337U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x7037 = 152;
	static uint8_t x7038 = 1U;
	int16_t x7040 = INT16_MAX;
	volatile int64_t t78 = -45LL;

    t78 = ((x7037>>x7038)+(x7039*x7040));

    if (t78 != 1176278677509998LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x7065 = 1;
	uint8_t x7066 = 1U;
	uint64_t x7068 = 19113LLU;
	volatile uint64_t t79 = 1209059125665107LLU;

    t79 = ((x7065>>x7066)+(x7067*x7068));

    if (t79 != 57339LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x7138 = 36;
	uint64_t x7139 = 6436430182LLU;
	volatile int8_t x7140 = -1;
	uint64_t t80 = 122541LLU;

    t80 = ((x7137>>x7138)+(x7139*x7140));

    if (t80 != 18446744067407339161LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x7285 = INT8_MAX;
	static uint8_t x7286 = 1U;
	volatile uint64_t t81 = 11LLU;

    t81 = ((x7285>>x7286)+(x7287*x7288));

    if (t81 != 18420052708051190513LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x7338 = 3U;
	int32_t x7339 = -1;
	volatile int32_t x7340 = 183081012;
	volatile uint64_t t82 = 202077LLU;

    t82 = ((x7337>>x7338)+(x7339*x7340));

    if (t82 != 105932119947476952LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x7377 = UINT8_MAX;
	int32_t x7378 = 13;
	uint8_t x7379 = UINT8_MAX;
	uint32_t x7380 = UINT32_MAX;
	uint32_t t83 = 46U;

    t83 = ((x7377>>x7378)+(x7379*x7380));

    if (t83 != 4294967041U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x7441 = 303877771102LL;
	volatile uint32_t x7443 = UINT32_MAX;
	uint16_t x7444 = 6U;
	static volatile int64_t t84 = -28391725903LL;

    t84 = ((x7441>>x7442)+(x7443*x7444));

    if (t84 != 80264410065LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x7481 = INT8_MAX;
	int8_t x7482 = 3;
	int16_t x7483 = -9;
	uint32_t x7484 = 7769U;
	volatile uint32_t t85 = 853U;

    t85 = ((x7481>>x7482)+(x7483*x7484));

    if (t85 != 4294897390U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x7501 = 2153072904387632LLU;
	uint32_t x7503 = 98524821U;
	volatile uint32_t x7504 = UINT32_MAX;
	volatile uint64_t t86 = 736641625564LLU;

    t86 = ((x7501>>x7502)+(x7503*x7504));

    if (t86 != 33645960573531LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x7593 = UINT16_MAX;
	uint16_t x7594 = 3U;
	uint64_t x7595 = 80364098932LLU;
	volatile uint32_t x7596 = UINT32_MAX;
	uint64_t t87 = 3LLU;

    t87 = ((x7593>>x7594)+(x7595*x7596));

    if (t87 != 13119783278312508043LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x7669 = 19561266;
	int16_t x7670 = 0;
	uint64_t x7671 = 4039LLU;
	uint32_t x7672 = 3U;

    t88 = ((x7669>>x7670)+(x7671*x7672));

    if (t88 != 19573383LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x7693 = INT32_MAX;
	uint32_t x7694 = 0U;
	int16_t x7695 = -1;
	int64_t t89 = 149952722LL;

    t89 = ((x7693>>x7694)+(x7695*x7696));

    if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x7769 = UINT8_MAX;
	int8_t x7770 = 27;
	static volatile uint64_t x7771 = 327058142271474LLU;
	uint64_t t90 = 5LLU;

    t90 = ((x7769>>x7770)+(x7771*x7772));

    if (t90 != 18440202910864122136LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x7773 = INT64_MAX;
	uint16_t x7774 = 33U;
	int8_t x7776 = -12;
	volatile int64_t t91 = -36472810320950LL;

    t91 = ((x7773>>x7774)+(x7775*x7776));

    if (t91 != 1073741679LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x7817 = INT16_MAX;
	int8_t x7820 = INT8_MIN;

    t92 = ((x7817>>x7818)+(x7819*x7820));

    if (t92 != 16384) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x7857 = 15U;
	uint8_t x7858 = 9U;
	volatile uint32_t x7859 = UINT32_MAX;
	volatile uint32_t t93 = 11543U;

    t93 = ((x7857>>x7858)+(x7859*x7860));

    if (t93 != 96U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x7866 = 2U;
	int8_t x7867 = 47;
	int64_t x7868 = -1LL;
	static int64_t t94 = -1LL;

    t94 = ((x7865>>x7866)+(x7867*x7868));

    if (t94 != 3265674699145LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x7905 = 7014261524041876LLU;
	uint8_t x7906 = 4U;
	int8_t x7907 = -11;
	int8_t x7908 = -1;
	volatile uint64_t t95 = 20739340LLU;

    t95 = ((x7905>>x7906)+(x7907*x7908));

    if (t95 != 438391345252628LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x7929 = UINT16_MAX;
	static uint8_t x7930 = 23U;
	int64_t x7931 = -1LL;
	uint8_t x7932 = 15U;
	static int64_t t96 = 16LL;

    t96 = ((x7929>>x7930)+(x7931*x7932));

    if (t96 != -15LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x7933 = 105;
	int16_t x7935 = 0;
	static volatile int32_t x7936 = INT32_MIN;
	volatile int32_t t97 = -1;

    t97 = ((x7933>>x7934)+(x7935*x7936));

    if (t97 != 105) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x8022 = 0U;
	int16_t x8023 = INT16_MIN;
	volatile uint64_t x8024 = UINT64_MAX;

    t98 = ((x8021>>x8022)+(x8023*x8024));

    if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x8073 = UINT64_MAX;
	int16_t x8074 = 11;
	uint64_t x8075 = UINT64_MAX;
	static int32_t x8076 = INT32_MIN;
	volatile uint64_t t99 = 565603425113606629LLU;

    t99 = ((x8073>>x8074)+(x8075*x8076));

    if (t99 != 9007201402224639LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x8113 = UINT8_MAX;
	static int64_t x8115 = -1LL;
	volatile int32_t x8116 = -1;
	volatile int64_t t100 = -32780539488946966LL;

    t100 = ((x8113>>x8114)+(x8115*x8116));

    if (t100 != 128LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x8185 = UINT64_MAX;
	int16_t x8186 = 9;
	uint64_t x8187 = UINT64_MAX;
	int32_t x8188 = -1;
	uint64_t t101 = 2580LLU;

    t101 = ((x8185>>x8186)+(x8187*x8188));

    if (t101 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x8217 = 7494040057573254LLU;
	uint8_t x8218 = 7U;
	uint64_t x8219 = 2932502LLU;
	static int64_t x8220 = INT64_MIN;
	volatile uint64_t t102 = 31832568462304LLU;

    t102 = ((x8217>>x8218)+(x8219*x8220));

    if (t102 != 58547187949791LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x8365 = 142;
	volatile uint8_t x8366 = 0U;
	static volatile int32_t x8367 = -2;
	uint32_t x8368 = 82756536U;
	volatile uint32_t t103 = 126U;

    t103 = ((x8365>>x8366)+(x8367*x8368));

    if (t103 != 4129454366U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x8394 = 1;
	volatile int32_t x8395 = -1;
	int64_t x8396 = -1LL;
	int64_t t104 = -426LL;

    t104 = ((x8393>>x8394)+(x8395*x8396));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x8397 = UINT16_MAX;
	volatile int64_t x8398 = 1LL;
	volatile int32_t x8399 = -24;
	volatile uint16_t x8400 = 138U;
	volatile int32_t t105 = 31690470;

    t105 = ((x8397>>x8398)+(x8399*x8400));

    if (t105 != 29455) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x8461 = 2LLU;
	static volatile uint32_t x8462 = 42U;
	uint16_t x8463 = 1U;
	uint32_t x8464 = UINT32_MAX;
	volatile uint64_t t106 = 4298078580869LLU;

    t106 = ((x8461>>x8462)+(x8463*x8464));

    if (t106 != 4294967295LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x8465 = 77086LL;
	int8_t x8466 = 13;
	int64_t x8468 = -1LL;
	int64_t t107 = -403272743LL;

    t107 = ((x8465>>x8466)+(x8467*x8468));

    if (t107 != -2147483638LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x8489 = 6865902;
	int16_t x8490 = 3;
	static volatile int16_t x8491 = 0;
	uint32_t x8492 = 885U;

    t108 = ((x8489>>x8490)+(x8491*x8492));

    if (t108 != 858237U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x8621 = 778U;
	volatile int8_t x8624 = -1;

    t109 = ((x8621>>x8622)+(x8623*x8624));

    if (t109 != 193U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x8750 = 0;
	int32_t x8752 = INT32_MIN;
	volatile uint32_t t110 = 210529660U;

    t110 = ((x8749>>x8750)+(x8751*x8752));

    if (t110 != 2147483695U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x8818 = 15U;
	uint64_t x8819 = 816002933460LLU;
	uint16_t x8820 = 1U;

    t111 = ((x8817>>x8818)+(x8819*x8820));

    if (t111 != 816002998995LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x8945 = INT32_MAX;
	uint8_t x8946 = 2U;
	static int16_t x8948 = INT16_MIN;
	static int64_t t112 = -52054314415432124LL;

    t112 = ((x8945>>x8946)+(x8947*x8948));

    if (t112 != 536903679LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x8957 = UINT8_MAX;
	uint8_t x8958 = 0U;
	static uint16_t x8959 = UINT16_MAX;
	static uint8_t x8960 = UINT8_MAX;
	volatile int32_t t113 = -55954;

    t113 = ((x8957>>x8958)+(x8959*x8960));

    if (t113 != 16711680) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x8961 = 5509922;
	int8_t x8962 = 1;
	int32_t x8963 = -1;
	int16_t x8964 = 7;
	static int32_t t114 = 810892044;

    t114 = ((x8961>>x8962)+(x8963*x8964));

    if (t114 != 2754954) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x8969 = INT8_MAX;
	int32_t x8971 = -1;
	volatile int16_t x8972 = 0;
	volatile int32_t t115 = 21657;

    t115 = ((x8969>>x8970)+(x8971*x8972));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x9053 = 3U;
	uint8_t x9054 = 0U;
	int16_t x9056 = 2;

    t116 = ((x9053>>x9054)+(x9055*x9056));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x9109 = 112U;
	uint8_t x9110 = 1U;
	static uint64_t x9111 = 5614614219LLU;
	uint64_t x9112 = 35037420711184330LLU;
	uint64_t t117 = 11243111627299463LLU;

    t117 = ((x9109>>x9110)+(x9111*x9112));

    if (t117 != 6143583933959031142LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x9137 = 26LL;
	uint8_t x9138 = 0U;
	int16_t x9139 = -1;
	volatile int64_t t118 = 1LL;

    t118 = ((x9137>>x9138)+(x9139*x9140));

    if (t118 != 4294953439LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x9245 = INT8_MAX;
	static int8_t x9246 = 2;
	int8_t x9247 = -1;
	int16_t x9248 = 18;
	int32_t t119 = 140246;

    t119 = ((x9245>>x9246)+(x9247*x9248));

    if (t119 != 13) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x9261 = 10U;
	uint8_t x9262 = 3U;
	uint32_t x9263 = 87U;
	static int16_t x9264 = 1009;

    t120 = ((x9261>>x9262)+(x9263*x9264));

    if (t120 != 87784U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x9305 = 323472LL;
	int16_t x9306 = 33;
	volatile int32_t x9308 = -7650;
	volatile int64_t t121 = -25893756278689LL;

    t121 = ((x9305>>x9306)+(x9307*x9308));

    if (t121 != -250667550LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x9333 = INT8_MAX;
	uint16_t x9334 = 0U;
	int16_t x9335 = INT16_MAX;
	uint16_t x9336 = UINT16_MAX;
	int32_t t122 = -242;

    t122 = ((x9333>>x9334)+(x9335*x9336));

    if (t122 != 2147385472) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x9377 = INT32_MAX;
	int8_t x9378 = 0;
	uint64_t x9380 = 63395259080LLU;

    t123 = ((x9377>>x9378)+(x9379*x9380));

    if (t123 != 37341955081767LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x9454 = 0U;
	volatile int8_t x9455 = INT8_MAX;
	uint64_t t124 = 10272095389116LLU;

    t124 = ((x9453>>x9454)+(x9455*x9456));

    if (t124 != 632441673705429LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x9669 = UINT8_MAX;
	uint8_t x9670 = 6U;
	int8_t x9672 = INT8_MAX;
	uint64_t t125 = 58679389LLU;

    t125 = ((x9669>>x9670)+(x9671*x9672));

    if (t125 != 94334841LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x9737 = INT8_MAX;
	uint64_t x9738 = 0LLU;
	static uint64_t x9739 = 3799LLU;
	static int32_t x9740 = INT32_MAX;
	static uint64_t t126 = 2136238627673LLU;

    t126 = ((x9737>>x9738)+(x9739*x9740));

    if (t126 != 8158290375080LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x9789 = UINT32_MAX;
	uint16_t x9790 = 11U;
	int32_t x9792 = -14;
	uint32_t t127 = 93642U;

    t127 = ((x9789>>x9790)+(x9791*x9792));

    if (t127 != 2095373U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x9853 = INT32_MAX;
	uint8_t x9854 = 2U;
	int32_t x9855 = INT32_MIN;
	volatile uint64_t t128 = 1093560201012721667LLU;

    t128 = ((x9853>>x9854)+(x9855*x9856));

    if (t128 != 2684354559LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x9905 = 3186U;
	uint16_t x9906 = 16U;
	int32_t x9907 = -1;
	uint16_t x9908 = 10796U;
	uint32_t t129 = 1U;

    t129 = ((x9905>>x9906)+(x9907*x9908));

    if (t129 != 4294956500U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x9981 = INT8_MAX;
	int8_t x9982 = 0;
	int32_t x9983 = -1;
	static uint32_t t130 = 336468296U;

    t130 = ((x9981>>x9982)+(x9983*x9984));

    if (t130 != 4293418135U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x10253 = UINT8_MAX;
	volatile int8_t x10254 = 0;
	static int8_t x10255 = INT8_MIN;
	uint8_t x10256 = 0U;
	int32_t t131 = 433673;

    t131 = ((x10253>>x10254)+(x10255*x10256));

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x10289 = 6480902;
	static volatile uint64_t x10291 = 1237LLU;
	int16_t x10292 = 5;
	volatile uint64_t t132 = 471733582LLU;

    t132 = ((x10289>>x10290)+(x10291*x10292));

    if (t132 != 6487087LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x10297 = INT8_MAX;
	static volatile uint16_t x10298 = 0U;
	uint64_t x10299 = UINT64_MAX;

    t133 = ((x10297>>x10298)+(x10299*x10300));

    if (t133 != 128LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x10433 = 30529;
	static volatile uint8_t x10435 = UINT8_MAX;
	int16_t x10436 = -29;

    t134 = ((x10433>>x10434)+(x10435*x10436));

    if (t134 != 7869) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x10573 = UINT8_MAX;
	uint16_t x10574 = 3U;
	volatile int64_t t135 = 461LL;

    t135 = ((x10573>>x10574)+(x10575*x10576));

    if (t135 != -29343LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x10577 = UINT8_MAX;
	volatile int8_t x10580 = -1;
	static uint32_t t136 = 89674U;

    t136 = ((x10577>>x10578)+(x10579*x10580));

    if (t136 != 4252923145U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x10610 = 12U;
	static int16_t x10611 = INT16_MIN;

    t137 = ((x10609>>x10610)+(x10611*x10612));

    if (t137 != 4194304) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x10617 = 792954501178219556LL;
	static int8_t x10618 = 54;
	volatile uint64_t x10619 = 318273LLU;
	int32_t x10620 = 2385235;

    t138 = ((x10617>>x10618)+(x10619*x10620));

    if (t138 != 759155899199LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x10773 = INT64_MAX;
	uint8_t x10774 = 16U;
	uint8_t x10775 = 3U;

    t139 = ((x10773>>x10774)+(x10775*x10776));

    if (t139 != 140737488355330LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x10837 = 14;
	uint8_t x10838 = 0U;
	static volatile uint64_t t140 = 1LLU;

    t140 = ((x10837>>x10838)+(x10839*x10840));

    if (t140 != 142LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x10941 = UINT32_MAX;
	static uint8_t x10942 = 0U;
	int16_t x10943 = INT16_MAX;
	int8_t x10944 = INT8_MIN;
	uint32_t t141 = 8141U;

    t141 = ((x10941>>x10942)+(x10943*x10944));

    if (t141 != 4290773119U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x11053 = 11752853506424074LLU;
	uint8_t x11054 = 0U;
	static int8_t x11055 = INT8_MAX;
	uint64_t t142 = 15113376LLU;

    t142 = ((x11053>>x11054)+(x11055*x11056));

    if (t142 != 11752853506423947LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x11098 = 3U;
	volatile int64_t x11099 = 1874803491921LL;
	int8_t x11100 = 38;
	volatile uint64_t t143 = 34489343870873989LLU;

    t143 = ((x11097>>x11098)+(x11099*x11100));

    if (t143 != 2305914251746386949LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x11169 = 101732975931LLU;
	uint8_t x11170 = 26U;
	uint8_t x11171 = 0U;
	static uint16_t x11172 = UINT16_MAX;
	uint64_t t144 = 743567LLU;

    t144 = ((x11169>>x11170)+(x11171*x11172));

    if (t144 != 1515LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x11198 = 3U;
	volatile uint16_t x11199 = 99U;
	volatile int32_t t145 = 246697708;

    t145 = ((x11197>>x11198)+(x11199*x11200));

    if (t145 != 1016) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x11261 = 5739;
	static volatile int8_t x11262 = 1;
	int8_t x11263 = -1;
	int32_t t146 = 53973;

    t146 = ((x11261>>x11262)+(x11263*x11264));

    if (t146 != 2614) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x11461 = 2LLU;
	volatile uint8_t x11462 = 2U;
	static int8_t x11463 = INT8_MIN;
	uint32_t x11464 = 13U;
	static volatile uint64_t t147 = 4428301LLU;

    t147 = ((x11461>>x11462)+(x11463*x11464));

    if (t147 != 4294965632LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x11465 = 15243U;
	uint8_t x11466 = 29U;
	uint64_t x11468 = UINT64_MAX;
	uint64_t t148 = 39882060076307116LLU;

    t148 = ((x11465>>x11466)+(x11467*x11468));

    if (t148 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x11485 = UINT16_MAX;
	static uint16_t x11486 = 3U;
	static int32_t x11487 = INT32_MIN;
	int64_t x11488 = -1LL;
	volatile int64_t t149 = -41623740155658072LL;

    t149 = ((x11485>>x11486)+(x11487*x11488));

    if (t149 != 2147491839LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x11593 = 28760496160809854LLU;
	volatile int16_t x11594 = 63;
	int32_t x11595 = 6;

    t150 = ((x11593>>x11594)+(x11595*x11596));

    if (t150 != 30LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x11630 = 5U;
	uint8_t x11631 = UINT8_MAX;
	int64_t t151 = 2505359LL;

    t151 = ((x11629>>x11630)+(x11631*x11632));

    if (t151 != 288230376151711488LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x11661 = INT8_MAX;
	static uint16_t x11662 = 9U;
	uint64_t x11663 = 466773987648342LLU;
	uint64_t x11664 = 258340256595058912LLU;
	uint64_t t152 = 2000420240711791217LLU;

    t152 = ((x11661>>x11662)+(x11663*x11664));

    if (t152 != 9335868855107562304LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x11665 = UINT16_MAX;
	volatile uint32_t x11668 = 55445113U;

    t153 = ((x11665>>x11666)+(x11667*x11668));

    if (t153 != 4239554950U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x11705 = 0;
	uint16_t x11706 = 10U;
	int16_t x11707 = INT16_MIN;
	static int16_t x11708 = 1;
	volatile int32_t t154 = 4;

    t154 = ((x11705>>x11706)+(x11707*x11708));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x11845 = 1U;
	uint8_t x11847 = 1U;
	static volatile int16_t x11848 = 1;

    t155 = ((x11845>>x11846)+(x11847*x11848));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x11861 = 11;
	static volatile uint16_t x11862 = 20U;
	uint32_t x11863 = 2U;
	volatile uint64_t x11864 = UINT64_MAX;
	volatile uint64_t t156 = 130679LLU;

    t156 = ((x11861>>x11862)+(x11863*x11864));

    if (t156 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x12025 = 42818517557276843LLU;
	uint16_t x12026 = 32U;
	int16_t x12027 = INT16_MIN;
	volatile int8_t x12028 = -1;
	uint64_t t157 = 470330LLU;

    t157 = ((x12025>>x12026)+(x12027*x12028));

    if (t157 != 10002231LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x12049 = 13589381U;
	static int32_t x12051 = INT32_MAX;
	static uint64_t x12052 = UINT64_MAX;

    t158 = ((x12049>>x12050)+(x12051*x12052));

    if (t158 != 18446744071562068072LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x12073 = 18812LLU;
	uint8_t x12074 = 1U;
	int32_t x12075 = -1;
	uint64_t x12076 = 3093533253520759LLU;

    t159 = ((x12073>>x12074)+(x12075*x12076));

    if (t159 != 18443650540456040263LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x12257 = UINT64_MAX;
	uint16_t x12258 = 2U;
	volatile int16_t x12259 = 0;
	uint64_t t160 = 4394041326LLU;

    t160 = ((x12257>>x12258)+(x12259*x12260));

    if (t160 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x12297 = 0;
	volatile int16_t x12299 = 722;
	volatile uint64_t x12300 = 3529825704371LLU;
	static uint64_t t161 = 1878LLU;

    t161 = ((x12297>>x12298)+(x12299*x12300));

    if (t161 != 2548534158555862LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x12345 = INT8_MAX;
	uint8_t x12346 = 6U;
	int8_t x12347 = -1;
	int64_t t162 = 936087188056LL;

    t162 = ((x12345>>x12346)+(x12347*x12348));

    if (t162 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x12581 = 6828U;
	volatile uint16_t x12583 = 22711U;
	uint32_t x12584 = 3628859U;
	volatile uint32_t t163 = 291752142U;

    t163 = ((x12581>>x12582)+(x12583*x12584));

    if (t163 != 810638178U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x12697 = INT8_MAX;
	uint64_t x12698 = 7LLU;
	volatile uint64_t x12699 = UINT64_MAX;
	static uint64_t x12700 = 13669427880LLU;
	volatile uint64_t t164 = 1290515343028LLU;

    t164 = ((x12697>>x12698)+(x12699*x12700));

    if (t164 != 18446744060040123736LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x12709 = 5U;
	static uint32_t x12710 = 5U;
	int64_t x12712 = -1LL;
	int64_t t165 = -1634LL;

    t165 = ((x12709>>x12710)+(x12711*x12712));

    if (t165 != -15548658LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x12809 = 78822356697LLU;
	static uint8_t x12810 = 15U;
	uint64_t x12811 = UINT64_MAX;
	uint64_t t166 = 75180023473LLU;

    t166 = ((x12809>>x12810)+(x12811*x12812));

    if (t166 != 16753420697766717800LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x12841 = UINT32_MAX;
	int8_t x12842 = 0;
	volatile uint8_t x12843 = 3U;
	int16_t x12844 = INT16_MAX;

    t167 = ((x12841>>x12842)+(x12843*x12844));

    if (t167 != 98300U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x12877 = 7596839471939LLU;
	uint8_t x12879 = UINT8_MAX;
	static int8_t x12880 = -1;

    t168 = ((x12877>>x12878)+(x12879*x12880));

    if (t168 != 3798419735714LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x12909 = 6U;
	uint8_t x12910 = 1U;
	static volatile uint8_t x12911 = 38U;
	volatile uint64_t x12912 = 2LLU;
	uint64_t t169 = 8650084LLU;

    t169 = ((x12909>>x12910)+(x12911*x12912));

    if (t169 != 79LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x13121 = UINT8_MAX;
	int16_t x13122 = 7;
	volatile int32_t t170 = -8;

    t170 = ((x13121>>x13122)+(x13123*x13124));

    if (t170 != 8185) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x13185 = 3U;
	volatile uint32_t x13187 = UINT32_MAX;
	uint16_t x13188 = UINT16_MAX;
	uint32_t t171 = 3882928U;

    t171 = ((x13185>>x13186)+(x13187*x13188));

    if (t171 != 4294901762U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x13254 = 8U;
	static int16_t x13255 = 210;
	volatile int32_t t172 = -388364664;

    t172 = ((x13253>>x13254)+(x13255*x13256));

    if (t172 != 13762364) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x13269 = UINT16_MAX;
	uint8_t x13270 = 15U;
	static int32_t x13271 = 16837377;
	static uint8_t x13272 = 30U;

    t173 = ((x13269>>x13270)+(x13271*x13272));

    if (t173 != 505121311) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x13321 = 11U;
	static int8_t x13322 = 20;
	volatile uint64_t x13323 = 2LLU;
	int64_t x13324 = -5085143LL;
	uint64_t t174 = 5971591551847LLU;

    t174 = ((x13321>>x13322)+(x13323*x13324));

    if (t174 != 18446744073699381330LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x13382 = 2;
	int16_t x13383 = -29;
	uint32_t x13384 = UINT32_MAX;

    t175 = ((x13381>>x13382)+(x13383*x13384));

    if (t175 != 34U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x13405 = 2;
	static volatile int16_t x13406 = 5;
	uint64_t x13407 = 69455902963956LLU;
	static uint64_t x13408 = 92829274751153LLU;
	volatile uint64_t t176 = 198498716752LLU;

    t176 = ((x13405>>x13406)+(x13407*x13408));

    if (t176 != 6533558776927396020LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x13529 = 2796051LLU;
	uint16_t x13530 = 2U;
	int16_t x13531 = 12959;
	uint8_t x13532 = 1U;
	uint64_t t177 = 936813992LLU;

    t177 = ((x13529>>x13530)+(x13531*x13532));

    if (t177 != 711971LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x13581 = 21972810935531LLU;
	volatile uint16_t x13582 = 0U;
	static int16_t x13583 = 5;
	volatile uint32_t x13584 = UINT32_MAX;
	uint64_t t178 = 1904503680065712LLU;

    t178 = ((x13581>>x13582)+(x13583*x13584));

    if (t178 != 21977105902822LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x13645 = INT16_MAX;
	int8_t x13646 = 25;
	uint32_t x13647 = 92286754U;
	int16_t x13648 = -1;
	uint32_t t179 = 434352U;

    t179 = ((x13645>>x13646)+(x13647*x13648));

    if (t179 != 4202680542U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x13734 = 31;
	volatile uint8_t x13736 = UINT8_MAX;
	uint32_t t180 = 84U;

    t180 = ((x13733>>x13734)+(x13735*x13736));

    if (t180 != 766U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x13941 = 132U;
	int16_t x13943 = -1;
	uint8_t x13944 = 52U;
	uint32_t t181 = 0U;

    t181 = ((x13941>>x13942)+(x13943*x13944));

    if (t181 != 4294967244U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x13953 = 5U;
	volatile int8_t x13954 = 1;
	int64_t x13955 = INT64_MAX;
	int32_t x13956 = -1;
	static volatile int64_t t182 = -3LL;

    t182 = ((x13953>>x13954)+(x13955*x13956));

    if (t182 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x13965 = INT8_MAX;
	int16_t x13966 = 1;
	static int32_t x13967 = -1;
	int16_t x13968 = INT16_MAX;
	int32_t t183 = -5113;

    t183 = ((x13965>>x13966)+(x13967*x13968));

    if (t183 != -32704) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x14017 = 76239U;
	static volatile int64_t x14018 = 13LL;
	int64_t x14019 = 457476675798LL;
	static volatile int32_t x14020 = -2602647;

    t184 = ((x14017>>x14018)+(x14019*x14020));

    if (t184 != -1190650297835637297LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x14021 = 70U;
	uint16_t x14023 = 28687U;
	int8_t x14024 = 0;

    t185 = ((x14021>>x14022)+(x14023*x14024));

    if (t185 != 35U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x14053 = INT64_MAX;
	uint32_t x14054 = 21U;
	uint32_t x14056 = 901808U;
	int64_t t186 = -188942898LL;

    t186 = ((x14053>>x14054)+(x14055*x14056));

    if (t186 != 4402323442239LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x14117 = INT16_MAX;
	uint8_t x14118 = 14U;
	int8_t x14119 = 0;
	volatile int64_t x14120 = 85714LL;
	volatile int64_t t187 = -483498LL;

    t187 = ((x14117>>x14118)+(x14119*x14120));

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x14337 = UINT64_MAX;
	volatile int16_t x14338 = 1;
	volatile int8_t x14339 = INT8_MAX;
	uint64_t t188 = 427873280696LLU;

    t188 = ((x14337>>x14338)+(x14339*x14340));

    if (t188 != 9223372036854778347LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x14349 = 0;
	uint16_t x14350 = 3U;
	uint8_t x14351 = 1U;
	volatile uint32_t x14352 = UINT32_MAX;

    t189 = ((x14349>>x14350)+(x14351*x14352));

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x14499 = -471658404;
	uint32_t x14500 = 3624U;
	static volatile uint32_t t190 = 1622U;

    t190 = ((x14497>>x14498)+(x14499*x14500));

    if (t190 != 106927712U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x14561 = INT16_MAX;
	uint32_t x14564 = 1920342040U;
	static uint32_t t191 = 258628146U;

    t191 = ((x14561>>x14562)+(x14563*x14564));

    if (t191 != 45653047U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x14581 = 11505U;
	int16_t x14582 = 0;
	static volatile int64_t t192 = 78448113997320LL;

    t192 = ((x14581>>x14582)+(x14583*x14584));

    if (t192 != -9223372036854764302LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x14689 = UINT32_MAX;
	static uint8_t x14690 = 0U;
	volatile uint8_t x14691 = 9U;
	volatile uint32_t x14692 = UINT32_MAX;
	uint32_t t193 = 122268U;

    t193 = ((x14689>>x14690)+(x14691*x14692));

    if (t193 != 4294967286U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x14726 = 2U;
	int16_t x14727 = INT16_MAX;
	uint8_t x14728 = 9U;
	int32_t t194 = 142;

    t194 = ((x14725>>x14726)+(x14727*x14728));

    if (t194 != 294934) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x14777 = 28U;
	volatile int8_t x14778 = 7;
	int16_t x14779 = INT16_MIN;
	static int64_t x14780 = -502LL;
	volatile int64_t t195 = 226944778550LL;

    t195 = ((x14777>>x14778)+(x14779*x14780));

    if (t195 != 16449536LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x14825 = 1;
	uint16_t x14826 = 1U;
	uint16_t x14827 = 10U;
	int32_t t196 = 0;

    t196 = ((x14825>>x14826)+(x14827*x14828));

    if (t196 != 2550) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x14833 = 45;
	uint8_t x14834 = 7U;
	static volatile uint64_t x14836 = 107053419676628LLU;
	static uint64_t t197 = 15445224115719LLU;

    t197 = ((x14833>>x14834)+(x14835*x14836));

    if (t197 != 18446637020289874988LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x14941 = UINT16_MAX;
	int32_t x14942 = 1;
	int64_t x14943 = INT64_MIN;
	static volatile uint64_t x14944 = 3098416145645LLU;
	uint64_t t198 = 62698449LLU;

    t198 = ((x14941>>x14942)+(x14943*x14944));

    if (t198 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x14973 = UINT64_MAX;
	static int8_t x14974 = 0;
	volatile int32_t x14975 = 3;
	uint64_t x14976 = 636156LLU;
	uint64_t t199 = 6820713702556079LLU;

    t199 = ((x14973>>x14974)+(x14975*x14976));

    if (t199 != 1908467LLU) { NG(); } else { ; }
	
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

