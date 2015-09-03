#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x7 = INT8_MIN;
int32_t t1 = -12158666;
volatile uint32_t x35 = 253U;
static volatile uint32_t t3 = 15U;
static uint32_t x262 = 92976U;
int8_t x264 = -1;
static int32_t x271 = -137591;
volatile uint32_t t5 = UINT32_MAX;
int16_t x288 = -1;
int64_t x297 = 910981033357990LL;
int8_t x322 = -6;
uint8_t x561 = UINT8_MAX;
uint8_t x562 = 8U;
int64_t x716 = INT64_MIN;
int8_t x850 = INT8_MAX;
static int8_t x851 = -1;
volatile uint64_t x921 = 556961845478729LLU;
uint64_t t14 = 77643582074411LLU;
static uint8_t x989 = UINT8_MAX;
volatile uint32_t x1085 = UINT32_MAX;
uint8_t x1091 = 20U;
uint16_t x1092 = 4U;
volatile int64_t x1123 = -1LL;
volatile uint8_t x1385 = 2U;
uint64_t x1387 = 683017772241601LLU;
volatile int32_t t20 = 367454;
uint16_t x1442 = 268U;
volatile int32_t t22 = 558;
uint16_t x1562 = 375U;
static uint8_t x1564 = UINT8_MAX;
static int64_t x1576 = -1LL;
uint32_t x1644 = 610U;
uint32_t x1694 = 0U;
uint8_t x1898 = 2U;
int32_t t28 = -6;
int64_t x2007 = INT64_MIN;
uint64_t x2008 = 15651967330LLU;
int32_t x2298 = -1;
static uint16_t x2300 = 34U;
volatile uint64_t t30 = 12966056296357LLU;
volatile uint8_t x2356 = 0U;
static int8_t x2433 = 31;
int64_t x2436 = INT64_MIN;
volatile uint64_t x2569 = 8404579214LLU;
volatile int64_t x2653 = INT64_MAX;
int64_t x2654 = INT64_MIN;
static int64_t t34 = INT64_MAX;
static volatile uint32_t x2681 = UINT32_MAX;
volatile uint16_t x2682 = 0U;
static uint32_t x2699 = UINT32_MAX;
int64_t x2838 = INT64_MIN;
static int8_t x2939 = -1;
volatile int32_t t40 = -1;
uint16_t x3210 = 2U;
volatile uint64_t t41 = 16115761479629LLU;
int32_t x3439 = INT32_MIN;
uint8_t x3647 = 1U;
static int8_t x3648 = -1;
int32_t t45 = 1;
int8_t x3916 = INT8_MIN;
volatile uint32_t x3977 = UINT32_MAX;
static int8_t x4024 = 42;
volatile int32_t t51 = INT32_MAX;
volatile uint32_t x4287 = UINT32_MAX;
uint32_t t52 = 777438019U;
int8_t x4422 = INT8_MAX;
static int64_t x4424 = -1LL;
int16_t x4516 = -1;
int64_t t59 = INT64_MAX;
uint16_t x4763 = 21675U;
int8_t x4863 = -1;
volatile int64_t t62 = INT64_MAX;
int8_t x5098 = 0;
uint32_t x5361 = 596U;
uint8_t x5364 = 74U;
int16_t x5594 = 11192;
int16_t x5611 = -1;
int32_t x5688 = -1;
volatile uint64_t t71 = 6608948293118LLU;
uint8_t x5854 = 5U;
static int32_t x5859 = INT32_MAX;
uint32_t x5860 = UINT32_MAX;
int32_t x5867 = -1;
int8_t x6225 = 4;
int16_t x6292 = -1;
volatile int32_t t78 = -14724260;
static uint16_t x6385 = 6U;
uint64_t x6387 = UINT64_MAX;
int64_t x6453 = 13LL;
uint32_t x6454 = 93500590U;
uint16_t x6549 = 7U;
int8_t x6551 = -1;
uint16_t x6777 = 6686U;
volatile int8_t x6780 = -1;
uint64_t x6798 = UINT64_MAX;
int64_t x6800 = INT64_MAX;
int64_t x6991 = INT64_MAX;
int8_t x7027 = -1;
uint64_t t89 = UINT64_MAX;
uint32_t x7114 = 1U;
static int32_t x7115 = -1;
int16_t x7194 = 0;
static int8_t x7278 = -1;
static uint8_t x7313 = 21U;
uint32_t x7797 = 2836021U;
volatile uint32_t x7800 = UINT32_MAX;
volatile uint32_t x7833 = 96809132U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MIN;
	uint32_t x4 = 20U;
	int32_t t0 = INT32_MAX;

	t0 = (x1<<(x2*(x3-x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 10;
	static volatile uint16_t x6 = UINT16_MAX;
	int8_t x8 = INT8_MIN;

	t1 = (x5<<(x6*(x7-x8)));

	if (t1 != 10) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x33 = 9058093761471846LLU;
	static uint16_t x34 = 0U;
	volatile int64_t x36 = -760843716654LL;
	uint64_t t2 = 133410435967165LLU;

	t2 = (x33<<(x34*(x35-x36)));

	if (t2 != 9058093761471846LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x61 = 11968U;
	uint32_t x62 = 2U;
	int16_t x63 = -1;
	volatile int16_t x64 = -12;

	t3 = (x61<<(x62*(x63-x64)));

	if (t3 != 2952790016U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x261 = 1195;
	volatile int64_t x263 = -1LL;
	volatile int32_t t4 = 185821523;

	t4 = (x261<<(x262*(x263-x264)));

	if (t4 != 1195) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = 0U;
	int8_t x272 = INT8_MAX;

	t5 = (x269<<(x270*(x271-x272)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x285 = 2U;
	int64_t x286 = 100277208146LL;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t6 = 196560023;

	t6 = (x285<<(x286*(x287-x288)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x298 = -1;
	int32_t x299 = -1;
	uint8_t x300 = 3U;
	volatile int64_t t7 = 0LL;

	t7 = (x297<<(x298*(x299-x300)));

	if (t7 != 14575696533727840LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x321 = 416U;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = -1;
	volatile uint32_t t8 = 3U;

	t8 = (x321<<(x322*(x323-x324)));

	if (t8 != 416U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x563 = 1;
	int16_t x564 = 0;
	int32_t t9 = -7;

	t9 = (x561<<(x562*(x563-x564)));

	if (t9 != 65280) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x597 = 5U;
	uint8_t x598 = 1U;
	int16_t x599 = 0;
	volatile int64_t x600 = -1LL;
	static int32_t t10 = -36;

	t10 = (x597<<(x598*(x599-x600)));

	if (t10 != 10) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x649 = INT8_MAX;
	static uint8_t x650 = 2U;
	int16_t x651 = 1;
	int32_t x652 = -1;
	static int32_t t11 = 248249150;

	t11 = (x649<<(x650*(x651-x652)));

	if (t11 != 2032) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x713 = UINT32_MAX;
	int64_t x714 = INT64_MIN;
	static int64_t x715 = INT64_MIN;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x713<<(x714*(x715-x716)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x849 = 1;
	int8_t x852 = -1;
	static volatile int32_t t13 = 288696;

	t13 = (x849<<(x850*(x851-x852)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x922 = 268791469588LLU;
	int16_t x923 = -1;
	uint32_t x924 = UINT32_MAX;

	t14 = (x921<<(x922*(x923-x924)));

	if (t14 != 556961845478729LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x990 = INT64_MAX;
	int64_t x991 = INT64_MIN;
	int64_t x992 = INT64_MIN;
	static int32_t t15 = -919756;

	t15 = (x989<<(x990*(x991-x992)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1086 = 0U;
	static uint64_t x1087 = UINT64_MAX;
	static volatile int32_t x1088 = INT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = (x1085<<(x1086*(x1087-x1088)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1089 = 780853U;
	static uint8_t x1090 = 1U;
	volatile uint32_t t17 = 217013648U;

	t17 = (x1089<<(x1090*(x1091-x1092)));

	if (t17 != 3929341952U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1121 = 0U;
	uint32_t x1122 = UINT32_MAX;
	static int16_t x1124 = -1;
	int32_t t18 = 18530;

	t18 = (x1121<<(x1122*(x1123-x1124)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1293 = UINT8_MAX;
	static uint32_t x1294 = 3U;
	volatile uint32_t x1295 = UINT32_MAX;
	volatile int32_t x1296 = -1;
	volatile int32_t t19 = 35;

	t19 = (x1293<<(x1294*(x1295-x1296)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1386 = 0;
	uint16_t x1388 = 0U;

	t20 = (x1385<<(x1386*(x1387-x1388)));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1441 = 1U;
	int16_t x1443 = -1;
	uint64_t x1444 = UINT64_MAX;
	int32_t t21 = 3;

	t21 = (x1441<<(x1442*(x1443-x1444)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1477 = UINT16_MAX;
	int64_t x1478 = -34818LL;
	int64_t x1479 = -1LL;
	static volatile int8_t x1480 = -1;

	t22 = (x1477<<(x1478*(x1479-x1480)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1509 = INT64_MAX;
	static int8_t x1510 = -1;
	uint64_t x1511 = UINT64_MAX;
	int8_t x1512 = -1;
	int64_t t23 = INT64_MAX;

	t23 = (x1509<<(x1510*(x1511-x1512)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1561 = 2936;
	static uint8_t x1563 = UINT8_MAX;
	int32_t t24 = 1;

	t24 = (x1561<<(x1562*(x1563-x1564)));

	if (t24 != 2936) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1573 = 61996958;
	static int32_t x1574 = -9712608;
	static volatile int16_t x1575 = -1;
	static int32_t t25 = -12215187;

	t25 = (x1573<<(x1574*(x1575-x1576)));

	if (t25 != 61996958) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1641 = INT16_MAX;
	int32_t x1642 = INT32_MIN;
	static int32_t x1643 = INT32_MIN;
	int32_t t26 = 61146959;

	t26 = (x1641<<(x1642*(x1643-x1644)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1693 = 19U;
	uint16_t x1695 = 925U;
	int8_t x1696 = 1;
	int32_t t27 = 564201860;

	t27 = (x1693<<(x1694*(x1695-x1696)));

	if (t27 != 19) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1897 = 61U;
	int64_t x1899 = INT64_MAX;
	uint64_t x1900 = UINT64_MAX;

	t28 = (x1897<<(x1898*(x1899-x1900)));

	if (t28 != 61) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x2005 = 56U;
	static int64_t x2006 = INT64_MIN;
	static int32_t t29 = -194628;

	t29 = (x2005<<(x2006*(x2007-x2008)));

	if (t29 != 56) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2297 = 491831LLU;
	volatile int8_t x2299 = -17;

	t30 = (x2297<<(x2298*(x2299-x2300)));

	if (t30 != 700309742056112128LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x2353 = 8U;
	static uint32_t x2354 = UINT32_MAX;
	static uint32_t x2355 = UINT32_MAX;
	int32_t t31 = -17685870;

	t31 = (x2353<<(x2354*(x2355-x2356)));

	if (t31 != 16) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2434 = 0;
	int8_t x2435 = INT8_MIN;
	int32_t t32 = 48862;

	t32 = (x2433<<(x2434*(x2435-x2436)));

	if (t32 != 31) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2570 = INT64_MIN;
	int16_t x2571 = -1;
	uint32_t x2572 = UINT32_MAX;
	static uint64_t t33 = 7549139756279317247LLU;

	t33 = (x2569<<(x2570*(x2571-x2572)));

	if (t33 != 8404579214LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2655 = -1;
	int64_t x2656 = -1LL;

	t34 = (x2653<<(x2654*(x2655-x2656)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2683 = -979LL;
	int16_t x2684 = 415;
	static volatile uint32_t t35 = UINT32_MAX;

	t35 = (x2681<<(x2682*(x2683-x2684)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2697 = INT64_MAX;
	static volatile int16_t x2698 = -1;
	static int16_t x2700 = -1;
	static int64_t t36 = INT64_MAX;

	t36 = (x2697<<(x2698*(x2699-x2700)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2813 = INT16_MAX;
	static volatile int64_t x2814 = 0LL;
	int16_t x2815 = INT16_MIN;
	uint8_t x2816 = 42U;
	int32_t t37 = 103;

	t37 = (x2813<<(x2814*(x2815-x2816)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2837 = INT16_MAX;
	int8_t x2839 = -1;
	int16_t x2840 = -1;
	int32_t t38 = -168952;

	t38 = (x2837<<(x2838*(x2839-x2840)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2937 = 15879;
	volatile int32_t x2938 = INT32_MIN;
	uint64_t x2940 = UINT64_MAX;
	volatile int32_t t39 = -46322897;

	t39 = (x2937<<(x2938*(x2939-x2940)));

	if (t39 != 15879) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3033 = INT16_MAX;
	int32_t x3034 = 449054494;
	uint32_t x3035 = UINT32_MAX;
	volatile int16_t x3036 = -1;

	t40 = (x3033<<(x3034*(x3035-x3036)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3209 = 416LLU;
	static uint8_t x3211 = 3U;
	volatile int64_t x3212 = -1LL;

	t41 = (x3209<<(x3210*(x3211-x3212)));

	if (t41 != 106496LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3437 = 95;
	volatile int64_t x3438 = INT64_MIN;
	int32_t x3440 = INT32_MIN;
	int32_t t42 = 432;

	t42 = (x3437<<(x3438*(x3439-x3440)));

	if (t42 != 95) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3625 = INT8_MAX;
	int16_t x3626 = -1;
	int32_t x3627 = INT32_MIN;
	static int32_t x3628 = INT32_MIN;
	volatile int32_t t43 = 0;

	t43 = (x3625<<(x3626*(x3627-x3628)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x3645 = UINT64_MAX;
	static int8_t x3646 = 1;
	uint64_t t44 = 53327962169LLU;

	t44 = (x3645<<(x3646*(x3647-x3648)));

	if (t44 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3717 = 3;
	volatile int32_t x3718 = -1;
	uint64_t x3719 = UINT64_MAX;
	volatile uint64_t x3720 = UINT64_MAX;

	t45 = (x3717<<(x3718*(x3719-x3720)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3913 = 4132964U;
	volatile uint8_t x3914 = UINT8_MAX;
	volatile int8_t x3915 = INT8_MIN;
	static uint32_t t46 = 109U;

	t46 = (x3913<<(x3914*(x3915-x3916)));

	if (t46 != 4132964U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3941 = 357;
	int8_t x3942 = -1;
	static int64_t x3943 = -1LL;
	int8_t x3944 = 12;
	int32_t t47 = -35187325;

	t47 = (x3941<<(x3942*(x3943-x3944)));

	if (t47 != 2924544) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x3978 = 40689001;
	int64_t x3979 = -1LL;
	volatile int32_t x3980 = -1;
	uint32_t t48 = UINT32_MAX;

	t48 = (x3977<<(x3978*(x3979-x3980)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x4001 = 43;
	volatile uint64_t x4002 = 15350704237LLU;
	volatile uint64_t x4003 = UINT64_MAX;
	int16_t x4004 = -1;
	static int32_t t49 = 1;

	t49 = (x4001<<(x4002*(x4003-x4004)));

	if (t49 != 43) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x4021 = 1U;
	uint8_t x4022 = 0U;
	uint16_t x4023 = UINT16_MAX;
	int32_t t50 = 3921;

	t50 = (x4021<<(x4022*(x4023-x4024)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x4033 = INT32_MAX;
	volatile int32_t x4034 = INT32_MIN;
	uint32_t x4035 = 836000U;
	volatile int16_t x4036 = INT16_MIN;

	t51 = (x4033<<(x4034*(x4035-x4036)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x4285 = 24642685U;
	int8_t x4286 = INT8_MIN;
	int16_t x4288 = -1;

	t52 = (x4285<<(x4286*(x4287-x4288)));

	if (t52 != 24642685U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4313 = INT16_MAX;
	uint64_t x4314 = UINT64_MAX;
	int8_t x4315 = -5;
	int8_t x4316 = -1;
	volatile int32_t t53 = 193;

	t53 = (x4313<<(x4314*(x4315-x4316)));

	if (t53 != 524272) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4337 = 132880947LLU;
	int64_t x4338 = 0LL;
	int32_t x4339 = -114196160;
	int16_t x4340 = INT16_MIN;
	volatile uint64_t t54 = 65994367129365LLU;

	t54 = (x4337<<(x4338*(x4339-x4340)));

	if (t54 != 132880947LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4405 = INT8_MAX;
	int64_t x4406 = INT64_MIN;
	uint8_t x4407 = UINT8_MAX;
	uint8_t x4408 = UINT8_MAX;
	int32_t t55 = 3781;

	t55 = (x4405<<(x4406*(x4407-x4408)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x4421 = UINT32_MAX;
	uint64_t x4423 = UINT64_MAX;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x4421<<(x4422*(x4423-x4424)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4513 = UINT16_MAX;
	static volatile int16_t x4514 = -1;
	uint32_t x4515 = UINT32_MAX;
	volatile int32_t t57 = 152500;

	t57 = (x4513<<(x4514*(x4515-x4516)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x4569 = UINT64_MAX;
	int8_t x4570 = INT8_MIN;
	int32_t x4571 = INT32_MIN;
	int32_t x4572 = INT32_MIN;
	uint64_t t58 = UINT64_MAX;

	t58 = (x4569<<(x4570*(x4571-x4572)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x4661 = INT64_MAX;
	int32_t x4662 = INT32_MIN;
	uint8_t x4663 = 0U;
	volatile uint32_t x4664 = 88U;

	t59 = (x4661<<(x4662*(x4663-x4664)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4761 = 73520LLU;
	volatile uint8_t x4762 = 0U;
	int8_t x4764 = INT8_MIN;
	volatile uint64_t t60 = 118129767LLU;

	t60 = (x4761<<(x4762*(x4763-x4764)));

	if (t60 != 73520LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4817 = UINT8_MAX;
	uint64_t x4818 = 205160234169790LLU;
	static int16_t x4819 = -1;
	uint64_t x4820 = UINT64_MAX;
	int32_t t61 = 89322;

	t61 = (x4817<<(x4818*(x4819-x4820)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4861 = INT64_MAX;
	uint32_t x4862 = UINT32_MAX;
	int16_t x4864 = -1;

	t62 = (x4861<<(x4862*(x4863-x4864)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4877 = 60678139587592872LLU;
	volatile int32_t x4878 = -105163346;
	volatile int8_t x4879 = -1;
	uint64_t x4880 = UINT64_MAX;
	volatile uint64_t t63 = 82476527LLU;

	t63 = (x4877<<(x4878*(x4879-x4880)));

	if (t63 != 60678139587592872LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x5097 = UINT16_MAX;
	uint64_t x5099 = 1LLU;
	uint8_t x5100 = UINT8_MAX;
	volatile int32_t t64 = -71706;

	t64 = (x5097<<(x5098*(x5099-x5100)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x5205 = UINT8_MAX;
	static int32_t x5206 = INT32_MAX;
	int64_t x5207 = INT64_MIN;
	int64_t x5208 = INT64_MIN;
	int32_t t65 = -1;

	t65 = (x5205<<(x5206*(x5207-x5208)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x5362 = 0;
	uint8_t x5363 = 58U;
	volatile uint32_t t66 = 88810U;

	t66 = (x5361<<(x5362*(x5363-x5364)));

	if (t66 != 596U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x5385 = 47U;
	volatile int16_t x5386 = -648;
	uint32_t x5387 = UINT32_MAX;
	static int32_t x5388 = INT32_MAX;
	int32_t t67 = 994;

	t67 = (x5385<<(x5386*(x5387-x5388)));

	if (t67 != 47) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x5581 = 380198404U;
	int32_t x5582 = INT32_MIN;
	volatile uint32_t x5583 = 881U;
	volatile int8_t x5584 = -25;
	volatile uint32_t t68 = 156U;

	t68 = (x5581<<(x5582*(x5583-x5584)));

	if (t68 != 380198404U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x5593 = UINT16_MAX;
	uint64_t x5595 = UINT64_MAX;
	volatile int64_t x5596 = INT64_MAX;
	int32_t t69 = -1;

	t69 = (x5593<<(x5594*(x5595-x5596)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x5609 = 1;
	volatile uint64_t x5610 = 6442817347303534071LLU;
	int16_t x5612 = -1;
	static volatile int32_t t70 = 106;

	t70 = (x5609<<(x5610*(x5611-x5612)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x5685 = 62750LLU;
	int8_t x5686 = 0;
	volatile int32_t x5687 = -145361;

	t71 = (x5685<<(x5686*(x5687-x5688)));

	if (t71 != 62750LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x5853 = UINT8_MAX;
	int32_t x5855 = INT32_MAX;
	int32_t x5856 = INT32_MAX;
	volatile int32_t t72 = 2505;

	t72 = (x5853<<(x5854*(x5855-x5856)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x5857 = 47U;
	static int8_t x5858 = 0;
	volatile uint32_t t73 = 3533U;

	t73 = (x5857<<(x5858*(x5859-x5860)));

	if (t73 != 47U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5865 = 63U;
	uint8_t x5866 = 2U;
	uint32_t x5868 = UINT32_MAX;
	int32_t t74 = 11;

	t74 = (x5865<<(x5866*(x5867-x5868)));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x6137 = 548523LL;
	int8_t x6138 = INT8_MIN;
	int8_t x6139 = INT8_MIN;
	volatile int8_t x6140 = INT8_MIN;
	static int64_t t75 = 2239714LL;

	t75 = (x6137<<(x6138*(x6139-x6140)));

	if (t75 != 548523LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x6193 = 4U;
	uint8_t x6194 = 0U;
	static int64_t x6195 = INT64_MIN;
	volatile int8_t x6196 = -1;
	int32_t t76 = 262822393;

	t76 = (x6193<<(x6194*(x6195-x6196)));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x6226 = -15;
	static volatile int16_t x6227 = -1;
	int32_t x6228 = -1;
	int32_t t77 = -1;

	t77 = (x6225<<(x6226*(x6227-x6228)));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x6289 = 11U;
	uint32_t x6290 = UINT32_MAX;
	uint32_t x6291 = UINT32_MAX;

	t78 = (x6289<<(x6290*(x6291-x6292)));

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x6386 = INT64_MAX;
	uint64_t x6388 = UINT64_MAX;
	volatile int32_t t79 = 5590935;

	t79 = (x6385<<(x6386*(x6387-x6388)));

	if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x6455 = -1LL;
	int64_t x6456 = -1LL;
	int64_t t80 = 26662269874LL;

	t80 = (x6453<<(x6454*(x6455-x6456)));

	if (t80 != 13LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x6550 = 40U;
	int16_t x6552 = -1;
	int32_t t81 = -63542769;

	t81 = (x6549<<(x6550*(x6551-x6552)));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x6581 = UINT64_MAX;
	static int64_t x6582 = INT64_MIN;
	volatile int16_t x6583 = -1;
	uint32_t x6584 = UINT32_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (x6581<<(x6582*(x6583-x6584)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6641 = 2990876;
	static int64_t x6642 = INT64_MAX;
	int8_t x6643 = -1;
	volatile int32_t x6644 = -1;
	int32_t t83 = -577102;

	t83 = (x6641<<(x6642*(x6643-x6644)));

	if (t83 != 2990876) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x6778 = INT32_MAX;
	static uint32_t x6779 = UINT32_MAX;
	int32_t t84 = 57;

	t84 = (x6777<<(x6778*(x6779-x6780)));

	if (t84 != 6686) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x6797 = 3U;
	int64_t x6799 = INT64_MAX;
	int32_t t85 = 0;

	t85 = (x6797<<(x6798*(x6799-x6800)));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x6809 = UINT64_MAX;
	uint32_t x6810 = 16293U;
	volatile int64_t x6811 = INT64_MAX;
	volatile int64_t x6812 = INT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x6809<<(x6810*(x6811-x6812)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6873 = INT64_MAX;
	volatile int16_t x6874 = -1;
	static int32_t x6875 = INT32_MIN;
	int32_t x6876 = INT32_MIN;
	int64_t t87 = INT64_MAX;

	t87 = (x6873<<(x6874*(x6875-x6876)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6989 = 18;
	volatile int8_t x6990 = 0;
	int8_t x6992 = INT8_MAX;
	volatile int32_t t88 = -962;

	t88 = (x6989<<(x6990*(x6991-x6992)));

	if (t88 != 18) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x7025 = UINT64_MAX;
	int16_t x7026 = 6;
	int64_t x7028 = -1LL;

	t89 = (x7025<<(x7026*(x7027-x7028)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x7113 = 834137648075574LLU;
	volatile int64_t x7116 = -1LL;
	static volatile uint64_t t90 = 30549330122242388LLU;

	t90 = (x7113<<(x7114*(x7115-x7116)));

	if (t90 != 834137648075574LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x7193 = INT64_MAX;
	int8_t x7195 = INT8_MIN;
	int8_t x7196 = -1;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x7193<<(x7194*(x7195-x7196)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x7277 = 6553091937533336262LLU;
	static uint64_t x7279 = UINT64_MAX;
	uint64_t x7280 = 22LLU;
	volatile uint64_t t92 = 2715LLU;

	t92 = (x7277<<(x7278*(x7279-x7280)));

	if (t92 != 3665529107308871680LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x7297 = 133056074U;
	uint8_t x7298 = 0U;
	uint32_t x7299 = 21U;
	int8_t x7300 = -25;
	uint32_t t93 = 186274U;

	t93 = (x7297<<(x7298*(x7299-x7300)));

	if (t93 != 133056074U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x7314 = 0;
	static volatile int16_t x7315 = -1;
	static uint64_t x7316 = UINT64_MAX;
	int32_t t94 = 0;

	t94 = (x7313<<(x7314*(x7315-x7316)));

	if (t94 != 21) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x7713 = 727824397395848LLU;
	uint16_t x7714 = UINT16_MAX;
	int64_t x7715 = -1LL;
	int32_t x7716 = -1;
	volatile uint64_t t95 = 1069159326285138740LLU;

	t95 = (x7713<<(x7714*(x7715-x7716)));

	if (t95 != 727824397395848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x7721 = UINT32_MAX;
	uint8_t x7722 = 0U;
	uint16_t x7723 = UINT16_MAX;
	int8_t x7724 = INT8_MIN;
	uint32_t t96 = UINT32_MAX;

	t96 = (x7721<<(x7722*(x7723-x7724)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x7798 = INT32_MIN;
	uint32_t x7799 = 275U;
	uint32_t t97 = 484796834U;

	t97 = (x7797<<(x7798*(x7799-x7800)));

	if (t97 != 2836021U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x7834 = -1LL;
	int32_t x7835 = -1;
	int64_t x7836 = -1LL;
	volatile uint32_t t98 = 3695U;

	t98 = (x7833<<(x7834*(x7835-x7836)));

	if (t98 != 96809132U) { NG(); } else { ; }
	
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


    return 0;
}

