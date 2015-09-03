#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = 1;
static int8_t x3 = INT8_MAX;
volatile int32_t t0 = 1082;
volatile int32_t t3 = 3038;
uint16_t x131 = 21112U;
uint16_t x132 = UINT16_MAX;
int16_t x156 = INT16_MIN;
uint8_t x294 = 0U;
uint16_t x295 = 5U;
int64_t x296 = INT64_MIN;
int8_t x307 = 0;
static uint16_t x339 = 3U;
uint8_t x430 = 0U;
uint8_t x470 = 52U;
uint32_t x519 = UINT32_MAX;
int32_t t11 = 2311;
int64_t x548 = 129974876574LL;
static int64_t x571 = INT64_MAX;
int64_t x696 = INT64_MAX;
static volatile int32_t t17 = -12726;
uint32_t x839 = UINT32_MAX;
volatile uint64_t x901 = UINT64_MAX;
static int32_t t20 = -580794515;
int32_t t23 = 195986448;
int32_t x1151 = 24800;
int8_t x1297 = 1;
uint8_t x1298 = 2U;
static uint32_t x1562 = 15U;
static int32_t t29 = 1;
uint64_t x1601 = 240657162LLU;
uint16_t x1962 = 2U;
int32_t x1963 = INT32_MIN;
int8_t x1964 = INT8_MIN;
int32_t x2019 = -1;
uint16_t x2377 = UINT16_MAX;
uint16_t x2379 = UINT16_MAX;
int8_t x2425 = 10;
static int64_t x2427 = INT64_MIN;
static uint16_t x2606 = 12U;
static uint64_t x2694 = 8LLU;
volatile int16_t x2695 = 1;
static int16_t x2781 = INT16_MAX;
int32_t x2783 = INT32_MIN;
uint64_t x2784 = UINT64_MAX;
static int32_t x3037 = 29619216;
int8_t x3038 = 1;
volatile int32_t t43 = -6934986;
uint8_t x3078 = 2U;
uint8_t x3133 = 10U;
uint8_t x3136 = 3U;
int32_t t45 = -10159116;
volatile int32_t x3159 = INT32_MAX;
volatile int32_t t47 = 64769;
volatile int32_t t48 = -882;
static int16_t x3194 = 1;
int64_t x3291 = 0LL;
static int32_t x3373 = 2781216;
int64_t x3376 = 113358LL;
volatile uint64_t x3483 = 6738321619279830058LLU;
volatile int32_t t54 = -9181;
static int32_t t55 = 100397288;
volatile int8_t x3550 = 4;
int64_t x3576 = INT64_MIN;
int32_t t59 = -901216;
int16_t x3808 = INT16_MAX;
static int8_t x3938 = 14;
int32_t t63 = 472;
volatile int32_t t65 = 1965234;
volatile int32_t t66 = 5464;
uint8_t x4102 = 16U;
uint16_t x4103 = 1088U;
int32_t x4399 = INT32_MIN;
int8_t x4430 = 25;
int32_t t69 = -235804;
uint32_t x4523 = 159539U;
volatile uint16_t x4537 = 5928U;
uint16_t x4538 = 11U;
int64_t x4540 = INT64_MAX;
volatile int32_t t71 = -21894;
int64_t x4548 = INT64_MIN;
static volatile int32_t t72 = 12556;
int32_t x4687 = INT32_MIN;
uint64_t x4688 = 82759226340LLU;


