#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x135 = -29;
int16_t x221 = 0;
int16_t x362 = INT16_MAX;
static uint16_t x365 = UINT16_MAX;
int64_t x377 = 7LL;
uint8_t x378 = 2U;
volatile int64_t x379 = INT64_MIN;
int8_t x380 = 23;
static int8_t x434 = -1;
uint64_t t7 = 501252217298279LLU;
int8_t x496 = 4;
volatile int64_t x633 = 0LL;
int8_t x660 = 11;
uint32_t x661 = UINT32_MAX;
int64_t x846 = 5723882832LL;
volatile uint64_t t12 = 84880474LLU;
static int64_t x886 = 10004989942523LL;
static volatile int16_t x887 = INT16_MIN;
int16_t x888 = 0;
volatile int16_t x999 = -31;
volatile int32_t x1182 = INT32_MAX;
uint16_t x1183 = 3U;
volatile int32_t t16 = -2917802;
uint16_t x1229 = 0U;
static volatile uint8_t x1312 = 7U;
uint8_t x1336 = 2U;
volatile int32_t x1842 = INT32_MIN;
uint32_t x1865 = UINT32_MAX;
uint32_t x1960 = 0U;
int8_t x2046 = INT8_MIN;
int8_t x2048 = 9;
int64_t t27 = -164171LL;
static volatile int8_t x2090 = -1;
static uint64_t x2091 = 85514229218436791LLU;
uint32_t t28 = 2929U;
static uint8_t x2121 = 5U;
volatile int64_t x2123 = INT64_MAX;
volatile uint8_t x2580 = 26U;
uint32_t x2613 = UINT32_MAX;
uint32_t t34 = 50U;
int16_t x2634 = INT16_MIN;
int8_t x2635 = INT8_MIN;
int8_t x2636 = 3;
uint8_t x2665 = 0U;
int32_t x2667 = INT32_MIN;
volatile int32_t t37 = -8587;
static int16_t x3060 = 0;
int64_t x3131 = -1LL;
int8_t x3366 = INT8_MIN;
volatile int32_t t42 = -12516063;
int64_t x3467 = INT64_MIN;
int16_t x3554 = INT16_MIN;
static uint32_t x3587 = 5583262U;
int64_t x3730 = INT64_MAX;
static uint32_t t47 = 1715523U;
int16_t x3745 = INT16_MAX;
uint32_t x3817 = 74349U;
static int32_t x3819 = -1;
volatile uint32_t x3881 = UINT32_MAX;
volatile uint32_t t50 = 162U;
int32_t x4183 = 145128;
static volatile uint8_t x4184 = 13U;
static int8_t x4242 = -1;
static int32_t x4277 = INT32_MAX;
uint16_t x4280 = 0U;
uint64_t x4383 = 5169LLU;
int16_t x4445 = 1853;
uint16_t x4448 = 17U;
static uint64_t x4581 = 667849763806LLU;
volatile uint64_t x4582 = 3895060801084602LLU;
int64_t x4603 = INT64_MAX;
int64_t x4715 = INT64_MIN;
int32_t x4830 = INT32_MIN;
int16_t x4832 = 1;
int8_t x4898 = -1;
static uint8_t x4940 = 1U;
static int64_t x5004 = 1LL;
uint16_t x5053 = 5435U;
volatile int32_t t71 = -3;
uint8_t x5136 = 14U;
int8_t x5208 = 0;
uint32_t t74 = 5727225U;
volatile int32_t x5266 = INT32_MIN;
static uint8_t x5268 = 0U;
static uint64_t x5273 = 303460086LLU;
int8_t x5274 = -1;
volatile uint8_t x5560 = 0U;
volatile int32_t t82 = -116926;
volatile uint16_t x5657 = 15126U;
volatile uint64_t x5785 = 1593032642836057LLU;
int64_t x5786 = -1LL;
uint8_t x5788 = 63U;
uint64_t t85 = 69077187749LLU;
static volatile int8_t x5930 = -1;
static int32_t t87 = 216596812;
int32_t x5998 = INT32_MIN;
uint8_t x6032 = 5U;
static int32_t x6166 = -1;
uint32_t x6167 = 249U;
int16_t x6189 = 0;
volatile int32_t t93 = 4051;
uint16_t x6235 = 2U;
static volatile int32_t t94 = 46765;
volatile int16_t x6266 = INT16_MIN;
int32_t x6375 = INT32_MIN;
static volatile uint8_t x6376 = 9U;
volatile int32_t x6559 = INT32_MAX;
static volatile int32_t t97 = 13;
uint32_t t99 = 0U;


