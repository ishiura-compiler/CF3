#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x8 = 37U;
static uint16_t x203 = UINT16_MAX;
volatile uint64_t t3 = 12792334LLU;
int16_t x255 = 16;
static uint16_t x264 = 61U;
int64_t x270 = INT64_MIN;
int32_t x303 = INT32_MIN;
volatile uint32_t x317 = 6608U;
uint64_t x427 = 40377020LLU;
static volatile int64_t x457 = 61759629236892LL;
uint16_t x458 = 62U;
int8_t x475 = 44;
uint64_t t14 = 154601097695146LLU;
static uint64_t x566 = 8613527475LLU;
int64_t x659 = 223956018698177LL;
uint16_t x694 = 20U;
uint16_t x696 = 5U;
static volatile int32_t x749 = INT32_MIN;
volatile int64_t t20 = -185663204473650LL;
static uint32_t x1017 = UINT32_MAX;
int8_t x1019 = INT8_MAX;
volatile int16_t x1075 = 8166;
int64_t t24 = -444LL;
static uint16_t x1151 = 94U;
volatile int32_t t26 = INT32_MIN;
int16_t x1211 = INT16_MAX;
volatile int32_t x1299 = 133736136;
volatile int64_t x1319 = -135635531321748700LL;
volatile uint64_t t30 = 137823663849726480LLU;
static uint32_t x1354 = 9636086U;
int32_t x1355 = INT32_MAX;
volatile int16_t x1356 = 9;
uint16_t x1402 = 1092U;
static int32_t t32 = -300;
volatile uint16_t x1439 = UINT16_MAX;
int16_t x1440 = 3;
uint32_t x1466 = UINT32_MAX;
int8_t x1467 = 31;
volatile uint32_t t34 = 1066809981U;
uint64_t x1486 = UINT64_MAX;
uint16_t x1488 = 62U;
int16_t x1497 = INT16_MIN;
volatile uint64_t t36 = 407825130482LLU;
uint16_t x1523 = 2563U;
volatile int64_t t37 = 2318LL;
uint64_t t38 = 3991071415944728672LLU;
uint8_t x1792 = 2U;
volatile int8_t x1795 = 3;
static uint8_t x1836 = 0U;
int16_t x1873 = 683;
static int16_t x2161 = INT16_MAX;
int16_t x2277 = 1141;
volatile uint16_t x2278 = 4U;
uint64_t x2296 = 4LLU;
volatile int64_t t49 = 2544236921742LL;
uint64_t t50 = 16491346493005738LLU;
int64_t x2455 = -12357362LL;
int8_t x2553 = -1;
uint64_t x2660 = 16LLU;
int8_t x2713 = 1;
int64_t t55 = -243573046708804LL;
int16_t x2762 = INT16_MIN;
uint32_t x2805 = UINT32_MAX;
int64_t x2806 = INT64_MIN;
static int8_t x2813 = INT8_MIN;
int32_t x2816 = 0;
volatile int32_t t62 = 269558;
volatile uint16_t x2937 = 116U;
uint64_t x2939 = 2642293567LLU;
uint16_t x2952 = 1U;
int8_t x2971 = INT8_MAX;
static volatile int64_t x3021 = 33066913234LL;
static uint8_t x3024 = 4U;
volatile uint8_t x3031 = UINT8_MAX;
uint8_t x3088 = 59U;
uint32_t x3116 = 5U;
uint8_t x3146 = 41U;
volatile int64_t t76 = 4439563618LL;
volatile uint16_t x3291 = 45U;
uint16_t x3382 = 155U;
volatile int8_t x3384 = 27;
uint64_t t79 = 5112035022115503LLU;
int32_t x3393 = INT32_MIN;
volatile int8_t x3407 = INT8_MIN;
uint8_t x3408 = 17U;
int16_t x3419 = 1;
volatile int8_t x3426 = INT8_MIN;
static int16_t x3436 = 0;
int32_t t85 = 17;
uint64_t t86 = 20423942934922508LLU;
uint8_t x3569 = UINT8_MAX;
int16_t x3587 = INT16_MIN;
static int64_t x3588 = 1LL;
uint8_t x3628 = 7U;
static uint16_t x3709 = UINT16_MAX;
int16_t x3710 = 1552;
int32_t t93 = 870376957;
volatile uint64_t t94 = 11696378LLU;
int32_t x3859 = -1;
volatile uint16_t x3860 = 7U;
volatile uint8_t x3869 = UINT8_MAX;
static volatile int32_t x3870 = -1;
int8_t x3906 = 0;


