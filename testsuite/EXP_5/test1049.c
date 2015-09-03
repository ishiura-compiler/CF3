#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -3609973148244LL;
int16_t x242 = 0;
volatile int32_t t3 = -13;
int8_t x267 = 3;
uint8_t x268 = 0U;
int32_t t4 = -14878;
int8_t x285 = INT8_MAX;
static volatile int64_t x422 = INT64_MAX;
int8_t x424 = INT8_MIN;
volatile int32_t t6 = 3816077;
int32_t x467 = 0;
int64_t x468 = -1LL;
int8_t x563 = 3;
uint8_t x566 = UINT8_MAX;
int32_t x568 = 13754;
static int16_t x571 = 1;
int8_t x572 = INT8_MIN;
volatile uint32_t x606 = 3572867U;
int8_t x688 = INT8_MAX;
int8_t x757 = -1;
uint8_t x821 = 50U;
int8_t x859 = 0;
static int16_t x946 = INT16_MAX;
volatile int16_t x947 = 1;
static int32_t x1045 = -22996;
static volatile uint8_t x1047 = 59U;
volatile uint64_t x1345 = 853523LLU;
volatile int32_t t22 = -68072;
static int8_t x1384 = -1;
static uint16_t x1445 = 0U;
uint32_t x1448 = UINT32_MAX;
static volatile uint64_t x1578 = UINT64_MAX;
uint16_t x1743 = 1U;
uint64_t x1744 = 872419901769301331LLU;
int8_t x1760 = 5;
int32_t t27 = -12425494;
static int16_t x1973 = INT16_MIN;
static int8_t x1975 = 1;
int8_t x1984 = 0;
int32_t x1992 = -120696;
int8_t x2062 = 1;
uint8_t x2241 = UINT8_MAX;
static uint32_t x2244 = 2864U;
uint64_t x2289 = 14444041379LLU;
volatile uint8_t x2298 = 2U;
int64_t x2581 = INT64_MIN;
uint8_t x2582 = UINT8_MAX;
volatile int32_t t41 = -70268045;
int32_t t42 = 9176;
volatile uint16_t x2883 = 12U;
uint64_t x3106 = 62442LLU;
int16_t x3369 = INT16_MIN;
static int16_t x3445 = INT16_MIN;
int8_t x3447 = 1;
int16_t x3813 = 3;
int64_t x3814 = 1261686900463190LL;
int8_t x4037 = INT8_MIN;
int16_t x4070 = 4917;
static int8_t x4072 = INT8_MIN;
uint32_t x4177 = 1075337U;
uint32_t x4257 = UINT32_MAX;
uint64_t x4354 = 900104395172449LLU;
uint64_t x4401 = 0LLU;
volatile uint16_t x4403 = 18U;
uint32_t x4458 = 507U;
int32_t x4460 = -79;
int8_t x4504 = -1;
volatile int32_t x4629 = INT32_MIN;
uint64_t x4665 = UINT64_MAX;
volatile uint16_t x4668 = UINT16_MAX;
volatile int8_t x4672 = INT8_MIN;
int64_t x5042 = INT64_MAX;
int32_t t72 = 1252316;
volatile uint8_t x5206 = UINT8_MAX;
static uint8_t x5207 = 0U;
int16_t x5314 = 236;
int64_t x5440 = INT64_MIN;
static int16_t x5482 = 7064;
int16_t x5483 = 11;
volatile uint64_t x5484 = 4056443317412LLU;
int32_t t77 = 111684;
uint16_t x5543 = 0U;
static int8_t x5544 = 2;
uint32_t x5633 = 432589U;
int32_t t80 = 1251994;
uint64_t x5730 = 32949912352613924LLU;
uint16_t x5733 = 11U;
int64_t x5824 = -29946576LL;
int16_t x5953 = INT16_MIN;
int32_t t84 = -1216;
static int8_t x5985 = INT8_MIN;
volatile int64_t x5987 = 0LL;
volatile uint16_t x6013 = 3029U;
int32_t x6015 = 3;
uint64_t x6016 = 11051797679631376LLU;
static volatile int16_t x6221 = INT16_MAX;
volatile uint32_t x6227 = 2U;
static volatile int32_t t89 = 5;
uint64_t x6348 = 322LLU;
uint32_t x6435 = 0U;
int64_t x6436 = 251205381LL;
volatile uint64_t x6442 = 1LLU;
uint16_t x6443 = 31U;
int8_t x6469 = INT8_MAX;
static uint16_t x6472 = UINT16_MAX;
int16_t x6564 = -98;
int32_t t96 = -1589;
volatile int64_t x6757 = INT64_MIN;
volatile uint32_t x6758 = 0U;
int32_t x6774 = 84180139;


