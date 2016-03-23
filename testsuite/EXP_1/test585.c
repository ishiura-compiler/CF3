
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

static uint8_t x23 = 3U;
int8_t x31 = -37;
uint8_t x63 = 27U;
uint64_t x350 = 1236499923406LLU;
volatile int8_t x399 = INT8_MAX;
int32_t x462 = -1;
int16_t x465 = INT16_MIN;
uint16_t x472 = 30U;
static uint64_t x589 = 3439422LLU;
int8_t x623 = 1;
volatile int16_t x662 = INT16_MIN;
uint16_t x734 = 21U;
uint8_t x805 = 0U;
int16_t x866 = INT16_MIN;
uint8_t x868 = 2U;
static uint32_t x982 = 548800796U;
uint64_t x985 = 515456966814469LLU;
uint32_t x987 = 1368184U;
static int8_t x988 = 49;
int32_t x1355 = INT32_MIN;
static volatile uint8_t x1378 = 12U;
static uint64_t x1407 = 120850894LLU;
int8_t x1438 = INT8_MIN;
volatile int16_t x1587 = -1;
uint64_t x1666 = 1241688LLU;
int32_t x1667 = 123;
volatile int64_t x1689 = -111637662664LL;
static int32_t x1692 = 4;
volatile uint64_t t39 = 366874760301LLU;
static uint32_t x1852 = 17U;
int64_t x1960 = 1LL;
static uint32_t x2012 = 13U;
int32_t x2062 = -1;
int8_t x2064 = 0;
uint64_t x2066 = 0LLU;
static uint8_t x2068 = 9U;
volatile uint64_t t46 = 35LLU;
static int32_t x2194 = 1;
volatile int8_t x2206 = INT8_MIN;
static uint64_t x2345 = 974546053097540845LLU;
static uint8_t x2348 = 5U;
uint32_t x2425 = 4906U;
static int16_t x2461 = INT16_MIN;
uint8_t x2611 = 1U;
static int32_t x2646 = INT32_MIN;
uint8_t x2856 = 27U;
uint64_t x2906 = UINT64_MAX;
int16_t x2960 = 6;
static volatile uint64_t x3074 = 3498883LLU;
static uint8_t x3076 = 13U;
int64_t x3081 = 7LL;
uint64_t x3083 = 8718490777006LLU;
uint64_t x3238 = 2582817194425527LLU;
volatile uint64_t t65 = 117LLU;
int16_t x3297 = INT16_MIN;
volatile int16_t x3305 = INT16_MIN;
static volatile int64_t x3347 = INT64_MIN;
uint16_t x3348 = 9U;
uint8_t x3408 = 37U;
static uint64_t x3439 = 526871827023715LLU;
int16_t x3677 = -1;
int16_t x4124 = 0;
int32_t t78 = 42;
volatile uint64_t t80 = 7498434079740LLU;
int8_t x4185 = -38;
uint64_t x4186 = 177797956136LLU;
int8_t x4230 = INT8_MAX;
uint32_t x4232 = 3U;
volatile uint32_t x4463 = UINT32_MAX;
int8_t x4464 = 7;
volatile int8_t x4489 = -1;
static int32_t x4567 = INT32_MIN;
static int32_t x4583 = 80;
uint8_t x4624 = 1U;
uint16_t x4691 = 397U;
static volatile uint32_t x4692 = 14U;
uint64_t t89 = 899LLU;
volatile uint16_t x4799 = UINT16_MAX;
uint64_t x4800 = 0LLU;
static uint32_t t90 = 1U;
uint64_t x5045 = 121834428126786106LLU;
int64_t x5046 = -1LL;
uint8_t x5083 = 4U;
volatile int64_t t93 = 29402956101422LL;
static volatile uint64_t t95 = 70242111357669871LLU;
int8_t x5188 = 0;
static int32_t t96 = 949619530;
uint64_t x5354 = 888769154LLU;
uint16_t x5355 = 22U;
int8_t x5356 = 38;
uint16_t x5359 = 17254U;
static uint16_t x5364 = 29U;
static uint64_t x5374 = 76078978LLU;
uint64_t x5607 = UINT64_MAX;
uint64_t x5711 = 1212424090LLU;
int16_t x5805 = INT16_MIN;
int32_t x5808 = 8;
uint64_t x5832 = 2LLU;
volatile int64_t x5843 = INT64_MIN;
volatile uint32_t x5934 = 314041U;
static uint64_t x6277 = UINT64_MAX;
static uint64_t t115 = 1529LLU;
uint32_t x6321 = 217475U;
uint64_t x6323 = 419LLU;
int8_t x6333 = 1;
int8_t x6334 = INT8_MIN;
int16_t x6350 = INT16_MIN;
int8_t x6382 = INT8_MIN;
volatile uint32_t x6537 = 16768U;
volatile uint32_t x6654 = 125U;
static int16_t x6655 = INT16_MIN;
volatile uint32_t t125 = 491273U;
uint64_t x6778 = 618127157566511941LLU;
static volatile uint64_t t126 = 0LLU;
volatile uint8_t x6932 = 21U;
volatile int64_t x6996 = 1LL;
int8_t x7027 = -3;
uint64_t x7097 = 3984092405670692495LLU;
volatile int32_t x7100 = 1;
uint32_t t132 = 242369U;
static int8_t x7234 = 63;
int32_t x7290 = -1;
volatile uint64_t x7291 = UINT64_MAX;
volatile uint64_t t135 = 9888996426631332LLU;
static int8_t x7313 = INT8_MAX;
uint16_t x7316 = 3U;
static uint64_t x7397 = 8430301949037115LLU;
uint8_t x7424 = 10U;
uint16_t x7678 = 4947U;
uint8_t x7732 = 13U;
int16_t x7761 = 0;
int32_t x7848 = 2;
uint8_t x8057 = 62U;
int32_t x8367 = 8094;
uint32_t x8422 = 118767U;
uint32_t x8426 = UINT32_MAX;
static uint8_t x8568 = 7U;
int64_t x8627 = INT64_MIN;
int16_t x8649 = -2625;
int16_t x8687 = -2454;
volatile uint8_t x8688 = 40U;
int64_t t155 = 2184644914108277452LL;
uint16_t x8801 = 0U;
int8_t x8828 = 0;
volatile uint32_t t157 = 6929U;
int8_t x8922 = INT8_MIN;
uint16_t x8924 = 48U;
uint16_t x8932 = 42U;
int16_t x9090 = INT16_MAX;
int16_t x9125 = 7526;
static volatile uint32_t x9126 = UINT32_MAX;
static int32_t x9130 = INT32_MIN;
uint8_t x9132 = 4U;
int16_t x9178 = 518;
volatile int32_t t166 = 261369056;
uint64_t x9353 = 4667795284416428LLU;
int16_t x9354 = INT16_MIN;
int32_t x9355 = INT32_MIN;
uint16_t x9696 = 14U;
int16_t x9805 = INT16_MIN;
uint32_t x9873 = UINT32_MAX;
volatile uint8_t x9874 = 1U;
volatile int32_t x9875 = 34198404;
volatile int64_t t180 = -11867597LL;
int8_t x10120 = 1;
static volatile uint64_t t181 = 0LLU;
static volatile uint16_t x10129 = 115U;
int8_t x10132 = 0;
int32_t x10163 = -3;
uint8_t x10166 = UINT8_MAX;
uint8_t x10167 = 3U;
uint16_t x10168 = 12U;
uint32_t t185 = 3U;
int8_t x10284 = 18;
uint16_t x10293 = 4335U;
int64_t x10348 = 2LL;
uint16_t x10366 = 32U;
int64_t x10459 = -1LL;
static int64_t t196 = -34261211500LL;
int32_t x10463 = 540;
uint8_t x10545 = 1U;
int8_t x10548 = 1;
int16_t x10550 = 51;