void f0(void) {
	uint16_t x133 = 223U;
	int8_t x134 = INT8_MIN;
	uint8_t x136 = 0U;
	volatile int32_t t0 = -6531;

	t0 = ((x133^(x134<x135))<<x136);

	if (t0 != 222) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MAX;
	static volatile uint64_t x179 = UINT64_MAX;
	uint16_t x180 = 20U;
	volatile uint64_t t1 = 141368LLU;

	t1 = ((x177^(x178<x179))<<x180);

	if (t1 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	static volatile int8_t x224 = 1;
	volatile int32_t t2 = 6306975;

	t2 = ((x221^(x222<x223))<<x224);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x353 = INT8_MAX;
	static volatile uint32_t x354 = 1342164U;
	volatile uint16_t x355 = UINT16_MAX;
	int32_t x356 = 0;
	volatile int32_t t3 = 24563;

	t3 = ((x353^(x354<x355))<<x356);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x361 = UINT64_MAX;
	int8_t x363 = 41;
	uint8_t x364 = 9U;
	volatile uint64_t t4 = 6768LLU;

	t4 = ((x361^(x362<x363))<<x364);

	if (t4 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x366 = 7U;
	static int64_t x367 = INT64_MIN;
	uint32_t x368 = 6U;
	int32_t t5 = -4313678;

	t5 = ((x365^(x366<x367))<<x368);

	if (t5 != 4194240) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t t6 = 13724172059LL;

	t6 = ((x377^(x378<x379))<<x380);

	if (t6 != 58720256LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x433 = 25120831002135LLU;
	int32_t x435 = -102378;
	uint8_t x436 = 1U;

	t7 = ((x433^(x434<x435))<<x436);

	if (t7 != 50241662004270LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x493 = 11;
	uint64_t x494 = 1348LLU;
	int16_t x495 = INT16_MIN;
	int32_t t8 = 27766944;

	t8 = ((x493^(x494<x495))<<x496);

	if (t8 != 160) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x634 = 2584838LLU;
	volatile uint16_t x635 = UINT16_MAX;
	static volatile uint64_t x636 = 27LLU;
	int64_t t9 = 65717199245431LL;

	t9 = ((x633^(x634<x635))<<x636);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x657 = INT16_MAX;
	static int32_t x658 = INT32_MAX;
	static volatile int64_t x659 = -305744930LL;
	int32_t t10 = -45;

	t10 = ((x657^(x658<x659))<<x660);

	if (t10 != 67106816) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x662 = -16840LL;
	volatile uint16_t x663 = UINT16_MAX;
	int8_t x664 = 16;
	volatile uint32_t t11 = 3141029U;

	t11 = ((x661^(x662<x663))<<x664);

	if (t11 != 4294836224U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x845 = 1271191960228073298LLU;
	uint64_t x847 = 2501808112586155LLU;
	int8_t x848 = 8;

	t12 = ((x845^(x846<x847))<<x848);

	if (t12 != 11830492565324387072LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x885 = INT16_MAX;
	int32_t t13 = 6850450;

	t13 = ((x885^(x886<x887))<<x888);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x941 = 8286604724202328LL;
	static int32_t x942 = INT32_MIN;
	int8_t x943 = INT8_MIN;
	int32_t x944 = 1;
	volatile int64_t t14 = 1LL;

	t14 = ((x941^(x942<x943))<<x944);

	if (t14 != 16573209448404658LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x997 = 3567893786281548028LLU;
	volatile int8_t x998 = INT8_MIN;
	volatile uint8_t x1000 = 1U;
	uint64_t t15 = 3548LLU;

	t15 = ((x997^(x998<x999))<<x1000);

	if (t15 != 7135787572563096058LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1181 = UINT8_MAX;
	uint8_t x1184 = 1U;

	t16 = ((x1181^(x1182<x1183))<<x1184);

	if (t16 != 510) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1230 = 2859U;
	int8_t x1231 = -1;
	int8_t x1232 = 0;
	int32_t t17 = -928635215;

	t17 = ((x1229^(x1230<x1231))<<x1232);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x1281 = 65;
	uint32_t x1282 = 25U;
	int8_t x1283 = -1;
	uint16_t x1284 = 1U;
	static volatile int32_t t18 = 6853205;

	t18 = ((x1281^(x1282<x1283))<<x1284);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1309 = UINT32_MAX;
	volatile uint8_t x1310 = 2U;
	static int8_t x1311 = -1;
	uint32_t t19 = 4578307U;

	t19 = ((x1309^(x1310<x1311))<<x1312);

	if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1333 = UINT16_MAX;
	int8_t x1334 = INT8_MAX;
	int64_t x1335 = -1LL;
	static volatile int32_t t20 = 337403;

	t20 = ((x1333^(x1334<x1335))<<x1336);

	if (t20 != 262140) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1357 = 0;
	int32_t x1358 = 2016990;
	int32_t x1359 = -943836;
	uint8_t x1360 = 12U;
	volatile int32_t t21 = 441029407;

	t21 = ((x1357^(x1358<x1359))<<x1360);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1553 = 1;
	uint32_t x1554 = 367720U;
	volatile int64_t x1555 = INT64_MIN;
	int16_t x1556 = 1;
	int32_t t22 = -500;

	t22 = ((x1553^(x1554<x1555))<<x1556);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1841 = 24LLU;
	volatile uint32_t x1843 = 2U;
	int8_t x1844 = 12;
	volatile uint64_t t23 = 7691LLU;

	t23 = ((x1841^(x1842<x1843))<<x1844);

	if (t23 != 98304LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1866 = 11158;
	int64_t x1867 = -1LL;
	static volatile uint8_t x1868 = 24U;
	uint32_t t24 = 203062313U;

	t24 = ((x1865^(x1866<x1867))<<x1868);

	if (t24 != 4278190080U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1957 = 11LL;
	int32_t x1958 = -1;
	volatile int64_t x1959 = -1LL;
	int64_t t25 = -18970682LL;

	t25 = ((x1957^(x1958<x1959))<<x1960);

	if (t25 != 11LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2045 = 25U;
	static volatile int8_t x2047 = 0;
	int32_t t26 = -13454;

	t26 = ((x2045^(x2046<x2047))<<x2048);

	if (t26 != 12288) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2085 = 1232LL;
	uint64_t x2086 = UINT64_MAX;
	static uint64_t x2087 = 4LLU;
	volatile uint8_t x2088 = 7U;

	t27 = ((x2085^(x2086<x2087))<<x2088);

	if (t27 != 157696LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2089 = 1021U;
	volatile uint8_t x2092 = 4U;

	t28 = ((x2089^(x2090<x2091))<<x2092);

	if (t28 != 16336U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x2122 = INT8_MAX;
	uint8_t x2124 = 10U;
	int32_t t29 = 76592543;

	t29 = ((x2121^(x2122<x2123))<<x2124);

	if (t29 != 4096) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2185 = 520046306397LLU;
	volatile int64_t x2186 = INT64_MAX;
	uint32_t x2187 = 17932775U;
	static uint8_t x2188 = 2U;
	volatile uint64_t t30 = 2115361236LLU;

	t30 = ((x2185^(x2186<x2187))<<x2188);

	if (t30 != 2080185225588LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2369 = 0U;
	int16_t x2370 = -3337;
	volatile int32_t x2371 = 0;
	volatile uint16_t x2372 = 6U;
	int32_t t31 = 38;

	t31 = ((x2369^(x2370<x2371))<<x2372);

	if (t31 != 64) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2577 = 1;
	int8_t x2578 = INT8_MAX;
	static uint8_t x2579 = UINT8_MAX;
	volatile int32_t t32 = -1;

	t32 = ((x2577^(x2578<x2579))<<x2580);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2601 = 28U;
	volatile int64_t x2602 = INT64_MIN;
	volatile uint64_t x2603 = 9LLU;
	uint16_t x2604 = 3U;
	int32_t t33 = 3992;

	t33 = ((x2601^(x2602<x2603))<<x2604);

	if (t33 != 224) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x2614 = INT32_MIN;
	int64_t x2615 = -193926038LL;
	int8_t x2616 = 0;

	t34 = ((x2613^(x2614<x2615))<<x2616);

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2633 = 23912U;
	int32_t t35 = -709824;

	t35 = ((x2633^(x2634<x2635))<<x2636);

	if (t35 != 191304) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2649 = 1;
	uint64_t x2650 = 13711297107997241LLU;
	int32_t x2651 = 3;
	volatile uint16_t x2652 = 23U;
	volatile int32_t t36 = 122271468;

	t36 = ((x2649^(x2650<x2651))<<x2652);

	if (t36 != 8388608) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2666 = -6463466;
	uint8_t x2668 = 26U;

	t37 = ((x2665^(x2666<x2667))<<x2668);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x2725 = 5926U;
	volatile uint32_t x2726 = UINT32_MAX;
	uint8_t x2727 = UINT8_MAX;
	int8_t x2728 = 10;
	int32_t t38 = -6;

	t38 = ((x2725^(x2726<x2727))<<x2728);

	if (t38 != 6068224) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2809 = 1379592U;
	uint16_t x2810 = UINT16_MAX;
	int32_t x2811 = INT32_MIN;
	int8_t x2812 = 2;
	static volatile uint32_t t39 = 237636371U;

	t39 = ((x2809^(x2810<x2811))<<x2812);

	if (t39 != 5518368U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x3057 = 446412381344046985LLU;
	static uint16_t x3058 = UINT16_MAX;
	static int32_t x3059 = -9062778;
	uint64_t t40 = 64216023LLU;

	t40 = ((x3057^(x3058<x3059))<<x3060);

	if (t40 != 446412381344046985LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x3129 = INT32_MAX;
	int8_t x3130 = INT8_MIN;
	static uint8_t x3132 = 0U;
	static int32_t t41 = 4550043;

	t41 = ((x3129^(x3130<x3131))<<x3132);

	if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3365 = UINT16_MAX;
	static uint16_t x3367 = UINT16_MAX;
	uint16_t x3368 = 1U;

	t42 = ((x3365^(x3366<x3367))<<x3368);

	if (t42 != 131068) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x3465 = 1098639043LL;
	int8_t x3466 = INT8_MAX;
	int8_t x3468 = 4;
	volatile int64_t t43 = 7969767LL;

	t43 = ((x3465^(x3466<x3467))<<x3468);

	if (t43 != 17578224688LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3553 = 21U;
	uint8_t x3555 = 22U;
	static volatile int16_t x3556 = 1;
	volatile int32_t t44 = -4671816;

	t44 = ((x3553^(x3554<x3555))<<x3556);

	if (t44 != 40) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3585 = 41;
	volatile int32_t x3586 = INT32_MIN;
	int8_t x3588 = 16;
	int32_t t45 = -25;

	t45 = ((x3585^(x3586<x3587))<<x3588);

	if (t45 != 2686976) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x3625 = 291;
	uint64_t x3626 = 4595382603LLU;
	volatile uint16_t x3627 = 6763U;
	static volatile int8_t x3628 = 0;
	int32_t t46 = 327678;

	t46 = ((x3625^(x3626<x3627))<<x3628);

	if (t46 != 291) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3729 = UINT32_MAX;
	int32_t x3731 = 0;
	static uint8_t x3732 = 22U;

	t47 = ((x3729^(x3730<x3731))<<x3732);

	if (t47 != 4290772992U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3746 = 0;
	int16_t x3747 = INT16_MIN;
	uint32_t x3748 = 12U;
	volatile int32_t t48 = -6;

	t48 = ((x3745^(x3746<x3747))<<x3748);

	if (t48 != 134213632) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3818 = INT16_MIN;
	uint8_t x3820 = 26U;
	uint32_t t49 = 28143910U;

	t49 = ((x3817^(x3818<x3819))<<x3820);

	if (t49 != 2952790016U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3882 = INT8_MIN;
	int64_t x3883 = 0LL;
	uint8_t x3884 = 0U;

	t50 = ((x3881^(x3882<x3883))<<x3884);

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3945 = INT32_MAX;
	int8_t x3946 = -1;
	static int32_t x3947 = -1;
	volatile int8_t x3948 = 0;
	int32_t t51 = INT32_MAX;

	t51 = ((x3945^(x3946<x3947))<<x3948);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x4001 = 13635454LLU;
	volatile int32_t x4002 = -47266463;
	int64_t x4003 = INT64_MAX;
	uint16_t x4004 = 0U;
	uint64_t t52 = 4325999LLU;

	t52 = ((x4001^(x4002<x4003))<<x4004);

	if (t52 != 13635455LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4017 = 9015LLU;
	volatile uint8_t x4018 = 3U;
	uint32_t x4019 = UINT32_MAX;
	static uint8_t x4020 = 14U;
	uint64_t t53 = 5347650758699LLU;

	t53 = ((x4017^(x4018<x4019))<<x4020);

	if (t53 != 147685376LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x4149 = UINT32_MAX;
	int64_t x4150 = -1LL;
	uint8_t x4151 = 1U;
	uint8_t x4152 = 18U;
	volatile uint32_t t54 = 1539U;

	t54 = ((x4149^(x4150<x4151))<<x4152);

	if (t54 != 4294443008U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x4181 = 6U;
	int64_t x4182 = INT64_MAX;
	volatile int32_t t55 = 10970;

	t55 = ((x4181^(x4182<x4183))<<x4184);

	if (t55 != 49152) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x4241 = INT16_MAX;
	volatile uint32_t x4243 = 15924U;
	int8_t x4244 = 1;
	int32_t t56 = -19;

	t56 = ((x4241^(x4242<x4243))<<x4244);

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4278 = INT16_MAX;
	static uint32_t x4279 = UINT32_MAX;
	volatile int32_t t57 = 1071476;

	t57 = ((x4277^(x4278<x4279))<<x4280);

	if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x4381 = 347U;
	int16_t x4382 = -3;
	uint32_t x4384 = 18U;
	volatile uint32_t t58 = 1142324326U;

	t58 = ((x4381^(x4382<x4383))<<x4384);

	if (t58 != 90963968U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4446 = INT16_MIN;
	static int8_t x4447 = -1;
	int32_t t59 = -6490;

	t59 = ((x4445^(x4446<x4447))<<x4448);

	if (t59 != 242745344) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4533 = 5728254167210LLU;
	uint16_t x4534 = 6U;
	static uint32_t x4535 = UINT32_MAX;
	volatile uint64_t x4536 = 0LLU;
	static volatile uint64_t t60 = 14760815556205LLU;

	t60 = ((x4533^(x4534<x4535))<<x4536);

	if (t60 != 5728254167211LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4583 = INT8_MIN;
	int8_t x4584 = 16;
	uint64_t t61 = 3869702804185277320LLU;

	t61 = ((x4581^(x4582<x4583))<<x4584);

	if (t61 != 43768202120855552LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4601 = 4U;
	int8_t x4602 = INT8_MIN;
	volatile uint16_t x4604 = 23U;
	static int32_t t62 = 452490;

	t62 = ((x4601^(x4602<x4603))<<x4604);

	if (t62 != 41943040) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4713 = 23648U;
	volatile uint64_t x4714 = 22124042LLU;
	int32_t x4716 = 2;
	volatile uint32_t t63 = 40300U;

	t63 = ((x4713^(x4714<x4715))<<x4716);

	if (t63 != 94596U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4829 = 30799U;
	volatile int16_t x4831 = INT16_MIN;
	volatile int32_t t64 = -2023891;

	t64 = ((x4829^(x4830<x4831))<<x4832);

	if (t64 != 61596) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4897 = 29;
	volatile uint8_t x4899 = UINT8_MAX;
	volatile uint8_t x4900 = 17U;
	volatile int32_t t65 = 124825;

	t65 = ((x4897^(x4898<x4899))<<x4900);

	if (t65 != 3670016) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4929 = 642046608U;
	volatile int32_t x4930 = 45;
	uint16_t x4931 = 0U;
	uint32_t x4932 = 0U;
	volatile uint32_t t66 = 188232U;

	t66 = ((x4929^(x4930<x4931))<<x4932);

	if (t66 != 642046608U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x4937 = UINT64_MAX;
	int16_t x4938 = INT16_MIN;
	volatile uint32_t x4939 = UINT32_MAX;
	uint64_t t67 = 6384127151LLU;

	t67 = ((x4937^(x4938<x4939))<<x4940);

	if (t67 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x5001 = 1U;
	uint32_t x5002 = 261U;
	int64_t x5003 = INT64_MIN;
	volatile int32_t t68 = -4;

	t68 = ((x5001^(x5002<x5003))<<x5004);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5025 = INT8_MAX;
	uint16_t x5026 = UINT16_MAX;
	uint32_t x5027 = 61U;
	int8_t x5028 = 15;
	int32_t t69 = 3030;

	t69 = ((x5025^(x5026<x5027))<<x5028);

	if (t69 != 4161536) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5054 = -1;
	uint32_t x5055 = 1724U;
	uint8_t x5056 = 2U;
	int32_t t70 = 51743;

	t70 = ((x5053^(x5054<x5055))<<x5056);

	if (t70 != 21740) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5065 = 7U;
	volatile int64_t x5066 = -2280LL;
	uint16_t x5067 = 1U;
	uint8_t x5068 = 3U;

	t71 = ((x5065^(x5066<x5067))<<x5068);

	if (t71 != 48) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x5117 = 26698U;
	int32_t x5118 = INT32_MIN;
	uint8_t x5119 = 3U;
	static uint32_t x5120 = 13U;
	volatile int32_t t72 = -7042458;

	t72 = ((x5117^(x5118<x5119))<<x5120);

	if (t72 != 218718208) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x5133 = UINT32_MAX;
	int32_t x5134 = INT32_MAX;
	int32_t x5135 = 12154833;
	uint32_t t73 = 4U;

	t73 = ((x5133^(x5134<x5135))<<x5136);

	if (t73 != 4294950912U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x5205 = 3U;
	uint8_t x5206 = 49U;
	volatile int64_t x5207 = -9768597LL;

	t74 = ((x5205^(x5206<x5207))<<x5208);

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5265 = 344565U;
	volatile int32_t x5267 = -1;
	static uint32_t t75 = 27835627U;

	t75 = ((x5265^(x5266<x5267))<<x5268);

	if (t75 != 344564U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x5275 = INT8_MAX;
	static uint8_t x5276 = 21U;
	uint64_t t76 = 209LLU;

	t76 = ((x5273^(x5274<x5275))<<x5276);

	if (t76 != 636401928372224LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5317 = 49509111013LL;
	int8_t x5318 = -1;
	int8_t x5319 = -21;
	uint8_t x5320 = 14U;
	volatile int64_t t77 = -370LL;

	t77 = ((x5317^(x5318<x5319))<<x5320);

	if (t77 != 811157274836992LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5385 = INT64_MAX;
	int16_t x5386 = INT16_MAX;
	static volatile int16_t x5387 = INT16_MIN;
	static int8_t x5388 = 0;
	int64_t t78 = INT64_MAX;

	t78 = ((x5385^(x5386<x5387))<<x5388);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5393 = UINT32_MAX;
	volatile int64_t x5394 = 307170023885LL;
	volatile int16_t x5395 = INT16_MIN;
	uint8_t x5396 = 2U;
	uint32_t t79 = 78348338U;

	t79 = ((x5393^(x5394<x5395))<<x5396);

	if (t79 != 4294967292U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5397 = 13U;
	int8_t x5398 = -1;
	static volatile int64_t x5399 = -7929770LL;
	int8_t x5400 = 1;
	static volatile int32_t t80 = 3340307;

	t80 = ((x5397^(x5398<x5399))<<x5400);

	if (t80 != 26) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5557 = INT16_MAX;
	int16_t x5558 = INT16_MIN;
	uint32_t x5559 = 1U;
	volatile int32_t t81 = 120;

	t81 = ((x5557^(x5558<x5559))<<x5560);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x5633 = 2466U;
	int64_t x5634 = INT64_MAX;
	static int16_t x5635 = 9285;
	volatile int32_t x5636 = 1;

	t82 = ((x5633^(x5634<x5635))<<x5636);

	if (t82 != 4932) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x5658 = INT64_MAX;
	volatile int64_t x5659 = -18472725LL;
	uint16_t x5660 = 7U;
	int32_t t83 = -4716;

	t83 = ((x5657^(x5658<x5659))<<x5660);

	if (t83 != 1936128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5673 = UINT64_MAX;
	int16_t x5674 = -32;
	static int8_t x5675 = INT8_MAX;
	volatile int8_t x5676 = 14;
	volatile uint64_t t84 = 1714565316422LLU;

	t84 = ((x5673^(x5674<x5675))<<x5676);

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5787 = INT16_MIN;

	t85 = ((x5785^(x5786<x5787))<<x5788);

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5909 = 772567343;
	int32_t x5910 = -1;
	int32_t x5911 = 1;
	int8_t x5912 = 1;
	int32_t t86 = 119;

	t86 = ((x5909^(x5910<x5911))<<x5912);

	if (t86 != 1545134684) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5929 = 19880U;
	int32_t x5931 = -1;
	int16_t x5932 = 0;

	t87 = ((x5929^(x5930<x5931))<<x5932);

	if (t87 != 19880) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5993 = INT8_MAX;
	static volatile int32_t x5994 = INT32_MIN;
	uint16_t x5995 = 0U;
	volatile uint8_t x5996 = 1U;
	int32_t t88 = 27;

	t88 = ((x5993^(x5994<x5995))<<x5996);

	if (t88 != 252) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5997 = 125LLU;
	volatile int32_t x5999 = INT32_MAX;
	volatile uint8_t x6000 = 42U;
	uint64_t t89 = 4541031134LLU;

	t89 = ((x5997^(x5998<x5999))<<x6000);

	if (t89 != 545357767376896LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6029 = UINT32_MAX;
	int32_t x6030 = INT32_MAX;
	static volatile int64_t x6031 = -27LL;
	static uint32_t t90 = 3038U;

	t90 = ((x6029^(x6030<x6031))<<x6032);

	if (t90 != 4294967264U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x6061 = UINT8_MAX;
	int8_t x6062 = 0;
	static int16_t x6063 = INT16_MIN;
	uint64_t x6064 = 0LLU;
	int32_t t91 = -257617861;

	t91 = ((x6061^(x6062<x6063))<<x6064);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x6165 = 123255;
	uint8_t x6168 = 0U;
	static volatile int32_t t92 = -20;

	t92 = ((x6165^(x6166<x6167))<<x6168);

	if (t92 != 123255) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x6190 = INT64_MIN;
	static volatile uint64_t x6191 = 121198809039175LLU;
	int16_t x6192 = 6;

	t93 = ((x6189^(x6190<x6191))<<x6192);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6233 = 159U;
	uint32_t x6234 = 476206131U;
	uint8_t x6236 = 2U;

	t94 = ((x6233^(x6234<x6235))<<x6236);

	if (t94 != 636) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x6265 = INT16_MAX;
	static volatile int32_t x6267 = -1;
	uint8_t x6268 = 16U;
	volatile int32_t t95 = 494607178;

	t95 = ((x6265^(x6266<x6267))<<x6268);

	if (t95 != 2147352576) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x6373 = UINT8_MAX;
	uint64_t x6374 = 4619895LLU;
	static volatile int32_t t96 = 1695;

	t96 = ((x6373^(x6374<x6375))<<x6376);

	if (t96 != 130048) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6557 = UINT16_MAX;
	int32_t x6558 = INT32_MAX;
	uint8_t x6560 = 1U;

	t97 = ((x6557^(x6558<x6559))<<x6560);

	if (t97 != 131070) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x6629 = UINT32_MAX;
	uint64_t x6630 = UINT64_MAX;
	uint16_t x6631 = 1588U;
	static int16_t x6632 = 12;
	volatile uint32_t t98 = 2U;

	t98 = ((x6629^(x6630<x6631))<<x6632);

	if (t98 != 4294963200U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6665 = 2762U;
	int8_t x6666 = 0;
	int8_t x6667 = INT8_MAX;
	static uint8_t x6668 = 0U;

	t99 = ((x6665^(x6666<x6667))<<x6668);

	if (t99 != 2763U) { NG(); } else { ; }
	
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

