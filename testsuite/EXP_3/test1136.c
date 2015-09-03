#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x70 = INT8_MAX;
volatile int32_t x220 = 0;
int16_t x255 = 2;
static uint16_t x256 = 1U;
uint8_t x454 = UINT8_MAX;
int8_t x456 = 6;
static int16_t x475 = 497;
uint64_t x642 = 955LLU;
int8_t x643 = INT8_MAX;
static int32_t x893 = -1;
static int8_t x895 = 62;
uint8_t x966 = 25U;
volatile uint32_t x967 = UINT32_MAX;
uint8_t x1036 = 1U;
volatile int64_t x1134 = -1LL;
uint16_t x1138 = 151U;
int8_t x1243 = INT8_MAX;
static uint32_t x1402 = 14U;
int32_t t16 = 241;
volatile int32_t t17 = 955;
int32_t t18 = 152941;
int8_t x1444 = 1;
uint32_t x1473 = 46U;
int64_t x1475 = INT64_MAX;
int8_t x1476 = 0;
int16_t x1542 = INT16_MAX;
int8_t x1684 = 5;
volatile uint8_t x1832 = 11U;
int32_t t25 = -5463;
int64_t x1851 = INT64_MAX;
volatile uint64_t x2021 = 1173868053674347LLU;
static int8_t x2072 = 3;
uint32_t t28 = 21879U;
int16_t x2183 = INT16_MAX;
int32_t t30 = 670;
int32_t x2337 = -1;
uint64_t x2339 = UINT64_MAX;
static int16_t x2405 = -1;
int16_t x2406 = -1;
volatile uint32_t t32 = 15842085U;
volatile uint64_t t33 = 29313722LLU;
int8_t x2490 = -1;
volatile uint16_t x2491 = 8760U;
uint8_t x2520 = 2U;
volatile int32_t x2522 = INT32_MIN;
uint8_t x2698 = 0U;
static volatile uint64_t t38 = 402558565944LLU;
uint8_t x2723 = 7U;
uint8_t x2724 = 0U;
static int32_t t39 = 1935379;
static int8_t x2985 = -1;
uint16_t x3083 = UINT16_MAX;
int64_t t43 = 52LL;
int8_t x3299 = 10;
int8_t x3494 = INT8_MIN;
uint8_t x3495 = 85U;
uint8_t x3607 = UINT8_MAX;
static uint8_t x3608 = 1U;
int8_t x3614 = -4;
uint16_t x3615 = UINT16_MAX;
uint16_t x3661 = 29302U;
int32_t x3862 = INT32_MIN;
volatile uint64_t x3864 = 1LLU;
uint64_t t55 = 28312LLU;
uint32_t x3926 = 27440U;
int32_t t56 = 183;
static int64_t t58 = 59278306184876LL;
volatile uint64_t t59 = 134845091796605092LLU;
uint64_t x4363 = 1821431LLU;
static uint16_t x4461 = 92U;
int8_t x4636 = 7;
int16_t x4706 = INT16_MAX;
volatile int32_t t65 = 0;
volatile int32_t t67 = -14389;
static uint64_t x4841 = UINT64_MAX;
int16_t x4843 = 43;
static uint32_t x4927 = 27U;
uint32_t t69 = 101U;
int64_t x4966 = INT64_MIN;
int64_t t73 = 219017661206168816LL;
int64_t x5563 = INT64_MAX;
uint64_t x5709 = UINT64_MAX;
uint64_t x5776 = 2LLU;
uint16_t x6003 = UINT16_MAX;
uint64_t x6353 = UINT64_MAX;
int64_t x6354 = -8870748813359117LL;
static uint32_t x6355 = 349444U;
volatile int32_t x6409 = -17219370;
int32_t x6549 = 3562;
volatile int32_t t84 = 3;
uint8_t x6587 = 5U;
uint8_t x6588 = 2U;
int32_t t85 = -1;
uint32_t x6803 = 59282070U;
volatile uint32_t t86 = 1884U;
int64_t x6845 = INT64_MAX;
uint8_t x6900 = 3U;
int16_t x7010 = 3;
int32_t t89 = -105199545;
uint8_t x7080 = 2U;
uint32_t x7135 = UINT32_MAX;
int16_t x7286 = 1;
uint16_t x7621 = 1U;
uint8_t x7622 = 91U;
volatile uint8_t x7624 = 7U;
int16_t x7640 = 1;
int32_t t98 = -8012;
int16_t x7770 = INT16_MIN;
int8_t x7771 = 47;


