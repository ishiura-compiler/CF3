#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x85 = 3054010163232LL;
volatile int64_t t0 = -26420418LL;
uint64_t x121 = 15175798955298LLU;
uint64_t t1 = 2701491213199LLU;
uint16_t x217 = 1U;
volatile uint64_t x220 = UINT64_MAX;
int16_t x239 = 0;
int8_t x243 = -1;
int32_t x347 = INT32_MIN;
volatile uint8_t x577 = UINT8_MAX;
volatile int64_t x622 = 3LL;
uint16_t x857 = UINT16_MAX;
uint8_t x858 = 6U;
volatile int16_t x860 = INT16_MAX;
int32_t t11 = 468636408;
volatile uint8_t x1025 = UINT8_MAX;
uint64_t x1038 = 2LLU;
volatile int32_t x1076 = -1;
volatile uint32_t t14 = 146904625U;
int8_t x1078 = 2;
uint32_t x1118 = 7U;
uint32_t x1293 = UINT32_MAX;
uint32_t x1295 = 25975648U;
int8_t x1345 = INT8_MAX;
volatile int32_t t23 = -148229559;
int32_t x1517 = INT32_MAX;
volatile int16_t x1518 = 0;
int8_t x1520 = -2;
int32_t t24 = INT32_MAX;
int64_t t25 = -1232LL;
int16_t x1610 = 2;
static int64_t x1691 = INT64_MAX;
static volatile uint16_t x1693 = 242U;
int64_t x1695 = INT64_MIN;
uint8_t x1696 = 2U;
uint8_t x1752 = UINT8_MAX;
int32_t t29 = INT32_MAX;
volatile int8_t x1762 = 0;
static int32_t x1841 = INT32_MAX;
int32_t t32 = 122144986;
uint8_t x1957 = 11U;
static int8_t x2104 = -1;
int32_t t34 = -4009940;
static int16_t x2105 = INT16_MAX;
int32_t t36 = -224461;
volatile int32_t t39 = -269824;
static uint32_t x2620 = 43684U;
static uint16_t x2722 = 3U;
int64_t x2724 = -1LL;
static int8_t x2776 = -1;
int32_t t47 = -194;
static int32_t x3057 = INT32_MAX;
uint64_t x3060 = 3756577742LLU;
static uint64_t x3583 = 425526LLU;
uint64_t x3685 = UINT64_MAX;
uint16_t x3686 = 5U;
int64_t x4093 = 133321144LL;
uint16_t x4095 = UINT16_MAX;
static uint64_t x4096 = 6252LLU;
int64_t t61 = 132LL;
int32_t x4143 = INT32_MIN;
uint8_t x4146 = 1U;
volatile uint32_t x4225 = 28347323U;
int16_t x4227 = INT16_MIN;
volatile uint32_t t66 = 2531344U;
static uint8_t x4365 = 1U;
int8_t x4392 = INT8_MAX;
static int8_t x4720 = 0;
static volatile int32_t t72 = -6840467;
static volatile int32_t x4789 = INT32_MAX;
int64_t x4792 = INT64_MIN;
int32_t t74 = -180;
volatile int8_t x4955 = 3;
int16_t x4987 = INT16_MIN;
int64_t x4988 = -1340LL;
volatile int8_t x5034 = 12;
volatile int32_t x5200 = INT32_MAX;
uint32_t x5237 = 9268627U;
int16_t x5240 = INT16_MIN;
static int32_t x5296 = INT32_MIN;
uint32_t x5649 = 373977U;
int16_t x5709 = INT16_MAX;
volatile int16_t x5750 = 6;
static uint64_t x5752 = 1089121953163729LLU;
uint16_t x5822 = 0U;
int16_t x5865 = INT16_MAX;
int32_t x5868 = INT32_MIN;
int32_t x5991 = -157;
volatile uint32_t t95 = 1507U;
uint16_t x6105 = UINT16_MAX;
int16_t x6164 = INT16_MAX;
static volatile int32_t t98 = 95;
uint8_t x6194 = 2U;
volatile int8_t x6196 = -1;


