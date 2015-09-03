#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 1284U;
static volatile int64_t t2 = 2003250652LL;
uint8_t x86 = 9U;
uint32_t x140 = 97U;
volatile int32_t x152 = -1;
int16_t x293 = INT16_MAX;
static int16_t x296 = 0;
volatile int32_t t7 = 5;
volatile int32_t t8 = -80645;
uint8_t x502 = 1U;
volatile int64_t t10 = 1LL;
uint16_t x566 = 0U;
uint16_t x568 = 2U;
volatile uint64_t t12 = 21990824393461831LLU;
uint64_t x731 = UINT64_MAX;
uint8_t x781 = 5U;
static volatile uint64_t x783 = 5LLU;
uint32_t x833 = 963922616U;
volatile int32_t x941 = INT32_MAX;
uint8_t x943 = 6U;
volatile uint16_t x1157 = 28U;
volatile int8_t x1158 = 0;
static volatile int32_t t17 = 99202;
volatile uint32_t t18 = 61499U;
uint8_t x1266 = 3U;
static int8_t x1498 = 1;
volatile int16_t x1521 = INT16_MAX;
volatile int16_t x1523 = INT16_MIN;
int8_t x1530 = 13;
int16_t x1784 = -1;
static int64_t t27 = -11724721LL;
int8_t x2074 = 1;
volatile int8_t x2244 = INT8_MAX;
volatile uint8_t x2249 = 87U;
int32_t t30 = -27789;
uint64_t x2257 = UINT64_MAX;
int32_t x2258 = 0;
static int16_t x2260 = INT16_MIN;
volatile uint64_t t31 = 62391477642908LLU;
volatile uint64_t x2629 = UINT64_MAX;
uint16_t x2633 = UINT16_MAX;
uint8_t x2636 = UINT8_MAX;
static uint16_t x2812 = UINT16_MAX;
uint32_t t39 = 9684U;
uint64_t t40 = 24LLU;
uint64_t t41 = 1552530848519906006LLU;
uint64_t x3391 = UINT64_MAX;
int8_t x3393 = INT8_MAX;
int8_t x3396 = -1;
uint64_t x3579 = 124012203LLU;
static int8_t x3580 = 0;
static uint8_t x3737 = 5U;
int16_t x3739 = INT16_MAX;
static uint64_t x3761 = 14704591708594LLU;
volatile uint8_t x3762 = 2U;
volatile int16_t x3763 = 6;
volatile uint64_t t49 = 2773974LLU;
int16_t x3939 = -223;
static uint64_t x3940 = UINT64_MAX;
uint32_t x3964 = UINT32_MAX;
static volatile uint16_t x3981 = 15223U;
volatile uint64_t x3983 = 747931LLU;
int8_t x3984 = -59;
int16_t x4002 = 17;
static int8_t x4003 = INT8_MIN;
int8_t x4004 = INT8_MIN;
volatile uint64_t x4025 = 1308LLU;
volatile int8_t x4125 = 1;
int32_t x4185 = 15555070;
volatile int8_t x4310 = 1;
volatile int64_t x4311 = INT64_MIN;
int64_t t58 = -344606LL;
static volatile uint8_t x4554 = 16U;
uint64_t t62 = 509921028644812869LLU;
int32_t x4769 = 1031;
int32_t x4770 = 1;
volatile int64_t t66 = -82279LL;
uint16_t x4902 = 3U;
volatile uint64_t x5025 = 2544093LLU;
uint32_t x5027 = UINT32_MAX;
int64_t x5059 = INT64_MIN;
int64_t t69 = 1908695218LL;
int16_t x5127 = INT16_MIN;
uint32_t x5177 = UINT32_MAX;
uint8_t x5178 = 9U;
int8_t x5180 = INT8_MAX;
int8_t x5526 = 0;
static uint64_t t75 = 2918LLU;
int16_t x5587 = -912;
int32_t x5619 = 516;
static int16_t x5664 = INT16_MIN;
static uint32_t x5904 = 1U;
uint64_t x5981 = 990006870117LLU;
int32_t x5983 = INT32_MAX;
int32_t x6095 = INT32_MIN;
volatile uint64_t t84 = 159591270LLU;
int32_t x6133 = 31919423;
uint16_t x6135 = 2U;
static int16_t x6136 = -1;
int8_t x6301 = 15;
static volatile uint32_t x6304 = 2507565U;
uint64_t t88 = UINT64_MAX;
int32_t x6419 = INT32_MIN;
uint32_t x6450 = 12U;
static volatile int64_t t90 = -227769368281664LL;
uint32_t x6490 = 7U;
uint8_t x6491 = 15U;
uint64_t t91 = 338LLU;
static volatile int32_t x6587 = 1;
uint32_t t93 = 40945215U;
int16_t x6657 = 188;
int16_t x6660 = INT16_MAX;


