#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x47 = UINT32_MAX;
volatile uint64_t t0 = 4015832205LLU;
static uint64_t t1 = 39LLU;
int32_t x165 = INT32_MAX;
volatile int64_t t3 = 48653988213813915LL;
volatile uint64_t x346 = 16LLU;
static int64_t x396 = -1LL;
volatile int8_t x570 = -1;
volatile int32_t t7 = -18131;
uint64_t x649 = UINT64_MAX;
static volatile uint32_t x664 = 12136U;
volatile int64_t x735 = -1LL;
int32_t x779 = -1;
static volatile int8_t x810 = -1;
static int16_t x975 = -17;
int16_t x1079 = -1;
uint32_t x1128 = 296209U;
static uint64_t t18 = 46877844017LLU;
volatile int32_t x1696 = 2508;
uint64_t x1868 = UINT64_MAX;
static int16_t x1882 = -1;
int8_t x2085 = 16;
static volatile int8_t x2088 = -1;
int32_t x2137 = 24813737;
uint16_t x2139 = 2U;
static int32_t x2146 = -1;
static int64_t x2148 = -161053137570713LL;
int16_t x2210 = -1;
volatile int32_t t27 = 229223904;
int32_t t29 = 7;
volatile uint32_t x2445 = 2U;
volatile int8_t x2446 = -1;
uint8_t x2448 = UINT8_MAX;
volatile int32_t x2530 = 0;
uint8_t x2630 = 96U;
int64_t x2738 = INT64_MIN;
int64_t x3096 = INT64_MIN;
static volatile int64_t t34 = -746775372146256LL;
int16_t x3406 = 4;
int32_t x3407 = -1;
uint64_t x3515 = UINT64_MAX;
int64_t x3516 = -2671380904359828437LL;
uint32_t t40 = 43257841U;
volatile uint16_t x3641 = 11U;
volatile int16_t x3643 = -1;
uint64_t x3646 = UINT64_MAX;
int16_t x3647 = -1;
static int32_t t42 = -56;
uint64_t x3657 = 117598182825294LLU;
volatile uint8_t x3694 = UINT8_MAX;
static int16_t x3853 = 1821;
int8_t x3856 = INT8_MIN;
static int8_t x4010 = 0;
volatile int16_t x4394 = INT16_MIN;
static volatile int64_t t52 = -1011138146905LL;
uint8_t x4540 = 1U;
static int32_t x4544 = INT32_MIN;
volatile int16_t x4577 = INT16_MAX;
static int32_t t55 = 1945636;
int32_t x4858 = INT32_MIN;
uint64_t x5034 = UINT64_MAX;
uint64_t x5035 = UINT64_MAX;
int32_t x5044 = 108;
uint8_t x5237 = 6U;
int64_t x5347 = -1LL;
static uint32_t x5348 = 1039669917U;
uint32_t t62 = 25106356U;
uint8_t x5417 = 95U;
int32_t x5419 = INT32_MIN;
volatile int32_t x5518 = -1;
static uint8_t x5520 = UINT8_MAX;
volatile int16_t x5593 = 11;
int8_t x6042 = -1;
uint64_t t67 = 2209585781LLU;
int32_t t68 = -839034;
int64_t x6265 = 1474934164253201198LL;
int16_t x6288 = -1;
int8_t x6515 = INT8_MIN;
uint8_t x6516 = 90U;
static volatile int32_t x6678 = -1;
int64_t x6681 = 4617004157914300LL;
uint64_t x6682 = 9LLU;
static uint8_t x6913 = UINT8_MAX;
int32_t x6916 = 41046;
volatile int32_t t76 = 87;
int64_t x6964 = 1165759LL;
static uint32_t x7071 = UINT32_MAX;
volatile uint64_t x7213 = 312172176635881LLU;
volatile int64_t x7478 = INT64_MIN;
uint8_t x7480 = 1U;
int32_t x7813 = 1;
int64_t x7814 = -1LL;
volatile int8_t x7898 = -1;
static volatile int32_t t90 = 7247951;
uint16_t x8077 = 11340U;
static int64_t x8237 = 36255873500694535LL;
static volatile uint32_t x8412 = 4096U;
static uint64_t t97 = 163LLU;
volatile int8_t x8598 = -1;
volatile int64_t t98 = 492LL;
uint32_t x8682 = 14U;


