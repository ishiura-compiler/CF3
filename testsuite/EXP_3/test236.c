#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x40 = INT8_MIN;
static uint16_t x118 = 0U;
uint32_t x120 = 51838U;
uint8_t x371 = 114U;
uint32_t t5 = 2388341U;
int8_t x546 = 6;
static int32_t x547 = -4;
int64_t x548 = INT64_MIN;
static volatile int64_t t7 = -1076277312629383476LL;
volatile int8_t x565 = 1;
int16_t x725 = 19;
uint16_t x727 = 1732U;
static uint16_t x730 = 1U;
volatile int16_t x806 = 7;
int8_t x886 = 0;
volatile int32_t x887 = 0;
static uint64_t x965 = UINT64_MAX;
static uint32_t x1013 = 2336U;
volatile int8_t x1016 = -1;
volatile int64_t t15 = 0LL;
int32_t x1044 = 424552424;
static volatile int32_t x1077 = 15;
uint8_t x1269 = 0U;
volatile int8_t x1270 = 6;
int32_t x1271 = 499;
uint32_t t19 = 411577898U;
static int64_t x1287 = -1LL;
static int64_t x1532 = INT64_MAX;
static uint16_t x1624 = 6471U;
uint64_t x1760 = 188489967LLU;
uint64_t t26 = 2LLU;
int16_t x1928 = -1;
uint32_t x1981 = UINT32_MAX;
uint8_t x2093 = 30U;
uint16_t x2094 = 4U;
int64_t x2096 = -1LL;
volatile uint64_t t29 = 18LLU;
volatile uint32_t x2197 = 8865U;
uint8_t x2198 = 29U;
uint64_t t30 = 82229906377453LLU;
int64_t x2299 = -1LL;
static int8_t x2635 = 0;
int32_t x2702 = 5;
volatile uint64_t t36 = 739826488658845LLU;
int32_t x2796 = INT32_MIN;
static volatile uint64_t t38 = 15428121LLU;
int32_t x2960 = INT32_MAX;
static volatile int32_t t39 = 188923;
static uint32_t x3001 = UINT32_MAX;
static uint64_t x3006 = 0LLU;
static uint32_t x3045 = 91436148U;
int32_t x3048 = INT32_MAX;
static volatile int64_t x3124 = -168729380483LL;
static uint8_t x3210 = 0U;
static volatile int64_t x3264 = -35743887035101LL;
uint64_t t49 = 21348181247LLU;
uint8_t x3358 = 1U;
static volatile uint8_t x3401 = UINT8_MAX;
int64_t x3402 = 3LL;
uint32_t x3403 = UINT32_MAX;
uint16_t x3477 = 118U;
int64_t x3480 = 505915820LL;
int64_t x3523 = INT64_MIN;
int16_t x3524 = INT16_MIN;
int64_t t56 = 12LL;
static int8_t x3712 = 9;
int32_t t58 = 34;
int16_t x3734 = 17;
volatile int16_t x3797 = INT16_MAX;
int8_t x3799 = INT8_MIN;
int32_t x3800 = INT32_MIN;
volatile int32_t t60 = 1421482;
uint8_t x3810 = 2U;
static uint32_t x3811 = 6U;
int16_t x3886 = 3;
int16_t x3887 = INT16_MAX;
int32_t t64 = -8;
volatile uint32_t t66 = 1035107U;
int64_t x3985 = 1077466154629LL;
static int8_t x3987 = -1;
volatile int64_t t69 = 21711503401LL;
uint16_t x4056 = UINT16_MAX;
int64_t t71 = -668637342882406LL;
uint64_t x4249 = UINT64_MAX;
uint32_t x4250 = 4U;
uint32_t x4279 = 7U;
static int64_t x4299 = INT64_MIN;
int32_t t75 = 1;
uint16_t x4645 = UINT16_MAX;
uint8_t x4646 = 0U;
volatile uint16_t x4692 = 1U;
static uint64_t x4701 = UINT64_MAX;
uint8_t x4781 = UINT8_MAX;
uint32_t x5038 = 6U;
int8_t x5122 = 60;
int32_t x5203 = INT32_MAX;
int16_t x5204 = 7;
int16_t x5263 = -1;
volatile uint32_t t89 = 82009U;
int8_t x5347 = INT8_MIN;
static uint32_t x5578 = 1U;
int8_t x5589 = 19;
static uint64_t t97 = 1393959231996511LLU;
int16_t x5641 = 1;
volatile uint8_t x5642 = 3U;