void f0(void) {
	uint64_t x2 = 161275069LLU;
	int8_t x3 = 35;
	int8_t x4 = -1;
	volatile int32_t t0 = 1;

	t0 = (x1<((x2>>x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x65 = 13272;
	static uint8_t x66 = UINT8_MAX;
	static volatile uint16_t x67 = 14U;
	uint16_t x68 = UINT16_MAX;
	static volatile int32_t t1 = 16562;

	t1 = (x65<((x66>>x67)*x68));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x165 = 2;
	static volatile uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 4U;
	uint64_t x168 = 1957279083321903LLU;
	volatile int32_t t2 = -259875;

	t2 = (x165<((x166>>x167)*x168));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x241 = 0U;
	static int16_t x243 = 0;
	int64_t x244 = -1LL;

	t3 = (x241<((x242>>x243)*x244));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x265 = -8331944835LL;
	uint8_t x266 = 1U;

	t4 = (x265<((x266>>x267)*x268));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x286 = INT16_MAX;
	static uint16_t x287 = 23U;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t5 = 56605154;

	t5 = (x285<((x286>>x287)*x288));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x421 = 4U;
	int16_t x423 = 14;

	t6 = (x421<((x422>>x423)*x424));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	volatile int32_t t7 = 8;

	t7 = (x465<((x466>>x467)*x468));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x561 = INT8_MIN;
	volatile int64_t x562 = 2355794168921LL;
	static int64_t x564 = -1LL;
	volatile int32_t t8 = 26;

	t8 = (x561<((x562>>x563)*x564));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x565 = -1;
	volatile uint8_t x567 = 0U;
	int32_t t9 = 361372843;

	t9 = (x565<((x566>>x567)*x568));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x569 = 167278676920072LL;
	int8_t x570 = INT8_MAX;
	volatile int32_t t10 = -6225162;

	t10 = (x569<((x570>>x571)*x572));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x601 = -5;
	uint64_t x602 = 2569001328900485LLU;
	static int8_t x603 = 0;
	static volatile uint32_t x604 = 1185U;
	static int32_t t11 = 3599;

	t11 = (x601<((x602>>x603)*x604));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x605 = 26;
	static int8_t x607 = 0;
	static int64_t x608 = -59040930LL;
	static int32_t t12 = 8480;

	t12 = (x605<((x606>>x607)*x608));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x637 = INT64_MAX;
	volatile uint16_t x638 = UINT16_MAX;
	int16_t x639 = 0;
	volatile int16_t x640 = -1;
	volatile int32_t t13 = -365544;

	t13 = (x637<((x638>>x639)*x640));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x685 = INT16_MAX;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = 0;
	int32_t t14 = 16415100;

	t14 = (x685<((x686>>x687)*x688));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x713 = UINT64_MAX;
	int32_t x714 = 14483578;
	uint32_t x715 = 0U;
	int32_t x716 = 0;
	int32_t t15 = 186469915;

	t15 = (x713<((x714>>x715)*x716));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x758 = 247467;
	int16_t x759 = 0;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t16 = 105306;

	t16 = (x757<((x758>>x759)*x760));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x822 = INT16_MAX;
	uint8_t x823 = 1U;
	uint16_t x824 = UINT16_MAX;
	volatile int32_t t17 = -3588;

	t17 = (x821<((x822>>x823)*x824));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x857 = INT16_MAX;
	uint32_t x858 = 36937077U;
	int8_t x860 = INT8_MIN;
	int32_t t18 = 139;

	t18 = (x857<((x858>>x859)*x860));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x945 = 135;
	int8_t x948 = -1;
	int32_t t19 = 6622;

	t19 = (x945<((x946>>x947)*x948));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1046 = INT64_MAX;
	int16_t x1048 = INT16_MIN;
	int32_t t20 = 33597;

	t20 = (x1045<((x1046>>x1047)*x1048));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1346 = 5U;
	uint8_t x1347 = 30U;
	int64_t x1348 = 72979907022LL;
	volatile int32_t t21 = 2033251;

	t21 = (x1345<((x1346>>x1347)*x1348));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1349 = UINT16_MAX;
	uint64_t x1350 = 253009527LLU;
	static int8_t x1351 = 7;
	int16_t x1352 = INT16_MIN;

	t22 = (x1349<((x1350>>x1351)*x1352));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1381 = -1;
	int64_t x1382 = 260349536LL;
	static int8_t x1383 = 3;
	int32_t t23 = 1259525;

	t23 = (x1381<((x1382>>x1383)*x1384));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1446 = 3;
	static uint8_t x1447 = 4U;
	static volatile int32_t t24 = 0;

	t24 = (x1445<((x1446>>x1447)*x1448));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1577 = 61U;
	uint8_t x1579 = 23U;
	int32_t x1580 = -228303;
	volatile int32_t t25 = -316609;

	t25 = (x1577<((x1578>>x1579)*x1580));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1741 = UINT32_MAX;
	static volatile uint64_t x1742 = UINT64_MAX;
	volatile int32_t t26 = 1685441;

	t26 = (x1741<((x1742>>x1743)*x1744));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1757 = INT16_MAX;
	uint64_t x1758 = 14419352194169855LLU;
	static uint8_t x1759 = 17U;

	t27 = (x1757<((x1758>>x1759)*x1760));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1974 = 10U;
	static uint16_t x1976 = 2U;
	int32_t t28 = 1253;

	t28 = (x1973<((x1974>>x1975)*x1976));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1981 = 345122919LLU;
	uint16_t x1982 = UINT16_MAX;
	static uint16_t x1983 = 1U;
	volatile int32_t t29 = -11926;

	t29 = (x1981<((x1982>>x1983)*x1984));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1989 = 362;
	uint8_t x1990 = 45U;
	uint32_t x1991 = 1U;
	static volatile int32_t t30 = -4152;

	t30 = (x1989<((x1990>>x1991)*x1992));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2061 = 423404LLU;
	static uint8_t x2063 = 3U;
	int16_t x2064 = INT16_MIN;
	int32_t t31 = -8;

	t31 = (x2061<((x2062>>x2063)*x2064));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2209 = 6U;
	static int8_t x2210 = INT8_MAX;
	int16_t x2211 = 2;
	volatile int8_t x2212 = INT8_MAX;
	volatile int32_t t32 = 26506;

	t32 = (x2209<((x2210>>x2211)*x2212));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2242 = UINT8_MAX;
	int32_t x2243 = 18;
	static int32_t t33 = -273933173;

	t33 = (x2241<((x2242>>x2243)*x2244));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2290 = UINT64_MAX;
	static uint16_t x2291 = 2U;
	uint16_t x2292 = 189U;
	int32_t t34 = 4924713;

	t34 = (x2289<((x2290>>x2291)*x2292));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2297 = INT64_MIN;
	static uint8_t x2299 = 9U;
	uint16_t x2300 = UINT16_MAX;
	volatile int32_t t35 = -397;

	t35 = (x2297<((x2298>>x2299)*x2300));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2345 = -17748411302998543LL;
	int8_t x2346 = INT8_MAX;
	int8_t x2347 = 0;
	uint16_t x2348 = 330U;
	volatile int32_t t36 = -1848;

	t36 = (x2345<((x2346>>x2347)*x2348));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2361 = INT16_MIN;
	uint64_t x2362 = 4LLU;
	uint8_t x2363 = 2U;
	int16_t x2364 = INT16_MIN;
	static volatile int32_t t37 = 2;

	t37 = (x2361<((x2362>>x2363)*x2364));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2409 = 25U;
	uint64_t x2410 = 318478LLU;
	int64_t x2411 = 2LL;
	int32_t x2412 = -126069390;
	volatile int32_t t38 = -11578631;

	t38 = (x2409<((x2410>>x2411)*x2412));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2583 = 0;
	int32_t x2584 = -1;
	static int32_t t39 = -772;

	t39 = (x2581<((x2582>>x2583)*x2584));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2617 = 48;
	int64_t x2618 = 3836LL;
	uint8_t x2619 = 0U;
	static uint64_t x2620 = UINT64_MAX;
	static int32_t t40 = -49;

	t40 = (x2617<((x2618>>x2619)*x2620));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2693 = INT16_MIN;
	int64_t x2694 = 978980LL;
	uint64_t x2695 = 1LLU;
	int8_t x2696 = 12;

	t41 = (x2693<((x2694>>x2695)*x2696));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2709 = 266;
	volatile uint8_t x2710 = 1U;
	uint8_t x2711 = 0U;
	int16_t x2712 = -1;

	t42 = (x2709<((x2710>>x2711)*x2712));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2881 = UINT32_MAX;
	static uint64_t x2882 = 8592781LLU;
	static volatile uint32_t x2884 = 494857U;
	volatile int32_t t43 = -828478;

	t43 = (x2881<((x2882>>x2883)*x2884));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3105 = 96638868;
	int16_t x3107 = 55;
	int8_t x3108 = INT8_MIN;
	static int32_t t44 = -6;

	t44 = (x3105<((x3106>>x3107)*x3108));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3370 = INT8_MAX;
	static uint8_t x3371 = 0U;
	static int16_t x3372 = INT16_MIN;
	volatile int32_t t45 = -2635;

	t45 = (x3369<((x3370>>x3371)*x3372));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x3446 = 333268965LL;
	uint8_t x3448 = 0U;
	volatile int32_t t46 = -693526;

	t46 = (x3445<((x3446>>x3447)*x3448));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3505 = -1;
	uint64_t x3506 = 136457579203277LLU;
	uint16_t x3507 = 43U;
	uint32_t x3508 = UINT32_MAX;
	volatile int32_t t47 = 215692974;

	t47 = (x3505<((x3506>>x3507)*x3508));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x3801 = INT8_MIN;
	uint64_t x3802 = UINT64_MAX;
	uint32_t x3803 = 0U;
	uint16_t x3804 = UINT16_MAX;
	int32_t t48 = -7235;

	t48 = (x3801<((x3802>>x3803)*x3804));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3815 = 0U;
	uint64_t x3816 = 2092381745586LLU;
	int32_t t49 = -7575;

	t49 = (x3813<((x3814>>x3815)*x3816));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3905 = INT8_MIN;
	int16_t x3906 = 0;
	int8_t x3907 = 31;
	int8_t x3908 = -5;
	int32_t t50 = -92352;

	t50 = (x3905<((x3906>>x3907)*x3908));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3945 = INT32_MIN;
	int64_t x3946 = 15538661559387LL;
	volatile int8_t x3947 = 4;
	int8_t x3948 = -1;
	int32_t t51 = 13797338;

	t51 = (x3945<((x3946>>x3947)*x3948));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4038 = UINT8_MAX;
	uint32_t x4039 = 2U;
	int32_t x4040 = -707;
	static volatile int32_t t52 = -1;

	t52 = (x4037<((x4038>>x4039)*x4040));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x4069 = INT16_MIN;
	static volatile int8_t x4071 = 15;
	volatile int32_t t53 = -8;

	t53 = (x4069<((x4070>>x4071)*x4072));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x4178 = INT64_MAX;
	uint16_t x4179 = 61U;
	uint16_t x4180 = 17U;
	int32_t t54 = -4;

	t54 = (x4177<((x4178>>x4179)*x4180));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4213 = INT8_MIN;
	int64_t x4214 = INT64_MAX;
	uint16_t x4215 = 0U;
	uint8_t x4216 = 1U;
	volatile int32_t t55 = 260;

	t55 = (x4213<((x4214>>x4215)*x4216));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4258 = 373288280449106612LLU;
	static uint16_t x4259 = 7U;
	uint64_t x4260 = 13100759019997LLU;
	volatile int32_t t56 = -178768;

	t56 = (x4257<((x4258>>x4259)*x4260));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x4353 = 56LLU;
	uint32_t x4355 = 0U;
	int64_t x4356 = -26272740899LL;
	int32_t t57 = -63407021;

	t57 = (x4353<((x4354>>x4355)*x4356));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4361 = UINT32_MAX;
	int32_t x4362 = 11542;
	uint32_t x4363 = 22U;
	int64_t x4364 = INT64_MAX;
	int32_t t58 = -7325;

	t58 = (x4361<((x4362>>x4363)*x4364));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4381 = 0;
	int8_t x4382 = 2;
	uint8_t x4383 = 2U;
	volatile uint16_t x4384 = UINT16_MAX;
	volatile int32_t t59 = 14415319;

	t59 = (x4381<((x4382>>x4383)*x4384));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4402 = 3610;
	static volatile int32_t x4404 = INT32_MIN;
	int32_t t60 = 1039458;

	t60 = (x4401<((x4402>>x4403)*x4404));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x4457 = UINT32_MAX;
	uint32_t x4459 = 28U;
	static volatile int32_t t61 = 1338868;

	t61 = (x4457<((x4458>>x4459)*x4460));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4501 = INT8_MIN;
	uint32_t x4502 = UINT32_MAX;
	volatile uint8_t x4503 = 18U;
	volatile int32_t t62 = -49295193;

	t62 = (x4501<((x4502>>x4503)*x4504));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4630 = 54;
	int8_t x4631 = 2;
	uint16_t x4632 = 12013U;
	volatile int32_t t63 = -15092;

	t63 = (x4629<((x4630>>x4631)*x4632));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4661 = 3U;
	int8_t x4662 = INT8_MAX;
	uint16_t x4663 = 14U;
	uint32_t x4664 = 1742U;
	int32_t t64 = -26;

	t64 = (x4661<((x4662>>x4663)*x4664));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4666 = 1189LLU;
	int64_t x4667 = 3LL;
	static int32_t t65 = -16272;

	t65 = (x4665<((x4666>>x4667)*x4668));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4669 = 53U;
	int16_t x4670 = 25;
	int8_t x4671 = 0;
	int32_t t66 = 18123;

	t66 = (x4669<((x4670>>x4671)*x4672));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4717 = 1U;
	static uint16_t x4718 = UINT16_MAX;
	uint8_t x4719 = 2U;
	int8_t x4720 = -1;
	static int32_t t67 = -1;

	t67 = (x4717<((x4718>>x4719)*x4720));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x4789 = INT16_MIN;
	uint8_t x4790 = 5U;
	int8_t x4791 = 13;
	int8_t x4792 = INT8_MIN;
	int32_t t68 = -4269;

	t68 = (x4789<((x4790>>x4791)*x4792));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4961 = UINT16_MAX;
	uint16_t x4962 = 316U;
	static volatile uint8_t x4963 = 2U;
	uint8_t x4964 = 3U;
	volatile int32_t t69 = 66900095;

	t69 = (x4961<((x4962>>x4963)*x4964));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x5037 = INT32_MAX;
	uint16_t x5038 = UINT16_MAX;
	uint16_t x5039 = 6U;
	uint8_t x5040 = 123U;
	static int32_t t70 = 4;

	t70 = (x5037<((x5038>>x5039)*x5040));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x5041 = INT32_MIN;
	int8_t x5043 = 1;
	uint64_t x5044 = UINT64_MAX;
	volatile int32_t t71 = 4;

	t71 = (x5041<((x5042>>x5043)*x5044));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5165 = 7;
	int64_t x5166 = 309518889LL;
	uint8_t x5167 = 4U;
	volatile int16_t x5168 = 33;

	t72 = (x5165<((x5166>>x5167)*x5168));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x5205 = -1;
	static uint16_t x5208 = 3969U;
	volatile int32_t t73 = -238654;

	t73 = (x5205<((x5206>>x5207)*x5208));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5221 = 4U;
	volatile uint32_t x5222 = UINT32_MAX;
	int16_t x5223 = 1;
	volatile int32_t x5224 = INT32_MAX;
	int32_t t74 = -801910;

	t74 = (x5221<((x5222>>x5223)*x5224));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x5313 = 3519499838523LLU;
	int8_t x5315 = 2;
	static int8_t x5316 = -1;
	volatile int32_t t75 = -1;

	t75 = (x5313<((x5314>>x5315)*x5316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x5437 = INT64_MAX;
	volatile uint64_t x5438 = 65695690235LLU;
	static uint8_t x5439 = 3U;
	static int32_t t76 = 173;

	t76 = (x5437<((x5438>>x5439)*x5440));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5481 = -1;

	t77 = (x5481<((x5482>>x5483)*x5484));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x5541 = INT16_MIN;
	volatile uint32_t x5542 = UINT32_MAX;
	int32_t t78 = -260815;

	t78 = (x5541<((x5542>>x5543)*x5544));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x5634 = 248LLU;
	volatile int16_t x5635 = 1;
	static int16_t x5636 = -5;
	volatile int32_t t79 = -1303714;

	t79 = (x5633<((x5634>>x5635)*x5636));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5701 = UINT64_MAX;
	static int64_t x5702 = 1396699721753594149LL;
	int8_t x5703 = 4;
	volatile int16_t x5704 = -1;

	t80 = (x5701<((x5702>>x5703)*x5704));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5729 = -121;
	uint32_t x5731 = 10U;
	uint16_t x5732 = 160U;
	int32_t t81 = 253230953;

	t81 = (x5729<((x5730>>x5731)*x5732));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x5734 = 3U;
	volatile int8_t x5735 = 0;
	int32_t x5736 = -1;
	static volatile int32_t t82 = 445149;

	t82 = (x5733<((x5734>>x5735)*x5736));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5821 = INT64_MIN;
	volatile uint64_t x5822 = 17270LLU;
	int8_t x5823 = 1;
	int32_t t83 = -370536421;

	t83 = (x5821<((x5822>>x5823)*x5824));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5954 = 111448732623514LLU;
	int8_t x5955 = 2;
	static int32_t x5956 = INT32_MIN;

	t84 = (x5953<((x5954>>x5955)*x5956));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5986 = INT8_MAX;
	int8_t x5988 = INT8_MIN;
	int32_t t85 = 1453;

	t85 = (x5985<((x5986>>x5987)*x5988));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6014 = INT16_MAX;
	volatile int32_t t86 = 43;

	t86 = (x6013<((x6014>>x6015)*x6016));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6073 = 3U;
	uint64_t x6074 = UINT64_MAX;
	volatile uint16_t x6075 = 0U;
	static uint16_t x6076 = UINT16_MAX;
	static int32_t t87 = -12;

	t87 = (x6073<((x6074>>x6075)*x6076));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6222 = 1;
	int64_t x6223 = 24LL;
	int16_t x6224 = -80;
	volatile int32_t t88 = 37135;

	t88 = (x6221<((x6222>>x6223)*x6224));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x6225 = INT64_MAX;
	uint64_t x6226 = UINT64_MAX;
	volatile uint64_t x6228 = UINT64_MAX;

	t89 = (x6225<((x6226>>x6227)*x6228));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6301 = INT8_MIN;
	volatile int16_t x6302 = 0;
	int8_t x6303 = 1;
	static int8_t x6304 = -2;
	int32_t t90 = -253204142;

	t90 = (x6301<((x6302>>x6303)*x6304));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6345 = -1LL;
	volatile int16_t x6346 = 458;
	uint8_t x6347 = 1U;
	volatile int32_t t91 = -16;

	t91 = (x6345<((x6346>>x6347)*x6348));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6369 = 1956807U;
	volatile int64_t x6370 = 70563443822989960LL;
	uint32_t x6371 = 13U;
	static int8_t x6372 = INT8_MIN;
	volatile int32_t t92 = 0;

	t92 = (x6369<((x6370>>x6371)*x6372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6433 = INT64_MIN;
	static volatile uint16_t x6434 = UINT16_MAX;
	static int32_t t93 = 599;

	t93 = (x6433<((x6434>>x6435)*x6436));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6441 = 23074U;
	volatile int32_t x6444 = -1;
	int32_t t94 = 150066;

	t94 = (x6441<((x6442>>x6443)*x6444));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x6470 = INT8_MAX;
	int16_t x6471 = 10;
	static volatile int32_t t95 = -482;

	t95 = (x6469<((x6470>>x6471)*x6472));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x6561 = 43U;
	int64_t x6562 = INT64_MAX;
	uint8_t x6563 = 11U;

	t96 = (x6561<((x6562>>x6563)*x6564));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6605 = INT32_MIN;
	static uint16_t x6606 = 6U;
	static int64_t x6607 = 0LL;
	static volatile uint32_t x6608 = UINT32_MAX;
	volatile int32_t t97 = 258243067;

	t97 = (x6605<((x6606>>x6607)*x6608));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6759 = 5U;
	int16_t x6760 = -1;
	int32_t t98 = -216109298;

	t98 = (x6757<((x6758>>x6759)*x6760));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6773 = 4152835612LL;
	uint8_t x6775 = 25U;
	uint64_t x6776 = UINT64_MAX;
	volatile int32_t t99 = 8059859;

	t99 = (x6773<((x6774>>x6775)*x6776));

	if (t99 != 1) { NG(); } else { ; }
	
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

