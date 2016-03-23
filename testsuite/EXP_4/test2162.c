
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

volatile uint32_t x37 = 17U;
static int64_t x117 = 101839769112280448LL;
uint64_t x133 = 1LLU;
uint64_t t2 = 182857011579212341LLU;
int32_t t4 = 433124660;
int64_t x377 = 29634196LL;
int64_t x604 = INT64_MIN;
static int32_t t11 = -749385;
uint16_t x833 = UINT16_MAX;
static uint64_t x862 = UINT64_MAX;
static int8_t x863 = 7;
uint64_t t13 = 424LLU;
static int8_t x872 = 9;
static uint8_t x1462 = 13U;
volatile uint8_t x1463 = 34U;
static int64_t x1643 = -1LL;
int32_t t19 = -846;
static uint32_t t20 = 213U;
uint8_t x1831 = 22U;
volatile int32_t t22 = -3;
int32_t x1864 = 733;
uint64_t x1969 = 1008294LLU;
int16_t x1972 = INT16_MIN;
uint64_t t24 = 836543158000021LLU;
uint16_t x1980 = UINT16_MAX;
uint8_t x2187 = UINT8_MAX;
volatile int16_t x2229 = INT16_MAX;
int16_t x2230 = 2;
int32_t x2242 = -1;
int64_t x2363 = -1LL;
uint64_t x2489 = UINT64_MAX;
static int32_t x2491 = -1;
uint32_t x2492 = 1U;
uint32_t x2583 = 187320U;
int32_t t35 = 417805;
uint8_t x2778 = 11U;
int8_t x2780 = -1;
volatile uint8_t x2856 = UINT8_MAX;
static uint16_t x3284 = 21U;
int64_t x3325 = 327398448347LL;
volatile int64_t t44 = -311762238571LL;
int64_t t46 = -7579335LL;
int32_t x3482 = -1;
int32_t x3532 = INT32_MIN;
volatile uint64_t t49 = 586946993635LLU;
static uint32_t x3680 = UINT32_MAX;
volatile int32_t x3823 = INT32_MIN;
static uint8_t x3882 = 3U;
static uint16_t x3884 = UINT16_MAX;
static uint32_t x3991 = UINT32_MAX;
uint16_t x3995 = 3U;
int32_t x4380 = 3;
volatile uint32_t x4769 = 865776U;
uint32_t x4771 = 5U;
static int8_t x4772 = -1;
uint16_t x4834 = 0U;
uint32_t x4905 = 2348U;
uint32_t x5029 = UINT32_MAX;
uint32_t x5057 = 95618U;
volatile int8_t x5058 = 0;
volatile int16_t x5059 = INT16_MAX;
volatile int32_t x5060 = INT32_MIN;
static int8_t x5154 = -1;
uint16_t x5155 = UINT16_MAX;
int32_t t65 = -7298;
uint32_t x5269 = 174250U;
int16_t x5271 = 1;
uint16_t x5345 = 19928U;
static int32_t t69 = 9;
int8_t x5358 = 28;
int8_t x5392 = INT8_MIN;
static int16_t x5458 = 0;
int8_t x5459 = -25;
int64_t x5478 = -1LL;
volatile uint32_t t73 = 617428U;
int8_t x5502 = -1;
static volatile int32_t t75 = 2588424;
int32_t t76 = -6;
volatile int32_t x5876 = -54;
static volatile int16_t x5925 = 2;
int16_t x5967 = -1;
int32_t x6023 = 122171289;
volatile uint16_t x6226 = 17U;
int32_t x6228 = INT32_MIN;
static volatile int32_t t81 = -118256244;
static int64_t x6267 = INT64_MAX;
static int16_t x6519 = INT16_MAX;
volatile int32_t t84 = -94707;
int64_t x6912 = INT64_MIN;
uint64_t x7480 = 24133LLU;
uint32_t x7945 = 811481U;
static int32_t t97 = -1990;
int64_t x8318 = -1LL;
uint64_t x8368 = 279491391LLU;