void f0(void) {
	static int16_t x1 = 91;
	static uint16_t x4 = UINT16_MAX;

	t0 = (((x1<<x2)|x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x69 = 0;
	volatile uint8_t x70 = 1U;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = INT16_MIN;
	int32_t t1 = 11562;

	t1 = (((x69<<x70)|x71)<=x72);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x77 = 1584116U;
	uint32_t x78 = 7U;
	static int16_t x79 = -1;
	int32_t x80 = 194;
	volatile int32_t t2 = -27732355;

	t2 = (((x77<<x78)|x79)<=x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x125 = 95214825LLU;
	uint8_t x126 = 0U;
	static volatile int8_t x127 = -1;
	volatile int32_t x128 = -1;

	t3 = (((x125<<x126)|x127)<=x128);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x129 = INT16_MAX;
	static int8_t x130 = 0;
	volatile int32_t t4 = -119;

	t4 = (((x129<<x130)|x131)<=x132);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x153 = 1U;
	int8_t x154 = 15;
	int64_t x155 = -1LL;
	static volatile int32_t t5 = -126269155;

	t5 = (((x153<<x154)|x155)<=x156);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x293 = UINT8_MAX;
	int32_t t6 = -1148180;

	t6 = (((x293<<x294)|x295)<=x296);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x305 = 10909366U;
	int32_t x306 = 0;
	uint16_t x308 = 12562U;
	int32_t t7 = 5226089;

	t7 = (((x305<<x306)|x307)<=x308);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x337 = 4141989U;
	volatile uint16_t x338 = 5U;
	uint16_t x340 = 12898U;
	int32_t t8 = -162449;

	t8 = (((x337<<x338)|x339)<=x340);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x429 = INT16_MAX;
	volatile int8_t x431 = -21;
	volatile uint32_t x432 = 8621363U;
	int32_t t9 = 277;

	t9 = (((x429<<x430)|x431)<=x432);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x469 = 0LL;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = 2262U;
	static volatile int32_t t10 = 1;

	t10 = (((x469<<x470)|x471)<=x472);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x517 = INT8_MAX;
	uint8_t x518 = 1U;
	static int16_t x520 = -449;

	t11 = (((x517<<x518)|x519)<=x520);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x525 = 2675U;
	uint16_t x526 = 2U;
	volatile uint64_t x527 = 125068242857LLU;
	volatile int8_t x528 = 37;
	volatile int32_t t12 = -8293928;

	t12 = (((x525<<x526)|x527)<=x528);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x541 = 58U;
	volatile uint8_t x542 = 19U;
	static volatile uint8_t x543 = 94U;
	static int64_t x544 = -38503LL;
	static volatile int32_t t13 = -95;

	t13 = (((x541<<x542)|x543)<=x544);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x545 = 7762217526910616LLU;
	volatile uint32_t x546 = 15U;
	static volatile int64_t x547 = INT64_MIN;
	int32_t t14 = 143806;

	t14 = (((x545<<x546)|x547)<=x548);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x569 = 848;
	int8_t x570 = 15;
	int32_t x572 = INT32_MIN;
	int32_t t15 = 0;

	t15 = (((x569<<x570)|x571)<=x572);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x577 = UINT64_MAX;
	static int16_t x578 = 1;
	volatile int8_t x579 = INT8_MIN;
	static int64_t x580 = -652529597051LL;
	int32_t t16 = 1052251;

	t16 = (((x577<<x578)|x579)<=x580);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x693 = INT32_MAX;
	volatile uint32_t x694 = 0U;
	int64_t x695 = INT64_MIN;

	t17 = (((x693<<x694)|x695)<=x696);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x837 = 6;
	int16_t x838 = 17;
	static uint32_t x840 = UINT32_MAX;
	int32_t t18 = 78;

	t18 = (((x837<<x838)|x839)<=x840);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x902 = 24U;
	uint8_t x903 = UINT8_MAX;
	int64_t x904 = 234LL;
	volatile int32_t t19 = -808313796;

	t19 = (((x901<<x902)|x903)<=x904);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x913 = 17285U;
	volatile uint8_t x914 = 2U;
	uint16_t x915 = UINT16_MAX;
	int64_t x916 = INT64_MIN;

	t20 = (((x913<<x914)|x915)<=x916);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x989 = 7U;
	uint8_t x990 = 9U;
	int32_t x991 = INT32_MAX;
	uint32_t x992 = UINT32_MAX;
	int32_t t21 = -20569664;

	t21 = (((x989<<x990)|x991)<=x992);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1001 = UINT16_MAX;
	uint8_t x1002 = 1U;
	int32_t x1003 = INT32_MIN;
	static int64_t x1004 = -3399227708794524925LL;
	int32_t t22 = -326620309;

	t22 = (((x1001<<x1002)|x1003)<=x1004);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1005 = 0U;
	static uint32_t x1006 = 1U;
	static int8_t x1007 = 4;
	int64_t x1008 = INT64_MIN;

	t23 = (((x1005<<x1006)|x1007)<=x1008);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1149 = UINT8_MAX;
	uint32_t x1150 = 0U;
	static int64_t x1152 = -1LL;
	int32_t t24 = -203;

	t24 = (((x1149<<x1150)|x1151)<=x1152);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1299 = -68376;
	uint64_t x1300 = UINT64_MAX;
	int32_t t25 = -1510;

	t25 = (((x1297<<x1298)|x1299)<=x1300);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1313 = 4;
	uint8_t x1314 = 3U;
	static int64_t x1315 = -1LL;
	int16_t x1316 = INT16_MIN;
	int32_t t26 = 18;

	t26 = (((x1313<<x1314)|x1315)<=x1316);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1421 = 8;
	int8_t x1422 = 2;
	int8_t x1423 = INT8_MAX;
	int64_t x1424 = INT64_MIN;
	int32_t t27 = 9495;

	t27 = (((x1421<<x1422)|x1423)<=x1424);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1461 = UINT64_MAX;
	int8_t x1462 = 5;
	int32_t x1463 = INT32_MAX;
	int32_t x1464 = -50;
	int32_t t28 = 33423453;

	t28 = (((x1461<<x1462)|x1463)<=x1464);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1561 = INT8_MAX;
	uint64_t x1563 = UINT64_MAX;
	int8_t x1564 = 4;

	t29 = (((x1561<<x1562)|x1563)<=x1564);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1602 = 9;
	int16_t x1603 = 12;
	int32_t x1604 = -1;
	int32_t t30 = 77649680;

	t30 = (((x1601<<x1602)|x1603)<=x1604);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1961 = 6809U;
	int32_t t31 = -707;

	t31 = (((x1961<<x1962)|x1963)<=x1964);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2017 = 148U;
	volatile uint64_t x2018 = 0LLU;
	int8_t x2020 = INT8_MAX;
	int32_t t32 = 700913921;

	t32 = (((x2017<<x2018)|x2019)<=x2020);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2325 = 11507298939940LLU;
	uint16_t x2326 = 32U;
	int32_t x2327 = 8030;
	static int64_t x2328 = INT64_MIN;
	int32_t t33 = -1594;

	t33 = (((x2325<<x2326)|x2327)<=x2328);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2353 = 18163LLU;
	volatile uint8_t x2354 = 56U;
	volatile int8_t x2355 = -1;
	static int64_t x2356 = INT64_MIN;
	static int32_t t34 = -158134534;

	t34 = (((x2353<<x2354)|x2355)<=x2356);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2378 = 0;
	int32_t x2380 = INT32_MAX;
	static int32_t t35 = 19635;

	t35 = (((x2377<<x2378)|x2379)<=x2380);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2426 = 2;
	static int32_t x2428 = -1;
	volatile int32_t t36 = 450115189;

	t36 = (((x2425<<x2426)|x2427)<=x2428);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2605 = 10U;
	volatile uint8_t x2607 = UINT8_MAX;
	static volatile int16_t x2608 = INT16_MAX;
	volatile int32_t t37 = 605912856;

	t37 = (((x2605<<x2606)|x2607)<=x2608);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2693 = UINT64_MAX;
	uint32_t x2696 = UINT32_MAX;
	volatile int32_t t38 = 119;

	t38 = (((x2693<<x2694)|x2695)<=x2696);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x2782 = 2;
	volatile int32_t t39 = 10003;

	t39 = (((x2781<<x2782)|x2783)<=x2784);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2793 = 11;
	int16_t x2794 = 0;
	int8_t x2795 = INT8_MIN;
	uint8_t x2796 = 4U;
	int32_t t40 = -1679579;

	t40 = (((x2793<<x2794)|x2795)<=x2796);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2841 = 24U;
	int8_t x2842 = 12;
	int32_t x2843 = INT32_MIN;
	int16_t x2844 = INT16_MIN;
	int32_t t41 = -51617;

	t41 = (((x2841<<x2842)|x2843)<=x2844);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x3021 = 404093963104068066LLU;
	uint8_t x3022 = 9U;
	uint32_t x3023 = 840631U;
	int64_t x3024 = 32616801LL;
	int32_t t42 = -17053912;

	t42 = (((x3021<<x3022)|x3023)<=x3024);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3039 = INT8_MAX;
	volatile uint16_t x3040 = 1U;

	t43 = (((x3037<<x3038)|x3039)<=x3040);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3077 = 145679U;
	int16_t x3079 = INT16_MAX;
	uint8_t x3080 = 1U;
	volatile int32_t t44 = 29;

	t44 = (((x3077<<x3078)|x3079)<=x3080);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3134 = 22U;
	static int8_t x3135 = -1;

	t45 = (((x3133<<x3134)|x3135)<=x3136);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x3157 = 1U;
	uint16_t x3158 = 3U;
	int8_t x3160 = INT8_MIN;
	volatile int32_t t46 = 5222877;

	t46 = (((x3157<<x3158)|x3159)<=x3160);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3161 = 129434396986897LLU;
	volatile int8_t x3162 = 1;
	volatile uint8_t x3163 = 59U;
	int64_t x3164 = INT64_MIN;

	t47 = (((x3161<<x3162)|x3163)<=x3164);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x3165 = 1;
	volatile uint64_t x3166 = 0LLU;
	uint16_t x3167 = UINT16_MAX;
	int16_t x3168 = INT16_MAX;

	t48 = (((x3165<<x3166)|x3167)<=x3168);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3193 = 1434947219503LL;
	static int32_t x3195 = INT32_MIN;
	int8_t x3196 = INT8_MAX;
	static int32_t t49 = -208;

	t49 = (((x3193<<x3194)|x3195)<=x3196);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3289 = 2077172714U;
	uint16_t x3290 = 5U;
	int8_t x3292 = 7;
	int32_t t50 = -187083934;

	t50 = (((x3289<<x3290)|x3291)<=x3292);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3374 = 0;
	uint64_t x3375 = 2859665931046732LLU;
	volatile int32_t t51 = 121;

	t51 = (((x3373<<x3374)|x3375)<=x3376);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3417 = 7221U;
	int32_t x3418 = 1;
	int32_t x3419 = -1;
	volatile int8_t x3420 = -21;
	volatile int32_t t52 = -11974612;

	t52 = (((x3417<<x3418)|x3419)<=x3420);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3449 = 35526881693LLU;
	static uint8_t x3450 = 16U;
	volatile int64_t x3451 = -30144658392790LL;
	int32_t x3452 = INT32_MIN;
	volatile int32_t t53 = 1687469;

	t53 = (((x3449<<x3450)|x3451)<=x3452);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3481 = UINT64_MAX;
	volatile uint8_t x3482 = 3U;
	uint64_t x3484 = UINT64_MAX;

	t54 = (((x3481<<x3482)|x3483)<=x3484);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3497 = INT16_MAX;
	uint8_t x3498 = 3U;
	static int64_t x3499 = -1LL;
	int8_t x3500 = INT8_MIN;

	t55 = (((x3497<<x3498)|x3499)<=x3500);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3549 = 14528;
	int8_t x3551 = -1;
	uint16_t x3552 = 17329U;
	static int32_t t56 = 254;

	t56 = (((x3549<<x3550)|x3551)<=x3552);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3573 = 12U;
	uint8_t x3574 = 3U;
	uint64_t x3575 = 44000726578839025LLU;
	volatile int32_t t57 = -130318385;

	t57 = (((x3573<<x3574)|x3575)<=x3576);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3689 = UINT64_MAX;
	uint8_t x3690 = 3U;
	int16_t x3691 = INT16_MIN;
	uint64_t x3692 = 10942353590744LLU;
	int32_t t58 = -4601;

	t58 = (((x3689<<x3690)|x3691)<=x3692);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3785 = 7;
	static int8_t x3786 = 1;
	uint8_t x3787 = UINT8_MAX;
	volatile int8_t x3788 = INT8_MIN;

	t59 = (((x3785<<x3786)|x3787)<=x3788);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3805 = 409487773249611LLU;
	uint8_t x3806 = 16U;
	int16_t x3807 = INT16_MIN;
	volatile int32_t t60 = -3402672;

	t60 = (((x3805<<x3806)|x3807)<=x3808);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3821 = 1899LLU;
	int8_t x3822 = 26;
	int64_t x3823 = -475565LL;
	int8_t x3824 = 10;
	static volatile int32_t t61 = -8134437;

	t61 = (((x3821<<x3822)|x3823)<=x3824);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3841 = 1142364058061255LLU;
	int8_t x3842 = 1;
	static int16_t x3843 = -1;
	volatile uint16_t x3844 = 281U;
	static int32_t t62 = -1419116;

	t62 = (((x3841<<x3842)|x3843)<=x3844);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3937 = 14U;
	int16_t x3939 = INT16_MIN;
	uint16_t x3940 = 1672U;

	t63 = (((x3937<<x3938)|x3939)<=x3940);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3969 = 4U;
	int16_t x3970 = 0;
	int32_t x3971 = 1;
	uint8_t x3972 = UINT8_MAX;
	volatile int32_t t64 = 4;

	t64 = (((x3969<<x3970)|x3971)<=x3972);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4041 = 2537;
	volatile uint8_t x4042 = 11U;
	uint8_t x4043 = 31U;
	int16_t x4044 = INT16_MAX;

	t65 = (((x4041<<x4042)|x4043)<=x4044);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4053 = 1003U;
	uint32_t x4054 = 10U;
	volatile int16_t x4055 = INT16_MIN;
	static uint64_t x4056 = UINT64_MAX;

	t66 = (((x4053<<x4054)|x4055)<=x4056);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x4101 = 48U;
	int32_t x4104 = INT32_MAX;
	int32_t t67 = 1;

	t67 = (((x4101<<x4102)|x4103)<=x4104);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4397 = 0;
	static uint8_t x4398 = 1U;
	static uint64_t x4400 = 3606LLU;
	int32_t t68 = -417203;

	t68 = (((x4397<<x4398)|x4399)<=x4400);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4429 = 4;
	int32_t x4431 = 116132775;
	uint64_t x4432 = 1291179840943327LLU;

	t69 = (((x4429<<x4430)|x4431)<=x4432);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x4521 = UINT8_MAX;
	uint8_t x4522 = 2U;
	static volatile int64_t x4524 = -1LL;
	int32_t t70 = -53815900;

	t70 = (((x4521<<x4522)|x4523)<=x4524);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4539 = UINT8_MAX;

	t71 = (((x4537<<x4538)|x4539)<=x4540);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4545 = 1059271328867270960LLU;
	int32_t x4546 = 5;
	static int8_t x4547 = INT8_MIN;

	t72 = (((x4545<<x4546)|x4547)<=x4548);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4637 = 811614421076265LLU;
	uint16_t x4638 = 0U;
	static int32_t x4639 = -459418033;
	volatile int8_t x4640 = INT8_MIN;
	volatile int32_t t73 = 0;

	t73 = (((x4637<<x4638)|x4639)<=x4640);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4685 = 3U;
	static uint8_t x4686 = 22U;
	volatile int32_t t74 = 30;

	t74 = (((x4685<<x4686)|x4687)<=x4688);

	if (t74 != 1) { NG(); } else { ; }
	
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


    return 0;
}

