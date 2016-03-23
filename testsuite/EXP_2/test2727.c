
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

uint16_t x23 = 13U;
int16_t x156 = 2;
int32_t x169 = INT32_MIN;
uint64_t x170 = 2LLU;
int16_t x212 = 54;
uint32_t x218 = 188075U;
uint8_t x220 = 1U;
volatile int32_t x317 = 1;
uint32_t x318 = 845U;
uint64_t x329 = 864372410803300LLU;
int8_t x331 = INT8_MIN;
volatile uint64_t t8 = 5146LLU;
uint8_t x368 = 6U;
uint64_t t9 = 3LLU;
uint64_t t11 = 443627051381LLU;
volatile int8_t x561 = INT8_MIN;
volatile uint64_t t14 = 7465461876027289LLU;
static int16_t x653 = -1;
uint64_t x682 = UINT64_MAX;
int8_t x683 = -6;
uint16_t x684 = 3U;
uint8_t x834 = 7U;
uint16_t x836 = 2U;
uint64_t t19 = 107070583588984LLU;
static volatile uint64_t t20 = 6763114077377614404LLU;
volatile uint64_t x865 = 16048LLU;
uint32_t x1226 = UINT32_MAX;
static volatile int64_t t23 = -11597864342107LL;
volatile uint32_t x1450 = 4863549U;
static volatile uint32_t t26 = 7512657U;
uint64_t x1561 = 14LLU;
uint8_t x1564 = 3U;
uint32_t x2129 = 455175127U;
uint32_t x2131 = 6118986U;
int8_t x2310 = -1;
int32_t x2408 = 59;
uint8_t x2516 = 2U;
uint32_t x2575 = 1U;
uint64_t t39 = 10983370112671503LLU;
int16_t x2671 = -1;
volatile uint64_t t43 = 267397017096LLU;
uint64_t x3002 = 4676LLU;
volatile int16_t x3066 = INT16_MIN;
int16_t x3068 = 47;
static uint64_t t45 = 42477068LLU;
static uint8_t x3112 = 37U;
uint32_t x3175 = 346U;
uint16_t x3176 = 1U;
uint16_t x3177 = 1U;
int8_t x3179 = -57;
static uint32_t x3282 = UINT32_MAX;
uint64_t x3284 = 28LLU;
uint8_t x3297 = UINT8_MAX;
uint32_t x3298 = 21915324U;
volatile uint32_t t50 = 382338156U;
uint64_t x3351 = UINT64_MAX;
volatile uint64_t t51 = 1LLU;
uint64_t x3362 = 6465LLU;
static uint64_t t52 = 14996LLU;
int32_t x3394 = 129145;
static volatile int8_t x3396 = 1;
int8_t x3441 = 8;
volatile uint32_t x3590 = 422518842U;
volatile uint64_t x3592 = 3LLU;
int8_t x3746 = 58;
static int8_t x3747 = INT8_MIN;
int64_t x3830 = INT64_MIN;
int32_t x3861 = INT32_MIN;
uint64_t x3862 = 888040564LLU;
int64_t x4041 = 122LL;
uint16_t x4077 = 30143U;
int8_t x4080 = 0;
volatile int32_t t62 = -63134;
static int8_t x4231 = INT8_MAX;
int16_t x4269 = INT16_MAX;
static volatile uint32_t x4327 = 40U;
static uint64_t t69 = 65531736LLU;
uint16_t x4424 = 10U;
uint32_t x4427 = UINT32_MAX;
int16_t x4489 = -1;
static int16_t x4514 = INT16_MIN;
uint8_t x4515 = 0U;
static int32_t x4586 = INT32_MAX;
static uint8_t x4593 = 3U;
int64_t x4755 = INT64_MIN;
static int16_t x4814 = INT16_MIN;
static volatile uint32_t x4815 = 78597359U;
uint64_t x4884 = 1LLU;
int32_t x4999 = INT32_MIN;
volatile int32_t x5023 = -70357;
uint16_t x5042 = 3140U;
uint64_t x5044 = 27LLU;
uint64_t x5371 = 664280141231498142LLU;
volatile int16_t x5453 = INT16_MIN;
uint64_t x5454 = 4269935107285547204LLU;
static uint16_t x5804 = 3U;
int64_t x5902 = 0LL;
static volatile int64_t t99 = 13359660640912108LL;
static int8_t x6011 = INT8_MAX;
uint16_t x6042 = 3931U;
volatile uint8_t x6047 = 3U;
int64_t x6091 = -3040221886736434054LL;
int8_t x6092 = 1;
static volatile int64_t x6308 = 0LL;
uint64_t t107 = 374157LLU;
uint64_t x6442 = UINT64_MAX;


