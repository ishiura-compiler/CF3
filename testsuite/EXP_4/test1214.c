#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x89 = INT8_MIN;
int32_t t3 = 87283995;
int16_t x175 = INT16_MIN;
static int32_t x506 = INT32_MIN;
int8_t x507 = INT8_MIN;
int32_t t11 = 60264557;
int16_t x737 = -1763;
volatile int64_t t13 = 62696822268LL;
uint32_t t15 = 1448691261U;
uint8_t x925 = UINT8_MAX;
uint32_t x1241 = 3115054U;
int16_t x1244 = -1;
volatile uint32_t x1453 = UINT32_MAX;
int32_t x1454 = INT32_MIN;
int16_t x1455 = INT16_MAX;
uint16_t x1474 = 71U;
int16_t x1484 = -1;
uint8_t x1794 = 1U;
int32_t x1909 = INT32_MAX;
uint32_t x1911 = 3U;
int32_t t27 = -230695028;
volatile int64_t t30 = -2LL;
uint64_t x2462 = 2617233LLU;
int32_t x2463 = -1;
uint64_t x2464 = UINT64_MAX;
int16_t x2505 = INT16_MIN;
int16_t x2506 = -1;
static uint64_t x2507 = UINT64_MAX;
int64_t x2725 = INT64_MIN;
int64_t t35 = -253659887572330116LL;
volatile int32_t t37 = -6422725;
uint8_t x2854 = UINT8_MAX;
int16_t x3415 = -1;
static uint64_t x3497 = UINT64_MAX;
int8_t x3499 = INT8_MIN;
uint64_t x3549 = 533766056581609616LLU;
int32_t x3550 = INT32_MIN;
int16_t x3572 = -1;
int16_t x3582 = -474;
static uint8_t x3585 = 15U;
uint32_t x3696 = UINT32_MAX;
static volatile int16_t x3715 = -1;
int8_t x3773 = -1;
int64_t t54 = INT64_MAX;
int16_t x3866 = INT16_MAX;
int64_t t55 = 640877577LL;
int8_t x3902 = INT8_MIN;
volatile int64_t x3904 = 0LL;
int32_t t56 = -28034702;
int8_t x4061 = INT8_MIN;
int64_t x4161 = -1LL;
volatile int8_t x4248 = -1;
static int8_t x4410 = 18;
int16_t x4411 = -1;
int8_t x4419 = INT8_MIN;
int32_t x4477 = 17033;
int64_t x4478 = INT64_MIN;
uint64_t x4549 = 19LLU;
int16_t x4645 = INT16_MIN;
int16_t x4648 = INT16_MIN;
int64_t x4662 = INT64_MIN;
int8_t x4663 = INT8_MIN;
volatile int8_t x4664 = INT8_MIN;
static int16_t x4687 = INT16_MIN;
int64_t x4772 = INT64_MIN;
static volatile int16_t x4863 = -1;
int64_t x5148 = -1LL;
static uint8_t x5337 = 1U;
static uint64_t x5353 = UINT64_MAX;
volatile int64_t x5355 = INT64_MIN;
int8_t x5471 = -1;
uint64_t x5472 = UINT64_MAX;
volatile int32_t t77 = -148;
volatile int64_t x5623 = -1LL;
static volatile int32_t t78 = 129892;
static uint64_t x5737 = UINT64_MAX;
uint64_t t81 = 140LLU;
uint64_t x5810 = 13404084LLU;
int8_t x5842 = INT8_MAX;
uint64_t x6213 = 1978466545645246868LLU;
int32_t x6216 = INT32_MIN;
int64_t x6275 = INT64_MIN;
volatile uint64_t x6321 = 13678257447065384LLU;
uint32_t x6323 = UINT32_MAX;
int32_t t91 = 0;
volatile int32_t t93 = 636;
uint64_t x6881 = UINT64_MAX;
uint32_t x6909 = UINT32_MAX;
int32_t x7066 = -1;
static volatile int32_t t98 = -115;
static uint8_t x7278 = UINT8_MAX;


