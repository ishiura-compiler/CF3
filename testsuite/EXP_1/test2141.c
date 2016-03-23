
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

int32_t x105 = 44918322;
uint32_t x107 = 68706U;
int64_t x195 = -268788522LL;
volatile uint32_t x209 = 671U;
int16_t x210 = 6;
int16_t x227 = -1;
int32_t x335 = INT32_MIN;
int64_t x336 = -3113640650966LL;
volatile int64_t t6 = 1LL;
static volatile int32_t x349 = INT32_MAX;
uint32_t t9 = 69212907U;
int8_t x382 = 1;
uint8_t x384 = UINT8_MAX;
int32_t t11 = INT32_MAX;
uint8_t x410 = 4U;
uint64_t x451 = UINT64_MAX;
static uint8_t x452 = 24U;
static volatile uint16_t x504 = 3688U;
volatile int32_t t16 = 900560;
int32_t x718 = 4;
static uint8_t x877 = 4U;
static uint32_t x878 = 2U;
volatile uint8_t x882 = 28U;
volatile int32_t x889 = INT32_MAX;
uint32_t x892 = UINT32_MAX;
volatile uint64_t x1063 = 103LLU;
static volatile uint8_t x1069 = UINT8_MAX;
int16_t x1091 = INT16_MIN;
int32_t x1155 = 103040;
volatile int16_t x1156 = -2;
int16_t x1288 = INT16_MIN;
int64_t x1381 = INT64_MAX;
volatile int16_t x1401 = 1;
static volatile int8_t x1402 = 9;
uint64_t x1449 = 4788494277552271LLU;
int16_t x1451 = INT16_MIN;
volatile uint64_t x1533 = UINT64_MAX;
uint16_t x1534 = 43U;
static uint64_t x1688 = 1476362171274839852LLU;
uint64_t x1909 = UINT64_MAX;
uint32_t x1914 = 1U;
static int64_t x2027 = 103130694011591916LL;
int16_t x2028 = INT16_MIN;
static uint16_t x2435 = 9U;
uint64_t t50 = 14551956941LLU;
int8_t x2606 = 28;
int32_t x2607 = -1;
static int8_t x2616 = INT8_MIN;
uint16_t x2694 = 5U;
static uint64_t x3089 = 1530805969LLU;
volatile uint64_t x3105 = 13LLU;
static volatile uint64_t t60 = 2456227847806077LLU;
uint64_t x3341 = 288950738LLU;
int32_t t62 = 637338273;
int16_t x3470 = 1;
int64_t x3481 = INT64_MAX;
int16_t x3489 = INT16_MAX;
uint8_t x3490 = 2U;
volatile uint8_t x3506 = 18U;
volatile int32_t x3616 = -304838;
volatile int32_t t67 = -1;
static int32_t x3637 = 1;
int32_t x3640 = INT32_MIN;
int32_t x4062 = 1;
int16_t x4280 = INT16_MIN;
uint16_t x4717 = UINT16_MAX;
volatile uint16_t x4720 = 16U;
int8_t x4827 = 1;
uint16_t x4828 = 24U;
int32_t t79 = -354217;
uint8_t x4978 = 3U;
int64_t x5015 = INT64_MAX;
int8_t x5093 = INT8_MAX;
int8_t x5134 = 3;
int32_t t87 = 2;
uint8_t x5343 = 113U;
static uint64_t x5353 = UINT64_MAX;
uint8_t x5457 = 30U;
uint64_t x5479 = UINT64_MAX;
volatile uint64_t t96 = 3122LLU;
uint32_t x5869 = 66401746U;
uint8_t x5870 = 2U;
int32_t x6033 = INT32_MAX;
volatile uint64_t x6037 = UINT64_MAX;
int64_t x6039 = INT64_MAX;
int16_t x6161 = INT16_MAX;
int64_t x6172 = -1LL;
static volatile int8_t x6301 = INT8_MAX;
int32_t x6303 = INT32_MIN;
volatile int8_t x6345 = INT8_MAX;
volatile uint64_t t106 = UINT64_MAX;
uint32_t t107 = UINT32_MAX;
uint16_t x6438 = 1U;
static uint64_t x6439 = 7902400216LLU;
uint8_t x6505 = UINT8_MAX;
int16_t x6776 = -51;
uint32_t x6901 = 9326377U;
static int32_t x6902 = 6;
uint64_t x6903 = UINT64_MAX;
volatile int8_t x6907 = 3;
volatile int64_t x6908 = INT64_MIN;
uint64_t t119 = UINT64_MAX;
int8_t x7176 = -1;
int32_t t120 = -1380;
int32_t x7183 = INT32_MIN;
volatile uint8_t x7270 = 0U;
static int8_t x7362 = 2;
static int8_t x7363 = INT8_MAX;
uint64_t t125 = 482530958LLU;
int32_t x7479 = INT32_MAX;
volatile uint16_t x7480 = UINT16_MAX;
uint64_t t126 = 28657912LLU;
uint16_t x7482 = 16U;
uint32_t x7483 = 14066286U;
int64_t x7542 = 0LL;
int16_t x7561 = 3479;
uint8_t x7562 = 0U;
volatile int64_t t130 = -100LL;
int8_t x7595 = INT8_MIN;
int8_t x7643 = INT8_MIN;
int32_t x7764 = INT32_MIN;
volatile int64_t x7873 = 294684552173048385LL;
static uint8_t x7921 = UINT8_MAX;
int8_t x7932 = INT8_MIN;
static uint32_t t141 = UINT32_MAX;
volatile int64_t t142 = -1150288LL;
uint8_t x8546 = 2U;
int16_t x8598 = 0;
uint64_t x8638 = 24LLU;
static int64_t x8640 = INT64_MIN;
int32_t x8675 = -1;
int32_t x8879 = INT32_MAX;
uint16_t x8916 = UINT16_MAX;
uint64_t x9068 = 12807376LLU;
int16_t x9115 = 107;
int16_t x9196 = 39;
int8_t x9210 = 0;
volatile int64_t x9349 = INT64_MAX;
uint32_t x9471 = 136U;
int16_t x9492 = INT16_MIN;
volatile uint64_t t162 = UINT64_MAX;
int32_t x9515 = -234;
static uint8_t x9546 = 3U;
volatile uint64_t x9579 = 2671274084036LLU;
int8_t x9686 = 3;
int8_t x9690 = 1;
volatile int8_t x9828 = INT8_MIN;
uint8_t x9946 = 0U;
uint32_t t172 = UINT32_MAX;
uint64_t x9953 = 7617925LLU;
volatile int32_t x9956 = -1;
volatile uint64_t t173 = UINT64_MAX;
int8_t x10098 = 0;
uint16_t x10099 = 0U;
uint16_t x10281 = 29289U;
volatile int64_t t180 = 108614850139520LL;
int8_t x10374 = 16;
volatile int32_t x10375 = INT32_MIN;
uint64_t x10429 = 6875077LLU;
static int16_t x10430 = 51;
static uint8_t x10526 = 4U;
static uint8_t x10565 = UINT8_MAX;
static volatile uint64_t t187 = 13576225890LLU;
volatile int8_t x10678 = 25;
int8_t x10686 = 4;
uint64_t x10697 = UINT64_MAX;
int8_t x10706 = 9;
uint32_t x10707 = 11U;
uint32_t t191 = 61U;
int32_t t192 = 3483202;
uint8_t x10942 = 60U;
static int64_t x10943 = INT64_MAX;
static int64_t x11117 = INT64_MAX;
uint32_t x11127 = 0U;
int64_t x11128 = INT64_MAX;


