#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x85 = 43876459U;
uint8_t x120 = 10U;
int8_t x155 = -12;
static volatile int32_t t3 = 0;
int8_t x259 = 9;
uint16_t x393 = UINT16_MAX;
int64_t x395 = -31540632233LL;
uint64_t t6 = 5443014591LLU;
static int64_t x514 = INT64_MIN;
uint64_t t7 = 490LLU;
int32_t x522 = -61199440;
uint32_t x523 = UINT32_MAX;
volatile uint16_t x552 = 7U;
static int16_t x561 = INT16_MIN;
static int16_t x562 = 1965;
volatile int64_t x563 = -1LL;
int8_t x712 = 0;
uint32_t x838 = UINT32_MAX;
volatile uint32_t t12 = 0U;
int8_t x850 = INT8_MIN;
int64_t x865 = -1LL;
int16_t x867 = -1;
uint64_t x917 = UINT64_MAX;
int64_t x965 = INT64_MIN;
static int16_t x968 = 0;
static uint32_t x986 = UINT32_MAX;
uint16_t x987 = 48U;
uint16_t x988 = 9U;
volatile uint64_t x1041 = 525683193LLU;
uint8_t x1068 = 2U;
uint8_t x1080 = 10U;
uint32_t x1196 = 1U;
static int16_t x1225 = -6;
uint32_t x1227 = 50U;
int32_t x1228 = 1;
uint16_t x1268 = 22U;
volatile uint32_t t28 = 57764U;
static volatile int8_t x1269 = -51;
int32_t x1270 = -75;
uint16_t x1272 = 10U;
static uint16_t x1491 = 1U;
uint64_t x1509 = 335LLU;
uint8_t x1510 = 17U;
int16_t x1626 = INT16_MIN;
uint8_t x1915 = UINT8_MAX;
volatile uint64_t x1942 = 304810405296528039LLU;
int64_t x1943 = INT64_MIN;
uint16_t x1944 = 6U;
int16_t x1993 = -924;
int16_t x1995 = INT16_MAX;
volatile uint32_t x1996 = 0U;
volatile uint32_t x2159 = 3851356U;
uint16_t x2213 = 18049U;
int16_t x2453 = INT16_MIN;
uint8_t x2456 = 2U;
volatile int32_t x2497 = INT32_MIN;
int32_t x2500 = 0;
uint64_t t48 = 27LLU;
int64_t x2642 = -1LL;
int8_t x2695 = 5;
static uint32_t x2721 = UINT32_MAX;
volatile int8_t x2722 = -1;
int16_t x2724 = 0;
volatile int16_t x2761 = INT16_MAX;
static int64_t x2762 = 11000716073929304LL;
volatile int8_t x2764 = 63;
volatile uint64_t t53 = 94LLU;
int32_t x2797 = INT32_MIN;
volatile uint64_t t54 = 63365LLU;
uint8_t x2839 = 2U;
uint32_t x2889 = 100U;
int8_t x3098 = -1;
volatile uint64_t t59 = 3LLU;
int64_t x3201 = -870045389359LL;
int32_t x3218 = INT32_MAX;
uint32_t x3219 = 399785729U;
uint64_t x3221 = 727131489LLU;
static int8_t x3252 = 8;
static volatile int8_t x3372 = 1;
volatile uint64_t t66 = 42457619816342LLU;
uint64_t x3398 = 2LLU;
volatile int8_t x3400 = 0;
volatile int16_t x3473 = INT16_MAX;
static uint32_t x3545 = 89471523U;
volatile uint64_t t70 = 181899442608866263LLU;
uint64_t x3594 = UINT64_MAX;
static int8_t x3596 = 1;
volatile int32_t x3606 = INT32_MAX;
uint8_t x3608 = 5U;
volatile uint64_t x3633 = 4587739781135LLU;
static volatile uint16_t x3635 = 7005U;
volatile uint64_t x3865 = UINT64_MAX;
volatile uint32_t x3957 = UINT32_MAX;
int64_t x4302 = -1LL;
uint16_t x4304 = 3U;
static uint32_t t80 = 72570242U;
static uint16_t x4590 = UINT16_MAX;
volatile uint64_t t82 = 6188970867250035LLU;
uint8_t x4747 = 0U;
int32_t x4751 = INT32_MIN;
volatile uint8_t x4880 = 0U;
int64_t x4906 = INT64_MAX;
volatile uint64_t x4913 = 63357025LLU;
static uint8_t x5083 = 73U;
uint32_t x5089 = 6U;
uint64_t x5092 = 0LLU;
volatile uint32_t t92 = 1045692U;
static uint64_t x5097 = UINT64_MAX;
int32_t x5190 = INT32_MIN;
volatile int8_t x5191 = -1;
uint32_t x5203 = 84716U;
int8_t x5293 = 0;
static volatile int8_t x5294 = INT8_MIN;
int8_t x5295 = -1;
uint32_t x5421 = UINT32_MAX;
volatile uint8_t x5423 = 18U;
static int8_t x5424 = 3;