void f0(void) {
	uint8_t x86 = 1U;
	uint16_t x87 = UINT16_MAX;
	int16_t x88 = INT16_MIN;

	t0 = (x85>>(x86<<(x87==x88)));

	if (t0 != 1527005081616LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x122 = 5U;
	static volatile int16_t x123 = 14061;
	volatile int64_t x124 = -104763007LL;

	t1 = (x121>>(x122<<(x123==x124)));

	if (t1 != 474243717353LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x157 = 837566321LLU;
	static uint8_t x158 = 1U;
	int64_t x159 = -131LL;
	volatile int32_t x160 = INT32_MIN;
	volatile uint64_t t2 = 5LLU;

	t2 = (x157>>(x158<<(x159==x160)));

	if (t2 != 418783160LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x201 = 0;
	volatile uint32_t x202 = 14U;
	int8_t x203 = INT8_MAX;
	int32_t x204 = -655106949;
	int32_t t3 = -101022;

	t3 = (x201>>(x202<<(x203==x204)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x218 = 25;
	volatile int32_t x219 = INT32_MIN;
	int32_t t4 = 3838;

	t4 = (x217>>(x218<<(x219==x220)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x237 = UINT32_MAX;
	uint16_t x238 = 1U;
	int64_t x240 = INT64_MIN;
	uint32_t t5 = 384244U;

	t5 = (x237>>(x238<<(x239==x240)));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = 25U;
	int64_t x244 = INT64_MAX;
	volatile uint64_t t6 = 183001LLU;

	t6 = (x241>>(x242<<(x243==x244)));

	if (t6 != 549755813887LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = 7;
	int64_t x348 = INT64_MAX;
	uint64_t t7 = 9111528336411513373LLU;

	t7 = (x345>>(x346<<(x347==x348)));

	if (t7 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x393 = 6113946195829404LLU;
	int8_t x394 = 21;
	int16_t x395 = INT16_MIN;
	volatile int16_t x396 = -30;
	volatile uint64_t t8 = 3408LLU;

	t8 = (x393>>(x394<<(x395==x396)));

	if (t8 != 2915356729LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x578 = 6U;
	int32_t x579 = INT32_MIN;
	volatile uint8_t x580 = UINT8_MAX;
	volatile int32_t t9 = -867824605;

	t9 = (x577>>(x578<<(x579==x580)));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x621 = UINT64_MAX;
	int64_t x623 = -15013LL;
	int16_t x624 = INT16_MAX;
	volatile uint64_t t10 = 56703LLU;

	t10 = (x621>>(x622<<(x623==x624)));

	if (t10 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x859 = 5U;

	t11 = (x857>>(x858<<(x859==x860)));

	if (t11 != 1023) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x1026 = 0U;
	uint64_t x1027 = 7836172882046776LLU;
	volatile int8_t x1028 = INT8_MAX;
	volatile int32_t t12 = -212;

	t12 = (x1025>>(x1026<<(x1027==x1028)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1037 = INT32_MAX;
	volatile int8_t x1039 = 0;
	volatile int8_t x1040 = 6;
	int32_t t13 = 16248;

	t13 = (x1037>>(x1038<<(x1039==x1040)));

	if (t13 != 536870911) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x1073 = 6789398U;
	uint16_t x1074 = 1U;
	int64_t x1075 = INT64_MIN;

	t14 = (x1073>>(x1074<<(x1075==x1076)));

	if (t14 != 3394699U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1077 = INT8_MAX;
	volatile uint64_t x1079 = 1583713206268LLU;
	int64_t x1080 = -1LL;
	int32_t t15 = 2587754;

	t15 = (x1077>>(x1078<<(x1079==x1080)));

	if (t15 != 31) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x1117 = 7U;
	uint32_t x1119 = 1801U;
	static uint32_t x1120 = UINT32_MAX;
	static uint32_t t16 = 56260091U;

	t16 = (x1117>>(x1118<<(x1119==x1120)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1205 = UINT64_MAX;
	volatile uint8_t x1206 = 14U;
	int16_t x1207 = INT16_MIN;
	int64_t x1208 = 0LL;
	static uint64_t t17 = 64337171030206LLU;

	t17 = (x1205>>(x1206<<(x1207==x1208)));

	if (t17 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1233 = 86030048U;
	uint8_t x1234 = 0U;
	uint16_t x1235 = 2U;
	int64_t x1236 = 56794719853344LL;
	volatile uint32_t t18 = 1978738100U;

	t18 = (x1233>>(x1234<<(x1235==x1236)));

	if (t18 != 86030048U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x1294 = 6;
	uint32_t x1296 = UINT32_MAX;
	uint32_t t19 = 162U;

	t19 = (x1293>>(x1294<<(x1295==x1296)));

	if (t19 != 67108863U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1305 = 81;
	volatile int16_t x1306 = 2;
	int64_t x1307 = INT64_MIN;
	static uint8_t x1308 = 19U;
	static int32_t t20 = 1;

	t20 = (x1305>>(x1306<<(x1307==x1308)));

	if (t20 != 20) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1346 = 0U;
	int64_t x1347 = INT64_MIN;
	int64_t x1348 = -1LL;
	static volatile int32_t t21 = 1594;

	t21 = (x1345>>(x1346<<(x1347==x1348)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1465 = 113216U;
	static uint8_t x1466 = 11U;
	int16_t x1467 = INT16_MIN;
	volatile int8_t x1468 = INT8_MIN;
	static volatile uint32_t t22 = 7824449U;

	t22 = (x1465>>(x1466<<(x1467==x1468)));

	if (t22 != 55U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1473 = INT8_MAX;
	uint8_t x1474 = 10U;
	uint32_t x1475 = UINT32_MAX;
	int64_t x1476 = 197LL;

	t23 = (x1473>>(x1474<<(x1475==x1476)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1519 = 2529176059LLU;

	t24 = (x1517>>(x1518<<(x1519==x1520)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1529 = 104563855658LL;
	uint16_t x1530 = 22U;
	int32_t x1531 = -1;
	int32_t x1532 = INT32_MIN;

	t25 = (x1529>>(x1530<<(x1531==x1532)));

	if (t25 != 24929LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1609 = UINT64_MAX;
	uint8_t x1611 = UINT8_MAX;
	int64_t x1612 = 763713120642LL;
	volatile uint64_t t26 = 5297LLU;

	t26 = (x1609>>(x1610<<(x1611==x1612)));

	if (t26 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1689 = UINT8_MAX;
	uint16_t x1690 = 1U;
	int64_t x1692 = INT64_MIN;
	volatile int32_t t27 = -26158121;

	t27 = (x1689>>(x1690<<(x1691==x1692)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1694 = 5U;
	int32_t t28 = 7;

	t28 = (x1693>>(x1694<<(x1695==x1696)));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1749 = INT32_MAX;
	static int64_t x1750 = 0LL;
	int8_t x1751 = -1;

	t29 = (x1749>>(x1750<<(x1751==x1752)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1761 = 124LLU;
	uint8_t x1763 = UINT8_MAX;
	int64_t x1764 = INT64_MIN;
	uint64_t t30 = 691394222140860649LLU;

	t30 = (x1761>>(x1762<<(x1763==x1764)));

	if (t30 != 124LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1777 = INT32_MAX;
	uint32_t x1778 = 0U;
	int16_t x1779 = INT16_MIN;
	static int32_t x1780 = -110;
	int32_t t31 = INT32_MAX;

	t31 = (x1777>>(x1778<<(x1779==x1780)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1842 = 1U;
	static volatile int64_t x1843 = INT64_MAX;
	int8_t x1844 = INT8_MIN;

	t32 = (x1841>>(x1842<<(x1843==x1844)));

	if (t32 != 1073741823) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1958 = 6U;
	int8_t x1959 = 4;
	static int32_t x1960 = INT32_MIN;
	int32_t t33 = 3;

	t33 = (x1957>>(x1958<<(x1959==x1960)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2101 = 1U;
	int16_t x2102 = 1;
	int16_t x2103 = INT16_MAX;

	t34 = (x2101>>(x2102<<(x2103==x2104)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x2106 = 0U;
	static volatile uint8_t x2107 = 7U;
	int64_t x2108 = INT64_MAX;
	int32_t t35 = 680;

	t35 = (x2105>>(x2106<<(x2107==x2108)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x2169 = 2U;
	static volatile int32_t x2170 = 1;
	uint16_t x2171 = 3U;
	static volatile int64_t x2172 = INT64_MAX;

	t36 = (x2169>>(x2170<<(x2171==x2172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2325 = UINT16_MAX;
	volatile int8_t x2326 = 10;
	int64_t x2327 = INT64_MIN;
	uint32_t x2328 = 7187U;
	volatile int32_t t37 = -11;

	t37 = (x2325>>(x2326<<(x2327==x2328)));

	if (t37 != 63) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2401 = 109845296155523LL;
	uint32_t x2402 = 1U;
	int8_t x2403 = -3;
	static uint16_t x2404 = 5U;
	static volatile int64_t t38 = -9176LL;

	t38 = (x2401>>(x2402<<(x2403==x2404)));

	if (t38 != 54922648077761LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2585 = 289;
	uint8_t x2586 = 1U;
	int32_t x2587 = INT32_MAX;
	int64_t x2588 = -1LL;

	t39 = (x2585>>(x2586<<(x2587==x2588)));

	if (t39 != 144) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2589 = UINT16_MAX;
	int64_t x2590 = 8LL;
	static int16_t x2591 = -344;
	int64_t x2592 = 165126566534LL;
	volatile int32_t t40 = -29;

	t40 = (x2589>>(x2590<<(x2591==x2592)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2617 = INT32_MAX;
	volatile uint8_t x2618 = 9U;
	int32_t x2619 = INT32_MIN;
	static int32_t t41 = 30163527;

	t41 = (x2617>>(x2618<<(x2619==x2620)));

	if (t41 != 4194303) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2645 = 16U;
	uint16_t x2646 = 14U;
	static int32_t x2647 = INT32_MIN;
	int16_t x2648 = -208;
	volatile int32_t t42 = 66085;

	t42 = (x2645>>(x2646<<(x2647==x2648)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2661 = UINT8_MAX;
	uint32_t x2662 = 15U;
	int64_t x2663 = INT64_MAX;
	int32_t x2664 = -696;
	int32_t t43 = -1;

	t43 = (x2661>>(x2662<<(x2663==x2664)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2713 = UINT8_MAX;
	volatile int8_t x2714 = 0;
	int32_t x2715 = INT32_MIN;
	volatile int8_t x2716 = INT8_MIN;
	volatile int32_t t44 = -88261;

	t44 = (x2713>>(x2714<<(x2715==x2716)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2721 = INT32_MAX;
	volatile uint32_t x2723 = 87498284U;
	volatile int32_t t45 = 1640;

	t45 = (x2721>>(x2722<<(x2723==x2724)));

	if (t45 != 268435455) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2773 = INT16_MAX;
	uint16_t x2774 = 3U;
	int64_t x2775 = INT64_MIN;
	static int32_t t46 = -5;

	t46 = (x2773>>(x2774<<(x2775==x2776)));

	if (t46 != 4095) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2809 = 3;
	int16_t x2810 = 1;
	uint64_t x2811 = 1445213515455LLU;
	volatile int16_t x2812 = INT16_MIN;

	t47 = (x2809>>(x2810<<(x2811==x2812)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2889 = UINT16_MAX;
	volatile int8_t x2890 = 6;
	static int32_t x2891 = -1;
	uint32_t x2892 = UINT32_MAX;
	int32_t t48 = -144760;

	t48 = (x2889>>(x2890<<(x2891==x2892)));

	if (t48 != 15) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x3058 = 0U;
	int32_t x3059 = INT32_MAX;
	volatile int32_t t49 = INT32_MAX;

	t49 = (x3057>>(x3058<<(x3059==x3060)));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x3277 = INT32_MAX;
	uint16_t x3278 = 1U;
	static uint32_t x3279 = 23U;
	int8_t x3280 = -1;
	int32_t t50 = -55217607;

	t50 = (x3277>>(x3278<<(x3279==x3280)));

	if (t50 != 1073741823) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x3381 = UINT32_MAX;
	static int8_t x3382 = 3;
	static volatile uint64_t x3383 = UINT64_MAX;
	int16_t x3384 = INT16_MAX;
	uint32_t t51 = 507U;

	t51 = (x3381>>(x3382<<(x3383==x3384)));

	if (t51 != 536870911U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3581 = 130788123777787LLU;
	uint8_t x3582 = 5U;
	int64_t x3584 = -1LL;
	volatile uint64_t t52 = 424806024573LLU;

	t52 = (x3581>>(x3582<<(x3583==x3584)));

	if (t52 != 4087128868055LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3585 = UINT8_MAX;
	int8_t x3586 = 0;
	volatile int32_t x3587 = 12443;
	static int16_t x3588 = INT16_MAX;
	volatile int32_t t53 = 0;

	t53 = (x3585>>(x3586<<(x3587==x3588)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x3593 = INT32_MAX;
	uint8_t x3594 = 11U;
	static uint16_t x3595 = 918U;
	volatile uint32_t x3596 = UINT32_MAX;
	int32_t t54 = 0;

	t54 = (x3593>>(x3594<<(x3595==x3596)));

	if (t54 != 1048575) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3687 = -4042087;
	int64_t x3688 = INT64_MAX;
	volatile uint64_t t55 = 3058152269LLU;

	t55 = (x3685>>(x3686<<(x3687==x3688)));

	if (t55 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x3741 = 27U;
	int16_t x3742 = 1;
	int16_t x3743 = -1;
	int64_t x3744 = INT64_MAX;
	int32_t t56 = 661230559;

	t56 = (x3741>>(x3742<<(x3743==x3744)));

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3761 = UINT64_MAX;
	uint8_t x3762 = 56U;
	static int32_t x3763 = -1;
	int32_t x3764 = -18748011;
	volatile uint64_t t57 = 18559797LLU;

	t57 = (x3761>>(x3762<<(x3763==x3764)));

	if (t57 != 255LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3901 = 2037U;
	uint32_t x3902 = 2U;
	int64_t x3903 = -1LL;
	uint64_t x3904 = 15619197LLU;
	int32_t t58 = -1;

	t58 = (x3901>>(x3902<<(x3903==x3904)));

	if (t58 != 509) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3909 = 1;
	int8_t x3910 = 0;
	static volatile int8_t x3911 = INT8_MAX;
	uint64_t x3912 = 1801933730607345169LLU;
	volatile int32_t t59 = -96;

	t59 = (x3909>>(x3910<<(x3911==x3912)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3965 = 188929972469392029LL;
	volatile int16_t x3966 = 0;
	int8_t x3967 = 24;
	volatile uint32_t x3968 = 54U;
	static int64_t t60 = -2990254022753457941LL;

	t60 = (x3965>>(x3966<<(x3967==x3968)));

	if (t60 != 188929972469392029LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4094 = 24;

	t61 = (x4093>>(x4094<<(x4095==x4096)));

	if (t61 != 7LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4113 = 10U;
	int8_t x4114 = 4;
	int32_t x4115 = INT32_MIN;
	uint64_t x4116 = 6980522380509LLU;
	int32_t t62 = 60611;

	t62 = (x4113>>(x4114<<(x4115==x4116)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x4141 = 19U;
	volatile uint8_t x4142 = 0U;
	static volatile int16_t x4144 = INT16_MIN;
	volatile uint32_t t63 = 321425659U;

	t63 = (x4141>>(x4142<<(x4143==x4144)));

	if (t63 != 19U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4145 = 162U;
	uint8_t x4147 = UINT8_MAX;
	static int16_t x4148 = INT16_MIN;
	int32_t t64 = 1;

	t64 = (x4145>>(x4146<<(x4147==x4148)));

	if (t64 != 81) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4173 = 3;
	int32_t x4174 = 7;
	static volatile int8_t x4175 = 0;
	uint32_t x4176 = 233590U;
	volatile int32_t t65 = -28;

	t65 = (x4173>>(x4174<<(x4175==x4176)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4226 = 6;
	int32_t x4228 = INT32_MIN;

	t66 = (x4225>>(x4226<<(x4227==x4228)));

	if (t66 != 442926U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4245 = 24U;
	int8_t x4246 = 0;
	int32_t x4247 = INT32_MIN;
	uint8_t x4248 = 58U;
	volatile uint32_t t67 = 0U;

	t67 = (x4245>>(x4246<<(x4247==x4248)));

	if (t67 != 24U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4281 = UINT16_MAX;
	static uint16_t x4282 = 11U;
	volatile int16_t x4283 = 5578;
	int16_t x4284 = -380;
	int32_t t68 = 10306311;

	t68 = (x4281>>(x4282<<(x4283==x4284)));

	if (t68 != 31) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4313 = 97U;
	volatile uint16_t x4314 = 1U;
	int8_t x4315 = INT8_MAX;
	static uint16_t x4316 = 10869U;
	int32_t t69 = 707;

	t69 = (x4313>>(x4314<<(x4315==x4316)));

	if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4366 = 0;
	uint64_t x4367 = 2222LLU;
	int8_t x4368 = -22;
	static int32_t t70 = -2;

	t70 = (x4365>>(x4366<<(x4367==x4368)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x4389 = 2U;
	static int8_t x4390 = 2;
	int16_t x4391 = INT16_MAX;
	int32_t t71 = -175989196;

	t71 = (x4389>>(x4390<<(x4391==x4392)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4717 = INT32_MAX;
	static int8_t x4718 = 1;
	static int64_t x4719 = 24506376310995887LL;

	t72 = (x4717>>(x4718<<(x4719==x4720)));

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x4790 = 1U;
	volatile int64_t x4791 = 4513912952637787389LL;
	volatile int32_t t73 = 1743916;

	t73 = (x4789>>(x4790<<(x4791==x4792)));

	if (t73 != 1073741823) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4889 = 51570321;
	uint8_t x4890 = 3U;
	int64_t x4891 = INT64_MIN;
	int16_t x4892 = -20;

	t74 = (x4889>>(x4890<<(x4891==x4892)));

	if (t74 != 6446290) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4953 = 3921357U;
	static int8_t x4954 = 0;
	uint64_t x4956 = 24065629221LLU;
	volatile uint32_t t75 = 942509U;

	t75 = (x4953>>(x4954<<(x4955==x4956)));

	if (t75 != 3921357U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4973 = 2914432LL;
	uint16_t x4974 = 18U;
	static int16_t x4975 = 6763;
	int32_t x4976 = -67410;
	static int64_t t76 = 480LL;

	t76 = (x4973>>(x4974<<(x4975==x4976)));

	if (t76 != 11LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4985 = INT32_MAX;
	uint8_t x4986 = 4U;
	int32_t t77 = -1527712;

	t77 = (x4985>>(x4986<<(x4987==x4988)));

	if (t77 != 134217727) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5033 = INT32_MAX;
	uint32_t x5035 = UINT32_MAX;
	volatile uint32_t x5036 = UINT32_MAX;
	int32_t t78 = -18;

	t78 = (x5033>>(x5034<<(x5035==x5036)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5197 = 65153270LLU;
	int32_t x5198 = 5;
	int64_t x5199 = -14715833LL;
	volatile uint64_t t79 = 3240090600784LLU;

	t79 = (x5197>>(x5198<<(x5199==x5200)));

	if (t79 != 2036039LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5238 = 12U;
	volatile uint64_t x5239 = 0LLU;
	static volatile uint32_t t80 = 6246U;

	t80 = (x5237>>(x5238<<(x5239==x5240)));

	if (t80 != 2262U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5293 = 126173LLU;
	uint8_t x5294 = 0U;
	int32_t x5295 = INT32_MIN;
	static uint64_t t81 = 362LLU;

	t81 = (x5293>>(x5294<<(x5295==x5296)));

	if (t81 != 126173LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x5361 = INT8_MAX;
	uint16_t x5362 = 0U;
	int16_t x5363 = INT16_MAX;
	static uint64_t x5364 = 200556LLU;
	int32_t t82 = 746001648;

	t82 = (x5361>>(x5362<<(x5363==x5364)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5421 = 1769U;
	volatile uint16_t x5422 = 1U;
	int32_t x5423 = -1;
	uint64_t x5424 = UINT64_MAX;
	volatile uint32_t t83 = 1612878U;

	t83 = (x5421>>(x5422<<(x5423==x5424)));

	if (t83 != 442U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5517 = 1LL;
	static int32_t x5518 = 10;
	static uint16_t x5519 = 722U;
	int64_t x5520 = 266LL;
	volatile int64_t t84 = -193LL;

	t84 = (x5517>>(x5518<<(x5519==x5520)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5529 = UINT16_MAX;
	static uint8_t x5530 = 1U;
	volatile int8_t x5531 = -1;
	int8_t x5532 = -1;
	int32_t t85 = -346;

	t85 = (x5529>>(x5530<<(x5531==x5532)));

	if (t85 != 16383) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5650 = 2;
	int32_t x5651 = -10;
	int16_t x5652 = INT16_MAX;
	volatile uint32_t t86 = 1061U;

	t86 = (x5649>>(x5650<<(x5651==x5652)));

	if (t86 != 93494U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5710 = 15U;
	static int8_t x5711 = -1;
	static volatile int64_t x5712 = -1LL;
	int32_t t87 = -3;

	t87 = (x5709>>(x5710<<(x5711==x5712)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5745 = 1530828883LLU;
	static uint8_t x5746 = 33U;
	int8_t x5747 = 16;
	int16_t x5748 = 795;
	uint64_t t88 = 12740315204434434LLU;

	t88 = (x5745>>(x5746<<(x5747==x5748)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5749 = INT8_MAX;
	int8_t x5751 = 0;
	volatile int32_t t89 = -433088466;

	t89 = (x5749>>(x5750<<(x5751==x5752)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5821 = 20U;
	volatile int32_t x5823 = -1;
	static int8_t x5824 = INT8_MIN;
	static volatile int32_t t90 = 1058453226;

	t90 = (x5821>>(x5822<<(x5823==x5824)));

	if (t90 != 20) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5837 = 61U;
	uint32_t x5838 = 0U;
	volatile int16_t x5839 = -1;
	int32_t x5840 = -1;
	static int32_t t91 = -3;

	t91 = (x5837>>(x5838<<(x5839==x5840)));

	if (t91 != 61) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5866 = 2LLU;
	volatile int8_t x5867 = 9;
	static int32_t t92 = 1586;

	t92 = (x5865>>(x5866<<(x5867==x5868)));

	if (t92 != 8191) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5925 = 1U;
	volatile int16_t x5926 = 1;
	uint8_t x5927 = UINT8_MAX;
	int64_t x5928 = INT64_MIN;
	int32_t t93 = 987;

	t93 = (x5925>>(x5926<<(x5927==x5928)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5989 = INT64_MAX;
	volatile uint8_t x5990 = 7U;
	uint32_t x5992 = 192127401U;
	int64_t t94 = -5LL;

	t94 = (x5989>>(x5990<<(x5991==x5992)));

	if (t94 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6005 = 16657745U;
	uint16_t x6006 = 8U;
	int8_t x6007 = 28;
	static int32_t x6008 = INT32_MAX;

	t95 = (x6005>>(x6006<<(x6007==x6008)));

	if (t95 != 65069U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x6081 = UINT32_MAX;
	int8_t x6082 = 1;
	static int8_t x6083 = -10;
	int16_t x6084 = INT16_MIN;
	uint32_t t96 = 3U;

	t96 = (x6081>>(x6082<<(x6083==x6084)));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x6106 = 1;
	uint64_t x6107 = 58593530LLU;
	uint32_t x6108 = UINT32_MAX;
	int32_t t97 = -1;

	t97 = (x6105>>(x6106<<(x6107==x6108)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x6161 = 14869U;
	int32_t x6162 = 9;
	uint32_t x6163 = 204683031U;

	t98 = (x6161>>(x6162<<(x6163==x6164)));

	if (t98 != 29) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x6193 = 5;
	int8_t x6195 = -1;
	int32_t t99 = -1222573;

	t99 = (x6193>>(x6194<<(x6195==x6196)));

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

