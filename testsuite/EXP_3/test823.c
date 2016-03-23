
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

static int16_t x5 = -1;
int8_t x63 = 21;
int64_t x64 = -1844927964LL;
uint64_t x96 = 6842522364074LLU;
int64_t t6 = 3007873987085198LL;
uint8_t x157 = UINT8_MAX;
static int16_t x197 = 0;
static int64_t x198 = INT64_MIN;
volatile int32_t x204 = INT32_MIN;
int8_t x212 = 30;
volatile int16_t x247 = -3;
static int16_t x285 = INT16_MIN;
volatile int32_t t14 = -10462343;
uint16_t x297 = 44U;
volatile uint32_t t15 = 150597U;
volatile uint32_t x318 = 1U;
uint64_t x319 = UINT64_MAX;
static volatile uint32_t t16 = 56U;
int32_t x325 = INT32_MIN;
uint64_t x326 = 30823551765LLU;
int8_t x352 = INT8_MIN;
volatile int32_t t18 = 674545;
volatile uint64_t x355 = UINT64_MAX;
uint8_t x356 = 3U;
static volatile uint64_t t20 = 4771LLU;
static int64_t x384 = INT64_MIN;
uint64_t t21 = 8470026064684488186LLU;
uint16_t x395 = 3796U;
volatile int32_t t25 = 260;
uint16_t x423 = UINT16_MAX;
int16_t x449 = INT16_MAX;
uint32_t x452 = 1U;
int16_t x486 = -1;
int32_t x487 = 14;
uint32_t t34 = 44188900U;
int16_t x617 = -1;
uint64_t t37 = 823817006197687LLU;
volatile int64_t x760 = INT64_MIN;
volatile uint64_t t42 = 6928103914177092861LLU;
static uint16_t x794 = UINT16_MAX;
int32_t x795 = -1;
volatile int32_t t43 = -2525;
int32_t t44 = 7675;
int16_t x827 = INT16_MIN;
int8_t x828 = -1;
volatile uint32_t t47 = 22776U;
int16_t x914 = INT16_MIN;
uint32_t x922 = 75U;
volatile uint32_t t49 = 0U;
int64_t x942 = -3276189227067607LL;
uint32_t x943 = UINT32_MAX;
int64_t t50 = -14756LL;
int64_t x956 = -1LL;
uint64_t x970 = UINT64_MAX;
static uint64_t x989 = UINT64_MAX;
uint16_t x997 = 67U;
uint32_t x1007 = 50U;
int32_t x1035 = -1;
volatile uint32_t t61 = 0U;
static uint32_t x1048 = 18U;
volatile uint32_t t64 = 31653763U;
uint64_t x1078 = 2LLU;
static uint64_t t65 = 61161143113LLU;
volatile int32_t x1122 = 15;
int8_t x1126 = INT8_MAX;
volatile int64_t x1127 = INT64_MAX;
static volatile int32_t t68 = -498;
volatile int32_t x1137 = -14;
int32_t x1138 = -1;
int16_t x1139 = INT16_MAX;
int64_t x1162 = -1LL;
int64_t x1223 = INT64_MIN;
uint32_t x1266 = 60U;
volatile uint16_t x1310 = 0U;
volatile int32_t x1311 = INT32_MIN;
static volatile uint32_t x1325 = 93767332U;
volatile uint8_t x1327 = 14U;
int16_t x1336 = -1;
int64_t x1341 = -1LL;
volatile int8_t x1344 = -30;
static uint64_t x1417 = UINT64_MAX;
int64_t x1425 = 5604882561258579LL;
static int8_t x1453 = INT8_MAX;
uint64_t x1454 = 64397525787121LLU;
volatile uint64_t x1456 = UINT64_MAX;
volatile uint64_t t85 = 220654799539LLU;
int32_t t87 = -1;
volatile int32_t x1535 = INT32_MIN;
int32_t t88 = 20481975;
static int32_t x1553 = 61546839;
uint8_t x1554 = 1U;
volatile int16_t x1556 = -1;
int8_t x1583 = 0;
static int64_t x1584 = INT64_MAX;
static int8_t x1594 = INT8_MAX;
volatile int32_t t92 = 1;
uint64_t x1654 = UINT64_MAX;
int8_t x1656 = -1;
int8_t x1669 = -29;
int16_t x1670 = -1;
volatile int32_t t97 = 59565255;
uint16_t x1738 = UINT16_MAX;
uint8_t x1772 = 1U;
int16_t x1812 = 55;
uint64_t x1865 = 210437026LLU;
int8_t x1866 = -1;
int8_t x1868 = INT8_MAX;
uint64_t x1901 = 7962909113152224855LLU;
static volatile int32_t t107 = 6631354;
volatile int8_t x1932 = INT8_MAX;
volatile int32_t t108 = -696331;
int32_t x1971 = 38638220;
uint32_t t111 = 17115812U;
int32_t x1983 = INT32_MIN;
volatile uint64_t t112 = 217LLU;
int32_t x2002 = 1;
uint8_t x2040 = 7U;
volatile uint16_t x2050 = 216U;
volatile int8_t x2052 = INT8_MAX;
uint64_t x2113 = 0LLU;
int64_t x2114 = 2LL;
volatile int16_t x2142 = 1;
int8_t x2147 = 2;
static uint32_t t118 = 410561074U;
volatile int64_t x2195 = INT64_MIN;
static volatile int64_t x2233 = 327911LL;
int8_t x2269 = 0;
uint8_t x2277 = 0U;
volatile int64_t x2280 = INT64_MIN;
int16_t x2346 = INT16_MIN;
int16_t x2379 = -1;
uint16_t x2395 = UINT16_MAX;
volatile int16_t x2396 = -1;
int16_t x2417 = INT16_MIN;
int32_t x2418 = -1;
uint8_t x2461 = 1U;
uint64_t x2462 = 1340136294LLU;
int64_t x2477 = 132876636381861195LL;
int32_t x2487 = 1;
uint16_t x2488 = 641U;
uint32_t x2517 = 8U;
volatile int8_t x2520 = INT8_MAX;
static volatile int64_t t136 = 1LL;
int16_t x2593 = INT16_MIN;
volatile int64_t x2611 = INT64_MAX;
uint64_t x2621 = 10479427340134695LLU;
uint64_t x2622 = 81990273871144747LLU;
int32_t x2623 = INT32_MIN;
int8_t x2636 = -1;
uint8_t x2662 = UINT8_MAX;
volatile int16_t x2664 = -1;
static int64_t x2741 = -1LL;
uint64_t x2755 = 0LLU;
int32_t x2758 = 96577503;
int32_t x2803 = -36153688;
static uint64_t x2839 = UINT64_MAX;
volatile int32_t t153 = 1;
static int8_t x2901 = INT8_MIN;
int8_t x2982 = INT8_MAX;
int32_t t157 = -52518;
uint64_t x2986 = 484LLU;
volatile int32_t x3011 = 46;
int16_t x3038 = -16113;
int32_t x3039 = -659624;
static int8_t x3075 = INT8_MIN;
volatile uint32_t t161 = 15U;
uint64_t x3090 = 524400LLU;
uint32_t x3092 = 144U;
int8_t x3102 = INT8_MAX;
int16_t x3103 = -1;
uint64_t x3160 = UINT64_MAX;
static int8_t x3161 = INT8_MAX;
int8_t x3199 = INT8_MIN;
uint32_t t169 = 1U;
int32_t x3262 = INT32_MAX;
uint64_t x3263 = UINT64_MAX;
volatile int8_t x3281 = INT8_MIN;
int8_t x3284 = INT8_MAX;
volatile uint64_t x3285 = UINT64_MAX;
volatile int8_t x3287 = INT8_MIN;
int8_t x3308 = -1;
volatile int32_t x3333 = 12;
int32_t x3335 = INT32_MAX;
uint64_t x3362 = 136562308LLU;
volatile int32_t t177 = -137436;
int64_t x3391 = INT64_MIN;
int64_t x3392 = INT64_MIN;
static uint32_t t179 = 2030542U;
int32_t x3488 = -1;
int32_t t181 = 1041973004;
volatile uint64_t t182 = 94519726LLU;
static uint32_t t183 = 604953880U;
volatile int8_t x3525 = -1;
int32_t t184 = 158130567;
volatile uint64_t t185 = 43856LLU;
uint16_t x3557 = 2U;
uint32_t t186 = 58876U;
uint32_t x3570 = 418843U;
static int16_t x3573 = INT16_MIN;
int8_t x3576 = -1;
static volatile uint32_t t188 = 441U;
uint8_t x3608 = 26U;
int64_t x3619 = 0LL;
volatile int32_t t193 = -12149776;
uint32_t x3689 = UINT32_MAX;
uint64_t t196 = 165290803934500486LLU;
static uint64_t x3709 = 2991212250593007LLU;
volatile int8_t x3710 = -29;
static volatile uint32_t x3714 = 1693682376U;
int16_t x3715 = INT16_MIN;
int16_t x3720 = -1;


