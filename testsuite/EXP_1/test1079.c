#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x20 = 6249937;
volatile uint32_t t1 = 2570969U;
int32_t x50 = 5;
uint16_t x52 = 0U;
int16_t x93 = INT16_MAX;
static volatile uint8_t x189 = 106U;
int16_t x190 = 6;
static int64_t x192 = -1LL;
int64_t t5 = -49441818379206096LL;
volatile int64_t x245 = INT64_MAX;
int32_t x247 = -1;
uint16_t x769 = 1U;
uint16_t x813 = UINT16_MAX;
uint64_t x891 = 19999719562235LLU;
int8_t x953 = 0;
int8_t x956 = 14;
uint32_t x1147 = 263987730U;
uint32_t x1549 = 34U;
int16_t x1574 = 0;
uint16_t x1582 = 2U;
int8_t x1652 = INT8_MIN;
uint32_t x1713 = 51171241U;
uint8_t x1714 = 1U;
int64_t t25 = -813520109929LL;
volatile int16_t x2032 = INT16_MIN;
volatile int32_t t29 = -556;
volatile uint8_t x2086 = 1U;
volatile int64_t t31 = -54878074618727416LL;
int8_t x2440 = -3;
static uint8_t x2497 = UINT8_MAX;
static int16_t x2498 = 2;
uint32_t t36 = 1811U;
uint64_t t39 = 262861LLU;
volatile int32_t t40 = 90027575;
int32_t x3060 = -1;
uint32_t t41 = 3U;
uint32_t x3146 = 2U;
static int32_t x3147 = INT32_MAX;
int32_t x3244 = INT32_MIN;
static int16_t x3275 = INT16_MIN;
uint8_t x3312 = 5U;
int32_t t47 = 119;
volatile int8_t x3327 = -1;
uint32_t x3357 = 1879639055U;
int64_t t49 = 489LL;
volatile int64_t x3507 = INT64_MIN;
int64_t x3561 = INT64_MAX;
uint8_t x3646 = 1U;
int8_t x3647 = 5;
volatile int32_t x3788 = INT32_MIN;
int32_t t55 = -13323;
uint32_t x3851 = 268304263U;
static uint16_t x4028 = UINT16_MAX;
int8_t x4072 = -14;
int64_t x4093 = INT64_MAX;
int64_t t59 = 76342935LL;
uint16_t x4173 = UINT16_MAX;
static uint64_t x4201 = 105378930539323790LLU;
volatile uint8_t x4203 = 7U;
int8_t x4280 = -23;
uint8_t x4441 = 14U;
static int8_t x4461 = INT8_MAX;
static int64_t x4463 = INT64_MAX;
uint16_t x4602 = 4U;
static int32_t x4603 = INT32_MIN;
static uint64_t x4621 = 3230541258LLU;
static uint64_t x4622 = 13LLU;
uint64_t t70 = 3197831711749149020LLU;
int8_t x4647 = INT8_MIN;
int64_t x4692 = 2561LL;
volatile int8_t x4786 = 1;
uint32_t x4849 = 7U;
int8_t x4850 = 7;
uint32_t x4852 = UINT32_MAX;
uint8_t x4866 = 23U;
static int8_t x4868 = -1;
uint64_t x4917 = 28706307LLU;
static volatile int64_t x4920 = -1LL;
uint32_t x4926 = 0U;
int8_t x4928 = INT8_MIN;
int16_t x4955 = INT16_MAX;
int64_t x5023 = INT64_MAX;
static uint8_t x5209 = UINT8_MAX;
uint8_t x5210 = 2U;
int8_t x5245 = INT8_MAX;
volatile uint32_t x5248 = UINT32_MAX;
int8_t x5302 = 1;
volatile int64_t t83 = INT64_MAX;
int64_t x5357 = INT64_MAX;
uint32_t x5395 = 5U;
int16_t x5412 = INT16_MAX;
uint16_t x5498 = 8U;
int64_t x5506 = 19LL;
uint8_t x5575 = UINT8_MAX;
int32_t x5576 = -11;
static int32_t t90 = 29059550;
static int8_t x5609 = INT8_MAX;
uint8_t x5610 = 6U;
uint8_t x5614 = 3U;
volatile uint64_t t92 = 1591701839985142LLU;
int8_t x5660 = -9;
volatile int8_t x5769 = INT8_MAX;
uint8_t x5801 = UINT8_MAX;
int8_t x5802 = 0;
int64_t x5804 = INT64_MIN;
static volatile uint64_t t95 = 21987006695312LLU;
uint8_t x6042 = 9U;
int8_t x6070 = 0;
int64_t t98 = 1027830LL;
static int16_t x6104 = INT16_MIN;