void f0(void) {
	static int32_t x33 = 1235160;
	uint8_t x34 = 2U;
	uint8_t x35 = 2U;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t0 = -12988;

	t0 = ((x33<<x34)-(x35-x36));

	if (t0 != 5006173) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x37 = UINT16_MAX;
	volatile uint8_t x38 = 12U;
	static int16_t x39 = -1;
	static int32_t t1 = 503258;

	t1 = ((x37<<x38)-(x39-x40));

	if (t1 != 268431233) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x117 = 27U;
	int8_t x119 = INT8_MAX;
	volatile uint32_t t2 = 2698U;

	t2 = ((x117<<x118)-(x119-x120));

	if (t2 != 51738U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x121 = 4;
	uint64_t x122 = 5LLU;
	volatile int32_t x123 = INT32_MAX;
	volatile int32_t x124 = 9;
	int32_t t3 = -9840;

	t3 = ((x121<<x122)-(x123-x124));

	if (t3 != -2147483510) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x225 = 1;
	static volatile uint8_t x226 = 5U;
	static int64_t x227 = -1LL;
	volatile int32_t x228 = INT32_MIN;
	volatile int64_t t4 = 2790124LL;

	t4 = ((x225<<x226)-(x227-x228));

	if (t4 != -2147483615LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x369 = UINT32_MAX;
	static volatile int32_t x370 = 1;
	int16_t x372 = -1;

	t5 = ((x369<<x370)-(x371-x372));

	if (t5 != 4294967179U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 19U;
	volatile int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t6 = 8268197LLU;

	t6 = ((x385<<x386)-(x387-x388));

	if (t6 != 18446744073708994433LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x545 = UINT32_MAX;

	t7 = ((x545<<x546)-(x547-x548));

	if (t7 != -9223372032559808572LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x566 = 0;
	uint16_t x567 = 30995U;
	static volatile uint64_t x568 = UINT64_MAX;
	static volatile uint64_t t8 = 995691275244LLU;

	t8 = ((x565<<x566)-(x567-x568));

	if (t8 != 18446744073709520621LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x589 = 759LLU;
	static volatile uint8_t x590 = 19U;
	uint32_t x591 = UINT32_MAX;
	volatile int16_t x592 = INT16_MIN;
	volatile uint64_t t9 = 38527LLU;

	t9 = ((x589<<x590)-(x591-x592));

	if (t9 != 397901825LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x726 = 0;
	int8_t x728 = 0;
	static volatile int32_t t10 = 407;

	t10 = ((x725<<x726)-(x727-x728));

	if (t10 != -1713) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x729 = 32LL;
	uint32_t x731 = 3U;
	volatile int32_t x732 = INT32_MAX;
	int64_t t11 = 285997LL;

	t11 = ((x729<<x730)-(x731-x732));

	if (t11 != -2147483588LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x805 = 69U;
	uint64_t x807 = 1088604440LLU;
	uint16_t x808 = 11174U;
	static volatile uint64_t t12 = 633059437493200LLU;

	t12 = ((x805<<x806)-(x807-x808));

	if (t12 != 18446744072620967182LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x885 = 9LL;
	volatile int16_t x888 = 3;
	volatile int64_t t13 = 1LL;

	t13 = ((x885<<x886)-(x887-x888));

	if (t13 != 12LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x966 = 40U;
	int32_t x967 = -1;
	volatile int8_t x968 = INT8_MIN;
	volatile uint64_t t14 = 899063881527LLU;

	t14 = ((x965<<x966)-(x967-x968));

	if (t14 != 18446742974197923713LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1014 = 2;
	static volatile int64_t x1015 = 7886LL;

	t15 = ((x1013<<x1014)-(x1015-x1016));

	if (t15 != 1457LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1041 = 438U;
	static volatile int8_t x1042 = 3;
	int8_t x1043 = INT8_MIN;
	int32_t t16 = 35023624;

	t16 = ((x1041<<x1042)-(x1043-x1044));

	if (t16 != 424556056) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1078 = 1U;
	volatile uint64_t x1079 = UINT64_MAX;
	int32_t x1080 = INT32_MIN;
	volatile uint64_t t17 = 86316LLU;

	t17 = ((x1077<<x1078)-(x1079-x1080));

	if (t17 != 18446744071562067999LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1272 = 1;
	volatile int32_t t18 = -525792040;

	t18 = ((x1269<<x1270)-(x1271-x1272));

	if (t18 != -498) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x1277 = 1U;
	static int32_t x1278 = 1;
	volatile uint32_t x1279 = UINT32_MAX;
	int8_t x1280 = -1;

	t19 = ((x1277<<x1278)-(x1279-x1280));

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1285 = 4;
	int8_t x1286 = 8;
	static uint32_t x1288 = UINT32_MAX;
	volatile int64_t t20 = -71881LL;

	t20 = ((x1285<<x1286)-(x1287-x1288));

	if (t20 != 4294968320LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1397 = 870077278044LLU;
	uint16_t x1398 = 0U;
	static volatile int16_t x1399 = INT16_MIN;
	uint16_t x1400 = 44U;
	uint64_t t21 = 623608488884LLU;

	t21 = ((x1397<<x1398)-(x1399-x1400));

	if (t21 != 870077310856LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1425 = 5939172977953809LL;
	uint8_t x1426 = 8U;
	int16_t x1427 = -1;
	int32_t x1428 = INT32_MAX;
	int64_t t22 = 3450625972738693LL;

	t22 = ((x1425<<x1426)-(x1427-x1428));

	if (t22 != 1520428284503658752LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1529 = 0U;
	uint8_t x1530 = 4U;
	uint16_t x1531 = 470U;
	volatile int64_t t23 = -568134379182715349LL;

	t23 = ((x1529<<x1530)-(x1531-x1532));

	if (t23 != 9223372036854775337LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1549 = UINT32_MAX;
	volatile uint16_t x1550 = 2U;
	int8_t x1551 = INT8_MAX;
	int16_t x1552 = INT16_MIN;
	volatile uint32_t t24 = 50U;

	t24 = ((x1549<<x1550)-(x1551-x1552));

	if (t24 != 4294934397U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1621 = 4U;
	uint8_t x1622 = 7U;
	static int16_t x1623 = -13819;
	uint32_t t25 = 447630340U;

	t25 = ((x1621<<x1622)-(x1623-x1624));

	if (t25 != 20802U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1757 = 3U;
	uint64_t x1758 = 0LLU;
	int32_t x1759 = -1;

	t26 = ((x1757<<x1758)-(x1759-x1760));

	if (t26 != 188489971LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1925 = 22;
	uint8_t x1926 = 1U;
	int32_t x1927 = 995;
	volatile int32_t t27 = 2;

	t27 = ((x1925<<x1926)-(x1927-x1928));

	if (t27 != -952) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x1982 = 0U;
	static volatile int32_t x1983 = INT32_MIN;
	uint64_t x1984 = UINT64_MAX;
	volatile uint64_t t28 = 5402719LLU;

	t28 = ((x1981<<x1982)-(x1983-x1984));

	if (t28 != 6442450942LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2095 = 60250641LLU;

	t29 = ((x2093<<x2094)-(x2095-x2096));

	if (t29 != 18446744073649301454LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2199 = 880534406LLU;
	uint16_t x2200 = 7149U;

	t30 = ((x2197<<x2198)-(x2199-x2200));

	if (t30 != 18446744073365895271LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2285 = UINT64_MAX;
	int32_t x2286 = 53;
	volatile uint16_t x2287 = 15U;
	volatile int32_t x2288 = -1738;
	uint64_t t31 = 39627634595921682LLU;

	t31 = ((x2285<<x2286)-(x2287-x2288));

	if (t31 != 18437736874454808871LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2297 = INT8_MAX;
	uint8_t x2298 = 2U;
	int8_t x2300 = INT8_MIN;
	int64_t t32 = 6529LL;

	t32 = ((x2297<<x2298)-(x2299-x2300));

	if (t32 != 381LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2509 = UINT32_MAX;
	uint16_t x2510 = 4U;
	uint64_t x2511 = UINT64_MAX;
	volatile uint16_t x2512 = UINT16_MAX;
	uint64_t t33 = 16554207LLU;

	t33 = ((x2509<<x2510)-(x2511-x2512));

	if (t33 != 4295032816LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x2513 = 1676460U;
	int16_t x2514 = 1;
	uint16_t x2515 = UINT16_MAX;
	static int8_t x2516 = 0;
	static volatile uint32_t t34 = 438850833U;

	t34 = ((x2513<<x2514)-(x2515-x2516));

	if (t34 != 3287385U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2633 = 63U;
	int64_t x2634 = 5LL;
	int64_t x2636 = 1582237239975LL;
	int64_t t35 = 0LL;

	t35 = ((x2633<<x2634)-(x2635-x2636));

	if (t35 != 1582237241991LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2701 = 384LLU;
	volatile int64_t x2703 = INT64_MIN;
	uint64_t x2704 = 3934481485LLU;

	t36 = ((x2701<<x2702)-(x2703-x2704));

	if (t36 != 9223372040789269581LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2793 = UINT16_MAX;
	uint16_t x2794 = 9U;
	static uint32_t x2795 = 1198939829U;
	volatile uint32_t t37 = 227435973U;

	t37 = ((x2793<<x2794)-(x2795-x2796));

	if (t37 != 982097739U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2841 = UINT64_MAX;
	static int8_t x2842 = 11;
	int64_t x2843 = INT64_MAX;
	static int16_t x2844 = 3928;

	t38 = ((x2841<<x2842)-(x2843-x2844));

	if (t38 != 9223372036854777689LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2957 = UINT16_MAX;
	volatile int8_t x2958 = 3;
	int32_t x2959 = INT32_MAX;

	t39 = ((x2957<<x2958)-(x2959-x2960));

	if (t39 != 524280) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2969 = 56U;
	uint8_t x2970 = 0U;
	volatile int16_t x2971 = 221;
	int8_t x2972 = 0;
	int32_t t40 = 20931;

	t40 = ((x2969<<x2970)-(x2971-x2972));

	if (t40 != -165) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2989 = 5U;
	volatile uint8_t x2990 = 21U;
	int64_t x2991 = -3409439116LL;
	static uint16_t x2992 = 7U;
	volatile int64_t t41 = 1LL;

	t41 = ((x2989<<x2990)-(x2991-x2992));

	if (t41 != 3419924883LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3002 = 24;
	volatile int16_t x3003 = 1;
	uint16_t x3004 = UINT16_MAX;
	static uint32_t t42 = 8427U;

	t42 = ((x3001<<x3002)-(x3003-x3004));

	if (t42 != 4278255614U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3005 = UINT8_MAX;
	int64_t x3007 = -1LL;
	uint32_t x3008 = 94051U;
	int64_t t43 = 173610549946LL;

	t43 = ((x3005<<x3006)-(x3007-x3008));

	if (t43 != 94307LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3009 = 14958101430LLU;
	uint32_t x3010 = 0U;
	int8_t x3011 = INT8_MIN;
	int32_t x3012 = INT32_MIN;
	uint64_t t44 = 458619021957398235LLU;

	t44 = ((x3009<<x3010)-(x3011-x3012));

	if (t44 != 12810617910LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x3046 = 11U;
	volatile int32_t x3047 = -1;
	volatile uint32_t t45 = 1U;

	t45 = ((x3045<<x3046)-(x3047-x3048));

	if (t45 != 430153728U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3121 = INT16_MAX;
	int8_t x3122 = 0;
	int8_t x3123 = 18;
	int64_t t46 = 449899013808LL;

	t46 = ((x3121<<x3122)-(x3123-x3124));

	if (t46 != -168729347734LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3169 = 8823;
	uint64_t x3170 = 0LLU;
	int16_t x3171 = INT16_MIN;
	int8_t x3172 = -6;
	static int32_t t47 = 462707;

	t47 = ((x3169<<x3170)-(x3171-x3172));

	if (t47 != 41585) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3209 = 1;
	static int64_t x3211 = INT64_MIN;
	uint64_t x3212 = 486458797459666704LLU;
	uint64_t t48 = 19333987611186LLU;

	t48 = ((x3209<<x3210)-(x3211-x3212));

	if (t48 != 9709830834314442513LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x3261 = 1028LLU;
	volatile uint16_t x3262 = 3U;
	uint32_t x3263 = 0U;

	t49 = ((x3261<<x3262)-(x3263-x3264));

	if (t49 != 18446708329822524739LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3337 = 240850097048823LLU;
	int8_t x3338 = 28;
	volatile int8_t x3339 = 3;
	int16_t x3340 = -26;
	volatile uint64_t t50 = 438308783267769053LLU;

	t50 = ((x3337<<x3338)-(x3339-x3340));

	if (t50 != 15314394666787405795LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3357 = UINT64_MAX;
	volatile int64_t x3359 = INT64_MIN;
	uint64_t x3360 = 2LLU;
	uint64_t t51 = 99693LLU;

	t51 = ((x3357<<x3358)-(x3359-x3360));

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3404 = 12530380035995739LLU;
	uint64_t t52 = 877LLU;

	t52 = ((x3401<<x3402)-(x3403-x3404));

	if (t52 != 12530375741030484LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3437 = 3U;
	uint16_t x3438 = 0U;
	static uint64_t x3439 = 5090389692969892LLU;
	static uint32_t x3440 = UINT32_MAX;
	volatile uint64_t t53 = 243LLU;

	t53 = ((x3437<<x3438)-(x3439-x3440));

	if (t53 != 18441653688311549022LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3461 = 15U;
	uint8_t x3462 = 1U;
	static uint16_t x3463 = 184U;
	int16_t x3464 = INT16_MAX;
	static volatile int32_t t54 = -79189914;

	t54 = ((x3461<<x3462)-(x3463-x3464));

	if (t54 != 32613) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3478 = 1;
	uint16_t x3479 = 44U;
	int64_t t55 = 1LL;

	t55 = ((x3477<<x3478)-(x3479-x3480));

	if (t55 != 505916012LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3521 = UINT8_MAX;
	uint8_t x3522 = 0U;

	t56 = ((x3521<<x3522)-(x3523-x3524));

	if (t56 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3569 = 21024454523150876LLU;
	int16_t x3570 = 0;
	int8_t x3571 = INT8_MIN;
	uint16_t x3572 = 942U;
	volatile uint64_t t57 = 431743852LLU;

	t57 = ((x3569<<x3570)-(x3571-x3572));

	if (t57 != 21024454523151946LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x3709 = 0U;
	uint8_t x3710 = 0U;
	int16_t x3711 = 830;

	t58 = ((x3709<<x3710)-(x3711-x3712));

	if (t58 != -821) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3733 = 25U;
	volatile int16_t x3735 = 6;
	int16_t x3736 = 6;
	volatile int32_t t59 = -3;

	t59 = ((x3733<<x3734)-(x3735-x3736));

	if (t59 != 3276800) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x3798 = 1U;

	t60 = ((x3797<<x3798)-(x3799-x3800));

	if (t60 != -2147417986) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3809 = 26U;
	int32_t x3812 = INT32_MIN;
	uint32_t t61 = 22995U;

	t61 = ((x3809<<x3810)-(x3811-x3812));

	if (t61 != 2147483746U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3825 = INT8_MAX;
	uint16_t x3826 = 4U;
	int8_t x3827 = INT8_MAX;
	volatile int16_t x3828 = INT16_MAX;
	int32_t t62 = -9;

	t62 = ((x3825<<x3826)-(x3827-x3828));

	if (t62 != 34672) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3829 = 90U;
	volatile uint16_t x3830 = 3U;
	int8_t x3831 = 19;
	static volatile uint32_t x3832 = 35U;
	volatile uint32_t t63 = 6422917U;

	t63 = ((x3829<<x3830)-(x3831-x3832));

	if (t63 != 736U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3885 = INT16_MAX;
	int8_t x3888 = -1;

	t64 = ((x3885<<x3886)-(x3887-x3888));

	if (t64 != 229368) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3893 = 4310U;
	int8_t x3894 = 0;
	int8_t x3895 = -21;
	int8_t x3896 = INT8_MIN;
	int32_t t65 = 75;

	t65 = ((x3893<<x3894)-(x3895-x3896));

	if (t65 != 4203) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x3929 = 85140U;
	int32_t x3930 = 25;
	static int8_t x3931 = INT8_MIN;
	uint16_t x3932 = 315U;

	t66 = ((x3929<<x3930)-(x3931-x3932));

	if (t66 != 671089083U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3957 = 25654067474259632LLU;
	volatile uint16_t x3958 = 7U;
	volatile uint64_t x3959 = UINT64_MAX;
	int32_t x3960 = -1;
	static uint64_t t67 = 191LLU;

	t67 = ((x3957<<x3958)-(x3959-x3960));

	if (t67 != 3283720636705232896LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x3986 = 3;
	int64_t x3988 = 2858604592103782686LL;
	int64_t t68 = -48709797569LL;

	t68 = ((x3985<<x3986)-(x3987-x3988));

	if (t68 != 2858613211833019719LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3997 = INT16_MAX;
	volatile uint8_t x3998 = 14U;
	volatile int64_t x3999 = -1LL;
	volatile uint32_t x4000 = UINT32_MAX;

	t69 = ((x3997<<x3998)-(x3999-x4000));

	if (t69 != 4831821824LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4053 = 13554200;
	uint16_t x4054 = 1U;
	uint8_t x4055 = UINT8_MAX;
	volatile int32_t t70 = -466454;

	t70 = ((x4053<<x4054)-(x4055-x4056));

	if (t70 != 27173680) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x4121 = 1LL;
	uint8_t x4122 = 7U;
	static uint8_t x4123 = 14U;
	uint8_t x4124 = 110U;

	t71 = ((x4121<<x4122)-(x4123-x4124));

	if (t71 != 224LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4251 = 105U;
	int64_t x4252 = 35510LL;
	uint64_t t72 = 107500909923830LLU;

	t72 = ((x4249<<x4250)-(x4251-x4252));

	if (t72 != 35389LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4277 = 5134U;
	uint8_t x4278 = 7U;
	uint8_t x4280 = UINT8_MAX;
	uint32_t t73 = 55U;

	t73 = ((x4277<<x4278)-(x4279-x4280));

	if (t73 != 657400U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4297 = 857LLU;
	uint8_t x4298 = 0U;
	int8_t x4300 = -1;
	volatile uint64_t t74 = 501LLU;

	t74 = ((x4297<<x4298)-(x4299-x4300));

	if (t74 != 9223372036854776664LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4433 = INT8_MAX;
	int8_t x4434 = 2;
	volatile int8_t x4435 = INT8_MIN;
	uint8_t x4436 = 55U;

	t75 = ((x4433<<x4434)-(x4435-x4436));

	if (t75 != 691) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4647 = -1;
	int8_t x4648 = INT8_MIN;
	static int32_t t76 = -5;

	t76 = ((x4645<<x4646)-(x4647-x4648));

	if (t76 != 65408) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4689 = 0;
	int8_t x4690 = 2;
	int16_t x4691 = INT16_MIN;
	int32_t t77 = 64070;

	t77 = ((x4689<<x4690)-(x4691-x4692));

	if (t77 != 32769) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4702 = 46U;
	int64_t x4703 = -65514197663LL;
	uint16_t x4704 = 63U;
	volatile uint64_t t78 = 183LLU;

	t78 = ((x4701<<x4702)-(x4703-x4704));

	if (t78 != 18446673770479571678LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4745 = 6191642422908377290LLU;
	int8_t x4746 = 12;
	int16_t x4747 = INT16_MIN;
	static int16_t x4748 = 157;
	uint64_t t79 = 1160270290LLU;

	t79 = ((x4745<<x4746)-(x4747-x4748));

	if (t79 != 15141006955789492381LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4777 = UINT8_MAX;
	int8_t x4778 = 1;
	static volatile int32_t x4779 = INT32_MIN;
	volatile int16_t x4780 = INT16_MIN;
	int32_t t80 = 19782;

	t80 = ((x4777<<x4778)-(x4779-x4780));

	if (t80 != 2147451390) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4782 = 3U;
	int32_t x4783 = 2;
	int8_t x4784 = INT8_MIN;
	int32_t t81 = 33295;

	t81 = ((x4781<<x4782)-(x4783-x4784));

	if (t81 != 1910) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4813 = INT32_MAX;
	volatile uint8_t x4814 = 0U;
	static int8_t x4815 = 3;
	static int64_t x4816 = -1LL;
	static int64_t t82 = 53574023LL;

	t82 = ((x4813<<x4814)-(x4815-x4816));

	if (t82 != 2147483643LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x5005 = INT16_MAX;
	uint16_t x5006 = 4U;
	volatile int64_t x5007 = -7663256462LL;
	int16_t x5008 = INT16_MIN;
	int64_t t83 = 177892302LL;

	t83 = ((x5005<<x5006)-(x5007-x5008));

	if (t83 != 7663747966LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5037 = 1063962780477484176LLU;
	static int16_t x5039 = -1;
	static int32_t x5040 = -1;
	volatile uint64_t t84 = 1LLU;

	t84 = ((x5037<<x5038)-(x5039-x5040));

	if (t84 != 12753385729430332416LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5097 = 57;
	uint32_t x5098 = 0U;
	int64_t x5099 = 0LL;
	volatile uint64_t x5100 = 60674LLU;
	uint64_t t85 = 3076862594842020313LLU;

	t85 = ((x5097<<x5098)-(x5099-x5100));

	if (t85 != 60731LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5121 = UINT64_MAX;
	uint8_t x5123 = 9U;
	volatile int8_t x5124 = 0;
	volatile uint64_t t86 = 166776LLU;

	t86 = ((x5121<<x5122)-(x5123-x5124));

	if (t86 != 17293822569102704631LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5141 = 2;
	int16_t x5142 = 0;
	int32_t x5143 = 237329;
	static int64_t x5144 = INT64_MAX;
	volatile int64_t t87 = -2671087242993LL;

	t87 = ((x5141<<x5142)-(x5143-x5144));

	if (t87 != 9223372036854538480LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5201 = 8178227294894819LLU;
	uint8_t x5202 = 25U;
	volatile uint64_t t88 = 42LLU;

	t88 = ((x5201<<x5202)-(x5203-x5204));

	if (t88 != 2006806586713964552LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x5261 = UINT32_MAX;
	uint8_t x5262 = 22U;
	static uint32_t x5264 = 3117276U;

	t89 = ((x5261<<x5262)-(x5263-x5264));

	if (t89 != 4293890269U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5265 = 25;
	int8_t x5266 = 0;
	static int8_t x5267 = -1;
	int64_t x5268 = INT64_MIN;
	static int64_t t90 = -3506797922LL;

	t90 = ((x5265<<x5266)-(x5267-x5268));

	if (t90 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x5345 = 1U;
	uint64_t x5346 = 21LLU;
	uint32_t x5348 = 249174U;
	static uint32_t t91 = 53U;

	t91 = ((x5345<<x5346)-(x5347-x5348));

	if (t91 != 2346454U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5417 = 0U;
	static int8_t x5418 = 4;
	int8_t x5419 = INT8_MIN;
	int8_t x5420 = INT8_MAX;
	static volatile int32_t t92 = -403397;

	t92 = ((x5417<<x5418)-(x5419-x5420));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5517 = 927993132179621LLU;
	volatile int16_t x5518 = 4;
	static int16_t x5519 = INT16_MIN;
	int16_t x5520 = 0;
	volatile uint64_t t93 = 11020334689149410LLU;

	t93 = ((x5517<<x5518)-(x5519-x5520));

	if (t93 != 14847890114906704LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5573 = 124629936U;
	volatile uint64_t x5574 = 7LLU;
	static volatile uint32_t x5575 = 2076U;
	uint8_t x5576 = UINT8_MAX;
	volatile uint32_t t94 = 3952U;

	t94 = ((x5573<<x5574)-(x5575-x5576));

	if (t94 != 3067728099U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x5577 = 11;
	uint8_t x5579 = UINT8_MAX;
	uint64_t x5580 = UINT64_MAX;
	volatile uint64_t t95 = 32908718211LLU;

	t95 = ((x5577<<x5578)-(x5579-x5580));

	if (t95 != 18446744073709551382LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5590 = 13U;
	uint64_t x5591 = 5894LLU;
	static int8_t x5592 = 1;
	uint64_t t96 = 2494918231931792959LLU;

	t96 = ((x5589<<x5590)-(x5591-x5592));

	if (t96 != 149755LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5621 = INT16_MAX;
	volatile uint8_t x5622 = 4U;
	int32_t x5623 = 69279;
	uint64_t x5624 = 2992868718LLU;

	t97 = ((x5621<<x5622)-(x5623-x5624));

	if (t97 != 2993323711LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5643 = UINT32_MAX;
	uint16_t x5644 = 1U;
	uint32_t t98 = 2799116U;

	t98 = ((x5641<<x5642)-(x5643-x5644));

	if (t98 != 10U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5645 = 86994152U;
	volatile uint8_t x5646 = 26U;
	int16_t x5647 = -271;
	int16_t x5648 = INT16_MIN;
	static volatile uint32_t t99 = 15697U;

	t99 = ((x5645<<x5646)-(x5647-x5648));

	if (t99 != 2684322063U) { NG(); } else { ; }
	
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