void f0(void) {
	uint64_t x45 = 108668711LLU;
	uint8_t x46 = 5U;
	int16_t x48 = 3986;

	t0 = ((x45<<(x46-x47))+x48);

	if (t0 != 6954801490LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x49 = 28696U;
	uint16_t x50 = 29U;
	int8_t x51 = 18;
	uint64_t x52 = UINT64_MAX;

	t1 = ((x49<<(x50-x51))+x52);

	if (t1 != 58769407LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = UINT64_MAX;
	volatile int64_t x95 = -1LL;
	int16_t x96 = -1;
	static volatile int32_t t2 = -49452975;

	t2 = ((x93<<(x94-x95))+x96);

	if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;

	t3 = ((x165<<(x166-x167))+x168);

	if (t3 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x345 = UINT64_MAX;
	uint8_t x347 = 13U;
	volatile uint16_t x348 = UINT16_MAX;
	uint64_t t4 = 3458177872LLU;

	t4 = ((x345<<(x346-x347))+x348);

	if (t4 != 65527LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x393 = 6747439;
	uint64_t x394 = 12LLU;
	volatile uint16_t x395 = 7U;
	int64_t t5 = 780499LL;

	t5 = ((x393<<(x394-x395))+x396);

	if (t5 != 215918047LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x509 = UINT8_MAX;
	volatile uint8_t x510 = 12U;
	uint64_t x511 = UINT64_MAX;
	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t6 = 2830089602LLU;

	t6 = ((x509<<(x510-x511))+x512);

	if (t6 != 2088959LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x569 = UINT16_MAX;
	volatile int8_t x571 = -3;
	static volatile uint16_t x572 = 15U;

	t7 = ((x569<<(x570-x571))+x572);

	if (t7 != 262155) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x650 = UINT32_MAX;
	static int32_t x651 = -1;
	static uint16_t x652 = 129U;
	static volatile uint64_t t8 = 55124173098217LLU;

	t8 = ((x649<<(x650-x651))+x652);

	if (t8 != 128LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x661 = 23U;
	uint32_t x662 = 0U;
	int32_t x663 = 0;
	volatile uint32_t t9 = 708032307U;

	t9 = ((x661<<(x662-x663))+x664);

	if (t9 != 12159U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x733 = INT8_MAX;
	static int32_t x734 = -1;
	volatile int8_t x736 = INT8_MIN;
	int32_t t10 = 75961891;

	t10 = ((x733<<(x734-x735))+x736);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x777 = 26722520199LLU;
	volatile uint8_t x778 = 1U;
	uint32_t x780 = 423U;
	uint64_t t11 = 1269333010901865258LLU;

	t11 = ((x777<<(x778-x779))+x780);

	if (t11 != 106890081219LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x809 = INT8_MAX;
	static int8_t x811 = -5;
	static volatile uint32_t x812 = UINT32_MAX;
	volatile uint32_t t12 = 54827U;

	t12 = ((x809<<(x810-x811))+x812);

	if (t12 != 2031U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x953 = UINT16_MAX;
	static uint16_t x954 = 0U;
	uint16_t x955 = 0U;
	uint8_t x956 = 63U;
	static volatile int32_t t13 = -234048;

	t13 = ((x953<<(x954-x955))+x956);

	if (t13 != 65598) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x973 = 36U;
	int16_t x974 = 0;
	int16_t x976 = INT16_MIN;
	int32_t t14 = 2592614;

	t14 = ((x973<<(x974-x975))+x976);

	if (t14 != 4685824) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x1073 = 928743669U;
	uint32_t x1074 = UINT32_MAX;
	static volatile int8_t x1075 = -7;
	volatile int32_t x1076 = INT32_MIN;
	static volatile uint32_t t15 = 52245714U;

	t15 = ((x1073<<(x1074-x1075))+x1076);

	if (t15 != 1457536320U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x1077 = 7314755LLU;
	int16_t x1078 = -1;
	int64_t x1080 = -211654712LL;
	uint64_t t16 = 693278127252LLU;

	t16 = ((x1077<<(x1078-x1079))+x1080);

	if (t16 != 18446744073505211659LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1125 = UINT64_MAX;
	uint64_t x1126 = UINT64_MAX;
	static volatile int8_t x1127 = -14;
	uint64_t t17 = 880LLU;

	t17 = ((x1125<<(x1126-x1127))+x1128);

	if (t17 != 288017LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1381 = 0U;
	int16_t x1382 = -1;
	static uint32_t x1383 = UINT32_MAX;
	volatile uint64_t x1384 = 241291708038LLU;

	t18 = ((x1381<<(x1382-x1383))+x1384);

	if (t18 != 241291708038LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1689 = 13351789U;
	volatile int16_t x1690 = INT16_MIN;
	static int16_t x1691 = INT16_MIN;
	int32_t x1692 = INT32_MIN;
	volatile uint32_t t19 = 13U;

	t19 = ((x1689<<(x1690-x1691))+x1692);

	if (t19 != 2160835437U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1693 = 30550458U;
	uint8_t x1694 = 9U;
	int8_t x1695 = -1;
	static volatile uint32_t t20 = 31086611U;

	t20 = ((x1693<<(x1694-x1695))+x1696);

	if (t20 != 1218900428U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1865 = 997U;
	int16_t x1866 = 0;
	uint64_t x1867 = UINT64_MAX;
	volatile uint64_t t21 = 3883192LLU;

	t21 = ((x1865<<(x1866-x1867))+x1868);

	if (t21 != 1993LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1881 = UINT16_MAX;
	static uint32_t x1883 = UINT32_MAX;
	int16_t x1884 = -1;
	int32_t t22 = 13656193;

	t22 = ((x1881<<(x1882-x1883))+x1884);

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1917 = UINT64_MAX;
	volatile int32_t x1918 = -1;
	int64_t x1919 = -1LL;
	uint16_t x1920 = UINT16_MAX;
	volatile uint64_t t23 = 28348539190LLU;

	t23 = ((x1917<<(x1918-x1919))+x1920);

	if (t23 != 65534LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x2086 = -1;
	volatile int32_t x2087 = -1;
	volatile int32_t t24 = -2213789;

	t24 = ((x2085<<(x2086-x2087))+x2088);

	if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2138 = 8;
	uint64_t x2140 = 2331671439LLU;
	volatile uint64_t t25 = 185LLU;

	t25 = ((x2137<<(x2138-x2139))+x2140);

	if (t25 != 3919750607LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2145 = 637U;
	uint32_t x2147 = UINT32_MAX;
	volatile int64_t t26 = -1349LL;

	t26 = ((x2145<<(x2146-x2147))+x2148);

	if (t26 != -161053137570076LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2209 = 0U;
	uint64_t x2211 = UINT64_MAX;
	int16_t x2212 = -1;

	t27 = ((x2209<<(x2210-x2211))+x2212);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2313 = 44;
	uint64_t x2314 = UINT64_MAX;
	static int8_t x2315 = -1;
	static int64_t x2316 = 1LL;
	int64_t t28 = 243LL;

	t28 = ((x2313<<(x2314-x2315))+x2316);

	if (t28 != 45LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x2357 = INT16_MAX;
	int32_t x2358 = -1;
	int64_t x2359 = -1LL;
	int8_t x2360 = INT8_MIN;

	t29 = ((x2357<<(x2358-x2359))+x2360);

	if (t29 != 32639) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2447 = -1;
	uint32_t t30 = 713649222U;

	t30 = ((x2445<<(x2446-x2447))+x2448);

	if (t30 != 257U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2529 = 8LLU;
	static uint64_t x2531 = UINT64_MAX;
	int32_t x2532 = INT32_MIN;
	volatile uint64_t t31 = 46589926372078LLU;

	t31 = ((x2529<<(x2530-x2531))+x2532);

	if (t31 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2629 = 4U;
	uint8_t x2631 = 76U;
	int64_t x2632 = -1LL;
	int64_t t32 = 20293665448759LL;

	t32 = ((x2629<<(x2630-x2631))+x2632);

	if (t32 != 4194303LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2737 = 123U;
	int64_t x2739 = INT64_MIN;
	int16_t x2740 = -6793;
	int32_t t33 = -22446;

	t33 = ((x2737<<(x2738-x2739))+x2740);

	if (t33 != -6670) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x3093 = UINT8_MAX;
	volatile uint32_t x3094 = UINT32_MAX;
	int16_t x3095 = -1;

	t34 = ((x3093<<(x3094-x3095))+x3096);

	if (t34 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x3177 = 680055628698528604LLU;
	int64_t x3178 = INT64_MIN;
	int64_t x3179 = INT64_MIN;
	int16_t x3180 = -1;
	static volatile uint64_t t35 = 2575110687134604542LLU;

	t35 = ((x3177<<(x3178-x3179))+x3180);

	if (t35 != 680055628698528603LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x3337 = UINT8_MAX;
	volatile int32_t x3338 = INT32_MIN;
	volatile int32_t x3339 = INT32_MIN;
	int8_t x3340 = -1;
	volatile int32_t t36 = -5316;

	t36 = ((x3337<<(x3338-x3339))+x3340);

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x3405 = 1U;
	int64_t x3408 = INT64_MIN;
	static int64_t t37 = 65269LL;

	t37 = ((x3405<<(x3406-x3407))+x3408);

	if (t37 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3485 = INT16_MAX;
	int16_t x3486 = -1;
	static int8_t x3487 = -1;
	int32_t x3488 = INT32_MIN;
	volatile int32_t t38 = -11;

	t38 = ((x3485<<(x3486-x3487))+x3488);

	if (t38 != -2147450881) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3513 = 2LL;
	volatile uint16_t x3514 = 27U;
	int64_t t39 = 86080598335741LL;

	t39 = ((x3513<<(x3514-x3515))+x3516);

	if (t39 != -2671380903822957525LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x3573 = 1503006U;
	int8_t x3574 = -1;
	int16_t x3575 = -7;
	uint16_t x3576 = UINT16_MAX;

	t40 = ((x3573<<(x3574-x3575))+x3576);

	if (t40 != 96257919U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x3642 = 2;
	volatile uint16_t x3644 = 8U;
	static volatile int32_t t41 = -64;

	t41 = ((x3641<<(x3642-x3643))+x3644);

	if (t41 != 96) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3645 = 332;
	int16_t x3648 = INT16_MIN;

	t42 = ((x3645<<(x3646-x3647))+x3648);

	if (t42 != -32436) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3658 = 50U;
	uint8_t x3659 = 9U;
	int64_t x3660 = 1221852661833866452LL;
	static uint64_t t43 = 8795458742838LLU;

	t43 = ((x3657<<(x3658-x3659))+x3660);

	if (t43 != 16478530873318776020LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3693 = 586402462U;
	uint8_t x3695 = UINT8_MAX;
	uint64_t x3696 = 34201027853770LLU;
	static volatile uint64_t t44 = 787833841148949LLU;

	t44 = ((x3693<<(x3694-x3695))+x3696);

	if (t44 != 34201614256232LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3737 = 15734U;
	uint16_t x3738 = 24U;
	uint32_t x3739 = 13U;
	volatile uint16_t x3740 = 26U;
	static int32_t t45 = -6490337;

	t45 = ((x3737<<(x3738-x3739))+x3740);

	if (t45 != 32223258) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3849 = 40133LLU;
	int32_t x3850 = INT32_MIN;
	volatile int32_t x3851 = INT32_MIN;
	int16_t x3852 = INT16_MIN;
	static volatile uint64_t t46 = 1032645438729260683LLU;

	t46 = ((x3849<<(x3850-x3851))+x3852);

	if (t46 != 7365LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3854 = 10U;
	int32_t x3855 = -1;
	int32_t t47 = -119;

	t47 = ((x3853<<(x3854-x3855))+x3856);

	if (t47 != 3729280) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x4009 = INT16_MAX;
	static uint64_t x4011 = UINT64_MAX;
	static volatile int8_t x4012 = INT8_MAX;
	static int32_t t48 = -1054221656;

	t48 = ((x4009<<(x4010-x4011))+x4012);

	if (t48 != 65661) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x4189 = INT32_MAX;
	volatile int8_t x4190 = INT8_MIN;
	static volatile int8_t x4191 = INT8_MIN;
	int16_t x4192 = INT16_MIN;
	int32_t t49 = 3938567;

	t49 = ((x4189<<(x4190-x4191))+x4192);

	if (t49 != 2147450879) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x4389 = 87U;
	static uint16_t x4390 = 16U;
	uint8_t x4391 = 0U;
	volatile int32_t x4392 = -1;
	int32_t t50 = -2958231;

	t50 = ((x4389<<(x4390-x4391))+x4392);

	if (t50 != 5701631) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x4393 = 33U;
	int16_t x4395 = INT16_MIN;
	int64_t x4396 = INT64_MIN;
	int64_t t51 = 1LL;

	t51 = ((x4393<<(x4394-x4395))+x4396);

	if (t51 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4441 = 7;
	uint32_t x4442 = UINT32_MAX;
	static int16_t x4443 = -1;
	int64_t x4444 = 8816155677693760LL;

	t52 = ((x4441<<(x4442-x4443))+x4444);

	if (t52 != 8816155677693767LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4537 = 244414747LLU;
	static volatile int32_t x4538 = -1;
	static volatile int32_t x4539 = -8;
	volatile uint64_t t53 = 3441320773242248081LLU;

	t53 = ((x4537<<(x4538-x4539))+x4540);

	if (t53 != 31285087617LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x4541 = 3U;
	volatile uint32_t x4542 = UINT32_MAX;
	int16_t x4543 = -1;
	volatile int32_t t54 = 269;

	t54 = ((x4541<<(x4542-x4543))+x4544);

	if (t54 != -2147483645) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x4578 = INT32_MIN;
	int32_t x4579 = INT32_MIN;
	int32_t x4580 = -1;

	t55 = ((x4577<<(x4578-x4579))+x4580);

	if (t55 != 32766) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x4645 = UINT32_MAX;
	static uint8_t x4646 = 1U;
	uint32_t x4647 = UINT32_MAX;
	int64_t x4648 = INT64_MIN;
	volatile int64_t t56 = 218505LL;

	t56 = ((x4645<<(x4646-x4647))+x4648);

	if (t56 != -9223372032559808516LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4857 = 56U;
	int32_t x4859 = INT32_MIN;
	int8_t x4860 = -1;
	uint32_t t57 = 6U;

	t57 = ((x4857<<(x4858-x4859))+x4860);

	if (t57 != 55U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x5025 = 364U;
	int8_t x5026 = 0;
	int16_t x5027 = -1;
	int8_t x5028 = 54;
	int32_t t58 = 250994021;

	t58 = ((x5025<<(x5026-x5027))+x5028);

	if (t58 != 782) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x5033 = UINT64_MAX;
	static volatile int16_t x5036 = -1;
	volatile uint64_t t59 = 186794LLU;

	t59 = ((x5033<<(x5034-x5035))+x5036);

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x5041 = UINT8_MAX;
	uint64_t x5042 = UINT64_MAX;
	int64_t x5043 = -1LL;
	int32_t t60 = 1187;

	t60 = ((x5041<<(x5042-x5043))+x5044);

	if (t60 != 363) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x5238 = -1;
	int32_t x5239 = -20;
	volatile int8_t x5240 = -1;
	int32_t t61 = -12;

	t61 = ((x5237<<(x5238-x5239))+x5240);

	if (t61 != 3145727) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x5345 = 9U;
	int64_t x5346 = -1LL;

	t62 = ((x5345<<(x5346-x5347))+x5348);

	if (t62 != 1039669926U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x5418 = INT32_MIN;
	uint64_t x5420 = 65LLU;
	uint64_t t63 = 4148LLU;

	t63 = ((x5417<<(x5418-x5419))+x5420);

	if (t63 != 160LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x5517 = UINT64_MAX;
	static int8_t x5519 = -1;
	volatile uint64_t t64 = 178316LLU;

	t64 = ((x5517<<(x5518-x5519))+x5520);

	if (t64 != 254LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x5594 = INT64_MIN;
	static int64_t x5595 = INT64_MIN;
	volatile int32_t x5596 = -17699006;
	int32_t t65 = 1119;

	t65 = ((x5593<<(x5594-x5595))+x5596);

	if (t65 != -17698995) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x5841 = 32U;
	uint8_t x5842 = 3U;
	static uint64_t x5843 = UINT64_MAX;
	int16_t x5844 = -1;
	int32_t t66 = -196442;

	t66 = ((x5841<<(x5842-x5843))+x5844);

	if (t66 != 511) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x6041 = 7493LLU;
	uint64_t x6043 = UINT64_MAX;
	int32_t x6044 = 1;

	t67 = ((x6041<<(x6042-x6043))+x6044);

	if (t67 != 7494LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x6069 = INT8_MAX;
	int8_t x6070 = -1;
	static volatile int64_t x6071 = -4LL;
	static int8_t x6072 = INT8_MIN;

	t68 = ((x6069<<(x6070-x6071))+x6072);

	if (t68 != 888) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x6093 = 140334U;
	int16_t x6094 = 65;
	uint8_t x6095 = 54U;
	int16_t x6096 = 1;
	uint32_t t69 = 2U;

	t69 = ((x6093<<(x6094-x6095))+x6096);

	if (t69 != 287404033U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x6221 = 0;
	int64_t x6222 = -1LL;
	volatile int16_t x6223 = -1;
	uint8_t x6224 = 1U;
	volatile int32_t t70 = -613308;

	t70 = ((x6221<<(x6222-x6223))+x6224);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x6266 = 0LLU;
	int8_t x6267 = 0;
	int16_t x6268 = -1;
	int64_t t71 = -120200429606LL;

	t71 = ((x6265<<(x6266-x6267))+x6268);

	if (t71 != 1474934164253201197LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x6285 = 166U;
	int8_t x6286 = 1;
	static int8_t x6287 = -2;
	volatile int32_t t72 = 1632987;

	t72 = ((x6285<<(x6286-x6287))+x6288);

	if (t72 != 1327) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x6513 = UINT16_MAX;
	int8_t x6514 = INT8_MIN;
	volatile int32_t t73 = 114220044;

	t73 = ((x6513<<(x6514-x6515))+x6516);

	if (t73 != 65625) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6677 = UINT64_MAX;
	int16_t x6679 = -1;
	int64_t x6680 = INT64_MIN;
	static uint64_t t74 = 3814LLU;

	t74 = ((x6677<<(x6678-x6679))+x6680);

	if (t74 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x6683 = 2U;
	static int64_t x6684 = 212430974036LL;
	int64_t t75 = -8224194LL;

	t75 = ((x6681<<(x6682-x6683))+x6684);

	if (t75 != 590976744644004436LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x6914 = 1;
	uint32_t x6915 = UINT32_MAX;

	t76 = ((x6913<<(x6914-x6915))+x6916);

	if (t76 != 42066) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x6961 = UINT32_MAX;
	int64_t x6962 = INT64_MIN;
	int64_t x6963 = INT64_MIN;
	volatile int64_t t77 = -10356158287640LL;

	t77 = ((x6961<<(x6962-x6963))+x6964);

	if (t77 != 4296133054LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x7069 = 2U;
	volatile int8_t x7070 = 18;
	int8_t x7072 = INT8_MAX;
	static uint32_t t78 = 3294017U;

	t78 = ((x7069<<(x7070-x7071))+x7072);

	if (t78 != 1048703U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x7193 = UINT8_MAX;
	int16_t x7194 = -1;
	volatile int8_t x7195 = -24;
	uint32_t x7196 = 53U;
	uint32_t t79 = 29U;

	t79 = ((x7193<<(x7194-x7195))+x7196);

	if (t79 != 2139095093U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x7214 = INT8_MIN;
	int8_t x7215 = INT8_MIN;
	uint32_t x7216 = 132451747U;
	volatile uint64_t t80 = 28LLU;

	t80 = ((x7213<<(x7214-x7215))+x7216);

	if (t80 != 312172309087628LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x7325 = 13770849U;
	volatile uint32_t x7326 = UINT32_MAX;
	volatile int32_t x7327 = -6;
	int64_t x7328 = 52204264118LL;
	volatile int64_t t81 = -2112LL;

	t81 = ((x7325<<(x7326-x7327))+x7328);

	if (t81 != 52644931286LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x7449 = UINT8_MAX;
	uint16_t x7450 = 1U;
	uint8_t x7451 = 1U;
	uint32_t x7452 = 16551U;
	volatile uint32_t t82 = 1530U;

	t82 = ((x7449<<(x7450-x7451))+x7452);

	if (t82 != 16806U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x7477 = 1LL;
	int64_t x7479 = INT64_MIN;
	volatile int64_t t83 = 9645020525203280LL;

	t83 = ((x7477<<(x7478-x7479))+x7480);

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x7605 = UINT16_MAX;
	static int16_t x7606 = INT16_MAX;
	int16_t x7607 = INT16_MAX;
	volatile uint64_t x7608 = 3LLU;
	uint64_t t84 = 4482715000LLU;

	t84 = ((x7605<<(x7606-x7607))+x7608);

	if (t84 != 65538LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x7645 = 0U;
	int32_t x7646 = -1;
	int16_t x7647 = -1;
	int16_t x7648 = INT16_MIN;
	uint32_t t85 = 76602659U;

	t85 = ((x7645<<(x7646-x7647))+x7648);

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x7815 = UINT64_MAX;
	volatile uint64_t x7816 = UINT64_MAX;
	uint64_t t86 = 4414128418712890680LLU;

	t86 = ((x7813<<(x7814-x7815))+x7816);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x7897 = INT32_MAX;
	uint32_t x7899 = UINT32_MAX;
	int8_t x7900 = -1;
	volatile int32_t t87 = -374;

	t87 = ((x7897<<(x7898-x7899))+x7900);

	if (t87 != 2147483646) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x7969 = 59U;
	int64_t x7970 = -1LL;
	int8_t x7971 = -1;
	uint16_t x7972 = UINT16_MAX;
	uint32_t t88 = 58738U;

	t88 = ((x7969<<(x7970-x7971))+x7972);

	if (t88 != 65594U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x8017 = 62;
	static volatile int64_t x8018 = INT64_MIN;
	int64_t x8019 = INT64_MIN;
	volatile int64_t x8020 = -1LL;
	static volatile int64_t t89 = 2090441887LL;

	t89 = ((x8017<<(x8018-x8019))+x8020);

	if (t89 != 61LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x8037 = 20U;
	int32_t x8038 = INT32_MIN;
	int32_t x8039 = INT32_MIN;
	volatile uint8_t x8040 = 14U;

	t90 = ((x8037<<(x8038-x8039))+x8040);

	if (t90 != 34) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x8057 = 597540026;
	int16_t x8058 = INT16_MIN;
	static int16_t x8059 = INT16_MIN;
	volatile int16_t x8060 = INT16_MIN;
	volatile int32_t t91 = 111644;

	t91 = ((x8057<<(x8058-x8059))+x8060);

	if (t91 != 597507258) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x8078 = INT64_MAX;
	int64_t x8079 = INT64_MAX;
	volatile int64_t x8080 = 8697944607491LL;
	int64_t t92 = -28940328355527LL;

	t92 = ((x8077<<(x8078-x8079))+x8080);

	if (t92 != 8697944618831LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x8238 = 3U;
	static uint32_t x8239 = 3U;
	static volatile int32_t x8240 = -1;
	int64_t t93 = -1281806453030708LL;

	t93 = ((x8237<<(x8238-x8239))+x8240);

	if (t93 != 36255873500694534LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x8281 = INT32_MAX;
	volatile uint8_t x8282 = UINT8_MAX;
	uint8_t x8283 = UINT8_MAX;
	int32_t x8284 = -1;
	static int32_t t94 = 249;

	t94 = ((x8281<<(x8282-x8283))+x8284);

	if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x8409 = UINT64_MAX;
	uint8_t x8410 = 3U;
	uint32_t x8411 = UINT32_MAX;
	static volatile uint64_t t95 = 61632790706305908LLU;

	t95 = ((x8409<<(x8410-x8411))+x8412);

	if (t95 != 4080LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x8469 = UINT16_MAX;
	static uint8_t x8470 = 1U;
	volatile int8_t x8471 = 1;
	static int16_t x8472 = INT16_MIN;
	static volatile int32_t t96 = 385543;

	t96 = ((x8469<<(x8470-x8471))+x8472);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x8549 = UINT64_MAX;
	volatile uint8_t x8550 = 1U;
	static uint32_t x8551 = UINT32_MAX;
	uint16_t x8552 = 3213U;

	t97 = ((x8549<<(x8550-x8551))+x8552);

	if (t97 != 3209LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x8597 = 2738U;
	static int64_t x8599 = -1LL;
	volatile int64_t x8600 = -46LL;

	t98 = ((x8597<<(x8598-x8599))+x8600);

	if (t98 != 2692LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x8681 = 37LL;
	uint32_t x8683 = UINT32_MAX;
	static int16_t x8684 = INT16_MIN;
	volatile int64_t t99 = -5119739446LL;

	t99 = ((x8681<<(x8682-x8683))+x8684);

	if (t99 != 1179648LL) { NG(); } else { ; }
	
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

