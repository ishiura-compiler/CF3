#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x37 = 506129973502LL;
uint64_t x63 = 1860246804009267LLU;
int8_t x101 = INT8_MAX;
uint8_t x104 = 36U;
static volatile uint64_t x183 = 187874222LLU;
uint32_t x209 = 8U;
uint8_t x210 = 1U;
static volatile int64_t t6 = -14826612LL;
static volatile uint16_t x581 = 1934U;
uint8_t x625 = UINT8_MAX;
volatile uint16_t x681 = 21U;
static volatile uint8_t x683 = UINT8_MAX;
static volatile uint16_t x1045 = 26U;
int32_t x1180 = INT32_MAX;
int16_t x1209 = 0;
int32_t x1212 = INT32_MIN;
uint64_t x1270 = 1LLU;
static uint32_t x1271 = 3399U;
uint8_t x1272 = UINT8_MAX;
static int8_t x1551 = INT8_MAX;
int8_t x1611 = INT8_MIN;
int64_t x1612 = INT64_MAX;
volatile int32_t x1712 = -1650746;
volatile int32_t x1937 = INT32_MAX;
uint8_t x1939 = 32U;
int32_t t24 = -32915190;
int8_t x2093 = INT8_MAX;
uint8_t x2096 = UINT8_MAX;
int8_t x2181 = 4;
volatile int8_t x2183 = INT8_MAX;
static int16_t x2196 = INT16_MAX;
int8_t x2229 = 0;
static volatile int8_t x2230 = 1;
int8_t x2378 = 0;
volatile int32_t x2409 = 0;
uint8_t x2410 = 1U;
int32_t x2412 = INT32_MIN;
static int8_t x2480 = -1;
int32_t x2616 = INT32_MIN;
int64_t x2643 = INT64_MIN;
static int32_t x2727 = INT32_MIN;
volatile uint32_t t36 = 1708U;
volatile uint16_t x2847 = UINT16_MAX;
volatile int32_t t37 = -1978;
uint8_t x2906 = 2U;
int64_t x2908 = 1537995355958LL;
volatile uint64_t x2944 = 28LLU;
uint32_t x3067 = UINT32_MAX;
int8_t x3166 = 0;
int64_t t45 = 2LL;
uint8_t x3381 = UINT8_MAX;
int32_t x3384 = INT32_MIN;
static uint8_t x3450 = 0U;
static volatile uint64_t t49 = 24071LLU;
uint16_t x3567 = 339U;
volatile uint8_t x3686 = 3U;
static volatile int64_t x3687 = -1LL;
static volatile int64_t t51 = -2286569LL;
static int64_t x4005 = INT64_MAX;
volatile uint8_t x4006 = 0U;
int16_t x4193 = INT16_MAX;
int32_t x4195 = INT32_MIN;
uint16_t x4681 = UINT16_MAX;
int32_t x4683 = -6233615;
uint32_t t58 = 7U;
int64_t x4719 = INT64_MAX;
int8_t x4967 = INT8_MAX;
int64_t x4968 = 8769968666LL;
int64_t t60 = -2131092831395748221LL;
uint32_t x5046 = 8U;
int8_t x5048 = INT8_MIN;
int8_t x5097 = 1;
int32_t x5099 = -42192;
uint8_t x5102 = 8U;
int8_t x5188 = 1;
volatile uint64_t x5241 = UINT64_MAX;
int32_t x5429 = 5;
static int64_t t66 = 14848871312151215LL;
uint32_t x5487 = 2U;
volatile int16_t x5494 = 7;
int8_t x5511 = INT8_MAX;
static volatile int8_t x5529 = 1;
uint16_t x5635 = UINT16_MAX;
int64_t x5678 = 10LL;
static int8_t x5680 = INT8_MIN;
uint8_t x5757 = 0U;
volatile uint8_t x5758 = 1U;
int8_t x5938 = 20;
uint64_t x5953 = UINT64_MAX;
int16_t x6216 = INT16_MAX;
static uint32_t x6325 = 313403U;
uint16_t x6326 = 1U;
volatile int64_t x6328 = -1LL;
volatile int32_t t80 = 2249;
static int64_t x6339 = -1LL;
uint32_t x6340 = 7U;
int8_t x6354 = 1;
uint16_t x6365 = 221U;
int64_t x6367 = -472801198508LL;
static uint64_t x6438 = 2LLU;
volatile uint64_t x6440 = 2687396423308LLU;
int8_t x6529 = 0;
uint32_t x6532 = 477974634U;
volatile uint32_t t86 = 24731U;
uint16_t x6593 = 16699U;
volatile uint32_t x6595 = 2422608U;
uint32_t x6655 = UINT32_MAX;
uint32_t x6689 = 127U;
int32_t x6690 = 1;
volatile int16_t x6703 = -1;
int64_t x6704 = -1LL;
static int64_t t91 = -1855861282148112LL;
uint8_t x6726 = 3U;
static int32_t t92 = 905732140;
int8_t x6737 = INT8_MAX;
int64_t x6739 = INT64_MAX;
uint16_t x6834 = 3U;
static uint64_t x6836 = 543LLU;
uint32_t x6865 = 720U;
uint32_t x6867 = 3U;
uint64_t x6893 = 112LLU;
uint32_t x6896 = 1751256830U;
volatile int16_t x6944 = INT16_MIN;


