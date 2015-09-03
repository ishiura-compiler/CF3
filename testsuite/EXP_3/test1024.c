#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x134 = 12;
static int64_t x301 = INT64_MIN;
volatile uint32_t x303 = 1749137536U;
static volatile int32_t t2 = 36901634;
int32_t x585 = INT32_MIN;
int8_t x733 = -1;
int64_t x736 = 2LL;
static volatile int32_t t6 = -25159866;
uint32_t x977 = 1U;
int32_t x978 = -657426;
uint8_t x1031 = 103U;
uint64_t x1165 = 295261906667338315LLU;
uint64_t x1381 = 273246011797234LLU;
static int8_t x1500 = 24;
int32_t t16 = -5315;
int32_t x1505 = INT32_MAX;
int64_t x1506 = -193792931966LL;
uint16_t x1597 = 168U;
volatile uint32_t x1619 = 870121881U;
volatile int32_t x1687 = 0;
static uint32_t x1856 = 2U;
volatile int32_t t22 = 0;
uint16_t x1936 = 21U;
int32_t x1982 = INT32_MIN;
static int64_t x2019 = 249608634LL;
uint32_t x2104 = 0U;
int32_t t26 = 28072;
int64_t x2107 = INT64_MAX;
static uint8_t x2108 = 4U;
int8_t x2130 = INT8_MAX;
volatile int32_t t29 = -202078829;
uint16_t x2198 = UINT16_MAX;
int8_t x2320 = 2;
uint16_t x2531 = UINT16_MAX;
volatile int8_t x2562 = 0;
int8_t x2564 = 25;
volatile int32_t t35 = 0;
volatile uint32_t x2625 = UINT32_MAX;
int8_t x2675 = INT8_MAX;
int32_t t38 = 69;
int16_t x2709 = -164;
int32_t x2710 = -722;
uint8_t x2712 = 26U;
volatile uint64_t x2847 = 3LLU;
int8_t x3025 = INT8_MIN;
int64_t x3129 = 0LL;
static uint16_t x3130 = 807U;
static volatile uint8_t x3143 = 2U;
int32_t t46 = -2;
int32_t x3205 = INT32_MAX;
volatile int16_t x3206 = -15;
uint16_t x3207 = UINT16_MAX;
int32_t t48 = 460;
int8_t x3249 = INT8_MIN;
volatile int32_t t52 = 1;
uint64_t x3495 = 56LLU;
int64_t x3537 = -1LL;
int16_t x3540 = 1;
volatile int16_t x3592 = 3;
static uint8_t x3652 = 7U;
volatile int32_t t58 = -46821;
static uint64_t x3707 = UINT64_MAX;
int32_t t59 = 0;
volatile int8_t x3823 = 61;
volatile int32_t x4053 = 62032;
uint16_t x4253 = 115U;
int64_t x4258 = -1LL;
static int32_t t65 = 25502059;
uint64_t x4362 = UINT64_MAX;
static int32_t t67 = -139463224;
volatile int32_t t68 = 26879;
int8_t x4698 = 3;
uint8_t x4888 = 1U;
volatile int32_t t71 = 21295;
int32_t x4903 = 29293;
volatile int8_t x4904 = 1;
int32_t x5265 = 289299;
int8_t x5266 = INT8_MAX;
int16_t x5268 = 0;
uint16_t x5417 = 24458U;
static int8_t x5537 = 1;
uint8_t x5541 = UINT8_MAX;
int32_t x5769 = INT32_MIN;
int64_t x5771 = 77472321821LL;
static int64_t x5829 = 893885911757426461LL;
static uint16_t x5894 = UINT16_MAX;
int32_t t85 = -1;
static int64_t x5906 = INT64_MIN;
static volatile int32_t t87 = 24306481;
int64_t x6125 = -1LL;
uint64_t x6128 = 1LLU;
uint32_t x6152 = 13U;
volatile int32_t t89 = 475449028;
uint8_t x6203 = 2U;
volatile int32_t t91 = -1;
volatile int8_t x6544 = 1;


