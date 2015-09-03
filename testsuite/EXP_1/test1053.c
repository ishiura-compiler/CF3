#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x40 = 0U;
volatile uint32_t t1 = 1088317469U;
int32_t t3 = -51;
int16_t x589 = INT16_MAX;
int64_t x590 = 1LL;
uint16_t x637 = UINT16_MAX;
int32_t x705 = INT32_MAX;
int32_t x708 = INT32_MIN;
uint32_t t9 = 45376U;
volatile int32_t x769 = 3878165;
uint32_t t10 = 6419U;
volatile int16_t x832 = -1;
int16_t x871 = 38;
int32_t x872 = 3;
uint16_t x1021 = 119U;
volatile uint64_t x1110 = 29LLU;
uint32_t x1111 = UINT32_MAX;
int16_t x1295 = -1;
volatile uint32_t t17 = 18146337U;
volatile uint8_t x1378 = 2U;
static uint8_t x1410 = 0U;
int64_t x1412 = -1LL;
volatile int8_t x1419 = INT8_MAX;
int32_t x1565 = INT32_MAX;
volatile uint8_t x1566 = 23U;
int16_t x1613 = INT16_MAX;
volatile uint64_t x1707 = 1385698300534445013LLU;
static volatile uint64_t t25 = 8174LLU;
uint64_t x1875 = 81LLU;
int64_t t28 = -184LL;
static volatile uint64_t x1953 = UINT64_MAX;
volatile int64_t x1955 = INT64_MAX;
uint16_t x2009 = 223U;
static volatile uint32_t x2011 = UINT32_MAX;
uint32_t x2097 = 467834U;
static int16_t x2100 = 1;
int64_t x2103 = -1029810815LL;
volatile int8_t x2142 = 2;
volatile int8_t x2143 = INT8_MIN;
static int16_t x2283 = -824;
int32_t x2356 = 8949;
uint32_t x2381 = UINT32_MAX;
uint16_t x2382 = 6U;
uint32_t x2597 = 14923973U;
uint8_t x2600 = 54U;
volatile int16_t x2683 = -1;
static volatile uint64_t x2805 = 19703664431873775LLU;
uint64_t x2806 = 1LLU;
uint64_t t44 = 88713054684212066LLU;
uint8_t x2810 = 7U;
int32_t x2812 = -310380;
uint32_t x2854 = 2U;
volatile uint32_t t47 = UINT32_MAX;
uint64_t x2925 = 12885032218LLU;
int16_t x2927 = INT16_MIN;
uint8_t x2962 = 0U;
static int16_t x3059 = 6;
volatile int32_t t53 = -1329327;
static uint8_t x3062 = 0U;
int32_t t54 = 40789;
volatile uint32_t x3102 = 42U;
int16_t x3229 = INT16_MAX;
static volatile uint64_t t58 = 3LLU;
uint64_t t59 = 667280LLU;
int32_t x3499 = INT32_MIN;
volatile uint16_t x3602 = 0U;
int32_t x3637 = INT32_MAX;
volatile int64_t x3640 = INT64_MIN;
volatile uint32_t x3674 = 7U;
int32_t x3676 = INT32_MAX;
uint16_t x3726 = 2U;
static uint8_t x3727 = 105U;
uint8_t x3786 = 3U;
volatile uint8_t x3788 = 35U;
static uint64_t t67 = 1LLU;
volatile uint8_t x3826 = 5U;
int64_t t68 = -108111323970278LL;
int8_t x3935 = INT8_MAX;
static int8_t x4010 = 20;
int8_t x4090 = 9;
static volatile uint32_t x4221 = 225390U;
uint16_t x4222 = 1U;
uint8_t x4273 = 24U;
int8_t x4276 = INT8_MAX;
int64_t x4319 = -1LL;
static volatile uint32_t x4323 = UINT32_MAX;
int64_t x4343 = -6758497LL;
uint16_t x4463 = UINT16_MAX;
int32_t t82 = 302;
uint32_t x4488 = UINT32_MAX;
static volatile int64_t t83 = -312900LL;
static uint16_t x4535 = UINT16_MAX;
uint32_t x4536 = UINT32_MAX;
int64_t x4557 = 14693712132LL;
uint16_t x4558 = 17U;
volatile uint64_t t88 = 628638420098384LLU;
static uint64_t x4730 = 0LLU;
volatile int8_t x4732 = INT8_MIN;
volatile int64_t t90 = 91250174LL;
int32_t x4747 = -503831468;
uint8_t x5050 = 2U;
volatile uint64_t t94 = 165LLU;
uint64_t x5141 = UINT64_MAX;
uint64_t x5162 = 1LLU;
static uint16_t x5241 = 147U;
static int64_t x5507 = INT64_MIN;
volatile int64_t t99 = 1421LL;


