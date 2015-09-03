#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = -1773;
uint64_t x145 = UINT64_MAX;
int8_t x148 = 18;
uint8_t x208 = 1U;
int16_t x290 = INT16_MIN;
int64_t x419 = INT64_MAX;
int64_t t6 = -13465246174035LL;
uint64_t x473 = 8267522131LLU;
volatile int32_t x603 = INT32_MAX;
static volatile int16_t x604 = 0;
static uint32_t x924 = 4U;
volatile int32_t t16 = 179801659;
int32_t x931 = INT32_MAX;
static uint64_t x976 = 0LLU;
int64_t x1054 = INT64_MAX;
uint8_t x1056 = 1U;
uint8_t x1118 = 104U;
int32_t x1122 = -1;
volatile uint8_t x1124 = 30U;
uint64_t x1389 = UINT64_MAX;
uint8_t x1390 = UINT8_MAX;
uint64_t t26 = 1962375769551741LLU;
int8_t x1480 = 0;
static uint32_t x2065 = UINT32_MAX;
uint32_t x2090 = 1377202771U;
uint8_t x2212 = 4U;
static int8_t x2272 = 1;
uint16_t x2330 = 15U;
volatile uint32_t t40 = 39U;
int8_t x2427 = -1;
int32_t x2461 = 1;
uint16_t x2620 = 11U;
uint8_t x2624 = 3U;
static int16_t x2803 = INT16_MAX;
int32_t x2830 = -127390226;
uint8_t x2832 = 3U;
static int64_t x2991 = -57LL;
int16_t x2992 = 0;
int32_t t55 = -124;
int32_t t56 = -109986295;
uint8_t x3747 = UINT8_MAX;
int16_t x3996 = 1;
volatile uint64_t t60 = 1630313938573443773LLU;
static volatile int64_t t62 = -1129058486LL;
uint8_t x4184 = 20U;
int64_t x4278 = -2563554661444LL;
int8_t x4279 = INT8_MIN;
uint8_t x4280 = 0U;
int32_t t64 = -501591;
volatile int32_t t65 = 3;
int8_t x4452 = 3;
int8_t x4462 = 0;
uint8_t x4464 = 0U;
uint16_t x4513 = 2U;
int8_t x4514 = -1;
volatile int16_t x4516 = 10;
volatile int32_t t69 = -243481214;
static uint8_t x4590 = UINT8_MAX;
static int8_t x4592 = 1;
volatile int32_t t70 = -11682;
int64_t x4787 = INT64_MIN;
int32_t x4886 = INT32_MIN;
uint16_t x4888 = 0U;
static uint64_t t73 = 8147744310119362377LLU;
uint32_t x4996 = 22U;
int8_t x5234 = -1;
static volatile uint64_t t76 = 11604401LLU;
volatile int32_t t79 = 745;
int8_t x5422 = 1;
static int32_t t80 = 0;
int8_t x5486 = INT8_MIN;
int64_t x5487 = -1LL;
uint64_t t81 = 59LLU;
static int16_t x5641 = 267;
static int8_t x5643 = -1;
volatile int32_t t82 = -7;
uint32_t x5685 = 0U;
volatile uint64_t t84 = 1829445044LLU;
uint16_t x5748 = 3U;
static volatile uint64_t t86 = 5LLU;
uint8_t x6048 = 6U;
uint8_t x6158 = 3U;
uint8_t x6160 = 1U;
uint32_t x6377 = 99375018U;
volatile int8_t x6379 = 1;
uint32_t t92 = 6698U;
volatile uint64_t x6485 = 18699060103021283LLU;
int32_t t95 = -424484;
uint16_t x6548 = 8U;
int64_t x6687 = INT64_MIN;
volatile int16_t x6688 = 1;
int8_t x6697 = 1;
volatile uint16_t x6698 = 171U;
static int8_t x6700 = 1;
int32_t t98 = -3;


