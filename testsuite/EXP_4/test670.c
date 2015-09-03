#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x25 = UINT16_MAX;
uint8_t x210 = 0U;
int8_t x234 = 10;
int8_t x235 = INT8_MAX;
static uint64_t x369 = 30140567678069035LLU;
static int32_t x493 = 346606;
volatile int8_t x494 = -1;
static volatile int32_t t4 = 69;
int32_t t5 = -248385;
static uint16_t x685 = 776U;
static int16_t x686 = 3;
static volatile int8_t x771 = INT8_MIN;
volatile uint16_t x828 = UINT16_MAX;
uint64_t x877 = 753LLU;
uint8_t x959 = 2U;
static volatile uint8_t x1059 = 24U;
int16_t x1178 = 1;
static volatile int16_t x1369 = 1;
int16_t x1370 = INT16_MIN;
int8_t x1372 = -1;
volatile int64_t x1517 = 67613584925097562LL;
int8_t x1541 = 1;
uint64_t x1544 = UINT64_MAX;
volatile int32_t t19 = 996;
static volatile int64_t t20 = INT64_MAX;
static uint32_t x2030 = 5U;
volatile int32_t t22 = -1;
volatile uint32_t x2204 = 213466U;
static uint16_t x2261 = 12768U;
uint8_t x2264 = UINT8_MAX;
static int16_t x2622 = 1;
static volatile int64_t x2624 = 34524539468582LL;
int64_t x2858 = 0LL;
static volatile int64_t x2860 = INT64_MIN;
int32_t t32 = -68;
int8_t x2988 = -1;
int16_t x3043 = INT16_MAX;
uint64_t x3171 = UINT64_MAX;
uint32_t t38 = 6669868U;
static int8_t x3346 = 1;
volatile uint16_t x3429 = 60U;
uint8_t x3432 = 4U;
int32_t x3548 = INT32_MIN;
volatile int64_t x3559 = -4LL;
volatile int32_t x3560 = INT32_MIN;
volatile uint64_t t44 = 112LLU;
int8_t x3589 = 1;
uint16_t x3590 = 10U;
uint8_t x3591 = 3U;
volatile uint16_t x3614 = 5U;
static int16_t x3790 = 1;
volatile int32_t x3791 = INT32_MIN;
volatile uint16_t x3845 = 283U;
static int32_t x3848 = INT32_MIN;
int32_t t48 = -2;
int64_t x3858 = -49LL;
volatile int32_t x3859 = INT32_MIN;
volatile int64_t t50 = -1498752812706371453LL;
uint16_t x3956 = 7U;
int32_t x4203 = INT32_MAX;
uint64_t x4350 = UINT64_MAX;
static volatile int16_t x4352 = -1;
uint16_t x4442 = 3U;
int16_t x4443 = -699;
int32_t x4444 = INT32_MAX;
static uint32_t x4577 = UINT32_MAX;
int32_t x4578 = 11;
uint64_t x4579 = 433841397638LLU;
volatile int32_t t61 = -9262;
static int32_t x5160 = INT32_MAX;
int32_t x5182 = 1;
int8_t x5315 = 40;
uint64_t x5405 = 7940998530758337LLU;
volatile uint64_t t70 = 28237866LLU;
volatile int64_t x5446 = -1LL;
int32_t t72 = -469391;
volatile int8_t x5590 = -7;
uint16_t x5618 = 6U;
static uint64_t t74 = 459559LLU;
volatile int8_t x5750 = 1;
int32_t t75 = -30867;
volatile int32_t t76 = -5390;
static uint8_t x5925 = 1U;
uint32_t x5926 = 0U;
int64_t x5928 = INT64_MIN;
uint32_t x6069 = UINT32_MAX;
int64_t x6071 = -916LL;
int64_t x6072 = INT64_MIN;
volatile uint8_t x6134 = 5U;
static int8_t x6280 = 3;
uint32_t t81 = 6U;
static volatile uint8_t x6738 = 1U;
uint8_t x6865 = UINT8_MAX;
static int8_t x6868 = 9;
uint32_t x6982 = 1U;
int64_t x7061 = INT64_MAX;
uint8_t x7062 = 0U;
volatile uint64_t t91 = 63LLU;
volatile uint16_t x7201 = 26U;
volatile int16_t x7204 = -327;
int32_t t93 = 2;
static volatile int32_t t94 = 1;
volatile uint32_t x7264 = UINT32_MAX;
int8_t x7286 = 24;
int8_t x7339 = -1;
uint64_t x7341 = UINT64_MAX;
volatile int64_t x7344 = 55125089LL;