void f0(void) {
    	static int32_t x38 = -1;
	static uint8_t x39 = 1U;
	uint16_t x40 = 7U;
	volatile uint32_t t0 = 25835U;

    t0 = (x37<<(x38+(x39&x40)));

    if (t0 != 17U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x118 = 3U;
	volatile int64_t x119 = INT64_MIN;
	int8_t x120 = 1;
	volatile int64_t t1 = 0LL;

    t1 = (x117<<(x118+(x119&x120)));

    if (t1 != 814718152898243584LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x134 = 1U;
	int64_t x135 = -1LL;
	uint8_t x136 = 9U;

    t2 = (x133<<(x134+(x135&x136)));

    if (t2 != 1024LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	int64_t x190 = -1LL;
	uint8_t x191 = 5U;
	uint32_t x192 = 17U;
	int32_t t3 = -114062;

    t3 = (x189<<(x190+(x191&x192)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x345 = INT8_MAX;
	int32_t x346 = -1;
	int64_t x347 = -2083162943270638590LL;
	int8_t x348 = INT8_MAX;

    t4 = (x345<<(x346+(x347&x348)));

    if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x378 = 25U;
	uint32_t x379 = 1U;
	int16_t x380 = -1;
	int64_t t5 = -797768819466570261LL;

    t5 = (x377<<(x378+(x379&x380)));

    if (t5 != 1988717229113344LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x529 = UINT8_MAX;
	int64_t x530 = -1LL;
	uint8_t x531 = 1U;
	uint64_t x532 = 8865619299683LLU;
	volatile int32_t t6 = 123;

    t6 = (x529<<(x530+(x531&x532)));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x573 = 2U;
	static int16_t x574 = -1;
	int16_t x575 = 97;
	volatile int32_t x576 = 3343;
	volatile int32_t t7 = 427;

    t7 = (x573<<(x574+(x575&x576)));

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x585 = 5420205LLU;
	static uint8_t x586 = 5U;
	int16_t x587 = 1;
	static int8_t x588 = INT8_MIN;
	uint64_t t8 = 118LLU;

    t8 = (x585<<(x586+(x587&x588)));

    if (t8 != 173446560LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	uint8_t x602 = 16U;
	int32_t x603 = 987646031;
	volatile int32_t t9 = 258433;

    t9 = (x601<<(x602+(x603&x604)));

    if (t9 != 16711680) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x617 = UINT8_MAX;
	static int8_t x618 = 1;
	static int64_t x619 = INT64_MAX;
	static uint8_t x620 = 5U;
	volatile int32_t t10 = -31690;

    t10 = (x617<<(x618+(x619&x620)));

    if (t10 != 16320) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x709 = 23;
	uint32_t x710 = 0U;
	int32_t x711 = INT32_MIN;
	volatile int8_t x712 = 1;

    t11 = (x709<<(x710+(x711&x712)));

    if (t11 != 23) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x834 = 1U;
	int8_t x835 = INT8_MIN;
	int8_t x836 = 31;
	int32_t t12 = 59326778;

    t12 = (x833<<(x834+(x835&x836)));

    if (t12 != 131070) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x861 = 38838120LLU;
	uint16_t x864 = 15U;

    t13 = (x861<<(x862+(x863&x864)));

    if (t13 != 2485639680LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x869 = 14U;
	int64_t x870 = -1LL;
	int16_t x871 = -1;
	volatile int32_t t14 = 8907983;

    t14 = (x869<<(x870+(x871&x872)));

    if (t14 != 3584) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x877 = UINT64_MAX;
	int8_t x878 = 1;
	int8_t x879 = 8;
	static int64_t x880 = INT64_MAX;
	uint64_t t15 = 1946212661281722629LLU;

    t15 = (x877<<(x878+(x879&x880)));

    if (t15 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x1137 = UINT16_MAX;
	static volatile int8_t x1138 = 1;
	int8_t x1139 = 1;
	int32_t x1140 = INT32_MIN;
	volatile int32_t t16 = 10;

    t16 = (x1137<<(x1138+(x1139&x1140)));

    if (t16 != 131070) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x1461 = 49U;
	volatile uint16_t x1464 = 142U;
	int32_t t17 = 3285811;

    t17 = (x1461<<(x1462+(x1463&x1464)));

    if (t17 != 1605632) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x1609 = UINT32_MAX;
	uint32_t x1610 = 4U;
	int8_t x1611 = -1;
	int64_t x1612 = -1LL;
	static volatile uint32_t t18 = 8U;

    t18 = (x1609<<(x1610+(x1611&x1612)));

    if (t18 != 4294967288U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1641 = 0U;
	int16_t x1642 = 14;
	int16_t x1644 = 2;

    t19 = (x1641<<(x1642+(x1643&x1644)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x1757 = UINT32_MAX;
	static volatile int16_t x1758 = -1;
	int16_t x1759 = 14;
	uint8_t x1760 = 3U;

    t20 = (x1757<<(x1758+(x1759&x1760)));

    if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x1829 = UINT8_MAX;
	static volatile int16_t x1830 = -1;
	static int64_t x1832 = INT64_MAX;
	volatile int32_t t21 = -413406970;

    t21 = (x1829<<(x1830+(x1831&x1832)));

    if (t21 != 534773760) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x1853 = UINT16_MAX;
	int8_t x1854 = -1;
	uint8_t x1855 = 3U;
	uint64_t x1856 = UINT64_MAX;

    t22 = (x1853<<(x1854+(x1855&x1856)));

    if (t22 != 262140) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x1861 = INT16_MAX;
	volatile int16_t x1862 = -1;
	static uint8_t x1863 = 7U;
	volatile int32_t t23 = 4323;

    t23 = (x1861<<(x1862+(x1863&x1864)));

    if (t23 != 524272) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1970 = 0U;
	static volatile int64_t x1971 = 2745LL;

    t24 = (x1969<<(x1970+(x1971&x1972)));

    if (t24 != 1008294LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1977 = UINT64_MAX;
	volatile int16_t x1978 = -1;
	uint64_t x1979 = 19LLU;
	uint64_t t25 = 46552LLU;

    t25 = (x1977<<(x1978+(x1979&x1980)));

    if (t25 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x2185 = 0;
	volatile int8_t x2186 = 25;
	int64_t x2188 = INT64_MIN;
	static volatile int32_t t26 = -10;

    t26 = (x2185<<(x2186+(x2187&x2188)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x2231 = 1U;
	volatile uint16_t x2232 = UINT16_MAX;
	volatile int32_t t27 = -220621437;

    t27 = (x2229<<(x2230+(x2231&x2232)));

    if (t27 != 262136) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x2241 = 16;
	volatile int16_t x2243 = 7;
	int32_t x2244 = -558;
	volatile int32_t t28 = 51492825;

    t28 = (x2241<<(x2242+(x2243&x2244)));

    if (t28 != 32) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2317 = UINT16_MAX;
	static uint32_t x2318 = 15U;
	volatile int16_t x2319 = INT16_MIN;
	static uint8_t x2320 = 15U;
	int32_t t29 = -8;

    t29 = (x2317<<(x2318+(x2319&x2320)));

    if (t29 != 2147450880) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x2361 = UINT16_MAX;
	uint8_t x2362 = 0U;
	int8_t x2364 = 2;
	volatile int32_t t30 = 189;

    t30 = (x2361<<(x2362+(x2363&x2364)));

    if (t30 != 262140) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2405 = UINT64_MAX;
	int64_t x2406 = 9LL;
	int8_t x2407 = 45;
	volatile uint16_t x2408 = 53U;
	static volatile uint64_t t31 = 19468LLU;

    t31 = (x2405<<(x2406+(x2407&x2408)));

    if (t31 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x2441 = UINT16_MAX;
	uint32_t x2442 = 12U;
	int16_t x2443 = 0;
	uint16_t x2444 = 7462U;
	static volatile int32_t t32 = 8546582;

    t32 = (x2441<<(x2442+(x2443&x2444)));

    if (t32 != 268431360) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2490 = 24;
	volatile uint64_t t33 = 33LLU;

    t33 = (x2489<<(x2490+(x2491&x2492)));

    if (t33 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x2581 = UINT8_MAX;
	int64_t x2582 = 3LL;
	int64_t x2584 = INT64_MIN;
	int32_t t34 = -21944;

    t34 = (x2581<<(x2582+(x2583&x2584)));

    if (t34 != 2040) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2617 = 0U;
	static uint8_t x2618 = 19U;
	static int64_t x2619 = 239LL;
	int16_t x2620 = INT16_MIN;

    t35 = (x2617<<(x2618+(x2619&x2620)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2685 = 1468481601U;
	static volatile int8_t x2686 = 1;
	uint8_t x2687 = 15U;
	int32_t x2688 = -1;
	volatile uint32_t t36 = 24U;

    t36 = (x2685<<(x2686+(x2687&x2688)));

    if (t36 != 1078001664U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x2713 = 15380478508259LL;
	uint8_t x2714 = 13U;
	int32_t x2715 = INT32_MIN;
	int16_t x2716 = 172;
	volatile int64_t t37 = 7LL;

    t37 = (x2713<<(x2714+(x2715&x2716)));

    if (t37 != 125996879939657728LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x2777 = 816781075670LL;
	uint64_t x2779 = UINT64_MAX;
	int64_t t38 = 262729958359356LL;

    t38 = (x2777<<(x2778+(x2779&x2780)));

    if (t38 != 836383821486080LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2853 = UINT64_MAX;
	volatile int8_t x2854 = INT8_MIN;
	uint32_t x2855 = 2700U;
	volatile uint64_t t39 = 9LLU;

    t39 = (x2853<<(x2854+(x2855&x2856)));

    if (t39 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x3001 = 2957842093761482304LLU;
	uint8_t x3002 = 12U;
	static int64_t x3003 = -50052417587469840LL;
	volatile int8_t x3004 = 3;
	volatile uint64_t t40 = 957009355199LLU;

    t40 = (x3001<<(x3002+(x3003&x3004)));

    if (t40 != 14257103693565657088LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3109 = 51597392U;
	int64_t x3110 = -1LL;
	volatile uint32_t x3111 = UINT32_MAX;
	static volatile uint8_t x3112 = 14U;
	uint32_t t41 = 1386906U;

    t41 = (x3109<<(x3110+(x3111&x3112)));

    if (t41 != 1779040256U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x3233 = 113658832U;
	int8_t x3234 = -1;
	uint32_t x3235 = 244166622U;
	int32_t x3236 = 61;
	volatile uint32_t t42 = 458072U;

    t42 = (x3233<<(x3234+(x3235&x3236)));

    if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3281 = 136341496LLU;
	uint32_t x3282 = UINT32_MAX;
	uint8_t x3283 = UINT8_MAX;
	static volatile uint64_t t43 = 20486LLU;

    t43 = (x3281<<(x3282+(x3283&x3284)));

    if (t43 != 142964420509696LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3326 = 0;
	uint32_t x3327 = 1U;
	static uint16_t x3328 = 0U;

    t44 = (x3325<<(x3326+(x3327&x3328)));

    if (t44 != 327398448347LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x3381 = 47630451242773073LLU;
	static uint16_t x3382 = 22U;
	static uint16_t x3383 = 566U;
	int16_t x3384 = INT16_MIN;
	volatile uint64_t t45 = 20068886LLU;

    t45 = (x3381<<(x3382+(x3383&x3384)));

    if (t45 != 16800595167336726528LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3425 = 1001LL;
	static int32_t x3426 = 1;
	uint8_t x3427 = 20U;
	uint16_t x3428 = UINT16_MAX;

    t46 = (x3425<<(x3426+(x3427&x3428)));

    if (t46 != 2099249152LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3481 = 24;
	int8_t x3483 = 7;
	volatile uint16_t x3484 = 2U;
	int32_t t47 = 1;

    t47 = (x3481<<(x3482+(x3483&x3484)));

    if (t47 != 48) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x3521 = 9594450LLU;
	uint32_t x3522 = 2U;
	volatile uint32_t x3523 = 3U;
	int64_t x3524 = -4013999786469LL;
	volatile uint64_t t48 = 3113902318951995966LLU;

    t48 = (x3521<<(x3522+(x3523&x3524)));

    if (t48 != 307022400LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3529 = 2052718900432398704LLU;
	uint8_t x3530 = 61U;
	static volatile uint16_t x3531 = UINT16_MAX;

    t49 = (x3529<<(x3530+(x3531&x3532)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3585 = 6U;
	int8_t x3586 = 26;
	static int16_t x3587 = INT16_MIN;
	int32_t x3588 = 0;
	volatile int32_t t50 = -116;

    t50 = (x3585<<(x3586+(x3587&x3588)));

    if (t50 != 402653184) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3677 = 17;
	static uint32_t x3678 = 2U;
	volatile int64_t x3679 = INT64_MIN;
	int32_t t51 = -282542;

    t51 = (x3677<<(x3678+(x3679&x3680)));

    if (t51 != 68) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x3821 = 79U;
	uint16_t x3822 = 3U;
	int32_t x3824 = INT32_MAX;
	volatile int32_t t52 = -6546;

    t52 = (x3821<<(x3822+(x3823&x3824)));

    if (t52 != 632) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x3881 = INT8_MAX;
	static int64_t x3883 = 1LL;
	volatile int32_t t53 = 3;

    t53 = (x3881<<(x3882+(x3883&x3884)));

    if (t53 != 2032) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3905 = 0LL;
	static volatile int8_t x3906 = -1;
	static uint64_t x3907 = 59080590LLU;
	int16_t x3908 = 13;
	int64_t t54 = -250316283109LL;

    t54 = (x3905<<(x3906+(x3907&x3908)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x3989 = UINT8_MAX;
	int32_t x3990 = INT32_MIN;
	int32_t x3992 = INT32_MIN;
	static volatile int32_t t55 = 533944774;

    t55 = (x3989<<(x3990+(x3991&x3992)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x3993 = 1916U;
	uint16_t x3994 = 2U;
	int16_t x3996 = INT16_MAX;
	uint32_t t56 = 3938185U;

    t56 = (x3993<<(x3994+(x3995&x3996)));

    if (t56 != 61312U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x4377 = 152U;
	volatile uint16_t x4378 = 23U;
	uint16_t x4379 = 46U;
	static volatile uint32_t t57 = 12434U;

    t57 = (x4377<<(x4378+(x4379&x4380)));

    if (t57 != 805306368U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x4477 = 20781U;
	volatile uint32_t x4478 = UINT32_MAX;
	static int8_t x4479 = 1;
	static uint16_t x4480 = 7U;
	int32_t t58 = 755464594;

    t58 = (x4477<<(x4478+(x4479&x4480)));

    if (t58 != 20781) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x4649 = 2588145U;
	int64_t x4650 = -1LL;
	static uint64_t x4651 = UINT64_MAX;
	uint16_t x4652 = 12U;
	uint32_t t59 = 0U;

    t59 = (x4649<<(x4650+(x4651&x4652)));

    if (t59 != 1005553664U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x4770 = -1;
	uint32_t t60 = 693782918U;

    t60 = (x4769<<(x4770+(x4771&x4772)));

    if (t60 != 13852416U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x4833 = 109767LL;
	int32_t x4835 = INT32_MAX;
	int32_t x4836 = INT32_MIN;
	volatile int64_t t61 = 0LL;

    t61 = (x4833<<(x4834+(x4835&x4836)));

    if (t61 != 109767LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x4906 = 0U;
	int8_t x4907 = 2;
	int16_t x4908 = -136;
	uint32_t t62 = 220U;

    t62 = (x4905<<(x4906+(x4907&x4908)));

    if (t62 != 2348U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x5030 = -1;
	int64_t x5031 = -1LL;
	uint8_t x5032 = 1U;
	volatile uint32_t t63 = UINT32_MAX;

    t63 = (x5029<<(x5030+(x5031&x5032)));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t t64 = 47321U;

    t64 = (x5057<<(x5058+(x5059&x5060)));

    if (t64 != 95618U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x5153 = INT16_MAX;
	int16_t x5156 = 10;

    t65 = (x5153<<(x5154+(x5155&x5156)));

    if (t65 != 16776704) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x5185 = UINT32_MAX;
	int16_t x5186 = -1;
	static uint32_t x5187 = UINT32_MAX;
	int8_t x5188 = 1;
	volatile uint32_t t66 = UINT32_MAX;

    t66 = (x5185<<(x5186+(x5187&x5188)));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x5270 = 26U;
	static int16_t x5272 = INT16_MIN;
	uint32_t t67 = 1278404U;

    t67 = (x5269<<(x5270+(x5271&x5272)));

    if (t67 != 2818572288U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x5341 = UINT16_MAX;
	uint64_t x5342 = UINT64_MAX;
	uint32_t x5343 = 275U;
	static int16_t x5344 = 3749;
	volatile int32_t t68 = 1930;

    t68 = (x5341<<(x5342+(x5343&x5344)));

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x5346 = UINT64_MAX;
	volatile uint16_t x5347 = 7U;
	int8_t x5348 = 12;

    t69 = (x5345<<(x5346+(x5347&x5348)));

    if (t69 != 159424) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x5357 = UINT64_MAX;
	uint8_t x5359 = 32U;
	int16_t x5360 = INT16_MIN;
	static volatile uint64_t t70 = 69669855995037LLU;

    t70 = (x5357<<(x5358+(x5359&x5360)));

    if (t70 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x5389 = UINT64_MAX;
	int8_t x5390 = 4;
	static int32_t x5391 = 3;
	volatile uint64_t t71 = 8538001513241LLU;

    t71 = (x5389<<(x5390+(x5391&x5392)));

    if (t71 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x5457 = 15790U;
	uint8_t x5460 = 6U;
	static volatile uint32_t t72 = 1U;

    t72 = (x5457<<(x5458+(x5459&x5460)));

    if (t72 != 1010560U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x5477 = 452155U;
	volatile uint64_t x5479 = 109411LLU;
	volatile uint16_t x5480 = 10U;

    t73 = (x5477<<(x5478+(x5479&x5480)));

    if (t73 != 904310U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x5501 = 211U;
	int8_t x5503 = -1;
	uint32_t x5504 = 1U;
	volatile int32_t t74 = 256617885;

    t74 = (x5501<<(x5502+(x5503&x5504)));

    if (t74 != 211) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x5557 = INT8_MAX;
	static volatile uint8_t x5558 = 5U;
	static volatile int8_t x5559 = 2;
	uint32_t x5560 = 79889586U;

    t75 = (x5557<<(x5558+(x5559&x5560)));

    if (t75 != 16256) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x5729 = 4;
	static int64_t x5730 = -1LL;
	uint8_t x5731 = 3U;
	int32_t x5732 = 138502;

    t76 = (x5729<<(x5730+(x5731&x5732)));

    if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x5873 = INT16_MAX;
	int64_t x5874 = -1LL;
	int16_t x5875 = 2;
	int32_t t77 = 369;

    t77 = (x5873<<(x5874+(x5875&x5876)));

    if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x5926 = 0LLU;
	int64_t x5927 = INT64_MIN;
	int16_t x5928 = 357;
	volatile int32_t t78 = -4127;

    t78 = (x5925<<(x5926+(x5927&x5928)));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x5965 = 0U;
	int64_t x5966 = -1LL;
	static uint8_t x5968 = 3U;
	int32_t t79 = -1;

    t79 = (x5965<<(x5966+(x5967&x5968)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x6021 = 6U;
	int16_t x6022 = 25;
	int64_t x6024 = INT64_MIN;
	int32_t t80 = 207187;

    t80 = (x6021<<(x6022+(x6023&x6024)));

    if (t80 != 201326592) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x6225 = 1;
	volatile uint16_t x6227 = UINT16_MAX;

    t81 = (x6225<<(x6226+(x6227&x6228)));

    if (t81 != 131072) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x6241 = 3;
	volatile int8_t x6242 = 5;
	int64_t x6243 = -2973698340272LL;
	volatile int8_t x6244 = 1;
	int32_t t82 = 93980;

    t82 = (x6241<<(x6242+(x6243&x6244)));

    if (t82 != 96) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x6265 = INT16_MAX;
	int64_t x6266 = -1LL;
	int16_t x6268 = 3;
	int32_t t83 = 267002170;

    t83 = (x6265<<(x6266+(x6267&x6268)));

    if (t83 != 131068) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x6517 = INT8_MAX;
	uint16_t x6518 = 2U;
	static uint32_t x6520 = 1U;

    t84 = (x6517<<(x6518+(x6519&x6520)));

    if (t84 != 1016) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x6605 = 127156339LLU;
	volatile int8_t x6606 = -1;
	uint32_t x6607 = UINT32_MAX;
	int32_t x6608 = 2;
	volatile uint64_t t85 = 702804660508283LLU;

    t85 = (x6605<<(x6606+(x6607&x6608)));

    if (t85 != 254312678LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x6617 = 4U;
	uint8_t x6618 = 2U;
	uint32_t x6619 = 0U;
	static int64_t x6620 = 4052560LL;
	volatile uint32_t t86 = 2U;

    t86 = (x6617<<(x6618+(x6619&x6620)));

    if (t86 != 16U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x6649 = INT8_MAX;
	int8_t x6650 = 3;
	uint8_t x6651 = 0U;
	int8_t x6652 = INT8_MAX;
	int32_t t87 = -7;

    t87 = (x6649<<(x6650+(x6651&x6652)));

    if (t87 != 1016) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x6909 = INT16_MAX;
	int8_t x6910 = 1;
	int8_t x6911 = INT8_MAX;
	int32_t t88 = -461;

    t88 = (x6909<<(x6910+(x6911&x6912)));

    if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x6917 = 1290U;
	uint16_t x6918 = 2U;
	uint16_t x6919 = UINT16_MAX;
	volatile int32_t x6920 = INT32_MIN;
	static volatile int32_t t89 = 147;

    t89 = (x6917<<(x6918+(x6919&x6920)));

    if (t89 != 5160) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x7157 = 1U;
	static int16_t x7158 = 0;
	int16_t x7159 = INT16_MIN;
	static volatile uint32_t x7160 = 31038U;
	volatile int32_t t90 = 981;

    t90 = (x7157<<(x7158+(x7159&x7160)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x7229 = 26299204LL;
	int64_t x7230 = -1LL;
	volatile int64_t x7231 = -386LL;
	uint16_t x7232 = 9U;
	volatile int64_t t91 = -32656014668893LL;

    t91 = (x7229<<(x7230+(x7231&x7232)));

    if (t91 != 3366298112LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x7477 = 5319;
	int8_t x7478 = -1;
	uint8_t x7479 = 31U;
	volatile int32_t t92 = -1123930;

    t92 = (x7477<<(x7478+(x7479&x7480)));

    if (t92 != 85104) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x7589 = 22906085415LLU;
	uint8_t x7590 = 0U;
	uint16_t x7591 = 13U;
	int64_t x7592 = INT64_MIN;
	volatile uint64_t t93 = 28417102378LLU;

    t93 = (x7589<<(x7590+(x7591&x7592)));

    if (t93 != 22906085415LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x7649 = 8;
	static volatile uint32_t x7650 = 14U;
	int16_t x7651 = 10;
	int32_t x7652 = -32556;
	int32_t t94 = -12879;

    t94 = (x7649<<(x7650+(x7651&x7652)));

    if (t94 != 131072) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x7809 = INT16_MAX;
	int32_t x7810 = -1;
	uint8_t x7811 = 5U;
	int32_t x7812 = INT32_MAX;
	volatile int32_t t95 = -33;

    t95 = (x7809<<(x7810+(x7811&x7812)));

    if (t95 != 524272) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x7946 = 23;
	uint8_t x7947 = 3U;
	int8_t x7948 = -1;
	uint32_t t96 = 506278U;

    t96 = (x7945<<(x7946+(x7947&x7948)));

    if (t96 != 1677721600U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x7969 = 0U;
	int64_t x7970 = -1LL;
	uint16_t x7971 = 44U;
	int64_t x7972 = 2887429892713230LL;

    t97 = (x7969<<(x7970+(x7971&x7972)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x8097 = 2U;
	int32_t x8098 = -1;
	static uint8_t x8099 = 14U;
	int64_t x8100 = -1LL;
	static volatile int32_t t98 = -1168920;

    t98 = (x8097<<(x8098+(x8099&x8100)));

    if (t98 != 16384) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x8317 = INT16_MAX;
	static int32_t x8319 = 1983663;
	int16_t x8320 = 8;
	int32_t t99 = 508491981;

    t99 = (x8317<<(x8318+(x8319&x8320)));

    if (t99 != 4194176) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x8365 = 0LLU;
	static int32_t x8366 = -1;
	int8_t x8367 = INT8_MAX;
	uint64_t t100 = 32294LLU;

    t100 = (x8365<<(x8366+(x8367&x8368)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x8597 = 11006906890828LLU;
	int16_t x8598 = 2;
	uint16_t x8599 = 26U;
	static volatile int32_t x8600 = INT32_MAX;
	volatile uint64_t t101 = 8673949989269LLU;

    t101 = (x8597<<(x8598+(x8599&x8600)));

    if (t101 != 3165018595428139008LLU) { NG(); } else { ; }
	
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


    return 0;
}

