
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

int8_t x166 = INT8_MIN;
uint32_t t1 = 44126523U;
int8_t x342 = INT8_MIN;
int64_t x343 = 0LL;
int8_t x538 = -6;
static int32_t t3 = -138921817;
static int64_t x550 = INT64_MAX;
uint32_t t4 = UINT32_MAX;
static uint32_t x721 = 5693U;
int16_t x723 = 3;
volatile int32_t x724 = -1;
static int16_t x753 = 1251;
volatile uint32_t x761 = 450042110U;
uint16_t x763 = 0U;
volatile uint32_t t9 = 11978742U;
int32_t x955 = INT32_MAX;
int16_t x983 = -1;
volatile int16_t x1166 = INT16_MAX;
int32_t x1168 = INT32_MIN;
uint32_t x1262 = 23709U;
volatile uint64_t t18 = 127292485LLU;
int32_t x1296 = INT32_MIN;
int64_t x1793 = 26636217203774LL;
int8_t x1906 = INT8_MIN;
volatile uint64_t t22 = 14674943647705754LLU;
int32_t x2265 = 26140347;
uint8_t x2268 = UINT8_MAX;
volatile int64_t t25 = INT64_MAX;
volatile int32_t t27 = -31010468;
uint8_t x2493 = 5U;
int64_t x2495 = INT64_MIN;
static int32_t x2553 = INT32_MAX;
volatile uint32_t x2554 = UINT32_MAX;
uint8_t x2555 = 1U;
int8_t x2612 = 0;
int32_t t30 = 6787;
int8_t x2965 = 12;
int16_t x2968 = INT16_MIN;
volatile int32_t t34 = 26444;
int32_t x2980 = INT32_MIN;
volatile int64_t t35 = INT64_MAX;
int32_t x3004 = -1;
volatile int8_t x3067 = 2;
volatile int32_t t38 = -152311682;
int16_t x3146 = INT16_MAX;
uint8_t x3177 = 69U;
uint64_t x3178 = 0LLU;
static int16_t x3182 = INT16_MIN;
volatile int32_t t44 = -5455277;
int64_t x3419 = -28327435312228LL;
static int32_t t45 = 0;
uint64_t x3532 = 5LLU;
static volatile uint16_t x3539 = UINT16_MAX;
uint64_t x3610 = 4303710757276538LLU;
int16_t x3612 = 0;
static int8_t x3648 = 0;
static uint8_t x4194 = 0U;
uint16_t x4195 = 3547U;
int16_t x4196 = -1013;
uint16_t x4325 = 749U;
int16_t x4435 = -55;
static int8_t x4441 = INT8_MAX;
int32_t x4442 = INT32_MIN;
int32_t x4443 = 0;
int64_t x4505 = INT64_MAX;
uint16_t x4589 = 130U;
volatile int32_t t62 = 97974;
uint16_t x4677 = 21120U;
int32_t x4679 = INT32_MIN;
uint32_t x4685 = 29U;
static int8_t x4686 = -1;
int32_t x4688 = -1;
volatile int8_t x5014 = 0;
int32_t t70 = -431677182;
uint16_t x5180 = 1U;
volatile int8_t x5226 = 12;
static uint8_t x5227 = 0U;
int8_t x5489 = 0;
uint16_t x5583 = 0U;
int8_t x5674 = 0;
uint64_t x5676 = UINT64_MAX;
static int32_t t76 = 0;
int8_t x5782 = 0;
int8_t x5783 = 0;
volatile int16_t x6202 = INT16_MIN;
static volatile uint32_t x6204 = 748U;
static uint8_t x6274 = UINT8_MAX;
static int64_t x6331 = -25LL;
uint32_t t82 = 357082U;
int8_t x6394 = 0;
int16_t x6395 = INT16_MIN;
static int16_t x6408 = 0;
uint64_t x6454 = UINT64_MAX;
static int16_t x6593 = INT16_MAX;
static int16_t x6682 = INT16_MIN;
int8_t x6683 = 0;
int32_t t87 = 2;
static uint64_t x6873 = 5085832LLU;
volatile uint64_t t88 = 93141LLU;
int8_t x7022 = INT8_MIN;
static uint32_t x7234 = 190987701U;
int16_t x7235 = 0;
static volatile uint16_t x7276 = UINT16_MAX;
volatile uint32_t t93 = 36828580U;
static uint8_t x7572 = 0U;
static int32_t t95 = -1;