void f0(void) {
    	int8_t x6 = 0;
	volatile int64_t x7 = -1LL;
	int64_t x8 = -1LL;
	static int32_t t0 = 1;

    t0 = ((x5*x6)>>(x7%x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x25 = 1755U;
	uint8_t x26 = 2U;
	int16_t x27 = 8;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t1 = 1444446U;

    t1 = ((x25*x26)>>(x27%x28));

    if (t1 != 13U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x61 = 3994LLU;
	int32_t x62 = 5539593;
	volatile uint64_t t2 = 1320064534435559574LLU;

    t2 = ((x61*x62)>>(x63%x64));

    if (t2 != 10550LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x85 = INT32_MIN;
	static volatile int16_t x86 = 0;
	volatile int16_t x87 = 3;
	volatile uint16_t x88 = UINT16_MAX;
	int32_t t3 = -33421634;

    t3 = ((x85*x86)>>(x87%x88));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	uint8_t x95 = 22U;
	volatile uint64_t t4 = 2012364LLU;

    t4 = ((x93*x94)>>(x95%x96));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MAX;
	int64_t x99 = 90479442LL;
	int16_t x100 = -1;
	static volatile int32_t t5 = -372;

    t5 = ((x97*x98)>>(x99%x100));

    if (t5 != 32385) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x129 = UINT8_MAX;
	int64_t x130 = 675871828024LL;
	int16_t x131 = INT16_MAX;
	uint8_t x132 = 9U;

    t6 = ((x129*x130)>>(x131%x132));

    if (t6 != 1346463407391LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x158 = 1802;
	static int16_t x159 = 3;
	uint16_t x160 = 2806U;
	int32_t t7 = 31316;

    t7 = ((x157*x158)>>(x159%x160));

    if (t7 != 57438) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x181 = 1842495670591LLU;
	volatile uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 7U;
	volatile int32_t x184 = 4574;
	volatile uint64_t t8 = 771LLU;

    t8 = ((x181*x182)>>(x183%x184));

    if (t8 != 3670596843755LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x199 = INT16_MIN;
	int16_t x200 = -1;
	volatile int64_t t9 = -175982LL;

    t9 = ((x197*x198)>>(x199%x200));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x201 = INT8_MAX;
	static int16_t x202 = INT16_MAX;
	static int64_t x203 = INT64_MIN;
	volatile int32_t t10 = -251744;

    t10 = ((x201*x202)>>(x203%x204));

    if (t10 != 4161409) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x209 = INT8_MAX;
	volatile int32_t x210 = 431;
	static int16_t x211 = INT16_MAX;
	int32_t t11 = -42;

    t11 = ((x209*x210)>>(x211%x212));

    if (t11 != 427) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	volatile uint16_t x235 = 54U;
	int8_t x236 = -7;
	uint64_t t12 = 873LLU;

    t12 = ((x233*x234)>>(x235%x236));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x245 = INT8_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	static volatile int16_t x248 = 1;
	int32_t t13 = -1043210;

    t13 = ((x245*x246)>>(x247%x248));

    if (t13 != 32385) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x286 = INT16_MIN;
	int32_t x287 = -1;
	volatile int64_t x288 = -1LL;

    t14 = ((x285*x286)>>(x287%x288));

    if (t14 != 1073741824) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x298 = 144754521U;
	int64_t x299 = 1LL;
	uint8_t x300 = 2U;

    t15 = ((x297*x298)>>(x299%x300));

    if (t15 != 1037115814U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x317 = INT16_MIN;
	uint32_t x320 = 10U;

    t16 = ((x317*x318)>>(x319%x320));

    if (t16 != 134216704U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x327 = 11;
	static int8_t x328 = INT8_MIN;
	volatile uint64_t t17 = 8533240LLU;

    t17 = ((x325*x326)>>(x327%x328));

    if (t17 != 3707960403427328LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x349 = INT16_MIN;
	volatile int8_t x350 = -1;
	volatile int8_t x351 = INT8_MIN;

    t18 = ((x349*x350)>>(x351%x352));

    if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MIN;
	int32_t t19 = 4;

    t19 = ((x353*x354)>>(x355%x356));

    if (t19 != 4194304) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MIN;
	int32_t x367 = 24;
	static uint64_t x368 = 2377745722LLU;

    t20 = ((x365*x366)>>(x367%x368));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x381 = 37LLU;
	int32_t x382 = 5875396;
	uint16_t x383 = 11U;

    t21 = ((x381*x382)>>(x383%x384));

    if (t21 != 106147LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x393 = 1U;
	static int32_t x394 = 243568319;
	volatile int8_t x396 = -1;
	volatile int32_t t22 = 17;

    t22 = ((x393*x394)>>(x395%x396));

    if (t22 != 243568319) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 7151U;
	volatile uint8_t x399 = 1U;
	int8_t x400 = -1;
	volatile int32_t t23 = -99;

    t23 = ((x397*x398)>>(x399%x400));

    if (t23 != 1823505) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x413 = 3;
	static int16_t x414 = INT16_MAX;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	volatile int32_t t24 = 39;

    t24 = ((x413*x414)>>(x415%x416));

    if (t24 != 98301) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x417 = 1U;
	uint16_t x418 = UINT16_MAX;
	static int16_t x419 = INT16_MIN;
	uint8_t x420 = 2U;

    t25 = ((x417*x418)>>(x419%x420));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x421 = 53006465LLU;
	int8_t x422 = -4;
	int32_t x424 = -1;
	volatile uint64_t t26 = 2379803677180LLU;

    t26 = ((x421*x422)>>(x423%x424));

    if (t26 != 18446744073497525756LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x450 = 220826494833584627LLU;
	uint8_t x451 = UINT8_MAX;
	static uint64_t t27 = 342677785097248LLU;

    t27 = ((x449*x450)>>(x451%x452));

    if (t27 != 4698079317923239437LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x457 = INT8_MIN;
	int16_t x458 = -1;
	volatile int8_t x459 = 17;
	uint8_t x460 = 1U;
	int32_t t28 = -8;

    t28 = ((x457*x458)>>(x459%x460));

    if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x485 = 59U;
	int64_t x488 = INT64_MIN;
	volatile uint32_t t29 = 3U;

    t29 = ((x485*x486)>>(x487%x488));

    if (t29 != 262143U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	static int8_t x506 = 1;
	uint64_t x507 = 81154377113132LLU;
	uint8_t x508 = 3U;
	volatile int32_t t30 = 46215;

    t30 = ((x505*x506)>>(x507%x508));

    if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x525 = 1;
	int64_t x526 = 205571842849125165LL;
	volatile int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MIN;
	static volatile int64_t t31 = 56105008917LL;

    t31 = ((x525*x526)>>(x527%x528));

    if (t31 != 205571842849125165LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x533 = 13U;
	uint32_t x534 = 32U;
	uint8_t x535 = 86U;
	int8_t x536 = -11;
	volatile uint32_t t32 = 0U;

    t32 = ((x533*x534)>>(x535%x536));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x545 = 4140649801479LLU;
	int16_t x546 = INT16_MAX;
	volatile uint16_t x547 = 999U;
	int16_t x548 = 1;
	uint64_t t33 = 2626952LLU;

    t33 = ((x545*x546)>>(x547%x548));

    if (t33 != 135676672045062393LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x553 = 1;
	static uint32_t x554 = 0U;
	int64_t x555 = 0LL;
	static int16_t x556 = -1;

    t34 = ((x553*x554)>>(x555%x556));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x561 = -3;
	static int8_t x562 = INT8_MIN;
	int8_t x563 = 17;
	int8_t x564 = INT8_MIN;
	volatile int32_t t35 = -5139181;

    t35 = ((x561*x562)>>(x563%x564));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x593 = -1;
	int8_t x594 = -1;
	int64_t x595 = -892885980LL;
	int8_t x596 = -1;
	volatile int32_t t36 = -2369051;

    t36 = ((x593*x594)>>(x595%x596));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x618 = 10119LLU;
	volatile int16_t x619 = -85;
	volatile int32_t x620 = -1;

    t37 = ((x617*x618)>>(x619%x620));

    if (t37 != 18446744073709541497LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x625 = 5U;
	uint32_t x626 = UINT32_MAX;
	int16_t x627 = 1;
	int32_t x628 = 544326694;
	uint32_t t38 = 23618U;

    t38 = ((x625*x626)>>(x627%x628));

    if (t38 != 2147483645U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x709 = 899266561105505LLU;
	volatile int32_t x710 = INT32_MIN;
	int8_t x711 = -1;
	volatile uint32_t x712 = UINT32_MAX;
	uint64_t t39 = 244374190LLU;

    t39 = ((x709*x710)>>(x711%x712));

    if (t39 != 10955165314458845184LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x721 = UINT16_MAX;
	uint8_t x722 = 7U;
	uint32_t x723 = UINT32_MAX;
	static volatile uint16_t x724 = 6U;
	volatile int32_t t40 = 521942397;

    t40 = ((x721*x722)>>(x723%x724));

    if (t40 != 57343) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x741 = INT32_MIN;
	uint64_t x742 = 96847329LLU;
	static uint32_t x743 = UINT32_MAX;
	int32_t x744 = -1;
	uint64_t t41 = 20109376563LLU;

    t41 = ((x741*x742)>>(x743%x744));

    if (t41 != 18238766018329575424LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x757 = UINT64_MAX;
	static int64_t x758 = -1657773683201268LL;
	static uint16_t x759 = 5U;

    t42 = ((x757*x758)>>(x759%x760));

    if (t42 != 51805427600039LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x793 = 2500;
	uint64_t x796 = UINT64_MAX;

    t43 = ((x793*x794)>>(x795%x796));

    if (t43 != 163837500) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x797 = -1;
	int16_t x798 = INT16_MIN;
	volatile int32_t x799 = 6;
	int8_t x800 = INT8_MIN;

    t44 = ((x797*x798)>>(x799%x800));

    if (t44 != 512) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x825 = -508;
	static int8_t x826 = 0;
	int32_t t45 = 2251;

    t45 = ((x825*x826)>>(x827%x828));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x829 = 1070U;
	int32_t x830 = -1;
	static volatile int16_t x831 = 3;
	uint32_t x832 = UINT32_MAX;
	volatile uint32_t t46 = 451393244U;

    t46 = ((x829*x830)>>(x831%x832));

    if (t46 != 536870778U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x837 = 410630972U;
	uint8_t x838 = 4U;
	int64_t x839 = INT64_MAX;
	volatile int8_t x840 = -25;

    t47 = ((x837*x838)>>(x839%x840));

    if (t47 != 12832217U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x913 = UINT32_MAX;
	uint64_t x915 = 14449782026470LLU;
	uint8_t x916 = 1U;
	uint32_t t48 = 905150935U;

    t48 = ((x913*x914)>>(x915%x916));

    if (t48 != 32768U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x921 = INT8_MIN;
	uint64_t x923 = 4775929294801082137LLU;
	static uint32_t x924 = 17U;

    t49 = ((x921*x922)>>(x923%x924));

    if (t49 != 1048573U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x941 = -1549;
	int8_t x944 = INT8_MAX;

    t50 = ((x941*x942)>>(x943%x944));

    if (t50 != 154871127707755LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x945 = INT32_MAX;
	volatile uint64_t x946 = 4102204845147929LLU;
	uint8_t x947 = 19U;
	uint32_t x948 = 17U;
	volatile uint64_t t51 = 385374LLU;

    t51 = ((x945*x946)>>(x947%x948));

    if (t51 != 2292125671265807929LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x953 = UINT32_MAX;
	volatile int8_t x954 = 7;
	uint32_t x955 = UINT32_MAX;
	static uint32_t t52 = 341U;

    t52 = ((x953*x954)>>(x955%x956));

    if (t52 != 4294967289U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x957 = INT16_MAX;
	uint16_t x958 = 623U;
	uint64_t x959 = 462574964LLU;
	uint8_t x960 = 31U;
	int32_t t53 = 17463;

    t53 = ((x957*x958)>>(x959%x960));

    if (t53 != 10206920) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x969 = -2919;
	volatile uint8_t x971 = 1U;
	int8_t x972 = INT8_MAX;
	static volatile uint64_t t54 = 24882LLU;

    t54 = ((x969*x970)>>(x971%x972));

    if (t54 != 1459LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x985 = -3319887431767426826LL;
	uint64_t x986 = UINT64_MAX;
	int8_t x987 = 3;
	int64_t x988 = INT64_MIN;
	uint64_t t55 = 219LLU;

    t55 = ((x985*x986)>>(x987%x988));

    if (t55 != 414985928970928353LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x990 = 956564180776785484LL;
	volatile uint32_t x991 = 8U;
	int16_t x992 = INT16_MIN;
	volatile uint64_t t56 = 4074004147593363830LLU;

    t56 = ((x989*x990)>>(x991%x992));

    if (t56 != 68321015206768617LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x998 = 12;
	volatile uint32_t x999 = 20U;
	static uint32_t x1000 = UINT32_MAX;
	int32_t t57 = -119;

    t57 = ((x997*x998)>>(x999%x1000));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x1005 = 1;
	uint32_t x1006 = 23U;
	uint8_t x1008 = 8U;
	volatile uint32_t t58 = 2011U;

    t58 = ((x1005*x1006)>>(x1007%x1008));

    if (t58 != 5U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1025 = INT32_MIN;
	uint64_t x1026 = 4033112571909LLU;
	int64_t x1027 = INT64_MIN;
	int16_t x1028 = -1;
	uint64_t t59 = 94255LLU;

    t59 = ((x1025*x1026)>>(x1027%x1028));

    if (t59 != 8926415925687615488LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x1033 = 4709;
	static uint16_t x1034 = 0U;
	uint64_t x1036 = UINT64_MAX;
	volatile int32_t t60 = 92;

    t60 = ((x1033*x1034)>>(x1035%x1036));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x1037 = UINT16_MAX;
	volatile uint32_t x1038 = 246411U;
	volatile uint32_t x1039 = 651U;
	uint16_t x1040 = 10U;

    t61 = ((x1037*x1038)>>(x1039%x1040));

    if (t61 != 1631821498U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x1045 = 1748375919LL;
	uint32_t x1046 = 123U;
	int64_t x1047 = INT64_MAX;
	volatile int64_t t62 = 1LL;

    t62 = ((x1045*x1046)>>(x1047%x1048));

    if (t62 != 1680079984LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x1049 = -55;
	uint64_t x1050 = 114629950950554836LLU;
	static int64_t x1051 = INT64_MIN;
	int8_t x1052 = INT8_MIN;
	volatile uint64_t t63 = 3680002032439LLU;

    t63 = ((x1049*x1050)>>(x1051%x1052));

    if (t63 != 12142096771429035636LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x1061 = 4656;
	uint32_t x1062 = 172057065U;
	static volatile int8_t x1063 = INT8_MIN;
	int8_t x1064 = -1;

    t64 = ((x1061*x1062)>>(x1063%x1064));

    if (t64 != 2233777584U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x1077 = INT64_MAX;
	int64_t x1079 = INT64_MIN;
	volatile int8_t x1080 = INT8_MIN;

    t65 = ((x1077*x1078)>>(x1079%x1080));

    if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x1121 = UINT16_MAX;
	int64_t x1123 = 19993482442LL;
	volatile int64_t x1124 = -1LL;
	volatile int32_t t66 = -5;

    t66 = ((x1121*x1122)>>(x1123%x1124));

    if (t66 != 983025) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x1125 = 296290U;
	int32_t x1128 = -2;
	volatile uint32_t t67 = 7655574U;

    t67 = ((x1125*x1126)>>(x1127%x1128));

    if (t67 != 18814415U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x1133 = -2288;
	static int8_t x1134 = INT8_MIN;
	uint8_t x1135 = 7U;
	uint32_t x1136 = UINT32_MAX;

    t68 = ((x1133*x1134)>>(x1135%x1136));

    if (t68 != 2288) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x1140 = -1LL;
	int32_t t69 = 59873;

    t69 = ((x1137*x1138)>>(x1139%x1140));

    if (t69 != 14) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x1161 = INT16_MIN;
	int32_t x1163 = 202647606;
	volatile int8_t x1164 = INT8_MIN;
	volatile int64_t t70 = -29740336680102LL;

    t70 = ((x1161*x1162)>>(x1163%x1164));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x1193 = 597U;
	int64_t x1194 = 11358009638LL;
	static int16_t x1195 = INT16_MIN;
	int32_t x1196 = -1;
	static volatile int64_t t71 = -92238357LL;

    t71 = ((x1193*x1194)>>(x1195%x1196));

    if (t71 != 6780731753886LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x1197 = 16;
	uint16_t x1198 = 1U;
	int16_t x1199 = INT16_MAX;
	int64_t x1200 = -12LL;
	int32_t t72 = 237;

    t72 = ((x1197*x1198)>>(x1199%x1200));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x1221 = INT32_MIN;
	uint32_t x1222 = 940943U;
	int64_t x1224 = INT64_MIN;
	volatile uint32_t t73 = 12U;

    t73 = ((x1221*x1222)>>(x1223%x1224));

    if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x1237 = 27;
	int16_t x1238 = INT16_MAX;
	uint64_t x1239 = UINT64_MAX;
	uint32_t x1240 = UINT32_MAX;
	int32_t t74 = -12576;

    t74 = ((x1237*x1238)>>(x1239%x1240));

    if (t74 != 884709) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x1265 = INT8_MIN;
	volatile int64_t x1267 = INT64_MIN;
	int32_t x1268 = -1;
	volatile uint32_t t75 = 106U;

    t75 = ((x1265*x1266)>>(x1267%x1268));

    if (t75 != 4294959616U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x1293 = INT32_MIN;
	static uint64_t x1294 = 59006322LLU;
	volatile int32_t x1295 = -3981790;
	int16_t x1296 = 1;
	volatile uint64_t t76 = 20986051238282466LLU;

    t76 = ((x1293*x1294)>>(x1295%x1296));

    if (t76 != 18320028962085928960LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x1301 = 1;
	volatile uint32_t x1302 = 8447U;
	uint8_t x1303 = 15U;
	volatile uint16_t x1304 = UINT16_MAX;
	uint32_t t77 = 55043331U;

    t77 = ((x1301*x1302)>>(x1303%x1304));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x1309 = INT16_MIN;
	volatile int8_t x1312 = INT8_MIN;
	int32_t t78 = 62914;

    t78 = ((x1309*x1310)>>(x1311%x1312));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x1326 = INT16_MIN;
	int8_t x1328 = INT8_MIN;
	volatile uint32_t t79 = 766144319U;

    t79 = ((x1325*x1326)>>(x1327%x1328));

    if (t79 != 160440U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x1333 = INT8_MIN;
	int8_t x1334 = -1;
	static int8_t x1335 = -1;
	volatile int32_t t80 = -4;

    t80 = ((x1333*x1334)>>(x1335%x1336));

    if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x1342 = -7;
	static uint16_t x1343 = 1U;
	volatile int64_t t81 = 113838122558866LL;

    t81 = ((x1341*x1342)>>(x1343%x1344));

    if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x1349 = -3;
	int8_t x1350 = INT8_MIN;
	static int8_t x1351 = -1;
	int8_t x1352 = -1;
	int32_t t82 = -22;

    t82 = ((x1349*x1350)>>(x1351%x1352));

    if (t82 != 384) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x1418 = -1LL;
	uint16_t x1419 = UINT16_MAX;
	volatile int64_t x1420 = 4LL;
	uint64_t t83 = 3LLU;

    t83 = ((x1417*x1418)>>(x1419%x1420));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x1426 = 117969357364LLU;
	int8_t x1427 = 44;
	volatile uint64_t x1428 = 24940716388111LLU;
	volatile uint64_t t84 = 10804562831979LLU;

    t84 = ((x1425*x1426)>>(x1427%x1428));

    if (t84 != 14244LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x1455 = -1LL;

    t85 = ((x1453*x1454)>>(x1455%x1456));

    if (t85 != 8178485774964367LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x1485 = INT16_MIN;
	uint32_t x1486 = UINT32_MAX;
	uint8_t x1487 = 3U;
	volatile int16_t x1488 = INT16_MAX;
	volatile uint32_t t86 = 712U;

    t86 = ((x1485*x1486)>>(x1487%x1488));

    if (t86 != 4096U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x1493 = INT16_MAX;
	static int16_t x1494 = 51;
	int8_t x1495 = INT8_MAX;
	static int32_t x1496 = -31;

    t87 = ((x1493*x1494)>>(x1495%x1496));

    if (t87 != 208889) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x1533 = -1;
	static int8_t x1534 = INT8_MIN;
	int32_t x1536 = INT32_MIN;

    t88 = ((x1533*x1534)>>(x1535%x1536));

    if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x1555 = INT32_MAX;
	volatile int32_t t89 = -1;

    t89 = ((x1553*x1554)>>(x1555%x1556));

    if (t89 != 61546839) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x1565 = 0U;
	uint64_t x1566 = UINT64_MAX;
	uint8_t x1567 = 31U;
	int64_t x1568 = INT64_MAX;
	uint64_t t90 = 5276950655821LLU;

    t90 = ((x1565*x1566)>>(x1567%x1568));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x1581 = INT16_MIN;
	volatile int16_t x1582 = INT16_MIN;
	static int32_t t91 = 2;

    t91 = ((x1581*x1582)>>(x1583%x1584));

    if (t91 != 1073741824) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x1593 = 12U;
	int64_t x1595 = -1LL;
	int16_t x1596 = -1;

    t92 = ((x1593*x1594)>>(x1595%x1596));

    if (t92 != 1524) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x1653 = UINT64_MAX;
	static int8_t x1655 = INT8_MIN;
	static uint64_t t93 = 106652921964364LLU;

    t93 = ((x1653*x1654)>>(x1655%x1656));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x1657 = -6;
	uint32_t x1658 = UINT32_MAX;
	uint64_t x1659 = UINT64_MAX;
	int8_t x1660 = INT8_MAX;
	static uint32_t t94 = 19U;

    t94 = ((x1657*x1658)>>(x1659%x1660));

    if (t94 != 3U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x1671 = 5U;
	int64_t x1672 = INT64_MAX;
	static volatile int32_t t95 = -95672;

    t95 = ((x1669*x1670)>>(x1671%x1672));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x1713 = UINT64_MAX;
	static volatile int16_t x1714 = -1;
	volatile int32_t x1715 = INT32_MIN;
	int32_t x1716 = INT32_MIN;
	uint64_t t96 = 42755108LLU;

    t96 = ((x1713*x1714)>>(x1715%x1716));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x1725 = -37;
	int16_t x1726 = -1;
	uint8_t x1727 = 5U;
	int32_t x1728 = INT32_MAX;

    t97 = ((x1725*x1726)>>(x1727%x1728));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x1737 = 105715486188782LLU;
	uint8_t x1739 = 46U;
	uint64_t x1740 = UINT64_MAX;
	volatile uint64_t t98 = 1159057604523357LLU;

    t98 = ((x1737*x1738)>>(x1739%x1740));

    if (t98 != 98453LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x1749 = 2;
	volatile uint8_t x1750 = UINT8_MAX;
	static volatile int8_t x1751 = INT8_MIN;
	int64_t x1752 = -1LL;
	static int32_t t99 = 23126064;

    t99 = ((x1749*x1750)>>(x1751%x1752));

    if (t99 != 510) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x1769 = 8377344U;
	static volatile int16_t x1770 = INT16_MIN;
	int64_t x1771 = -802079210523LL;
	volatile uint32_t t100 = 43957U;

    t100 = ((x1769*x1770)>>(x1771%x1772));

    if (t100 != 369098752U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x1805 = 0;
	int32_t x1806 = -1;
	uint8_t x1807 = 3U;
	uint8_t x1808 = 61U;
	static volatile int32_t t101 = 3881;

    t101 = ((x1805*x1806)>>(x1807%x1808));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x1809 = 3729U;
	int16_t x1810 = INT16_MAX;
	int64_t x1811 = 52197047206710076LL;
	volatile uint32_t t102 = 331151U;

    t102 = ((x1809*x1810)>>(x1811%x1812));

    if (t102 != 59662U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x1833 = -1LL;
	int16_t x1834 = INT16_MIN;
	int64_t x1835 = INT64_MIN;
	volatile int32_t x1836 = -1;
	volatile int64_t t103 = 5477LL;

    t103 = ((x1833*x1834)>>(x1835%x1836));

    if (t103 != 32768LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x1853 = INT16_MIN;
	uint32_t x1854 = 847995U;
	volatile int16_t x1855 = INT16_MIN;
	static int8_t x1856 = INT8_MIN;
	uint32_t t104 = 42090222U;

    t104 = ((x1853*x1854)>>(x1855%x1856));

    if (t104 != 2277670912U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x1867 = UINT32_MAX;
	uint64_t t105 = 4401557952433636LLU;

    t105 = ((x1865*x1866)>>(x1867%x1868));

    if (t105 != 562949953414889LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x1902 = INT64_MAX;
	static volatile int64_t x1903 = INT64_MIN;
	int64_t x1904 = INT64_MIN;
	uint64_t t106 = 432474099302LLU;

    t106 = ((x1901*x1902)>>(x1903%x1904));

    if (t106 != 1260462923702550953LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x1913 = -2;
	volatile int16_t x1914 = -1;
	int8_t x1915 = INT8_MIN;
	int64_t x1916 = -1LL;

    t107 = ((x1913*x1914)>>(x1915%x1916));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x1929 = -1;
	int16_t x1930 = INT16_MIN;
	static volatile int16_t x1931 = 14610;

    t108 = ((x1929*x1930)>>(x1931%x1932));

    if (t108 != 1024) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x1941 = 1U;
	uint32_t x1942 = UINT32_MAX;
	volatile int32_t x1943 = 2989953;
	static volatile int64_t x1944 = -1LL;
	static uint32_t t109 = UINT32_MAX;

    t109 = ((x1941*x1942)>>(x1943%x1944));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x1969 = INT16_MIN;
	int16_t x1970 = 0;
	static volatile uint16_t x1972 = 17U;
	static int32_t t110 = -3762;

    t110 = ((x1969*x1970)>>(x1971%x1972));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x1977 = 2;
	uint32_t x1978 = 732427U;
	int16_t x1979 = INT16_MIN;
	volatile uint8_t x1980 = 2U;

    t111 = ((x1977*x1978)>>(x1979%x1980));

    if (t111 != 1464854U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x1981 = 58U;
	uint64_t x1982 = 29501LLU;
	int8_t x1984 = INT8_MIN;

    t112 = ((x1981*x1982)>>(x1983%x1984));

    if (t112 != 1711058LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x2001 = 38;
	volatile int16_t x2003 = INT16_MAX;
	static int16_t x2004 = -1;
	volatile int32_t t113 = 4128870;

    t113 = ((x2001*x2002)>>(x2003%x2004));

    if (t113 != 38) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x2037 = -1;
	int64_t x2038 = -1LL;
	int8_t x2039 = -28;
	static int64_t t114 = 5628870331057689LL;

    t114 = ((x2037*x2038)>>(x2039%x2040));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x2049 = 462;
	uint8_t x2051 = UINT8_MAX;
	int32_t t115 = 390;

    t115 = ((x2049*x2050)>>(x2051%x2052));

    if (t115 != 49896) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x2115 = INT32_MIN;
	static int8_t x2116 = INT8_MIN;
	volatile uint64_t t116 = 60197LLU;

    t116 = ((x2113*x2114)>>(x2115%x2116));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x2141 = 611397719U;
	static int16_t x2143 = INT16_MIN;
	uint8_t x2144 = 1U;
	uint32_t t117 = 54U;

    t117 = ((x2141*x2142)>>(x2143%x2144));

    if (t117 != 611397719U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x2145 = 70U;
	uint16_t x2146 = 3U;
	uint64_t x2148 = 2063075229LLU;

    t118 = ((x2145*x2146)>>(x2147%x2148));

    if (t118 != 52U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x2181 = INT8_MIN;
	static int64_t x2182 = 0LL;
	int8_t x2183 = -22;
	int16_t x2184 = 1;
	volatile int64_t t119 = -12587LL;

    t119 = ((x2181*x2182)>>(x2183%x2184));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x2193 = 6U;
	uint16_t x2194 = UINT16_MAX;
	int8_t x2196 = 4;
	static volatile int32_t t120 = -95729;

    t120 = ((x2193*x2194)>>(x2195%x2196));

    if (t120 != 393210) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x2234 = UINT64_MAX;
	volatile int64_t x2235 = INT64_MAX;
	volatile uint16_t x2236 = 12U;
	volatile uint64_t t121 = 258097924596877851LLU;

    t121 = ((x2233*x2234)>>(x2235%x2236));

    if (t121 != 144115188075853310LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x2270 = INT8_MIN;
	uint8_t x2271 = 68U;
	int16_t x2272 = -1;
	volatile int32_t t122 = 1869;

    t122 = ((x2269*x2270)>>(x2271%x2272));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x2278 = 6820U;
	uint8_t x2279 = 3U;
	uint32_t t123 = 69640U;

    t123 = ((x2277*x2278)>>(x2279%x2280));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x2345 = -176085733594LL;
	int64_t x2347 = INT64_MIN;
	static int8_t x2348 = INT8_MIN;
	volatile int64_t t124 = 3307498912160LL;

    t124 = ((x2345*x2346)>>(x2347%x2348));

    if (t124 != 5769977318408192LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x2369 = -55691;
	static int32_t x2370 = -1;
	static int64_t x2371 = 1LL;
	int16_t x2372 = -17;
	volatile int32_t t125 = -221295;

    t125 = ((x2369*x2370)>>(x2371%x2372));

    if (t125 != 27845) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x2377 = INT16_MIN;
	int64_t x2378 = -469579263LL;
	int8_t x2380 = -1;
	int64_t t126 = 7697130LL;

    t126 = ((x2377*x2378)>>(x2379%x2380));

    if (t126 != 15387173289984LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x2393 = 720U;
	int64_t x2394 = 1LL;
	volatile int64_t t127 = 150947LL;

    t127 = ((x2393*x2394)>>(x2395%x2396));

    if (t127 != 720LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x2419 = 1253;
	uint8_t x2420 = 18U;
	static volatile int32_t t128 = 2691564;

    t128 = ((x2417*x2418)>>(x2419%x2420));

    if (t128 != 16) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x2429 = 3178U;
	uint32_t x2430 = 241251346U;
	uint8_t x2431 = 26U;
	int64_t x2432 = INT64_MIN;
	static volatile uint32_t t129 = 13197U;

    t129 = ((x2429*x2430)>>(x2431%x2432));

    if (t129 != 32U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x2453 = INT32_MIN;
	static volatile int8_t x2454 = 0;
	int64_t x2455 = INT64_MIN;
	int64_t x2456 = INT64_MIN;
	volatile int32_t t130 = -7793;

    t130 = ((x2453*x2454)>>(x2455%x2456));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x2463 = 10U;
	int64_t x2464 = 121LL;
	static uint64_t t131 = 3477200007292895LLU;

    t131 = ((x2461*x2462)>>(x2463%x2464));

    if (t131 != 1308726LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x2469 = INT8_MIN;
	uint64_t x2470 = 9251848931041LLU;
	uint32_t x2471 = UINT32_MAX;
	uint32_t x2472 = UINT32_MAX;
	volatile uint64_t t132 = 865LLU;

    t132 = ((x2469*x2470)>>(x2471%x2472));

    if (t132 != 18445559837046378368LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x2478 = UINT64_MAX;
	int8_t x2479 = INT8_MIN;
	volatile int8_t x2480 = INT8_MIN;
	static volatile uint64_t t133 = 4014299209584885640LLU;

    t133 = ((x2477*x2478)>>(x2479%x2480));

    if (t133 != 18313867437327690421LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x2485 = UINT64_MAX;
	volatile int8_t x2486 = INT8_MIN;
	volatile uint64_t t134 = 663305544643392240LLU;

    t134 = ((x2485*x2486)>>(x2487%x2488));

    if (t134 != 64LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x2518 = INT8_MIN;
	int8_t x2519 = 1;
	volatile uint32_t t135 = 6667U;

    t135 = ((x2517*x2518)>>(x2519%x2520));

    if (t135 != 2147483136U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x2529 = -35434737600417LL;
	volatile int16_t x2530 = INT16_MIN;
	volatile int8_t x2531 = INT8_MIN;
	static uint64_t x2532 = 126LLU;

    t136 = ((x2529*x2530)>>(x2531%x2532));

    if (t136 != 70869475200834LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x2533 = UINT32_MAX;
	int16_t x2534 = INT16_MIN;
	uint8_t x2535 = 3U;
	static volatile uint32_t x2536 = 483867U;
	uint32_t t137 = 250475U;

    t137 = ((x2533*x2534)>>(x2535%x2536));

    if (t137 != 4096U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x2594 = -7022;
	static int32_t x2595 = 718524;
	int16_t x2596 = -1;
	int32_t t138 = 8;

    t138 = ((x2593*x2594)>>(x2595%x2596));

    if (t138 != 230096896) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x2597 = 6U;
	volatile uint16_t x2598 = 256U;
	volatile uint16_t x2599 = 2213U;
	volatile int16_t x2600 = -14;
	int32_t t139 = -7173;

    t139 = ((x2597*x2598)>>(x2599%x2600));

    if (t139 != 768) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x2609 = INT16_MIN;
	volatile int16_t x2610 = INT16_MIN;
	volatile int16_t x2612 = -2;
	static volatile int32_t t140 = 0;

    t140 = ((x2609*x2610)>>(x2611%x2612));

    if (t140 != 536870912) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x2624 = 1;
	static volatile uint64_t t141 = 241895875471752LLU;

    t141 = ((x2621*x2622)>>(x2623%x2624));

    if (t141 != 3716168386622773901LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x2633 = 0U;
	static int64_t x2634 = -1LL;
	volatile int8_t x2635 = INT8_MIN;
	volatile int64_t t142 = -3858841122801673537LL;

    t142 = ((x2633*x2634)>>(x2635%x2636));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x2641 = -54850;
	volatile int8_t x2642 = -1;
	int64_t x2643 = -1LL;
	int8_t x2644 = -1;
	static int32_t t143 = 8;

    t143 = ((x2641*x2642)>>(x2643%x2644));

    if (t143 != 54850) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x2661 = 30992139LLU;
	int8_t x2663 = INT8_MAX;
	volatile uint64_t t144 = 981200785502368LLU;

    t144 = ((x2661*x2662)>>(x2663%x2664));

    if (t144 != 7902995445LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x2673 = -2709;
	uint64_t x2674 = UINT64_MAX;
	uint32_t x2675 = 8U;
	int32_t x2676 = 1768;
	uint64_t t145 = 1485LLU;

    t145 = ((x2673*x2674)>>(x2675%x2676));

    if (t145 != 10LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x2677 = INT8_MIN;
	static uint32_t x2678 = UINT32_MAX;
	int32_t x2679 = INT32_MIN;
	volatile int32_t x2680 = INT32_MIN;
	static uint32_t t146 = 616U;

    t146 = ((x2677*x2678)>>(x2679%x2680));

    if (t146 != 128U) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x2713 = -1;
	uint64_t x2714 = 2870961155LLU;
	uint32_t x2715 = UINT32_MAX;
	uint8_t x2716 = UINT8_MAX;
	volatile uint64_t t147 = 8706839917311LLU;

    t147 = ((x2713*x2714)>>(x2715%x2716));

    if (t147 != 18446744070838590461LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x2742 = -498LL;
	static uint16_t x2743 = 0U;
	uint16_t x2744 = 923U;
	int64_t t148 = 0LL;

    t148 = ((x2741*x2742)>>(x2743%x2744));

    if (t148 != 498LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x2753 = INT16_MIN;
	volatile int64_t x2754 = -51747LL;
	uint16_t x2756 = 24U;
	int64_t t149 = -565LL;

    t149 = ((x2753*x2754)>>(x2755%x2756));

    if (t149 != 1695645696LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x2757 = 22531U;
	int32_t x2759 = INT32_MIN;
	int8_t x2760 = -1;
	uint32_t t150 = 32986U;

    t150 = ((x2757*x2758)>>(x2759%x2760));

    if (t150 != 2734268317U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x2801 = UINT16_MAX;
	uint8_t x2802 = 7U;
	volatile int8_t x2804 = -1;
	volatile int32_t t151 = 0;

    t151 = ((x2801*x2802)>>(x2803%x2804));

    if (t151 != 458745) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x2821 = -1;
	uint32_t x2822 = 31669711U;
	volatile int32_t x2823 = INT32_MIN;
	static uint32_t x2824 = 2U;
	uint32_t t152 = 45938U;

    t152 = ((x2821*x2822)>>(x2823%x2824));

    if (t152 != 4263297585U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x2837 = UINT8_MAX;
	static uint16_t x2838 = 9U;
	static int8_t x2840 = -1;

    t153 = ((x2837*x2838)>>(x2839%x2840));

    if (t153 != 2295) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x2902 = 0U;
	uint16_t x2903 = 6U;
	uint64_t x2904 = 213232198538160LLU;
	int32_t t154 = -161615;

    t154 = ((x2901*x2902)>>(x2903%x2904));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x2941 = INT8_MIN;
	volatile int64_t x2942 = -50LL;
	int64_t x2943 = 41303071LL;
	int8_t x2944 = -1;
	volatile int64_t t155 = 51594LL;

    t155 = ((x2941*x2942)>>(x2943%x2944));

    if (t155 != 6400LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x2953 = 7572U;
	int64_t x2954 = 646915LL;
	volatile uint8_t x2955 = 5U;
	int64_t x2956 = -1LL;
	volatile int64_t t156 = -2004651LL;

    t156 = ((x2953*x2954)>>(x2955%x2956));

    if (t156 != 4898440380LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x2981 = UINT16_MAX;
	volatile int8_t x2983 = INT8_MIN;
	int8_t x2984 = INT8_MIN;

    t157 = ((x2981*x2982)>>(x2983%x2984));

    if (t157 != 8322945) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x2985 = 40U;
	uint8_t x2987 = 0U;
	int8_t x2988 = INT8_MIN;
	static volatile uint64_t t158 = 2469LLU;

    t158 = ((x2985*x2986)>>(x2987%x2988));

    if (t158 != 19360LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x3009 = -5;
	uint64_t x3010 = 6997378209805364462LLU;
	volatile uint8_t x3012 = UINT8_MAX;
	uint64_t t159 = 1835886510835604683LLU;

    t159 = ((x3009*x3010)>>(x3011%x3012));

    if (t159 != 27094LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x3037 = -1;
	static int8_t x3040 = 4;
	int32_t t160 = -2996;

    t160 = ((x3037*x3038)>>(x3039%x3040));

    if (t160 != 16113) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x3073 = 313057U;
	volatile int32_t x3074 = INT32_MAX;
	static volatile int8_t x3076 = 1;

    t161 = ((x3073*x3074)>>(x3075%x3076));

    if (t161 != 2147170591U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x3089 = 1242;
	uint64_t x3091 = 403190264LLU;
	uint64_t t162 = 94141122638LLU;

    t162 = ((x3089*x3090)>>(x3091%x3092));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x3101 = 14191U;
	volatile uint64_t x3104 = UINT64_MAX;
	volatile int32_t t163 = -896701;

    t163 = ((x3101*x3102)>>(x3103%x3104));

    if (t163 != 1802257) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x3157 = 3U;
	int64_t x3158 = 45804753357LL;
	int16_t x3159 = -1;
	int64_t t164 = 2162015864737LL;

    t164 = ((x3157*x3158)>>(x3159%x3160));

    if (t164 != 137414260071LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x3162 = UINT16_MAX;
	volatile uint16_t x3163 = 8284U;
	static uint8_t x3164 = 1U;
	int32_t t165 = 369235212;

    t165 = ((x3161*x3162)>>(x3163%x3164));

    if (t165 != 8322945) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x3169 = 15U;
	volatile uint32_t x3170 = 458U;
	volatile uint8_t x3171 = 3U;
	static int32_t x3172 = -1;
	volatile uint32_t t166 = 15U;

    t166 = ((x3169*x3170)>>(x3171%x3172));

    if (t166 != 6870U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x3197 = UINT16_MAX;
	static uint32_t x3198 = 82U;
	int16_t x3200 = -1;
	volatile uint32_t t167 = 1510764578U;

    t167 = ((x3197*x3198)>>(x3199%x3200));

    if (t167 != 5373870U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x3209 = 491228192U;
	static int8_t x3210 = INT8_MIN;
	uint32_t x3211 = UINT32_MAX;
	static int16_t x3212 = 2;
	volatile uint32_t t168 = 255954572U;

    t168 = ((x3209*x3210)>>(x3211%x3212));

    if (t168 != 773650432U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x3229 = 36U;
	uint32_t x3230 = UINT32_MAX;
	volatile uint16_t x3231 = 0U;
	uint64_t x3232 = 13188LLU;

    t169 = ((x3229*x3230)>>(x3231%x3232));

    if (t169 != 4294967260U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x3261 = UINT64_MAX;
	volatile int64_t x3264 = -1LL;
	static volatile uint64_t t170 = 420186767727LLU;

    t170 = ((x3261*x3262)>>(x3263%x3264));

    if (t170 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x3265 = 60258884343519183LLU;
	static volatile int8_t x3266 = INT8_MAX;
	int64_t x3267 = 0LL;
	uint16_t x3268 = 110U;
	volatile uint64_t t171 = 10765810899516LLU;

    t171 = ((x3265*x3266)>>(x3267%x3268));

    if (t171 != 7652878311626936241LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x3282 = 0;
	static int32_t x3283 = 1;
	volatile int32_t t172 = 30942018;

    t172 = ((x3281*x3282)>>(x3283%x3284));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x3286 = 110U;
	static int32_t x3288 = 8;
	uint64_t t173 = 183LLU;

    t173 = ((x3285*x3286)>>(x3287%x3288));

    if (t173 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x3305 = 543U;
	volatile uint32_t x3306 = 392U;
	static int8_t x3307 = INT8_MAX;
	static uint32_t t174 = 64610071U;

    t174 = ((x3305*x3306)>>(x3307%x3308));

    if (t174 != 212856U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x3334 = 3U;
	static volatile int8_t x3336 = -1;
	volatile int32_t t175 = -1783893;

    t175 = ((x3333*x3334)>>(x3335%x3336));

    if (t175 != 36) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x3361 = -1;
	static volatile int8_t x3363 = 0;
	int64_t x3364 = 1678132LL;
	uint64_t t176 = 1994250585527LLU;

    t176 = ((x3361*x3362)>>(x3363%x3364));

    if (t176 != 18446744073572989308LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x3385 = 5U;
	int16_t x3386 = INT16_MAX;
	int16_t x3387 = INT16_MIN;
	int32_t x3388 = -1;

    t177 = ((x3385*x3386)>>(x3387%x3388));

    if (t177 != 163835) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x3389 = UINT32_MAX;
	uint16_t x3390 = 857U;
	static volatile uint32_t t178 = 6390815U;

    t178 = ((x3389*x3390)>>(x3391%x3392));

    if (t178 != 4294966439U) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x3393 = INT32_MAX;
	volatile uint32_t x3394 = UINT32_MAX;
	uint16_t x3395 = 93U;
	int64_t x3396 = -1LL;

    t179 = ((x3393*x3394)>>(x3395%x3396));

    if (t179 != 2147483649U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x3413 = 806905200;
	uint64_t x3414 = 1384336LLU;
	int8_t x3415 = -47;
	int64_t x3416 = -1LL;
	volatile uint64_t t180 = 364843LLU;

    t180 = ((x3413*x3414)>>(x3415%x3416));

    if (t180 != 1117027916947200LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x3485 = INT8_MIN;
	static volatile int16_t x3486 = -1;
	int16_t x3487 = INT16_MIN;

    t181 = ((x3485*x3486)>>(x3487%x3488));

    if (t181 != 128) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x3505 = 48809LLU;
	volatile uint16_t x3506 = 3U;
	volatile uint16_t x3507 = 3U;
	int16_t x3508 = -120;

    t182 = ((x3505*x3506)>>(x3507%x3508));

    if (t182 != 18303LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x3509 = 183;
	static volatile uint32_t x3510 = 4440U;
	volatile uint32_t x3511 = UINT32_MAX;
	int8_t x3512 = 13;

    t183 = ((x3509*x3510)>>(x3511%x3512));

    if (t183 != 3173U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x3526 = 0;
	int8_t x3527 = -1;
	static volatile int8_t x3528 = -1;

    t184 = ((x3525*x3526)>>(x3527%x3528));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x3541 = 7176U;
	uint64_t x3542 = UINT64_MAX;
	int32_t x3543 = INT32_MIN;
	int32_t x3544 = -1;

    t185 = ((x3541*x3542)>>(x3543%x3544));

    if (t185 != 18446744073709544440LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x3558 = 29278U;
	uint8_t x3559 = 5U;
	static uint8_t x3560 = 68U;

    t186 = ((x3557*x3558)>>(x3559%x3560));

    if (t186 != 1829U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x3569 = -1;
	uint64_t x3571 = UINT64_MAX;
	uint8_t x3572 = UINT8_MAX;
	uint32_t t187 = 44846U;

    t187 = ((x3569*x3570)>>(x3571%x3572));

    if (t187 != 4294548453U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x3574 = 187U;
	volatile int16_t x3575 = -59;

    t188 = ((x3573*x3574)>>(x3575%x3576));

    if (t188 != 4288839680U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x3585 = UINT8_MAX;
	static int8_t x3586 = 3;
	int64_t x3587 = -1LL;
	uint64_t x3588 = 12LLU;
	int32_t t189 = -917252309;

    t189 = ((x3585*x3586)>>(x3587%x3588));

    if (t189 != 95) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x3597 = 17LL;
	uint16_t x3598 = 4U;
	uint16_t x3599 = UINT16_MAX;
	static int64_t x3600 = -1LL;
	volatile int64_t t190 = -63585357LL;

    t190 = ((x3597*x3598)>>(x3599%x3600));

    if (t190 != 68LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x3601 = 783675845675619229LLU;
	volatile int16_t x3602 = INT16_MIN;
	uint64_t x3603 = UINT64_MAX;
	int8_t x3604 = INT8_MAX;
	static volatile uint64_t t191 = 1066138430188651LLU;

    t191 = ((x3601*x3602)>>(x3603%x3604));

    if (t191 != 8412191789357252608LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x3605 = INT32_MIN;
	static int64_t x3606 = -223770LL;
	uint64_t x3607 = UINT64_MAX;
	volatile int64_t t192 = 1LL;

    t192 = ((x3605*x3606)>>(x3607%x3608));

    if (t192 != 14664990720LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x3617 = INT16_MIN;
	int8_t x3618 = INT8_MIN;
	int64_t x3620 = -208340627233287LL;

    t193 = ((x3617*x3618)>>(x3619%x3620));

    if (t193 != 4194304) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x3641 = -1;
	int16_t x3642 = 0;
	static uint32_t x3643 = UINT32_MAX;
	static int8_t x3644 = -1;
	int32_t t194 = 315843;

    t194 = ((x3641*x3642)>>(x3643%x3644));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x3677 = INT32_MIN;
	uint64_t x3678 = UINT64_MAX;
	volatile uint64_t x3679 = UINT64_MAX;
	int64_t x3680 = -1LL;
	volatile uint64_t t195 = 164294754660267LLU;

    t195 = ((x3677*x3678)>>(x3679%x3680));

    if (t195 != 2147483648LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x3690 = 93809587873050022LLU;
	static volatile uint32_t x3691 = 2U;
	int64_t x3692 = INT64_MAX;

    t196 = ((x3689*x3690)>>(x3691%x3692));

    if (t196 != 3321802288054617238LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x3711 = 44129;
	volatile int32_t x3712 = -1;
	static volatile uint64_t t197 = 63LLU;

    t197 = ((x3709*x3710)>>(x3711%x3712));

    if (t197 != 18359998918442354413LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x3713 = 123;
	volatile int32_t x3716 = -1;
	uint32_t t198 = 932U;

    t198 = ((x3713*x3714)>>(x3715%x3716));

    if (t198 != 2164502040U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x3717 = 398019248U;
	int8_t x3718 = 1;
	int64_t x3719 = -1029LL;
	uint32_t t199 = 789U;

    t199 = ((x3717*x3718)>>(x3719%x3720));

    if (t199 != 398019248U) { NG(); } else { ; }
	
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