void f0(void) {
    	volatile uint32_t x21 = 3U;
	int32_t x22 = INT32_MAX;
	int16_t x24 = 16;
	volatile uint32_t t0 = 45U;

    t0 = ((x21|(x22^x23))>>x24);

    if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x77 = 4370352152LLU;
	uint16_t x78 = 5U;
	int32_t x79 = INT32_MIN;
	int8_t x80 = 0;
	volatile uint64_t t1 = 7055523042662LLU;

    t1 = ((x77|(x78^x79))>>x80);

    if (t1 != 18446744071637452829LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x153 = INT64_MAX;
	int64_t x154 = INT64_MAX;
	static int64_t x155 = INT64_MAX;
	volatile int64_t t2 = -810382LL;

    t2 = ((x153|(x154^x155))>>x156);

    if (t2 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x171 = 1820;
	int32_t x172 = 7;
	volatile uint64_t t3 = 51LLU;

    t3 = ((x169|(x170^x171))>>x172);

    if (t3 != 144115188059078670LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MIN;
	static uint64_t x199 = 7395096962LLU;
	static uint32_t x200 = 5U;
	volatile uint64_t t4 = 820186676LLU;

    t4 = ((x197|(x198^x199))>>x200);

    if (t4 != 576460752072327167LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MIN;
	int64_t x211 = -1LL;
	int64_t t5 = -1831592358LL;

    t5 = ((x209|(x210^x211))>>x212);

    if (t5 != 511LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x217 = INT32_MAX;
	static int8_t x219 = INT8_MIN;
	uint32_t t6 = 1202557U;

    t6 = ((x217|(x218^x219))>>x220);

    if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x319 = -1;
	static uint16_t x320 = 1U;
	volatile uint32_t t7 = 14976910U;

    t7 = ((x317|(x318^x319))>>x320);

    if (t7 != 2147483225U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x330 = INT32_MIN;
	int8_t x332 = 1;

    t8 = ((x329|(x330^x331))>>x332);

    if (t8 != 432186452869106LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x365 = 17LLU;
	int64_t x366 = INT64_MIN;
	volatile int32_t x367 = INT32_MIN;

    t9 = ((x365|(x366^x367))>>x368);

    if (t9 != 144115188042301440LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x433 = INT8_MIN;
	volatile uint64_t x434 = 315013556453LLU;
	uint64_t x435 = 0LLU;
	int8_t x436 = 52;
	uint64_t t10 = 27175LLU;

    t10 = ((x433|(x434^x435))>>x436);

    if (t10 != 4095LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x477 = INT64_MAX;
	uint64_t x478 = 4882237LLU;
	int16_t x479 = INT16_MAX;
	uint8_t x480 = 9U;

    t11 = ((x477|(x478^x479))>>x480);

    if (t11 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x497 = -21;
	volatile uint32_t x498 = 50024U;
	volatile uint32_t x499 = 3U;
	int8_t x500 = 28;
	uint32_t t12 = 312757191U;

    t12 = ((x497|(x498^x499))>>x500);

    if (t12 != 15U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x562 = -1LL;
	volatile uint64_t x563 = UINT64_MAX;
	uint8_t x564 = 1U;
	volatile uint64_t t13 = 1562976245LLU;

    t13 = ((x561|(x562^x563))>>x564);

    if (t13 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x613 = INT16_MAX;
	int32_t x614 = INT32_MIN;
	volatile uint64_t x615 = 3507LLU;
	static uint16_t x616 = 1U;

    t14 = ((x613|(x614^x615))>>x616);

    if (t14 != 9223372035781050367LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x654 = UINT64_MAX;
	volatile int64_t x655 = -1766746625373564675LL;
	int32_t x656 = 0;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = ((x653|(x654^x655))>>x656);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x681 = 427444LLU;
	volatile uint64_t t16 = 105808267339027LLU;

    t16 = ((x681|(x682^x683))>>x684);

    if (t16 != 53430LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x797 = UINT32_MAX;
	int32_t x798 = 0;
	uint64_t x799 = 30502550816980LLU;
	uint8_t x800 = 1U;
	volatile uint64_t t17 = 8334LLU;

    t17 = ((x797|(x798^x799))>>x800);

    if (t17 != 15251428868095LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x809 = INT32_MIN;
	int32_t x810 = 91;
	volatile uint64_t x811 = 99007249537719LLU;
	volatile uint8_t x812 = 17U;
	static uint64_t t18 = 2LLU;

    t18 = ((x809|(x810^x811))>>x812);

    if (t18 != 140737488352760LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x833 = UINT64_MAX;
	uint8_t x835 = 113U;

    t19 = ((x833|(x834^x835))>>x836);

    if (t19 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x857 = UINT64_MAX;
	int16_t x858 = INT16_MAX;
	int8_t x859 = INT8_MIN;
	static volatile uint8_t x860 = 1U;

    t20 = ((x857|(x858^x859))>>x860);

    if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x866 = INT8_MAX;
	int16_t x867 = 10;
	static uint16_t x868 = 0U;
	volatile uint64_t t21 = 2143246670LLU;

    t21 = ((x865|(x866^x867))>>x868);

    if (t21 != 16117LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x969 = 0U;
	uint64_t x970 = 2544LLU;
	int32_t x971 = INT32_MIN;
	uint16_t x972 = 7U;
	static uint64_t t22 = 17405652384398063LLU;

    t22 = ((x969|(x970^x971))>>x972);

    if (t22 != 144115188059078675LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1225 = INT64_MAX;
	volatile uint16_t x1227 = 1U;
	uint8_t x1228 = 50U;

    t23 = ((x1225|(x1226^x1227))>>x1228);

    if (t23 != 8191LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1325 = -1;
	uint8_t x1326 = UINT8_MAX;
	uint64_t x1327 = UINT64_MAX;
	int32_t x1328 = 0;
	volatile uint64_t t24 = UINT64_MAX;

    t24 = ((x1325|(x1326^x1327))>>x1328);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1417 = INT8_MAX;
	int8_t x1418 = -1;
	static int16_t x1419 = INT16_MIN;
	uint8_t x1420 = 1U;
	volatile int32_t t25 = -4045;

    t25 = ((x1417|(x1418^x1419))>>x1420);

    if (t25 != 16383) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1449 = 0;
	uint32_t x1451 = 54447U;
	uint8_t x1452 = 17U;

    t26 = ((x1449|(x1450^x1451))>>x1452);

    if (t26 != 37U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x1562 = INT16_MIN;
	uint8_t x1563 = UINT8_MAX;
	uint64_t t27 = 8968542543213100718LLU;

    t27 = ((x1561|(x1562^x1563))>>x1564);

    if (t27 != 2305843009213689887LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x1625 = INT64_MIN;
	uint64_t x1626 = UINT64_MAX;
	volatile int8_t x1627 = INT8_MIN;
	volatile int32_t x1628 = 7;
	volatile uint64_t t28 = 1044083002LLU;

    t28 = ((x1625|(x1626^x1627))>>x1628);

    if (t28 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1665 = 20;
	int64_t x1666 = INT64_MIN;
	int64_t x1667 = INT64_MIN;
	uint32_t x1668 = 28U;
	int64_t t29 = 41460593475123428LL;

    t29 = ((x1665|(x1666^x1667))>>x1668);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1857 = 1LL;
	volatile int32_t x1858 = INT32_MAX;
	uint8_t x1859 = 31U;
	uint8_t x1860 = 20U;
	volatile int64_t t30 = 69641214256534LL;

    t30 = ((x1857|(x1858^x1859))>>x1860);

    if (t30 != 2047LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x1869 = INT32_MIN;
	uint32_t x1870 = UINT32_MAX;
	int8_t x1871 = INT8_MIN;
	int16_t x1872 = 1;
	uint32_t t31 = 235614U;

    t31 = ((x1869|(x1870^x1871))>>x1872);

    if (t31 != 1073741887U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1917 = UINT16_MAX;
	int8_t x1918 = -1;
	int8_t x1919 = INT8_MIN;
	static int8_t x1920 = 15;
	volatile int32_t t32 = 513;

    t32 = ((x1917|(x1918^x1919))>>x1920);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x1997 = INT16_MAX;
	int8_t x1998 = INT8_MIN;
	static int64_t x1999 = -189042LL;
	uint16_t x2000 = 0U;
	int64_t t33 = 1723422LL;

    t33 = ((x1997|(x1998^x1999))>>x2000);

    if (t33 != 196607LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x2130 = 6853;
	static int8_t x2132 = 7;
	volatile uint32_t t34 = 1929U;

    t34 = ((x2129|(x2130^x2131))>>x2132);

    if (t34 != 3603167U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2309 = INT8_MAX;
	int64_t x2311 = INT64_MIN;
	int8_t x2312 = 14;
	int64_t t35 = 826852123LL;

    t35 = ((x2309|(x2310^x2311))>>x2312);

    if (t35 != 562949953421311LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2405 = INT64_MIN;
	uint64_t x2406 = UINT64_MAX;
	int8_t x2407 = INT8_MAX;
	static volatile uint64_t t36 = 297385LLU;

    t36 = ((x2405|(x2406^x2407))>>x2408);

    if (t36 != 31LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x2513 = 2525116524LLU;
	volatile int32_t x2514 = INT32_MIN;
	uint16_t x2515 = 12791U;
	uint64_t t37 = 92677152988046LLU;

    t37 = ((x2513|(x2514^x2515))>>x2516);

    if (t37 != 4611686017984925311LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x2573 = UINT64_MAX;
	volatile int16_t x2574 = 1;
	volatile uint8_t x2576 = 11U;
	volatile uint64_t t38 = 128482682755456LLU;

    t38 = ((x2573|(x2574^x2575))>>x2576);

    if (t38 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2649 = 44361245531LLU;
	uint8_t x2650 = 1U;
	uint32_t x2651 = 90955726U;
	int8_t x2652 = 1;

    t39 = ((x2649|(x2650^x2651))>>x2652);

    if (t39 != 22191407087LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x2669 = UINT32_MAX;
	static uint8_t x2670 = 1U;
	int8_t x2672 = 2;
	volatile uint32_t t40 = 83U;

    t40 = ((x2669|(x2670^x2671))>>x2672);

    if (t40 != 1073741823U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x2705 = 47502765235647LLU;
	volatile int8_t x2706 = -1;
	uint32_t x2707 = 72U;
	int8_t x2708 = 1;
	volatile uint64_t t41 = 7846LLU;

    t41 = ((x2705|(x2706^x2707))>>x2708);

    if (t41 != 23753316630495LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x2777 = 11;
	int64_t x2778 = INT64_MIN;
	volatile int16_t x2779 = -220;
	static volatile uint8_t x2780 = 0U;
	volatile int64_t t42 = -7LL;

    t42 = ((x2777|(x2778^x2779))>>x2780);

    if (t42 != 9223372036854775599LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2909 = -450;
	uint32_t x2910 = 1310922U;
	static uint64_t x2911 = 6104014085868356457LLU;
	uint8_t x2912 = 1U;

    t43 = ((x2909|(x2910^x2911))>>x2912);

    if (t43 != 9223372036854775775LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x3001 = INT64_MAX;
	int16_t x3003 = -12753;
	int64_t x3004 = 1LL;
	uint64_t t44 = 6LLU;

    t44 = ((x3001|(x3002^x3003))>>x3004);

    if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x3065 = UINT64_MAX;
	int32_t x3067 = -1;

    t45 = ((x3065|(x3066^x3067))>>x3068);

    if (t45 != 131071LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3109 = -24570577299884940LL;
	int16_t x3110 = 6188;
	uint64_t x3111 = 1179870071902125LLU;
	volatile uint64_t t46 = 208257359912499LLU;

    t46 = ((x3109|(x3110^x3111))>>x3112);

    if (t46 != 134047145LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x3173 = 234497LL;
	uint16_t x3174 = UINT16_MAX;
	int64_t t47 = -43892955LL;

    t47 = ((x3173|(x3174^x3175))>>x3176);

    if (t47 != 130898LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x3178 = INT64_MIN;
	int8_t x3180 = 2;
	volatile int64_t t48 = -128562608416172LL;

    t48 = ((x3177|(x3178^x3179))>>x3180);

    if (t48 != 2305843009213693937LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3281 = INT64_MAX;
	uint8_t x3283 = UINT8_MAX;
	int64_t t49 = -3862132LL;

    t49 = ((x3281|(x3282^x3283))>>x3284);

    if (t49 != 34359738367LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x3299 = INT8_MAX;
	uint8_t x3300 = 2U;

    t50 = ((x3297|(x3298^x3299))>>x3300);

    if (t50 != 5478847U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3349 = -1;
	int8_t x3350 = INT8_MIN;
	uint8_t x3352 = 5U;

    t51 = ((x3349|(x3350^x3351))>>x3352);

    if (t51 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x3361 = INT32_MIN;
	int32_t x3363 = -1;
	int8_t x3364 = 0;

    t52 = ((x3361|(x3362^x3363))>>x3364);

    if (t52 != 18446744073709545150LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x3393 = INT64_MAX;
	static uint16_t x3395 = 116U;
	volatile int64_t t53 = 185134097137LL;

    t53 = ((x3393|(x3394^x3395))>>x3396);

    if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x3442 = 27071667677LL;
	static volatile int8_t x3443 = 9;
	uint16_t x3444 = 1U;
	volatile int64_t t54 = -7458497324482562LL;

    t54 = ((x3441|(x3442^x3443))>>x3444);

    if (t54 != 13535833838LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x3589 = UINT64_MAX;
	uint16_t x3591 = 105U;
	uint64_t t55 = 16LLU;

    t55 = ((x3589|(x3590^x3591))>>x3592);

    if (t55 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x3677 = 30;
	int8_t x3678 = INT8_MIN;
	int64_t x3679 = INT64_MIN;
	int64_t x3680 = 1LL;
	volatile int64_t t56 = 253986541978LL;

    t56 = ((x3677|(x3678^x3679))>>x3680);

    if (t56 != 4611686018427387855LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x3745 = 73420U;
	int8_t x3748 = 1;
	uint32_t t57 = 360U;

    t57 = ((x3745|(x3746^x3747))>>x3748);

    if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3753 = 8581U;
	uint8_t x3754 = 1U;
	uint64_t x3755 = UINT64_MAX;
	volatile uint32_t x3756 = 36U;
	uint64_t t58 = 1LLU;

    t58 = ((x3753|(x3754^x3755))>>x3756);

    if (t58 != 268435455LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x3829 = 17U;
	int64_t x3831 = -89649733543353827LL;
	static uint32_t x3832 = 2U;
	volatile int64_t t59 = -104780169298148759LL;

    t59 = ((x3829|(x3830^x3831))>>x3832);

    if (t59 != 2283430575827855495LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x3863 = 12;
	uint32_t x3864 = 0U;
	uint64_t t60 = 2904451173495935879LLU;

    t60 = ((x3861|(x3862^x3863))>>x3864);

    if (t60 != 18446744072450108536LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x4042 = INT32_MIN;
	uint64_t x4043 = 6134639336743LLU;
	static int8_t x4044 = 0;
	static volatile uint64_t t61 = 1376434501173LLU;

    t61 = ((x4041|(x4042^x4043))>>x4044);

    if (t61 != 18446737939774807423LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x4078 = INT16_MAX;
	int32_t x4079 = INT32_MAX;

    t62 = ((x4077|(x4078^x4079))>>x4080);

    if (t62 != 2147481023) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x4229 = 101LLU;
	uint32_t x4230 = 0U;
	int8_t x4232 = 15;
	uint64_t t63 = 6704347780123366830LLU;

    t63 = ((x4229|(x4230^x4231))>>x4232);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x4270 = -1LL;
	static int64_t x4271 = -521105929LL;
	static volatile uint8_t x4272 = 7U;
	static volatile int64_t t64 = 2083291678403459LL;

    t64 = ((x4269|(x4270^x4271))>>x4272);

    if (t64 != 4071167LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x4273 = UINT8_MAX;
	int64_t x4274 = -572638500535LL;
	int32_t x4275 = -1;
	static uint16_t x4276 = 1U;
	volatile int64_t t65 = -184486844811340169LL;

    t65 = ((x4273|(x4274^x4275))>>x4276);

    if (t65 != 286319250303LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x4325 = UINT64_MAX;
	uint16_t x4326 = UINT16_MAX;
	static volatile uint32_t x4328 = 17U;
	uint64_t t66 = 120491LLU;

    t66 = ((x4325|(x4326^x4327))>>x4328);

    if (t66 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x4337 = INT32_MIN;
	uint16_t x4338 = UINT16_MAX;
	uint64_t x4339 = 34903LLU;
	static int8_t x4340 = 1;
	volatile uint64_t t67 = 550551127585LLU;

    t67 = ((x4337|(x4338^x4339))>>x4340);

    if (t67 != 9223372035781049300LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x4353 = 13U;
	static uint16_t x4354 = 1U;
	uint32_t x4355 = UINT32_MAX;
	uint8_t x4356 = 15U;
	static volatile uint32_t t68 = 924187U;

    t68 = ((x4353|(x4354^x4355))>>x4356);

    if (t68 != 131071U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x4417 = 29125U;
	int8_t x4418 = -1;
	uint64_t x4419 = 209LLU;
	uint16_t x4420 = 24U;

    t69 = ((x4417|(x4418^x4419))>>x4420);

    if (t69 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x4421 = 51U;
	int32_t x4422 = INT32_MIN;
	uint64_t x4423 = 13229558LLU;
	uint64_t t70 = 327828081LLU;

    t70 = ((x4421|(x4422^x4423))>>x4424);

    if (t70 != 18014398507397751LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x4425 = INT16_MAX;
	uint32_t x4426 = 1660747941U;
	uint8_t x4428 = 11U;
	volatile uint32_t t71 = 236U;

    t71 = ((x4425|(x4426^x4427))>>x4428);

    if (t71 != 1286239U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x4465 = -1;
	uint8_t x4466 = 98U;
	static uint64_t x4467 = UINT64_MAX;
	uint8_t x4468 = 6U;
	volatile uint64_t t72 = 92LLU;

    t72 = ((x4465|(x4466^x4467))>>x4468);

    if (t72 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x4490 = UINT64_MAX;
	uint32_t x4491 = 213751939U;
	int8_t x4492 = 17;
	uint64_t t73 = 23959972097341LLU;

    t73 = ((x4489|(x4490^x4491))>>x4492);

    if (t73 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x4513 = UINT32_MAX;
	int8_t x4516 = 8;
	static volatile uint32_t t74 = 7U;

    t74 = ((x4513|(x4514^x4515))>>x4516);

    if (t74 != 16777215U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x4585 = 69U;
	int32_t x4587 = INT32_MIN;
	uint8_t x4588 = 28U;
	uint32_t t75 = 6U;

    t75 = ((x4585|(x4586^x4587))>>x4588);

    if (t75 != 15U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x4594 = INT8_MIN;
	int32_t x4595 = -4;
	static int32_t x4596 = 0;
	static int32_t t76 = -1933;

    t76 = ((x4593|(x4594^x4595))>>x4596);

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x4645 = INT64_MAX;
	int16_t x4646 = INT16_MAX;
	static uint32_t x4647 = 258895993U;
	volatile uint8_t x4648 = 13U;
	static int64_t t77 = 6519242LL;

    t77 = ((x4645|(x4646^x4647))>>x4648);

    if (t77 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x4753 = 145145LLU;
	volatile int64_t x4754 = INT64_MAX;
	volatile int8_t x4756 = 2;
	static volatile uint64_t t78 = 17LLU;

    t78 = ((x4753|(x4754^x4755))>>x4756);

    if (t78 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x4813 = -1;
	int8_t x4816 = 1;
	volatile uint32_t t79 = 16296936U;

    t79 = ((x4813|(x4814^x4815))>>x4816);

    if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x4881 = INT16_MIN;
	static uint8_t x4882 = 32U;
	uint64_t x4883 = 6099910254921LLU;
	uint64_t t80 = 59456651LLU;

    t80 = ((x4881|(x4882^x4883))>>x4884);

    if (t80 != 9223372036854771892LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x4901 = -1;
	volatile uint64_t x4902 = UINT64_MAX;
	int64_t x4903 = 2464527245422325LL;
	volatile uint8_t x4904 = 22U;
	uint64_t t81 = 235719645427835LLU;

    t81 = ((x4901|(x4902^x4903))>>x4904);

    if (t81 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x4969 = 28U;
	volatile uint64_t x4970 = UINT64_MAX;
	uint16_t x4971 = UINT16_MAX;
	int8_t x4972 = 46;
	uint64_t t82 = 130774669LLU;

    t82 = ((x4969|(x4970^x4971))>>x4972);

    if (t82 != 262143LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4997 = 10983;
	uint32_t x4998 = 16588534U;
	uint32_t x5000 = 1U;
	static volatile uint32_t t83 = 3616134U;

    t83 = ((x4997|(x4998^x4999))>>x5000);

    if (t83 != 1082040187U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x5021 = INT16_MAX;
	uint64_t x5022 = 6525888076180859138LLU;
	static uint64_t x5024 = 3LLU;
	uint64_t t84 = 326266867LLU;

    t84 = ((x5021|(x5022^x5023))>>x5024);

    if (t84 != 1490106999691096063LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x5041 = 99207LL;
	int16_t x5043 = 1;
	volatile int64_t t85 = -15134010631LL;

    t85 = ((x5041|(x5042^x5043))>>x5044);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x5109 = INT64_MAX;
	static int64_t x5110 = -1LL;
	int32_t x5111 = INT32_MIN;
	uint16_t x5112 = 3U;
	volatile int64_t t86 = 1255884888LL;

    t86 = ((x5109|(x5110^x5111))>>x5112);

    if (t86 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x5125 = INT8_MAX;
	uint16_t x5126 = UINT16_MAX;
	volatile uint32_t x5127 = 9917088U;
	uint8_t x5128 = 2U;
	uint32_t t87 = 515698U;

    t87 = ((x5125|(x5126^x5127))>>x5128);

    if (t87 != 2485087U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x5209 = UINT32_MAX;
	uint32_t x5210 = 1665U;
	static int8_t x5211 = -1;
	volatile uint32_t x5212 = 0U;
	uint32_t t88 = UINT32_MAX;

    t88 = ((x5209|(x5210^x5211))>>x5212);

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x5369 = INT64_MAX;
	int8_t x5370 = INT8_MAX;
	int8_t x5372 = 52;
	uint64_t t89 = 597977510783409758LLU;

    t89 = ((x5369|(x5370^x5371))>>x5372);

    if (t89 != 2047LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x5373 = 26U;
	static uint32_t x5374 = 107244708U;
	static int8_t x5375 = INT8_MAX;
	volatile int64_t x5376 = 0LL;
	static uint32_t t90 = 8291U;

    t90 = ((x5373|(x5374^x5375))>>x5376);

    if (t90 != 107244763U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x5455 = UINT8_MAX;
	static uint16_t x5456 = 14U;
	uint64_t t91 = 452746508523459372LLU;

    t91 = ((x5453|(x5454^x5455))>>x5456);

    if (t91 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x5529 = UINT64_MAX;
	static int8_t x5530 = INT8_MIN;
	int64_t x5531 = INT64_MAX;
	uint8_t x5532 = 13U;
	volatile uint64_t t92 = 297193676829440LLU;

    t92 = ((x5529|(x5530^x5531))>>x5532);

    if (t92 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x5597 = 144U;
	volatile int8_t x5598 = 1;
	volatile uint8_t x5599 = 8U;
	static int8_t x5600 = 0;
	volatile int32_t t93 = -15;

    t93 = ((x5597|(x5598^x5599))>>x5600);

    if (t93 != 153) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x5609 = 4328507529881034738LLU;
	int16_t x5610 = INT16_MIN;
	static uint8_t x5611 = 17U;
	static volatile int16_t x5612 = 55;
	static volatile uint64_t t94 = 3096070757937049129LLU;

    t94 = ((x5609|(x5610^x5611))>>x5612);

    if (t94 != 511LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x5617 = 4371;
	volatile uint8_t x5618 = 4U;
	uint16_t x5619 = UINT16_MAX;
	volatile uint8_t x5620 = 19U;
	volatile int32_t t95 = -114779342;

    t95 = ((x5617|(x5618^x5619))>>x5620);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x5625 = UINT64_MAX;
	int8_t x5626 = INT8_MAX;
	static uint8_t x5627 = 1U;
	static uint16_t x5628 = 17U;
	volatile uint64_t t96 = 1726265849LLU;

    t96 = ((x5625|(x5626^x5627))>>x5628);

    if (t96 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x5801 = 1U;
	static volatile uint8_t x5802 = UINT8_MAX;
	static int64_t x5803 = INT64_MAX;
	volatile int64_t t97 = -142LL;

    t97 = ((x5801|(x5802^x5803))>>x5804);

    if (t97 != 1152921504606846944LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x5849 = 2100064438235674334LLU;
	static volatile uint16_t x5850 = UINT16_MAX;
	volatile int32_t x5851 = INT32_MIN;
	uint8_t x5852 = 9U;
	volatile uint64_t t98 = 29285740692600LLU;

    t98 = ((x5849|(x5850^x5851))>>x5852);

    if (t98 != 36028797017865215LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x5901 = UINT16_MAX;
	uint8_t x5903 = 10U;
	uint16_t x5904 = 1U;

    t99 = ((x5901|(x5902^x5903))>>x5904);

    if (t99 != 32767LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x5929 = 2U;
	int16_t x5930 = INT16_MAX;
	uint8_t x5931 = UINT8_MAX;
	int32_t x5932 = 2;
	static int32_t t100 = 3625;

    t100 = ((x5929|(x5930^x5931))>>x5932);

    if (t100 != 8128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x6009 = UINT64_MAX;
	static int64_t x6010 = INT64_MIN;
	int8_t x6012 = 4;
	volatile uint64_t t101 = 109061LLU;

    t101 = ((x6009|(x6010^x6011))>>x6012);

    if (t101 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x6041 = 49864U;
	volatile uint8_t x6043 = 1U;
	uint8_t x6044 = 0U;
	volatile uint32_t t102 = 13501490U;

    t102 = ((x6041|(x6042^x6043))>>x6044);

    if (t102 != 53210U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x6045 = UINT8_MAX;
	uint64_t x6046 = 12458345239LLU;
	static int8_t x6048 = 31;
	uint64_t t103 = 92329978194LLU;

    t103 = ((x6045|(x6046^x6047))>>x6048);

    if (t103 != 5LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x6089 = UINT8_MAX;
	uint64_t x6090 = 8264967884LLU;
	uint64_t t104 = 621LLU;

    t104 = ((x6089|(x6090^x6091))>>x6092);

    if (t104 != 7703261092239822207LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x6189 = 3U;
	int16_t x6190 = INT16_MIN;
	int32_t x6191 = INT32_MIN;
	uint8_t x6192 = 1U;
	volatile int32_t t105 = 425;

    t105 = ((x6189|(x6190^x6191))>>x6192);

    if (t105 != 1073725441) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x6213 = UINT32_MAX;
	volatile uint64_t x6214 = UINT64_MAX;
	int16_t x6215 = -1;
	int16_t x6216 = 0;
	volatile uint64_t t106 = 913948356327530LLU;

    t106 = ((x6213|(x6214^x6215))>>x6216);

    if (t106 != 4294967295LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x6305 = 117U;
	static uint64_t x6306 = 78322LLU;
	uint8_t x6307 = 6U;

    t107 = ((x6305|(x6306^x6307))>>x6308);

    if (t107 != 78325LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x6441 = 9049U;
	int32_t x6443 = INT32_MAX;
	int16_t x6444 = 24;
	uint64_t t108 = 8757573282746436261LLU;

    t108 = ((x6441|(x6442^x6443))>>x6444);

    if (t108 != 1099511627648LLU) { NG(); } else { ; }
	
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


    return 0;
}

