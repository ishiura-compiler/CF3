#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x146 = -3;
uint64_t t2 = 6598684LLU;
volatile uint8_t x266 = 2U;
int16_t x303 = INT16_MIN;
int32_t t5 = 23286955;
static volatile uint32_t t8 = 2438914U;
int32_t x513 = INT32_MAX;
volatile uint64_t x535 = UINT64_MAX;
static int32_t t10 = 62;
uint64_t x582 = UINT64_MAX;
int32_t t11 = 7432;
int16_t x666 = INT16_MIN;
static int8_t x852 = -7;
static int32_t t15 = 4;
volatile uint32_t x949 = 483587578U;
volatile uint8_t x1045 = 0U;
int32_t x1335 = -1;
static volatile int16_t x1336 = -4;
volatile int32_t t20 = 3;
uint32_t x1337 = 169954090U;
int64_t x1338 = INT64_MAX;
int32_t x1339 = INT32_MIN;
uint64_t x1343 = UINT64_MAX;
volatile int16_t x1344 = -11;
static int64_t t27 = -248955173917906074LL;
volatile int8_t x1584 = -1;
int64_t x1610 = INT64_MAX;
int64_t x1612 = INT64_MAX;
volatile int64_t x1645 = 3796182174LL;
static int64_t x1694 = INT64_MIN;
int64_t x1696 = INT64_MIN;
uint64_t t31 = 96LLU;
volatile int64_t x1705 = 4727988832122250LL;
int64_t t32 = 59707439207723LL;
int16_t x1775 = -1;
int64_t x2127 = INT64_MIN;
static int64_t x2282 = INT64_MAX;
volatile int64_t x2330 = -1LL;
int8_t x2352 = -1;
static uint64_t x2380 = UINT64_MAX;
uint64_t x2722 = UINT64_MAX;
uint8_t x2763 = 1U;
int16_t x2775 = -1;
volatile int8_t x2776 = -1;
uint8_t x3169 = 8U;
int16_t x3479 = -1;
static int8_t x3480 = -1;
volatile int32_t t47 = 1040479500;
uint64_t x3541 = 2804597481518365994LLU;
uint32_t x3665 = 43536U;
static volatile uint32_t t49 = 53U;
static int64_t x3750 = 56732163LL;
int8_t x3751 = -1;
volatile uint8_t x4075 = UINT8_MAX;
volatile uint32_t t52 = 196U;
volatile uint64_t x4085 = 7823930722951207921LLU;
volatile uint64_t t53 = 14121LLU;
volatile int64_t t54 = INT64_MAX;
int64_t x4265 = 33354438777927688LL;
static uint16_t x4267 = UINT16_MAX;
int8_t x4268 = -1;
static int8_t x4433 = 0;
int8_t x4514 = -1;
uint32_t t58 = 48U;
uint8_t x4522 = 33U;
int8_t x4724 = INT8_MIN;
int32_t t62 = -49;
static int8_t x5254 = -1;
uint64_t x5329 = 23235061246LLU;
volatile uint64_t t64 = 87281268LLU;
volatile int64_t x5353 = 1082022848007LL;
int64_t t65 = 8018234LL;
int8_t x5543 = -1;
uint64_t x5924 = UINT64_MAX;
volatile uint32_t t71 = 662U;
static int32_t x5947 = -13034;
uint64_t t73 = UINT64_MAX;
static int64_t x6134 = INT64_MAX;
volatile int8_t x6135 = -1;
volatile int64_t x6138 = INT64_MAX;
static uint32_t t77 = 47U;
uint32_t x6343 = UINT32_MAX;
volatile uint64_t x6351 = UINT64_MAX;
uint32_t x6447 = 18U;
int64_t x6750 = INT64_MIN;
uint32_t x6809 = 88U;
volatile int32_t x6928 = INT32_MIN;
static volatile int32_t t85 = 12305;
int16_t x7047 = -342;
static uint16_t x7109 = UINT16_MAX;
int16_t x7110 = INT16_MIN;
int32_t t88 = -376;
int64_t x7189 = 791925727LL;
int64_t x7192 = -1LL;
volatile uint8_t x7278 = UINT8_MAX;
volatile int8_t x7280 = -1;
static int64_t x7325 = INT64_MAX;
volatile int8_t x7490 = 1;
uint16_t x7491 = 13U;
volatile uint8_t x7653 = UINT8_MAX;
int16_t x7659 = 4;
int8_t x7660 = 0;
static uint8_t x7697 = UINT8_MAX;
int16_t x7698 = -1;
static volatile int16_t x8022 = 210;
volatile int32_t x8082 = 990;
volatile uint64_t x8084 = UINT64_MAX;
uint16_t x8095 = 2104U;
volatile int64_t x8096 = -6LL;