void f0(void) {
	int8_t x25 = -34;
	uint8_t x26 = 2U;
	volatile uint64_t x27 = UINT64_MAX;
	int16_t x28 = -1;
	static volatile int32_t t0 = 1042;

	t0 = (x25%(x26*(x27==x28)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x90 = 14290U;
	volatile int8_t x91 = -1;
	uint64_t x92 = UINT64_MAX;
	int32_t t1 = -1;

	t1 = (x89%(x90*(x91==x92)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x153 = 42177171278LLU;
	volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	uint8_t x156 = UINT8_MAX;
	uint64_t t2 = 1219098377740384559LLU;

	t2 = (x153%(x154*(x155==x156)));

	if (t2 != 42177171278LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x165 = INT16_MIN;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;

	t3 = (x165%(x166*(x167==x168)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x173 = 19U;
	volatile uint8_t x174 = 4U;
	int16_t x176 = INT16_MIN;
	volatile uint32_t t4 = 23942U;

	t4 = (x173%(x174*(x175==x176)));

	if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x189 = 199;
	int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MAX;
	static int32_t t5 = 120;

	t5 = (x189%(x190*(x191==x192)));

	if (t5 != 199) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x357 = 15U;
	static volatile int32_t x358 = -4955;
	int16_t x359 = -1;
	int32_t x360 = -1;
	volatile int32_t t6 = -17;

	t6 = (x357%(x358*(x359==x360)));

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x465 = INT16_MIN;
	static int16_t x466 = -1;
	int64_t x467 = -1LL;
	int64_t x468 = -1LL;
	volatile int32_t t7 = 8352;

	t7 = (x465%(x466*(x467==x468)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x505 = INT64_MAX;
	volatile int8_t x508 = INT8_MIN;
	int64_t t8 = 6197617548LL;

	t8 = (x505%(x506*(x507==x508)));

	if (t8 != 2147483647LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x525 = 1;
	volatile uint32_t x526 = 5255669U;
	int64_t x527 = -1LL;
	volatile int8_t x528 = -1;
	static uint32_t t9 = 4499U;

	t9 = (x525%(x526*(x527==x528)));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x729 = INT16_MAX;
	uint16_t x730 = UINT16_MAX;
	int32_t x731 = INT32_MIN;
	static int32_t x732 = INT32_MIN;
	volatile int32_t t10 = 236199;

	t10 = (x729%(x730*(x731==x732)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x733 = INT32_MIN;
	int16_t x734 = INT16_MIN;
	static int8_t x735 = 1;
	uint8_t x736 = 1U;

	t11 = (x733%(x734*(x735==x736)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x738 = INT32_MIN;
	volatile int64_t x739 = INT64_MIN;
	volatile int64_t x740 = INT64_MIN;
	static volatile int32_t t12 = -6;

	t12 = (x737%(x738*(x739==x740)));

	if (t12 != -1763) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x809 = INT64_MIN;
	int32_t x810 = INT32_MAX;
	int32_t x811 = INT32_MAX;
	int32_t x812 = INT32_MAX;

	t13 = (x809%(x810*(x811==x812)));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x825 = INT64_MAX;
	uint64_t x826 = 5410795301LLU;
	uint32_t x827 = UINT32_MAX;
	volatile int32_t x828 = -1;
	volatile uint64_t t14 = 741LLU;

	t14 = (x825%(x826*(x827==x828)));

	if (t14 != 4478988814LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x905 = 132398U;
	uint8_t x906 = UINT8_MAX;
	int64_t x907 = -1LL;
	uint64_t x908 = UINT64_MAX;

	t15 = (x905%(x906*(x907==x908)));

	if (t15 != 53U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x926 = INT64_MAX;
	volatile uint64_t x927 = UINT64_MAX;
	int64_t x928 = -1LL;
	int64_t t16 = -12964208404605312LL;

	t16 = (x925%(x926*(x927==x928)));

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1242 = INT8_MIN;
	int32_t x1243 = -1;
	uint32_t t17 = 100U;

	t17 = (x1241%(x1242*(x1243==x1244)));

	if (t17 != 3115054U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1385 = INT8_MIN;
	uint32_t x1386 = 4085952U;
	volatile int8_t x1387 = -1;
	int32_t x1388 = -1;
	volatile uint32_t t18 = 0U;

	t18 = (x1385%(x1386*(x1387==x1388)));

	if (t18 != 631616U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1449 = INT8_MAX;
	static volatile int64_t x1450 = -1LL;
	volatile int16_t x1451 = INT16_MIN;
	static volatile int16_t x1452 = INT16_MIN;
	static volatile int64_t t19 = 71013771LL;

	t19 = (x1449%(x1450*(x1451==x1452)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1456 = INT16_MAX;
	volatile uint32_t t20 = 377563714U;

	t20 = (x1453%(x1454*(x1455==x1456)));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1473 = 209U;
	int32_t x1475 = -1;
	int16_t x1476 = -1;
	volatile int32_t t21 = -847557;

	t21 = (x1473%(x1474*(x1475==x1476)));

	if (t21 != 67) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1481 = 6260;
	int16_t x1482 = INT16_MAX;
	uint32_t x1483 = UINT32_MAX;
	int32_t t22 = -3;

	t22 = (x1481%(x1482*(x1483==x1484)));

	if (t22 != 6260) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1537 = INT8_MIN;
	int8_t x1538 = -25;
	int8_t x1539 = INT8_MIN;
	int8_t x1540 = INT8_MIN;
	volatile int32_t t23 = 127599;

	t23 = (x1537%(x1538*(x1539==x1540)));

	if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1545 = UINT16_MAX;
	volatile int8_t x1546 = -1;
	int16_t x1547 = -1;
	int16_t x1548 = -1;
	volatile int32_t t24 = -977059;

	t24 = (x1545%(x1546*(x1547==x1548)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1793 = 1064;
	uint32_t x1795 = UINT32_MAX;
	uint32_t x1796 = UINT32_MAX;
	volatile int32_t t25 = -38;

	t25 = (x1793%(x1794*(x1795==x1796)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1901 = INT8_MIN;
	int8_t x1902 = INT8_MIN;
	static uint32_t x1903 = UINT32_MAX;
	uint32_t x1904 = UINT32_MAX;
	int32_t t26 = -7847560;

	t26 = (x1901%(x1902*(x1903==x1904)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1910 = -1;
	volatile uint8_t x1912 = 3U;

	t27 = (x1909%(x1910*(x1911==x1912)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2193 = -1507323LL;
	int32_t x2194 = -219425747;
	static int32_t x2195 = -1;
	int64_t x2196 = -1LL;
	volatile int64_t t28 = 69LL;

	t28 = (x2193%(x2194*(x2195==x2196)));

	if (t28 != -1507323LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2285 = INT32_MAX;
	uint16_t x2286 = 7642U;
	volatile uint8_t x2287 = UINT8_MAX;
	uint8_t x2288 = UINT8_MAX;
	volatile int32_t t29 = 83;

	t29 = (x2285%(x2286*(x2287==x2288)));

	if (t29 != 5227) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x2365 = -1;
	volatile int64_t x2366 = -1LL;
	volatile uint16_t x2367 = UINT16_MAX;
	uint16_t x2368 = UINT16_MAX;

	t30 = (x2365%(x2366*(x2367==x2368)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x2429 = 31U;
	int64_t x2430 = -121LL;
	int32_t x2431 = -1;
	volatile int16_t x2432 = -1;
	int64_t t31 = -14065688620306471LL;

	t31 = (x2429%(x2430*(x2431==x2432)));

	if (t31 != 31LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2461 = 11071;
	static uint64_t t32 = 4704034LLU;

	t32 = (x2461%(x2462*(x2463==x2464)));

	if (t32 != 11071LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2481 = -1;
	volatile uint64_t x2482 = 88838LLU;
	volatile int16_t x2483 = -1;
	int16_t x2484 = -1;
	volatile uint64_t t33 = 159400834070525LLU;

	t33 = (x2481%(x2482*(x2483==x2484)));

	if (t33 != 84105LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2508 = -1;
	volatile int32_t t34 = 0;

	t34 = (x2505%(x2506*(x2507==x2508)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2726 = -1;
	int32_t x2727 = INT32_MIN;
	int32_t x2728 = INT32_MIN;

	t35 = (x2725%(x2726*(x2727==x2728)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2737 = 978;
	int64_t x2738 = INT64_MIN;
	static volatile int32_t x2739 = INT32_MIN;
	int32_t x2740 = INT32_MIN;
	volatile int64_t t36 = 15099591414LL;

	t36 = (x2737%(x2738*(x2739==x2740)));

	if (t36 != 978LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2773 = INT16_MAX;
	volatile int32_t x2774 = -157871;
	uint64_t x2775 = UINT64_MAX;
	static int64_t x2776 = -1LL;

	t37 = (x2773%(x2774*(x2775==x2776)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2853 = -1;
	int8_t x2855 = -1;
	int8_t x2856 = -1;
	int32_t t38 = -27;

	t38 = (x2853%(x2854*(x2855==x2856)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3173 = -1LL;
	int32_t x3174 = 84;
	int16_t x3175 = -1;
	int64_t x3176 = -1LL;
	int64_t t39 = -129LL;

	t39 = (x3173%(x3174*(x3175==x3176)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3277 = 2175300963258LLU;
	uint8_t x3278 = 2U;
	static int32_t x3279 = -1;
	int32_t x3280 = -1;
	static volatile uint64_t t40 = 119707LLU;

	t40 = (x3277%(x3278*(x3279==x3280)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x3297 = INT32_MIN;
	int32_t x3298 = -1;
	static uint64_t x3299 = UINT64_MAX;
	volatile int8_t x3300 = -1;
	int32_t t41 = -6;

	t41 = (x3297%(x3298*(x3299==x3300)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3413 = INT64_MIN;
	uint16_t x3414 = 1U;
	int8_t x3416 = -1;
	volatile int64_t t42 = 4LL;

	t42 = (x3413%(x3414*(x3415==x3416)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3498 = INT32_MAX;
	int8_t x3500 = INT8_MIN;
	uint64_t t43 = 324001756612615LLU;

	t43 = (x3497%(x3498*(x3499==x3500)));

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x3537 = 0U;
	volatile uint32_t x3538 = UINT32_MAX;
	volatile int16_t x3539 = INT16_MIN;
	int16_t x3540 = INT16_MIN;
	volatile uint32_t t44 = 7U;

	t44 = (x3537%(x3538*(x3539==x3540)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3551 = 1U;
	volatile uint8_t x3552 = 1U;
	uint64_t t45 = 22895316853126LLU;

	t45 = (x3549%(x3550*(x3551==x3552)));

	if (t45 != 533766056581609616LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3553 = -1;
	uint16_t x3554 = 32405U;
	int32_t x3555 = -1;
	int64_t x3556 = -1LL;
	int32_t t46 = -3;

	t46 = (x3553%(x3554*(x3555==x3556)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3569 = UINT64_MAX;
	int32_t x3570 = -1;
	int32_t x3571 = -1;
	static uint64_t t47 = 20887894694LLU;

	t47 = (x3569%(x3570*(x3571==x3572)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x3581 = INT8_MIN;
	static int16_t x3583 = 1;
	uint16_t x3584 = 1U;
	int32_t t48 = -19;

	t48 = (x3581%(x3582*(x3583==x3584)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3586 = 12;
	int8_t x3587 = INT8_MIN;
	int8_t x3588 = INT8_MIN;
	static volatile int32_t t49 = -8;

	t49 = (x3585%(x3586*(x3587==x3588)));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x3693 = INT64_MIN;
	static uint16_t x3694 = 1U;
	volatile int16_t x3695 = -1;
	int64_t t50 = 4292467780679695LL;

	t50 = (x3693%(x3694*(x3695==x3696)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3713 = UINT64_MAX;
	static uint32_t x3714 = 4164752U;
	int8_t x3716 = -1;
	uint64_t t51 = 3973LLU;

	t51 = (x3713%(x3714*(x3715==x3716)));

	if (t51 != 1256223LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3757 = -205062;
	int16_t x3758 = INT16_MAX;
	int64_t x3759 = -1LL;
	int64_t x3760 = -1LL;
	volatile int32_t t52 = 0;

	t52 = (x3757%(x3758*(x3759==x3760)));

	if (t52 != -8460) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3774 = -1;
	uint16_t x3775 = UINT16_MAX;
	volatile uint16_t x3776 = UINT16_MAX;
	volatile int32_t t53 = 20750;

	t53 = (x3773%(x3774*(x3775==x3776)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x3809 = INT64_MAX;
	static volatile int64_t x3810 = INT64_MIN;
	int32_t x3811 = -1;
	int32_t x3812 = -1;

	t54 = (x3809%(x3810*(x3811==x3812)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3865 = INT64_MIN;
	int32_t x3867 = -1;
	int32_t x3868 = -1;

	t55 = (x3865%(x3866*(x3867==x3868)));

	if (t55 != -8LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x3901 = INT8_MAX;
	int8_t x3903 = 0;

	t56 = (x3901%(x3902*(x3903==x3904)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4062 = INT8_MIN;
	int32_t x4063 = -1;
	int64_t x4064 = -1LL;
	static int32_t t57 = 0;

	t57 = (x4061%(x4062*(x4063==x4064)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x4121 = INT16_MAX;
	int64_t x4122 = -44935LL;
	static int8_t x4123 = INT8_MIN;
	int8_t x4124 = INT8_MIN;
	volatile int64_t t58 = 500LL;

	t58 = (x4121%(x4122*(x4123==x4124)));

	if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x4162 = -18;
	int8_t x4163 = INT8_MIN;
	static int8_t x4164 = INT8_MIN;
	volatile int64_t t59 = 95822817431LL;

	t59 = (x4161%(x4162*(x4163==x4164)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4245 = 0LLU;
	uint64_t x4246 = 4169953LLU;
	int64_t x4247 = -1LL;
	uint64_t t60 = 8225530066011LLU;

	t60 = (x4245%(x4246*(x4247==x4248)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x4257 = UINT64_MAX;
	static uint32_t x4258 = 561706310U;
	uint64_t x4259 = UINT64_MAX;
	int16_t x4260 = -1;
	volatile uint64_t t61 = 1LLU;

	t61 = (x4257%(x4258*(x4259==x4260)));

	if (t61 != 218410735LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4409 = 4LL;
	int64_t x4412 = -1LL;
	volatile int64_t t62 = 63873465754762008LL;

	t62 = (x4409%(x4410*(x4411==x4412)));

	if (t62 != 4LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x4417 = INT16_MAX;
	int16_t x4418 = INT16_MIN;
	volatile int8_t x4420 = INT8_MIN;
	static int32_t t63 = -64;

	t63 = (x4417%(x4418*(x4419==x4420)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4479 = -1;
	volatile int32_t x4480 = -1;
	int64_t t64 = 25LL;

	t64 = (x4477%(x4478*(x4479==x4480)));

	if (t64 != 17033LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4550 = -1;
	static int8_t x4551 = -1;
	int8_t x4552 = -1;
	static uint64_t t65 = 22LLU;

	t65 = (x4549%(x4550*(x4551==x4552)));

	if (t65 != 19LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4646 = 4U;
	int16_t x4647 = INT16_MIN;
	int32_t t66 = -2;

	t66 = (x4645%(x4646*(x4647==x4648)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x4661 = INT16_MAX;
	volatile int64_t t67 = 132819905796175472LL;

	t67 = (x4661%(x4662*(x4663==x4664)));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4685 = INT8_MIN;
	int32_t x4686 = INT32_MAX;
	volatile int16_t x4688 = INT16_MIN;
	int32_t t68 = -4041;

	t68 = (x4685%(x4686*(x4687==x4688)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4721 = INT8_MAX;
	uint64_t x4722 = UINT64_MAX;
	volatile int64_t x4723 = INT64_MIN;
	int64_t x4724 = INT64_MIN;
	uint64_t t69 = 6921194108921LLU;

	t69 = (x4721%(x4722*(x4723==x4724)));

	if (t69 != 127LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4769 = -661;
	int64_t x4770 = 127509883137LL;
	int64_t x4771 = INT64_MIN;
	volatile int64_t t70 = 0LL;

	t70 = (x4769%(x4770*(x4771==x4772)));

	if (t70 != -661LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4861 = 0;
	static uint16_t x4862 = 69U;
	int16_t x4864 = -1;
	volatile int32_t t71 = -31;

	t71 = (x4861%(x4862*(x4863==x4864)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5093 = INT16_MAX;
	static uint16_t x5094 = UINT16_MAX;
	int32_t x5095 = INT32_MIN;
	static int32_t x5096 = INT32_MIN;
	volatile int32_t t72 = -43848973;

	t72 = (x5093%(x5094*(x5095==x5096)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5145 = 3041062751642182065LL;
	static uint16_t x5146 = UINT16_MAX;
	volatile int8_t x5147 = -1;
	int64_t t73 = 4060LL;

	t73 = (x5145%(x5146*(x5147==x5148)));

	if (t73 != 60840LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5338 = -1;
	int32_t x5339 = -1;
	int16_t x5340 = -1;
	static int32_t t74 = 358123648;

	t74 = (x5337%(x5338*(x5339==x5340)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5354 = -1LL;
	int64_t x5356 = INT64_MIN;
	static uint64_t t75 = 371LLU;

	t75 = (x5353%(x5354*(x5355==x5356)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x5469 = INT64_MIN;
	volatile int64_t x5470 = INT64_MAX;
	static volatile int64_t t76 = 2514794843LL;

	t76 = (x5469%(x5470*(x5471==x5472)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5509 = INT32_MIN;
	volatile uint16_t x5510 = 251U;
	volatile int16_t x5511 = INT16_MAX;
	int16_t x5512 = INT16_MAX;

	t77 = (x5509%(x5510*(x5511==x5512)));

	if (t77 != -187) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5621 = -1;
	uint8_t x5622 = 3U;
	uint64_t x5624 = UINT64_MAX;

	t78 = (x5621%(x5622*(x5623==x5624)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5689 = INT16_MIN;
	volatile uint64_t x5690 = 3926617656321255LLU;
	volatile uint64_t x5691 = UINT64_MAX;
	int64_t x5692 = -1LL;
	volatile uint64_t t79 = 30931LLU;

	t79 = (x5689%(x5690*(x5691==x5692)));

	if (t79 != 3420941968584113LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5693 = INT32_MIN;
	static int32_t x5694 = 4409;
	uint64_t x5695 = UINT64_MAX;
	static int16_t x5696 = -1;
	int32_t t80 = 44994813;

	t80 = (x5693%(x5694*(x5695==x5696)));

	if (t80 != -836) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x5738 = INT16_MIN;
	static volatile int32_t x5739 = INT32_MIN;
	int32_t x5740 = INT32_MIN;

	t81 = (x5737%(x5738*(x5739==x5740)));

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x5809 = INT8_MIN;
	int16_t x5811 = INT16_MIN;
	int16_t x5812 = INT16_MIN;
	uint64_t t82 = 128095213169759078LLU;

	t82 = (x5809%(x5810*(x5811==x5812)));

	if (t82 != 4548452LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5841 = -1113274763475LL;
	static uint8_t x5843 = UINT8_MAX;
	uint8_t x5844 = UINT8_MAX;
	volatile int64_t t83 = 14519609776267841LL;

	t83 = (x5841%(x5842*(x5843==x5844)));

	if (t83 != -62LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x5865 = -1LL;
	static uint32_t x5866 = 1171U;
	uint32_t x5867 = UINT32_MAX;
	static int8_t x5868 = -1;
	volatile int64_t t84 = -642046453LL;

	t84 = (x5865%(x5866*(x5867==x5868)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6121 = 0U;
	volatile int8_t x6122 = INT8_MIN;
	volatile uint16_t x6123 = 28U;
	uint64_t x6124 = 28LLU;
	static volatile uint32_t t85 = 43211819U;

	t85 = (x6121%(x6122*(x6123==x6124)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x6214 = INT64_MIN;
	int32_t x6215 = INT32_MIN;
	volatile uint64_t t86 = 9848406LLU;

	t86 = (x6213%(x6214*(x6215==x6216)));

	if (t86 != 1978466545645246868LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x6241 = -36;
	int8_t x6242 = INT8_MIN;
	static uint32_t x6243 = UINT32_MAX;
	volatile uint32_t x6244 = UINT32_MAX;
	int32_t t87 = -156766;

	t87 = (x6241%(x6242*(x6243==x6244)));

	if (t87 != -36) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x6273 = 11U;
	volatile int64_t x6274 = INT64_MIN;
	int64_t x6276 = INT64_MIN;
	volatile int64_t t88 = 208LL;

	t88 = (x6273%(x6274*(x6275==x6276)));

	if (t88 != 11LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6322 = UINT8_MAX;
	uint32_t x6324 = UINT32_MAX;
	volatile uint64_t t89 = 2107271688257307LLU;

	t89 = (x6321%(x6322*(x6323==x6324)));

	if (t89 != 89LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x6525 = INT32_MIN;
	int8_t x6526 = -1;
	static int8_t x6527 = -1;
	static uint32_t x6528 = UINT32_MAX;
	int32_t t90 = 89427;

	t90 = (x6525%(x6526*(x6527==x6528)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6621 = INT32_MIN;
	uint8_t x6622 = 90U;
	volatile uint32_t x6623 = UINT32_MAX;
	int8_t x6624 = -1;

	t91 = (x6621%(x6622*(x6623==x6624)));

	if (t91 != -38) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6637 = -1;
	static uint64_t x6638 = 8839796303708882LLU;
	int16_t x6639 = INT16_MIN;
	int16_t x6640 = INT16_MIN;
	uint64_t t92 = 15116733417009084LLU;

	t92 = (x6637%(x6638*(x6639==x6640)));

	if (t92 != 6928984172823763LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6765 = UINT8_MAX;
	int8_t x6766 = INT8_MAX;
	static int16_t x6767 = -1;
	int16_t x6768 = -1;

	t93 = (x6765%(x6766*(x6767==x6768)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6773 = INT64_MIN;
	int32_t x6774 = -2;
	uint32_t x6775 = UINT32_MAX;
	int16_t x6776 = -1;
	static volatile int64_t t94 = 1040367234350LL;

	t94 = (x6773%(x6774*(x6775==x6776)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6882 = UINT8_MAX;
	static uint64_t x6883 = UINT64_MAX;
	int64_t x6884 = -1LL;
	uint64_t t95 = 515072315LLU;

	t95 = (x6881%(x6882*(x6883==x6884)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x6910 = 2U;
	volatile uint32_t x6911 = UINT32_MAX;
	static int16_t x6912 = -1;
	volatile uint32_t t96 = 3363U;

	t96 = (x6909%(x6910*(x6911==x6912)));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x7065 = -4;
	int16_t x7067 = INT16_MIN;
	static int16_t x7068 = INT16_MIN;
	volatile int32_t t97 = 49617380;

	t97 = (x7065%(x7066*(x7067==x7068)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7101 = INT32_MIN;
	volatile uint8_t x7102 = 1U;
	static volatile int64_t x7103 = INT64_MAX;
	int64_t x7104 = INT64_MAX;

	t98 = (x7101%(x7102*(x7103==x7104)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x7277 = -1;
	int16_t x7279 = -1;
	int32_t x7280 = -1;
	volatile int32_t t99 = 1;

	t99 = (x7277%(x7278*(x7279==x7280)));

	if (t99 != -1) { NG(); } else { ; }
	
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