void f0(void) {
    	static int64_t x61 = 75249679362850LL;
	uint8_t x62 = 29U;
	int64_t x63 = -4269450734LL;
	int64_t x64 = INT64_MAX;
	int64_t t0 = 15LL;

    t0 = (((x61>>x62)|x63)|x64);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x77 = 65489;
	static uint16_t x78 = 13U;
	int64_t x79 = -1LL;
	int64_t x80 = 152999084405633LL;
	volatile int64_t t1 = -782109098501174569LL;

    t1 = (((x77>>x78)|x79)|x80);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x106 = 16U;
	volatile int32_t x108 = 204504;
	volatile uint32_t t2 = 5U;

    t2 = (((x105>>x106)|x107)|x108);

    if (t2 != 204543U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x193 = INT32_MAX;
	static uint32_t x194 = 0U;
	static int64_t x196 = 29LL;
	static int64_t t3 = -739541702317670LL;

    t3 = (((x193>>x194)|x195)|x196);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x211 = INT64_MIN;
	static int16_t x212 = -1;
	int64_t t4 = 239273929LL;

    t4 = (((x209>>x210)|x211)|x212);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = 24U;
	volatile int8_t x228 = -38;
	int32_t t5 = 37;

    t5 = (((x225>>x226)|x227)|x228);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x333 = 29927U;
	uint16_t x334 = 12U;

    t6 = (((x333>>x334)|x335)|x336);

    if (t6 != -1936845009LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x350 = 1U;
	static int32_t x351 = INT32_MAX;
	int8_t x352 = -16;
	volatile int32_t t7 = -6432;

    t7 = (((x349>>x350)|x351)|x352);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x369 = UINT32_MAX;
	volatile uint16_t x370 = 1U;
	int16_t x371 = 2;
	int8_t x372 = INT8_MIN;
	uint32_t t8 = UINT32_MAX;

    t8 = (((x369>>x370)|x371)|x372);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x373 = 685168438U;
	uint16_t x374 = 9U;
	static int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;

    t9 = (((x373>>x374)|x375)|x376);

    if (t9 != 4294962027U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x381 = 1687U;
	static int32_t x383 = -1;
	static uint32_t t10 = UINT32_MAX;

    t10 = (((x381>>x382)|x383)|x384);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x401 = INT32_MAX;
	static int16_t x402 = 0;
	int32_t x403 = 514301207;
	int32_t x404 = INT32_MAX;

    t11 = (((x401>>x402)|x403)|x404);

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x409 = UINT64_MAX;
	int64_t x411 = INT64_MIN;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t12 = 92LLU;

    t12 = (((x409>>x410)|x411)|x412);

    if (t12 != 10376293541461622783LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x449 = INT8_MAX;
	volatile uint8_t x450 = 4U;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (((x449>>x450)|x451)|x452);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x457 = 76U;
	uint8_t x458 = 6U;
	uint64_t x459 = 600004964859328913LLU;
	static uint32_t x460 = 101220U;
	volatile uint64_t t14 = 7651182980334215640LLU;

    t14 = (((x457>>x458)|x459)|x460);

    if (t14 != 600004964859362293LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x497 = 1;
	int32_t x498 = 2;
	static int64_t x499 = INT64_MAX;
	static volatile int64_t x500 = INT64_MAX;
	int64_t t15 = INT64_MAX;

    t15 = (((x497>>x498)|x499)|x500);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x501 = INT16_MAX;
	uint8_t x502 = 16U;
	int8_t x503 = 0;

    t16 = (((x501>>x502)|x503)|x504);

    if (t16 != 3688) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x641 = 3;
	static uint32_t x642 = 2U;
	uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MIN;
	uint64_t t17 = UINT64_MAX;

    t17 = (((x641>>x642)|x643)|x644);

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x717 = 0U;
	int32_t x719 = -1;
	int64_t x720 = INT64_MAX;
	static volatile int64_t t18 = 9284871LL;

    t18 = (((x717>>x718)|x719)|x720);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x879 = INT64_MAX;
	int64_t x880 = 10371306857995LL;
	int64_t t19 = INT64_MAX;

    t19 = (((x877>>x878)|x879)|x880);

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x881 = 98322036U;
	uint8_t x883 = 2U;
	volatile int64_t x884 = 15067652658LL;
	int64_t t20 = -244058LL;

    t20 = (((x881>>x882)|x883)|x884);

    if (t20 != 15067652658LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x890 = 1;
	int32_t x891 = INT32_MAX;
	static volatile uint32_t t21 = UINT32_MAX;

    t21 = (((x889>>x890)|x891)|x892);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x909 = 357082535031974310LLU;
	int32_t x910 = 13;
	volatile int32_t x911 = INT32_MIN;
	int8_t x912 = -1;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = (((x909>>x910)|x911)|x912);

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1061 = UINT8_MAX;
	int16_t x1062 = 0;
	int16_t x1064 = INT16_MAX;
	static uint64_t t23 = 1530LLU;

    t23 = (((x1061>>x1062)|x1063)|x1064);

    if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x1070 = 1U;
	volatile int32_t x1071 = INT32_MIN;
	volatile int8_t x1072 = INT8_MIN;
	int32_t t24 = -92;

    t24 = (((x1069>>x1070)|x1071)|x1072);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x1089 = 5U;
	int32_t x1090 = 2;
	uint32_t x1092 = UINT32_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (((x1089>>x1090)|x1091)|x1092);

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x1153 = UINT16_MAX;
	int8_t x1154 = 1;
	int32_t t26 = 3742;

    t26 = (((x1153>>x1154)|x1155)|x1156);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1229 = 467915385062600127LLU;
	static uint8_t x1230 = 2U;
	int16_t x1231 = INT16_MIN;
	int64_t x1232 = INT64_MAX;
	uint64_t t27 = UINT64_MAX;

    t27 = (((x1229>>x1230)|x1231)|x1232);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1285 = 2;
	volatile uint16_t x1286 = 15U;
	int8_t x1287 = INT8_MAX;
	int32_t t28 = -56;

    t28 = (((x1285>>x1286)|x1287)|x1288);

    if (t28 != -32641) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x1289 = INT32_MAX;
	static uint8_t x1290 = 21U;
	uint64_t x1291 = UINT64_MAX;
	int8_t x1292 = -1;
	uint64_t t29 = UINT64_MAX;

    t29 = (((x1289>>x1290)|x1291)|x1292);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1349 = 31U;
	uint64_t x1350 = 2LLU;
	int32_t x1351 = -8683192;
	int32_t x1352 = -1;
	volatile int32_t t30 = -65;

    t30 = (((x1349>>x1350)|x1351)|x1352);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1382 = 3U;
	int16_t x1383 = 7588;
	uint64_t x1384 = UINT64_MAX;
	volatile uint64_t t31 = UINT64_MAX;

    t31 = (((x1381>>x1382)|x1383)|x1384);

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1403 = INT64_MAX;
	volatile uint16_t x1404 = 10130U;
	static int64_t t32 = INT64_MAX;

    t32 = (((x1401>>x1402)|x1403)|x1404);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1425 = 9U;
	uint8_t x1426 = 8U;
	int8_t x1427 = 14;
	uint16_t x1428 = 20U;
	static int32_t t33 = 504536;

    t33 = (((x1425>>x1426)|x1427)|x1428);

    if (t33 != 30) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1433 = 1;
	uint16_t x1434 = 26U;
	int8_t x1435 = -1;
	static uint8_t x1436 = 100U;
	volatile int32_t t34 = 3258555;

    t34 = (((x1433>>x1434)|x1435)|x1436);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x1450 = 1U;
	int8_t x1452 = INT8_MIN;
	static uint64_t t35 = 280802609178322LLU;

    t35 = (((x1449>>x1450)|x1451)|x1452);

    if (t35 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1505 = UINT8_MAX;
	uint8_t x1506 = 15U;
	uint8_t x1507 = 1U;
	volatile int32_t x1508 = INT32_MIN;
	static volatile int32_t t36 = -1;

    t36 = (((x1505>>x1506)|x1507)|x1508);

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1521 = 3U;
	int8_t x1522 = 0;
	int64_t x1523 = 76163058797260751LL;
	int8_t x1524 = -1;
	static int64_t t37 = -56868154LL;

    t37 = (((x1521>>x1522)|x1523)|x1524);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1535 = 5LLU;
	static uint32_t x1536 = UINT32_MAX;
	uint64_t t38 = 1433008410276072009LLU;

    t38 = (((x1533>>x1534)|x1535)|x1536);

    if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1577 = INT16_MAX;
	uint8_t x1578 = 17U;
	static int64_t x1579 = INT64_MAX;
	uint16_t x1580 = 56U;
	static volatile int64_t t39 = INT64_MAX;

    t39 = (((x1577>>x1578)|x1579)|x1580);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x1685 = 84;
	uint8_t x1686 = 0U;
	int16_t x1687 = 3;
	volatile uint64_t t40 = 18LLU;

    t40 = (((x1685>>x1686)|x1687)|x1688);

    if (t40 != 1476362171274839935LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x1885 = UINT8_MAX;
	uint8_t x1886 = 23U;
	static uint64_t x1887 = 17464683468733LLU;
	static volatile int64_t x1888 = INT64_MIN;
	uint64_t t41 = 2921142816924054936LLU;

    t41 = (((x1885>>x1886)|x1887)|x1888);

    if (t41 != 9223389501538244541LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1910 = 11U;
	int16_t x1911 = INT16_MIN;
	volatile int32_t x1912 = 330;
	uint64_t t42 = UINT64_MAX;

    t42 = (((x1909>>x1910)|x1911)|x1912);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x1913 = 0U;
	int8_t x1915 = -1;
	int64_t x1916 = -2726LL;
	volatile int64_t t43 = -277690725LL;

    t43 = (((x1913>>x1914)|x1915)|x1916);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x1973 = INT8_MAX;
	int8_t x1974 = 3;
	int8_t x1975 = -1;
	volatile int16_t x1976 = INT16_MIN;
	int32_t t44 = -3031;

    t44 = (((x1973>>x1974)|x1975)|x1976);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2025 = 0U;
	static int8_t x2026 = 16;
	volatile int64_t t45 = -2601LL;

    t45 = (((x2025>>x2026)|x2027)|x2028);

    if (t45 != -25364LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x2201 = 14356U;
	uint16_t x2202 = 3U;
	int8_t x2203 = INT8_MIN;
	volatile int64_t x2204 = 6LL;
	volatile int64_t t46 = -6731059338194LL;

    t46 = (((x2201>>x2202)|x2203)|x2204);

    if (t46 != 4294967174LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2225 = 1410U;
	int64_t x2226 = 15LL;
	static volatile int64_t x2227 = -1916417758225428247LL;
	uint8_t x2228 = 91U;
	volatile int64_t t47 = 2870421890333844LL;

    t47 = (((x2225>>x2226)|x2227)|x2228);

    if (t47 != -1916417758225428229LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x2229 = INT64_MAX;
	uint16_t x2230 = 0U;
	uint16_t x2231 = 26U;
	uint8_t x2232 = 0U;
	int64_t t48 = INT64_MAX;

    t48 = (((x2229>>x2230)|x2231)|x2232);

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2417 = 2U;
	int64_t x2418 = 0LL;
	int32_t x2419 = INT32_MIN;
	int64_t x2420 = 132740869146805LL;
	int64_t t49 = 6520029892614322LL;

    t49 = (((x2417>>x2418)|x2419)|x2420);

    if (t49 != -1537587017LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x2433 = 3992227389039LLU;
	uint8_t x2434 = 7U;
	static volatile int8_t x2436 = INT8_MIN;

    t50 = (((x2433>>x2434)|x2435)|x2436);

    if (t50 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2569 = INT32_MAX;
	static volatile int16_t x2570 = 1;
	int32_t x2571 = 1;
	volatile int64_t x2572 = INT64_MIN;
	int64_t t51 = 39217685075LL;

    t51 = (((x2569>>x2570)|x2571)|x2572);

    if (t51 != -9223372035781033985LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2605 = INT8_MAX;
	static int8_t x2608 = INT8_MIN;
	volatile int32_t t52 = -66;

    t52 = (((x2605>>x2606)|x2607)|x2608);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x2613 = 1001U;
	uint16_t x2614 = 1U;
	int8_t x2615 = INT8_MIN;
	volatile int32_t t53 = 110340;

    t53 = (((x2613>>x2614)|x2615)|x2616);

    if (t53 != -12) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x2693 = INT8_MAX;
	int16_t x2695 = 12;
	volatile int32_t x2696 = -1;
	int32_t t54 = 80;

    t54 = (((x2693>>x2694)|x2695)|x2696);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x2985 = INT64_MAX;
	static int8_t x2986 = 34;
	uint8_t x2987 = UINT8_MAX;
	static volatile int64_t x2988 = INT64_MIN;
	volatile int64_t t55 = -6956LL;

    t55 = (((x2985>>x2986)|x2987)|x2988);

    if (t55 != -9223372036317904897LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x3061 = UINT16_MAX;
	uint8_t x3062 = 3U;
	uint32_t x3063 = 1877857140U;
	int32_t x3064 = INT32_MAX;
	volatile uint32_t t56 = 199U;

    t56 = (((x3061>>x3062)|x3063)|x3064);

    if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3090 = 10U;
	int16_t x3091 = INT16_MIN;
	uint16_t x3092 = UINT16_MAX;
	static volatile uint64_t t57 = UINT64_MAX;

    t57 = (((x3089>>x3090)|x3091)|x3092);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x3106 = 1U;
	int64_t x3107 = -81LL;
	int64_t x3108 = 839303941LL;
	volatile uint64_t t58 = 645531LLU;

    t58 = (((x3105>>x3106)|x3107)|x3108);

    if (t58 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x3301 = INT8_MAX;
	uint32_t x3302 = 22U;
	static uint8_t x3303 = UINT8_MAX;
	int16_t x3304 = -1;
	int32_t t59 = -23843;

    t59 = (((x3301>>x3302)|x3303)|x3304);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x3325 = 189;
	uint16_t x3326 = 1U;
	int32_t x3327 = INT32_MIN;
	uint64_t x3328 = 3839LLU;

    t60 = (((x3325>>x3326)|x3327)|x3328);

    if (t60 != 18446744071562071807LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x3342 = 2;
	uint16_t x3343 = 7975U;
	volatile uint64_t x3344 = 33420926044712LLU;
	static volatile uint64_t t61 = 158LLU;

    t61 = (((x3341>>x3342)|x3343)|x3344);

    if (t61 != 33420993290111LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x3393 = 12;
	int8_t x3394 = 4;
	static int32_t x3395 = INT32_MIN;
	volatile int16_t x3396 = INT16_MAX;

    t62 = (((x3393>>x3394)|x3395)|x3396);

    if (t62 != -2147450881) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x3469 = UINT16_MAX;
	static uint16_t x3471 = 7U;
	uint8_t x3472 = UINT8_MAX;
	volatile int32_t t63 = -6;

    t63 = (((x3469>>x3470)|x3471)|x3472);

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x3482 = 1;
	static int32_t x3483 = INT32_MIN;
	uint16_t x3484 = 20334U;
	int64_t t64 = -109449947711328894LL;

    t64 = (((x3481>>x3482)|x3483)|x3484);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x3491 = UINT16_MAX;
	uint8_t x3492 = UINT8_MAX;
	int32_t t65 = 67367321;

    t65 = (((x3489>>x3490)|x3491)|x3492);

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x3505 = 3U;
	int16_t x3507 = -1;
	int32_t x3508 = 49;
	volatile int32_t t66 = -20846;

    t66 = (((x3505>>x3506)|x3507)|x3508);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x3613 = 3093U;
	int8_t x3614 = 1;
	volatile int32_t x3615 = 29;

    t67 = (((x3613>>x3614)|x3615)|x3616);

    if (t67 != -303297) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x3617 = UINT32_MAX;
	int32_t x3618 = 2;
	uint64_t x3619 = UINT64_MAX;
	static int64_t x3620 = 27428534092193LL;
	uint64_t t68 = UINT64_MAX;

    t68 = (((x3617>>x3618)|x3619)|x3620);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x3638 = 0U;
	volatile uint64_t x3639 = 688475714156731LLU;
	static volatile uint64_t t69 = 23791265483247LLU;

    t69 = (((x3637>>x3638)|x3639)|x3640);

    if (t69 != 18446744072608610491LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x3929 = 383241020U;
	uint8_t x3930 = 1U;
	static volatile uint32_t x3931 = 3634336U;
	static volatile uint32_t x3932 = UINT32_MAX;
	uint32_t t70 = UINT32_MAX;

    t70 = (((x3929>>x3930)|x3931)|x3932);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x3985 = 1U;
	uint8_t x3986 = 22U;
	uint8_t x3987 = 2U;
	int32_t x3988 = INT32_MIN;
	volatile int32_t t71 = 28;

    t71 = (((x3985>>x3986)|x3987)|x3988);

    if (t71 != -2147483646) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x4061 = 630U;
	static volatile uint8_t x4063 = UINT8_MAX;
	int8_t x4064 = INT8_MAX;
	uint32_t t72 = 995715U;

    t72 = (((x4061>>x4062)|x4063)|x4064);

    if (t72 != 511U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x4185 = 5248U;
	static volatile int16_t x4186 = 3;
	volatile int8_t x4187 = -1;
	uint8_t x4188 = 1U;
	int32_t t73 = 482987982;

    t73 = (((x4185>>x4186)|x4187)|x4188);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x4189 = INT64_MAX;
	uint32_t x4190 = 6U;
	uint8_t x4191 = 55U;
	volatile uint16_t x4192 = 7U;
	volatile int64_t t74 = -53271636700928LL;

    t74 = (((x4189>>x4190)|x4191)|x4192);

    if (t74 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x4213 = UINT32_MAX;
	volatile uint32_t x4214 = 1U;
	int16_t x4215 = 11169;
	uint32_t x4216 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

    t75 = (((x4213>>x4214)|x4215)|x4216);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x4277 = 2U;
	static int8_t x4278 = 26;
	int32_t x4279 = -1;
	volatile int32_t t76 = -11;

    t76 = (((x4277>>x4278)|x4279)|x4280);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x4473 = UINT32_MAX;
	volatile uint16_t x4474 = 0U;
	uint32_t x4475 = UINT32_MAX;
	uint8_t x4476 = UINT8_MAX;
	uint32_t t77 = UINT32_MAX;

    t77 = (((x4473>>x4474)|x4475)|x4476);

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x4718 = 2U;
	volatile int64_t x4719 = INT64_MIN;
	volatile int64_t t78 = 55LL;

    t78 = (((x4717>>x4718)|x4719)|x4720);

    if (t78 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x4825 = UINT16_MAX;
	uint16_t x4826 = 0U;

    t79 = (((x4825>>x4826)|x4827)|x4828);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x4977 = 0U;
	static int16_t x4979 = 3158;
	volatile uint32_t x4980 = 231180659U;
	uint32_t t80 = 11915U;

    t80 = (((x4977>>x4978)|x4979)|x4980);

    if (t80 != 231181687U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x5013 = 451011445771542LL;
	uint32_t x5014 = 1U;
	uint64_t x5016 = 126791LLU;
	volatile uint64_t t81 = 5748479LLU;

    t81 = (((x5013>>x5014)|x5015)|x5016);

    if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x5025 = UINT32_MAX;
	int16_t x5026 = 0;
	uint32_t x5027 = 383168U;
	static volatile int64_t x5028 = 3LL;
	int64_t t82 = 3LL;

    t82 = (((x5025>>x5026)|x5027)|x5028);

    if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x5073 = UINT64_MAX;
	int8_t x5074 = 6;
	uint64_t x5075 = 24416142572453473LLU;
	uint8_t x5076 = UINT8_MAX;
	uint64_t t83 = 44804121655371LLU;

    t83 = (((x5073>>x5074)|x5075)|x5076);

    if (t83 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x5094 = 7U;
	int32_t x5095 = -1;
	int8_t x5096 = -1;
	volatile int32_t t84 = -107;

    t84 = (((x5093>>x5094)|x5095)|x5096);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x5133 = UINT32_MAX;
	static volatile int32_t x5135 = -1;
	uint64_t x5136 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = (((x5133>>x5134)|x5135)|x5136);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x5177 = 7U;
	static uint8_t x5178 = 3U;
	uint64_t x5179 = 2593110610LLU;
	int32_t x5180 = INT32_MIN;
	volatile uint64_t t86 = 524038LLU;

    t86 = (((x5177>>x5178)|x5179)|x5180);

    if (t86 != 18446744072007694930LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x5205 = INT16_MAX;
	static uint32_t x5206 = 0U;
	volatile uint16_t x5207 = UINT16_MAX;
	volatile uint8_t x5208 = 0U;

    t87 = (((x5205>>x5206)|x5207)|x5208);

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x5341 = 10U;
	static uint8_t x5342 = 0U;
	int8_t x5344 = -1;
	volatile int32_t t88 = -2;

    t88 = (((x5341>>x5342)|x5343)|x5344);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x5354 = 42U;
	volatile uint64_t x5355 = 92114036070956LLU;
	int16_t x5356 = -54;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = (((x5353>>x5354)|x5355)|x5356);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x5433 = 736;
	uint16_t x5434 = 5U;
	int64_t x5435 = INT64_MIN;
	int8_t x5436 = INT8_MIN;
	static volatile int64_t t90 = 304662076LL;

    t90 = (((x5433>>x5434)|x5435)|x5436);

    if (t90 != -105LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5458 = 9;
	int64_t x5459 = INT64_MIN;
	int64_t x5460 = INT64_MIN;
	volatile int64_t t91 = INT64_MIN;

    t91 = (((x5457>>x5458)|x5459)|x5460);

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x5477 = 83U;
	uint16_t x5478 = 6U;
	int32_t x5480 = INT32_MAX;
	uint64_t t92 = UINT64_MAX;

    t92 = (((x5477>>x5478)|x5479)|x5480);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x5721 = 1;
	uint16_t x5722 = 0U;
	int16_t x5723 = INT16_MAX;
	uint8_t x5724 = 0U;
	static int32_t t93 = -7145;

    t93 = (((x5721>>x5722)|x5723)|x5724);

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x5733 = 0;
	int16_t x5734 = 0;
	int16_t x5735 = INT16_MIN;
	uint64_t x5736 = 474074472LLU;
	uint64_t t94 = 8922388292138220LLU;

    t94 = (((x5733>>x5734)|x5735)|x5736);

    if (t94 != 18446744073709538664LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x5793 = UINT64_MAX;
	int8_t x5794 = 1;
	int8_t x5795 = -1;
	int16_t x5796 = -12;
	static uint64_t t95 = UINT64_MAX;

    t95 = (((x5793>>x5794)|x5795)|x5796);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x5797 = 1;
	int32_t x5798 = 11;
	int64_t x5799 = INT64_MIN;
	uint64_t x5800 = 79069515LLU;

    t96 = (((x5797>>x5798)|x5799)|x5800);

    if (t96 != 9223372036933845323LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x5871 = -3735660;
	uint32_t x5872 = 13117081U;
	volatile uint32_t t97 = 121U;

    t97 = (((x5869>>x5870)|x5871)|x5872);

    if (t97 != 4294967293U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x5881 = 189361438901LL;
	volatile uint8_t x5882 = 3U;
	int32_t x5883 = INT32_MIN;
	volatile int32_t x5884 = INT32_MAX;
	volatile int64_t t98 = -177874869666385969LL;

    t98 = (((x5881>>x5882)|x5883)|x5884);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x6034 = 31;
	int64_t x6035 = INT64_MIN;
	uint8_t x6036 = 2U;
	volatile int64_t t99 = 1193LL;

    t99 = (((x6033>>x6034)|x6035)|x6036);

    if (t99 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x6038 = 0;
	int32_t x6040 = 28658;
	uint64_t t100 = UINT64_MAX;

    t100 = (((x6037>>x6038)|x6039)|x6040);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x6105 = 2204322391901LLU;
	uint8_t x6106 = 2U;
	volatile uint16_t x6107 = 707U;
	uint32_t x6108 = 1U;
	static volatile uint64_t t101 = 8609151LLU;

    t101 = (((x6105>>x6106)|x6107)|x6108);

    if (t101 != 551080598487LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x6162 = 3U;
	int16_t x6163 = INT16_MIN;
	int64_t x6164 = -441360525983957LL;
	int64_t t102 = 6482136467LL;

    t102 = (((x6161>>x6162)|x6163)|x6164);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x6169 = INT32_MAX;
	volatile uint8_t x6170 = 1U;
	uint8_t x6171 = 27U;
	int64_t t103 = -911855003885LL;

    t103 = (((x6169>>x6170)|x6171)|x6172);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x6302 = 1U;
	uint32_t x6304 = 100753821U;
	volatile uint32_t t104 = 712483172U;

    t104 = (((x6301>>x6302)|x6303)|x6304);

    if (t104 != 2248237503U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x6346 = 16U;
	volatile uint32_t x6347 = UINT32_MAX;
	volatile uint8_t x6348 = 46U;
	volatile uint32_t t105 = UINT32_MAX;

    t105 = (((x6345>>x6346)|x6347)|x6348);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x6385 = 3420LLU;
	static uint8_t x6386 = 56U;
	volatile int16_t x6387 = INT16_MAX;
	int64_t x6388 = -1LL;

    t106 = (((x6385>>x6386)|x6387)|x6388);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x6397 = 237;
	volatile uint32_t x6398 = 2U;
	uint32_t x6399 = 1436U;
	int8_t x6400 = -1;

    t107 = (((x6397>>x6398)|x6399)|x6400);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x6401 = 61U;
	uint8_t x6402 = 1U;
	uint16_t x6403 = UINT16_MAX;
	int16_t x6404 = 0;
	int32_t t108 = 55;

    t108 = (((x6401>>x6402)|x6403)|x6404);

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x6417 = 6818U;
	int64_t x6418 = 11LL;
	static volatile uint16_t x6419 = 417U;
	static int64_t x6420 = INT64_MIN;
	static int64_t t109 = -3979LL;

    t109 = (((x6417>>x6418)|x6419)|x6420);

    if (t109 != -9223372036854775389LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x6437 = UINT32_MAX;
	uint64_t x6440 = 243LLU;
	volatile uint64_t t110 = 134551872854604LLU;

    t110 = (((x6437>>x6438)|x6439)|x6440);

    if (t110 != 8589934591LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x6506 = 0U;
	int8_t x6507 = INT8_MIN;
	uint64_t x6508 = 40551650LLU;
	static uint64_t t111 = UINT64_MAX;

    t111 = (((x6505>>x6506)|x6507)|x6508);

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x6533 = 2U;
	uint8_t x6534 = 0U;
	uint8_t x6535 = UINT8_MAX;
	volatile int16_t x6536 = INT16_MAX;
	volatile int32_t t112 = -1215853;

    t112 = (((x6533>>x6534)|x6535)|x6536);

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x6569 = 165;
	int8_t x6570 = 6;
	volatile int16_t x6571 = INT16_MIN;
	int32_t x6572 = -1;
	int32_t t113 = -118844;

    t113 = (((x6569>>x6570)|x6571)|x6572);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x6757 = INT64_MAX;
	static int16_t x6758 = 41;
	uint64_t x6759 = UINT64_MAX;
	int16_t x6760 = INT16_MIN;
	uint64_t t114 = UINT64_MAX;

    t114 = (((x6757>>x6758)|x6759)|x6760);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x6773 = 15U;
	uint32_t x6774 = 15U;
	int16_t x6775 = -1;
	volatile int32_t t115 = 30;

    t115 = (((x6773>>x6774)|x6775)|x6776);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x6904 = INT32_MAX;
	uint64_t t116 = UINT64_MAX;

    t116 = (((x6901>>x6902)|x6903)|x6904);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x6905 = 15640U;
	uint32_t x6906 = 4U;
	int64_t t117 = 471LL;

    t117 = (((x6905>>x6906)|x6907)|x6908);

    if (t117 != -9223372036854774829LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x7053 = 14140LLU;
	uint8_t x7054 = 22U;
	static volatile int8_t x7055 = 0;
	volatile int8_t x7056 = -1;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (((x7053>>x7054)|x7055)|x7056);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x7141 = UINT64_MAX;
	int64_t x7142 = 0LL;
	volatile int16_t x7143 = -32;
	static int8_t x7144 = -1;

    t119 = (((x7141>>x7142)|x7143)|x7144);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x7173 = 1;
	uint8_t x7174 = 0U;
	int16_t x7175 = INT16_MIN;

    t120 = (((x7173>>x7174)|x7175)|x7176);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x7181 = 15;
	uint8_t x7182 = 26U;
	int32_t x7184 = -1;
	volatile int32_t t121 = 309;

    t121 = (((x7181>>x7182)|x7183)|x7184);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x7269 = INT16_MAX;
	uint32_t x7271 = 1282422U;
	int8_t x7272 = INT8_MIN;
	static uint32_t t122 = UINT32_MAX;

    t122 = (((x7269>>x7270)|x7271)|x7272);

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x7321 = INT16_MAX;
	int8_t x7322 = 3;
	uint64_t x7323 = UINT64_MAX;
	int8_t x7324 = INT8_MAX;
	static uint64_t t123 = UINT64_MAX;

    t123 = (((x7321>>x7322)|x7323)|x7324);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x7353 = 121U;
	uint16_t x7354 = 13U;
	static int64_t x7355 = INT64_MAX;
	int8_t x7356 = INT8_MAX;
	static volatile int64_t t124 = INT64_MAX;

    t124 = (((x7353>>x7354)|x7355)|x7356);

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x7361 = 16904707282189LLU;
	static int8_t x7364 = INT8_MAX;

    t125 = (((x7361>>x7362)|x7363)|x7364);

    if (t125 != 4226176820607LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x7477 = 91602120062249317LLU;
	uint16_t x7478 = 14U;

    t126 = (((x7477>>x7478)|x7479)|x7480);

    if (t126 != 5592047419391LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x7481 = 115U;
	int64_t x7484 = INT64_MIN;
	volatile int64_t t127 = -4387783603655838LL;

    t127 = (((x7481>>x7482)|x7483)|x7484);

    if (t127 != -9223372036840709522LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x7485 = UINT32_MAX;
	int16_t x7486 = 2;
	int64_t x7487 = INT64_MAX;
	static int32_t x7488 = INT32_MIN;
	volatile int64_t t128 = 105893752LL;

    t128 = (((x7485>>x7486)|x7487)|x7488);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x7541 = UINT32_MAX;
	uint16_t x7543 = 17U;
	int64_t x7544 = -168442049750447LL;
	int64_t t129 = 0LL;

    t129 = (((x7541>>x7542)|x7543)|x7544);

    if (t129 != -168440027414529LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x7563 = INT64_MAX;
	int32_t x7564 = INT32_MIN;

    t130 = (((x7561>>x7562)|x7563)|x7564);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x7593 = 9;
	volatile uint16_t x7594 = 16U;
	int32_t x7596 = INT32_MIN;
	volatile int32_t t131 = 2613;

    t131 = (((x7593>>x7594)|x7595)|x7596);

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x7641 = 1278U;
	int8_t x7642 = 0;
	int32_t x7644 = INT32_MIN;
	volatile int32_t t132 = 15151;

    t132 = (((x7641>>x7642)|x7643)|x7644);

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x7761 = 85170U;
	volatile uint16_t x7762 = 27U;
	volatile uint32_t x7763 = 6117580U;
	static volatile uint32_t t133 = 26U;

    t133 = (((x7761>>x7762)|x7763)|x7764);

    if (t133 != 2153601228U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x7865 = 517LLU;
	volatile uint16_t x7866 = 48U;
	volatile int32_t x7867 = -1;
	int16_t x7868 = INT16_MIN;
	uint64_t t134 = UINT64_MAX;

    t134 = (((x7865>>x7866)|x7867)|x7868);

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x7874 = 8U;
	uint8_t x7875 = 90U;
	static int8_t x7876 = INT8_MIN;
	int64_t t135 = -9012803LL;

    t135 = (((x7873>>x7874)|x7875)|x7876);

    if (t135 != -38LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x7922 = 3U;
	int64_t x7923 = 509494625130430136LL;
	int16_t x7924 = INT16_MAX;
	int64_t t136 = 1LL;

    t136 = (((x7921>>x7922)|x7923)|x7924);

    if (t136 != 509494625130446847LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x7929 = 4LLU;
	int8_t x7930 = 61;
	volatile uint32_t x7931 = 7609240U;
	static volatile uint64_t t137 = 15617962899LLU;

    t137 = (((x7929>>x7930)|x7931)|x7932);

    if (t137 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x7981 = INT8_MAX;
	uint32_t x7982 = 1U;
	volatile int8_t x7983 = INT8_MIN;
	int64_t x7984 = INT64_MAX;
	volatile int64_t t138 = -28474065709948LL;

    t138 = (((x7981>>x7982)|x7983)|x7984);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x8077 = UINT16_MAX;
	static int32_t x8078 = 0;
	static int8_t x8079 = INT8_MIN;
	static volatile uint8_t x8080 = UINT8_MAX;
	volatile int32_t t139 = 2630758;

    t139 = (((x8077>>x8078)|x8079)|x8080);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x8137 = UINT64_MAX;
	static int8_t x8138 = 1;
	uint64_t x8139 = UINT64_MAX;
	int16_t x8140 = INT16_MIN;
	static uint64_t t140 = UINT64_MAX;

    t140 = (((x8137>>x8138)|x8139)|x8140);

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x8217 = UINT32_MAX;
	uint16_t x8218 = 0U;
	static volatile int32_t x8219 = INT32_MAX;
	uint16_t x8220 = 40U;

    t141 = (((x8217>>x8218)|x8219)|x8220);

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x8277 = 188085079LL;
	int64_t x8278 = 0LL;
	uint16_t x8279 = 2139U;
	int64_t x8280 = -1646865627095804588LL;

    t142 = (((x8277>>x8278)|x8279)|x8280);

    if (t142 != -1646865627044380833LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x8285 = 9;
	int8_t x8286 = 0;
	int32_t x8287 = -237;
	int32_t x8288 = INT32_MAX;
	static int32_t t143 = -50;

    t143 = (((x8285>>x8286)|x8287)|x8288);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x8353 = INT64_MAX;
	uint8_t x8354 = 17U;
	static uint32_t x8355 = UINT32_MAX;
	int16_t x8356 = INT16_MAX;
	volatile int64_t t144 = 13494105193211LL;

    t144 = (((x8353>>x8354)|x8355)|x8356);

    if (t144 != 70368744177663LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x8545 = UINT8_MAX;
	static int64_t x8547 = INT64_MAX;
	int16_t x8548 = INT16_MIN;
	static int64_t t145 = -1866664462074LL;

    t145 = (((x8545>>x8546)|x8547)|x8548);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x8589 = INT16_MAX;
	uint8_t x8590 = 0U;
	volatile uint16_t x8591 = 23U;
	static int32_t x8592 = -1;
	volatile int32_t t146 = -334955;

    t146 = (((x8589>>x8590)|x8591)|x8592);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x8597 = UINT16_MAX;
	uint32_t x8599 = UINT32_MAX;
	int16_t x8600 = INT16_MIN;
	uint32_t t147 = UINT32_MAX;

    t147 = (((x8597>>x8598)|x8599)|x8600);

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x8637 = INT8_MAX;
	int16_t x8639 = 0;
	int64_t t148 = INT64_MIN;

    t148 = (((x8637>>x8638)|x8639)|x8640);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x8673 = 4U;
	uint8_t x8674 = 15U;
	static int64_t x8676 = INT64_MAX;
	volatile int64_t t149 = 302333LL;

    t149 = (((x8673>>x8674)|x8675)|x8676);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x8877 = INT64_MAX;
	volatile uint8_t x8878 = 3U;
	int16_t x8880 = -1;
	int64_t t150 = -36051287LL;

    t150 = (((x8877>>x8878)|x8879)|x8880);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x8913 = 4464U;
	int8_t x8914 = 30;
	static uint16_t x8915 = 0U;
	uint32_t t151 = 415U;

    t151 = (((x8913>>x8914)|x8915)|x8916);

    if (t151 != 65535U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x9065 = 151676668320LLU;
	uint32_t x9066 = 5U;
	int8_t x9067 = INT8_MAX;
	uint64_t t152 = 1935565571412LLU;

    t152 = (((x9065>>x9066)|x9067)|x9068);

    if (t152 != 4744249087LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x9113 = INT8_MAX;
	int16_t x9114 = 4;
	static int16_t x9116 = 57;
	int32_t t153 = -68426;

    t153 = (((x9113>>x9114)|x9115)|x9116);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x9141 = UINT64_MAX;
	int32_t x9142 = 5;
	uint16_t x9143 = 1U;
	static uint16_t x9144 = UINT16_MAX;
	volatile uint64_t t154 = 3594657548120717788LLU;

    t154 = (((x9141>>x9142)|x9143)|x9144);

    if (t154 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x9153 = 2793U;
	volatile uint8_t x9154 = 12U;
	static int32_t x9155 = INT32_MIN;
	int16_t x9156 = 5;
	static int32_t t155 = 1936;

    t155 = (((x9153>>x9154)|x9155)|x9156);

    if (t155 != -2147483643) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x9193 = 0;
	static int16_t x9194 = 1;
	int32_t x9195 = INT32_MIN;
	volatile int32_t t156 = 1044;

    t156 = (((x9193>>x9194)|x9195)|x9196);

    if (t156 != -2147483609) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x9209 = 1U;
	int32_t x9211 = INT32_MIN;
	int16_t x9212 = INT16_MAX;
	static int32_t t157 = 32927903;

    t157 = (((x9209>>x9210)|x9211)|x9212);

    if (t157 != -2147450881) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x9237 = INT16_MAX;
	int64_t x9238 = 1LL;
	volatile int32_t x9239 = INT32_MIN;
	volatile uint64_t x9240 = 34LLU;
	uint64_t t158 = 1061494529520667433LLU;

    t158 = (((x9237>>x9238)|x9239)|x9240);

    if (t158 != 18446744071562084351LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x9350 = 1U;
	static volatile uint32_t x9351 = 1403642U;
	uint32_t x9352 = UINT32_MAX;
	int64_t t159 = 17886468265449986LL;

    t159 = (((x9349>>x9350)|x9351)|x9352);

    if (t159 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x9385 = INT32_MAX;
	uint8_t x9386 = 3U;
	volatile int16_t x9387 = 7389;
	volatile int8_t x9388 = INT8_MAX;
	int32_t t160 = -505;

    t160 = (((x9385>>x9386)|x9387)|x9388);

    if (t160 != 268435455) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x9469 = INT64_MAX;
	uint8_t x9470 = 3U;
	uint32_t x9472 = 6U;
	volatile int64_t t161 = 787380300808943LL;

    t161 = (((x9469>>x9470)|x9471)|x9472);

    if (t161 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x9489 = UINT32_MAX;
	int8_t x9490 = 0;
	volatile uint64_t x9491 = UINT64_MAX;

    t162 = (((x9489>>x9490)|x9491)|x9492);

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x9513 = INT16_MAX;
	int8_t x9514 = 0;
	static uint8_t x9516 = UINT8_MAX;
	volatile int32_t t163 = -35469;

    t163 = (((x9513>>x9514)|x9515)|x9516);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x9545 = 1U;
	uint64_t x9547 = 45LLU;
	int8_t x9548 = INT8_MAX;
	volatile uint64_t t164 = 128252229LLU;

    t164 = (((x9545>>x9546)|x9547)|x9548);

    if (t164 != 127LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x9577 = 7;
	int16_t x9578 = 6;
	volatile int64_t x9580 = INT64_MIN;
	static uint64_t t165 = 5060771223935LLU;

    t165 = (((x9577>>x9578)|x9579)|x9580);

    if (t165 != 9223374708128859844LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x9581 = UINT8_MAX;
	uint8_t x9582 = 22U;
	uint8_t x9583 = UINT8_MAX;
	int32_t x9584 = INT32_MAX;
	volatile int32_t t166 = INT32_MAX;

    t166 = (((x9581>>x9582)|x9583)|x9584);

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x9685 = INT8_MAX;
	volatile uint8_t x9687 = UINT8_MAX;
	int16_t x9688 = -3919;
	volatile int32_t t167 = 1623;

    t167 = (((x9685>>x9686)|x9687)|x9688);

    if (t167 != -3841) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x9689 = 1903U;
	static int32_t x9691 = INT32_MIN;
	uint64_t x9692 = 451620108582853219LLU;
	static volatile uint64_t t168 = 1LLU;

    t168 = (((x9689>>x9690)|x9691)|x9692);

    if (t168 != 451620108582853623LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x9793 = INT64_MAX;
	uint8_t x9794 = 0U;
	int16_t x9795 = INT16_MIN;
	volatile int8_t x9796 = INT8_MIN;
	volatile int64_t t169 = -2518356882LL;

    t169 = (((x9793>>x9794)|x9795)|x9796);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x9825 = UINT8_MAX;
	uint16_t x9826 = 23U;
	uint64_t x9827 = UINT64_MAX;
	uint64_t t170 = UINT64_MAX;

    t170 = (((x9825>>x9826)|x9827)|x9828);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x9873 = INT32_MAX;
	volatile uint16_t x9874 = 16U;
	int8_t x9875 = 0;
	int8_t x9876 = INT8_MIN;
	int32_t t171 = 1;

    t171 = (((x9873>>x9874)|x9875)|x9876);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x9945 = UINT8_MAX;
	uint32_t x9947 = 152U;
	int8_t x9948 = INT8_MIN;

    t172 = (((x9945>>x9946)|x9947)|x9948);

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x9954 = 3LLU;
	static int64_t x9955 = INT64_MIN;

    t173 = (((x9953>>x9954)|x9955)|x9956);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x9981 = 6395602;
	uint8_t x9982 = 9U;
	uint8_t x9983 = UINT8_MAX;
	static volatile int32_t x9984 = INT32_MIN;
	volatile int32_t t174 = 1;

    t174 = (((x9981>>x9982)|x9983)|x9984);

    if (t174 != -2147471105) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x10097 = 33U;
	uint64_t x10100 = UINT64_MAX;
	static volatile uint64_t t175 = UINT64_MAX;

    t175 = (((x10097>>x10098)|x10099)|x10100);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x10101 = 7086646918LL;
	uint8_t x10102 = 3U;
	static volatile int16_t x10103 = 46;
	int16_t x10104 = INT16_MIN;
	volatile int64_t t176 = -39492774598607LL;

    t176 = (((x10101>>x10102)|x10103)|x10104);

    if (t176 != -19202LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x10233 = 72946695085LL;
	volatile int32_t x10234 = 14;
	uint8_t x10235 = 3U;
	uint32_t x10236 = 1335828U;
	volatile int64_t t177 = -1710552907225823734LL;

    t177 = (((x10233>>x10234)|x10235)|x10236);

    if (t177 != 5763039LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x10245 = 3399U;
	uint16_t x10246 = 9U;
	static volatile int64_t x10247 = -1LL;
	int32_t x10248 = INT32_MAX;
	int64_t t178 = -1LL;

    t178 = (((x10245>>x10246)|x10247)|x10248);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x10249 = UINT16_MAX;
	int8_t x10250 = 4;
	int64_t x10251 = INT64_MIN;
	int16_t x10252 = INT16_MIN;
	int64_t t179 = 3069321LL;

    t179 = (((x10249>>x10250)|x10251)|x10252);

    if (t179 != -28673LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x10282 = 7LL;
	uint32_t x10283 = 45U;
	volatile int64_t x10284 = 263775700934950LL;

    t180 = (((x10281>>x10282)|x10283)|x10284);

    if (t180 != 263775700935151LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x10293 = 23766073;
	volatile uint16_t x10294 = 0U;
	uint16_t x10295 = 63U;
	uint32_t x10296 = 61271959U;
	static volatile uint32_t t181 = 1624679737U;

    t181 = (((x10293>>x10294)|x10295)|x10296);

    if (t181 != 65990591U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x10373 = 0U;
	static int16_t x10376 = 496;
	int32_t t182 = 370528696;

    t182 = (((x10373>>x10374)|x10375)|x10376);

    if (t182 != -2147483152) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x10431 = 133;
	uint64_t x10432 = UINT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = (((x10429>>x10430)|x10431)|x10432);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x10525 = UINT32_MAX;
	static int16_t x10527 = -1;
	static int8_t x10528 = -1;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (((x10525>>x10526)|x10527)|x10528);

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x10545 = 28024909U;
	static uint32_t x10546 = 30U;
	int64_t x10547 = INT64_MIN;
	int64_t x10548 = -1LL;
	static int64_t t185 = 0LL;

    t185 = (((x10545>>x10546)|x10547)|x10548);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x10566 = 1U;
	int8_t x10567 = -1;
	uint16_t x10568 = UINT16_MAX;
	volatile int32_t t186 = -31083;

    t186 = (((x10565>>x10566)|x10567)|x10568);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x10621 = 2593100915LL;
	int64_t x10622 = 27LL;
	uint64_t x10623 = 5LLU;
	uint8_t x10624 = 58U;

    t187 = (((x10621>>x10622)|x10623)|x10624);

    if (t187 != 63LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x10677 = 429U;
	int8_t x10679 = INT8_MIN;
	int8_t x10680 = INT8_MAX;
	static uint32_t t188 = UINT32_MAX;

    t188 = (((x10677>>x10678)|x10679)|x10680);

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x10685 = 2U;
	static int8_t x10687 = INT8_MAX;
	uint64_t x10688 = UINT64_MAX;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = (((x10685>>x10686)|x10687)|x10688);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x10698 = 52;
	static int16_t x10699 = 4271;
	int8_t x10700 = -1;
	uint64_t t190 = UINT64_MAX;

    t190 = (((x10697>>x10698)|x10699)|x10700);

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x10705 = UINT16_MAX;
	int16_t x10708 = 404;

    t191 = (((x10705>>x10706)|x10707)|x10708);

    if (t191 != 511U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x10817 = 109;
	uint8_t x10818 = 4U;
	static uint16_t x10819 = 931U;
	static volatile uint8_t x10820 = 102U;

    t192 = (((x10817>>x10818)|x10819)|x10820);

    if (t192 != 999) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x10909 = INT64_MAX;
	volatile uint32_t x10910 = 53U;
	volatile int32_t x10911 = -1;
	int32_t x10912 = INT32_MIN;
	volatile int64_t t193 = -1459LL;

    t193 = (((x10909>>x10910)|x10911)|x10912);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint64_t x10941 = 8523560169504226546LLU;
	int64_t x10944 = INT64_MIN;
	uint64_t t194 = UINT64_MAX;

    t194 = (((x10941>>x10942)|x10943)|x10944);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x11013 = 9740458U;
	volatile uint8_t x11014 = 2U;
	volatile int8_t x11015 = INT8_MAX;
	int16_t x11016 = INT16_MIN;
	volatile uint32_t t195 = 1223928551U;

    t195 = (((x11013>>x11014)|x11015)|x11016);

    if (t195 != 4294944895U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x11097 = 37U;
	int16_t x11098 = 0;
	uint64_t x11099 = 4LLU;
	static volatile uint32_t x11100 = UINT32_MAX;
	volatile uint64_t t196 = 187184LLU;

    t196 = (((x11097>>x11098)|x11099)|x11100);

    if (t196 != 4294967295LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x11118 = 14U;
	int64_t x11119 = INT64_MAX;
	uint32_t x11120 = UINT32_MAX;
	int64_t t197 = INT64_MAX;

    t197 = (((x11117>>x11118)|x11119)|x11120);

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x11125 = 116U;
	static volatile uint16_t x11126 = 31U;
	static int64_t t198 = INT64_MAX;

    t198 = (((x11125>>x11126)|x11127)|x11128);

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x11145 = 11LLU;
	static int8_t x11146 = 7;
	uint8_t x11147 = 1U;
	int16_t x11148 = INT16_MIN;
	static uint64_t t199 = 42425481557180LLU;

    t199 = (((x11145>>x11146)|x11147)|x11148);

    if (t199 != 18446744073709518849LLU) { NG(); } else { ; }
	
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