void f0(void) {
	uint8_t x38 = 15U;
	static uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t0 = 21324;

	t0 = (((x37<<x38)<=x39)%x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 3U;
	static int32_t x64 = INT32_MIN;
	int32_t t1 = 1;

	t1 = (((x61<<x62)<=x63)%x64);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x102 = 4LLU;
	int64_t x103 = INT64_MIN;
	int32_t t2 = 32588179;

	t2 = (((x101<<x102)<=x103)%x104);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = 1;
	uint64_t x184 = 1358LLU;
	volatile uint64_t t3 = 2064772LLU;

	t3 = (((x181<<x182)<=x183)%x184);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x211 = 2;
	int16_t x212 = 8448;
	static int32_t t4 = -21056939;

	t4 = (((x209<<x210)<=x211)%x212);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x309 = 10676815;
	int8_t x310 = 7;
	uint64_t x311 = 70443055663005235LLU;
	int16_t x312 = -1;
	volatile int32_t t5 = 206856107;

	t5 = (((x309<<x310)<=x311)%x312);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x325 = 33483U;
	volatile int8_t x326 = 1;
	int32_t x327 = -1;
	int64_t x328 = INT64_MAX;

	t6 = (((x325<<x326)<=x327)%x328);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x449 = 747LLU;
	uint16_t x450 = 1U;
	int16_t x451 = -1;
	int16_t x452 = -1;
	static volatile int32_t t7 = 6354;

	t7 = (((x449<<x450)<=x451)%x452);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x582 = 1;
	volatile uint64_t x583 = UINT64_MAX;
	static int32_t x584 = INT32_MIN;
	int32_t t8 = 3;

	t8 = (((x581<<x582)<=x583)%x584);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x626 = 0LLU;
	static volatile int8_t x627 = INT8_MIN;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t9 = 73784684;

	t9 = (((x625<<x626)<=x627)%x628);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x682 = 0;
	volatile int32_t x684 = 27;
	static int32_t t10 = 59617;

	t10 = (((x681<<x682)<=x683)%x684);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x713 = 34750404027956LLU;
	volatile uint8_t x714 = 2U;
	volatile int32_t x715 = 15046032;
	int16_t x716 = 5;
	volatile int32_t t11 = -66320;

	t11 = (((x713<<x714)<=x715)%x716);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x789 = UINT16_MAX;
	static int8_t x790 = 1;
	static volatile int16_t x791 = INT16_MIN;
	static int32_t x792 = INT32_MAX;
	int32_t t12 = -361286073;

	t12 = (((x789<<x790)<=x791)%x792);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1046 = 11U;
	int64_t x1047 = INT64_MAX;
	volatile int8_t x1048 = INT8_MIN;
	volatile int32_t t13 = 19518;

	t13 = (((x1045<<x1046)<=x1047)%x1048);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1141 = 2U;
	uint8_t x1142 = 6U;
	volatile int64_t x1143 = -1LL;
	int16_t x1144 = INT16_MAX;
	volatile int32_t t14 = -1;

	t14 = (((x1141<<x1142)<=x1143)%x1144);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1177 = 12LL;
	volatile int8_t x1178 = 2;
	int16_t x1179 = -1;
	volatile int32_t t15 = 30;

	t15 = (((x1177<<x1178)<=x1179)%x1180);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x1210 = 24U;
	int32_t x1211 = -1;
	volatile int32_t t16 = 1982;

	t16 = (((x1209<<x1210)<=x1211)%x1212);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1269 = UINT64_MAX;
	int32_t t17 = -93223215;

	t17 = (((x1269<<x1270)<=x1271)%x1272);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1417 = INT16_MAX;
	static int16_t x1418 = 0;
	static volatile int32_t x1419 = 477696411;
	uint8_t x1420 = UINT8_MAX;
	int32_t t18 = -1045530;

	t18 = (((x1417<<x1418)<=x1419)%x1420);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1441 = 7703U;
	uint64_t x1442 = 25LLU;
	static volatile int8_t x1443 = -1;
	int16_t x1444 = INT16_MAX;
	static int32_t t19 = -101587753;

	t19 = (((x1441<<x1442)<=x1443)%x1444);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1549 = INT8_MAX;
	static uint32_t x1550 = 15U;
	int16_t x1552 = INT16_MIN;
	static int32_t t20 = 9;

	t20 = (((x1549<<x1550)<=x1551)%x1552);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1609 = 72779;
	int16_t x1610 = 1;
	int64_t t21 = 11536LL;

	t21 = (((x1609<<x1610)<=x1611)%x1612);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1709 = 195U;
	uint64_t x1710 = 1LLU;
	uint32_t x1711 = 23552U;
	static volatile int32_t t22 = -76532657;

	t22 = (((x1709<<x1710)<=x1711)%x1712);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1885 = 22932U;
	uint16_t x1886 = 3U;
	static uint32_t x1887 = 13697808U;
	int32_t x1888 = 1264948;
	int32_t t23 = -919784365;

	t23 = (((x1885<<x1886)<=x1887)%x1888);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1938 = 0U;
	int16_t x1940 = 61;

	t24 = (((x1937<<x1938)<=x1939)%x1940);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x2037 = 2889LLU;
	volatile uint16_t x2038 = 5U;
	volatile uint64_t x2039 = 128531071218112LLU;
	int64_t x2040 = 6724029LL;
	volatile int64_t t25 = 540929716706LL;

	t25 = (((x2037<<x2038)<=x2039)%x2040);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x2094 = 11;
	volatile uint8_t x2095 = 0U;
	int32_t t26 = 15472622;

	t26 = (((x2093<<x2094)<=x2095)%x2096);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x2182 = 1;
	uint32_t x2184 = UINT32_MAX;
	static volatile uint32_t t27 = 2745U;

	t27 = (((x2181<<x2182)<=x2183)%x2184);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2193 = 1;
	int8_t x2194 = 1;
	int32_t x2195 = 15;
	volatile int32_t t28 = -4123128;

	t28 = (((x2193<<x2194)<=x2195)%x2196);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2231 = UINT64_MAX;
	static uint32_t x2232 = 4U;
	static uint32_t t29 = 847210796U;

	t29 = (((x2229<<x2230)<=x2231)%x2232);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2357 = 30451040U;
	uint8_t x2358 = 1U;
	int16_t x2359 = INT16_MIN;
	uint8_t x2360 = UINT8_MAX;
	volatile int32_t t30 = 252394;

	t30 = (((x2357<<x2358)<=x2359)%x2360);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2377 = 17;
	static uint8_t x2379 = UINT8_MAX;
	int64_t x2380 = -2749381954039824747LL;
	volatile int64_t t31 = 1867LL;

	t31 = (((x2377<<x2378)<=x2379)%x2380);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x2411 = 2;
	int32_t t32 = -9931;

	t32 = (((x2409<<x2410)<=x2411)%x2412);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x2477 = UINT8_MAX;
	volatile int8_t x2478 = 3;
	int64_t x2479 = 131856LL;
	int32_t t33 = 13;

	t33 = (((x2477<<x2478)<=x2479)%x2480);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2613 = UINT8_MAX;
	static int16_t x2614 = 3;
	static int16_t x2615 = 43;
	int32_t t34 = 459112440;

	t34 = (((x2613<<x2614)<=x2615)%x2616);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2641 = 3775;
	uint64_t x2642 = 1LLU;
	volatile uint64_t x2644 = 56309392463LLU;
	uint64_t t35 = 92995354537603481LLU;

	t35 = (((x2641<<x2642)<=x2643)%x2644);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2725 = INT8_MAX;
	uint16_t x2726 = 3U;
	uint32_t x2728 = 686890637U;

	t36 = (((x2725<<x2726)<=x2727)%x2728);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2845 = 14U;
	uint32_t x2846 = 21U;
	uint16_t x2848 = 7612U;

	t37 = (((x2845<<x2846)<=x2847)%x2848);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2905 = 14978LLU;
	int16_t x2907 = -1;
	int64_t t38 = 0LL;

	t38 = (((x2905<<x2906)<=x2907)%x2908);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2921 = 59LLU;
	volatile int16_t x2922 = 1;
	static int8_t x2923 = INT8_MIN;
	int16_t x2924 = INT16_MIN;
	volatile int32_t t39 = -255752281;

	t39 = (((x2921<<x2922)<=x2923)%x2924);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2933 = 2;
	int16_t x2934 = 2;
	int16_t x2935 = INT16_MIN;
	volatile int32_t x2936 = INT32_MIN;
	static int32_t t40 = -298167880;

	t40 = (((x2933<<x2934)<=x2935)%x2936);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2941 = INT32_MAX;
	int16_t x2942 = 0;
	int8_t x2943 = INT8_MAX;
	volatile uint64_t t41 = 3LLU;

	t41 = (((x2941<<x2942)<=x2943)%x2944);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3017 = INT16_MAX;
	uint32_t x3018 = 1U;
	static volatile uint8_t x3019 = 0U;
	volatile int8_t x3020 = INT8_MIN;
	static volatile int32_t t42 = 741497857;

	t42 = (((x3017<<x3018)<=x3019)%x3020);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3065 = UINT64_MAX;
	static uint32_t x3066 = 0U;
	int8_t x3068 = INT8_MIN;
	static int32_t t43 = -1;

	t43 = (((x3065<<x3066)<=x3067)%x3068);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3165 = 1343;
	volatile int32_t x3167 = 21;
	static uint32_t x3168 = UINT32_MAX;
	volatile uint32_t t44 = 424695U;

	t44 = (((x3165<<x3166)<=x3167)%x3168);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3341 = UINT64_MAX;
	uint16_t x3342 = 4U;
	static int16_t x3343 = INT16_MAX;
	volatile int64_t x3344 = -1832732720297LL;

	t45 = (((x3341<<x3342)<=x3343)%x3344);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3361 = 251;
	uint16_t x3362 = 9U;
	static volatile int64_t x3363 = INT64_MIN;
	int16_t x3364 = INT16_MAX;
	volatile int32_t t46 = -6825735;

	t46 = (((x3361<<x3362)<=x3363)%x3364);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3382 = 0U;
	volatile uint8_t x3383 = 13U;
	volatile int32_t t47 = 79550629;

	t47 = (((x3381<<x3382)<=x3383)%x3384);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3449 = 6670642LLU;
	int64_t x3451 = -1LL;
	int32_t x3452 = INT32_MAX;
	static int32_t t48 = 1;

	t48 = (((x3449<<x3450)<=x3451)%x3452);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3513 = 37795;
	static int8_t x3514 = 2;
	uint16_t x3515 = UINT16_MAX;
	volatile uint64_t x3516 = 12593988293467LLU;

	t49 = (((x3513<<x3514)<=x3515)%x3516);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3565 = UINT8_MAX;
	uint8_t x3566 = 3U;
	int16_t x3568 = -1;
	volatile int32_t t50 = -10741160;

	t50 = (((x3565<<x3566)<=x3567)%x3568);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3685 = 12U;
	int64_t x3688 = -1LL;

	t51 = (((x3685<<x3686)<=x3687)%x3688);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x4007 = 2030328U;
	static int64_t x4008 = -1LL;
	volatile int64_t t52 = -239908808LL;

	t52 = (((x4005<<x4006)<=x4007)%x4008);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4194 = 3U;
	int8_t x4196 = 7;
	int32_t t53 = -4938;

	t53 = (((x4193<<x4194)<=x4195)%x4196);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4385 = 54;
	uint8_t x4386 = 2U;
	int32_t x4387 = -12086908;
	static int16_t x4388 = -89;
	int32_t t54 = -107440;

	t54 = (((x4385<<x4386)<=x4387)%x4388);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x4417 = UINT16_MAX;
	uint32_t x4418 = 2U;
	int16_t x4419 = 801;
	static uint32_t x4420 = UINT32_MAX;
	uint32_t t55 = 285043U;

	t55 = (((x4417<<x4418)<=x4419)%x4420);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4481 = 730LL;
	int8_t x4482 = 2;
	static volatile int32_t x4483 = -76102;
	static uint64_t x4484 = UINT64_MAX;
	volatile uint64_t t56 = 29064584483027972LLU;

	t56 = (((x4481<<x4482)<=x4483)%x4484);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x4489 = 123U;
	volatile uint8_t x4490 = 15U;
	static int32_t x4491 = -1;
	static uint32_t x4492 = 16580U;
	volatile uint32_t t57 = 97118250U;

	t57 = (((x4489<<x4490)<=x4491)%x4492);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x4682 = 1U;
	uint32_t x4684 = 7U;

	t58 = (((x4681<<x4682)<=x4683)%x4684);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4717 = 0U;
	uint8_t x4718 = 7U;
	uint16_t x4720 = UINT16_MAX;
	int32_t t59 = -247629202;

	t59 = (((x4717<<x4718)<=x4719)%x4720);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4965 = UINT64_MAX;
	uint8_t x4966 = 2U;

	t60 = (((x4965<<x4966)<=x4967)%x4968);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x5045 = UINT64_MAX;
	volatile uint32_t x5047 = 34U;
	int32_t t61 = -527851995;

	t61 = (((x5045<<x5046)<=x5047)%x5048);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x5098 = 0;
	static int64_t x5100 = 1479568827543137LL;
	volatile int64_t t62 = 1042936753LL;

	t62 = (((x5097<<x5098)<=x5099)%x5100);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5101 = 3845U;
	int32_t x5103 = 184;
	int64_t x5104 = 912657017181181LL;
	volatile int64_t t63 = -38283877506736737LL;

	t63 = (((x5101<<x5102)<=x5103)%x5104);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x5185 = 31830604714746LLU;
	int8_t x5186 = 0;
	static uint16_t x5187 = 22U;
	volatile int32_t t64 = -1678343;

	t64 = (((x5185<<x5186)<=x5187)%x5188);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5242 = 15;
	static int16_t x5243 = 288;
	uint16_t x5244 = 414U;
	volatile int32_t t65 = -116574304;

	t65 = (((x5241<<x5242)<=x5243)%x5244);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x5430 = 3U;
	volatile int64_t x5431 = -26LL;
	static int64_t x5432 = INT64_MIN;

	t66 = (((x5429<<x5430)<=x5431)%x5432);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5485 = 1079863161530462LL;
	static uint16_t x5486 = 4U;
	uint16_t x5488 = 1047U;
	static int32_t t67 = -5773168;

	t67 = (((x5485<<x5486)<=x5487)%x5488);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x5493 = 698394263189LL;
	int32_t x5495 = -1;
	static uint8_t x5496 = UINT8_MAX;
	int32_t t68 = 54919398;

	t68 = (((x5493<<x5494)<=x5495)%x5496);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5509 = 1;
	volatile int16_t x5510 = 0;
	static uint8_t x5512 = UINT8_MAX;
	volatile int32_t t69 = -221;

	t69 = (((x5509<<x5510)<=x5511)%x5512);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x5530 = 1U;
	int64_t x5531 = -1LL;
	uint32_t x5532 = UINT32_MAX;
	volatile uint32_t t70 = 196077U;

	t70 = (((x5529<<x5530)<=x5531)%x5532);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5633 = INT8_MAX;
	uint16_t x5634 = 0U;
	uint32_t x5636 = 947135445U;
	static uint32_t t71 = 2U;

	t71 = (((x5633<<x5634)<=x5635)%x5636);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x5677 = 605U;
	uint64_t x5679 = 21415LLU;
	volatile int32_t t72 = 1915;

	t72 = (((x5677<<x5678)<=x5679)%x5680);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x5759 = -1;
	static uint16_t x5760 = UINT16_MAX;
	volatile int32_t t73 = 65132;

	t73 = (((x5757<<x5758)<=x5759)%x5760);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x5913 = 0U;
	uint16_t x5914 = 4U;
	int32_t x5915 = INT32_MIN;
	int8_t x5916 = INT8_MIN;
	int32_t t74 = -143;

	t74 = (((x5913<<x5914)<=x5915)%x5916);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x5937 = UINT32_MAX;
	uint32_t x5939 = 1U;
	volatile int64_t x5940 = INT64_MAX;
	int64_t t75 = 12543LL;

	t75 = (((x5937<<x5938)<=x5939)%x5940);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5954 = 0U;
	int8_t x5955 = INT8_MIN;
	uint32_t x5956 = 1086865U;
	uint32_t t76 = 46700579U;

	t76 = (((x5953<<x5954)<=x5955)%x5956);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x6137 = 3118;
	uint16_t x6138 = 3U;
	static int32_t x6139 = INT32_MIN;
	volatile int16_t x6140 = -1;
	static volatile int32_t t77 = 105;

	t77 = (((x6137<<x6138)<=x6139)%x6140);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x6213 = UINT16_MAX;
	static uint16_t x6214 = 12U;
	static uint8_t x6215 = 4U;
	volatile int32_t t78 = -99;

	t78 = (((x6213<<x6214)<=x6215)%x6216);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6327 = -3;
	static volatile int64_t t79 = -105843587799LL;

	t79 = (((x6325<<x6326)<=x6327)%x6328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x6333 = INT16_MAX;
	volatile uint8_t x6334 = 2U;
	int16_t x6335 = INT16_MAX;
	static uint8_t x6336 = UINT8_MAX;

	t80 = (((x6333<<x6334)<=x6335)%x6336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x6337 = INT8_MAX;
	int8_t x6338 = 1;
	uint32_t t81 = 721U;

	t81 = (((x6337<<x6338)<=x6339)%x6340);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x6353 = UINT64_MAX;
	int64_t x6355 = 325LL;
	int16_t x6356 = 1;
	volatile int32_t t82 = -400739;

	t82 = (((x6353<<x6354)<=x6355)%x6356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x6366 = 1;
	volatile int8_t x6368 = INT8_MIN;
	static volatile int32_t t83 = -5;

	t83 = (((x6365<<x6366)<=x6367)%x6368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x6437 = UINT32_MAX;
	uint32_t x6439 = 23912150U;
	static uint64_t t84 = 712232307058064219LLU;

	t84 = (((x6437<<x6438)<=x6439)%x6440);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6509 = UINT32_MAX;
	int8_t x6510 = 22;
	int32_t x6511 = INT32_MIN;
	int16_t x6512 = 15;
	int32_t t85 = -443750;

	t85 = (((x6509<<x6510)<=x6511)%x6512);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x6530 = 2;
	int32_t x6531 = INT32_MIN;

	t86 = (((x6529<<x6530)<=x6531)%x6532);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6594 = 0;
	int64_t x6596 = -9532417914045LL;
	static int64_t t87 = -39275165991LL;

	t87 = (((x6593<<x6594)<=x6595)%x6596);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x6605 = INT16_MAX;
	uint8_t x6606 = 6U;
	int8_t x6607 = INT8_MAX;
	int16_t x6608 = INT16_MIN;
	volatile int32_t t88 = -12533112;

	t88 = (((x6605<<x6606)<=x6607)%x6608);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6653 = INT8_MAX;
	uint8_t x6654 = 20U;
	int8_t x6656 = INT8_MIN;
	volatile int32_t t89 = -124;

	t89 = (((x6653<<x6654)<=x6655)%x6656);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6691 = -123;
	uint64_t x6692 = 5350427421488523811LLU;
	volatile uint64_t t90 = 102131166164468LLU;

	t90 = (((x6689<<x6690)<=x6691)%x6692);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x6701 = INT16_MAX;
	int8_t x6702 = 3;

	t91 = (((x6701<<x6702)<=x6703)%x6704);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x6725 = 22U;
	int64_t x6727 = -1LL;
	volatile uint8_t x6728 = 79U;

	t92 = (((x6725<<x6726)<=x6727)%x6728);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6738 = 0;
	int64_t x6740 = INT64_MIN;
	int64_t t93 = 1288441259196412LL;

	t93 = (((x6737<<x6738)<=x6739)%x6740);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6833 = UINT64_MAX;
	int64_t x6835 = -5839126442110581LL;
	uint64_t t94 = 1564533905LLU;

	t94 = (((x6833<<x6834)<=x6835)%x6836);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x6853 = 1001U;
	uint8_t x6854 = 16U;
	static uint64_t x6855 = 6381LLU;
	static int16_t x6856 = INT16_MIN;
	int32_t t95 = -79257484;

	t95 = (((x6853<<x6854)<=x6855)%x6856);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6866 = 0;
	int16_t x6868 = INT16_MIN;
	int32_t t96 = 3364;

	t96 = (((x6865<<x6866)<=x6867)%x6868);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6889 = UINT64_MAX;
	int32_t x6890 = 1;
	uint32_t x6891 = 21131U;
	int64_t x6892 = INT64_MAX;
	volatile int64_t t97 = 113459709285LL;

	t97 = (((x6889<<x6890)<=x6891)%x6892);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6894 = 10;
	int64_t x6895 = -1LL;
	uint32_t t98 = 109795215U;

	t98 = (((x6893<<x6894)<=x6895)%x6896);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6941 = 44493070;
	uint8_t x6942 = 3U;
	int32_t x6943 = INT32_MAX;
	static volatile int32_t t99 = 1;

	t99 = (((x6941<<x6942)<=x6943)%x6944);

	if (t99 != 1) { NG(); } else { ; }
	
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

