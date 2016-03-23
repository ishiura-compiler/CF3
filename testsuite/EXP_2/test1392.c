
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

static uint64_t x143 = 15601957557016041LLU;
int16_t x314 = INT16_MIN;
int32_t x318 = INT32_MIN;
uint32_t x389 = UINT32_MAX;
int16_t x391 = 5998;
int8_t x418 = -1;
int64_t x581 = 1796628LL;
int64_t x586 = INT64_MAX;
int32_t x587 = -23262;
int32_t x926 = INT32_MIN;
static int16_t x928 = 5;
static uint16_t x1005 = 70U;
volatile uint64_t x1011 = UINT64_MAX;
static uint8_t x1016 = 3U;
int64_t t14 = -277328770852LL;
int16_t x1141 = 1358;
int64_t x1234 = -790184201656128LL;
uint8_t x1257 = 0U;
uint32_t x1258 = 1139U;
volatile uint16_t x1260 = 4U;
int64_t x1319 = 106419584LL;
uint32_t x1457 = 85373801U;
volatile int8_t x1458 = 7;
volatile uint16_t x1460 = 16U;
volatile uint16_t x1463 = 9694U;
volatile uint64_t t22 = 108519633LLU;
int32_t x1622 = INT32_MAX;
static int16_t x1670 = INT16_MIN;
int16_t x1672 = 3;
uint32_t x1759 = UINT32_MAX;
static int16_t x1760 = 13;
int8_t x1801 = 1;
int16_t x1924 = 62;
volatile int16_t x2031 = INT16_MIN;
uint64_t t31 = 32016499755LLU;
uint8_t x2159 = UINT8_MAX;
volatile int32_t t34 = -6004597;
uint8_t x2181 = 10U;
uint8_t x2248 = 49U;
uint64_t t36 = 1008785201489566985LLU;
uint8_t x2262 = UINT8_MAX;
int32_t t37 = 53;
static uint16_t x2353 = 0U;
static volatile uint32_t x2355 = UINT32_MAX;
uint16_t x2357 = 24U;
int64_t x2370 = -1LL;
int16_t x2371 = -9642;
static int32_t x2377 = 6408;
int64_t x2378 = INT64_MAX;
int32_t t41 = -1844;
uint64_t x2433 = 0LLU;
int64_t x2435 = -1LL;
uint8_t x2458 = 12U;
static int16_t x2549 = INT16_MAX;
volatile int32_t t44 = 80069912;
uint64_t x2769 = 19808702LLU;
static uint32_t x2770 = 0U;
int8_t x2771 = 1;
uint16_t x2829 = 1092U;
int8_t x2950 = -1;
int16_t x2986 = -1;
volatile uint8_t x3040 = 3U;
int32_t t57 = 1772;
volatile int64_t x3162 = -1LL;
uint16_t x3163 = UINT16_MAX;
int8_t x3188 = 30;
volatile int32_t t60 = 24;
uint8_t x3288 = 21U;
static int32_t t62 = 165952;
static int64_t x3310 = INT64_MAX;
int8_t x3311 = INT8_MIN;
volatile uint16_t x3312 = 0U;
volatile uint32_t t63 = 886U;
static uint32_t x3464 = 5U;
int8_t x3626 = INT8_MAX;
int8_t x3692 = 1;
uint32_t x3783 = 29982781U;
static uint8_t x3784 = 3U;
int32_t t70 = 118127989;
uint64_t x3813 = UINT64_MAX;
int64_t x3815 = INT64_MIN;
uint8_t x3973 = 20U;
uint32_t x4185 = 119U;
static volatile uint8_t x4277 = 0U;
int64_t x4329 = 451995418LL;
uint16_t x4349 = 27U;
volatile int32_t t80 = -587;
uint8_t x4565 = 67U;
int64_t x4567 = -12299297LL;
int32_t t82 = 22818;
int32_t x4674 = INT32_MIN;
volatile int64_t x4675 = INT64_MAX;
uint8_t x4679 = UINT8_MAX;
volatile uint16_t x4705 = 7U;
int16_t x4707 = INT16_MIN;
uint32_t x4728 = 9U;
int32_t t87 = -11393388;
int64_t x4734 = 753241585830307LL;
static int32_t t90 = 2924653;
int32_t x4942 = INT32_MAX;
uint16_t x5194 = UINT16_MAX;
static volatile int8_t x5195 = INT8_MAX;
uint16_t x5220 = 8U;
int8_t x5251 = 8;
int8_t x5298 = INT8_MIN;
int16_t x5299 = -147;
uint16_t x5300 = 38U;
int16_t x5390 = -1444;
uint32_t x5391 = UINT32_MAX;
int32_t t99 = -275;
static int64_t x5446 = INT64_MAX;
static uint16_t x5544 = 13U;
volatile uint8_t x5585 = 3U;
volatile int32_t t104 = -350771;
uint16_t x5710 = 22U;
int64_t x5854 = -1LL;
uint16_t x5856 = 6U;
int16_t x5986 = INT16_MIN;
int8_t x6047 = INT8_MAX;
uint16_t x6061 = UINT16_MAX;
int32_t x6063 = 25065403;
uint8_t x6064 = 10U;
uint64_t x6356 = 3LLU;
volatile int8_t x6479 = INT8_MIN;
uint8_t x6480 = 1U;
static int64_t x6519 = 516399563349524LL;
uint8_t x6549 = UINT8_MAX;
int64_t x6550 = INT64_MIN;
int8_t x6552 = 3;
uint64_t x6581 = 28338426826LLU;
uint8_t x6664 = 15U;
int8_t x6675 = -40;
uint16_t x6716 = 1U;
int64_t x6854 = INT64_MAX;
int32_t x6903 = INT32_MIN;
int8_t x6904 = 27;
volatile uint64_t x6937 = UINT64_MAX;
int32_t x6938 = INT32_MIN;
uint16_t x6998 = UINT16_MAX;
uint8_t x7000 = 22U;
uint64_t t126 = 97940LLU;
static uint32_t x7306 = 126701U;
volatile int64_t x7326 = -1LL;
static int8_t x7328 = 4;
int32_t t128 = -487;
static uint16_t x7576 = 0U;
int32_t t131 = 215;
int8_t x7758 = INT8_MAX;
uint64_t x7777 = 21862LLU;
volatile int16_t x7779 = INT16_MIN;
static uint8_t x7922 = UINT8_MAX;
int32_t x7947 = INT32_MAX;
volatile int32_t x8009 = 3126;
uint8_t x8017 = 7U;
static int32_t x8077 = 21;
static volatile int16_t x8079 = -1;
int8_t x8111 = INT8_MAX;
int32_t t141 = 40;
uint16_t x8128 = 10U;
int32_t t146 = 2042343;
uint16_t x8325 = 247U;
int32_t x8327 = -1;
uint64_t x8385 = 239LLU;
int8_t x8386 = INT8_MIN;
int8_t x8388 = 1;
static int8_t x8415 = 0;
uint16_t x8490 = UINT16_MAX;
uint64_t x8605 = UINT64_MAX;
static int8_t x8606 = -1;
uint64_t t151 = 281060802184223LLU;
uint32_t x8661 = 828002U;
int8_t x8663 = INT8_MAX;
int16_t x8669 = 0;
uint16_t x8681 = 7166U;
static int64_t x8695 = INT64_MIN;


