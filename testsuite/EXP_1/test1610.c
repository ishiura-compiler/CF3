#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x69 = 28U;
volatile int32_t x71 = 4;
int8_t x143 = 1;
static volatile uint32_t t1 = 510487165U;
volatile uint8_t x235 = 2U;
volatile int8_t x281 = -1;
int64_t x293 = INT64_MAX;
int32_t t9 = -1425;
static int32_t t12 = 1;
volatile int16_t x474 = INT16_MAX;
volatile int16_t x475 = 0;
volatile int32_t x542 = -1;
uint32_t x544 = 46U;
uint32_t x553 = UINT32_MAX;
int8_t x555 = 28;
volatile int32_t t15 = -3;
volatile int32_t t16 = 1;
static int64_t t17 = -236602LL;
int8_t x645 = INT8_MIN;
uint16_t x647 = 6U;
int32_t t19 = 18405;
volatile uint32_t t20 = 221U;
int32_t x809 = -267584908;
int8_t x821 = INT8_MAX;
static uint64_t x836 = 2020479835136LLU;
static volatile int8_t x842 = 3;
volatile uint64_t x881 = 3417658285424529715LLU;
int8_t x906 = -1;
static uint16_t x907 = 20U;
uint8_t x908 = UINT8_MAX;
uint8_t x975 = 6U;
int16_t x979 = 1;
int32_t t36 = 184273;
int16_t x1010 = 1;
uint16_t x1096 = UINT16_MAX;
int32_t x1102 = INT32_MIN;
uint32_t x1124 = UINT32_MAX;
static int32_t t43 = 70385;
uint32_t x1205 = 30094778U;
uint16_t x1208 = 5U;
volatile int32_t x1225 = -1;
volatile uint64_t x1226 = 1LLU;
static uint8_t x1227 = 0U;
static volatile int16_t x1261 = INT16_MIN;
int64_t x1262 = INT64_MIN;
static volatile uint64_t t46 = 1168LLU;
static int8_t x1323 = 1;
int32_t x1328 = INT32_MAX;
static volatile int32_t t48 = -254834345;
int32_t t49 = -7;
static uint8_t x1391 = 4U;
uint32_t t50 = 230U;
uint32_t x1489 = 9032683U;
static uint16_t x1491 = 3U;
int32_t x1505 = INT32_MIN;
static int8_t x1508 = INT8_MAX;
int16_t x1663 = 7;
volatile uint32_t t55 = 3764U;
int16_t x1690 = INT16_MAX;
uint16_t x1767 = 7U;
int32_t x1768 = INT32_MAX;
int16_t x1857 = -16381;
volatile int64_t t59 = -31301701404691LL;
uint64_t x1909 = UINT64_MAX;
int32_t t61 = 1016485;
uint32_t x1944 = UINT32_MAX;
int32_t x2045 = INT32_MAX;
uint32_t x2052 = UINT32_MAX;
uint16_t x2103 = 30U;
int32_t x2111 = 0;
volatile int32_t x2114 = INT32_MAX;
uint8_t x2116 = UINT8_MAX;
uint8_t x2123 = 2U;
volatile uint8_t x2124 = UINT8_MAX;
int32_t t74 = -2;
int64_t x2233 = INT64_MIN;
volatile int32_t t75 = 1;
volatile int64_t x2265 = -20896LL;
volatile int8_t x2266 = -1;
static volatile int32_t t76 = -2456;
int8_t x2378 = INT8_MAX;
int32_t t78 = 738197797;
uint32_t x2394 = UINT32_MAX;
int16_t x2396 = INT16_MAX;
int8_t x2457 = INT8_MIN;
int64_t x2460 = -1LL;
volatile int64_t t81 = -5LL;
int8_t x2523 = 3;
static int16_t x2524 = INT16_MAX;
volatile int32_t t82 = -15;
uint16_t x2581 = 3827U;
int64_t t86 = -1LL;
uint8_t x2619 = 1U;
uint16_t x2643 = 15U;
uint16_t x2735 = 6U;
static uint64_t x2829 = 25477LLU;
volatile uint8_t x2831 = 1U;
uint64_t x2877 = 34LLU;
int8_t x2879 = 0;
uint32_t t97 = 508U;
volatile uint8_t x3027 = 6U;
int32_t x3068 = -1;


