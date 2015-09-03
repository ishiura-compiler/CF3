#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x127 = 0;
int32_t x261 = 100533346;
uint8_t x263 = 0U;
static int32_t t2 = -180627;
volatile int16_t x269 = INT16_MIN;
int64_t x329 = INT64_MIN;
uint64_t x397 = UINT64_MAX;
static int16_t x705 = INT16_MAX;
static volatile int32_t t13 = -95879;
uint16_t x1027 = 3U;
static int32_t t14 = 0;
int8_t x1152 = INT8_MIN;
int32_t t16 = 7150181;
uint32_t x1226 = 359U;
uint32_t x1234 = 1076U;
int32_t t18 = -27896318;
int16_t x1269 = INT16_MIN;
static uint8_t x1270 = UINT8_MAX;
static int32_t x1317 = -30603;
uint32_t x1318 = 15U;
volatile uint64_t x1373 = 189202LLU;
uint64_t t23 = 1698342480394LLU;
static volatile int16_t x1413 = INT16_MIN;
uint32_t x1414 = 728730U;
volatile uint8_t x1475 = 6U;
int32_t x1476 = INT32_MIN;
volatile int32_t t29 = INT32_MIN;
static volatile int8_t x1607 = 0;
volatile int64_t t31 = 129818473350LL;
int16_t x1806 = 2;
int8_t x1901 = INT8_MIN;
uint32_t x1903 = 2U;
volatile int32_t t34 = 123027;
volatile int32_t t36 = 6603;
uint64_t x2094 = 182791146299LLU;
int64_t x2170 = 114854LL;
int32_t x2219 = 6;
int32_t x2241 = -1299142;
static uint64_t x2243 = 1LLU;
int32_t t41 = -1436;
int32_t x2420 = INT32_MIN;
uint16_t x2435 = 0U;
static int8_t x2588 = INT8_MAX;
volatile int32_t x2685 = INT32_MIN;
volatile uint64_t x2842 = 26595981325751712LLU;
static uint32_t t49 = 15016952U;
static volatile int16_t x2941 = -1;
uint32_t x2942 = 33U;
static volatile int32_t x2961 = 60404035;
int8_t x2963 = 0;
uint32_t x2994 = 96093533U;
uint32_t x2995 = 1U;
volatile uint8_t x3011 = 14U;
static int32_t t53 = -18123;
int32_t t54 = -227912210;
volatile int8_t x3145 = -14;
static volatile uint8_t x3146 = 11U;
volatile int32_t t55 = 1865;
int32_t x3470 = 34922785;
int32_t t56 = -790171061;
volatile uint64_t x3480 = 34LLU;
volatile int64_t t57 = 94947LL;
int32_t t59 = -15519;
int32_t t60 = 12138333;
static volatile uint8_t x3594 = 19U;
static uint8_t x3595 = 2U;
volatile uint64_t x3634 = UINT64_MAX;
uint16_t x3635 = 2U;
volatile int32_t t62 = -766305;
uint8_t x3871 = 6U;
uint32_t x3917 = 3U;
int16_t x3918 = INT16_MAX;
volatile int64_t x3920 = INT64_MIN;
static volatile uint32_t t65 = 8605U;
int32_t x3938 = 11710;
int16_t x3952 = -2;
uint8_t x4079 = 2U;
volatile int32_t t68 = 820397;
int32_t x4138 = 30;
int8_t x4214 = INT8_MAX;
uint64_t t70 = UINT64_MAX;
int64_t x4325 = INT64_MIN;
volatile uint32_t t72 = UINT32_MAX;
int8_t x4480 = 1;
uint32_t x4506 = 5959681U;
int16_t x4560 = -1;
static int64_t x4792 = -1LL;
int32_t x4888 = -2939086;
int8_t x4898 = 0;
int8_t x4899 = 4;
volatile int16_t x4950 = 1880;
static int32_t t84 = 0;
int16_t x4972 = INT16_MIN;
int16_t x5014 = 1041;
int64_t x5015 = 1LL;
int32_t t87 = 667;
uint8_t x5035 = 0U;
int16_t x5036 = INT16_MAX;
volatile int32_t t88 = -370;
uint8_t x5107 = 6U;
volatile int32_t x5288 = 1880;
int64_t x5313 = 1692255LL;
volatile uint16_t x5314 = UINT16_MAX;
static uint64_t x5323 = 0LLU;
int64_t x5365 = INT64_MIN;
uint8_t x5367 = 1U;
uint16_t x5368 = 7U;
volatile int64_t t94 = INT64_MIN;
int16_t x5670 = 432;
uint8_t x5671 = 0U;


