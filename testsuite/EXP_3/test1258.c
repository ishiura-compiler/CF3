#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x63 = INT32_MIN;
uint64_t x68 = 1408546645LLU;
static volatile uint32_t x129 = 275089U;
int8_t x130 = 1;
static int64_t x131 = INT64_MAX;
volatile int16_t x235 = -1;
uint64_t x300 = 31388LLU;
uint32_t x313 = 21314191U;
static int64_t x314 = 1LL;
int32_t t8 = -132182571;
uint8_t x747 = UINT8_MAX;
int32_t x808 = -368236;
uint64_t x1220 = 9685267041LLU;
int8_t x1407 = 0;
int32_t t18 = -2780993;
int64_t x1568 = INT64_MIN;
volatile int32_t t21 = 3;
int16_t x1635 = INT16_MIN;
uint8_t x1642 = 13U;
uint32_t x1643 = 7432U;
uint32_t x1721 = UINT32_MAX;
static int32_t t26 = -5;
int64_t x1749 = 34712443661384408LL;
static int32_t x1816 = INT32_MAX;
uint16_t x1988 = UINT16_MAX;
uint64_t x2245 = 115646LLU;
volatile int8_t x2246 = 12;
uint64_t x2247 = 18164237651LLU;
int16_t x2311 = INT16_MIN;
uint16_t x2413 = 1130U;
int32_t x2415 = INT32_MAX;
static uint8_t x2416 = 6U;
uint8_t x2450 = 0U;
uint8_t x2454 = 1U;
volatile int32_t x2496 = -1;
volatile uint64_t x2637 = 3572253LLU;
int64_t x2649 = 570949469087825964LL;
volatile int32_t t42 = 10260535;
int8_t x2810 = 10;
volatile int16_t x2910 = 1;
int8_t x2938 = 7;
volatile int16_t x2939 = INT16_MAX;
uint16_t x2981 = UINT16_MAX;
static volatile uint64_t x2983 = 439119455421759LLU;
int32_t t47 = -1;
int32_t t48 = 3;
static uint32_t x3225 = 5U;
volatile int32_t t51 = -744861;
uint16_t x3406 = 8U;
uint32_t x3493 = 899U;
volatile uint32_t x3549 = 61U;
static int8_t x3552 = -16;
int32_t x3727 = -1;
volatile int8_t x4006 = 30;
int64_t x4050 = 3LL;
static volatile int32_t t61 = -48044;
int64_t x4476 = INT64_MIN;
int32_t t66 = -47649009;
int16_t x4508 = -1;
uint16_t x4790 = 0U;
static int32_t x4961 = INT32_MAX;
int64_t x5036 = INT64_MIN;
volatile int32_t t75 = 894659;
int32_t x5089 = 2871459;
uint32_t x5091 = 37393U;
static int32_t x5465 = INT32_MAX;
static int32_t x5467 = -93419177;
volatile int32_t t79 = -12;
int16_t x5550 = 0;
int64_t x5552 = -1479051614376309185LL;
volatile int32_t t80 = 179;
uint16_t x5678 = 22U;
uint16_t x5734 = 10U;
int32_t t85 = 193814;
volatile int32_t x5764 = INT32_MIN;
volatile int16_t x5885 = 22;
int32_t x5897 = 4834467;
int16_t x6019 = -1348;
int8_t x6067 = INT8_MIN;
int32_t t95 = -9;
int8_t x6436 = INT8_MIN;
volatile uint8_t x6446 = 1U;
volatile int32_t t98 = 1742;
uint8_t x6470 = 0U;
int16_t x6471 = -1;