void f0(void) {
	uint16_t x1 = 14U;
	uint16_t x2 = 17U;
	static volatile int16_t x3 = -16330;
	static volatile int32_t t0 = -36776;

	t0 = (((x1<<x2)/x3)+x4);

	if (t0 != 1172) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x33 = 0;
	volatile uint8_t x34 = 6U;
	volatile uint8_t x35 = 25U;
	static int64_t x36 = INT64_MIN;
	int64_t t1 = INT64_MIN;

	t1 = (((x33<<x34)/x35)+x36);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = 2;
	static int64_t x47 = 1998698081107703018LL;
	static int32_t x48 = -50452;

	t2 = (((x45<<x46)/x47)+x48);

	if (t2 != -50452LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x61 = 1502033521712619LLU;
	static uint32_t x62 = 1U;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t3 = 203627786382LLU;

	t3 = (((x61<<x62)/x63)+x64);

	if (t3 != 91679648530LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x87 = -20;
	static int64_t x88 = INT64_MAX;
	uint64_t t4 = 246156LLU;

	t4 = (((x85<<x86)/x87)+x88);

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 13U;
	static int64_t x139 = -30602981736LL;
	static int64_t t5 = 488364LL;

	t5 = (((x137<<x138)/x139)+x140);

	if (t5 != 97LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x149 = UINT32_MAX;
	int8_t x150 = 0;
	uint64_t x151 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x149<<x150)/x151)+x152);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x294 = 4;
	int32_t x295 = 125267;

	t7 = (((x293<<x294)/x295)+x296);

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x369 = 31U;
	static volatile uint8_t x370 = 6U;
	volatile int8_t x371 = INT8_MIN;
	int16_t x372 = -1;

	t8 = (((x369<<x370)/x371)+x372);

	if (t8 != -16) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x373 = 305U;
	int16_t x374 = 0;
	static volatile int64_t x375 = INT64_MAX;
	volatile int16_t x376 = -2933;
	volatile int64_t t9 = -553758798524368972LL;

	t9 = (((x373<<x374)/x375)+x376);

	if (t9 != -2933LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x501 = 190U;
	uint32_t x503 = 365U;
	volatile int64_t x504 = -1LL;

	t10 = (((x501<<x502)/x503)+x504);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x565 = 214322520LLU;
	volatile int8_t x567 = -1;
	static volatile uint64_t t11 = 3914653059568772LLU;

	t11 = (((x565<<x566)/x567)+x568);

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x589 = 10LLU;
	int16_t x590 = 0;
	uint16_t x591 = 14U;
	static volatile uint64_t x592 = 15652470658411896LLU;

	t12 = (((x589<<x590)/x591)+x592);

	if (t12 != 15652470658411896LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x729 = 0U;
	int8_t x730 = 6;
	int16_t x732 = INT16_MIN;
	volatile uint64_t t13 = 1676LLU;

	t13 = (((x729<<x730)/x731)+x732);

	if (t13 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x782 = 0;
	int8_t x784 = 47;
	volatile uint64_t t14 = 1658745938829LLU;

	t14 = (((x781<<x782)/x783)+x784);

	if (t14 != 48LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x834 = 0U;
	int8_t x835 = -1;
	uint8_t x836 = 4U;
	volatile uint32_t t15 = 95133466U;

	t15 = (((x833<<x834)/x835)+x836);

	if (t15 != 4U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x942 = 0U;
	int16_t x944 = 14;
	int32_t t16 = 65994856;

	t16 = (((x941<<x942)/x943)+x944);

	if (t16 != 357913955) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1159 = -13;
	int16_t x1160 = -1;

	t17 = (((x1157<<x1158)/x1159)+x1160);

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1181 = 26U;
	volatile int32_t x1182 = 25;
	int16_t x1183 = INT16_MIN;
	int16_t x1184 = 243;

	t18 = (((x1181<<x1182)/x1183)+x1184);

	if (t18 != 243U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1265 = UINT16_MAX;
	int8_t x1267 = 1;
	int8_t x1268 = INT8_MIN;
	volatile int32_t t19 = -4629;

	t19 = (((x1265<<x1266)/x1267)+x1268);

	if (t19 != 524152) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1497 = 103368024707809LLU;
	volatile int64_t x1499 = INT64_MIN;
	int16_t x1500 = INT16_MAX;
	uint64_t t20 = 24LLU;

	t20 = (((x1497<<x1498)/x1499)+x1500);

	if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1522 = 0;
	volatile int8_t x1524 = INT8_MIN;
	volatile int32_t t21 = -1;

	t21 = (((x1521<<x1522)/x1523)+x1524);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1529 = UINT16_MAX;
	volatile uint64_t x1531 = 279543669624LLU;
	int8_t x1532 = INT8_MIN;
	volatile uint64_t t22 = 2950715747963603LLU;

	t22 = (((x1529<<x1530)/x1531)+x1532);

	if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1737 = UINT64_MAX;
	static int8_t x1738 = 1;
	int32_t x1739 = INT32_MIN;
	int32_t x1740 = -429;
	uint64_t t23 = 35LLU;

	t23 = (((x1737<<x1738)/x1739)+x1740);

	if (t23 != 18446744073709551188LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1773 = 78388349754368035LLU;
	uint8_t x1774 = 12U;
	volatile int16_t x1775 = INT16_MAX;
	volatile int16_t x1776 = 2;
	static volatile uint64_t t24 = 24357LLU;

	t24 = (((x1773<<x1774)/x1775)+x1776);

	if (t24 != 228401481393754LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1781 = 1;
	uint32_t x1782 = 24U;
	static int64_t x1783 = INT64_MIN;
	int64_t t25 = -925029922962823LL;

	t25 = (((x1781<<x1782)/x1783)+x1784);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2005 = 103U;
	uint8_t x2006 = 3U;
	static int16_t x2007 = 9369;
	static int32_t x2008 = INT32_MAX;
	volatile uint32_t t26 = 1045786U;

	t26 = (((x2005<<x2006)/x2007)+x2008);

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2057 = 0;
	uint8_t x2058 = 5U;
	int16_t x2059 = INT16_MAX;
	int64_t x2060 = -229165353LL;

	t27 = (((x2057<<x2058)/x2059)+x2060);

	if (t27 != -229165353LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2073 = 58883311651857LL;
	int16_t x2075 = INT16_MIN;
	volatile int8_t x2076 = -1;
	static volatile int64_t t28 = 4142606LL;

	t28 = (((x2073<<x2074)/x2075)+x2076);

	if (t28 != -3593952128LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2241 = 26U;
	uint32_t x2242 = 10U;
	int32_t x2243 = 103;
	static int32_t t29 = -20;

	t29 = (((x2241<<x2242)/x2243)+x2244);

	if (t29 != 385) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2250 = 17U;
	int16_t x2251 = INT16_MIN;
	static uint16_t x2252 = UINT16_MAX;

	t30 = (((x2249<<x2250)/x2251)+x2252);

	if (t30 != 65187) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2259 = INT8_MAX;

	t31 = (((x2257<<x2258)/x2259)+x2260);

	if (t31 != 145249953336262914LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2273 = 968U;
	uint16_t x2274 = 1U;
	volatile int16_t x2275 = -1;
	int32_t x2276 = 3543519;
	int32_t t32 = -63402;

	t32 = (((x2273<<x2274)/x2275)+x2276);

	if (t32 != 3541583) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2561 = 101U;
	int16_t x2562 = 0;
	int32_t x2563 = -1;
	int16_t x2564 = -140;
	int32_t t33 = 9439739;

	t33 = (((x2561<<x2562)/x2563)+x2564);

	if (t33 != -241) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2630 = 1;
	int32_t x2631 = INT32_MIN;
	static volatile uint16_t x2632 = 1U;
	static volatile uint64_t t34 = 66229386LLU;

	t34 = (((x2629<<x2630)/x2631)+x2632);

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2634 = 5U;
	uint8_t x2635 = UINT8_MAX;
	int32_t t35 = -114;

	t35 = (((x2633<<x2634)/x2635)+x2636);

	if (t35 != 8479) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x2665 = UINT16_MAX;
	uint8_t x2666 = 2U;
	static int8_t x2667 = 34;
	int8_t x2668 = INT8_MIN;
	int32_t t36 = 3389;

	t36 = (((x2665<<x2666)/x2667)+x2668);

	if (t36 != 7582) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2725 = 3294U;
	uint8_t x2726 = 0U;
	int16_t x2727 = 12;
	volatile uint16_t x2728 = 2004U;
	volatile uint32_t t37 = 8872539U;

	t37 = (((x2725<<x2726)/x2727)+x2728);

	if (t37 != 2278U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x2809 = 5U;
	volatile int16_t x2810 = 1;
	static int16_t x2811 = INT16_MIN;
	volatile int32_t t38 = -24;

	t38 = (((x2809<<x2810)/x2811)+x2812);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2893 = 1929912U;
	static volatile int8_t x2894 = 29;
	uint32_t x2895 = 1073929044U;
	int16_t x2896 = 127;

	t39 = (((x2893<<x2894)/x2895)+x2896);

	if (t39 != 127U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3261 = 3;
	uint32_t x3262 = 6U;
	int64_t x3263 = INT64_MAX;
	uint64_t x3264 = 633478LLU;

	t40 = (((x3261<<x3262)/x3263)+x3264);

	if (t40 != 633478LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x3265 = UINT64_MAX;
	uint16_t x3266 = 20U;
	int64_t x3267 = 86212055820627LL;
	static uint32_t x3268 = UINT32_MAX;

	t41 = (((x3265<<x3266)/x3267)+x3268);

	if (t41 != 4295181264LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3333 = 48725729210820LLU;
	uint64_t x3334 = 1LLU;
	uint32_t x3335 = UINT32_MAX;
	int64_t x3336 = INT64_MIN;
	uint64_t t42 = 791316662124422LLU;

	t42 = (((x3333<<x3334)/x3335)+x3336);

	if (t42 != 9223372036854798497LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x3389 = 2;
	int64_t x3390 = 11LL;
	static int64_t x3392 = INT64_MAX;
	static uint64_t t43 = 108248949228040LLU;

	t43 = (((x3389<<x3390)/x3391)+x3392);

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3394 = 6U;
	int8_t x3395 = INT8_MIN;
	static volatile int32_t t44 = -155514;

	t44 = (((x3393<<x3394)/x3395)+x3396);

	if (t44 != -64) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3413 = 0U;
	static int16_t x3414 = 5;
	uint32_t x3415 = 2U;
	int16_t x3416 = -1;
	uint32_t t45 = UINT32_MAX;

	t45 = (((x3413<<x3414)/x3415)+x3416);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3577 = INT8_MAX;
	static uint8_t x3578 = 0U;
	static volatile uint64_t t46 = 11133311731LLU;

	t46 = (((x3577<<x3578)/x3579)+x3580);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3738 = 18U;
	uint64_t x3740 = 294960036926499191LLU;
	static volatile uint64_t t47 = 14LLU;

	t47 = (((x3737<<x3738)/x3739)+x3740);

	if (t47 != 294960036926499231LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3741 = 261;
	uint8_t x3742 = 0U;
	uint64_t x3743 = 886430696752690537LLU;
	int64_t x3744 = INT64_MIN;
	uint64_t t48 = 5LLU;

	t48 = (((x3741<<x3742)/x3743)+x3744);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3764 = INT8_MIN;

	t49 = (((x3761<<x3762)/x3763)+x3764);

	if (t49 != 9803061138934LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3937 = 26U;
	int8_t x3938 = 7;
	volatile uint64_t t50 = 203512353186LLU;

	t50 = (((x3937<<x3938)/x3939)+x3940);

	if (t50 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3961 = UINT16_MAX;
	uint8_t x3962 = 8U;
	int16_t x3963 = 11;
	volatile uint32_t t51 = 4U;

	t51 = (((x3961<<x3962)/x3963)+x3964);

	if (t51 != 1525177U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3982 = 0;
	volatile uint64_t t52 = 3042075211LLU;

	t52 = (((x3981<<x3982)/x3983)+x3984);

	if (t52 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4001 = 28U;
	int32_t t53 = -31;

	t53 = (((x4001<<x4002)/x4003)+x4004);

	if (t53 != -28800) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4026 = 0U;
	int64_t x4027 = INT64_MIN;
	static int32_t x4028 = -1;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x4025<<x4026)/x4027)+x4028);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4126 = 1;
	uint8_t x4127 = 12U;
	int16_t x4128 = 84;
	volatile int32_t t55 = 7605;

	t55 = (((x4125<<x4126)/x4127)+x4128);

	if (t55 != 84) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4186 = 3U;
	int64_t x4187 = -1LL;
	int16_t x4188 = -175;
	int64_t t56 = 165098667LL;

	t56 = (((x4185<<x4186)/x4187)+x4188);

	if (t56 != -124440735LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x4289 = 174388513567LLU;
	int8_t x4290 = 4;
	int32_t x4291 = INT32_MIN;
	int32_t x4292 = INT32_MIN;
	volatile uint64_t t57 = 0LLU;

	t57 = (((x4289<<x4290)/x4291)+x4292);

	if (t57 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x4309 = 1157;
	int16_t x4312 = INT16_MIN;

	t58 = (((x4309<<x4310)/x4311)+x4312);

	if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4357 = INT16_MAX;
	uint32_t x4358 = 1U;
	uint32_t x4359 = 73599990U;
	static int16_t x4360 = INT16_MAX;
	static volatile uint32_t t59 = 1895546974U;

	t59 = (((x4357<<x4358)/x4359)+x4360);

	if (t59 != 32767U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4553 = UINT64_MAX;
	uint8_t x4555 = 6U;
	static int32_t x4556 = INT32_MAX;
	uint64_t t60 = 17LLU;

	t60 = (((x4553<<x4554)/x4555)+x4556);

	if (t60 != 3074457347765731327LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4561 = UINT16_MAX;
	static int8_t x4562 = 1;
	volatile int32_t x4563 = -1;
	int64_t x4564 = -1LL;
	int64_t t61 = 193935271016184090LL;

	t61 = (((x4561<<x4562)/x4563)+x4564);

	if (t61 != -131071LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x4577 = 23319156U;
	uint16_t x4578 = 1U;
	int16_t x4579 = INT16_MAX;
	uint64_t x4580 = 6124994305047031927LLU;

	t62 = (((x4577<<x4578)/x4579)+x4580);

	if (t62 != 6124994305047033350LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x4709 = 271;
	volatile int8_t x4710 = 1;
	int32_t x4711 = 1337314;
	volatile int8_t x4712 = -1;
	int32_t t63 = 185;

	t63 = (((x4709<<x4710)/x4711)+x4712);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x4761 = INT16_MAX;
	volatile uint64_t x4762 = 13LLU;
	volatile int32_t x4763 = -1;
	uint16_t x4764 = 1U;
	static int32_t t64 = 7887;

	t64 = (((x4761<<x4762)/x4763)+x4764);

	if (t64 != -268427263) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x4771 = INT32_MIN;
	volatile int8_t x4772 = INT8_MIN;
	static int32_t t65 = 5760;

	t65 = (((x4769<<x4770)/x4771)+x4772);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4885 = 1096U;
	static uint32_t x4886 = 1U;
	int16_t x4887 = INT16_MIN;
	int64_t x4888 = -37714LL;

	t66 = (((x4885<<x4886)/x4887)+x4888);

	if (t66 != -37714LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x4901 = 1U;
	uint16_t x4903 = 10217U;
	int16_t x4904 = INT16_MIN;
	int32_t t67 = 913676116;

	t67 = (((x4901<<x4902)/x4903)+x4904);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x5026 = 25;
	uint16_t x5028 = 14U;
	volatile uint64_t t68 = 655129442080LLU;

	t68 = (((x5025<<x5026)/x5027)+x5028);

	if (t68 != 19889LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x5057 = UINT16_MAX;
	static uint8_t x5058 = 13U;
	volatile int8_t x5060 = INT8_MIN;

	t69 = (((x5057<<x5058)/x5059)+x5060);

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x5125 = 39;
	int32_t x5126 = 3;
	int8_t x5128 = INT8_MAX;
	volatile int32_t t70 = 10553239;

	t70 = (((x5125<<x5126)/x5127)+x5128);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x5179 = UINT32_MAX;
	uint32_t t71 = 175U;

	t71 = (((x5177<<x5178)/x5179)+x5180);

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x5241 = 60U;
	int8_t x5242 = 2;
	int64_t x5243 = INT64_MAX;
	int32_t x5244 = -6;
	int64_t t72 = 1263LL;

	t72 = (((x5241<<x5242)/x5243)+x5244);

	if (t72 != -6LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5437 = 2U;
	int8_t x5438 = 13;
	uint64_t x5439 = 114315308161LLU;
	uint64_t x5440 = UINT64_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (((x5437<<x5438)/x5439)+x5440);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5525 = 14U;
	uint64_t x5527 = 3LLU;
	volatile int16_t x5528 = INT16_MAX;
	uint64_t t74 = 134028664663963LLU;

	t74 = (((x5525<<x5526)/x5527)+x5528);

	if (t74 != 32771LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5573 = INT16_MAX;
	uint8_t x5574 = 6U;
	uint64_t x5575 = 13366932146298LLU;
	volatile int8_t x5576 = 1;

	t75 = (((x5573<<x5574)/x5575)+x5576);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5585 = 2U;
	static uint64_t x5586 = 1LLU;
	static volatile int16_t x5588 = INT16_MAX;
	volatile int32_t t76 = -71;

	t76 = (((x5585<<x5586)/x5587)+x5588);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5617 = 0;
	volatile uint8_t x5618 = 5U;
	static volatile int32_t x5620 = INT32_MIN;
	volatile int32_t t77 = INT32_MIN;

	t77 = (((x5617<<x5618)/x5619)+x5620);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5661 = 0U;
	int8_t x5662 = 0;
	volatile int64_t x5663 = INT64_MIN;
	int64_t t78 = -1LL;

	t78 = (((x5661<<x5662)/x5663)+x5664);

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x5885 = 12987263;
	static int32_t x5886 = 2;
	int32_t x5887 = 294828;
	uint16_t x5888 = 1U;
	volatile int32_t t79 = -499816021;

	t79 = (((x5885<<x5886)/x5887)+x5888);

	if (t79 != 177) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5901 = INT64_MAX;
	static uint64_t x5902 = 0LLU;
	volatile int32_t x5903 = INT32_MIN;
	volatile int64_t t80 = -189LL;

	t80 = (((x5901<<x5902)/x5903)+x5904);

	if (t80 != -4294967294LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5982 = 3;
	int32_t x5984 = -814254597;
	volatile uint64_t t81 = 40893362388LLU;

	t81 = (((x5981<<x5982)/x5983)+x5984);

	if (t81 != 18446744072895300707LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6029 = INT8_MAX;
	static uint8_t x6030 = 14U;
	static volatile uint8_t x6031 = UINT8_MAX;
	uint64_t x6032 = 976659218176312496LLU;
	volatile uint64_t t82 = 3829547725951LLU;

	t82 = (((x6029<<x6030)/x6031)+x6032);

	if (t82 != 976659218176320655LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x6093 = 0;
	int8_t x6094 = 9;
	static uint8_t x6096 = 13U;
	int32_t t83 = 942;

	t83 = (((x6093<<x6094)/x6095)+x6096);

	if (t83 != 13) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6109 = 9854127934LLU;
	static int8_t x6110 = 14;
	uint32_t x6111 = 4U;
	volatile uint32_t x6112 = 18377383U;

	t84 = (((x6109<<x6110)/x6111)+x6112);

	if (t84 != 40362526395047LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x6134 = 0;
	int32_t t85 = -1530382;

	t85 = (((x6133<<x6134)/x6135)+x6136);

	if (t85 != 15959710) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x6201 = 8437LLU;
	static int8_t x6202 = 7;
	static int32_t x6203 = INT32_MIN;
	static int16_t x6204 = INT16_MIN;
	volatile uint64_t t86 = 175003052LLU;

	t86 = (((x6201<<x6202)/x6203)+x6204);

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x6302 = 16;
	volatile int64_t x6303 = 42888945753LL;
	volatile int64_t t87 = 1762199215844369196LL;

	t87 = (((x6301<<x6302)/x6303)+x6304);

	if (t87 != 2507565LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x6329 = 4;
	uint16_t x6330 = 4U;
	static uint64_t x6331 = UINT64_MAX;
	int8_t x6332 = -1;

	t88 = (((x6329<<x6330)/x6331)+x6332);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6417 = UINT8_MAX;
	static int16_t x6418 = 11;
	uint32_t x6420 = UINT32_MAX;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (((x6417<<x6418)/x6419)+x6420);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6449 = INT16_MAX;
	int64_t x6451 = INT64_MIN;
	uint32_t x6452 = 37056U;

	t90 = (((x6449<<x6450)/x6451)+x6452);

	if (t90 != 37056LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6489 = UINT64_MAX;
	uint32_t x6492 = UINT32_MAX;

	t91 = (((x6489<<x6490)/x6491)+x6492);

	if (t91 != 1229782942542270727LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6537 = 13593U;
	int8_t x6538 = 26;
	uint32_t x6539 = 791185755U;
	uint16_t x6540 = 0U;
	uint32_t t92 = 2681209U;

	t92 = (((x6537<<x6538)/x6539)+x6540);

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6585 = 27232694U;
	static uint16_t x6586 = 31U;
	volatile int8_t x6588 = 5;

	t93 = (((x6585<<x6586)/x6587)+x6588);

	if (t93 != 5U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6613 = 1;
	int8_t x6614 = 25;
	uint16_t x6615 = UINT16_MAX;
	int16_t x6616 = 1;
	volatile int32_t t94 = -323204;

	t94 = (((x6613<<x6614)/x6615)+x6616);

	if (t94 != 513) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6658 = 23U;
	volatile int64_t x6659 = -1LL;
	int64_t t95 = 256LL;

	t95 = (((x6657<<x6658)/x6659)+x6660);

	if (t95 != -1577025537LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6765 = UINT8_MAX;
	volatile int8_t x6766 = 0;
	int16_t x6767 = INT16_MAX;
	volatile int64_t x6768 = INT64_MAX;
	int64_t t96 = INT64_MAX;

	t96 = (((x6765<<x6766)/x6767)+x6768);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}

