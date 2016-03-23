
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

static uint16_t x81 = UINT16_MAX;
int16_t x83 = INT16_MIN;
volatile int16_t x84 = 6;
uint32_t t0 = 5U;
int32_t x109 = INT32_MIN;
int16_t x141 = INT16_MIN;
uint16_t x143 = 12U;
volatile int8_t x144 = 1;
uint8_t x388 = 3U;
volatile uint16_t x414 = UINT16_MAX;
static int64_t x503 = 5455723873LL;
uint8_t x604 = 25U;
static int32_t x654 = -1;
static uint64_t t13 = 46469689LLU;
uint64_t x733 = 121130979459431LLU;
static int64_t x734 = 1961685LL;
uint64_t t14 = 4234305569111165092LLU;
uint32_t x803 = 105785945U;
int8_t x804 = 1;
int64_t t16 = 6423500872311LL;
volatile int64_t x986 = 19336898392466LL;
int8_t x1030 = -7;
static uint8_t x1046 = 67U;
volatile int32_t t22 = 26851995;
uint8_t x1139 = UINT8_MAX;
int16_t x1158 = 0;
uint64_t x1160 = 2LLU;
int64_t x1237 = -1LL;
uint16_t x1240 = 11U;
volatile uint64_t t26 = 6231452251375932LLU;
static uint64_t x1295 = 32328555730103LLU;
static uint64_t t27 = 4189760LLU;
uint8_t x1352 = 2U;
static volatile int64_t x1363 = 215LL;
int32_t x1364 = 28;
volatile int64_t t30 = 1LL;
uint64_t x1441 = 85888030047229LLU;
int16_t x1443 = INT16_MIN;
volatile int16_t x1465 = INT16_MIN;
uint8_t x1468 = 16U;
uint64_t x1501 = UINT64_MAX;
uint64_t x1502 = 17288862262034LLU;
uint64_t x1574 = UINT64_MAX;
volatile uint32_t x1576 = 2U;
volatile uint64_t t36 = 1LLU;
uint64_t t37 = 1381LLU;
uint32_t x1901 = 678U;
volatile uint32_t t38 = 13U;
int32_t x1917 = -2475;
volatile int64_t t39 = 87644LL;
uint8_t x1938 = 2U;
static volatile int32_t t42 = -192384679;
static uint64_t x2061 = 3903419445LLU;
int16_t x2121 = -167;
int8_t x2122 = 5;
uint8_t x2124 = 3U;
int8_t x2383 = 31;
int32_t t51 = 607259;
volatile uint64_t x2527 = 7293033220LLU;
static uint64_t t53 = 0LLU;
int8_t x2565 = -1;
int8_t x2723 = INT8_MAX;
int16_t x2767 = INT16_MIN;
volatile uint8_t x2793 = 1U;
volatile uint32_t t59 = 8U;
int8_t x2813 = INT8_MAX;
int8_t x2814 = INT8_MAX;
static int8_t x2816 = 30;
uint32_t x3233 = UINT32_MAX;
int8_t x3234 = -1;
static uint8_t x3236 = 9U;
static uint64_t x3307 = 29165771LLU;
uint16_t x3579 = UINT16_MAX;
static int16_t x3580 = 1;
int32_t x3618 = INT32_MAX;
int8_t x3619 = INT8_MIN;
int16_t x3620 = 32;
int32_t t74 = 177972;
uint16_t x3868 = 2U;
int8_t x3890 = -30;
int64_t x3891 = 245653391650LL;
static uint64_t x4101 = UINT64_MAX;
int32_t x4125 = -192201934;
uint16_t x4127 = UINT16_MAX;
volatile int32_t t82 = 443;
int8_t x4218 = -21;
uint64_t x4219 = UINT64_MAX;
uint8_t x4298 = 0U;
int64_t t86 = 4LL;
int16_t x4354 = 10287;
int32_t x4407 = INT32_MIN;
uint64_t t88 = 48464130536785218LLU;
static volatile int32_t t89 = 441152595;
int32_t x4495 = 1;
int16_t x4610 = INT16_MIN;
volatile uint32_t x4611 = 90098U;
volatile uint32_t t93 = 90U;
volatile uint32_t x4744 = 2U;
volatile uint8_t x4920 = 4U;
int16_t x4935 = INT16_MAX;
int32_t x5002 = -884;
static int8_t x5003 = -3;
static volatile uint16_t x5004 = 5U;
uint64_t x5061 = 4098248679829542243LLU;
uint64_t x5063 = 182944591461482532LLU;
volatile uint64_t t99 = 218031048LLU;
int8_t x5070 = INT8_MIN;
volatile uint8_t x5071 = UINT8_MAX;
volatile uint8_t x5100 = 0U;
static volatile uint16_t x5214 = 1478U;
static uint64_t x5220 = 1LLU;
uint8_t x5260 = 6U;
int16_t x5305 = 12557;
int32_t x5307 = INT32_MAX;
uint16_t x5308 = 53U;
int64_t x5461 = INT64_MIN;
int64_t t108 = -12LL;
uint32_t t111 = 801U;
uint64_t t112 = 165721346LLU;
int16_t x5653 = INT16_MIN;
static volatile uint64_t t114 = 705402LLU;
int64_t t118 = 50188472198042LL;
uint16_t x5937 = 41U;
int8_t x5940 = 1;
uint64_t t121 = 504644051LLU;
volatile uint64_t t123 = 116063LLU;
static volatile int64_t t129 = -9222LL;
uint64_t x6237 = UINT64_MAX;
int32_t x6242 = -1;
uint16_t x6301 = UINT16_MAX;
int32_t x6303 = INT32_MAX;
int8_t x6417 = INT8_MIN;
uint32_t x6438 = UINT32_MAX;
int64_t x6498 = INT64_MIN;
uint8_t x6499 = 0U;
int16_t x6529 = -52;
static uint64_t x6531 = UINT64_MAX;
static volatile uint32_t t139 = 3357477U;
volatile int64_t x6737 = INT64_MAX;
volatile uint8_t x6738 = 1U;
volatile uint8_t x6740 = 26U;
uint64_t x6765 = UINT64_MAX;
uint16_t x6850 = 14U;
int16_t x6851 = -1;
volatile uint64_t x6857 = 251731LLU;
static uint16_t x6915 = UINT16_MAX;
uint16_t x6964 = 0U;
volatile int64_t t147 = 15273LL;
int32_t x7095 = INT32_MAX;
uint64_t x7162 = 23LLU;
volatile uint32_t x7227 = UINT32_MAX;
int8_t x7385 = 0;
int16_t x7387 = INT16_MAX;
int32_t x7554 = 0;
uint16_t x7659 = UINT16_MAX;
static uint32_t x7660 = 3U;
uint16_t x7753 = UINT16_MAX;
static volatile uint32_t t160 = 993U;
int8_t x7822 = -1;
int64_t x7859 = 1202822242921LL;
volatile int64_t t163 = -61LL;
volatile int64_t t164 = 3685470821LL;
uint8_t x7991 = 43U;
int8_t x7992 = 20;
static volatile int32_t t166 = -5981;
int8_t x8086 = 30;
static int8_t x8117 = 0;
static volatile int16_t x8181 = -3240;
volatile uint8_t x8184 = 25U;
int32_t x8237 = -1160934;
uint32_t x8238 = 3U;
volatile uint32_t t170 = 132071U;
int16_t x8327 = 1;
uint64_t x8685 = 0LLU;
uint64_t t177 = 508LLU;
static int16_t x8725 = -2;
static volatile uint8_t x8799 = UINT8_MAX;
volatile uint16_t x8805 = 14320U;
int16_t x8806 = INT16_MIN;
uint8_t x9035 = UINT8_MAX;
volatile uint8_t x9036 = 1U;
static uint16_t x9131 = UINT16_MAX;
volatile int8_t x9180 = 6;
uint32_t x9210 = 10075U;
int64_t x9230 = INT64_MAX;
static int16_t x9232 = 53;
static volatile uint16_t x9259 = UINT16_MAX;
volatile int32_t t189 = 5;
int32_t x9505 = INT32_MIN;
uint16_t x9527 = 25034U;
int64_t t194 = -1LL;
int32_t x9593 = 4291;
volatile int32_t x9596 = 0;
static volatile uint64_t t196 = 2560557499788LLU;
uint32_t x9602 = 389U;
uint32_t x9713 = UINT32_MAX;
int8_t x9715 = INT8_MIN;


