
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

static int32_t x16 = 16216;
uint32_t x73 = 9097U;
int8_t x76 = -1;
int8_t x133 = 6;
int32_t x134 = 0;
uint32_t x183 = 61661U;
volatile uint32_t t4 = 232U;
volatile uint64_t x485 = 212LLU;
uint32_t x497 = UINT32_MAX;
uint32_t t10 = 3240U;
uint16_t x653 = 7509U;
volatile int8_t x655 = 0;
static uint8_t x813 = 14U;
static int64_t x815 = INT64_MIN;
int16_t x816 = INT16_MIN;
int16_t x859 = -1;
int8_t x957 = 0;
volatile uint8_t x992 = 51U;
int16_t x1004 = INT16_MIN;
uint8_t x1058 = 3U;
int8_t x1215 = -1;
int8_t x1216 = -1;
uint32_t x1317 = UINT32_MAX;
int32_t x1350 = 2;
int64_t x1351 = INT64_MIN;
static uint64_t t28 = 2427LLU;
static uint64_t t31 = 6817LLU;
int8_t x1490 = 14;
uint64_t t33 = 1LLU;
volatile int16_t x1514 = 1;
uint64_t x1515 = 45846699958LLU;
int8_t x1529 = 1;
int32_t x1531 = -1;
int32_t t35 = 1;
int32_t x1633 = 116179;
volatile uint32_t x1659 = 176105U;
int8_t x1667 = -1;
volatile int64_t x1789 = 13795731519LL;
volatile int64_t t41 = -1LL;
uint16_t x1804 = 1532U;
uint16_t x1853 = UINT16_MAX;
int64_t x1855 = 82928210828473LL;
volatile int8_t x1880 = 0;
static uint16_t x2113 = 18110U;
volatile int32_t t47 = -3;
volatile int64_t t48 = -18800674LL;
uint16_t x2170 = 13U;
uint16_t x2171 = UINT16_MAX;
static int8_t x2236 = -19;
uint64_t t50 = 8LLU;
int32_t x2681 = INT32_MAX;
uint32_t x2682 = 10U;
uint32_t x2706 = 7U;
uint64_t x2725 = UINT64_MAX;
static uint8_t x2726 = 2U;
int8_t x2727 = INT8_MIN;
uint8_t x2770 = 19U;
int8_t x2779 = INT8_MIN;
volatile uint16_t x2814 = 15U;
uint8_t x2846 = 5U;
uint64_t x2945 = UINT64_MAX;
uint8_t x2987 = 7U;
uint8_t x3151 = 0U;
int64_t x3152 = INT64_MAX;
uint8_t x3156 = 0U;
int32_t t65 = 970768;
uint8_t x3242 = 12U;
volatile uint8_t x3518 = 3U;
int32_t t70 = 169;
volatile int16_t x3564 = INT16_MAX;
static int8_t x3930 = 0;
uint32_t t72 = 109U;
uint8_t x3962 = 4U;
volatile int64_t x4015 = -27505666LL;
uint64_t t75 = 9901LLU;
volatile uint8_t x4202 = 0U;
int32_t x4203 = -3;
int8_t x4212 = 5;
uint32_t x4233 = UINT32_MAX;
volatile int8_t x4234 = 1;
static int64_t x4263 = -1378908424252070693LL;
int64_t t81 = -327278898821371LL;
int8_t x4484 = -49;
int64_t x4639 = -1LL;
static volatile int64_t t84 = -3LL;
uint64_t x4972 = 16158LLU;
volatile uint64_t t88 = 3LLU;
static uint32_t x5165 = 109U;
static uint32_t x5197 = 950906064U;
int64_t x5341 = INT64_MAX;
uint16_t x5342 = 1U;
int64_t t92 = 1884250254748LL;
static volatile uint8_t x5546 = 11U;
int64_t x5629 = INT64_MAX;
uint8_t x5630 = 13U;
int64_t x5665 = 0LL;
volatile uint32_t x5666 = 3U;
volatile int32_t t99 = 40771;
int8_t x5970 = 10;
uint32_t x5972 = UINT32_MAX;
int16_t x6107 = -1;
static volatile int8_t x6108 = -1;
static int8_t x6175 = -1;
volatile uint64_t t105 = 25LLU;
int64_t t107 = -1493624LL;
volatile int8_t x6333 = 0;
static int16_t x6370 = 3;
int64_t x6489 = INT64_MAX;
uint16_t x6491 = 29486U;
int16_t x6492 = INT16_MIN;
int64_t t113 = -54LL;
volatile uint64_t t115 = 1867855373911641647LLU;
int16_t x6771 = 8;
int16_t x6947 = INT16_MAX;
int64_t x7026 = 0LL;
uint32_t x7027 = 477572U;
static uint8_t x7029 = 40U;
static uint32_t x7032 = UINT32_MAX;
uint32_t x7053 = 1U;
static int16_t x7071 = 155;
int16_t x7234 = 3;
volatile uint32_t t122 = 7275422U;
uint8_t x7273 = 1U;
uint16_t x7275 = 2780U;
uint64_t x7403 = 66056LLU;
static int16_t x7541 = INT16_MAX;
int64_t t130 = -461LL;
uint16_t x7812 = UINT16_MAX;
int64_t t136 = 98552571229525LL;
int64_t x8088 = INT64_MIN;
int64_t t138 = 3189250021170401LL;
uint32_t x8254 = 1U;
int32_t x8282 = 1;
uint32_t x8284 = 26439U;
uint8_t x8310 = 5U;
int8_t x8350 = 27;
int32_t t143 = 384;
static int8_t x8434 = 42;
static int16_t x8443 = INT16_MIN;
int8_t x8461 = INT8_MAX;
int16_t x8462 = 4;
int16_t x8464 = INT16_MIN;
volatile uint8_t x8594 = 14U;
static volatile int16_t x8595 = INT16_MAX;
uint16_t x8596 = 26536U;
int64_t x8604 = INT64_MIN;
uint64_t t149 = 2185474544281965LLU;
volatile int32_t x8655 = INT32_MAX;
int16_t x8676 = -1;
uint16_t x8807 = 0U;
int16_t x8808 = -1574;
int16_t x8885 = INT16_MAX;
volatile int32_t x8888 = 8032;
int32_t x8895 = -2803;
uint64_t t156 = 14165797557023051LLU;
uint32_t x8928 = 151U;
uint32_t x8973 = UINT32_MAX;
int8_t x8976 = INT8_MIN;
static volatile int64_t t158 = -39639101628990LL;
volatile uint64_t x9029 = UINT64_MAX;
static uint32_t x9045 = 39127807U;
int8_t x9061 = 0;
uint8_t x9166 = 5U;
int8_t x9168 = 18;
int64_t t163 = -899982501LL;
uint8_t x9200 = 1U;
uint32_t x9231 = 55434227U;
int32_t x9426 = 28;
uint8_t x9427 = 1U;
static int16_t x9428 = INT16_MIN;
volatile uint32_t x9753 = 6199U;
int32_t x9755 = -1;
int8_t x9806 = 1;
volatile uint64_t t169 = 215514LLU;
volatile uint16_t x10061 = UINT16_MAX;
uint32_t x10062 = 14U;
uint8_t x10074 = 2U;
int32_t x10076 = INT32_MIN;
int8_t x10114 = 3;
static int32_t x10115 = INT32_MIN;
volatile uint64_t t178 = 53LLU;
uint8_t x10158 = 4U;
uint64_t x10237 = 2958670071554LLU;
volatile int32_t x10239 = INT32_MAX;
uint8_t x10292 = 24U;
static uint8_t x10496 = UINT8_MAX;
int8_t x10538 = 2;
uint16_t x10673 = 596U;
static uint64_t t187 = 8541752138615LLU;
volatile uint64_t t188 = 13480286LLU;
uint8_t x10886 = 0U;
uint64_t t190 = 66646531163292LLU;
uint8_t x10898 = 1U;
static uint16_t x10899 = 26U;
volatile int16_t x11021 = INT16_MAX;
volatile uint64_t t192 = 215590442872378838LLU;
static int16_t x11027 = -1221;
int8_t x11096 = INT8_MAX;
int64_t x11460 = INT64_MIN;