void f0(void) {
	static uint64_t x73 = 265822983602026561LLU;
	volatile uint32_t x74 = 4115U;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 6U;
	volatile uint64_t t0 = 54152LLU;

	t0 = (((x73^x74)*x75)<<x76);

	if (t0 != 7850944627707215872LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x86 = 367556781;
	uint8_t x87 = 6U;
	uint8_t x88 = 2U;
	uint32_t t1 = 55980065U;

	t1 = (((x85^x86)*x87)<<x88);

	if (t1 != 856642192U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x117 = 58903U;
	int32_t x118 = 30392;
	uint64_t x119 = 28207LLU;
	static uint64_t t2 = 357331309914357LLU;

	t2 = (((x117^x118)*x119)<<x120);

	if (t2 != 1069833290752LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x153 = INT8_MIN;
	static int8_t x154 = INT8_MIN;
	uint32_t x156 = 6U;

	t3 = (((x153^x154)*x155)<<x156);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x257 = 56219U;
	uint16_t x258 = 6174U;
	uint16_t x260 = 28U;
	volatile uint32_t t4 = 633153992U;

	t4 = (((x257^x258)*x259)<<x260);

	if (t4 != 3489660928U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x394 = INT16_MIN;
	int32_t x396 = 0;
	volatile int64_t t5 = 8937896838409733LL;

	t5 = (((x393^x394)*x395)<<x396);

	if (t5 != 1033554977643177LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x417 = UINT64_MAX;
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = -1;
	uint16_t x420 = 2U;

	t6 = (((x417^x418)*x419)<<x420);

	if (t6 != 1024LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x513 = UINT64_MAX;
	uint16_t x515 = UINT16_MAX;
	uint8_t x516 = 55U;

	t7 = (((x513^x514)*x515)<<x516);

	if (t7 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x521 = INT32_MAX;
	int8_t x524 = 0;
	volatile uint32_t t8 = 122U;

	t8 = (((x521^x522)*x523)<<x524);

	if (t8 != 2086284209U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x549 = INT16_MIN;
	int32_t x550 = 1;
	uint16_t x551 = 0U;
	int32_t t9 = 247542718;

	t9 = (((x549^x550)*x551)<<x552);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x564 = 22;
	int64_t t10 = 143602677451557659LL;

	t10 = (((x561^x562)*x563)<<x564);

	if (t10 != 129197146112LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x709 = -36524670376745597LL;
	int32_t x710 = -4100842;
	static volatile uint16_t x711 = 7U;
	int64_t t11 = -2023764LL;

	t11 = (((x709^x710)*x711)<<x712);

	if (t11 != 255672692643838995LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x837 = 6U;
	uint8_t x839 = 3U;
	int16_t x840 = 1;

	t12 = (((x837^x838)*x839)<<x840);

	if (t12 != 4294967254U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x849 = 0U;
	int32_t x851 = -863;
	int16_t x852 = 7;
	volatile uint32_t t13 = 3151U;

	t13 = (((x849^x850)*x851)<<x852);

	if (t13 != 14139392U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x866 = 1U;
	uint16_t x868 = 0U;
	volatile int64_t t14 = -6LL;

	t14 = (((x865^x866)*x867)<<x868);

	if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x918 = 1778956U;
	int32_t x919 = INT32_MAX;
	volatile uint16_t x920 = 7U;
	volatile uint64_t t15 = 122561172128486LLU;

	t15 = (((x917^x918)*x919)<<x920);

	if (t15 != 17957748097233880704LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x945 = -1;
	static int64_t x946 = -1LL;
	int32_t x947 = 22;
	uint8_t x948 = 58U;
	volatile int64_t t16 = 224247LL;

	t16 = (((x945^x946)*x947)<<x948);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x966 = 3;
	int64_t x967 = -1LL;
	int64_t t17 = -6181LL;

	t17 = (((x965^x966)*x967)<<x968);

	if (t17 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x985 = 8442258728535597371LLU;
	volatile uint64_t t18 = 35307819753957LLU;

	t18 = (((x985^x986)*x987)<<x988);

	if (t18 != 6419882242491383808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1033 = -1;
	uint64_t x1034 = 874924840LLU;
	int32_t x1035 = -1;
	static int8_t x1036 = 0;
	static volatile uint64_t t19 = 6467812151057304LLU;

	t19 = (((x1033^x1034)*x1035)<<x1036);

	if (t19 != 874924841LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1042 = UINT64_MAX;
	int64_t x1043 = INT64_MAX;
	uint16_t x1044 = 34U;
	static uint64_t t20 = 12259LLU;

	t20 = (((x1041^x1042)*x1043)<<x1044);

	if (t20 != 9031168505147293696LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1065 = INT16_MIN;
	int32_t x1066 = -1;
	volatile uint16_t x1067 = 144U;
	volatile int32_t t21 = 6358;

	t21 = (((x1065^x1066)*x1067)<<x1068);

	if (t21 != 18873792) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1077 = -1;
	uint64_t x1078 = 849942816075967LLU;
	int32_t x1079 = INT32_MAX;
	volatile uint64_t t22 = 1073748LLU;

	t22 = (((x1077^x1078)*x1079)<<x1080);

	if (t22 != 14461782906600882176LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1097 = -1LL;
	uint8_t x1098 = UINT8_MAX;
	int16_t x1099 = -193;
	static int8_t x1100 = 1;
	int64_t t23 = -121152024644LL;

	t23 = (((x1097^x1098)*x1099)<<x1100);

	if (t23 != 98816LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1177 = 31LLU;
	volatile int8_t x1178 = INT8_MIN;
	int8_t x1179 = 0;
	uint16_t x1180 = 1U;
	volatile uint64_t t24 = 47LLU;

	t24 = (((x1177^x1178)*x1179)<<x1180);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1193 = 5;
	static int32_t x1194 = 1;
	int32_t x1195 = 93;
	int32_t t25 = 564;

	t25 = (((x1193^x1194)*x1195)<<x1196);

	if (t25 != 744) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1197 = -6LL;
	uint64_t x1198 = 779950572094136169LLU;
	static uint64_t x1199 = UINT64_MAX;
	static uint8_t x1200 = 1U;
	uint64_t t26 = 66791191LLU;

	t26 = (((x1197^x1198)*x1199)<<x1200);

	if (t26 != 1559901144188272346LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1226 = 34;
	uint32_t t27 = 7U;

	t27 = (((x1225^x1226)*x1227)<<x1228);

	if (t27 != 4294963296U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1265 = 274U;
	uint32_t x1266 = 115U;
	uint32_t x1267 = 301660U;

	t28 = (((x1265^x1266)*x1267)<<x1268);

	if (t28 != 922746880U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1271 = 1;
	int32_t t29 = 1;

	t29 = (((x1269^x1270)*x1271)<<x1272);

	if (t29 != 122880) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1489 = UINT64_MAX;
	uint8_t x1490 = 32U;
	uint8_t x1492 = 1U;
	uint64_t t30 = 7696LLU;

	t30 = (((x1489^x1490)*x1491)<<x1492);

	if (t30 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1511 = 7U;
	int8_t x1512 = 4;
	volatile uint64_t t31 = 11684LLU;

	t31 = (((x1509^x1510)*x1511)<<x1512);

	if (t31 != 39200LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1625 = 0U;
	static volatile int32_t x1627 = -13419;
	int8_t x1628 = 1;
	static int32_t t32 = -1;

	t32 = (((x1625^x1626)*x1627)<<x1628);

	if (t32 != 879427584) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1865 = UINT64_MAX;
	uint64_t x1866 = UINT64_MAX;
	int64_t x1867 = -1LL;
	static int8_t x1868 = 15;
	volatile uint64_t t33 = 8LLU;

	t33 = (((x1865^x1866)*x1867)<<x1868);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1913 = -1;
	int64_t x1914 = -1LL;
	int32_t x1916 = 13;
	volatile int64_t t34 = 13442456LL;

	t34 = (((x1913^x1914)*x1915)<<x1916);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1917 = 4462862249407615254LLU;
	int32_t x1918 = INT32_MIN;
	volatile int32_t x1919 = INT32_MIN;
	static int16_t x1920 = 25;
	static volatile uint64_t t35 = 267553563094LLU;

	t35 = (((x1917^x1918)*x1919)<<x1920);

	if (t35 != 16861477004875137024LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1941 = INT8_MIN;
	volatile uint64_t t36 = 0LLU;

	t36 = (((x1941^x1942)*x1943)<<x1944);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1994 = INT16_MIN;
	int32_t t37 = -1199475;

	t37 = (((x1993^x1994)*x1995)<<x1996);

	if (t37 != 1043432348) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2013 = 15U;
	static int16_t x2014 = INT16_MIN;
	int8_t x2015 = -1;
	uint8_t x2016 = 0U;
	volatile int32_t t38 = 3;

	t38 = (((x2013^x2014)*x2015)<<x2016);

	if (t38 != 32753) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2017 = 220365796U;
	uint64_t x2018 = 2119037661845865699LLU;
	static int32_t x2019 = -1;
	static uint8_t x2020 = 4U;
	static volatile uint64_t t39 = 360151431540888LLU;

	t39 = (((x2017^x2018)*x2019)<<x2020);

	if (t39 != 2988885559262547856LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2113 = INT16_MIN;
	int64_t x2114 = INT64_MIN;
	static uint64_t x2115 = 0LLU;
	static uint8_t x2116 = 37U;
	volatile uint64_t t40 = 8597668871510668200LLU;

	t40 = (((x2113^x2114)*x2115)<<x2116);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2157 = -3203266;
	uint16_t x2158 = 100U;
	int16_t x2160 = 9;
	volatile uint32_t t41 = 1072113008U;

	t41 = (((x2157^x2158)*x2159)<<x2160);

	if (t41 != 2824384512U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2214 = -1;
	static uint32_t x2215 = 653U;
	uint32_t x2216 = 2U;
	uint32_t t42 = 345639472U;

	t42 = (((x2213^x2214)*x2215)<<x2216);

	if (t42 != 4247820696U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2269 = INT64_MAX;
	int64_t x2270 = -72376418112LL;
	uint64_t x2271 = 22959385999164LLU;
	volatile uint8_t x2272 = 1U;
	volatile uint64_t t43 = 25LLU;

	t43 = (((x2269^x2270)*x2271)<<x2272);

	if (t43 != 15488742932373125000LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2397 = -1;
	int8_t x2398 = INT8_MAX;
	int16_t x2399 = INT16_MIN;
	uint8_t x2400 = 1U;
	int32_t t44 = -1;

	t44 = (((x2397^x2398)*x2399)<<x2400);

	if (t44 != 8388608) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2454 = INT64_MIN;
	static volatile uint64_t x2455 = 377921LLU;
	static volatile uint64_t t45 = 30339975436410LLU;

	t45 = (((x2453^x2454)*x2455)<<x2456);

	if (t45 != 18446744024174690304LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2461 = INT16_MAX;
	uint8_t x2462 = UINT8_MAX;
	uint8_t x2463 = 55U;
	uint32_t x2464 = 0U;
	int32_t t46 = -2;

	t46 = (((x2461^x2462)*x2463)<<x2464);

	if (t46 != 1788160) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2493 = -1LL;
	uint16_t x2494 = 2U;
	int8_t x2495 = INT8_MIN;
	uint32_t x2496 = 41U;
	volatile int64_t t47 = 150299LL;

	t47 = (((x2493^x2494)*x2495)<<x2496);

	if (t47 != 844424930131968LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2498 = UINT64_MAX;
	int32_t x2499 = -866911;

	t48 = (((x2497^x2498)*x2499)<<x2500);

	if (t48 != 18444882396513647199LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2577 = UINT32_MAX;
	volatile uint64_t x2578 = UINT64_MAX;
	uint16_t x2579 = 0U;
	int8_t x2580 = 1;
	volatile uint64_t t49 = 5490287744742423LLU;

	t49 = (((x2577^x2578)*x2579)<<x2580);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2641 = INT32_MIN;
	volatile uint16_t x2643 = 21U;
	uint8_t x2644 = 24U;
	volatile int64_t t50 = -66185455459989LL;

	t50 = (((x2641^x2642)*x2643)<<x2644);

	if (t50 != 756604737045921792LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2693 = 12032603924LL;
	uint64_t x2694 = UINT64_MAX;
	uint16_t x2696 = 13U;
	uint64_t t51 = 7LLU;

	t51 = (((x2693^x2694)*x2695)<<x2696);

	if (t51 != 18446251218252783616LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2723 = 16U;
	uint32_t t52 = 101200095U;

	t52 = (((x2721^x2722)*x2723)<<x2724);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2763 = UINT64_MAX;

	t53 = (((x2761^x2762)*x2763)<<x2764);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2798 = 2121081067LLU;
	uint32_t x2799 = UINT32_MAX;
	uint16_t x2800 = 51U;

	t54 = (((x2797^x2798)*x2799)<<x2800);

	if (t54 != 17917571117493518336LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2837 = -7492152;
	int8_t x2838 = INT8_MIN;
	int16_t x2840 = 2;
	volatile int32_t t55 = -235;

	t55 = (((x2837^x2838)*x2839)<<x2840);

	if (t55 != 59937344) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2890 = -88428;
	volatile int16_t x2891 = INT16_MIN;
	int8_t x2892 = 2;
	volatile uint32_t t56 = 641736158U;

	t56 = (((x2889^x2890)*x2891)<<x2892);

	if (t56 != 2988441600U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3037 = 1;
	uint32_t x3038 = 8U;
	uint16_t x3039 = UINT16_MAX;
	uint16_t x3040 = 2U;
	static volatile uint32_t t57 = 13U;

	t57 = (((x3037^x3038)*x3039)<<x3040);

	if (t57 != 2359260U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3097 = -1;
	volatile int64_t x3099 = -1315370674LL;
	int8_t x3100 = 6;
	static volatile int64_t t58 = -5265LL;

	t58 = (((x3097^x3098)*x3099)<<x3100);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3137 = 7989899LL;
	int8_t x3138 = INT8_MAX;
	uint64_t x3139 = 58076753LLU;
	uint32_t x3140 = 13U;

	t59 = (((x3137^x3138)*x3139)<<x3140);

	if (t59 != 3801362340061282304LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3193 = 1U;
	int64_t x3194 = -1LL;
	volatile uint64_t x3195 = UINT64_MAX;
	int32_t x3196 = 3;
	uint64_t t60 = 32240828LLU;

	t60 = (((x3193^x3194)*x3195)<<x3196);

	if (t60 != 16LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3202 = INT8_MAX;
	static uint64_t x3203 = 5365009158631LLU;
	uint8_t x3204 = 28U;
	static uint64_t t61 = 78148147358412LLU;

	t61 = (((x3201^x3202)*x3203)<<x3204);

	if (t61 != 2500641698137243648LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3217 = INT8_MAX;
	int16_t x3220 = 0;
	volatile uint32_t t62 = 909U;

	t62 = (((x3217^x3218)*x3219)<<x3220);

	if (t62 != 2514517888U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3222 = -1LL;
	int8_t x3223 = INT8_MAX;
	int8_t x3224 = 0;
	volatile uint64_t t63 = 595173LLU;

	t63 = (((x3221^x3222)*x3223)<<x3224);

	if (t63 != 18446743981363852386LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3249 = 1U;
	static int64_t x3250 = 158630592LL;
	volatile uint64_t x3251 = UINT64_MAX;
	uint64_t t64 = 25746558527401827LLU;

	t64 = (((x3249^x3250)*x3251)<<x3252);

	if (t64 != 18446744033100119808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3341 = 6633472877970910LLU;
	static uint16_t x3342 = UINT16_MAX;
	static int16_t x3343 = INT16_MIN;
	static int32_t x3344 = 30;
	static volatile uint64_t t65 = 128905030790LLU;

	t65 = (((x3341^x3342)*x3343)<<x3344);

	if (t65 != 8699793395800866816LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3369 = 0;
	volatile uint32_t x3370 = 4U;
	uint64_t x3371 = UINT64_MAX;

	t66 = (((x3369^x3370)*x3371)<<x3372);

	if (t66 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3397 = INT16_MIN;
	uint8_t x3399 = UINT8_MAX;
	uint64_t t67 = 1LLU;

	t67 = (((x3397^x3398)*x3399)<<x3400);

	if (t67 != 18446744073701196286LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3474 = INT8_MIN;
	static uint32_t x3475 = 13125334U;
	int32_t x3476 = 1;
	volatile uint32_t t68 = 94U;

	t68 = (((x3473^x3474)*x3475)<<x3476);

	if (t68 != 2145405012U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3525 = -449;
	uint16_t x3526 = 76U;
	static volatile int16_t x3527 = -51;
	static uint8_t x3528 = 6U;
	static volatile int32_t t69 = -210264;

	t69 = (((x3525^x3526)*x3527)<<x3528);

	if (t69 != 1295808) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3546 = 65802457LLU;
	uint16_t x3547 = UINT16_MAX;
	uint8_t x3548 = 0U;

	t70 = (((x3545^x3546)*x3547)<<x3548);

	if (t70 != 7392246945030LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3593 = 1;
	static int16_t x3595 = 1;
	volatile uint64_t t71 = 762LLU;

	t71 = (((x3593^x3594)*x3595)<<x3596);

	if (t71 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3605 = 103382646U;
	int32_t x3607 = INT32_MAX;
	uint32_t t72 = 2U;

	t72 = (((x3605^x3606)*x3607)<<x3608);

	if (t72 != 3308244704U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3634 = -6265031133986864LL;
	uint32_t x3636 = 5U;
	static volatile uint64_t t73 = 89529636LLU;

	t73 = (((x3633^x3634)*x3635)<<x3636);

	if (t73 != 15001843586607620192LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3765 = UINT32_MAX;
	static int8_t x3766 = INT8_MIN;
	int8_t x3767 = -1;
	int8_t x3768 = 1;
	uint32_t t74 = 427204929U;

	t74 = (((x3765^x3766)*x3767)<<x3768);

	if (t74 != 4294967042U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3866 = UINT8_MAX;
	volatile uint32_t x3867 = UINT32_MAX;
	uint8_t x3868 = 3U;
	volatile uint64_t t75 = 3LLU;

	t75 = (((x3865^x3866)*x3867)<<x3868);

	if (t75 != 18446735277616531456LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3937 = 482151LLU;
	int64_t x3938 = -1LL;
	int16_t x3939 = 10;
	static int32_t x3940 = 4;
	volatile uint64_t t76 = 2942475993124LLU;

	t76 = (((x3937^x3938)*x3939)<<x3940);

	if (t76 != 18446744073632407296LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3958 = 4;
	uint64_t x3959 = 1427854826253LLU;
	volatile int8_t x3960 = 6;
	uint64_t t77 = 53805254402056142LLU;

	t77 = (((x3957^x3958)*x3959)<<x3960);

	if (t77 != 12818691155457617856LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3969 = UINT32_MAX;
	uint64_t x3970 = 2822774532369856LLU;
	int32_t x3971 = -201045;
	uint8_t x3972 = 54U;
	static volatile uint64_t t78 = 3134782LLU;

	t78 = (((x3969^x3970)*x3971)<<x3972);

	if (t78 != 9601674405553897472LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x4301 = 6;
	volatile int8_t x4303 = -1;
	volatile int64_t t79 = 176873LL;

	t79 = (((x4301^x4302)*x4303)<<x4304);

	if (t79 != 56LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4325 = 54U;
	volatile int32_t x4326 = INT32_MIN;
	volatile uint32_t x4327 = 0U;
	uint16_t x4328 = 1U;

	t80 = (((x4325^x4326)*x4327)<<x4328);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4469 = 22;
	volatile int64_t x4470 = 12110522067661836LL;
	int8_t x4471 = 1;
	static int8_t x4472 = 0;
	volatile int64_t t81 = -8648986LL;

	t81 = (((x4469^x4470)*x4471)<<x4472);

	if (t81 != 12110522067661850LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4589 = UINT64_MAX;
	int8_t x4591 = -21;
	int8_t x4592 = 0;

	t82 = (((x4589^x4590)*x4591)<<x4592);

	if (t82 != 1376256LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4645 = 10580U;
	int32_t x4646 = INT32_MAX;
	uint8_t x4647 = 0U;
	volatile uint8_t x4648 = 2U;
	int32_t t83 = 665169408;

	t83 = (((x4645^x4646)*x4647)<<x4648);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4745 = 2734413U;
	static uint64_t x4746 = 14220184335606798LLU;
	int32_t x4748 = 0;
	volatile uint64_t t84 = 280910668088393LLU;

	t84 = (((x4745^x4746)*x4747)<<x4748);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4749 = -1;
	uint64_t x4750 = 6570263251866LLU;
	uint8_t x4752 = 0U;
	volatile uint64_t t85 = 4168997LLU;

	t85 = (((x4749^x4750)*x4751)<<x4752);

	if (t85 != 16220424125590536192LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4761 = 43U;
	int32_t x4762 = INT32_MIN;
	uint64_t x4763 = 0LLU;
	int64_t x4764 = 0LL;
	uint64_t t86 = 62346658677LLU;

	t86 = (((x4761^x4762)*x4763)<<x4764);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4877 = 2;
	int64_t x4878 = -1LL;
	int8_t x4879 = -1;
	volatile int64_t t87 = -542551564610LL;

	t87 = (((x4877^x4878)*x4879)<<x4880);

	if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4905 = UINT64_MAX;
	int16_t x4907 = INT16_MIN;
	uint8_t x4908 = 15U;
	static volatile uint64_t t88 = 40342400897368771LLU;

	t88 = (((x4905^x4906)*x4907)<<x4908);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4914 = -3;
	int8_t x4915 = -1;
	uint16_t x4916 = 4U;
	static volatile uint64_t t89 = 1429353733LLU;

	t89 = (((x4913^x4914)*x4915)<<x4916);

	if (t89 != 1013712448LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4985 = 21062LLU;
	static volatile int16_t x4986 = -1;
	uint32_t x4987 = UINT32_MAX;
	int8_t x4988 = 2;
	uint64_t t90 = 509751253213492646LLU;

	t90 = (((x4985^x4986)*x4987)<<x4988);

	if (t90 != 18446382214125013276LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5081 = -1;
	volatile uint32_t x5082 = 10U;
	uint8_t x5084 = 14U;
	volatile uint32_t t91 = 46901U;

	t91 = (((x5081^x5082)*x5083)<<x5084);

	if (t91 != 4281810944U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x5090 = 32;
	static uint16_t x5091 = 76U;

	t92 = (((x5089^x5090)*x5091)<<x5092);

	if (t92 != 2888U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5098 = 2583LLU;
	int8_t x5099 = -54;
	uint16_t x5100 = 44U;
	uint64_t t93 = 42920LLU;

	t93 = (((x5097^x5098)*x5099)<<x5100);

	if (t93 != 2454743271893630976LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5189 = INT32_MIN;
	uint8_t x5192 = 1U;
	int32_t t94 = 100157945;

	t94 = (((x5189^x5190)*x5191)<<x5192);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5201 = -1;
	int8_t x5202 = INT8_MAX;
	int8_t x5204 = 0;
	uint32_t t95 = 477436856U;

	t95 = (((x5201^x5202)*x5203)<<x5204);

	if (t95 != 4284123648U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x5296 = 1;
	int32_t t96 = 79303772;

	t96 = (((x5293^x5294)*x5295)<<x5296);

	if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5405 = -1;
	uint64_t x5406 = UINT64_MAX;
	int16_t x5407 = -1;
	int32_t x5408 = 14;
	volatile uint64_t t97 = 15320315920354LLU;

	t97 = (((x5405^x5406)*x5407)<<x5408);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5422 = 353U;
	static volatile uint32_t t98 = 1289671345U;

	t98 = (((x5421^x5422)*x5423)<<x5424);

	if (t98 != 4294916320U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x5525 = 54802303LLU;
	int32_t x5526 = -1765;
	int64_t x5527 = INT64_MIN;
	uint8_t x5528 = 37U;
	uint64_t t99 = 21685935LLU;

	t99 = (((x5525^x5526)*x5527)<<x5528);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

