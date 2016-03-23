
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

static uint16_t x22 = UINT16_MAX;
volatile uint8_t x81 = UINT8_MAX;
volatile int8_t x82 = -1;
uint8_t x84 = 14U;
uint32_t x100 = 1U;
static int16_t x349 = 6642;
int32_t x350 = -1;
volatile int32_t t3 = 0;
int8_t x465 = INT8_MIN;
volatile int8_t x468 = 27;
int16_t x561 = INT16_MIN;
uint64_t x564 = 1LLU;
static int32_t t5 = -19157327;
static int32_t t6 = 5885;
volatile uint32_t x615 = 759U;
static uint32_t x616 = 7U;
uint64_t x627 = 1798LLU;
static uint16_t x629 = 5920U;
int16_t x646 = INT16_MAX;
int32_t x673 = -500201;
uint8_t x995 = 47U;
volatile int16_t x996 = 15;
static uint32_t x1063 = 137U;
uint8_t x1124 = 2U;
static volatile uint64_t x1225 = 415383903981LLU;
volatile int32_t t18 = -21575;
uint16_t x1251 = 13291U;
int32_t t19 = -108516711;
uint8_t x1364 = 13U;
int64_t x1467 = 3449699931423147LL;
int32_t t22 = 207439;
int64_t x1509 = INT64_MIN;
volatile int32_t t23 = 6;
uint16_t x1603 = 9035U;
static uint8_t x1867 = 7U;
static uint8_t x1869 = 5U;
volatile int8_t x1872 = 0;
uint32_t x2061 = UINT32_MAX;
volatile int32_t t32 = 1522;
static int64_t x2090 = -1LL;
static uint32_t x2135 = UINT32_MAX;
volatile int32_t t34 = 3991;
volatile uint32_t x2187 = UINT32_MAX;
static uint16_t x2259 = 169U;
static int32_t t37 = 2779992;
uint8_t x2272 = 0U;
int8_t x2348 = 16;
volatile uint8_t x2443 = 17U;
volatile int32_t t41 = 0;
volatile int32_t t42 = 34021;
volatile int32_t t43 = -23068;
volatile uint32_t x2651 = 253001126U;
volatile int64_t x2652 = 10LL;
int8_t x2658 = -1;
volatile int32_t t45 = -14;
int8_t x2686 = INT8_MIN;
uint8_t x2701 = 6U;
uint8_t x3024 = 3U;
int32_t t49 = 4423;
volatile int64_t x3029 = 10587833645876LL;
uint8_t x3272 = 5U;
int64_t x3303 = INT64_MAX;
uint8_t x3304 = 0U;
int32_t t54 = 109272;
uint16_t x3474 = 0U;
static int16_t x3483 = 1158;
uint8_t x3548 = 3U;
int8_t x3716 = 3;
uint16_t x3801 = UINT16_MAX;
int16_t x3921 = -1;
int16_t x3924 = 14;
volatile int8_t x4057 = INT8_MIN;
volatile int32_t t67 = 1;
static int16_t x4250 = -1;
uint64_t x4390 = 7178LLU;
int32_t t71 = 40360219;
volatile int32_t x4513 = 2;
static volatile int8_t x4514 = INT8_MIN;
int16_t x4597 = INT16_MIN;
uint32_t x4775 = 1346973865U;
uint8_t x4776 = 3U;
int8_t x4834 = 0;
volatile uint8_t x4836 = 4U;
int64_t x4870 = -1LL;
uint32_t x4941 = UINT32_MAX;
static uint8_t x4951 = UINT8_MAX;
volatile int8_t x4964 = 5;
int32_t t85 = 0;
int64_t x5203 = INT64_MAX;
int64_t x5317 = INT64_MIN;
int32_t t89 = 10;
int8_t x5461 = INT8_MIN;
static int32_t t91 = 14;
uint64_t x5489 = 1636LLU;
volatile int64_t x5560 = 19LL;
static volatile uint8_t x5579 = 0U;
static uint16_t x5580 = 7U;
static int16_t x5640 = 2;
volatile int32_t t96 = 25176074;
uint8_t x5798 = 16U;
volatile int32_t t99 = 4010;
int8_t x5881 = INT8_MIN;
int64_t x5909 = 1056100529184517602LL;
uint16_t x5912 = 6U;
int16_t x5918 = 1;
volatile int32_t t105 = 63588;
uint8_t x6218 = UINT8_MAX;
int64_t x6272 = 1LL;
uint8_t x6424 = 0U;
volatile int32_t t108 = 449187;
uint16_t x6442 = UINT16_MAX;
uint32_t x6444 = 1U;
uint8_t x6776 = 1U;
uint16_t x6886 = 1U;
uint16_t x6972 = 4U;
uint8_t x7044 = 2U;
volatile uint8_t x7125 = 7U;
volatile int32_t t117 = 218268;
static volatile int32_t t118 = -1;
int8_t x7261 = INT8_MIN;
int32_t t120 = 7358;
static volatile uint8_t x7269 = UINT8_MAX;
int32_t x7299 = 73;
volatile uint16_t x7499 = 24U;
static int64_t x7500 = 1LL;
int64_t x7513 = -1LL;
int16_t x7662 = INT16_MIN;
uint8_t x7664 = 0U;
int32_t t127 = -3;
static volatile int8_t x7725 = -9;
int16_t x7726 = 1;
uint32_t x7780 = 28U;
uint16_t x7803 = UINT16_MAX;
int8_t x7804 = 0;
volatile int32_t t133 = -8713;
uint64_t x8003 = UINT64_MAX;
uint8_t x8140 = 1U;
int32_t x8162 = -1;
int8_t x8581 = INT8_MIN;
int16_t x8659 = 0;
static uint32_t x8789 = 4330U;
volatile int32_t t145 = -321867;
int16_t x8966 = -173;
int64_t x9122 = 219352942053113406LL;
uint8_t x9479 = 97U;
int8_t x9480 = 1;
uint64_t x9716 = 1LLU;
volatile int32_t t155 = -2226947;
static int64_t x9818 = INT64_MIN;
volatile int16_t x9997 = INT16_MIN;
uint8_t x10016 = 1U;
volatile int64_t x10062 = 7866LL;
uint16_t x10084 = 0U;
uint8_t x10176 = 6U;
int32_t t167 = 160163;
int8_t x10688 = 1;
volatile int8_t x10837 = -1;
uint8_t x10839 = UINT8_MAX;
int64_t x10840 = 0LL;
uint8_t x10910 = UINT8_MAX;
int8_t x10912 = 1;
volatile int32_t t174 = 22;
int64_t x11001 = INT64_MAX;
static int32_t t175 = -434445027;
uint8_t x11112 = 0U;
int32_t t176 = 4938615;
int32_t x11235 = INT32_MAX;
int32_t x11236 = 0;
static int64_t x11237 = INT64_MAX;
static uint32_t x11240 = 14U;
volatile uint32_t x11566 = 0U;
uint64_t x11899 = UINT64_MAX;
int16_t x11945 = -23;
volatile int32_t t188 = -83943;
int8_t x12035 = INT8_MAX;
static uint32_t x12190 = 106064U;
static uint16_t x12323 = UINT16_MAX;
volatile int16_t x12324 = 1;
volatile int64_t x12534 = INT64_MIN;
int8_t x12612 = 1;
int16_t x12641 = INT16_MAX;


