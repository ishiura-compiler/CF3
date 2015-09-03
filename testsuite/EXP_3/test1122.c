#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x9 = 69U;
int32_t x10 = 1;
uint8_t x36 = 0U;
int64_t t1 = -397046731482366LL;
uint64_t x94 = UINT64_MAX;
uint64_t x132 = 1LLU;
volatile int32_t t6 = -791356;
uint8_t x583 = 44U;
volatile int64_t x594 = -1258751465182LL;
static uint16_t x596 = 2U;
uint32_t x630 = 10324332U;
static uint8_t x632 = 1U;
volatile uint32_t t9 = 91U;
int8_t x720 = 1;
int32_t t11 = -29855;
int16_t x881 = 7;
static uint64_t x883 = 9595589LLU;
uint64_t x957 = UINT64_MAX;
uint64_t x958 = 71637379220490461LLU;
volatile int64_t x1137 = -1LL;
volatile int8_t x1268 = 30;
uint32_t x1283 = UINT32_MAX;
uint8_t x1297 = 0U;
int64_t x1299 = 159993565LL;
volatile int32_t x1622 = INT32_MIN;
int8_t x2004 = 1;
int8_t x2021 = INT8_MIN;
int8_t x2023 = INT8_MAX;
static uint8_t x2024 = 1U;
int8_t x2168 = 0;
int32_t x2465 = -1;
volatile uint32_t t27 = 25391598U;
static volatile int8_t x2544 = 0;
int32_t x2549 = -1;
int64_t x2551 = INT64_MAX;
int8_t x2552 = 2;
static int64_t x2598 = 7282046933542465LL;
int8_t x2950 = -25;
volatile int32_t t36 = 0;
static int16_t x3045 = INT16_MAX;
volatile uint32_t t38 = 130250U;
int16_t x3206 = -1;
volatile int32_t x3284 = 1;
int32_t t43 = -85743125;
uint16_t x3362 = 22165U;
uint8_t x3374 = 14U;
volatile uint64_t t45 = 7LLU;
uint32_t x3525 = 116U;
uint8_t x3572 = 0U;
static uint64_t t47 = 131986722LLU;
int32_t x3573 = -1;
int32_t x3575 = 119708;
volatile int32_t t48 = -492114762;
int32_t x3636 = 6;
uint8_t x3680 = 1U;
int32_t t52 = 4;
static uint64_t x3891 = 7311477938LLU;
int64_t x3998 = INT64_MIN;
static int16_t x4080 = 5;
volatile uint32_t t56 = 1570288U;
static uint8_t x4112 = 1U;
volatile int32_t x4269 = -1;
int64_t x4270 = INT64_MIN;
uint16_t x4505 = 437U;
int64_t x4506 = INT64_MIN;
uint64_t x4507 = UINT64_MAX;
volatile uint8_t x4508 = 4U;
uint8_t x4620 = 0U;
int64_t x4719 = 108LL;
int64_t x4827 = INT64_MAX;
volatile int32_t x4843 = 25851756;
int32_t t74 = -449;
uint32_t x5309 = 98U;
int64_t x5377 = INT64_MAX;
volatile uint64_t x5379 = 3465389187LLU;
uint64_t t76 = 1817930LLU;
uint64_t x5390 = 128943220LLU;
int16_t x5609 = -50;
int64_t x5826 = 1076LL;
int64_t t82 = -10209617472661332LL;
uint64_t x6023 = UINT64_MAX;
volatile uint64_t t83 = 69LLU;
volatile uint32_t x6192 = 4U;
uint64_t x6253 = UINT64_MAX;
uint64_t x6255 = UINT64_MAX;
uint8_t x6268 = 1U;
volatile uint8_t x6337 = 15U;
int16_t x6390 = -7;
uint16_t x6391 = 42U;
static volatile int32_t t90 = -7709;
volatile uint16_t x6540 = 3U;
static int64_t x6658 = -116LL;
volatile int64_t x6674 = -12696476358587LL;
uint8_t x6676 = 23U;
volatile int32_t t94 = 119237995;
static int8_t x6941 = 25;
int32_t t95 = 0;
int32_t x6979 = INT32_MAX;
int32_t x7103 = INT32_MAX;
volatile int64_t x7114 = -5308957707710LL;
static uint16_t x7115 = UINT16_MAX;
volatile int8_t x7134 = 0;


