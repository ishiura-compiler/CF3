
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

uint8_t x12 = 21U;
int64_t x102 = INT64_MIN;
int32_t x103 = INT32_MAX;
static int64_t t2 = 494059319LL;
int32_t x151 = -1859;
uint32_t x157 = UINT32_MAX;
static int32_t x309 = -11240;
static uint8_t x310 = 2U;
static int8_t x311 = -1;
int32_t x312 = 1;
uint64_t x323 = 121LLU;
uint16_t x464 = 5U;
int64_t t13 = 8666989LL;
volatile int64_t t14 = -380800915316813LL;
int16_t x873 = -2;
volatile uint64_t t16 = 16392475795LLU;
uint64_t x1050 = UINT64_MAX;
int16_t x1051 = 5;
uint8_t x1084 = 0U;
int64_t x1601 = -9496360662996069LL;
int16_t x1602 = INT16_MIN;
int8_t x1685 = INT8_MAX;
volatile int64_t x1686 = INT64_MIN;
uint16_t x1715 = 12U;
int64_t t25 = 1123311203046722LL;
int32_t x1884 = 23;
static int16_t x1998 = 31;
int32_t x2182 = -56407484;
static uint8_t x2211 = 3U;
volatile int16_t x2430 = INT16_MIN;
volatile int64_t t32 = 139936LL;
int8_t x2439 = 12;
volatile int64_t t33 = 554LL;
uint32_t x2582 = UINT32_MAX;
volatile uint16_t x2583 = 17U;
uint16_t x2584 = 15U;
volatile uint32_t t34 = 20478U;
static volatile int64_t t38 = 64330LL;
int16_t x3193 = 32;
static int16_t x3213 = INT16_MIN;
volatile int16_t x3235 = 1;
uint32_t t45 = 11367U;
int64_t x3406 = 26173540LL;
uint8_t x3436 = 7U;
uint64_t t49 = 2794457959870533LLU;
int16_t x3504 = 1;
volatile int8_t x3654 = -1;
volatile uint64_t t53 = 69LLU;
volatile int64_t t54 = -2LL;
static volatile uint64_t x3905 = 527336112731521873LLU;
uint8_t x3908 = 34U;
volatile uint64_t t55 = 125686043995112LLU;
int8_t x3926 = -5;
uint32_t x3928 = 1U;
uint64_t t56 = 10914532739LLU;
static int8_t x3968 = 0;
uint8_t x4173 = UINT8_MAX;
int8_t x4175 = INT8_MIN;
int16_t x4287 = INT16_MIN;
static uint8_t x4288 = 7U;
int32_t x4315 = 6899117;
static volatile int64_t t60 = 5588845LL;
uint32_t t61 = 45U;
uint8_t x4404 = 15U;
volatile uint64_t t64 = 36246588342653979LLU;
volatile uint8_t x4528 = 0U;
int16_t x4643 = INT16_MAX;
volatile int8_t x4644 = 3;
uint64_t x4645 = 5070444401LLU;
int64_t x4647 = INT64_MIN;
uint32_t x4703 = 252018778U;
int8_t x4760 = 0;
static int64_t t71 = 155708016LL;
int16_t x4821 = INT16_MIN;
static uint8_t x4892 = 41U;
volatile uint64_t t75 = 103763974242276825LLU;
int8_t x4975 = INT8_MAX;
uint32_t x4976 = 31U;
int16_t x5013 = -1;
int8_t x5015 = 3;
volatile int32_t t78 = -4218483;
int64_t x5274 = 3375528536LL;
uint8_t x5276 = 3U;
int32_t x5441 = 640184;
int8_t x5444 = 0;
volatile int32_t t81 = 361512;
int8_t x5507 = 1;
uint32_t x5525 = 19997U;
int8_t x5535 = INT8_MAX;
uint64_t x5669 = UINT64_MAX;
int16_t x5773 = 1;
int32_t x5825 = 2;
uint32_t x5827 = 1776709748U;
int16_t x5899 = -1;
uint64_t x5909 = 948200540716965669LLU;
static int8_t x5912 = 29;
int32_t x6261 = -1;
uint32_t x6264 = 14U;
uint64_t x6331 = 1LLU;
uint8_t x6372 = 7U;
uint32_t x6575 = 185U;
static int32_t x6589 = -1;
int16_t x6590 = -1;
static int8_t x6643 = 24;
volatile uint64_t t101 = 165LLU;
static int16_t x6647 = -1;
int16_t x6865 = INT16_MIN;
volatile uint32_t x6868 = 2U;
int8_t x7089 = 1;