void f0(void) {
    	int16_t x21 = 0;
	int8_t x23 = 1;
	uint32_t x24 = 20U;
	volatile int32_t t0 = 18;

    t0 = (x21<=(x22<=(x23<<x24)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x83 = 4;
	static int32_t t1 = 7072;

    t1 = (x81<=(x82<=(x83<<x84)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	uint64_t x99 = 2090987987745182LLU;
	volatile int32_t t2 = -1972329;

    t2 = (x97<=(x98<=(x99<<x100)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x351 = INT16_MAX;
	uint16_t x352 = 1U;

    t3 = (x349<=(x350<=(x351<<x352)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x466 = 5452675U;
	volatile uint64_t x467 = 4030647364364831057LLU;
	int32_t t4 = -158283;

    t4 = (x465<=(x466<=(x467<<x468)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x562 = UINT8_MAX;
	uint64_t x563 = 15560LLU;

    t5 = (x561<=(x562<=(x563<<x564)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x577 = INT16_MAX;
	volatile int16_t x578 = -12;
	uint32_t x579 = UINT32_MAX;
	int16_t x580 = 0;

    t6 = (x577<=(x578<=(x579<<x580)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x613 = 906U;
	int8_t x614 = 0;
	static int32_t t7 = 229571344;

    t7 = (x613<=(x614<=(x615<<x616)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x625 = -3580381LL;
	uint8_t x626 = 5U;
	static volatile int8_t x628 = 30;
	static int32_t t8 = -255;

    t8 = (x625<=(x626<=(x627<<x628)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x630 = 80U;
	uint8_t x631 = UINT8_MAX;
	int8_t x632 = 13;
	int32_t t9 = 2079464;

    t9 = (x629<=(x630<=(x631<<x632)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile uint8_t x647 = UINT8_MAX;
	uint64_t x648 = 1LLU;
	volatile int32_t t10 = 79;

    t10 = (x645<=(x646<=(x647<<x648)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x674 = UINT32_MAX;
	uint8_t x675 = UINT8_MAX;
	int64_t x676 = 1LL;
	volatile int32_t t11 = 6059;

    t11 = (x673<=(x674<=(x675<<x676)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x741 = INT32_MIN;
	volatile uint8_t x742 = UINT8_MAX;
	volatile uint64_t x743 = 3368526708683577LLU;
	uint8_t x744 = 10U;
	int32_t t12 = 130541;

    t12 = (x741<=(x742<=(x743<<x744)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x829 = INT16_MAX;
	static uint64_t x830 = 124251892109116LLU;
	uint32_t x831 = UINT32_MAX;
	volatile uint8_t x832 = 11U;
	static volatile int32_t t13 = -369;

    t13 = (x829<=(x830<=(x831<<x832)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x993 = UINT8_MAX;
	int8_t x994 = -1;
	volatile int32_t t14 = -38;

    t14 = (x993<=(x994<=(x995<<x996)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x1061 = 2470U;
	volatile int64_t x1062 = -219LL;
	uint8_t x1064 = 3U;
	volatile int32_t t15 = -519107704;

    t15 = (x1061<=(x1062<=(x1063<<x1064)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1121 = INT64_MIN;
	volatile int32_t x1122 = -1;
	static volatile int8_t x1123 = 27;
	volatile int32_t t16 = 22936315;

    t16 = (x1121<=(x1122<=(x1123<<x1124)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1177 = UINT8_MAX;
	int64_t x1178 = INT64_MIN;
	int16_t x1179 = INT16_MAX;
	static int32_t x1180 = 0;
	volatile int32_t t17 = -128;

    t17 = (x1177<=(x1178<=(x1179<<x1180)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x1226 = UINT16_MAX;
	uint64_t x1227 = UINT64_MAX;
	int32_t x1228 = 1;

    t18 = (x1225<=(x1226<=(x1227<<x1228)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1249 = UINT8_MAX;
	volatile int16_t x1250 = INT16_MIN;
	int8_t x1252 = 11;

    t19 = (x1249<=(x1250<=(x1251<<x1252)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1361 = 1;
	int8_t x1362 = -4;
	int16_t x1363 = 7;
	volatile int32_t t20 = 1941;

    t20 = (x1361<=(x1362<=(x1363<<x1364)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1461 = 1935443938U;
	volatile int64_t x1462 = INT64_MIN;
	int8_t x1463 = INT8_MAX;
	volatile uint8_t x1464 = 19U;
	int32_t t21 = -4;

    t21 = (x1461<=(x1462<=(x1463<<x1464)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1465 = -1LL;
	int8_t x1466 = INT8_MIN;
	uint8_t x1468 = 1U;

    t22 = (x1465<=(x1466<=(x1467<<x1468)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1510 = -1;
	int8_t x1511 = INT8_MAX;
	uint64_t x1512 = 1LLU;

    t23 = (x1509<=(x1510<=(x1511<<x1512)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1601 = 5918;
	uint64_t x1602 = 4034168868143873LLU;
	int8_t x1604 = 3;
	int32_t t24 = -54789;

    t24 = (x1601<=(x1602<=(x1603<<x1604)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1625 = -2810;
	static int32_t x1626 = -1;
	int16_t x1627 = 11758;
	static volatile uint32_t x1628 = 3U;
	volatile int32_t t25 = 1005935;

    t25 = (x1625<=(x1626<=(x1627<<x1628)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1661 = UINT32_MAX;
	int16_t x1662 = INT16_MIN;
	volatile int8_t x1663 = 1;
	uint8_t x1664 = 0U;
	int32_t t26 = 1;

    t26 = (x1661<=(x1662<=(x1663<<x1664)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1713 = -2;
	uint8_t x1714 = 4U;
	volatile uint64_t x1715 = 265257LLU;
	static int8_t x1716 = 3;
	int32_t t27 = -150886821;

    t27 = (x1713<=(x1714<=(x1715<<x1716)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1737 = 3520336;
	uint16_t x1738 = 30766U;
	uint16_t x1739 = UINT16_MAX;
	int64_t x1740 = 10LL;
	int32_t t28 = 2410;

    t28 = (x1737<=(x1738<=(x1739<<x1740)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x1865 = UINT64_MAX;
	int32_t x1866 = -1;
	int8_t x1868 = 2;
	int32_t t29 = 1;

    t29 = (x1865<=(x1866<=(x1867<<x1868)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1870 = 0;
	uint32_t x1871 = UINT32_MAX;
	volatile int32_t t30 = -481829560;

    t30 = (x1869<=(x1870<=(x1871<<x1872)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x1973 = -103391416658992055LL;
	static volatile int8_t x1974 = INT8_MIN;
	int8_t x1975 = 1;
	volatile uint8_t x1976 = 4U;
	volatile int32_t t31 = 410;

    t31 = (x1973<=(x1974<=(x1975<<x1976)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2062 = -15;
	int16_t x2063 = INT16_MAX;
	uint8_t x2064 = 1U;

    t32 = (x2061<=(x2062<=(x2063<<x2064)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2089 = INT16_MIN;
	uint16_t x2091 = UINT16_MAX;
	static volatile uint32_t x2092 = 0U;
	int32_t t33 = -344676;

    t33 = (x2089<=(x2090<=(x2091<<x2092)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2133 = UINT32_MAX;
	int16_t x2134 = INT16_MIN;
	int16_t x2136 = 11;

    t34 = (x2133<=(x2134<=(x2135<<x2136)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x2185 = -20;
	volatile int8_t x2186 = INT8_MIN;
	uint32_t x2188 = 20U;
	static volatile int32_t t35 = 0;

    t35 = (x2185<=(x2186<=(x2187<<x2188)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x2249 = INT8_MIN;
	int32_t x2250 = 1667;
	uint64_t x2251 = 46915550858866602LLU;
	volatile uint32_t x2252 = 4U;
	int32_t t36 = -78964;

    t36 = (x2249<=(x2250<=(x2251<<x2252)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x2257 = 949;
	volatile int16_t x2258 = INT16_MIN;
	static int32_t x2260 = 2;

    t37 = (x2257<=(x2258<=(x2259<<x2260)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2269 = INT8_MAX;
	volatile int64_t x2270 = INT64_MIN;
	uint64_t x2271 = UINT64_MAX;
	int32_t t38 = -12501631;

    t38 = (x2269<=(x2270<=(x2271<<x2272)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2305 = 5258U;
	volatile int64_t x2306 = INT64_MIN;
	static int64_t x2307 = INT64_MAX;
	int32_t x2308 = 0;
	int32_t t39 = 17016;

    t39 = (x2305<=(x2306<=(x2307<<x2308)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2345 = INT32_MIN;
	uint32_t x2346 = UINT32_MAX;
	volatile uint32_t x2347 = UINT32_MAX;
	volatile int32_t t40 = -1;

    t40 = (x2345<=(x2346<=(x2347<<x2348)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2441 = 7397LL;
	int16_t x2442 = -42;
	uint16_t x2444 = 1U;

    t41 = (x2441<=(x2442<=(x2443<<x2444)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2529 = UINT32_MAX;
	int16_t x2530 = 0;
	volatile int8_t x2531 = 22;
	static volatile uint8_t x2532 = 3U;

    t42 = (x2529<=(x2530<=(x2531<<x2532)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x2637 = -1LL;
	int16_t x2638 = INT16_MIN;
	int8_t x2639 = INT8_MAX;
	uint16_t x2640 = 0U;

    t43 = (x2637<=(x2638<=(x2639<<x2640)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2649 = INT8_MAX;
	int16_t x2650 = INT16_MAX;
	int32_t t44 = 237995870;

    t44 = (x2649<=(x2650<=(x2651<<x2652)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2657 = INT64_MAX;
	int16_t x2659 = 10515;
	volatile uint16_t x2660 = 11U;

    t45 = (x2657<=(x2658<=(x2659<<x2660)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x2685 = -1;
	uint8_t x2687 = 26U;
	volatile uint8_t x2688 = 0U;
	int32_t t46 = -359604;

    t46 = (x2685<=(x2686<=(x2687<<x2688)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x2702 = -1;
	uint32_t x2703 = 59124U;
	uint8_t x2704 = 7U;
	int32_t t47 = -12476598;

    t47 = (x2701<=(x2702<=(x2703<<x2704)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x2741 = INT8_MAX;
	volatile int32_t x2742 = INT32_MAX;
	uint16_t x2743 = 1533U;
	int32_t x2744 = 11;
	static int32_t t48 = 4134;

    t48 = (x2741<=(x2742<=(x2743<<x2744)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x3021 = -1LL;
	int64_t x3022 = 3401LL;
	static int16_t x3023 = INT16_MAX;

    t49 = (x3021<=(x3022<=(x3023<<x3024)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x3030 = 803U;
	uint64_t x3031 = 155626152387722LLU;
	uint8_t x3032 = 1U;
	int32_t t50 = -213964;

    t50 = (x3029<=(x3030<=(x3031<<x3032)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x3109 = 0U;
	uint16_t x3110 = 3151U;
	volatile uint64_t x3111 = 2144832945LLU;
	uint32_t x3112 = 29U;
	volatile int32_t t51 = 14;

    t51 = (x3109<=(x3110<=(x3111<<x3112)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x3193 = INT8_MIN;
	int8_t x3194 = 0;
	uint32_t x3195 = UINT32_MAX;
	volatile uint8_t x3196 = 7U;
	static volatile int32_t t52 = 695;

    t52 = (x3193<=(x3194<=(x3195<<x3196)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3269 = -3;
	static int8_t x3270 = INT8_MIN;
	uint16_t x3271 = 19863U;
	int32_t t53 = -2;

    t53 = (x3269<=(x3270<=(x3271<<x3272)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x3301 = -1;
	int8_t x3302 = 1;

    t54 = (x3301<=(x3302<=(x3303<<x3304)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x3473 = UINT16_MAX;
	static volatile uint8_t x3475 = UINT8_MAX;
	uint8_t x3476 = 0U;
	int32_t t55 = -13;

    t55 = (x3473<=(x3474<=(x3475<<x3476)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x3481 = 1;
	int64_t x3482 = INT64_MIN;
	static uint16_t x3484 = 1U;
	volatile int32_t t56 = -1;

    t56 = (x3481<=(x3482<=(x3483<<x3484)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x3533 = -1;
	int64_t x3534 = 345255216843265289LL;
	int32_t x3535 = 2;
	uint8_t x3536 = 22U;
	int32_t t57 = 1;

    t57 = (x3533<=(x3534<=(x3535<<x3536)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x3545 = 92116637LL;
	uint8_t x3546 = 97U;
	uint32_t x3547 = 41U;
	volatile int32_t t58 = 73514311;

    t58 = (x3545<=(x3546<=(x3547<<x3548)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x3585 = INT64_MIN;
	uint16_t x3586 = UINT16_MAX;
	uint64_t x3587 = 1979649441017LLU;
	volatile uint32_t x3588 = 43U;
	int32_t t59 = -1717426;

    t59 = (x3585<=(x3586<=(x3587<<x3588)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3597 = INT16_MIN;
	volatile int8_t x3598 = -1;
	uint64_t x3599 = 272542883965935902LLU;
	volatile int8_t x3600 = 0;
	volatile int32_t t60 = 34119601;

    t60 = (x3597<=(x3598<=(x3599<<x3600)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x3709 = 80245392368423LLU;
	static int16_t x3710 = INT16_MIN;
	uint32_t x3711 = 12115U;
	volatile int32_t x3712 = 1;
	volatile int32_t t61 = -15089244;

    t61 = (x3709<=(x3710<=(x3711<<x3712)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x3713 = INT8_MAX;
	static uint16_t x3714 = UINT16_MAX;
	static uint16_t x3715 = 0U;
	int32_t t62 = 188176260;

    t62 = (x3713<=(x3714<=(x3715<<x3716)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x3802 = UINT32_MAX;
	uint16_t x3803 = 391U;
	uint8_t x3804 = 18U;
	static volatile int32_t t63 = 251829;

    t63 = (x3801<=(x3802<=(x3803<<x3804)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x3917 = -1;
	volatile int64_t x3918 = INT64_MIN;
	uint16_t x3919 = UINT16_MAX;
	static uint8_t x3920 = 1U;
	int32_t t64 = 3;

    t64 = (x3917<=(x3918<=(x3919<<x3920)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3922 = -1;
	volatile uint8_t x3923 = 0U;
	volatile int32_t t65 = 119;

    t65 = (x3921<=(x3922<=(x3923<<x3924)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4013 = 0U;
	static int64_t x4014 = -2LL;
	int32_t x4015 = 0;
	static uint16_t x4016 = 3U;
	int32_t t66 = -2637059;

    t66 = (x4013<=(x4014<=(x4015<<x4016)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x4058 = INT32_MIN;
	volatile uint32_t x4059 = UINT32_MAX;
	uint32_t x4060 = 1U;

    t67 = (x4057<=(x4058<=(x4059<<x4060)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x4217 = 10356U;
	static uint32_t x4218 = UINT32_MAX;
	int8_t x4219 = INT8_MAX;
	uint32_t x4220 = 1U;
	static int32_t t68 = -669507765;

    t68 = (x4217<=(x4218<=(x4219<<x4220)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x4249 = 15LL;
	uint16_t x4251 = UINT16_MAX;
	int16_t x4252 = 1;
	volatile int32_t t69 = 22785874;

    t69 = (x4249<=(x4250<=(x4251<<x4252)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x4277 = INT64_MAX;
	int64_t x4278 = -7653LL;
	uint64_t x4279 = 19385650LLU;
	uint8_t x4280 = 10U;
	volatile int32_t t70 = -103;

    t70 = (x4277<=(x4278<=(x4279<<x4280)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x4389 = -14077138581489LL;
	uint16_t x4391 = 14U;
	static uint16_t x4392 = 5U;

    t71 = (x4389<=(x4390<=(x4391<<x4392)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x4485 = -1;
	static int64_t x4486 = -1LL;
	uint64_t x4487 = 195LLU;
	uint64_t x4488 = 10LLU;
	static int32_t t72 = 1354507;

    t72 = (x4485<=(x4486<=(x4487<<x4488)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4515 = UINT8_MAX;
	uint64_t x4516 = 3LLU;
	volatile int32_t t73 = 337484;

    t73 = (x4513<=(x4514<=(x4515<<x4516)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x4598 = INT8_MAX;
	uint32_t x4599 = UINT32_MAX;
	static int16_t x4600 = 6;
	volatile int32_t t74 = 0;

    t74 = (x4597<=(x4598<=(x4599<<x4600)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x4773 = UINT8_MAX;
	uint32_t x4774 = 4212U;
	volatile int32_t t75 = 425564;

    t75 = (x4773<=(x4774<=(x4775<<x4776)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x4833 = INT64_MIN;
	static int16_t x4835 = 3;
	volatile int32_t t76 = -252;

    t76 = (x4833<=(x4834<=(x4835<<x4836)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x4869 = -1LL;
	uint8_t x4871 = 17U;
	uint64_t x4872 = 1LLU;
	volatile int32_t t77 = -8917;

    t77 = (x4869<=(x4870<=(x4871<<x4872)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x4917 = -1;
	int32_t x4918 = INT32_MIN;
	static int8_t x4919 = INT8_MAX;
	volatile int8_t x4920 = 12;
	int32_t t78 = -640;

    t78 = (x4917<=(x4918<=(x4919<<x4920)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x4942 = 7U;
	static int8_t x4943 = INT8_MAX;
	uint32_t x4944 = 3U;
	int32_t t79 = 83219683;

    t79 = (x4941<=(x4942<=(x4943<<x4944)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x4949 = 85;
	static uint32_t x4950 = 74U;
	volatile int32_t x4952 = 18;
	static volatile int32_t t80 = 3616;

    t80 = (x4949<=(x4950<=(x4951<<x4952)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x4957 = 12379125672LLU;
	int8_t x4958 = 22;
	volatile int8_t x4959 = 2;
	volatile int8_t x4960 = 1;
	volatile int32_t t81 = 0;

    t81 = (x4957<=(x4958<=(x4959<<x4960)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x4961 = INT64_MIN;
	int16_t x4962 = INT16_MAX;
	uint32_t x4963 = UINT32_MAX;
	int32_t t82 = -230871201;

    t82 = (x4961<=(x4962<=(x4963<<x4964)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x5009 = -4;
	static int64_t x5010 = 205936102014857307LL;
	uint32_t x5011 = 493U;
	int16_t x5012 = 0;
	int32_t t83 = 265011;

    t83 = (x5009<=(x5010<=(x5011<<x5012)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x5045 = 12999782396144LLU;
	int64_t x5046 = INT64_MIN;
	int64_t x5047 = 93292LL;
	uint16_t x5048 = 3U;
	static volatile int32_t t84 = 113;

    t84 = (x5045<=(x5046<=(x5047<<x5048)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x5073 = 0U;
	uint8_t x5074 = 2U;
	static uint16_t x5075 = UINT16_MAX;
	int8_t x5076 = 3;

    t85 = (x5073<=(x5074<=(x5075<<x5076)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x5201 = INT32_MAX;
	int8_t x5202 = -58;
	static uint16_t x5204 = 0U;
	int32_t t86 = -2;

    t86 = (x5201<=(x5202<=(x5203<<x5204)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x5293 = 8U;
	volatile int16_t x5294 = 5436;
	uint16_t x5295 = 12U;
	int8_t x5296 = 4;
	volatile int32_t t87 = -1;

    t87 = (x5293<=(x5294<=(x5295<<x5296)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5318 = 244862304U;
	volatile uint64_t x5319 = 3885030LLU;
	int16_t x5320 = 1;
	volatile int32_t t88 = -186262136;

    t88 = (x5317<=(x5318<=(x5319<<x5320)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x5337 = INT32_MAX;
	static uint32_t x5338 = 1925455U;
	static uint16_t x5339 = UINT16_MAX;
	int8_t x5340 = 4;

    t89 = (x5337<=(x5338<=(x5339<<x5340)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x5445 = 26491U;
	volatile int16_t x5446 = INT16_MIN;
	int32_t x5447 = 2025;
	uint8_t x5448 = 1U;
	volatile int32_t t90 = -15335735;

    t90 = (x5445<=(x5446<=(x5447<<x5448)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x5462 = INT8_MAX;
	uint64_t x5463 = UINT64_MAX;
	int8_t x5464 = 39;

    t91 = (x5461<=(x5462<=(x5463<<x5464)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x5490 = INT32_MIN;
	uint64_t x5491 = 117LLU;
	static volatile int16_t x5492 = 33;
	volatile int32_t t92 = -570835981;

    t92 = (x5489<=(x5490<=(x5491<<x5492)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x5557 = -60101715690821LL;
	int64_t x5558 = 2793360357LL;
	static uint16_t x5559 = 27U;
	static volatile int32_t t93 = -1071;

    t93 = (x5557<=(x5558<=(x5559<<x5560)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x5577 = INT8_MAX;
	static int16_t x5578 = -1;
	volatile int32_t t94 = 1;

    t94 = (x5577<=(x5578<=(x5579<<x5580)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x5585 = INT16_MIN;
	int32_t x5586 = INT32_MAX;
	static uint32_t x5587 = UINT32_MAX;
	uint8_t x5588 = 2U;
	volatile int32_t t95 = 2918;

    t95 = (x5585<=(x5586<=(x5587<<x5588)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x5637 = 0;
	uint64_t x5638 = 974811725LLU;
	int16_t x5639 = 0;

    t96 = (x5637<=(x5638<=(x5639<<x5640)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x5697 = INT64_MIN;
	int64_t x5698 = INT64_MIN;
	static uint32_t x5699 = 4818U;
	uint16_t x5700 = 3U;
	volatile int32_t t97 = 929;

    t97 = (x5697<=(x5698<=(x5699<<x5700)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x5725 = INT16_MIN;
	int32_t x5726 = INT32_MAX;
	volatile uint64_t x5727 = UINT64_MAX;
	uint8_t x5728 = 41U;
	volatile int32_t t98 = -860643164;

    t98 = (x5725<=(x5726<=(x5727<<x5728)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x5797 = -1;
	volatile uint64_t x5799 = UINT64_MAX;
	static uint8_t x5800 = 52U;

    t99 = (x5797<=(x5798<=(x5799<<x5800)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x5882 = 2;
	uint64_t x5883 = 13LLU;
	volatile uint32_t x5884 = 0U;
	static int32_t t100 = 2;

    t100 = (x5881<=(x5882<=(x5883<<x5884)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x5910 = 56U;
	uint32_t x5911 = UINT32_MAX;
	volatile int32_t t101 = -347530;

    t101 = (x5909<=(x5910<=(x5911<<x5912)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x5917 = UINT32_MAX;
	uint32_t x5919 = 2494030U;
	uint8_t x5920 = 0U;
	volatile int32_t t102 = 61;

    t102 = (x5917<=(x5918<=(x5919<<x5920)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x6025 = 888;
	volatile int8_t x6026 = INT8_MIN;
	int16_t x6027 = 1457;
	int8_t x6028 = 12;
	int32_t t103 = 7222;

    t103 = (x6025<=(x6026<=(x6027<<x6028)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x6093 = INT16_MIN;
	int32_t x6094 = INT32_MAX;
	uint32_t x6095 = UINT32_MAX;
	static int16_t x6096 = 0;
	static int32_t t104 = 2164312;

    t104 = (x6093<=(x6094<=(x6095<<x6096)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x6189 = 0;
	static uint64_t x6190 = 39616LLU;
	volatile uint16_t x6191 = 1301U;
	int16_t x6192 = 0;

    t105 = (x6189<=(x6190<=(x6191<<x6192)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x6217 = INT8_MIN;
	uint16_t x6219 = 1478U;
	uint8_t x6220 = 0U;
	static int32_t t106 = -7577;

    t106 = (x6217<=(x6218<=(x6219<<x6220)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x6269 = -1;
	static int16_t x6270 = INT16_MAX;
	volatile uint8_t x6271 = UINT8_MAX;
	volatile int32_t t107 = 326079254;

    t107 = (x6269<=(x6270<=(x6271<<x6272)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x6421 = UINT64_MAX;
	static int64_t x6422 = INT64_MIN;
	uint64_t x6423 = UINT64_MAX;

    t108 = (x6421<=(x6422<=(x6423<<x6424)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x6441 = 49U;
	uint64_t x6443 = 58LLU;
	int32_t t109 = -2;

    t109 = (x6441<=(x6442<=(x6443<<x6444)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x6509 = INT32_MIN;
	uint16_t x6510 = 12U;
	int8_t x6511 = 0;
	uint16_t x6512 = 1U;
	volatile int32_t t110 = 0;

    t110 = (x6509<=(x6510<=(x6511<<x6512)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x6773 = INT8_MIN;
	uint8_t x6774 = 17U;
	uint16_t x6775 = 172U;
	int32_t t111 = 857902;

    t111 = (x6773<=(x6774<=(x6775<<x6776)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x6849 = -91018076161048LL;
	int16_t x6850 = -8029;
	static uint32_t x6851 = 17516U;
	int32_t x6852 = 1;
	static int32_t t112 = -74;

    t112 = (x6849<=(x6850<=(x6851<<x6852)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x6885 = -1;
	int64_t x6887 = 25055866388175476LL;
	uint8_t x6888 = 0U;
	int32_t t113 = 5493689;

    t113 = (x6885<=(x6886<=(x6887<<x6888)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x6937 = 476323932806LLU;
	uint16_t x6938 = 2424U;
	uint64_t x6939 = 221994700256LLU;
	uint8_t x6940 = 62U;
	static int32_t t114 = 44;

    t114 = (x6937<=(x6938<=(x6939<<x6940)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x6969 = INT16_MIN;
	static int8_t x6970 = INT8_MIN;
	static uint16_t x6971 = UINT16_MAX;
	volatile int32_t t115 = 5375;

    t115 = (x6969<=(x6970<=(x6971<<x6972)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x7041 = 12283791U;
	uint64_t x7042 = 10LLU;
	uint32_t x7043 = 714309238U;
	int32_t t116 = 4018;

    t116 = (x7041<=(x7042<=(x7043<<x7044)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x7126 = INT32_MIN;
	uint64_t x7127 = UINT64_MAX;
	uint16_t x7128 = 3U;

    t117 = (x7125<=(x7126<=(x7127<<x7128)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint16_t x7145 = 5U;
	volatile int64_t x7146 = INT64_MAX;
	uint32_t x7147 = UINT32_MAX;
	volatile uint8_t x7148 = 0U;

    t118 = (x7145<=(x7146<=(x7147<<x7148)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x7262 = 0;
	volatile int8_t x7263 = 2;
	uint16_t x7264 = 0U;
	volatile int32_t t119 = 1553;

    t119 = (x7261<=(x7262<=(x7263<<x7264)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x7265 = INT16_MAX;
	int64_t x7266 = INT64_MAX;
	uint16_t x7267 = 151U;
	uint16_t x7268 = 13U;

    t120 = (x7265<=(x7266<=(x7267<<x7268)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x7270 = UINT64_MAX;
	static volatile uint32_t x7271 = 290229U;
	uint16_t x7272 = 0U;
	volatile int32_t t121 = -2;

    t121 = (x7269<=(x7270<=(x7271<<x7272)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x7297 = INT64_MIN;
	uint8_t x7298 = UINT8_MAX;
	volatile int16_t x7300 = 1;
	int32_t t122 = -89312;

    t122 = (x7297<=(x7298<=(x7299<<x7300)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x7333 = INT32_MIN;
	volatile int8_t x7334 = INT8_MIN;
	int8_t x7335 = 36;
	uint16_t x7336 = 0U;
	volatile int32_t t123 = -12575599;

    t123 = (x7333<=(x7334<=(x7335<<x7336)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x7497 = UINT16_MAX;
	static int32_t x7498 = INT32_MIN;
	volatile int32_t t124 = -23534028;

    t124 = (x7497<=(x7498<=(x7499<<x7500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x7514 = 699228296643185042LLU;
	int8_t x7515 = 6;
	static int16_t x7516 = 11;
	volatile int32_t t125 = -3585;

    t125 = (x7513<=(x7514<=(x7515<<x7516)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x7661 = INT16_MAX;
	uint64_t x7663 = 28292774457473LLU;
	int32_t t126 = -44625;

    t126 = (x7661<=(x7662<=(x7663<<x7664)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x7665 = -1LL;
	int16_t x7666 = INT16_MAX;
	uint64_t x7667 = 99165833967132500LLU;
	static uint16_t x7668 = 0U;

    t127 = (x7665<=(x7666<=(x7667<<x7668)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x7727 = INT8_MAX;
	uint8_t x7728 = 2U;
	static volatile int32_t t128 = -1063681034;

    t128 = (x7725<=(x7726<=(x7727<<x7728)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x7777 = -251;
	uint8_t x7778 = 1U;
	static uint64_t x7779 = 3263799LLU;
	static int32_t t129 = 2707515;

    t129 = (x7777<=(x7778<=(x7779<<x7780)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x7797 = INT32_MIN;
	volatile int32_t x7798 = 6;
	uint32_t x7799 = UINT32_MAX;
	int16_t x7800 = 0;
	volatile int32_t t130 = -3;

    t130 = (x7797<=(x7798<=(x7799<<x7800)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x7801 = 668233073U;
	static int32_t x7802 = INT32_MIN;
	int32_t t131 = 4506;

    t131 = (x7801<=(x7802<=(x7803<<x7804)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x7821 = 4U;
	volatile uint16_t x7822 = UINT16_MAX;
	volatile uint8_t x7823 = UINT8_MAX;
	int16_t x7824 = 1;
	volatile int32_t t132 = 1;

    t132 = (x7821<=(x7822<=(x7823<<x7824)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x7929 = UINT16_MAX;
	int64_t x7930 = 235263LL;
	uint16_t x7931 = 3U;
	uint32_t x7932 = 1U;

    t133 = (x7929<=(x7930<=(x7931<<x7932)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x8001 = 333;
	uint16_t x8002 = UINT16_MAX;
	int32_t x8004 = 7;
	volatile int32_t t134 = 158;

    t134 = (x8001<=(x8002<=(x8003<<x8004)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x8041 = INT32_MIN;
	uint8_t x8042 = UINT8_MAX;
	uint32_t x8043 = 27076U;
	int16_t x8044 = 7;
	volatile int32_t t135 = 912;

    t135 = (x8041<=(x8042<=(x8043<<x8044)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x8137 = INT16_MIN;
	uint32_t x8138 = 683244332U;
	uint8_t x8139 = 55U;
	static int32_t t136 = -4011647;

    t136 = (x8137<=(x8138<=(x8139<<x8140)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x8161 = INT8_MIN;
	uint64_t x8163 = 111843101LLU;
	uint8_t x8164 = 1U;
	static int32_t t137 = -3395679;

    t137 = (x8161<=(x8162<=(x8163<<x8164)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x8177 = 267280859U;
	int8_t x8178 = -9;
	uint16_t x8179 = 34U;
	uint32_t x8180 = 8U;
	int32_t t138 = 76309;

    t138 = (x8177<=(x8178<=(x8179<<x8180)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x8237 = 3U;
	int16_t x8238 = INT16_MIN;
	static volatile int16_t x8239 = 0;
	int16_t x8240 = 0;
	volatile int32_t t139 = 96928455;

    t139 = (x8237<=(x8238<=(x8239<<x8240)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x8341 = UINT32_MAX;
	static volatile int64_t x8342 = INT64_MAX;
	static volatile uint16_t x8343 = UINT16_MAX;
	static int8_t x8344 = 1;
	volatile int32_t t140 = 0;

    t140 = (x8341<=(x8342<=(x8343<<x8344)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x8465 = INT16_MIN;
	int64_t x8466 = -1LL;
	static uint16_t x8467 = UINT16_MAX;
	uint16_t x8468 = 1U;
	volatile int32_t t141 = 17868910;

    t141 = (x8465<=(x8466<=(x8467<<x8468)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x8577 = 114U;
	volatile int16_t x8578 = INT16_MIN;
	uint8_t x8579 = UINT8_MAX;
	uint8_t x8580 = 10U;
	int32_t t142 = 0;

    t142 = (x8577<=(x8578<=(x8579<<x8580)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x8582 = -1;
	static uint16_t x8583 = 20472U;
	volatile int8_t x8584 = 7;
	volatile int32_t t143 = -1930;

    t143 = (x8581<=(x8582<=(x8583<<x8584)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x8657 = 60U;
	static uint16_t x8658 = UINT16_MAX;
	int32_t x8660 = 1;
	volatile int32_t t144 = -600594;

    t144 = (x8657<=(x8658<=(x8659<<x8660)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x8790 = 376950U;
	uint64_t x8791 = 218942588LLU;
	volatile uint64_t x8792 = 1LLU;

    t145 = (x8789<=(x8790<=(x8791<<x8792)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x8965 = 1831313;
	int16_t x8967 = 6;
	static int16_t x8968 = 15;
	int32_t t146 = 33347;

    t146 = (x8965<=(x8966<=(x8967<<x8968)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x9081 = INT16_MIN;
	int64_t x9082 = INT64_MIN;
	volatile uint32_t x9083 = UINT32_MAX;
	uint16_t x9084 = 3U;
	volatile int32_t t147 = -100916;

    t147 = (x9081<=(x9082<=(x9083<<x9084)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x9121 = 15U;
	uint32_t x9123 = 29U;
	static int16_t x9124 = 1;
	volatile int32_t t148 = -6187869;

    t148 = (x9121<=(x9122<=(x9123<<x9124)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x9197 = -1;
	int32_t x9198 = -1;
	static uint16_t x9199 = UINT16_MAX;
	int8_t x9200 = 1;
	int32_t t149 = 20506996;

    t149 = (x9197<=(x9198<=(x9199<<x9200)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x9289 = 3754LL;
	int32_t x9290 = -1;
	int16_t x9291 = 1;
	volatile uint8_t x9292 = 0U;
	volatile int32_t t150 = -3772826;

    t150 = (x9289<=(x9290<=(x9291<<x9292)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x9317 = 338U;
	int64_t x9318 = -1LL;
	uint8_t x9319 = 13U;
	volatile uint64_t x9320 = 12LLU;
	static volatile int32_t t151 = -151134640;

    t151 = (x9317<=(x9318<=(x9319<<x9320)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x9393 = 437U;
	int64_t x9394 = -610418546LL;
	int8_t x9395 = 1;
	int8_t x9396 = 1;
	volatile int32_t t152 = -422747222;

    t152 = (x9393<=(x9394<=(x9395<<x9396)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x9397 = 1239LL;
	static int8_t x9398 = INT8_MIN;
	static uint64_t x9399 = 1353462127LLU;
	static int32_t x9400 = 1;
	int32_t t153 = 8428;

    t153 = (x9397<=(x9398<=(x9399<<x9400)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x9477 = INT16_MAX;
	uint16_t x9478 = 12U;
	int32_t t154 = -1;

    t154 = (x9477<=(x9478<=(x9479<<x9480)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x9713 = INT32_MIN;
	uint16_t x9714 = 313U;
	uint64_t x9715 = 6189288108LLU;

    t155 = (x9713<=(x9714<=(x9715<<x9716)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x9793 = -2775745LL;
	int16_t x9794 = INT16_MIN;
	uint32_t x9795 = UINT32_MAX;
	static int8_t x9796 = 1;
	static volatile int32_t t156 = -12584379;

    t156 = (x9793<=(x9794<=(x9795<<x9796)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x9809 = UINT64_MAX;
	int16_t x9810 = 0;
	volatile uint32_t x9811 = 4008U;
	uint64_t x9812 = 24LLU;
	volatile int32_t t157 = -1775434;

    t157 = (x9809<=(x9810<=(x9811<<x9812)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x9817 = 22U;
	uint16_t x9819 = 43U;
	int16_t x9820 = 3;
	volatile int32_t t158 = -526762259;

    t158 = (x9817<=(x9818<=(x9819<<x9820)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x9998 = -185346292;
	uint32_t x9999 = 206U;
	uint32_t x10000 = 1U;
	int32_t t159 = 55;

    t159 = (x9997<=(x9998<=(x9999<<x10000)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x10013 = INT8_MIN;
	static int32_t x10014 = 1;
	int16_t x10015 = INT16_MAX;
	static int32_t t160 = 1;

    t160 = (x10013<=(x10014<=(x10015<<x10016)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x10061 = -33;
	uint8_t x10063 = 1U;
	volatile uint8_t x10064 = 1U;
	volatile int32_t t161 = 7900741;

    t161 = (x10061<=(x10062<=(x10063<<x10064)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x10081 = 119U;
	uint32_t x10082 = UINT32_MAX;
	uint32_t x10083 = 2839227U;
	volatile int32_t t162 = 190;

    t162 = (x10081<=(x10082<=(x10083<<x10084)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x10173 = -1LL;
	int16_t x10174 = INT16_MAX;
	int16_t x10175 = 0;
	volatile int32_t t163 = 939;

    t163 = (x10173<=(x10174<=(x10175<<x10176)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x10245 = INT16_MIN;
	static int16_t x10246 = -1;
	int64_t x10247 = INT64_MAX;
	uint8_t x10248 = 0U;
	int32_t t164 = -53816606;

    t164 = (x10245<=(x10246<=(x10247<<x10248)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x10493 = INT64_MIN;
	int64_t x10494 = -8300791LL;
	int8_t x10495 = 0;
	uint32_t x10496 = 0U;
	static volatile int32_t t165 = -4228434;

    t165 = (x10493<=(x10494<=(x10495<<x10496)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x10521 = INT16_MIN;
	int16_t x10522 = -1;
	volatile uint64_t x10523 = UINT64_MAX;
	volatile uint32_t x10524 = 0U;
	int32_t t166 = -3;

    t166 = (x10521<=(x10522<=(x10523<<x10524)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x10657 = UINT64_MAX;
	int64_t x10658 = -92807631LL;
	uint32_t x10659 = UINT32_MAX;
	int16_t x10660 = 25;

    t167 = (x10657<=(x10658<=(x10659<<x10660)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x10669 = -1;
	static int8_t x10670 = INT8_MIN;
	static uint8_t x10671 = UINT8_MAX;
	uint8_t x10672 = 22U;
	volatile int32_t t168 = -274029795;

    t168 = (x10669<=(x10670<=(x10671<<x10672)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x10685 = 152;
	uint64_t x10686 = 699817470211499LLU;
	volatile uint8_t x10687 = UINT8_MAX;
	int32_t t169 = -28;

    t169 = (x10685<=(x10686<=(x10687<<x10688)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x10733 = INT32_MIN;
	int16_t x10734 = 213;
	int32_t x10735 = INT32_MAX;
	int8_t x10736 = 0;
	volatile int32_t t170 = 375639097;

    t170 = (x10733<=(x10734<=(x10735<<x10736)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x10838 = INT32_MAX;
	static volatile int32_t t171 = -99;

    t171 = (x10837<=(x10838<=(x10839<<x10840)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x10909 = 10438280;
	static uint8_t x10911 = 1U;
	volatile int32_t t172 = -133746;

    t172 = (x10909<=(x10910<=(x10911<<x10912)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x10941 = 10U;
	static int32_t x10942 = INT32_MAX;
	static uint64_t x10943 = 177754881834916LLU;
	uint8_t x10944 = 36U;
	volatile int32_t t173 = -21626847;

    t173 = (x10941<=(x10942<=(x10943<<x10944)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x10957 = -1;
	volatile int16_t x10958 = -45;
	int32_t x10959 = 26784024;
	int16_t x10960 = 6;

    t174 = (x10957<=(x10958<=(x10959<<x10960)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x11002 = -112;
	int32_t x11003 = INT32_MAX;
	volatile uint8_t x11004 = 0U;

    t175 = (x11001<=(x11002<=(x11003<<x11004)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x11109 = 517947LL;
	int16_t x11110 = -1;
	uint64_t x11111 = 201989825927254477LLU;

    t176 = (x11109<=(x11110<=(x11111<<x11112)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x11233 = 12506045;
	int32_t x11234 = INT32_MIN;
	static volatile int32_t t177 = 496;

    t177 = (x11233<=(x11234<=(x11235<<x11236)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x11238 = 7206532U;
	uint8_t x11239 = 61U;
	int32_t t178 = 2025;

    t178 = (x11237<=(x11238<=(x11239<<x11240)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x11345 = 9U;
	int8_t x11346 = INT8_MIN;
	static uint32_t x11347 = 204U;
	static uint16_t x11348 = 22U;
	volatile int32_t t179 = -22836593;

    t179 = (x11345<=(x11346<=(x11347<<x11348)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x11373 = UINT16_MAX;
	static volatile uint8_t x11374 = UINT8_MAX;
	int16_t x11375 = 6;
	volatile uint16_t x11376 = 4U;
	int32_t t180 = -16;

    t180 = (x11373<=(x11374<=(x11375<<x11376)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x11417 = -1;
	int16_t x11418 = INT16_MIN;
	static volatile int64_t x11419 = INT64_MAX;
	volatile int16_t x11420 = 0;
	static int32_t t181 = 6409738;

    t181 = (x11417<=(x11418<=(x11419<<x11420)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x11453 = INT64_MIN;
	int64_t x11454 = INT64_MIN;
	int8_t x11455 = INT8_MAX;
	int16_t x11456 = 4;
	volatile int32_t t182 = -56853391;

    t182 = (x11453<=(x11454<=(x11455<<x11456)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x11477 = INT32_MIN;
	int16_t x11478 = -1;
	uint32_t x11479 = 18348641U;
	volatile uint8_t x11480 = 3U;
	static int32_t t183 = 6964029;

    t183 = (x11477<=(x11478<=(x11479<<x11480)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x11549 = INT64_MIN;
	volatile int8_t x11550 = INT8_MIN;
	static volatile uint64_t x11551 = 367504727357LLU;
	int8_t x11552 = 5;
	int32_t t184 = 30;

    t184 = (x11549<=(x11550<=(x11551<<x11552)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x11565 = INT32_MIN;
	uint8_t x11567 = 67U;
	uint8_t x11568 = 4U;
	int32_t t185 = -119817387;

    t185 = (x11565<=(x11566<=(x11567<<x11568)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x11849 = INT8_MIN;
	volatile uint8_t x11850 = UINT8_MAX;
	volatile int16_t x11851 = INT16_MAX;
	static int8_t x11852 = 1;
	volatile int32_t t186 = -4172989;

    t186 = (x11849<=(x11850<=(x11851<<x11852)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x11897 = INT32_MIN;
	int8_t x11898 = INT8_MAX;
	uint16_t x11900 = 9U;
	volatile int32_t t187 = -584740089;

    t187 = (x11897<=(x11898<=(x11899<<x11900)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x11946 = INT16_MIN;
	uint32_t x11947 = 137565U;
	uint8_t x11948 = 6U;

    t188 = (x11945<=(x11946<=(x11947<<x11948)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x11949 = -648;
	uint32_t x11950 = 1285U;
	static volatile int32_t x11951 = 3930017;
	int8_t x11952 = 5;
	int32_t t189 = -733768;

    t189 = (x11949<=(x11950<=(x11951<<x11952)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x12033 = INT32_MIN;
	static volatile int64_t x12034 = -23793LL;
	uint16_t x12036 = 2U;
	int32_t t190 = 326134;

    t190 = (x12033<=(x12034<=(x12035<<x12036)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x12189 = -12105715;
	int64_t x12191 = 12199729314LL;
	uint8_t x12192 = 8U;
	int32_t t191 = -3907;

    t191 = (x12189<=(x12190<=(x12191<<x12192)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x12241 = 18992;
	static int64_t x12242 = INT64_MIN;
	static uint8_t x12243 = 0U;
	int8_t x12244 = 0;
	static int32_t t192 = -170714;

    t192 = (x12241<=(x12242<=(x12243<<x12244)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x12321 = INT64_MAX;
	int16_t x12322 = INT16_MIN;
	static volatile int32_t t193 = 7;

    t193 = (x12321<=(x12322<=(x12323<<x12324)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x12533 = UINT8_MAX;
	int64_t x12535 = 61913210030637LL;
	uint16_t x12536 = 0U;
	int32_t t194 = 112529;

    t194 = (x12533<=(x12534<=(x12535<<x12536)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x12609 = -1;
	int8_t x12610 = -1;
	static volatile uint32_t x12611 = UINT32_MAX;
	volatile int32_t t195 = 58775452;

    t195 = (x12609<=(x12610<=(x12611<<x12612)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x12642 = INT64_MIN;
	volatile uint32_t x12643 = 95U;
	volatile int8_t x12644 = 0;
	static volatile int32_t t196 = -120450642;

    t196 = (x12641<=(x12642<=(x12643<<x12644)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x12645 = INT8_MAX;
	int32_t x12646 = INT32_MIN;
	int8_t x12647 = INT8_MAX;
	int32_t x12648 = 0;
	volatile int32_t t197 = 2414;

    t197 = (x12645<=(x12646<=(x12647<<x12648)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x12665 = 591;
	int64_t x12666 = -1LL;
	uint32_t x12667 = 725573081U;
	static int8_t x12668 = 0;
	volatile int32_t t198 = 238;

    t198 = (x12665<=(x12666<=(x12667<<x12668)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x12685 = 1;
	uint32_t x12686 = 452U;
	volatile uint8_t x12687 = 0U;
	static int64_t x12688 = 1LL;
	volatile int32_t t199 = 30;

    t199 = (x12685<=(x12686<=(x12687<<x12688)));

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