void f0(void) {
    	int32_t x165 = INT32_MAX;
	static int8_t x167 = INT8_MAX;
	int16_t x168 = 0;
	volatile int32_t t0 = INT32_MAX;

    t0 = (x165>>(x166*(x167*x168)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x297 = 93U;
	volatile int64_t x298 = 0LL;
	static uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;

    t1 = (x297>>(x298*(x299*x300)));

    if (t1 != 93U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x341 = UINT16_MAX;
	static uint16_t x344 = 23591U;
	int32_t t2 = 5;

    t2 = (x341>>(x342*(x343*x344)));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x537 = 24;
	int64_t x539 = 0LL;
	static int64_t x540 = INT64_MIN;

    t3 = (x537>>(x538*(x539*x540)));

    if (t3 != 24) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x549 = UINT32_MAX;
	volatile int16_t x551 = INT16_MIN;
	int8_t x552 = 0;

    t4 = (x549>>(x550*(x551*x552)));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x613 = 4668U;
	static uint64_t x614 = UINT64_MAX;
	static int8_t x615 = 13;
	int16_t x616 = -1;
	static int32_t t5 = 37694;

    t5 = (x613>>(x614*(x615*x616)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x722 = UINT64_MAX;
	static uint32_t t6 = 6U;

    t6 = (x721>>(x722*(x723*x724)));

    if (t6 != 711U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x754 = INT16_MAX;
	int32_t x755 = INT32_MIN;
	volatile uint8_t x756 = 0U;
	int32_t t7 = 18942;

    t7 = (x753>>(x754*(x755*x756)));

    if (t7 != 1251) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x762 = INT8_MIN;
	uint16_t x764 = 20U;
	uint32_t t8 = 21030472U;

    t8 = (x761>>(x762*(x763*x764)));

    if (t8 != 450042110U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x777 = 279664U;
	uint64_t x778 = 26818406723351869LLU;
	volatile int16_t x779 = 0;
	int16_t x780 = INT16_MAX;

    t9 = (x777>>(x778*(x779*x780)));

    if (t9 != 279664U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x845 = 117LLU;
	int32_t x846 = INT32_MIN;
	uint32_t x847 = UINT32_MAX;
	int32_t x848 = 0;
	uint64_t t10 = 1523052901LLU;

    t10 = (x845>>(x846*(x847*x848)));

    if (t10 != 117LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x897 = UINT64_MAX;
	int16_t x898 = INT16_MIN;
	static int64_t x899 = 1452LL;
	int8_t x900 = 0;
	uint64_t t11 = UINT64_MAX;

    t11 = (x897>>(x898*(x899*x900)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x905 = UINT32_MAX;
	int32_t x906 = INT32_MIN;
	int64_t x907 = 0LL;
	int32_t x908 = INT32_MIN;
	uint32_t t12 = UINT32_MAX;

    t12 = (x905>>(x906*(x907*x908)));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x945 = 21;
	int16_t x946 = -1;
	uint8_t x947 = 3U;
	int32_t x948 = -1;
	static volatile int32_t t13 = -592659899;

    t13 = (x945>>(x946*(x947*x948)));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x953 = 11702LLU;
	uint8_t x954 = 102U;
	static int8_t x956 = 0;
	volatile uint64_t t14 = 5801982555177959LLU;

    t14 = (x953>>(x954*(x955*x956)));

    if (t14 != 11702LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x981 = 3U;
	static volatile uint16_t x982 = 8U;
	static int64_t x984 = -1LL;
	int32_t t15 = -470186002;

    t15 = (x981>>(x982*(x983*x984)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1165 = 1U;
	uint8_t x1167 = 0U;
	static int32_t t16 = 60973755;

    t16 = (x1165>>(x1166*(x1167*x1168)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1217 = UINT8_MAX;
	volatile uint16_t x1218 = 0U;
	volatile int8_t x1219 = INT8_MIN;
	static uint32_t x1220 = UINT32_MAX;
	int32_t t17 = -1;

    t17 = (x1217>>(x1218*(x1219*x1220)));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1261 = 80990336LLU;
	static int32_t x1263 = INT32_MIN;
	uint32_t x1264 = 882U;

    t18 = (x1261>>(x1262*(x1263*x1264)));

    if (t18 != 80990336LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1293 = UINT8_MAX;
	static uint8_t x1294 = 31U;
	int32_t x1295 = 0;
	static volatile int32_t t19 = 14620245;

    t19 = (x1293>>(x1294*(x1295*x1296)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1481 = 16160U;
	uint32_t x1482 = UINT32_MAX;
	volatile int32_t x1483 = 659441405;
	static uint16_t x1484 = 0U;
	int32_t t20 = -274492;

    t20 = (x1481>>(x1482*(x1483*x1484)));

    if (t20 != 16160) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1794 = 0LL;
	int8_t x1795 = -1;
	static int8_t x1796 = -1;
	volatile int64_t t21 = -339554837465703539LL;

    t21 = (x1793>>(x1794*(x1795*x1796)));

    if (t21 != 26636217203774LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1905 = 234214408LLU;
	uint32_t x1907 = 212954U;
	static int32_t x1908 = INT32_MIN;

    t22 = (x1905>>(x1906*(x1907*x1908)));

    if (t22 != 234214408LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x2266 = INT32_MAX;
	static int16_t x2267 = 0;
	int32_t t23 = -3635174;

    t23 = (x2265>>(x2266*(x2267*x2268)));

    if (t23 != 26140347) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2277 = 189;
	volatile int16_t x2278 = -1;
	int32_t x2279 = -1;
	volatile uint8_t x2280 = 1U;
	int32_t t24 = 32962275;

    t24 = (x2277>>(x2278*(x2279*x2280)));

    if (t24 != 94) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x2309 = INT64_MAX;
	int8_t x2310 = -23;
	static int32_t x2311 = 1;
	int16_t x2312 = 0;

    t25 = (x2309>>(x2310*(x2311*x2312)));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2373 = 670152195U;
	volatile uint64_t x2374 = 41357212002LLU;
	uint64_t x2375 = 0LLU;
	uint64_t x2376 = 1LLU;
	volatile uint32_t t26 = 427U;

    t26 = (x2373>>(x2374*(x2375*x2376)));

    if (t26 != 670152195U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2485 = INT16_MAX;
	volatile int8_t x2486 = 0;
	int32_t x2487 = -1;
	volatile int16_t x2488 = -25;

    t27 = (x2485>>(x2486*(x2487*x2488)));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x2494 = -1;
	static uint8_t x2496 = 0U;
	volatile int32_t t28 = -1;

    t28 = (x2493>>(x2494*(x2495*x2496)));

    if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2556 = 0LLU;
	int32_t t29 = INT32_MAX;

    t29 = (x2553>>(x2554*(x2555*x2556)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2609 = 0U;
	int16_t x2610 = -1;
	volatile uint16_t x2611 = 292U;

    t30 = (x2609>>(x2610*(x2611*x2612)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2621 = UINT8_MAX;
	int64_t x2622 = INT64_MIN;
	uint32_t x2623 = 0U;
	volatile uint64_t x2624 = 30643364LLU;
	volatile int32_t t31 = 1192045;

    t31 = (x2621>>(x2622*(x2623*x2624)));

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2789 = 12480856LLU;
	int32_t x2790 = 1;
	int32_t x2791 = -1;
	uint32_t x2792 = UINT32_MAX;
	static volatile uint64_t t32 = 28LLU;

    t32 = (x2789>>(x2790*(x2791*x2792)));

    if (t32 != 6240428LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x2966 = INT32_MIN;
	uint16_t x2967 = 0U;
	volatile int32_t t33 = 520164;

    t33 = (x2965>>(x2966*(x2967*x2968)));

    if (t33 != 12) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2973 = 44301;
	volatile int32_t x2974 = INT32_MIN;
	uint32_t x2975 = 0U;
	static uint8_t x2976 = UINT8_MAX;

    t34 = (x2973>>(x2974*(x2975*x2976)));

    if (t34 != 44301) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x2977 = INT64_MAX;
	int16_t x2978 = -1;
	static volatile uint8_t x2979 = 0U;

    t35 = (x2977>>(x2978*(x2979*x2980)));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x3001 = 0;
	uint8_t x3002 = 28U;
	int32_t x3003 = -1;
	int32_t t36 = 4450;

    t36 = (x3001>>(x3002*(x3003*x3004)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x3017 = 192898382U;
	static volatile int8_t x3018 = INT8_MIN;
	uint32_t x3019 = 98U;
	int8_t x3020 = 0;
	static volatile uint32_t t37 = 14U;

    t37 = (x3017>>(x3018*(x3019*x3020)));

    if (t37 != 192898382U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x3065 = 15U;
	uint32_t x3066 = UINT32_MAX;
	static uint32_t x3068 = UINT32_MAX;

    t38 = (x3065>>(x3066*(x3067*x3068)));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x3089 = 14899LLU;
	static int32_t x3090 = -218;
	uint64_t x3091 = UINT64_MAX;
	uint8_t x3092 = 0U;
	static volatile uint64_t t39 = 170591241943LLU;

    t39 = (x3089>>(x3090*(x3091*x3092)));

    if (t39 != 14899LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x3145 = 82U;
	int8_t x3147 = INT8_MIN;
	uint32_t x3148 = 0U;
	volatile uint32_t t40 = 1054259129U;

    t40 = (x3145>>(x3146*(x3147*x3148)));

    if (t40 != 82U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x3179 = 365719LLU;
	uint64_t x3180 = 860396477504255030LLU;
	volatile int32_t t41 = 16289;

    t41 = (x3177>>(x3178*(x3179*x3180)));

    if (t41 != 69) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x3181 = UINT32_MAX;
	uint8_t x3183 = 0U;
	uint64_t x3184 = UINT64_MAX;
	volatile uint32_t t42 = UINT32_MAX;

    t42 = (x3181>>(x3182*(x3183*x3184)));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3265 = 1990131LLU;
	volatile int32_t x3266 = INT32_MAX;
	volatile uint8_t x3267 = 0U;
	static int32_t x3268 = INT32_MIN;
	uint64_t t43 = 963130047LLU;

    t43 = (x3265>>(x3266*(x3267*x3268)));

    if (t43 != 1990131LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x3365 = 117U;
	static uint8_t x3366 = 0U;
	static int64_t x3367 = 0LL;
	int16_t x3368 = INT16_MAX;

    t44 = (x3365>>(x3366*(x3367*x3368)));

    if (t44 != 117) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3417 = INT16_MAX;
	int32_t x3418 = INT32_MIN;
	uint8_t x3420 = 0U;

    t45 = (x3417>>(x3418*(x3419*x3420)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x3497 = UINT16_MAX;
	static volatile int16_t x3498 = -1;
	uint32_t x3499 = 7U;
	static volatile int8_t x3500 = -1;
	int32_t t46 = 9062523;

    t46 = (x3497>>(x3498*(x3499*x3500)));

    if (t46 != 511) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x3529 = 1209855U;
	int64_t x3530 = INT64_MIN;
	int16_t x3531 = INT16_MIN;
	static volatile uint32_t t47 = 421U;

    t47 = (x3529>>(x3530*(x3531*x3532)));

    if (t47 != 1209855U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x3537 = INT16_MAX;
	volatile int64_t x3538 = -1971336489323419787LL;
	int8_t x3540 = 0;
	int32_t t48 = -8;

    t48 = (x3537>>(x3538*(x3539*x3540)));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3609 = INT64_MAX;
	int16_t x3611 = 1;
	int64_t t49 = INT64_MAX;

    t49 = (x3609>>(x3610*(x3611*x3612)));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3645 = 15U;
	int32_t x3646 = INT32_MIN;
	int8_t x3647 = INT8_MIN;
	uint32_t t50 = 3173U;

    t50 = (x3645>>(x3646*(x3647*x3648)));

    if (t50 != 15U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x3721 = UINT64_MAX;
	static int16_t x3722 = INT16_MIN;
	volatile uint32_t x3723 = 22U;
	int32_t x3724 = INT32_MIN;
	static uint64_t t51 = UINT64_MAX;

    t51 = (x3721>>(x3722*(x3723*x3724)));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x3801 = 6;
	static int32_t x3802 = 0;
	volatile uint32_t x3803 = UINT32_MAX;
	volatile uint64_t x3804 = UINT64_MAX;
	volatile int32_t t52 = -244;

    t52 = (x3801>>(x3802*(x3803*x3804)));

    if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3937 = 8351;
	int16_t x3938 = -1;
	int8_t x3939 = INT8_MIN;
	uint8_t x3940 = 0U;
	static volatile int32_t t53 = 1;

    t53 = (x3937>>(x3938*(x3939*x3940)));

    if (t53 != 8351) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x4005 = 54U;
	int32_t x4006 = INT32_MIN;
	static uint32_t x4007 = UINT32_MAX;
	uint16_t x4008 = 6U;
	static int32_t t54 = -204166201;

    t54 = (x4005>>(x4006*(x4007*x4008)));

    if (t54 != 54) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x4193 = UINT8_MAX;
	int32_t t55 = 24;

    t55 = (x4193>>(x4194*(x4195*x4196)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x4326 = INT32_MIN;
	volatile int32_t x4327 = 100;
	static volatile uint32_t x4328 = 329423479U;
	static int32_t t56 = 424572498;

    t56 = (x4325>>(x4326*(x4327*x4328)));

    if (t56 != 749) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x4381 = INT16_MAX;
	static int64_t x4382 = INT64_MIN;
	volatile uint8_t x4383 = 0U;
	volatile int16_t x4384 = INT16_MAX;
	int32_t t57 = -485054;

    t57 = (x4381>>(x4382*(x4383*x4384)));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x4433 = UINT32_MAX;
	volatile uint8_t x4434 = 1U;
	uint8_t x4436 = 0U;
	static volatile uint32_t t58 = UINT32_MAX;

    t58 = (x4433>>(x4434*(x4435*x4436)));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4444 = INT64_MIN;
	volatile int32_t t59 = 27280;

    t59 = (x4441>>(x4442*(x4443*x4444)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x4506 = -3141;
	static volatile int32_t x4507 = INT32_MIN;
	int8_t x4508 = 0;
	volatile int64_t t60 = INT64_MAX;

    t60 = (x4505>>(x4506*(x4507*x4508)));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x4585 = 779621014688494LLU;
	uint64_t x4586 = UINT64_MAX;
	uint64_t x4587 = 8LLU;
	volatile int64_t x4588 = INT64_MIN;
	volatile uint64_t t61 = 469028757005851LLU;

    t61 = (x4585>>(x4586*(x4587*x4588)));

    if (t61 != 779621014688494LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x4590 = 0U;
	static uint32_t x4591 = 2484U;
	int8_t x4592 = 12;

    t62 = (x4589>>(x4590*(x4591*x4592)));

    if (t62 != 130) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x4605 = 2;
	uint16_t x4606 = 0U;
	int64_t x4607 = -1LL;
	int64_t x4608 = 862966LL;
	static volatile int32_t t63 = -286135686;

    t63 = (x4605>>(x4606*(x4607*x4608)));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x4633 = UINT64_MAX;
	uint8_t x4634 = 43U;
	int8_t x4635 = 0;
	int64_t x4636 = INT64_MIN;
	static uint64_t t64 = UINT64_MAX;

    t64 = (x4633>>(x4634*(x4635*x4636)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x4678 = INT8_MIN;
	int32_t x4680 = 0;
	int32_t t65 = 390813;

    t65 = (x4677>>(x4678*(x4679*x4680)));

    if (t65 != 21120) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4687 = 24U;
	volatile uint32_t t66 = 0U;

    t66 = (x4685>>(x4686*(x4687*x4688)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x4937 = 3LLU;
	static int64_t x4938 = INT64_MIN;
	uint64_t x4939 = UINT64_MAX;
	int32_t x4940 = 1410;
	uint64_t t67 = 6647848779174LLU;

    t67 = (x4937>>(x4938*(x4939*x4940)));

    if (t67 != 3LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x4953 = UINT64_MAX;
	static volatile int32_t x4954 = INT32_MIN;
	int16_t x4955 = 0;
	static int32_t x4956 = 0;
	uint64_t t68 = UINT64_MAX;

    t68 = (x4953>>(x4954*(x4955*x4956)));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x5013 = 3;
	int16_t x5015 = 0;
	int8_t x5016 = INT8_MIN;
	int32_t t69 = 76071396;

    t69 = (x5013>>(x5014*(x5015*x5016)));

    if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x5045 = UINT16_MAX;
	int16_t x5046 = INT16_MIN;
	static int64_t x5047 = INT64_MIN;
	volatile uint64_t x5048 = 287172449LLU;

    t70 = (x5045>>(x5046*(x5047*x5048)));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x5177 = UINT16_MAX;
	uint64_t x5178 = 739043804792LLU;
	static int16_t x5179 = 0;
	int32_t t71 = 920537105;

    t71 = (x5177>>(x5178*(x5179*x5180)));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x5225 = 54U;
	volatile int8_t x5228 = 9;
	int32_t t72 = 920374723;

    t72 = (x5225>>(x5226*(x5227*x5228)));

    if (t72 != 54) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x5353 = INT64_MAX;
	int32_t x5354 = -1;
	uint64_t x5355 = 22LLU;
	int64_t x5356 = INT64_MAX;
	volatile int64_t t73 = -30635002LL;

    t73 = (x5353>>(x5354*(x5355*x5356)));

    if (t73 != 2199023255551LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x5490 = UINT16_MAX;
	uint8_t x5491 = 0U;
	int16_t x5492 = 12;
	int32_t t74 = -223131352;

    t74 = (x5489>>(x5490*(x5491*x5492)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x5581 = 119974012249961396LLU;
	volatile uint16_t x5582 = 33U;
	static int8_t x5584 = 0;
	uint64_t t75 = 5044049640995886LLU;

    t75 = (x5581>>(x5582*(x5583*x5584)));

    if (t75 != 119974012249961396LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x5673 = 40U;
	int32_t x5675 = -1;

    t76 = (x5673>>(x5674*(x5675*x5676)));

    if (t76 != 40) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x5709 = INT8_MAX;
	volatile uint32_t x5710 = 637U;
	int8_t x5711 = 0;
	volatile uint8_t x5712 = 1U;
	int32_t t77 = 17;

    t77 = (x5709>>(x5710*(x5711*x5712)));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x5781 = 0;
	static uint16_t x5784 = 3U;
	volatile int32_t t78 = -104264;

    t78 = (x5781>>(x5782*(x5783*x5784)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x5881 = INT32_MAX;
	volatile int8_t x5882 = INT8_MIN;
	volatile uint8_t x5883 = 0U;
	volatile int8_t x5884 = -1;
	volatile int32_t t79 = INT32_MAX;

    t79 = (x5881>>(x5882*(x5883*x5884)));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x6201 = 9U;
	int16_t x6203 = INT16_MIN;
	volatile int32_t t80 = 42301;

    t80 = (x6201>>(x6202*(x6203*x6204)));

    if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x6273 = INT8_MAX;
	int8_t x6275 = 0;
	int32_t x6276 = INT32_MIN;
	int32_t t81 = 0;

    t81 = (x6273>>(x6274*(x6275*x6276)));

    if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x6329 = UINT32_MAX;
	uint16_t x6330 = 1U;
	volatile int16_t x6332 = -1;

    t82 = (x6329>>(x6330*(x6331*x6332)));

    if (t82 != 127U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x6393 = UINT32_MAX;
	static int16_t x6396 = -1;
	static uint32_t t83 = UINT32_MAX;

    t83 = (x6393>>(x6394*(x6395*x6396)));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x6405 = INT16_MAX;
	uint32_t x6406 = 27892U;
	static int32_t x6407 = -61;
	int32_t t84 = 9343;

    t84 = (x6405>>(x6406*(x6407*x6408)));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x6453 = 9173U;
	int8_t x6455 = 0;
	int8_t x6456 = -1;
	volatile int32_t t85 = 717713372;

    t85 = (x6453>>(x6454*(x6455*x6456)));

    if (t85 != 9173) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x6594 = -1;
	int16_t x6595 = 18;
	static int32_t x6596 = -1;
	int32_t t86 = 588722;

    t86 = (x6593>>(x6594*(x6595*x6596)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x6681 = 82U;
	int16_t x6684 = INT16_MAX;

    t87 = (x6681>>(x6682*(x6683*x6684)));

    if (t87 != 82) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x6874 = 1085LL;
	int32_t x6875 = 73478;
	uint8_t x6876 = 0U;

    t88 = (x6873>>(x6874*(x6875*x6876)));

    if (t88 != 5085832LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x7021 = 15528981U;
	int8_t x7023 = 0;
	static uint64_t x7024 = UINT64_MAX;
	static volatile uint32_t t89 = 534167229U;

    t89 = (x7021>>(x7022*(x7023*x7024)));

    if (t89 != 15528981U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x7217 = INT8_MAX;
	volatile int32_t x7218 = 0;
	volatile uint64_t x7219 = 3400507LLU;
	uint32_t x7220 = UINT32_MAX;
	int32_t t90 = 724;

    t90 = (x7217>>(x7218*(x7219*x7220)));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x7233 = 2940;
	int16_t x7236 = -7;
	int32_t t91 = -64997;

    t91 = (x7233>>(x7234*(x7235*x7236)));

    if (t91 != 2940) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x7257 = 577703239LL;
	uint32_t x7258 = 6929U;
	int32_t x7259 = -1;
	volatile uint8_t x7260 = 0U;
	volatile int64_t t92 = -14529600350565LL;

    t92 = (x7257>>(x7258*(x7259*x7260)));

    if (t92 != 577703239LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x7273 = 1U;
	int8_t x7274 = 0;
	int32_t x7275 = -1;

    t93 = (x7273>>(x7274*(x7275*x7276)));

    if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x7349 = UINT16_MAX;
	volatile uint32_t x7350 = 0U;
	uint8_t x7351 = UINT8_MAX;
	int64_t x7352 = -1LL;
	static int32_t t94 = 720039038;

    t94 = (x7349>>(x7350*(x7351*x7352)));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x7569 = 25U;
	static int16_t x7570 = INT16_MAX;
	static int32_t x7571 = -1;

    t95 = (x7569>>(x7570*(x7571*x7572)));

    if (t95 != 25) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x7681 = 443LLU;
	uint64_t x7682 = 265LLU;
	volatile uint8_t x7683 = 3U;
	volatile uint16_t x7684 = 0U;
	uint64_t t96 = 1LLU;

    t96 = (x7681>>(x7682*(x7683*x7684)));

    if (t96 != 443LLU) { NG(); } else { ; }
	
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


    return 0;
}

