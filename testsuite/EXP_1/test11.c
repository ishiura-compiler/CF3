
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

int32_t x27 = INT32_MIN;
int8_t x121 = 0;
static int8_t x207 = -28;
int16_t x267 = -923;
int64_t t4 = -458928366515LL;
int8_t x346 = -1;
int32_t x350 = -1;
volatile int64_t t7 = -7665229581581LL;
volatile uint64_t x423 = 13LLU;
static volatile uint64_t t9 = 191LLU;
int8_t x433 = INT8_MIN;
int8_t x436 = 0;
uint64_t x619 = 90196LLU;
uint16_t x689 = UINT16_MAX;
static volatile uint32_t x914 = 31337398U;
static volatile uint32_t x915 = 193014U;
uint64_t x1090 = 1LLU;
int32_t x1109 = INT32_MIN;
volatile uint64_t x1111 = 1462406555292767876LLU;
static int8_t x1490 = INT8_MIN;
uint64_t t23 = 135057663814947734LLU;
uint32_t x1521 = 863525U;
static int16_t x1543 = INT16_MAX;
static volatile uint32_t t27 = 66U;
uint32_t x1711 = UINT32_MAX;
int16_t x1737 = INT16_MIN;
static volatile uint32_t t29 = 20U;
uint64_t x1761 = 6396078LLU;
int64_t x1803 = 621517372882LL;
volatile uint16_t x1804 = 19U;
volatile int64_t t31 = 507LL;
static uint64_t x2030 = 4118516777787LLU;
volatile int16_t x2093 = -1;
static int16_t x2095 = INT16_MIN;
int16_t x2137 = INT16_MAX;
uint64_t x2346 = UINT64_MAX;
static uint64_t t42 = 1545661236028328LLU;
volatile int32_t x2558 = 60021;
int32_t t43 = 162;
int8_t x2600 = 4;
volatile int64_t x2602 = 5LL;
volatile int64_t t45 = -608234569917128928LL;
int64_t x2723 = INT64_MIN;
uint8_t x2724 = 1U;
volatile int16_t x2771 = 300;
int32_t t47 = -72;
volatile int8_t x2776 = 1;
int8_t x2896 = 10;
uint16_t x2905 = 94U;
int8_t x2908 = 37;
uint64_t x3093 = UINT64_MAX;
int8_t x3096 = 1;
static int16_t x3125 = 791;
uint8_t x3127 = UINT8_MAX;
uint32_t x3139 = 485194308U;
uint32_t t55 = 1239U;
static uint32_t x3212 = 5U;
volatile int32_t t56 = 2355740;
volatile uint64_t x3309 = 585LLU;
static int32_t x3310 = -6;
int8_t x3311 = INT8_MIN;
static int16_t x3312 = 9;
uint64_t t57 = 709LLU;
uint8_t x3378 = 4U;
volatile uint32_t x3395 = 13U;
volatile uint64_t t60 = 30494810LLU;
static uint32_t x3507 = 1341131320U;
int32_t x3545 = -1;
int8_t x3610 = INT8_MIN;
static int64_t x3611 = -138LL;
volatile int16_t x3705 = INT16_MAX;
uint32_t x3765 = 30U;
uint8_t x3768 = 1U;
int32_t x3785 = INT32_MIN;
static volatile uint32_t x4054 = UINT32_MAX;
volatile uint64_t t70 = 5480LLU;
int64_t x4239 = -818LL;
volatile uint16_t x4243 = UINT16_MAX;
static volatile int32_t t75 = 1;
static uint64_t t76 = 9LLU;
volatile uint8_t x4415 = UINT8_MAX;
int16_t x4428 = 1;
uint64_t x4607 = 27823311LLU;
volatile int32_t t83 = 2702;
uint32_t x4649 = 239619U;
volatile int8_t x4651 = INT8_MIN;
uint32_t t85 = 270500579U;
static int64_t x4849 = -1LL;
volatile uint64_t t87 = 109870040689109496LLU;
int32_t x4930 = 1870;
int8_t x4932 = 1;
static int8_t x4993 = -1;
int8_t x4995 = INT8_MIN;
int32_t x5002 = -51185509;
int32_t x5003 = -13440815;
static volatile uint64_t t92 = 1403858248795729LLU;
uint8_t x5013 = 23U;
volatile uint32_t t95 = 7171755U;
volatile uint8_t x5259 = UINT8_MAX;
static int64_t x5342 = INT64_MAX;
int64_t t98 = -939777318128797LL;
int32_t x5346 = -1;
int16_t x5401 = 1;
volatile uint32_t x5582 = 84U;
uint16_t x5640 = 2U;
volatile int32_t t104 = -38221909;
static uint8_t x5683 = 50U;
int64_t x5689 = 400LL;
volatile uint64_t x5749 = UINT64_MAX;
int8_t x5775 = -1;
uint32_t x5794 = 816712U;
int32_t x5818 = -40054149;
int16_t x5891 = 0;
uint16_t x5979 = 2U;
uint8_t x5980 = 1U;
int8_t x6035 = -1;
volatile int32_t t115 = 201728373;
volatile uint64_t x6038 = UINT64_MAX;
uint8_t x6071 = 0U;
uint32_t x6186 = UINT32_MAX;
uint16_t x6188 = 15U;
volatile int32_t x6338 = -1;
int64_t x6374 = 53353569LL;
uint8_t x6376 = 0U;
int16_t x6519 = 5;
volatile uint64_t t128 = 10LLU;
static uint32_t x6669 = 0U;
static uint64_t x6681 = 3640737687341450074LLU;
uint64_t t130 = 3613220695464410967LLU;
volatile int8_t x6853 = INT8_MIN;
static int8_t x6855 = INT8_MAX;
int8_t x6856 = 50;
int64_t x6918 = INT64_MIN;
volatile uint64_t t133 = 18771595652650LLU;
uint32_t x7054 = UINT32_MAX;
static volatile int8_t x7150 = -4;
volatile uint32_t t139 = 554458U;
uint64_t x7234 = 12LLU;
uint64_t x7533 = 2957946775198LLU;
uint8_t x7648 = 9U;
static volatile uint64_t t149 = 17406799552727LLU;
static int64_t x7691 = -1LL;
int8_t x7755 = -1;
uint8_t x7756 = 3U;
static volatile uint32_t t153 = 57U;
static int16_t x7806 = INT16_MIN;
uint8_t x7808 = 17U;
static uint32_t x7854 = UINT32_MAX;
uint32_t t155 = 1U;
uint8_t x7892 = 13U;
volatile int32_t t157 = -7;
volatile uint64_t t159 = 1992132147045LLU;
uint32_t x8008 = 2U;
uint32_t t160 = 38217957U;
uint64_t x8025 = 2935771559566103901LLU;
volatile int64_t t164 = -107587LL;
int16_t x8232 = 2;
static volatile uint64_t x8318 = 2486LLU;
volatile uint8_t x8331 = 0U;
uint64_t x8332 = 0LLU;
int32_t x8389 = 526154040;
uint8_t x8392 = 0U;
volatile uint64_t t169 = 954861823802LLU;
static uint32_t x8506 = 6798284U;
uint8_t x8560 = 0U;
int32_t t173 = 20956;
int32_t x8597 = INT32_MAX;
int16_t x8638 = -1;
uint8_t x8681 = 0U;
volatile uint8_t x8683 = 95U;
int32_t t178 = 49615;
uint32_t x8708 = 2U;
volatile int16_t x8745 = 1663;
int8_t x8747 = -1;
static int32_t x8819 = INT32_MIN;
uint64_t t185 = 16820238707LLU;
int32_t x8838 = 154188089;
int8_t x8858 = 1;
uint64_t x9242 = 2611586127670179331LLU;
int16_t x9266 = INT16_MAX;
uint8_t x9268 = 3U;
volatile int32_t t195 = -14770032;
static uint64_t x9298 = 8383365914879292LLU;
static uint32_t x9347 = UINT32_MAX;
int8_t x9426 = INT8_MAX;
int32_t t199 = 5192571;