void f0(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x71 = INT32_MAX;
	uint64_t x72 = 7LLU;
	static int32_t t0 = 6579;

	t0 = ((x69<=x70)%(x71>>x72));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	int8_t x99 = 47;
	uint8_t x100 = 2U;
	static int32_t t1 = 2044118;

	t1 = ((x97<=x98)%(x99>>x100));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x101 = 5;
	int8_t x102 = -1;
	uint16_t x103 = 29119U;
	static uint8_t x104 = 2U;
	volatile int32_t t2 = -9078975;

	t2 = ((x101<=x102)%(x103>>x104));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x209 = INT64_MIN;
	int8_t x210 = -1;
	uint8_t x211 = 9U;
	int32_t x212 = 0;
	int32_t t3 = 7599;

	t3 = ((x209<=x210)%(x211>>x212));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x217 = 28232U;
	uint8_t x218 = UINT8_MAX;
	uint32_t x219 = UINT32_MAX;
	static uint32_t t4 = 4129U;

	t4 = ((x217<=x218)%(x219>>x220));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x253 = INT8_MAX;
	int8_t x254 = -1;
	int32_t t5 = 2;

	t5 = ((x253<=x254)%(x255>>x256));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x453 = 86U;
	uint32_t x455 = 182275402U;
	volatile uint32_t t6 = 95199U;

	t6 = ((x453<=x454)%(x455>>x456));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x473 = 0;
	int32_t x474 = -1;
	static volatile uint64_t x476 = 3LLU;
	static volatile int32_t t7 = -140042;

	t7 = ((x473<=x474)%(x475>>x476));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x641 = INT16_MIN;
	volatile int8_t x644 = 0;
	volatile int32_t t8 = -2;

	t8 = ((x641<=x642)%(x643>>x644));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x894 = 11094467413367LLU;
	uint16_t x896 = 1U;
	int32_t t9 = -968;

	t9 = ((x893<=x894)%(x895>>x896));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x965 = 0;
	int8_t x968 = 12;
	volatile uint32_t t10 = 2725991U;

	t10 = ((x965<=x966)%(x967>>x968));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x1033 = INT32_MIN;
	volatile int16_t x1034 = INT16_MAX;
	uint16_t x1035 = UINT16_MAX;
	static volatile int32_t t11 = 35827;

	t11 = ((x1033<=x1034)%(x1035>>x1036));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x1077 = -1LL;
	uint64_t x1078 = 10967694126341567LLU;
	uint32_t x1079 = UINT32_MAX;
	int16_t x1080 = 0;
	uint32_t t12 = 1017485997U;

	t12 = ((x1077<=x1078)%(x1079>>x1080));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1133 = INT8_MAX;
	static volatile int64_t x1135 = INT64_MAX;
	int32_t x1136 = 26;
	int64_t t13 = 6LL;

	t13 = ((x1133<=x1134)%(x1135>>x1136));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1137 = 5U;
	volatile int16_t x1139 = 59;
	volatile int16_t x1140 = 2;
	volatile int32_t t14 = -51462;

	t14 = ((x1137<=x1138)%(x1139>>x1140));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1241 = 1;
	volatile int8_t x1242 = INT8_MIN;
	int8_t x1244 = 0;
	volatile int32_t t15 = 370158;

	t15 = ((x1241<=x1242)%(x1243>>x1244));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1401 = INT8_MAX;
	int16_t x1403 = 1172;
	uint32_t x1404 = 0U;

	t16 = ((x1401<=x1402)%(x1403>>x1404));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1421 = -3LL;
	uint16_t x1422 = 80U;
	static uint8_t x1423 = 10U;
	uint16_t x1424 = 0U;

	t17 = ((x1421<=x1422)%(x1423>>x1424));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1433 = 56U;
	int16_t x1434 = -1;
	int32_t x1435 = INT32_MAX;
	int8_t x1436 = 0;

	t18 = ((x1433<=x1434)%(x1435>>x1436));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1441 = 3639U;
	int8_t x1442 = INT8_MIN;
	static uint8_t x1443 = 109U;
	int32_t t19 = -18643;

	t19 = ((x1441<=x1442)%(x1443>>x1444));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1474 = UINT64_MAX;
	static int64_t t20 = -100367066LL;

	t20 = ((x1473<=x1474)%(x1475>>x1476));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x1541 = 102U;
	uint32_t x1543 = UINT32_MAX;
	static int32_t x1544 = 6;
	volatile uint32_t t21 = 54887969U;

	t21 = ((x1541<=x1542)%(x1543>>x1544));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1553 = INT64_MIN;
	static volatile int16_t x1554 = INT16_MIN;
	static int32_t x1555 = 126157;
	uint32_t x1556 = 1U;
	int32_t t22 = -2636;

	t22 = ((x1553<=x1554)%(x1555>>x1556));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1677 = INT16_MIN;
	static volatile int16_t x1678 = INT16_MIN;
	uint64_t x1679 = UINT64_MAX;
	static uint8_t x1680 = 0U;
	volatile uint64_t t23 = 4LLU;

	t23 = ((x1677<=x1678)%(x1679>>x1680));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1681 = 12972;
	int16_t x1682 = INT16_MAX;
	int64_t x1683 = INT64_MAX;
	static int64_t t24 = 1375592953LL;

	t24 = ((x1681<=x1682)%(x1683>>x1684));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1829 = INT16_MIN;
	int64_t x1830 = -1LL;
	static int16_t x1831 = INT16_MAX;

	t25 = ((x1829<=x1830)%(x1831>>x1832));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x1849 = UINT8_MAX;
	volatile uint16_t x1850 = 231U;
	uint16_t x1852 = 46U;
	volatile int64_t t26 = -229LL;

	t26 = ((x1849<=x1850)%(x1851>>x1852));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x2022 = UINT16_MAX;
	uint8_t x2023 = UINT8_MAX;
	uint8_t x2024 = 7U;
	volatile int32_t t27 = 0;

	t27 = ((x2021<=x2022)%(x2023>>x2024));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2069 = -5;
	int8_t x2070 = -1;
	static uint32_t x2071 = UINT32_MAX;

	t28 = ((x2069<=x2070)%(x2071>>x2072));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x2145 = -1;
	int16_t x2146 = -8075;
	volatile uint16_t x2147 = 259U;
	int32_t x2148 = 0;
	int32_t t29 = -269;

	t29 = ((x2145<=x2146)%(x2147>>x2148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2181 = INT64_MIN;
	volatile uint32_t x2182 = 929166879U;
	int16_t x2184 = 2;

	t30 = ((x2181<=x2182)%(x2183>>x2184));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x2338 = 1U;
	static volatile uint8_t x2340 = 0U;
	uint64_t t31 = 13LLU;

	t31 = ((x2337<=x2338)%(x2339>>x2340));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2407 = 965244U;
	static volatile int16_t x2408 = 4;

	t32 = ((x2405<=x2406)%(x2407>>x2408));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2465 = INT16_MIN;
	int32_t x2466 = INT32_MIN;
	volatile uint64_t x2467 = UINT64_MAX;
	int16_t x2468 = 9;

	t33 = ((x2465<=x2466)%(x2467>>x2468));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2489 = 14181;
	uint8_t x2492 = 4U;
	int32_t t34 = 170881;

	t34 = ((x2489<=x2490)%(x2491>>x2492));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2517 = 18U;
	static uint16_t x2518 = 16U;
	uint32_t x2519 = UINT32_MAX;
	uint32_t t35 = 1875880U;

	t35 = ((x2517<=x2518)%(x2519>>x2520));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2521 = INT32_MIN;
	int8_t x2523 = 39;
	volatile int8_t x2524 = 0;
	volatile int32_t t36 = -997536837;

	t36 = ((x2521<=x2522)%(x2523>>x2524));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2685 = UINT16_MAX;
	int64_t x2686 = INT64_MAX;
	uint32_t x2687 = UINT32_MAX;
	int64_t x2688 = 13LL;
	volatile uint32_t t37 = 445U;

	t37 = ((x2685<=x2686)%(x2687>>x2688));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2697 = 209;
	volatile uint64_t x2699 = 30LLU;
	int8_t x2700 = 0;

	t38 = ((x2697<=x2698)%(x2699>>x2700));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2721 = INT16_MAX;
	int64_t x2722 = -262LL;

	t39 = ((x2721<=x2722)%(x2723>>x2724));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2981 = -1;
	int32_t x2982 = 1787;
	int16_t x2983 = 1032;
	int8_t x2984 = 1;
	int32_t t40 = -51;

	t40 = ((x2981<=x2982)%(x2983>>x2984));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2986 = INT32_MIN;
	volatile int32_t x2987 = 2457432;
	int64_t x2988 = 8LL;
	volatile int32_t t41 = 1807983;

	t41 = ((x2985<=x2986)%(x2987>>x2988));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x3081 = -1;
	int64_t x3082 = INT64_MAX;
	uint16_t x3084 = 1U;
	int32_t t42 = -46613;

	t42 = ((x3081<=x3082)%(x3083>>x3084));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x3109 = 1;
	uint64_t x3110 = UINT64_MAX;
	int64_t x3111 = INT64_MAX;
	uint8_t x3112 = 12U;

	t43 = ((x3109<=x3110)%(x3111>>x3112));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3297 = UINT16_MAX;
	int16_t x3298 = INT16_MAX;
	int8_t x3300 = 1;
	volatile int32_t t44 = -3;

	t44 = ((x3297<=x3298)%(x3299>>x3300));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3309 = -410;
	volatile uint16_t x3310 = UINT16_MAX;
	static int32_t x3311 = INT32_MAX;
	static volatile uint32_t x3312 = 2U;
	volatile int32_t t45 = -97;

	t45 = ((x3309<=x3310)%(x3311>>x3312));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3493 = -1;
	uint8_t x3496 = 0U;
	volatile int32_t t46 = 113389823;

	t46 = ((x3493<=x3494)%(x3495>>x3496));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x3565 = 46709685LLU;
	int32_t x3566 = INT32_MAX;
	int64_t x3567 = INT64_MAX;
	volatile uint8_t x3568 = 4U;
	volatile int64_t t47 = -179270759570728LL;

	t47 = ((x3565<=x3566)%(x3567>>x3568));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x3581 = 120229279U;
	int32_t x3582 = 744656851;
	volatile int16_t x3583 = 1;
	uint16_t x3584 = 0U;
	static volatile int32_t t48 = 9570;

	t48 = ((x3581<=x3582)%(x3583>>x3584));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3605 = INT32_MIN;
	volatile int16_t x3606 = INT16_MIN;
	int32_t t49 = 146328865;

	t49 = ((x3605<=x3606)%(x3607>>x3608));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3613 = 0;
	uint8_t x3616 = 2U;
	static volatile int32_t t50 = -659386338;

	t50 = ((x3613<=x3614)%(x3615>>x3616));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3617 = 7178U;
	int16_t x3618 = INT16_MIN;
	volatile uint16_t x3619 = 14U;
	static uint8_t x3620 = 1U;
	static int32_t t51 = 148692;

	t51 = ((x3617<=x3618)%(x3619>>x3620));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3662 = INT64_MIN;
	int32_t x3663 = 12262091;
	int8_t x3664 = 5;
	volatile int32_t t52 = -1;

	t52 = ((x3661<=x3662)%(x3663>>x3664));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3725 = INT64_MAX;
	volatile int32_t x3726 = INT32_MIN;
	int32_t x3727 = INT32_MAX;
	int32_t x3728 = 8;
	int32_t t53 = -7861;

	t53 = ((x3725<=x3726)%(x3727>>x3728));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3861 = INT16_MIN;
	uint32_t x3863 = 40702U;
	volatile uint32_t t54 = 196878U;

	t54 = ((x3861<=x3862)%(x3863>>x3864));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3869 = INT8_MIN;
	int64_t x3870 = -1LL;
	uint64_t x3871 = 253411778794581206LLU;
	volatile uint8_t x3872 = 36U;

	t55 = ((x3869<=x3870)%(x3871>>x3872));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3925 = 118U;
	volatile int32_t x3927 = INT32_MAX;
	int16_t x3928 = 0;

	t56 = ((x3925<=x3926)%(x3927>>x3928));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3993 = 1;
	int64_t x3994 = -1LL;
	volatile int64_t x3995 = 265847927322671LL;
	static uint16_t x3996 = 16U;
	int64_t t57 = 51378961853975496LL;

	t57 = ((x3993<=x3994)%(x3995>>x3996));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4085 = 113U;
	int8_t x4086 = INT8_MIN;
	int64_t x4087 = INT64_MAX;
	uint64_t x4088 = 4LLU;

	t58 = ((x4085<=x4086)%(x4087>>x4088));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4153 = INT64_MAX;
	static uint32_t x4154 = 377U;
	uint64_t x4155 = 1055876304187LLU;
	uint32_t x4156 = 2U;

	t59 = ((x4153<=x4154)%(x4155>>x4156));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4321 = -1;
	uint64_t x4322 = 12526893997LLU;
	static uint32_t x4323 = UINT32_MAX;
	uint16_t x4324 = 3U;
	volatile uint32_t t60 = 441U;

	t60 = ((x4321<=x4322)%(x4323>>x4324));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4361 = 14;
	int64_t x4362 = -3021778042LL;
	volatile int8_t x4364 = 0;
	volatile uint64_t t61 = 70LLU;

	t61 = ((x4361<=x4362)%(x4363>>x4364));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x4462 = 4;
	volatile uint32_t x4463 = 486420U;
	volatile uint8_t x4464 = 2U;
	uint32_t t62 = 1930898U;

	t62 = ((x4461<=x4462)%(x4463>>x4464));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4517 = INT64_MIN;
	volatile uint8_t x4518 = UINT8_MAX;
	uint32_t x4519 = 12879625U;
	uint32_t x4520 = 0U;
	uint32_t t63 = 103U;

	t63 = ((x4517<=x4518)%(x4519>>x4520));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4633 = -1;
	int8_t x4634 = -1;
	static uint8_t x4635 = UINT8_MAX;
	int32_t t64 = -3479;

	t64 = ((x4633<=x4634)%(x4635>>x4636));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4705 = -1;
	volatile uint8_t x4707 = 1U;
	static uint8_t x4708 = 0U;

	t65 = ((x4705<=x4706)%(x4707>>x4708));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4721 = 1;
	int8_t x4722 = INT8_MIN;
	int16_t x4723 = INT16_MAX;
	uint16_t x4724 = 13U;
	volatile int32_t t66 = -18757;

	t66 = ((x4721<=x4722)%(x4723>>x4724));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4765 = 143U;
	volatile int8_t x4766 = INT8_MIN;
	int32_t x4767 = INT32_MAX;
	static volatile int16_t x4768 = 15;

	t67 = ((x4765<=x4766)%(x4767>>x4768));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4842 = UINT32_MAX;
	uint8_t x4844 = 0U;
	volatile int32_t t68 = -3;

	t68 = ((x4841<=x4842)%(x4843>>x4844));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x4925 = -1LL;
	int64_t x4926 = INT64_MIN;
	int8_t x4928 = 1;

	t69 = ((x4925<=x4926)%(x4927>>x4928));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4965 = 109843583969242LLU;
	static uint16_t x4967 = UINT16_MAX;
	static int8_t x4968 = 2;
	static int32_t t70 = -46;

	t70 = ((x4965<=x4966)%(x4967>>x4968));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x5137 = 0;
	uint8_t x5138 = UINT8_MAX;
	int32_t x5139 = INT32_MAX;
	int8_t x5140 = 1;
	volatile int32_t t71 = -871;

	t71 = ((x5137<=x5138)%(x5139>>x5140));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x5205 = INT8_MAX;
	int64_t x5206 = -1LL;
	static uint32_t x5207 = 1928132976U;
	uint8_t x5208 = 11U;
	volatile uint32_t t72 = 13757U;

	t72 = ((x5205<=x5206)%(x5207>>x5208));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x5421 = 84007223;
	uint8_t x5422 = UINT8_MAX;
	int64_t x5423 = INT64_MAX;
	static int8_t x5424 = 29;

	t73 = ((x5421<=x5422)%(x5423>>x5424));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5561 = INT32_MAX;
	volatile uint64_t x5562 = 2503548808503LLU;
	int32_t x5564 = 4;
	static volatile int64_t t74 = 1755875357631LL;

	t74 = ((x5561<=x5562)%(x5563>>x5564));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x5629 = INT64_MIN;
	int16_t x5630 = INT16_MIN;
	uint64_t x5631 = 14090061167440334LLU;
	uint8_t x5632 = 11U;
	volatile uint64_t t75 = 42918836166LLU;

	t75 = ((x5629<=x5630)%(x5631>>x5632));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x5710 = -27;
	uint64_t x5711 = 3993417632728603562LLU;
	int16_t x5712 = 3;
	volatile uint64_t t76 = 2713307LLU;

	t76 = ((x5709<=x5710)%(x5711>>x5712));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5773 = -1;
	int8_t x5774 = -1;
	int64_t x5775 = 16978LL;
	volatile int64_t t77 = -202862756LL;

	t77 = ((x5773<=x5774)%(x5775>>x5776));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5917 = UINT16_MAX;
	static uint32_t x5918 = 5612U;
	uint32_t x5919 = 365551592U;
	uint32_t x5920 = 1U;
	volatile uint32_t t78 = 48U;

	t78 = ((x5917<=x5918)%(x5919>>x5920));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x6001 = -6089464;
	static volatile uint8_t x6002 = 1U;
	volatile int8_t x6004 = 0;
	int32_t t79 = 69621923;

	t79 = ((x6001<=x6002)%(x6003>>x6004));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x6337 = 7U;
	int32_t x6338 = INT32_MIN;
	volatile int64_t x6339 = INT64_MAX;
	uint8_t x6340 = 15U;
	int64_t t80 = 1LL;

	t80 = ((x6337<=x6338)%(x6339>>x6340));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x6341 = 2066344331124LLU;
	int8_t x6342 = -1;
	int64_t x6343 = INT64_MAX;
	uint16_t x6344 = 0U;
	volatile int64_t t81 = 34591LL;

	t81 = ((x6341<=x6342)%(x6343>>x6344));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x6356 = 16;
	volatile uint32_t t82 = 13U;

	t82 = ((x6353<=x6354)%(x6355>>x6356));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x6410 = INT64_MAX;
	volatile uint64_t x6411 = 209131016188464LLU;
	uint8_t x6412 = 6U;
	uint64_t t83 = 472510769199062LLU;

	t83 = ((x6409<=x6410)%(x6411>>x6412));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x6550 = INT16_MIN;
	static int16_t x6551 = 655;
	static int8_t x6552 = 1;

	t84 = ((x6549<=x6550)%(x6551>>x6552));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x6585 = INT32_MIN;
	int8_t x6586 = INT8_MIN;

	t85 = ((x6585<=x6586)%(x6587>>x6588));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6801 = -247408887631LL;
	int32_t x6802 = INT32_MIN;
	uint8_t x6804 = 8U;

	t86 = ((x6801<=x6802)%(x6803>>x6804));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6846 = INT8_MIN;
	static int16_t x6847 = INT16_MAX;
	uint8_t x6848 = 0U;
	int32_t t87 = 6087508;

	t87 = ((x6845<=x6846)%(x6847>>x6848));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x6897 = 307;
	volatile int32_t x6898 = INT32_MAX;
	uint8_t x6899 = 30U;
	volatile int32_t t88 = 2026;

	t88 = ((x6897<=x6898)%(x6899>>x6900));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x7009 = INT64_MIN;
	int16_t x7011 = INT16_MAX;
	uint16_t x7012 = 0U;

	t89 = ((x7009<=x7010)%(x7011>>x7012));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x7077 = INT16_MAX;
	int32_t x7078 = -1;
	volatile uint64_t x7079 = 3826LLU;
	volatile uint64_t t90 = 27898428335636692LLU;

	t90 = ((x7077<=x7078)%(x7079>>x7080));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x7093 = 889241325741430976LLU;
	int32_t x7094 = 124789761;
	int32_t x7095 = INT32_MAX;
	int8_t x7096 = 7;
	volatile int32_t t91 = 2462079;

	t91 = ((x7093<=x7094)%(x7095>>x7096));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x7133 = 63732336U;
	static int32_t x7134 = INT32_MIN;
	uint8_t x7136 = 0U;
	uint32_t t92 = 1017669922U;

	t92 = ((x7133<=x7134)%(x7135>>x7136));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x7229 = 17757682607402338LLU;
	static int32_t x7230 = -1;
	int16_t x7231 = INT16_MAX;
	int8_t x7232 = 0;
	volatile int32_t t93 = 23485;

	t93 = ((x7229<=x7230)%(x7231>>x7232));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x7249 = 462U;
	static int64_t x7250 = -1LL;
	volatile int32_t x7251 = INT32_MAX;
	uint16_t x7252 = 0U;
	int32_t t94 = -9;

	t94 = ((x7249<=x7250)%(x7251>>x7252));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x7285 = 196508LL;
	static volatile uint64_t x7287 = 13582LLU;
	static volatile int8_t x7288 = 0;
	uint64_t t95 = 6LLU;

	t95 = ((x7285<=x7286)%(x7287>>x7288));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x7581 = 1U;
	volatile int16_t x7582 = INT16_MIN;
	uint64_t x7583 = 14661077823508261LLU;
	uint32_t x7584 = 1U;
	uint64_t t96 = 2LLU;

	t96 = ((x7581<=x7582)%(x7583>>x7584));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x7623 = 475;
	volatile int32_t t97 = 84198969;

	t97 = ((x7621<=x7622)%(x7623>>x7624));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x7637 = -21592813827207830LL;
	int8_t x7638 = INT8_MIN;
	uint8_t x7639 = UINT8_MAX;

	t98 = ((x7637<=x7638)%(x7639>>x7640));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x7769 = 128U;
	volatile int8_t x7772 = 0;
	int32_t t99 = -47568;

	t99 = ((x7769<=x7770)%(x7771>>x7772));

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

