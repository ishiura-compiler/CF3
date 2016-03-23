
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

int32_t t0 = -14;
static volatile int16_t x167 = 266;
static volatile uint16_t x217 = 467U;
volatile uint32_t x218 = 7U;
volatile uint16_t x257 = 0U;
int64_t x265 = 5205487916LL;
volatile int64_t x267 = -1LL;
volatile uint32_t x283 = 1139U;
static uint32_t x289 = 908U;
int64_t x291 = -1LL;
int8_t x292 = 2;
int32_t t10 = -2956;
volatile uint8_t x352 = 35U;
int8_t x362 = 0;
static uint8_t x506 = 0U;
uint64_t x619 = 25901LLU;
volatile int8_t x620 = INT8_MIN;
uint16_t x649 = 202U;
volatile uint8_t x650 = 0U;
uint16_t x655 = 12U;
int32_t t18 = 1047;
volatile uint32_t x715 = UINT32_MAX;
volatile uint64_t x728 = UINT64_MAX;
volatile int32_t t22 = 1129;
volatile uint16_t x823 = 1U;
int8_t x1009 = 56;
volatile int32_t t26 = -90534105;
int8_t x1515 = INT8_MAX;
static int32_t t30 = -88964;
int32_t x1656 = INT32_MIN;
volatile int32_t x1684 = -11;
int32_t x1688 = INT32_MIN;
volatile int32_t t34 = 0;
static volatile uint64_t x1853 = UINT64_MAX;
static uint64_t x1871 = 6LLU;
volatile int32_t t36 = -1;
int8_t x1959 = INT8_MIN;
uint32_t x1973 = 36210364U;
int8_t x2065 = 0;
volatile uint64_t x2108 = 6800529881311275LLU;
volatile int32_t t40 = 6880880;
volatile uint32_t x2221 = 385607U;
int8_t x2280 = -58;
uint32_t x2349 = 3U;
static uint16_t x2369 = 40U;
uint32_t x2405 = UINT32_MAX;
volatile int16_t x2406 = 1;
int16_t x2422 = 1;
int32_t x2424 = INT32_MIN;
static volatile uint32_t x2485 = UINT32_MAX;
volatile int32_t t51 = 66842;
int8_t x2525 = INT8_MAX;
int16_t x2528 = -13022;
volatile int32_t t52 = 36885247;
volatile uint32_t x2729 = UINT32_MAX;
volatile int16_t x2749 = INT16_MAX;
static volatile int64_t x2750 = 3LL;
int8_t x2751 = -1;
uint8_t x2773 = 7U;
volatile int32_t t58 = -1015343;
int16_t x2813 = 3;
uint64_t x2814 = 18LLU;
static volatile uint32_t x2917 = UINT32_MAX;
volatile uint8_t x2918 = 2U;
uint16_t x2919 = 983U;
int8_t x2920 = INT8_MIN;
static volatile uint32_t x2925 = 57040894U;
uint16_t x2938 = 2U;
volatile int32_t t62 = 607;
volatile uint16_t x3094 = 1U;
int8_t x3124 = INT8_MAX;
int16_t x3306 = 0;
static uint8_t x3308 = 0U;
volatile int32_t t67 = 1;
static uint16_t x3537 = UINT16_MAX;
uint64_t x3540 = UINT64_MAX;
static int32_t t70 = -27639;
static volatile uint8_t x3711 = 69U;
int32_t t71 = -12971046;
uint64_t x3737 = 7833380145404166362LLU;
int16_t x3740 = 468;
int64_t x4147 = INT64_MIN;
static int8_t x4148 = INT8_MIN;
volatile int32_t t77 = 0;
uint64_t x4361 = 153LLU;
int8_t x4362 = 7;
static volatile int32_t t81 = -3271920;
static uint64_t x4449 = 255399619641752LLU;
uint8_t x4450 = 0U;
uint8_t x4470 = 1U;
volatile int64_t x4471 = -18LL;
volatile int32_t t84 = -376869311;
int16_t x4785 = 14;
static uint8_t x4918 = 30U;
int8_t x4990 = 8;
int32_t x4992 = INT32_MIN;
int32_t t89 = 2175398;
int32_t x5027 = -1;
volatile int32_t t90 = -348619;
uint16_t x5162 = 10U;
uint64_t x5169 = UINT64_MAX;
uint8_t x5171 = UINT8_MAX;
volatile int32_t t93 = -4347249;
int32_t t94 = 2;
uint16_t x5260 = 3U;
uint32_t x5445 = UINT32_MAX;
volatile uint16_t x5446 = 0U;
static int8_t x5456 = 53;
uint32_t x5668 = 659147088U;
int8_t x5733 = INT8_MAX;
int64_t x5751 = INT64_MIN;
volatile int32_t t101 = -3;
volatile int16_t x5809 = 3;
static uint8_t x5812 = UINT8_MAX;
int32_t t103 = 3578814;
volatile uint32_t x5841 = 15116U;
int32_t x5857 = 386;
int64_t x6127 = -15991LL;
int32_t t107 = -22730;
int64_t x6136 = INT64_MIN;
volatile int32_t t108 = 139665;
static int32_t t113 = 425;
uint8_t x6560 = 26U;
int8_t x6594 = 0;


