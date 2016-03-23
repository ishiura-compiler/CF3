
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

int8_t x84 = 0;
static volatile int32_t x154 = -1;
static int8_t x156 = 0;
volatile int16_t x239 = INT16_MAX;
static int16_t x381 = INT16_MIN;
uint32_t x383 = UINT32_MAX;
int32_t t13 = -142;
int64_t x713 = INT64_MAX;
volatile int32_t t16 = -10705;
uint64_t x759 = UINT64_MAX;
int64_t x815 = -1LL;
uint16_t x831 = 12254U;
static volatile int32_t t20 = -18;
uint16_t x918 = 16977U;
static int16_t x919 = -4861;
int64_t x1171 = -15LL;
int16_t x1172 = 0;
int64_t x1182 = INT64_MAX;
static volatile int8_t x1290 = INT8_MIN;
volatile uint16_t x1292 = 24U;
volatile int32_t t26 = -2469;
uint16_t x1332 = 31U;
volatile uint8_t x1341 = 28U;
int64_t x1342 = INT64_MIN;
uint16_t x1371 = 23U;
volatile int8_t x1386 = INT8_MIN;
static volatile int32_t t30 = -93279;
int8_t x1390 = -1;
uint8_t x1391 = 71U;
volatile int32_t t31 = 79;
int32_t x1465 = INT32_MIN;
int32_t t35 = -1764;
uint64_t x1471 = UINT64_MAX;
volatile int64_t x1472 = 13LL;
int64_t x1531 = 125371408718LL;
static int8_t x1554 = -1;
volatile int32_t t39 = -297647077;
uint16_t x1581 = UINT16_MAX;
static int8_t x1622 = 3;
volatile int16_t x1633 = INT16_MAX;
int16_t x1634 = -1;
int16_t x1635 = -1;
volatile int32_t t45 = 576224;
int32_t x1669 = -48793;
int8_t x1697 = -1;
int32_t x1699 = -1;
static uint8_t x1752 = 1U;
uint8_t x1756 = 1U;
int64_t x1757 = INT64_MIN;
static int8_t x1761 = INT8_MIN;
static uint8_t x1764 = 3U;
int8_t x1825 = -1;
int64_t x1903 = 16184719804481127LL;
static int16_t x1904 = 1;
uint8_t x1908 = 3U;
int64_t x1943 = 205083297975017580LL;
volatile uint8_t x2085 = 17U;
static int32_t x2087 = INT32_MAX;
int16_t x2088 = 5;
volatile int32_t t57 = -925674;
static uint64_t x2162 = UINT64_MAX;
int64_t x2241 = -1908036898847LL;
int64_t x2269 = INT64_MIN;
int16_t x2271 = INT16_MAX;
volatile int8_t x2336 = 1;
static volatile int64_t x2362 = 11956236LL;
int32_t t65 = -43559087;
uint8_t x2569 = 7U;
static int64_t x2626 = -1LL;
uint8_t x2640 = 18U;
static int16_t x2649 = -3313;
uint16_t x2724 = 26U;
static volatile int8_t x2817 = 5;
uint32_t x2820 = 25U;
int8_t x2840 = 5;
int32_t x2841 = INT32_MIN;
volatile int32_t t82 = 53;
volatile int32_t t83 = -3237;
volatile int16_t x2870 = INT16_MIN;
int64_t x2883 = -1041095626826941LL;
uint32_t x2891 = UINT32_MAX;
volatile int32_t x2892 = 1;
static int32_t t88 = 123;
static volatile int32_t t89 = 339;
int8_t x3054 = INT8_MIN;
static uint8_t x3220 = 0U;
static uint64_t x3483 = 5LLU;
uint8_t x3484 = 10U;
int32_t x3499 = 6379419;
int64_t x3500 = 0LL;
int16_t x3555 = 1;
int8_t x3620 = 23;
uint8_t x3644 = 31U;
int32_t x3646 = INT32_MIN;
static uint64_t x3666 = 289429716255375925LLU;
int8_t x3668 = 1;
int32_t t102 = 2291;
uint8_t x3669 = 71U;
uint16_t x3688 = 17U;
int32_t t104 = 14;
volatile int32_t t105 = -173076249;
int8_t x3753 = INT8_MIN;
static uint32_t x3765 = 0U;
volatile uint8_t x3768 = 31U;
uint8_t x3804 = 6U;
uint8_t x3901 = 2U;
uint64_t x3902 = 955363512372240608LLU;
int32_t t113 = 55;
uint8_t x3956 = 1U;
volatile int16_t x4005 = INT16_MIN;
uint8_t x4019 = UINT8_MAX;
int8_t x4037 = INT8_MIN;
int64_t x4062 = -431656776928958869LL;
static int8_t x4189 = 12;
static int8_t x4191 = INT8_MAX;
int16_t x4192 = 0;
int16_t x4229 = INT16_MIN;
volatile int32_t t123 = -190365;
uint32_t x4253 = 2305814U;
volatile int32_t t127 = 29;
volatile uint32_t x4280 = 3U;
int64_t x4326 = INT64_MIN;
static int16_t x4374 = -105;
int64_t x4445 = -1LL;
volatile uint64_t x4458 = 5442618562LLU;
volatile int64_t x4462 = 4LL;
int16_t x4532 = 18;
volatile int32_t t137 = 857331769;
int32_t t139 = 84856837;
int8_t x4630 = -1;
uint8_t x4632 = 30U;
static int32_t t143 = 2;
volatile int64_t x4734 = -1021739185935837745LL;
uint8_t x4736 = 0U;
uint32_t x4738 = 68894983U;
int32_t x4756 = 0;
int8_t x4766 = -31;
static int8_t x4780 = 20;
int32_t x4790 = INT32_MAX;
int64_t x4801 = 9805LL;
int32_t t150 = -192997;
int8_t x4844 = 1;
int64_t x4907 = 945277LL;
static int32_t t153 = 248111140;
volatile uint32_t x5098 = 6360825U;
volatile int32_t t157 = 175;
static uint32_t x5162 = UINT32_MAX;
int16_t x5274 = 192;
int16_t x5509 = INT16_MAX;
int32_t x5511 = -3961;
static volatile int16_t x5521 = 22;
uint16_t x5530 = 1U;
int8_t x5534 = -1;
int16_t x5547 = INT16_MIN;
int32_t t169 = 2141666;
uint8_t x5576 = 2U;
volatile int8_t x5706 = INT8_MIN;
int8_t x5819 = INT8_MIN;
uint32_t x5946 = UINT32_MAX;
int32_t x5958 = -1;
int32_t t178 = -679;
uint32_t x5970 = 46756457U;
int64_t x5971 = -1LL;
static uint64_t x5985 = 2942LLU;
int16_t x6092 = 4;
int16_t x6134 = INT16_MIN;
int32_t t183 = 0;
volatile int8_t x6160 = 23;
volatile uint64_t x6194 = 2166903449LLU;
int16_t x6202 = INT16_MIN;
int32_t x6209 = INT32_MIN;
volatile int64_t x6210 = INT64_MIN;
int32_t t190 = 121176158;
int32_t x6218 = -1;
int16_t x6220 = 7;
uint32_t x6275 = 20U;
int8_t x6366 = INT8_MIN;
static volatile int32_t t195 = 9047151;
int32_t t197 = 82410;
static int64_t x6535 = INT64_MIN;
volatile int32_t t199 = 4454077;