void f0(void) {
	static int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	int16_t x7 = 18;
	int64_t t0 = 1708748094306160983LL;

	t0 = (x5+((x6&x7)<<x8));

	if (t0 != 2473901129728LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 380U;
	uint16_t x10 = 1150U;
	int32_t x11 = INT32_MAX;
	int8_t x12 = 1;
	int32_t t1 = 972075;

	t1 = (x9+((x10&x11)<<x12));

	if (t1 != 2680) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 240431110697930LLU;
	volatile uint8_t x18 = 1U;
	volatile int32_t x19 = -1;
	int8_t x20 = 1;
	uint64_t t2 = 48414323329599LLU;

	t2 = (x17+((x18&x19)<<x20));

	if (t2 != 240431110697932LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x201 = 17317LLU;
	uint32_t x202 = 62U;
	uint8_t x204 = 3U;

	t3 = (x201+((x202&x203)<<x204));

	if (t3 != 17813LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int16_t x254 = INT16_MIN;
	uint16_t x256 = 22U;
	static volatile int32_t t4 = 841054;

	t4 = (x253+((x254&x255)<<x256));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x261 = 1;
	volatile int8_t x262 = 7;
	uint64_t x263 = UINT64_MAX;
	uint64_t t5 = 50924406550436LLU;

	t5 = (x261+((x262&x263)<<x264));

	if (t5 != 16140901064495857665LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x269 = INT64_MIN;
	uint8_t x271 = 1U;
	volatile uint8_t x272 = 1U;
	int64_t t6 = INT64_MIN;

	t6 = (x269+((x270&x271)<<x272));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x301 = -31166095LL;
	int16_t x302 = 6;
	uint8_t x304 = 1U;
	int64_t t7 = -13187415935986458LL;

	t7 = (x301+((x302&x303)<<x304));

	if (t7 != -31166095LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x313 = 111U;
	static int16_t x314 = INT16_MIN;
	uint8_t x315 = 12U;
	uint64_t x316 = 21LLU;
	volatile int32_t t8 = -1190152;

	t8 = (x313+((x314&x315)<<x316));

	if (t8 != 111) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x318 = 1985U;
	static volatile uint64_t x319 = 44LLU;
	uint16_t x320 = 29U;
	volatile uint64_t t9 = 423472101515LLU;

	t9 = (x317+((x318&x319)<<x320));

	if (t9 != 6608LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x377 = 0;
	static volatile int8_t x378 = 1;
	int32_t x379 = -2;
	uint16_t x380 = 3U;
	int32_t t10 = -1;

	t10 = (x377+((x378&x379)<<x380));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x425 = 56;
	int16_t x426 = INT16_MAX;
	uint8_t x428 = 0U;
	static volatile uint64_t t11 = 3875950029LLU;

	t11 = (x425+((x426&x427)<<x428));

	if (t11 != 6900LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x459 = 1784LLU;
	int8_t x460 = 3;
	static volatile uint64_t t12 = 500382787902423LLU;

	t12 = (x457+((x458&x459)<<x460));

	if (t12 != 61759629237340LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x473 = UINT16_MAX;
	int32_t x474 = -1;
	int8_t x476 = 4;
	volatile int32_t t13 = -346;

	t13 = (x473+((x474&x475)<<x476));

	if (t13 != 66239) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x477 = INT32_MIN;
	uint64_t x478 = 211203750415214704LLU;
	int32_t x479 = INT32_MIN;
	volatile uint16_t x480 = 8U;

	t14 = (x477+((x478&x479)<<x480));

	if (t14 != 17174671790388019200LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x565 = 8;
	uint8_t x567 = 26U;
	static uint16_t x568 = 0U;
	static uint64_t t15 = 36637519538024547LLU;

	t15 = (x565+((x566&x567)<<x568));

	if (t15 != 26LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x657 = 766574485;
	int32_t x658 = -1;
	int16_t x660 = 4;
	volatile int64_t t16 = -8879147540093533LL;

	t16 = (x657+((x658&x659)<<x660));

	if (t16 != 3583297065745317LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x665 = UINT32_MAX;
	int16_t x666 = 0;
	static uint32_t x667 = 524096U;
	uint8_t x668 = 0U;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x665+((x666&x667)<<x668));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x693 = INT16_MIN;
	int32_t x695 = INT32_MIN;
	int32_t t18 = 63050;

	t18 = (x693+((x694&x695)<<x696));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x750 = INT32_MIN;
	int8_t x751 = 3;
	uint16_t x752 = 22U;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x749+((x750&x751)<<x752));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x797 = 0U;
	static int64_t x798 = INT64_MAX;
	int64_t x799 = INT64_MIN;
	int16_t x800 = 24;

	t20 = (x797+((x798&x799)<<x800));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x937 = INT16_MAX;
	int8_t x938 = -1;
	static uint8_t x939 = 1U;
	static volatile uint32_t x940 = 0U;
	volatile int32_t t21 = 22;

	t21 = (x937+((x938&x939)<<x940));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x941 = 33399021U;
	uint32_t x942 = 17008666U;
	uint16_t x943 = UINT16_MAX;
	uint8_t x944 = 2U;
	static uint32_t t22 = 40872U;

	t22 = (x941+((x942&x943)<<x944));

	if (t22 != 33538389U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1018 = 1U;
	int8_t x1020 = 5;
	static volatile uint32_t t23 = 317U;

	t23 = (x1017+((x1018&x1019)<<x1020));

	if (t23 != 31U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1073 = INT8_MIN;
	volatile int64_t x1074 = 0LL;
	uint16_t x1076 = 7U;

	t24 = (x1073+((x1074&x1075)<<x1076));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1149 = INT8_MAX;
	volatile uint32_t x1150 = UINT32_MAX;
	uint8_t x1152 = 25U;
	volatile uint32_t t25 = 481132U;

	t25 = (x1149+((x1150&x1151)<<x1152));

	if (t25 != 3154116735U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1165 = INT32_MIN;
	static int32_t x1166 = INT32_MIN;
	volatile uint16_t x1167 = UINT16_MAX;
	uint8_t x1168 = 28U;

	t26 = (x1165+((x1166&x1167)<<x1168));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1209 = INT32_MIN;
	int64_t x1210 = INT64_MIN;
	int16_t x1212 = 3;
	volatile int64_t t27 = -51649884673LL;

	t27 = (x1209+((x1210&x1211)<<x1212));

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1217 = 63U;
	volatile int32_t x1218 = INT32_MIN;
	int16_t x1219 = INT16_MAX;
	uint8_t x1220 = 1U;
	int32_t t28 = -33209;

	t28 = (x1217+((x1218&x1219)<<x1220));

	if (t28 != 63) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1297 = UINT32_MAX;
	int64_t x1298 = INT64_MIN;
	uint16_t x1300 = 24U;
	volatile int64_t t29 = -448041092632659LL;

	t29 = (x1297+((x1298&x1299)<<x1300));

	if (t29 != 4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1317 = UINT8_MAX;
	uint64_t x1318 = UINT64_MAX;
	uint8_t x1320 = 16U;

	t30 = (x1317+((x1318&x1319)<<x1320));

	if (t30 != 2320462825881075967LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1353 = 4627811828LLU;
	volatile uint64_t t31 = 126LLU;

	t31 = (x1353+((x1354&x1355)<<x1356));

	if (t31 != 5266520564LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1401 = INT16_MIN;
	static int16_t x1403 = INT16_MIN;
	static volatile int8_t x1404 = 0;

	t32 = (x1401+((x1402&x1403)<<x1404));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1437 = -1;
	int32_t x1438 = INT32_MIN;
	static volatile int32_t t33 = -1753;

	t33 = (x1437+((x1438&x1439)<<x1440));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1465 = INT16_MIN;
	volatile int32_t x1468 = 3;

	t34 = (x1465+((x1466&x1467)<<x1468));

	if (t34 != 4294934776U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1485 = 117LLU;
	int8_t x1487 = INT8_MIN;
	uint64_t t35 = 596406878LLU;

	t35 = (x1485+((x1486&x1487)<<x1488));

	if (t35 != 117LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1498 = 31591061204LLU;
	uint32_t x1499 = 394705U;
	volatile int64_t x1500 = 0LL;

	t36 = (x1497+((x1498&x1499)<<x1500));

	if (t36 != 18446744073709520080LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1521 = 1LL;
	int8_t x1522 = INT8_MAX;
	int8_t x1524 = 3;

	t37 = (x1521+((x1522&x1523)<<x1524));

	if (t37 != 25LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1593 = INT32_MIN;
	volatile uint32_t x1594 = 9195U;
	uint64_t x1595 = 5262404568LLU;
	uint16_t x1596 = 14U;

	t38 = (x1593+((x1594&x1595)<<x1596));

	if (t38 != 18446744071712145408LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1789 = 4046168LLU;
	uint16_t x1790 = 93U;
	volatile uint32_t x1791 = 733U;
	volatile uint64_t t39 = 699828246LLU;

	t39 = (x1789+((x1790&x1791)<<x1792));

	if (t39 != 4046540LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1793 = 73U;
	uint8_t x1794 = 5U;
	int8_t x1796 = 0;
	int32_t t40 = 1;

	t40 = (x1793+((x1794&x1795)<<x1796));

	if (t40 != 74) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1833 = UINT64_MAX;
	int16_t x1834 = -1;
	uint64_t x1835 = 164681102629LLU;
	uint64_t t41 = 327482492949227LLU;

	t41 = (x1833+((x1834&x1835)<<x1836));

	if (t41 != 164681102628LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1874 = 541371LLU;
	int8_t x1875 = -1;
	static uint16_t x1876 = 2U;
	uint64_t t42 = 289782981LLU;

	t42 = (x1873+((x1874&x1875)<<x1876));

	if (t42 != 2166167LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1965 = 217;
	volatile int32_t x1966 = INT32_MIN;
	int64_t x1967 = 222252836LL;
	static volatile uint32_t x1968 = 12U;
	int64_t t43 = -119276LL;

	t43 = (x1965+((x1966&x1967)<<x1968));

	if (t43 != 217LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2101 = -1;
	uint16_t x2102 = 31006U;
	int32_t x2103 = 752705499;
	volatile int32_t x2104 = 0;
	static volatile int32_t t44 = -8;

	t44 = (x2101+((x2102&x2103)<<x2104));

	if (t44 != 22809) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2162 = -1;
	uint16_t x2163 = 854U;
	static uint16_t x2164 = 0U;
	int32_t t45 = 416;

	t45 = (x2161+((x2162&x2163)<<x2164));

	if (t45 != 33621) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2269 = INT8_MIN;
	uint16_t x2270 = 3965U;
	static uint8_t x2271 = 1U;
	volatile uint8_t x2272 = 29U;
	static int32_t t46 = -359525;

	t46 = (x2269+((x2270&x2271)<<x2272));

	if (t46 != 536870784) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2279 = -1387208708452956LL;
	volatile uint16_t x2280 = 3U;
	volatile int64_t t47 = 22730381655LL;

	t47 = (x2277+((x2278&x2279)<<x2280));

	if (t47 != 1173LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2293 = 21;
	uint16_t x2294 = UINT16_MAX;
	int8_t x2295 = 5;
	static volatile int32_t t48 = 1845;

	t48 = (x2293+((x2294&x2295)<<x2296));

	if (t48 != 101) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2365 = -1;
	uint8_t x2366 = 24U;
	volatile int64_t x2367 = INT64_MAX;
	uint16_t x2368 = 1U;

	t49 = (x2365+((x2366&x2367)<<x2368));

	if (t49 != 47LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2441 = INT64_MIN;
	uint8_t x2442 = 1U;
	uint64_t x2443 = 5924LLU;
	int8_t x2444 = 2;

	t50 = (x2441+((x2442&x2443)<<x2444));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2453 = INT32_MIN;
	int8_t x2454 = INT8_MAX;
	static int8_t x2456 = 1;
	static int64_t t51 = 408622680393833LL;

	t51 = (x2453+((x2454&x2455)<<x2456));

	if (t51 != -2147483620LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2554 = 5563LL;
	uint64_t x2555 = 209447821932LLU;
	static int32_t x2556 = 23;
	volatile uint64_t t52 = 1425LLU;

	t52 = (x2553+((x2554&x2555)<<x2556));

	if (t52 != 335544319LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2633 = INT64_MIN;
	int64_t x2634 = -1LL;
	static volatile uint8_t x2635 = UINT8_MAX;
	uint16_t x2636 = 1U;
	volatile int64_t t53 = -104173780701782490LL;

	t53 = (x2633+((x2634&x2635)<<x2636));

	if (t53 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2657 = -1406949233864765592LL;
	int32_t x2658 = INT32_MIN;
	uint16_t x2659 = 1U;
	int64_t t54 = 2990963084692272955LL;

	t54 = (x2657+((x2658&x2659)<<x2660));

	if (t54 != -1406949233864765592LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2714 = 10U;
	int64_t x2715 = -16765LL;
	uint8_t x2716 = 1U;

	t55 = (x2713+((x2714&x2715)<<x2716));

	if (t55 != 5LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2761 = INT16_MIN;
	int8_t x2763 = 0;
	uint16_t x2764 = 3U;
	int32_t t56 = 38;

	t56 = (x2761+((x2762&x2763)<<x2764));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2781 = INT32_MAX;
	volatile uint64_t x2782 = 2898121162192752LLU;
	volatile int16_t x2783 = INT16_MAX;
	static int64_t x2784 = 1LL;
	uint64_t t57 = 6939597427LLU;

	t57 = (x2781+((x2782&x2783)<<x2784));

	if (t57 != 2147544799LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x2807 = UINT32_MAX;
	int16_t x2808 = 3;
	volatile int64_t t58 = 205440579LL;

	t58 = (x2805+((x2806&x2807)<<x2808));

	if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x2814 = 124U;
	uint8_t x2815 = 31U;
	volatile int32_t t59 = 1196905;

	t59 = (x2813+((x2814&x2815)<<x2816));

	if (t59 != -100) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2857 = 274421361216770119LLU;
	volatile uint64_t x2858 = UINT64_MAX;
	uint16_t x2859 = 31243U;
	int32_t x2860 = 0;
	uint64_t t60 = 31LLU;

	t60 = (x2857+((x2858&x2859)<<x2860));

	if (t60 != 274421361216801362LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x2889 = 1U;
	uint64_t x2890 = 110548LLU;
	int64_t x2891 = INT64_MIN;
	int8_t x2892 = 1;
	static volatile uint64_t t61 = 874123712564178LLU;

	t61 = (x2889+((x2890&x2891)<<x2892));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2901 = UINT8_MAX;
	static int16_t x2902 = -1;
	uint16_t x2903 = 6785U;
	volatile int8_t x2904 = 0;

	t62 = (x2901+((x2902&x2903)<<x2904));

	if (t62 != 7040) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2938 = 8U;
	uint8_t x2940 = 1U;
	volatile uint64_t t63 = 2018598316LLU;

	t63 = (x2937+((x2938&x2939)<<x2940));

	if (t63 != 132LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2949 = 0;
	int64_t x2950 = INT64_MIN;
	uint32_t x2951 = 3U;
	volatile int64_t t64 = -90LL;

	t64 = (x2949+((x2950&x2951)<<x2952));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2965 = INT8_MIN;
	int16_t x2966 = INT16_MIN;
	volatile int8_t x2967 = INT8_MAX;
	uint32_t x2968 = 1U;
	int32_t t65 = -19;

	t65 = (x2965+((x2966&x2967)<<x2968));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2969 = -100;
	int32_t x2970 = INT32_MIN;
	volatile int16_t x2972 = 1;
	static int32_t t66 = -19549;

	t66 = (x2969+((x2970&x2971)<<x2972));

	if (t66 != -100) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3022 = -1LL;
	uint64_t x3023 = 900LLU;
	static volatile uint64_t t67 = 31415097LLU;

	t67 = (x3021+((x3022&x3023)<<x3024));

	if (t67 != 33066927634LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3029 = 2027234926LLU;
	static int8_t x3030 = -1;
	uint32_t x3032 = 4U;
	uint64_t t68 = 154LLU;

	t68 = (x3029+((x3030&x3031)<<x3032));

	if (t68 != 2027239006LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x3053 = -64043157;
	uint8_t x3054 = 3U;
	int8_t x3055 = -1;
	int16_t x3056 = 4;
	int32_t t69 = -720;

	t69 = (x3053+((x3054&x3055)<<x3056));

	if (t69 != -64043109) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3081 = 5168;
	uint16_t x3082 = 3400U;
	uint32_t x3083 = UINT32_MAX;
	uint8_t x3084 = 23U;
	uint32_t t70 = 1366643302U;

	t70 = (x3081+((x3082&x3083)<<x3084));

	if (t70 != 2751468592U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x3085 = -1;
	int64_t x3086 = INT64_MIN;
	static uint16_t x3087 = 11158U;
	volatile int64_t t71 = -2953LL;

	t71 = (x3085+((x3086&x3087)<<x3088));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3113 = INT64_MIN;
	int64_t x3114 = -1LL;
	int32_t x3115 = INT32_MAX;
	int64_t t72 = -9928681475LL;

	t72 = (x3113+((x3114&x3115)<<x3116));

	if (t72 != -9223371968135299104LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x3145 = -1LL;
	int32_t x3147 = 0;
	volatile int16_t x3148 = 1;
	int64_t t73 = -1LL;

	t73 = (x3145+((x3146&x3147)<<x3148));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x3197 = 130U;
	int8_t x3198 = -1;
	uint16_t x3199 = 410U;
	int64_t x3200 = 1LL;
	volatile int32_t t74 = 908308;

	t74 = (x3197+((x3198&x3199)<<x3200));

	if (t74 != 950) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3237 = UINT8_MAX;
	static int16_t x3238 = INT16_MAX;
	int64_t x3239 = INT64_MAX;
	uint8_t x3240 = 7U;
	int64_t t75 = 1107877029617014939LL;

	t75 = (x3237+((x3238&x3239)<<x3240));

	if (t75 != 4194431LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3281 = INT64_MIN;
	volatile int8_t x3282 = INT8_MAX;
	volatile int32_t x3283 = -1;
	static int16_t x3284 = 1;

	t76 = (x3281+((x3282&x3283)<<x3284));

	if (t76 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3289 = INT32_MIN;
	static volatile uint32_t x3290 = UINT32_MAX;
	volatile int8_t x3292 = 19;
	volatile uint32_t t77 = 613503270U;

	t77 = (x3289+((x3290&x3291)<<x3292));

	if (t77 != 2171076608U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x3345 = INT16_MIN;
	int8_t x3346 = -1;
	uint64_t x3347 = 11745LLU;
	uint8_t x3348 = 1U;
	volatile uint64_t t78 = 35910915237869259LLU;

	t78 = (x3345+((x3346&x3347)<<x3348));

	if (t78 != 18446744073709542338LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3381 = INT64_MIN;
	uint64_t x3383 = UINT64_MAX;

	t79 = (x3381+((x3382&x3383)<<x3384));

	if (t79 != 9223372057658523648LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3394 = 5;
	int8_t x3395 = INT8_MIN;
	uint16_t x3396 = 0U;
	int32_t t80 = INT32_MIN;

	t80 = (x3393+((x3394&x3395)<<x3396));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3405 = -1;
	static int8_t x3406 = 0;
	int32_t t81 = -130734498;

	t81 = (x3405+((x3406&x3407)<<x3408));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3413 = -1;
	int32_t x3414 = 3545;
	volatile uint8_t x3415 = UINT8_MAX;
	uint16_t x3416 = 6U;
	int32_t t82 = 0;

	t82 = (x3413+((x3414&x3415)<<x3416));

	if (t82 != 13887) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3417 = 42;
	uint64_t x3418 = 3946973902239127343LLU;
	volatile uint32_t x3420 = 24U;
	volatile uint64_t t83 = 215501045890811799LLU;

	t83 = (x3417+((x3418&x3419)<<x3420));

	if (t83 != 16777258LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3425 = 1015036462U;
	int8_t x3427 = INT8_MAX;
	uint8_t x3428 = 31U;
	static volatile uint32_t t84 = 109696965U;

	t84 = (x3425+((x3426&x3427)<<x3428));

	if (t84 != 1015036462U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x3433 = 4139;
	static int8_t x3434 = INT8_MIN;
	volatile uint8_t x3435 = 58U;

	t85 = (x3433+((x3434&x3435)<<x3436));

	if (t85 != 4139) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3441 = INT64_MAX;
	int32_t x3442 = -1;
	uint64_t x3443 = 83854319771463LLU;
	uint8_t x3444 = 1U;

	t86 = (x3441+((x3442&x3443)<<x3444));

	if (t86 != 9223539745494318733LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x3529 = 6462097163150944LL;
	int8_t x3530 = 5;
	int64_t x3531 = -1LL;
	uint8_t x3532 = 59U;
	int64_t t87 = -2845348332703190016LL;

	t87 = (x3529+((x3530&x3531)<<x3532));

	if (t87 != 2888765858680268384LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3533 = -1LL;
	int64_t x3534 = INT64_MIN;
	uint16_t x3535 = 1738U;
	int8_t x3536 = 1;
	volatile int64_t t88 = 500339LL;

	t88 = (x3533+((x3534&x3535)<<x3536));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3570 = UINT16_MAX;
	static int16_t x3571 = 2;
	uint8_t x3572 = 12U;
	int32_t t89 = 576515295;

	t89 = (x3569+((x3570&x3571)<<x3572));

	if (t89 != 8447) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3585 = INT8_MIN;
	static uint8_t x3586 = UINT8_MAX;
	volatile int32_t t90 = 41;

	t90 = (x3585+((x3586&x3587)<<x3588));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3613 = 52450082;
	static volatile int64_t x3614 = -3484121331539405654LL;
	int16_t x3615 = 2;
	static int32_t x3616 = 0;
	static int64_t t91 = -990948807738572619LL;

	t91 = (x3613+((x3614&x3615)<<x3616));

	if (t91 != 52450084LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x3625 = 1U;
	int64_t x3626 = INT64_MIN;
	uint8_t x3627 = 1U;
	static int64_t t92 = -7726354148LL;

	t92 = (x3625+((x3626&x3627)<<x3628));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3711 = UINT16_MAX;
	int8_t x3712 = 6;

	t93 = (x3709+((x3710&x3711)<<x3712));

	if (t93 != 164863) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x3769 = 2LLU;
	uint8_t x3770 = 49U;
	int8_t x3771 = -1;
	uint16_t x3772 = 2U;

	t94 = (x3769+((x3770&x3771)<<x3772));

	if (t94 != 198LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x3857 = INT64_MIN;
	static int8_t x3858 = 25;
	volatile int64_t t95 = 455742491788LL;

	t95 = (x3857+((x3858&x3859)<<x3860));

	if (t95 != -9223372036854772608LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3871 = UINT64_MAX;
	int8_t x3872 = 16;
	uint64_t t96 = 1720201LLU;

	t96 = (x3869+((x3870&x3871)<<x3872));

	if (t96 != 18446744073709486335LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3905 = 827U;
	int16_t x3907 = INT16_MAX;
	static volatile uint16_t x3908 = 4U;
	int32_t t97 = 0;

	t97 = (x3905+((x3906&x3907)<<x3908));

	if (t97 != 827) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3913 = INT64_MIN;
	static volatile int8_t x3914 = -1;
	int8_t x3915 = INT8_MAX;
	uint64_t x3916 = 1LLU;
	volatile int64_t t98 = -12454468424LL;

	t98 = (x3913+((x3914&x3915)<<x3916));

	if (t98 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x3929 = INT64_MAX;
	int16_t x3930 = INT16_MIN;
	uint64_t x3931 = 24503620474371LLU;
	uint64_t x3932 = 62LLU;
	volatile uint64_t t99 = 2LLU;

	t99 = (x3929+((x3930&x3931)<<x3932));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

