#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x60 = 1;
uint32_t x265 = 1U;
int8_t x266 = 24;
uint8_t x310 = 3U;
int64_t x311 = INT64_MIN;
uint64_t x417 = 4LLU;
uint64_t x485 = UINT64_MAX;
static uint32_t x488 = UINT32_MAX;
static uint64_t t7 = 2360039LLU;
volatile int16_t x636 = 1;
int8_t x779 = INT8_MAX;
uint8_t x847 = UINT8_MAX;
static int16_t x848 = INT16_MAX;
uint8_t x1001 = UINT8_MAX;
uint16_t x1201 = UINT16_MAX;
static volatile uint32_t t19 = 11551U;
uint64_t t21 = 114087833363328324LLU;
volatile uint16_t x1415 = 15519U;
static uint64_t x1443 = UINT64_MAX;
volatile uint64_t x1645 = 15LLU;
int64_t x1646 = 35LL;
uint64_t t25 = 1115LLU;
volatile uint64_t x1677 = 23177310LLU;
int8_t x1679 = INT8_MIN;
int64_t x1680 = 8801229226489014LL;
volatile uint64_t t26 = 123497711LLU;
static volatile uint64_t t28 = 657943817006454784LLU;
static int64_t x1939 = INT64_MIN;
int8_t x2035 = INT8_MIN;
uint32_t t30 = 381756U;
static int16_t x2098 = 0;
int32_t x2100 = -1;
uint16_t x2132 = 3203U;
static int8_t x2233 = INT8_MAX;
int32_t x2236 = INT32_MIN;
uint32_t x2317 = UINT32_MAX;
int16_t x2365 = 142;
volatile uint16_t x2368 = 19798U;
volatile int64_t t35 = 1435779987919895LL;
static uint8_t x2477 = 18U;
static volatile int32_t x2499 = INT32_MIN;
volatile int32_t x2592 = 587;
static volatile int16_t x2641 = INT16_MAX;
volatile int32_t t40 = -195;
volatile int8_t x2680 = INT8_MIN;
uint32_t x2749 = 9373472U;
uint8_t x2823 = 13U;
int32_t t43 = 324;
uint64_t x2868 = 1381534165153016LLU;
volatile int8_t x2889 = INT8_MAX;
volatile uint32_t x2890 = 0U;
int16_t x2945 = INT16_MAX;
static int16_t x3126 = 4;
volatile int8_t x3158 = 10;
int32_t x3339 = INT32_MAX;
static int64_t t53 = 277657716809803196LL;
static uint64_t x3465 = 515257647LLU;
uint8_t x3466 = 56U;
volatile uint64_t t54 = 1LLU;
uint8_t x3493 = 16U;
int64_t x3563 = INT64_MAX;
static uint8_t x3674 = 0U;
int64_t x3785 = 1590564535063LL;
volatile int64_t t58 = -12LL;
static int16_t x3970 = 14;
int16_t x3971 = -82;
uint64_t t60 = 28370711LLU;
volatile int32_t t61 = 3169380;
int8_t x4246 = 16;
volatile uint8_t x4410 = 1U;
volatile uint32_t x4412 = 1735490U;
int32_t x4503 = -1;
volatile uint64_t t66 = 1019LLU;
static volatile uint64_t t67 = 79352587918304976LLU;
uint64_t x4633 = 7732LLU;
static int32_t x4634 = 27;
int16_t x4635 = INT16_MAX;
static uint64_t t69 = 255900009LLU;
int8_t x4674 = 1;
int32_t t70 = -512;
int8_t x4705 = 1;
uint8_t x4722 = 1U;
int16_t x4934 = 0;
int8_t x5025 = INT8_MAX;
uint16_t x5026 = 0U;
int32_t t75 = -3067899;
int32_t x5300 = INT32_MIN;
static uint64_t t78 = 338204162LLU;
static int8_t x5338 = 14;
uint32_t x5339 = 939294795U;
uint32_t x5556 = 308U;
uint64_t t82 = 8850LLU;
volatile int32_t x5751 = INT32_MIN;
int8_t x5862 = 1;
int32_t x5863 = -1;
static volatile int64_t t87 = 42802164719443LL;
uint16_t x5965 = 23694U;
volatile int32_t t88 = 2;
static int16_t x6037 = INT16_MAX;
volatile int16_t x6039 = -9;
static int16_t x6040 = 1;
volatile int64_t t91 = 16380450154275871LL;
uint32_t x6153 = UINT32_MAX;
uint32_t x6417 = 917155U;
static volatile int64_t t93 = 1LL;
uint32_t x6591 = UINT32_MAX;
static volatile uint64_t x6645 = 6466308693896LLU;
static uint16_t x6646 = 6U;
int32_t x6648 = INT32_MIN;
int32_t x6724 = -7566;
static uint64_t x6809 = 7121252LLU;
uint16_t x6818 = 3U;
uint16_t x6819 = UINT16_MAX;