void f0(void) {
	volatile uint16_t x9 = 3U;
	uint32_t x11 = UINT32_MAX;
	uint16_t x12 = 0U;
	int32_t t0 = 205873;

	t0 = (x9<<((x10<=x11)^x12));

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x146 = INT8_MAX;
	volatile uint32_t x147 = UINT32_MAX;
	volatile uint64_t t1 = 18673989539LLU;

	t1 = (x145<<((x146<=x147)^x148));

	if (t1 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x205 = 164682U;
	uint8_t x206 = UINT8_MAX;
	volatile uint8_t x207 = 15U;
	uint32_t t2 = 56U;

	t2 = (x205<<((x206<=x207)^x208));

	if (t2 != 329364U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x289 = 18061434019713LLU;
	volatile uint8_t x291 = 0U;
	volatile int64_t x292 = 30LL;
	static volatile uint64_t t3 = 6065294573LLU;

	t3 = (x289<<((x290<=x291)^x292));

	if (t3 != 11578173827099656192LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x373 = 1LLU;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = 2535U;
	int8_t x376 = 7;
	uint64_t t4 = 28706953359LLU;

	t4 = (x373<<((x374<=x375)^x376));

	if (t4 != 64LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x393 = 69U;
	int16_t x394 = -543;
	uint64_t x395 = 8089223LLU;
	uint16_t x396 = 13U;
	static int32_t t5 = -12433928;

	t5 = (x393<<((x394<=x395)^x396));

	if (t5 != 565248) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x417 = 2066770868817LL;
	int16_t x418 = -1653;
	int8_t x420 = 1;

	t6 = (x417<<((x418<=x419)^x420));

	if (t6 != 2066770868817LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x449 = 32U;
	int32_t x450 = INT32_MAX;
	static uint8_t x451 = UINT8_MAX;
	uint8_t x452 = 3U;
	static int32_t t7 = 6565;

	t7 = (x449<<((x450<=x451)^x452));

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x474 = -1;
	int8_t x475 = 0;
	uint16_t x476 = 12U;
	volatile uint64_t t8 = 39623589486LLU;

	t8 = (x473<<((x474<=x475)^x476));

	if (t8 != 67727541297152LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x561 = UINT64_MAX;
	int64_t x562 = INT64_MIN;
	uint64_t x563 = 131LLU;
	uint8_t x564 = 42U;
	volatile uint64_t t9 = 3046LLU;

	t9 = (x561<<((x562<=x563)^x564));

	if (t9 != 18446739675663040512LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x573 = UINT32_MAX;
	int32_t x574 = INT32_MAX;
	uint8_t x575 = 103U;
	uint16_t x576 = 17U;
	uint32_t t10 = 982U;

	t10 = (x573<<((x574<=x575)^x576));

	if (t10 != 4294836224U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x601 = 1;
	volatile int8_t x602 = INT8_MIN;
	int32_t t11 = -114324332;

	t11 = (x601<<((x602<=x603)^x604));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x821 = 135079855937257LLU;
	volatile int16_t x822 = INT16_MAX;
	uint16_t x823 = 95U;
	uint16_t x824 = 10U;
	uint64_t t12 = 66638162571LLU;

	t12 = (x821<<((x822<=x823)^x824));

	if (t12 != 138321772479751168LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x841 = 0;
	int64_t x842 = INT64_MIN;
	int32_t x843 = -16118370;
	static int8_t x844 = 13;
	int32_t t13 = 34387;

	t13 = (x841<<((x842<=x843)^x844));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x853 = 97;
	int32_t x854 = 18634468;
	int16_t x855 = -26;
	static int8_t x856 = 7;
	int32_t t14 = -10519;

	t14 = (x853<<((x854<=x855)^x856));

	if (t14 != 12416) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x881 = UINT32_MAX;
	uint64_t x882 = 36880364397101308LLU;
	uint64_t x883 = 198723153045LLU;
	volatile uint8_t x884 = 6U;
	volatile uint32_t t15 = 2044U;

	t15 = (x881<<((x882<=x883)^x884));

	if (t15 != 4294967232U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x921 = 83;
	static int64_t x922 = INT64_MAX;
	int64_t x923 = 44929LL;

	t16 = (x921<<((x922<=x923)^x924));

	if (t16 != 1328) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x929 = 78599;
	int8_t x930 = -1;
	static uint32_t x932 = 3U;
	volatile int32_t t17 = 7;

	t17 = (x929<<((x930<=x931)^x932));

	if (t17 != 314396) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x973 = 50845863667LLU;
	uint16_t x974 = 16782U;
	uint32_t x975 = UINT32_MAX;
	volatile uint64_t t18 = 126522611618LLU;

	t18 = (x973<<((x974<=x975)^x976));

	if (t18 != 101691727334LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1021 = INT8_MAX;
	int8_t x1022 = INT8_MIN;
	uint32_t x1023 = UINT32_MAX;
	int16_t x1024 = 10;
	int32_t t19 = 1802074;

	t19 = (x1021<<((x1022<=x1023)^x1024));

	if (t19 != 260096) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1053 = 1;
	int32_t x1055 = INT32_MIN;
	volatile int32_t t20 = -437702116;

	t20 = (x1053<<((x1054<=x1055)^x1056));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1117 = 3;
	static int32_t x1119 = -1;
	uint32_t x1120 = 1U;
	static int32_t t21 = -263;

	t21 = (x1117<<((x1118<=x1119)^x1120));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1121 = UINT64_MAX;
	uint32_t x1123 = UINT32_MAX;
	uint64_t t22 = 409337006603674860LLU;

	t22 = (x1121<<((x1122<=x1123)^x1124));

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1301 = UINT8_MAX;
	uint32_t x1302 = 20029446U;
	int8_t x1303 = INT8_MIN;
	volatile int8_t x1304 = 1;
	int32_t t23 = 7761671;

	t23 = (x1301<<((x1302<=x1303)^x1304));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1321 = UINT16_MAX;
	static uint16_t x1322 = 874U;
	int8_t x1323 = 6;
	volatile uint8_t x1324 = 9U;
	static int32_t t24 = 106;

	t24 = (x1321<<((x1322<=x1323)^x1324));

	if (t24 != 33553920) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1381 = INT16_MAX;
	static int8_t x1382 = 12;
	int64_t x1383 = INT64_MIN;
	static int32_t x1384 = 1;
	int32_t t25 = 3;

	t25 = (x1381<<((x1382<=x1383)^x1384));

	if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1391 = INT32_MAX;
	static int16_t x1392 = 60;

	t26 = (x1389<<((x1390<=x1391)^x1392));

	if (t26 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1477 = 0;
	int8_t x1478 = INT8_MIN;
	int32_t x1479 = -1;
	int32_t t27 = 2878006;

	t27 = (x1477<<((x1478<=x1479)^x1480));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1485 = 5U;
	int64_t x1486 = -960905182824286LL;
	volatile int64_t x1487 = 70977639091532LL;
	static uint64_t x1488 = 0LLU;
	volatile int32_t t28 = 21;

	t28 = (x1485<<((x1486<=x1487)^x1488));

	if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1645 = 1U;
	int16_t x1646 = INT16_MIN;
	uint32_t x1647 = 20321U;
	static uint16_t x1648 = 3U;
	volatile uint32_t t29 = 18U;

	t29 = (x1645<<((x1646<=x1647)^x1648));

	if (t29 != 8U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1653 = INT32_MAX;
	volatile int8_t x1654 = 8;
	int64_t x1655 = INT64_MAX;
	int64_t x1656 = 1LL;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x1653<<((x1654<=x1655)^x1656));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1693 = 619694365;
	uint64_t x1694 = UINT64_MAX;
	volatile int32_t x1695 = -1;
	int8_t x1696 = 0;
	volatile int32_t t31 = 19747104;

	t31 = (x1693<<((x1694<=x1695)^x1696));

	if (t31 != 1239388730) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1753 = 1U;
	volatile int16_t x1754 = -14866;
	volatile int16_t x1755 = INT16_MAX;
	static volatile uint8_t x1756 = 3U;
	uint32_t t32 = 3U;

	t32 = (x1753<<((x1754<=x1755)^x1756));

	if (t32 != 4U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1985 = 2U;
	static uint16_t x1986 = UINT16_MAX;
	int16_t x1987 = 5;
	volatile uint64_t x1988 = 1LLU;
	int32_t t33 = -108286959;

	t33 = (x1985<<((x1986<=x1987)^x1988));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2066 = INT32_MIN;
	int32_t x2067 = -1;
	static uint32_t x2068 = 0U;
	uint32_t t34 = 693936U;

	t34 = (x2065<<((x2066<=x2067)^x2068));

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2089 = 5U;
	uint8_t x2091 = 2U;
	int64_t x2092 = 1LL;
	volatile int32_t t35 = -890897;

	t35 = (x2089<<((x2090<=x2091)^x2092));

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2209 = 3U;
	int16_t x2210 = INT16_MIN;
	int32_t x2211 = INT32_MIN;
	int32_t t36 = 1049156347;

	t36 = (x2209<<((x2210<=x2211)^x2212));

	if (t36 != 48) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2221 = 1906U;
	static int64_t x2222 = -4823017278281437LL;
	int8_t x2223 = INT8_MIN;
	uint32_t x2224 = 2U;
	static volatile int32_t t37 = 2809756;

	t37 = (x2221<<((x2222<=x2223)^x2224));

	if (t37 != 15248) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2269 = INT16_MAX;
	volatile int64_t x2270 = INT64_MIN;
	volatile uint32_t x2271 = UINT32_MAX;
	int32_t t38 = 188364558;

	t38 = (x2269<<((x2270<=x2271)^x2272));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x2309 = 951U;
	int16_t x2310 = INT16_MIN;
	int32_t x2311 = -1;
	int32_t x2312 = 0;
	int32_t t39 = -9;

	t39 = (x2309<<((x2310<=x2311)^x2312));

	if (t39 != 1902) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2329 = 0U;
	volatile uint16_t x2331 = UINT16_MAX;
	volatile int8_t x2332 = 8;

	t40 = (x2329<<((x2330<=x2331)^x2332));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2425 = UINT16_MAX;
	uint32_t x2426 = UINT32_MAX;
	int8_t x2428 = 0;
	volatile int32_t t41 = 9;

	t41 = (x2425<<((x2426<=x2427)^x2428));

	if (t41 != 131070) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2441 = 0U;
	uint32_t x2442 = 288033064U;
	volatile uint16_t x2443 = UINT16_MAX;
	static int8_t x2444 = 0;
	volatile int32_t t42 = 6653;

	t42 = (x2441<<((x2442<=x2443)^x2444));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2462 = UINT16_MAX;
	uint64_t x2463 = UINT64_MAX;
	static uint8_t x2464 = 6U;
	volatile int32_t t43 = 81470306;

	t43 = (x2461<<((x2462<=x2463)^x2464));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2617 = UINT8_MAX;
	static volatile int64_t x2618 = INT64_MIN;
	int64_t x2619 = -1LL;
	static volatile int32_t t44 = -58278;

	t44 = (x2617<<((x2618<=x2619)^x2620));

	if (t44 != 261120) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2621 = UINT64_MAX;
	int64_t x2622 = INT64_MAX;
	volatile uint64_t x2623 = 68940280111817295LLU;
	volatile uint64_t t45 = 412LLU;

	t45 = (x2621<<((x2622<=x2623)^x2624));

	if (t45 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2801 = INT8_MAX;
	uint64_t x2802 = UINT64_MAX;
	int8_t x2804 = 2;
	int32_t t46 = 865;

	t46 = (x2801<<((x2802<=x2803)^x2804));

	if (t46 != 508) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2829 = UINT16_MAX;
	int32_t x2831 = INT32_MAX;
	int32_t t47 = 731353;

	t47 = (x2829<<((x2830<=x2831)^x2832));

	if (t47 != 262140) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2969 = INT8_MAX;
	volatile int32_t x2970 = -1;
	int16_t x2971 = 0;
	static volatile uint8_t x2972 = 6U;
	volatile int32_t t48 = -108787982;

	t48 = (x2969<<((x2970<=x2971)^x2972));

	if (t48 != 16256) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2989 = 11626U;
	volatile uint16_t x2990 = 20U;
	uint32_t t49 = 65569U;

	t49 = (x2989<<((x2990<=x2991)^x2992));

	if (t49 != 11626U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3081 = 1U;
	volatile int8_t x3082 = 3;
	int32_t x3083 = INT32_MIN;
	int8_t x3084 = 13;
	volatile uint32_t t50 = 11786737U;

	t50 = (x3081<<((x3082<=x3083)^x3084));

	if (t50 != 8192U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3265 = 1;
	int16_t x3266 = INT16_MIN;
	static volatile int16_t x3267 = INT16_MAX;
	uint8_t x3268 = 5U;
	int32_t t51 = -10340033;

	t51 = (x3265<<((x3266<=x3267)^x3268));

	if (t51 != 16) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3301 = UINT8_MAX;
	int16_t x3302 = -1;
	static int8_t x3303 = -50;
	volatile uint32_t x3304 = 0U;
	static int32_t t52 = -204;

	t52 = (x3301<<((x3302<=x3303)^x3304));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x3369 = 0;
	int64_t x3370 = -20491LL;
	volatile uint16_t x3371 = 1373U;
	int8_t x3372 = 19;
	volatile int32_t t53 = -1;

	t53 = (x3369<<((x3370<=x3371)^x3372));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3565 = 60;
	static volatile int8_t x3566 = INT8_MIN;
	uint64_t x3567 = 459523LLU;
	static int32_t x3568 = 8;
	volatile int32_t t54 = 1;

	t54 = (x3565<<((x3566<=x3567)^x3568));

	if (t54 != 15360) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x3621 = 1;
	static uint16_t x3622 = 11354U;
	static int16_t x3623 = INT16_MAX;
	uint8_t x3624 = 25U;

	t55 = (x3621<<((x3622<=x3623)^x3624));

	if (t55 != 16777216) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3721 = UINT8_MAX;
	uint32_t x3722 = 179319U;
	static int64_t x3723 = 257079469LL;
	int16_t x3724 = 8;

	t56 = (x3721<<((x3722<=x3723)^x3724));

	if (t56 != 130560) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3745 = INT16_MAX;
	static int16_t x3746 = INT16_MAX;
	static volatile uint8_t x3748 = 13U;
	static volatile int32_t t57 = -243;

	t57 = (x3745<<((x3746<=x3747)^x3748));

	if (t57 != 268427264) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3893 = UINT32_MAX;
	int16_t x3894 = -1;
	static int16_t x3895 = -3619;
	volatile uint8_t x3896 = 8U;
	uint32_t t58 = 1296619U;

	t58 = (x3893<<((x3894<=x3895)^x3896));

	if (t58 != 4294967040U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3973 = UINT32_MAX;
	int8_t x3974 = -12;
	int16_t x3975 = -1;
	int16_t x3976 = 1;
	static uint32_t t59 = UINT32_MAX;

	t59 = (x3973<<((x3974<=x3975)^x3976));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3993 = 3334984366LLU;
	uint8_t x3994 = 3U;
	uint64_t x3995 = UINT64_MAX;

	t60 = (x3993<<((x3994<=x3995)^x3996));

	if (t60 != 3334984366LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4093 = 27882;
	uint32_t x4094 = 92979U;
	int32_t x4095 = INT32_MAX;
	int32_t x4096 = 9;
	int32_t t61 = 18630;

	t61 = (x4093<<((x4094<=x4095)^x4096));

	if (t61 != 7137792) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4169 = 11482LL;
	volatile uint64_t x4170 = 43525498244998LLU;
	int8_t x4171 = INT8_MAX;
	uint8_t x4172 = 28U;

	t62 = (x4169<<((x4170<=x4171)^x4172));

	if (t62 != 3082175905792LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4181 = 0;
	int8_t x4182 = -1;
	volatile uint64_t x4183 = UINT64_MAX;
	volatile int32_t t63 = 102651;

	t63 = (x4181<<((x4182<=x4183)^x4184));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4277 = 245;

	t64 = (x4277<<((x4278<=x4279)^x4280));

	if (t64 != 490) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4293 = UINT16_MAX;
	static uint32_t x4294 = 701856225U;
	int32_t x4295 = -277424;
	uint16_t x4296 = 7U;

	t65 = (x4293<<((x4294<=x4295)^x4296));

	if (t65 != 4194240) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4401 = 1;
	static uint16_t x4402 = 12U;
	int32_t x4403 = 8572635;
	uint32_t x4404 = 1U;
	int32_t t66 = 131050;

	t66 = (x4401<<((x4402<=x4403)^x4404));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4449 = INT16_MAX;
	int16_t x4450 = 198;
	uint32_t x4451 = 160U;
	volatile int32_t t67 = 2351;

	t67 = (x4449<<((x4450<=x4451)^x4452));

	if (t67 != 262136) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x4461 = 3345LL;
	int8_t x4463 = INT8_MIN;
	int64_t t68 = 8LL;

	t68 = (x4461<<((x4462<=x4463)^x4464));

	if (t68 != 3345LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4515 = INT64_MAX;

	t69 = (x4513<<((x4514<=x4515)^x4516));

	if (t69 != 4096) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x4589 = UINT8_MAX;
	int16_t x4591 = INT16_MIN;

	t70 = (x4589<<((x4590<=x4591)^x4592));

	if (t70 != 510) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4765 = 0;
	static int32_t x4766 = -71241212;
	int64_t x4767 = INT64_MAX;
	static int8_t x4768 = 4;
	int32_t t71 = 10556;

	t71 = (x4765<<((x4766<=x4767)^x4768));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4785 = 55U;
	int64_t x4786 = -2734329535LL;
	static volatile uint64_t x4788 = 3LLU;
	volatile int32_t t72 = 142873041;

	t72 = (x4785<<((x4786<=x4787)^x4788));

	if (t72 != 440) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4885 = 4792LLU;
	int32_t x4887 = 7372;

	t73 = (x4885<<((x4886<=x4887)^x4888));

	if (t73 != 9584LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x4993 = 2U;
	int16_t x4994 = -2;
	volatile int8_t x4995 = -1;
	int32_t t74 = -15;

	t74 = (x4993<<((x4994<=x4995)^x4996));

	if (t74 != 16777216) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x5181 = UINT64_MAX;
	volatile int16_t x5182 = INT16_MAX;
	static uint32_t x5183 = UINT32_MAX;
	uint16_t x5184 = 0U;
	uint64_t t75 = 17881685506714LLU;

	t75 = (x5181<<((x5182<=x5183)^x5184));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x5233 = UINT64_MAX;
	int32_t x5235 = -1;
	uint32_t x5236 = 0U;

	t76 = (x5233<<((x5234<=x5235)^x5236));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5349 = 8004LLU;
	int32_t x5350 = -1;
	static int8_t x5351 = INT8_MIN;
	uint32_t x5352 = 1U;
	volatile uint64_t t77 = 52LLU;

	t77 = (x5349<<((x5350<=x5351)^x5352));

	if (t77 != 16008LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x5353 = 1;
	volatile int64_t x5354 = INT64_MIN;
	int16_t x5355 = INT16_MAX;
	volatile int64_t x5356 = 1LL;
	static int32_t t78 = 75372201;

	t78 = (x5353<<((x5354<=x5355)^x5356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5413 = 471U;
	int32_t x5414 = INT32_MAX;
	int16_t x5415 = -1;
	volatile int8_t x5416 = 1;

	t79 = (x5413<<((x5414<=x5415)^x5416));

	if (t79 != 942) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5421 = 13600;
	int64_t x5423 = -31146237912LL;
	int8_t x5424 = 0;

	t80 = (x5421<<((x5422<=x5423)^x5424));

	if (t80 != 13600) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x5485 = 500LLU;
	volatile uint8_t x5488 = 9U;

	t81 = (x5485<<((x5486<=x5487)^x5488));

	if (t81 != 128000LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x5642 = INT64_MIN;
	uint8_t x5644 = 2U;

	t82 = (x5641<<((x5642<=x5643)^x5644));

	if (t82 != 2136) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5686 = INT16_MIN;
	uint16_t x5687 = 43U;
	int8_t x5688 = 14;
	uint32_t t83 = 207598U;

	t83 = (x5685<<((x5686<=x5687)^x5688));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x5717 = 13352323292957LLU;
	static volatile uint16_t x5718 = 85U;
	volatile uint16_t x5719 = 14119U;
	uint8_t x5720 = 7U;

	t84 = (x5717<<((x5718<=x5719)^x5720));

	if (t84 != 854548690749248LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5745 = 1U;
	volatile int32_t x5746 = INT32_MAX;
	int16_t x5747 = INT16_MAX;
	volatile int32_t t85 = -10087099;

	t85 = (x5745<<((x5746<=x5747)^x5748));

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5933 = 39447451LLU;
	static uint64_t x5934 = 1579040319LLU;
	volatile uint16_t x5935 = 984U;
	uint32_t x5936 = 1U;

	t86 = (x5933<<((x5934<=x5935)^x5936));

	if (t86 != 78894902LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5961 = INT8_MAX;
	static volatile int16_t x5962 = 5;
	uint16_t x5963 = UINT16_MAX;
	volatile uint8_t x5964 = 21U;
	static int32_t t87 = -7581;

	t87 = (x5961<<((x5962<=x5963)^x5964));

	if (t87 != 133169152) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x6045 = 714LLU;
	uint8_t x6046 = 31U;
	int16_t x6047 = -1;
	volatile uint64_t t88 = 187006899LLU;

	t88 = (x6045<<((x6046<=x6047)^x6048));

	if (t88 != 45696LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x6085 = 15574U;
	volatile uint32_t x6086 = UINT32_MAX;
	int64_t x6087 = INT64_MIN;
	static uint8_t x6088 = 13U;
	volatile uint32_t t89 = 3291U;

	t89 = (x6085<<((x6086<=x6087)^x6088));

	if (t89 != 127582208U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6157 = UINT64_MAX;
	static volatile int32_t x6159 = INT32_MIN;
	volatile uint64_t t90 = 7938841990665LLU;

	t90 = (x6157<<((x6158<=x6159)^x6160));

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6241 = 601U;
	volatile int8_t x6242 = INT8_MIN;
	static volatile uint64_t x6243 = 88LLU;
	uint8_t x6244 = 1U;
	int32_t t91 = -7024;

	t91 = (x6241<<((x6242<=x6243)^x6244));

	if (t91 != 1202) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6378 = INT8_MAX;
	uint16_t x6380 = 25U;

	t92 = (x6377<<((x6378<=x6379)^x6380));

	if (t92 != 1409286144U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6457 = 21U;
	int32_t x6458 = 2;
	int8_t x6459 = -29;
	static uint8_t x6460 = 4U;
	static volatile int32_t t93 = 75;

	t93 = (x6457<<((x6458<=x6459)^x6460));

	if (t93 != 336) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x6486 = INT16_MAX;
	uint16_t x6487 = UINT16_MAX;
	static int8_t x6488 = 1;
	uint64_t t94 = 331457505827338LLU;

	t94 = (x6485<<((x6486<=x6487)^x6488));

	if (t94 != 18699060103021283LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x6509 = UINT8_MAX;
	uint16_t x6510 = UINT16_MAX;
	int64_t x6511 = -993762327LL;
	uint8_t x6512 = 23U;

	t95 = (x6509<<((x6510<=x6511)^x6512));

	if (t95 != 2139095040) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6545 = UINT16_MAX;
	uint8_t x6546 = 114U;
	volatile int8_t x6547 = 26;
	volatile int32_t t96 = 226436014;

	t96 = (x6545<<((x6546<=x6547)^x6548));

	if (t96 != 16776960) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6685 = 1;
	volatile int16_t x6686 = -1;
	volatile int32_t t97 = 204;

	t97 = (x6685<<((x6686<=x6687)^x6688));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6699 = 12;

	t98 = (x6697<<((x6698<=x6699)^x6700));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6717 = 20048LL;
	uint16_t x6718 = 4U;
	int32_t x6719 = INT32_MIN;
	uint16_t x6720 = 46U;
	volatile int64_t t99 = -37112845LL;

	t99 = (x6717<<((x6718<=x6719)^x6720));

	if (t99 != 1410752583273807872LL) { NG(); } else { ; }
	
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