void f0(void) {
	static uint16_t x41 = 40U;
	volatile int64_t x42 = -1LL;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = UINT64_MAX;
	int32_t t0 = 217676969;

	t0 = (x41<<((x42|x43)-x44));

	if (t0 != 40) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x145 = INT32_MAX;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = -1LL;
	static volatile int32_t t1 = INT32_MAX;

	t1 = (x145<<((x146|x147)-x148));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x229 = 3288888LLU;
	int8_t x230 = -3;
	uint16_t x231 = 175U;
	int16_t x232 = -1;

	t2 = (x229<<((x230|x231)-x232));

	if (t2 != 3288888LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int8_t x267 = -1;
	int8_t x268 = -1;
	static volatile int32_t t3 = 127;

	t3 = (x265<<((x266|x267)-x268));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x301 = 0LL;
	uint16_t x302 = 23U;
	int16_t x304 = INT16_MIN;
	int64_t t4 = 21251LL;

	t4 = (x301<<((x302|x303)-x304));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x357 = 0;
	static uint8_t x358 = UINT8_MAX;
	static int8_t x359 = -13;
	int8_t x360 = -1;

	t5 = (x357<<((x358|x359)-x360));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x361 = UINT32_MAX;
	static volatile int16_t x362 = INT16_MIN;
	volatile int16_t x363 = INT16_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x361<<((x362|x363)-x364));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x457 = 6LLU;
	volatile int32_t x458 = INT32_MAX;
	static int8_t x459 = -25;
	volatile uint32_t x460 = UINT32_MAX;
	static uint64_t t7 = 79037426858LLU;

	t7 = (x457<<((x458|x459)-x460));

	if (t7 != 6LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x489 = 3749U;
	volatile int8_t x490 = 8;
	int16_t x491 = -1;
	static volatile int16_t x492 = -10;

	t8 = (x489<<((x490|x491)-x492));

	if (t8 != 1919488U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x514 = -11345;
	volatile int8_t x515 = -1;
	static int64_t x516 = -1LL;
	static int32_t t9 = INT32_MAX;

	t9 = (x513<<((x514|x515)-x516));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x533 = 5U;
	static int16_t x534 = 315;
	int32_t x536 = -1;

	t10 = (x533<<((x534|x535)-x536));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x581 = 2202;
	int32_t x583 = 25;
	int64_t x584 = -1LL;

	t11 = (x581<<((x582|x583)-x584));

	if (t11 != 2202) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x629 = INT32_MAX;
	int16_t x630 = -1;
	int64_t x631 = INT64_MIN;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x629<<((x630|x631)-x632));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x665 = 317;
	volatile int64_t x667 = INT64_MAX;
	int8_t x668 = -15;
	static int32_t t13 = -54507;

	t13 = (x665<<((x666|x667)-x668));

	if (t13 != 5193728) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x845 = 127U;
	int16_t x846 = -1;
	static uint64_t x847 = 514472624421LLU;
	static volatile int16_t x848 = -1;
	int32_t t14 = 1;

	t14 = (x845<<((x846|x847)-x848));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x849 = UINT16_MAX;
	volatile int8_t x850 = INT8_MIN;
	uint16_t x851 = UINT16_MAX;

	t15 = (x849<<((x850|x851)-x852));

	if (t15 != 4194240) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x950 = -1;
	volatile int32_t x951 = INT32_MIN;
	uint32_t x952 = UINT32_MAX;
	static volatile uint32_t t16 = 590837U;

	t16 = (x949<<((x950|x951)-x952));

	if (t16 != 483587578U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x969 = UINT64_MAX;
	static int32_t x970 = -1;
	uint16_t x971 = 3U;
	int16_t x972 = -1;
	uint64_t t17 = UINT64_MAX;

	t17 = (x969<<((x970|x971)-x972));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1046 = -1;
	volatile int64_t x1047 = INT64_MIN;
	int64_t x1048 = -1LL;
	int32_t t18 = -423861813;

	t18 = (x1045<<((x1046|x1047)-x1048));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1193 = 1491679;
	static uint64_t x1194 = UINT64_MAX;
	int64_t x1195 = -1LL;
	int64_t x1196 = -1LL;
	volatile int32_t t19 = 398446181;

	t19 = (x1193<<((x1194|x1195)-x1196));

	if (t19 != 1491679) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1333 = 2521;
	int16_t x1334 = INT16_MIN;

	t20 = (x1333<<((x1334|x1335)-x1336));

	if (t20 != 20168) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1340 = -1;
	uint32_t t21 = 77847U;

	t21 = (x1337<<((x1338|x1339)-x1340));

	if (t21 != 169954090U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1341 = UINT64_MAX;
	uint8_t x1342 = 1U;
	volatile uint64_t t22 = 52360299476LLU;

	t22 = (x1341<<((x1342|x1343)-x1344));

	if (t22 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1357 = 166646U;
	int8_t x1358 = -1;
	int16_t x1359 = -1;
	int64_t x1360 = -1LL;
	volatile uint32_t t23 = 164438U;

	t23 = (x1357<<((x1358|x1359)-x1360));

	if (t23 != 166646U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1465 = 1;
	volatile int32_t x1466 = INT32_MAX;
	int32_t x1467 = INT32_MAX;
	int32_t x1468 = INT32_MAX;
	int32_t t24 = -2058958;

	t24 = (x1465<<((x1466|x1467)-x1468));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1469 = UINT32_MAX;
	uint8_t x1470 = 3U;
	static int16_t x1471 = -1;
	int32_t x1472 = -1;
	uint32_t t25 = UINT32_MAX;

	t25 = (x1469<<((x1470|x1471)-x1472));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1509 = 231434LL;
	int32_t x1510 = -1;
	uint32_t x1511 = 44U;
	int16_t x1512 = -1;
	int64_t t26 = -1378164542250124823LL;

	t26 = (x1509<<((x1510|x1511)-x1512));

	if (t26 != 231434LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1577 = 262904522338LL;
	static int8_t x1578 = INT8_MIN;
	uint8_t x1579 = UINT8_MAX;
	int8_t x1580 = -13;

	t27 = (x1577<<((x1578|x1579)-x1580));

	if (t27 != 1076856923496448LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1581 = 29591;
	int64_t x1582 = 2LL;
	int32_t x1583 = -1;
	int32_t t28 = 584;

	t28 = (x1581<<((x1582|x1583)-x1584));

	if (t28 != 29591) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1609 = 0LL;
	volatile int8_t x1611 = 46;
	static volatile int64_t t29 = 3771044LL;

	t29 = (x1609<<((x1610|x1611)-x1612));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1646 = -1;
	int32_t x1647 = INT32_MIN;
	int64_t x1648 = -15LL;
	int64_t t30 = 165714LL;

	t30 = (x1645<<((x1646|x1647)-x1648));

	if (t30 != 62196648738816LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1693 = 126222258887280405LLU;
	uint8_t x1695 = 47U;

	t31 = (x1693<<((x1694|x1695)-x1696));

	if (t31 != 11784372112456679424LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1706 = -1;
	uint16_t x1707 = 11U;
	int64_t x1708 = -1LL;

	t32 = (x1705<<((x1706|x1707)-x1708));

	if (t32 != 4727988832122250LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1773 = 1U;
	uint32_t x1774 = 1920164U;
	int8_t x1776 = -1;
	volatile int32_t t33 = 1223;

	t33 = (x1773<<((x1774|x1775)-x1776));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1877 = 0U;
	int64_t x1878 = INT64_MIN;
	volatile int64_t x1879 = 1LL;
	static int64_t x1880 = INT64_MIN;
	volatile int32_t t34 = 2174;

	t34 = (x1877<<((x1878|x1879)-x1880));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2125 = INT8_MAX;
	int32_t x2126 = -1;
	int16_t x2128 = -3;
	volatile int32_t t35 = -205;

	t35 = (x2125<<((x2126|x2127)-x2128));

	if (t35 != 508) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x2193 = 12658U;
	int32_t x2194 = 65780317;
	uint32_t x2195 = UINT32_MAX;
	int16_t x2196 = -4;
	volatile int32_t t36 = 27989205;

	t36 = (x2193<<((x2194|x2195)-x2196));

	if (t36 != 101264) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2281 = 24U;
	int32_t x2283 = -1;
	volatile int8_t x2284 = -5;
	static int32_t t37 = 2894;

	t37 = (x2281<<((x2282|x2283)-x2284));

	if (t37 != 384) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2329 = 54267177221127622LLU;
	uint8_t x2331 = 0U;
	static int16_t x2332 = -1;
	static uint64_t t38 = 55029219025930LLU;

	t38 = (x2329<<((x2330|x2331)-x2332));

	if (t38 != 54267177221127622LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2349 = 1610900U;
	int16_t x2350 = -16146;
	int64_t x2351 = -1LL;
	uint32_t t39 = 46169U;

	t39 = (x2349<<((x2350|x2351)-x2352));

	if (t39 != 1610900U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2377 = 20768829U;
	uint16_t x2378 = UINT16_MAX;
	int16_t x2379 = -1;
	volatile uint32_t t40 = 63088U;

	t40 = (x2377<<((x2378|x2379)-x2380));

	if (t40 != 20768829U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2721 = 0U;
	static uint16_t x2723 = UINT16_MAX;
	uint64_t x2724 = UINT64_MAX;
	volatile int32_t t41 = 15;

	t41 = (x2721<<((x2722|x2723)-x2724));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2761 = UINT32_MAX;
	int8_t x2762 = -1;
	uint64_t x2764 = UINT64_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (x2761<<((x2762|x2763)-x2764));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2773 = 4427;
	int64_t x2774 = -1LL;
	volatile int32_t t43 = -3282;

	t43 = (x2773<<((x2774|x2775)-x2776));

	if (t43 != 4427) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x3121 = UINT8_MAX;
	static int32_t x3122 = INT32_MAX;
	int8_t x3123 = INT8_MAX;
	volatile int32_t x3124 = INT32_MAX;
	static volatile int32_t t44 = 52;

	t44 = (x3121<<((x3122|x3123)-x3124));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3170 = INT8_MIN;
	uint16_t x3171 = UINT16_MAX;
	int16_t x3172 = -24;
	volatile int32_t t45 = 121;

	t45 = (x3169<<((x3170|x3171)-x3172));

	if (t45 != 67108864) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3477 = 30;
	static int8_t x3478 = 0;
	int32_t t46 = 8298686;

	t46 = (x3477<<((x3478|x3479)-x3480));

	if (t46 != 30) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3513 = INT16_MAX;
	int16_t x3514 = -1;
	int64_t x3515 = -1LL;
	volatile int32_t x3516 = -1;

	t47 = (x3513<<((x3514|x3515)-x3516));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3542 = -32;
	static int32_t x3543 = -1;
	volatile int64_t x3544 = -1LL;
	volatile uint64_t t48 = 247916877LLU;

	t48 = (x3541<<((x3542|x3543)-x3544));

	if (t48 != 2804597481518365994LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3666 = INT16_MIN;
	volatile int8_t x3667 = 1;
	int16_t x3668 = INT16_MIN;

	t49 = (x3665<<((x3666|x3667)-x3668));

	if (t49 != 87072U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3705 = 207U;
	uint32_t x3706 = 10230999U;
	static volatile uint64_t x3707 = UINT64_MAX;
	int8_t x3708 = -1;
	volatile uint32_t t50 = 9659386U;

	t50 = (x3705<<((x3706|x3707)-x3708));

	if (t50 != 207U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x3749 = 5U;
	volatile int8_t x3752 = -14;
	volatile uint32_t t51 = 20088U;

	t51 = (x3749<<((x3750|x3751)-x3752));

	if (t51 != 40960U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x4073 = 1145U;
	static int8_t x4074 = -59;
	int64_t x4076 = -1LL;

	t52 = (x4073<<((x4074|x4075)-x4076));

	if (t52 != 1145U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x4086 = 0;
	uint8_t x4087 = 3U;
	static uint16_t x4088 = 0U;

	t53 = (x4085<<((x4086|x4087)-x4088));

	if (t53 != 7251213562481008520LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x4137 = INT64_MAX;
	int16_t x4138 = -1;
	uint8_t x4139 = 1U;
	int64_t x4140 = -1LL;

	t54 = (x4137<<((x4138|x4139)-x4140));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4266 = INT16_MIN;
	volatile int64_t t55 = 12115795742LL;

	t55 = (x4265<<((x4266|x4267)-x4268));

	if (t55 != 33354438777927688LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4434 = -1;
	int64_t x4435 = INT64_MIN;
	int16_t x4436 = -1;
	static volatile int32_t t56 = 5;

	t56 = (x4433<<((x4434|x4435)-x4436));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x4469 = 1LLU;
	volatile int64_t x4470 = -1LL;
	int8_t x4471 = INT8_MAX;
	volatile int8_t x4472 = -1;
	uint64_t t57 = 860900887774609234LLU;

	t57 = (x4469<<((x4470|x4471)-x4472));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x4513 = UINT32_MAX;
	int64_t x4515 = -1LL;
	int8_t x4516 = -4;

	t58 = (x4513<<((x4514|x4515)-x4516));

	if (t58 != 4294967288U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4521 = INT16_MAX;
	volatile int64_t x4523 = -1LL;
	int16_t x4524 = -1;
	static volatile int32_t t59 = 480584042;

	t59 = (x4521<<((x4522|x4523)-x4524));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4721 = 384892U;
	uint8_t x4722 = 3U;
	int8_t x4723 = INT8_MIN;
	volatile uint32_t t60 = 8833743U;

	t60 = (x4721<<((x4722|x4723)-x4724));

	if (t60 != 3079136U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4877 = INT32_MAX;
	int8_t x4878 = INT8_MAX;
	int8_t x4879 = INT8_MIN;
	int64_t x4880 = -1LL;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x4877<<((x4878|x4879)-x4880));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x5137 = 160U;
	uint64_t x5138 = 1485503191962730876LLU;
	volatile int16_t x5139 = -1;
	volatile int8_t x5140 = -1;

	t62 = (x5137<<((x5138|x5139)-x5140));

	if (t62 != 160) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x5253 = 22763360;
	int32_t x5255 = 1783464;
	uint64_t x5256 = UINT64_MAX;
	volatile int32_t t63 = 1;

	t63 = (x5253<<((x5254|x5255)-x5256));

	if (t63 != 22763360) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x5330 = INT16_MAX;
	static volatile int32_t x5331 = 1;
	int16_t x5332 = INT16_MAX;

	t64 = (x5329<<((x5330|x5331)-x5332));

	if (t64 != 23235061246LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5354 = -3;
	int32_t x5355 = 0;
	static int16_t x5356 = -16;

	t65 = (x5353<<((x5354|x5355)-x5356));

	if (t65 != 8863931170873344LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x5529 = INT32_MAX;
	int32_t x5530 = -1;
	int64_t x5531 = 6033LL;
	int32_t x5532 = -1;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x5529<<((x5530|x5531)-x5532));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x5541 = 2U;
	uint64_t x5542 = UINT64_MAX;
	int8_t x5544 = -1;
	volatile int32_t t67 = 48112;

	t67 = (x5541<<((x5542|x5543)-x5544));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x5573 = 7281381046LLU;
	int8_t x5574 = -1;
	static uint16_t x5575 = 13U;
	int64_t x5576 = -1LL;
	uint64_t t68 = 90242147450745435LLU;

	t68 = (x5573<<((x5574|x5575)-x5576));

	if (t68 != 7281381046LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5873 = 291;
	uint16_t x5874 = 4609U;
	int64_t x5875 = -1LL;
	static int8_t x5876 = -1;
	volatile int32_t t69 = 12420;

	t69 = (x5873<<((x5874|x5875)-x5876));

	if (t69 != 291) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x5901 = INT16_MAX;
	int16_t x5902 = -1;
	volatile int16_t x5903 = -20;
	int16_t x5904 = -1;
	volatile int32_t t70 = -2775;

	t70 = (x5901<<((x5902|x5903)-x5904));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5921 = 556238815U;
	int16_t x5922 = -3;
	int64_t x5923 = INT64_MAX;

	t71 = (x5921<<((x5922|x5923)-x5924));

	if (t71 != 556238815U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x5945 = INT8_MAX;
	uint64_t x5946 = 114665LLU;
	int32_t x5948 = -1;
	volatile int32_t t72 = 109;

	t72 = (x5945<<((x5946|x5947)-x5948));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x6109 = UINT64_MAX;
	int32_t x6110 = -1;
	int32_t x6111 = 369444747;
	volatile int64_t x6112 = -1LL;

	t73 = (x6109<<((x6110|x6111)-x6112));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x6125 = 0U;
	int32_t x6126 = -1;
	static uint8_t x6127 = 52U;
	uint64_t x6128 = UINT64_MAX;
	static volatile int32_t t74 = -3538936;

	t74 = (x6125<<((x6126|x6127)-x6128));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x6133 = 6113U;
	int8_t x6136 = -11;
	int32_t t75 = 9;

	t75 = (x6133<<((x6134|x6135)-x6136));

	if (t75 != 6259712) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x6137 = UINT32_MAX;
	int8_t x6139 = INT8_MIN;
	int32_t x6140 = -1;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x6137<<((x6138|x6139)-x6140));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x6221 = UINT32_MAX;
	volatile int16_t x6222 = -2;
	static int32_t x6223 = -23;
	volatile int8_t x6224 = -28;

	t77 = (x6221<<((x6222|x6223)-x6224));

	if (t77 != 4160749568U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x6341 = 6U;
	int8_t x6342 = -5;
	int32_t x6344 = -1;
	static int32_t t78 = -44216;

	t78 = (x6341<<((x6342|x6343)-x6344));

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x6349 = INT16_MAX;
	int32_t x6350 = 40464368;
	volatile int8_t x6352 = -1;
	volatile int32_t t79 = -329601099;

	t79 = (x6349<<((x6350|x6351)-x6352));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x6445 = 70;
	int8_t x6446 = INT8_MIN;
	int16_t x6448 = -112;
	int32_t t80 = -112617;

	t80 = (x6445<<((x6446|x6447)-x6448));

	if (t80 != 280) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x6453 = UINT32_MAX;
	uint16_t x6454 = 1190U;
	volatile int16_t x6455 = -1;
	volatile int32_t x6456 = -1;
	static volatile uint32_t t81 = UINT32_MAX;

	t81 = (x6453<<((x6454|x6455)-x6456));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6749 = 3;
	static int8_t x6751 = -1;
	int64_t x6752 = -1LL;
	volatile int32_t t82 = -6438;

	t82 = (x6749<<((x6750|x6751)-x6752));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x6810 = INT32_MAX;
	int32_t x6811 = -1;
	static volatile int32_t x6812 = -1;
	uint32_t t83 = 19224621U;

	t83 = (x6809<<((x6810|x6811)-x6812));

	if (t83 != 88U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x6865 = UINT8_MAX;
	volatile int8_t x6866 = INT8_MIN;
	static int8_t x6867 = INT8_MIN;
	int8_t x6868 = INT8_MIN;
	int32_t t84 = -255465311;

	t84 = (x6865<<((x6866|x6867)-x6868));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x6925 = 1;
	static int32_t x6926 = INT32_MIN;
	uint8_t x6927 = 0U;

	t85 = (x6925<<((x6926|x6927)-x6928));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x7013 = INT64_MAX;
	static uint64_t x7014 = 24142323LLU;
	volatile uint64_t x7015 = UINT64_MAX;
	int32_t x7016 = -1;
	int64_t t86 = INT64_MAX;

	t86 = (x7013<<((x7014|x7015)-x7016));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x7045 = INT64_MAX;
	static int16_t x7046 = -1;
	int16_t x7048 = -1;
	volatile int64_t t87 = INT64_MAX;

	t87 = (x7045<<((x7046|x7047)-x7048));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x7111 = -1LL;
	int8_t x7112 = -1;

	t88 = (x7109<<((x7110|x7111)-x7112));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x7190 = INT8_MIN;
	static int32_t x7191 = INT32_MAX;
	int64_t t89 = -12188594LL;

	t89 = (x7189<<((x7190|x7191)-x7192));

	if (t89 != 791925727LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x7277 = UINT64_MAX;
	int8_t x7279 = -1;
	static uint64_t t90 = UINT64_MAX;

	t90 = (x7277<<((x7278|x7279)-x7280));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x7326 = 6;
	int64_t x7327 = -1LL;
	uint64_t x7328 = UINT64_MAX;
	int64_t t91 = INT64_MAX;

	t91 = (x7325<<((x7326|x7327)-x7328));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x7489 = UINT16_MAX;
	int64_t x7492 = -1LL;
	volatile int32_t t92 = -1471752;

	t92 = (x7489<<((x7490|x7491)-x7492));

	if (t92 != 1073725440) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x7525 = 1;
	static int64_t x7526 = 6489LL;
	int8_t x7527 = -1;
	int32_t x7528 = -8;
	static volatile int32_t t93 = 11541;

	t93 = (x7525<<((x7526|x7527)-x7528));

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x7654 = INT32_MIN;
	int64_t x7655 = -1LL;
	int16_t x7656 = -1;
	static int32_t t94 = -1;

	t94 = (x7653<<((x7654|x7655)-x7656));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x7657 = 1LL;
	volatile uint16_t x7658 = 18U;
	static volatile int64_t t95 = -10362LL;

	t95 = (x7657<<((x7658|x7659)-x7660));

	if (t95 != 4194304LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x7699 = INT32_MIN;
	uint32_t x7700 = UINT32_MAX;
	volatile int32_t t96 = 4491;

	t96 = (x7697<<((x7698|x7699)-x7700));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x8021 = 71U;
	uint32_t x8023 = UINT32_MAX;
	uint32_t x8024 = UINT32_MAX;
	volatile int32_t t97 = 5;

	t97 = (x8021<<((x8022|x8023)-x8024));

	if (t97 != 71) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x8081 = 1642983483446LLU;
	int16_t x8083 = -1;
	uint64_t t98 = 249485LLU;

	t98 = (x8081<<((x8082|x8083)-x8084));

	if (t98 != 1642983483446LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x8093 = INT16_MAX;
	volatile int32_t x8094 = -1;
	volatile int32_t t99 = -99421157;

	t99 = (x8093<<((x8094|x8095)-x8096));

	if (t99 != 1048544) { NG(); } else { ; }
	
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