void f0(void) {
	volatile uint16_t x26 = 3U;
	int16_t x27 = -1;
	int16_t x28 = 1413;
	int32_t t0 = 12299;

	t0 = (x25>>(x26^(x27/x28)));

	if (t0 != 8191) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	int32_t x212 = INT32_MIN;
	uint64_t t1 = UINT64_MAX;

	t1 = (x209>>(x210^(x211/x212)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x233 = 321178U;
	static uint32_t x236 = 467U;
	uint32_t t2 = 1986392U;

	t2 = (x233>>(x234^(x235/x236)));

	if (t2 != 313U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x370 = 42U;
	uint8_t x371 = 3U;
	int32_t x372 = INT32_MIN;
	volatile uint64_t t3 = 107772LLU;

	t3 = (x369>>(x370^(x371/x372)));

	if (t3 != 6853LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x495 = INT8_MIN;
	volatile int32_t x496 = 39;

	t4 = (x493>>(x494^(x495/x496)));

	if (t4 != 86651) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x613 = 5U;
	volatile int32_t x614 = -1;
	uint16_t x615 = UINT16_MAX;
	volatile int16_t x616 = -15672;

	t5 = (x613>>(x614^(x615/x616)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x687 = 1U;
	int8_t x688 = 1;
	int32_t t6 = -375661848;

	t6 = (x685>>(x686^(x687/x688)));

	if (t6 != 194) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x725 = 36U;
	volatile uint8_t x726 = 6U;
	uint64_t x727 = 58543LLU;
	int8_t x728 = -1;
	int32_t t7 = 9;

	t7 = (x725>>(x726^(x727/x728)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x769 = 103U;
	volatile int32_t x770 = 12;
	static int16_t x772 = INT16_MAX;
	volatile int32_t t8 = 2024608;

	t8 = (x769>>(x770^(x771/x772)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x825 = INT8_MAX;
	uint64_t x826 = 7LLU;
	int8_t x827 = -3;
	volatile int32_t t9 = 200;

	t9 = (x825>>(x826^(x827/x828)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x865 = 1251U;
	static uint32_t x866 = UINT32_MAX;
	uint8_t x867 = UINT8_MAX;
	int8_t x868 = INT8_MIN;
	int32_t t10 = 60;

	t10 = (x865>>(x866^(x867/x868)));

	if (t10 != 1251) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x878 = 1U;
	uint16_t x879 = 49U;
	int64_t x880 = -34871827126954LL;
	volatile uint64_t t11 = 241403633865014LLU;

	t11 = (x877>>(x878^(x879/x880)));

	if (t11 != 376LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x941 = 0U;
	int32_t x942 = 2;
	int64_t x943 = -1LL;
	int8_t x944 = INT8_MAX;
	volatile uint32_t t12 = 241U;

	t12 = (x941>>(x942^(x943/x944)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x957 = INT64_MAX;
	int16_t x958 = -23;
	int16_t x960 = -1;
	volatile int64_t t13 = -8215187460622233LL;

	t13 = (x957>>(x958^(x959/x960)));

	if (t13 != 1099511627775LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x1057 = 134U;
	uint8_t x1058 = 1U;
	int8_t x1060 = INT8_MIN;
	volatile int32_t t14 = 124342;

	t14 = (x1057>>(x1058^(x1059/x1060)));

	if (t14 != 67) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1177 = 18;
	static int16_t x1179 = INT16_MAX;
	uint16_t x1180 = 1042U;
	int32_t t15 = 517433;

	t15 = (x1177>>(x1178^(x1179/x1180)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1371 = INT16_MAX;
	volatile int32_t t16 = -377;

	t16 = (x1369>>(x1370^(x1371/x1372)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1518 = 1U;
	int16_t x1519 = -1;
	int32_t x1520 = INT32_MIN;
	static volatile int64_t t17 = -1479386269143493LL;

	t17 = (x1517>>(x1518^(x1519/x1520)));

	if (t17 != 33806792462548781LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x1542 = 0U;
	volatile int8_t x1543 = -1;
	static int32_t t18 = 509;

	t18 = (x1541>>(x1542^(x1543/x1544)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1861 = 399U;
	int16_t x1862 = INT16_MIN;
	static volatile int16_t x1863 = INT16_MAX;
	int16_t x1864 = -1;

	t19 = (x1861>>(x1862^(x1863/x1864)));

	if (t19 != 199) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1921 = INT64_MAX;
	uint64_t x1922 = 0LLU;
	static int32_t x1923 = 3408;
	int64_t x1924 = 626286968LL;

	t20 = (x1921>>(x1922^(x1923/x1924)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x2009 = UINT8_MAX;
	uint64_t x2010 = 25LLU;
	volatile int32_t x2011 = -3502777;
	int64_t x2012 = 2532404661533618LL;
	int32_t t21 = 99647;

	t21 = (x2009>>(x2010^(x2011/x2012)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x2029 = INT16_MAX;
	int64_t x2031 = -1LL;
	uint8_t x2032 = 71U;

	t22 = (x2029>>(x2030^(x2031/x2032)));

	if (t22 != 1023) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x2201 = 0;
	volatile int8_t x2202 = 0;
	uint8_t x2203 = UINT8_MAX;
	int32_t t23 = 6525;

	t23 = (x2201>>(x2202^(x2203/x2204)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x2262 = 0;
	static int8_t x2263 = INT8_MIN;
	static volatile int32_t t24 = -176841;

	t24 = (x2261>>(x2262^(x2263/x2264)));

	if (t24 != 12768) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2525 = 300064LL;
	uint16_t x2526 = 0U;
	static uint64_t x2527 = 1278LLU;
	static int8_t x2528 = INT8_MAX;
	static int64_t t25 = -35LL;

	t25 = (x2525>>(x2526^(x2527/x2528)));

	if (t25 != 293LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x2549 = 0;
	int16_t x2550 = -1;
	int32_t x2551 = 1;
	static volatile int64_t x2552 = -1LL;
	int32_t t26 = 1776433;

	t26 = (x2549>>(x2550^(x2551/x2552)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x2589 = 120012;
	uint32_t x2590 = UINT32_MAX;
	volatile uint8_t x2591 = UINT8_MAX;
	static int8_t x2592 = INT8_MIN;
	volatile int32_t t27 = -5;

	t27 = (x2589>>(x2590^(x2591/x2592)));

	if (t27 != 120012) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2621 = 73740168579LL;
	volatile uint8_t x2623 = 12U;
	int64_t t28 = -11334986720LL;

	t28 = (x2621>>(x2622^(x2623/x2624)));

	if (t28 != 36870084289LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2629 = UINT16_MAX;
	uint8_t x2630 = 4U;
	volatile int8_t x2631 = -14;
	int64_t x2632 = -111317038LL;
	int32_t t29 = 255067;

	t29 = (x2629>>(x2630^(x2631/x2632)));

	if (t29 != 4095) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2857 = 1871LLU;
	static int64_t x2859 = INT64_MIN;
	volatile uint64_t t30 = 447952LLU;

	t30 = (x2857>>(x2858^(x2859/x2860)));

	if (t30 != 935LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2909 = 47U;
	static int16_t x2910 = 1;
	int64_t x2911 = -1LL;
	int64_t x2912 = INT64_MIN;
	volatile int32_t t31 = -1346238;

	t31 = (x2909>>(x2910^(x2911/x2912)));

	if (t31 != 23) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2913 = 541821909;
	int8_t x2914 = -8;
	uint16_t x2915 = 2994U;
	static volatile int8_t x2916 = INT8_MIN;

	t32 = (x2913>>(x2914^(x2915/x2916)));

	if (t32 != 4133) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2985 = INT64_MAX;
	uint8_t x2986 = 14U;
	uint32_t x2987 = 144735858U;
	int64_t t33 = -2904230188271663LL;

	t33 = (x2985>>(x2986^(x2987/x2988)));

	if (t33 != 562949953421311LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3041 = 3;
	int8_t x3042 = 14;
	int32_t x3044 = INT32_MIN;
	int32_t t34 = 228672982;

	t34 = (x3041>>(x3042^(x3043/x3044)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x3145 = INT64_MAX;
	int8_t x3146 = 20;
	uint8_t x3147 = 80U;
	static volatile uint16_t x3148 = 12U;
	volatile int64_t t35 = 100LL;

	t35 = (x3145>>(x3146^(x3147/x3148)));

	if (t35 != 35184372088831LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x3169 = INT64_MAX;
	uint8_t x3170 = 6U;
	int32_t x3172 = INT32_MIN;
	volatile int64_t t36 = -16121785967658446LL;

	t36 = (x3169>>(x3170^(x3171/x3172)));

	if (t36 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x3197 = INT32_MAX;
	static int8_t x3198 = 11;
	uint64_t x3199 = 1999LLU;
	uint16_t x3200 = UINT16_MAX;
	int32_t t37 = 5;

	t37 = (x3197>>(x3198^(x3199/x3200)));

	if (t37 != 1048575) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x3289 = 16343601U;
	static int8_t x3290 = 4;
	volatile int64_t x3291 = -1LL;
	int32_t x3292 = INT32_MIN;

	t38 = (x3289>>(x3290^(x3291/x3292)));

	if (t38 != 1021475U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3345 = INT32_MAX;
	static int16_t x3347 = -1;
	int32_t x3348 = -1;
	int32_t t39 = INT32_MAX;

	t39 = (x3345>>(x3346^(x3347/x3348)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3405 = 17LLU;
	volatile uint8_t x3406 = 0U;
	int32_t x3407 = INT32_MIN;
	int64_t x3408 = INT64_MIN;
	volatile uint64_t t40 = 410940538LLU;

	t40 = (x3405>>(x3406^(x3407/x3408)));

	if (t40 != 17LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x3430 = 4;
	uint8_t x3431 = 13U;
	static volatile int32_t t41 = 20;

	t41 = (x3429>>(x3430^(x3431/x3432)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x3473 = 1U;
	int64_t x3474 = 9LL;
	int64_t x3475 = INT64_MIN;
	uint64_t x3476 = UINT64_MAX;
	volatile int32_t t42 = -471001370;

	t42 = (x3473>>(x3474^(x3475/x3476)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3545 = UINT32_MAX;
	uint16_t x3546 = 24U;
	int16_t x3547 = -1;
	uint32_t t43 = 20571121U;

	t43 = (x3545>>(x3546^(x3547/x3548)));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x3557 = UINT64_MAX;
	int8_t x3558 = 2;

	t44 = (x3557>>(x3558^(x3559/x3560)));

	if (t44 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3592 = 5;
	int32_t t45 = 1148;

	t45 = (x3589>>(x3590^(x3591/x3592)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x3613 = UINT16_MAX;
	static uint32_t x3615 = 291566258U;
	static int32_t x3616 = INT32_MIN;
	static volatile int32_t t46 = 6;

	t46 = (x3613>>(x3614^(x3615/x3616)));

	if (t46 != 2047) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3789 = INT8_MAX;
	int64_t x3792 = INT64_MIN;
	static int32_t t47 = 6035621;

	t47 = (x3789>>(x3790^(x3791/x3792)));

	if (t47 != 63) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3846 = 21U;
	static int8_t x3847 = INT8_MIN;

	t48 = (x3845>>(x3846^(x3847/x3848)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3853 = 0;
	volatile uint16_t x3854 = 30U;
	int16_t x3855 = -1;
	volatile int64_t x3856 = 76372848369232LL;
	int32_t t49 = 46903748;

	t49 = (x3853>>(x3854^(x3855/x3856)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x3857 = 17981049828440LL;
	int32_t x3860 = INT32_MAX;

	t50 = (x3857>>(x3858^(x3859/x3860)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3917 = 13;
	static int8_t x3918 = 1;
	int8_t x3919 = INT8_MIN;
	int64_t x3920 = INT64_MAX;
	int32_t t51 = -1098055;

	t51 = (x3917>>(x3918^(x3919/x3920)));

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3953 = 1U;
	uint16_t x3954 = 2U;
	int8_t x3955 = -1;
	volatile int32_t t52 = -67983;

	t52 = (x3953>>(x3954^(x3955/x3956)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3969 = INT32_MAX;
	uint64_t x3970 = 1LLU;
	uint16_t x3971 = 3452U;
	static uint64_t x3972 = 1119499035323608479LLU;
	volatile int32_t t53 = 61083;

	t53 = (x3969>>(x3970^(x3971/x3972)));

	if (t53 != 1073741823) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4201 = 59U;
	int8_t x4202 = 0;
	int32_t x4204 = INT32_MIN;
	volatile int32_t t54 = -16998;

	t54 = (x4201>>(x4202^(x4203/x4204)));

	if (t54 != 59) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4205 = UINT64_MAX;
	int64_t x4206 = -1LL;
	volatile int8_t x4207 = -8;
	static uint8_t x4208 = 4U;
	volatile uint64_t t55 = 26LLU;

	t55 = (x4205>>(x4206^(x4207/x4208)));

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4349 = 0U;
	int32_t x4351 = 12;
	int32_t t56 = 220;

	t56 = (x4349>>(x4350^(x4351/x4352)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4441 = UINT8_MAX;
	static volatile int32_t t57 = 3;

	t57 = (x4441>>(x4442^(x4443/x4444)));

	if (t57 != 31) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4525 = 29232U;
	volatile int16_t x4526 = -13;
	int8_t x4527 = INT8_MIN;
	uint8_t x4528 = 64U;
	volatile uint32_t t58 = 1821539591U;

	t58 = (x4525>>(x4526^(x4527/x4528)));

	if (t58 != 3U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4580 = INT32_MIN;
	uint32_t t59 = 118150U;

	t59 = (x4577>>(x4578^(x4579/x4580)));

	if (t59 != 2097151U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x4857 = 244019184U;
	uint16_t x4858 = 2U;
	volatile int8_t x4859 = -1;
	static int16_t x4860 = -10057;
	static uint32_t t60 = 1U;

	t60 = (x4857>>(x4858^(x4859/x4860)));

	if (t60 != 61004796U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4909 = 1U;
	uint16_t x4910 = 0U;
	volatile uint64_t x4911 = 555547600239261LLU;
	volatile int64_t x4912 = -1LL;

	t61 = (x4909>>(x4910^(x4911/x4912)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x5017 = 4;
	int16_t x5018 = -1;
	int8_t x5019 = -32;
	uint8_t x5020 = 14U;
	int32_t t62 = 259;

	t62 = (x5017>>(x5018^(x5019/x5020)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5157 = 1U;
	uint8_t x5158 = 1U;
	int16_t x5159 = INT16_MIN;
	int32_t t63 = -25808;

	t63 = (x5157>>(x5158^(x5159/x5160)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x5181 = 12383444U;
	uint64_t x5183 = UINT64_MAX;
	int32_t x5184 = -6457;
	static uint32_t t64 = 4U;

	t64 = (x5181>>(x5182^(x5183/x5184)));

	if (t64 != 12383444U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x5201 = 8576798271LLU;
	static uint8_t x5202 = 31U;
	static int8_t x5203 = INT8_MIN;
	int32_t x5204 = 17206194;
	uint64_t t65 = 19046729065678LLU;

	t65 = (x5201>>(x5202^(x5203/x5204)));

	if (t65 != 3LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x5261 = 1135U;
	int8_t x5262 = 1;
	int8_t x5263 = -17;
	int16_t x5264 = -1;
	uint32_t t66 = 6506222U;

	t66 = (x5261>>(x5262^(x5263/x5264)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x5313 = INT64_MAX;
	int8_t x5314 = 57;
	int64_t x5316 = INT64_MAX;
	volatile int64_t t67 = 189164LL;

	t67 = (x5313>>(x5314^(x5315/x5316)));

	if (t67 != 63LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x5317 = 9;
	uint16_t x5318 = 0U;
	int8_t x5319 = 0;
	int32_t x5320 = INT32_MIN;
	static int32_t t68 = 27594617;

	t68 = (x5317>>(x5318^(x5319/x5320)));

	if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x5353 = UINT8_MAX;
	int16_t x5354 = 4;
	volatile int32_t x5355 = INT32_MIN;
	int64_t x5356 = INT64_MAX;
	volatile int32_t t69 = 1596;

	t69 = (x5353>>(x5354^(x5355/x5356)));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5406 = 11U;
	int16_t x5407 = -1;
	int8_t x5408 = INT8_MIN;

	t70 = (x5405>>(x5406^(x5407/x5408)));

	if (t70 != 3877440688846LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x5445 = 9670075LLU;
	uint16_t x5447 = 3U;
	static int16_t x5448 = -1;
	volatile uint64_t t71 = 67389743820LLU;

	t71 = (x5445>>(x5446^(x5447/x5448)));

	if (t71 != 2417518LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5561 = INT8_MAX;
	int16_t x5562 = 11;
	static uint32_t x5563 = 0U;
	int16_t x5564 = 40;

	t72 = (x5561>>(x5562^(x5563/x5564)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x5589 = 3414288408678023LLU;
	int64_t x5591 = 3LL;
	int16_t x5592 = -1;
	uint64_t t73 = 64063379553LLU;

	t73 = (x5589>>(x5590^(x5591/x5592)));

	if (t73 != 213393025542376LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x5617 = 12LLU;
	static int64_t x5619 = -1LL;
	volatile uint32_t x5620 = 2U;

	t74 = (x5617>>(x5618^(x5619/x5620)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5749 = 95U;
	uint64_t x5751 = UINT64_MAX;
	static int8_t x5752 = INT8_MIN;

	t75 = (x5749>>(x5750^(x5751/x5752)));

	if (t75 != 95) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5797 = 33;
	uint8_t x5798 = 1U;
	static int8_t x5799 = INT8_MAX;
	uint16_t x5800 = 48U;

	t76 = (x5797>>(x5798^(x5799/x5800)));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x5927 = UINT16_MAX;
	volatile int32_t t77 = -148856712;

	t77 = (x5925>>(x5926^(x5927/x5928)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5985 = 161151000534391LL;
	uint16_t x5986 = 0U;
	int16_t x5987 = INT16_MAX;
	uint16_t x5988 = UINT16_MAX;
	int64_t t78 = -28070LL;

	t78 = (x5985>>(x5986^(x5987/x5988)));

	if (t78 != 161151000534391LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6070 = 6;
	static volatile uint32_t t79 = 1136U;

	t79 = (x6069>>(x6070^(x6071/x6072)));

	if (t79 != 67108863U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6133 = 12488;
	int64_t x6135 = -1LL;
	uint32_t x6136 = 1603399914U;
	static volatile int32_t t80 = 230;

	t80 = (x6133>>(x6134^(x6135/x6136)));

	if (t80 != 390) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x6277 = 21167U;
	static volatile uint8_t x6278 = 1U;
	int64_t x6279 = -1LL;

	t81 = (x6277>>(x6278^(x6279/x6280)));

	if (t81 != 10583U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x6409 = INT8_MAX;
	static uint8_t x6410 = 2U;
	uint8_t x6411 = 5U;
	volatile int64_t x6412 = INT64_MAX;
	volatile int32_t t82 = -3;

	t82 = (x6409>>(x6410^(x6411/x6412)));

	if (t82 != 31) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x6509 = 1U;
	int32_t x6510 = 4;
	int16_t x6511 = -1;
	int32_t x6512 = INT32_MAX;
	volatile int32_t t83 = 1865;

	t83 = (x6509>>(x6510^(x6511/x6512)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x6737 = INT8_MAX;
	int32_t x6739 = -1;
	volatile int32_t x6740 = INT32_MAX;
	int32_t t84 = 1627;

	t84 = (x6737>>(x6738^(x6739/x6740)));

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6845 = 163721LLU;
	uint16_t x6846 = 87U;
	static int32_t x6847 = INT32_MIN;
	uint64_t x6848 = 147354357865179148LLU;
	volatile uint64_t t85 = 45721842LLU;

	t85 = (x6845>>(x6846^(x6847/x6848)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x6866 = 26U;
	int64_t x6867 = -1LL;
	static int32_t t86 = 932035;

	t86 = (x6865>>(x6866^(x6867/x6868)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x6901 = 49U;
	uint64_t x6902 = UINT64_MAX;
	int8_t x6903 = INT8_MIN;
	static uint8_t x6904 = 28U;
	static volatile int32_t t87 = -1857792;

	t87 = (x6901>>(x6902^(x6903/x6904)));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x6981 = 0;
	int8_t x6983 = -1;
	uint16_t x6984 = 4U;
	int32_t t88 = 10304174;

	t88 = (x6981>>(x6982^(x6983/x6984)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x7025 = 93U;
	int8_t x7026 = 15;
	uint16_t x7027 = 15U;
	int16_t x7028 = INT16_MIN;
	volatile int32_t t89 = -841751;

	t89 = (x7025>>(x7026^(x7027/x7028)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x7063 = -1;
	int16_t x7064 = -9057;
	static volatile int64_t t90 = INT64_MAX;

	t90 = (x7061>>(x7062^(x7063/x7064)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x7089 = 16812903677LLU;
	uint8_t x7090 = 5U;
	int8_t x7091 = 2;
	volatile int32_t x7092 = -795112495;

	t91 = (x7089>>(x7090^(x7091/x7092)));

	if (t91 != 525403239LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x7145 = 2LL;
	volatile int32_t x7146 = 8;
	int16_t x7147 = -3;
	static int64_t x7148 = 2967387530LL;
	static volatile int64_t t92 = 9106LL;

	t92 = (x7145>>(x7146^(x7147/x7148)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x7202 = 14U;
	static int8_t x7203 = -31;

	t93 = (x7201>>(x7202^(x7203/x7204)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x7253 = INT32_MAX;
	int32_t x7254 = 6;
	uint16_t x7255 = 1223U;
	int16_t x7256 = -3957;

	t94 = (x7253>>(x7254^(x7255/x7256)));

	if (t94 != 33554431) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x7261 = INT16_MAX;
	int8_t x7262 = 0;
	int64_t x7263 = -1LL;
	volatile int32_t t95 = -68;

	t95 = (x7261>>(x7262^(x7263/x7264)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x7285 = INT32_MAX;
	int64_t x7287 = -1LL;
	int16_t x7288 = -1;
	volatile int32_t t96 = -43866;

	t96 = (x7285>>(x7286^(x7287/x7288)));

	if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x7337 = 1U;
	int8_t x7338 = 1;
	int64_t x7340 = 80764338197833530LL;
	static int32_t t97 = -1;

	t97 = (x7337>>(x7338^(x7339/x7340)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x7342 = 1U;
	int32_t x7343 = -1;
	volatile uint64_t t98 = 62096848016448LLU;

	t98 = (x7341>>(x7342^(x7343/x7344)));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x7357 = 3076LL;
	volatile uint8_t x7358 = 1U;
	uint64_t x7359 = 3092349262382908LLU;
	static int16_t x7360 = -1874;
	static volatile int64_t t99 = 4934592LL;

	t99 = (x7357>>(x7358^(x7359/x7360)));

	if (t99 != 1538LL) { NG(); } else { ; }
	
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

