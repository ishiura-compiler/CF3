
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

static volatile uint64_t x121 = UINT64_MAX;
uint64_t t2 = UINT64_MAX;
uint32_t x154 = 15U;
int32_t t4 = 3705;
int8_t x271 = 1;
uint8_t x327 = UINT8_MAX;
int16_t x328 = INT16_MIN;
volatile uint8_t x394 = 6U;
volatile int32_t x439 = -1;
volatile uint32_t x529 = 42084248U;
int16_t x530 = 3;
static volatile int64_t x687 = INT64_MAX;
uint64_t x713 = 639502261261120LLU;
uint8_t x714 = 25U;
uint64_t x741 = 245550813420222LLU;
int8_t x743 = -3;
int32_t t15 = -489;
uint8_t x849 = 29U;
volatile int32_t t16 = -28461654;
uint8_t x869 = UINT8_MAX;
int32_t t17 = -763;
uint16_t x1036 = UINT16_MAX;
int32_t t18 = -6020551;
int32_t x1052 = -109336;
int16_t x1067 = INT16_MIN;
volatile int64_t t20 = 0LL;
uint8_t x1200 = 4U;
volatile int32_t t21 = -5;
int16_t x1248 = INT16_MIN;
static int32_t t22 = -221;
static int32_t x1249 = INT32_MAX;
static uint8_t x1297 = 99U;
int8_t x1343 = INT8_MIN;
uint8_t x1344 = UINT8_MAX;
static volatile int64_t t26 = -15899LL;
int16_t x1431 = 192;
uint32_t x1789 = 27835441U;
int32_t x1792 = -43820126;
volatile int64_t x1872 = INT64_MIN;
volatile int32_t t32 = -87;
uint64_t x1933 = UINT64_MAX;
volatile uint8_t x2102 = 23U;
int32_t t36 = 50683001;
volatile uint32_t x2351 = UINT32_MAX;
static uint16_t x2399 = 755U;
uint8_t x2490 = 2U;
int32_t t40 = 12723752;
static uint16_t x2539 = UINT16_MAX;
static int8_t x2549 = INT8_MAX;
volatile int32_t x2576 = INT32_MIN;
volatile int32_t t44 = 1383014;
int8_t x2614 = 0;
static uint16_t x2616 = 21778U;
uint8_t x2682 = 14U;
int8_t x2707 = INT8_MAX;
int8_t x2708 = -3;
volatile int32_t t49 = -10231563;
int32_t t51 = -177917715;
int32_t t53 = 681;
uint64_t t54 = 1318LLU;
static uint64_t x2973 = UINT64_MAX;
volatile int32_t x2976 = INT32_MIN;
uint8_t x3038 = 19U;
uint8_t x3039 = UINT8_MAX;
int32_t x3040 = 0;
volatile int8_t x3076 = INT8_MAX;
int8_t x3331 = -1;
static int8_t x3528 = 1;
uint32_t x3601 = UINT32_MAX;
volatile int32_t x3603 = INT32_MIN;
volatile uint32_t t64 = 343U;
int16_t x3610 = 1;
static volatile int8_t x3640 = INT8_MIN;
static int8_t x3667 = INT8_MIN;
int16_t x3668 = INT16_MAX;
int64_t x3687 = INT64_MIN;
static int8_t x3709 = 1;
int32_t x3712 = INT32_MIN;
int8_t x3771 = INT8_MIN;
int8_t x4077 = 0;
uint64_t x4193 = 2297LLU;
int32_t x4196 = -1;
uint64_t t75 = 119395916089LLU;
int8_t x4247 = INT8_MAX;
static volatile int64_t x4325 = 4205079279502509LL;
static volatile uint64_t x4327 = UINT64_MAX;
volatile int64_t t79 = -1LL;
static volatile uint16_t x4373 = 51U;
uint64_t x4376 = UINT64_MAX;
volatile uint16_t x4679 = 1U;
int8_t x4680 = INT8_MAX;
int32_t t83 = 28;
int8_t x4737 = INT8_MAX;
int32_t x4819 = -1;
static uint64_t x5025 = 145752541767676241LLU;
static int32_t x5060 = INT32_MIN;
static volatile int8_t x5223 = -1;
int32_t t91 = -3417;
volatile uint8_t x5246 = 14U;
int16_t x5272 = INT16_MIN;
volatile int32_t t95 = -41116307;
static volatile int32_t x5297 = INT32_MAX;
static int8_t x5428 = 9;
int32_t t97 = -3443;
static uint16_t x5482 = 6U;
uint8_t x5570 = 1U;
uint32_t t100 = 3436U;
int64_t t101 = 22182484LL;
uint64_t t102 = 93LLU;
uint8_t x5625 = 1U;
volatile int16_t x5646 = 6;
static int8_t x5734 = 0;
int8_t x5783 = -1;
uint64_t x5963 = UINT64_MAX;
int8_t x5964 = -17;
static int16_t x5979 = INT16_MIN;
int16_t x6031 = 555;
static int8_t x6075 = -2;
int8_t x6076 = 0;
volatile int32_t t113 = 171;
uint64_t x6097 = UINT64_MAX;
int64_t x6193 = 80962787150916826LL;
int8_t x6196 = INT8_MAX;
volatile int32_t x6265 = INT32_MAX;
volatile int32_t x6325 = INT32_MAX;
volatile int32_t t121 = -1747460;
int16_t x6438 = 2;
volatile uint32_t t124 = 410334283U;
int64_t x6503 = -174851770319LL;
uint8_t x6504 = 4U;
int16_t x6687 = -1;
int8_t x6702 = 0;
volatile uint64_t t131 = 223516LLU;
uint8_t x7054 = 3U;
int16_t x7061 = 726;
volatile int64_t x7064 = INT64_MIN;
int32_t t136 = -227819;
volatile uint8_t x7519 = 29U;
int64_t x7520 = -1LL;
static int8_t x7583 = -56;
int8_t x7603 = -1;
volatile uint8_t x7677 = 1U;
int32_t t142 = 1;
int32_t x7707 = 6;
int32_t x7873 = INT32_MAX;
static int16_t x7876 = INT16_MAX;
volatile uint32_t x7910 = 1U;
int64_t x7915 = -1LL;
int16_t x7970 = 8;
static int64_t x7983 = -1LL;
uint32_t t149 = 7203725U;
int32_t t150 = 2972;
uint64_t t151 = 106525121265LLU;
static int8_t x8353 = 1;
int8_t x8354 = 13;
uint8_t x8514 = 0U;
uint64_t x8515 = 7167358758600278LLU;
volatile int16_t x8530 = 0;
static int32_t x8561 = INT32_MAX;
uint64_t x8627 = UINT64_MAX;
int32_t t158 = 507241;
int32_t x8636 = INT32_MIN;
volatile uint8_t x8742 = 5U;
int16_t x8743 = -1;
volatile int32_t t161 = 260953;
int16_t x8793 = INT16_MAX;
int64_t x8796 = INT64_MAX;
uint8_t x8834 = 7U;
int16_t x9057 = INT16_MAX;
int64_t x9069 = 833543893559LL;
volatile int32_t x9072 = -529716;
uint16_t x9109 = UINT16_MAX;
uint32_t x9110 = 3U;
volatile int32_t x9111 = INT32_MIN;
uint64_t x9241 = 41139966320LLU;
volatile uint32_t x9243 = 788261U;
uint64_t x9244 = UINT64_MAX;
volatile int32_t t170 = 1126291;
static int8_t x9322 = 0;
static int16_t x9323 = -1601;
static int64_t x9324 = INT64_MIN;
volatile int16_t x9332 = INT16_MIN;
uint8_t x9346 = 1U;
int16_t x9347 = INT16_MIN;
volatile uint64_t t173 = 122LLU;
static int64_t t174 = -14537861611LL;
uint8_t x9449 = UINT8_MAX;
static uint32_t x9452 = 1661301U;
uint8_t x9498 = 4U;
static int8_t x9541 = INT8_MAX;
uint32_t x9543 = 3U;
int64_t x9691 = INT64_MIN;
uint16_t x9734 = 2U;
int32_t x9735 = INT32_MIN;
uint8_t x9773 = UINT8_MAX;
int16_t x9776 = 2056;
volatile int32_t t184 = -156;
volatile int8_t x9898 = 8;
int8_t x9899 = 0;
int16_t x9900 = INT16_MIN;
volatile int32_t x10018 = 12;
static int32_t t187 = -268;
static int8_t x10094 = 1;
int32_t t188 = -12;
int32_t x10123 = INT32_MIN;
static uint16_t x10153 = UINT16_MAX;
int8_t x10155 = INT8_MAX;
int8_t x10169 = INT8_MAX;
uint8_t x10170 = 13U;
static int64_t x10184 = 640298984LL;
static volatile uint64_t t194 = 299988367057LLU;
int8_t x10385 = INT8_MAX;
static uint8_t x10386 = 7U;
volatile int32_t t197 = 1;
uint16_t x10510 = 0U;