void f0(void) {
    	uint32_t x1 = 119630471U;
	int16_t x2 = 3;
	static volatile int16_t x3 = INT16_MIN;
	static int32_t x4 = INT32_MIN;

    t0 = (((x1<<x2)|x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 113LL;
	static uint32_t x10 = 4U;
	static int64_t x11 = -1LL;
	volatile int8_t x12 = INT8_MIN;
	int32_t t1 = -35114;

    t1 = (((x9<<x10)|x11)!=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x29 = 6U;
	volatile uint8_t x30 = 19U;
	static volatile int32_t x31 = INT32_MIN;
	uint8_t x32 = 3U;
	int32_t t2 = -4661908;

    t2 = (((x29<<x30)|x31)!=x32);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x45 = INT16_MAX;
	uint8_t x46 = 2U;
	int64_t x47 = -1LL;
	static uint16_t x48 = 77U;
	volatile int32_t t3 = -511624;

    t3 = (((x45<<x46)|x47)!=x48);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x165 = UINT64_MAX;
	uint16_t x166 = 43U;
	static int64_t x168 = -1LL;
	volatile int32_t t4 = -10;

    t4 = (((x165<<x166)|x167)!=x168);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x219 = 3U;
	volatile uint32_t x220 = UINT32_MAX;
	static volatile int32_t t5 = 21325575;

    t5 = (((x217<<x218)|x219)!=x220);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x249 = 19342U;
	int8_t x250 = 0;
	int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MAX;
	volatile int32_t t6 = -168463;

    t6 = (((x249<<x250)|x251)!=x252);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x258 = 1;
	static int8_t x259 = INT8_MAX;
	int16_t x260 = -1;
	volatile int32_t t7 = 1;

    t7 = (((x257<<x258)|x259)!=x260);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x266 = 6U;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t8 = -40814681;

    t8 = (((x265<<x266)|x267)!=x268);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x281 = 1;
	static uint16_t x282 = 2U;
	static uint32_t x284 = 1525U;
	int32_t t9 = -117;

    t9 = (((x281<<x282)|x283)!=x284);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x290 = 26LLU;

    t10 = (((x289<<x290)|x291)!=x292);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x345 = 21165U;
	uint16_t x346 = 22U;
	static int32_t x347 = 1740455;
	int8_t x348 = -3;
	volatile int32_t t11 = -6964269;

    t11 = (((x345<<x346)|x347)!=x348);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x349 = 1LL;
	uint16_t x350 = 0U;
	int8_t x351 = -1;
	volatile int32_t t12 = 247;

    t12 = (((x349<<x350)|x351)!=x352);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x361 = 2U;
	static uint16_t x363 = 0U;
	uint16_t x364 = UINT16_MAX;
	int32_t t13 = -20360946;

    t13 = (((x361<<x362)|x363)!=x364);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x497 = 3507;
	int8_t x498 = 5;
	static int64_t x499 = INT64_MIN;
	int64_t x500 = 3674708814555763391LL;
	volatile int32_t t14 = -363460;

    t14 = (((x497<<x498)|x499)!=x500);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x505 = 23U;
	static int64_t x507 = -121180136501913179LL;
	volatile int8_t x508 = INT8_MAX;
	int32_t t15 = -509830;

    t15 = (((x505<<x506)|x507)!=x508);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x617 = INT16_MAX;
	int32_t x618 = 0;
	volatile int32_t t16 = -14621555;

    t16 = (((x617<<x618)|x619)!=x620);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x651 = 2U;
	volatile uint8_t x652 = 105U;
	int32_t t17 = -290763;

    t17 = (((x649<<x650)|x651)!=x652);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x653 = INT8_MAX;
	int8_t x654 = 1;
	uint32_t x656 = 124165868U;

    t18 = (((x653<<x654)|x655)!=x656);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x693 = INT16_MAX;
	uint8_t x694 = 0U;
	int16_t x695 = -1;
	int8_t x696 = INT8_MIN;
	int32_t t19 = 45779;

    t19 = (((x693<<x694)|x695)!=x696);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x713 = 1U;
	static int32_t x714 = 0;
	int64_t x716 = INT64_MAX;
	int32_t t20 = -1690;

    t20 = (((x713<<x714)|x715)!=x716);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x725 = 0U;
	uint8_t x726 = 11U;
	volatile int32_t x727 = 29049220;
	int32_t t21 = -1995;

    t21 = (((x725<<x726)|x727)!=x728);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x793 = INT8_MAX;
	volatile int8_t x794 = 0;
	int8_t x795 = -3;
	int32_t x796 = INT32_MIN;

    t22 = (((x793<<x794)|x795)!=x796);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile uint64_t x822 = 3LLU;
	int32_t x824 = INT32_MIN;
	int32_t t23 = -169;

    t23 = (((x821<<x822)|x823)!=x824);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x853 = UINT64_MAX;
	int8_t x854 = 0;
	uint64_t x855 = 5059977LLU;
	int32_t x856 = -1;
	int32_t t24 = -226732582;

    t24 = (((x853<<x854)|x855)!=x856);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x925 = 1U;
	uint8_t x926 = 2U;
	static int32_t x927 = INT32_MIN;
	uint8_t x928 = 88U;
	volatile int32_t t25 = -853593;

    t25 = (((x925<<x926)|x927)!=x928);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1010 = 0LL;
	uint16_t x1011 = UINT16_MAX;
	volatile int16_t x1012 = INT16_MIN;

    t26 = (((x1009<<x1010)|x1011)!=x1012);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1173 = 0;
	volatile int16_t x1174 = 5;
	volatile uint16_t x1175 = 28U;
	int64_t x1176 = INT64_MAX;
	volatile int32_t t27 = -3;

    t27 = (((x1173<<x1174)|x1175)!=x1176);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x1221 = 31;
	uint16_t x1222 = 0U;
	static int64_t x1223 = 10748LL;
	uint16_t x1224 = 92U;
	volatile int32_t t28 = -6799;

    t28 = (((x1221<<x1222)|x1223)!=x1224);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1513 = 941703U;
	uint8_t x1514 = 8U;
	volatile int32_t x1516 = 7341;
	volatile int32_t t29 = -23401;

    t29 = (((x1513<<x1514)|x1515)!=x1516);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1601 = 1;
	uint8_t x1602 = 26U;
	uint32_t x1603 = 311843U;
	uint64_t x1604 = 101148291321062383LLU;

    t30 = (((x1601<<x1602)|x1603)!=x1604);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1653 = 10U;
	static int8_t x1654 = 4;
	uint32_t x1655 = 126478U;
	static int32_t t31 = -36047;

    t31 = (((x1653<<x1654)|x1655)!=x1656);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x1657 = 1148LLU;
	static uint8_t x1658 = 3U;
	volatile uint64_t x1659 = 8510050492077312099LLU;
	uint64_t x1660 = 118499LLU;
	static volatile int32_t t32 = -7098;

    t32 = (((x1657<<x1658)|x1659)!=x1660);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1681 = UINT64_MAX;
	int32_t x1682 = 3;
	int8_t x1683 = INT8_MIN;
	volatile int32_t t33 = 66096;

    t33 = (((x1681<<x1682)|x1683)!=x1684);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1685 = 4U;
	int32_t x1686 = 3;
	static int16_t x1687 = -1;

    t34 = (((x1685<<x1686)|x1687)!=x1688);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1854 = 9;
	uint64_t x1855 = 4603281037129228573LLU;
	uint16_t x1856 = 1688U;
	volatile int32_t t35 = 181;

    t35 = (((x1853<<x1854)|x1855)!=x1856);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1869 = UINT8_MAX;
	uint8_t x1870 = 3U;
	static int8_t x1872 = INT8_MIN;

    t36 = (((x1869<<x1870)|x1871)!=x1872);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1957 = 39U;
	volatile uint8_t x1958 = 3U;
	static volatile uint8_t x1960 = 0U;
	int32_t t37 = 251;

    t37 = (((x1957<<x1958)|x1959)!=x1960);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1974 = 8U;
	uint8_t x1975 = 0U;
	int16_t x1976 = INT16_MAX;
	int32_t t38 = 318;

    t38 = (((x1973<<x1974)|x1975)!=x1976);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x2066 = 0U;
	int32_t x2067 = -1;
	int8_t x2068 = -1;
	volatile int32_t t39 = -38434;

    t39 = (((x2065<<x2066)|x2067)!=x2068);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x2105 = 5208787644791120613LLU;
	int8_t x2106 = 36;
	int32_t x2107 = -25;

    t40 = (((x2105<<x2106)|x2107)!=x2108);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2149 = UINT32_MAX;
	uint8_t x2150 = 0U;
	int8_t x2151 = INT8_MAX;
	int32_t x2152 = -2703114;
	volatile int32_t t41 = 1;

    t41 = (((x2149<<x2150)|x2151)!=x2152);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2222 = 1U;
	int8_t x2223 = 1;
	static uint32_t x2224 = UINT32_MAX;
	volatile int32_t t42 = 45;

    t42 = (((x2221<<x2222)|x2223)!=x2224);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2237 = 42U;
	volatile int16_t x2238 = 30;
	static int64_t x2239 = INT64_MIN;
	volatile int64_t x2240 = -1LL;
	volatile int32_t t43 = 930;

    t43 = (((x2237<<x2238)|x2239)!=x2240);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x2261 = 14018249U;
	uint16_t x2262 = 3U;
	volatile int64_t x2263 = -870001127439342LL;
	uint32_t x2264 = 72U;
	int32_t t44 = -3232;

    t44 = (((x2261<<x2262)|x2263)!=x2264);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x2277 = 6;
	volatile uint16_t x2278 = 25U;
	int32_t x2279 = INT32_MAX;
	volatile int32_t t45 = 343236848;

    t45 = (((x2277<<x2278)|x2279)!=x2280);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x2341 = INT16_MAX;
	uint16_t x2342 = 1U;
	int64_t x2343 = -356234366LL;
	static uint8_t x2344 = UINT8_MAX;
	volatile int32_t t46 = -11;

    t46 = (((x2341<<x2342)|x2343)!=x2344);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x2350 = 3U;
	volatile uint64_t x2351 = 19708750317218241LLU;
	int32_t x2352 = -1;
	volatile int32_t t47 = 382756;

    t47 = (((x2349<<x2350)|x2351)!=x2352);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x2370 = 3;
	int16_t x2371 = 2;
	int8_t x2372 = -13;
	int32_t t48 = 60;

    t48 = (((x2369<<x2370)|x2371)!=x2372);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2407 = 4U;
	uint32_t x2408 = 483317U;
	static int32_t t49 = -171;

    t49 = (((x2405<<x2406)|x2407)!=x2408);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x2421 = 2U;
	int16_t x2423 = -1;
	volatile int32_t t50 = 120231;

    t50 = (((x2421<<x2422)|x2423)!=x2424);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2486 = 12U;
	int16_t x2487 = INT16_MIN;
	int16_t x2488 = INT16_MIN;

    t51 = (((x2485<<x2486)|x2487)!=x2488);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2526 = 0U;
	int32_t x2527 = INT32_MAX;

    t52 = (((x2525<<x2526)|x2527)!=x2528);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x2585 = 66U;
	uint8_t x2586 = 24U;
	int16_t x2587 = 561;
	uint8_t x2588 = 7U;
	volatile int32_t t53 = 255945;

    t53 = (((x2585<<x2586)|x2587)!=x2588);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x2730 = 18U;
	volatile int8_t x2731 = -1;
	static int64_t x2732 = -1LL;
	int32_t t54 = -1410;

    t54 = (((x2729<<x2730)|x2731)!=x2732);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x2752 = 1U;
	static int32_t t55 = -507290;

    t55 = (((x2749<<x2750)|x2751)!=x2752);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x2753 = 0U;
	int8_t x2754 = 19;
	int8_t x2755 = INT8_MAX;
	uint64_t x2756 = 394LLU;
	static int32_t t56 = -108;

    t56 = (((x2753<<x2754)|x2755)!=x2756);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2769 = 3022;
	volatile uint8_t x2770 = 0U;
	static uint16_t x2771 = 23460U;
	int32_t x2772 = INT32_MIN;
	int32_t t57 = -248224;

    t57 = (((x2769<<x2770)|x2771)!=x2772);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x2774 = 2LLU;
	int16_t x2775 = -1;
	int32_t x2776 = INT32_MAX;

    t58 = (((x2773<<x2774)|x2775)!=x2776);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x2815 = 6389U;
	volatile int16_t x2816 = -11;
	int32_t t59 = 4451;

    t59 = (((x2813<<x2814)|x2815)!=x2816);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t t60 = -42;

    t60 = (((x2917<<x2918)|x2919)!=x2920);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x2926 = 9LL;
	static int64_t x2927 = INT64_MAX;
	int32_t x2928 = INT32_MIN;
	volatile int32_t t61 = -1810272;

    t61 = (((x2925<<x2926)|x2927)!=x2928);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x2937 = 15083;
	uint16_t x2939 = 5U;
	static volatile int16_t x2940 = INT16_MIN;

    t62 = (((x2937<<x2938)|x2939)!=x2940);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3061 = 1U;
	uint8_t x3062 = 29U;
	static int16_t x3063 = -1;
	uint64_t x3064 = 6425632LLU;
	static int32_t t63 = -28;

    t63 = (((x3061<<x3062)|x3063)!=x3064);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3093 = 7989666124LL;
	volatile int64_t x3095 = -1LL;
	uint16_t x3096 = UINT16_MAX;
	volatile int32_t t64 = -7427035;

    t64 = (((x3093<<x3094)|x3095)!=x3096);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3121 = INT8_MAX;
	uint8_t x3122 = 2U;
	uint64_t x3123 = 241LLU;
	static volatile int32_t t65 = -3661788;

    t65 = (((x3121<<x3122)|x3123)!=x3124);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3221 = 75;
	uint16_t x3222 = 1U;
	int64_t x3223 = INT64_MIN;
	int32_t x3224 = INT32_MIN;
	int32_t t66 = -630;

    t66 = (((x3221<<x3222)|x3223)!=x3224);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x3305 = 4U;
	volatile uint64_t x3307 = UINT64_MAX;

    t67 = (((x3305<<x3306)|x3307)!=x3308);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x3401 = 26U;
	uint32_t x3402 = 4U;
	int64_t x3403 = INT64_MAX;
	uint64_t x3404 = 43243998561186LLU;
	int32_t t68 = 501017843;

    t68 = (((x3401<<x3402)|x3403)!=x3404);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x3538 = 8U;
	uint16_t x3539 = 29U;
	volatile int32_t t69 = 66604;

    t69 = (((x3537<<x3538)|x3539)!=x3540);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x3657 = 276470761166005336LLU;
	int8_t x3658 = 22;
	uint64_t x3659 = 52324LLU;
	volatile int8_t x3660 = 8;

    t70 = (((x3657<<x3658)|x3659)!=x3660);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x3709 = 310U;
	int8_t x3710 = 7;
	int32_t x3712 = -1;

    t71 = (((x3709<<x3710)|x3711)!=x3712);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x3738 = 3U;
	volatile int32_t x3739 = -1;
	volatile int32_t t72 = -786;

    t72 = (((x3737<<x3738)|x3739)!=x3740);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x3777 = UINT32_MAX;
	volatile uint8_t x3778 = 0U;
	uint8_t x3779 = 52U;
	int16_t x3780 = INT16_MAX;
	volatile int32_t t73 = -5;

    t73 = (((x3777<<x3778)|x3779)!=x3780);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x3985 = 119598LLU;
	int32_t x3986 = 0;
	uint32_t x3987 = 1251688U;
	int32_t x3988 = -1;
	static int32_t t74 = -1;

    t74 = (((x3985<<x3986)|x3987)!=x3988);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x4009 = UINT16_MAX;
	int16_t x4010 = 8;
	int8_t x4011 = INT8_MIN;
	volatile int16_t x4012 = 14141;
	volatile int32_t t75 = -902;

    t75 = (((x4009<<x4010)|x4011)!=x4012);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x4093 = UINT32_MAX;
	int8_t x4094 = 1;
	int16_t x4095 = INT16_MIN;
	uint16_t x4096 = 43U;
	int32_t t76 = 4;

    t76 = (((x4093<<x4094)|x4095)!=x4096);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4145 = INT8_MAX;
	int32_t x4146 = 0;

    t77 = (((x4145<<x4146)|x4147)!=x4148);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x4153 = 1323176LL;
	int64_t x4154 = 1LL;
	int8_t x4155 = 1;
	static int8_t x4156 = INT8_MIN;
	int32_t t78 = -171;

    t78 = (((x4153<<x4154)|x4155)!=x4156);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x4241 = 5754436585227329838LLU;
	volatile uint8_t x4242 = 1U;
	volatile int64_t x4243 = -1LL;
	static int32_t x4244 = INT32_MIN;
	int32_t t79 = -7848;

    t79 = (((x4241<<x4242)|x4243)!=x4244);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x4353 = INT16_MAX;
	static int8_t x4354 = 2;
	int8_t x4355 = -1;
	static volatile int8_t x4356 = INT8_MAX;
	volatile int32_t t80 = 29279014;

    t80 = (((x4353<<x4354)|x4355)!=x4356);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x4363 = INT32_MIN;
	volatile uint16_t x4364 = UINT16_MAX;

    t81 = (((x4361<<x4362)|x4363)!=x4364);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x4417 = INT16_MAX;
	static int8_t x4418 = 2;
	int8_t x4419 = -1;
	static int32_t x4420 = INT32_MIN;
	volatile int32_t t82 = -6578805;

    t82 = (((x4417<<x4418)|x4419)!=x4420);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4451 = INT16_MIN;
	int16_t x4452 = -1;
	int32_t t83 = 13624;

    t83 = (((x4449<<x4450)|x4451)!=x4452);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x4469 = UINT64_MAX;
	volatile int32_t x4472 = -2845672;

    t84 = (((x4469<<x4470)|x4471)!=x4472);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x4473 = 101538;
	volatile uint64_t x4474 = 1LLU;
	int8_t x4475 = 28;
	int32_t x4476 = -2;
	volatile int32_t t85 = -21;

    t85 = (((x4473<<x4474)|x4475)!=x4476);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x4786 = 12U;
	uint32_t x4787 = 692652U;
	uint32_t x4788 = UINT32_MAX;
	static volatile int32_t t86 = 1;

    t86 = (((x4785<<x4786)|x4787)!=x4788);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x4825 = 13U;
	int8_t x4826 = 3;
	uint8_t x4827 = 4U;
	int64_t x4828 = 8349053937LL;
	int32_t t87 = -2;

    t87 = (((x4825<<x4826)|x4827)!=x4828);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x4917 = 83253U;
	static volatile int16_t x4919 = INT16_MAX;
	volatile int8_t x4920 = INT8_MAX;
	int32_t t88 = 584646;

    t88 = (((x4917<<x4918)|x4919)!=x4920);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x4989 = UINT64_MAX;
	int64_t x4991 = INT64_MAX;

    t89 = (((x4989<<x4990)|x4991)!=x4992);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x5025 = 29036U;
	volatile uint8_t x5026 = 10U;
	uint8_t x5028 = 29U;

    t90 = (((x5025<<x5026)|x5027)!=x5028);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x5077 = 312U;
	uint16_t x5078 = 0U;
	volatile int32_t x5079 = 0;
	int64_t x5080 = INT64_MAX;
	static volatile int32_t t91 = 873501657;

    t91 = (((x5077<<x5078)|x5079)!=x5080);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x5161 = 605398LLU;
	static int32_t x5163 = -1;
	int8_t x5164 = -1;
	int32_t t92 = 1099985;

    t92 = (((x5161<<x5162)|x5163)!=x5164);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x5170 = 41U;
	uint16_t x5172 = 961U;

    t93 = (((x5169<<x5170)|x5171)!=x5172);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x5205 = 29U;
	volatile int32_t x5206 = 1;
	volatile int8_t x5207 = -1;
	int16_t x5208 = INT16_MAX;

    t94 = (((x5205<<x5206)|x5207)!=x5208);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x5257 = 6228;
	uint8_t x5258 = 5U;
	int64_t x5259 = INT64_MIN;
	volatile int32_t t95 = 97487;

    t95 = (((x5257<<x5258)|x5259)!=x5260);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x5353 = 4;
	static int16_t x5354 = 0;
	int32_t x5355 = -1;
	uint32_t x5356 = 6934U;
	int32_t t96 = -6344641;

    t96 = (((x5353<<x5354)|x5355)!=x5356);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x5447 = 22727773410034LLU;
	int32_t x5448 = INT32_MAX;
	int32_t t97 = 1;

    t97 = (((x5445<<x5446)|x5447)!=x5448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x5453 = 5LLU;
	volatile uint64_t x5454 = 8LLU;
	static int8_t x5455 = INT8_MIN;
	static volatile int32_t t98 = -2;

    t98 = (((x5453<<x5454)|x5455)!=x5456);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5665 = 12;
	int8_t x5666 = 1;
	int8_t x5667 = INT8_MAX;
	int32_t t99 = -557742271;

    t99 = (((x5665<<x5666)|x5667)!=x5668);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x5734 = 0;
	volatile uint64_t x5735 = 32463392LLU;
	int16_t x5736 = INT16_MAX;
	int32_t t100 = 47;

    t100 = (((x5733<<x5734)|x5735)!=x5736);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x5749 = 41U;
	static uint8_t x5750 = 15U;
	uint16_t x5752 = 13U;

    t101 = (((x5749<<x5750)|x5751)!=x5752);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x5810 = 1U;
	uint64_t x5811 = 495678LLU;
	volatile int32_t t102 = -24103043;

    t102 = (((x5809<<x5810)|x5811)!=x5812);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x5821 = UINT16_MAX;
	volatile int16_t x5822 = 0;
	int16_t x5823 = -1;
	int16_t x5824 = -15497;

    t103 = (((x5821<<x5822)|x5823)!=x5824);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x5842 = 27U;
	volatile int32_t x5843 = INT32_MIN;
	static int16_t x5844 = 52;
	int32_t t104 = 180431896;

    t104 = (((x5841<<x5842)|x5843)!=x5844);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x5858 = 5U;
	volatile uint16_t x5859 = UINT16_MAX;
	static int64_t x5860 = -28046228876901376LL;
	static int32_t t105 = -4711204;

    t105 = (((x5857<<x5858)|x5859)!=x5860);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x5957 = 416188;
	uint16_t x5958 = 3U;
	static int8_t x5959 = INT8_MIN;
	int16_t x5960 = 1;
	volatile int32_t t106 = -584;

    t106 = (((x5957<<x5958)|x5959)!=x5960);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x6125 = 1;
	volatile uint16_t x6126 = 0U;
	int16_t x6128 = -40;

    t107 = (((x6125<<x6126)|x6127)!=x6128);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x6133 = 21;
	uint16_t x6134 = 1U;
	volatile int16_t x6135 = -1;

    t108 = (((x6133<<x6134)|x6135)!=x6136);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x6165 = UINT64_MAX;
	int8_t x6166 = 1;
	volatile int8_t x6167 = -20;
	static uint16_t x6168 = 10U;
	int32_t t109 = 2;

    t109 = (((x6165<<x6166)|x6167)!=x6168);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x6189 = 0U;
	volatile uint16_t x6190 = 1U;
	volatile int8_t x6191 = INT8_MIN;
	int8_t x6192 = 60;
	volatile int32_t t110 = 29;

    t110 = (((x6189<<x6190)|x6191)!=x6192);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x6217 = 15U;
	static int8_t x6218 = 0;
	volatile int64_t x6219 = -1LL;
	int8_t x6220 = -2;
	int32_t t111 = 4240;

    t111 = (((x6217<<x6218)|x6219)!=x6220);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x6285 = 131;
	uint32_t x6286 = 3U;
	int16_t x6287 = INT16_MIN;
	int64_t x6288 = -1LL;
	volatile int32_t t112 = -1018004;

    t112 = (((x6285<<x6286)|x6287)!=x6288);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x6477 = INT8_MAX;
	uint8_t x6478 = 2U;
	uint32_t x6479 = UINT32_MAX;
	int8_t x6480 = -1;

    t113 = (((x6477<<x6478)|x6479)!=x6480);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x6525 = 3U;
	uint8_t x6526 = 27U;
	int16_t x6527 = 140;
	static uint8_t x6528 = 0U;
	volatile int32_t t114 = 1;

    t114 = (((x6525<<x6526)|x6527)!=x6528);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x6557 = UINT8_MAX;
	int32_t x6558 = 1;
	static int16_t x6559 = -1;
	static volatile int32_t t115 = -243;

    t115 = (((x6557<<x6558)|x6559)!=x6560);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x6593 = UINT64_MAX;
	static int8_t x6595 = INT8_MAX;
	int16_t x6596 = 46;
	int32_t t116 = 201;

    t116 = (((x6593<<x6594)|x6595)!=x6596);

    if (t116 != 1) { NG(); } else { ; }
	
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


    return 0;
}