void f0(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = INT32_MAX;
	static volatile int8_t x128 = 4;
	volatile int64_t t0 = INT64_MIN;

	t0 = (x125|((x126<<x127)==x128));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x181 = 1U;
	static int16_t x182 = INT16_MAX;
	volatile int16_t x183 = 1;
	int32_t x184 = -1;
	volatile int32_t t1 = 12635807;

	t1 = (x181|((x182<<x183)==x184));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x262 = 101847139U;
	int64_t x264 = 955836765749LL;

	t2 = (x261|((x262<<x263)==x264));

	if (t2 != 100533346) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x270 = INT16_MAX;
	uint8_t x271 = 1U;
	static int16_t x272 = 22;
	volatile int32_t t3 = -6739;

	t3 = (x269|((x270<<x271)==x272));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x330 = 20U;
	int8_t x331 = 1;
	int32_t x332 = INT32_MIN;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x329|((x330<<x331)==x332));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x398 = INT8_MAX;
	uint8_t x399 = 7U;
	volatile uint32_t x400 = 70U;
	static volatile uint64_t t5 = UINT64_MAX;

	t5 = (x397|((x398<<x399)==x400));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x409 = -1;
	static volatile uint32_t x410 = UINT32_MAX;
	static volatile uint16_t x411 = 2U;
	int64_t x412 = -1LL;
	volatile int32_t t6 = -41792;

	t6 = (x409|((x410<<x411)==x412));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x413 = INT16_MIN;
	uint16_t x414 = 264U;
	volatile uint16_t x415 = 0U;
	int64_t x416 = 74LL;
	static volatile int32_t t7 = -83;

	t7 = (x413|((x414<<x415)==x416));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x473 = 1776328U;
	int64_t x474 = 11349531254178LL;
	int8_t x475 = 2;
	volatile int32_t x476 = -1;
	uint32_t t8 = 23U;

	t8 = (x473|((x474<<x475)==x476));

	if (t8 != 1776328U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x661 = UINT16_MAX;
	volatile int16_t x662 = 23;
	uint32_t x663 = 0U;
	uint16_t x664 = 802U;
	volatile int32_t t9 = 280;

	t9 = (x661|((x662<<x663)==x664));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x706 = 0;
	uint16_t x707 = 10U;
	uint32_t x708 = UINT32_MAX;
	volatile int32_t t10 = -7008918;

	t10 = (x705|((x706<<x707)==x708));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x717 = 4U;
	uint64_t x718 = 10785895073200LLU;
	volatile uint16_t x719 = 1U;
	int32_t x720 = INT32_MAX;
	volatile int32_t t11 = 853404;

	t11 = (x717|((x718<<x719)==x720));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x917 = 6U;
	uint16_t x918 = 3326U;
	static uint8_t x919 = 9U;
	int16_t x920 = INT16_MIN;
	static volatile int32_t t12 = -1;

	t12 = (x917|((x918<<x919)==x920));

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x925 = INT8_MAX;
	static uint64_t x926 = 0LLU;
	volatile int8_t x927 = 7;
	volatile int16_t x928 = -353;

	t13 = (x925|((x926<<x927)==x928));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x1025 = -1;
	volatile uint8_t x1026 = 0U;
	uint64_t x1028 = 151757LLU;

	t14 = (x1025|((x1026<<x1027)==x1028));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1077 = UINT64_MAX;
	uint16_t x1078 = 3752U;
	int32_t x1079 = 5;
	static uint16_t x1080 = UINT16_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x1077|((x1078<<x1079)==x1080));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1149 = INT8_MAX;
	uint32_t x1150 = UINT32_MAX;
	uint64_t x1151 = 17LLU;

	t16 = (x1149|((x1150<<x1151)==x1152));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1225 = INT64_MAX;
	static uint32_t x1227 = 15U;
	int8_t x1228 = INT8_MIN;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x1225|((x1226<<x1227)==x1228));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1233 = UINT8_MAX;
	uint8_t x1235 = 1U;
	uint16_t x1236 = 29657U;

	t18 = (x1233|((x1234<<x1235)==x1236));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1271 = 9;
	int16_t x1272 = 1;
	static volatile int32_t t19 = 173;

	t19 = (x1269|((x1270<<x1271)==x1272));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1305 = INT16_MAX;
	static volatile uint16_t x1306 = UINT16_MAX;
	volatile uint8_t x1307 = 15U;
	int8_t x1308 = 10;
	static volatile int32_t t20 = -42153;

	t20 = (x1305|((x1306<<x1307)==x1308));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1319 = 3U;
	static int32_t x1320 = INT32_MAX;
	volatile int32_t t21 = 62;

	t21 = (x1317|((x1318<<x1319)==x1320));

	if (t21 != -30603) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1353 = INT64_MIN;
	static uint8_t x1354 = 10U;
	uint16_t x1355 = 3U;
	int32_t x1356 = 465106018;
	int64_t t22 = INT64_MIN;

	t22 = (x1353|((x1354<<x1355)==x1356));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1374 = UINT16_MAX;
	static uint32_t x1375 = 2U;
	uint8_t x1376 = 14U;

	t23 = (x1373|((x1374<<x1375)==x1376));

	if (t23 != 189202LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1385 = UINT16_MAX;
	uint8_t x1386 = 32U;
	uint8_t x1387 = 1U;
	int32_t x1388 = -33153;
	static volatile int32_t t24 = 505272;

	t24 = (x1385|((x1386<<x1387)==x1388));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1415 = 0;
	int32_t x1416 = INT32_MIN;
	int32_t t25 = -31101285;

	t25 = (x1413|((x1414<<x1415)==x1416));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1473 = 1059126412;
	static int64_t x1474 = 1158LL;
	int32_t t26 = -3;

	t26 = (x1473|((x1474<<x1475)==x1476));

	if (t26 != 1059126412) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1549 = -2363;
	uint8_t x1550 = 1U;
	int16_t x1551 = 6;
	int8_t x1552 = INT8_MIN;
	int32_t t27 = -1;

	t27 = (x1549|((x1550<<x1551)==x1552));

	if (t27 != -2363) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1553 = INT64_MAX;
	uint8_t x1554 = UINT8_MAX;
	uint16_t x1555 = 0U;
	int64_t x1556 = -458282275575392014LL;
	int64_t t28 = INT64_MAX;

	t28 = (x1553|((x1554<<x1555)==x1556));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1557 = INT32_MIN;
	static volatile int16_t x1558 = 21;
	static uint8_t x1559 = 7U;
	int64_t x1560 = -7393788640LL;

	t29 = (x1557|((x1558<<x1559)==x1560));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1605 = -182804498;
	uint8_t x1606 = 12U;
	volatile uint8_t x1608 = 0U;
	static volatile int32_t t30 = -1;

	t30 = (x1605|((x1606<<x1607)==x1608));

	if (t30 != -182804498) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1661 = -5251746576170LL;
	int32_t x1662 = 71811;
	int8_t x1663 = 9;
	int8_t x1664 = 0;

	t31 = (x1661|((x1662<<x1663)==x1664));

	if (t31 != -5251746576170LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1745 = INT8_MIN;
	volatile uint8_t x1746 = UINT8_MAX;
	uint16_t x1747 = 3U;
	uint64_t x1748 = UINT64_MAX;
	int32_t t32 = 716237748;

	t32 = (x1745|((x1746<<x1747)==x1748));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1805 = INT32_MIN;
	static uint16_t x1807 = 13U;
	volatile int32_t x1808 = INT32_MIN;
	int32_t t33 = INT32_MIN;

	t33 = (x1805|((x1806<<x1807)==x1808));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1902 = 5291LLU;
	volatile int16_t x1904 = INT16_MIN;

	t34 = (x1901|((x1902<<x1903)==x1904));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1957 = 1U;
	uint64_t x1958 = 18LLU;
	uint16_t x1959 = 0U;
	uint8_t x1960 = UINT8_MAX;
	volatile int32_t t35 = 0;

	t35 = (x1957|((x1958<<x1959)==x1960));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2001 = -1;
	static volatile uint32_t x2002 = 97017694U;
	uint16_t x2003 = 2U;
	volatile uint32_t x2004 = UINT32_MAX;

	t36 = (x2001|((x2002<<x2003)==x2004));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2033 = 24877;
	uint64_t x2034 = UINT64_MAX;
	uint8_t x2035 = 2U;
	int64_t x2036 = -211LL;
	int32_t t37 = 693621641;

	t37 = (x2033|((x2034<<x2035)==x2036));

	if (t37 != 24877) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2093 = -1;
	int8_t x2095 = 1;
	volatile uint64_t x2096 = UINT64_MAX;
	int32_t t38 = -280;

	t38 = (x2093|((x2094<<x2095)==x2096));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x2169 = 258998LLU;
	uint16_t x2171 = 4U;
	uint64_t x2172 = 175LLU;
	volatile uint64_t t39 = 4303LLU;

	t39 = (x2169|((x2170<<x2171)==x2172));

	if (t39 != 258998LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2217 = INT32_MAX;
	static uint8_t x2218 = 1U;
	volatile uint8_t x2220 = UINT8_MAX;
	volatile int32_t t40 = INT32_MAX;

	t40 = (x2217|((x2218<<x2219)==x2220));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2242 = UINT64_MAX;
	int16_t x2244 = INT16_MIN;

	t41 = (x2241|((x2242<<x2243)==x2244));

	if (t41 != -1299142) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2417 = INT8_MIN;
	int64_t x2418 = 546774074210267643LL;
	static int64_t x2419 = 0LL;
	volatile int32_t t42 = 21;

	t42 = (x2417|((x2418<<x2419)==x2420));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x2433 = UINT32_MAX;
	volatile int16_t x2434 = 1;
	volatile int8_t x2436 = -25;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x2433|((x2434<<x2435)==x2436));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2585 = INT8_MIN;
	static int32_t x2586 = 7;
	int8_t x2587 = 11;
	int32_t t44 = -560;

	t44 = (x2585|((x2586<<x2587)==x2588));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x2686 = 822;
	volatile int8_t x2687 = 2;
	uint16_t x2688 = 0U;
	volatile int32_t t45 = INT32_MIN;

	t45 = (x2685|((x2686<<x2687)==x2688));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x2713 = 1U;
	volatile uint16_t x2714 = 42U;
	uint8_t x2715 = 2U;
	uint64_t x2716 = 16890929131180LLU;
	int32_t t46 = -1;

	t46 = (x2713|((x2714<<x2715)==x2716));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2797 = 736490LL;
	uint16_t x2798 = 210U;
	volatile uint8_t x2799 = 3U;
	int64_t x2800 = INT64_MIN;
	int64_t t47 = -15LL;

	t47 = (x2797|((x2798<<x2799)==x2800));

	if (t47 != 736490LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2813 = INT16_MIN;
	static volatile uint64_t x2814 = 12294958280656277LLU;
	uint16_t x2815 = 3U;
	static int32_t x2816 = -1;
	volatile int32_t t48 = -1210;

	t48 = (x2813|((x2814<<x2815)==x2816));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x2841 = 1U;
	volatile uint16_t x2843 = 11U;
	uint32_t x2844 = UINT32_MAX;

	t49 = (x2841|((x2842<<x2843)==x2844));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2943 = 1U;
	volatile int8_t x2944 = -1;
	static volatile int32_t t50 = 215506411;

	t50 = (x2941|((x2942<<x2943)==x2944));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2962 = UINT8_MAX;
	int16_t x2964 = INT16_MAX;
	int32_t t51 = -3543;

	t51 = (x2961|((x2962<<x2963)==x2964));

	if (t51 != 60404035) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x2993 = 124U;
	static uint16_t x2996 = 15333U;
	volatile int32_t t52 = 3443505;

	t52 = (x2993|((x2994<<x2995)==x2996));

	if (t52 != 124) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3009 = 202;
	int16_t x3010 = 20;
	uint8_t x3012 = 81U;

	t53 = (x3009|((x3010<<x3011)==x3012));

	if (t53 != 202) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3073 = 16543506;
	uint64_t x3074 = 23615665329LLU;
	uint16_t x3075 = 0U;
	int64_t x3076 = INT64_MAX;

	t54 = (x3073|((x3074<<x3075)==x3076));

	if (t54 != 16543506) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3147 = 6;
	int32_t x3148 = -1;

	t55 = (x3145|((x3146<<x3147)==x3148));

	if (t55 != -14) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3469 = -319;
	static volatile int64_t x3471 = 0LL;
	int16_t x3472 = -1;

	t56 = (x3469|((x3470<<x3471)==x3472));

	if (t56 != -319) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3477 = -1LL;
	uint16_t x3478 = 117U;
	static int8_t x3479 = 0;

	t57 = (x3477|((x3478<<x3479)==x3480));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3517 = -93502LL;
	volatile uint32_t x3518 = 1U;
	uint8_t x3519 = 1U;
	static uint32_t x3520 = 0U;
	volatile int64_t t58 = 132311534901070793LL;

	t58 = (x3517|((x3518<<x3519)==x3520));

	if (t58 != -93502LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3557 = -1;
	uint8_t x3558 = 60U;
	int8_t x3559 = 3;
	int64_t x3560 = 39306214919077LL;

	t59 = (x3557|((x3558<<x3559)==x3560));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3585 = INT16_MAX;
	uint8_t x3586 = 0U;
	volatile uint8_t x3587 = 1U;
	uint16_t x3588 = 5845U;

	t60 = (x3585|((x3586<<x3587)==x3588));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3593 = -1;
	uint32_t x3596 = 1771087532U;
	volatile int32_t t61 = -199;

	t61 = (x3593|((x3594<<x3595)==x3596));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3633 = -1;
	int64_t x3636 = -15LL;

	t62 = (x3633|((x3634<<x3635)==x3636));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3829 = 756537662U;
	volatile uint16_t x3830 = 354U;
	int32_t x3831 = 7;
	int32_t x3832 = INT32_MAX;
	uint32_t t63 = 3446U;

	t63 = (x3829|((x3830<<x3831)==x3832));

	if (t63 != 756537662U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3869 = INT8_MIN;
	uint64_t x3870 = UINT64_MAX;
	int32_t x3872 = INT32_MIN;
	int32_t t64 = 93076;

	t64 = (x3869|((x3870<<x3871)==x3872));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3919 = 2;

	t65 = (x3917|((x3918<<x3919)==x3920));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x3937 = -1525;
	uint8_t x3939 = 0U;
	volatile int32_t x3940 = 204207;
	int32_t t66 = 174;

	t66 = (x3937|((x3938<<x3939)==x3940));

	if (t66 != -1525) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3949 = 14U;
	int16_t x3950 = INT16_MAX;
	int8_t x3951 = 1;
	volatile int32_t t67 = 64262182;

	t67 = (x3949|((x3950<<x3951)==x3952));

	if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4077 = -1;
	int32_t x4078 = 3925;
	static uint64_t x4080 = 116408130971420184LLU;

	t68 = (x4077|((x4078<<x4079)==x4080));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x4137 = 744026444942945699LL;
	int32_t x4139 = 1;
	uint32_t x4140 = 12872U;
	int64_t t69 = -337327330042LL;

	t69 = (x4137|((x4138<<x4139)==x4140));

	if (t69 != 744026444942945699LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4213 = UINT64_MAX;
	static volatile int32_t x4215 = 8;
	int8_t x4216 = INT8_MIN;

	t70 = (x4213|((x4214<<x4215)==x4216));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4326 = 74;
	uint16_t x4327 = 4U;
	volatile int8_t x4328 = -1;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x4325|((x4326<<x4327)==x4328));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4365 = UINT32_MAX;
	static uint8_t x4366 = UINT8_MAX;
	volatile int32_t x4367 = 0;
	int32_t x4368 = INT32_MAX;

	t72 = (x4365|((x4366<<x4367)==x4368));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4429 = 48;
	uint32_t x4430 = 23930278U;
	uint32_t x4431 = 14U;
	volatile uint64_t x4432 = 22292043LLU;
	volatile int32_t t73 = -144406008;

	t73 = (x4429|((x4430<<x4431)==x4432));

	if (t73 != 48) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4477 = -1;
	int64_t x4478 = 11966867728602LL;
	uint8_t x4479 = 6U;
	volatile int32_t t74 = 17;

	t74 = (x4477|((x4478<<x4479)==x4480));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4485 = INT16_MAX;
	int16_t x4486 = INT16_MAX;
	uint8_t x4487 = 3U;
	int8_t x4488 = INT8_MIN;
	static volatile int32_t t75 = 0;

	t75 = (x4485|((x4486<<x4487)==x4488));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4505 = INT32_MIN;
	int32_t x4507 = 3;
	int8_t x4508 = 2;
	static volatile int32_t t76 = INT32_MIN;

	t76 = (x4505|((x4506<<x4507)==x4508));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4557 = INT64_MIN;
	int16_t x4558 = 1483;
	int16_t x4559 = 4;
	int64_t t77 = INT64_MIN;

	t77 = (x4557|((x4558<<x4559)==x4560));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4581 = 2403049033147LL;
	volatile uint16_t x4582 = 107U;
	uint16_t x4583 = 1U;
	static uint64_t x4584 = UINT64_MAX;
	static int64_t t78 = 34625947042913841LL;

	t78 = (x4581|((x4582<<x4583)==x4584));

	if (t78 != 2403049033147LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x4789 = -55388154;
	int16_t x4790 = 25;
	volatile uint8_t x4791 = 10U;
	int32_t t79 = -5325;

	t79 = (x4789|((x4790<<x4791)==x4792));

	if (t79 != -55388154) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4837 = INT8_MIN;
	uint8_t x4838 = 97U;
	static int8_t x4839 = 1;
	int16_t x4840 = INT16_MIN;
	volatile int32_t t80 = 31066545;

	t80 = (x4837|((x4838<<x4839)==x4840));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4881 = 14U;
	uint8_t x4882 = UINT8_MAX;
	int8_t x4883 = 1;
	int8_t x4884 = INT8_MIN;
	static volatile int32_t t81 = -11063;

	t81 = (x4881|((x4882<<x4883)==x4884));

	if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x4885 = 2327226U;
	static volatile uint8_t x4886 = 7U;
	uint64_t x4887 = 8LLU;
	uint32_t t82 = 601440U;

	t82 = (x4885|((x4886<<x4887)==x4888));

	if (t82 != 2327226U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4897 = UINT64_MAX;
	static uint16_t x4900 = 14U;
	static uint64_t t83 = UINT64_MAX;

	t83 = (x4897|((x4898<<x4899)==x4900));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4949 = INT16_MIN;
	int8_t x4951 = 2;
	int32_t x4952 = -1240237;

	t84 = (x4949|((x4950<<x4951)==x4952));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4969 = -7272;
	uint64_t x4970 = 71767367112786LLU;
	static int16_t x4971 = 1;
	int32_t t85 = 18472;

	t85 = (x4969|((x4970<<x4971)==x4972));

	if (t85 != -7272) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4993 = -1LL;
	uint32_t x4994 = UINT32_MAX;
	int16_t x4995 = 1;
	static int32_t x4996 = 225572896;
	int64_t t86 = -41777LL;

	t86 = (x4993|((x4994<<x4995)==x4996));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5013 = INT16_MIN;
	volatile uint64_t x5016 = 928742967655LLU;

	t87 = (x5013|((x5014<<x5015)==x5016));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5033 = 101;
	uint8_t x5034 = 95U;

	t88 = (x5033|((x5034<<x5035)==x5036));

	if (t88 != 101) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5105 = 5U;
	uint8_t x5106 = 12U;
	int32_t x5108 = INT32_MIN;
	static int32_t t89 = -3103731;

	t89 = (x5105|((x5106<<x5107)==x5108));

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5249 = 1U;
	volatile uint8_t x5250 = UINT8_MAX;
	uint8_t x5251 = 15U;
	int16_t x5252 = INT16_MIN;
	int32_t t90 = 236484;

	t90 = (x5249|((x5250<<x5251)==x5252));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5285 = 9952766U;
	int32_t x5286 = 114829425;
	int8_t x5287 = 1;
	uint32_t t91 = 46362U;

	t91 = (x5285|((x5286<<x5287)==x5288));

	if (t91 != 9952766U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5315 = 7U;
	uint16_t x5316 = UINT16_MAX;
	int64_t t92 = -1841818335589169LL;

	t92 = (x5313|((x5314<<x5315)==x5316));

	if (t92 != 1692255LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5321 = -716568852;
	static int64_t x5322 = 68110942348257LL;
	static volatile int8_t x5324 = INT8_MIN;
	int32_t t93 = 6499;

	t93 = (x5321|((x5322<<x5323)==x5324));

	if (t93 != -716568852) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5366 = 62U;

	t94 = (x5365|((x5366<<x5367)==x5368));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5521 = INT8_MIN;
	uint16_t x5522 = 178U;
	static volatile int32_t x5523 = 16;
	uint8_t x5524 = 93U;
	int32_t t95 = -800558283;

	t95 = (x5521|((x5522<<x5523)==x5524));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x5529 = 202788U;
	static uint16_t x5530 = 15544U;
	uint8_t x5531 = 6U;
	int8_t x5532 = INT8_MIN;
	static uint32_t t96 = 19U;

	t96 = (x5529|((x5530<<x5531)==x5532));

	if (t96 != 202788U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5561 = -1;
	volatile int32_t x5562 = INT32_MAX;
	uint32_t x5563 = 0U;
	volatile uint8_t x5564 = 102U;
	static volatile int32_t t97 = -10;

	t97 = (x5561|((x5562<<x5563)==x5564));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x5669 = UINT32_MAX;
	int64_t x5672 = INT64_MAX;
	uint32_t t98 = UINT32_MAX;

	t98 = (x5669|((x5670<<x5671)==x5672));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5729 = INT8_MIN;
	static int64_t x5730 = INT64_MAX;
	int8_t x5731 = 0;
	int64_t x5732 = 12613223788LL;
	volatile int32_t t99 = 4;

	t99 = (x5729|((x5730<<x5731)==x5732));

	if (t99 != -128) { NG(); } else { ; }
	
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