void f0(void) {
    	int32_t x29 = 13511193;
	volatile uint32_t x30 = 13U;
	int8_t x31 = INT8_MAX;
	volatile int32_t x32 = 26589880;
	volatile int32_t t0 = -327256965;

    t0 = ((x29>>x30)>>(x31==x32));

    if (t0 != 1649) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x77 = 8449U;
	uint64_t x78 = 3LLU;
	uint16_t x79 = 23U;
	int8_t x80 = -1;
	volatile uint32_t t1 = 8333895U;

    t1 = ((x77>>x78)>>(x79==x80));

    if (t1 != 1056U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x122 = 0;
	int8_t x123 = INT8_MAX;
	int64_t x124 = INT64_MAX;

    t2 = ((x121>>x122)>>(x123==x124));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x153 = 12222U;
	static int8_t x155 = 2;
	static int64_t x156 = -1LL;
	static int32_t t3 = 507;

    t3 = ((x153>>x154)>>(x155==x156));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x173 = INT32_MAX;
	uint8_t x174 = 15U;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = 38U;

    t4 = ((x173>>x174)>>(x175==x176));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x269 = 1430U;
	static volatile uint32_t x270 = 0U;
	static uint64_t x272 = UINT64_MAX;
	int32_t t5 = -18428804;

    t5 = ((x269>>x270)>>(x271==x272));

    if (t5 != 1430) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x325 = UINT8_MAX;
	uint8_t x326 = 0U;
	volatile int32_t t6 = 0;

    t6 = ((x325>>x326)>>(x327==x328));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x393 = 202995U;
	static int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MIN;
	static uint32_t t7 = 792553873U;

    t7 = ((x393>>x394)>>(x395==x396));

    if (t7 != 3171U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x421 = INT16_MAX;
	int16_t x422 = 1;
	int32_t x423 = -25687;
	int16_t x424 = INT16_MAX;
	int32_t t8 = 7063063;

    t8 = ((x421>>x422)>>(x423==x424));

    if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x437 = 1656161;
	uint16_t x438 = 1U;
	int32_t x440 = -1;
	volatile int32_t t9 = -158693;

    t9 = ((x437>>x438)>>(x439==x440));

    if (t9 != 414040) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x531 = 6U;
	static volatile int64_t x532 = INT64_MAX;
	uint32_t t10 = 219041U;

    t10 = ((x529>>x530)>>(x531==x532));

    if (t10 != 5260531U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x609 = 10013659;
	uint16_t x610 = 24U;
	int64_t x611 = -1LL;
	uint64_t x612 = 6LLU;
	static int32_t t11 = -162465284;

    t11 = ((x609>>x610)>>(x611==x612));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x685 = INT64_MAX;
	uint16_t x686 = 0U;
	int16_t x688 = -8601;
	int64_t t12 = INT64_MAX;

    t12 = ((x685>>x686)>>(x687==x688));

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x715 = -1;
	static int16_t x716 = INT16_MIN;
	static uint64_t t13 = 1004227661LLU;

    t13 = ((x713>>x714)>>(x715==x716));

    if (t13 != 19058652LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x742 = 53U;
	uint32_t x744 = 26678947U;
	static volatile uint64_t t14 = 15550494564LLU;

    t14 = ((x741>>x742)>>(x743==x744));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x817 = 23U;
	volatile uint16_t x818 = 15U;
	static int32_t x819 = INT32_MIN;
	volatile uint8_t x820 = UINT8_MAX;

    t15 = ((x817>>x818)>>(x819==x820));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x850 = 3U;
	int64_t x851 = INT64_MIN;
	int32_t x852 = INT32_MIN;

    t16 = ((x849>>x850)>>(x851==x852));

    if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x870 = 0U;
	int32_t x871 = INT32_MIN;
	uint64_t x872 = UINT64_MAX;

    t17 = ((x869>>x870)>>(x871==x872));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x1033 = 3;
	uint32_t x1034 = 19U;
	int32_t x1035 = INT32_MAX;

    t18 = ((x1033>>x1034)>>(x1035==x1036));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x1049 = UINT8_MAX;
	static int32_t x1050 = 10;
	static volatile uint32_t x1051 = 1572194U;
	volatile int32_t t19 = 87126;

    t19 = ((x1049>>x1050)>>(x1051==x1052));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1065 = INT64_MAX;
	int32_t x1066 = 30;
	int64_t x1068 = INT64_MAX;

    t20 = ((x1065>>x1066)>>(x1067==x1068));

    if (t20 != 8589934591LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1197 = 0U;
	uint16_t x1198 = 17U;
	int16_t x1199 = 122;

    t21 = ((x1197>>x1198)>>(x1199==x1200));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1245 = 1U;
	static volatile uint16_t x1246 = 21U;
	int8_t x1247 = INT8_MIN;

    t22 = ((x1245>>x1246)>>(x1247==x1248));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1250 = 8LL;
	uint8_t x1251 = 8U;
	int32_t x1252 = -676;
	int32_t t23 = 47127635;

    t23 = ((x1249>>x1250)>>(x1251==x1252));

    if (t23 != 8388607) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1298 = 7U;
	uint16_t x1299 = UINT16_MAX;
	int16_t x1300 = -3;
	int32_t t24 = 399;

    t24 = ((x1297>>x1298)>>(x1299==x1300));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x1341 = UINT32_MAX;
	static int16_t x1342 = 3;
	static uint32_t t25 = 58502U;

    t25 = ((x1341>>x1342)>>(x1343==x1344));

    if (t25 != 536870911U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x1365 = INT64_MAX;
	static uint16_t x1366 = 32U;
	int64_t x1367 = INT64_MIN;
	int64_t x1368 = -529LL;

    t26 = ((x1365>>x1366)>>(x1367==x1368));

    if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x1429 = 64995979;
	int8_t x1430 = 31;
	int64_t x1432 = INT64_MIN;
	int32_t t27 = 1962;

    t27 = ((x1429>>x1430)>>(x1431==x1432));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x1501 = 3U;
	uint8_t x1502 = 3U;
	int64_t x1503 = -855140280LL;
	volatile uint64_t x1504 = UINT64_MAX;
	volatile int32_t t28 = -372823953;

    t28 = ((x1501>>x1502)>>(x1503==x1504));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x1649 = 1U;
	uint16_t x1650 = 2U;
	volatile int32_t x1651 = INT32_MAX;
	uint16_t x1652 = UINT16_MAX;
	volatile int32_t t29 = 245;

    t29 = ((x1649>>x1650)>>(x1651==x1652));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1790 = 9U;
	int64_t x1791 = INT64_MIN;
	static uint32_t t30 = 341362U;

    t30 = ((x1789>>x1790)>>(x1791==x1792));

    if (t30 != 54366U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x1845 = 1257;
	int16_t x1846 = 0;
	int64_t x1847 = -1LL;
	int8_t x1848 = -54;
	volatile int32_t t31 = -58;

    t31 = ((x1845>>x1846)>>(x1847==x1848));

    if (t31 != 1257) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1869 = 1;
	uint32_t x1870 = 10U;
	int8_t x1871 = 51;

    t32 = ((x1869>>x1870)>>(x1871==x1872));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1934 = 1;
	int16_t x1935 = -1;
	int8_t x1936 = INT8_MAX;
	static volatile uint64_t t33 = 108928652478477LLU;

    t33 = ((x1933>>x1934)>>(x1935==x1936));

    if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2101 = 75939267U;
	uint8_t x2103 = UINT8_MAX;
	int16_t x2104 = INT16_MIN;
	uint32_t t34 = 805373U;

    t34 = ((x2101>>x2102)>>(x2103==x2104));

    if (t34 != 9U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x2105 = 0;
	static int32_t x2106 = 25;
	static int16_t x2107 = INT16_MIN;
	int32_t x2108 = -533812829;
	int32_t t35 = 64882714;

    t35 = ((x2105>>x2106)>>(x2107==x2108));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x2149 = 130019;
	uint8_t x2150 = 13U;
	int64_t x2151 = 0LL;
	static int16_t x2152 = INT16_MAX;

    t36 = ((x2149>>x2150)>>(x2151==x2152));

    if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2349 = 2;
	uint32_t x2350 = 1U;
	uint8_t x2352 = 14U;
	volatile int32_t t37 = -1332;

    t37 = ((x2349>>x2350)>>(x2351==x2352));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2397 = 9;
	volatile int16_t x2398 = 2;
	uint8_t x2400 = 0U;
	int32_t t38 = -781146;

    t38 = ((x2397>>x2398)>>(x2399==x2400));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x2413 = 515U;
	uint16_t x2414 = 1U;
	volatile uint64_t x2415 = 104916817LLU;
	volatile int16_t x2416 = -31;
	volatile int32_t t39 = 14;

    t39 = ((x2413>>x2414)>>(x2415==x2416));

    if (t39 != 257) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2489 = 113U;
	int16_t x2491 = -2208;
	volatile uint64_t x2492 = 3LLU;

    t40 = ((x2489>>x2490)>>(x2491==x2492));

    if (t40 != 28) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x2493 = 10;
	uint8_t x2494 = 0U;
	uint32_t x2495 = 118617003U;
	uint8_t x2496 = UINT8_MAX;
	int32_t t41 = 1255119;

    t41 = ((x2493>>x2494)>>(x2495==x2496));

    if (t41 != 10) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x2537 = 12;
	uint8_t x2538 = 13U;
	volatile int16_t x2540 = INT16_MIN;
	volatile int32_t t42 = -381672;

    t42 = ((x2537>>x2538)>>(x2539==x2540));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2550 = 0;
	uint16_t x2551 = 16382U;
	uint32_t x2552 = 36007288U;
	volatile int32_t t43 = -51930281;

    t43 = ((x2549>>x2550)>>(x2551==x2552));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x2573 = 7U;
	uint8_t x2574 = 19U;
	uint32_t x2575 = UINT32_MAX;

    t44 = ((x2573>>x2574)>>(x2575==x2576));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x2613 = 32;
	uint8_t x2615 = UINT8_MAX;
	volatile int32_t t45 = 1071820;

    t45 = ((x2613>>x2614)>>(x2615==x2616));

    if (t45 != 32) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2681 = 39U;
	int8_t x2683 = -3;
	int16_t x2684 = INT16_MIN;
	volatile int32_t t46 = 959587455;

    t46 = ((x2681>>x2682)>>(x2683==x2684));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x2705 = 1U;
	int8_t x2706 = 3;
	uint32_t t47 = 30U;

    t47 = ((x2705>>x2706)>>(x2707==x2708));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x2745 = 1;
	int16_t x2746 = 1;
	uint32_t x2747 = UINT32_MAX;
	uint32_t x2748 = UINT32_MAX;
	volatile int32_t t48 = 327682;

    t48 = ((x2745>>x2746)>>(x2747==x2748));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x2757 = UINT16_MAX;
	int16_t x2758 = 0;
	int64_t x2759 = INT64_MIN;
	volatile int8_t x2760 = INT8_MIN;

    t49 = ((x2757>>x2758)>>(x2759==x2760));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x2817 = UINT8_MAX;
	uint8_t x2818 = 19U;
	int64_t x2819 = INT64_MAX;
	static int16_t x2820 = -1;
	volatile int32_t t50 = 0;

    t50 = ((x2817>>x2818)>>(x2819==x2820));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2833 = INT16_MAX;
	static volatile uint8_t x2834 = 30U;
	int8_t x2835 = -1;
	int64_t x2836 = -1994LL;

    t51 = ((x2833>>x2834)>>(x2835==x2836));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2881 = 1LLU;
	static int8_t x2882 = 0;
	int16_t x2883 = INT16_MIN;
	int64_t x2884 = INT64_MIN;
	volatile uint64_t t52 = 46444199028563LLU;

    t52 = ((x2881>>x2882)>>(x2883==x2884));

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2885 = INT32_MAX;
	static uint8_t x2886 = 30U;
	uint16_t x2887 = 372U;
	int16_t x2888 = -1;

    t53 = ((x2885>>x2886)>>(x2887==x2888));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x2913 = 8254LLU;
	int8_t x2914 = 0;
	int16_t x2915 = INT16_MIN;
	int16_t x2916 = INT16_MIN;

    t54 = ((x2913>>x2914)>>(x2915==x2916));

    if (t54 != 4127LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2974 = 30;
	int8_t x2975 = INT8_MAX;
	uint64_t t55 = 62834628175LLU;

    t55 = ((x2973>>x2974)>>(x2975==x2976));

    if (t55 != 17179869183LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x3037 = 2U;
	int32_t t56 = 11707157;

    t56 = ((x3037>>x3038)>>(x3039==x3040));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x3073 = 7U;
	uint8_t x3074 = 13U;
	uint64_t x3075 = 460590263973417LLU;
	int32_t t57 = 728680;

    t57 = ((x3073>>x3074)>>(x3075==x3076));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3305 = 4407955723LLU;
	volatile int8_t x3306 = 7;
	static int64_t x3307 = INT64_MIN;
	static int8_t x3308 = INT8_MAX;
	uint64_t t58 = 4167796988LLU;

    t58 = ((x3305>>x3306)>>(x3307==x3308));

    if (t58 != 34437154LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x3309 = INT64_MAX;
	uint8_t x3310 = 0U;
	volatile int32_t x3311 = 1;
	volatile uint16_t x3312 = 1833U;
	volatile int64_t t59 = INT64_MAX;

    t59 = ((x3309>>x3310)>>(x3311==x3312));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x3329 = 18387U;
	volatile int8_t x3330 = 0;
	volatile int16_t x3332 = INT16_MIN;
	volatile uint32_t t60 = 3U;

    t60 = ((x3329>>x3330)>>(x3331==x3332));

    if (t60 != 18387U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x3425 = 1;
	int8_t x3426 = 11;
	uint32_t x3427 = 66113U;
	uint8_t x3428 = 58U;
	volatile int32_t t61 = 0;

    t61 = ((x3425>>x3426)>>(x3427==x3428));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x3509 = INT8_MAX;
	volatile uint8_t x3510 = 2U;
	static uint64_t x3511 = UINT64_MAX;
	volatile uint8_t x3512 = 0U;
	int32_t t62 = -5174;

    t62 = ((x3509>>x3510)>>(x3511==x3512));

    if (t62 != 31) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3525 = 17U;
	static uint32_t x3526 = 16U;
	int8_t x3527 = INT8_MIN;
	int32_t t63 = 174910;

    t63 = ((x3525>>x3526)>>(x3527==x3528));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3602 = 1LLU;
	int16_t x3604 = -1;

    t64 = ((x3601>>x3602)>>(x3603==x3604));

    if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x3609 = 127U;
	int64_t x3611 = INT64_MAX;
	static int16_t x3612 = INT16_MAX;
	static volatile int32_t t65 = 6536;

    t65 = ((x3609>>x3610)>>(x3611==x3612));

    if (t65 != 63) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x3637 = UINT64_MAX;
	uint8_t x3638 = 11U;
	int32_t x3639 = 72190935;
	volatile uint64_t t66 = 591964713LLU;

    t66 = ((x3637>>x3638)>>(x3639==x3640));

    if (t66 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3665 = 309;
	uint16_t x3666 = 3U;
	volatile int32_t t67 = -506;

    t67 = ((x3665>>x3666)>>(x3667==x3668));

    if (t67 != 38) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x3685 = 8238973999967552LLU;
	static uint32_t x3686 = 0U;
	int8_t x3688 = INT8_MIN;
	static uint64_t t68 = 61LLU;

    t68 = ((x3685>>x3686)>>(x3687==x3688));

    if (t68 != 8238973999967552LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x3710 = 1U;
	int32_t x3711 = INT32_MIN;
	static volatile int32_t t69 = -55;

    t69 = ((x3709>>x3710)>>(x3711==x3712));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x3717 = 13500;
	static uint8_t x3718 = 0U;
	int64_t x3719 = -9LL;
	volatile uint32_t x3720 = 18815U;
	volatile int32_t t70 = 96;

    t70 = ((x3717>>x3718)>>(x3719==x3720));

    if (t70 != 13500) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x3769 = 49U;
	uint8_t x3770 = 10U;
	int8_t x3772 = INT8_MAX;
	volatile int32_t t71 = 914548;

    t71 = ((x3769>>x3770)>>(x3771==x3772));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x3821 = 2;
	int16_t x3822 = 10;
	static int32_t x3823 = 857095652;
	volatile int8_t x3824 = INT8_MIN;
	static int32_t t72 = 0;

    t72 = ((x3821>>x3822)>>(x3823==x3824));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x4029 = 677871741408LL;
	uint8_t x4030 = 8U;
	int64_t x4031 = -238LL;
	static uint8_t x4032 = UINT8_MAX;
	int64_t t73 = 1854005405512338559LL;

    t73 = ((x4029>>x4030)>>(x4031==x4032));

    if (t73 != 2647936489LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x4078 = 13;
	uint16_t x4079 = UINT16_MAX;
	uint64_t x4080 = 68850479200LLU;
	volatile int32_t t74 = 107178140;

    t74 = ((x4077>>x4078)>>(x4079==x4080));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x4194 = 25U;
	static int8_t x4195 = INT8_MIN;

    t75 = ((x4193>>x4194)>>(x4195==x4196));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x4221 = 1008U;
	static int8_t x4222 = 4;
	uint8_t x4223 = 16U;
	int32_t x4224 = 644077612;
	volatile int32_t t76 = -552;

    t76 = ((x4221>>x4222)>>(x4223==x4224));

    if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x4245 = INT16_MAX;
	uint16_t x4246 = 5U;
	int32_t x4248 = INT32_MAX;
	volatile int32_t t77 = -426;

    t77 = ((x4245>>x4246)>>(x4247==x4248));

    if (t77 != 1023) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4326 = 3;
	uint32_t x4328 = 1871531U;
	int64_t t78 = -798305932751091LL;

    t78 = ((x4325>>x4326)>>(x4327==x4328));

    if (t78 != 525634909937813LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x4341 = INT64_MAX;
	uint8_t x4342 = 24U;
	int16_t x4343 = -1893;
	volatile uint32_t x4344 = 86U;

    t79 = ((x4341>>x4342)>>(x4343==x4344));

    if (t79 != 549755813887LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x4374 = 1U;
	volatile uint8_t x4375 = UINT8_MAX;
	int32_t t80 = -60816;

    t80 = ((x4373>>x4374)>>(x4375==x4376));

    if (t80 != 25) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x4433 = 2999U;
	static uint16_t x4434 = 8U;
	static int16_t x4435 = 15;
	uint8_t x4436 = 35U;
	uint32_t t81 = 28872U;

    t81 = ((x4433>>x4434)>>(x4435==x4436));

    if (t81 != 11U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x4641 = INT32_MAX;
	static volatile uint16_t x4642 = 2U;
	int32_t x4643 = INT32_MAX;
	uint16_t x4644 = 26U;
	volatile int32_t t82 = 2303045;

    t82 = ((x4641>>x4642)>>(x4643==x4644));

    if (t82 != 536870911) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4677 = INT16_MAX;
	int16_t x4678 = 0;

    t83 = ((x4677>>x4678)>>(x4679==x4680));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4738 = 5U;
	uint8_t x4739 = 34U;
	static int32_t x4740 = INT32_MIN;
	static volatile int32_t t84 = -6262093;

    t84 = ((x4737>>x4738)>>(x4739==x4740));

    if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x4773 = INT64_MAX;
	int32_t x4774 = 2;
	uint8_t x4775 = 1U;
	volatile uint32_t x4776 = UINT32_MAX;
	volatile int64_t t85 = 4LL;

    t85 = ((x4773>>x4774)>>(x4775==x4776));

    if (t85 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x4793 = 35258;
	uint8_t x4794 = 0U;
	static int16_t x4795 = 3;
	int64_t x4796 = INT64_MIN;
	volatile int32_t t86 = 10;

    t86 = ((x4793>>x4794)>>(x4795==x4796));

    if (t86 != 35258) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x4817 = 886573444LL;
	uint64_t x4818 = 17LLU;
	uint64_t x4820 = 14454728583323827LLU;
	volatile int64_t t87 = -29985697585278063LL;

    t87 = ((x4817>>x4818)>>(x4819==x4820));

    if (t87 != 6764LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5026 = 0U;
	uint16_t x5027 = UINT16_MAX;
	int8_t x5028 = INT8_MAX;
	static volatile uint64_t t88 = 78492557712826LLU;

    t88 = ((x5025>>x5026)>>(x5027==x5028));

    if (t88 != 145752541767676241LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x5057 = 0U;
	int16_t x5058 = 6;
	int64_t x5059 = -1886LL;
	static int32_t t89 = 46605866;

    t89 = ((x5057>>x5058)>>(x5059==x5060));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x5113 = 905980616009374LL;
	uint8_t x5114 = 2U;
	uint32_t x5115 = UINT32_MAX;
	uint32_t x5116 = UINT32_MAX;
	int64_t t90 = -249828LL;

    t90 = ((x5113>>x5114)>>(x5115==x5116));

    if (t90 != 113247577001171LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x5221 = INT16_MAX;
	uint16_t x5222 = 0U;
	int64_t x5224 = INT64_MIN;

    t91 = ((x5221>>x5222)>>(x5223==x5224));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x5229 = 52U;
	uint8_t x5230 = 3U;
	int16_t x5231 = 0;
	int32_t x5232 = INT32_MIN;
	volatile int32_t t92 = -36;

    t92 = ((x5229>>x5230)>>(x5231==x5232));

    if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x5237 = 56U;
	static volatile uint8_t x5238 = 0U;
	uint32_t x5239 = 20293U;
	volatile int64_t x5240 = INT64_MIN;
	static int32_t t93 = -39645263;

    t93 = ((x5237>>x5238)>>(x5239==x5240));

    if (t93 != 56) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x5245 = 1U;
	uint32_t x5247 = UINT32_MAX;
	uint16_t x5248 = 5U;
	static int32_t t94 = -66116642;

    t94 = ((x5245>>x5246)>>(x5247==x5248));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x5269 = 4U;
	uint8_t x5270 = 8U;
	volatile int16_t x5271 = 0;

    t95 = ((x5269>>x5270)>>(x5271==x5272));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x5298 = 0U;
	volatile int16_t x5299 = INT16_MIN;
	int64_t x5300 = -1LL;
	int32_t t96 = INT32_MAX;

    t96 = ((x5297>>x5298)>>(x5299==x5300));

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x5425 = INT8_MAX;
	volatile int8_t x5426 = 1;
	int8_t x5427 = 23;

    t97 = ((x5425>>x5426)>>(x5427==x5428));

    if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x5481 = INT8_MAX;
	int8_t x5483 = INT8_MAX;
	volatile uint8_t x5484 = UINT8_MAX;
	volatile int32_t t98 = 46720;

    t98 = ((x5481>>x5482)>>(x5483==x5484));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x5501 = 7208455067405LL;
	static uint16_t x5502 = 27U;
	uint64_t x5503 = 94LLU;
	volatile int32_t x5504 = INT32_MIN;
	int64_t t99 = -101LL;

    t99 = ((x5501>>x5502)>>(x5503==x5504));

    if (t99 != 53707LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x5569 = 5U;
	static int32_t x5571 = -1;
	static volatile uint64_t x5572 = 4445837535597LLU;

    t100 = ((x5569>>x5570)>>(x5571==x5572));

    if (t100 != 2U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x5593 = INT64_MAX;
	static int64_t x5594 = 1LL;
	static volatile int64_t x5595 = -1LL;
	volatile int32_t x5596 = -1;

    t101 = ((x5593>>x5594)>>(x5595==x5596));

    if (t101 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5617 = 415552285033387479LLU;
	int16_t x5618 = 1;
	volatile int32_t x5619 = INT32_MAX;
	static int8_t x5620 = -1;

    t102 = ((x5617>>x5618)>>(x5619==x5620));

    if (t102 != 207776142516693739LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x5626 = 0LLU;
	int32_t x5627 = INT32_MIN;
	uint64_t x5628 = 11698940261LLU;
	static volatile int32_t t103 = -970;

    t103 = ((x5625>>x5626)>>(x5627==x5628));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5645 = 2;
	int8_t x5647 = INT8_MAX;
	uint64_t x5648 = 12330056913820LLU;
	int32_t t104 = 1010637112;

    t104 = ((x5645>>x5646)>>(x5647==x5648));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x5733 = UINT32_MAX;
	int64_t x5735 = INT64_MIN;
	int32_t x5736 = INT32_MAX;
	volatile uint32_t t105 = UINT32_MAX;

    t105 = ((x5733>>x5734)>>(x5735==x5736));

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x5781 = 2507U;
	uint16_t x5782 = 2U;
	volatile int8_t x5784 = -1;
	volatile uint32_t t106 = 51606710U;

    t106 = ((x5781>>x5782)>>(x5783==x5784));

    if (t106 != 313U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x5817 = UINT32_MAX;
	uint8_t x5818 = 10U;
	int8_t x5819 = INT8_MAX;
	volatile int16_t x5820 = -1;
	static volatile uint32_t t107 = 57704166U;

    t107 = ((x5817>>x5818)>>(x5819==x5820));

    if (t107 != 4194303U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x5909 = 2LL;
	volatile int32_t x5910 = 9;
	int8_t x5911 = INT8_MIN;
	int16_t x5912 = -2;
	volatile int64_t t108 = -238289051195006LL;

    t108 = ((x5909>>x5910)>>(x5911==x5912));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x5953 = UINT16_MAX;
	uint8_t x5954 = 10U;
	static uint32_t x5955 = 7427U;
	static volatile int16_t x5956 = -45;
	volatile int32_t t109 = 3754084;

    t109 = ((x5953>>x5954)>>(x5955==x5956));

    if (t109 != 63) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x5961 = UINT8_MAX;
	int16_t x5962 = 0;
	volatile int32_t t110 = 1749;

    t110 = ((x5961>>x5962)>>(x5963==x5964));

    if (t110 != 255) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x5977 = INT32_MAX;
	static int16_t x5978 = 0;
	uint16_t x5980 = UINT16_MAX;
	int32_t t111 = INT32_MAX;

    t111 = ((x5977>>x5978)>>(x5979==x5980));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x6029 = 35LLU;
	static int16_t x6030 = 1;
	volatile int64_t x6032 = INT64_MIN;
	volatile uint64_t t112 = 82782009837LLU;

    t112 = ((x6029>>x6030)>>(x6031==x6032));

    if (t112 != 17LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x6073 = 54U;
	uint32_t x6074 = 9U;

    t113 = ((x6073>>x6074)>>(x6075==x6076));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x6098 = 2;
	int32_t x6099 = INT32_MAX;
	int16_t x6100 = 1821;
	volatile uint64_t t114 = 174961194469728LLU;

    t114 = ((x6097>>x6098)>>(x6099==x6100));

    if (t114 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x6141 = INT32_MAX;
	static int16_t x6142 = 0;
	uint32_t x6143 = 28U;
	volatile uint16_t x6144 = UINT16_MAX;
	static volatile int32_t t115 = INT32_MAX;

    t115 = ((x6141>>x6142)>>(x6143==x6144));

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x6194 = 20U;
	uint64_t x6195 = 1061660004LLU;
	int64_t t116 = 242872089138LL;

    t116 = ((x6193>>x6194)>>(x6195==x6196));

    if (t116 != 77212130690LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x6266 = 1U;
	volatile int16_t x6267 = 55;
	int8_t x6268 = INT8_MIN;
	int32_t t117 = -130583;

    t117 = ((x6265>>x6266)>>(x6267==x6268));

    if (t117 != 1073741823) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x6273 = 120;
	int8_t x6274 = 4;
	volatile int8_t x6275 = 0;
	uint64_t x6276 = 1067031752296LLU;
	volatile int32_t t118 = 3727304;

    t118 = ((x6273>>x6274)>>(x6275==x6276));

    if (t118 != 7) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x6285 = INT8_MAX;
	static uint8_t x6286 = 29U;
	int64_t x6287 = -1LL;
	uint64_t x6288 = UINT64_MAX;
	volatile int32_t t119 = -87;

    t119 = ((x6285>>x6286)>>(x6287==x6288));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x6326 = 3LL;
	static uint32_t x6327 = 50U;
	int16_t x6328 = INT16_MAX;
	int32_t t120 = 1298;

    t120 = ((x6325>>x6326)>>(x6327==x6328));

    if (t120 != 268435455) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x6381 = 222;
	volatile int8_t x6382 = 31;
	uint32_t x6383 = 127878U;
	static int16_t x6384 = INT16_MAX;

    t121 = ((x6381>>x6382)>>(x6383==x6384));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x6393 = 260607U;
	uint16_t x6394 = 3U;
	uint64_t x6395 = UINT64_MAX;
	uint16_t x6396 = UINT16_MAX;
	uint32_t t122 = 375980319U;

    t122 = ((x6393>>x6394)>>(x6395==x6396));

    if (t122 != 32575U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x6437 = UINT16_MAX;
	int32_t x6439 = INT32_MIN;
	uint16_t x6440 = 152U;
	int32_t t123 = 1;

    t123 = ((x6437>>x6438)>>(x6439==x6440));

    if (t123 != 16383) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x6441 = 5U;
	volatile int8_t x6442 = 1;
	static uint16_t x6443 = UINT16_MAX;
	int8_t x6444 = INT8_MIN;

    t124 = ((x6441>>x6442)>>(x6443==x6444));

    if (t124 != 2U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x6501 = UINT32_MAX;
	int16_t x6502 = 1;
	volatile uint32_t t125 = 35U;

    t125 = ((x6501>>x6502)>>(x6503==x6504));

    if (t125 != 2147483647U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x6681 = 1U;
	static uint32_t x6682 = 12U;
	static uint32_t x6683 = 21512U;
	int32_t x6684 = INT32_MIN;
	static uint32_t t126 = 1U;

    t126 = ((x6681>>x6682)>>(x6683==x6684));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x6685 = 1014;
	uint16_t x6686 = 14U;
	int64_t x6688 = 6210805LL;
	int32_t t127 = 565191607;

    t127 = ((x6685>>x6686)>>(x6687==x6688));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x6701 = 25;
	volatile int64_t x6703 = -8285709293LL;
	static int16_t x6704 = 219;
	volatile int32_t t128 = 107;

    t128 = ((x6701>>x6702)>>(x6703==x6704));

    if (t128 != 25) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6873 = 26;
	int8_t x6874 = 3;
	int64_t x6875 = 3010041LL;
	static int32_t x6876 = -1;
	int32_t t129 = -212782;

    t129 = ((x6873>>x6874)>>(x6875==x6876));

    if (t129 != 3) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x6893 = UINT8_MAX;
	uint8_t x6894 = 5U;
	static uint64_t x6895 = 45373LLU;
	int8_t x6896 = INT8_MAX;
	int32_t t130 = -10459367;

    t130 = ((x6893>>x6894)>>(x6895==x6896));

    if (t130 != 7) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x6953 = 11457LLU;
	static volatile uint16_t x6954 = 1U;
	int8_t x6955 = INT8_MIN;
	int16_t x6956 = INT16_MAX;

    t131 = ((x6953>>x6954)>>(x6955==x6956));

    if (t131 != 5728LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x7053 = 21268U;
	uint16_t x7055 = UINT16_MAX;
	uint64_t x7056 = 1836LLU;
	int32_t t132 = 9;

    t132 = ((x7053>>x7054)>>(x7055==x7056));

    if (t132 != 2658) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x7062 = 1U;
	uint64_t x7063 = UINT64_MAX;
	static volatile int32_t t133 = -10;

    t133 = ((x7061>>x7062)>>(x7063==x7064));

    if (t133 != 363) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x7193 = 1354239278LLU;
	volatile uint8_t x7194 = 4U;
	int64_t x7195 = INT64_MIN;
	uint64_t x7196 = 58LLU;
	uint64_t t134 = 106128LLU;

    t134 = ((x7193>>x7194)>>(x7195==x7196));

    if (t134 != 84639954LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x7273 = INT8_MAX;
	int8_t x7274 = 0;
	int8_t x7275 = INT8_MAX;
	uint16_t x7276 = 3U;
	int32_t t135 = -354254;

    t135 = ((x7273>>x7274)>>(x7275==x7276));

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x7489 = UINT8_MAX;
	uint16_t x7490 = 1U;
	static int32_t x7491 = -13;
	volatile int32_t x7492 = INT32_MIN;

    t136 = ((x7489>>x7490)>>(x7491==x7492));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x7517 = 1;
	static uint8_t x7518 = 27U;
	static int32_t t137 = 1671;

    t137 = ((x7517>>x7518)>>(x7519==x7520));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x7533 = INT64_MAX;
	int8_t x7534 = 16;
	int16_t x7535 = INT16_MAX;
	int32_t x7536 = INT32_MAX;
	int64_t t138 = 9979LL;

    t138 = ((x7533>>x7534)>>(x7535==x7536));

    if (t138 != 140737488355327LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x7581 = 26417490064LL;
	int8_t x7582 = 1;
	int16_t x7584 = 9419;
	volatile int64_t t139 = 0LL;

    t139 = ((x7581>>x7582)>>(x7583==x7584));

    if (t139 != 13208745032LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x7601 = INT8_MAX;
	volatile uint8_t x7602 = 2U;
	volatile uint16_t x7604 = 1057U;
	int32_t t140 = 1;

    t140 = ((x7601>>x7602)>>(x7603==x7604));

    if (t140 != 31) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x7669 = UINT32_MAX;
	uint8_t x7670 = 2U;
	int16_t x7671 = -1;
	static int32_t x7672 = -1;
	static volatile uint32_t t141 = 3596139U;

    t141 = ((x7669>>x7670)>>(x7671==x7672));

    if (t141 != 536870911U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x7678 = 3;
	static int32_t x7679 = -1;
	uint64_t x7680 = 185039667966395658LLU;

    t142 = ((x7677>>x7678)>>(x7679==x7680));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x7705 = 168LLU;
	volatile uint8_t x7706 = 9U;
	static int16_t x7708 = INT16_MAX;
	volatile uint64_t t143 = 1473939782776LLU;

    t143 = ((x7705>>x7706)>>(x7707==x7708));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7785 = INT64_MAX;
	static int8_t x7786 = 1;
	int16_t x7787 = INT16_MAX;
	uint64_t x7788 = 2LLU;
	int64_t t144 = 2927743665058557LL;

    t144 = ((x7785>>x7786)>>(x7787==x7788));

    if (t144 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x7874 = 29U;
	volatile int32_t x7875 = -1;
	volatile int32_t t145 = -1313;

    t145 = ((x7873>>x7874)>>(x7875==x7876));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7909 = INT8_MAX;
	static int64_t x7911 = 41852936763LL;
	static int64_t x7912 = INT64_MAX;
	volatile int32_t t146 = 14365954;

    t146 = ((x7909>>x7910)>>(x7911==x7912));

    if (t146 != 63) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x7913 = 0U;
	volatile int8_t x7914 = 1;
	static int64_t x7916 = INT64_MAX;
	static volatile int32_t t147 = 1;

    t147 = ((x7913>>x7914)>>(x7915==x7916));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x7969 = UINT32_MAX;
	int32_t x7971 = INT32_MAX;
	int32_t x7972 = -667951834;
	volatile uint32_t t148 = 349U;

    t148 = ((x7969>>x7970)>>(x7971==x7972));

    if (t148 != 16777215U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x7981 = 13U;
	int8_t x7982 = 15;
	static int64_t x7984 = 6073095142361LL;

    t149 = ((x7981>>x7982)>>(x7983==x7984));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x8037 = 414;
	uint16_t x8038 = 1U;
	uint8_t x8039 = 7U;
	uint16_t x8040 = UINT16_MAX;

    t150 = ((x8037>>x8038)>>(x8039==x8040));

    if (t150 != 207) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x8069 = 122856527475LLU;
	volatile int8_t x8070 = 38;
	int8_t x8071 = 0;
	uint8_t x8072 = 0U;

    t151 = ((x8069>>x8070)>>(x8071==x8072));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x8209 = 13U;
	uint16_t x8210 = 3U;
	int32_t x8211 = 3544;
	static uint8_t x8212 = 35U;
	uint32_t t152 = 99955037U;

    t152 = ((x8209>>x8210)>>(x8211==x8212));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x8317 = 7U;
	uint16_t x8318 = 3U;
	int32_t x8319 = 26194;
	static uint8_t x8320 = UINT8_MAX;
	static uint32_t t153 = 4867055U;

    t153 = ((x8317>>x8318)>>(x8319==x8320));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x8355 = INT32_MIN;
	int8_t x8356 = INT8_MIN;
	volatile int32_t t154 = 21210221;

    t154 = ((x8353>>x8354)>>(x8355==x8356));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x8513 = 52U;
	int32_t x8516 = INT32_MIN;
	static uint32_t t155 = 83681U;

    t155 = ((x8513>>x8514)>>(x8515==x8516));

    if (t155 != 52U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x8529 = 836563LLU;
	int16_t x8531 = INT16_MIN;
	int16_t x8532 = INT16_MIN;
	uint64_t t156 = 89LLU;

    t156 = ((x8529>>x8530)>>(x8531==x8532));

    if (t156 != 418281LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x8562 = 1;
	int64_t x8563 = INT64_MAX;
	volatile int8_t x8564 = INT8_MAX;
	int32_t t157 = -101164849;

    t157 = ((x8561>>x8562)>>(x8563==x8564));

    if (t157 != 1073741823) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x8625 = 0;
	uint16_t x8626 = 5U;
	int64_t x8628 = INT64_MIN;

    t158 = ((x8625>>x8626)>>(x8627==x8628));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x8633 = 34U;
	static int8_t x8634 = 14;
	uint64_t x8635 = 2LLU;
	static volatile int32_t t159 = 159618;

    t159 = ((x8633>>x8634)>>(x8635==x8636));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x8701 = UINT16_MAX;
	static int16_t x8702 = 3;
	int32_t x8703 = -1;
	uint8_t x8704 = 1U;
	static int32_t t160 = -33675;

    t160 = ((x8701>>x8702)>>(x8703==x8704));

    if (t160 != 8191) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x8741 = 4U;
	uint64_t x8744 = UINT64_MAX;

    t161 = ((x8741>>x8742)>>(x8743==x8744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x8794 = 1U;
	uint64_t x8795 = 16496246LLU;
	int32_t t162 = 166950970;

    t162 = ((x8793>>x8794)>>(x8795==x8796));

    if (t162 != 16383) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x8833 = INT64_MAX;
	int64_t x8835 = 24LL;
	uint32_t x8836 = 62948206U;
	static volatile int64_t t163 = 2692209048078495368LL;

    t163 = ((x8833>>x8834)>>(x8835==x8836));

    if (t163 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x9058 = 1U;
	uint32_t x9059 = UINT32_MAX;
	int64_t x9060 = INT64_MIN;
	volatile int32_t t164 = -254541;

    t164 = ((x9057>>x9058)>>(x9059==x9060));

    if (t164 != 16383) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x9070 = 1;
	static int8_t x9071 = 16;
	int64_t t165 = -187435429LL;

    t165 = ((x9069>>x9070)>>(x9071==x9072));

    if (t165 != 416771946779LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x9112 = -1;
	int32_t t166 = -77;

    t166 = ((x9109>>x9110)>>(x9111==x9112));

    if (t166 != 8191) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x9193 = 41932291U;
	int16_t x9194 = 4;
	int8_t x9195 = -1;
	int32_t x9196 = INT32_MIN;
	uint32_t t167 = 1061331U;

    t167 = ((x9193>>x9194)>>(x9195==x9196));

    if (t167 != 2620768U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x9242 = 7U;
	volatile uint64_t t168 = 46LLU;

    t168 = ((x9241>>x9242)>>(x9243==x9244));

    if (t168 != 321405986LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x9269 = 3;
	static volatile int16_t x9270 = 2;
	uint64_t x9271 = 307LLU;
	int64_t x9272 = INT64_MAX;
	volatile int32_t t169 = -85;

    t169 = ((x9269>>x9270)>>(x9271==x9272));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x9301 = INT16_MAX;
	int8_t x9302 = 0;
	int16_t x9303 = INT16_MIN;
	int32_t x9304 = 121;

    t170 = ((x9301>>x9302)>>(x9303==x9304));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x9321 = 266236U;
	uint32_t t171 = 1571086631U;

    t171 = ((x9321>>x9322)>>(x9323==x9324));

    if (t171 != 266236U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x9329 = 0U;
	int8_t x9330 = 0;
	int8_t x9331 = INT8_MIN;
	int32_t t172 = -81262;

    t172 = ((x9329>>x9330)>>(x9331==x9332));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x9345 = 2582365922885LLU;
	static int32_t x9348 = 1450162;

    t173 = ((x9345>>x9346)>>(x9347==x9348));

    if (t173 != 1291182961442LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x9361 = 2705974792LL;
	int8_t x9362 = 38;
	uint32_t x9363 = UINT32_MAX;
	uint32_t x9364 = 66837038U;

    t174 = ((x9361>>x9362)>>(x9363==x9364));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x9421 = UINT32_MAX;
	uint8_t x9422 = 1U;
	int16_t x9423 = -1;
	int64_t x9424 = INT64_MIN;
	static uint32_t t175 = 14457417U;

    t175 = ((x9421>>x9422)>>(x9423==x9424));

    if (t175 != 2147483647U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x9450 = 8;
	int8_t x9451 = -1;
	volatile int32_t t176 = 180;

    t176 = ((x9449>>x9450)>>(x9451==x9452));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x9461 = INT32_MAX;
	volatile uint8_t x9462 = 0U;
	int16_t x9463 = 1;
	int8_t x9464 = INT8_MIN;
	int32_t t177 = INT32_MAX;

    t177 = ((x9461>>x9462)>>(x9463==x9464));

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x9497 = INT64_MAX;
	int16_t x9499 = INT16_MIN;
	uint8_t x9500 = 36U;
	volatile int64_t t178 = 1000540083LL;

    t178 = ((x9497>>x9498)>>(x9499==x9500));

    if (t178 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x9542 = 0U;
	volatile int32_t x9544 = INT32_MAX;
	int32_t t179 = -1401825;

    t179 = ((x9541>>x9542)>>(x9543==x9544));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x9557 = 2U;
	uint8_t x9558 = 5U;
	int32_t x9559 = INT32_MAX;
	volatile int32_t x9560 = -112;
	uint32_t t180 = 143U;

    t180 = ((x9557>>x9558)>>(x9559==x9560));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x9577 = 240;
	uint8_t x9578 = 2U;
	int8_t x9579 = 1;
	uint32_t x9580 = UINT32_MAX;
	volatile int32_t t181 = -127500971;

    t181 = ((x9577>>x9578)>>(x9579==x9580));

    if (t181 != 60) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x9689 = 10224;
	static int8_t x9690 = 4;
	uint64_t x9692 = 31200506800396918LLU;
	volatile int32_t t182 = 329;

    t182 = ((x9689>>x9690)>>(x9691==x9692));

    if (t182 != 639) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x9733 = 395U;
	static volatile int64_t x9736 = -1LL;
	volatile int32_t t183 = -353680;

    t183 = ((x9733>>x9734)>>(x9735==x9736));

    if (t183 != 98) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x9774 = 11LLU;
	static int8_t x9775 = -1;

    t184 = ((x9773>>x9774)>>(x9775==x9776));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x9873 = UINT16_MAX;
	int16_t x9874 = 15;
	int16_t x9875 = -1;
	static int32_t x9876 = -10627077;
	volatile int32_t t185 = 3398;

    t185 = ((x9873>>x9874)>>(x9875==x9876));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x9897 = 1035722;
	int32_t t186 = -1696;

    t186 = ((x9897>>x9898)>>(x9899==x9900));

    if (t186 != 4045) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x10017 = 49U;
	uint8_t x10019 = 62U;
	uint8_t x10020 = 16U;

    t187 = ((x10017>>x10018)>>(x10019==x10020));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x10093 = 145910;
	int8_t x10095 = INT8_MAX;
	uint8_t x10096 = UINT8_MAX;

    t188 = ((x10093>>x10094)>>(x10095==x10096));

    if (t188 != 72955) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x10113 = INT64_MAX;
	static volatile uint8_t x10114 = 3U;
	uint64_t x10115 = 104685379293307LLU;
	uint32_t x10116 = 2878710U;
	volatile int64_t t189 = 13073LL;

    t189 = ((x10113>>x10114)>>(x10115==x10116));

    if (t189 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x10121 = 47;
	uint16_t x10122 = 10U;
	static uint32_t x10124 = UINT32_MAX;
	volatile int32_t t190 = 0;

    t190 = ((x10121>>x10122)>>(x10123==x10124));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x10133 = 0U;
	volatile uint8_t x10134 = 5U;
	int64_t x10135 = INT64_MAX;
	int32_t x10136 = INT32_MIN;
	int32_t t191 = -1;

    t191 = ((x10133>>x10134)>>(x10135==x10136));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x10154 = 9;
	static int32_t x10156 = -1;
	int32_t t192 = -6168725;

    t192 = ((x10153>>x10154)>>(x10155==x10156));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x10171 = INT8_MIN;
	int64_t x10172 = INT64_MAX;
	int32_t t193 = 45399726;

    t193 = ((x10169>>x10170)>>(x10171==x10172));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x10181 = 1218374LLU;
	int16_t x10182 = 1;
	uint32_t x10183 = 535U;

    t194 = ((x10181>>x10182)>>(x10183==x10184));

    if (t194 != 609187LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x10249 = INT8_MAX;
	static uint8_t x10250 = 4U;
	int64_t x10251 = 53LL;
	int16_t x10252 = -3;
	volatile int32_t t195 = -14681476;

    t195 = ((x10249>>x10250)>>(x10251==x10252));

    if (t195 != 7) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x10273 = 174745;
	volatile uint16_t x10274 = 16U;
	int16_t x10275 = -1;
	uint8_t x10276 = 6U;
	volatile int32_t t196 = 38128;

    t196 = ((x10273>>x10274)>>(x10275==x10276));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x10387 = 13845;
	int8_t x10388 = INT8_MIN;

    t197 = ((x10385>>x10386)>>(x10387==x10388));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x10389 = INT64_MAX;
	int32_t x10390 = 11;
	volatile int32_t x10391 = INT32_MIN;
	volatile int64_t x10392 = -9150867701589596LL;
	static volatile int64_t t198 = -28189LL;

    t198 = ((x10389>>x10390)>>(x10391==x10392));

    if (t198 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x10509 = INT8_MAX;
	int64_t x10511 = INT64_MIN;
	uint64_t x10512 = 1506LLU;
	volatile int32_t t199 = 38;

    t199 = ((x10509>>x10510)>>(x10511==x10512));

    if (t199 != 127) { NG(); } else { ; }
	
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