void f0(void) {
	static volatile int8_t x13 = 2;
	int32_t x14 = 5;
	static volatile int64_t x15 = INT64_MIN;
	int64_t x16 = -79571233LL;
	int64_t t0 = -6737702074052LL;

	t0 = (((x13>>x14)*x15)^x16);

	if (t0 != -79571233LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x37 = 104U;
	int8_t x38 = 31;
	int32_t x39 = INT32_MAX;

	t1 = (((x37>>x38)*x39)^x40);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x141 = UINT16_MAX;
	static uint8_t x142 = 5U;
	uint32_t x143 = 26056587U;
	uint8_t x144 = 1U;
	static volatile uint32_t t2 = 423U;

	t2 = (((x141>>x142)*x143)^x144);

	if (t2 != 1798226036U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x321 = 19U;
	int32_t x322 = 1;
	int8_t x323 = INT8_MAX;
	int8_t x324 = INT8_MAX;

	t3 = (((x321>>x322)*x323)^x324);

	if (t3 != 1032) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x385 = INT8_MAX;
	uint8_t x386 = 16U;
	static uint64_t x387 = 123788836707115LLU;
	static int64_t x388 = INT64_MIN;
	uint64_t t4 = 33111294523770LLU;

	t4 = (((x385>>x386)*x387)^x388);

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x497 = UINT8_MAX;
	uint8_t x498 = 14U;
	int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MAX;
	volatile int32_t t5 = -1;

	t5 = (((x497>>x498)*x499)^x500);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x591 = 16028U;
	volatile uint8_t x592 = 24U;
	volatile int32_t t6 = -179;

	t6 = (((x589>>x590)*x591)^x592);

	if (t6 != 262586748) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x609 = 50838LL;
	uint8_t x610 = 29U;
	static int32_t x611 = 16309723;
	volatile int64_t x612 = INT64_MIN;
	int64_t t7 = INT64_MIN;

	t7 = (((x609>>x610)*x611)^x612);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x638 = 1;
	uint16_t x639 = UINT16_MAX;
	int16_t x640 = INT16_MIN;
	static volatile int32_t t8 = -2;

	t8 = (((x637>>x638)*x639)^x640);

	if (t8 != -2147418111) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x706 = 1;
	static volatile uint32_t x707 = UINT32_MAX;

	t9 = (((x705>>x706)*x707)^x708);

	if (t9 != 1073741825U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x770 = 1;
	uint32_t x771 = 3U;
	int32_t x772 = -1;

	t10 = (((x769>>x770)*x771)^x772);

	if (t10 != 4289150049U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x777 = UINT32_MAX;
	int8_t x778 = 0;
	volatile int16_t x779 = 11428;
	int8_t x780 = -34;
	uint32_t t11 = 1138626U;

	t11 = (((x777>>x778)*x779)^x780);

	if (t11 != 11394U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x829 = 0LL;
	static int32_t x830 = 60;
	int8_t x831 = INT8_MIN;
	int64_t t12 = 1157773800914529186LL;

	t12 = (((x829>>x830)*x831)^x832);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x869 = 56U;
	int8_t x870 = 17;
	int32_t t13 = 49138;

	t13 = (((x869>>x870)*x871)^x872);

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1022 = 27U;
	int16_t x1023 = INT16_MAX;
	int16_t x1024 = -1;
	volatile int32_t t14 = 241237178;

	t14 = (((x1021>>x1022)*x1023)^x1024);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1049 = UINT32_MAX;
	volatile uint8_t x1050 = 19U;
	static int16_t x1051 = INT16_MIN;
	int64_t x1052 = INT64_MIN;
	volatile int64_t t15 = 3635554LL;

	t15 = (((x1049>>x1050)*x1051)^x1052);

	if (t15 != -9223372032828211200LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1109 = 0;
	uint32_t x1112 = UINT32_MAX;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (((x1109>>x1110)*x1111)^x1112);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1293 = 497U;
	uint8_t x1294 = 15U;
	uint16_t x1296 = UINT16_MAX;

	t17 = (((x1293>>x1294)*x1295)^x1296);

	if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1301 = 0U;
	int16_t x1302 = 9;
	uint8_t x1303 = 93U;
	volatile int32_t x1304 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = (((x1301>>x1302)*x1303)^x1304);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1377 = 15U;
	int64_t x1379 = 2784548LL;
	int32_t x1380 = -1;
	volatile int64_t t19 = 116909LL;

	t19 = (((x1377>>x1378)*x1379)^x1380);

	if (t19 != -8353645LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x1409 = 1U;
	int8_t x1411 = INT8_MIN;
	int64_t t20 = 894769760772135LL;

	t20 = (((x1409>>x1410)*x1411)^x1412);

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1417 = INT8_MAX;
	uint16_t x1418 = 8U;
	int64_t x1420 = INT64_MIN;
	static volatile int64_t t21 = INT64_MIN;

	t21 = (((x1417>>x1418)*x1419)^x1420);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1567 = 1U;
	volatile int32_t x1568 = 208897038;
	volatile int32_t t22 = 527521896;

	t22 = (((x1565>>x1566)*x1567)^x1568);

	if (t22 != 208897265) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1614 = 1U;
	static uint8_t x1615 = 2U;
	static volatile uint16_t x1616 = 23U;
	volatile int32_t t23 = 2614;

	t23 = (((x1613>>x1614)*x1615)^x1616);

	if (t23 != 32745) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1673 = UINT64_MAX;
	static int16_t x1674 = 0;
	volatile int16_t x1675 = -14122;
	int64_t x1676 = 260033LL;
	volatile uint64_t t24 = 887977039107LLU;

	t24 = (((x1673>>x1674)*x1675)^x1676);

	if (t24 != 245995LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1705 = 1982217553435110578LLU;
	uint8_t x1706 = 3U;
	volatile uint32_t x1708 = UINT32_MAX;

	t25 = (((x1705>>x1706)*x1707)^x1708);

	if (t25 != 17217639253410961457LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1729 = 927671431792410039LLU;
	uint64_t x1730 = 14LLU;
	int8_t x1731 = INT8_MAX;
	uint16_t x1732 = 242U;
	volatile uint64_t t26 = 3LLU;

	t26 = (((x1729>>x1730)*x1731)^x1732);

	if (t26 != 7190812490089728LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1873 = 8977472934477182LLU;
	int16_t x1874 = 55;
	volatile uint64_t x1876 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

	t27 = (((x1873>>x1874)*x1875)^x1876);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1885 = INT64_MAX;
	volatile int8_t x1886 = 7;
	uint8_t x1887 = 2U;
	uint32_t x1888 = 526774620U;

	t28 = (((x1885>>x1886)*x1887)^x1888);

	if (t28 != 144115187549081250LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1954 = 55;
	int8_t x1956 = -1;
	volatile uint64_t t29 = 13687638638915LLU;

	t29 = (((x1953>>x1954)*x1955)^x1956);

	if (t29 != 9223372036854776318LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2010 = 17U;
	static uint8_t x2012 = 3U;
	uint32_t t30 = 1713240062U;

	t30 = (((x2009>>x2010)*x2011)^x2012);

	if (t30 != 3U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2098 = 1U;
	uint8_t x2099 = 12U;
	static volatile uint32_t t31 = 11U;

	t31 = (((x2097>>x2098)*x2099)^x2100);

	if (t31 != 2807005U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2101 = 42U;
	uint8_t x2102 = 0U;
	volatile int8_t x2104 = -1;
	static volatile int64_t t32 = 1477902478404315LL;

	t32 = (((x2101>>x2102)*x2103)^x2104);

	if (t32 != 43252054229LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x2141 = 0;
	uint32_t x2144 = 15636U;
	static volatile uint32_t t33 = 2350790U;

	t33 = (((x2141>>x2142)*x2143)^x2144);

	if (t33 != 15636U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2157 = UINT8_MAX;
	volatile uint8_t x2158 = 1U;
	uint32_t x2159 = 1U;
	volatile int16_t x2160 = -29;
	uint32_t t34 = 7905U;

	t34 = (((x2157>>x2158)*x2159)^x2160);

	if (t34 != 4294967196U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2245 = 125U;
	volatile uint8_t x2246 = 1U;
	int16_t x2247 = INT16_MIN;
	static volatile int8_t x2248 = INT8_MIN;
	int32_t t35 = -52;

	t35 = (((x2245>>x2246)*x2247)^x2248);

	if (t35 != 2031488) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2281 = INT8_MAX;
	int8_t x2282 = 3;
	volatile uint8_t x2284 = UINT8_MAX;
	int32_t t36 = 75344;

	t36 = (((x2281>>x2282)*x2283)^x2284);

	if (t36 != -12473) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2353 = 69U;
	int8_t x2354 = 14;
	static int32_t x2355 = -1;
	static volatile int32_t t37 = -63787036;

	t37 = (((x2353>>x2354)*x2355)^x2356);

	if (t37 != 8949) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x2383 = INT32_MIN;
	volatile uint32_t x2384 = 757039549U;
	volatile uint32_t t38 = 0U;

	t38 = (((x2381>>x2382)*x2383)^x2384);

	if (t38 != 2904523197U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2489 = 0U;
	int32_t x2490 = 31;
	int64_t x2491 = INT64_MAX;
	volatile int16_t x2492 = 8139;
	int64_t t39 = -11413090LL;

	t39 = (((x2489>>x2490)*x2491)^x2492);

	if (t39 != 8139LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x2598 = 1;
	int16_t x2599 = -1;
	uint32_t t40 = 1882741918U;

	t40 = (((x2597>>x2598)*x2599)^x2600);

	if (t40 != 4287505320U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2633 = 8787353443851084389LLU;
	uint16_t x2634 = 29U;
	static int32_t x2635 = -1;
	int32_t x2636 = -419;
	uint64_t t41 = 6537035LLU;

	t41 = (((x2633>>x2634)*x2635)^x2636);

	if (t41 != 16367721107LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2661 = UINT32_MAX;
	uint16_t x2662 = 14U;
	uint16_t x2663 = 4070U;
	int64_t x2664 = 27762LL;
	volatile int64_t t42 = 0LL;

	t42 = (((x2661>>x2662)*x2663)^x2664);

	if (t42 != 1066900584LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2681 = INT8_MAX;
	uint16_t x2682 = 22U;
	uint8_t x2684 = UINT8_MAX;
	int32_t t43 = -43;

	t43 = (((x2681>>x2682)*x2683)^x2684);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2807 = -1;
	static volatile int64_t x2808 = -916927LL;

	t44 = (((x2805>>x2806)*x2807)^x2808);

	if (t44 != 9851832215265992LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2809 = 217886U;
	volatile int32_t x2811 = INT32_MIN;
	uint32_t t45 = 29243340U;

	t45 = (((x2809>>x2810)*x2811)^x2812);

	if (t45 != 4294656916U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2837 = 17218755664LLU;
	int8_t x2838 = 21;
	int32_t x2839 = -355;
	uint8_t x2840 = 123U;
	static uint64_t t46 = 10852018349500553LLU;

	t46 = (((x2837>>x2838)*x2839)^x2840);

	if (t46 != 18446744073706637169LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2853 = 2U;
	int16_t x2855 = -1751;
	int16_t x2856 = -1;

	t47 = (((x2853>>x2854)*x2855)^x2856);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2917 = UINT64_MAX;
	uint16_t x2918 = 7U;
	int64_t x2919 = -13091LL;
	volatile uint8_t x2920 = 6U;
	static volatile uint64_t t48 = 80173180LLU;

	t48 = (((x2917>>x2918)*x2919)^x2920);

	if (t48 != 13402712491054609189LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2926 = 3U;
	static uint32_t x2928 = 783U;
	static volatile uint64_t t49 = 31698868LLU;

	t49 = (((x2925>>x2926)*x2927)^x2928);

	if (t49 != 18446691296617595663LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2961 = 4U;
	static uint64_t x2963 = 14LLU;
	static int32_t x2964 = INT32_MIN;
	uint64_t t50 = 23767LLU;

	t50 = (((x2961>>x2962)*x2963)^x2964);

	if (t50 != 18446744071562068024LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2977 = INT16_MAX;
	volatile uint8_t x2978 = 15U;
	uint8_t x2979 = 15U;
	static uint16_t x2980 = 81U;
	volatile int32_t t51 = -620994112;

	t51 = (((x2977>>x2978)*x2979)^x2980);

	if (t51 != 81) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x3013 = 59U;
	uint16_t x3014 = 6U;
	int64_t x3015 = INT64_MAX;
	int16_t x3016 = -337;
	int64_t t52 = -55LL;

	t52 = (((x3013>>x3014)*x3015)^x3016);

	if (t52 != -337LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x3057 = 91U;
	volatile uint8_t x3058 = 2U;
	static volatile int16_t x3060 = -1;

	t53 = (((x3057>>x3058)*x3059)^x3060);

	if (t53 != -133) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3061 = UINT8_MAX;
	int8_t x3063 = -1;
	int8_t x3064 = INT8_MIN;

	t54 = (((x3061>>x3062)*x3063)^x3064);

	if (t54 != 129) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3101 = UINT64_MAX;
	int8_t x3103 = INT8_MIN;
	volatile uint8_t x3104 = UINT8_MAX;
	uint64_t t55 = 453LLU;

	t55 = (((x3101>>x3102)*x3103)^x3104);

	if (t55 != 18446744073172680831LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3133 = INT8_MAX;
	volatile uint16_t x3134 = 1U;
	volatile uint8_t x3135 = 1U;
	uint64_t x3136 = 89956055551754620LLU;
	volatile uint64_t t56 = 32491915872LLU;

	t56 = (((x3133>>x3134)*x3135)^x3136);

	if (t56 != 89956055551754563LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3230 = 9U;
	static uint8_t x3231 = 24U;
	static int8_t x3232 = 11;
	volatile int32_t t57 = -13;

	t57 = (((x3229>>x3230)*x3231)^x3232);

	if (t57 != 1507) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x3281 = 31636U;
	static int64_t x3282 = 1LL;
	static uint16_t x3283 = 227U;
	uint64_t x3284 = 12923734309753LLU;

	t58 = (((x3281>>x3282)*x3283)^x3284);

	if (t58 != 12923734946151LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3293 = 139410175354089051LLU;
	int8_t x3294 = 2;
	int8_t x3295 = 6;
	volatile int64_t x3296 = INT64_MIN;

	t59 = (((x3293>>x3294)*x3295)^x3296);

	if (t59 != 9432487299885909380LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3497 = UINT64_MAX;
	uint16_t x3498 = 37U;
	uint64_t x3500 = 61946130420673LLU;
	volatile uint64_t t60 = 22782247761403578LLU;

	t60 = (((x3497>>x3498)*x3499)^x3500);

	if (t60 != 18158575641540776897LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x3513 = INT64_MAX;
	uint16_t x3514 = 35U;
	int8_t x3515 = INT8_MIN;
	uint64_t x3516 = 206479444348363249LLU;
	volatile uint64_t t61 = 225984618369429782LLU;

	t61 = (((x3513>>x3514)*x3515)^x3516);

	if (t61 != 18240264645930508657LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3601 = UINT16_MAX;
	int32_t x3603 = -2387;
	int16_t x3604 = 1437;
	int32_t t62 = -7722329;

	t62 = (((x3601>>x3602)*x3603)^x3604);

	if (t62 != -156431154) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3638 = 16U;
	static uint64_t x3639 = UINT64_MAX;
	volatile uint64_t t63 = 5428222555105894356LLU;

	t63 = (((x3637>>x3638)*x3639)^x3640);

	if (t63 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3673 = INT8_MAX;
	static volatile int8_t x3675 = 4;
	int32_t t64 = INT32_MAX;

	t64 = (((x3673>>x3674)*x3675)^x3676);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3725 = 1;
	int64_t x3728 = 1515439765915477LL;
	int64_t t65 = 29LL;

	t65 = (((x3725>>x3726)*x3727)^x3728);

	if (t65 != 1515439765915477LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3785 = UINT64_MAX;
	static int16_t x3787 = INT16_MAX;
	static volatile uint64_t t66 = 860626936LLU;

	t66 = (((x3785>>x3786)*x3787)^x3788);

	if (t66 != 16140901064495824930LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x3805 = 15949406758363LLU;
	volatile int32_t x3806 = 24;
	int16_t x3807 = INT16_MAX;
	volatile int16_t x3808 = -7784;

	t67 = (((x3805>>x3806)*x3807)^x3808);

	if (t67 != 18446744042559348710LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3825 = 0U;
	uint16_t x3827 = 11326U;
	volatile int64_t x3828 = -525556219038LL;

	t68 = (((x3825>>x3826)*x3827)^x3828);

	if (t68 != -525556219038LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3841 = INT32_MAX;
	volatile int16_t x3842 = 30;
	uint32_t x3843 = 57018642U;
	uint32_t x3844 = UINT32_MAX;
	static volatile uint32_t t69 = 7U;

	t69 = (((x3841>>x3842)*x3843)^x3844);

	if (t69 != 4237948653U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3933 = 5198215;
	static int8_t x3934 = 1;
	static uint32_t x3936 = UINT32_MAX;
	static volatile uint32_t t70 = 2800U;

	t70 = (((x3933>>x3934)*x3935)^x3936);

	if (t70 != 3964880706U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4009 = UINT8_MAX;
	volatile int32_t x4011 = INT32_MIN;
	uint64_t x4012 = 272046084LLU;
	static uint64_t t71 = 23521LLU;

	t71 = (((x4009>>x4010)*x4011)^x4012);

	if (t71 != 272046084LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4069 = INT32_MAX;
	uint8_t x4070 = 17U;
	static uint8_t x4071 = 99U;
	volatile uint8_t x4072 = UINT8_MAX;
	int32_t t72 = 8474074;

	t72 = (((x4069>>x4070)*x4071)^x4072);

	if (t72 != 1621858) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x4089 = 44U;
	uint64_t x4091 = 100045335889LLU;
	static uint8_t x4092 = UINT8_MAX;
	volatile uint64_t t73 = 1223LLU;

	t73 = (((x4089>>x4090)*x4091)^x4092);

	if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4223 = 38;
	volatile uint64_t x4224 = UINT64_MAX;
	volatile uint64_t t74 = 37524LLU;

	t74 = (((x4221>>x4222)*x4223)^x4224);

	if (t74 != 18446744073705269205LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4261 = 12;
	static int8_t x4262 = 9;
	volatile int32_t x4263 = -162824290;
	uint8_t x4264 = 1U;
	volatile int32_t t75 = 129000;

	t75 = (((x4261>>x4262)*x4263)^x4264);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4274 = 9U;
	static int64_t x4275 = -424382770821346LL;
	int64_t t76 = 1LL;

	t76 = (((x4273>>x4274)*x4275)^x4276);

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4317 = 6448199073618634657LLU;
	volatile uint32_t x4318 = 7U;
	volatile int16_t x4320 = INT16_MIN;
	volatile uint64_t t77 = 285LLU;

	t77 = (((x4317>>x4318)*x4319)^x4320);

	if (t77 != 50376555262667441LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4321 = 282080434LLU;
	volatile uint16_t x4322 = 2U;
	uint16_t x4324 = UINT16_MAX;
	uint64_t t78 = 35703415281092662LLU;

	t78 = (((x4321>>x4322)*x4323)^x4324);

	if (t78 != 302881557499809067LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4341 = UINT64_MAX;
	uint8_t x4342 = 2U;
	int16_t x4344 = INT16_MAX;
	volatile uint64_t t79 = 3890033882928682LLU;

	t79 = (((x4341>>x4342)*x4343)^x4344);

	if (t79 != 13835058055288938398LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4393 = 2U;
	uint32_t x4394 = 14U;
	volatile int64_t x4395 = INT64_MIN;
	static uint32_t x4396 = 789U;
	int64_t t80 = -16842801432355599LL;

	t80 = (((x4393>>x4394)*x4395)^x4396);

	if (t80 != 789LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4417 = 5U;
	volatile uint16_t x4418 = 27U;
	static volatile uint16_t x4419 = UINT16_MAX;
	static int8_t x4420 = -16;
	volatile int32_t t81 = 3;

	t81 = (((x4417>>x4418)*x4419)^x4420);

	if (t81 != -16) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4461 = UINT8_MAX;
	volatile uint8_t x4462 = 3U;
	static uint16_t x4464 = 1676U;

	t82 = (((x4461>>x4462)*x4463)^x4464);

	if (t82 != 2029933) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4485 = 1U;
	uint16_t x4486 = 0U;
	static int64_t x4487 = INT64_MAX;

	t83 = (((x4485>>x4486)*x4487)^x4488);

	if (t83 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x4513 = 1405U;
	int32_t x4514 = 0;
	volatile int8_t x4515 = -25;
	uint32_t x4516 = UINT32_MAX;
	uint32_t t84 = 112299U;

	t84 = (((x4513>>x4514)*x4515)^x4516);

	if (t84 != 35124U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4533 = 12198U;
	uint16_t x4534 = 2U;
	volatile uint32_t t85 = 15838U;

	t85 = (((x4533>>x4534)*x4535)^x4536);

	if (t85 != 4095151080U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x4559 = -5031331LL;
	int32_t x4560 = 29;
	static int64_t t86 = -349532236LL;

	t86 = (((x4557>>x4558)*x4559)^x4560);

	if (t86 != -564032330411LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4593 = 86U;
	int8_t x4594 = 1;
	int8_t x4595 = INT8_MIN;
	static uint16_t x4596 = 2U;
	static volatile int32_t t87 = -2892;

	t87 = (((x4593>>x4594)*x4595)^x4596);

	if (t87 != -5502) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4629 = 109673LLU;
	volatile uint16_t x4630 = 56U;
	int32_t x4631 = -204;
	static volatile int64_t x4632 = -2LL;

	t88 = (((x4629>>x4630)*x4631)^x4632);

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4649 = 711358313LLU;
	int8_t x4650 = 29;
	int32_t x4651 = -1;
	volatile int8_t x4652 = INT8_MIN;
	static volatile uint64_t t89 = 12159LLU;

	t89 = (((x4649>>x4650)*x4651)^x4652);

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4729 = 0U;
	int64_t x4731 = INT64_MIN;

	t90 = (((x4729>>x4730)*x4731)^x4732);

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4745 = INT16_MAX;
	int64_t x4746 = 16LL;
	static int8_t x4748 = -6;
	int32_t t91 = 30060;

	t91 = (((x4745>>x4746)*x4747)^x4748);

	if (t91 != -6) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4969 = UINT8_MAX;
	volatile uint32_t x4970 = 0U;
	volatile int8_t x4971 = -1;
	int64_t x4972 = INT64_MAX;
	int64_t t92 = 13561LL;

	t92 = (((x4969>>x4970)*x4971)^x4972);

	if (t92 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4977 = INT16_MAX;
	static int32_t x4978 = 0;
	static uint16_t x4979 = UINT16_MAX;
	static int8_t x4980 = 21;
	volatile int32_t t93 = 523708737;

	t93 = (((x4977>>x4978)*x4979)^x4980);

	if (t93 != 2147385364) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5049 = 1049696006344880608LLU;
	int64_t x5051 = INT64_MAX;
	int8_t x5052 = 1;

	t94 = (((x5049>>x5050)*x5051)^x5052);

	if (t94 != 18184320072123331465LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5057 = 503U;
	uint32_t x5058 = 0U;
	int8_t x5059 = INT8_MIN;
	uint64_t x5060 = 106557051760LLU;
	volatile uint64_t t95 = 1LLU;

	t95 = (((x5057>>x5058)*x5059)^x5060);

	if (t95 != 18446743967152510960LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5142 = 1U;
	int16_t x5143 = -29;
	static int16_t x5144 = -31;
	uint64_t t96 = 3433481942516LLU;

	t96 = (((x5141>>x5142)*x5143)^x5144);

	if (t96 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5161 = 353363523U;
	int16_t x5163 = 15024;
	volatile int64_t x5164 = INT64_MIN;
	int64_t t97 = 420LL;

	t97 = (((x5161>>x5162)*x5163)^x5164);

	if (t97 != -9223372036677787472LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5242 = 12;
	int64_t x5243 = -10677667LL;
	int8_t x5244 = -1;
	int64_t t98 = -7LL;

	t98 = (((x5241>>x5242)*x5243)^x5244);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x5505 = 31771;
	uint8_t x5506 = 29U;
	int64_t x5508 = -14020413215LL;

	t99 = (((x5505>>x5506)*x5507)^x5508);

	if (t99 != -14020413215LL) { NG(); } else { ; }
	
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


    return 0;
}

