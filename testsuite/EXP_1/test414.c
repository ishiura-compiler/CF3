#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = 0LL;
static volatile int64_t t1 = -26LL;
int64_t x382 = -1LL;
int64_t x384 = 95900LL;
volatile uint64_t t5 = 432906035499042796LLU;
int16_t x612 = INT16_MIN;
static int32_t x640 = INT32_MAX;
volatile int8_t x693 = INT8_MAX;
static uint32_t x778 = UINT32_MAX;
int8_t x859 = 14;
uint64_t x1049 = UINT64_MAX;
static volatile int8_t x1051 = 0;
uint32_t x1262 = 15U;
uint8_t x1263 = 3U;
int16_t x1277 = INT16_MIN;
int8_t x1442 = INT8_MIN;
static uint64_t t21 = 79525810051LLU;
uint64_t x1573 = 0LLU;
uint32_t x1646 = 5U;
volatile uint32_t t24 = 152151U;
static uint16_t x1654 = 12799U;
int32_t t26 = -23400;
int32_t x1713 = INT32_MIN;
int64_t x1857 = -261302585099180965LL;
int32_t x1897 = INT32_MIN;
int32_t x1900 = INT32_MIN;
int8_t x2025 = INT8_MIN;
uint32_t x2108 = 7743U;
static int8_t x2121 = -3;
int16_t x2122 = -237;
static volatile int8_t x2217 = 0;
volatile uint64_t t35 = 2195965870615880102LLU;
int16_t x2321 = INT16_MIN;
int64_t x2322 = -1LL;
volatile int32_t x2324 = INT32_MIN;
int64_t t36 = 1095637855LL;
int64_t t37 = 7910243456978LL;
int64_t x2502 = 0LL;
volatile int16_t x2504 = INT16_MIN;
int8_t x2539 = 1;
int64_t x2588 = INT64_MIN;
static int8_t x2794 = -1;
volatile uint32_t x2795 = 4U;
static int32_t t42 = 200672678;
static volatile uint32_t x2916 = 171437U;
uint64_t x3038 = 246LLU;
uint64_t t47 = 14482LLU;
volatile uint64_t t48 = 9941486635349LLU;
uint8_t x3195 = 25U;
volatile int64_t t49 = -545206906LL;
uint64_t x3229 = 1LLU;
int16_t x3230 = -5;
static uint8_t x3363 = 31U;
uint32_t x3396 = 6207366U;
static volatile int16_t x3398 = INT16_MIN;
int32_t x3400 = -1;
volatile int64_t t57 = 25115428927912852LL;
uint8_t x3453 = 3U;
int16_t x3456 = INT16_MAX;
volatile int64_t t64 = -3215LL;
int8_t x3647 = 4;
static volatile int64_t t65 = 206LL;
static int16_t x3666 = -1;
volatile int16_t x3670 = INT16_MIN;
uint64_t x3708 = 1953LLU;
static uint64_t t69 = 1412LLU;
volatile uint64_t t70 = 1LLU;
int16_t x3925 = 2482;
int64_t x3928 = -1LL;
uint8_t x4055 = 0U;
int64_t x4056 = -971858021892LL;
uint64_t x4169 = 14743834225498LLU;
uint8_t x4171 = 26U;
static int64_t x4172 = 246432183LL;
uint64_t t76 = 21972626LLU;
static uint64_t t77 = 239397549667405286LLU;
static int32_t x4367 = 11;
volatile uint64_t x4405 = 857788LLU;
static int32_t x4408 = INT32_MAX;
uint32_t x4512 = 24898382U;
int64_t x4556 = INT64_MIN;
volatile int64_t t81 = 14156512LL;
int16_t x4761 = -1;
uint64_t x4806 = UINT64_MAX;
uint8_t x4808 = UINT8_MAX;
static int32_t x4842 = -1;
int8_t x4972 = INT8_MAX;
int16_t x5116 = 210;
uint8_t x5374 = UINT8_MAX;
uint16_t x5549 = 6U;
volatile uint8_t x5550 = 1U;
int16_t x5809 = INT16_MIN;
static int64_t t97 = -20369732LL;
uint64_t x5878 = UINT64_MAX;