void f0(void) {
    	static uint32_t x82 = UINT32_MAX;

    t0 = (((x81&x82)|x83)>>x84);

    if (t0 != 67108863U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x110 = 422168981761LLU;
	int16_t x111 = -3706;
	int8_t x112 = 2;
	uint64_t t1 = 1LLU;

    t1 = (((x109&x110)|x111)>>x112);

    if (t1 != 4611686018427386977LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x142 = 0U;
	int32_t t2 = 4661;

    t2 = (((x141&x142)|x143)>>x144);

    if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x193 = INT64_MAX;
	static volatile uint64_t x194 = 1306033567337281LLU;
	volatile int8_t x195 = 0;
	uint8_t x196 = 1U;
	uint64_t t3 = 346888538601LLU;

    t3 = (((x193&x194)|x195)>>x196);

    if (t3 != 653016783668640LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x281 = UINT16_MAX;
	int64_t x282 = -1LL;
	uint32_t x283 = 260842978U;
	int32_t x284 = 13;
	static int64_t t4 = -231580626009187981LL;

    t4 = (((x281&x282)|x283)>>x284);

    if (t4 != 31847LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x385 = UINT8_MAX;
	static uint8_t x386 = 0U;
	volatile uint64_t x387 = 59413LLU;
	volatile uint64_t t5 = 16766029320247620LLU;

    t5 = (((x385&x386)|x387)>>x388);

    if (t5 != 7426LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x413 = 3701323512028LLU;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = 47U;
	volatile uint64_t t6 = 154906025595851LLU;

    t6 = (((x413&x414)|x415)>>x416);

    if (t6 != 65536LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x445 = -1LL;
	static uint32_t x446 = 144U;
	uint32_t x447 = 1U;
	int16_t x448 = 56;
	static volatile int64_t t7 = -1LL;

    t7 = (((x445&x446)|x447)>>x448);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x465 = UINT8_MAX;
	int8_t x466 = -44;
	uint32_t x467 = 140U;
	static uint16_t x468 = 2U;
	uint32_t t8 = 8131077U;

    t8 = (((x465&x466)|x467)>>x468);

    if (t8 != 55U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x473 = 595U;
	int8_t x474 = INT8_MAX;
	uint8_t x475 = UINT8_MAX;
	int64_t x476 = 0LL;
	int32_t t9 = 1;

    t9 = (((x473&x474)|x475)>>x476);

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x481 = 8096LLU;
	int64_t x482 = -375852407LL;
	int64_t x483 = INT64_MIN;
	uint8_t x484 = 13U;
	uint64_t t10 = 4383762011785LLU;

    t10 = (((x481&x482)|x483)>>x484);

    if (t10 != 1125899906842624LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x501 = 24;
	int64_t x502 = INT64_MIN;
	static uint32_t x504 = 2U;
	volatile int64_t t11 = 14322690219134LL;

    t11 = (((x501&x502)|x503)>>x504);

    if (t11 != 1363930968LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x601 = INT8_MAX;
	uint64_t x602 = 7022225867LLU;
	uint16_t x603 = 1690U;
	uint64_t t12 = 3770370LLU;

    t12 = (((x601&x602)|x603)>>x604);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x653 = 387LLU;
	int8_t x655 = 27;
	volatile int8_t x656 = 1;

    t13 = (((x653&x654)|x655)>>x656);

    if (t13 != 205LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x735 = 3U;
	int32_t x736 = 13;

    t14 = (((x733&x734)|x735)>>x736);

    if (t14 != 4LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x781 = -89LL;
	static uint8_t x782 = 4U;
	volatile uint8_t x783 = 0U;
	int32_t x784 = 1;
	int64_t t15 = -24877751LL;

    t15 = (((x781&x782)|x783)>>x784);

    if (t15 != 2LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x801 = UINT16_MAX;
	static int64_t x802 = -257732LL;

    t16 = (((x801&x802)|x803)>>x804);

    if (t16 != 52895166LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x865 = -1;
	uint64_t x866 = 6927LLU;
	int64_t x867 = -1LL;
	int16_t x868 = 3;
	static volatile uint64_t t17 = 53LLU;

    t17 = (((x865&x866)|x867)>>x868);

    if (t17 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x877 = 54446U;
	int16_t x878 = INT16_MAX;
	volatile uint8_t x879 = UINT8_MAX;
	static uint8_t x880 = 3U;
	static uint32_t t18 = 4614157U;

    t18 = (((x877&x878)|x879)>>x880);

    if (t18 != 2719U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x973 = 7U;
	int16_t x974 = INT16_MIN;
	volatile int32_t x975 = -1;
	int8_t x976 = 0;
	uint32_t t19 = UINT32_MAX;

    t19 = (((x973&x974)|x975)>>x976);

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x985 = -15740626;
	int16_t x987 = 143;
	volatile uint8_t x988 = 3U;
	int64_t t20 = -387831693726395LL;

    t20 = (((x985&x986)|x987)>>x988);

    if (t20 != 2417110331953LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1029 = 1;
	int32_t x1031 = INT32_MAX;
	uint32_t x1032 = 0U;
	int32_t t21 = INT32_MAX;

    t21 = (((x1029&x1030)|x1031)>>x1032);

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x1045 = UINT8_MAX;
	uint16_t x1047 = 0U;
	int16_t x1048 = 1;

    t22 = (((x1045&x1046)|x1047)>>x1048);

    if (t22 != 33) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1137 = -1007543371548LL;
	volatile uint32_t x1138 = 74289U;
	volatile int16_t x1140 = 14;
	static int64_t t23 = -88056701LL;

    t23 = (((x1137&x1138)|x1139)>>x1140);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1157 = INT64_MIN;
	volatile uint8_t x1159 = 34U;
	volatile int64_t t24 = -7700527427103LL;

    t24 = (((x1157&x1158)|x1159)>>x1160);

    if (t24 != 8LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x1238 = INT32_MAX;
	volatile uint32_t x1239 = UINT32_MAX;
	int64_t t25 = -198LL;

    t25 = (((x1237&x1238)|x1239)>>x1240);

    if (t25 != 2097151LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1277 = UINT64_MAX;
	static int32_t x1278 = 386748;
	static int8_t x1279 = -32;
	int32_t x1280 = 10;

    t26 = (((x1277&x1278)|x1279)>>x1280);

    if (t26 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x1293 = INT64_MIN;
	int8_t x1294 = 24;
	volatile uint32_t x1296 = 1U;

    t27 = (((x1293&x1294)|x1295)>>x1296);

    if (t27 != 16164277865051LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x1329 = -1;
	int8_t x1330 = 62;
	volatile uint32_t x1331 = 5762292U;
	int16_t x1332 = 6;
	uint32_t t28 = 6117U;

    t28 = (((x1329&x1330)|x1331)>>x1332);

    if (t28 != 90035U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1349 = 6U;
	int8_t x1350 = INT8_MIN;
	int8_t x1351 = 0;
	volatile int32_t t29 = 696248;

    t29 = (((x1349&x1350)|x1351)>>x1352);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1361 = INT32_MAX;
	int16_t x1362 = INT16_MAX;

    t30 = (((x1361&x1362)|x1363)>>x1364);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x1442 = -1;
	volatile int16_t x1444 = 25;
	volatile uint64_t t31 = 259812793960677017LLU;

    t31 = (((x1441&x1442)|x1443)>>x1444);

    if (t31 != 549755813887LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1466 = 24U;
	uint64_t x1467 = UINT64_MAX;
	uint64_t t32 = 843210305350283795LLU;

    t32 = (((x1465&x1466)|x1467)>>x1468);

    if (t32 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1503 = 6123335LLU;
	int32_t x1504 = 0;
	uint64_t t33 = 6847294722754189LLU;

    t33 = (((x1501&x1502)|x1503)>>x1504);

    if (t33 != 17288862330711LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1505 = 1250645825838LL;
	static int32_t x1506 = -1;
	int16_t x1507 = INT16_MAX;
	uint32_t x1508 = 14U;
	volatile int64_t t34 = -37956317LL;

    t34 = (((x1505&x1506)|x1507)>>x1508);

    if (t34 != 76333363LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1573 = 69227725246822680LLU;
	int8_t x1575 = INT8_MIN;
	static uint64_t t35 = 373979LLU;

    t35 = (((x1573&x1574)|x1575)>>x1576);

    if (t35 != 4611686018427387878LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x1613 = 287049895926775LLU;
	int64_t x1614 = 2LL;
	volatile int64_t x1615 = -1LL;
	int8_t x1616 = 11;

    t36 = (((x1613&x1614)|x1615)>>x1616);

    if (t36 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1649 = 12U;
	uint64_t x1650 = 9146778414782LLU;
	volatile uint64_t x1651 = UINT64_MAX;
	int64_t x1652 = 31LL;

    t37 = (((x1649&x1650)|x1651)>>x1652);

    if (t37 != 8589934591LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1902 = 476;
	static int16_t x1903 = INT16_MIN;
	int16_t x1904 = 9;

    t38 = (((x1901&x1902)|x1903)>>x1904);

    if (t38 != 8388544U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1918 = 12627708499910043LL;
	volatile int16_t x1919 = INT16_MAX;
	int8_t x1920 = 1;

    t39 = (((x1917&x1918)|x1919)>>x1920);

    if (t39 != 6313854249959423LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x1937 = UINT32_MAX;
	static int16_t x1939 = INT16_MIN;
	static uint16_t x1940 = 1U;
	volatile uint32_t t40 = 1178339U;

    t40 = (((x1937&x1938)|x1939)>>x1940);

    if (t40 != 2147467265U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x1969 = 3090365254547092LLU;
	int32_t x1970 = 0;
	int16_t x1971 = -2;
	volatile uint16_t x1972 = 20U;
	volatile uint64_t t41 = 25LLU;

    t41 = (((x1969&x1970)|x1971)>>x1972);

    if (t41 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x2017 = 9U;
	int32_t x2018 = -3;
	uint16_t x2019 = 975U;
	uint32_t x2020 = 13U;

    t42 = (((x2017&x2018)|x2019)>>x2020);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x2037 = 1433906134U;
	static int32_t x2038 = -1;
	volatile uint8_t x2039 = 1U;
	uint8_t x2040 = 0U;
	volatile uint32_t t43 = 509728907U;

    t43 = (((x2037&x2038)|x2039)>>x2040);

    if (t43 != 1433906135U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2062 = 2U;
	int16_t x2063 = INT16_MIN;
	int8_t x2064 = 1;
	uint64_t t44 = 192844609890LLU;

    t44 = (((x2061&x2062)|x2063)>>x2064);

    if (t44 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2123 = 29316U;
	int32_t t45 = 2;

    t45 = (((x2121&x2122)|x2123)>>x2124);

    if (t45 != 3664) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x2149 = 1773U;
	static int8_t x2150 = INT8_MIN;
	uint16_t x2151 = 6U;
	volatile uint8_t x2152 = 9U;
	uint32_t t46 = 0U;

    t46 = (((x2149&x2150)|x2151)>>x2152);

    if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x2185 = INT32_MAX;
	int8_t x2186 = 0;
	volatile int8_t x2187 = INT8_MAX;
	uint16_t x2188 = 3U;
	volatile int32_t t47 = -13871;

    t47 = (((x2185&x2186)|x2187)>>x2188);

    if (t47 != 15) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x2217 = 393;
	int16_t x2218 = 98;
	volatile int16_t x2219 = INT16_MAX;
	uint8_t x2220 = 4U;
	volatile int32_t t48 = -90155;

    t48 = (((x2217&x2218)|x2219)>>x2220);

    if (t48 != 2047) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2333 = UINT32_MAX;
	uint32_t x2334 = 0U;
	int64_t x2335 = 15270LL;
	int32_t x2336 = 0;
	volatile int64_t t49 = -2057LL;

    t49 = (((x2333&x2334)|x2335)>>x2336);

    if (t49 != 15270LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x2349 = UINT64_MAX;
	int8_t x2350 = INT8_MAX;
	int32_t x2351 = 1465;
	volatile int32_t x2352 = 0;
	uint64_t t50 = 30952073LLU;

    t50 = (((x2349&x2350)|x2351)>>x2352);

    if (t50 != 1535LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2381 = -865802376;
	uint16_t x2382 = 97U;
	int16_t x2384 = 7;

    t51 = (((x2381&x2382)|x2383)>>x2384);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x2453 = 43365232725123LLU;
	static uint8_t x2454 = UINT8_MAX;
	int8_t x2455 = -8;
	static int16_t x2456 = 28;
	volatile uint64_t t52 = 219365153508485476LLU;

    t52 = (((x2453&x2454)|x2455)>>x2456);

    if (t52 != 68719476735LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2525 = INT16_MAX;
	volatile int8_t x2526 = INT8_MIN;
	volatile int8_t x2528 = 33;

    t53 = (((x2525&x2526)|x2527)>>x2528);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x2566 = UINT64_MAX;
	int64_t x2567 = 133308444462050LL;
	uint8_t x2568 = 1U;
	volatile uint64_t t54 = 15005806LLU;

    t54 = (((x2565&x2566)|x2567)>>x2568);

    if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x2633 = 58608772993969LLU;
	uint16_t x2634 = 20U;
	static int8_t x2635 = INT8_MIN;
	uint8_t x2636 = 0U;
	static volatile uint64_t t55 = 328LLU;

    t55 = (((x2633&x2634)|x2635)>>x2636);

    if (t55 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x2713 = INT8_MIN;
	static uint64_t x2714 = UINT64_MAX;
	int8_t x2715 = -5;
	volatile uint16_t x2716 = 1U;
	volatile uint64_t t56 = 159LLU;

    t56 = (((x2713&x2714)|x2715)>>x2716);

    if (t56 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x2721 = 267773419LLU;
	static volatile int8_t x2722 = INT8_MIN;
	static uint8_t x2724 = 1U;
	uint64_t t57 = 2LLU;

    t57 = (((x2721&x2722)|x2723)>>x2724);

    if (t57 != 133886719LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2765 = INT8_MIN;
	uint32_t x2766 = 353380922U;
	static volatile int8_t x2768 = 0;
	static volatile uint32_t t58 = 3U;

    t58 = (((x2765&x2766)|x2767)>>x2768);

    if (t58 != 4294945280U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2794 = INT32_MAX;
	uint32_t x2795 = 57505105U;
	uint16_t x2796 = 25U;

    t59 = (((x2793&x2794)|x2795)>>x2796);

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2815 = INT16_MAX;
	int32_t t60 = -352;

    t60 = (((x2813&x2814)|x2815)>>x2816);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x2957 = INT8_MAX;
	static int8_t x2958 = -1;
	static int32_t x2959 = INT32_MAX;
	static uint8_t x2960 = 26U;
	volatile int32_t t61 = -1;

    t61 = (((x2957&x2958)|x2959)>>x2960);

    if (t61 != 31) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x2973 = UINT32_MAX;
	int64_t x2974 = -1LL;
	uint64_t x2975 = 961811292LLU;
	int8_t x2976 = 16;
	volatile uint64_t t62 = 4311771329150240371LLU;

    t62 = (((x2973&x2974)|x2975)>>x2976);

    if (t62 != 65535LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x3001 = -1;
	uint32_t x3002 = 631693U;
	uint64_t x3003 = 196671213327943LLU;
	int16_t x3004 = 0;
	volatile uint64_t t63 = 1852LLU;

    t63 = (((x3001&x3002)|x3003)>>x3004);

    if (t63 != 196671213402063LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3181 = UINT64_MAX;
	int64_t x3182 = -1LL;
	volatile int32_t x3183 = -8267;
	int8_t x3184 = 0;
	uint64_t t64 = UINT64_MAX;

    t64 = (((x3181&x3182)|x3183)>>x3184);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x3185 = 695U;
	int8_t x3186 = INT8_MAX;
	int64_t x3187 = INT64_MAX;
	static volatile int8_t x3188 = 17;
	static volatile int64_t t65 = -1976071LL;

    t65 = (((x3185&x3186)|x3187)>>x3188);

    if (t65 != 70368744177663LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3235 = 1LL;
	int64_t t66 = -23585917LL;

    t66 = (((x3233&x3234)|x3235)>>x3236);

    if (t66 != 8388607LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x3285 = 2151571926LLU;
	uint64_t x3286 = 310669983096LLU;
	static int32_t x3287 = INT32_MAX;
	static int8_t x3288 = 31;
	static uint64_t t67 = 5LLU;

    t67 = (((x3285&x3286)|x3287)>>x3288);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x3305 = INT64_MIN;
	static uint8_t x3306 = 25U;
	int8_t x3308 = 54;
	uint64_t t68 = 78656LLU;

    t68 = (((x3305&x3306)|x3307)>>x3308);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x3433 = 49997626536830987LLU;
	uint32_t x3434 = 857U;
	static int16_t x3435 = INT16_MIN;
	int32_t x3436 = 1;
	uint64_t t69 = 8802759886155957LLU;

    t69 = (((x3433&x3434)|x3435)>>x3436);

    if (t69 != 9223372036854759428LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3561 = -1;
	static uint8_t x3562 = 11U;
	uint32_t x3563 = UINT32_MAX;
	int32_t x3564 = 0;
	volatile uint32_t t70 = UINT32_MAX;

    t70 = (((x3561&x3562)|x3563)>>x3564);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x3577 = INT32_MAX;
	static uint8_t x3578 = 41U;
	int32_t t71 = 1;

    t71 = (((x3577&x3578)|x3579)>>x3580);

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x3617 = 20332LLU;
	static uint64_t t72 = 16224LLU;

    t72 = (((x3617&x3618)|x3619)>>x3620);

    if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x3673 = INT32_MAX;
	int64_t x3674 = INT64_MIN;
	static uint16_t x3675 = 95U;
	uint16_t x3676 = 0U;
	static volatile int64_t t73 = -1LL;

    t73 = (((x3673&x3674)|x3675)>>x3676);

    if (t73 != 95LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x3745 = 923;
	static int16_t x3746 = INT16_MAX;
	static volatile int8_t x3747 = 34;
	uint16_t x3748 = 13U;

    t74 = (((x3745&x3746)|x3747)>>x3748);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x3853 = INT32_MIN;
	uint32_t x3854 = UINT32_MAX;
	static uint16_t x3855 = 823U;
	static volatile uint8_t x3856 = 19U;
	uint32_t t75 = 480920664U;

    t75 = (((x3853&x3854)|x3855)>>x3856);

    if (t75 != 4096U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x3865 = INT8_MAX;
	static int8_t x3866 = INT8_MIN;
	uint32_t x3867 = 18U;
	uint32_t t76 = 0U;

    t76 = (((x3865&x3866)|x3867)>>x3868);

    if (t76 != 4U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x3889 = 825;
	uint8_t x3892 = 61U;
	static volatile int64_t t77 = 1846987120LL;

    t77 = (((x3889&x3890)|x3891)>>x3892);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3949 = UINT32_MAX;
	uint32_t x3950 = 76U;
	uint32_t x3951 = 309U;
	int8_t x3952 = 1;
	uint32_t t78 = 100612U;

    t78 = (((x3949&x3950)|x3951)>>x3952);

    if (t78 != 190U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x3989 = -3390831;
	static uint8_t x3990 = UINT8_MAX;
	int8_t x3991 = INT8_MAX;
	static int16_t x3992 = 4;
	volatile int32_t t79 = 872581;

    t79 = (((x3989&x3990)|x3991)>>x3992);

    if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x4102 = UINT32_MAX;
	static int8_t x4103 = INT8_MIN;
	uint8_t x4104 = 0U;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (((x4101&x4102)|x4103)>>x4104);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x4126 = 3U;
	int64_t x4128 = 0LL;
	volatile int32_t t81 = 3;

    t81 = (((x4125&x4126)|x4127)>>x4128);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x4173 = INT16_MIN;
	int16_t x4174 = 1;
	int8_t x4175 = INT8_MAX;
	static uint8_t x4176 = 0U;

    t82 = (((x4173&x4174)|x4175)>>x4176);

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4217 = INT32_MIN;
	uint16_t x4220 = 37U;
	volatile uint64_t t83 = 338929192LLU;

    t83 = (((x4217&x4218)|x4219)>>x4220);

    if (t83 != 134217727LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x4237 = UINT64_MAX;
	int16_t x4238 = INT16_MAX;
	uint8_t x4239 = UINT8_MAX;
	uint32_t x4240 = 14U;
	uint64_t t84 = 52397825711235413LLU;

    t84 = (((x4237&x4238)|x4239)>>x4240);

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x4289 = -1;
	volatile uint32_t x4290 = UINT32_MAX;
	volatile uint16_t x4291 = UINT16_MAX;
	uint16_t x4292 = 1U;
	uint32_t t85 = 7431U;

    t85 = (((x4289&x4290)|x4291)>>x4292);

    if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x4297 = 2030487184LL;
	int8_t x4299 = INT8_MAX;
	uint8_t x4300 = 9U;

    t86 = (((x4297&x4298)|x4299)>>x4300);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x4353 = 73388U;
	int8_t x4355 = -1;
	int8_t x4356 = 1;
	volatile uint32_t t87 = 2U;

    t87 = (((x4353&x4354)|x4355)>>x4356);

    if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x4405 = 6364472U;
	uint64_t x4406 = UINT64_MAX;
	int16_t x4408 = 1;

    t88 = (((x4405&x4406)|x4407)>>x4408);

    if (t88 != 9223372035784216220LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x4481 = 3U;
	volatile int16_t x4482 = INT16_MAX;
	int32_t x4483 = INT32_MAX;
	static uint8_t x4484 = 17U;

    t89 = (((x4481&x4482)|x4483)>>x4484);

    if (t89 != 16383) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x4493 = INT64_MAX;
	static uint8_t x4494 = 4U;
	int8_t x4496 = 28;
	static int64_t t90 = -134LL;

    t90 = (((x4493&x4494)|x4495)>>x4496);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x4501 = 25995004439987LLU;
	volatile int8_t x4502 = INT8_MAX;
	uint64_t x4503 = UINT64_MAX;
	static uint8_t x4504 = 1U;
	volatile uint64_t t91 = 2599518LLU;

    t91 = (((x4501&x4502)|x4503)>>x4504);

    if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x4545 = 12246U;
	static int32_t x4546 = -51936;
	uint32_t x4547 = 1069177404U;
	int8_t x4548 = 3;
	volatile uint32_t t92 = 7341667U;

    t92 = (((x4545&x4546)|x4547)>>x4548);

    if (t92 != 133648359U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4609 = 8U;
	volatile int32_t x4612 = 12;

    t93 = (((x4609&x4610)|x4611)>>x4612);

    if (t93 != 21U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x4669 = 4U;
	uint8_t x4670 = 5U;
	uint32_t x4671 = 1078811U;
	uint8_t x4672 = 1U;
	uint32_t t94 = 3U;

    t94 = (((x4669&x4670)|x4671)>>x4672);

    if (t94 != 539407U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x4741 = -1;
	uint64_t x4742 = 31959935719LLU;
	uint8_t x4743 = UINT8_MAX;
	uint64_t t95 = 126805156851LLU;

    t95 = (((x4741&x4742)|x4743)>>x4744);

    if (t95 != 7989983935LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x4917 = 5U;
	uint8_t x4918 = UINT8_MAX;
	static uint64_t x4919 = UINT64_MAX;
	static volatile uint64_t t96 = 10212288057095LLU;

    t96 = (((x4917&x4918)|x4919)>>x4920);

    if (t96 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x4933 = 2;
	int32_t x4934 = -1;
	static uint64_t x4936 = 19LLU;
	volatile int32_t t97 = -18606;

    t97 = (((x4933&x4934)|x4935)>>x4936);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x5001 = 15U;
	uint32_t t98 = 275U;

    t98 = (((x5001&x5002)|x5003)>>x5004);

    if (t98 != 134217727U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x5062 = 26075U;
	uint8_t x5064 = 31U;

    t99 = (((x5061&x5062)|x5063)>>x5064);

    if (t99 != 85190213LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5069 = UINT16_MAX;
	int16_t x5072 = 0;
	int32_t t100 = 104786;

    t100 = (((x5069&x5070)|x5071)>>x5072);

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x5097 = UINT32_MAX;
	volatile int16_t x5098 = -2612;
	int16_t x5099 = INT16_MIN;
	volatile uint32_t t101 = 976215796U;

    t101 = (((x5097&x5098)|x5099)>>x5100);

    if (t101 != 4294964684U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x5209 = INT8_MIN;
	static volatile uint32_t x5210 = UINT32_MAX;
	int64_t x5211 = INT64_MAX;
	static uint16_t x5212 = 10U;
	int64_t t102 = -16287247454077100LL;

    t102 = (((x5209&x5210)|x5211)>>x5212);

    if (t102 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x5213 = 0;
	uint16_t x5215 = 72U;
	static uint8_t x5216 = 13U;
	int32_t t103 = -1355;

    t103 = (((x5213&x5214)|x5215)>>x5216);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x5217 = -1LL;
	volatile uint64_t x5218 = UINT64_MAX;
	static volatile int8_t x5219 = INT8_MIN;
	volatile uint64_t t104 = 85675853LLU;

    t104 = (((x5217&x5218)|x5219)>>x5220);

    if (t104 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x5257 = 33U;
	int64_t x5258 = INT64_MAX;
	static uint32_t x5259 = UINT32_MAX;
	static volatile int64_t t105 = 1LL;

    t105 = (((x5257&x5258)|x5259)>>x5260);

    if (t105 != 67108863LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x5306 = -1LL;
	static volatile int64_t t106 = 668LL;

    t106 = (((x5305&x5306)|x5307)>>x5308);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x5357 = 14U;
	int8_t x5358 = -3;
	volatile int32_t x5359 = -1613887;
	volatile int8_t x5360 = 27;
	volatile uint32_t t107 = 17994U;

    t107 = (((x5357&x5358)|x5359)>>x5360);

    if (t107 != 31U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x5462 = UINT8_MAX;
	uint16_t x5463 = 16685U;
	uint32_t x5464 = 9U;

    t108 = (((x5461&x5462)|x5463)>>x5464);

    if (t108 != 32LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x5465 = 437608328242576LLU;
	int64_t x5466 = INT64_MIN;
	volatile uint16_t x5467 = 1U;
	int8_t x5468 = 31;
	volatile uint64_t t109 = 109754379053813LLU;

    t109 = (((x5465&x5466)|x5467)>>x5468);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x5541 = -1;
	volatile int8_t x5542 = INT8_MAX;
	int8_t x5543 = 34;
	uint8_t x5544 = 29U;
	volatile int32_t t110 = 1;

    t110 = (((x5541&x5542)|x5543)>>x5544);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x5545 = UINT16_MAX;
	uint32_t x5546 = 1U;
	int32_t x5547 = -1;
	uint32_t x5548 = 2U;

    t111 = (((x5545&x5546)|x5547)>>x5548);

    if (t111 != 1073741823U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x5573 = 7910082216289759590LLU;
	int16_t x5574 = -403;
	int32_t x5575 = INT32_MIN;
	volatile uint8_t x5576 = 0U;

    t112 = (((x5573&x5574)|x5575)>>x5576);

    if (t112 != 18446744072737910884LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x5581 = 1942U;
	volatile int8_t x5582 = -1;
	uint32_t x5583 = 506U;
	uint8_t x5584 = 23U;
	volatile uint32_t t113 = 2488U;

    t113 = (((x5581&x5582)|x5583)>>x5584);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x5654 = INT32_MIN;
	static volatile uint64_t x5655 = 35212867577877562LLU;
	volatile uint8_t x5656 = 6U;

    t114 = (((x5653&x5654)|x5655)>>x5656);

    if (t114 != 288230376126415440LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x5697 = 27U;
	int32_t x5698 = INT32_MAX;
	uint8_t x5699 = 0U;
	uint8_t x5700 = 1U;
	static int32_t t115 = 16213;

    t115 = (((x5697&x5698)|x5699)>>x5700);

    if (t115 != 13) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x5737 = 31472LLU;
	uint8_t x5738 = 7U;
	int8_t x5739 = INT8_MIN;
	uint64_t x5740 = 1LLU;
	static uint64_t t116 = 14461839251111256LLU;

    t116 = (((x5737&x5738)|x5739)>>x5740);

    if (t116 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x5817 = INT8_MIN;
	volatile uint8_t x5818 = 25U;
	uint8_t x5819 = 2U;
	uint32_t x5820 = 0U;
	volatile int32_t t117 = -9;

    t117 = (((x5817&x5818)|x5819)>>x5820);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x5933 = INT16_MIN;
	int64_t x5934 = INT64_MAX;
	uint32_t x5935 = 565796514U;
	uint64_t x5936 = 2LLU;

    t118 = (((x5933&x5934)|x5935)>>x5936);

    if (t118 != 2305843009213691816LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x5938 = INT64_MIN;
	int32_t x5939 = INT32_MAX;
	volatile int64_t t119 = 1876904LL;

    t119 = (((x5937&x5938)|x5939)>>x5940);

    if (t119 != 1073741823LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x5969 = INT8_MAX;
	int16_t x5970 = INT16_MIN;
	volatile int32_t x5971 = INT32_MAX;
	uint8_t x5972 = 0U;
	static int32_t t120 = INT32_MAX;

    t120 = (((x5969&x5970)|x5971)>>x5972);

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x6001 = UINT64_MAX;
	static uint8_t x6002 = UINT8_MAX;
	uint8_t x6003 = 1U;
	volatile int16_t x6004 = 1;

    t121 = (((x6001&x6002)|x6003)>>x6004);

    if (t121 != 127LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x6005 = 30U;
	uint8_t x6006 = 115U;
	uint64_t x6007 = UINT64_MAX;
	int8_t x6008 = 55;
	volatile uint64_t t122 = 91011399961307389LLU;

    t122 = (((x6005&x6006)|x6007)>>x6008);

    if (t122 != 511LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x6101 = 7403LLU;
	int64_t x6102 = INT64_MAX;
	volatile int8_t x6103 = INT8_MAX;
	int16_t x6104 = 20;

    t123 = (((x6101&x6102)|x6103)>>x6104);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x6117 = INT32_MIN;
	int32_t x6118 = -1;
	static uint32_t x6119 = 27316U;
	uint8_t x6120 = 6U;
	uint32_t t124 = 3719661U;

    t124 = (((x6117&x6118)|x6119)>>x6120);

    if (t124 != 33554858U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x6121 = -28;
	uint16_t x6122 = 7U;
	int64_t x6123 = INT64_MAX;
	static uint8_t x6124 = 12U;
	volatile int64_t t125 = -60745587875393LL;

    t125 = (((x6121&x6122)|x6123)>>x6124);

    if (t125 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x6125 = 3U;
	uint8_t x6126 = UINT8_MAX;
	int8_t x6127 = 7;
	uint16_t x6128 = 1U;
	int32_t t126 = 1;

    t126 = (((x6125&x6126)|x6127)>>x6128);

    if (t126 != 3) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x6201 = 1787206;
	uint8_t x6202 = UINT8_MAX;
	volatile uint8_t x6203 = 96U;
	uint8_t x6204 = 1U;
	int32_t t127 = 5;

    t127 = (((x6201&x6202)|x6203)>>x6204);

    if (t127 != 51) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x6213 = 436556174026580LL;
	volatile int16_t x6214 = INT16_MIN;
	uint32_t x6215 = 6098U;
	uint16_t x6216 = 27U;
	volatile int64_t t128 = -18075143LL;

    t128 = (((x6213&x6214)|x6215)>>x6216);

    if (t128 != 3252596LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x6229 = 33U;
	int16_t x6230 = -24;
	static volatile int64_t x6231 = INT64_MAX;
	uint16_t x6232 = 12U;

    t129 = (((x6229&x6230)|x6231)>>x6232);

    if (t129 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x6238 = UINT64_MAX;
	static uint8_t x6239 = 122U;
	uint16_t x6240 = 8U;
	uint64_t t130 = 17694790395199LLU;

    t130 = (((x6237&x6238)|x6239)>>x6240);

    if (t130 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x6241 = 8U;
	uint8_t x6243 = UINT8_MAX;
	uint8_t x6244 = 7U;
	volatile uint32_t t131 = 638U;

    t131 = (((x6241&x6242)|x6243)>>x6244);

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x6253 = UINT16_MAX;
	volatile uint8_t x6254 = 1U;
	uint8_t x6255 = 57U;
	volatile uint32_t x6256 = 3U;
	int32_t t132 = -107656;

    t132 = (((x6253&x6254)|x6255)>>x6256);

    if (t132 != 7) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x6302 = 603U;
	volatile uint16_t x6304 = 0U;
	volatile int32_t t133 = INT32_MAX;

    t133 = (((x6301&x6302)|x6303)>>x6304);

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x6418 = 1080486258520503LLU;
	int16_t x6419 = -1;
	uint64_t x6420 = 37LLU;
	static uint64_t t134 = 48769072LLU;

    t134 = (((x6417&x6418)|x6419)>>x6420);

    if (t134 != 134217727LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x6437 = 3;
	int8_t x6439 = INT8_MAX;
	uint16_t x6440 = 1U;
	static uint32_t t135 = 930146U;

    t135 = (((x6437&x6438)|x6439)>>x6440);

    if (t135 != 63U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x6497 = 18U;
	int8_t x6500 = 1;
	volatile int64_t t136 = 31547237998256580LL;

    t136 = (((x6497&x6498)|x6499)>>x6500);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x6530 = 2U;
	static uint8_t x6532 = 35U;
	volatile uint64_t t137 = 13902LLU;

    t137 = (((x6529&x6530)|x6531)>>x6532);

    if (t137 != 536870911LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x6605 = INT32_MIN;
	uint64_t x6606 = UINT64_MAX;
	int8_t x6607 = INT8_MIN;
	volatile uint16_t x6608 = 31U;
	uint64_t t138 = 144014096224913LLU;

    t138 = (((x6605&x6606)|x6607)>>x6608);

    if (t138 != 8589934591LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x6697 = -1;
	static uint32_t x6698 = UINT32_MAX;
	int8_t x6699 = 1;
	volatile int8_t x6700 = 16;

    t139 = (((x6697&x6698)|x6699)>>x6700);

    if (t139 != 65535U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x6739 = 787776913;
	int64_t t140 = 62285173576LL;

    t140 = (((x6737&x6738)|x6739)>>x6740);

    if (t140 != 11LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x6766 = -1;
	volatile int8_t x6767 = 2;
	uint16_t x6768 = 0U;
	uint64_t t141 = UINT64_MAX;

    t141 = (((x6765&x6766)|x6767)>>x6768);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x6833 = -6;
	static uint64_t x6834 = 267558002LLU;
	int32_t x6835 = INT32_MIN;
	uint16_t x6836 = 0U;
	volatile uint64_t t142 = 126386288005538653LLU;

    t142 = (((x6833&x6834)|x6835)>>x6836);

    if (t142 != 18446744071829625970LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x6849 = 1825307316479LLU;
	uint8_t x6852 = 43U;
	static volatile uint64_t t143 = 1817299977395241330LLU;

    t143 = (((x6849&x6850)|x6851)>>x6852);

    if (t143 != 2097151LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x6858 = 2158060866945216LL;
	int32_t x6859 = INT32_MIN;
	static int16_t x6860 = 0;
	volatile uint64_t t144 = 4765396027814LLU;

    t144 = (((x6857&x6858)|x6859)>>x6860);

    if (t144 != 18446744071562117184LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x6889 = 235432873361884541LLU;
	uint16_t x6890 = 293U;
	volatile int64_t x6891 = INT64_MIN;
	int8_t x6892 = 6;
	static volatile uint64_t t145 = 10160867189681043LLU;

    t145 = (((x6889&x6890)|x6891)>>x6892);

    if (t145 != 144115188075855876LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x6913 = 949491U;
	volatile int32_t x6914 = -1;
	static int8_t x6916 = 0;
	uint32_t t146 = 9U;

    t146 = (((x6913&x6914)|x6915)>>x6916);

    if (t146 != 983039U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x6961 = -20509699LL;
	static volatile uint16_t x6962 = 17624U;
	uint8_t x6963 = 74U;

    t147 = (((x6961&x6962)|x6963)>>x6964);

    if (t147 != 218LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7093 = -1;
	uint32_t x7094 = 975335U;
	uint16_t x7096 = 2U;
	static uint32_t t148 = 817U;

    t148 = (((x7093&x7094)|x7095)>>x7096);

    if (t148 != 536870911U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x7109 = UINT8_MAX;
	uint8_t x7110 = 44U;
	uint32_t x7111 = 1363U;
	int8_t x7112 = 0;
	volatile uint32_t t149 = 45099914U;

    t149 = (((x7109&x7110)|x7111)>>x7112);

    if (t149 != 1407U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x7161 = INT32_MIN;
	int8_t x7163 = -1;
	static uint8_t x7164 = 2U;
	volatile uint64_t t150 = 46LLU;

    t150 = (((x7161&x7162)|x7163)>>x7164);

    if (t150 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x7177 = UINT64_MAX;
	static uint32_t x7178 = 28U;
	static volatile int8_t x7179 = INT8_MIN;
	uint8_t x7180 = 0U;
	volatile uint64_t t151 = 955241LLU;

    t151 = (((x7177&x7178)|x7179)>>x7180);

    if (t151 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x7225 = INT64_MIN;
	uint32_t x7226 = 4664U;
	int16_t x7228 = 51;
	volatile int64_t t152 = 6175627126264408LL;

    t152 = (((x7225&x7226)|x7227)>>x7228);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x7386 = INT32_MIN;
	int8_t x7388 = 11;
	int32_t t153 = 22459802;

    t153 = (((x7385&x7386)|x7387)>>x7388);

    if (t153 != 15) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x7553 = INT32_MIN;
	static uint8_t x7555 = 44U;
	uint8_t x7556 = 1U;
	static volatile int32_t t154 = 78;

    t154 = (((x7553&x7554)|x7555)>>x7556);

    if (t154 != 22) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x7589 = INT8_MAX;
	uint32_t x7590 = UINT32_MAX;
	static int32_t x7591 = INT32_MAX;
	uint8_t x7592 = 30U;
	volatile uint32_t t155 = 507183269U;

    t155 = (((x7589&x7590)|x7591)>>x7592);

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x7657 = -3936540LL;
	static uint64_t x7658 = UINT64_MAX;
	volatile uint64_t t156 = 63873772452LLU;

    t156 = (((x7657&x7658)|x7659)>>x7660);

    if (t156 != 2305843009213202431LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x7677 = INT8_MAX;
	static uint64_t x7678 = 96226565517432706LLU;
	uint64_t x7679 = 122041604124771LLU;
	uint8_t x7680 = 4U;
	volatile uint64_t t157 = 249918LLU;

    t157 = (((x7677&x7678)|x7679)>>x7680);

    if (t157 != 7627600257798LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x7754 = 997821397U;
	int16_t x7755 = 15;
	uint16_t x7756 = 7U;
	volatile uint32_t t158 = 558852U;

    t158 = (((x7753&x7754)|x7755)>>x7756);

    if (t158 != 279U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x7793 = UINT32_MAX;
	int8_t x7794 = INT8_MIN;
	int64_t x7795 = INT64_MAX;
	volatile int16_t x7796 = 1;
	int64_t t159 = 36216631853829LL;

    t159 = (((x7793&x7794)|x7795)>>x7796);

    if (t159 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x7817 = 29U;
	static volatile int32_t x7818 = -1356615;
	uint32_t x7819 = UINT32_MAX;
	volatile int16_t x7820 = 24;

    t160 = (((x7817&x7818)|x7819)>>x7820);

    if (t160 != 255U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x7821 = UINT8_MAX;
	int16_t x7823 = INT16_MAX;
	static uint16_t x7824 = 7U;
	static volatile int32_t t161 = -7;

    t161 = (((x7821&x7822)|x7823)>>x7824);

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x7845 = INT8_MAX;
	static int32_t x7846 = -1;
	static int32_t x7847 = INT32_MAX;
	uint8_t x7848 = 29U;
	int32_t t162 = -334454;

    t162 = (((x7845&x7846)|x7847)>>x7848);

    if (t162 != 3) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x7857 = INT8_MIN;
	volatile uint16_t x7858 = 2356U;
	int8_t x7860 = 3;

    t163 = (((x7857&x7858)|x7859)>>x7860);

    if (t163 != 150352780653LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x7889 = 9U;
	int64_t x7890 = 1478546LL;
	static uint32_t x7891 = 2067U;
	volatile uint8_t x7892 = 1U;

    t164 = (((x7889&x7890)|x7891)>>x7892);

    if (t164 != 1033LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x7989 = INT64_MIN;
	volatile int32_t x7990 = 115;
	static volatile int64_t t165 = 80487LL;

    t165 = (((x7989&x7990)|x7991)>>x7992);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x8041 = -3;
	uint16_t x8042 = UINT16_MAX;
	uint8_t x8043 = 17U;
	uint16_t x8044 = 1U;

    t166 = (((x8041&x8042)|x8043)>>x8044);

    if (t166 != 32766) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x8085 = UINT32_MAX;
	int8_t x8087 = INT8_MIN;
	uint16_t x8088 = 0U;
	uint32_t t167 = 25855268U;

    t167 = (((x8085&x8086)|x8087)>>x8088);

    if (t167 != 4294967198U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x8118 = INT16_MIN;
	int32_t x8119 = INT32_MAX;
	static int8_t x8120 = 0;
	int32_t t168 = INT32_MAX;

    t168 = (((x8117&x8118)|x8119)>>x8120);

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x8182 = INT16_MIN;
	uint64_t x8183 = 176791266114051LLU;
	volatile uint64_t t169 = 434350LLU;

    t169 = (((x8181&x8182)|x8183)>>x8184);

    if (t169 != 549755813887LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x8239 = 39;
	uint8_t x8240 = 6U;

    t170 = (((x8237&x8238)|x8239)>>x8240);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x8293 = -1;
	int8_t x8294 = INT8_MAX;
	volatile uint32_t x8295 = 2027U;
	volatile int32_t x8296 = 1;
	static uint32_t t171 = 2077758U;

    t171 = (((x8293&x8294)|x8295)>>x8296);

    if (t171 != 1023U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x8325 = -1878531708148LL;
	uint32_t x8326 = UINT32_MAX;
	uint16_t x8328 = 6U;
	volatile int64_t t172 = -21LL;

    t172 = (((x8325&x8326)|x8327)>>x8328);

    if (t172 != 41624492LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x8333 = INT32_MAX;
	volatile uint16_t x8334 = 7U;
	volatile uint64_t x8335 = 6LLU;
	static uint16_t x8336 = 0U;
	volatile uint64_t t173 = 11263LLU;

    t173 = (((x8333&x8334)|x8335)>>x8336);

    if (t173 != 7LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x8445 = 169U;
	static volatile uint16_t x8446 = UINT16_MAX;
	volatile uint64_t x8447 = 7943LLU;
	uint32_t x8448 = 0U;
	uint64_t t174 = 577597714902LLU;

    t174 = (((x8445&x8446)|x8447)>>x8448);

    if (t174 != 8111LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x8553 = -1LL;
	static int16_t x8554 = 46;
	int8_t x8555 = 1;
	uint16_t x8556 = 0U;
	volatile int64_t t175 = 18094LL;

    t175 = (((x8553&x8554)|x8555)>>x8556);

    if (t175 != 47LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x8565 = INT8_MAX;
	static volatile uint8_t x8566 = 45U;
	static uint64_t x8567 = 42322245753557LLU;
	volatile int8_t x8568 = 17;
	static volatile uint64_t t176 = 855448596743LLU;

    t176 = (((x8565&x8566)|x8567)>>x8568);

    if (t176 != 322893110LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x8686 = -1;
	int32_t x8687 = -4;
	uint32_t x8688 = 19U;

    t177 = (((x8685&x8686)|x8687)>>x8688);

    if (t177 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x8726 = 22U;
	uint64_t x8727 = UINT64_MAX;
	volatile uint8_t x8728 = 0U;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (((x8725&x8726)|x8727)>>x8728);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x8761 = 7153039845LL;
	uint8_t x8762 = 34U;
	static int16_t x8763 = 89;
	int16_t x8764 = 1;
	volatile int64_t t179 = -2969252719LL;

    t179 = (((x8761&x8762)|x8763)>>x8764);

    if (t179 != 60LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x8797 = UINT64_MAX;
	uint32_t x8798 = 4788709U;
	uint16_t x8800 = 2U;
	static uint64_t t180 = 1613037674245664625LLU;

    t180 = (((x8797&x8798)|x8799)>>x8800);

    if (t180 != 1197183LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x8807 = 396087155999856LL;
	uint16_t x8808 = 2U;
	volatile int64_t t181 = 1051LL;

    t181 = (((x8805&x8806)|x8807)>>x8808);

    if (t181 != 99021788999964LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x9033 = 447;
	static int16_t x9034 = 3917;
	volatile int32_t t182 = 43476890;

    t182 = (((x9033&x9034)|x9035)>>x9036);

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x9081 = INT8_MAX;
	int64_t x9082 = INT64_MAX;
	static volatile int64_t x9083 = 3761873003487205570LL;
	uint8_t x9084 = 0U;
	volatile int64_t t183 = -224038351907535LL;

    t183 = (((x9081&x9082)|x9083)>>x9084);

    if (t183 != 3761873003487205631LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x9097 = 301U;
	uint16_t x9098 = 1380U;
	uint32_t x9099 = UINT32_MAX;
	volatile uint8_t x9100 = 1U;
	volatile uint32_t t184 = 7284U;

    t184 = (((x9097&x9098)|x9099)>>x9100);

    if (t184 != 2147483647U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x9129 = INT8_MIN;
	uint16_t x9130 = 103U;
	static int8_t x9132 = 0;
	volatile int32_t t185 = -19231605;

    t185 = (((x9129&x9130)|x9131)>>x9132);

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x9177 = INT16_MAX;
	static uint8_t x9178 = 43U;
	volatile uint16_t x9179 = 1293U;
	int32_t t186 = 74945;

    t186 = (((x9177&x9178)|x9179)>>x9180);

    if (t186 != 20) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x9209 = 30522U;
	int8_t x9211 = INT8_MIN;
	uint64_t x9212 = 11LLU;
	uint32_t t187 = 1938462503U;

    t187 = (((x9209&x9210)|x9211)>>x9212);

    if (t187 != 2097151U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x9229 = 0;
	uint32_t x9231 = UINT32_MAX;
	volatile int64_t t188 = 123824220801211672LL;

    t188 = (((x9229&x9230)|x9231)>>x9232);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x9257 = INT16_MAX;
	uint16_t x9258 = 19U;
	uint16_t x9260 = 1U;

    t189 = (((x9257&x9258)|x9259)>>x9260);

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x9289 = 46424264U;
	static volatile uint64_t x9290 = UINT64_MAX;
	volatile uint8_t x9291 = 13U;
	static int32_t x9292 = 30;
	volatile uint64_t t190 = 28175040LLU;

    t190 = (((x9289&x9290)|x9291)>>x9292);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x9417 = 6U;
	volatile int32_t x9418 = 77919;
	static volatile uint32_t x9419 = 36U;
	uint16_t x9420 = 8U;
	volatile uint32_t t191 = 2029288145U;

    t191 = (((x9417&x9418)|x9419)>>x9420);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x9429 = 19U;
	volatile int16_t x9430 = -1;
	int32_t x9431 = 1;
	int8_t x9432 = 0;
	volatile int32_t t192 = 0;

    t192 = (((x9429&x9430)|x9431)>>x9432);

    if (t192 != 19) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x9506 = INT16_MAX;
	uint8_t x9507 = 5U;
	volatile uint32_t x9508 = 0U;
	static int32_t t193 = -1;

    t193 = (((x9505&x9506)|x9507)>>x9508);

    if (t193 != 5) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x9525 = INT32_MAX;
	static int64_t x9526 = INT64_MIN;
	uint8_t x9528 = 2U;

    t194 = (((x9525&x9526)|x9527)>>x9528);

    if (t194 != 6258LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x9569 = 6465428717121231LL;
	int8_t x9570 = INT8_MIN;
	int64_t x9571 = INT64_MAX;
	int16_t x9572 = 7;
	int64_t t195 = -1014205741131979283LL;

    t195 = (((x9569&x9570)|x9571)>>x9572);

    if (t195 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x9594 = UINT16_MAX;
	uint64_t x9595 = 251521144LLU;

    t196 = (((x9593&x9594)|x9595)>>x9596);

    if (t196 != 251525371LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x9601 = 8150602893212LL;
	volatile uint64_t x9603 = UINT64_MAX;
	uint16_t x9604 = 18U;
	volatile uint64_t t197 = 4937LLU;

    t197 = (((x9601&x9602)|x9603)>>x9604);

    if (t197 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x9605 = 404785827037554632LLU;
	int16_t x9606 = 300;
	int32_t x9607 = -1;
	uint16_t x9608 = 20U;
	volatile uint64_t t198 = 348735723181LLU;

    t198 = (((x9605&x9606)|x9607)>>x9608);

    if (t198 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x9714 = 2U;
	uint16_t x9716 = 0U;
	static uint32_t t199 = 29U;

    t199 = (((x9713&x9714)|x9715)>>x9716);

    if (t199 != 4294967170U) { NG(); } else { ; }
	
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