void f0(void) {
    	static volatile uint16_t x21 = 3101U;
	volatile uint8_t x22 = UINT8_MAX;
	static uint8_t x24 = 1U;
	int32_t t0 = 4;

    t0 = (((x21*x22)^x23)>>x24);

    if (t0 != 395376) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x29 = 74;
	static int8_t x30 = -1;
	static uint8_t x32 = 5U;
	volatile int32_t t1 = 3794472;

    t1 = (((x29*x30)^x31)>>x32);

    if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x37 = 40;
	static int16_t x38 = INT16_MIN;
	uint64_t x39 = 22782649651LLU;
	uint8_t x40 = 15U;
	volatile uint64_t t2 = 323762LLU;

    t2 = (((x37*x38)^x39)>>x40);

    if (t2 != 562949952726079LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x61 = 12979535U;
	int16_t x62 = -14;
	uint8_t x64 = 19U;
	volatile uint32_t t3 = 740811859U;

    t3 = (((x61*x62)^x63)>>x64);

    if (t3 != 7845U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x97 = UINT16_MAX;
	static uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = 11U;
	volatile uint64_t t4 = 874642229LLU;

    t4 = (((x97*x98)^x99)>>x100);

    if (t4 != 16LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x201 = 2572LLU;
	static volatile int8_t x202 = -1;
	volatile int64_t x203 = INT64_MIN;
	int16_t x204 = 15;
	static uint64_t t5 = 1LLU;

    t5 = (((x201*x202)^x203)>>x204);

    if (t5 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x289 = INT32_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = 10;
	volatile uint32_t t6 = 378269944U;

    t6 = (((x289*x290)^x291)>>x292);

    if (t6 != 2097152U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x349 = -1;
	static int16_t x351 = 16;
	uint32_t x352 = 10U;
	volatile uint64_t t7 = 3972796827976895LLU;

    t7 = (((x349*x350)^x351)>>x352);

    if (t7 != 18014397301962527LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x381 = 50;
	volatile int64_t x382 = -1LL;
	static volatile int32_t x383 = -56;
	uint16_t x384 = 11U;
	int64_t t8 = -58538430161LL;

    t8 = (((x381*x382)^x383)>>x384);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x397 = -1LL;
	static int32_t x398 = INT32_MIN;
	static int16_t x400 = 16;
	volatile int64_t t9 = -365LL;

    t9 = (((x397*x398)^x399)>>x400);

    if (t9 != 32768LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x413 = UINT16_MAX;
	static int8_t x414 = -1;
	volatile int64_t x415 = INT64_MIN;
	uint32_t x416 = 5U;
	volatile int64_t t10 = -723LL;

    t10 = (((x413*x414)^x415)>>x416);

    if (t10 != 288230376151709696LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x461 = INT16_MAX;
	int16_t x463 = -1;
	static volatile uint16_t x464 = 1U;
	volatile int32_t t11 = 13648624;

    t11 = (((x461*x462)^x463)>>x464);

    if (t11 != 16383) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x466 = -105LL;
	volatile uint8_t x467 = 1U;
	uint8_t x468 = 0U;
	volatile int64_t t12 = 685553933092LL;

    t12 = (((x465*x466)^x467)>>x468);

    if (t12 != 3440641LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x469 = 4548U;
	uint8_t x470 = 6U;
	int32_t x471 = 283;
	int32_t t13 = 22142651;

    t13 = (((x469*x470)^x471)>>x472);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x590 = 1889241141LL;
	static uint64_t x591 = 61LLU;
	int32_t x592 = 13;
	uint64_t t14 = 11501923785327814LLU;

    t14 = (((x589*x590)^x591)>>x592);

    if (t14 != 793200383747LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x621 = 12560830U;
	int64_t x622 = 58LL;
	volatile uint32_t x624 = 2U;
	volatile int64_t t15 = -782099788130461LL;

    t15 = (((x621*x622)^x623)>>x624);

    if (t15 != 182132035LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x661 = 2U;
	volatile uint64_t x663 = 4010410LLU;
	int8_t x664 = 1;
	uint64_t t16 = 771831447180848LLU;

    t16 = (((x661*x662)^x663)>>x664);

    if (t16 != 9223372036852750549LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x701 = -1LL;
	volatile int32_t x702 = INT32_MAX;
	static uint64_t x703 = 404069804419102884LLU;
	static volatile uint16_t x704 = 28U;
	volatile uint64_t t17 = 3035069617891LLU;

    t17 = (((x701*x702)^x703)>>x704);

    if (t17 != 67214199410LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x733 = INT16_MIN;
	int32_t x735 = -1;
	static uint8_t x736 = 1U;
	static int32_t t18 = -235;

    t18 = (((x733*x734)^x735)>>x736);

    if (t18 != 344063) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x769 = INT32_MIN;
	int64_t x770 = -1LL;
	uint64_t x771 = UINT64_MAX;
	int8_t x772 = 0;
	static uint64_t t19 = 1613584454LLU;

    t19 = (((x769*x770)^x771)>>x772);

    if (t19 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x806 = INT8_MIN;
	static int32_t x807 = INT32_MAX;
	static uint16_t x808 = 9U;
	volatile int32_t t20 = 82;

    t20 = (((x805*x806)^x807)>>x808);

    if (t20 != 4194303) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x865 = 14U;
	int32_t x867 = INT32_MIN;
	int32_t t21 = 200402;

    t21 = (((x865*x866)^x867)>>x868);

    if (t21 != 536756224) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x981 = INT8_MIN;
	int16_t x983 = -42;
	static uint16_t x984 = 30U;
	uint32_t t22 = 458934490U;

    t22 = (((x981*x982)^x983)>>x984);

    if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x986 = INT64_MAX;
	uint64_t t23 = 85951200508302456LLU;

    t23 = (((x985*x986)^x987)>>x988);

    if (t23 != 16383LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1113 = -1;
	static int16_t x1114 = INT16_MIN;
	int32_t x1115 = INT32_MAX;
	int16_t x1116 = 0;
	int32_t t24 = 0;

    t24 = (((x1113*x1114)^x1115)>>x1116);

    if (t24 != 2147450879) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1125 = 10535763LLU;
	int8_t x1126 = -15;
	static int64_t x1127 = INT64_MAX;
	uint16_t x1128 = 7U;
	static uint64_t t25 = 3120316736664LLU;

    t25 = (((x1125*x1126)^x1127)>>x1128);

    if (t25 != 72057594039162595LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x1269 = 2U;
	int32_t x1270 = INT32_MIN;
	static int32_t x1271 = 749866159;
	uint8_t x1272 = 1U;
	volatile uint32_t t26 = 38399U;

    t26 = (((x1269*x1270)^x1271)>>x1272);

    if (t26 != 374933079U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1301 = -1;
	int32_t x1302 = 302284280;
	int32_t x1303 = -2065;
	uint8_t x1304 = 0U;
	int32_t t27 = -90064240;

    t27 = (((x1301*x1302)^x1303)>>x1304);

    if (t27 != 302282215) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x1353 = 987U;
	volatile int16_t x1354 = -1;
	static volatile uint16_t x1356 = 18U;
	uint32_t t28 = 950863U;

    t28 = (((x1353*x1354)^x1355)>>x1356);

    if (t28 != 8191U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1377 = INT16_MAX;
	int64_t x1379 = INT64_MAX;
	int8_t x1380 = 0;
	int64_t t29 = 336762LL;

    t29 = (((x1377*x1378)^x1379)>>x1380);

    if (t29 != 9223372036854382603LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1401 = 8LLU;
	int8_t x1402 = -1;
	uint16_t x1403 = UINT16_MAX;
	int64_t x1404 = 3LL;
	uint64_t t30 = 185036389LLU;

    t30 = (((x1401*x1402)^x1403)>>x1404);

    if (t30 != 2305843009213685760LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1405 = UINT32_MAX;
	int16_t x1406 = INT16_MIN;
	uint8_t x1408 = 54U;
	volatile uint64_t t31 = 6293827756561025266LLU;

    t31 = (((x1405*x1406)^x1407)>>x1408);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1437 = INT8_MIN;
	uint8_t x1439 = 82U;
	volatile uint8_t x1440 = 12U;
	static volatile int32_t t32 = -2;

    t32 = (((x1437*x1438)^x1439)>>x1440);

    if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1481 = -1;
	uint64_t x1482 = UINT64_MAX;
	static int8_t x1483 = INT8_MAX;
	static uint8_t x1484 = 63U;
	uint64_t t33 = 125LLU;

    t33 = (((x1481*x1482)^x1483)>>x1484);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1585 = -1;
	uint16_t x1586 = UINT16_MAX;
	static uint8_t x1588 = 0U;
	volatile int32_t t34 = 12623886;

    t34 = (((x1585*x1586)^x1587)>>x1588);

    if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1665 = -1056516253;
	int16_t x1668 = 15;
	static uint64_t t35 = 594498916970519LLU;

    t35 = (((x1665*x1666)^x1667)>>x1668);

    if (t35 != 562909918522839LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x1690 = 168020316715389349LLU;
	int8_t x1691 = INT8_MIN;
	volatile uint64_t t36 = 16LLU;

    t36 = (((x1689*x1690)^x1691)>>x1692);

    if (t36 != 244117965551638009LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x1705 = INT16_MAX;
	int64_t x1706 = 25005759994LL;
	uint32_t x1707 = 14U;
	uint8_t x1708 = 4U;
	static volatile int64_t t37 = -12716978789769833LL;

    t37 = (((x1705*x1706)^x1707)>>x1708);

    if (t37 != 51210233607712LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1821 = 2812U;
	int8_t x1822 = INT8_MIN;
	uint16_t x1823 = 1992U;
	uint8_t x1824 = 0U;
	volatile uint32_t t38 = 538U;

    t38 = (((x1821*x1822)^x1823)>>x1824);

    if (t38 != 4294608328U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x1825 = UINT64_MAX;
	uint8_t x1826 = UINT8_MAX;
	static int64_t x1827 = INT64_MIN;
	uint8_t x1828 = 54U;

    t39 = (((x1825*x1826)^x1827)>>x1828);

    if (t39 != 511LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x1849 = 7U;
	static uint8_t x1850 = UINT8_MAX;
	int8_t x1851 = 23;
	int32_t t40 = 1;

    t40 = (((x1849*x1850)^x1851)>>x1852);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x1857 = 189U;
	uint64_t x1858 = UINT64_MAX;
	uint64_t x1859 = UINT64_MAX;
	uint8_t x1860 = 44U;
	uint64_t t41 = 1954200959LLU;

    t41 = (((x1857*x1858)^x1859)>>x1860);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x1957 = INT16_MAX;
	uint8_t x1958 = UINT8_MAX;
	uint32_t x1959 = 17231U;
	uint32_t t42 = 3U;

    t42 = (((x1957*x1958)^x1959)>>x1960);

    if (t42 != 4169255U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1997 = INT16_MAX;
	int16_t x1998 = -1;
	static volatile uint64_t x1999 = 443315144565742LLU;
	volatile int8_t x2000 = 0;
	uint64_t t43 = 299LLU;

    t43 = (((x1997*x1998)^x1999)>>x2000);

    if (t43 != 18446300758564971503LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2009 = INT8_MAX;
	static uint32_t x2010 = 614U;
	volatile uint16_t x2011 = 3670U;
	static uint32_t t44 = 1201530397U;

    t44 = (((x2009*x2010)^x2011)>>x2012);

    if (t44 != 9U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2061 = UINT64_MAX;
	static int16_t x2063 = -8;
	volatile uint64_t t45 = 5602676506248LLU;

    t45 = (((x2061*x2062)^x2063)>>x2064);

    if (t45 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2065 = INT32_MAX;
	static volatile int16_t x2067 = INT16_MIN;

    t46 = (((x2065*x2066)^x2067)>>x2068);

    if (t46 != 36028797018963904LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x2193 = INT8_MIN;
	int8_t x2195 = INT8_MIN;
	static uint16_t x2196 = 1U;
	volatile int32_t t47 = 1840;

    t47 = (((x2193*x2194)^x2195)>>x2196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x2205 = 3013U;
	static int16_t x2207 = INT16_MIN;
	uint16_t x2208 = 0U;
	static int32_t t48 = -44;

    t48 = (((x2205*x2206)^x2207)>>x2208);

    if (t48 != 368000) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x2346 = -1;
	static uint64_t x2347 = 1333480454518274LLU;
	static volatile uint64_t t49 = 2619640860102817LLU;

    t49 = (((x2345*x2346)^x2347)>>x2348);

    if (t49 != 546035454724052520LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x2426 = -1;
	uint32_t x2427 = UINT32_MAX;
	int16_t x2428 = 1;
	volatile uint32_t t50 = 43875473U;

    t50 = (((x2425*x2426)^x2427)>>x2428);

    if (t50 != 2452U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x2462 = 37U;
	volatile uint32_t x2463 = 7521073U;
	uint8_t x2464 = 5U;
	volatile uint32_t t51 = 26199U;

    t51 = (((x2461*x2462)^x2463)>>x2464);

    if (t51 != 134019609U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2609 = 25U;
	static volatile int32_t x2610 = 82229;
	volatile uint8_t x2612 = 25U;
	volatile int32_t t52 = 1353;

    t52 = (((x2609*x2610)^x2611)>>x2612);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x2645 = 969016862956LLU;
	int8_t x2647 = INT8_MAX;
	int8_t x2648 = 1;
	volatile uint64_t t53 = 265209LLU;

    t53 = (((x2645*x2646)^x2647)>>x2648);

    if (t53 != 1767106247456194623LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x2697 = INT8_MAX;
	uint64_t x2698 = 1041334241152010LLU;
	int8_t x2699 = -1;
	uint8_t x2700 = 9U;
	uint64_t t54 = 2039790379LLU;

    t54 = (((x2697*x2698)^x2699)>>x2700);

    if (t54 != 35770497314615715LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2713 = -1;
	static uint32_t x2714 = 5648U;
	uint32_t x2715 = 2U;
	uint64_t x2716 = 0LLU;
	volatile uint32_t t55 = 111934238U;

    t55 = (((x2713*x2714)^x2715)>>x2716);

    if (t55 != 4294961650U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x2853 = 45U;
	int32_t x2854 = -262315;
	uint32_t x2855 = 181442U;
	uint32_t t56 = 293140U;

    t56 = (((x2853*x2854)^x2855)>>x2856);

    if (t56 != 31U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x2877 = 233922033U;
	static int32_t x2878 = INT32_MIN;
	volatile int16_t x2879 = -1;
	int8_t x2880 = 2;
	uint32_t t57 = 16638127U;

    t57 = (((x2877*x2878)^x2879)>>x2880);

    if (t57 != 536870911U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x2905 = UINT64_MAX;
	int32_t x2907 = -1;
	uint8_t x2908 = 8U;
	uint64_t t58 = 700883297539LLU;

    t58 = (((x2905*x2906)^x2907)>>x2908);

    if (t58 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x2921 = INT8_MAX;
	int32_t x2922 = -728;
	int32_t x2923 = -81447032;
	int16_t x2924 = 0;
	volatile int32_t t59 = 434686021;

    t59 = (((x2921*x2922)^x2923)>>x2924);

    if (t59 != 81502544) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2957 = INT16_MIN;
	uint8_t x2958 = 57U;
	int8_t x2959 = INT8_MIN;
	volatile int32_t t60 = -4979516;

    t60 = (((x2957*x2958)^x2959)>>x2960);

    if (t60 != 29182) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x3025 = -1;
	int64_t x3026 = -1LL;
	volatile uint64_t x3027 = 859681LLU;
	int16_t x3028 = 1;
	uint64_t t61 = 5426083844106LLU;

    t61 = (((x3025*x3026)^x3027)>>x3028);

    if (t61 != 429840LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x3073 = 443802450U;
	int64_t x3075 = -887LL;
	uint64_t t62 = 166635500513093LLU;

    t62 = (((x3073*x3074)^x3075)>>x3076);

    if (t62 != 2251610261335679LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x3082 = UINT32_MAX;
	int8_t x3084 = 14;
	volatile uint64_t t63 = 32541588759LLU;

    t63 = (((x3081*x3082)^x3083)>>x3084);

    if (t63 != 531383761LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3177 = 124U;
	int8_t x3178 = INT8_MIN;
	volatile int64_t x3179 = -1LL;
	uint8_t x3180 = 1U;
	volatile int64_t t64 = -26720278LL;

    t64 = (((x3177*x3178)^x3179)>>x3180);

    if (t64 != 7935LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x3237 = -98287;
	int16_t x3239 = INT16_MIN;
	volatile uint8_t x3240 = 3U;

    t65 = (((x3237*x3238)^x3239)>>x3240);

    if (t65 != 1756210078784696580LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x3257 = 5U;
	uint64_t x3258 = UINT64_MAX;
	static int16_t x3259 = INT16_MIN;
	static uint16_t x3260 = 0U;
	static volatile uint64_t t66 = 724786LLU;

    t66 = (((x3257*x3258)^x3259)>>x3260);

    if (t66 != 32763LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x3277 = 46206507181LL;
	static int8_t x3278 = INT8_MIN;
	int16_t x3279 = -1;
	uint32_t x3280 = 15U;
	int64_t t67 = -102045549984796635LL;

    t67 = (((x3277*x3278)^x3279)>>x3280);

    if (t67 != 180494168LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x3298 = 640700950U;
	int32_t x3299 = INT32_MIN;
	uint16_t x3300 = 8U;
	static volatile uint32_t t68 = 3U;

    t68 = (((x3297*x3298)^x3299)>>x3300);

    if (t68 != 5698816U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3306 = -1;
	int8_t x3307 = 35;
	static int32_t x3308 = 5;
	static volatile int32_t t69 = -1;

    t69 = (((x3305*x3306)^x3307)>>x3308);

    if (t69 != 1025) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x3345 = UINT64_MAX;
	volatile int64_t x3346 = -1LL;
	static volatile uint64_t t70 = 7947600775LLU;

    t70 = (((x3345*x3346)^x3347)>>x3348);

    if (t70 != 18014398509481984LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x3405 = -1;
	volatile int32_t x3406 = -932359822;
	volatile uint64_t x3407 = 216019153643180LLU;
	uint64_t t71 = 351194216LLU;

    t71 = (((x3405*x3406)^x3407)>>x3408);

    if (t71 != 1571LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x3437 = UINT64_MAX;
	volatile int16_t x3438 = INT16_MAX;
	uint64_t x3440 = 13LLU;
	uint64_t t72 = 89LLU;

    t72 = (((x3437*x3438)^x3439)>>x3440);

    if (t72 != 2251735498276672LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x3521 = -10529;
	volatile uint64_t x3522 = 160665574783328934LLU;
	volatile int64_t x3523 = INT64_MIN;
	uint32_t x3524 = 3U;
	volatile uint64_t t73 = 520357504243266613LLU;

    t73 = (((x3521*x3522)^x3523)>>x3524);

    if (t73 != 1834498740557897299LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x3678 = UINT64_MAX;
	static uint64_t x3679 = 47642890LLU;
	static volatile int16_t x3680 = 1;
	static uint64_t t74 = 16LLU;

    t74 = (((x3677*x3678)^x3679)>>x3680);

    if (t74 != 23821445LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x4005 = 1;
	int16_t x4006 = INT16_MAX;
	uint32_t x4007 = 518201U;
	uint16_t x4008 = 1U;
	static volatile uint32_t t75 = 69U;

    t75 = (((x4005*x4006)^x4007)>>x4008);

    if (t75 != 248803U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x4065 = 3895148LLU;
	int8_t x4066 = 0;
	volatile int8_t x4067 = 1;
	static volatile uint8_t x4068 = 0U;
	volatile uint64_t t76 = 43069740LLU;

    t76 = (((x4065*x4066)^x4067)>>x4068);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x4097 = 24;
	uint32_t x4098 = UINT32_MAX;
	volatile int16_t x4099 = 0;
	uint8_t x4100 = 5U;
	static uint32_t t77 = 3U;

    t77 = (((x4097*x4098)^x4099)>>x4100);

    if (t77 != 134217727U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x4121 = 1582U;
	uint8_t x4122 = 66U;
	volatile int8_t x4123 = 4;

    t78 = (((x4121*x4122)^x4123)>>x4124);

    if (t78 != 104408) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x4169 = -381;
	static int8_t x4170 = INT8_MIN;
	static uint32_t x4171 = 0U;
	uint64_t x4172 = 4LLU;
	volatile uint32_t t79 = 156U;

    t79 = (((x4169*x4170)^x4171)>>x4172);

    if (t79 != 3048U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x4173 = UINT64_MAX;
	static uint8_t x4174 = 87U;
	int16_t x4175 = INT16_MIN;
	int8_t x4176 = 12;

    t80 = (((x4173*x4174)^x4175)>>x4176);

    if (t80 != 7LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x4187 = UINT32_MAX;
	static uint16_t x4188 = 2U;
	uint64_t t81 = 721855LLU;

    t81 = (((x4185*x4186)^x4187)>>x4188);

    if (t81 != 4611684328442451067LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x4229 = 250200153432LLU;
	volatile int8_t x4231 = -4;
	uint64_t t82 = 426LLU;

    t82 = (((x4229*x4230)^x4231)>>x4232);

    if (t82 != 2305839037286258218LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x4257 = UINT64_MAX;
	volatile int32_t x4258 = INT32_MIN;
	static int16_t x4259 = INT16_MIN;
	int32_t x4260 = 32;
	uint64_t t83 = 15043LLU;

    t83 = (((x4257*x4258)^x4259)>>x4260);

    if (t83 != 4294967295LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x4461 = UINT32_MAX;
	volatile uint32_t x4462 = 710895540U;
	uint32_t t84 = 5U;

    t84 = (((x4461*x4462)^x4463)>>x4464);

    if (t84 != 5553871U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x4490 = 242586242LLU;
	int64_t x4491 = -1LL;
	static uint8_t x4492 = 20U;
	volatile uint64_t t85 = 21343761LLU;

    t85 = (((x4489*x4490)^x4491)>>x4492);

    if (t85 != 231LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x4565 = 8LLU;
	int8_t x4566 = 1;
	uint32_t x4568 = 0U;
	static uint64_t t86 = 2668401021379383684LLU;

    t86 = (((x4565*x4566)^x4567)>>x4568);

    if (t86 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x4581 = 10;
	int32_t x4582 = 1022;
	int8_t x4584 = 13;
	int32_t t87 = 628;

    t87 = (((x4581*x4582)^x4583)>>x4584);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4621 = 0;
	int64_t x4622 = 289045804683719LL;
	uint16_t x4623 = UINT16_MAX;
	volatile int64_t t88 = -7598LL;

    t88 = (((x4621*x4622)^x4623)>>x4624);

    if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x4689 = 0LLU;
	int16_t x4690 = INT16_MIN;

    t89 = (((x4689*x4690)^x4691)>>x4692);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x4797 = 1;
	uint32_t x4798 = UINT32_MAX;

    t90 = (((x4797*x4798)^x4799)>>x4800);

    if (t90 != 4294901760U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x5047 = 9621;
	uint64_t x5048 = 18LLU;
	volatile uint64_t t91 = 3101133938LLU;

    t91 = (((x5045*x5046)^x5047)>>x5048);

    if (t91 != 69903982717829LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x5049 = 486LLU;
	int32_t x5050 = 27277;
	uint8_t x5051 = UINT8_MAX;
	int8_t x5052 = 27;
	static volatile uint64_t t92 = 0LLU;

    t92 = (((x5049*x5050)^x5051)>>x5052);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x5081 = -1LL;
	volatile int16_t x5082 = INT16_MIN;
	int8_t x5084 = 1;

    t93 = (((x5081*x5082)^x5083)>>x5084);

    if (t93 != 16386LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x5125 = 136585210U;
	static int32_t x5126 = -1;
	int32_t x5127 = 151;
	uint8_t x5128 = 4U;
	uint32_t t94 = 1053122U;

    t94 = (((x5125*x5126)^x5127)>>x5128);

    if (t94 != 259898889U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x5133 = UINT16_MAX;
	static uint32_t x5134 = UINT32_MAX;
	uint64_t x5135 = 251061216239LLU;
	uint64_t x5136 = 5LLU;

    t95 = (((x5133*x5134)^x5135)>>x5136);

    if (t95 != 7857809695LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x5185 = INT8_MAX;
	volatile int8_t x5186 = -1;
	int32_t x5187 = -1;

    t96 = (((x5185*x5186)^x5187)>>x5188);

    if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x5213 = INT32_MAX;
	volatile uint32_t x5214 = 14481U;
	int8_t x5215 = INT8_MIN;
	int8_t x5216 = 2;
	volatile uint32_t t97 = 29U;

    t97 = (((x5213*x5214)^x5215)>>x5216);

    if (t97 != 536874555U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x5305 = -173784008LL;
	int8_t x5306 = -1;
	uint16_t x5307 = UINT16_MAX;
	uint8_t x5308 = 15U;
	int64_t t98 = 0LL;

    t98 = (((x5305*x5306)^x5307)>>x5308);

    if (t98 != 5302LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x5321 = -1;
	int16_t x5322 = -1;
	int8_t x5323 = INT8_MAX;
	static int8_t x5324 = 3;
	static int32_t t99 = 0;

    t99 = (((x5321*x5322)^x5323)>>x5324);

    if (t99 != 15) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x5353 = INT8_MIN;
	uint64_t t100 = 962604LLU;

    t100 = (((x5353*x5354)^x5355)>>x5356);

    if (t100 != 67108863LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x5357 = 1;
	uint32_t x5358 = 1108U;
	static uint8_t x5360 = 26U;
	uint32_t t101 = 1U;

    t101 = (((x5357*x5358)^x5359)>>x5360);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x5361 = 22947U;
	int8_t x5362 = INT8_MIN;
	int16_t x5363 = -1;
	volatile int32_t t102 = 1;

    t102 = (((x5361*x5362)^x5363)>>x5364);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x5373 = INT8_MIN;
	static int64_t x5375 = INT64_MIN;
	static volatile uint16_t x5376 = 2U;
	static volatile uint64_t t103 = 46042LLU;

    t103 = (((x5373*x5374)^x5375)>>x5376);

    if (t103 != 2305843006779166656LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5597 = -1;
	uint64_t x5598 = 7081LLU;
	int32_t x5599 = -1;
	static uint8_t x5600 = 54U;
	uint64_t t104 = 903670578318438332LLU;

    t104 = (((x5597*x5598)^x5599)>>x5600);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x5605 = UINT64_MAX;
	uint16_t x5606 = 2476U;
	volatile int8_t x5608 = 1;
	volatile uint64_t t105 = 6491413868LLU;

    t105 = (((x5605*x5606)^x5607)>>x5608);

    if (t105 != 1237LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x5613 = 53;
	static volatile uint16_t x5614 = 53U;
	int16_t x5615 = 1;
	int16_t x5616 = 11;
	int32_t t106 = 168728;

    t106 = (((x5613*x5614)^x5615)>>x5616);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x5709 = 38U;
	static int32_t x5710 = -82166252;
	static volatile int8_t x5712 = 2;
	volatile uint64_t t107 = 596LLU;

    t107 = (((x5709*x5710)^x5711)>>x5712);

    if (t107 != 57166424LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x5717 = INT16_MIN;
	int64_t x5718 = -1LL;
	volatile uint8_t x5719 = UINT8_MAX;
	static int16_t x5720 = 0;
	static volatile int64_t t108 = 305420279LL;

    t108 = (((x5717*x5718)^x5719)>>x5720);

    if (t108 != 33023LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x5806 = -20;
	static uint16_t x5807 = 3661U;
	volatile int32_t t109 = -4;

    t109 = (((x5805*x5806)^x5807)>>x5808);

    if (t109 != 2574) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x5829 = -5LL;
	int8_t x5830 = -7;
	int8_t x5831 = 11;
	int64_t t110 = 50128770494LL;

    t110 = (((x5829*x5830)^x5831)>>x5832);

    if (t110 != 10LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x5841 = -1LL;
	static uint8_t x5842 = UINT8_MAX;
	uint16_t x5844 = 14U;
	int64_t t111 = 262154976602267805LL;

    t111 = (((x5841*x5842)^x5843)>>x5844);

    if (t111 != 562949953421311LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x5885 = 1726566447459212LL;
	int16_t x5886 = -1;
	int32_t x5887 = -1;
	volatile int16_t x5888 = 0;
	static volatile int64_t t112 = 8871677500951573LL;

    t112 = (((x5885*x5886)^x5887)>>x5888);

    if (t112 != 1726566447459211LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x5933 = 4;
	uint32_t x5935 = 1290U;
	uint8_t x5936 = 0U;
	static volatile uint32_t t113 = 3197123U;

    t113 = (((x5933*x5934)^x5935)>>x5936);

    if (t113 != 1257454U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x6073 = -1;
	volatile uint8_t x6074 = UINT8_MAX;
	uint64_t x6075 = 43795LLU;
	static uint8_t x6076 = 5U;
	volatile uint64_t t114 = 20555357007LLU;

    t114 = (((x6073*x6074)^x6075)>>x6076);

    if (t114 != 576460752303422112LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x6278 = INT16_MIN;
	volatile int16_t x6279 = -1;
	int64_t x6280 = 1LL;

    t115 = (((x6277*x6278)^x6279)>>x6280);

    if (t115 != 9223372036854759423LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x6309 = -1;
	static int32_t x6310 = INT32_MAX;
	int8_t x6311 = -8;
	static int8_t x6312 = 1;
	volatile int32_t t116 = -1;

    t116 = (((x6309*x6310)^x6311)>>x6312);

    if (t116 != 1073741820) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x6322 = INT32_MAX;
	volatile uint8_t x6324 = 8U;
	uint64_t t117 = 35252212659971373LLU;

    t117 = (((x6321*x6322)^x6323)>>x6324);

    if (t117 != 8387759LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x6335 = UINT64_MAX;
	int16_t x6336 = 0;
	static volatile uint64_t t118 = 5167226LLU;

    t118 = (((x6333*x6334)^x6335)>>x6336);

    if (t118 != 127LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x6349 = 741;
	volatile int8_t x6351 = INT8_MIN;
	int32_t x6352 = 14;
	volatile int32_t t119 = 6408;

    t119 = (((x6349*x6350)^x6351)>>x6352);

    if (t119 != 1481) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x6381 = -1;
	int16_t x6383 = 1;
	int8_t x6384 = 0;
	volatile int32_t t120 = 15;

    t120 = (((x6381*x6382)^x6383)>>x6384);

    if (t120 != 129) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x6489 = INT16_MIN;
	static volatile int32_t x6490 = -2;
	static uint16_t x6491 = 43U;
	static volatile uint8_t x6492 = 15U;
	int32_t t121 = -2341;

    t121 = (((x6489*x6490)^x6491)>>x6492);

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x6538 = -1;
	int16_t x6539 = 62;
	uint8_t x6540 = 8U;
	static volatile uint32_t t122 = 20U;

    t122 = (((x6537*x6538)^x6539)>>x6540);

    if (t122 != 16777150U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x6653 = INT32_MAX;
	static uint16_t x6656 = 21U;
	volatile uint32_t t123 = 1U;

    t123 = (((x6653*x6654)^x6655)>>x6656);

    if (t123 != 1024U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x6721 = 37526943U;
	int64_t x6722 = -32027LL;
	int8_t x6723 = INT8_MIN;
	volatile int8_t x6724 = 0;
	static int64_t t124 = -23493055LL;

    t124 = (((x6721*x6722)^x6723)>>x6724);

    if (t124 != 1201875403451LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x6749 = 9;
	int8_t x6750 = -3;
	uint32_t x6751 = 121376143U;
	static uint16_t x6752 = 0U;

    t125 = (((x6749*x6750)^x6751)>>x6752);

    if (t125 != 4173591146U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x6777 = UINT64_MAX;
	uint16_t x6779 = UINT16_MAX;
	uint8_t x6780 = 1U;

    t126 = (((x6777*x6778)^x6779)>>x6780);

    if (t126 != 8914308458071494050LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x6929 = INT32_MIN;
	uint32_t x6930 = 114U;
	static uint64_t x6931 = 436LLU;
	uint64_t t127 = 114965764187LLU;

    t127 = (((x6929*x6930)^x6931)>>x6932);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x6993 = 8352106564LL;
	uint8_t x6994 = 11U;
	int8_t x6995 = INT8_MAX;
	volatile int64_t t128 = -94056147971251LL;

    t128 = (((x6993*x6994)^x6995)>>x6996);

    if (t128 != 45936586057LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x7025 = -1;
	int64_t x7026 = 2LL;
	int8_t x7028 = 39;
	int64_t t129 = 502209LL;

    t129 = (((x7025*x7026)^x7027)>>x7028);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x7098 = 96U;
	uint8_t x7099 = 3U;
	uint64_t t130 = 692079LLU;

    t130 = (((x7097*x7098)^x7099)>>x7100);

    if (t130 != 6768994735097723601LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x7109 = UINT32_MAX;
	uint8_t x7110 = UINT8_MAX;
	uint64_t x7111 = 180487LLU;
	uint16_t x7112 = 0U;
	volatile uint64_t t131 = 17678417512317661LLU;

    t131 = (((x7109*x7110)^x7111)>>x7112);

    if (t131 != 4294786566LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x7153 = UINT32_MAX;
	int16_t x7154 = 0;
	int32_t x7155 = INT32_MIN;
	int64_t x7156 = 1LL;

    t132 = (((x7153*x7154)^x7155)>>x7156);

    if (t132 != 1073741824U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x7197 = 1;
	uint32_t x7198 = 1495390327U;
	int8_t x7199 = INT8_MIN;
	static int8_t x7200 = 4;
	volatile uint32_t t133 = 1532U;

    t133 = (((x7197*x7198)^x7199)>>x7200);

    if (t133 != 174973567U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x7233 = INT8_MIN;
	int32_t x7235 = INT32_MIN;
	static int32_t x7236 = 27;
	volatile int32_t t134 = 0;

    t134 = (((x7233*x7234)^x7235)>>x7236);

    if (t134 != 15) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x7289 = INT8_MAX;
	volatile uint8_t x7292 = 0U;

    t135 = (((x7289*x7290)^x7291)>>x7292);

    if (t135 != 126LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x7314 = 0U;
	volatile uint64_t x7315 = 3291LLU;
	volatile uint64_t t136 = 164643LLU;

    t136 = (((x7313*x7314)^x7315)>>x7316);

    if (t136 != 411LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x7398 = 4;
	int32_t x7399 = INT32_MIN;
	uint8_t x7400 = 15U;
	uint64_t t137 = 10369LLU;

    t137 = (((x7397*x7398)^x7399)>>x7400);

    if (t137 != 561920863766572LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x7421 = -1;
	static volatile int64_t x7422 = INT64_MAX;
	volatile int16_t x7423 = -1;
	volatile int64_t t138 = -940774LL;

    t138 = (((x7421*x7422)^x7423)>>x7424);

    if (t138 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x7457 = -21;
	int16_t x7458 = INT16_MIN;
	static uint16_t x7459 = 9U;
	int8_t x7460 = 10;
	int32_t t139 = -654581;

    t139 = (((x7457*x7458)^x7459)>>x7460);

    if (t139 != 672) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x7677 = 1059;
	int8_t x7679 = INT8_MAX;
	uint32_t x7680 = 3U;
	int32_t t140 = -705;

    t140 = (((x7677*x7678)^x7679)>>x7680);

    if (t140 != 654852) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x7729 = INT32_MIN;
	static volatile int8_t x7730 = 0;
	volatile int64_t x7731 = INT64_MAX;
	static volatile int64_t t141 = 3950640243324605LL;

    t141 = (((x7729*x7730)^x7731)>>x7732);

    if (t141 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x7762 = 118LLU;
	uint64_t x7763 = UINT64_MAX;
	static volatile int64_t x7764 = 1LL;
	volatile uint64_t t142 = 119LLU;

    t142 = (((x7761*x7762)^x7763)>>x7764);

    if (t142 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x7805 = UINT64_MAX;
	int16_t x7806 = INT16_MIN;
	int8_t x7807 = INT8_MAX;
	volatile uint8_t x7808 = 63U;
	volatile uint64_t t143 = 6913171LLU;

    t143 = (((x7805*x7806)^x7807)>>x7808);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x7845 = -3346;
	uint64_t x7846 = UINT64_MAX;
	volatile uint8_t x7847 = 1U;
	static volatile uint64_t t144 = 63566773440055LLU;

    t144 = (((x7845*x7846)^x7847)>>x7848);

    if (t144 != 836LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x8058 = 56U;
	static uint64_t x8059 = 446LLU;
	uint8_t x8060 = 6U;
	static volatile uint64_t t145 = 893887110884549LLU;

    t145 = (((x8057*x8058)^x8059)>>x8060);

    if (t145 != 48LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x8365 = 3U;
	volatile int8_t x8366 = INT8_MAX;
	volatile uint8_t x8368 = 3U;
	volatile int32_t t146 = -590;

    t146 = (((x8365*x8366)^x8367)>>x8368);

    if (t146 != 988) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x8413 = UINT16_MAX;
	int8_t x8414 = INT8_MAX;
	static uint16_t x8415 = UINT16_MAX;
	uint8_t x8416 = 9U;
	int32_t t147 = -624;

    t147 = (((x8413*x8414)^x8415)>>x8416);

    if (t147 != 16128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x8421 = 254;
	static int32_t x8423 = INT32_MIN;
	uint8_t x8424 = 5U;
	static volatile uint32_t t148 = 3077U;

    t148 = (((x8421*x8422)^x8423)>>x8424);

    if (t148 != 68051577U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x8425 = 50940892LL;
	volatile uint16_t x8427 = 2U;
	volatile uint8_t x8428 = 1U;
	int64_t t149 = -1023997517738149630LL;

    t149 = (((x8425*x8426)^x8427)>>x8428);

    if (t149 != 109394732559063571LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x8565 = -1;
	uint64_t x8566 = UINT64_MAX;
	static volatile uint16_t x8567 = UINT16_MAX;
	volatile uint64_t t150 = 921236185408363702LLU;

    t150 = (((x8565*x8566)^x8567)>>x8568);

    if (t150 != 511LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x8617 = INT8_MIN;
	uint64_t x8618 = UINT64_MAX;
	volatile int8_t x8619 = -1;
	volatile uint8_t x8620 = 39U;
	volatile uint64_t t151 = 328975777154LLU;

    t151 = (((x8617*x8618)^x8619)>>x8620);

    if (t151 != 33554431LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x8625 = 396418105623LL;
	int16_t x8626 = INT16_MIN;
	int8_t x8628 = 0;
	static int64_t t152 = 241073641810175LL;

    t152 = (((x8625*x8626)^x8627)>>x8628);

    if (t152 != 9210382208369721344LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x8650 = UINT8_MAX;
	static uint64_t x8651 = UINT64_MAX;
	int32_t x8652 = 9;
	uint64_t t153 = 325001967478035LLU;

    t153 = (((x8649*x8650)^x8651)>>x8652);

    if (t153 != 1307LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x8685 = -1;
	int64_t x8686 = INT64_MAX;
	int64_t t154 = -25694101482627300LL;

    t154 = (((x8685*x8686)^x8687)>>x8688);

    if (t154 != 8388607LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x8769 = INT64_MAX;
	int32_t x8770 = -1;
	int32_t x8771 = -1;
	int8_t x8772 = 0;

    t155 = (((x8769*x8770)^x8771)>>x8772);

    if (t155 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x8802 = 61U;
	int16_t x8803 = -1;
	int16_t x8804 = 18;
	static volatile uint32_t t156 = 36U;

    t156 = (((x8801*x8802)^x8803)>>x8804);

    if (t156 != 16383U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x8825 = INT16_MAX;
	volatile int16_t x8826 = INT16_MAX;
	uint32_t x8827 = UINT32_MAX;

    t157 = (((x8825*x8826)^x8827)>>x8828);

    if (t157 != 3221291006U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x8921 = 32874U;
	static uint64_t x8923 = 128LLU;
	uint64_t t158 = 1LLU;

    t158 = (((x8921*x8922)^x8923)>>x8924);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x8929 = 276;
	static uint64_t x8930 = 3842773376745244568LLU;
	int32_t x8931 = 235709;
	volatile uint64_t t159 = 545164719LLU;

    t159 = (((x8929*x8930)^x8931)>>x8932);

    if (t159 != 2078431LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x9033 = INT8_MIN;
	uint8_t x9034 = 1U;
	volatile uint32_t x9035 = 2759407U;
	static uint16_t x9036 = 0U;
	static volatile uint32_t t160 = 14U;

    t160 = (((x9033*x9034)^x9035)>>x9036);

    if (t160 != 4292207983U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x9081 = 797620U;
	static volatile int8_t x9082 = 28;
	int32_t x9083 = -1;
	int8_t x9084 = 1;
	uint32_t t161 = 3U;

    t161 = (((x9081*x9082)^x9083)>>x9084);

    if (t161 != 2136316967U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x9089 = 149U;
	static volatile uint32_t x9091 = UINT32_MAX;
	static volatile uint16_t x9092 = 7U;
	volatile uint32_t t162 = 232021U;

    t162 = (((x9089*x9090)^x9091)>>x9092);

    if (t162 != 33516289U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x9127 = INT32_MIN;
	int8_t x9128 = 0;
	volatile uint32_t t163 = 2148719U;

    t163 = (((x9125*x9126)^x9127)>>x9128);

    if (t163 != 2147476122U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x9129 = 12544178994983816LLU;
	static int8_t x9131 = -3;
	uint64_t t164 = 5713725183LLU;

    t164 = (((x9129*x9130)^x9131)>>x9132);

    if (t164 != 731823515908440063LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x9149 = INT8_MIN;
	uint8_t x9150 = UINT8_MAX;
	uint64_t x9151 = 464745408661149LLU;
	uint16_t x9152 = 5U;
	volatile uint64_t t165 = 8LLU;

    t165 = (((x9149*x9150)^x9151)>>x9152);

    if (t165 != 576446229009401904LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x9177 = INT16_MIN;
	int8_t x9179 = -1;
	int32_t x9180 = 4;

    t166 = (((x9177*x9178)^x9179)>>x9180);

    if (t166 != 1060863) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x9197 = INT16_MIN;
	int16_t x9198 = 438;
	uint32_t x9199 = UINT32_MAX;
	int8_t x9200 = 14;
	uint32_t t167 = 55323331U;

    t167 = (((x9197*x9198)^x9199)>>x9200);

    if (t167 != 875U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x9356 = 4;
	uint64_t t168 = 0LLU;

    t168 = (((x9353*x9354)^x9355)>>x9356);

    if (t168 != 336272705538138112LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x9433 = INT16_MIN;
	uint16_t x9434 = 208U;
	static uint32_t x9435 = 9818U;
	int32_t x9436 = 17;
	volatile uint32_t t169 = 62U;

    t169 = (((x9433*x9434)^x9435)>>x9436);

    if (t169 != 32716U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x9505 = INT8_MIN;
	volatile int16_t x9506 = 0;
	int16_t x9507 = INT16_MAX;
	int8_t x9508 = 7;
	static int32_t t170 = 125614;

    t170 = (((x9505*x9506)^x9507)>>x9508);

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x9549 = -1;
	uint64_t x9550 = 12806346236150LLU;
	int16_t x9551 = -1;
	volatile int8_t x9552 = 8;
	static volatile uint64_t t171 = 1444LLU;

    t171 = (((x9549*x9550)^x9551)>>x9552);

    if (t171 != 50024789984LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x9589 = INT32_MIN;
	static uint64_t x9590 = 951LLU;
	volatile int8_t x9591 = -58;
	int8_t x9592 = 0;
	uint64_t t172 = 45355LLU;

    t172 = (((x9589*x9590)^x9591)>>x9592);

    if (t172 != 2042256949190LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x9693 = 3921LL;
	int16_t x9694 = INT16_MIN;
	int8_t x9695 = INT8_MIN;
	int64_t t173 = -1LL;

    t173 = (((x9693*x9694)^x9695)>>x9696);

    if (t173 != 7841LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x9781 = INT32_MIN;
	uint64_t x9782 = 107671825129499LLU;
	int16_t x9783 = INT16_MAX;
	uint8_t x9784 = 39U;
	uint64_t t174 = 1856380213818LLU;

    t174 = (((x9781*x9782)^x9783)>>x9784);

    if (t174 != 11738207LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x9785 = -1;
	static int64_t x9786 = -1LL;
	uint8_t x9787 = UINT8_MAX;
	int32_t x9788 = 7;
	int64_t t175 = 45171586342106189LL;

    t175 = (((x9785*x9786)^x9787)>>x9788);

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x9806 = 323U;
	uint32_t x9807 = UINT32_MAX;
	int16_t x9808 = 3;
	static uint32_t t176 = 47276822U;

    t176 = (((x9805*x9806)^x9807)>>x9808);

    if (t176 != 1323007U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x9853 = 2U;
	int8_t x9854 = INT8_MIN;
	uint8_t x9855 = 68U;
	volatile uint8_t x9856 = 1U;
	volatile uint32_t t177 = 7396U;

    t177 = (((x9853*x9854)^x9855)>>x9856);

    if (t177 != 2147483554U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x9876 = 2;
	uint32_t t178 = 3723494U;

    t178 = (((x9873*x9874)^x9875)>>x9876);

    if (t178 != 1065192222U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x9933 = INT8_MIN;
	uint32_t x9934 = 199699386U;
	int16_t x9935 = -1;
	uint8_t x9936 = 12U;
	uint32_t t179 = 2618U;

    t179 = (((x9933*x9934)^x9935)>>x9936);

    if (t179 != 997725U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x10105 = INT16_MIN;
	int64_t x10106 = -1799660759261LL;
	static uint8_t x10107 = 4U;
	uint64_t x10108 = 16LLU;

    t180 = (((x10105*x10106)^x10107)>>x10108);

    if (t180 != 899830379630LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x10117 = 0LL;
	static uint64_t x10118 = UINT64_MAX;
	volatile uint16_t x10119 = 4100U;

    t181 = (((x10117*x10118)^x10119)>>x10120);

    if (t181 != 2050LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x10130 = 55U;
	uint32_t x10131 = 71516U;
	static volatile uint32_t t182 = 1019843126U;

    t182 = (((x10129*x10130)^x10131)>>x10132);

    if (t182 != 69609U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x10161 = -1;
	volatile uint32_t x10162 = 10164U;
	uint8_t x10164 = 6U;
	uint32_t t183 = 808U;

    t183 = (((x10161*x10162)^x10163)>>x10164);

    if (t183 != 158U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x10165 = 1807LL;
	int64_t t184 = -421354LL;

    t184 = (((x10165*x10166)^x10167)>>x10168);

    if (t184 != 112LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x10169 = 2;
	int8_t x10170 = INT8_MIN;
	static volatile uint32_t x10171 = 22405U;
	uint8_t x10172 = 14U;

    t185 = (((x10169*x10170)^x10171)>>x10172);

    if (t185 != 262142U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x10181 = 69U;
	int32_t x10182 = -1;
	uint64_t x10183 = 74937223686331499LLU;
	uint64_t x10184 = 8LLU;
	volatile uint64_t t186 = 1676LLU;

    t186 = (((x10181*x10182)^x10183)>>x10184);

    if (t186 != 71764870507903203LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10209 = -6998;
	uint32_t x10210 = 1567098U;
	int16_t x10211 = INT16_MIN;
	uint16_t x10212 = 7U;
	static volatile uint32_t t187 = 6696U;

    t187 = (((x10209*x10210)^x10211)>>x10212);

    if (t187 != 18567270U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x10281 = -2;
	static int8_t x10282 = INT8_MAX;
	int32_t x10283 = -1;
	int32_t t188 = 5517;

    t188 = (((x10281*x10282)^x10283)>>x10284);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x10294 = INT16_MIN;
	static int32_t x10295 = -1;
	int16_t x10296 = 4;
	volatile int32_t t189 = -2496221;

    t189 = (((x10293*x10294)^x10295)>>x10296);

    if (t189 != 8878079) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x10305 = 1041403740748518LLU;
	uint16_t x10306 = UINT16_MAX;
	uint16_t x10307 = 2953U;
	uint16_t x10308 = 5U;
	uint64_t t190 = 185730449340LLU;

    t190 = (((x10305*x10306)^x10307)>>x10308);

    if (t190 != 403380060275796084LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x10337 = INT32_MIN;
	int64_t x10338 = -1LL;
	uint8_t x10339 = 7U;
	uint8_t x10340 = 14U;
	int64_t t191 = -7544LL;

    t191 = (((x10337*x10338)^x10339)>>x10340);

    if (t191 != 131072LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x10345 = 932290U;
	uint16_t x10346 = UINT16_MAX;
	static int16_t x10347 = INT16_MIN;
	static uint32_t t192 = 58585U;

    t192 = (((x10345*x10346)^x10347)>>x10348);

    if (t192 != 831721871U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x10353 = UINT64_MAX;
	uint16_t x10354 = 243U;
	static int16_t x10355 = -3;
	uint64_t x10356 = 0LLU;
	uint64_t t193 = 43940LLU;

    t193 = (((x10353*x10354)^x10355)>>x10356);

    if (t193 != 240LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x10365 = -1;
	int16_t x10367 = INT16_MIN;
	static int32_t x10368 = 3;
	volatile int32_t t194 = -6;

    t194 = (((x10365*x10366)^x10367)>>x10368);

    if (t194 != 4092) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x10441 = UINT64_MAX;
	volatile uint64_t x10442 = UINT64_MAX;
	static uint64_t x10443 = 755627327LLU;
	int8_t x10444 = 21;
	uint64_t t195 = 1310LLU;

    t195 = (((x10441*x10442)^x10443)>>x10444);

    if (t195 != 360LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x10457 = -1LL;
	int64_t x10458 = 79LL;
	volatile uint32_t x10460 = 26U;

    t196 = (((x10457*x10458)^x10459)>>x10460);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x10461 = -1;
	int8_t x10462 = 0;
	static volatile int8_t x10464 = 4;
	int32_t t197 = 79360004;

    t197 = (((x10461*x10462)^x10463)>>x10464);

    if (t197 != 33) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x10546 = -117067290022LL;
	int32_t x10547 = -7441423;
	volatile int64_t t198 = 92638601949443366LL;

    t198 = (((x10545*x10546)^x10547)>>x10548);

    if (t198 != 58533104853LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x10549 = 1;
	uint32_t x10551 = 42926U;
	uint64_t x10552 = 7LLU;
	uint32_t t199 = 31581157U;

    t199 = (((x10549*x10550)^x10551)>>x10552);

    if (t199 != 335U) { NG(); } else { ; }
	
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