void f0(void) {
	uint64_t x1 = 392LLU;
	int64_t x2 = INT64_MAX;
	volatile uint32_t x3 = 0U;
	volatile int16_t x4 = -1;
	uint64_t t0 = 455182846274627LLU;

	t0 = (((x1*x2)<<x3)&x4);

	if (t0 != 18446744073709551224LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = INT32_MAX;
	uint8_t x11 = 0U;
	uint16_t x12 = UINT16_MAX;

	t1 = (((x9*x10)<<x11)&x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x109 = 16130U;
	uint32_t x110 = 32592U;
	int16_t x111 = 25;
	int8_t x112 = -1;
	volatile uint32_t t2 = 8797U;

	t2 = (((x109*x110)<<x111)&x112);

	if (t2 != 1073741824U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x205 = 4U;
	int64_t x206 = 3919236456175060LL;
	uint32_t x207 = 3U;
	uint16_t x208 = 13U;
	int64_t t3 = 1431046060898LL;

	t3 = (((x205*x206)<<x207)&x208);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x381 = INT16_MIN;
	volatile uint8_t x383 = 1U;
	int64_t t4 = -187777LL;

	t4 = (((x381*x382)<<x383)&x384);

	if (t4 != 65536LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x453 = 121582615002385913LLU;
	static int8_t x454 = -13;
	int64_t x455 = 0LL;
	static int16_t x456 = -1;

	t5 = (((x453*x454)<<x455)&x456);

	if (t5 != 16866170078678534747LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x609 = -1;
	int8_t x610 = -1;
	static volatile uint8_t x611 = 15U;
	volatile int32_t t6 = 1023874764;

	t6 = (((x609*x610)<<x611)&x612);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x637 = 0U;
	uint64_t x638 = 4853742LLU;
	volatile uint8_t x639 = 1U;
	uint64_t t7 = 94481005617LLU;

	t7 = (((x637*x638)<<x639)&x640);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x694 = 4U;
	int32_t x695 = 29;
	uint8_t x696 = UINT8_MAX;
	volatile uint32_t t8 = 1043278630U;

	t8 = (((x693*x694)<<x695)&x696);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x713 = -1;
	int8_t x714 = INT8_MIN;
	volatile uint8_t x715 = 0U;
	int8_t x716 = INT8_MAX;
	int32_t t9 = 350157;

	t9 = (((x713*x714)<<x715)&x716);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x777 = INT8_MIN;
	int16_t x779 = 1;
	volatile uint8_t x780 = 18U;
	volatile uint32_t t10 = 21405U;

	t10 = (((x777*x778)<<x779)&x780);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x857 = 5160627LLU;
	uint16_t x858 = 1U;
	static int8_t x860 = -1;
	volatile uint64_t t11 = 11847703837379LLU;

	t11 = (((x857*x858)<<x859)&x860);

	if (t11 != 84551712768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x949 = 1541545;
	uint64_t x950 = 800422831LLU;
	uint64_t x951 = 6LLU;
	int16_t x952 = -1217;
	uint64_t t12 = 15LLU;

	t12 = (((x949*x950)<<x951)&x952);

	if (t12 != 78968820032889088LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1050 = 14U;
	int8_t x1052 = INT8_MAX;
	volatile uint64_t t13 = 7542932721LLU;

	t13 = (((x1049*x1050)<<x1051)&x1052);

	if (t13 != 114LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1097 = INT8_MAX;
	volatile uint64_t x1098 = 39714144LLU;
	volatile int8_t x1099 = 25;
	uint8_t x1100 = UINT8_MAX;
	uint64_t t14 = 836LLU;

	t14 = (((x1097*x1098)<<x1099)&x1100);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1105 = 616233208847LLU;
	static int64_t x1106 = -3862194624933LL;
	static uint16_t x1107 = 6U;
	volatile int8_t x1108 = -16;
	static volatile uint64_t t15 = 1055LLU;

	t15 = (((x1105*x1106)<<x1107)&x1108);

	if (t15 != 10786173658193777984LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1261 = INT8_MIN;
	int32_t x1264 = INT32_MAX;
	uint32_t t16 = 6926U;

	t16 = (((x1261*x1262)<<x1263)&x1264);

	if (t16 != 2147468288U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1273 = UINT8_MAX;
	uint64_t x1274 = 640LLU;
	uint32_t x1275 = 39U;
	int8_t x1276 = -4;
	volatile uint64_t t17 = 6406656361475303LLU;

	t17 = (((x1273*x1274)<<x1275)&x1276);

	if (t17 != 89720148826521600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1278 = -1;
	static int16_t x1279 = 10;
	uint64_t x1280 = UINT64_MAX;
	static uint64_t t18 = 28983LLU;

	t18 = (((x1277*x1278)<<x1279)&x1280);

	if (t18 != 33554432LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1325 = 0;
	static volatile uint32_t x1326 = UINT32_MAX;
	int8_t x1327 = 1;
	int16_t x1328 = -35;
	static uint32_t t19 = 1U;

	t19 = (((x1325*x1326)<<x1327)&x1328);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1333 = 6303825U;
	int32_t x1334 = INT32_MAX;
	static uint32_t x1335 = 10U;
	volatile int32_t x1336 = 17409;
	static uint32_t t20 = 37U;

	t20 = (((x1333*x1334)<<x1335)&x1336);

	if (t20 != 1024U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1441 = 459013741603497747LLU;
	uint64_t x1443 = 55LLU;
	int8_t x1444 = INT8_MIN;

	t21 = (((x1441*x1442)<<x1443)&x1444);

	if (t21 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1574 = INT64_MIN;
	static volatile int16_t x1575 = 6;
	uint32_t x1576 = 1U;
	static volatile uint64_t t22 = 19LLU;

	t22 = (((x1573*x1574)<<x1575)&x1576);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1605 = UINT16_MAX;
	static volatile uint64_t x1606 = UINT64_MAX;
	volatile uint32_t x1607 = 2U;
	int64_t x1608 = 0LL;
	uint64_t t23 = 4115700LLU;

	t23 = (((x1605*x1606)<<x1607)&x1608);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1645 = -218;
	volatile uint8_t x1647 = 1U;
	int8_t x1648 = INT8_MIN;

	t24 = (((x1645*x1646)<<x1647)&x1648);

	if (t24 != 4294964992U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1653 = 860U;
	uint16_t x1655 = 0U;
	int16_t x1656 = INT16_MAX;
	volatile int32_t t25 = 176179125;

	t25 = (((x1653*x1654)<<x1655)&x1656);

	if (t25 != 29860) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1693 = 60U;
	uint8_t x1694 = 1U;
	static int16_t x1695 = 2;
	int8_t x1696 = INT8_MIN;

	t26 = (((x1693*x1694)<<x1695)&x1696);

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1714 = -1LL;
	volatile int8_t x1715 = 1;
	volatile int8_t x1716 = INT8_MAX;
	int64_t t27 = -3509264600066596345LL;

	t27 = (((x1713*x1714)<<x1715)&x1716);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1813 = INT64_MIN;
	uint64_t x1814 = 259832LLU;
	static int32_t x1815 = 11;
	static volatile int16_t x1816 = INT16_MAX;
	static uint64_t t28 = 4296975837LLU;

	t28 = (((x1813*x1814)<<x1815)&x1816);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1858 = 44527843055886LLU;
	uint64_t x1859 = 1LLU;
	volatile int16_t x1860 = -1;
	static volatile uint64_t t29 = 90847698186LLU;

	t29 = (((x1857*x1858)<<x1859)&x1860);

	if (t29 != 11262604605196517364LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1898 = UINT32_MAX;
	int8_t x1899 = 1;
	static uint32_t t30 = 449U;

	t30 = (((x1897*x1898)<<x1899)&x1900);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2026 = 105616808U;
	int8_t x2027 = 5;
	static volatile int32_t x2028 = -606;
	uint32_t t31 = 83817446U;

	t31 = (((x2025*x2026)<<x2027)&x2028);

	if (t31 != 1185251328U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2105 = 16219348445977LLU;
	int32_t x2106 = -1;
	int8_t x2107 = 0;
	static volatile uint64_t t32 = 3890656903LLU;

	t32 = (((x2105*x2106)<<x2107)&x2108);

	if (t32 != 5159LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2123 = 14U;
	uint64_t x2124 = UINT64_MAX;
	uint64_t t33 = 29962LLU;

	t33 = (((x2121*x2122)<<x2123)&x2124);

	if (t33 != 11649024LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2133 = 86194U;
	volatile uint32_t x2134 = 1U;
	uint32_t x2135 = 21U;
	uint8_t x2136 = 0U;
	static uint32_t t34 = 0U;

	t34 = (((x2133*x2134)<<x2135)&x2136);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2218 = UINT64_MAX;
	int8_t x2219 = 1;
	int8_t x2220 = INT8_MIN;

	t35 = (((x2217*x2218)<<x2219)&x2220);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2323 = 2U;

	t36 = (((x2321*x2322)<<x2323)&x2324);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2461 = 10U;
	static int64_t x2462 = 2162567991223LL;
	volatile uint64_t x2463 = 0LLU;
	static volatile uint16_t x2464 = 27U;

	t37 = (((x2461*x2462)<<x2463)&x2464);

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2489 = INT8_MAX;
	int64_t x2490 = 91597258LL;
	uint8_t x2491 = 11U;
	int32_t x2492 = -1;
	int64_t t38 = 3115009776LL;

	t38 = (((x2489*x2490)<<x2491)&x2492);

	if (t38 != 23824080416768LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2501 = -9915;
	int16_t x2503 = 1;
	volatile int64_t t39 = 2614483563616483610LL;

	t39 = (((x2501*x2502)<<x2503)&x2504);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2537 = -407LL;
	int8_t x2538 = -1;
	int32_t x2540 = -23443;
	volatile int64_t t40 = -29335059667809612LL;

	t40 = (((x2537*x2538)<<x2539)&x2540);

	if (t40 != 44LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2585 = -444222356875832LL;
	int64_t x2586 = -1LL;
	uint8_t x2587 = 2U;
	volatile int64_t t41 = 61397363166LL;

	t41 = (((x2585*x2586)<<x2587)&x2588);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2793 = INT8_MIN;
	volatile int16_t x2796 = -1;

	t42 = (((x2793*x2794)<<x2795)&x2796);

	if (t42 != 2048) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2913 = -1;
	uint32_t x2914 = 15U;
	uint8_t x2915 = 0U;
	volatile uint32_t t43 = 703U;

	t43 = (((x2913*x2914)<<x2915)&x2916);

	if (t43 != 171425U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3037 = 3U;
	static uint8_t x3039 = 37U;
	int16_t x3040 = INT16_MAX;
	uint64_t t44 = 3LLU;

	t44 = (((x3037*x3038)<<x3039)&x3040);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3101 = INT8_MIN;
	static volatile int8_t x3102 = INT8_MIN;
	int8_t x3103 = 0;
	uint32_t x3104 = 0U;
	uint32_t t45 = 2934U;

	t45 = (((x3101*x3102)<<x3103)&x3104);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3113 = 145U;
	volatile uint64_t x3114 = UINT64_MAX;
	volatile uint8_t x3115 = 0U;
	uint64_t x3116 = 18LLU;
	uint64_t t46 = 25046884LLU;

	t46 = (((x3113*x3114)<<x3115)&x3116);

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3157 = 4468U;
	uint32_t x3158 = UINT32_MAX;
	uint8_t x3159 = 12U;
	uint64_t x3160 = 21LLU;

	t47 = (((x3157*x3158)<<x3159)&x3160);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x3189 = 3LL;
	uint64_t x3190 = 41LLU;
	volatile int16_t x3191 = 1;
	int16_t x3192 = INT16_MAX;

	t48 = (((x3189*x3190)<<x3191)&x3192);

	if (t48 != 246LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3193 = -4;
	int16_t x3194 = -1;
	static volatile int64_t x3196 = INT64_MIN;

	t49 = (((x3193*x3194)<<x3195)&x3196);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x3209 = -487;
	int64_t x3210 = -1LL;
	static int16_t x3211 = 16;
	volatile uint8_t x3212 = 5U;
	int64_t t50 = -13104800751250570LL;

	t50 = (((x3209*x3210)<<x3211)&x3212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3231 = 1LL;
	volatile int64_t x3232 = 224258LL;
	static uint64_t t51 = 5848221766LLU;

	t51 = (((x3229*x3230)<<x3231)&x3232);

	if (t51 != 224258LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x3321 = INT64_MIN;
	volatile uint64_t x3322 = 1LLU;
	int8_t x3323 = 50;
	int16_t x3324 = -1;
	volatile uint64_t t52 = 12987942716LLU;

	t52 = (((x3321*x3322)<<x3323)&x3324);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3337 = UINT64_MAX;
	int8_t x3338 = 11;
	static uint8_t x3339 = 13U;
	volatile int32_t x3340 = -54218079;
	static volatile uint64_t t53 = 734651666LLU;

	t53 = (((x3337*x3338)<<x3339)&x3340);

	if (t53 != 18446744073655328768LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3361 = -5;
	uint32_t x3362 = 11U;
	volatile int32_t x3364 = -151630;
	volatile uint32_t t54 = 3828374U;

	t54 = (((x3361*x3362)<<x3363)&x3364);

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x3393 = UINT16_MAX;
	volatile uint64_t x3394 = 43LLU;
	static uint16_t x3395 = 7U;
	static uint64_t t55 = 7LLU;

	t55 = (((x3393*x3394)<<x3395)&x3396);

	if (t55 != 6201984LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3397 = INT8_MIN;
	uint8_t x3399 = 6U;
	static int32_t t56 = 2;

	t56 = (((x3397*x3398)<<x3399)&x3400);

	if (t56 != 268435456) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3417 = -1LL;
	static int16_t x3418 = INT16_MIN;
	int8_t x3419 = 0;
	int64_t x3420 = INT64_MIN;

	t57 = (((x3417*x3418)<<x3419)&x3420);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3441 = INT8_MIN;
	int16_t x3442 = INT16_MIN;
	int64_t x3443 = 0LL;
	volatile uint8_t x3444 = UINT8_MAX;
	int32_t t58 = -163427;

	t58 = (((x3441*x3442)<<x3443)&x3444);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3445 = INT16_MIN;
	uint32_t x3446 = 24075U;
	static int8_t x3447 = 4;
	volatile int16_t x3448 = INT16_MAX;
	volatile uint32_t t59 = 14U;

	t59 = (((x3445*x3446)<<x3447)&x3448);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3454 = UINT8_MAX;
	int32_t x3455 = 1;
	volatile int32_t t60 = 434779;

	t60 = (((x3453*x3454)<<x3455)&x3456);

	if (t60 != 1530) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3509 = -1;
	int32_t x3510 = -1;
	uint8_t x3511 = 3U;
	int32_t x3512 = -1;
	int32_t t61 = -29959;

	t61 = (((x3509*x3510)<<x3511)&x3512);

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3569 = 838U;
	static int32_t x3570 = 0;
	int32_t x3571 = 22;
	uint16_t x3572 = UINT16_MAX;
	uint32_t t62 = 133861683U;

	t62 = (((x3569*x3570)<<x3571)&x3572);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x3585 = 6226U;
	int8_t x3586 = INT8_MAX;
	uint64_t x3587 = 2LLU;
	static int8_t x3588 = INT8_MAX;
	uint32_t t63 = 7977U;

	t63 = (((x3585*x3586)<<x3587)&x3588);

	if (t63 != 56U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3641 = 71U;
	uint32_t x3642 = 940U;
	volatile uint8_t x3643 = 0U;
	int64_t x3644 = -1LL;

	t64 = (((x3641*x3642)<<x3643)&x3644);

	if (t64 != 66740LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3645 = INT16_MIN;
	int64_t x3646 = -1LL;
	int64_t x3648 = -3603LL;

	t65 = (((x3645*x3646)<<x3647)&x3648);

	if (t65 != 524288LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x3665 = -1LL;
	uint8_t x3667 = 5U;
	volatile int64_t x3668 = INT64_MAX;
	int64_t t66 = 24967571738107557LL;

	t66 = (((x3665*x3666)<<x3667)&x3668);

	if (t66 != 32LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3669 = INT8_MIN;
	volatile uint16_t x3671 = 0U;
	static volatile int8_t x3672 = INT8_MIN;
	int32_t t67 = 1;

	t67 = (((x3669*x3670)<<x3671)&x3672);

	if (t67 != 4194304) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3701 = 5U;
	static uint64_t x3702 = 181819508632267611LLU;
	volatile uint8_t x3703 = 10U;
	static int64_t x3704 = -1LL;
	uint64_t t68 = 9165794031147093LLU;

	t68 = (((x3701*x3702)<<x3703)&x3704);

	if (t68 != 8578680511732587520LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3705 = 2089189U;
	int32_t x3706 = 821187942;
	uint8_t x3707 = 0U;

	t69 = (((x3705*x3706)<<x3707)&x3708);

	if (t69 != 1056LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3737 = 25LLU;
	int16_t x3738 = INT16_MAX;
	volatile uint8_t x3739 = 1U;
	uint64_t x3740 = UINT64_MAX;

	t70 = (((x3737*x3738)<<x3739)&x3740);

	if (t70 != 1638350LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3777 = 1228U;
	int32_t x3778 = -1;
	static uint8_t x3779 = 3U;
	int32_t x3780 = INT32_MIN;
	static volatile uint32_t t71 = 329110767U;

	t71 = (((x3777*x3778)<<x3779)&x3780);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3889 = 5830U;
	int8_t x3890 = INT8_MIN;
	volatile uint16_t x3891 = 21U;
	int64_t x3892 = INT64_MAX;
	int64_t t72 = 286902LL;

	t72 = (((x3889*x3890)<<x3891)&x3892);

	if (t72 != 2684354560LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x3926 = 10U;
	int8_t x3927 = 5;
	volatile int64_t t73 = 5437LL;

	t73 = (((x3925*x3926)<<x3927)&x3928);

	if (t73 != 794240LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4053 = -1LL;
	int64_t x4054 = -1LL;
	volatile int64_t t74 = 3428688027091723LL;

	t74 = (((x4053*x4054)<<x4055)&x4056);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4129 = UINT64_MAX;
	static int16_t x4130 = INT16_MIN;
	static uint8_t x4131 = 22U;
	volatile int8_t x4132 = INT8_MIN;
	uint64_t t75 = 16098256022LLU;

	t75 = (((x4129*x4130)<<x4131)&x4132);

	if (t75 != 137438953472LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4170 = INT16_MIN;

	t76 = (((x4169*x4170)<<x4171)&x4172);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4289 = UINT8_MAX;
	static uint64_t x4290 = UINT64_MAX;
	uint8_t x4291 = 0U;
	int16_t x4292 = INT16_MIN;

	t77 = (((x4289*x4290)<<x4291)&x4292);

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4365 = 69U;
	uint8_t x4366 = 11U;
	int64_t x4368 = INT64_MAX;
	int64_t t78 = -2640615671296LL;

	t78 = (((x4365*x4366)<<x4367)&x4368);

	if (t78 != 1554432LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4406 = 0U;
	uint16_t x4407 = 2U;
	static uint64_t t79 = 467668503LLU;

	t79 = (((x4405*x4406)<<x4407)&x4408);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4509 = INT32_MAX;
	uint64_t x4510 = 31389598112LLU;
	int8_t x4511 = 10;
	uint64_t t80 = 85LLU;

	t80 = (((x4509*x4510)<<x4511)&x4512);

	if (t80 != 7962624LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4553 = UINT32_MAX;
	uint8_t x4554 = 96U;
	volatile uint16_t x4555 = 0U;

	t81 = (((x4553*x4554)<<x4555)&x4556);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4753 = 4U;
	uint8_t x4754 = 74U;
	uint64_t x4755 = 16LLU;
	static volatile int64_t x4756 = INT64_MIN;
	int64_t t82 = -3002544411LL;

	t82 = (((x4753*x4754)<<x4755)&x4756);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4762 = -1;
	uint8_t x4763 = 15U;
	int16_t x4764 = -8235;
	static int32_t t83 = 104041;

	t83 = (((x4761*x4762)<<x4763)&x4764);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x4805 = INT64_MAX;
	volatile int16_t x4807 = 3;
	uint64_t t84 = 5499314853817LLU;

	t84 = (((x4805*x4806)<<x4807)&x4808);

	if (t84 != 8LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x4841 = INT16_MIN;
	uint16_t x4843 = 9U;
	uint32_t x4844 = UINT32_MAX;
	static uint32_t t85 = 1U;

	t85 = (((x4841*x4842)<<x4843)&x4844);

	if (t85 != 16777216U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4969 = 3U;
	int64_t x4970 = 783185LL;
	static volatile int16_t x4971 = 36;
	volatile int64_t t86 = 1LL;

	t86 = (((x4969*x4970)<<x4971)&x4972);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5069 = -1;
	uint8_t x5070 = 0U;
	volatile uint8_t x5071 = 19U;
	volatile int16_t x5072 = -1;
	int32_t t87 = 75271395;

	t87 = (((x5069*x5070)<<x5071)&x5072);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5113 = UINT16_MAX;
	uint64_t x5114 = UINT64_MAX;
	int8_t x5115 = 8;
	volatile uint64_t t88 = 4202542151018982549LLU;

	t88 = (((x5113*x5114)<<x5115)&x5116);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5129 = UINT32_MAX;
	static uint32_t x5130 = 306948067U;
	uint8_t x5131 = 5U;
	uint16_t x5132 = 0U;
	volatile uint32_t t89 = 154328U;

	t89 = (((x5129*x5130)<<x5131)&x5132);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5221 = INT16_MAX;
	static int8_t x5222 = INT8_MAX;
	uint16_t x5223 = 9U;
	uint8_t x5224 = UINT8_MAX;
	static volatile int32_t t90 = 599;

	t90 = (((x5221*x5222)<<x5223)&x5224);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x5373 = UINT16_MAX;
	uint8_t x5375 = 1U;
	int32_t x5376 = INT32_MAX;
	volatile int32_t t91 = -6;

	t91 = (((x5373*x5374)<<x5375)&x5376);

	if (t91 != 33422850) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x5385 = 7791631379807020LLU;
	int8_t x5386 = INT8_MIN;
	uint8_t x5387 = 17U;
	static volatile int64_t x5388 = INT64_MIN;
	static volatile uint64_t t92 = 157945LLU;

	t92 = (((x5385*x5386)<<x5387)&x5388);

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x5551 = 0U;
	int16_t x5552 = 62;
	static int32_t t93 = 510115676;

	t93 = (((x5549*x5550)<<x5551)&x5552);

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x5557 = 0U;
	static int64_t x5558 = -69634482409248267LL;
	volatile int64_t x5559 = 13LL;
	int16_t x5560 = -20;
	int64_t t94 = -416118324084116765LL;

	t94 = (((x5557*x5558)<<x5559)&x5560);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5657 = INT16_MIN;
	int16_t x5658 = -1;
	int8_t x5659 = 11;
	int64_t x5660 = 2LL;
	volatile int64_t t95 = -89199763478LL;

	t95 = (((x5657*x5658)<<x5659)&x5660);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5810 = -60656;
	static uint64_t x5811 = 0LLU;
	int8_t x5812 = -1;
	volatile int32_t t96 = 3;

	t96 = (((x5809*x5810)<<x5811)&x5812);

	if (t96 != 1987575808) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x5873 = 17;
	int64_t x5874 = 0LL;
	uint16_t x5875 = 20U;
	int16_t x5876 = 20;

	t97 = (((x5873*x5874)<<x5875)&x5876);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5877 = INT64_MAX;
	volatile uint16_t x5879 = 49U;
	int32_t x5880 = -1;
	static volatile uint64_t t98 = 9756490492673LLU;

	t98 = (((x5877*x5878)<<x5879)&x5880);

	if (t98 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5893 = UINT32_MAX;
	int16_t x5894 = -1;
	int16_t x5895 = 1;
	int64_t x5896 = INT64_MIN;
	int64_t t99 = -47142170043566736LL;

	t99 = (((x5893*x5894)<<x5895)&x5896);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

