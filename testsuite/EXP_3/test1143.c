#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x18 = INT16_MAX;
uint16_t x51 = 548U;
int16_t x66 = INT16_MIN;
int32_t t2 = -110;
int64_t x302 = -1656LL;
int8_t x303 = INT8_MAX;
volatile int8_t x304 = 1;
static int64_t x339 = INT64_MAX;
int8_t x380 = 10;
int32_t t6 = 24;
uint16_t x471 = 239U;
int16_t x472 = 16;
uint8_t x584 = 2U;
volatile int32_t t12 = 0;
int16_t x635 = INT16_MAX;
uint8_t x639 = UINT8_MAX;
int8_t x882 = INT8_MIN;
uint64_t x1000 = 1LLU;
int64_t x1069 = -1LL;
volatile uint64_t x1071 = 80LLU;
uint8_t x1117 = 63U;
static int32_t x1137 = INT32_MIN;
int32_t x1142 = INT32_MAX;
static int32_t x1143 = 16256092;
uint32_t x1261 = 63828U;
static int64_t x1287 = 14568316037LL;
uint8_t x1339 = UINT8_MAX;
static int32_t x1413 = INT32_MAX;
int8_t x1415 = INT8_MAX;
uint16_t x1473 = UINT16_MAX;
volatile uint8_t x1476 = 1U;
uint8_t x1519 = 62U;
int32_t t28 = 7587290;
uint16_t x1671 = UINT16_MAX;
uint8_t x1680 = 2U;
int16_t x1707 = INT16_MAX;
static int32_t t32 = 1001466165;
int16_t x1806 = INT16_MIN;
int32_t t34 = 1949;
volatile uint8_t x2169 = UINT8_MAX;
int64_t x2260 = 0LL;
int32_t t39 = 482579;
int32_t x2369 = -15855;
int64_t x2370 = INT64_MIN;
volatile int32_t t40 = 0;
static int32_t x2465 = INT32_MIN;
int16_t x2467 = INT16_MAX;
uint64_t x2511 = 5712590661LLU;
int32_t x2512 = 0;
static uint64_t x2517 = 582727529023093600LLU;
static int16_t x2518 = INT16_MIN;
uint16_t x2520 = 1U;
volatile int64_t t43 = -351469LL;
int64_t x2682 = INT64_MIN;
uint64_t t46 = 1955337847LLU;
uint64_t x2733 = 16997880151546LLU;
int8_t x2943 = INT8_MAX;
uint8_t x2945 = 50U;
int8_t x3147 = INT8_MAX;
uint8_t x3148 = 3U;
volatile int32_t t53 = -20917689;
uint8_t x3203 = 11U;
int32_t x3209 = INT32_MIN;
int8_t x3212 = 0;
volatile int32_t t55 = 516788;
static uint8_t x3268 = 1U;
static volatile int64_t x3338 = INT64_MAX;
uint8_t x3340 = 3U;
int8_t x3359 = INT8_MAX;
volatile uint64_t x3556 = 0LLU;
volatile int32_t t62 = 186229;
uint32_t x3757 = UINT32_MAX;
int64_t x3758 = INT64_MAX;
uint8_t x3760 = 1U;
int16_t x3763 = INT16_MAX;
uint16_t x3842 = 3U;
int8_t x4005 = INT8_MIN;
uint32_t x4006 = 193U;
uint16_t x4017 = 330U;
static int8_t x4061 = -12;
static uint64_t x4064 = 33LLU;
int32_t x4102 = INT32_MAX;
uint32_t x4164 = 14U;
volatile uint32_t x4201 = UINT32_MAX;
uint16_t x4246 = 1U;
static volatile uint32_t x4278 = 0U;
int8_t x4485 = 1;
static uint8_t x4512 = 14U;
int8_t x4573 = INT8_MIN;
volatile int32_t t83 = -34612;
int8_t x5040 = 0;
int64_t x5064 = 19LL;
int64_t x5066 = INT64_MAX;
static uint16_t x5273 = 1055U;
static volatile uint32_t x5275 = UINT32_MAX;
volatile uint8_t x5276 = 2U;
int8_t x5313 = -1;
int64_t x5314 = INT64_MIN;
int8_t x5320 = 6;
int32_t t93 = 2349;
uint8_t x5490 = UINT8_MAX;
static uint64_t x5636 = 2LLU;