void f0(void) {
	uint32_t x17 = 4U;
	volatile int16_t x18 = 28;
	volatile int16_t x19 = INT16_MAX;
	volatile uint32_t t0 = 5U;

	t0 = (((x17>>x18)%x19)^x20);

	if (t0 != 6249937U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x21 = INT8_MAX;
	int8_t x22 = 1;
	uint32_t x23 = 2U;
	int32_t x24 = INT32_MIN;

	t1 = (((x21>>x22)%x23)^x24);

	if (t1 != 2147483649U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x49 = INT32_MAX;
	volatile int16_t x51 = -1;
	int32_t t2 = 1;

	t2 = (((x49>>x50)%x51)^x52);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x94 = 1U;
	int16_t x95 = -5549;
	volatile int64_t x96 = 91643468204005LL;
	static volatile int64_t t3 = -9466726943061174LL;

	t3 = (((x93>>x94)%x95)^x96);

	if (t3 != 91643468206912LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int8_t x118 = 20;
	uint16_t x119 = UINT16_MAX;
	static uint8_t x120 = 5U;
	int32_t t4 = -1767;

	t4 = (((x117>>x118)%x119)^x120);

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x191 = INT16_MIN;

	t5 = (((x189>>x190)%x191)^x192);

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x246 = 46U;
	static uint8_t x248 = 1U;
	int64_t t6 = 9LL;

	t6 = (((x245>>x246)%x247)^x248);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x261 = 187LL;
	uint16_t x262 = 5U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;
	int64_t t7 = 0LL;

	t7 = (((x261>>x262)%x263)^x264);

	if (t7 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x557 = 60U;
	int64_t x558 = 7LL;
	int8_t x559 = -3;
	volatile int64_t x560 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (((x557>>x558)%x559)^x560);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x565 = UINT32_MAX;
	uint8_t x566 = 0U;
	uint64_t x567 = 279235968019805090LLU;
	int16_t x568 = INT16_MIN;
	static uint64_t t9 = 96996318201793918LLU;

	t9 = (((x565>>x566)%x567)^x568);

	if (t9 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x770 = 3U;
	int64_t x771 = INT64_MIN;
	int16_t x772 = 498;
	int64_t t10 = 91896850039LL;

	t10 = (((x769>>x770)%x771)^x772);

	if (t10 != 498LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x814 = 3LLU;
	int16_t x815 = 224;
	int64_t x816 = 1LL;
	int64_t t11 = 38920LL;

	t11 = (((x813>>x814)%x815)^x816);

	if (t11 != 126LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x889 = INT64_MAX;
	static uint32_t x890 = 51U;
	int8_t x892 = INT8_MIN;
	volatile uint64_t t12 = 769768799180339565LLU;

	t12 = (((x889>>x890)%x891)^x892);

	if (t12 != 18446744073709547647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x945 = UINT64_MAX;
	uint16_t x946 = 4U;
	uint16_t x947 = 8335U;
	volatile uint32_t x948 = UINT32_MAX;
	volatile uint64_t t13 = 125476800LLU;

	t13 = (((x945>>x946)%x947)^x948);

	if (t13 != 4294961365LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x954 = 3;
	int8_t x955 = -30;
	volatile int32_t t14 = -9;

	t14 = (((x953>>x954)%x955)^x956);

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1057 = INT8_MAX;
	int16_t x1058 = 4;
	int32_t x1059 = -13;
	int8_t x1060 = INT8_MAX;
	volatile int32_t t15 = -28;

	t15 = (((x1057>>x1058)%x1059)^x1060);

	if (t15 != 120) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x1145 = UINT16_MAX;
	uint16_t x1146 = 3U;
	static int8_t x1148 = INT8_MIN;
	volatile uint32_t t16 = 504013397U;

	t16 = (((x1145>>x1146)%x1147)^x1148);

	if (t16 != 4294959231U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1153 = UINT16_MAX;
	int16_t x1154 = 1;
	volatile int32_t x1155 = -1;
	int8_t x1156 = -2;
	static int32_t t17 = 1;

	t17 = (((x1153>>x1154)%x1155)^x1156);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1185 = INT16_MAX;
	volatile int8_t x1186 = 3;
	int64_t x1187 = -25225149412424LL;
	static int16_t x1188 = -1;
	int64_t t18 = 981371758892919189LL;

	t18 = (((x1185>>x1186)%x1187)^x1188);

	if (t18 != -4096LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1289 = 12599708U;
	int8_t x1290 = 5;
	int32_t x1291 = INT32_MAX;
	static uint16_t x1292 = UINT16_MAX;
	uint32_t t19 = 191477711U;

	t19 = (((x1289>>x1290)%x1291)^x1292);

	if (t19 != 458227U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1469 = 148094745U;
	volatile int8_t x1470 = 2;
	volatile uint8_t x1471 = UINT8_MAX;
	uint8_t x1472 = 15U;
	volatile uint32_t t20 = 224415645U;

	t20 = (((x1469>>x1470)%x1471)^x1472);

	if (t20 != 227U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1550 = 15U;
	static int64_t x1551 = 47469376LL;
	int64_t x1552 = 76973991347480669LL;
	volatile int64_t t21 = -720621774092772LL;

	t21 = (((x1549>>x1550)%x1551)^x1552);

	if (t21 != 76973991347480669LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1573 = 25;
	int16_t x1575 = 28;
	int32_t x1576 = 48501;
	volatile int32_t t22 = 5;

	t22 = (((x1573>>x1574)%x1575)^x1576);

	if (t22 != 48492) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1581 = INT32_MAX;
	int64_t x1583 = -1LL;
	uint32_t x1584 = 199U;
	int64_t t23 = -1279236383587347426LL;

	t23 = (((x1581>>x1582)%x1583)^x1584);

	if (t23 != 199LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1649 = 38033288192014LL;
	volatile uint16_t x1650 = 13U;
	uint8_t x1651 = 1U;
	volatile int64_t t24 = -9314881414773914LL;

	t24 = (((x1649>>x1650)%x1651)^x1652);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1715 = INT8_MAX;
	volatile int64_t x1716 = -1LL;

	t25 = (((x1713>>x1714)%x1715)^x1716);

	if (t25 != -74LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1749 = UINT64_MAX;
	uint32_t x1750 = 0U;
	volatile uint32_t x1751 = UINT32_MAX;
	int32_t x1752 = INT32_MAX;
	uint64_t t26 = 21439143580119661LLU;

	t26 = (((x1749>>x1750)%x1751)^x1752);

	if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1777 = 72U;
	static int16_t x1778 = 1;
	volatile int16_t x1779 = -10;
	static uint32_t x1780 = 1675U;
	uint32_t t27 = 45801U;

	t27 = (((x1777>>x1778)%x1779)^x1780);

	if (t27 != 1677U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1937 = 158986132;
	uint64_t x1938 = 0LLU;
	int64_t x1939 = -5393351760LL;
	static int8_t x1940 = INT8_MIN;
	static volatile int64_t t28 = 105491807558LL;

	t28 = (((x1937>>x1938)%x1939)^x1940);

	if (t28 != -158986220LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2029 = 20316;
	uint32_t x2030 = 28U;
	int16_t x2031 = INT16_MIN;

	t29 = (((x2029>>x2030)%x2031)^x2032);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x2085 = 1594U;
	uint64_t x2087 = 18503LLU;
	int64_t x2088 = INT64_MIN;
	volatile uint64_t t30 = 1634611637281175LLU;

	t30 = (((x2085>>x2086)%x2087)^x2088);

	if (t30 != 9223372036854776605LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2349 = INT64_MAX;
	int32_t x2350 = 0;
	static uint8_t x2351 = UINT8_MAX;
	volatile int32_t x2352 = INT32_MIN;

	t31 = (((x2349>>x2350)%x2351)^x2352);

	if (t31 != -2147483521LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2373 = INT32_MAX;
	static int8_t x2374 = 5;
	int32_t x2375 = -18;
	int16_t x2376 = -1;
	int32_t t32 = 15002387;

	t32 = (((x2373>>x2374)%x2375)^x2376);

	if (t32 != -4) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x2437 = 3528U;
	uint8_t x2438 = 3U;
	static int8_t x2439 = -1;
	volatile int32_t t33 = -5652025;

	t33 = (((x2437>>x2438)%x2439)^x2440);

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2499 = 1033U;
	int32_t x2500 = INT32_MIN;
	volatile int32_t t34 = -163;

	t34 = (((x2497>>x2498)%x2499)^x2500);

	if (t34 != -2147483585) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2685 = UINT16_MAX;
	int8_t x2686 = 1;
	static int8_t x2687 = -14;
	static uint32_t x2688 = 1798190U;
	static volatile uint32_t t35 = 220621711U;

	t35 = (((x2685>>x2686)%x2687)^x2688);

	if (t35 != 1798185U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2773 = 303U;
	uint8_t x2774 = 0U;
	int8_t x2775 = -45;
	int32_t x2776 = 3732;

	t36 = (((x2773>>x2774)%x2775)^x2776);

	if (t36 != 4027U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2813 = 58836;
	volatile int8_t x2814 = 1;
	uint16_t x2815 = 5U;
	volatile int8_t x2816 = INT8_MIN;
	static volatile int32_t t37 = -16;

	t37 = (((x2813>>x2814)%x2815)^x2816);

	if (t37 != -125) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2853 = 1208473587U;
	int8_t x2854 = 1;
	int64_t x2855 = INT64_MIN;
	static uint32_t x2856 = 49786U;
	volatile int64_t t38 = -625304111908LL;

	t38 = (((x2853>>x2854)%x2855)^x2856);

	if (t38 != 604187011LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2921 = INT32_MAX;
	uint32_t x2922 = 2U;
	uint64_t x2923 = 8573490950137023LLU;
	uint64_t x2924 = 928757345LLU;

	t39 = (((x2921>>x2922)%x2923)^x2924);

	if (t39 != 681855390LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2961 = 11158U;
	static int8_t x2962 = 0;
	int8_t x2963 = 3;
	static uint16_t x2964 = 2303U;

	t40 = (((x2961>>x2962)%x2963)^x2964);

	if (t40 != 2302) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x3057 = UINT32_MAX;
	uint8_t x3058 = 1U;
	int32_t x3059 = INT32_MIN;

	t41 = (((x3057>>x3058)%x3059)^x3060);

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3089 = 0;
	uint16_t x3090 = 2U;
	int8_t x3091 = INT8_MIN;
	uint8_t x3092 = UINT8_MAX;
	volatile int32_t t42 = -249737316;

	t42 = (((x3089>>x3090)%x3091)^x3092);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3145 = INT16_MAX;
	int64_t x3148 = INT64_MIN;
	int64_t t43 = 226467816LL;

	t43 = (((x3145>>x3146)%x3147)^x3148);

	if (t43 != -9223372036854767617LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x3241 = 22U;
	static uint16_t x3242 = 8U;
	static int16_t x3243 = INT16_MAX;
	static int32_t t44 = INT32_MIN;

	t44 = (((x3241>>x3242)%x3243)^x3244);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3273 = INT8_MAX;
	uint8_t x3274 = 2U;
	int32_t x3276 = -1835663;
	volatile int32_t t45 = 2594;

	t45 = (((x3273>>x3274)%x3275)^x3276);

	if (t45 != -1835666) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3285 = UINT64_MAX;
	uint16_t x3286 = 34U;
	int16_t x3287 = INT16_MAX;
	int64_t x3288 = INT64_MIN;
	volatile uint64_t t46 = 160289003917151154LLU;

	t46 = (((x3285>>x3286)%x3287)^x3288);

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3309 = 142U;
	uint8_t x3310 = 31U;
	int16_t x3311 = INT16_MIN;

	t47 = (((x3309>>x3310)%x3311)^x3312);

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x3325 = UINT64_MAX;
	int16_t x3326 = 0;
	int64_t x3328 = INT64_MAX;
	volatile uint64_t t48 = 8635328917560714LLU;

	t48 = (((x3325>>x3326)%x3327)^x3328);

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3358 = 22U;
	static uint16_t x3359 = 7163U;
	int64_t x3360 = INT64_MAX;

	t49 = (((x3357>>x3358)%x3359)^x3360);

	if (t49 != 9223372036854775359LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3381 = 28;
	static uint8_t x3382 = 7U;
	uint16_t x3383 = 1792U;
	static int64_t x3384 = 360469350290LL;
	static volatile int64_t t50 = 485LL;

	t50 = (((x3381>>x3382)%x3383)^x3384);

	if (t50 != 360469350290LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3489 = 1U;
	volatile int8_t x3490 = 9;
	uint32_t x3491 = 12335762U;
	int16_t x3492 = -169;
	volatile uint32_t t51 = 872720505U;

	t51 = (((x3489>>x3490)%x3491)^x3492);

	if (t51 != 4294967127U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3505 = UINT64_MAX;
	uint8_t x3506 = 16U;
	uint16_t x3508 = 1U;
	uint64_t t52 = 39784730913LLU;

	t52 = (((x3505>>x3506)%x3507)^x3508);

	if (t52 != 281474976710654LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x3562 = 4;
	int16_t x3563 = -1;
	static volatile int32_t x3564 = INT32_MAX;
	static volatile int64_t t53 = 502002191241562907LL;

	t53 = (((x3561>>x3562)%x3563)^x3564);

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3645 = UINT8_MAX;
	int32_t x3648 = INT32_MIN;
	static int32_t t54 = -6224;

	t54 = (((x3645>>x3646)%x3647)^x3648);

	if (t54 != -2147483646) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3785 = INT16_MAX;
	static uint64_t x3786 = 2LLU;
	static int8_t x3787 = INT8_MIN;

	t55 = (((x3785>>x3786)%x3787)^x3788);

	if (t55 != -2147483521) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3849 = 57;
	uint32_t x3850 = 1U;
	volatile int16_t x3852 = INT16_MAX;
	uint32_t t56 = 316U;

	t56 = (((x3849>>x3850)%x3851)^x3852);

	if (t56 != 32739U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4025 = 1207212;
	static uint8_t x4026 = 1U;
	static int16_t x4027 = -1;
	volatile int32_t t57 = 8551;

	t57 = (((x4025>>x4026)%x4027)^x4028);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x4069 = 1;
	int16_t x4070 = 1;
	volatile uint8_t x4071 = 1U;
	volatile int32_t t58 = -194;

	t58 = (((x4069>>x4070)%x4071)^x4072);

	if (t58 != -14) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4094 = 2LLU;
	static int64_t x4095 = INT64_MAX;
	volatile uint8_t x4096 = 33U;

	t59 = (((x4093>>x4094)%x4095)^x4096);

	if (t59 != 2305843009213693918LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4174 = 3U;
	int64_t x4175 = 1111533LL;
	static int32_t x4176 = INT32_MAX;
	int64_t t60 = 4418463052182443LL;

	t60 = (((x4173>>x4174)%x4175)^x4176);

	if (t60 != 2147475456LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x4202 = 0U;
	uint64_t x4204 = 957068732602246569LLU;
	volatile uint64_t t61 = 1444610271950173LLU;

	t61 = (((x4201>>x4202)%x4203)^x4204);

	if (t61 != 957068732602246575LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4237 = 1003132389U;
	volatile int8_t x4238 = 1;
	static int8_t x4239 = -1;
	volatile uint64_t x4240 = 6516527496LLU;
	uint64_t t62 = 159579LLU;

	t62 = (((x4237>>x4238)%x4239)^x4240);

	if (t62 != 6871260026LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x4277 = INT64_MAX;
	uint16_t x4278 = 7U;
	int32_t x4279 = INT32_MIN;
	int64_t t63 = -6680467LL;

	t63 = (((x4277>>x4278)%x4279)^x4280);

	if (t63 != -2147483626LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x4442 = 3U;
	volatile uint32_t x4443 = UINT32_MAX;
	int32_t x4444 = INT32_MAX;
	uint32_t t64 = 1U;

	t64 = (((x4441>>x4442)%x4443)^x4444);

	if (t64 != 2147483646U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4462 = 15;
	int16_t x4464 = 3;
	volatile int64_t t65 = -28860984075LL;

	t65 = (((x4461>>x4462)%x4463)^x4464);

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x4521 = UINT8_MAX;
	int16_t x4522 = 0;
	static int16_t x4523 = INT16_MIN;
	static int16_t x4524 = INT16_MIN;
	int32_t t66 = -2058890;

	t66 = (((x4521>>x4522)%x4523)^x4524);

	if (t66 != -32513) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4581 = 3794LL;
	volatile int16_t x4582 = 1;
	uint32_t x4583 = 699687741U;
	int8_t x4584 = INT8_MIN;
	volatile int64_t t67 = -13286151LL;

	t67 = (((x4581>>x4582)%x4583)^x4584);

	if (t67 != -1815LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4601 = 4809255762462LLU;
	int64_t x4604 = 57301LL;
	volatile uint64_t t68 = 65033394759224960LLU;

	t68 = (((x4601>>x4602)%x4603)^x4604);

	if (t68 != 300578466932LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4623 = -1;
	uint8_t x4624 = 26U;
	static volatile uint64_t t69 = 468928LLU;

	t69 = (((x4621>>x4622)%x4623)^x4624);

	if (t69 != 394347LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x4641 = 205065754U;
	static int8_t x4642 = 28;
	uint64_t x4643 = 13612741LLU;
	uint8_t x4644 = 2U;

	t70 = (((x4641>>x4642)%x4643)^x4644);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4645 = UINT64_MAX;
	volatile int8_t x4646 = 3;
	int16_t x4648 = -4;
	volatile uint64_t t71 = 71226453LLU;

	t71 = (((x4645>>x4646)%x4647)^x4648);

	if (t71 != 16140901064495857667LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4689 = INT8_MAX;
	volatile int8_t x4690 = 3;
	uint16_t x4691 = 50U;
	volatile int64_t t72 = 35548LL;

	t72 = (((x4689>>x4690)%x4691)^x4692);

	if (t72 != 2574LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x4785 = 30032363U;
	volatile int8_t x4787 = -52;
	int16_t x4788 = -1;
	volatile uint32_t t73 = 12394747U;

	t73 = (((x4785>>x4786)%x4787)^x4788);

	if (t73 != 4279951114U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4851 = INT8_MAX;
	uint32_t t74 = UINT32_MAX;

	t74 = (((x4849>>x4850)%x4851)^x4852);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4865 = 81U;
	uint64_t x4867 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x4865>>x4866)%x4867)^x4868);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4918 = 0U;
	volatile int16_t x4919 = INT16_MIN;
	static uint64_t t76 = 1313458902273473LLU;

	t76 = (((x4917>>x4918)%x4919)^x4920);

	if (t76 != 18446744073680845308LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x4925 = 18311U;
	int8_t x4927 = -1;
	volatile uint32_t t77 = 1U;

	t77 = (((x4925>>x4926)%x4927)^x4928);

	if (t77 != 4294948871U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4953 = 43;
	uint8_t x4954 = 17U;
	int32_t x4956 = INT32_MIN;
	int32_t t78 = INT32_MIN;

	t78 = (((x4953>>x4954)%x4955)^x4956);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5021 = 535566260LL;
	static int8_t x5022 = 59;
	uint32_t x5024 = 11026218U;
	int64_t t79 = -138759151207494895LL;

	t79 = (((x5021>>x5022)%x5023)^x5024);

	if (t79 != 11026218LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5177 = UINT16_MAX;
	volatile uint16_t x5178 = 1U;
	int64_t x5179 = INT64_MIN;
	static int64_t x5180 = INT64_MIN;
	volatile int64_t t80 = -48778873LL;

	t80 = (((x5177>>x5178)%x5179)^x5180);

	if (t80 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5211 = 12;
	uint8_t x5212 = 15U;
	static int32_t t81 = 1;

	t81 = (((x5209>>x5210)%x5211)^x5212);

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5246 = 4U;
	uint16_t x5247 = UINT16_MAX;
	uint32_t t82 = 430U;

	t82 = (((x5245>>x5246)%x5247)^x5248);

	if (t82 != 4294967288U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5301 = INT8_MAX;
	int32_t x5303 = -1;
	int64_t x5304 = INT64_MAX;

	t83 = (((x5301>>x5302)%x5303)^x5304);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5358 = 1U;
	uint64_t x5359 = 3056322711075795LLU;
	static uint32_t x5360 = 125531U;
	static volatile uint64_t t84 = 824154LLU;

	t84 = (((x5357>>x5358)%x5359)^x5360);

	if (t84 != 2751370125013832LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5393 = INT8_MAX;
	volatile uint16_t x5394 = 4U;
	volatile int32_t x5396 = -915150040;
	volatile uint32_t t85 = 85656U;

	t85 = (((x5393>>x5394)%x5395)^x5396);

	if (t85 != 3379817258U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5409 = UINT64_MAX;
	static int32_t x5410 = 2;
	int64_t x5411 = INT64_MAX;
	volatile uint64_t t86 = 63838055LLU;

	t86 = (((x5409>>x5410)%x5411)^x5412);

	if (t86 != 4611686018427355136LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5417 = 1256;
	uint8_t x5418 = 7U;
	int64_t x5419 = INT64_MAX;
	uint32_t x5420 = 7339U;
	int64_t t87 = 9827LL;

	t87 = (((x5417>>x5418)%x5419)^x5420);

	if (t87 != 7330LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x5497 = 640805LLU;
	static uint8_t x5499 = 24U;
	uint16_t x5500 = 5U;
	static uint64_t t88 = 3787299072887849LLU;

	t88 = (((x5497>>x5498)%x5499)^x5500);

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5505 = 7091U;
	static volatile int16_t x5507 = INT16_MIN;
	int32_t x5508 = 93;
	int32_t t89 = 11044;

	t89 = (((x5505>>x5506)%x5507)^x5508);

	if (t89 != 93) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5573 = 24U;
	static volatile int16_t x5574 = 1;

	t90 = (((x5573>>x5574)%x5575)^x5576);

	if (t90 != -7) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5611 = -7;
	volatile int32_t x5612 = -1;
	static volatile int32_t t91 = 50532;

	t91 = (((x5609>>x5610)%x5611)^x5612);

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5613 = 20;
	uint8_t x5615 = 12U;
	volatile uint64_t x5616 = 3837116314288181729LLU;

	t92 = (((x5613>>x5614)%x5615)^x5616);

	if (t92 != 3837116314288181731LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5657 = 2U;
	uint8_t x5658 = 11U;
	int64_t x5659 = -322493189LL;
	int64_t t93 = 4549451254853395LL;

	t93 = (((x5657>>x5658)%x5659)^x5660);

	if (t93 != -9LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5770 = 3U;
	int8_t x5771 = INT8_MAX;
	int8_t x5772 = INT8_MAX;
	int32_t t94 = 444790;

	t94 = (((x5769>>x5770)%x5771)^x5772);

	if (t94 != 112) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5803 = UINT64_MAX;

	t95 = (((x5801>>x5802)%x5803)^x5804);

	if (t95 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5929 = INT8_MAX;
	static int64_t x5930 = 6LL;
	int8_t x5931 = -1;
	int32_t x5932 = -1;
	volatile int32_t t96 = 2;

	t96 = (((x5929>>x5930)%x5931)^x5932);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6041 = INT8_MAX;
	static uint32_t x6043 = UINT32_MAX;
	static int16_t x6044 = 19;
	volatile uint32_t t97 = 2U;

	t97 = (((x6041>>x6042)%x6043)^x6044);

	if (t97 != 19U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x6069 = 29;
	static volatile int64_t x6071 = 6979125979LL;
	int16_t x6072 = 389;

	t98 = (((x6069>>x6070)%x6071)^x6072);

	if (t98 != 408LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6101 = UINT64_MAX;
	int16_t x6102 = 27;
	volatile uint8_t x6103 = UINT8_MAX;
	uint64_t t99 = 3LLU;

	t99 = (((x6101>>x6102)%x6103)^x6104);

	if (t99 != 18446744073709518879LLU) { NG(); } else { ; }
	
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