void f0(void) {
	uint32_t x133 = 1146U;
	int8_t x135 = INT8_MAX;
	volatile int64_t x136 = 20LL;
	int32_t t0 = -431894;

	t0 = ((x133+x134)<=(x135>>x136));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x302 = INT16_MAX;
	uint8_t x304 = 26U;
	static int32_t t1 = 15848;

	t1 = ((x301+x302)<=(x303>>x304));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x329 = 1U;
	volatile uint64_t x330 = UINT64_MAX;
	int64_t x331 = INT64_MAX;
	int8_t x332 = 0;

	t2 = ((x329+x330)<=(x331>>x332));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x586 = UINT8_MAX;
	int64_t x587 = 43152826585486LL;
	int16_t x588 = 11;
	volatile int32_t t3 = -2024;

	t3 = ((x585+x586)<=(x587>>x588));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x725 = -3;
	uint8_t x726 = 6U;
	int32_t x727 = INT32_MAX;
	uint8_t x728 = 6U;
	int32_t t4 = 1217316;

	t4 = ((x725+x726)<=(x727>>x728));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x729 = INT16_MIN;
	int16_t x730 = INT16_MIN;
	uint64_t x731 = 112772270LLU;
	volatile uint16_t x732 = 28U;
	volatile int32_t t5 = 29757658;

	t5 = ((x729+x730)<=(x731>>x732));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x734 = 1829946010U;
	static int64_t x735 = 0LL;

	t6 = ((x733+x734)<=(x735>>x736));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x769 = -3615897172248546899LL;
	int64_t x770 = INT64_MAX;
	static int64_t x771 = INT64_MAX;
	int8_t x772 = 0;
	volatile int32_t t7 = 755442029;

	t7 = ((x769+x770)<=(x771>>x772));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x979 = 236LLU;
	uint32_t x980 = 1U;
	volatile int32_t t8 = 56;

	t8 = ((x977+x978)<=(x979>>x980));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x1029 = -763103626877LL;
	uint32_t x1030 = UINT32_MAX;
	uint16_t x1032 = 0U;
	static int32_t t9 = 685160959;

	t9 = ((x1029+x1030)<=(x1031>>x1032));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1153 = -1;
	int32_t x1154 = -2;
	int16_t x1155 = 31;
	uint32_t x1156 = 1U;
	int32_t t10 = -361374933;

	t10 = ((x1153+x1154)<=(x1155>>x1156));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x1166 = 3615;
	static volatile uint64_t x1167 = UINT64_MAX;
	uint8_t x1168 = 1U;
	volatile int32_t t11 = 13;

	t11 = ((x1165+x1166)<=(x1167>>x1168));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1269 = INT64_MIN;
	int16_t x1270 = 304;
	static int8_t x1271 = 23;
	static int32_t x1272 = 0;
	int32_t t12 = 200540841;

	t12 = ((x1269+x1270)<=(x1271>>x1272));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1297 = -1;
	uint64_t x1298 = UINT64_MAX;
	static uint16_t x1299 = 26098U;
	volatile uint8_t x1300 = 10U;
	static int32_t t13 = -3;

	t13 = ((x1297+x1298)<=(x1299>>x1300));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1341 = -1;
	uint16_t x1342 = UINT16_MAX;
	int32_t x1343 = INT32_MAX;
	int32_t x1344 = 1;
	int32_t t14 = -3883901;

	t14 = ((x1341+x1342)<=(x1343>>x1344));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1382 = UINT16_MAX;
	volatile int32_t x1383 = INT32_MAX;
	uint8_t x1384 = 11U;
	volatile int32_t t15 = 70646754;

	t15 = ((x1381+x1382)<=(x1383>>x1384));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1497 = -1LL;
	uint16_t x1498 = UINT16_MAX;
	static uint8_t x1499 = 0U;

	t16 = ((x1497+x1498)<=(x1499>>x1500));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1507 = 1178U;
	volatile int16_t x1508 = 15;
	volatile int32_t t17 = 445285084;

	t17 = ((x1505+x1506)<=(x1507>>x1508));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1598 = 55;
	static uint64_t x1599 = 2735322859972007308LLU;
	static uint64_t x1600 = 0LLU;
	volatile int32_t t18 = -388;

	t18 = ((x1597+x1598)<=(x1599>>x1600));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1617 = 814307209U;
	static int16_t x1618 = 0;
	uint8_t x1620 = 25U;
	int32_t t19 = -4511;

	t19 = ((x1617+x1618)<=(x1619>>x1620));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1685 = UINT8_MAX;
	int64_t x1686 = -1LL;
	int8_t x1688 = 3;
	volatile int32_t t20 = 496402813;

	t20 = ((x1685+x1686)<=(x1687>>x1688));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1853 = 1U;
	uint16_t x1854 = UINT16_MAX;
	int32_t x1855 = INT32_MAX;
	volatile int32_t t21 = -2851443;

	t21 = ((x1853+x1854)<=(x1855>>x1856));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1889 = INT64_MAX;
	volatile int32_t x1890 = -191953;
	int8_t x1891 = INT8_MAX;
	volatile int8_t x1892 = 0;

	t22 = ((x1889+x1890)<=(x1891>>x1892));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1933 = 0U;
	int8_t x1934 = INT8_MIN;
	int16_t x1935 = INT16_MAX;
	static int32_t t23 = -8086455;

	t23 = ((x1933+x1934)<=(x1935>>x1936));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1981 = UINT16_MAX;
	static uint64_t x1983 = UINT64_MAX;
	uint32_t x1984 = 61U;
	int32_t t24 = 187;

	t24 = ((x1981+x1982)<=(x1983>>x1984));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x2017 = 7;
	static int8_t x2018 = INT8_MIN;
	static uint32_t x2020 = 15U;
	volatile int32_t t25 = 0;

	t25 = ((x2017+x2018)<=(x2019>>x2020));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x2101 = INT16_MAX;
	int64_t x2102 = INT64_MIN;
	uint16_t x2103 = UINT16_MAX;

	t26 = ((x2101+x2102)<=(x2103>>x2104));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2105 = INT8_MAX;
	int16_t x2106 = 854;
	int32_t t27 = 4;

	t27 = ((x2105+x2106)<=(x2107>>x2108));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2129 = UINT64_MAX;
	uint16_t x2131 = 0U;
	uint8_t x2132 = 0U;
	int32_t t28 = -2598025;

	t28 = ((x2129+x2130)<=(x2131>>x2132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2161 = 804;
	volatile uint16_t x2162 = 28845U;
	static uint64_t x2163 = UINT64_MAX;
	volatile int16_t x2164 = 0;

	t29 = ((x2161+x2162)<=(x2163>>x2164));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2169 = 1757350LLU;
	int8_t x2170 = -2;
	int8_t x2171 = INT8_MAX;
	volatile int8_t x2172 = 0;
	volatile int32_t t30 = -6927;

	t30 = ((x2169+x2170)<=(x2171>>x2172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2197 = -57;
	uint32_t x2199 = UINT32_MAX;
	volatile uint16_t x2200 = 2U;
	volatile int32_t t31 = -82383;

	t31 = ((x2197+x2198)<=(x2199>>x2200));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2317 = -25;
	static int16_t x2318 = INT16_MIN;
	uint32_t x2319 = 0U;
	volatile int32_t t32 = -55296374;

	t32 = ((x2317+x2318)<=(x2319>>x2320));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x2477 = 2159LL;
	int8_t x2478 = INT8_MIN;
	uint16_t x2479 = 5U;
	uint32_t x2480 = 1U;
	volatile int32_t t33 = 1;

	t33 = ((x2477+x2478)<=(x2479>>x2480));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2529 = -1;
	uint8_t x2530 = UINT8_MAX;
	uint8_t x2532 = 5U;
	static int32_t t34 = 781;

	t34 = ((x2529+x2530)<=(x2531>>x2532));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2561 = -3;
	int32_t x2563 = INT32_MAX;

	t35 = ((x2561+x2562)<=(x2563>>x2564));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2581 = INT16_MIN;
	static uint8_t x2582 = 69U;
	volatile int64_t x2583 = 1069626339342LL;
	int8_t x2584 = 1;
	int32_t t36 = -508133;

	t36 = ((x2581+x2582)<=(x2583>>x2584));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2626 = 13991LLU;
	int16_t x2627 = INT16_MAX;
	volatile uint8_t x2628 = 1U;
	static int32_t t37 = -179703348;

	t37 = ((x2625+x2626)<=(x2627>>x2628));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2673 = 1325U;
	uint32_t x2674 = UINT32_MAX;
	volatile int16_t x2676 = 0;

	t38 = ((x2673+x2674)<=(x2675>>x2676));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2711 = 23998360LL;
	volatile int32_t t39 = 71954;

	t39 = ((x2709+x2710)<=(x2711>>x2712));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2825 = -1;
	int64_t x2826 = -1LL;
	int64_t x2827 = 214936017585794LL;
	static uint8_t x2828 = 1U;
	volatile int32_t t40 = -1;

	t40 = ((x2825+x2826)<=(x2827>>x2828));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2845 = 17381663140921LLU;
	int8_t x2846 = INT8_MIN;
	volatile uint8_t x2848 = 7U;
	volatile int32_t t41 = -7182;

	t41 = ((x2845+x2846)<=(x2847>>x2848));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2921 = UINT8_MAX;
	int8_t x2922 = -1;
	uint32_t x2923 = 60766580U;
	volatile int8_t x2924 = 1;
	volatile int32_t t42 = -58845;

	t42 = ((x2921+x2922)<=(x2923>>x2924));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2961 = 32U;
	static int32_t x2962 = 0;
	int64_t x2963 = INT64_MAX;
	static int16_t x2964 = 0;
	static volatile int32_t t43 = 8;

	t43 = ((x2961+x2962)<=(x2963>>x2964));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3026 = 2U;
	static uint8_t x3027 = UINT8_MAX;
	static uint8_t x3028 = 4U;
	static volatile int32_t t44 = 106;

	t44 = ((x3025+x3026)<=(x3027>>x3028));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x3131 = 1U;
	uint8_t x3132 = 11U;
	volatile int32_t t45 = -1067285910;

	t45 = ((x3129+x3130)<=(x3131>>x3132));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x3141 = INT8_MAX;
	int8_t x3142 = -1;
	uint16_t x3144 = 1U;

	t46 = ((x3141+x3142)<=(x3143>>x3144));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3145 = 75580342317260702LLU;
	int32_t x3146 = -1;
	uint8_t x3147 = UINT8_MAX;
	uint64_t x3148 = 2LLU;
	int32_t t47 = 6;

	t47 = ((x3145+x3146)<=(x3147>>x3148));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3208 = 13;

	t48 = ((x3205+x3206)<=(x3207>>x3208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3250 = UINT32_MAX;
	volatile uint8_t x3251 = 1U;
	int8_t x3252 = 0;
	int32_t t49 = 38422;

	t49 = ((x3249+x3250)<=(x3251>>x3252));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3261 = UINT64_MAX;
	static volatile int32_t x3262 = INT32_MAX;
	volatile int32_t x3263 = INT32_MAX;
	int8_t x3264 = 0;
	volatile int32_t t50 = -420143955;

	t50 = ((x3261+x3262)<=(x3263>>x3264));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3333 = 16960U;
	volatile int64_t x3334 = 8246899LL;
	uint8_t x3335 = 1U;
	uint32_t x3336 = 0U;
	volatile int32_t t51 = 244256869;

	t51 = ((x3333+x3334)<=(x3335>>x3336));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x3361 = -1LL;
	uint16_t x3362 = 3U;
	uint64_t x3363 = 1309965699104LLU;
	uint8_t x3364 = 20U;

	t52 = ((x3361+x3362)<=(x3363>>x3364));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x3493 = 1U;
	int32_t x3494 = INT32_MIN;
	int32_t x3496 = 1;
	int32_t t53 = 21787692;

	t53 = ((x3493+x3494)<=(x3495>>x3496));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x3538 = -1LL;
	uint8_t x3539 = 2U;
	int32_t t54 = 1927287;

	t54 = ((x3537+x3538)<=(x3539>>x3540));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3589 = UINT8_MAX;
	uint32_t x3590 = 17U;
	static uint32_t x3591 = 29616U;
	int32_t t55 = 1;

	t55 = ((x3589+x3590)<=(x3591>>x3592));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3649 = INT64_MAX;
	int32_t x3650 = -17;
	uint16_t x3651 = 35U;
	volatile int32_t t56 = 182414;

	t56 = ((x3649+x3650)<=(x3651>>x3652));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3685 = INT8_MIN;
	int64_t x3686 = INT64_MAX;
	volatile uint64_t x3687 = 487784LLU;
	uint16_t x3688 = 0U;
	int32_t t57 = 7;

	t57 = ((x3685+x3686)<=(x3687>>x3688));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3689 = -1;
	int16_t x3690 = INT16_MAX;
	uint16_t x3691 = UINT16_MAX;
	uint64_t x3692 = 1LLU;

	t58 = ((x3689+x3690)<=(x3691>>x3692));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x3705 = 0U;
	int32_t x3706 = -6;
	uint16_t x3708 = 0U;

	t59 = ((x3705+x3706)<=(x3707>>x3708));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3777 = UINT16_MAX;
	static uint64_t x3778 = 744LLU;
	static int32_t x3779 = 49440;
	uint8_t x3780 = 4U;
	volatile int32_t t60 = 741942489;

	t60 = ((x3777+x3778)<=(x3779>>x3780));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3821 = 927419LLU;
	static int16_t x3822 = INT16_MIN;
	uint64_t x3824 = 22LLU;
	int32_t t61 = 456673056;

	t61 = ((x3821+x3822)<=(x3823>>x3824));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3941 = UINT64_MAX;
	uint16_t x3942 = 202U;
	int64_t x3943 = INT64_MAX;
	uint8_t x3944 = 0U;
	volatile int32_t t62 = 431;

	t62 = ((x3941+x3942)<=(x3943>>x3944));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x4054 = 105U;
	uint32_t x4055 = 1138612843U;
	uint8_t x4056 = 4U;
	int32_t t63 = -24158;

	t63 = ((x4053+x4054)<=(x4055>>x4056));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x4254 = UINT64_MAX;
	static uint32_t x4255 = 2043487U;
	volatile uint16_t x4256 = 2U;
	static volatile int32_t t64 = 2919;

	t64 = ((x4253+x4254)<=(x4255>>x4256));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4257 = 2487491LL;
	int8_t x4259 = 0;
	uint8_t x4260 = 3U;

	t65 = ((x4257+x4258)<=(x4259>>x4260));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4361 = 468LLU;
	uint8_t x4363 = 37U;
	volatile uint32_t x4364 = 0U;
	volatile int32_t t66 = -15552;

	t66 = ((x4361+x4362)<=(x4363>>x4364));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x4441 = -56;
	volatile int16_t x4442 = -2086;
	int32_t x4443 = 153;
	static int8_t x4444 = 1;

	t67 = ((x4441+x4442)<=(x4443>>x4444));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4693 = 26U;
	int64_t x4694 = INT64_MIN;
	uint8_t x4695 = UINT8_MAX;
	static uint16_t x4696 = 12U;

	t68 = ((x4693+x4694)<=(x4695>>x4696));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4697 = 3;
	uint64_t x4699 = 37244570442LLU;
	int8_t x4700 = 1;
	int32_t t69 = 647883979;

	t69 = ((x4697+x4698)<=(x4699>>x4700));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4777 = INT64_MAX;
	static int8_t x4778 = 0;
	int8_t x4779 = 6;
	uint16_t x4780 = 15U;
	int32_t t70 = -10;

	t70 = ((x4777+x4778)<=(x4779>>x4780));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4885 = 5;
	int32_t x4886 = INT32_MIN;
	uint64_t x4887 = 6960290967048LLU;

	t71 = ((x4885+x4886)<=(x4887>>x4888));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4901 = INT16_MAX;
	int32_t x4902 = INT32_MIN;
	int32_t t72 = 1;

	t72 = ((x4901+x4902)<=(x4903>>x4904));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x5267 = 37799631725LL;
	int32_t t73 = -58350135;

	t73 = ((x5265+x5266)<=(x5267>>x5268));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x5418 = UINT32_MAX;
	static int64_t x5419 = 23192LL;
	int8_t x5420 = 0;
	static int32_t t74 = 29313;

	t74 = ((x5417+x5418)<=(x5419>>x5420));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5501 = -1;
	uint8_t x5502 = 28U;
	int8_t x5503 = 1;
	uint8_t x5504 = 2U;
	int32_t t75 = -922;

	t75 = ((x5501+x5502)<=(x5503>>x5504));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5533 = UINT64_MAX;
	uint64_t x5534 = 38LLU;
	static int64_t x5535 = 1126486670463648093LL;
	static uint8_t x5536 = 5U;
	volatile int32_t t76 = -84556;

	t76 = ((x5533+x5534)<=(x5535>>x5536));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5538 = 7U;
	int16_t x5539 = 0;
	uint8_t x5540 = 0U;
	int32_t t77 = 1325839;

	t77 = ((x5537+x5538)<=(x5539>>x5540));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5542 = -3;
	static uint16_t x5543 = 26U;
	static int32_t x5544 = 14;
	int32_t t78 = 917751;

	t78 = ((x5541+x5542)<=(x5543>>x5544));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5569 = 861856116LLU;
	int64_t x5570 = 2LL;
	uint32_t x5571 = UINT32_MAX;
	uint16_t x5572 = 13U;
	volatile int32_t t79 = -1;

	t79 = ((x5569+x5570)<=(x5571>>x5572));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x5649 = INT64_MIN;
	uint16_t x5650 = UINT16_MAX;
	int16_t x5651 = INT16_MAX;
	static uint8_t x5652 = 18U;
	volatile int32_t t80 = 0;

	t80 = ((x5649+x5650)<=(x5651>>x5652));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x5681 = 61;
	volatile uint32_t x5682 = UINT32_MAX;
	volatile int32_t x5683 = 2787194;
	int16_t x5684 = 2;
	static int32_t t81 = 305325504;

	t81 = ((x5681+x5682)<=(x5683>>x5684));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5717 = INT8_MAX;
	static volatile int64_t x5718 = -384275791210350023LL;
	int8_t x5719 = 20;
	int8_t x5720 = 3;
	static int32_t t82 = 14739;

	t82 = ((x5717+x5718)<=(x5719>>x5720));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5770 = 4U;
	static uint8_t x5772 = 5U;
	static int32_t t83 = 4294;

	t83 = ((x5769+x5770)<=(x5771>>x5772));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5830 = UINT64_MAX;
	volatile uint8_t x5831 = 1U;
	volatile uint8_t x5832 = 5U;
	int32_t t84 = -7193;

	t84 = ((x5829+x5830)<=(x5831>>x5832));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5893 = UINT16_MAX;
	uint16_t x5895 = 144U;
	static uint8_t x5896 = 0U;

	t85 = ((x5893+x5894)<=(x5895>>x5896));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5905 = 10;
	uint64_t x5907 = 984465956569823LLU;
	static uint64_t x5908 = 63LLU;
	volatile int32_t t86 = 120687;

	t86 = ((x5905+x5906)<=(x5907>>x5908));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5957 = 531395U;
	int16_t x5958 = INT16_MIN;
	static int16_t x5959 = 310;
	uint8_t x5960 = 31U;

	t87 = ((x5957+x5958)<=(x5959>>x5960));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x6126 = 717854LL;
	int32_t x6127 = INT32_MAX;
	int32_t t88 = 84548;

	t88 = ((x6125+x6126)<=(x6127>>x6128));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6149 = INT16_MIN;
	int8_t x6150 = INT8_MIN;
	uint16_t x6151 = UINT16_MAX;

	t89 = ((x6149+x6150)<=(x6151>>x6152));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x6169 = -13397LL;
	int8_t x6170 = 1;
	uint16_t x6171 = UINT16_MAX;
	uint8_t x6172 = 18U;
	int32_t t90 = -7223;

	t90 = ((x6169+x6170)<=(x6171>>x6172));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x6201 = -1LL;
	static int16_t x6202 = INT16_MIN;
	int8_t x6204 = 7;

	t91 = ((x6201+x6202)<=(x6203>>x6204));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x6293 = 2070120384U;
	static uint8_t x6294 = UINT8_MAX;
	uint8_t x6295 = UINT8_MAX;
	uint64_t x6296 = 11LLU;
	volatile int32_t t92 = 28182;

	t92 = ((x6293+x6294)<=(x6295>>x6296));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x6353 = INT64_MAX;
	volatile int16_t x6354 = INT16_MIN;
	uint32_t x6355 = 1U;
	volatile uint16_t x6356 = 1U;
	static volatile int32_t t93 = 26774300;

	t93 = ((x6353+x6354)<=(x6355>>x6356));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6401 = 21118909453695544LLU;
	uint16_t x6402 = 3536U;
	volatile int8_t x6403 = 4;
	volatile int8_t x6404 = 2;
	volatile int32_t t94 = 601043362;

	t94 = ((x6401+x6402)<=(x6403>>x6404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x6541 = INT16_MIN;
	int64_t x6542 = 426187526LL;
	int32_t x6543 = INT32_MAX;
	volatile int32_t t95 = 251146157;

	t95 = ((x6541+x6542)<=(x6543>>x6544));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6593 = 1U;
	int16_t x6594 = INT16_MIN;
	uint8_t x6595 = 0U;
	uint8_t x6596 = 21U;
	volatile int32_t t96 = 396;

	t96 = ((x6593+x6594)<=(x6595>>x6596));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6641 = 427U;
	static volatile uint32_t x6642 = UINT32_MAX;
	static uint8_t x6643 = 0U;
	static uint8_t x6644 = 26U;
	int32_t t97 = 523;

	t97 = ((x6641+x6642)<=(x6643>>x6644));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6657 = UINT64_MAX;
	int8_t x6658 = -1;
	volatile uint16_t x6659 = 0U;
	int8_t x6660 = 1;
	static volatile int32_t t98 = -17;

	t98 = ((x6657+x6658)<=(x6659>>x6660));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6725 = 0U;
	int32_t x6726 = -15963892;
	static uint64_t x6727 = 402974666790808718LLU;
	uint32_t x6728 = 1U;
	int32_t t99 = -1;

	t99 = ((x6725+x6726)<=(x6727>>x6728));

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