void f0(void) {
	static volatile uint32_t x17 = 2U;
	uint64_t x19 = 274827161225155724LLU;
	int8_t x20 = 29;
	volatile uint64_t t0 = 155747781827201LLU;

	t0 = ((x17<=x18)|(x19>>x20));

	if (t0 != 511905479LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x49 = 95971458119450482LLU;
	uint8_t x50 = UINT8_MAX;
	volatile uint8_t x52 = 1U;
	volatile int32_t t1 = 16753223;

	t1 = ((x49<=x50)|(x51>>x52));

	if (t1 != 274) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x65 = -1LL;
	int16_t x67 = 779;
	uint16_t x68 = 0U;

	t2 = ((x65<=x66)|(x67>>x68));

	if (t2 != 779) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x301 = INT32_MAX;
	int32_t t3 = 1873449;

	t3 = ((x301<=x302)|(x303>>x304));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = 8U;
	static volatile uint16_t x308 = 0U;
	volatile int32_t t4 = 0;

	t4 = ((x305<=x306)|(x307>>x308));

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	static int16_t x340 = 2;
	int64_t t5 = -4887962LL;

	t5 = ((x337<=x338)|(x339>>x340));

	if (t5 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x377 = INT16_MIN;
	static uint8_t x378 = UINT8_MAX;
	volatile uint16_t x379 = UINT16_MAX;

	t6 = ((x377<=x378)|(x379>>x380));

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x381 = 425315U;
	volatile int16_t x382 = -1;
	static volatile uint64_t x383 = UINT64_MAX;
	static int16_t x384 = 1;
	volatile uint64_t t7 = 1150601555091009LLU;

	t7 = ((x381<=x382)|(x383>>x384));

	if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x433 = 0LL;
	static int64_t x434 = INT64_MIN;
	static int32_t x435 = 82620983;
	uint8_t x436 = 1U;
	volatile int32_t t8 = -4302631;

	t8 = ((x433<=x434)|(x435>>x436));

	if (t8 != 41310491) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x469 = 231051;
	int32_t x470 = INT32_MIN;
	int32_t t9 = 142;

	t9 = ((x469<=x470)|(x471>>x472));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x581 = 0;
	int8_t x582 = 13;
	uint8_t x583 = 1U;
	volatile int32_t t10 = 13;

	t10 = ((x581<=x582)|(x583>>x584));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x609 = -1;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MAX;
	static int8_t x612 = 1;
	int32_t t11 = -817;

	t11 = ((x609<=x610)|(x611>>x612));

	if (t11 != 1073741823) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x621 = 15;
	int16_t x622 = INT16_MIN;
	uint16_t x623 = UINT16_MAX;
	uint64_t x624 = 10LLU;

	t12 = ((x621<=x622)|(x623>>x624));

	if (t12 != 63) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x633 = INT8_MAX;
	static uint32_t x634 = 7U;
	int8_t x636 = 0;
	static int32_t t13 = -7819581;

	t13 = ((x633<=x634)|(x635>>x636));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x637 = 856;
	int16_t x638 = INT16_MAX;
	static volatile uint8_t x640 = 25U;
	static volatile int32_t t14 = 16232582;

	t14 = ((x637<=x638)|(x639>>x640));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x881 = INT16_MIN;
	volatile uint8_t x883 = UINT8_MAX;
	uint16_t x884 = 0U;
	volatile int32_t t15 = -4711;

	t15 = ((x881<=x882)|(x883>>x884));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x997 = UINT16_MAX;
	int8_t x998 = INT8_MAX;
	uint8_t x999 = 16U;
	volatile int32_t t16 = 63;

	t16 = ((x997<=x998)|(x999>>x1000));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1070 = -947;
	uint16_t x1072 = 2U;
	volatile uint64_t t17 = 63010900768050LLU;

	t17 = ((x1069<=x1070)|(x1071>>x1072));

	if (t17 != 20LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1118 = INT16_MIN;
	volatile int64_t x1119 = INT64_MAX;
	static uint8_t x1120 = 0U;
	int64_t t18 = INT64_MAX;

	t18 = ((x1117<=x1118)|(x1119>>x1120));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1138 = INT16_MAX;
	uint32_t x1139 = UINT32_MAX;
	volatile int8_t x1140 = 1;
	volatile uint32_t t19 = 15096043U;

	t19 = ((x1137<=x1138)|(x1139>>x1140));

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1141 = -345;
	static volatile int8_t x1144 = 0;
	static int32_t t20 = -726;

	t20 = ((x1141<=x1142)|(x1143>>x1144));

	if (t20 != 16256093) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x1169 = INT16_MAX;
	int8_t x1170 = 4;
	static int64_t x1171 = INT64_MAX;
	volatile uint16_t x1172 = 1U;
	int64_t t21 = 644927882266LL;

	t21 = ((x1169<=x1170)|(x1171>>x1172));

	if (t21 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1253 = UINT32_MAX;
	int8_t x1254 = INT8_MIN;
	static int64_t x1255 = 33369411829912516LL;
	int16_t x1256 = 8;
	static volatile int64_t t22 = 1951728716532032215LL;

	t22 = ((x1253<=x1254)|(x1255>>x1256));

	if (t22 != 130349264960595LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1262 = 58;
	uint8_t x1263 = 0U;
	int8_t x1264 = 1;
	static int32_t t23 = 3609804;

	t23 = ((x1261<=x1262)|(x1263>>x1264));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1285 = INT32_MAX;
	uint32_t x1286 = UINT32_MAX;
	static uint8_t x1288 = 36U;
	static volatile int64_t t24 = 0LL;

	t24 = ((x1285<=x1286)|(x1287>>x1288));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1337 = INT32_MIN;
	volatile int64_t x1338 = INT64_MAX;
	static uint8_t x1340 = 7U;
	volatile int32_t t25 = 369072;

	t25 = ((x1337<=x1338)|(x1339>>x1340));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1414 = 5369434234LL;
	int8_t x1416 = 31;
	int32_t t26 = 199947366;

	t26 = ((x1413<=x1414)|(x1415>>x1416));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1474 = INT8_MAX;
	uint64_t x1475 = 227167LLU;
	uint64_t t27 = 0LLU;

	t27 = ((x1473<=x1474)|(x1475>>x1476));

	if (t27 != 113583LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1517 = INT32_MIN;
	uint16_t x1518 = 255U;
	volatile uint32_t x1520 = 1U;

	t28 = ((x1517<=x1518)|(x1519>>x1520));

	if (t28 != 31) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1669 = INT32_MIN;
	uint8_t x1670 = UINT8_MAX;
	static uint32_t x1672 = 1U;
	static int32_t t29 = -507255;

	t29 = ((x1669<=x1670)|(x1671>>x1672));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1673 = INT32_MAX;
	static uint64_t x1674 = 104117330526LLU;
	uint32_t x1675 = 182U;
	uint8_t x1676 = 10U;
	static uint32_t t30 = 3331U;

	t30 = ((x1673<=x1674)|(x1675>>x1676));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1677 = -2442LL;
	uint64_t x1678 = 1224608LLU;
	int16_t x1679 = 2051;
	int32_t t31 = -22;

	t31 = ((x1677<=x1678)|(x1679>>x1680));

	if (t31 != 512) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1705 = 1;
	uint64_t x1706 = 345LLU;
	uint8_t x1708 = 10U;

	t32 = ((x1705<=x1706)|(x1707>>x1708));

	if (t32 != 31) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1761 = INT32_MAX;
	static uint16_t x1762 = UINT16_MAX;
	uint32_t x1763 = 3991849U;
	int16_t x1764 = 14;
	uint32_t t33 = 967U;

	t33 = ((x1761<=x1762)|(x1763>>x1764));

	if (t33 != 243U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1805 = INT32_MIN;
	int16_t x1807 = INT16_MAX;
	uint16_t x1808 = 9U;

	t34 = ((x1805<=x1806)|(x1807>>x1808));

	if (t34 != 63) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2065 = -1;
	int16_t x2066 = INT16_MIN;
	int32_t x2067 = INT32_MAX;
	uint8_t x2068 = 1U;
	int32_t t35 = -560453546;

	t35 = ((x2065<=x2066)|(x2067>>x2068));

	if (t35 != 1073741823) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2097 = UINT16_MAX;
	static int32_t x2098 = 338050785;
	uint64_t x2099 = UINT64_MAX;
	uint64_t x2100 = 0LLU;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x2097<=x2098)|(x2099>>x2100));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2170 = 14U;
	static uint64_t x2171 = 124871LLU;
	uint16_t x2172 = 35U;
	static volatile uint64_t t37 = 145LLU;

	t37 = ((x2169<=x2170)|(x2171>>x2172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2257 = -1;
	int16_t x2258 = 15;
	static uint8_t x2259 = UINT8_MAX;
	int32_t t38 = -144;

	t38 = ((x2257<=x2258)|(x2259>>x2260));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2273 = 112U;
	int8_t x2274 = 8;
	static uint8_t x2275 = 2U;
	uint64_t x2276 = 0LLU;

	t39 = ((x2273<=x2274)|(x2275>>x2276));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2371 = UINT8_MAX;
	volatile uint8_t x2372 = 13U;

	t40 = ((x2369<=x2370)|(x2371>>x2372));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x2466 = 3U;
	uint16_t x2468 = 1U;
	volatile int32_t t41 = 944103878;

	t41 = ((x2465<=x2466)|(x2467>>x2468));

	if (t41 != 16383) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2509 = UINT64_MAX;
	int16_t x2510 = -1;
	uint64_t t42 = 3938316617440LLU;

	t42 = ((x2509<=x2510)|(x2511>>x2512));

	if (t42 != 5712590661LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2519 = 2LL;

	t43 = ((x2517<=x2518)|(x2519>>x2520));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2581 = 3;
	int8_t x2582 = -1;
	uint32_t x2583 = 593704U;
	uint8_t x2584 = 8U;
	static volatile uint32_t t44 = 801U;

	t44 = ((x2581<=x2582)|(x2583>>x2584));

	if (t44 != 2319U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2605 = UINT64_MAX;
	volatile int32_t x2606 = -27145640;
	static uint8_t x2607 = UINT8_MAX;
	int8_t x2608 = 0;
	static volatile int32_t t45 = -7;

	t45 = ((x2605<=x2606)|(x2607>>x2608));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2681 = INT8_MAX;
	uint64_t x2683 = 0LLU;
	uint8_t x2684 = 3U;

	t46 = ((x2681<=x2682)|(x2683>>x2684));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2725 = INT64_MAX;
	int16_t x2726 = 1;
	uint64_t x2727 = 752020893588LLU;
	int16_t x2728 = 1;
	static uint64_t t47 = 85LLU;

	t47 = ((x2725<=x2726)|(x2727>>x2728));

	if (t47 != 376010446794LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2734 = INT16_MIN;
	volatile uint8_t x2735 = 90U;
	uint8_t x2736 = 26U;
	volatile int32_t t48 = -31596288;

	t48 = ((x2733<=x2734)|(x2735>>x2736));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2741 = 1U;
	static uint64_t x2742 = 4701424494384400LLU;
	int8_t x2743 = 0;
	uint64_t x2744 = 3LLU;
	static int32_t t49 = 0;

	t49 = ((x2741<=x2742)|(x2743>>x2744));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x2941 = 62U;
	static int64_t x2942 = 248LL;
	volatile uint16_t x2944 = 9U;
	volatile int32_t t50 = 19;

	t50 = ((x2941<=x2942)|(x2943>>x2944));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2946 = 748591161;
	int64_t x2947 = 0LL;
	uint8_t x2948 = 42U;
	volatile int64_t t51 = 10588762051477917LL;

	t51 = ((x2945<=x2946)|(x2947>>x2948));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x3089 = 3978U;
	volatile int16_t x3090 = 3;
	static volatile uint8_t x3091 = UINT8_MAX;
	uint8_t x3092 = 3U;
	volatile int32_t t52 = 31835;

	t52 = ((x3089<=x3090)|(x3091>>x3092));

	if (t52 != 31) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3145 = INT32_MAX;
	uint32_t x3146 = 172U;

	t53 = ((x3145<=x3146)|(x3147>>x3148));

	if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x3201 = -1;
	uint8_t x3202 = 80U;
	uint32_t x3204 = 1U;
	volatile int32_t t54 = 14813;

	t54 = ((x3201<=x3202)|(x3203>>x3204));

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3210 = INT8_MIN;
	static volatile uint16_t x3211 = 51U;

	t55 = ((x3209<=x3210)|(x3211>>x3212));

	if (t55 != 51) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3221 = UINT32_MAX;
	static volatile int32_t x3222 = -978057;
	uint64_t x3223 = UINT64_MAX;
	static uint16_t x3224 = 13U;
	volatile uint64_t t56 = 94LLU;

	t56 = ((x3221<=x3222)|(x3223>>x3224));

	if (t56 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3265 = -1;
	int8_t x3266 = INT8_MIN;
	int64_t x3267 = INT64_MAX;
	volatile int64_t t57 = 4510398509070644LL;

	t57 = ((x3265<=x3266)|(x3267>>x3268));

	if (t57 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3317 = INT64_MIN;
	static int16_t x3318 = INT16_MAX;
	volatile uint8_t x3319 = 44U;
	uint16_t x3320 = 13U;
	volatile int32_t t58 = 7478882;

	t58 = ((x3317<=x3318)|(x3319>>x3320));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3333 = 1;
	uint16_t x3334 = UINT16_MAX;
	volatile int32_t x3335 = INT32_MAX;
	int8_t x3336 = 1;
	volatile int32_t t59 = -3992382;

	t59 = ((x3333<=x3334)|(x3335>>x3336));

	if (t59 != 1073741823) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3337 = -1;
	volatile int32_t x3339 = 14;
	int32_t t60 = 635;

	t60 = ((x3337<=x3338)|(x3339>>x3340));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3357 = 0;
	int64_t x3358 = INT64_MAX;
	uint8_t x3360 = 7U;
	static volatile int32_t t61 = 10;

	t61 = ((x3357<=x3358)|(x3359>>x3360));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3553 = INT16_MAX;
	static uint8_t x3554 = 23U;
	static volatile uint16_t x3555 = UINT16_MAX;

	t62 = ((x3553<=x3554)|(x3555>>x3556));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3557 = 1;
	uint64_t x3558 = 10864847122LLU;
	uint32_t x3559 = UINT32_MAX;
	volatile uint32_t x3560 = 0U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x3557<=x3558)|(x3559>>x3560));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3581 = INT32_MIN;
	int64_t x3582 = INT64_MIN;
	volatile uint64_t x3583 = UINT64_MAX;
	uint16_t x3584 = 22U;
	static uint64_t t64 = 38520487328LLU;

	t64 = ((x3581<=x3582)|(x3583>>x3584));

	if (t64 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3629 = INT64_MAX;
	int16_t x3630 = INT16_MIN;
	uint64_t x3631 = 48LLU;
	static volatile int64_t x3632 = 2LL;
	uint64_t t65 = 1096807506148928LLU;

	t65 = ((x3629<=x3630)|(x3631>>x3632));

	if (t65 != 12LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3633 = -709;
	uint32_t x3634 = UINT32_MAX;
	static uint8_t x3635 = 14U;
	uint8_t x3636 = 11U;
	volatile int32_t t66 = 28410;

	t66 = ((x3633<=x3634)|(x3635>>x3636));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3759 = UINT16_MAX;
	int32_t t67 = -33916;

	t67 = ((x3757<=x3758)|(x3759>>x3760));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3761 = INT64_MIN;
	int64_t x3762 = -5656087125486LL;
	uint16_t x3764 = 8U;
	volatile int32_t t68 = -1613504;

	t68 = ((x3761<=x3762)|(x3763>>x3764));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3841 = 141790572871LL;
	volatile uint16_t x3843 = UINT16_MAX;
	uint64_t x3844 = 2LLU;
	volatile int32_t t69 = -652113;

	t69 = ((x3841<=x3842)|(x3843>>x3844));

	if (t69 != 16383) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3845 = INT64_MAX;
	static volatile int64_t x3846 = 20353204862613311LL;
	volatile uint8_t x3847 = 21U;
	int32_t x3848 = 0;
	int32_t t70 = 6137136;

	t70 = ((x3845<=x3846)|(x3847>>x3848));

	if (t70 != 21) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3849 = INT64_MAX;
	int16_t x3850 = INT16_MAX;
	static uint16_t x3851 = 1U;
	uint8_t x3852 = 20U;
	volatile int32_t t71 = 889606198;

	t71 = ((x3849<=x3850)|(x3851>>x3852));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x4007 = 22U;
	uint8_t x4008 = 9U;
	int32_t t72 = -296336707;

	t72 = ((x4005<=x4006)|(x4007>>x4008));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4018 = 24U;
	static int32_t x4019 = INT32_MAX;
	int8_t x4020 = 2;
	volatile int32_t t73 = -3;

	t73 = ((x4017<=x4018)|(x4019>>x4020));

	if (t73 != 536870911) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4062 = 44;
	uint64_t x4063 = UINT64_MAX;
	static volatile uint64_t t74 = 150LLU;

	t74 = ((x4061<=x4062)|(x4063>>x4064));

	if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x4101 = INT64_MIN;
	volatile int32_t x4103 = 81;
	static int8_t x4104 = 14;
	int32_t t75 = 7;

	t75 = ((x4101<=x4102)|(x4103>>x4104));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4161 = -4;
	static int64_t x4162 = INT64_MIN;
	volatile uint16_t x4163 = 7091U;
	int32_t t76 = -707;

	t76 = ((x4161<=x4162)|(x4163>>x4164));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4202 = 165U;
	uint16_t x4203 = 570U;
	int16_t x4204 = 7;
	volatile int32_t t77 = -746;

	t77 = ((x4201<=x4202)|(x4203>>x4204));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4245 = 50U;
	uint32_t x4247 = UINT32_MAX;
	int8_t x4248 = 7;
	volatile uint32_t t78 = 16856335U;

	t78 = ((x4245<=x4246)|(x4247>>x4248));

	if (t78 != 33554431U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4277 = 27;
	static uint16_t x4279 = 3U;
	uint16_t x4280 = 22U;
	static volatile int32_t t79 = 74160114;

	t79 = ((x4277<=x4278)|(x4279>>x4280));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4486 = 627781922;
	uint64_t x4487 = 2350621783984145LLU;
	uint8_t x4488 = 5U;
	uint64_t t80 = 36080450788813LLU;

	t80 = ((x4485<=x4486)|(x4487>>x4488));

	if (t80 != 73456930749505LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4509 = 6411262622111LL;
	int32_t x4510 = INT32_MIN;
	static int32_t x4511 = 55425;
	volatile int32_t t81 = -793267;

	t81 = ((x4509<=x4510)|(x4511>>x4512));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4574 = -1;
	int8_t x4575 = 6;
	static uint8_t x4576 = 1U;
	int32_t t82 = 613;

	t82 = ((x4573<=x4574)|(x4575>>x4576));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4813 = INT16_MIN;
	uint64_t x4814 = 5807LLU;
	static uint8_t x4815 = 1U;
	uint32_t x4816 = 7U;

	t83 = ((x4813<=x4814)|(x4815>>x4816));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5037 = 7191U;
	volatile int64_t x5038 = -18133LL;
	uint64_t x5039 = 1673679LLU;
	uint64_t t84 = 162656990410828079LLU;

	t84 = ((x5037<=x5038)|(x5039>>x5040));

	if (t84 != 1673679LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5061 = INT32_MAX;
	static uint16_t x5062 = 0U;
	static int8_t x5063 = 26;
	static int32_t t85 = -829;

	t85 = ((x5061<=x5062)|(x5063>>x5064));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x5065 = INT32_MIN;
	uint32_t x5067 = 3616144U;
	uint8_t x5068 = 14U;
	static volatile uint32_t t86 = 15712U;

	t86 = ((x5065<=x5066)|(x5067>>x5068));

	if (t86 != 221U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x5077 = -1LL;
	int32_t x5078 = INT32_MAX;
	uint32_t x5079 = 242452116U;
	volatile uint16_t x5080 = 1U;
	uint32_t t87 = 5U;

	t87 = ((x5077<=x5078)|(x5079>>x5080));

	if (t87 != 121226059U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5081 = 145U;
	int64_t x5082 = INT64_MAX;
	int8_t x5083 = 0;
	uint16_t x5084 = 10U;
	volatile int32_t t88 = 0;

	t88 = ((x5081<=x5082)|(x5083>>x5084));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x5109 = UINT64_MAX;
	volatile uint64_t x5110 = 7194LLU;
	static uint16_t x5111 = UINT16_MAX;
	uint32_t x5112 = 13U;
	int32_t t89 = 116265358;

	t89 = ((x5109<=x5110)|(x5111>>x5112));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5237 = INT8_MAX;
	static int32_t x5238 = INT32_MAX;
	static uint32_t x5239 = 1850211084U;
	volatile uint8_t x5240 = 21U;
	volatile uint32_t t90 = 29359816U;

	t90 = ((x5237<=x5238)|(x5239>>x5240));

	if (t90 != 883U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x5274 = 680658933;
	volatile uint32_t t91 = 1574984U;

	t91 = ((x5273<=x5274)|(x5275>>x5276));

	if (t91 != 1073741823U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x5315 = UINT32_MAX;
	int8_t x5316 = 3;
	uint32_t t92 = 808U;

	t92 = ((x5313<=x5314)|(x5315>>x5316));

	if (t92 != 536870911U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5317 = 203U;
	int16_t x5318 = INT16_MAX;
	uint8_t x5319 = 5U;

	t93 = ((x5317<=x5318)|(x5319>>x5320));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5325 = 111LL;
	int32_t x5326 = 0;
	static uint8_t x5327 = UINT8_MAX;
	uint8_t x5328 = 4U;
	int32_t t94 = 11;

	t94 = ((x5325<=x5326)|(x5327>>x5328));

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5333 = -1LL;
	int16_t x5334 = INT16_MAX;
	int64_t x5335 = 302950205776070LL;
	uint16_t x5336 = 5U;
	int64_t t95 = -1LL;

	t95 = ((x5333<=x5334)|(x5335>>x5336));

	if (t95 != 9467193930503LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5373 = 548674LL;
	volatile int8_t x5374 = INT8_MAX;
	uint16_t x5375 = 194U;
	uint16_t x5376 = 0U;
	volatile int32_t t96 = 1;

	t96 = ((x5373<=x5374)|(x5375>>x5376));

	if (t96 != 194) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5489 = 7U;
	volatile uint32_t x5491 = 8201034U;
	uint32_t x5492 = 16U;
	uint32_t t97 = 174555U;

	t97 = ((x5489<=x5490)|(x5491>>x5492));

	if (t97 != 125U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x5529 = UINT32_MAX;
	uint16_t x5530 = 0U;
	int64_t x5531 = INT64_MAX;
	static uint32_t x5532 = 4U;
	int64_t t98 = -630129LL;

	t98 = ((x5529<=x5530)|(x5531>>x5532));

	if (t98 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x5633 = UINT32_MAX;
	int64_t x5634 = -1LL;
	uint16_t x5635 = 1U;
	volatile int32_t t99 = 15973;

	t99 = ((x5633<=x5634)|(x5635>>x5636));

	if (t99 != 0) { NG(); } else { ; }
	
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