void f0(void) {
    	int8_t x13 = INT8_MAX;
	int8_t x14 = 31;
	int8_t x15 = 0;
	int32_t t0 = 804783350;

    t0 = ((x13>>x14)+(x15^x16));

    if (t0 != 16216) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x74 = 0;
	static uint8_t x75 = UINT8_MAX;
	volatile uint32_t t1 = 1U;

    t1 = ((x73>>x74)+(x75^x76));

    if (t1 != 8841U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x101 = INT64_MAX;
	int16_t x102 = 63;
	int32_t x103 = -1;
	int16_t x104 = -6;
	int64_t t2 = -1LL;

    t2 = ((x101>>x102)+(x103^x104));

    if (t2 != 5LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MAX;
	int32_t t3 = -363289;

    t3 = ((x133>>x134)+(x135^x136));

    if (t3 != -32635) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x181 = INT32_MAX;
	uint16_t x182 = 9U;
	static volatile uint16_t x184 = 4794U;

    t4 = ((x181>>x182)+(x183^x184));

    if (t4 != 4252262U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x189 = UINT16_MAX;
	int8_t x190 = 27;
	int64_t x191 = INT64_MIN;
	uint64_t x192 = 123152570800235LLU;
	volatile uint64_t t5 = 778786396489944505LLU;

    t5 = ((x189>>x190)+(x191^x192));

    if (t5 != 9223495189425576043LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x329 = INT32_MAX;
	uint16_t x330 = 4U;
	int16_t x331 = 203;
	int64_t x332 = 648242491497172140LL;
	int64_t t6 = 66868555LL;

    t6 = ((x329>>x330)+(x331^x332));

    if (t6 != 648242491631389798LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x393 = 34683513899112527LL;
	int32_t x394 = 0;
	int8_t x395 = INT8_MAX;
	uint64_t x396 = 224540154LLU;
	uint64_t t7 = 3831074LLU;

    t7 = ((x393>>x394)+(x395^x396));

    if (t7 != 34683514123652564LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x481 = 8U;
	static uint64_t x482 = 0LLU;
	volatile int16_t x483 = 1;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t8 = 836;

    t8 = ((x481>>x482)+(x483^x484));

    if (t8 != 65542) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x486 = 5U;
	int16_t x487 = -1;
	volatile int32_t x488 = INT32_MAX;
	volatile uint64_t t9 = 1LLU;

    t9 = ((x485>>x486)+(x487^x488));

    if (t9 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x498 = 1U;
	int8_t x499 = INT8_MIN;
	uint16_t x500 = UINT16_MAX;

    t10 = ((x497>>x498)+(x499^x500));

    if (t10 != 2147418238U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x521 = 45974U;
	uint8_t x522 = 3U;
	volatile int16_t x523 = INT16_MIN;
	int32_t x524 = 4458744;
	static volatile uint32_t t11 = 10692321U;

    t11 = ((x521>>x522)+(x523^x524));

    if (t11 != 4290486122U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x654 = 3U;
	volatile uint8_t x656 = 1U;
	int32_t t12 = -3;

    t12 = ((x653>>x654)+(x655^x656));

    if (t12 != 939) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x657 = UINT64_MAX;
	uint8_t x658 = 52U;
	static uint64_t x659 = UINT64_MAX;
	static uint8_t x660 = 7U;
	uint64_t t13 = 558112282515LLU;

    t13 = ((x657>>x658)+(x659^x660));

    if (t13 != 4087LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x814 = 8U;
	volatile int64_t t14 = 814LL;

    t14 = ((x813>>x814)+(x815^x816));

    if (t14 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x849 = 31U;
	volatile uint32_t x850 = 1U;
	static volatile int8_t x851 = -1;
	uint8_t x852 = 15U;
	volatile int32_t t15 = 2998;

    t15 = ((x849>>x850)+(x851^x852));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x857 = 10114088462LL;
	static int32_t x858 = 7;
	static int32_t x860 = -2;
	static int64_t t16 = 2584906471555159934LL;

    t16 = ((x857>>x858)+(x859^x860));

    if (t16 != 79016317LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x873 = 3U;
	static volatile uint64_t x874 = 3LLU;
	int16_t x875 = -9623;
	int32_t x876 = INT32_MAX;
	volatile int32_t t17 = -25;

    t17 = ((x873>>x874)+(x875^x876));

    if (t17 != -2147474026) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x958 = 6U;
	int8_t x959 = -13;
	int16_t x960 = -1640;
	static int32_t t18 = 905795;

    t18 = ((x957>>x958)+(x959^x960));

    if (t18 != 1643) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint16_t x989 = UINT16_MAX;
	int8_t x990 = 1;
	int16_t x991 = -9996;
	volatile int32_t t19 = -960991;

    t19 = ((x989>>x990)+(x991^x992));

    if (t19 != 22726) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x1001 = INT64_MAX;
	int8_t x1002 = 7;
	static volatile int8_t x1003 = INT8_MIN;
	static volatile int64_t t20 = 3255699707533LL;

    t20 = ((x1001>>x1002)+(x1003^x1004));

    if (t20 != 72057594037960575LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1057 = 1U;
	uint32_t x1059 = 3442U;
	uint8_t x1060 = 103U;
	uint32_t t21 = 464284U;

    t21 = ((x1057>>x1058)+(x1059^x1060));

    if (t21 != 3349U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1209 = UINT16_MAX;
	uint8_t x1210 = 0U;
	volatile int16_t x1211 = INT16_MAX;
	static uint8_t x1212 = 7U;
	static volatile int32_t t22 = -390294757;

    t22 = ((x1209>>x1210)+(x1211^x1212));

    if (t22 != 98295) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x1213 = INT8_MAX;
	int8_t x1214 = 1;
	int32_t t23 = 85029;

    t23 = ((x1213>>x1214)+(x1215^x1216));

    if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1221 = 1;
	int8_t x1222 = 2;
	uint16_t x1223 = 88U;
	uint32_t x1224 = 27U;
	uint32_t t24 = 599305U;

    t24 = ((x1221>>x1222)+(x1223^x1224));

    if (t24 != 67U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1261 = 1701625887514678622LLU;
	uint8_t x1262 = 26U;
	static uint32_t x1263 = 1204117U;
	int32_t x1264 = INT32_MIN;
	volatile uint64_t t25 = 11985379585738341LLU;

    t25 = ((x1261>>x1262)+(x1263^x1264));

    if (t25 != 27504889406LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x1289 = 14U;
	int32_t x1290 = 0;
	static int16_t x1291 = 62;
	static uint64_t x1292 = 8422535771020562LLU;
	volatile uint64_t t26 = 2191381822973050LLU;

    t26 = ((x1289>>x1290)+(x1291^x1292));

    if (t26 != 8422535771020602LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1318 = 1U;
	int32_t x1319 = INT32_MIN;
	int64_t x1320 = -285079266999854645LL;
	volatile int64_t t27 = 236878LL;

    t27 = ((x1317>>x1318)+(x1319^x1320));

    if (t27 != 285079269336750538LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1349 = INT64_MAX;
	static uint64_t x1352 = 131541631LLU;

    t28 = ((x1349>>x1350)+(x1351^x1352));

    if (t28 != 11529215046200011390LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1361 = 108978675412875LL;
	int8_t x1362 = 12;
	volatile int16_t x1363 = -2209;
	volatile int64_t x1364 = -1LL;
	volatile int64_t t29 = 2LL;

    t29 = ((x1361>>x1362)+(x1363^x1364));

    if (t29 != 26606124134LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x1441 = UINT8_MAX;
	uint8_t x1442 = 11U;
	int8_t x1443 = INT8_MIN;
	int64_t x1444 = -722746955762LL;
	int64_t t30 = -333569LL;

    t30 = ((x1441>>x1442)+(x1443^x1444));

    if (t30 != 722746955662LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x1477 = 26153;
	static uint8_t x1478 = 1U;
	volatile int64_t x1479 = -1LL;
	uint64_t x1480 = UINT64_MAX;

    t31 = ((x1477>>x1478)+(x1479^x1480));

    if (t31 != 13076LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1489 = 10;
	uint16_t x1491 = UINT16_MAX;
	static uint64_t x1492 = 72788034081973889LLU;
	uint64_t t32 = 656LLU;

    t32 = ((x1489>>x1490)+(x1491^x1492));

    if (t32 != 72788034081921406LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x1497 = UINT32_MAX;
	volatile int16_t x1498 = 2;
	uint8_t x1499 = 6U;
	uint64_t x1500 = 4736882857772822LLU;

    t33 = ((x1497>>x1498)+(x1499^x1500));

    if (t33 != 4736883931514639LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x1513 = INT32_MAX;
	int8_t x1516 = -1;
	volatile uint64_t t34 = 25207LLU;

    t34 = ((x1513>>x1514)+(x1515^x1516));

    if (t34 != 18446744028936593480LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x1530 = 4U;
	int8_t x1532 = -41;

    t35 = ((x1529>>x1530)+(x1531^x1532));

    if (t35 != 40) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x1569 = 232U;
	static volatile uint16_t x1570 = 10U;
	int16_t x1571 = INT16_MIN;
	int64_t x1572 = INT64_MIN;
	volatile int64_t t36 = -552058443LL;

    t36 = ((x1569>>x1570)+(x1571^x1572));

    if (t36 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x1634 = 1U;
	uint16_t x1635 = 26299U;
	uint8_t x1636 = UINT8_MAX;
	static volatile int32_t t37 = 401202346;

    t37 = ((x1633>>x1634)+(x1635^x1636));

    if (t37 != 84269) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1657 = 31915371858LL;
	int8_t x1658 = 42;
	volatile int64_t x1660 = INT64_MIN;
	static int64_t t38 = -6181722607LL;

    t38 = ((x1657>>x1658)+(x1659^x1660));

    if (t38 != -9223372036854599703LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x1665 = 58U;
	static uint8_t x1666 = 14U;
	int64_t x1668 = -1LL;
	static volatile int64_t t39 = -148449838574LL;

    t39 = ((x1665>>x1666)+(x1667^x1668));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1753 = 31948U;
	volatile uint8_t x1754 = 5U;
	volatile int32_t x1755 = -1;
	int16_t x1756 = -126;
	int32_t t40 = -1;

    t40 = ((x1753>>x1754)+(x1755^x1756));

    if (t40 != 1123) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x1790 = 1U;
	int64_t x1791 = 4174081655194LL;
	volatile uint32_t x1792 = UINT32_MAX;

    t41 = ((x1789>>x1790)+(x1791^x1792));

    if (t41 != 4177937666692LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x1801 = UINT8_MAX;
	static uint16_t x1802 = 10U;
	uint32_t x1803 = 292167907U;
	uint32_t t42 = 231987212U;

    t42 = ((x1801>>x1802)+(x1803^x1804));

    if (t42 != 292168991U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x1854 = 13U;
	int8_t x1856 = INT8_MIN;
	static volatile int64_t t43 = -627975320651940LL;

    t43 = ((x1853>>x1854)+(x1855^x1856));

    if (t43 != -82928210828480LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x1877 = 266161671874361LL;
	uint8_t x1878 = 0U;
	static volatile uint16_t x1879 = 17U;
	int64_t t44 = -427388710LL;

    t44 = ((x1877>>x1878)+(x1879^x1880));

    if (t44 != 266161671874378LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x1893 = UINT64_MAX;
	static volatile int8_t x1894 = 1;
	int16_t x1895 = -1;
	volatile int16_t x1896 = INT16_MAX;
	static volatile uint64_t t45 = 1136524788LLU;

    t45 = ((x1893>>x1894)+(x1895^x1896));

    if (t45 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x1993 = 974075LL;
	int64_t x1994 = 30LL;
	int16_t x1995 = -1522;
	static volatile int16_t x1996 = INT16_MIN;
	int64_t t46 = -1186516419115826452LL;

    t46 = ((x1993>>x1994)+(x1995^x1996));

    if (t46 != 31246LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2114 = 0;
	uint16_t x2115 = UINT16_MAX;
	volatile int8_t x2116 = INT8_MIN;

    t47 = ((x2113>>x2114)+(x2115^x2116));

    if (t47 != -47299) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x2121 = UINT8_MAX;
	static uint16_t x2122 = 3U;
	int32_t x2123 = -1;
	static int64_t x2124 = -1LL;

    t48 = ((x2121>>x2122)+(x2123^x2124));

    if (t48 != 31LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x2169 = 49952024LLU;
	volatile int32_t x2172 = 0;
	uint64_t t49 = 3881900016LLU;

    t49 = ((x2169>>x2170)+(x2171^x2172));

    if (t49 != 71632LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x2233 = 313401LLU;
	uint32_t x2234 = 6U;
	static int64_t x2235 = INT64_MIN;

    t50 = ((x2233>>x2234)+(x2235^x2236));

    if (t50 != 9223372036854780685LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x2513 = 21;
	volatile int32_t x2514 = 29;
	uint64_t x2515 = UINT64_MAX;
	volatile int8_t x2516 = 1;
	volatile uint64_t t51 = 18LLU;

    t51 = ((x2513>>x2514)+(x2515^x2516));

    if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x2569 = UINT8_MAX;
	static uint16_t x2570 = 1U;
	int64_t x2571 = -1LL;
	uint32_t x2572 = 1023U;
	volatile int64_t t52 = -70883LL;

    t52 = ((x2569>>x2570)+(x2571^x2572));

    if (t52 != -897LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x2577 = 471982LLU;
	int16_t x2578 = 1;
	int16_t x2579 = -1;
	uint8_t x2580 = 17U;
	volatile uint64_t t53 = 19601565207LLU;

    t53 = ((x2577>>x2578)+(x2579^x2580));

    if (t53 != 235973LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x2683 = 429U;
	volatile uint8_t x2684 = 76U;
	volatile int32_t t54 = -245;

    t54 = ((x2681>>x2682)+(x2683^x2684));

    if (t54 != 2097632) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x2705 = 0U;
	volatile int16_t x2707 = -42;
	uint8_t x2708 = UINT8_MAX;
	int32_t t55 = 1557313;

    t55 = ((x2705>>x2706)+(x2707^x2708));

    if (t55 != -215) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x2728 = -7;
	uint64_t t56 = 554365637120LLU;

    t56 = ((x2725>>x2726)+(x2727^x2728));

    if (t56 != 4611686018427388024LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x2769 = 6LLU;
	int8_t x2771 = -2;
	int16_t x2772 = -1;
	static volatile uint64_t t57 = 290179430800537860LLU;

    t57 = ((x2769>>x2770)+(x2771^x2772));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x2777 = 0U;
	int8_t x2778 = 0;
	static int32_t x2780 = -3924;
	uint32_t t58 = 6U;

    t58 = ((x2777>>x2778)+(x2779^x2780));

    if (t58 != 3884U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x2813 = 11U;
	int8_t x2815 = INT8_MAX;
	int64_t x2816 = INT64_MIN;
	volatile int64_t t59 = 35272814LL;

    t59 = ((x2813>>x2814)+(x2815^x2816));

    if (t59 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2845 = 222556789193620LL;
	static int8_t x2847 = -1;
	uint32_t x2848 = 10219807U;
	volatile int64_t t60 = 3515872138564LL;

    t60 = ((x2845>>x2846)+(x2847^x2848));

    if (t60 != 6959184409788LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x2946 = 31U;
	int64_t x2947 = INT64_MIN;
	int16_t x2948 = INT16_MIN;
	volatile uint64_t t61 = 302298644562504LLU;

    t61 = ((x2945>>x2946)+(x2947^x2948));

    if (t61 != 9223372045444677631LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x2985 = INT16_MAX;
	uint32_t x2986 = 10U;
	uint8_t x2988 = 2U;
	int32_t t62 = -1;

    t62 = ((x2985>>x2986)+(x2987^x2988));

    if (t62 != 36) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x3057 = INT8_MAX;
	uint8_t x3058 = 4U;
	int8_t x3059 = 3;
	uint8_t x3060 = UINT8_MAX;
	int32_t t63 = -806521;

    t63 = ((x3057>>x3058)+(x3059^x3060));

    if (t63 != 259) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3149 = 0;
	volatile uint8_t x3150 = 0U;
	int64_t t64 = INT64_MAX;

    t64 = ((x3149>>x3150)+(x3151^x3152));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3153 = INT8_MAX;
	int16_t x3154 = 4;
	uint16_t x3155 = UINT16_MAX;

    t65 = ((x3153>>x3154)+(x3155^x3156));

    if (t65 != 65542) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x3241 = 3;
	int32_t x3243 = INT32_MIN;
	int8_t x3244 = INT8_MAX;
	int32_t t66 = 1;

    t66 = ((x3241>>x3242)+(x3243^x3244));

    if (t66 != -2147483521) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x3433 = 13U;
	uint32_t x3434 = 20U;
	uint64_t x3435 = 66418800829521384LLU;
	volatile int32_t x3436 = INT32_MAX;
	uint64_t t67 = 3299115941751835815LLU;

    t67 = ((x3433>>x3434)+(x3435^x3436));

    if (t67 != 66418801706934807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3457 = UINT16_MAX;
	uint8_t x3458 = 1U;
	uint8_t x3459 = UINT8_MAX;
	int32_t x3460 = -3515748;
	volatile int32_t t68 = 1327;

    t68 = ((x3457>>x3458)+(x3459^x3460));

    if (t68 != -3483038) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3493 = 1023;
	static int32_t x3494 = 24;
	int8_t x3495 = 0;
	volatile int32_t x3496 = INT32_MAX;
	volatile int32_t t69 = INT32_MAX;

    t69 = ((x3493>>x3494)+(x3495^x3496));

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x3517 = INT8_MAX;
	static int8_t x3519 = INT8_MIN;
	uint16_t x3520 = UINT16_MAX;

    t70 = ((x3517>>x3518)+(x3519^x3520));

    if (t70 != -65394) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x3561 = 123U;
	volatile uint16_t x3562 = 0U;
	int64_t x3563 = 1LL;
	int64_t t71 = 0LL;

    t71 = ((x3561>>x3562)+(x3563^x3564));

    if (t71 != 32889LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x3929 = UINT32_MAX;
	int8_t x3931 = INT8_MAX;
	int8_t x3932 = INT8_MIN;

    t72 = ((x3929>>x3930)+(x3931^x3932));

    if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x3961 = INT16_MAX;
	volatile int16_t x3963 = INT16_MIN;
	uint32_t x3964 = 251726U;
	volatile uint32_t t73 = 433654U;

    t73 = ((x3961>>x3962)+(x3963^x3964));

    if (t73 != 4294729549U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x4013 = UINT64_MAX;
	uint8_t x4014 = 2U;
	int8_t x4016 = -37;
	uint64_t t74 = 187958740LLU;

    t74 = ((x4013>>x4014)+(x4015^x4016));

    if (t74 != 4611686018454893604LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x4073 = UINT64_MAX;
	int32_t x4074 = 0;
	int64_t x4075 = -1LL;
	int8_t x4076 = INT8_MAX;

    t75 = ((x4073>>x4074)+(x4075^x4076));

    if (t75 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x4197 = 3U;
	uint8_t x4198 = 1U;
	uint64_t x4199 = UINT64_MAX;
	volatile int16_t x4200 = INT16_MIN;
	uint64_t t76 = 3160355149433LLU;

    t76 = ((x4197>>x4198)+(x4199^x4200));

    if (t76 != 32768LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x4201 = INT64_MAX;
	uint64_t x4204 = UINT64_MAX;
	volatile uint64_t t77 = 6685419LLU;

    t77 = ((x4201>>x4202)+(x4203^x4204));

    if (t77 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x4209 = 36U;
	uint8_t x4210 = 1U;
	static volatile int8_t x4211 = INT8_MIN;
	volatile int32_t t78 = -201;

    t78 = ((x4209>>x4210)+(x4211^x4212));

    if (t78 != -105) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x4213 = 401U;
	int32_t x4214 = 17;
	uint64_t x4215 = 31794713738706838LLU;
	int64_t x4216 = INT64_MAX;
	volatile uint64_t t79 = 3070LLU;

    t79 = ((x4213>>x4214)+(x4215^x4216));

    if (t79 != 9191577323116068969LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x4235 = -2LL;
	volatile uint32_t x4236 = 150U;
	int64_t t80 = 1009205LL;

    t80 = ((x4233>>x4234)+(x4235^x4236));

    if (t80 != 2147483495LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x4261 = 0U;
	uint8_t x4262 = 0U;
	int16_t x4264 = -1;

    t81 = ((x4261>>x4262)+(x4263^x4264));

    if (t81 != 1378908424252070692LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x4393 = 5388U;
	int8_t x4394 = 0;
	static int32_t x4395 = INT32_MIN;
	static int16_t x4396 = 0;
	volatile int32_t t82 = -476;

    t82 = ((x4393>>x4394)+(x4395^x4396));

    if (t82 != -2147478260) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x4481 = 934026743U;
	uint8_t x4482 = 0U;
	int32_t x4483 = INT32_MIN;
	uint32_t t83 = 12292365U;

    t83 = ((x4481>>x4482)+(x4483^x4484));

    if (t83 != 3081510342U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x4637 = INT16_MAX;
	uint8_t x4638 = 30U;
	volatile uint16_t x4640 = UINT16_MAX;

    t84 = ((x4637>>x4638)+(x4639^x4640));

    if (t84 != -65536LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x4801 = 6735U;
	int8_t x4802 = 2;
	static volatile int32_t x4803 = INT32_MAX;
	volatile uint64_t x4804 = 3107907963348751115LLU;
	uint64_t t85 = 446341819546415LLU;

    t85 = ((x4801>>x4802)+(x4803^x4804));

    if (t85 != 3107907965294572423LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4813 = UINT16_MAX;
	volatile int8_t x4814 = 2;
	uint64_t x4815 = 121938933466887008LLU;
	int16_t x4816 = -3272;
	uint64_t t86 = 265LLU;

    t86 = ((x4813>>x4814)+(x4815^x4816));

    if (t86 != 18324805140242677847LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x4901 = INT8_MAX;
	uint16_t x4902 = 0U;
	static int32_t x4903 = 167;
	static int64_t x4904 = -1LL;
	volatile int64_t t87 = 54006761814LL;

    t87 = ((x4901>>x4902)+(x4903^x4904));

    if (t87 != -41LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x4969 = 2;
	int8_t x4970 = 1;
	int64_t x4971 = -1LL;

    t88 = ((x4969>>x4970)+(x4971^x4972));

    if (t88 != 18446744073709535458LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x5166 = 15LLU;
	int8_t x5167 = -1;
	uint32_t x5168 = 12718U;
	uint32_t t89 = 27U;

    t89 = ((x5165>>x5166)+(x5167^x5168));

    if (t89 != 4294954577U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x5198 = 2;
	static volatile uint32_t x5199 = 1879540815U;
	int16_t x5200 = INT16_MIN;
	uint32_t t90 = 7358U;

    t90 = ((x5197>>x5198)+(x5199^x5200));

    if (t90 != 2653122435U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x5293 = 6U;
	int32_t x5294 = 1;
	volatile int8_t x5295 = -19;
	uint8_t x5296 = UINT8_MAX;
	volatile int32_t t91 = 186977341;

    t91 = ((x5293>>x5294)+(x5295^x5296));

    if (t91 != -235) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x5343 = -1;
	int8_t x5344 = -1;

    t92 = ((x5341>>x5342)+(x5343^x5344));

    if (t92 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x5429 = 11U;
	uint32_t x5430 = 3U;
	int32_t x5431 = -6888;
	int16_t x5432 = INT16_MAX;
	int32_t t93 = -11477198;

    t93 = ((x5429>>x5430)+(x5431^x5432));

    if (t93 != -25880) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x5545 = INT32_MAX;
	static uint64_t x5547 = 4LLU;
	uint8_t x5548 = 0U;
	volatile uint64_t t94 = 280LLU;

    t94 = ((x5545>>x5546)+(x5547^x5548));

    if (t94 != 1048579LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x5625 = INT64_MAX;
	int8_t x5626 = 0;
	int16_t x5627 = INT16_MIN;
	int32_t x5628 = 10;
	static int64_t t95 = -132158298335867752LL;

    t95 = ((x5625>>x5626)+(x5627^x5628));

    if (t95 != 9223372036854743049LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x5631 = 917271U;
	static uint64_t x5632 = 8503267LLU;
	uint64_t t96 = 2168311011LLU;

    t96 = ((x5629>>x5630)+(x5631^x5632));

    if (t96 != 1125899916034291LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x5667 = INT64_MIN;
	volatile int8_t x5668 = 52;
	int64_t t97 = -172LL;

    t97 = ((x5665>>x5666)+(x5667^x5668));

    if (t97 != -9223372036854775756LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x5701 = 123003LLU;
	volatile uint16_t x5702 = 11U;
	uint8_t x5703 = 50U;
	static int8_t x5704 = INT8_MIN;
	uint64_t t98 = 332618LLU;

    t98 = ((x5701>>x5702)+(x5703^x5704));

    if (t98 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x5741 = INT16_MAX;
	uint8_t x5742 = 0U;
	int8_t x5743 = 1;
	uint8_t x5744 = 6U;

    t99 = ((x5741>>x5742)+(x5743^x5744));

    if (t99 != 32774) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x5857 = 0;
	volatile uint8_t x5858 = 1U;
	volatile int64_t x5859 = 259083201639508LL;
	int8_t x5860 = 0;
	static volatile int64_t t100 = -35271943545727215LL;

    t100 = ((x5857>>x5858)+(x5859^x5860));

    if (t100 != 259083201639508LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x5969 = 24994816633LLU;
	uint16_t x5971 = UINT16_MAX;
	volatile uint64_t t101 = 1409509000LLU;

    t101 = ((x5969>>x5970)+(x5971^x5972));

    if (t101 != 4319310760LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x6045 = 988454834LL;
	uint8_t x6046 = 13U;
	uint16_t x6047 = 20505U;
	uint16_t x6048 = UINT16_MAX;
	int64_t t102 = 7LL;

    t102 = ((x6045>>x6046)+(x6047^x6048));

    if (t102 != 165690LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x6073 = 2U;
	uint32_t x6074 = 2U;
	int8_t x6075 = INT8_MIN;
	uint64_t x6076 = 26053361378990LLU;
	static uint64_t t103 = 2380357421574720LLU;

    t103 = ((x6073>>x6074)+(x6075^x6076));

    if (t103 != 18446718020348172590LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x6105 = UINT32_MAX;
	static uint16_t x6106 = 0U;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = ((x6105>>x6106)+(x6107^x6108));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x6173 = 30690537890601LLU;
	uint8_t x6174 = 7U;
	static int16_t x6176 = INT16_MIN;

    t105 = ((x6173>>x6174)+(x6175^x6176));

    if (t105 != 239769860037LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x6233 = 2LLU;
	uint8_t x6234 = 28U;
	uint64_t x6235 = 1LLU;
	int8_t x6236 = 0;
	uint64_t t106 = 16285159569LLU;

    t106 = ((x6233>>x6234)+(x6235^x6236));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x6269 = INT8_MAX;
	uint32_t x6270 = 1U;
	volatile int16_t x6271 = INT16_MIN;
	int64_t x6272 = INT64_MIN;

    t107 = ((x6269>>x6270)+(x6271^x6272));

    if (t107 != 9223372036854743103LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x6334 = 1;
	int64_t x6335 = INT64_MIN;
	int8_t x6336 = -2;
	volatile int64_t t108 = 23916229LL;

    t108 = ((x6333>>x6334)+(x6335^x6336));

    if (t108 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x6345 = 0U;
	uint16_t x6346 = 3U;
	int16_t x6347 = INT16_MAX;
	int16_t x6348 = INT16_MIN;
	volatile int32_t t109 = 60;

    t109 = ((x6345>>x6346)+(x6347^x6348));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x6369 = INT8_MAX;
	uint64_t x6371 = UINT64_MAX;
	volatile uint16_t x6372 = UINT16_MAX;
	volatile uint64_t t110 = 313729LLU;

    t110 = ((x6369>>x6370)+(x6371^x6372));

    if (t110 != 18446744073709486095LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x6401 = 28U;
	volatile uint64_t x6402 = 0LLU;
	int8_t x6403 = 0;
	static uint16_t x6404 = UINT16_MAX;
	int32_t t111 = 8150;

    t111 = ((x6401>>x6402)+(x6403^x6404));

    if (t111 != 65563) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x6481 = INT8_MAX;
	int32_t x6482 = 13;
	volatile uint32_t x6483 = UINT32_MAX;
	uint16_t x6484 = 51U;
	uint32_t t112 = 646879U;

    t112 = ((x6481>>x6482)+(x6483^x6484));

    if (t112 != 4294967244U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x6490 = 1U;

    t113 = ((x6489>>x6490)+(x6491^x6492));

    if (t113 != 4611686018427384621LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x6693 = INT8_MAX;
	uint16_t x6694 = 0U;
	int32_t x6695 = 946;
	static int8_t x6696 = INT8_MIN;
	volatile int32_t t114 = -60;

    t114 = ((x6693>>x6694)+(x6695^x6696));

    if (t114 != -847) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x6749 = 6853848266141560LLU;
	volatile int8_t x6750 = 1;
	volatile uint16_t x6751 = 2365U;
	static uint8_t x6752 = UINT8_MAX;

    t115 = ((x6749>>x6750)+(x6751^x6752));

    if (t115 != 3426924133073278LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x6769 = 482;
	uint16_t x6770 = 16U;
	int16_t x6772 = -151;
	volatile int32_t t116 = -75647;

    t116 = ((x6769>>x6770)+(x6771^x6772));

    if (t116 != -159) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x6945 = 2775;
	uint8_t x6946 = 1U;
	int32_t x6948 = INT32_MIN;
	int32_t t117 = 22;

    t117 = ((x6945>>x6946)+(x6947^x6948));

    if (t117 != -2147449494) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x7025 = 2;
	volatile int32_t x7028 = INT32_MAX;
	uint32_t t118 = 378448832U;

    t118 = ((x7025>>x7026)+(x7027^x7028));

    if (t118 != 2147006077U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x7030 = 0;
	volatile int8_t x7031 = 0;
	volatile uint32_t t119 = 25022172U;

    t119 = ((x7029>>x7030)+(x7031^x7032));

    if (t119 != 39U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x7054 = 1;
	static uint8_t x7055 = 40U;
	uint64_t x7056 = 6LLU;
	uint64_t t120 = 23278368314LLU;

    t120 = ((x7053>>x7054)+(x7055^x7056));

    if (t120 != 46LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x7069 = UINT32_MAX;
	volatile uint32_t x7070 = 6U;
	int64_t x7072 = 57116432201346LL;
	static int64_t t121 = 18830023775052LL;

    t121 = ((x7069>>x7070)+(x7071^x7072));

    if (t121 != 57116499310104LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x7233 = 30U;
	volatile uint32_t x7235 = 0U;
	int8_t x7236 = -3;

    t122 = ((x7233>>x7234)+(x7235^x7236));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x7261 = UINT8_MAX;
	int16_t x7262 = 0;
	volatile uint8_t x7263 = 9U;
	static volatile int8_t x7264 = INT8_MIN;
	int32_t t123 = -25345339;

    t123 = ((x7261>>x7262)+(x7263^x7264));

    if (t123 != 136) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x7274 = 11;
	int16_t x7276 = INT16_MIN;
	static volatile int32_t t124 = -2927;

    t124 = ((x7273>>x7274)+(x7275^x7276));

    if (t124 != -29988) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x7337 = INT64_MAX;
	static int8_t x7338 = 17;
	uint8_t x7339 = 44U;
	int32_t x7340 = 0;
	int64_t t125 = 818LL;

    t125 = ((x7337>>x7338)+(x7339^x7340));

    if (t125 != 70368744177707LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x7401 = 0U;
	static volatile int8_t x7402 = 0;
	int64_t x7404 = INT64_MIN;
	static volatile uint64_t t126 = 51386016623544LLU;

    t126 = ((x7401>>x7402)+(x7403^x7404));

    if (t126 != 9223372036854841864LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x7497 = 1;
	static int8_t x7498 = 7;
	static volatile int32_t x7499 = INT32_MAX;
	uint8_t x7500 = 98U;
	int32_t t127 = 524594;

    t127 = ((x7497>>x7498)+(x7499^x7500));

    if (t127 != 2147483549) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x7542 = 11;
	volatile uint16_t x7543 = UINT16_MAX;
	volatile int32_t x7544 = -7777;
	static int32_t t128 = -4;

    t128 = ((x7541>>x7542)+(x7543^x7544));

    if (t128 != -57745) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x7589 = 981473156;
	static uint16_t x7590 = 21U;
	static uint8_t x7591 = 26U;
	int64_t x7592 = INT64_MIN;
	static volatile int64_t t129 = 786575627619643LL;

    t129 = ((x7589>>x7590)+(x7591^x7592));

    if (t129 != -9223372036854775314LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x7721 = INT8_MAX;
	static volatile uint8_t x7722 = 0U;
	volatile int64_t x7723 = INT64_MIN;
	uint8_t x7724 = 34U;

    t130 = ((x7721>>x7722)+(x7723^x7724));

    if (t130 != -9223372036854775647LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x7741 = 45LLU;
	static volatile uint16_t x7742 = 1U;
	volatile int64_t x7743 = INT64_MAX;
	int8_t x7744 = -4;
	static volatile uint64_t t131 = 3812669593618LLU;

    t131 = ((x7741>>x7742)+(x7743^x7744));

    if (t131 != 9223372036854775833LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x7781 = 303518084545LLU;
	uint8_t x7782 = 17U;
	static int64_t x7783 = INT64_MIN;
	volatile int64_t x7784 = INT64_MIN;
	static volatile uint64_t t132 = 39394626225750245LLU;

    t132 = ((x7781>>x7782)+(x7783^x7784));

    if (t132 != 2315659LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x7801 = 26940U;
	int8_t x7802 = 1;
	int8_t x7803 = INT8_MAX;
	int8_t x7804 = INT8_MIN;
	volatile uint32_t t133 = 69569U;

    t133 = ((x7801>>x7802)+(x7803^x7804));

    if (t133 != 13469U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x7809 = 5U;
	static int32_t x7810 = 1;
	int32_t x7811 = -1;
	volatile int32_t t134 = -21118;

    t134 = ((x7809>>x7810)+(x7811^x7812));

    if (t134 != -65534) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x7829 = 876673LLU;
	int8_t x7830 = 0;
	uint8_t x7831 = 14U;
	static int64_t x7832 = -156621739LL;
	static uint64_t t135 = 38947403478LLU;

    t135 = ((x7829>>x7830)+(x7831^x7832));

    if (t135 != 18446744073553806556LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x8001 = 7456033163LL;
	uint8_t x8002 = 1U;
	uint32_t x8003 = UINT32_MAX;
	volatile int64_t x8004 = INT64_MIN;

    t136 = ((x8001>>x8002)+(x8003^x8004));

    if (t136 != -9223372028831791932LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x8085 = 421;
	uint8_t x8086 = 15U;
	volatile uint64_t x8087 = 7617213577LLU;
	static volatile uint64_t t137 = 132963LLU;

    t137 = ((x8085>>x8086)+(x8087^x8088));

    if (t137 != 9223372044471989385LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x8121 = 1;
	int64_t x8122 = 0LL;
	uint8_t x8123 = UINT8_MAX;
	static int64_t x8124 = INT64_MIN;

    t138 = ((x8121>>x8122)+(x8123^x8124));

    if (t138 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x8253 = 12U;
	int16_t x8255 = INT16_MIN;
	uint32_t x8256 = 29574U;
	volatile uint32_t t139 = 46U;

    t139 = ((x8253>>x8254)+(x8255^x8256));

    if (t139 != 4294964108U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x8281 = 22U;
	volatile int16_t x8283 = -1;
	static volatile uint32_t t140 = 1809487U;

    t140 = ((x8281>>x8282)+(x8283^x8284));

    if (t140 != 4294940867U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x8289 = UINT32_MAX;
	static uint16_t x8290 = 0U;
	int16_t x8291 = INT16_MIN;
	int16_t x8292 = -38;
	volatile uint32_t t141 = 614081U;

    t141 = ((x8289>>x8290)+(x8291^x8292));

    if (t141 != 32729U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x8309 = INT32_MAX;
	static int32_t x8311 = -105728557;
	int16_t x8312 = INT16_MIN;
	static volatile int32_t t142 = -21;

    t142 = ((x8309>>x8310)+(x8311^x8312));

    if (t142 != 172832210) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x8349 = INT32_MAX;
	int32_t x8351 = 107723202;
	int16_t x8352 = INT16_MIN;

    t143 = ((x8349>>x8350)+(x8351^x8352));

    if (t143 != -107726383) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x8433 = 2904174453260LLU;
	volatile int8_t x8435 = INT8_MIN;
	int64_t x8436 = INT64_MIN;
	uint64_t t144 = 8226538129LLU;

    t144 = ((x8433>>x8434)+(x8435^x8436));

    if (t144 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x8441 = 33914051483215490LLU;
	int8_t x8442 = 5;
	uint8_t x8444 = 0U;
	volatile uint64_t t145 = 14615680779LLU;

    t145 = ((x8441>>x8442)+(x8443^x8444));

    if (t145 != 1059814108817716LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x8463 = INT64_MIN;
	volatile int64_t t146 = 23380606595180920LL;

    t146 = ((x8461>>x8462)+(x8463^x8464));

    if (t146 != 9223372036854743047LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x8553 = 2U;
	uint8_t x8554 = 8U;
	uint32_t x8555 = 1366724698U;
	static volatile uint8_t x8556 = 6U;
	uint32_t t147 = 173149U;

    t147 = ((x8553>>x8554)+(x8555^x8556));

    if (t147 != 1366724700U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x8593 = 2U;
	volatile int32_t t148 = 71981;

    t148 = ((x8593>>x8594)+(x8595^x8596));

    if (t148 != 6231) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x8601 = 100423796LLU;
	static uint32_t x8602 = 45U;
	static int32_t x8603 = -1;

    t149 = ((x8601>>x8602)+(x8603^x8604));

    if (t149 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x8653 = UINT64_MAX;
	uint8_t x8654 = 15U;
	int8_t x8656 = INT8_MAX;
	uint64_t t150 = 4086368184LLU;

    t150 = ((x8653>>x8654)+(x8655^x8656));

    if (t150 != 562952100904831LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x8673 = 1LL;
	volatile uint8_t x8674 = 1U;
	int8_t x8675 = -1;
	int64_t t151 = -1639LL;

    t151 = ((x8673>>x8674)+(x8675^x8676));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x8805 = 2;
	uint8_t x8806 = 0U;
	int32_t t152 = -21145947;

    t152 = ((x8805>>x8806)+(x8807^x8808));

    if (t152 != -1572) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x8821 = 14LLU;
	volatile uint64_t x8822 = 5LLU;
	static int8_t x8823 = 7;
	int8_t x8824 = -37;
	uint64_t t153 = 8879852633128LLU;

    t153 = ((x8821>>x8822)+(x8823^x8824));

    if (t153 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x8833 = 8U;
	volatile uint8_t x8834 = 0U;
	static volatile int16_t x8835 = INT16_MIN;
	volatile int8_t x8836 = -56;
	static int32_t t154 = -67705321;

    t154 = ((x8833>>x8834)+(x8835^x8836));

    if (t154 != 32720) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x8886 = 1;
	int8_t x8887 = INT8_MAX;
	static int32_t t155 = -2013;

    t155 = ((x8885>>x8886)+(x8887^x8888));

    if (t155 != 24350) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x8893 = 15033036062338831LLU;
	uint8_t x8894 = 3U;
	int16_t x8896 = INT16_MAX;

    t156 = ((x8893>>x8894)+(x8895^x8896));

    if (t156 != 1879129507762387LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x8925 = INT32_MAX;
	uint8_t x8926 = 9U;
	uint64_t x8927 = 186LLU;
	static volatile uint64_t t157 = 74892638318456LLU;

    t157 = ((x8925>>x8926)+(x8927^x8928));

    if (t157 != 4194348LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x8974 = 20U;
	int64_t x8975 = 7320891759LL;

    t158 = ((x8973>>x8974)+(x8975^x8976));

    if (t158 != -7320887570LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x9030 = 11U;
	volatile int32_t x9031 = INT32_MIN;
	int32_t x9032 = INT32_MIN;
	volatile uint64_t t159 = 19603LLU;

    t159 = ((x9029>>x9030)+(x9031^x9032));

    if (t159 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x9046 = 0U;
	int8_t x9047 = INT8_MIN;
	uint8_t x9048 = 61U;
	static uint32_t t160 = 6U;

    t160 = ((x9045>>x9046)+(x9047^x9048));

    if (t160 != 39127740U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x9062 = 1;
	uint8_t x9063 = UINT8_MAX;
	int16_t x9064 = INT16_MIN;
	volatile int32_t t161 = -7926;

    t161 = ((x9061>>x9062)+(x9063^x9064));

    if (t161 != -32513) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x9097 = 25U;
	uint8_t x9098 = 0U;
	int32_t x9099 = 31;
	int64_t x9100 = INT64_MIN;
	int64_t t162 = 109868LL;

    t162 = ((x9097>>x9098)+(x9099^x9100));

    if (t162 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x9165 = 0LL;
	uint16_t x9167 = UINT16_MAX;

    t163 = ((x9165>>x9166)+(x9167^x9168));

    if (t163 != 65517LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x9197 = INT32_MAX;
	uint64_t x9198 = 0LLU;
	int16_t x9199 = -2;
	static volatile int32_t t164 = 981646;

    t164 = ((x9197>>x9198)+(x9199^x9200));

    if (t164 != 2147483646) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x9229 = 44460573577298781LL;
	uint8_t x9230 = 15U;
	static volatile int8_t x9232 = -1;
	int64_t t165 = -9513565761695LL;

    t165 = ((x9229>>x9230)+(x9231^x9232));

    if (t165 != 1361068560695LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x9425 = 2674891631438478LLU;
	volatile uint64_t t166 = 1376LLU;

    t166 = ((x9425>>x9426)+(x9427^x9428));

    if (t166 != 9931980LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x9453 = 953062U;
	volatile uint32_t x9454 = 15U;
	int64_t x9455 = INT64_MAX;
	static int8_t x9456 = INT8_MIN;
	volatile int64_t t167 = 32348228998LL;

    t167 = ((x9453>>x9454)+(x9455^x9456));

    if (t167 != -9223372036854775652LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x9754 = 7;
	int8_t x9756 = -1;
	static volatile uint32_t t168 = 4578U;

    t168 = ((x9753>>x9754)+(x9755^x9756));

    if (t168 != 48U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x9805 = 5U;
	int64_t x9807 = -1LL;
	uint64_t x9808 = 362LLU;

    t169 = ((x9805>>x9806)+(x9807^x9808));

    if (t169 != 18446744073709551255LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x9809 = INT16_MAX;
	static int32_t x9810 = 1;
	int16_t x9811 = INT16_MIN;
	uint64_t x9812 = 14849269446LLU;
	static uint64_t t170 = 1301LLU;

    t170 = ((x9809>>x9810)+(x9811^x9812));

    if (t170 != 18446744058860314309LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x9865 = INT8_MAX;
	static uint32_t x9866 = 3U;
	uint32_t x9867 = 108438U;
	volatile int32_t x9868 = 820;
	uint32_t t171 = 5U;

    t171 = ((x9865>>x9866)+(x9867^x9868));

    if (t171 != 107697U) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint32_t x9905 = UINT32_MAX;
	int8_t x9906 = 24;
	uint8_t x9907 = UINT8_MAX;
	int64_t x9908 = -1710442209LL;
	int64_t t172 = -55591766LL;

    t172 = ((x9905>>x9906)+(x9907^x9908));

    if (t172 != -1710441761LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x9957 = INT64_MAX;
	uint32_t x9958 = 10U;
	int32_t x9959 = INT32_MAX;
	static volatile uint32_t x9960 = UINT32_MAX;
	volatile int64_t t173 = 0LL;

    t173 = ((x9957>>x9958)+(x9959^x9960));

    if (t173 != 9007201402224639LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x10005 = 1U;
	uint16_t x10006 = 1U;
	static volatile int8_t x10007 = INT8_MIN;
	int32_t x10008 = INT32_MIN;
	static uint32_t t174 = 52U;

    t174 = ((x10005>>x10006)+(x10007^x10008));

    if (t174 != 2147483520U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x10053 = 612537896373587LL;
	int32_t x10054 = 18;
	int16_t x10055 = INT16_MIN;
	int32_t x10056 = INT32_MAX;
	volatile int64_t t175 = -45688359LL;

    t175 = ((x10053>>x10054)+(x10055^x10056));

    if (t175 != 189195757LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x10063 = 673;
	int32_t x10064 = -1;
	volatile int32_t t176 = 6588185;

    t176 = ((x10061>>x10062)+(x10063^x10064));

    if (t176 != -671) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x10073 = 173;
	volatile int8_t x10075 = INT8_MAX;
	int32_t t177 = 6273204;

    t177 = ((x10073>>x10074)+(x10075^x10076));

    if (t177 != -2147483478) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x10113 = UINT64_MAX;
	uint16_t x10116 = 31U;

    t178 = ((x10113>>x10114)+(x10115^x10116));

    if (t178 != 2305843007066210334LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x10157 = 0;
	int16_t x10159 = -1;
	int16_t x10160 = INT16_MAX;
	volatile int32_t t179 = 1626680;

    t179 = ((x10157>>x10158)+(x10159^x10160));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x10238 = 0U;
	static int16_t x10240 = INT16_MIN;
	volatile uint64_t t180 = 2LLU;

    t180 = ((x10237>>x10238)+(x10239^x10240));

    if (t180 != 2956522620673LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x10289 = 1U;
	uint16_t x10290 = 28U;
	static int16_t x10291 = -1;
	static volatile uint32_t t181 = 907889U;

    t181 = ((x10289>>x10290)+(x10291^x10292));

    if (t181 != 4294967271U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x10313 = 1U;
	uint16_t x10314 = 8U;
	static int16_t x10315 = INT16_MIN;
	volatile uint64_t x10316 = 377116609154693LLU;
	static uint64_t t182 = 140903534LLU;

    t182 = ((x10313>>x10314)+(x10315^x10316));

    if (t182 != 18446366957100371589LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x10321 = UINT16_MAX;
	static int16_t x10322 = 20;
	static int8_t x10323 = 7;
	volatile int64_t x10324 = INT64_MAX;
	static volatile int64_t t183 = -6500322041LL;

    t183 = ((x10321>>x10322)+(x10323^x10324));

    if (t183 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x10493 = UINT32_MAX;
	int8_t x10494 = 4;
	int8_t x10495 = INT8_MIN;
	uint32_t t184 = 1192199U;

    t184 = ((x10493>>x10494)+(x10495^x10496));

    if (t184 != 268435326U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x10537 = INT64_MAX;
	static uint8_t x10539 = 7U;
	int8_t x10540 = -45;
	int64_t t185 = 1003150LL;

    t185 = ((x10537>>x10538)+(x10539^x10540));

    if (t185 != 2305843009213693907LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x10674 = 1U;
	static int64_t x10675 = INT64_MAX;
	int64_t x10676 = 32626896215LL;
	int64_t t186 = 19LL;

    t186 = ((x10673>>x10674)+(x10675^x10676));

    if (t186 != 9223372004227879890LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x10797 = 16187805LLU;
	int16_t x10798 = 1;
	static volatile uint16_t x10799 = 4U;
	int32_t x10800 = 1;

    t187 = ((x10797>>x10798)+(x10799^x10800));

    if (t187 != 8093907LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x10801 = UINT64_MAX;
	uint8_t x10802 = 16U;
	int16_t x10803 = INT16_MAX;
	int16_t x10804 = 1228;

    t188 = ((x10801>>x10802)+(x10803^x10804));

    if (t188 != 281474976742194LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x10861 = 969U;
	uint32_t x10862 = 0U;
	uint32_t x10863 = UINT32_MAX;
	static int32_t x10864 = -16976;
	volatile uint32_t t189 = 12U;

    t189 = ((x10861>>x10862)+(x10863^x10864));

    if (t189 != 17944U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x10885 = 22097041351LLU;
	volatile int32_t x10887 = -2;
	volatile int16_t x10888 = INT16_MAX;

    t190 = ((x10885>>x10886)+(x10887^x10888));

    if (t190 != 22097008584LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x10897 = INT8_MAX;
	int64_t x10900 = -1LL;
	int64_t t191 = 2335582183LL;

    t191 = ((x10897>>x10898)+(x10899^x10900));

    if (t191 != 36LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x11022 = 0U;
	static uint64_t x11023 = UINT64_MAX;
	static volatile int32_t x11024 = INT32_MIN;

    t192 = ((x11021>>x11022)+(x11023^x11024));

    if (t192 != 2147516414LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x11025 = UINT64_MAX;
	uint8_t x11026 = 12U;
	volatile uint8_t x11028 = UINT8_MAX;
	volatile uint64_t t193 = 1933900153463686LLU;

    t193 = ((x11025>>x11026)+(x11027^x11028));

    if (t193 != 4503599627369411LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x11093 = 5U;
	uint8_t x11094 = 1U;
	static uint32_t x11095 = 2U;
	volatile uint32_t t194 = 15681U;

    t194 = ((x11093>>x11094)+(x11095^x11096));

    if (t194 != 127U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x11201 = 30U;
	uint8_t x11202 = 2U;
	volatile uint16_t x11203 = UINT16_MAX;
	int8_t x11204 = 22;
	volatile int32_t t195 = 1713918;

    t195 = ((x11201>>x11202)+(x11203^x11204));

    if (t195 != 65520) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x11453 = 514682015U;
	volatile uint16_t x11454 = 4U;
	static int16_t x11455 = INT16_MAX;
	uint16_t x11456 = 93U;
	uint32_t t196 = 237697U;

    t196 = ((x11453>>x11454)+(x11455^x11456));

    if (t196 != 32200299U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x11457 = 113U;
	uint16_t x11458 = 1U;
	int64_t x11459 = INT64_MIN;
	int64_t t197 = 819LL;

    t197 = ((x11457>>x11458)+(x11459^x11460));

    if (t197 != 56LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x11469 = INT8_MAX;
	uint16_t x11470 = 0U;
	static int64_t x11471 = INT64_MAX;
	int32_t x11472 = INT32_MAX;
	volatile int64_t t198 = -103811393531LL;

    t198 = ((x11469>>x11470)+(x11471^x11472));

    if (t198 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x11481 = INT8_MAX;
	uint16_t x11482 = 12U;
	volatile uint64_t x11483 = UINT64_MAX;
	uint32_t x11484 = UINT32_MAX;
	static uint64_t t199 = 3605LLU;

    t199 = ((x11481>>x11482)+(x11483^x11484));

    if (t199 != 18446744069414584320LLU) { NG(); } else { ; }
	
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