void f0(void) {
    	uint32_t x9 = 2U;
	int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MIN;
	uint32_t t0 = 1U;

    t0 = ((x9%(x10/x11))>>x12);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x33 = 15U;
	int16_t x34 = -1;
	int8_t x35 = -1;
	int16_t x36 = 0;
	static int32_t t1 = 487641522;

    t1 = ((x33%(x34/x35))>>x36);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x101 = 4043U;
	uint16_t x104 = 0U;

    t2 = ((x101%(x102/x103))>>x104);

    if (t2 != 4043LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x149 = INT8_MAX;
	volatile int64_t x150 = INT64_MAX;
	uint8_t x152 = 1U;
	int64_t t3 = -4229752366621210294LL;

    t3 = ((x149%(x150/x151))>>x152);

    if (t3 != 63LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 3U;
	volatile int64_t t4 = 4164223804252LL;

    t4 = ((x157%(x158/x159))>>x160);

    if (t4 != 536870911LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x189 = 938215123;
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 1697910317U;
	uint8_t x192 = 2U;
	volatile uint32_t t5 = 194U;

    t5 = ((x189%(x190/x191))>>x192);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = 1U;
	static uint32_t x216 = 0U;
	int32_t t6 = -60956;

    t6 = ((x213%(x214/x215))>>x216);

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x229 = -261;
	volatile int16_t x230 = -437;
	uint64_t x231 = 675853LLU;
	int8_t x232 = 15;
	volatile uint64_t t7 = 736201208993010LLU;

    t7 = ((x229%(x230/x231))>>x232);

    if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t t8 = -1;

    t8 = ((x309%(x310/x311))>>x312);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x321 = -3;
	uint32_t x322 = 82385001U;
	static volatile uint64_t x324 = 28LLU;
	static uint64_t t9 = 16300757976033257LLU;

    t9 = ((x321%(x322/x323))>>x324);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x345 = -470;
	static volatile int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MAX;
	uint8_t x348 = 13U;
	volatile int32_t t10 = -536;

    t10 = ((x345%(x346/x347))>>x348);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x393 = -1LL;
	static int16_t x394 = INT16_MIN;
	uint64_t x395 = 32442304303337924LLU;
	int16_t x396 = 17;
	uint64_t t11 = 5618051517296641LLU;

    t11 = ((x393%(x394/x395))>>x396);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x461 = -18;
	uint16_t x462 = 133U;
	int8_t x463 = INT8_MAX;
	volatile int32_t t12 = 1;

    t12 = ((x461%(x462/x463))>>x464);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x745 = INT64_MAX;
	uint16_t x746 = 61U;
	uint16_t x747 = 3U;
	uint16_t x748 = 5U;

    t13 = ((x745%(x746/x747))>>x748);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x765 = INT32_MAX;
	static volatile int64_t x766 = INT64_MAX;
	volatile int64_t x767 = -5064025LL;
	int64_t x768 = 8LL;

    t14 = ((x765%(x766/x767))>>x768);

    if (t14 != 8388607LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x865 = 3U;
	int64_t x866 = INT64_MIN;
	uint16_t x867 = UINT16_MAX;
	volatile int8_t x868 = 20;
	volatile int64_t t15 = -1109719587797445LL;

    t15 = ((x865%(x866/x867))>>x868);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x874 = -1LL;
	uint64_t x875 = UINT64_MAX;
	uint8_t x876 = 55U;

    t16 = ((x873%(x874/x875))>>x876);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x893 = UINT32_MAX;
	volatile int64_t x894 = -4486555064214390363LL;
	int32_t x895 = INT32_MIN;
	int8_t x896 = 1;
	int64_t t17 = 164633418LL;

    t17 = ((x893%(x894/x895))>>x896);

    if (t17 != 58268641LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x997 = UINT64_MAX;
	static int16_t x998 = -1;
	volatile uint32_t x999 = 34602903U;
	volatile uint16_t x1000 = 7U;
	uint64_t t18 = 32096LLU;

    t18 = ((x997%(x998/x999))>>x1000);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1049 = 196U;
	int32_t x1052 = 39;
	uint64_t t19 = 145543459090LLU;

    t19 = ((x1049%(x1050/x1051))>>x1052);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1081 = INT64_MAX;
	uint64_t x1082 = 40663667888021662LLU;
	int8_t x1083 = 4;
	static volatile uint64_t t20 = 856LLU;

    t20 = ((x1081%(x1082/x1083))>>x1084);

    if (t20 != 2885343245864402LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1213 = UINT8_MAX;
	static uint64_t x1214 = 1094490095859289488LLU;
	uint8_t x1215 = 26U;
	static uint8_t x1216 = 1U;
	uint64_t t21 = 396503LLU;

    t21 = ((x1213%(x1214/x1215))>>x1216);

    if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x1603 = 18105810065366165LLU;
	uint8_t x1604 = 1U;
	static volatile uint64_t t22 = 1362669140706482LLU;

    t22 = ((x1601%(x1602/x1603))>>x1604);

    if (t22 != 261LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1687 = INT32_MIN;
	uint16_t x1688 = 18U;
	static int64_t t23 = -45999577431LL;

    t23 = ((x1685%(x1686/x1687))>>x1688);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1713 = 14U;
	int32_t x1714 = INT32_MIN;
	uint16_t x1716 = 1U;
	static volatile int32_t t24 = 3;

    t24 = ((x1713%(x1714/x1715))>>x1716);

    if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1805 = UINT8_MAX;
	int64_t x1806 = -1909354494169827489LL;
	uint8_t x1807 = 5U;
	int64_t x1808 = 2LL;

    t25 = ((x1805%(x1806/x1807))>>x1808);

    if (t25 != 63LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1813 = 1;
	static int8_t x1814 = INT8_MIN;
	int16_t x1815 = -1;
	uint32_t x1816 = 28U;
	volatile int32_t t26 = -20574426;

    t26 = ((x1813%(x1814/x1815))>>x1816);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1881 = INT64_MAX;
	int64_t x1882 = -816773634382230682LL;
	int16_t x1883 = -1;
	int64_t t27 = 66LL;

    t27 = ((x1881%(x1882/x1883))>>x1884);

    if (t27 != 28474576312LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1997 = UINT64_MAX;
	uint32_t x1999 = 25U;
	int8_t x2000 = 3;
	volatile uint64_t t28 = 119750837985814LLU;

    t28 = ((x1997%(x1998/x1999))>>x2000);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x2149 = 674U;
	static uint16_t x2150 = UINT16_MAX;
	uint16_t x2151 = 22928U;
	uint8_t x2152 = 1U;
	volatile uint32_t t29 = 15036874U;

    t29 = ((x2149%(x2150/x2151))>>x2152);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x2181 = 620LL;
	uint8_t x2183 = 6U;
	volatile int8_t x2184 = 4;
	volatile int64_t t30 = 882447945561856758LL;

    t30 = ((x2181%(x2182/x2183))>>x2184);

    if (t30 != 38LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x2209 = 1U;
	int32_t x2210 = INT32_MIN;
	volatile int8_t x2212 = 3;
	volatile int32_t t31 = 127399853;

    t31 = ((x2209%(x2210/x2211))>>x2212);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x2429 = INT64_MAX;
	uint8_t x2431 = 55U;
	uint8_t x2432 = 60U;

    t32 = ((x2429%(x2430/x2431))>>x2432);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2437 = 1U;
	volatile int64_t x2438 = 1958762315239089598LL;
	volatile int32_t x2440 = 3;

    t33 = ((x2437%(x2438/x2439))>>x2440);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2581 = -1;

    t34 = ((x2581%(x2582/x2583))>>x2584);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x2625 = 38355946U;
	volatile int64_t x2626 = -32810926LL;
	volatile uint16_t x2627 = 12598U;
	uint8_t x2628 = 1U;
	int64_t t35 = 3413482466604LL;

    t35 = ((x2625%(x2626/x2627))>>x2628);

    if (t35 != 815LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2721 = 255;
	int64_t x2722 = -1LL;
	int64_t x2723 = -1LL;
	uint16_t x2724 = 2U;
	static volatile int64_t t36 = -34740084LL;

    t36 = ((x2721%(x2722/x2723))>>x2724);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x2765 = 3033124420224345LLU;
	volatile int32_t x2766 = INT32_MAX;
	uint16_t x2767 = 16U;
	int64_t x2768 = 0LL;
	volatile uint64_t t37 = 3952344939LLU;

    t37 = ((x2765%(x2766/x2767))>>x2768);

    if (t37 != 16341219LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2925 = 771675033871202LL;
	int16_t x2926 = INT16_MIN;
	uint8_t x2927 = 4U;
	uint16_t x2928 = 1U;

    t38 = ((x2925%(x2926/x2927))>>x2928);

    if (t38 != 433LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x2993 = INT16_MIN;
	uint32_t x2994 = 1502344387U;
	int32_t x2995 = 1990058;
	int32_t x2996 = 13;
	uint32_t t39 = 349128742U;

    t39 = ((x2993%(x2994/x2995))>>x2996);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x3145 = 1768716;
	uint8_t x3146 = UINT8_MAX;
	int8_t x3147 = INT8_MIN;
	int8_t x3148 = 0;
	int32_t t40 = -5;

    t40 = ((x3145%(x3146/x3147))>>x3148);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x3194 = -1LL;
	int16_t x3195 = -1;
	int16_t x3196 = 1;
	volatile int64_t t41 = -3730754550476843468LL;

    t41 = ((x3193%(x3194/x3195))>>x3196);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x3214 = UINT16_MAX;
	uint16_t x3215 = 15286U;
	int8_t x3216 = 4;
	static int32_t t42 = 7;

    t42 = ((x3213%(x3214/x3215))>>x3216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x3233 = -1LL;
	volatile uint8_t x3234 = 1U;
	uint32_t x3236 = 15U;
	static int64_t t43 = -3681071229086LL;

    t43 = ((x3233%(x3234/x3235))>>x3236);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x3349 = INT16_MAX;
	int64_t x3350 = INT64_MAX;
	static volatile uint8_t x3351 = 1U;
	uint32_t x3352 = 1U;
	volatile int64_t t44 = 169LL;

    t44 = ((x3349%(x3350/x3351))>>x3352);

    if (t44 != 16383LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3377 = INT16_MIN;
	uint32_t x3378 = 1615U;
	int8_t x3379 = INT8_MAX;
	int8_t x3380 = 1;

    t45 = ((x3377%(x3378/x3379))>>x3380);

    if (t45 != 4U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3397 = 54;
	uint32_t x3398 = 222853U;
	static uint8_t x3399 = UINT8_MAX;
	uint16_t x3400 = 13U;
	uint32_t t46 = 953U;

    t46 = ((x3397%(x3398/x3399))>>x3400);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x3405 = UINT64_MAX;
	int32_t x3407 = -7293;
	uint8_t x3408 = 10U;
	uint64_t t47 = 1481882LLU;

    t47 = ((x3405%(x3406/x3407))>>x3408);

    if (t47 != 3LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x3433 = INT64_MIN;
	static int64_t x3434 = INT64_MIN;
	static int64_t x3435 = INT64_MAX;
	static int64_t t48 = -1573297498887374LL;

    t48 = ((x3433%(x3434/x3435))>>x3436);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x3441 = INT16_MIN;
	int8_t x3442 = -1;
	uint64_t x3443 = UINT64_MAX;
	uint16_t x3444 = 0U;

    t49 = ((x3441%(x3442/x3443))>>x3444);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3501 = UINT16_MAX;
	int8_t x3502 = -1;
	uint32_t x3503 = 741181U;
	volatile uint32_t t50 = 49486820U;

    t50 = ((x3501%(x3502/x3503))>>x3504);

    if (t50 != 900U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x3613 = UINT16_MAX;
	uint32_t x3614 = 72050976U;
	int16_t x3615 = INT16_MAX;
	uint16_t x3616 = 5U;
	uint32_t t51 = 28367U;

    t51 = ((x3613%(x3614/x3615))>>x3616);

    if (t51 != 56U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x3653 = -1;
	uint64_t x3655 = 4137991250011LLU;
	uint16_t x3656 = 44U;
	volatile uint64_t t52 = 31639087LLU;

    t52 = ((x3653%(x3654/x3655))>>x3656);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3697 = -89;
	uint64_t x3698 = UINT64_MAX;
	int32_t x3699 = INT32_MAX;
	uint8_t x3700 = 5U;

    t53 = ((x3697%(x3698/x3699))>>x3700);

    if (t53 != 268435453LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3865 = INT8_MIN;
	uint8_t x3866 = 1U;
	int64_t x3867 = -1LL;
	uint8_t x3868 = 2U;

    t54 = ((x3865%(x3866/x3867))>>x3868);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x3906 = INT16_MIN;
	int32_t x3907 = -1;

    t55 = ((x3905%(x3906/x3907))>>x3908);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x3925 = 127U;
	uint64_t x3927 = 563584LLU;

    t56 = ((x3925%(x3926/x3927))>>x3928);

    if (t56 != 63LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3965 = 26U;
	uint16_t x3966 = UINT16_MAX;
	uint32_t x3967 = 53U;
	volatile uint32_t t57 = 88U;

    t57 = ((x3965%(x3966/x3967))>>x3968);

    if (t57 != 26U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x4174 = INT16_MAX;
	int8_t x4176 = 1;
	int32_t t58 = 4093101;

    t58 = ((x4173%(x4174/x4175))>>x4176);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4285 = INT64_MAX;
	static int64_t x4286 = INT64_MAX;
	int64_t t59 = -10LL;

    t59 = ((x4285%(x4286/x4287))>>x4288);

    if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x4313 = UINT8_MAX;
	int64_t x4314 = INT64_MIN;
	uint8_t x4316 = 0U;

    t60 = ((x4313%(x4314/x4315))>>x4316);

    if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x4333 = INT32_MIN;
	uint32_t x4334 = 248U;
	uint16_t x4335 = 1U;
	static volatile uint8_t x4336 = 12U;

    t61 = ((x4333%(x4334/x4335))>>x4336);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x4353 = -464LL;
	int16_t x4354 = -6;
	uint64_t x4355 = 45LLU;
	volatile int16_t x4356 = 2;
	volatile uint64_t t62 = 1416553943837753LLU;

    t62 = ((x4353%(x4354/x4355))>>x4356);

    if (t62 != 102481911520608508LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x4401 = 2U;
	uint32_t x4402 = UINT32_MAX;
	static uint32_t x4403 = 74563709U;
	volatile uint32_t t63 = 2166U;

    t63 = ((x4401%(x4402/x4403))>>x4404);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x4457 = -1LL;
	volatile int8_t x4458 = -1;
	static uint64_t x4459 = 360647967LLU;
	int8_t x4460 = 0;

    t64 = ((x4457%(x4458/x4459))>>x4460);

    if (t64 != 200586201LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x4525 = -318;
	uint16_t x4526 = UINT16_MAX;
	static int16_t x4527 = INT16_MIN;
	static int32_t t65 = 0;

    t65 = ((x4525%(x4526/x4527))>>x4528);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4633 = 8U;
	int16_t x4634 = -1;
	int16_t x4635 = -1;
	volatile int16_t x4636 = 1;
	volatile int32_t t66 = 9476281;

    t66 = ((x4633%(x4634/x4635))>>x4636);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x4641 = -2049570LL;
	uint64_t x4642 = 40370934826LLU;
	volatile uint64_t t67 = 7326589415430LLU;

    t67 = ((x4641%(x4642/x4643))>>x4644);

    if (t67 != 137905LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x4646 = INT64_MIN;
	static uint16_t x4648 = 52U;
	uint64_t t68 = 14435LLU;

    t68 = ((x4645%(x4646/x4647))>>x4648);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x4701 = 26183U;
	int8_t x4702 = INT8_MIN;
	int8_t x4704 = 11;
	uint32_t t69 = 27958U;

    t69 = ((x4701%(x4702/x4703))>>x4704);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x4709 = INT8_MIN;
	uint64_t x4710 = 407635707198LLU;
	static uint16_t x4711 = UINT16_MAX;
	uint16_t x4712 = 1U;
	volatile uint64_t t70 = 8438689LLU;

    t70 = ((x4709%(x4710/x4711))>>x4712);

    if (t70 != 694342LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x4757 = UINT16_MAX;
	volatile int64_t x4758 = INT64_MAX;
	uint8_t x4759 = UINT8_MAX;

    t71 = ((x4757%(x4758/x4759))>>x4760);

    if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x4822 = -480LL;
	uint64_t x4823 = 30654LLU;
	uint32_t x4824 = 29U;
	uint64_t t72 = 47749345211LLU;

    t72 = ((x4821%(x4822/x4823))>>x4824);

    if (t72 != 1120889LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4889 = 18U;
	int64_t x4890 = INT64_MIN;
	int16_t x4891 = -4127;
	static int64_t t73 = 0LL;

    t73 = ((x4889%(x4890/x4891))>>x4892);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x4929 = 15523654250445956LLU;
	int64_t x4930 = INT64_MIN;
	int16_t x4931 = INT16_MAX;
	int64_t x4932 = 1LL;
	volatile uint64_t t74 = 447440LLU;

    t74 = ((x4929%(x4930/x4931))>>x4932);

    if (t74 != 7761827125222978LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x4957 = -1289559961668487LL;
	static uint64_t x4958 = UINT64_MAX;
	uint32_t x4959 = UINT32_MAX;
	uint8_t x4960 = 14U;

    t75 = ((x4957%(x4958/x4959))>>x4960);

    if (t75 != 242264LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x4973 = 0;
	uint16_t x4974 = UINT16_MAX;
	volatile int32_t t76 = 12511;

    t76 = ((x4973%(x4974/x4975))>>x4976);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x5014 = UINT32_MAX;
	uint8_t x5016 = 14U;
	volatile uint32_t t77 = 175U;

    t77 = ((x5013%(x5014/x5015))>>x5016);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x5101 = INT32_MAX;
	int16_t x5102 = INT16_MIN;
	uint8_t x5103 = UINT8_MAX;
	uint16_t x5104 = 4U;

    t78 = ((x5101%(x5102/x5103))>>x5104);

    if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x5161 = 0;
	volatile uint64_t x5162 = 5658LLU;
	int16_t x5163 = 1;
	int8_t x5164 = 2;
	static volatile uint64_t t79 = 36830873949LLU;

    t79 = ((x5161%(x5162/x5163))>>x5164);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x5273 = INT8_MIN;
	static int32_t x5275 = INT32_MIN;
	int64_t t80 = 3118646892379943747LL;

    t80 = ((x5273%(x5274/x5275))>>x5276);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x5442 = 42U;
	int16_t x5443 = 1;

    t81 = ((x5441%(x5442/x5443))>>x5444);

    if (t81 != 20) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x5497 = UINT32_MAX;
	static int8_t x5498 = -1;
	volatile int64_t x5499 = -1LL;
	uint16_t x5500 = 56U;
	static volatile int64_t t82 = -2LL;

    t82 = ((x5497%(x5498/x5499))>>x5500);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x5505 = 5043945LL;
	volatile int32_t x5506 = -352;
	uint16_t x5508 = 11U;
	volatile int64_t t83 = 136017LL;

    t83 = ((x5505%(x5506/x5507))>>x5508);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x5526 = INT64_MIN;
	volatile int64_t x5527 = 722737261LL;
	int16_t x5528 = 3;
	volatile int64_t t84 = -928LL;

    t84 = ((x5525%(x5526/x5527))>>x5528);

    if (t84 != 2499LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x5533 = 174636161789LLU;
	volatile int8_t x5534 = INT8_MAX;
	volatile uint8_t x5536 = 57U;
	uint64_t t85 = 15881035112LLU;

    t85 = ((x5533%(x5534/x5535))>>x5536);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x5670 = INT64_MAX;
	static volatile int8_t x5671 = INT8_MIN;
	int8_t x5672 = 15;
	uint64_t t86 = 42374645773LLU;

    t86 = ((x5669%(x5670/x5671))>>x5672);

    if (t86 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x5769 = INT16_MIN;
	int64_t x5770 = -1LL;
	int32_t x5771 = -1;
	static int16_t x5772 = 2;
	volatile int64_t t87 = 3738484LL;

    t87 = ((x5769%(x5770/x5771))>>x5772);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x5774 = -1LL;
	int64_t x5775 = -1LL;
	uint64_t x5776 = 4LLU;
	int64_t t88 = 876LL;

    t88 = ((x5773%(x5774/x5775))>>x5776);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x5826 = INT16_MIN;
	int8_t x5828 = 0;
	volatile uint32_t t89 = 83U;

    t89 = ((x5825%(x5826/x5827))>>x5828);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x5897 = 8042910819LL;
	volatile int64_t x5898 = -1LL;
	int8_t x5900 = 53;
	int64_t t90 = -1638728238854452LL;

    t90 = ((x5897%(x5898/x5899))>>x5900);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x5910 = INT32_MIN;
	uint16_t x5911 = 57U;
	uint64_t t91 = 33LLU;

    t91 = ((x5909%(x5910/x5911))>>x5912);

    if (t91 != 1766161137LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x5977 = UINT16_MAX;
	static int64_t x5978 = INT64_MIN;
	int8_t x5979 = -5;
	uint16_t x5980 = 37U;
	int64_t t92 = -64730942238795115LL;

    t92 = ((x5977%(x5978/x5979))>>x5980);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x6045 = INT16_MIN;
	int8_t x6046 = INT8_MIN;
	static volatile uint8_t x6047 = 1U;
	volatile uint16_t x6048 = 13U;
	static int32_t t93 = -1645;

    t93 = ((x6045%(x6046/x6047))>>x6048);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x6257 = -1LL;
	static uint16_t x6258 = UINT16_MAX;
	int16_t x6259 = INT16_MIN;
	uint8_t x6260 = 55U;
	volatile int64_t t94 = 68176LL;

    t94 = ((x6257%(x6258/x6259))>>x6260);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x6262 = UINT64_MAX;
	static int8_t x6263 = -1;
	volatile uint64_t t95 = 1081352003189404LLU;

    t95 = ((x6261%(x6262/x6263))>>x6264);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x6309 = 2LL;
	volatile int64_t x6310 = -176488745825LL;
	static volatile int64_t x6311 = -1LL;
	static uint64_t x6312 = 34LLU;
	static volatile int64_t t96 = 1980707664120LL;

    t96 = ((x6309%(x6310/x6311))>>x6312);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x6329 = -2151;
	static int8_t x6330 = -1;
	int8_t x6332 = 0;
	uint64_t t97 = 35233003526LLU;

    t97 = ((x6329%(x6330/x6331))>>x6332);

    if (t97 != 18446744073709549465LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x6369 = -6;
	static volatile uint64_t x6370 = UINT64_MAX;
	uint16_t x6371 = 3U;
	volatile uint64_t t98 = 1LLU;

    t98 = ((x6369%(x6370/x6371))>>x6372);

    if (t98 != 48038396025285290LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x6573 = 163LLU;
	static int16_t x6574 = -1;
	static int8_t x6576 = 0;
	static uint64_t t99 = 6917LLU;

    t99 = ((x6573%(x6574/x6575))>>x6576);

    if (t99 != 163LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x6591 = UINT32_MAX;
	uint8_t x6592 = 3U;
	volatile uint32_t t100 = 7467U;

    t100 = ((x6589%(x6590/x6591))>>x6592);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x6641 = 1030519628491761LLU;
	static int16_t x6642 = -437;
	static uint8_t x6644 = 57U;

    t101 = ((x6641%(x6642/x6643))>>x6644);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x6645 = 2LLU;
	uint8_t x6646 = UINT8_MAX;
	int8_t x6648 = 19;
	uint64_t t102 = 8724LLU;

    t102 = ((x6645%(x6646/x6647))>>x6648);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x6781 = INT8_MAX;
	int64_t x6782 = -1LL;
	int32_t x6783 = -1;
	uint8_t x6784 = 41U;
	volatile int64_t t103 = -13LL;

    t103 = ((x6781%(x6782/x6783))>>x6784);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x6866 = 1LLU;
	int8_t x6867 = 1;
	volatile uint64_t t104 = 266088824LLU;

    t104 = ((x6865%(x6866/x6867))>>x6868);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x7057 = INT32_MAX;
	uint32_t x7058 = UINT32_MAX;
	volatile uint32_t x7059 = 703U;
	static uint16_t x7060 = 21U;
	static uint32_t t105 = 460057U;

    t105 = ((x7057%(x7058/x7059))>>x7060);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x7090 = UINT64_MAX;
	int16_t x7091 = -39;
	static uint8_t x7092 = 4U;
	uint64_t t106 = 138549LLU;

    t106 = ((x7089%(x7090/x7091))>>x7092);

    if (t106 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