void f0(void) {
	int8_t x11 = INT8_MAX;
	int8_t x12 = 1;
	int32_t t0 = -11667263;

	t0 = ((x9<x10)/(x11>>x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int8_t x34 = -1;
	volatile int64_t x35 = 6LL;

	t1 = ((x33<x34)/(x35>>x36));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x93 = -1;
	volatile int64_t x95 = INT64_MAX;
	uint8_t x96 = 18U;
	volatile int64_t t2 = -1505845324891471LL;

	t2 = ((x93<x94)/(x95>>x96));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	int16_t x131 = INT16_MAX;
	int32_t t3 = 0;

	t3 = ((x129<x130)/(x131>>x132));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x321 = -27;
	static int64_t x322 = INT64_MIN;
	int64_t x323 = 1822154577LL;
	uint8_t x324 = 5U;
	volatile int64_t t4 = 231436925LL;

	t4 = ((x321<x322)/(x323>>x324));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x401 = UINT64_MAX;
	static volatile int32_t x402 = INT32_MAX;
	static uint32_t x403 = UINT32_MAX;
	volatile int16_t x404 = 0;
	volatile uint32_t t5 = 298U;

	t5 = ((x401<x402)/(x403>>x404));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MIN;
	volatile uint8_t x407 = UINT8_MAX;
	int8_t x408 = 1;

	t6 = ((x405<x406)/(x407>>x408));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x581 = INT64_MAX;
	int32_t x582 = 81980089;
	uint16_t x584 = 2U;
	static int32_t t7 = -81211694;

	t7 = ((x581<x582)/(x583>>x584));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x593 = INT64_MIN;
	int64_t x595 = 195669LL;
	int64_t t8 = -735010LL;

	t8 = ((x593<x594)/(x595>>x596));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x629 = 0U;
	uint32_t x631 = 101837U;

	t9 = ((x629<x630)/(x631>>x632));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x717 = 10U;
	static uint32_t x718 = 408647600U;
	int16_t x719 = 679;
	int32_t t10 = -42;

	t10 = ((x717<x718)/(x719>>x720));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x849 = 1;
	volatile int8_t x850 = INT8_MIN;
	static int8_t x851 = INT8_MAX;
	static uint16_t x852 = 1U;

	t11 = ((x849<x850)/(x851>>x852));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x873 = UINT8_MAX;
	volatile uint16_t x874 = 2U;
	volatile uint64_t x875 = 23879232861LLU;
	uint16_t x876 = 1U;
	volatile uint64_t t12 = 2LLU;

	t12 = ((x873<x874)/(x875>>x876));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x882 = INT16_MIN;
	volatile uint8_t x884 = 0U;
	static volatile uint64_t t13 = 212640399443LLU;

	t13 = ((x881<x882)/(x883>>x884));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x959 = 1769388;
	int16_t x960 = 1;
	int32_t t14 = 2741091;

	t14 = ((x957<x958)/(x959>>x960));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1025 = INT8_MAX;
	int64_t x1026 = INT64_MIN;
	uint8_t x1027 = UINT8_MAX;
	volatile uint8_t x1028 = 1U;
	static volatile int32_t t15 = -6000;

	t15 = ((x1025<x1026)/(x1027>>x1028));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1138 = INT8_MIN;
	int32_t x1139 = 4823;
	static int8_t x1140 = 0;
	static int32_t t16 = -8;

	t16 = ((x1137<x1138)/(x1139>>x1140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1261 = -106208;
	static int16_t x1262 = -1;
	int64_t x1263 = INT64_MAX;
	uint16_t x1264 = 1U;
	int64_t t17 = 4289565LL;

	t17 = ((x1261<x1262)/(x1263>>x1264));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1265 = 117U;
	static uint64_t x1266 = 1914546480410LLU;
	static uint64_t x1267 = 1569211762092023209LLU;
	volatile uint64_t t18 = 3362LLU;

	t18 = ((x1265<x1266)/(x1267>>x1268));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1281 = 29890208U;
	int16_t x1282 = -7030;
	static volatile uint8_t x1284 = 0U;
	uint32_t t19 = 4813333U;

	t19 = ((x1281<x1282)/(x1283>>x1284));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1298 = 118U;
	int8_t x1300 = 0;
	volatile int64_t t20 = -34LL;

	t20 = ((x1297<x1298)/(x1299>>x1300));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1621 = 5694U;
	static int16_t x1623 = INT16_MAX;
	static uint8_t x1624 = 0U;
	volatile int32_t t21 = -1;

	t21 = ((x1621<x1622)/(x1623>>x1624));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1785 = -1;
	int32_t x1786 = -73838225;
	volatile int32_t x1787 = INT32_MAX;
	volatile uint32_t x1788 = 3U;
	static int32_t t22 = 190989948;

	t22 = ((x1785<x1786)/(x1787>>x1788));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1909 = 9U;
	volatile uint8_t x1910 = 5U;
	volatile uint32_t x1911 = 127720U;
	static uint8_t x1912 = 2U;
	volatile uint32_t t23 = 834342849U;

	t23 = ((x1909<x1910)/(x1911>>x1912));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2001 = INT64_MIN;
	static int64_t x2002 = INT64_MAX;
	uint16_t x2003 = 167U;
	volatile int32_t t24 = -355390;

	t24 = ((x2001<x2002)/(x2003>>x2004));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2022 = -1588657547LL;
	static int32_t t25 = 223479;

	t25 = ((x2021<x2022)/(x2023>>x2024));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2165 = 69746444;
	static volatile uint64_t x2166 = 82764905024966367LLU;
	static volatile uint16_t x2167 = 137U;
	volatile int32_t t26 = -474;

	t26 = ((x2165<x2166)/(x2167>>x2168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x2466 = INT16_MAX;
	uint32_t x2467 = 6614044U;
	volatile int16_t x2468 = 1;

	t27 = ((x2465<x2466)/(x2467>>x2468));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2497 = 1;
	int16_t x2498 = 0;
	int32_t x2499 = INT32_MAX;
	int8_t x2500 = 10;
	static volatile int32_t t28 = -2;

	t28 = ((x2497<x2498)/(x2499>>x2500));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x2541 = INT32_MIN;
	int32_t x2542 = -10;
	uint32_t x2543 = UINT32_MAX;
	static uint32_t t29 = 5381303U;

	t29 = ((x2541<x2542)/(x2543>>x2544));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x2550 = UINT8_MAX;
	int64_t t30 = 226045540658LL;

	t30 = ((x2549<x2550)/(x2551>>x2552));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x2597 = 5990;
	int8_t x2599 = 4;
	uint16_t x2600 = 0U;
	volatile int32_t t31 = 1215;

	t31 = ((x2597<x2598)/(x2599>>x2600));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2765 = UINT32_MAX;
	volatile uint8_t x2766 = 28U;
	uint32_t x2767 = 752U;
	uint16_t x2768 = 0U;
	uint32_t t32 = 210U;

	t32 = ((x2765<x2766)/(x2767>>x2768));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2769 = 3U;
	volatile uint16_t x2770 = UINT16_MAX;
	uint8_t x2771 = 18U;
	static volatile int8_t x2772 = 3;
	static int32_t t33 = -2194;

	t33 = ((x2769<x2770)/(x2771>>x2772));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2857 = UINT64_MAX;
	volatile int16_t x2858 = -1;
	static uint8_t x2859 = 5U;
	int16_t x2860 = 0;
	static volatile int32_t t34 = 7;

	t34 = ((x2857<x2858)/(x2859>>x2860));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2949 = 114U;
	static uint8_t x2951 = 75U;
	int8_t x2952 = 2;
	volatile int32_t t35 = 18559663;

	t35 = ((x2949<x2950)/(x2951>>x2952));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2989 = INT16_MIN;
	int16_t x2990 = INT16_MIN;
	volatile int32_t x2991 = INT32_MAX;
	int64_t x2992 = 18LL;

	t36 = ((x2989<x2990)/(x2991>>x2992));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2997 = UINT64_MAX;
	static int64_t x2998 = INT64_MIN;
	uint8_t x2999 = UINT8_MAX;
	volatile uint8_t x3000 = 3U;
	static volatile int32_t t37 = -122;

	t37 = ((x2997<x2998)/(x2999>>x3000));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x3046 = INT16_MAX;
	uint32_t x3047 = 191828U;
	uint8_t x3048 = 3U;

	t38 = ((x3045<x3046)/(x3047>>x3048));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3085 = 242;
	int64_t x3086 = -49534058125900373LL;
	uint64_t x3087 = UINT64_MAX;
	uint8_t x3088 = 36U;
	volatile uint64_t t39 = 7810979900258697LLU;

	t39 = ((x3085<x3086)/(x3087>>x3088));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x3205 = -1;
	uint16_t x3207 = 44U;
	uint8_t x3208 = 4U;
	static volatile int32_t t40 = -26160;

	t40 = ((x3205<x3206)/(x3207>>x3208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3213 = 0U;
	int64_t x3214 = INT64_MIN;
	int16_t x3215 = 12021;
	int8_t x3216 = 7;
	int32_t t41 = 2;

	t41 = ((x3213<x3214)/(x3215>>x3216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3277 = -1LL;
	int16_t x3278 = -39;
	volatile uint8_t x3279 = 55U;
	volatile uint8_t x3280 = 0U;
	static int32_t t42 = -81;

	t42 = ((x3277<x3278)/(x3279>>x3280));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3281 = INT32_MIN;
	int64_t x3282 = INT64_MIN;
	uint8_t x3283 = UINT8_MAX;

	t43 = ((x3281<x3282)/(x3283>>x3284));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3361 = 30U;
	int8_t x3363 = INT8_MAX;
	static int8_t x3364 = 4;
	int32_t t44 = -27;

	t44 = ((x3361<x3362)/(x3363>>x3364));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x3373 = INT16_MIN;
	volatile uint64_t x3375 = UINT64_MAX;
	uint32_t x3376 = 1U;

	t45 = ((x3373<x3374)/(x3375>>x3376));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3526 = UINT32_MAX;
	uint32_t x3527 = UINT32_MAX;
	static uint8_t x3528 = 1U;
	uint32_t t46 = 62745144U;

	t46 = ((x3525<x3526)/(x3527>>x3528));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x3569 = INT32_MIN;
	uint8_t x3570 = UINT8_MAX;
	uint64_t x3571 = 934108LLU;

	t47 = ((x3569<x3570)/(x3571>>x3572));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3574 = INT8_MIN;
	static volatile int8_t x3576 = 0;

	t48 = ((x3573<x3574)/(x3575>>x3576));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3633 = INT8_MAX;
	int64_t x3634 = INT64_MIN;
	uint16_t x3635 = UINT16_MAX;
	int32_t t49 = 6;

	t49 = ((x3633<x3634)/(x3635>>x3636));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x3653 = INT16_MIN;
	int32_t x3654 = INT32_MIN;
	uint32_t x3655 = UINT32_MAX;
	int64_t x3656 = 10LL;
	uint32_t t50 = 606413U;

	t50 = ((x3653<x3654)/(x3655>>x3656));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x3669 = INT32_MAX;
	static int32_t x3670 = -593290006;
	static uint64_t x3671 = 4775640LLU;
	uint8_t x3672 = 14U;
	uint64_t t51 = 29LLU;

	t51 = ((x3669<x3670)/(x3671>>x3672));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3677 = -1;
	int64_t x3678 = -629693LL;
	volatile uint8_t x3679 = 2U;

	t52 = ((x3677<x3678)/(x3679>>x3680));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3797 = -3;
	int8_t x3798 = INT8_MIN;
	int8_t x3799 = INT8_MAX;
	uint8_t x3800 = 1U;
	int32_t t53 = -5;

	t53 = ((x3797<x3798)/(x3799>>x3800));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3889 = 81U;
	int32_t x3890 = 5005634;
	int8_t x3892 = 1;
	uint64_t t54 = 30028LLU;

	t54 = ((x3889<x3890)/(x3891>>x3892));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3997 = INT64_MAX;
	uint32_t x3999 = UINT32_MAX;
	int8_t x4000 = 1;
	static volatile uint32_t t55 = 6497920U;

	t55 = ((x3997<x3998)/(x3999>>x4000));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x4077 = -1;
	uint64_t x4078 = 21321649852740074LLU;
	static uint32_t x4079 = 2902150U;

	t56 = ((x4077<x4078)/(x4079>>x4080));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4093 = -1;
	int16_t x4094 = -1;
	uint64_t x4095 = 97471754885092LLU;
	int8_t x4096 = 3;
	uint64_t t57 = 5717929LLU;

	t57 = ((x4093<x4094)/(x4095>>x4096));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x4109 = -8;
	uint32_t x4110 = 7323U;
	int8_t x4111 = 7;
	static volatile int32_t t58 = -921651241;

	t58 = ((x4109<x4110)/(x4111>>x4112));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4213 = INT32_MIN;
	int64_t x4214 = INT64_MAX;
	static uint8_t x4215 = UINT8_MAX;
	uint32_t x4216 = 0U;
	volatile int32_t t59 = -6;

	t59 = ((x4213<x4214)/(x4215>>x4216));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4271 = 167U;
	static uint8_t x4272 = 5U;
	uint32_t t60 = 4276U;

	t60 = ((x4269<x4270)/(x4271>>x4272));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t t61 = 3461007LLU;

	t61 = ((x4505<x4506)/(x4507>>x4508));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x4601 = UINT64_MAX;
	int32_t x4602 = INT32_MAX;
	static int64_t x4603 = INT64_MAX;
	int64_t x4604 = 1LL;
	static int64_t t62 = -32671823791724LL;

	t62 = ((x4601<x4602)/(x4603>>x4604));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4617 = 17U;
	volatile uint16_t x4618 = 3027U;
	int16_t x4619 = 7;
	volatile int32_t t63 = 909;

	t63 = ((x4617<x4618)/(x4619>>x4620));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4625 = 951601268430LL;
	int16_t x4626 = -1;
	volatile int32_t x4627 = INT32_MAX;
	uint8_t x4628 = 3U;
	volatile int32_t t64 = 53;

	t64 = ((x4625<x4626)/(x4627>>x4628));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4669 = INT8_MIN;
	uint8_t x4670 = UINT8_MAX;
	int64_t x4671 = 1096722878011LL;
	uint16_t x4672 = 2U;
	static int64_t t65 = 3253042LL;

	t65 = ((x4669<x4670)/(x4671>>x4672));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4693 = 0U;
	uint8_t x4694 = 14U;
	int32_t x4695 = 944583;
	uint16_t x4696 = 12U;
	static int32_t t66 = 62302;

	t66 = ((x4693<x4694)/(x4695>>x4696));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4705 = -3;
	int8_t x4706 = INT8_MIN;
	uint16_t x4707 = 16768U;
	volatile int8_t x4708 = 0;
	volatile int32_t t67 = 806;

	t67 = ((x4705<x4706)/(x4707>>x4708));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x4717 = 62U;
	int64_t x4718 = INT64_MIN;
	uint8_t x4720 = 1U;
	int64_t t68 = -30660870385159LL;

	t68 = ((x4717<x4718)/(x4719>>x4720));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4777 = -2;
	int8_t x4778 = -1;
	int32_t x4779 = INT32_MAX;
	int8_t x4780 = 10;
	int32_t t69 = 64048034;

	t69 = ((x4777<x4778)/(x4779>>x4780));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4805 = INT8_MIN;
	int8_t x4806 = -1;
	uint32_t x4807 = UINT32_MAX;
	uint64_t x4808 = 2LLU;
	volatile uint32_t t70 = 1U;

	t70 = ((x4805<x4806)/(x4807>>x4808));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4825 = 23U;
	int8_t x4826 = -8;
	uint32_t x4828 = 16U;
	volatile int64_t t71 = -839993190100128139LL;

	t71 = ((x4825<x4826)/(x4827>>x4828));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4841 = 3602427119LL;
	volatile int16_t x4842 = INT16_MAX;
	uint8_t x4844 = 0U;
	int32_t t72 = 227009521;

	t72 = ((x4841<x4842)/(x4843>>x4844));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4905 = UINT64_MAX;
	int64_t x4906 = INT64_MIN;
	volatile int32_t x4907 = INT32_MAX;
	volatile int8_t x4908 = 1;
	volatile int32_t t73 = -866;

	t73 = ((x4905<x4906)/(x4907>>x4908));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5137 = INT32_MIN;
	int32_t x5138 = INT32_MAX;
	uint16_t x5139 = UINT16_MAX;
	uint32_t x5140 = 1U;

	t74 = ((x5137<x5138)/(x5139>>x5140));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5310 = 621U;
	static uint8_t x5311 = 14U;
	int8_t x5312 = 3;
	int32_t t75 = 456;

	t75 = ((x5309<x5310)/(x5311>>x5312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5378 = INT8_MIN;
	static int16_t x5380 = 0;

	t76 = ((x5377<x5378)/(x5379>>x5380));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5389 = UINT32_MAX;
	int32_t x5391 = INT32_MAX;
	uint8_t x5392 = 25U;
	int32_t t77 = -301201642;

	t77 = ((x5389<x5390)/(x5391>>x5392));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5610 = 1U;
	int32_t x5611 = 184;
	int16_t x5612 = 0;
	int32_t t78 = 456;

	t78 = ((x5609<x5610)/(x5611>>x5612));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5681 = INT8_MIN;
	uint8_t x5682 = 6U;
	int32_t x5683 = INT32_MAX;
	uint16_t x5684 = 7U;
	volatile int32_t t79 = 400;

	t79 = ((x5681<x5682)/(x5683>>x5684));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5773 = 185U;
	volatile int8_t x5774 = -1;
	uint32_t x5775 = UINT32_MAX;
	uint32_t x5776 = 5U;
	static uint32_t t80 = 698871620U;

	t80 = ((x5773<x5774)/(x5775>>x5776));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5825 = 53U;
	int16_t x5827 = 2179;
	uint8_t x5828 = 2U;
	int32_t t81 = -3747;

	t81 = ((x5825<x5826)/(x5827>>x5828));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5865 = -3893845025LL;
	uint32_t x5866 = UINT32_MAX;
	int64_t x5867 = INT64_MAX;
	uint8_t x5868 = 0U;

	t82 = ((x5865<x5866)/(x5867>>x5868));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6021 = -1LL;
	static int16_t x6022 = INT16_MAX;
	static volatile int16_t x6024 = 18;

	t83 = ((x6021<x6022)/(x6023>>x6024));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x6189 = INT32_MIN;
	uint16_t x6190 = UINT16_MAX;
	int64_t x6191 = 818LL;
	volatile int64_t t84 = 111719853308134LL;

	t84 = ((x6189<x6190)/(x6191>>x6192));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6193 = UINT64_MAX;
	int8_t x6194 = INT8_MIN;
	uint64_t x6195 = UINT64_MAX;
	uint16_t x6196 = 10U;
	uint64_t t85 = 68093365038189LLU;

	t85 = ((x6193<x6194)/(x6195>>x6196));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6254 = INT64_MIN;
	uint8_t x6256 = 0U;
	uint64_t t86 = 1699519573342291LLU;

	t86 = ((x6253<x6254)/(x6255>>x6256));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6265 = -3178LL;
	volatile int32_t x6266 = -1;
	volatile uint16_t x6267 = 114U;
	volatile int32_t t87 = 29;

	t87 = ((x6265<x6266)/(x6267>>x6268));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6338 = -6;
	uint64_t x6339 = UINT64_MAX;
	volatile int16_t x6340 = 4;
	volatile uint64_t t88 = 4363854858814LLU;

	t88 = ((x6337<x6338)/(x6339>>x6340));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x6389 = 305981696650892196LLU;
	volatile uint8_t x6392 = 1U;
	volatile int32_t t89 = -21;

	t89 = ((x6389<x6390)/(x6391>>x6392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x6397 = 4037097052715LLU;
	uint32_t x6398 = 8389816U;
	static int8_t x6399 = 61;
	int8_t x6400 = 3;

	t90 = ((x6397<x6398)/(x6399>>x6400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x6501 = INT64_MIN;
	static int32_t x6502 = -1;
	int8_t x6503 = INT8_MAX;
	int8_t x6504 = 3;
	int32_t t91 = 62551435;

	t91 = ((x6501<x6502)/(x6503>>x6504));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6537 = INT64_MIN;
	volatile int32_t x6538 = -839851;
	uint32_t x6539 = 189U;
	volatile uint32_t t92 = 30U;

	t92 = ((x6537<x6538)/(x6539>>x6540));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x6657 = 45533420181808334LLU;
	int32_t x6659 = INT32_MAX;
	static uint8_t x6660 = 1U;
	int32_t t93 = 63895;

	t93 = ((x6657<x6658)/(x6659>>x6660));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6673 = INT16_MIN;
	static int32_t x6675 = INT32_MAX;

	t94 = ((x6673<x6674)/(x6675>>x6676));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x6942 = INT16_MIN;
	uint8_t x6943 = 3U;
	int8_t x6944 = 0;

	t95 = ((x6941<x6942)/(x6943>>x6944));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x6977 = -139555350207143564LL;
	int32_t x6978 = INT32_MIN;
	uint16_t x6980 = 1U;
	volatile int32_t t96 = -681895277;

	t96 = ((x6977<x6978)/(x6979>>x6980));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x7101 = 8138953U;
	int64_t x7102 = -6LL;
	uint8_t x7104 = 1U;
	volatile int32_t t97 = 0;

	t97 = ((x7101<x7102)/(x7103>>x7104));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7113 = -1;
	int8_t x7116 = 1;
	int32_t t98 = -13152169;

	t98 = ((x7113<x7114)/(x7115>>x7116));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x7133 = 0;
	static uint16_t x7135 = UINT16_MAX;
	static volatile int8_t x7136 = 0;
	static volatile int32_t t99 = -116;

	t99 = ((x7133<x7134)/(x7135>>x7136));

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