void f0(void) {
    	int8_t x141 = 2;
	int32_t x142 = -103446;
	uint32_t x144 = 24U;
	int32_t t0 = 245;

    t0 = ((x141-(x142==x143))<<x144);

    if (t0 != 33554432) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x253 = UINT8_MAX;
	static int8_t x254 = -1;
	static volatile int64_t x255 = -1LL;
	volatile int8_t x256 = 0;
	volatile int32_t t1 = -209;

    t1 = ((x253-(x254==x255))<<x256);

    if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x313 = 590148609LLU;
	uint8_t x315 = 0U;
	uint8_t x316 = 1U;
	uint64_t t2 = 75604761LLU;

    t2 = ((x313-(x314==x315))<<x316);

    if (t2 != 1180297218LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x317 = 7847713LLU;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 31U;
	static uint64_t t3 = 13764818209LLU;

    t3 = ((x317-(x318==x319))<<x320);

    if (t3 != 16852835341697024LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x390 = -1LL;
	uint8_t x392 = 7U;
	static uint32_t t4 = 5616U;

    t4 = ((x389-(x390==x391))<<x392);

    if (t4 != 4294967168U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x417 = 1U;
	uint32_t x419 = 711U;
	volatile uint8_t x420 = 0U;
	volatile int32_t t5 = 2959;

    t5 = ((x417-(x418==x419))<<x420);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x485 = UINT8_MAX;
	static uint16_t x486 = 187U;
	int32_t x487 = INT32_MAX;
	int16_t x488 = 3;
	static int32_t t6 = -29459;

    t6 = ((x485-(x486==x487))<<x488);

    if (t6 != 2040) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x582 = INT8_MIN;
	int8_t x583 = INT8_MIN;
	static uint32_t x584 = 0U;
	volatile int64_t t7 = 12597372512LL;

    t7 = ((x581-(x582==x583))<<x584);

    if (t7 != 1796627LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x585 = 1953855861U;
	static int8_t x588 = 2;
	volatile uint32_t t8 = 3073U;

    t8 = ((x585-(x586==x587))<<x588);

    if (t8 != 3520456148U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x793 = UINT32_MAX;
	int32_t x794 = -1;
	int64_t x795 = -1LL;
	static uint8_t x796 = 1U;
	uint32_t t9 = 14567991U;

    t9 = ((x793-(x794==x795))<<x796);

    if (t9 != 4294967292U) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint32_t x925 = 11541383U;
	static uint64_t x927 = 47LLU;
	volatile uint32_t t10 = 8U;

    t10 = ((x925-(x926==x927))<<x928);

    if (t10 != 369324256U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x949 = INT16_MAX;
	uint32_t x950 = UINT32_MAX;
	volatile uint32_t x951 = 1328124172U;
	static uint32_t x952 = 2U;
	int32_t t11 = 217;

    t11 = ((x949-(x950==x951))<<x952);

    if (t11 != 131068) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x1006 = 89072U;
	int16_t x1007 = INT16_MIN;
	volatile int8_t x1008 = 0;
	int32_t t12 = -93338;

    t12 = ((x1005-(x1006==x1007))<<x1008);

    if (t12 != 70) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1009 = 63522593064232LL;
	static int32_t x1010 = 498;
	volatile int8_t x1012 = 2;
	int64_t t13 = 27209846628887799LL;

    t13 = ((x1009-(x1010==x1011))<<x1012);

    if (t13 != 254090372256928LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1013 = 42693045LL;
	uint16_t x1014 = 4787U;
	static uint32_t x1015 = 225975392U;

    t14 = ((x1013-(x1014==x1015))<<x1016);

    if (t14 != 341544360LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x1053 = INT64_MAX;
	uint64_t x1054 = UINT64_MAX;
	static uint64_t x1055 = UINT64_MAX;
	static int32_t x1056 = 0;
	static volatile int64_t t15 = -1580LL;

    t15 = ((x1053-(x1054==x1055))<<x1056);

    if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1142 = INT16_MIN;
	volatile int32_t x1143 = INT32_MAX;
	uint16_t x1144 = 0U;
	int32_t t16 = 14319813;

    t16 = ((x1141-(x1142==x1143))<<x1144);

    if (t16 != 1358) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1233 = 14689368U;
	int32_t x1235 = 6075;
	static uint16_t x1236 = 11U;
	static uint32_t t17 = 109U;

    t17 = ((x1233-(x1234==x1235))<<x1236);

    if (t17 != 19054592U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x1259 = 0U;
	volatile int32_t t18 = 9315391;

    t18 = ((x1257-(x1258==x1259))<<x1260);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1317 = UINT64_MAX;
	uint8_t x1318 = 25U;
	uint8_t x1320 = 20U;
	static uint64_t t19 = 5022690096691129LLU;

    t19 = ((x1317-(x1318==x1319))<<x1320);

    if (t19 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x1409 = 217LLU;
	static volatile uint64_t x1410 = 115116387424854LLU;
	uint64_t x1411 = 153360911445LLU;
	static int8_t x1412 = 1;
	static volatile uint64_t t20 = 102980575213LLU;

    t20 = ((x1409-(x1410==x1411))<<x1412);

    if (t20 != 434LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1459 = UINT64_MAX;
	volatile uint32_t t21 = 123174886U;

    t21 = ((x1457-(x1458==x1459))<<x1460);

    if (t21 != 3010002944U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1461 = 9454853LLU;
	static int32_t x1462 = 0;
	uint8_t x1464 = 29U;

    t22 = ((x1461-(x1462==x1463))<<x1464);

    if (t22 != 5076035552935936LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x1621 = 0U;
	uint8_t x1623 = 2U;
	static uint8_t x1624 = 29U;
	volatile int32_t t23 = -1;

    t23 = ((x1621-(x1622==x1623))<<x1624);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1669 = 0;
	volatile uint16_t x1671 = UINT16_MAX;
	volatile int32_t t24 = -1;

    t24 = ((x1669-(x1670==x1671))<<x1672);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x1673 = 70166281290502065LLU;
	int64_t x1674 = INT64_MIN;
	int32_t x1675 = -4670;
	static uint8_t x1676 = 7U;
	uint64_t t25 = 11358LLU;

    t25 = ((x1673-(x1674==x1675))<<x1676);

    if (t25 != 8981284005184264320LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1757 = UINT8_MAX;
	uint32_t x1758 = 1U;
	int32_t t26 = -60724;

    t26 = ((x1757-(x1758==x1759))<<x1760);

    if (t26 != 2088960) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x1802 = UINT64_MAX;
	int8_t x1803 = -1;
	int16_t x1804 = 2;
	volatile int32_t t27 = 208;

    t27 = ((x1801-(x1802==x1803))<<x1804);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1921 = 219403419LLU;
	volatile int8_t x1922 = -1;
	int8_t x1923 = INT8_MIN;
	uint64_t t28 = 3454134436641113LLU;

    t28 = ((x1921-(x1922==x1923))<<x1924);

    if (t28 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2029 = 132795804133LLU;
	uint8_t x2030 = 3U;
	int16_t x2032 = 14;
	volatile uint64_t t29 = 9093097829392LLU;

    t29 = ((x2029-(x2030==x2031))<<x2032);

    if (t29 != 2175726454915072LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x2069 = UINT16_MAX;
	static volatile uint16_t x2070 = 5U;
	static uint8_t x2071 = 2U;
	uint16_t x2072 = 7U;
	volatile int32_t t30 = 21506883;

    t30 = ((x2069-(x2070==x2071))<<x2072);

    if (t30 != 8388480) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2081 = 239516572378LLU;
	int8_t x2082 = INT8_MIN;
	uint32_t x2083 = 3U;
	uint32_t x2084 = 16U;

    t31 = ((x2081-(x2082==x2083))<<x2084);

    if (t31 != 15696958087364608LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2113 = 0;
	int64_t x2114 = INT64_MAX;
	int32_t x2115 = 3566;
	int8_t x2116 = 0;
	int32_t t32 = -3234;

    t32 = ((x2113-(x2114==x2115))<<x2116);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2125 = 13321718585LLU;
	volatile int8_t x2126 = INT8_MIN;
	int8_t x2127 = -3;
	int16_t x2128 = 0;
	uint64_t t33 = 2LLU;

    t33 = ((x2125-(x2126==x2127))<<x2128);

    if (t33 != 13321718585LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x2157 = 6;
	int8_t x2158 = INT8_MAX;
	static uint8_t x2160 = 0U;

    t34 = ((x2157-(x2158==x2159))<<x2160);

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2182 = -1;
	volatile int32_t x2183 = INT32_MIN;
	volatile int8_t x2184 = 12;
	int32_t t35 = -88750;

    t35 = ((x2181-(x2182==x2183))<<x2184);

    if (t35 != 40960) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2245 = 8477446557983830LLU;
	int8_t x2246 = INT8_MIN;
	uint16_t x2247 = UINT16_MAX;

    t36 = ((x2245-(x2246==x2247))<<x2248);

    if (t36 != 14459932503579820032LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x2261 = 1;
	uint8_t x2263 = 1U;
	uint8_t x2264 = 4U;

    t37 = ((x2261-(x2262==x2263))<<x2264);

    if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x2354 = 6U;
	volatile int8_t x2356 = 17;
	int32_t t38 = -12;

    t38 = ((x2353-(x2354==x2355))<<x2356);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2358 = -1;
	int64_t x2359 = INT64_MIN;
	volatile uint8_t x2360 = 4U;
	volatile int32_t t39 = -2396;

    t39 = ((x2357-(x2358==x2359))<<x2360);

    if (t39 != 384) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x2369 = 122577;
	uint8_t x2372 = 0U;
	volatile int32_t t40 = -1;

    t40 = ((x2369-(x2370==x2371))<<x2372);

    if (t40 != 122577) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2379 = 1;
	uint16_t x2380 = 7U;

    t41 = ((x2377-(x2378==x2379))<<x2380);

    if (t41 != 820224) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x2434 = 88;
	uint8_t x2436 = 4U;
	volatile uint64_t t42 = 5001580319654LLU;

    t42 = ((x2433-(x2434==x2435))<<x2436);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x2457 = 39459275850707215LL;
	static int64_t x2459 = -1LL;
	uint8_t x2460 = 1U;
	static int64_t t43 = -586027639LL;

    t43 = ((x2457-(x2458==x2459))<<x2460);

    if (t43 != 78918551701414430LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x2550 = -1LL;
	uint32_t x2551 = UINT32_MAX;
	static volatile uint8_t x2552 = 3U;

    t44 = ((x2549-(x2550==x2551))<<x2552);

    if (t44 != 262136) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2605 = 1;
	int64_t x2606 = 121562187023LL;
	volatile int8_t x2607 = -1;
	uint8_t x2608 = 10U;
	int32_t t45 = -42;

    t45 = ((x2605-(x2606==x2607))<<x2608);

    if (t45 != 1024) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2645 = 4U;
	int32_t x2646 = 244;
	int16_t x2647 = INT16_MIN;
	static uint8_t x2648 = 0U;
	volatile int32_t t46 = 2;

    t46 = ((x2645-(x2646==x2647))<<x2648);

    if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x2713 = 1145600581307039962LLU;
	int64_t x2714 = -1LL;
	int8_t x2715 = 0;
	int16_t x2716 = 1;
	volatile uint64_t t47 = 54519454294LLU;

    t47 = ((x2713-(x2714==x2715))<<x2716);

    if (t47 != 2291201162614079924LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2721 = 32923293761733922LL;
	int64_t x2722 = INT64_MIN;
	uint8_t x2723 = 1U;
	int16_t x2724 = 1;
	static volatile int64_t t48 = -1730933891LL;

    t48 = ((x2721-(x2722==x2723))<<x2724);

    if (t48 != 65846587523467844LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2772 = 2U;
	volatile uint64_t t49 = 16LLU;

    t49 = ((x2769-(x2770==x2771))<<x2772);

    if (t49 != 79234808LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2801 = 5;
	static volatile int32_t x2802 = -1;
	volatile uint64_t x2803 = UINT64_MAX;
	volatile int8_t x2804 = 0;
	static volatile int32_t t50 = -19;

    t50 = ((x2801-(x2802==x2803))<<x2804);

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2825 = 9U;
	int16_t x2826 = INT16_MIN;
	static int32_t x2827 = INT32_MIN;
	static uint8_t x2828 = 0U;
	volatile uint32_t t51 = 2694748U;

    t51 = ((x2825-(x2826==x2827))<<x2828);

    if (t51 != 9U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2830 = 13U;
	uint32_t x2831 = UINT32_MAX;
	int32_t x2832 = 12;
	int32_t t52 = -3056;

    t52 = ((x2829-(x2830==x2831))<<x2832);

    if (t52 != 4472832) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x2949 = 4LLU;
	volatile uint32_t x2951 = 4149620U;
	volatile uint8_t x2952 = 28U;
	static volatile uint64_t t53 = 3743510582255409710LLU;

    t53 = ((x2949-(x2950==x2951))<<x2952);

    if (t53 != 1073741824LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x2985 = UINT8_MAX;
	volatile int8_t x2987 = INT8_MIN;
	volatile uint32_t x2988 = 0U;
	volatile int32_t t54 = -2765947;

    t54 = ((x2985-(x2986==x2987))<<x2988);

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x3037 = 63;
	int8_t x3038 = INT8_MAX;
	uint8_t x3039 = 1U;
	int32_t t55 = 39795103;

    t55 = ((x3037-(x3038==x3039))<<x3040);

    if (t55 != 504) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3085 = 0;
	static int8_t x3086 = INT8_MIN;
	static int64_t x3087 = -1LL;
	volatile uint8_t x3088 = 11U;
	static int32_t t56 = 261626575;

    t56 = ((x3085-(x3086==x3087))<<x3088);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3093 = UINT16_MAX;
	int32_t x3094 = INT32_MIN;
	int64_t x3095 = INT64_MIN;
	int8_t x3096 = 1;

    t57 = ((x3093-(x3094==x3095))<<x3096);

    if (t57 != 131070) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3161 = UINT64_MAX;
	int16_t x3164 = 5;
	static uint64_t t58 = 14404545364628LLU;

    t58 = ((x3161-(x3162==x3163))<<x3164);

    if (t58 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x3185 = UINT32_MAX;
	uint16_t x3186 = 2U;
	int64_t x3187 = INT64_MAX;
	volatile uint32_t t59 = 190822U;

    t59 = ((x3185-(x3186==x3187))<<x3188);

    if (t59 != 3221225472U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x3221 = UINT8_MAX;
	volatile uint16_t x3222 = 2U;
	static uint32_t x3223 = UINT32_MAX;
	uint8_t x3224 = 20U;

    t60 = ((x3221-(x3222==x3223))<<x3224);

    if (t60 != 267386880) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x3273 = 39U;
	int16_t x3274 = INT16_MIN;
	int16_t x3275 = 2;
	static int8_t x3276 = 4;
	int32_t t61 = 178217;

    t61 = ((x3273-(x3274==x3275))<<x3276);

    if (t61 != 624) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x3285 = 907U;
	uint16_t x3286 = 1000U;
	int64_t x3287 = -1LL;

    t62 = ((x3285-(x3286==x3287))<<x3288);

    if (t62 != 1902116864) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x3309 = 60U;

    t63 = ((x3309-(x3310==x3311))<<x3312);

    if (t63 != 60U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3361 = 51U;
	static int64_t x3362 = -15574820877LL;
	int16_t x3363 = -1;
	static uint8_t x3364 = 0U;
	volatile int32_t t64 = -1;

    t64 = ((x3361-(x3362==x3363))<<x3364);

    if (t64 != 51) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x3461 = 78;
	volatile uint8_t x3462 = UINT8_MAX;
	static volatile uint16_t x3463 = 0U;
	int32_t t65 = 1930;

    t65 = ((x3461-(x3462==x3463))<<x3464);

    if (t65 != 2496) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3473 = 310717798U;
	volatile int8_t x3474 = -1;
	volatile int64_t x3475 = 11091128797289LL;
	uint8_t x3476 = 14U;
	uint32_t t66 = 46315U;

    t66 = ((x3473-(x3474==x3475))<<x3476);

    if (t66 != 1264156672U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x3625 = 0U;
	uint16_t x3627 = 5U;
	volatile int16_t x3628 = 5;
	volatile int32_t t67 = -1868330;

    t67 = ((x3625-(x3626==x3627))<<x3628);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x3689 = INT16_MAX;
	volatile int64_t x3690 = -1LL;
	volatile uint64_t x3691 = UINT64_MAX;
	static int32_t t68 = 18897;

    t68 = ((x3689-(x3690==x3691))<<x3692);

    if (t68 != 65532) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x3777 = INT64_MAX;
	volatile int16_t x3778 = INT16_MIN;
	static int16_t x3779 = -1;
	int8_t x3780 = 0;
	volatile int64_t t69 = INT64_MAX;

    t69 = ((x3777-(x3778==x3779))<<x3780);

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x3781 = UINT8_MAX;
	uint16_t x3782 = UINT16_MAX;

    t70 = ((x3781-(x3782==x3783))<<x3784);

    if (t70 != 2040) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x3814 = 662U;
	uint16_t x3816 = 1U;
	static volatile uint64_t t71 = 6590LLU;

    t71 = ((x3813-(x3814==x3815))<<x3816);

    if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x3865 = 6U;
	int32_t x3866 = -4595;
	int8_t x3867 = -1;
	int64_t x3868 = 18LL;
	volatile int32_t t72 = -1685;

    t72 = ((x3865-(x3866==x3867))<<x3868);

    if (t72 != 1572864) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x3869 = 14U;
	int8_t x3870 = INT8_MIN;
	volatile uint16_t x3871 = 8U;
	int8_t x3872 = 1;
	volatile int32_t t73 = -82574;

    t73 = ((x3869-(x3870==x3871))<<x3872);

    if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x3974 = INT8_MIN;
	static uint16_t x3975 = 1299U;
	volatile uint16_t x3976 = 1U;
	int32_t t74 = -48887900;

    t74 = ((x3973-(x3974==x3975))<<x3976);

    if (t74 != 40) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x4186 = UINT32_MAX;
	int16_t x4187 = INT16_MAX;
	static uint8_t x4188 = 24U;
	uint32_t t75 = 476725842U;

    t75 = ((x4185-(x4186==x4187))<<x4188);

    if (t75 != 1996488704U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x4225 = 0U;
	int64_t x4226 = INT64_MIN;
	volatile uint64_t x4227 = UINT64_MAX;
	uint64_t x4228 = 4LLU;
	int32_t t76 = -3904390;

    t76 = ((x4225-(x4226==x4227))<<x4228);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x4253 = 106U;
	int32_t x4254 = INT32_MIN;
	volatile uint16_t x4255 = UINT16_MAX;
	int32_t x4256 = 0;
	volatile int32_t t77 = 44;

    t77 = ((x4253-(x4254==x4255))<<x4256);

    if (t77 != 106) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x4278 = 12;
	volatile uint64_t x4279 = UINT64_MAX;
	uint64_t x4280 = 1LLU;
	volatile int32_t t78 = 4253;

    t78 = ((x4277-(x4278==x4279))<<x4280);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x4330 = 1U;
	int64_t x4331 = INT64_MIN;
	uint64_t x4332 = 2LLU;
	volatile int64_t t79 = 31233227LL;

    t79 = ((x4329-(x4330==x4331))<<x4332);

    if (t79 != 1807981672LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x4350 = -1LL;
	volatile uint64_t x4351 = 18LLU;
	uint16_t x4352 = 0U;

    t80 = ((x4349-(x4350==x4351))<<x4352);

    if (t80 != 27) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x4566 = INT32_MAX;
	int8_t x4568 = 1;
	int32_t t81 = 788098;

    t81 = ((x4565-(x4566==x4567))<<x4568);

    if (t81 != 134) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4581 = INT8_MAX;
	int64_t x4582 = -1633016023LL;
	int16_t x4583 = -52;
	uint8_t x4584 = 1U;

    t82 = ((x4581-(x4582==x4583))<<x4584);

    if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x4609 = 1650598342311709737LLU;
	uint8_t x4610 = UINT8_MAX;
	uint64_t x4611 = 8530156406877LLU;
	uint8_t x4612 = 1U;
	volatile uint64_t t83 = 4487010695LLU;

    t83 = ((x4609-(x4610==x4611))<<x4612);

    if (t83 != 3301196684623419474LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4673 = 101490U;
	uint8_t x4676 = 1U;
	uint32_t t84 = 684961061U;

    t84 = ((x4673-(x4674==x4675))<<x4676);

    if (t84 != 202980U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x4677 = 4U;
	int8_t x4678 = -1;
	int8_t x4680 = 8;
	static volatile int32_t t85 = -60682796;

    t85 = ((x4677-(x4678==x4679))<<x4680);

    if (t85 != 1024) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x4706 = INT8_MAX;
	uint8_t x4708 = 24U;
	int32_t t86 = 501;

    t86 = ((x4705-(x4706==x4707))<<x4708);

    if (t86 != 117440512) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x4725 = 79U;
	int16_t x4726 = INT16_MIN;
	uint64_t x4727 = 20290LLU;

    t87 = ((x4725-(x4726==x4727))<<x4728);

    if (t87 != 40448) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x4733 = 1476422868242174LLU;
	int32_t x4735 = -1;
	uint8_t x4736 = 3U;
	uint64_t t88 = 1997973027LLU;

    t88 = ((x4733-(x4734==x4735))<<x4736);

    if (t88 != 11811382945937392LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x4769 = 3;
	int32_t x4770 = -1;
	int64_t x4771 = -2589853406982611300LL;
	static uint8_t x4772 = 14U;
	int32_t t89 = 35;

    t89 = ((x4769-(x4770==x4771))<<x4772);

    if (t89 != 49152) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x4937 = UINT16_MAX;
	int32_t x4938 = INT32_MIN;
	volatile uint16_t x4939 = 2U;
	static uint16_t x4940 = 0U;

    t90 = ((x4937-(x4938==x4939))<<x4940);

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x4941 = 1U;
	int64_t x4943 = INT64_MAX;
	int16_t x4944 = 6;
	volatile int32_t t91 = -178334566;

    t91 = ((x4941-(x4942==x4943))<<x4944);

    if (t91 != 64) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x5073 = UINT16_MAX;
	uint8_t x5074 = UINT8_MAX;
	uint64_t x5075 = UINT64_MAX;
	static int32_t x5076 = 2;
	int32_t t92 = 156992690;

    t92 = ((x5073-(x5074==x5075))<<x5076);

    if (t92 != 262140) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x5129 = UINT32_MAX;
	uint64_t x5130 = 132389840558516800LLU;
	volatile uint32_t x5131 = 3U;
	int8_t x5132 = 1;
	uint32_t t93 = 113U;

    t93 = ((x5129-(x5130==x5131))<<x5132);

    if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x5193 = 12634997170010439LLU;
	volatile int64_t x5196 = 1LL;
	uint64_t t94 = 8576780075569459LLU;

    t94 = ((x5193-(x5194==x5195))<<x5196);

    if (t94 != 25269994340020878LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x5217 = 2U;
	static uint64_t x5218 = UINT64_MAX;
	int32_t x5219 = -402827;
	volatile int32_t t95 = 395109;

    t95 = ((x5217-(x5218==x5219))<<x5220);

    if (t95 != 512) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x5249 = 31867LLU;
	int32_t x5250 = INT32_MAX;
	int8_t x5252 = 0;
	uint64_t t96 = 1207382634863LLU;

    t96 = ((x5249-(x5250==x5251))<<x5252);

    if (t96 != 31867LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x5297 = 797369365953261LLU;
	volatile uint64_t t97 = 2840453976LLU;

    t97 = ((x5297-(x5298==x5299))<<x5300);

    if (t97 != 8358323841998520320LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5333 = UINT16_MAX;
	uint32_t x5334 = UINT32_MAX;
	int32_t x5335 = -1;
	uint64_t x5336 = 0LLU;
	volatile int32_t t98 = -346295;

    t98 = ((x5333-(x5334==x5335))<<x5336);

    if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5389 = UINT8_MAX;
	int16_t x5392 = 1;

    t99 = ((x5389-(x5390==x5391))<<x5392);

    if (t99 != 510) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x5397 = 0U;
	int32_t x5398 = INT32_MAX;
	volatile int64_t x5399 = INT64_MAX;
	uint8_t x5400 = 5U;
	volatile int32_t t100 = 11118;

    t100 = ((x5397-(x5398==x5399))<<x5400);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x5445 = 0U;
	volatile uint32_t x5447 = UINT32_MAX;
	volatile int8_t x5448 = 12;
	volatile int32_t t101 = 958889;

    t101 = ((x5445-(x5446==x5447))<<x5448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5465 = 2909070716746293LLU;
	volatile int32_t x5466 = INT32_MAX;
	uint32_t x5467 = 8991U;
	int16_t x5468 = 7;
	volatile uint64_t t102 = 497290049LLU;

    t102 = ((x5465-(x5466==x5467))<<x5468);

    if (t102 != 372361051743525504LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x5541 = 10472295U;
	volatile uint16_t x5542 = 47U;
	static int16_t x5543 = INT16_MIN;
	volatile uint32_t t103 = 109U;

    t103 = ((x5541-(x5542==x5543))<<x5544);

    if (t103 != 4184662016U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x5586 = 968404LL;
	static uint16_t x5587 = UINT16_MAX;
	uint8_t x5588 = 3U;

    t104 = ((x5585-(x5586==x5587))<<x5588);

    if (t104 != 24) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x5629 = UINT64_MAX;
	int32_t x5630 = 14934389;
	uint32_t x5631 = 6081U;
	int8_t x5632 = 0;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x5629-(x5630==x5631))<<x5632);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x5709 = 69U;
	static int8_t x5711 = 2;
	uint16_t x5712 = 3U;
	int32_t t106 = 212689;

    t106 = ((x5709-(x5710==x5711))<<x5712);

    if (t106 != 552) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x5745 = 221U;
	int8_t x5746 = 20;
	int64_t x5747 = -118881723864156LL;
	uint8_t x5748 = 16U;
	static volatile int32_t t107 = 182943136;

    t107 = ((x5745-(x5746==x5747))<<x5748);

    if (t107 != 14483456) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x5753 = UINT32_MAX;
	static int64_t x5754 = INT64_MIN;
	int64_t x5755 = 41220997LL;
	static int16_t x5756 = 7;
	volatile uint32_t t108 = 31U;

    t108 = ((x5753-(x5754==x5755))<<x5756);

    if (t108 != 4294967168U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x5853 = UINT8_MAX;
	int8_t x5855 = 7;
	volatile int32_t t109 = -1;

    t109 = ((x5853-(x5854==x5855))<<x5856);

    if (t109 != 16320) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x5985 = 4142U;
	volatile uint16_t x5987 = UINT16_MAX;
	uint8_t x5988 = 1U;
	volatile int32_t t110 = -31;

    t110 = ((x5985-(x5986==x5987))<<x5988);

    if (t110 != 8284) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x6045 = 7536;
	int16_t x6046 = -1;
	volatile int8_t x6048 = 14;
	int32_t t111 = -444794;

    t111 = ((x6045-(x6046==x6047))<<x6048);

    if (t111 != 123469824) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x6062 = -1;
	static int32_t t112 = 1;

    t112 = ((x6061-(x6062==x6063))<<x6064);

    if (t112 != 67107840) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x6257 = 29279U;
	volatile uint32_t x6258 = UINT32_MAX;
	static uint8_t x6259 = UINT8_MAX;
	static uint8_t x6260 = 7U;
	int32_t t113 = -3395320;

    t113 = ((x6257-(x6258==x6259))<<x6260);

    if (t113 != 3747712) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x6353 = 0U;
	int8_t x6354 = -5;
	static volatile int8_t x6355 = INT8_MIN;
	int32_t t114 = 134781544;

    t114 = ((x6353-(x6354==x6355))<<x6356);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x6477 = 723;
	int64_t x6478 = INT64_MIN;
	int32_t t115 = -1;

    t115 = ((x6477-(x6478==x6479))<<x6480);

    if (t115 != 1446) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x6517 = 3U;
	static volatile int64_t x6518 = -130572LL;
	uint16_t x6520 = 21U;
	int32_t t116 = 2884640;

    t116 = ((x6517-(x6518==x6519))<<x6520);

    if (t116 != 6291456) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x6551 = -5LL;
	int32_t t117 = -18769948;

    t117 = ((x6549-(x6550==x6551))<<x6552);

    if (t117 != 2040) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x6582 = 69U;
	int8_t x6583 = INT8_MIN;
	uint8_t x6584 = 13U;
	volatile uint64_t t118 = 2755367911341377407LLU;

    t118 = ((x6581-(x6582==x6583))<<x6584);

    if (t118 != 232148392558592LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x6661 = 245637526103LLU;
	static int32_t x6662 = 1;
	int32_t x6663 = INT32_MIN;
	uint64_t t119 = 21LLU;

    t119 = ((x6661-(x6662==x6663))<<x6664);

    if (t119 != 8049050455343104LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x6673 = UINT32_MAX;
	static volatile int64_t x6674 = INT64_MAX;
	volatile uint8_t x6676 = 25U;
	uint32_t t120 = 20U;

    t120 = ((x6673-(x6674==x6675))<<x6676);

    if (t120 != 4261412864U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x6713 = UINT16_MAX;
	uint32_t x6714 = 12424U;
	static int32_t x6715 = 61;
	volatile int32_t t121 = 51;

    t121 = ((x6713-(x6714==x6715))<<x6716);

    if (t121 != 131070) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x6853 = 13413403860LLU;
	int64_t x6855 = -1LL;
	static volatile uint8_t x6856 = 11U;
	uint64_t t122 = 634LLU;

    t122 = ((x6853-(x6854==x6855))<<x6856);

    if (t122 != 27470651105280LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x6901 = 152888LLU;
	uint64_t x6902 = UINT64_MAX;
	volatile uint64_t t123 = 237859LLU;

    t123 = ((x6901-(x6902==x6903))<<x6904);

    if (t123 != 20520279998464LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x6939 = 212849LLU;
	int8_t x6940 = 0;
	static uint64_t t124 = UINT64_MAX;

    t124 = ((x6937-(x6938==x6939))<<x6940);

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x6997 = 1677004108283758210LLU;
	uint8_t x6999 = 16U;
	static uint64_t t125 = 4LLU;

    t125 = ((x6997-(x6998==x6999))<<x7000);

    if (t125 != 10843621105906745344LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x7209 = 3434LLU;
	uint32_t x7210 = UINT32_MAX;
	static uint8_t x7211 = 10U;
	volatile int32_t x7212 = 0;

    t126 = ((x7209-(x7210==x7211))<<x7212);

    if (t126 != 3434LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x7305 = 9U;
	static volatile int16_t x7307 = INT16_MIN;
	volatile int8_t x7308 = 0;
	volatile uint32_t t127 = 2313U;

    t127 = ((x7305-(x7306==x7307))<<x7308);

    if (t127 != 9U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x7325 = 107U;
	int16_t x7327 = INT16_MAX;

    t128 = ((x7325-(x7326==x7327))<<x7328);

    if (t128 != 1712) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x7469 = INT16_MAX;
	volatile uint8_t x7470 = 16U;
	int8_t x7471 = -21;
	uint16_t x7472 = 2U;
	volatile int32_t t129 = 5153889;

    t129 = ((x7469-(x7470==x7471))<<x7472);

    if (t129 != 131068) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x7573 = 17;
	uint8_t x7574 = UINT8_MAX;
	int16_t x7575 = INT16_MAX;
	volatile int32_t t130 = -1;

    t130 = ((x7573-(x7574==x7575))<<x7576);

    if (t130 != 17) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x7609 = 0U;
	int32_t x7610 = -1;
	volatile int16_t x7611 = 1;
	uint8_t x7612 = 6U;

    t131 = ((x7609-(x7610==x7611))<<x7612);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x7757 = 2U;
	uint32_t x7759 = 9005089U;
	uint16_t x7760 = 20U;
	volatile int32_t t132 = 233;

    t132 = ((x7757-(x7758==x7759))<<x7760);

    if (t132 != 2097152) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x7778 = -1;
	int16_t x7780 = 2;
	uint64_t t133 = 16939183LLU;

    t133 = ((x7777-(x7778==x7779))<<x7780);

    if (t133 != 87448LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x7921 = 655;
	int32_t x7923 = -22;
	uint8_t x7924 = 1U;
	int32_t t134 = 0;

    t134 = ((x7921-(x7922==x7923))<<x7924);

    if (t134 != 1310) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x7945 = 8487944LLU;
	int8_t x7946 = INT8_MIN;
	uint8_t x7948 = 38U;
	uint64_t t135 = 66333818969LLU;

    t135 = ((x7945-(x7946==x7947))<<x7948);

    if (t135 != 2333148280977883136LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x8010 = UINT16_MAX;
	volatile int64_t x8011 = INT64_MIN;
	int8_t x8012 = 1;
	volatile int32_t t136 = 25;

    t136 = ((x8009-(x8010==x8011))<<x8012);

    if (t136 != 6252) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x8018 = 5925;
	int8_t x8019 = INT8_MAX;
	uint16_t x8020 = 6U;
	static int32_t t137 = 13;

    t137 = ((x8017-(x8018==x8019))<<x8020);

    if (t137 != 448) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x8045 = UINT32_MAX;
	uint32_t x8046 = 4438U;
	uint64_t x8047 = 12LLU;
	volatile int32_t x8048 = 4;
	volatile uint32_t t138 = 179677726U;

    t138 = ((x8045-(x8046==x8047))<<x8048);

    if (t138 != 4294967280U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x8053 = 0U;
	uint32_t x8054 = 1976282536U;
	int64_t x8055 = 1LL;
	static uint8_t x8056 = 0U;
	int32_t t139 = 98358;

    t139 = ((x8053-(x8054==x8055))<<x8056);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x8078 = INT32_MIN;
	uint8_t x8080 = 7U;
	int32_t t140 = -925436;

    t140 = ((x8077-(x8078==x8079))<<x8080);

    if (t140 != 2688) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x8109 = 2;
	volatile int16_t x8110 = INT16_MIN;
	static uint8_t x8112 = 1U;

    t141 = ((x8109-(x8110==x8111))<<x8112);

    if (t141 != 4) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x8125 = UINT16_MAX;
	volatile uint8_t x8126 = UINT8_MAX;
	int64_t x8127 = -1LL;
	int32_t t142 = -29;

    t142 = ((x8125-(x8126==x8127))<<x8128);

    if (t142 != 67107840) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x8193 = UINT8_MAX;
	static int32_t x8194 = INT32_MIN;
	int64_t x8195 = -1LL;
	volatile uint8_t x8196 = 21U;
	int32_t t143 = -24;

    t143 = ((x8193-(x8194==x8195))<<x8196);

    if (t143 != 534773760) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x8217 = UINT64_MAX;
	int16_t x8218 = INT16_MAX;
	uint8_t x8219 = 13U;
	volatile int8_t x8220 = 0;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = ((x8217-(x8218==x8219))<<x8220);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x8229 = 19LL;
	int64_t x8230 = -1LL;
	volatile int32_t x8231 = INT32_MIN;
	static volatile uint32_t x8232 = 1U;
	volatile int64_t t145 = -28093348428LL;

    t145 = ((x8229-(x8230==x8231))<<x8232);

    if (t145 != 38LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x8313 = 209032;
	int64_t x8314 = INT64_MIN;
	int64_t x8315 = 57521151425LL;
	volatile uint8_t x8316 = 6U;

    t146 = ((x8313-(x8314==x8315))<<x8316);

    if (t146 != 13378048) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x8326 = 0LL;
	int8_t x8328 = 20;
	int32_t t147 = -13092421;

    t147 = ((x8325-(x8326==x8327))<<x8328);

    if (t147 != 258998272) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x8387 = INT8_MIN;
	volatile uint64_t t148 = 145476798196LLU;

    t148 = ((x8385-(x8386==x8387))<<x8388);

    if (t148 != 476LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x8413 = 23894787;
	int8_t x8414 = 1;
	static int8_t x8416 = 1;
	volatile int32_t t149 = 410;

    t149 = ((x8413-(x8414==x8415))<<x8416);

    if (t149 != 47789574) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x8489 = UINT32_MAX;
	int32_t x8491 = INT32_MAX;
	uint8_t x8492 = 1U;
	volatile uint32_t t150 = 373U;

    t150 = ((x8489-(x8490==x8491))<<x8492);

    if (t150 != 4294967294U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x8607 = 504U;
	volatile int8_t x8608 = 1;

    t151 = ((x8605-(x8606==x8607))<<x8608);

    if (t151 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x8662 = 3U;
	volatile uint16_t x8664 = 1U;
	volatile uint32_t t152 = 1U;

    t152 = ((x8661-(x8662==x8663))<<x8664);

    if (t152 != 1656004U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x8670 = 3221;
	int32_t x8671 = -1;
	uint64_t x8672 = 25LLU;
	volatile int32_t t153 = -49009158;

    t153 = ((x8669-(x8670==x8671))<<x8672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x8682 = UINT64_MAX;
	int16_t x8683 = 0;
	int32_t x8684 = 10;
	volatile int32_t t154 = 7524;

    t154 = ((x8681-(x8682==x8683))<<x8684);

    if (t154 != 7337984) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x8693 = INT8_MAX;
	uint64_t x8694 = UINT64_MAX;
	volatile int16_t x8696 = 1;
	volatile int32_t t155 = 428;

    t155 = ((x8693-(x8694==x8695))<<x8696);

    if (t155 != 254) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x8729 = 14U;
	uint64_t x8730 = 3510150289LLU;
	int8_t x8731 = INT8_MAX;
	int16_t x8732 = 0;
	static volatile int32_t t156 = -59250;

    t156 = ((x8729-(x8730==x8731))<<x8732);

    if (t156 != 14) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x8801 = 3;
	uint8_t x8802 = UINT8_MAX;
	static uint8_t x8803 = 86U;
	uint8_t x8804 = 15U;
	volatile int32_t t157 = 1;

    t157 = ((x8801-(x8802==x8803))<<x8804);

    if (t157 != 98304) { NG(); } else { ; }
	
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


    return 0;
}