void f0(void) {
	static int64_t x70 = -1878955742190483363LL;
	volatile uint64_t x72 = 167839761LLU;
	volatile uint64_t t0 = 7111506840598LLU;

	t0 = (((x69<=x70)>>x71)&x72);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = -1;
	uint32_t x144 = 450255817U;

	t1 = (((x141<=x142)>>x143)&x144);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x157 = INT32_MIN;
	static volatile uint8_t x158 = UINT8_MAX;
	int32_t x159 = 4;
	volatile uint32_t x160 = 237U;
	volatile uint32_t t2 = 32028U;

	t2 = (((x157<=x158)>>x159)&x160);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x177 = -14;
	volatile int8_t x178 = INT8_MAX;
	uint8_t x179 = 14U;
	static volatile int8_t x180 = -1;
	volatile int32_t t3 = -41215;

	t3 = (((x177<=x178)>>x179)&x180);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x225 = INT8_MAX;
	static int16_t x226 = 0;
	uint8_t x227 = 24U;
	int64_t x228 = INT64_MIN;
	static int64_t t4 = 818019459LL;

	t4 = (((x225<=x226)>>x227)&x228);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x233 = UINT8_MAX;
	static int16_t x234 = 424;
	volatile uint64_t x236 = 1914888600LLU;
	volatile uint64_t t5 = 4363153738167445746LLU;

	t5 = (((x233<=x234)>>x235)&x236);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x245 = INT32_MAX;
	volatile int8_t x246 = INT8_MAX;
	volatile int8_t x247 = 0;
	int16_t x248 = INT16_MAX;
	int32_t t6 = -21;

	t6 = (((x245<=x246)>>x247)&x248);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x282 = 59;
	int8_t x283 = 7;
	static uint64_t x284 = 15LLU;
	volatile uint64_t t7 = 117494696823743373LLU;

	t7 = (((x281<=x282)>>x283)&x284);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x294 = 28;
	uint8_t x295 = 13U;
	volatile int32_t x296 = INT32_MAX;
	int32_t t8 = -11942;

	t8 = (((x293<=x294)>>x295)&x296);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x301 = UINT16_MAX;
	uint8_t x302 = 4U;
	uint8_t x303 = 0U;
	uint8_t x304 = UINT8_MAX;

	t9 = (((x301<=x302)>>x303)&x304);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MAX;
	int8_t x375 = 1;
	int8_t x376 = -4;
	static volatile int32_t t10 = -2359;

	t10 = (((x373<=x374)>>x375)&x376);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x397 = -1;
	static volatile int64_t x398 = -1LL;
	int32_t x399 = 0;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t11 = -12362884;

	t11 = (((x397<=x398)>>x399)&x400);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x417 = 13883;
	int16_t x418 = INT16_MIN;
	volatile int8_t x419 = 16;
	int8_t x420 = -1;

	t12 = (((x417<=x418)>>x419)&x420);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x473 = -64LL;
	int8_t x476 = INT8_MIN;
	volatile int32_t t13 = 5;

	t13 = (((x473<=x474)>>x475)&x476);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x541 = 52LLU;
	int32_t x543 = 1;
	volatile uint32_t t14 = 2U;

	t14 = (((x541<=x542)>>x543)&x544);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x554 = INT16_MAX;
	int16_t x556 = -1;

	t15 = (((x553<=x554)>>x555)&x556);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x589 = UINT32_MAX;
	uint64_t x590 = UINT64_MAX;
	uint8_t x591 = 7U;
	int32_t x592 = -1;

	t16 = (((x589<=x590)>>x591)&x592);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x641 = INT64_MIN;
	static int16_t x642 = INT16_MIN;
	uint16_t x643 = 7U;
	int64_t x644 = INT64_MAX;

	t17 = (((x641<=x642)>>x643)&x644);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x646 = 40560570735LL;
	uint32_t x648 = 84827U;
	uint32_t t18 = 435630461U;

	t18 = (((x645<=x646)>>x647)&x648);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x661 = 25U;
	int8_t x662 = INT8_MIN;
	static volatile int32_t x663 = 1;
	int8_t x664 = INT8_MIN;

	t19 = (((x661<=x662)>>x663)&x664);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x737 = -1;
	volatile uint64_t x738 = 1496209LLU;
	uint8_t x739 = 6U;
	volatile uint32_t x740 = 8947769U;

	t20 = (((x737<=x738)>>x739)&x740);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x753 = INT16_MIN;
	volatile uint64_t x754 = UINT64_MAX;
	volatile uint8_t x755 = 9U;
	volatile int8_t x756 = 26;
	volatile int32_t t21 = -459970981;

	t21 = (((x753<=x754)>>x755)&x756);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x765 = 5U;
	volatile int16_t x766 = INT16_MIN;
	int8_t x767 = 3;
	volatile int32_t x768 = INT32_MIN;
	volatile int32_t t22 = 2;

	t22 = (((x765<=x766)>>x767)&x768);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x810 = -1;
	uint16_t x811 = 0U;
	static uint16_t x812 = UINT16_MAX;
	volatile int32_t t23 = -1568869;

	t23 = (((x809<=x810)>>x811)&x812);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x817 = -1LL;
	static int8_t x818 = -43;
	static uint8_t x819 = 9U;
	int32_t x820 = 4910;
	volatile int32_t t24 = 11386;

	t24 = (((x817<=x818)>>x819)&x820);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x822 = 46U;
	int8_t x823 = 3;
	int32_t x824 = INT32_MIN;
	volatile int32_t t25 = 724;

	t25 = (((x821<=x822)>>x823)&x824);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x833 = INT8_MIN;
	int8_t x834 = INT8_MAX;
	volatile uint8_t x835 = 3U;
	volatile uint64_t t26 = 306LLU;

	t26 = (((x833<=x834)>>x835)&x836);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x841 = -4;
	int16_t x843 = 3;
	static uint64_t x844 = UINT64_MAX;
	uint64_t t27 = 6444310842687894357LLU;

	t27 = (((x841<=x842)>>x843)&x844);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x877 = -1LL;
	int8_t x878 = INT8_MAX;
	volatile int8_t x879 = 0;
	int8_t x880 = 13;
	static volatile int32_t t28 = -357;

	t28 = (((x877<=x878)>>x879)&x880);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x882 = 0U;
	static int16_t x883 = 0;
	static int32_t x884 = -480;
	volatile int32_t t29 = 21;

	t29 = (((x881<=x882)>>x883)&x884);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x905 = -10;
	int32_t t30 = 20295;

	t30 = (((x905<=x906)>>x907)&x908);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x933 = 1;
	static int16_t x934 = 7622;
	static volatile uint16_t x935 = 9U;
	int32_t x936 = INT32_MIN;
	int32_t t31 = -31;

	t31 = (((x933<=x934)>>x935)&x936);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x953 = 0;
	int32_t x954 = -35296521;
	volatile int16_t x955 = 0;
	static uint16_t x956 = 0U;
	volatile int32_t t32 = -2587;

	t32 = (((x953<=x954)>>x955)&x956);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x973 = INT32_MIN;
	uint64_t x974 = UINT64_MAX;
	volatile int32_t x976 = INT32_MIN;
	static int32_t t33 = -11;

	t33 = (((x973<=x974)>>x975)&x976);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x977 = -1;
	int32_t x978 = -511101537;
	static int64_t x980 = INT64_MIN;
	volatile int64_t t34 = -9598498LL;

	t34 = (((x977<=x978)>>x979)&x980);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x993 = 7U;
	int32_t x994 = -1;
	static volatile int8_t x995 = 1;
	int64_t x996 = INT64_MIN;
	int64_t t35 = -117236317878609284LL;

	t35 = (((x993<=x994)>>x995)&x996);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1001 = 2U;
	static volatile uint16_t x1002 = 6U;
	static uint32_t x1003 = 18U;
	int16_t x1004 = 2523;

	t36 = (((x1001<=x1002)>>x1003)&x1004);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1009 = 1;
	int8_t x1011 = 9;
	uint32_t x1012 = 142236U;
	volatile uint32_t t37 = 868492945U;

	t37 = (((x1009<=x1010)>>x1011)&x1012);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1017 = 0U;
	uint64_t x1018 = 388LLU;
	uint32_t x1019 = 2U;
	uint8_t x1020 = 18U;
	volatile int32_t t38 = -4;

	t38 = (((x1017<=x1018)>>x1019)&x1020);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1093 = UINT8_MAX;
	static int32_t x1094 = 32005;
	static uint8_t x1095 = 1U;
	volatile int32_t t39 = -106504548;

	t39 = (((x1093<=x1094)>>x1095)&x1096);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1101 = INT16_MIN;
	int8_t x1103 = 0;
	volatile uint8_t x1104 = UINT8_MAX;
	int32_t t40 = -16510605;

	t40 = (((x1101<=x1102)>>x1103)&x1104);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1121 = 5468U;
	int8_t x1122 = INT8_MIN;
	uint8_t x1123 = 5U;
	volatile uint32_t t41 = 38806336U;

	t41 = (((x1121<=x1122)>>x1123)&x1124);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1133 = -1;
	static int32_t x1134 = INT32_MAX;
	uint8_t x1135 = 1U;
	static int64_t x1136 = INT64_MIN;
	volatile int64_t t42 = -921LL;

	t42 = (((x1133<=x1134)>>x1135)&x1136);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1177 = INT8_MIN;
	uint32_t x1178 = UINT32_MAX;
	static uint32_t x1179 = 2U;
	volatile int8_t x1180 = 1;

	t43 = (((x1177<=x1178)>>x1179)&x1180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1206 = INT8_MIN;
	static volatile int8_t x1207 = 21;
	volatile int32_t t44 = 1248574;

	t44 = (((x1205<=x1206)>>x1207)&x1208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1228 = INT32_MAX;
	volatile int32_t t45 = 86195;

	t45 = (((x1225<=x1226)>>x1227)&x1228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1263 = 1;
	volatile uint64_t x1264 = UINT64_MAX;

	t46 = (((x1261<=x1262)>>x1263)&x1264);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1321 = UINT32_MAX;
	int8_t x1322 = INT8_MIN;
	int64_t x1324 = 1024554229LL;
	static int64_t t47 = 13LL;

	t47 = (((x1321<=x1322)>>x1323)&x1324);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1325 = 1017U;
	static int16_t x1326 = INT16_MAX;
	static int8_t x1327 = 0;

	t48 = (((x1325<=x1326)>>x1327)&x1328);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1353 = INT64_MIN;
	int16_t x1354 = -1;
	uint32_t x1355 = 3U;
	int16_t x1356 = -2;

	t49 = (((x1353<=x1354)>>x1355)&x1356);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1389 = -1;
	static int32_t x1390 = INT32_MAX;
	volatile uint32_t x1392 = 65174201U;

	t50 = (((x1389<=x1390)>>x1391)&x1392);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1485 = UINT8_MAX;
	volatile int16_t x1486 = INT16_MIN;
	int16_t x1487 = 0;
	static uint32_t x1488 = 1832497U;
	volatile uint32_t t51 = 794U;

	t51 = (((x1485<=x1486)>>x1487)&x1488);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x1490 = 149U;
	int32_t x1492 = INT32_MIN;
	static int32_t t52 = -599229908;

	t52 = (((x1489<=x1490)>>x1491)&x1492);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1506 = 0U;
	int32_t x1507 = 1;
	static int32_t t53 = -214087;

	t53 = (((x1505<=x1506)>>x1507)&x1508);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x1533 = UINT64_MAX;
	static int16_t x1534 = -2;
	uint8_t x1535 = 14U;
	uint16_t x1536 = 5U;
	volatile int32_t t54 = -66061;

	t54 = (((x1533<=x1534)>>x1535)&x1536);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1661 = 2;
	uint8_t x1662 = 1U;
	static volatile uint32_t x1664 = 1103331541U;

	t55 = (((x1661<=x1662)>>x1663)&x1664);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x1681 = INT64_MAX;
	int32_t x1682 = -1;
	volatile uint8_t x1683 = 3U;
	uint32_t x1684 = 18329874U;
	volatile uint32_t t56 = 25958065U;

	t56 = (((x1681<=x1682)>>x1683)&x1684);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1689 = INT64_MIN;
	volatile int8_t x1691 = 0;
	int8_t x1692 = -1;
	volatile int32_t t57 = 15326214;

	t57 = (((x1689<=x1690)>>x1691)&x1692);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1765 = INT16_MIN;
	static int64_t x1766 = -1LL;
	static volatile int32_t t58 = 216534;

	t58 = (((x1765<=x1766)>>x1767)&x1768);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1858 = -1;
	uint32_t x1859 = 0U;
	int64_t x1860 = INT64_MIN;

	t59 = (((x1857<=x1858)>>x1859)&x1860);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1901 = INT8_MIN;
	int8_t x1902 = -1;
	static volatile uint8_t x1903 = 15U;
	int8_t x1904 = -1;
	volatile int32_t t60 = 0;

	t60 = (((x1901<=x1902)>>x1903)&x1904);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1910 = 32;
	int8_t x1911 = 24;
	int16_t x1912 = INT16_MAX;

	t61 = (((x1909<=x1910)>>x1911)&x1912);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1913 = INT32_MAX;
	int8_t x1914 = 1;
	int64_t x1915 = 0LL;
	int32_t x1916 = INT32_MAX;
	volatile int32_t t62 = -240881120;

	t62 = (((x1913<=x1914)>>x1915)&x1916);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1941 = 24;
	uint8_t x1942 = UINT8_MAX;
	volatile uint8_t x1943 = 25U;
	volatile uint32_t t63 = 296159U;

	t63 = (((x1941<=x1942)>>x1943)&x1944);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1945 = -22861LL;
	int8_t x1946 = 1;
	int8_t x1947 = 0;
	int64_t x1948 = INT64_MIN;
	volatile int64_t t64 = 11LL;

	t64 = (((x1945<=x1946)>>x1947)&x1948);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2046 = INT32_MAX;
	uint8_t x2047 = 1U;
	static int64_t x2048 = -7113LL;
	volatile int64_t t65 = -38670597046904LL;

	t65 = (((x2045<=x2046)>>x2047)&x2048);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x2049 = INT64_MIN;
	volatile int32_t x2050 = INT32_MIN;
	static volatile uint32_t x2051 = 1U;
	static uint32_t t66 = 6181298U;

	t66 = (((x2049<=x2050)>>x2051)&x2052);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2101 = 3U;
	static int8_t x2102 = INT8_MIN;
	uint8_t x2104 = UINT8_MAX;
	static int32_t t67 = -19509379;

	t67 = (((x2101<=x2102)>>x2103)&x2104);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2109 = 15662U;
	uint16_t x2110 = 297U;
	uint64_t x2112 = 426540695825538LLU;
	volatile uint64_t t68 = 265693LLU;

	t68 = (((x2109<=x2110)>>x2111)&x2112);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2113 = -392;
	uint32_t x2115 = 1U;
	int32_t t69 = -1;

	t69 = (((x2113<=x2114)>>x2115)&x2116);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2117 = -1819676617520730LL;
	int64_t x2118 = -983387878985414LL;
	uint16_t x2119 = 8U;
	volatile uint64_t x2120 = UINT64_MAX;
	uint64_t t70 = 2047891054LLU;

	t70 = (((x2117<=x2118)>>x2119)&x2120);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x2121 = INT32_MAX;
	static int32_t x2122 = INT32_MIN;
	int32_t t71 = -5926040;

	t71 = (((x2121<=x2122)>>x2123)&x2124);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x2133 = UINT16_MAX;
	int64_t x2134 = -106LL;
	uint16_t x2135 = 30U;
	int16_t x2136 = INT16_MIN;
	volatile int32_t t72 = 5735;

	t72 = (((x2133<=x2134)>>x2135)&x2136);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2217 = -1;
	int16_t x2218 = INT16_MIN;
	volatile int16_t x2219 = 8;
	int64_t x2220 = INT64_MIN;
	int64_t t73 = 2283936987LL;

	t73 = (((x2217<=x2218)>>x2219)&x2220);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2225 = INT8_MIN;
	uint16_t x2226 = 659U;
	uint8_t x2227 = 0U;
	static volatile int32_t x2228 = -1;

	t74 = (((x2225<=x2226)>>x2227)&x2228);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2234 = -4339113;
	volatile uint64_t x2235 = 2LLU;
	volatile int16_t x2236 = 1752;

	t75 = (((x2233<=x2234)>>x2235)&x2236);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2267 = 5;
	int8_t x2268 = -1;

	t76 = (((x2265<=x2266)>>x2267)&x2268);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2297 = -1;
	volatile int8_t x2298 = INT8_MIN;
	static uint8_t x2299 = 0U;
	int16_t x2300 = -56;
	volatile int32_t t77 = 847;

	t77 = (((x2297<=x2298)>>x2299)&x2300);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2377 = INT32_MIN;
	uint16_t x2379 = 15U;
	int32_t x2380 = INT32_MAX;

	t78 = (((x2377<=x2378)>>x2379)&x2380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2393 = -1;
	uint8_t x2395 = 29U;
	volatile int32_t t79 = 821;

	t79 = (((x2393<=x2394)>>x2395)&x2396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2401 = 1024U;
	static volatile uint16_t x2402 = 4U;
	uint16_t x2403 = 4U;
	int8_t x2404 = INT8_MAX;
	int32_t t80 = -24;

	t80 = (((x2401<=x2402)>>x2403)&x2404);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2458 = 3U;
	uint8_t x2459 = 0U;

	t81 = (((x2457<=x2458)>>x2459)&x2460);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2521 = UINT8_MAX;
	uint16_t x2522 = 22294U;

	t82 = (((x2521<=x2522)>>x2523)&x2524);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2561 = 0;
	static uint64_t x2562 = UINT64_MAX;
	uint16_t x2563 = 9U;
	int32_t x2564 = INT32_MIN;
	static int32_t t83 = 291809902;

	t83 = (((x2561<=x2562)>>x2563)&x2564);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2565 = INT8_MAX;
	static uint32_t x2566 = 111856128U;
	static uint8_t x2567 = 2U;
	static int64_t x2568 = INT64_MIN;
	volatile int64_t t84 = -35726960776LL;

	t84 = (((x2565<=x2566)>>x2567)&x2568);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2582 = INT16_MIN;
	int64_t x2583 = 0LL;
	volatile int64_t x2584 = -1LL;
	static volatile int64_t t85 = -16072892LL;

	t85 = (((x2581<=x2582)>>x2583)&x2584);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2605 = -1;
	static uint16_t x2606 = UINT16_MAX;
	volatile uint8_t x2607 = 7U;
	int64_t x2608 = -1LL;

	t86 = (((x2605<=x2606)>>x2607)&x2608);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2617 = UINT16_MAX;
	static volatile int64_t x2618 = -1LL;
	int32_t x2620 = INT32_MIN;
	volatile int32_t t87 = -373626475;

	t87 = (((x2617<=x2618)>>x2619)&x2620);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2625 = INT16_MIN;
	static uint16_t x2626 = UINT16_MAX;
	uint8_t x2627 = 1U;
	int8_t x2628 = -4;
	volatile int32_t t88 = 6;

	t88 = (((x2625<=x2626)>>x2627)&x2628);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2641 = UINT64_MAX;
	static volatile int8_t x2642 = 2;
	int8_t x2644 = INT8_MAX;
	int32_t t89 = 98;

	t89 = (((x2641<=x2642)>>x2643)&x2644);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2697 = INT8_MIN;
	volatile uint8_t x2698 = 20U;
	volatile int8_t x2699 = 1;
	int64_t x2700 = INT64_MIN;
	int64_t t90 = -3553LL;

	t90 = (((x2697<=x2698)>>x2699)&x2700);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2733 = -2;
	static int8_t x2734 = -1;
	int32_t x2736 = INT32_MIN;
	int32_t t91 = -54863;

	t91 = (((x2733<=x2734)>>x2735)&x2736);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2797 = INT32_MAX;
	volatile int8_t x2798 = -1;
	uint8_t x2799 = 0U;
	volatile uint8_t x2800 = 14U;
	static int32_t t92 = 13908153;

	t92 = (((x2797<=x2798)>>x2799)&x2800);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2813 = 82595920778140436LLU;
	static int16_t x2814 = -1;
	uint8_t x2815 = 0U;
	int32_t x2816 = INT32_MAX;
	int32_t t93 = 89400464;

	t93 = (((x2813<=x2814)>>x2815)&x2816);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2830 = 19454955057590142LLU;
	uint32_t x2832 = 100669986U;
	volatile uint32_t t94 = 1454685075U;

	t94 = (((x2829<=x2830)>>x2831)&x2832);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2878 = 64U;
	volatile uint32_t x2880 = 284994710U;
	volatile uint32_t t95 = 2007738800U;

	t95 = (((x2877<=x2878)>>x2879)&x2880);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x2901 = -13033LL;
	static uint16_t x2902 = 2U;
	uint8_t x2903 = 0U;
	int16_t x2904 = 336;
	int32_t t96 = 2580397;

	t96 = (((x2901<=x2902)>>x2903)&x2904);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2993 = -1;
	int8_t x2994 = -59;
	static int32_t x2995 = 3;
	volatile uint32_t x2996 = 55882693U;

	t97 = (((x2993<=x2994)>>x2995)&x2996);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3025 = 3U;
	uint8_t x3026 = 3U;
	uint64_t x3028 = 6218709474710LLU;
	volatile uint64_t t98 = 464426500241131LLU;

	t98 = (((x3025<=x3026)>>x3027)&x3028);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3065 = -1;
	uint32_t x3066 = UINT32_MAX;
	int32_t x3067 = 1;
	int32_t t99 = 79;

	t99 = (((x3065<=x3066)>>x3067)&x3068);

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