void f0(void) {
	uint8_t x61 = 7U;
	volatile uint8_t x62 = 3U;
	static uint16_t x64 = 39U;
	int32_t t0 = 187101;

	t0 = ((x61<<x62)<=(x63==x64));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x65 = 2000U;
	int16_t x66 = 11;
	uint64_t x67 = 60362774069068525LLU;
	volatile int32_t t1 = -2;

	t1 = ((x65<<x66)<=(x67==x68));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x132 = 3;
	static volatile int32_t t2 = 1572;

	t2 = ((x129<<x130)<=(x131==x132));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x233 = 5483300822722686051LLU;
	static uint8_t x234 = 2U;
	int8_t x236 = -1;
	int32_t t3 = -6476;

	t3 = ((x233<<x234)<=(x235==x236));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x297 = 55200612LLU;
	int8_t x298 = 1;
	uint64_t x299 = 378068LLU;
	volatile int32_t t4 = -2;

	t4 = ((x297<<x298)<=(x299==x300));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t5 = 4336;

	t5 = ((x313<<x314)<=(x315==x316));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x449 = 1389U;
	int16_t x450 = 4;
	int16_t x451 = INT16_MAX;
	volatile uint64_t x452 = UINT64_MAX;
	int32_t t6 = -3941;

	t6 = ((x449<<x450)<=(x451==x452));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x629 = 74U;
	int16_t x630 = 0;
	uint8_t x631 = 92U;
	int8_t x632 = INT8_MIN;
	int32_t t7 = 1;

	t7 = ((x629<<x630)<=(x631==x632));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x649 = 15117U;
	static uint32_t x650 = 0U;
	int64_t x651 = INT64_MAX;
	static int64_t x652 = INT64_MAX;

	t8 = ((x649<<x650)<=(x651==x652));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x745 = UINT32_MAX;
	int32_t x746 = 0;
	int16_t x748 = -1;
	volatile int32_t t9 = -119533173;

	t9 = ((x745<<x746)<=(x747==x748));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x753 = 2U;
	static int32_t x754 = 2;
	int32_t x755 = -1;
	static volatile int8_t x756 = INT8_MIN;
	int32_t t10 = 27;

	t10 = ((x753<<x754)<=(x755==x756));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x781 = 100193823;
	int8_t x782 = 1;
	static int16_t x783 = -1;
	static int64_t x784 = INT64_MAX;
	volatile int32_t t11 = 53;

	t11 = ((x781<<x782)<=(x783==x784));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x805 = 4U;
	static uint8_t x806 = 3U;
	int8_t x807 = -1;
	int32_t t12 = 2015;

	t12 = ((x805<<x806)<=(x807==x808));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x833 = UINT8_MAX;
	uint16_t x834 = 0U;
	uint8_t x835 = 12U;
	uint32_t x836 = 519U;
	int32_t t13 = -173;

	t13 = ((x833<<x834)<=(x835==x836));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x925 = 24U;
	static uint32_t x926 = 0U;
	static uint64_t x927 = 5700225LLU;
	int32_t x928 = 4022;
	int32_t t14 = 1;

	t14 = ((x925<<x926)<=(x927==x928));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1217 = 1;
	int32_t x1218 = 1;
	int64_t x1219 = -29174665LL;
	static volatile int32_t t15 = -2078063;

	t15 = ((x1217<<x1218)<=(x1219==x1220));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1229 = INT16_MAX;
	uint32_t x1230 = 9U;
	static int8_t x1231 = INT8_MIN;
	int32_t x1232 = INT32_MIN;
	int32_t t16 = 49984998;

	t16 = ((x1229<<x1230)<=(x1231==x1232));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1405 = 75U;
	int8_t x1406 = 1;
	volatile uint64_t x1408 = UINT64_MAX;
	static int32_t t17 = -146403;

	t17 = ((x1405<<x1406)<=(x1407==x1408));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1449 = 0U;
	static volatile uint8_t x1450 = 6U;
	static int64_t x1451 = -1LL;
	static uint16_t x1452 = 2U;

	t18 = ((x1449<<x1450)<=(x1451==x1452));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1521 = 20;
	volatile uint32_t x1522 = 1U;
	int32_t x1523 = 20;
	int64_t x1524 = 1445592642563854LL;
	volatile int32_t t19 = -15816;

	t19 = ((x1521<<x1522)<=(x1523==x1524));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1565 = 65946396458495593LLU;
	int8_t x1566 = 1;
	uint8_t x1567 = 4U;
	static int32_t t20 = 3;

	t20 = ((x1565<<x1566)<=(x1567==x1568));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1569 = 21U;
	int32_t x1570 = 24;
	int64_t x1571 = -1LL;
	volatile int16_t x1572 = -1;

	t21 = ((x1569<<x1570)<=(x1571==x1572));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1601 = INT32_MAX;
	volatile int16_t x1602 = 0;
	static int64_t x1603 = INT64_MIN;
	int64_t x1604 = INT64_MAX;
	volatile int32_t t22 = 1919;

	t22 = ((x1601<<x1602)<=(x1603==x1604));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1633 = 51811497077269850LL;
	int8_t x1634 = 0;
	static volatile int64_t x1636 = INT64_MAX;
	volatile int32_t t23 = -818531;

	t23 = ((x1633<<x1634)<=(x1635==x1636));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1641 = 1;
	int16_t x1644 = -1;
	volatile int32_t t24 = -24762;

	t24 = ((x1641<<x1642)<=(x1643==x1644));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1717 = 8;
	uint32_t x1718 = 7U;
	int16_t x1719 = -1;
	int32_t x1720 = INT32_MAX;
	int32_t t25 = 1116240;

	t25 = ((x1717<<x1718)<=(x1719==x1720));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1722 = 28U;
	int32_t x1723 = INT32_MIN;
	volatile uint8_t x1724 = 7U;

	t26 = ((x1721<<x1722)<=(x1723==x1724));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1750 = 1U;
	int16_t x1751 = 14552;
	static uint64_t x1752 = UINT64_MAX;
	int32_t t27 = -280852040;

	t27 = ((x1749<<x1750)<=(x1751==x1752));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1813 = 27153572460LL;
	uint64_t x1814 = 2LLU;
	int8_t x1815 = INT8_MIN;
	static volatile int32_t t28 = -25820;

	t28 = ((x1813<<x1814)<=(x1815==x1816));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1925 = INT8_MAX;
	int64_t x1926 = 0LL;
	int16_t x1927 = INT16_MAX;
	static int16_t x1928 = INT16_MIN;
	static volatile int32_t t29 = 322669771;

	t29 = ((x1925<<x1926)<=(x1927==x1928));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1985 = 115403LLU;
	uint32_t x1986 = 5U;
	uint32_t x1987 = 122U;
	volatile int32_t t30 = -259000;

	t30 = ((x1985<<x1986)<=(x1987==x1988));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x2093 = 57U;
	static int8_t x2094 = 19;
	int8_t x2095 = 29;
	int32_t x2096 = INT32_MIN;
	int32_t t31 = -14;

	t31 = ((x2093<<x2094)<=(x2095==x2096));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2157 = 21112293LL;
	uint16_t x2158 = 12U;
	int8_t x2159 = INT8_MIN;
	int8_t x2160 = -5;
	volatile int32_t t32 = 23;

	t32 = ((x2157<<x2158)<=(x2159==x2160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2248 = -1;
	static int32_t t33 = -7;

	t33 = ((x2245<<x2246)<=(x2247==x2248));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2277 = 9336567U;
	uint16_t x2278 = 1U;
	static int8_t x2279 = -1;
	uint8_t x2280 = 2U;
	int32_t t34 = -615479;

	t34 = ((x2277<<x2278)<=(x2279==x2280));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x2309 = 1593899;
	volatile int8_t x2310 = 0;
	static uint8_t x2312 = UINT8_MAX;
	volatile int32_t t35 = 118213;

	t35 = ((x2309<<x2310)<=(x2311==x2312));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2414 = 2;
	volatile int32_t t36 = -400384480;

	t36 = ((x2413<<x2414)<=(x2415==x2416));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2449 = 21533U;
	int8_t x2451 = INT8_MAX;
	uint16_t x2452 = 0U;
	int32_t t37 = -2;

	t37 = ((x2449<<x2450)<=(x2451==x2452));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2453 = 271U;
	static uint32_t x2455 = 1236290U;
	uint64_t x2456 = 5212072848348902LLU;
	volatile int32_t t38 = -1923;

	t38 = ((x2453<<x2454)<=(x2455==x2456));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2493 = INT8_MAX;
	static volatile int16_t x2494 = 2;
	uint16_t x2495 = 6555U;
	int32_t t39 = -5;

	t39 = ((x2493<<x2494)<=(x2495==x2496));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2605 = 232204137607217LLU;
	uint8_t x2606 = 4U;
	int8_t x2607 = INT8_MAX;
	int16_t x2608 = INT16_MIN;
	static volatile int32_t t40 = -352695;

	t40 = ((x2605<<x2606)<=(x2607==x2608));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2638 = 52U;
	uint64_t x2639 = 390LLU;
	uint32_t x2640 = 152489U;
	int32_t t41 = -896;

	t41 = ((x2637<<x2638)<=(x2639==x2640));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2650 = 3U;
	int32_t x2651 = INT32_MIN;
	int64_t x2652 = INT64_MAX;

	t42 = ((x2649<<x2650)<=(x2651==x2652));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2809 = 3;
	static int16_t x2811 = -7;
	static uint8_t x2812 = UINT8_MAX;
	volatile int32_t t43 = 470656;

	t43 = ((x2809<<x2810)<=(x2811==x2812));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2841 = 668;
	volatile uint16_t x2842 = 1U;
	uint64_t x2843 = UINT64_MAX;
	volatile int8_t x2844 = INT8_MIN;
	int32_t t44 = 30;

	t44 = ((x2841<<x2842)<=(x2843==x2844));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2909 = 199;
	static uint16_t x2911 = 45U;
	static int8_t x2912 = -1;
	int32_t t45 = -502;

	t45 = ((x2909<<x2910)<=(x2911==x2912));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2937 = 0;
	volatile int32_t x2940 = INT32_MAX;
	int32_t t46 = 37936;

	t46 = ((x2937<<x2938)<=(x2939==x2940));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2982 = 4U;
	volatile uint64_t x2984 = 1932187452142LLU;

	t47 = ((x2981<<x2982)<=(x2983==x2984));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x3029 = UINT32_MAX;
	static int8_t x3030 = 8;
	int64_t x3031 = 156917573077LL;
	int32_t x3032 = INT32_MIN;

	t48 = ((x3029<<x3030)<=(x3031==x3032));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3226 = 0;
	static int64_t x3227 = INT64_MAX;
	static uint16_t x3228 = 14U;
	static volatile int32_t t49 = -13785;

	t49 = ((x3225<<x3226)<=(x3227==x3228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3313 = INT8_MAX;
	uint16_t x3314 = 1U;
	uint64_t x3315 = UINT64_MAX;
	static int16_t x3316 = INT16_MAX;
	int32_t t50 = -3997;

	t50 = ((x3313<<x3314)<=(x3315==x3316));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x3329 = UINT32_MAX;
	uint32_t x3330 = 3U;
	int8_t x3331 = -1;
	uint32_t x3332 = 430714378U;

	t51 = ((x3329<<x3330)<=(x3331==x3332));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3337 = INT8_MAX;
	int32_t x3338 = 0;
	static int64_t x3339 = -1LL;
	static volatile int64_t x3340 = -1LL;
	int32_t t52 = 61111220;

	t52 = ((x3337<<x3338)<=(x3339==x3340));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3405 = 6753;
	volatile uint32_t x3407 = 27477U;
	uint16_t x3408 = UINT16_MAX;
	volatile int32_t t53 = 3;

	t53 = ((x3405<<x3406)<=(x3407==x3408));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3494 = 9;
	int32_t x3495 = -50431852;
	int8_t x3496 = -1;
	static int32_t t54 = -174024;

	t54 = ((x3493<<x3494)<=(x3495==x3496));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3550 = 1U;
	int16_t x3551 = INT16_MIN;
	int32_t t55 = 475199;

	t55 = ((x3549<<x3550)<=(x3551==x3552));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3725 = 5U;
	uint16_t x3726 = 3U;
	uint64_t x3728 = 25546717LLU;
	volatile int32_t t56 = 113528445;

	t56 = ((x3725<<x3726)<=(x3727==x3728));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x3821 = 319U;
	uint64_t x3822 = 0LLU;
	int32_t x3823 = INT32_MIN;
	uint16_t x3824 = UINT16_MAX;
	volatile int32_t t57 = 32;

	t57 = ((x3821<<x3822)<=(x3823==x3824));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x3869 = UINT8_MAX;
	uint32_t x3870 = 3U;
	int16_t x3871 = INT16_MIN;
	static volatile uint32_t x3872 = 5874U;
	static volatile int32_t t58 = 7350;

	t58 = ((x3869<<x3870)<=(x3871==x3872));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3929 = 0U;
	int8_t x3930 = 3;
	uint32_t x3931 = 474348553U;
	int16_t x3932 = INT16_MIN;
	volatile int32_t t59 = -3118253;

	t59 = ((x3929<<x3930)<=(x3931==x3932));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4005 = UINT32_MAX;
	int32_t x4007 = -1;
	uint8_t x4008 = UINT8_MAX;
	int32_t t60 = -3338;

	t60 = ((x4005<<x4006)<=(x4007==x4008));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4049 = UINT8_MAX;
	uint16_t x4051 = UINT16_MAX;
	int32_t x4052 = INT32_MAX;

	t61 = ((x4049<<x4050)<=(x4051==x4052));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x4077 = UINT64_MAX;
	int32_t x4078 = 3;
	static int16_t x4079 = 12089;
	int32_t x4080 = -954189846;
	volatile int32_t t62 = 2021481;

	t62 = ((x4077<<x4078)<=(x4079==x4080));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x4133 = UINT8_MAX;
	uint16_t x4134 = 3U;
	static int8_t x4135 = 4;
	int8_t x4136 = 1;
	volatile int32_t t63 = -1173;

	t63 = ((x4133<<x4134)<=(x4135==x4136));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x4181 = 42722539767939119LLU;
	int32_t x4182 = 1;
	uint64_t x4183 = UINT64_MAX;
	static uint16_t x4184 = 14U;
	static int32_t t64 = -18813271;

	t64 = ((x4181<<x4182)<=(x4183==x4184));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4197 = 62906744493LL;
	int8_t x4198 = 0;
	int32_t x4199 = 3810214;
	int8_t x4200 = INT8_MAX;
	volatile int32_t t65 = -89408;

	t65 = ((x4197<<x4198)<=(x4199==x4200));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x4473 = UINT64_MAX;
	volatile uint8_t x4474 = 1U;
	volatile int16_t x4475 = -398;

	t66 = ((x4473<<x4474)<=(x4475==x4476));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4485 = 1U;
	static uint32_t x4486 = 1U;
	static int64_t x4487 = INT64_MAX;
	int32_t x4488 = INT32_MIN;
	int32_t t67 = -177;

	t67 = ((x4485<<x4486)<=(x4487==x4488));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4505 = 238LL;
	static int16_t x4506 = 15;
	int8_t x4507 = INT8_MIN;
	int32_t t68 = -1151;

	t68 = ((x4505<<x4506)<=(x4507==x4508));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4569 = 40471567568844LLU;
	uint64_t x4570 = 1LLU;
	uint16_t x4571 = UINT16_MAX;
	int32_t x4572 = 1410;
	int32_t t69 = 191;

	t69 = ((x4569<<x4570)<=(x4571==x4572));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4573 = INT16_MAX;
	volatile uint8_t x4574 = 1U;
	volatile int64_t x4575 = INT64_MIN;
	int16_t x4576 = INT16_MAX;
	volatile int32_t t70 = 30475655;

	t70 = ((x4573<<x4574)<=(x4575==x4576));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4789 = UINT8_MAX;
	uint16_t x4791 = UINT16_MAX;
	static volatile uint32_t x4792 = 433U;
	int32_t t71 = -1944;

	t71 = ((x4789<<x4790)<=(x4791==x4792));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4962 = 0U;
	static int16_t x4963 = 8053;
	int16_t x4964 = INT16_MAX;
	static volatile int32_t t72 = -2;

	t72 = ((x4961<<x4962)<=(x4963==x4964));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x5005 = 927LL;
	uint16_t x5006 = 5U;
	volatile uint32_t x5007 = 356U;
	int8_t x5008 = INT8_MIN;
	static int32_t t73 = 0;

	t73 = ((x5005<<x5006)<=(x5007==x5008));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x5025 = 2U;
	static int8_t x5026 = 0;
	int32_t x5027 = -224;
	int32_t x5028 = INT32_MIN;
	volatile int32_t t74 = -806252;

	t74 = ((x5025<<x5026)<=(x5027==x5028));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x5033 = 12U;
	int8_t x5034 = 6;
	uint64_t x5035 = 31753685LLU;

	t75 = ((x5033<<x5034)<=(x5035==x5036));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x5073 = 0;
	uint8_t x5074 = 0U;
	int16_t x5075 = INT16_MAX;
	volatile int32_t x5076 = INT32_MAX;
	volatile int32_t t76 = -62540;

	t76 = ((x5073<<x5074)<=(x5075==x5076));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x5090 = 2;
	uint32_t x5092 = 111991912U;
	int32_t t77 = 99663;

	t77 = ((x5089<<x5090)<=(x5091==x5092));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5185 = 3529911U;
	static int8_t x5186 = 5;
	int32_t x5187 = INT32_MIN;
	static int32_t x5188 = INT32_MAX;
	int32_t t78 = -1498;

	t78 = ((x5185<<x5186)<=(x5187==x5188));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x5466 = 0U;
	uint8_t x5468 = 37U;

	t79 = ((x5465<<x5466)<=(x5467==x5468));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x5549 = UINT16_MAX;
	int32_t x5551 = 48209;

	t80 = ((x5549<<x5550)<=(x5551==x5552));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5585 = 23;
	uint8_t x5586 = 0U;
	int64_t x5587 = INT64_MIN;
	int64_t x5588 = -8504327LL;
	int32_t t81 = 9;

	t81 = ((x5585<<x5586)<=(x5587==x5588));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5613 = 0LL;
	int16_t x5614 = 0;
	int16_t x5615 = INT16_MIN;
	static int64_t x5616 = INT64_MIN;
	static int32_t t82 = -117795;

	t82 = ((x5613<<x5614)<=(x5615==x5616));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5653 = UINT64_MAX;
	static uint8_t x5654 = 0U;
	int8_t x5655 = 20;
	static volatile int32_t x5656 = INT32_MIN;
	int32_t t83 = -1;

	t83 = ((x5653<<x5654)<=(x5655==x5656));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5677 = INT8_MAX;
	int8_t x5679 = INT8_MIN;
	int64_t x5680 = INT64_MAX;
	volatile int32_t t84 = 51422;

	t84 = ((x5677<<x5678)<=(x5679==x5680));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5733 = UINT16_MAX;
	uint32_t x5735 = 1948U;
	uint8_t x5736 = 10U;

	t85 = ((x5733<<x5734)<=(x5735==x5736));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5761 = 1965157451929076734LLU;
	volatile uint8_t x5762 = 4U;
	static uint32_t x5763 = 1527730377U;
	int32_t t86 = 1736;

	t86 = ((x5761<<x5762)<=(x5763==x5764));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5886 = 10LL;
	static uint16_t x5887 = 124U;
	int8_t x5888 = INT8_MIN;
	volatile int32_t t87 = 525318105;

	t87 = ((x5885<<x5886)<=(x5887==x5888));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5898 = 3U;
	int16_t x5899 = INT16_MIN;
	volatile int16_t x5900 = INT16_MIN;
	volatile int32_t t88 = -6334500;

	t88 = ((x5897<<x5898)<=(x5899==x5900));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5957 = 6U;
	uint8_t x5958 = 3U;
	volatile int8_t x5959 = -53;
	int8_t x5960 = INT8_MAX;
	int32_t t89 = 1835080;

	t89 = ((x5957<<x5958)<=(x5959==x5960));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x6017 = 136U;
	static int8_t x6018 = 12;
	int64_t x6020 = -104596455406332LL;
	static volatile int32_t t90 = 7786;

	t90 = ((x6017<<x6018)<=(x6019==x6020));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6049 = UINT16_MAX;
	int16_t x6050 = 0;
	static int64_t x6051 = 73571345LL;
	int32_t x6052 = INT32_MIN;
	int32_t t91 = -277524;

	t91 = ((x6049<<x6050)<=(x6051==x6052));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6065 = UINT32_MAX;
	volatile int8_t x6066 = 1;
	volatile int64_t x6068 = INT64_MAX;
	int32_t t92 = 0;

	t92 = ((x6065<<x6066)<=(x6067==x6068));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6121 = 1U;
	static int8_t x6122 = 1;
	int64_t x6123 = INT64_MIN;
	int32_t x6124 = 1;
	volatile int32_t t93 = -1;

	t93 = ((x6121<<x6122)<=(x6123==x6124));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x6141 = 8U;
	int64_t x6142 = 27LL;
	static uint64_t x6143 = 0LLU;
	int64_t x6144 = -97616374403478LL;
	static volatile int32_t t94 = -30068;

	t94 = ((x6141<<x6142)<=(x6143==x6144));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6253 = 2;
	volatile int32_t x6254 = 1;
	uint64_t x6255 = UINT64_MAX;
	volatile uint16_t x6256 = UINT16_MAX;

	t95 = ((x6253<<x6254)<=(x6255==x6256));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6365 = UINT32_MAX;
	uint32_t x6366 = 0U;
	int8_t x6367 = INT8_MIN;
	static int64_t x6368 = INT64_MIN;
	volatile int32_t t96 = -1;

	t96 = ((x6365<<x6366)<=(x6367==x6368));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6433 = 1;
	static volatile uint8_t x6434 = 1U;
	volatile uint16_t x6435 = 5U;
	static int32_t t97 = -35;

	t97 = ((x6433<<x6434)<=(x6435==x6436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6445 = UINT64_MAX;
	static int64_t x6447 = INT64_MIN;
	uint16_t x6448 = UINT16_MAX;

	t98 = ((x6445<<x6446)<=(x6447==x6448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6469 = INT16_MAX;
	static int16_t x6472 = INT16_MAX;
	int32_t t99 = -123;

	t99 = ((x6469<<x6470)<=(x6471==x6472));

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