void f0(void) {
    	int64_t x5 = -530893LL;
	static volatile int32_t x6 = INT32_MAX;
	uint8_t x7 = 21U;
	volatile int8_t x8 = 2;
	int64_t t0 = 5521LL;

    t0 = (((x5+x6)+x7)>>x8);

    if (t0 != 536738193LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x25 = UINT16_MAX;
	int64_t x26 = 25652422858LL;
	uint8_t x28 = 2U;
	volatile int64_t t1 = -121LL;

    t1 = (((x25+x26)+x27)>>x28);

    if (t1 != 5876251186LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x122 = 991011LLU;
	uint64_t x123 = 505295LLU;
	volatile int8_t x124 = 5;
	static uint64_t t2 = 51548891LLU;

    t2 = (((x121+x122)+x123)>>x124);

    if (t2 != 46759LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	int32_t x206 = -1;
	uint16_t x208 = 1U;
	static uint64_t t3 = 191561LLU;

    t3 = (((x205+x206)+x207)>>x208);

    if (t3 != 9223372036854775793LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x265 = INT32_MIN;
	volatile int64_t x266 = INT64_MAX;
	volatile uint8_t x268 = 0U;

    t4 = (((x265+x266)+x267)>>x268);

    if (t4 != 9223372034707291236LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x345 = 510766LLU;
	int8_t x347 = INT8_MIN;
	int16_t x348 = 0;
	volatile uint64_t t5 = 377606188276298667LLU;

    t5 = (((x345+x346)+x347)>>x348);

    if (t5 != 510637LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x349 = 497U;
	int32_t x351 = -1;
	static uint32_t x352 = 2U;
	int32_t t6 = 33115;

    t6 = (((x349+x350)+x351)>>x352);

    if (t6 != 123) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x417 = 14136855680LL;
	volatile uint32_t x418 = 14U;
	static volatile uint16_t x419 = UINT16_MAX;
	static volatile int8_t x420 = 2;

    t7 = (((x417+x418)+x419)>>x420);

    if (t7 != 3534230307LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x421 = 69814LL;
	int32_t x422 = INT32_MIN;
	int8_t x424 = 0;
	static uint64_t t8 = 267LLU;

    t8 = (((x421+x422)+x423)>>x424);

    if (t8 != 18446744071562137795LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x429 = 32032225LLU;
	int64_t x430 = 747123LL;
	static int64_t x431 = INT64_MIN;
	int16_t x432 = 63;

    t9 = (((x429+x430)+x431)>>x432);

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x434 = INT32_MAX;
	int16_t x435 = -28;
	int32_t t10 = -3406;

    t10 = (((x433+x434)+x435)>>x436);

    if (t10 != 2147483491) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x505 = INT16_MIN;
	static uint16_t x506 = UINT16_MAX;
	int64_t x507 = -47LL;
	uint8_t x508 = 1U;
	volatile int64_t t11 = -195700783LL;

    t11 = (((x505+x506)+x507)>>x508);

    if (t11 != 16360LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x577 = 222277U;
	static volatile int16_t x578 = 10328;
	volatile int8_t x579 = -22;
	int8_t x580 = 1;
	static uint32_t t12 = 23U;

    t12 = (((x577+x578)+x579)>>x580);

    if (t12 != 116291U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	int8_t x620 = 1;
	volatile uint64_t t13 = 1948988392545LLU;

    t13 = (((x617+x618)+x619)>>x620);

    if (t13 != 2147528745LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x690 = INT8_MIN;
	int64_t x691 = -1LL;
	static volatile uint8_t x692 = 1U;
	volatile int64_t t14 = -7649LL;

    t14 = (((x689+x690)+x691)>>x692);

    if (t14 != 32703LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x913 = INT32_MAX;
	int8_t x916 = 0;
	static uint32_t t15 = 824484U;

    t15 = (((x913+x914)+x915)>>x916);

    if (t15 != 2179014059U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x921 = INT16_MIN;
	static volatile uint64_t x922 = 30LLU;
	int32_t x923 = 5917;
	static int16_t x924 = 2;
	volatile uint64_t t16 = 114046LLU;

    t16 = (((x921+x922)+x923)>>x924);

    if (t16 != 4611686018427381198LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x953 = INT16_MIN;
	uint64_t x954 = 1525691394LLU;
	uint16_t x955 = UINT16_MAX;
	volatile int8_t x956 = 0;
	volatile uint64_t t17 = 348783497LLU;

    t17 = (((x953+x954)+x955)>>x956);

    if (t17 != 1525724161LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1089 = INT64_MAX;
	uint16_t x1091 = 1U;
	uint16_t x1092 = 10U;
	static uint64_t t18 = 3200LLU;

    t18 = (((x1089+x1090)+x1091)>>x1092);

    if (t18 != 9007199254740992LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1110 = INT32_MAX;
	int16_t x1112 = 36;
	uint64_t t19 = 460206942689LLU;

    t19 = (((x1109+x1110)+x1111)>>x1112);

    if (t19 != 21280816LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1189 = INT8_MIN;
	int16_t x1190 = -1;
	int16_t x1191 = 2252;
	volatile uint64_t x1192 = 13LLU;
	volatile int32_t t20 = 35155;

    t20 = (((x1189+x1190)+x1191)>>x1192);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x1193 = -1LL;
	int64_t x1194 = 3899189222LL;
	int8_t x1195 = INT8_MIN;
	static uint8_t x1196 = 7U;
	int64_t t21 = 87070LL;

    t21 = (((x1193+x1194)+x1195)>>x1196);

    if (t21 != 30462414LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1233 = UINT32_MAX;
	uint64_t x1234 = 1669818LLU;
	int16_t x1235 = -1;
	volatile int8_t x1236 = 0;
	uint64_t t22 = 1841594372LLU;

    t22 = (((x1233+x1234)+x1235)>>x1236);

    if (t22 != 4296637112LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x1489 = INT8_MAX;
	static volatile uint64_t x1491 = UINT64_MAX;
	volatile int16_t x1492 = 1;

    t23 = (((x1489+x1490)+x1491)>>x1492);

    if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1522 = 2;
	volatile int16_t x1523 = INT16_MIN;
	static uint8_t x1524 = 0U;
	volatile uint32_t t24 = 21903U;

    t24 = (((x1521+x1522)+x1523)>>x1524);

    if (t24 != 830759U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1541 = -10157;
	volatile int16_t x1542 = -1;
	int8_t x1544 = 0;
	volatile int32_t t25 = -5378;

    t25 = (((x1541+x1542)+x1543)>>x1544);

    if (t25 != 22609) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x1597 = 240760605835LLU;
	static int64_t x1598 = -1LL;
	uint8_t x1599 = UINT8_MAX;
	int8_t x1600 = 10;
	uint64_t t26 = 118675926991531394LLU;

    t26 = (((x1597+x1598)+x1599)>>x1600);

    if (t26 != 235117779LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1693 = -1;
	uint32_t x1694 = 900U;
	int8_t x1695 = 0;
	int8_t x1696 = 2;

    t27 = (((x1693+x1694)+x1695)>>x1696);

    if (t27 != 224U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1709 = 259245;
	static int16_t x1710 = 1028;
	uint16_t x1712 = 3U;
	static uint32_t t28 = 775037019U;

    t28 = (((x1709+x1710)+x1711)>>x1712);

    if (t28 != 32534U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1738 = -1;
	static uint32_t x1739 = 305U;
	uint8_t x1740 = 3U;

    t29 = (((x1737+x1738)+x1739)>>x1740);

    if (t29 != 536866854U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1762 = 2U;
	uint8_t x1763 = 41U;
	int16_t x1764 = 1;
	uint64_t t30 = 2286139286477197985LLU;

    t30 = (((x1761+x1762)+x1763)>>x1764);

    if (t30 != 3198060LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1801 = -1LL;
	int8_t x1802 = 1;

    t31 = (((x1801+x1802)+x1803)>>x1804);

    if (t31 != 1185450LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1853 = 3;
	int8_t x1854 = INT8_MAX;
	static uint8_t x1855 = 3U;
	uint8_t x1856 = 3U;
	int32_t t32 = -32;

    t32 = (((x1853+x1854)+x1855)>>x1856);

    if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x1857 = -77;
	int8_t x1858 = -1;
	static int64_t x1859 = 792763701934LL;
	int32_t x1860 = 0;
	int64_t t33 = -9LL;

    t33 = (((x1857+x1858)+x1859)>>x1860);

    if (t33 != 792763701856LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1925 = UINT64_MAX;
	uint8_t x1926 = 5U;
	uint32_t x1927 = UINT32_MAX;
	uint8_t x1928 = 1U;
	volatile uint64_t t34 = 138423614954658LLU;

    t34 = (((x1925+x1926)+x1927)>>x1928);

    if (t34 != 2147483649LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1953 = -1056;
	uint64_t x1954 = 70651LLU;
	static int64_t x1955 = -18371LL;
	static uint16_t x1956 = 13U;
	volatile uint64_t t35 = 1116910776503549695LLU;

    t35 = (((x1953+x1954)+x1955)>>x1956);

    if (t35 != 6LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x2029 = INT64_MAX;
	volatile int64_t x2031 = -80LL;
	uint8_t x2032 = 5U;
	static uint64_t t36 = 9223083180493687LLU;

    t36 = (((x2029+x2030)+x2031)>>x2032);

    if (t36 != 288230504855361047LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2094 = INT32_MAX;
	int16_t x2096 = 0;
	volatile int32_t t37 = 49;

    t37 = (((x2093+x2094)+x2095)>>x2096);

    if (t37 != 2147450878) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2138 = -1;
	uint32_t x2139 = 122917598U;
	uint16_t x2140 = 3U;
	static uint32_t t38 = 23972754U;

    t38 = (((x2137+x2138)+x2139)>>x2140);

    if (t38 != 15368795U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x2173 = INT16_MIN;
	uint32_t x2174 = UINT32_MAX;
	static volatile uint8_t x2175 = 6U;
	int8_t x2176 = 1;
	volatile uint32_t t39 = 812778472U;

    t39 = (((x2173+x2174)+x2175)>>x2176);

    if (t39 != 2147467266U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x2189 = UINT32_MAX;
	uint16_t x2190 = 0U;
	uint32_t x2191 = 409100473U;
	int64_t x2192 = 9LL;
	uint32_t t40 = 9186692U;

    t40 = (((x2189+x2190)+x2191)>>x2192);

    if (t40 != 799024U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2345 = UINT32_MAX;
	int32_t x2347 = -534500390;
	uint8_t x2348 = 9U;
	uint64_t t41 = 61395141793198733LLU;

    t41 = (((x2345+x2346)+x2347)>>x2348);

    if (t41 != 7344661LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x2481 = UINT64_MAX;
	static int64_t x2482 = 73895906852LL;
	uint16_t x2483 = 5113U;
	uint8_t x2484 = 3U;

    t42 = (((x2481+x2482)+x2483)>>x2484);

    if (t42 != 9236988995LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x2557 = 6;
	volatile int8_t x2559 = INT8_MAX;
	int32_t x2560 = 8;

    t43 = (((x2557+x2558)+x2559)>>x2560);

    if (t43 != 234) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2597 = INT16_MAX;
	int16_t x2598 = 2;
	volatile int16_t x2599 = INT16_MIN;
	int32_t t44 = 31479;

    t44 = (((x2597+x2598)+x2599)>>x2600);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2601 = 46LL;
	int64_t x2603 = -1LL;
	uint8_t x2604 = 37U;

    t45 = (((x2601+x2602)+x2603)>>x2604);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x2721 = -1013134LL;
	uint64_t x2722 = UINT64_MAX;
	uint64_t t46 = 8272363990436703LLU;

    t46 = (((x2721+x2722)+x2723)>>x2724);

    if (t46 != 4611686018426881336LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x2769 = INT16_MIN;
	int16_t x2770 = INT16_MAX;
	uint16_t x2772 = 1U;

    t47 = (((x2769+x2770)+x2771)>>x2772);

    if (t47 != 149) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x2773 = INT8_MAX;
	uint16_t x2774 = 6888U;
	int8_t x2775 = INT8_MIN;
	static int32_t t48 = 88315323;

    t48 = (((x2773+x2774)+x2775)>>x2776);

    if (t48 != 3443) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2833 = 3512U;
	uint64_t x2834 = UINT64_MAX;
	volatile int64_t x2835 = INT64_MAX;
	static int8_t x2836 = 2;
	volatile uint64_t t49 = 1595120831377767841LLU;

    t49 = (((x2833+x2834)+x2835)>>x2836);

    if (t49 != 2305843009213694829LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x2893 = INT32_MIN;
	uint16_t x2894 = 90U;
	static uint32_t x2895 = 145U;
	volatile uint32_t t50 = 7U;

    t50 = (((x2893+x2894)+x2895)>>x2896);

    if (t50 != 2097152U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2906 = 3425U;
	int64_t x2907 = -1LL;
	static int64_t t51 = 7614204921LL;

    t51 = (((x2905+x2906)+x2907)>>x2908);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x2945 = 0U;
	int64_t x2946 = INT64_MAX;
	int32_t x2947 = -1;
	int8_t x2948 = 21;
	volatile int64_t t52 = -1LL;

    t52 = (((x2945+x2946)+x2947)>>x2948);

    if (t52 != 4398046511103LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x3094 = INT16_MIN;
	volatile int8_t x3095 = INT8_MIN;
	uint64_t t53 = 6249739623458LLU;

    t53 = (((x3093+x3094)+x3095)>>x3096);

    if (t53 != 9223372036854759359LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x3126 = INT16_MAX;
	uint16_t x3128 = 3U;
	volatile int32_t t54 = 522;

    t54 = (((x3125+x3126)+x3127)>>x3128);

    if (t54 != 4226) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x3137 = 41U;
	static int8_t x3138 = INT8_MIN;
	int16_t x3140 = 1;

    t55 = (((x3137+x3138)+x3139)>>x3140);

    if (t55 != 242597110U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3209 = INT16_MAX;
	int8_t x3210 = INT8_MAX;
	int32_t x3211 = 819711235;

    t56 = (((x3209+x3210)+x3211)>>x3212);

    if (t56 != 25617004) { NG(); } else { ; }
	
}

void f57(void) {
    

    t57 = (((x3309+x3310)+x3311)>>x3312);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x3377 = -1;
	int32_t x3379 = -1;
	volatile uint8_t x3380 = 1U;
	int32_t t58 = 1880001;

    t58 = (((x3377+x3378)+x3379)>>x3380);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x3393 = -1;
	int64_t x3394 = -1LL;
	uint8_t x3396 = 1U;
	int64_t t59 = -588282536282LL;

    t59 = (((x3393+x3394)+x3395)>>x3396);

    if (t59 != 5LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x3425 = INT64_MAX;
	uint64_t x3426 = 55278472092587LLU;
	volatile uint32_t x3427 = 11731U;
	volatile uint64_t x3428 = 5LLU;

    t60 = (((x3425+x3426)+x3427)>>x3428);

    if (t60 != 288232103603965003LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x3505 = 119U;
	uint32_t x3506 = 6937556U;
	int8_t x3508 = 1;
	uint32_t t61 = 5U;

    t61 = (((x3505+x3506)+x3507)>>x3508);

    if (t61 != 674034497U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x3546 = 3476U;
	int32_t x3547 = -1;
	int64_t x3548 = 10LL;
	volatile uint32_t t62 = 94867U;

    t62 = (((x3545+x3546)+x3547)>>x3548);

    if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x3553 = INT32_MIN;
	int32_t x3554 = INT32_MAX;
	uint32_t x3555 = UINT32_MAX;
	int8_t x3556 = 1;
	volatile uint32_t t63 = 130508U;

    t63 = (((x3553+x3554)+x3555)>>x3556);

    if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3561 = UINT64_MAX;
	volatile uint16_t x3562 = 818U;
	uint16_t x3563 = 215U;
	int16_t x3564 = 29;
	volatile uint64_t t64 = 13495151300LLU;

    t64 = (((x3561+x3562)+x3563)>>x3564);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x3609 = 448;
	int16_t x3612 = 0;
	int64_t t65 = 33777048412401LL;

    t65 = (((x3609+x3610)+x3611)>>x3612);

    if (t65 != 182LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x3689 = UINT64_MAX;
	static uint64_t x3690 = UINT64_MAX;
	int64_t x3691 = INT64_MIN;
	uint8_t x3692 = 3U;
	volatile uint64_t t66 = 21LLU;

    t66 = (((x3689+x3690)+x3691)>>x3692);

    if (t66 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x3706 = -1LL;
	uint8_t x3707 = 51U;
	uint8_t x3708 = 3U;
	static int64_t t67 = 1678105927LL;

    t67 = (((x3705+x3706)+x3707)>>x3708);

    if (t67 != 4102LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x3766 = 62;
	int8_t x3767 = INT8_MIN;
	static uint32_t t68 = 3022U;

    t68 = (((x3765+x3766)+x3767)>>x3768);

    if (t68 != 2147483630U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x3786 = 26255412806974422LLU;
	uint16_t x3787 = 0U;
	int16_t x3788 = 1;
	volatile uint64_t t69 = 8137910834734637108LLU;

    t69 = (((x3785+x3786)+x3787)>>x3788);

    if (t69 != 13127705329745387LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x4053 = 37531199LLU;
	volatile int64_t x4055 = 185755411509216360LL;
	uint32_t x4056 = 15U;

    t70 = (((x4053+x4054)+x4055)>>x4056);

    if (t70 != 5668805415091LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x4121 = 13U;
	int64_t x4122 = -1LL;
	uint16_t x4123 = 51U;
	int16_t x4124 = 10;
	static int64_t t71 = -987801LL;

    t71 = (((x4121+x4122)+x4123)>>x4124);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x4173 = -1280550;
	volatile uint64_t x4174 = UINT64_MAX;
	int16_t x4175 = -1;
	static int64_t x4176 = 0LL;
	uint64_t t72 = 6444LLU;

    t72 = (((x4173+x4174)+x4175)>>x4176);

    if (t72 != 18446744073708271064LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x4229 = 163LL;
	static uint32_t x4230 = UINT32_MAX;
	static int8_t x4231 = INT8_MIN;
	static uint8_t x4232 = 11U;
	int64_t t73 = -172704448780221972LL;

    t73 = (((x4229+x4230)+x4231)>>x4232);

    if (t73 != 2097152LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x4237 = INT32_MAX;
	int8_t x4238 = INT8_MIN;
	static int8_t x4240 = 0;
	volatile int64_t t74 = 13640LL;

    t74 = (((x4237+x4238)+x4239)>>x4240);

    if (t74 != 2147482701LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x4241 = -1;
	uint8_t x4242 = 3U;
	static int8_t x4244 = 14;

    t75 = (((x4241+x4242)+x4243)>>x4244);

    if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x4245 = -1;
	uint64_t x4246 = UINT64_MAX;
	uint8_t x4247 = 1U;
	static int32_t x4248 = 53;

    t76 = (((x4245+x4246)+x4247)>>x4248);

    if (t76 != 2047LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4349 = INT8_MIN;
	static volatile uint32_t x4350 = 1372U;
	int32_t x4351 = 27;
	uint16_t x4352 = 1U;
	volatile uint32_t t77 = 2U;

    t77 = (((x4349+x4350)+x4351)>>x4352);

    if (t77 != 635U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x4413 = -1;
	int16_t x4414 = -1;
	int8_t x4416 = 11;
	volatile int32_t t78 = -15110;

    t78 = (((x4413+x4414)+x4415)>>x4416);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x4425 = INT16_MIN;
	uint32_t x4426 = 304513183U;
	static volatile int32_t x4427 = -1609214;
	uint32_t t79 = 843067U;

    t79 = (((x4425+x4426)+x4427)>>x4428);

    if (t79 != 151435600U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x4477 = 5893U;
	static int8_t x4478 = INT8_MIN;
	int8_t x4479 = -1;
	uint8_t x4480 = 0U;
	int32_t t80 = 12701;

    t80 = (((x4477+x4478)+x4479)>>x4480);

    if (t80 != 5764) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x4553 = INT8_MIN;
	volatile int16_t x4554 = INT16_MIN;
	static int32_t x4555 = INT32_MAX;
	int8_t x4556 = 4;
	volatile int32_t t81 = -10493939;

    t81 = (((x4553+x4554)+x4555)>>x4556);

    if (t81 != 134215671) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x4605 = 1610526429662LLU;
	int16_t x4606 = 5113;
	static int16_t x4608 = 55;
	static uint64_t t82 = 1LLU;

    t82 = (((x4605+x4606)+x4607)>>x4608);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x4613 = 2U;
	volatile int16_t x4614 = INT16_MAX;
	static int32_t x4615 = -1;
	uint16_t x4616 = 4U;

    t83 = (((x4613+x4614)+x4615)>>x4616);

    if (t83 != 2048) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x4633 = UINT16_MAX;
	static uint32_t x4634 = 249753U;
	uint32_t x4635 = 65530755U;
	static uint8_t x4636 = 0U;
	uint32_t t84 = 337596U;

    t84 = (((x4633+x4634)+x4635)>>x4636);

    if (t84 != 65846043U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4650 = -57;
	static int64_t x4652 = 25LL;

    t85 = (((x4649+x4650)+x4651)>>x4652);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x4850 = 261997243754506LLU;
	static int32_t x4851 = -97202236;
	static int8_t x4852 = 13;
	volatile uint64_t t86 = 2739991046823297470LLU;

    t86 = (((x4849+x4850)+x4851)>>x4852);

    if (t86 != 31982073553LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x4897 = INT64_MIN;
	uint64_t x4898 = 44981425563925LLU;
	int8_t x4899 = INT8_MAX;
	int8_t x4900 = 41;

    t87 = (((x4897+x4898)+x4899)>>x4900);

    if (t87 != 4194324LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x4929 = -1029;
	uint32_t x4931 = 15733670U;
	static uint32_t t88 = 1552035U;

    t88 = (((x4929+x4930)+x4931)>>x4932);

    if (t88 != 7867255U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x4989 = -1;
	int8_t x4990 = INT8_MIN;
	int16_t x4991 = INT16_MAX;
	static uint16_t x4992 = 0U;
	int32_t t89 = -6;

    t89 = (((x4989+x4990)+x4991)>>x4992);

    if (t89 != 32638) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x4994 = UINT32_MAX;
	uint8_t x4996 = 1U;
	volatile uint32_t t90 = 247U;

    t90 = (((x4993+x4994)+x4995)>>x4996);

    if (t90 != 2147483583U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x5001 = INT32_MAX;
	int32_t x5004 = 22;
	int32_t t91 = 32;

    t91 = (((x5001+x5002)+x5003)>>x5004);

    if (t91 != 496) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x5009 = INT16_MAX;
	volatile uint64_t x5010 = 3818166508LLU;
	int64_t x5011 = -687458331950LL;
	static int32_t x5012 = 1;

    t92 = (((x5009+x5010)+x5011)>>x5012);

    if (t92 != 9223371695034709470LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x5014 = 53U;
	uint8_t x5015 = UINT8_MAX;
	uint8_t x5016 = 14U;
	volatile int32_t t93 = -26;

    t93 = (((x5013+x5014)+x5015)>>x5016);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x5017 = 1037632U;
	int16_t x5018 = INT16_MAX;
	volatile int32_t x5019 = -1;
	uint8_t x5020 = 2U;
	static uint32_t t94 = 292U;

    t94 = (((x5017+x5018)+x5019)>>x5020);

    if (t94 != 267599U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x5045 = UINT32_MAX;
	int32_t x5046 = -1;
	uint32_t x5047 = 75844U;
	volatile uint8_t x5048 = 4U;

    t95 = (((x5045+x5046)+x5047)>>x5048);

    if (t95 != 4740U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x5145 = INT8_MIN;
	uint8_t x5146 = UINT8_MAX;
	static int32_t x5147 = 73;
	uint32_t x5148 = 26U;
	int32_t t96 = 112;

    t96 = (((x5145+x5146)+x5147)>>x5148);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x5257 = 0U;
	int8_t x5258 = -1;
	uint16_t x5260 = 0U;
	static volatile int32_t t97 = -3269;

    t97 = (((x5257+x5258)+x5259)>>x5260);

    if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x5341 = INT32_MIN;
	int8_t x5343 = INT8_MAX;
	uint8_t x5344 = 1U;

    t98 = (((x5341+x5342)+x5343)>>x5344);

    if (t98 != 4611686017353646143LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x5345 = INT8_MAX;
	static int8_t x5347 = 18;
	uint8_t x5348 = 1U;
	int32_t t99 = 49;

    t99 = (((x5345+x5346)+x5347)>>x5348);

    if (t99 != 72) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x5402 = INT16_MAX;
	int32_t x5403 = -1;
	uint16_t x5404 = 30U;
	volatile int32_t t100 = 1946383;

    t100 = (((x5401+x5402)+x5403)>>x5404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x5413 = 23;
	static uint8_t x5414 = 0U;
	volatile uint8_t x5415 = 0U;
	int8_t x5416 = 3;
	volatile int32_t t101 = 29433;

    t101 = (((x5413+x5414)+x5415)>>x5416);

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x5481 = 44U;
	uint16_t x5482 = 31107U;
	volatile int64_t x5483 = -5259LL;
	int16_t x5484 = 1;
	volatile int64_t t102 = -1023031140414LL;

    t102 = (((x5481+x5482)+x5483)>>x5484);

    if (t102 != 12946LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x5581 = 122U;
	int32_t x5583 = 375654;
	int8_t x5584 = 1;
	uint32_t t103 = 1247U;

    t103 = (((x5581+x5582)+x5583)>>x5584);

    if (t103 != 187930U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5637 = 120;
	int8_t x5638 = 1;
	volatile int8_t x5639 = 3;

    t104 = (((x5637+x5638)+x5639)>>x5640);

    if (t104 != 31) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x5681 = UINT16_MAX;
	int8_t x5682 = INT8_MIN;
	static uint8_t x5684 = 1U;
	int32_t t105 = -8596512;

    t105 = (((x5681+x5682)+x5683)>>x5684);

    if (t105 != 32728) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x5690 = 5527LL;
	int8_t x5691 = INT8_MIN;
	static int16_t x5692 = 59;
	volatile int64_t t106 = -4328LL;

    t106 = (((x5689+x5690)+x5691)>>x5692);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x5750 = INT64_MIN;
	volatile int16_t x5751 = 0;
	int8_t x5752 = 0;
	uint64_t t107 = 7621735107LLU;

    t107 = (((x5749+x5750)+x5751)>>x5752);

    if (t107 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x5753 = 12U;
	uint64_t x5754 = 1067LLU;
	static int32_t x5755 = INT32_MIN;
	int8_t x5756 = 20;
	volatile uint64_t t108 = 115LLU;

    t108 = (((x5753+x5754)+x5755)>>x5756);

    if (t108 != 17592186042368LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x5773 = INT8_MIN;
	static int32_t x5774 = INT32_MAX;
	uint8_t x5776 = 3U;
	int32_t t109 = 66;

    t109 = (((x5773+x5774)+x5775)>>x5776);

    if (t109 != 268435439) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x5793 = INT8_MIN;
	static uint8_t x5795 = UINT8_MAX;
	volatile int8_t x5796 = 12;
	uint32_t t110 = 206657190U;

    t110 = (((x5793+x5794)+x5795)>>x5796);

    if (t110 != 199U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x5817 = 23U;
	uint32_t x5819 = 57U;
	uint16_t x5820 = 19U;
	uint32_t t111 = 4822U;

    t111 = (((x5817+x5818)+x5819)>>x5820);

    if (t111 != 8115U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5841 = INT8_MAX;
	int8_t x5842 = -1;
	volatile uint32_t x5843 = 29048U;
	static uint32_t x5844 = 12U;
	uint32_t t112 = 0U;

    t112 = (((x5841+x5842)+x5843)>>x5844);

    if (t112 != 7U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x5889 = -1;
	static int8_t x5890 = INT8_MAX;
	volatile uint32_t x5892 = 6U;
	int32_t t113 = 0;

    t113 = (((x5889+x5890)+x5891)>>x5892);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x5977 = -1LL;
	volatile int32_t x5978 = -1;
	volatile int64_t t114 = -7018184LL;

    t114 = (((x5977+x5978)+x5979)>>x5980);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x6033 = INT8_MAX;
	int8_t x6034 = INT8_MAX;
	static uint8_t x6036 = 3U;

    t115 = (((x6033+x6034)+x6035)>>x6036);

    if (t115 != 31) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x6037 = INT64_MIN;
	int64_t x6039 = INT64_MAX;
	int64_t x6040 = 1LL;
	static volatile uint64_t t116 = 7818943LLU;

    t116 = (((x6037+x6038)+x6039)>>x6040);

    if (t116 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x6069 = INT8_MAX;
	uint64_t x6070 = 143LLU;
	uint16_t x6072 = 6U;
	static uint64_t t117 = 372LLU;

    t117 = (((x6069+x6070)+x6071)>>x6072);

    if (t117 != 4LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x6089 = UINT32_MAX;
	static int8_t x6090 = INT8_MAX;
	int64_t x6091 = 14LL;
	uint16_t x6092 = 13U;
	int64_t t118 = 222718922662675072LL;

    t118 = (((x6089+x6090)+x6091)>>x6092);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x6113 = -1;
	int8_t x6114 = 20;
	int64_t x6115 = 521575575LL;
	uint8_t x6116 = 1U;
	volatile int64_t t119 = -2527382832868048091LL;

    t119 = (((x6113+x6114)+x6115)>>x6116);

    if (t119 != 260787797LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x6185 = INT16_MAX;
	int16_t x6187 = INT16_MAX;
	static uint32_t t120 = 29435U;

    t120 = (((x6185+x6186)+x6187)>>x6188);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x6217 = INT16_MAX;
	uint8_t x6218 = 0U;
	uint64_t x6219 = 56157335929LLU;
	static uint16_t x6220 = 22U;
	volatile uint64_t t121 = 14LLU;

    t121 = (((x6217+x6218)+x6219)>>x6220);

    if (t121 != 13388LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x6241 = -21665LL;
	uint64_t x6242 = UINT64_MAX;
	volatile uint32_t x6243 = 2117712U;
	uint8_t x6244 = 18U;
	static volatile uint64_t t122 = 342727888257LLU;

    t122 = (((x6241+x6242)+x6243)>>x6244);

    if (t122 != 7LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x6337 = 50U;
	int16_t x6339 = 12161;
	uint16_t x6340 = 21U;
	static uint32_t t123 = 6616962U;

    t123 = (((x6337+x6338)+x6339)>>x6340);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x6373 = -1976;
	int8_t x6375 = INT8_MAX;
	volatile int64_t t124 = 2LL;

    t124 = (((x6373+x6374)+x6375)>>x6376);

    if (t124 != 53351720LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x6425 = INT8_MIN;
	int32_t x6426 = -1;
	uint64_t x6427 = 6203563966669464LLU;
	uint32_t x6428 = 37U;
	volatile uint64_t t125 = 93285748755LLU;

    t125 = (((x6425+x6426)+x6427)>>x6428);

    if (t125 != 45136LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x6433 = 13U;
	int16_t x6434 = -1;
	static volatile int16_t x6435 = 4360;
	uint16_t x6436 = 1U;
	volatile int32_t t126 = 937541;

    t126 = (((x6433+x6434)+x6435)>>x6436);

    if (t126 != 2186) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x6517 = 162385108290837008LL;
	volatile uint16_t x6518 = 15262U;
	volatile uint8_t x6520 = 0U;
	static volatile int64_t t127 = -2202275907055364120LL;

    t127 = (((x6517+x6518)+x6519)>>x6520);

    if (t127 != 162385108290852275LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x6613 = 80750333545431827LLU;
	static int8_t x6614 = INT8_MAX;
	uint16_t x6615 = 79U;
	uint16_t x6616 = 5U;

    t128 = (((x6613+x6614)+x6615)>>x6616);

    if (t128 != 2523447923294751LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6670 = INT8_MIN;
	static volatile int16_t x6671 = -3665;
	uint16_t x6672 = 1U;
	uint32_t t129 = 656000651U;

    t129 = (((x6669+x6670)+x6671)>>x6672);

    if (t129 != 2147481751U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x6682 = 0U;
	volatile int32_t x6683 = 645;
	static uint8_t x6684 = 1U;

    t130 = (((x6681+x6682)+x6683)>>x6684);

    if (t130 != 1820368843670725359LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x6809 = UINT64_MAX;
	uint64_t x6810 = UINT64_MAX;
	int64_t x6811 = 92395480LL;
	uint16_t x6812 = 0U;
	volatile uint64_t t131 = 4264835746225840LLU;

    t131 = (((x6809+x6810)+x6811)>>x6812);

    if (t131 != 92395478LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x6854 = 6033LL;
	volatile int64_t t132 = -609319358LL;

    t132 = (((x6853+x6854)+x6855)>>x6856);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x6917 = UINT64_MAX;
	uint64_t x6919 = 1296390516417LLU;
	volatile int8_t x6920 = 1;

    t133 = (((x6917+x6918)+x6919)>>x6920);

    if (t133 != 4611686666622646112LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x6961 = UINT64_MAX;
	int64_t x6962 = INT64_MIN;
	uint16_t x6963 = 40U;
	volatile int16_t x6964 = 14;
	volatile uint64_t t134 = 4173697590098260896LLU;

    t134 = (((x6961+x6962)+x6963)>>x6964);

    if (t134 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x6969 = -1;
	uint8_t x6970 = 2U;
	volatile uint32_t x6971 = 38079U;
	int16_t x6972 = 21;
	uint32_t t135 = 520659847U;

    t135 = (((x6969+x6970)+x6971)>>x6972);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x7053 = -1LL;
	int32_t x7055 = 79078;
	uint16_t x7056 = 1U;
	int64_t t136 = 454042335LL;

    t136 = (((x7053+x7054)+x7055)>>x7056);

    if (t136 != 2147523186LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x7109 = UINT64_MAX;
	volatile uint32_t x7110 = 30227U;
	int16_t x7111 = INT16_MAX;
	uint8_t x7112 = 0U;
	volatile uint64_t t137 = 54257087228LLU;

    t137 = (((x7109+x7110)+x7111)>>x7112);

    if (t137 != 62993LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x7149 = UINT32_MAX;
	volatile int32_t x7151 = 25532070;
	uint16_t x7152 = 6U;
	volatile uint32_t t138 = 66116U;

    t138 = (((x7149+x7150)+x7151)>>x7152);

    if (t138 != 398938U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x7153 = 90U;
	uint32_t x7154 = 273504661U;
	uint32_t x7155 = 1698178U;
	uint64_t x7156 = 0LLU;

    t139 = (((x7153+x7154)+x7155)>>x7156);

    if (t139 != 275202929U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x7201 = INT8_MIN;
	uint32_t x7202 = 135U;
	uint16_t x7203 = UINT16_MAX;
	volatile int8_t x7204 = 10;
	uint32_t t140 = 22U;

    t140 = (((x7201+x7202)+x7203)>>x7204);

    if (t140 != 64U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x7221 = 19U;
	uint64_t x7222 = UINT64_MAX;
	int32_t x7223 = INT32_MAX;
	uint8_t x7224 = 45U;
	uint64_t t141 = 22259733132407LLU;

    t141 = (((x7221+x7222)+x7223)>>x7224);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x7233 = INT32_MIN;
	int8_t x7235 = -2;
	int8_t x7236 = 6;
	volatile uint64_t t142 = 20762407020388LLU;

    t142 = (((x7233+x7234)+x7235)>>x7236);

    if (t142 != 288230376118157312LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x7257 = 252665925675888979LL;
	int8_t x7258 = 60;
	int8_t x7259 = INT8_MIN;
	int16_t x7260 = 52;
	static int64_t t143 = -91LL;

    t143 = (((x7257+x7258)+x7259)>>x7260);

    if (t143 != 56LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x7289 = INT8_MIN;
	uint64_t x7290 = 61831577364355063LLU;
	static int64_t x7291 = INT64_MIN;
	uint32_t x7292 = 1U;
	volatile uint64_t t144 = 31559847501LLU;

    t144 = (((x7289+x7290)+x7291)>>x7292);

    if (t144 != 4642601807109565371LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x7309 = -1;
	uint64_t x7310 = UINT64_MAX;
	uint32_t x7311 = 415958U;
	uint16_t x7312 = 15U;
	uint64_t t145 = 186209LLU;

    t145 = (((x7309+x7310)+x7311)>>x7312);

    if (t145 != 12LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x7534 = -1833;
	int32_t x7535 = INT32_MIN;
	uint16_t x7536 = 6U;
	volatile uint64_t t146 = 20LLU;

    t146 = (((x7533+x7534)+x7535)>>x7536);

    if (t146 != 46184363901LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x7537 = UINT64_MAX;
	int16_t x7538 = -1;
	uint16_t x7539 = 2609U;
	static int8_t x7540 = 29;
	volatile uint64_t t147 = 23LLU;

    t147 = (((x7537+x7538)+x7539)>>x7540);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x7593 = 1U;
	volatile uint64_t x7594 = 1589875411576819678LLU;
	int16_t x7595 = INT16_MIN;
	int8_t x7596 = 2;
	static volatile uint64_t t148 = 39LLU;

    t148 = (((x7593+x7594)+x7595)>>x7596);

    if (t148 != 397468852894196727LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x7645 = UINT16_MAX;
	int16_t x7646 = -16020;
	uint64_t x7647 = 2106850167973604LLU;

    t149 = (((x7645+x7646)+x7647)>>x7648);

    if (t149 != 4114941734420LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x7689 = INT16_MIN;
	int64_t x7690 = INT64_MAX;
	volatile int8_t x7692 = 52;
	static volatile int64_t t150 = 2337766LL;

    t150 = (((x7689+x7690)+x7691)>>x7692);

    if (t150 != 2047LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x7709 = 15;
	static int32_t x7710 = -1;
	volatile uint64_t x7711 = 18035353601024435LLU;
	uint32_t x7712 = 63U;
	uint64_t t151 = 4049943978LLU;

    t151 = (((x7709+x7710)+x7711)>>x7712);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x7745 = INT16_MIN;
	uint32_t x7746 = 4U;
	uint32_t x7747 = 914U;
	int8_t x7748 = 1;
	uint32_t t152 = 29633U;

    t152 = (((x7745+x7746)+x7747)>>x7748);

    if (t152 != 2147467723U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x7753 = 11U;
	int32_t x7754 = INT32_MIN;

    t153 = (((x7753+x7754)+x7755)>>x7756);

    if (t153 != 268435457U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x7805 = INT16_MIN;
	uint32_t x7807 = 1250U;
	volatile uint32_t t154 = 3U;

    t154 = (((x7805+x7806)+x7807)>>x7808);

    if (t154 != 32767U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x7853 = INT8_MIN;
	int32_t x7855 = INT32_MIN;
	int32_t x7856 = 18;

    t155 = (((x7853+x7854)+x7855)>>x7856);

    if (t155 != 8191U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x7873 = UINT16_MAX;
	int16_t x7874 = INT16_MIN;
	int8_t x7875 = 1;
	volatile int8_t x7876 = 0;
	int32_t t156 = -1;

    t156 = (((x7873+x7874)+x7875)>>x7876);

    if (t156 != 32768) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x7889 = 30U;
	static int16_t x7890 = -1;
	volatile int16_t x7891 = -11;

    t157 = (((x7889+x7890)+x7891)>>x7892);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x7949 = -1;
	uint8_t x7950 = 0U;
	volatile int16_t x7951 = INT16_MAX;
	static int32_t x7952 = 28;
	int32_t t158 = -5550;

    t158 = (((x7949+x7950)+x7951)>>x7952);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x7961 = UINT64_MAX;
	int16_t x7962 = 5;
	volatile int32_t x7963 = -1;
	int16_t x7964 = 1;

    t159 = (((x7961+x7962)+x7963)>>x7964);

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x8005 = 930U;
	uint8_t x8006 = 73U;
	static uint32_t x8007 = UINT32_MAX;

    t160 = (((x8005+x8006)+x8007)>>x8008);

    if (t160 != 250U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x8026 = 61;
	int32_t x8027 = -1;
	static int8_t x8028 = 1;
	volatile uint64_t t161 = 2207071LLU;

    t161 = (((x8025+x8026)+x8027)>>x8028);

    if (t161 != 1467885779783051980LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x8065 = 6273839348155766255LLU;
	int32_t x8066 = INT32_MIN;
	int8_t x8067 = 0;
	int16_t x8068 = 3;
	volatile uint64_t t162 = 7127338102148920LLU;

    t162 = (((x8065+x8066)+x8067)>>x8068);

    if (t162 != 784229918251035325LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x8121 = 1;
	int8_t x8122 = 44;
	uint32_t x8123 = 139U;
	int8_t x8124 = 0;
	volatile uint32_t t163 = 46450248U;

    t163 = (((x8121+x8122)+x8123)>>x8124);

    if (t163 != 184U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x8181 = 383068984427207427LL;
	int32_t x8182 = 3215606;
	int16_t x8183 = -1;
	volatile int8_t x8184 = 0;

    t164 = (((x8181+x8182)+x8183)>>x8184);

    if (t164 != 383068984430423032LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x8229 = INT32_MAX;
	uint32_t x8230 = 0U;
	static volatile int16_t x8231 = -15;
	uint32_t t165 = 722382U;

    t165 = (((x8229+x8230)+x8231)>>x8232);

    if (t165 != 536870908U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x8273 = -1;
	static int16_t x8274 = INT16_MAX;
	int32_t x8275 = -30;
	static uint32_t x8276 = 19U;
	static int32_t t166 = -71331;

    t166 = (((x8273+x8274)+x8275)>>x8276);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x8317 = 28082;
	volatile int16_t x8319 = INT16_MIN;
	uint8_t x8320 = 9U;
	static uint64_t t167 = 2904251163LLU;

    t167 = (((x8317+x8318)+x8319)>>x8320);

    if (t167 != 36028797018963963LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x8329 = INT64_MAX;
	int64_t x8330 = -2377461LL;
	volatile int64_t t168 = -9569LL;

    t168 = (((x8329+x8330)+x8331)>>x8332);

    if (t168 != 9223372036852398346LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x8390 = INT16_MIN;
	static uint64_t x8391 = UINT64_MAX;

    t169 = (((x8389+x8390)+x8391)>>x8392);

    if (t169 != 526121271LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x8417 = INT32_MIN;
	uint32_t x8418 = UINT32_MAX;
	uint64_t x8419 = UINT64_MAX;
	uint32_t x8420 = 1U;
	static uint64_t t170 = 564380LLU;

    t170 = (((x8417+x8418)+x8419)>>x8420);

    if (t170 != 1073741823LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x8493 = -127302287966517LL;
	uint64_t x8494 = 6255LLU;
	static uint8_t x8495 = UINT8_MAX;
	static int8_t x8496 = 11;
	static volatile uint64_t t171 = 3821709716LLU;

    t171 = (((x8493+x8494)+x8495)>>x8496);

    if (t171 != 9007137095420699LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x8505 = UINT16_MAX;
	volatile int32_t x8507 = -22;
	static int8_t x8508 = 0;
	volatile uint32_t t172 = 493450338U;

    t172 = (((x8505+x8506)+x8507)>>x8508);

    if (t172 != 6863797U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x8557 = -1;
	int16_t x8558 = 1;
	static uint8_t x8559 = 119U;

    t173 = (((x8557+x8558)+x8559)>>x8560);

    if (t173 != 119) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x8581 = INT16_MIN;
	static uint32_t x8582 = 41640U;
	uint64_t x8583 = 38097375LLU;
	uint8_t x8584 = 60U;
	volatile uint64_t t174 = 497LLU;

    t174 = (((x8581+x8582)+x8583)>>x8584);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x8598 = -217015;
	int8_t x8599 = INT8_MIN;
	volatile uint16_t x8600 = 7U;
	volatile int32_t t175 = 62123171;

    t175 = (((x8597+x8598)+x8599)>>x8600);

    if (t175 != 16775519) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x8637 = INT8_MIN;
	volatile uint64_t x8639 = 11115949149LLU;
	uint16_t x8640 = 15U;
	static volatile uint64_t t176 = 2005LLU;

    t176 = (((x8637+x8638)+x8639)>>x8640);

    if (t176 != 339231LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x8677 = UINT8_MAX;
	static int32_t x8678 = INT32_MIN;
	uint64_t x8679 = UINT64_MAX;
	static int8_t x8680 = 1;
	volatile uint64_t t177 = 6057746LLU;

    t177 = (((x8677+x8678)+x8679)>>x8680);

    if (t177 != 9223372035781034111LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x8682 = UINT16_MAX;
	uint8_t x8684 = 5U;

    t178 = (((x8681+x8682)+x8683)>>x8684);

    if (t178 != 2050) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x8689 = -6821393;
	volatile int8_t x8690 = -1;
	static uint64_t x8691 = 12385664814418981LLU;
	static int16_t x8692 = 2;
	uint64_t t179 = 2017205721LLU;

    t179 = (((x8689+x8690)+x8691)>>x8692);

    if (t179 != 3096416201899396LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x8705 = 17868LLU;
	int64_t x8706 = INT64_MAX;
	static int8_t x8707 = INT8_MIN;
	volatile uint64_t t180 = 429659609795468LLU;

    t180 = (((x8705+x8706)+x8707)>>x8708);

    if (t180 != 2305843009213698386LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x8746 = 3U;
	int16_t x8748 = 0;
	int32_t t181 = -106165;

    t181 = (((x8745+x8746)+x8747)>>x8748);

    if (t181 != 1665) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x8761 = INT8_MAX;
	uint32_t x8762 = 1281572U;
	int32_t x8763 = INT32_MIN;
	int64_t x8764 = 2LL;
	volatile uint32_t t182 = 2U;

    t182 = (((x8761+x8762)+x8763)>>x8764);

    if (t182 != 537191336U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x8773 = UINT32_MAX;
	int16_t x8774 = INT16_MIN;
	int8_t x8775 = -31;
	uint64_t x8776 = 23LLU;
	static uint32_t t183 = 0U;

    t183 = (((x8773+x8774)+x8775)>>x8776);

    if (t183 != 511U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x8793 = -1;
	volatile int8_t x8794 = INT8_MIN;
	int64_t x8795 = INT64_MAX;
	volatile int8_t x8796 = 0;
	static int64_t t184 = -59LL;

    t184 = (((x8793+x8794)+x8795)>>x8796);

    if (t184 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x8817 = 24;
	uint64_t x8818 = UINT64_MAX;
	static uint32_t x8820 = 11U;

    t185 = (((x8817+x8818)+x8819)>>x8820);

    if (t185 != 9007199253692416LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x8837 = 6U;
	volatile uint64_t x8839 = UINT64_MAX;
	volatile int8_t x8840 = 6;
	static volatile uint64_t t186 = 444025655LLU;

    t186 = (((x8837+x8838)+x8839)>>x8840);

    if (t186 != 2409188LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x8857 = 16312407;
	static int8_t x8859 = INT8_MIN;
	uint64_t x8860 = 28LLU;
	volatile int32_t t187 = 1219930;

    t187 = (((x8857+x8858)+x8859)>>x8860);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x8965 = -1;
	int16_t x8966 = -5;
	volatile uint32_t x8967 = UINT32_MAX;
	int16_t x8968 = 21;
	static volatile uint32_t t188 = 66321U;

    t188 = (((x8965+x8966)+x8967)>>x8968);

    if (t188 != 2047U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x8997 = 137847216499006158LLU;
	int16_t x8998 = 1;
	int8_t x8999 = -1;
	volatile uint64_t x9000 = 9LLU;
	static uint64_t t189 = 47683LLU;

    t189 = (((x8997+x8998)+x8999)>>x9000);

    if (t189 != 269232844724621LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x9073 = -1;
	int16_t x9074 = 368;
	volatile int32_t x9075 = -1;
	static volatile uint16_t x9076 = 8U;
	int32_t t190 = -1;

    t190 = (((x9073+x9074)+x9075)>>x9076);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x9113 = 4445445U;
	static int32_t x9114 = 12760;
	volatile int32_t x9115 = -170914;
	static uint16_t x9116 = 19U;
	volatile uint32_t t191 = 1026891164U;

    t191 = (((x9113+x9114)+x9115)>>x9116);

    if (t191 != 8U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x9229 = UINT32_MAX;
	static int8_t x9230 = INT8_MIN;
	volatile int16_t x9231 = 14;
	uint64_t x9232 = 1LLU;
	volatile uint32_t t192 = 13123589U;

    t192 = (((x9229+x9230)+x9231)>>x9232);

    if (t192 != 2147483590U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x9241 = 359626133519887614LLU;
	volatile int8_t x9243 = -29;
	volatile uint8_t x9244 = 50U;
	uint64_t t193 = 2LLU;

    t193 = (((x9241+x9242)+x9243)>>x9244);

    if (t193 != 2638LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x9253 = -1;
	static int16_t x9254 = -1;
	int16_t x9255 = INT16_MAX;
	uint16_t x9256 = 1U;
	volatile int32_t t194 = 215577130;

    t194 = (((x9253+x9254)+x9255)>>x9256);

    if (t194 != 16382) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x9265 = -1;
	int32_t x9267 = 2595551;

    t195 = (((x9265+x9266)+x9267)>>x9268);

    if (t195 != 328539) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x9297 = UINT64_MAX;
	uint16_t x9299 = 1U;
	uint8_t x9300 = 2U;
	static uint64_t t196 = 75033LLU;

    t196 = (((x9297+x9298)+x9299)>>x9300);

    if (t196 != 2095841478719823LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x9345 = INT16_MIN;
	int16_t x9346 = INT16_MAX;
	int8_t x9348 = 0;
	static uint32_t t197 = 15407754U;

    t197 = (((x9345+x9346)+x9347)>>x9348);

    if (t197 != 4294967294U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x9425 = INT8_MIN;
	static uint64_t x9427 = 8475970802779LLU;
	uint8_t x9428 = 28U;
	volatile uint64_t t198 = 2706LLU;

    t198 = (((x9425+x9426)+x9427)>>x9428);

    if (t198 != 31575LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x9553 = -1;
	volatile int16_t x9554 = -1;
	int32_t x9555 = 7;
	static uint8_t x9556 = 18U;

    t199 = (((x9553+x9554)+x9555)>>x9556);

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