void f0(void) {
    	volatile int32_t x53 = -1;
	int8_t x54 = -7;
	volatile uint16_t x55 = 2U;
	volatile int64_t x56 = 5LL;
	volatile int32_t t0 = 192662;

    t0 = (((x53%x54)<=x55)>>x56);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x81 = UINT16_MAX;
	int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MAX;
	static volatile int32_t t1 = 2368;

    t1 = (((x81%x82)<=x83)>>x84);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x97 = 84706869488800729LLU;
	int16_t x98 = -462;
	uint64_t x99 = UINT64_MAX;
	uint16_t x100 = 2U;
	int32_t t2 = 121516731;

    t2 = (((x97%x98)<=x99)>>x100);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x153 = INT32_MAX;
	static int16_t x155 = -1;
	volatile int32_t t3 = -176803;

    t3 = (((x153%x154)<=x155)>>x156);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x197 = INT8_MIN;
	int16_t x198 = -3;
	volatile uint8_t x199 = 5U;
	static int8_t x200 = 1;
	int32_t t4 = 139604096;

    t4 = (((x197%x198)<=x199)>>x200);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x225 = INT16_MAX;
	uint64_t x226 = 152410236LLU;
	uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 6U;
	volatile int32_t t5 = -68111672;

    t5 = (((x225%x226)<=x227)>>x228);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x233 = INT64_MIN;
	static int8_t x234 = -29;
	int32_t x235 = INT32_MIN;
	static int8_t x236 = 23;
	int32_t t6 = 2671;

    t6 = (((x233%x234)<=x235)>>x236);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MAX;
	uint8_t x240 = 11U;
	int32_t t7 = -250;

    t7 = (((x237%x238)<=x239)>>x240);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x285 = -100;
	int64_t x286 = 8560227296085LL;
	int32_t x287 = INT32_MIN;
	volatile uint16_t x288 = 2U;
	volatile int32_t t8 = -1870724;

    t8 = (((x285%x286)<=x287)>>x288);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x357 = INT32_MIN;
	static int16_t x358 = INT16_MAX;
	static uint8_t x359 = 13U;
	uint8_t x360 = 1U;
	static volatile int32_t t9 = -235079;

    t9 = (((x357%x358)<=x359)>>x360);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x377 = 49335;
	static uint32_t x378 = 23581518U;
	int8_t x379 = INT8_MIN;
	int8_t x380 = 2;
	int32_t t10 = 8713290;

    t10 = (((x377%x378)<=x379)>>x380);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x382 = -1;
	uint32_t x384 = 13U;
	int32_t t11 = -158049836;

    t11 = (((x381%x382)<=x383)>>x384);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x553 = -1;
	static int64_t x554 = -268089LL;
	volatile uint32_t x555 = 131725197U;
	volatile int8_t x556 = 7;
	int32_t t12 = 1;

    t12 = (((x553%x554)<=x555)>>x556);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x573 = -1LL;
	volatile int16_t x574 = INT16_MIN;
	int32_t x575 = -1;
	static uint8_t x576 = 0U;

    t13 = (((x573%x574)<=x575)>>x576);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x714 = -21;
	static int16_t x715 = INT16_MAX;
	uint16_t x716 = 9U;
	int32_t t14 = 472531;

    t14 = (((x713%x714)<=x715)>>x716);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x717 = 46U;
	int32_t x718 = 247;
	int16_t x719 = INT16_MIN;
	int64_t x720 = 1LL;
	int32_t t15 = -907006521;

    t15 = (((x717%x718)<=x719)>>x720);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x721 = INT32_MIN;
	int32_t x722 = -1;
	int32_t x723 = -1564;
	static volatile int16_t x724 = 1;

    t16 = (((x721%x722)<=x723)>>x724);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x757 = UINT64_MAX;
	int32_t x758 = -29;
	int16_t x760 = 1;
	int32_t t17 = 446;

    t17 = (((x757%x758)<=x759)>>x760);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x781 = 206233220LLU;
	int8_t x782 = INT8_MAX;
	int32_t x783 = -1;
	int8_t x784 = 1;
	int32_t t18 = 884493;

    t18 = (((x781%x782)<=x783)>>x784);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x813 = INT32_MAX;
	volatile int64_t x814 = 3574739269378622638LL;
	int8_t x816 = 1;
	int32_t t19 = -13399385;

    t19 = (((x813%x814)<=x815)>>x816);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x829 = UINT16_MAX;
	uint64_t x830 = 35098588171336891LLU;
	int8_t x832 = 4;

    t20 = (((x829%x830)<=x831)>>x832);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x885 = 2742U;
	volatile uint16_t x886 = UINT16_MAX;
	static uint8_t x887 = UINT8_MAX;
	static uint64_t x888 = 1LLU;
	volatile int32_t t21 = -3922247;

    t21 = (((x885%x886)<=x887)>>x888);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x917 = UINT8_MAX;
	int32_t x920 = 1;
	int32_t t22 = -228932990;

    t22 = (((x917%x918)<=x919)>>x920);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1085 = 7U;
	volatile int64_t x1086 = -1LL;
	uint32_t x1087 = 0U;
	uint16_t x1088 = 27U;
	static int32_t t23 = -15262;

    t23 = (((x1085%x1086)<=x1087)>>x1088);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1169 = 580;
	uint8_t x1170 = UINT8_MAX;
	int32_t t24 = 20530;

    t24 = (((x1169%x1170)<=x1171)>>x1172);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1181 = INT16_MIN;
	int64_t x1183 = INT64_MIN;
	volatile uint8_t x1184 = 4U;
	int32_t t25 = -338752158;

    t25 = (((x1181%x1182)<=x1183)>>x1184);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1289 = INT64_MAX;
	static uint64_t x1291 = 3089117849178256LLU;

    t26 = (((x1289%x1290)<=x1291)>>x1292);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1329 = -1;
	uint64_t x1330 = 4LLU;
	uint32_t x1331 = 2082038U;
	volatile int32_t t27 = -17719944;

    t27 = (((x1329%x1330)<=x1331)>>x1332);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x1343 = INT16_MIN;
	uint64_t x1344 = 22LLU;
	volatile int32_t t28 = 140;

    t28 = (((x1341%x1342)<=x1343)>>x1344);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x1369 = INT16_MIN;
	int32_t x1370 = INT32_MIN;
	int64_t x1372 = 0LL;
	static int32_t t29 = 78249544;

    t29 = (((x1369%x1370)<=x1371)>>x1372);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1385 = INT8_MIN;
	int32_t x1387 = -1;
	static uint32_t x1388 = 1U;

    t30 = (((x1385%x1386)<=x1387)>>x1388);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1389 = INT64_MIN;
	int8_t x1392 = 1;

    t31 = (((x1389%x1390)<=x1391)>>x1392);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x1409 = 5U;
	int32_t x1410 = INT32_MIN;
	static int16_t x1411 = INT16_MIN;
	uint8_t x1412 = 0U;
	int32_t t32 = 29;

    t32 = (((x1409%x1410)<=x1411)>>x1412);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x1417 = UINT32_MAX;
	int8_t x1418 = INT8_MIN;
	int8_t x1419 = INT8_MIN;
	uint32_t x1420 = 22U;
	volatile int32_t t33 = -8107;

    t33 = (((x1417%x1418)<=x1419)>>x1420);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1429 = 0;
	static volatile int32_t x1430 = INT32_MIN;
	volatile uint32_t x1431 = 7U;
	static int16_t x1432 = 0;
	static int32_t t34 = -11016;

    t34 = (((x1429%x1430)<=x1431)>>x1432);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1466 = 52339LL;
	int16_t x1467 = INT16_MAX;
	uint16_t x1468 = 14U;

    t35 = (((x1465%x1466)<=x1467)>>x1468);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1469 = -36;
	volatile int64_t x1470 = INT64_MIN;
	int32_t t36 = 67827831;

    t36 = (((x1469%x1470)<=x1471)>>x1472);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1501 = 298;
	int32_t x1502 = INT32_MIN;
	static int64_t x1503 = -123147781515381LL;
	uint8_t x1504 = 1U;
	volatile int32_t t37 = -7;

    t37 = (((x1501%x1502)<=x1503)>>x1504);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1529 = INT64_MIN;
	int64_t x1530 = INT64_MIN;
	int8_t x1532 = 9;
	int32_t t38 = 265008498;

    t38 = (((x1529%x1530)<=x1531)>>x1532);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1553 = -1;
	int64_t x1555 = 19LL;
	uint8_t x1556 = 12U;

    t39 = (((x1553%x1554)<=x1555)>>x1556);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1582 = INT64_MIN;
	int64_t x1583 = INT64_MIN;
	uint8_t x1584 = 7U;
	volatile int32_t t40 = 4088940;

    t40 = (((x1581%x1582)<=x1583)>>x1584);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x1589 = 3499LLU;
	static uint64_t x1590 = UINT64_MAX;
	int16_t x1591 = -1;
	uint16_t x1592 = 6U;
	volatile int32_t t41 = -1589;

    t41 = (((x1589%x1590)<=x1591)>>x1592);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x1593 = 3U;
	int8_t x1594 = INT8_MIN;
	int16_t x1595 = 6755;
	uint32_t x1596 = 13U;
	int32_t t42 = -13214;

    t42 = (((x1593%x1594)<=x1595)>>x1596);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1621 = -1;
	int16_t x1623 = INT16_MIN;
	uint8_t x1624 = 1U;
	volatile int32_t t43 = 22;

    t43 = (((x1621%x1622)<=x1623)>>x1624);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x1636 = 1LLU;
	int32_t t44 = 1;

    t44 = (((x1633%x1634)<=x1635)>>x1636);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x1649 = INT64_MIN;
	int64_t x1650 = INT64_MIN;
	uint32_t x1651 = 20U;
	uint8_t x1652 = 9U;

    t45 = (((x1649%x1650)<=x1651)>>x1652);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1670 = -1;
	uint16_t x1671 = 31U;
	volatile int8_t x1672 = 29;
	volatile int32_t t46 = -154544308;

    t46 = (((x1669%x1670)<=x1671)>>x1672);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x1698 = 879313616992412LLU;
	volatile uint8_t x1700 = 17U;
	volatile int32_t t47 = -4935;

    t47 = (((x1697%x1698)<=x1699)>>x1700);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1749 = -149;
	volatile int32_t x1750 = INT32_MIN;
	int64_t x1751 = INT64_MAX;
	int32_t t48 = -327467;

    t48 = (((x1749%x1750)<=x1751)>>x1752);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x1753 = INT16_MIN;
	int16_t x1754 = INT16_MIN;
	static int64_t x1755 = INT64_MIN;
	static volatile int32_t t49 = 13363207;

    t49 = (((x1753%x1754)<=x1755)>>x1756);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1758 = 115393361;
	static volatile int32_t x1759 = 13111;
	static int16_t x1760 = 16;
	static int32_t t50 = -23541;

    t50 = (((x1757%x1758)<=x1759)>>x1760);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x1762 = INT64_MIN;
	static volatile int8_t x1763 = INT8_MIN;
	int32_t t51 = 17330123;

    t51 = (((x1761%x1762)<=x1763)>>x1764);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x1826 = INT64_MIN;
	uint32_t x1827 = 20U;
	uint16_t x1828 = 2U;
	int32_t t52 = 440;

    t52 = (((x1825%x1826)<=x1827)>>x1828);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x1885 = 113365U;
	int8_t x1886 = INT8_MIN;
	static volatile int32_t x1887 = -1;
	volatile uint8_t x1888 = 0U;
	int32_t t53 = -10304;

    t53 = (((x1885%x1886)<=x1887)>>x1888);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1901 = INT16_MIN;
	static uint16_t x1902 = 124U;
	static volatile int32_t t54 = 5498;

    t54 = (((x1901%x1902)<=x1903)>>x1904);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1905 = -1;
	uint32_t x1906 = 1694106U;
	int16_t x1907 = -1;
	volatile int32_t t55 = -18;

    t55 = (((x1905%x1906)<=x1907)>>x1908);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x1941 = UINT32_MAX;
	volatile uint16_t x1942 = 195U;
	static int8_t x1944 = 1;
	volatile int32_t t56 = -224721012;

    t56 = (((x1941%x1942)<=x1943)>>x1944);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2086 = 1214533LL;

    t57 = (((x2085%x2086)<=x2087)>>x2088);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x2153 = -1;
	static int8_t x2154 = INT8_MAX;
	int8_t x2155 = INT8_MIN;
	volatile int8_t x2156 = 28;
	static int32_t t58 = 95113;

    t58 = (((x2153%x2154)<=x2155)>>x2156);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2161 = -1;
	uint16_t x2163 = 29U;
	volatile uint16_t x2164 = 0U;
	int32_t t59 = 1;

    t59 = (((x2161%x2162)<=x2163)>>x2164);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x2201 = UINT8_MAX;
	int16_t x2202 = -1;
	int64_t x2203 = 211LL;
	static volatile int64_t x2204 = 27LL;
	volatile int32_t t60 = -1084;

    t60 = (((x2201%x2202)<=x2203)>>x2204);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x2229 = -1;
	volatile int32_t x2230 = -57;
	int16_t x2231 = INT16_MIN;
	int8_t x2232 = 5;
	static volatile int32_t t61 = -7141641;

    t61 = (((x2229%x2230)<=x2231)>>x2232);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x2242 = -10904;
	uint16_t x2243 = UINT16_MAX;
	int8_t x2244 = 0;
	static volatile int32_t t62 = 9825983;

    t62 = (((x2241%x2242)<=x2243)>>x2244);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x2270 = 3U;
	int16_t x2272 = 17;
	volatile int32_t t63 = 3896664;

    t63 = (((x2269%x2270)<=x2271)>>x2272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x2333 = 77U;
	volatile uint8_t x2334 = 1U;
	int64_t x2335 = INT64_MIN;
	static int32_t t64 = 42427265;

    t64 = (((x2333%x2334)<=x2335)>>x2336);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x2361 = 0U;
	int16_t x2363 = INT16_MIN;
	uint16_t x2364 = 4U;

    t65 = (((x2361%x2362)<=x2363)>>x2364);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x2425 = UINT32_MAX;
	volatile int64_t x2426 = -1LL;
	int64_t x2427 = -1LL;
	int8_t x2428 = 2;
	volatile int32_t t66 = -46822;

    t66 = (((x2425%x2426)<=x2427)>>x2428);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x2433 = UINT32_MAX;
	uint64_t x2434 = 13941760157351LLU;
	static uint16_t x2435 = 1U;
	static volatile uint8_t x2436 = 2U;
	static volatile int32_t t67 = 218865384;

    t67 = (((x2433%x2434)<=x2435)>>x2436);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x2570 = INT8_MIN;
	static volatile int32_t x2571 = -1;
	static uint8_t x2572 = 7U;
	int32_t t68 = 10;

    t68 = (((x2569%x2570)<=x2571)>>x2572);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x2625 = INT8_MIN;
	int16_t x2627 = INT16_MIN;
	volatile uint8_t x2628 = 11U;
	int32_t t69 = 306;

    t69 = (((x2625%x2626)<=x2627)>>x2628);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2637 = -17;
	int32_t x2638 = 1976878;
	uint64_t x2639 = UINT64_MAX;
	int32_t t70 = 4504536;

    t70 = (((x2637%x2638)<=x2639)>>x2640);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x2650 = -32;
	volatile uint16_t x2651 = 17U;
	static uint8_t x2652 = 1U;
	volatile int32_t t71 = 173;

    t71 = (((x2649%x2650)<=x2651)>>x2652);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2681 = INT8_MIN;
	int16_t x2682 = INT16_MIN;
	uint32_t x2683 = 380993U;
	static int16_t x2684 = 0;
	static int32_t t72 = 6292599;

    t72 = (((x2681%x2682)<=x2683)>>x2684);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2689 = INT8_MAX;
	int32_t x2690 = INT32_MIN;
	int32_t x2691 = INT32_MAX;
	volatile uint16_t x2692 = 14U;
	volatile int32_t t73 = 4;

    t73 = (((x2689%x2690)<=x2691)>>x2692);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x2713 = -1;
	uint32_t x2714 = 2862178U;
	static int32_t x2715 = -247569094;
	static uint64_t x2716 = 0LLU;
	int32_t t74 = 1;

    t74 = (((x2713%x2714)<=x2715)>>x2716);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2721 = -1;
	int32_t x2722 = -2;
	volatile int32_t x2723 = 21501935;
	static volatile int32_t t75 = -69926178;

    t75 = (((x2721%x2722)<=x2723)>>x2724);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x2773 = INT8_MAX;
	volatile int8_t x2774 = -1;
	static uint64_t x2775 = 29189586055129345LLU;
	static uint16_t x2776 = 5U;
	volatile int32_t t76 = -7;

    t76 = (((x2773%x2774)<=x2775)>>x2776);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2777 = 2;
	volatile int32_t x2778 = INT32_MIN;
	uint32_t x2779 = 2914U;
	int8_t x2780 = 10;
	int32_t t77 = -28;

    t77 = (((x2777%x2778)<=x2779)>>x2780);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2785 = -1LL;
	static volatile uint64_t x2786 = 3523178137135513311LLU;
	uint16_t x2787 = 39U;
	uint32_t x2788 = 0U;
	int32_t t78 = -2585;

    t78 = (((x2785%x2786)<=x2787)>>x2788);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x2818 = -1;
	int64_t x2819 = INT64_MIN;
	static int32_t t79 = -10;

    t79 = (((x2817%x2818)<=x2819)>>x2820);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x2825 = UINT8_MAX;
	int16_t x2826 = INT16_MAX;
	int8_t x2827 = -1;
	volatile uint8_t x2828 = 14U;
	volatile int32_t t80 = 1112134;

    t80 = (((x2825%x2826)<=x2827)>>x2828);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x2837 = INT8_MAX;
	volatile uint32_t x2838 = 23U;
	uint16_t x2839 = 54U;
	volatile int32_t t81 = -345;

    t81 = (((x2837%x2838)<=x2839)>>x2840);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x2842 = -1;
	uint8_t x2843 = 0U;
	static int8_t x2844 = 1;

    t82 = (((x2841%x2842)<=x2843)>>x2844);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x2845 = UINT16_MAX;
	int8_t x2846 = INT8_MIN;
	int16_t x2847 = INT16_MIN;
	volatile uint8_t x2848 = 3U;

    t83 = (((x2845%x2846)<=x2847)>>x2848);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2869 = INT16_MIN;
	int32_t x2871 = 12430537;
	int32_t x2872 = 2;
	volatile int32_t t84 = -40;

    t84 = (((x2869%x2870)<=x2871)>>x2872);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x2881 = 16U;
	uint64_t x2882 = UINT64_MAX;
	static int8_t x2884 = 0;
	volatile int32_t t85 = 202432279;

    t85 = (((x2881%x2882)<=x2883)>>x2884);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x2889 = INT32_MAX;
	int32_t x2890 = 112998731;
	int32_t t86 = -7;

    t86 = (((x2889%x2890)<=x2891)>>x2892);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x2905 = UINT64_MAX;
	int8_t x2906 = -1;
	static uint8_t x2907 = 2U;
	static uint32_t x2908 = 27U;
	static int32_t t87 = -3104;

    t87 = (((x2905%x2906)<=x2907)>>x2908);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x2981 = 38LL;
	static int16_t x2982 = INT16_MIN;
	uint8_t x2983 = 2U;
	static volatile uint8_t x2984 = 0U;

    t88 = (((x2981%x2982)<=x2983)>>x2984);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x3049 = UINT32_MAX;
	int8_t x3050 = -1;
	static int32_t x3051 = -1;
	uint8_t x3052 = 7U;

    t89 = (((x3049%x3050)<=x3051)>>x3052);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x3053 = INT8_MIN;
	int64_t x3055 = INT64_MAX;
	uint32_t x3056 = 27U;
	int32_t t90 = -472706;

    t90 = (((x3053%x3054)<=x3055)>>x3056);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x3217 = 4944U;
	int8_t x3218 = INT8_MIN;
	uint8_t x3219 = 96U;
	volatile int32_t t91 = -870243;

    t91 = (((x3217%x3218)<=x3219)>>x3220);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x3229 = 8338U;
	volatile int64_t x3230 = -1LL;
	uint64_t x3231 = 2134586328131966354LLU;
	int32_t x3232 = 6;
	int32_t t92 = -11371;

    t92 = (((x3229%x3230)<=x3231)>>x3232);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x3257 = INT64_MIN;
	volatile int8_t x3258 = INT8_MAX;
	volatile uint32_t x3259 = 318610398U;
	uint16_t x3260 = 3U;
	volatile int32_t t93 = 3;

    t93 = (((x3257%x3258)<=x3259)>>x3260);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x3309 = -1;
	int8_t x3310 = INT8_MAX;
	volatile int8_t x3311 = INT8_MAX;
	uint16_t x3312 = 0U;
	int32_t t94 = 24;

    t94 = (((x3309%x3310)<=x3311)>>x3312);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x3373 = 1974442565988568333LLU;
	int8_t x3374 = INT8_MAX;
	uint16_t x3375 = 42U;
	uint32_t x3376 = 0U;
	static volatile int32_t t95 = 1229;

    t95 = (((x3373%x3374)<=x3375)>>x3376);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x3481 = 1U;
	volatile uint64_t x3482 = 164LLU;
	volatile int32_t t96 = 589279;

    t96 = (((x3481%x3482)<=x3483)>>x3484);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x3497 = -1LL;
	static int16_t x3498 = INT16_MIN;
	int32_t t97 = 121;

    t97 = (((x3497%x3498)<=x3499)>>x3500);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint64_t x3553 = 27629464680LLU;
	uint8_t x3554 = UINT8_MAX;
	static uint8_t x3556 = 13U;
	int32_t t98 = 0;

    t98 = (((x3553%x3554)<=x3555)>>x3556);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x3617 = INT64_MIN;
	int64_t x3618 = -1LL;
	volatile int64_t x3619 = INT64_MIN;
	volatile int32_t t99 = -227362018;

    t99 = (((x3617%x3618)<=x3619)>>x3620);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3641 = -7;
	static int8_t x3642 = -1;
	static int32_t x3643 = INT32_MIN;
	static volatile int32_t t100 = 126;

    t100 = (((x3641%x3642)<=x3643)>>x3644);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x3645 = INT64_MIN;
	int8_t x3647 = -1;
	volatile uint32_t x3648 = 1U;
	static int32_t t101 = -1;

    t101 = (((x3645%x3646)<=x3647)>>x3648);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x3665 = 1U;
	int64_t x3667 = INT64_MIN;

    t102 = (((x3665%x3666)<=x3667)>>x3668);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x3670 = INT32_MIN;
	volatile int64_t x3671 = INT64_MIN;
	int16_t x3672 = 1;
	static int32_t t103 = 13753384;

    t103 = (((x3669%x3670)<=x3671)>>x3672);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x3685 = -1;
	uint16_t x3686 = 1U;
	static int8_t x3687 = -30;

    t104 = (((x3685%x3686)<=x3687)>>x3688);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x3693 = UINT64_MAX;
	int64_t x3694 = INT64_MIN;
	volatile uint64_t x3695 = UINT64_MAX;
	int8_t x3696 = 7;

    t105 = (((x3693%x3694)<=x3695)>>x3696);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3754 = -1;
	int64_t x3755 = 4710676537210LL;
	uint16_t x3756 = 27U;
	static int32_t t106 = -707283;

    t106 = (((x3753%x3754)<=x3755)>>x3756);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x3761 = -10;
	uint8_t x3762 = 5U;
	int32_t x3763 = INT32_MIN;
	static int32_t x3764 = 0;
	static volatile int32_t t107 = -124793;

    t107 = (((x3761%x3762)<=x3763)>>x3764);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x3766 = -4;
	volatile int32_t x3767 = -1;
	int32_t t108 = -438928488;

    t108 = (((x3765%x3766)<=x3767)>>x3768);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3777 = -1;
	volatile int32_t x3778 = INT32_MIN;
	int64_t x3779 = 37LL;
	int8_t x3780 = 0;
	volatile int32_t t109 = 35547;

    t109 = (((x3777%x3778)<=x3779)>>x3780);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x3797 = INT32_MIN;
	int32_t x3798 = INT32_MIN;
	volatile int32_t x3799 = INT32_MAX;
	uint8_t x3800 = 2U;
	int32_t t110 = -133;

    t110 = (((x3797%x3798)<=x3799)>>x3800);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x3801 = INT64_MIN;
	static int32_t x3802 = -6092537;
	static volatile uint32_t x3803 = UINT32_MAX;
	volatile int32_t t111 = 114;

    t111 = (((x3801%x3802)<=x3803)>>x3804);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x3829 = 222278856U;
	int8_t x3830 = INT8_MIN;
	int8_t x3831 = INT8_MIN;
	static uint16_t x3832 = 7U;
	volatile int32_t t112 = 20772;

    t112 = (((x3829%x3830)<=x3831)>>x3832);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3903 = INT8_MAX;
	uint32_t x3904 = 8U;

    t113 = (((x3901%x3902)<=x3903)>>x3904);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x3953 = -5;
	volatile int32_t x3954 = INT32_MIN;
	int64_t x3955 = 3LL;
	int32_t t114 = 11048;

    t114 = (((x3953%x3954)<=x3955)>>x3956);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x3997 = INT32_MIN;
	int8_t x3998 = -7;
	uint8_t x3999 = 1U;
	volatile uint16_t x4000 = 1U;
	volatile int32_t t115 = 1;

    t115 = (((x3997%x3998)<=x3999)>>x4000);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x4006 = 23U;
	volatile int16_t x4007 = -1;
	uint64_t x4008 = 9LLU;
	int32_t t116 = 1993;

    t116 = (((x4005%x4006)<=x4007)>>x4008);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x4017 = 1894U;
	volatile uint16_t x4018 = 3U;
	int8_t x4020 = 0;
	int32_t t117 = 496;

    t117 = (((x4017%x4018)<=x4019)>>x4020);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x4038 = INT8_MIN;
	volatile int32_t x4039 = INT32_MAX;
	static int32_t x4040 = 2;
	int32_t t118 = 15865;

    t118 = (((x4037%x4038)<=x4039)>>x4040);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x4061 = 7;
	int32_t x4063 = 48;
	uint8_t x4064 = 0U;
	volatile int32_t t119 = -460087;

    t119 = (((x4061%x4062)<=x4063)>>x4064);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x4125 = 1U;
	uint16_t x4126 = UINT16_MAX;
	static volatile int32_t x4127 = INT32_MIN;
	uint8_t x4128 = 30U;
	volatile int32_t t120 = -2125;

    t120 = (((x4125%x4126)<=x4127)>>x4128);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x4177 = UINT16_MAX;
	int32_t x4178 = -98210;
	int16_t x4179 = 503;
	volatile uint8_t x4180 = 6U;
	volatile int32_t t121 = -429671;

    t121 = (((x4177%x4178)<=x4179)>>x4180);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x4190 = INT8_MIN;
	static volatile int32_t t122 = 4;

    t122 = (((x4189%x4190)<=x4191)>>x4192);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x4230 = -28;
	volatile int64_t x4231 = -8318778333LL;
	uint32_t x4232 = 3U;

    t123 = (((x4229%x4230)<=x4231)>>x4232);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4241 = -1;
	int32_t x4242 = -93;
	int16_t x4243 = -1;
	uint16_t x4244 = 13U;
	volatile int32_t t124 = -9;

    t124 = (((x4241%x4242)<=x4243)>>x4244);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x4249 = UINT64_MAX;
	int16_t x4250 = INT16_MAX;
	int8_t x4251 = -7;
	volatile int8_t x4252 = 1;
	volatile int32_t t125 = 375459;

    t125 = (((x4249%x4250)<=x4251)>>x4252);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x4254 = -1;
	static uint64_t x4255 = UINT64_MAX;
	static uint8_t x4256 = 30U;
	volatile int32_t t126 = -38;

    t126 = (((x4253%x4254)<=x4255)>>x4256);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x4261 = 2259U;
	static volatile int8_t x4262 = INT8_MIN;
	volatile uint32_t x4263 = UINT32_MAX;
	int8_t x4264 = 3;

    t127 = (((x4261%x4262)<=x4263)>>x4264);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x4277 = 83;
	static uint16_t x4278 = 43U;
	int32_t x4279 = -27;
	int32_t t128 = 5;

    t128 = (((x4277%x4278)<=x4279)>>x4280);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x4325 = -8;
	volatile int8_t x4327 = INT8_MAX;
	uint16_t x4328 = 0U;
	int32_t t129 = -933290952;

    t129 = (((x4325%x4326)<=x4327)>>x4328);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x4373 = 36U;
	static volatile int8_t x4375 = -1;
	uint8_t x4376 = 4U;
	volatile int32_t t130 = -924;

    t130 = (((x4373%x4374)<=x4375)>>x4376);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x4397 = 40U;
	volatile int16_t x4398 = 47;
	static int8_t x4399 = -1;
	uint16_t x4400 = 18U;
	int32_t t131 = -186632;

    t131 = (((x4397%x4398)<=x4399)>>x4400);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x4446 = INT16_MIN;
	volatile int32_t x4447 = -1;
	static int8_t x4448 = 1;
	volatile int32_t t132 = 18072;

    t132 = (((x4445%x4446)<=x4447)>>x4448);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x4457 = INT16_MIN;
	uint64_t x4459 = UINT64_MAX;
	uint32_t x4460 = 4U;
	volatile int32_t t133 = -730489007;

    t133 = (((x4457%x4458)<=x4459)>>x4460);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x4461 = 8769606U;
	int32_t x4463 = 3935330;
	uint8_t x4464 = 29U;
	volatile int32_t t134 = 557086;

    t134 = (((x4461%x4462)<=x4463)>>x4464);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x4469 = UINT8_MAX;
	int64_t x4470 = 539LL;
	int8_t x4471 = INT8_MAX;
	uint8_t x4472 = 0U;
	static volatile int32_t t135 = 8347;

    t135 = (((x4469%x4470)<=x4471)>>x4472);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x4517 = INT32_MIN;
	int8_t x4518 = INT8_MIN;
	uint8_t x4519 = 2U;
	uint64_t x4520 = 9LLU;
	volatile int32_t t136 = -1;

    t136 = (((x4517%x4518)<=x4519)>>x4520);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x4529 = 2U;
	int16_t x4530 = INT16_MIN;
	static int64_t x4531 = INT64_MIN;

    t137 = (((x4529%x4530)<=x4531)>>x4532);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x4553 = INT32_MIN;
	volatile int32_t x4554 = INT32_MAX;
	volatile int64_t x4555 = INT64_MIN;
	uint8_t x4556 = 3U;
	volatile int32_t t138 = 124290;

    t138 = (((x4553%x4554)<=x4555)>>x4556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x4593 = UINT64_MAX;
	static int8_t x4594 = INT8_MAX;
	int16_t x4595 = INT16_MIN;
	static uint16_t x4596 = 11U;

    t139 = (((x4593%x4594)<=x4595)>>x4596);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x4629 = 11774812U;
	int16_t x4631 = 1;
	static int32_t t140 = 127;

    t140 = (((x4629%x4630)<=x4631)>>x4632);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4685 = -32658186435890051LL;
	volatile int8_t x4686 = -1;
	volatile uint8_t x4687 = 11U;
	uint8_t x4688 = 1U;
	volatile int32_t t141 = 747152;

    t141 = (((x4685%x4686)<=x4687)>>x4688);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x4709 = INT8_MAX;
	uint32_t x4710 = 47531U;
	volatile uint32_t x4711 = UINT32_MAX;
	uint8_t x4712 = 10U;
	static volatile int32_t t142 = 29935;

    t142 = (((x4709%x4710)<=x4711)>>x4712);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4713 = 3751;
	static volatile int64_t x4714 = -142696524389316595LL;
	int16_t x4715 = INT16_MAX;
	uint8_t x4716 = 0U;

    t143 = (((x4713%x4714)<=x4715)>>x4716);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x4733 = 90039LLU;
	int64_t x4735 = -80427674371LL;
	volatile int32_t t144 = 242;

    t144 = (((x4733%x4734)<=x4735)>>x4736);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x4737 = UINT8_MAX;
	int64_t x4739 = INT64_MIN;
	uint8_t x4740 = 1U;
	volatile int32_t t145 = 45196;

    t145 = (((x4737%x4738)<=x4739)>>x4740);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x4753 = 0U;
	uint16_t x4754 = 29U;
	static volatile int64_t x4755 = -1LL;
	int32_t t146 = -10476166;

    t146 = (((x4753%x4754)<=x4755)>>x4756);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x4765 = INT64_MIN;
	int8_t x4767 = -1;
	int8_t x4768 = 8;
	int32_t t147 = 121991;

    t147 = (((x4765%x4766)<=x4767)>>x4768);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x4777 = 3697940886294861LLU;
	static int8_t x4778 = INT8_MAX;
	int16_t x4779 = INT16_MAX;
	int32_t t148 = 2108650;

    t148 = (((x4777%x4778)<=x4779)>>x4780);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x4789 = INT16_MAX;
	static int32_t x4791 = INT32_MIN;
	volatile uint16_t x4792 = 7U;
	volatile int32_t t149 = -110;

    t149 = (((x4789%x4790)<=x4791)>>x4792);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x4802 = 1;
	static int64_t x4803 = INT64_MIN;
	volatile uint8_t x4804 = 26U;

    t150 = (((x4801%x4802)<=x4803)>>x4804);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x4841 = INT16_MIN;
	uint32_t x4842 = 4776828U;
	int32_t x4843 = -1;
	volatile int32_t t151 = 2361335;

    t151 = (((x4841%x4842)<=x4843)>>x4844);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x4889 = 156791609U;
	int16_t x4890 = INT16_MAX;
	volatile uint64_t x4891 = 3048849263LLU;
	uint32_t x4892 = 19U;
	volatile int32_t t152 = -886873620;

    t152 = (((x4889%x4890)<=x4891)>>x4892);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x4905 = INT8_MIN;
	int64_t x4906 = 464328781LL;
	uint32_t x4908 = 2U;

    t153 = (((x4905%x4906)<=x4907)>>x4908);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x4993 = INT8_MAX;
	uint32_t x4994 = UINT32_MAX;
	int64_t x4995 = -450LL;
	volatile uint32_t x4996 = 3U;
	volatile int32_t t154 = -1815;

    t154 = (((x4993%x4994)<=x4995)>>x4996);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x5001 = INT8_MAX;
	uint32_t x5002 = 993051459U;
	int64_t x5003 = -1LL;
	uint8_t x5004 = 2U;
	int32_t t155 = 51313935;

    t155 = (((x5001%x5002)<=x5003)>>x5004);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x5025 = -23;
	uint16_t x5026 = 211U;
	static int64_t x5027 = INT64_MIN;
	volatile uint8_t x5028 = 0U;
	int32_t t156 = 977;

    t156 = (((x5025%x5026)<=x5027)>>x5028);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x5097 = INT8_MIN;
	volatile uint16_t x5099 = 345U;
	uint16_t x5100 = 4U;

    t157 = (((x5097%x5098)<=x5099)>>x5100);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x5161 = 2U;
	int32_t x5163 = -717867;
	uint16_t x5164 = 4U;
	volatile int32_t t158 = 515;

    t158 = (((x5161%x5162)<=x5163)>>x5164);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x5205 = INT8_MIN;
	volatile uint32_t x5206 = 128705U;
	int32_t x5207 = INT32_MIN;
	volatile uint64_t x5208 = 4LLU;
	static volatile int32_t t159 = -39;

    t159 = (((x5205%x5206)<=x5207)>>x5208);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x5237 = -1;
	static uint16_t x5238 = 1U;
	int8_t x5239 = -1;
	static uint8_t x5240 = 1U;
	volatile int32_t t160 = -4523;

    t160 = (((x5237%x5238)<=x5239)>>x5240);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x5273 = INT64_MIN;
	int64_t x5275 = INT64_MIN;
	uint16_t x5276 = 21U;
	volatile int32_t t161 = 1500058;

    t161 = (((x5273%x5274)<=x5275)>>x5276);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x5373 = 4477U;
	int16_t x5374 = -1;
	int16_t x5375 = INT16_MAX;
	static int32_t x5376 = 1;
	volatile int32_t t162 = -1193108;

    t162 = (((x5373%x5374)<=x5375)>>x5376);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x5405 = INT64_MAX;
	static int32_t x5406 = -77313598;
	uint8_t x5407 = 4U;
	uint8_t x5408 = 1U;
	volatile int32_t t163 = 12416;

    t163 = (((x5405%x5406)<=x5407)>>x5408);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5510 = INT8_MIN;
	int8_t x5512 = 0;
	int32_t t164 = 0;

    t164 = (((x5509%x5510)<=x5511)>>x5512);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x5522 = INT64_MAX;
	uint16_t x5523 = 27108U;
	static volatile int8_t x5524 = 13;
	volatile int32_t t165 = -3858756;

    t165 = (((x5521%x5522)<=x5523)>>x5524);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x5529 = INT8_MIN;
	int8_t x5531 = -17;
	static uint32_t x5532 = 0U;
	volatile int32_t t166 = -12313;

    t166 = (((x5529%x5530)<=x5531)>>x5532);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x5533 = 0U;
	uint16_t x5535 = 19970U;
	uint8_t x5536 = 5U;
	static int32_t t167 = 164054978;

    t167 = (((x5533%x5534)<=x5535)>>x5536);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x5545 = INT8_MIN;
	int16_t x5546 = INT16_MIN;
	uint8_t x5548 = 18U;
	volatile int32_t t168 = -39875;

    t168 = (((x5545%x5546)<=x5547)>>x5548);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5557 = INT32_MIN;
	int32_t x5558 = 37375;
	uint64_t x5559 = 22524LLU;
	uint8_t x5560 = 2U;

    t169 = (((x5557%x5558)<=x5559)>>x5560);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5573 = 281;
	static int8_t x5574 = INT8_MAX;
	volatile uint8_t x5575 = 58U;
	static int32_t t170 = -104176;

    t170 = (((x5573%x5574)<=x5575)>>x5576);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x5649 = 0U;
	int64_t x5650 = INT64_MAX;
	int8_t x5651 = INT8_MIN;
	uint16_t x5652 = 4U;
	int32_t t171 = -1;

    t171 = (((x5649%x5650)<=x5651)>>x5652);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5669 = -1LL;
	static int32_t x5670 = 21944;
	int16_t x5671 = -1;
	volatile int16_t x5672 = 6;
	volatile int32_t t172 = -179891;

    t172 = (((x5669%x5670)<=x5671)>>x5672);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x5705 = 1034418845;
	uint8_t x5707 = 3U;
	volatile uint16_t x5708 = 1U;
	volatile int32_t t173 = -46;

    t173 = (((x5705%x5706)<=x5707)>>x5708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x5817 = -1;
	static uint8_t x5818 = 4U;
	static uint32_t x5820 = 3U;
	int32_t t174 = -153;

    t174 = (((x5817%x5818)<=x5819)>>x5820);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x5881 = -1;
	int64_t x5882 = INT64_MAX;
	int32_t x5883 = INT32_MIN;
	uint16_t x5884 = 18U;
	static volatile int32_t t175 = 153196;

    t175 = (((x5881%x5882)<=x5883)>>x5884);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x5897 = UINT32_MAX;
	int32_t x5898 = -329110;
	volatile int16_t x5899 = -64;
	volatile int16_t x5900 = 0;
	int32_t t176 = 0;

    t176 = (((x5897%x5898)<=x5899)>>x5900);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint32_t x5945 = UINT32_MAX;
	static int16_t x5947 = INT16_MIN;
	uint16_t x5948 = 4U;
	volatile int32_t t177 = 6281279;

    t177 = (((x5945%x5946)<=x5947)>>x5948);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x5957 = -7330822LL;
	volatile int16_t x5959 = -1;
	int8_t x5960 = 20;

    t178 = (((x5957%x5958)<=x5959)>>x5960);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x5969 = INT16_MAX;
	uint8_t x5972 = 4U;
	volatile int32_t t179 = -23157627;

    t179 = (((x5969%x5970)<=x5971)>>x5972);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x5986 = INT16_MIN;
	int8_t x5987 = INT8_MIN;
	static volatile uint8_t x5988 = 14U;
	volatile int32_t t180 = -1;

    t180 = (((x5985%x5986)<=x5987)>>x5988);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x6061 = -1;
	volatile uint16_t x6062 = UINT16_MAX;
	uint8_t x6063 = 106U;
	int32_t x6064 = 0;
	static volatile int32_t t181 = 10465962;

    t181 = (((x6061%x6062)<=x6063)>>x6064);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x6089 = INT32_MIN;
	int16_t x6090 = INT16_MAX;
	int32_t x6091 = 2082007;
	volatile int32_t t182 = 48789014;

    t182 = (((x6089%x6090)<=x6091)>>x6092);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x6133 = INT64_MAX;
	int64_t x6135 = INT64_MIN;
	static uint16_t x6136 = 11U;

    t183 = (((x6133%x6134)<=x6135)>>x6136);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x6145 = 117U;
	static int8_t x6146 = INT8_MIN;
	volatile int32_t x6147 = INT32_MAX;
	int8_t x6148 = 1;
	int32_t t184 = 10;

    t184 = (((x6145%x6146)<=x6147)>>x6148);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x6157 = UINT64_MAX;
	volatile int8_t x6158 = INT8_MIN;
	uint64_t x6159 = 3955127743969029LLU;
	volatile int32_t t185 = 1528;

    t185 = (((x6157%x6158)<=x6159)>>x6160);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x6185 = UINT32_MAX;
	int8_t x6186 = INT8_MIN;
	uint32_t x6187 = 5917897U;
	uint8_t x6188 = 17U;
	int32_t t186 = -231637;

    t186 = (((x6185%x6186)<=x6187)>>x6188);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x6193 = INT8_MIN;
	int32_t x6195 = INT32_MAX;
	uint8_t x6196 = 19U;
	static int32_t t187 = -898491293;

    t187 = (((x6193%x6194)<=x6195)>>x6196);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x6201 = UINT16_MAX;
	static uint16_t x6203 = 5458U;
	uint8_t x6204 = 0U;
	int32_t t188 = -24226499;

    t188 = (((x6201%x6202)<=x6203)>>x6204);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x6211 = INT8_MIN;
	int8_t x6212 = 6;
	volatile int32_t t189 = 5344;

    t189 = (((x6209%x6210)<=x6211)>>x6212);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x6213 = -1;
	static volatile int32_t x6214 = -1;
	uint16_t x6215 = 6631U;
	uint16_t x6216 = 1U;

    t190 = (((x6213%x6214)<=x6215)>>x6216);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x6217 = INT16_MIN;
	static int16_t x6219 = INT16_MIN;
	int32_t t191 = 5;

    t191 = (((x6217%x6218)<=x6219)>>x6220);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x6273 = 3U;
	volatile int32_t x6274 = INT32_MAX;
	uint8_t x6276 = 1U;
	int32_t t192 = -64810897;

    t192 = (((x6273%x6274)<=x6275)>>x6276);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x6297 = -14;
	uint8_t x6298 = 2U;
	volatile int64_t x6299 = INT64_MIN;
	static uint8_t x6300 = 2U;
	int32_t t193 = -4149245;

    t193 = (((x6297%x6298)<=x6299)>>x6300);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x6349 = 91056167018LL;
	volatile int64_t x6350 = 33715795790994454LL;
	static int8_t x6351 = INT8_MIN;
	static uint8_t x6352 = 0U;
	volatile int32_t t194 = 1067810952;

    t194 = (((x6349%x6350)<=x6351)>>x6352);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x6365 = -1;
	volatile int32_t x6367 = INT32_MIN;
	int8_t x6368 = 3;

    t195 = (((x6365%x6366)<=x6367)>>x6368);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x6425 = 0;
	static volatile uint16_t x6426 = 583U;
	int64_t x6427 = INT64_MAX;
	uint16_t x6428 = 1U;
	int32_t t196 = -6;

    t196 = (((x6425%x6426)<=x6427)>>x6428);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x6449 = INT64_MAX;
	int64_t x6450 = -341664771LL;
	int64_t x6451 = -8918097LL;
	int8_t x6452 = 5;

    t197 = (((x6449%x6450)<=x6451)>>x6452);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x6529 = 298698U;
	int64_t x6530 = -1LL;
	uint8_t x6531 = 27U;
	volatile int8_t x6532 = 6;
	volatile int32_t t198 = 1988377;

    t198 = (((x6529%x6530)<=x6531)>>x6532);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x6533 = -1;
	uint64_t x6534 = 8290677844888LLU;
	int64_t x6536 = 14LL;

    t199 = (((x6533%x6534)<=x6535)>>x6536);

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