void f0(void) {
	uint64_t x57 = 177897657089581236LLU;
	volatile uint16_t x58 = 1U;
	int8_t x59 = INT8_MIN;
	uint64_t t0 = 1640258LLU;

	t0 = ((x57<<x58)+(x59-x60));

	if (t0 != 355795314179162343LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x77 = 1;
	static uint32_t x78 = 3U;
	static volatile int32_t x79 = 6;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t1 = -3;

	t1 = ((x77<<x78)+(x79-x80));

	if (t1 != -241) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x193 = INT16_MAX;
	uint16_t x194 = 3U;
	uint16_t x195 = UINT16_MAX;
	static uint16_t x196 = UINT16_MAX;
	static volatile int32_t t2 = 0;

	t2 = ((x193<<x194)+(x195-x196));

	if (t2 != 262136) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x267 = 481305690LL;
	int32_t x268 = -1;
	int64_t t3 = -1127585739LL;

	t3 = ((x265<<x266)+(x267-x268));

	if (t3 != 498082907LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x309 = 1921U;
	int8_t x312 = INT8_MIN;
	int64_t t4 = -440398LL;

	t4 = ((x309<<x310)+(x311-x312));

	if (t4 != -9223372036854760312LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x349 = 11616363U;
	uint8_t x350 = 30U;
	int8_t x351 = 0;
	uint8_t x352 = UINT8_MAX;
	volatile uint32_t t5 = 1662199U;

	t5 = ((x349<<x350)+(x351-x352));

	if (t5 != 3221225217U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x418 = 38U;
	int64_t x419 = -1LL;
	uint64_t x420 = UINT64_MAX;
	static volatile uint64_t t6 = 2504105520LLU;

	t6 = ((x417<<x418)+(x419-x420));

	if (t6 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x486 = 43;
	int64_t x487 = -65615118114833013LL;

	t7 = ((x485<<x486)+(x487-x488));

	if (t7 != 18381120155206729100LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x529 = 118162U;
	volatile int8_t x530 = 2;
	int32_t x531 = INT32_MAX;
	int32_t x532 = 1;
	uint32_t t8 = 3U;

	t8 = ((x529<<x530)+(x531-x532));

	if (t8 != 2147956294U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x589 = 44U;
	volatile uint16_t x590 = 3U;
	static uint8_t x591 = 1U;
	int64_t x592 = -3839LL;
	static int64_t t9 = 28790715489051498LL;

	t9 = ((x589<<x590)+(x591-x592));

	if (t9 != 4192LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x633 = 23U;
	volatile int8_t x634 = 0;
	volatile uint16_t x635 = 1U;
	int32_t t10 = -33026;

	t10 = ((x633<<x634)+(x635-x636));

	if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x729 = INT8_MAX;
	uint8_t x730 = 1U;
	static int8_t x731 = 0;
	volatile int16_t x732 = INT16_MIN;
	volatile int32_t t11 = 121;

	t11 = ((x729<<x730)+(x731-x732));

	if (t11 != 33022) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x757 = UINT32_MAX;
	int16_t x758 = 0;
	int8_t x759 = 1;
	uint16_t x760 = 0U;
	static volatile uint32_t t12 = 1U;

	t12 = ((x757<<x758)+(x759-x760));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x777 = UINT64_MAX;
	int16_t x778 = 1;
	uint16_t x780 = UINT16_MAX;
	uint64_t t13 = 675611LLU;

	t13 = ((x777<<x778)+(x779-x780));

	if (t13 != 18446744073709486206LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x845 = INT8_MAX;
	uint16_t x846 = 11U;
	static int32_t t14 = -12912;

	t14 = ((x845<<x846)+(x847-x848));

	if (t14 != 227584) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x917 = 215U;
	int8_t x918 = 9;
	int16_t x919 = INT16_MIN;
	volatile uint8_t x920 = 51U;
	int32_t t15 = 215016;

	t15 = ((x917<<x918)+(x919-x920));

	if (t15 != 77261) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x1002 = 13U;
	int16_t x1003 = 5;
	int64_t x1004 = -1LL;
	volatile int64_t t16 = 517184083834LL;

	t16 = ((x1001<<x1002)+(x1003-x1004));

	if (t16 != 2088966LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1109 = UINT32_MAX;
	uint8_t x1110 = 1U;
	uint16_t x1111 = 560U;
	static uint32_t x1112 = 10912U;
	static uint32_t t17 = 5U;

	t17 = ((x1109<<x1110)+(x1111-x1112));

	if (t17 != 4294956942U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x1189 = UINT16_MAX;
	uint8_t x1190 = 2U;
	int8_t x1191 = INT8_MIN;
	int16_t x1192 = -6404;
	int32_t t18 = -349994860;

	t18 = ((x1189<<x1190)+(x1191-x1192));

	if (t18 != 268416) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1202 = 3LL;
	uint32_t x1203 = UINT32_MAX;
	uint32_t x1204 = 260504842U;

	t19 = ((x1201<<x1202)+(x1203-x1204));

	if (t19 != 4034986733U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1245 = 20U;
	uint8_t x1246 = 12U;
	uint16_t x1247 = 142U;
	uint16_t x1248 = UINT16_MAX;
	static volatile int32_t t20 = -2797961;

	t20 = ((x1245<<x1246)+(x1247-x1248));

	if (t20 != 16527) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1301 = 7996LLU;
	uint16_t x1302 = 1U;
	int64_t x1303 = INT64_MIN;
	uint64_t x1304 = 1681691978LLU;

	t21 = ((x1301<<x1302)+(x1303-x1304));

	if (t21 != 9223372035173099822LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1353 = 826;
	uint64_t x1354 = 17LLU;
	int16_t x1355 = INT16_MIN;
	static uint64_t x1356 = 1LLU;
	volatile uint64_t t22 = 3627752860LLU;

	t22 = ((x1353<<x1354)+(x1355-x1356));

	if (t22 != 108232703LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1413 = INT8_MAX;
	uint32_t x1414 = 2U;
	static int16_t x1416 = 20;
	int32_t t23 = -148077;

	t23 = ((x1413<<x1414)+(x1415-x1416));

	if (t23 != 16007) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1441 = UINT64_MAX;
	int8_t x1442 = 9;
	uint16_t x1444 = 587U;
	uint64_t t24 = 286LLU;

	t24 = ((x1441<<x1442)+(x1443-x1444));

	if (t24 != 18446744073709550516LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1647 = -6013;
	int32_t x1648 = 390225;

	t25 = ((x1645<<x1646)+(x1647-x1648));

	if (t25 != 515395679282LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1678 = 1LLU;

	t26 = ((x1677<<x1678)+(x1679-x1680));

	if (t26 != 18437942844529417094LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1853 = UINT16_MAX;
	uint32_t x1854 = 1U;
	int64_t x1855 = 240063435097902668LL;
	int64_t x1856 = INT64_MAX;
	static volatile int64_t t27 = -11685491547564LL;

	t27 = ((x1853<<x1854)+(x1855-x1856));

	if (t27 != -8983308601756742069LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1893 = UINT64_MAX;
	uint8_t x1894 = 47U;
	int16_t x1895 = -42;
	static int16_t x1896 = INT16_MAX;

	t28 = ((x1893<<x1894)+(x1895-x1896));

	if (t28 != 18446603336221163479LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1937 = UINT64_MAX;
	uint16_t x1938 = 12U;
	int8_t x1940 = INT8_MIN;
	volatile uint64_t t29 = 51LLU;

	t29 = ((x1937<<x1938)+(x1939-x1940));

	if (t29 != 9223372036854771840LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2033 = INT8_MAX;
	int8_t x2034 = 15;
	uint32_t x2036 = 1474U;

	t30 = ((x2033<<x2034)+(x2035-x2036));

	if (t30 != 4159934U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x2097 = 23923389LL;
	static uint8_t x2099 = 4U;
	int64_t t31 = 29502589638LL;

	t31 = ((x2097<<x2098)+(x2099-x2100));

	if (t31 != 23923394LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2129 = 62178128;
	uint16_t x2130 = 5U;
	static uint32_t x2131 = 75U;
	volatile uint32_t t32 = 1204372U;

	t32 = ((x2129<<x2130)+(x2131-x2132));

	if (t32 != 1989696968U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2234 = 16U;
	int64_t x2235 = -1LL;
	volatile int64_t t33 = -1LL;

	t33 = ((x2233<<x2234)+(x2235-x2236));

	if (t33 != 2155806719LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2318 = 3U;
	int16_t x2319 = INT16_MAX;
	uint32_t x2320 = 6899296U;
	uint32_t t34 = 1628338004U;

	t34 = ((x2317<<x2318)+(x2319-x2320));

	if (t34 != 4288100759U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2366 = 5U;
	volatile int64_t x2367 = -1LL;

	t35 = ((x2365<<x2366)+(x2367-x2368));

	if (t35 != -15255LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2478 = 2U;
	int32_t x2479 = -1;
	uint64_t x2480 = 134899LLU;
	uint64_t t36 = 13247LLU;

	t36 = ((x2477<<x2478)+(x2479-x2480));

	if (t36 != 18446744073709416788LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2497 = 6095U;
	uint32_t x2498 = 9U;
	uint64_t x2500 = 3289847977LLU;
	uint64_t t37 = 6930472317776LLU;

	t37 = ((x2497<<x2498)+(x2499-x2500));

	if (t37 != 18446744068275340631LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2589 = 114;
	volatile uint16_t x2590 = 5U;
	int8_t x2591 = -1;
	static int32_t t38 = -70433;

	t38 = ((x2589<<x2590)+(x2591-x2592));

	if (t38 != 3060) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2642 = 1U;
	int16_t x2643 = INT16_MAX;
	int16_t x2644 = INT16_MAX;
	int32_t t39 = -22;

	t39 = ((x2641<<x2642)+(x2643-x2644));

	if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2669 = 3985U;
	int8_t x2670 = 4;
	volatile int8_t x2671 = INT8_MIN;
	int8_t x2672 = INT8_MAX;

	t40 = ((x2669<<x2670)+(x2671-x2672));

	if (t40 != 63505) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2677 = UINT8_MAX;
	int8_t x2678 = 1;
	static int16_t x2679 = -125;
	static volatile int32_t t41 = -9212;

	t41 = ((x2677<<x2678)+(x2679-x2680));

	if (t41 != 513) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2750 = 8U;
	int8_t x2751 = INT8_MIN;
	int16_t x2752 = -1;
	volatile uint32_t t42 = 4408698U;

	t42 = ((x2749<<x2750)+(x2751-x2752));

	if (t42 != 2399608705U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2821 = 1;
	int8_t x2822 = 0;
	volatile uint8_t x2824 = UINT8_MAX;

	t43 = ((x2821<<x2822)+(x2823-x2824));

	if (t43 != -241) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2865 = 5911LLU;
	uint16_t x2866 = 11U;
	int32_t x2867 = -202091149;
	static uint64_t t44 = 15184141829044806LLU;

	t44 = ((x2865<<x2866)+(x2867-x2868));

	if (t44 != 18445362539354413179LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2891 = 7U;
	uint16_t x2892 = 1U;
	static int32_t t45 = -31741;

	t45 = ((x2889<<x2890)+(x2891-x2892));

	if (t45 != 133) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2901 = 3135222911281117LLU;
	uint8_t x2902 = 2U;
	int32_t x2903 = 432135164;
	uint8_t x2904 = 104U;
	uint64_t t46 = 2274732379067LLU;

	t46 = ((x2901<<x2902)+(x2903-x2904));

	if (t46 != 12540892077259528LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2929 = 4U;
	int8_t x2930 = 20;
	static volatile uint8_t x2931 = UINT8_MAX;
	static int16_t x2932 = -1;
	volatile int32_t t47 = -63221267;

	t47 = ((x2929<<x2930)+(x2931-x2932));

	if (t47 != 4194560) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x2946 = 1U;
	int32_t x2947 = INT32_MIN;
	int32_t x2948 = INT32_MIN;
	static int32_t t48 = 54;

	t48 = ((x2945<<x2946)+(x2947-x2948));

	if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3125 = 33U;
	static uint16_t x3127 = 25949U;
	int8_t x3128 = -1;
	int32_t t49 = 0;

	t49 = ((x3125<<x3126)+(x3127-x3128));

	if (t49 != 26478) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3137 = 3U;
	volatile int8_t x3138 = 1;
	uint32_t x3139 = UINT32_MAX;
	volatile int32_t x3140 = INT32_MAX;
	static uint32_t t50 = 2366688U;

	t50 = ((x3137<<x3138)+(x3139-x3140));

	if (t50 != 2147483654U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x3157 = 69686511U;
	volatile uint32_t x3159 = UINT32_MAX;
	int32_t x3160 = -23499489;
	uint32_t t51 = 15U;

	t51 = ((x3157<<x3158)+(x3159-x3160));

	if (t51 != 2663010016U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3337 = 31U;
	uint16_t x3338 = 1U;
	int16_t x3340 = INT16_MAX;
	volatile int32_t t52 = -6869;

	t52 = ((x3337<<x3338)+(x3339-x3340));

	if (t52 != 2147450942) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3389 = 0LL;
	volatile uint16_t x3390 = 22U;
	int64_t x3391 = INT64_MIN;
	int8_t x3392 = INT8_MIN;

	t53 = ((x3389<<x3390)+(x3391-x3392));

	if (t53 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3467 = 364;
	int16_t x3468 = 14;

	t54 = ((x3465<<x3466)+(x3467-x3468));

	if (t54 != 3386706919782613342LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x3494 = 8LLU;
	int16_t x3495 = 621;
	static int32_t x3496 = -6;
	static volatile int32_t t55 = 518;

	t55 = ((x3493<<x3494)+(x3495-x3496));

	if (t55 != 4723) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3561 = 3U;
	volatile uint16_t x3562 = 0U;
	static uint32_t x3564 = 5825U;
	volatile int64_t t56 = -26491426610428129LL;

	t56 = ((x3561<<x3562)+(x3563-x3564));

	if (t56 != 9223372036854769985LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3673 = 109404;
	uint64_t x3675 = 525LLU;
	int8_t x3676 = 30;
	volatile uint64_t t57 = 2707298092188791035LLU;

	t57 = ((x3673<<x3674)+(x3675-x3676));

	if (t57 != 109899LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3786 = 1;
	uint16_t x3787 = 0U;
	volatile uint16_t x3788 = 2U;

	t58 = ((x3785<<x3786)+(x3787-x3788));

	if (t58 != 3181129070124LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3873 = INT16_MAX;
	int8_t x3874 = 0;
	static uint32_t x3875 = UINT32_MAX;
	static uint32_t x3876 = 87393078U;
	static uint32_t t59 = 405749U;

	t59 = ((x3873<<x3874)+(x3875-x3876));

	if (t59 != 4207606984U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3969 = 53291410401208548LLU;
	uint32_t x3972 = 11925U;

	t60 = ((x3969<<x3970)+(x3971-x3972));

	if (t60 != 6129496553346879769LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4029 = 2086;
	volatile uint8_t x4030 = 17U;
	int32_t x4031 = INT32_MIN;
	volatile int8_t x4032 = -1;

	t61 = ((x4029<<x4030)+(x4031-x4032));

	if (t61 != -1874067455) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x4245 = 0LL;
	int64_t x4247 = 4946LL;
	int32_t x4248 = INT32_MAX;
	volatile int64_t t62 = -71283LL;

	t62 = ((x4245<<x4246)+(x4247-x4248));

	if (t62 != -2147478701LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4349 = UINT8_MAX;
	static volatile uint8_t x4350 = 18U;
	int8_t x4351 = -1;
	static uint32_t x4352 = 1649062739U;
	uint32_t t63 = 60U;

	t63 = ((x4349<<x4350)+(x4351-x4352));

	if (t63 != 2712751276U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4409 = 5243LLU;
	uint8_t x4411 = 6U;
	uint64_t t64 = 108277874834LLU;

	t64 = ((x4409<<x4410)+(x4411-x4412));

	if (t64 != 4293242298LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4477 = 3U;
	static int64_t x4478 = 10LL;
	uint32_t x4479 = UINT32_MAX;
	int64_t x4480 = INT64_MAX;
	static volatile int64_t t65 = -2567732763086265LL;

	t65 = ((x4477<<x4478)+(x4479-x4480));

	if (t65 != -9223372032559805440LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4501 = 83935510457869989LLU;
	int8_t x4502 = 0;
	int32_t x4504 = INT32_MAX;

	t66 = ((x4501<<x4502)+(x4503-x4504));

	if (t66 != 83935508310386341LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4537 = 9U;
	static int8_t x4538 = 24;
	uint64_t x4539 = 867692427840970942LLU;
	int8_t x4540 = INT8_MIN;

	t67 = ((x4537<<x4538)+(x4539-x4540));

	if (t67 != 867692427991966014LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4601 = 0;
	uint8_t x4602 = 1U;
	int64_t x4603 = 284861272LL;
	uint64_t x4604 = UINT64_MAX;
	static uint64_t t68 = 2775112825778590729LLU;

	t68 = ((x4601<<x4602)+(x4603-x4604));

	if (t68 != 284861273LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4636 = INT64_MAX;

	t69 = ((x4633<<x4634)+(x4635-x4636));

	if (t69 != 9223373074626281472LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4673 = UINT16_MAX;
	volatile uint8_t x4675 = 61U;
	int16_t x4676 = INT16_MIN;

	t70 = ((x4673<<x4674)+(x4675-x4676));

	if (t70 != 163899) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4706 = 22;
	volatile uint8_t x4707 = 5U;
	int16_t x4708 = 7;
	int32_t t71 = -4092852;

	t71 = ((x4705<<x4706)+(x4707-x4708));

	if (t71 != 4194302) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4721 = 12U;
	int64_t x4723 = -1LL;
	int32_t x4724 = INT32_MIN;
	volatile int64_t t72 = -349961170355704269LL;

	t72 = ((x4721<<x4722)+(x4723-x4724));

	if (t72 != 2147483671LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4933 = 14827;
	int16_t x4935 = -21;
	volatile int64_t x4936 = -1LL;
	int64_t t73 = 255425153121LL;

	t73 = ((x4933<<x4934)+(x4935-x4936));

	if (t73 != 14807LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x5027 = INT16_MAX;
	uint16_t x5028 = 248U;
	int32_t t74 = 1230914;

	t74 = ((x5025<<x5026)+(x5027-x5028));

	if (t74 != 32646) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5125 = 0U;
	volatile int8_t x5126 = 1;
	volatile uint8_t x5127 = UINT8_MAX;
	int16_t x5128 = INT16_MIN;

	t75 = ((x5125<<x5126)+(x5127-x5128));

	if (t75 != 33023) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5213 = 732770LLU;
	static uint32_t x5214 = 8U;
	static int8_t x5215 = 25;
	static volatile uint16_t x5216 = UINT16_MAX;
	volatile uint64_t t76 = 1546488LLU;

	t76 = ((x5213<<x5214)+(x5215-x5216));

	if (t76 != 187523610LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5217 = INT8_MAX;
	uint16_t x5218 = 2U;
	static volatile int8_t x5219 = -1;
	static volatile uint8_t x5220 = 4U;
	int32_t t77 = 32217;

	t77 = ((x5217<<x5218)+(x5219-x5220));

	if (t77 != 503) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5297 = 880287;
	static uint16_t x5298 = 1U;
	uint64_t x5299 = 347883137494LLU;

	t78 = ((x5297<<x5298)+(x5299-x5300));

	if (t78 != 350032381716LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x5337 = 0;
	uint64_t x5340 = 76424802491353LLU;
	static volatile uint64_t t79 = 106300643435158192LLU;

	t79 = ((x5337<<x5338)+(x5339-x5340));

	if (t79 != 18446667649846355058LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5441 = UINT64_MAX;
	uint32_t x5442 = 5U;
	static int8_t x5443 = 39;
	int16_t x5444 = INT16_MIN;
	uint64_t t80 = 234828810LLU;

	t80 = ((x5441<<x5442)+(x5443-x5444));

	if (t80 != 32775LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5553 = UINT16_MAX;
	static int16_t x5554 = 3;
	static int16_t x5555 = INT16_MIN;
	volatile uint32_t t81 = 96322655U;

	t81 = ((x5553<<x5554)+(x5555-x5556));

	if (t81 != 491204U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5689 = 166573LLU;
	uint8_t x5690 = 1U;
	int16_t x5691 = INT16_MAX;
	int16_t x5692 = INT16_MIN;

	t82 = ((x5689<<x5690)+(x5691-x5692));

	if (t82 != 398681LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x5697 = 64160690502511LL;
	uint8_t x5698 = 11U;
	volatile uint32_t x5699 = 6719217U;
	int32_t x5700 = INT32_MIN;
	volatile int64_t t83 = -2108777073115754353LL;

	t83 = ((x5697<<x5698)+(x5699-x5700));

	if (t83 != 131401096303345393LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5749 = UINT8_MAX;
	uint8_t x5750 = 22U;
	int64_t x5752 = 2364538LL;
	int64_t t84 = 137430624401388LL;

	t84 = ((x5749<<x5750)+(x5751-x5752));

	if (t84 != -1080300666LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5757 = 0;
	volatile int8_t x5758 = 31;
	static volatile int64_t x5759 = INT64_MIN;
	int64_t x5760 = -1LL;
	volatile int64_t t85 = 7371LL;

	t85 = ((x5757<<x5758)+(x5759-x5760));

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5801 = 1016811156U;
	int64_t x5802 = 12LL;
	volatile uint32_t x5803 = 1648509917U;
	uint32_t x5804 = 328509U;
	static uint32_t t86 = 11U;

	t86 = ((x5801<<x5802)+(x5803-x5804));

	if (t86 != 388399264U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5861 = 2U;
	int64_t x5864 = INT64_MAX;

	t87 = ((x5861<<x5862)+(x5863-x5864));

	if (t87 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5966 = 1;
	int8_t x5967 = -1;
	uint16_t x5968 = UINT16_MAX;

	t88 = ((x5965<<x5966)+(x5967-x5968));

	if (t88 != -18148) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x6038 = 11U;
	static int32_t t89 = 0;

	t89 = ((x6037<<x6038)+(x6039-x6040));

	if (t89 != 67106806) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6069 = 1357U;
	uint8_t x6070 = 0U;
	static uint64_t x6071 = UINT64_MAX;
	volatile int16_t x6072 = INT16_MIN;
	uint64_t t90 = 1315391951109435LLU;

	t90 = ((x6069<<x6070)+(x6071-x6072));

	if (t90 != 34124LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6089 = 1366U;
	static uint16_t x6090 = 7U;
	int64_t x6091 = -4LL;
	static int16_t x6092 = INT16_MIN;

	t91 = ((x6089<<x6090)+(x6091-x6092));

	if (t91 != 207612LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x6154 = 1;
	static volatile uint16_t x6155 = 50U;
	int64_t x6156 = -1LL;
	static volatile int64_t t92 = 65865327LL;

	t92 = ((x6153<<x6154)+(x6155-x6156));

	if (t92 != 4294967345LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6418 = 4U;
	static int64_t x6419 = INT64_MIN;
	int32_t x6420 = -96817213;

	t93 = ((x6417<<x6418)+(x6419-x6420));

	if (t93 != -9223372036743284115LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6589 = 0;
	uint8_t x6590 = 23U;
	uint64_t x6592 = 5LLU;
	uint64_t t94 = 4864674843LLU;

	t94 = ((x6589<<x6590)+(x6591-x6592));

	if (t94 != 4294967290LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x6647 = -1;
	volatile uint64_t t95 = 306901982835116060LLU;

	t95 = ((x6645<<x6646)+(x6647-x6648));

	if (t95 != 413845903892991LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6681 = 32U;
	int8_t x6682 = 15;
	uint16_t x6683 = UINT16_MAX;
	uint64_t x6684 = 2583LLU;
	uint64_t t96 = 1010339742LLU;

	t96 = ((x6681<<x6682)+(x6683-x6684));

	if (t96 != 1111528LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6721 = 15;
	static int8_t x6722 = 0;
	int16_t x6723 = INT16_MIN;
	int32_t t97 = 67272;

	t97 = ((x6721<<x6722)+(x6723-x6724));

	if (t97 != -25187) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6810 = 17;
	static uint8_t x6811 = UINT8_MAX;
	volatile uint64_t x6812 = UINT64_MAX;
	uint64_t t98 = 2166374448695157LLU;

	t98 = ((x6809<<x6810)+(x6811-x6812));

	if (t98 != 933396742400LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6817 = INT8_MAX;
	int32_t x6820 = INT32_MAX;
	volatile int32_t t99 = 105350;

	t99 = ((x6817<<x6818)+(x6819-x6820));

	if (t99 != -2147417096) { NG(); } else { ; }
	
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

