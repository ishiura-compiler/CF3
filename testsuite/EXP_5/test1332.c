#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x102 = -1LL;
int8_t x176 = 5;
static uint64_t x201 = 75209089534686476LLU;
uint16_t x202 = 152U;
uint32_t t4 = 1019U;
int64_t t5 = 8756270446LL;
static uint8_t x488 = 1U;
uint64_t x756 = 17LLU;
static volatile int32_t t9 = 19587;
volatile uint32_t x777 = UINT32_MAX;
volatile uint32_t t11 = 12913U;
int32_t x916 = 1;
volatile int32_t t13 = 6704;
uint64_t x1141 = 395658825887LLU;
int32_t x1143 = -1;
volatile int32_t t16 = -6;
static volatile int32_t t17 = INT32_MAX;
int32_t t19 = -1360297;
int32_t x1866 = 204372;
volatile uint8_t x1868 = 5U;
static uint32_t t20 = 12500131U;
static int8_t x1891 = -1;
uint16_t x2055 = UINT16_MAX;
volatile int32_t x2162 = INT32_MIN;
int64_t x2229 = 8137529964100LL;
static volatile uint16_t x2269 = UINT16_MAX;
static int16_t x2339 = 2;
static uint16_t x2381 = 175U;
static int8_t x2405 = 24;
uint16_t x2406 = 59U;
uint64_t x2445 = 8480535655LLU;
volatile int64_t x2447 = -1LL;
uint16_t x2513 = 0U;
volatile int32_t t34 = 11;
volatile uint32_t t36 = UINT32_MAX;
uint64_t x2843 = 9556LLU;
uint32_t x2844 = 2U;
int16_t x2889 = 5821;
static int64_t x2890 = INT64_MIN;
int8_t x2891 = -1;
volatile int32_t t38 = -425583;
volatile uint16_t x2925 = UINT16_MAX;
int32_t x2926 = INT32_MIN;
uint8_t x2928 = 12U;
volatile int32_t t39 = 225;
volatile uint64_t t40 = 380454686206LLU;
int8_t x3131 = INT8_MIN;
uint16_t x3215 = 5850U;
volatile uint64_t t44 = 7328068369LLU;
volatile int64_t x3532 = 3LL;
int16_t x3596 = 2;
int16_t x3689 = 8598;
int16_t x3690 = INT16_MIN;
int64_t x3790 = -29333LL;
uint64_t x3795 = UINT64_MAX;
uint64_t x3813 = UINT64_MAX;
volatile int64_t x3814 = INT64_MIN;
uint8_t x3816 = 10U;
static uint8_t x4144 = 5U;
uint64_t x4193 = 1291379943491875726LLU;
int8_t x4583 = INT8_MIN;
volatile int32_t t59 = 4;
int8_t x4806 = INT8_MIN;
uint8_t x4809 = 0U;
volatile uint32_t x4812 = 25U;
uint64_t x4947 = 3721509856208923LLU;
int16_t x5005 = INT16_MAX;
int16_t x5112 = 3;
int32_t t68 = 462;
int32_t t70 = 13707734;
static int8_t x5271 = -1;
uint32_t x5289 = 3U;
int16_t x5495 = 443;
static uint16_t x5496 = 0U;
int32_t x5745 = 208596;
volatile int32_t x5747 = INT32_MIN;
static int32_t t77 = -1;
uint32_t t78 = 278703U;
uint8_t x5808 = 9U;
int8_t x5968 = 7;
uint32_t x6152 = 12U;
int32_t x6274 = INT32_MIN;
uint8_t x6468 = 0U;
int32_t x6483 = INT32_MIN;
volatile int8_t x6484 = 1;
int8_t x6761 = 3;
int8_t x6763 = -1;
uint16_t x6764 = 2U;
volatile int32_t t95 = -22;
static int64_t x7283 = -144644231261LL;
int64_t x7467 = -12LL;
uint16_t x7468 = 0U;


void f0(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int8_t x18 = INT8_MIN;
	int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 0U;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = (x17<<((x18==x19)|x20));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x101 = 333U;
	static volatile uint32_t x103 = 0U;
	uint8_t x104 = 3U;
	int32_t t1 = 7750;

	t1 = (x101<<((x102==x103)|x104));

	if (t1 != 2664) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x173 = 190U;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = INT64_MIN;
	volatile int32_t t2 = -24238767;

	t2 = (x173<<((x174==x175)|x176));

	if (t2 != 6080) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x203 = INT16_MAX;
	int8_t x204 = 53;
	volatile uint64_t t3 = 29557073417552LLU;

	t3 = (x201<<((x202==x203)|x204));

	if (t3 != 11637301437125361664LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	static int32_t x208 = 14;

	t4 = (x205<<((x206==x207)|x208));

	if (t4 != 4294950912U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x265 = 40046058208190LL;
	volatile int64_t x266 = INT64_MIN;
	static volatile int8_t x267 = INT8_MIN;
	int16_t x268 = 3;

	t5 = (x265<<((x266==x267)|x268));

	if (t5 != 320368465665520LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x357 = 1914U;
	uint32_t x358 = 0U;
	uint16_t x359 = UINT16_MAX;
	uint8_t x360 = 0U;
	volatile int32_t t6 = -175;

	t6 = (x357<<((x358==x359)|x360));

	if (t6 != 1914) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x485 = 10268051U;
	uint16_t x486 = UINT16_MAX;
	int8_t x487 = 0;
	volatile uint32_t t7 = 17690U;

	t7 = (x485<<((x486==x487)|x488));

	if (t7 != 20536102U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x713 = 4U;
	int32_t x714 = INT32_MIN;
	uint16_t x715 = 3445U;
	uint8_t x716 = 3U;
	int32_t t8 = 226;

	t8 = (x713<<((x714==x715)|x716));

	if (t8 != 32) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x753 = 21U;
	static int16_t x754 = -1;
	int32_t x755 = -15775;

	t9 = (x753<<((x754==x755)|x756));

	if (t9 != 2752512) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x778 = INT64_MIN;
	int16_t x779 = -2;
	volatile int32_t x780 = 0;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x777<<((x778==x779)|x780));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x797 = UINT32_MAX;
	static int8_t x798 = -1;
	uint8_t x799 = 39U;
	uint8_t x800 = 3U;

	t11 = (x797<<((x798==x799)|x800));

	if (t11 != 4294967288U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x913 = UINT16_MAX;
	int8_t x914 = -46;
	volatile uint16_t x915 = UINT16_MAX;
	int32_t t12 = -21570;

	t12 = (x913<<((x914==x915)|x916));

	if (t12 != 131070) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x941 = 20;
	uint8_t x942 = 0U;
	uint32_t x943 = 4074U;
	uint8_t x944 = 4U;

	t13 = (x941<<((x942==x943)|x944));

	if (t13 != 320) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1142 = INT8_MIN;
	uint16_t x1144 = 2U;
	uint64_t t14 = 80253360385LLU;

	t14 = (x1141<<((x1142==x1143)|x1144));

	if (t14 != 1582635303548LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1221 = 7U;
	int16_t x1222 = INT16_MIN;
	int32_t x1223 = -1;
	volatile uint64_t x1224 = 2LLU;
	volatile int32_t t15 = 55;

	t15 = (x1221<<((x1222==x1223)|x1224));

	if (t15 != 28) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1469 = 157U;
	int8_t x1470 = -11;
	volatile int16_t x1471 = INT16_MIN;
	int8_t x1472 = 0;

	t16 = (x1469<<((x1470==x1471)|x1472));

	if (t16 != 157) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1629 = INT32_MAX;
	static int64_t x1630 = -66LL;
	static int8_t x1631 = INT8_MIN;
	volatile int8_t x1632 = 0;

	t17 = (x1629<<((x1630==x1631)|x1632));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1817 = 2U;
	static volatile uint64_t x1818 = 16200LLU;
	volatile uint16_t x1819 = 61U;
	uint8_t x1820 = 31U;
	static volatile uint32_t t18 = 491539U;

	t18 = (x1817<<((x1818==x1819)|x1820));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1825 = 1;
	static uint8_t x1826 = 63U;
	int64_t x1827 = INT64_MAX;
	uint8_t x1828 = 2U;

	t19 = (x1825<<((x1826==x1827)|x1828));

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1865 = 1044379979U;
	int16_t x1867 = INT16_MIN;

	t20 = (x1865<<((x1866==x1867)|x1868));

	if (t20 != 3355388256U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1889 = 105;
	int64_t x1890 = INT64_MIN;
	uint8_t x1892 = 0U;
	int32_t t21 = -920584295;

	t21 = (x1889<<((x1890==x1891)|x1892));

	if (t21 != 105) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1925 = UINT32_MAX;
	int8_t x1926 = -19;
	uint8_t x1927 = 2U;
	uint64_t x1928 = 3LLU;
	uint32_t t22 = 61631U;

	t22 = (x1925<<((x1926==x1927)|x1928));

	if (t22 != 4294967288U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1961 = INT16_MAX;
	uint16_t x1962 = UINT16_MAX;
	int8_t x1963 = INT8_MIN;
	static uint32_t x1964 = 4U;
	volatile int32_t t23 = 2;

	t23 = (x1961<<((x1962==x1963)|x1964));

	if (t23 != 524272) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x2053 = 21;
	uint8_t x2054 = UINT8_MAX;
	int8_t x2056 = 0;
	int32_t t24 = -405088813;

	t24 = (x2053<<((x2054==x2055)|x2056));

	if (t24 != 21) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2101 = 305U;
	static int32_t x2102 = INT32_MIN;
	volatile uint32_t x2103 = 12668897U;
	static uint8_t x2104 = 0U;
	uint32_t t25 = 0U;

	t25 = (x2101<<((x2102==x2103)|x2104));

	if (t25 != 305U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x2161 = 1;
	int16_t x2163 = INT16_MIN;
	static uint8_t x2164 = 21U;
	volatile int32_t t26 = 554987059;

	t26 = (x2161<<((x2162==x2163)|x2164));

	if (t26 != 2097152) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2230 = -1;
	uint32_t x2231 = 7882031U;
	int16_t x2232 = 5;
	static int64_t t27 = -7767472454034LL;

	t27 = (x2229<<((x2230==x2231)|x2232));

	if (t27 != 260400958851200LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2270 = 6693000LL;
	uint8_t x2271 = 41U;
	volatile uint32_t x2272 = 13U;
	static volatile int32_t t28 = -223331;

	t28 = (x2269<<((x2270==x2271)|x2272));

	if (t28 != 536862720) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x2337 = 11;
	uint64_t x2338 = 209573088LLU;
	int8_t x2340 = 6;
	int32_t t29 = 1140548;

	t29 = (x2337<<((x2338==x2339)|x2340));

	if (t29 != 704) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2349 = 0U;
	static volatile int8_t x2350 = 0;
	static uint32_t x2351 = UINT32_MAX;
	volatile uint8_t x2352 = 12U;
	volatile int32_t t30 = 2380;

	t30 = (x2349<<((x2350==x2351)|x2352));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2382 = INT16_MIN;
	uint64_t x2383 = UINT64_MAX;
	int8_t x2384 = 2;
	int32_t t31 = 56745;

	t31 = (x2381<<((x2382==x2383)|x2384));

	if (t31 != 700) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2407 = 150499230443307579LLU;
	volatile int8_t x2408 = 0;
	volatile int32_t t32 = 111;

	t32 = (x2405<<((x2406==x2407)|x2408));

	if (t32 != 24) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2446 = INT8_MIN;
	static uint8_t x2448 = 1U;
	uint64_t t33 = 4542860617LLU;

	t33 = (x2445<<((x2446==x2447)|x2448));

	if (t33 != 16961071310LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2514 = 2U;
	uint64_t x2515 = 1075LLU;
	uint16_t x2516 = 2U;

	t34 = (x2513<<((x2514==x2515)|x2516));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2561 = 2U;
	int64_t x2562 = INT64_MIN;
	int8_t x2563 = -1;
	uint16_t x2564 = 29U;
	static int32_t t35 = 573486;

	t35 = (x2561<<((x2562==x2563)|x2564));

	if (t35 != 1073741824) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2793 = UINT32_MAX;
	static uint16_t x2794 = UINT16_MAX;
	volatile uint64_t x2795 = 6289LLU;
	uint8_t x2796 = 0U;

	t36 = (x2793<<((x2794==x2795)|x2796));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2841 = 6;
	int8_t x2842 = -1;
	int32_t t37 = -3680857;

	t37 = (x2841<<((x2842==x2843)|x2844));

	if (t37 != 24) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2892 = 1U;

	t38 = (x2889<<((x2890==x2891)|x2892));

	if (t38 != 11642) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2927 = 0U;

	t39 = (x2925<<((x2926==x2927)|x2928));

	if (t39 != 268431360) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3121 = UINT64_MAX;
	static int16_t x3122 = -1;
	int16_t x3123 = -1;
	static int16_t x3124 = 3;

	t40 = (x3121<<((x3122==x3123)|x3124));

	if (t40 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x3129 = 73049U;
	int64_t x3130 = INT64_MIN;
	uint64_t x3132 = 12LLU;
	uint32_t t41 = 27795464U;

	t41 = (x3129<<((x3130==x3131)|x3132));

	if (t41 != 299208704U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3213 = UINT16_MAX;
	int8_t x3214 = 7;
	int8_t x3216 = 1;
	int32_t t42 = -108;

	t42 = (x3213<<((x3214==x3215)|x3216));

	if (t42 != 131070) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3381 = 169679887571060779LLU;
	int32_t x3382 = -2;
	int8_t x3383 = INT8_MAX;
	int8_t x3384 = 5;
	volatile uint64_t t43 = 1992463844998700930LLU;

	t43 = (x3381<<((x3382==x3383)|x3384));

	if (t43 != 5429756402273944928LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x3497 = 112398LLU;
	int16_t x3498 = INT16_MIN;
	static int16_t x3499 = INT16_MAX;
	int16_t x3500 = 1;

	t44 = (x3497<<((x3498==x3499)|x3500));

	if (t44 != 224796LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3529 = INT16_MAX;
	int64_t x3530 = -65478LL;
	uint32_t x3531 = 154523580U;
	static int32_t t45 = 0;

	t45 = (x3529<<((x3530==x3531)|x3532));

	if (t45 != 262136) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3593 = 848563U;
	static volatile int32_t x3594 = -1;
	volatile int8_t x3595 = 39;
	uint32_t t46 = 2088411132U;

	t46 = (x3593<<((x3594==x3595)|x3596));

	if (t46 != 3394252U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3691 = -1;
	int8_t x3692 = 15;
	static volatile int32_t t47 = 25;

	t47 = (x3689<<((x3690==x3691)|x3692));

	if (t47 != 281739264) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x3737 = UINT8_MAX;
	volatile uint64_t x3738 = 220182671142LLU;
	uint8_t x3739 = UINT8_MAX;
	static int8_t x3740 = 7;
	static volatile int32_t t48 = -1;

	t48 = (x3737<<((x3738==x3739)|x3740));

	if (t48 != 32640) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3789 = 0U;
	static volatile int32_t x3791 = -114965;
	int8_t x3792 = 23;
	static volatile int32_t t49 = -1;

	t49 = (x3789<<((x3790==x3791)|x3792));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3793 = 152976LLU;
	int16_t x3794 = -5170;
	volatile int8_t x3796 = 1;
	uint64_t t50 = 67665844522LLU;

	t50 = (x3793<<((x3794==x3795)|x3796));

	if (t50 != 305952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3815 = 10U;
	volatile uint64_t t51 = 4860914418992LLU;

	t51 = (x3813<<((x3814==x3815)|x3816));

	if (t51 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3897 = 423;
	int16_t x3898 = -1;
	uint32_t x3899 = UINT32_MAX;
	uint32_t x3900 = 0U;
	volatile int32_t t52 = 245282462;

	t52 = (x3897<<((x3898==x3899)|x3900));

	if (t52 != 846) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x4081 = 7971877U;
	uint64_t x4082 = UINT64_MAX;
	int64_t x4083 = -8109LL;
	uint8_t x4084 = 1U;
	volatile uint32_t t53 = 121920207U;

	t53 = (x4081<<((x4082==x4083)|x4084));

	if (t53 != 15943754U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x4141 = 6U;
	static uint8_t x4142 = UINT8_MAX;
	uint32_t x4143 = 29591U;
	uint32_t t54 = 9170893U;

	t54 = (x4141<<((x4142==x4143)|x4144));

	if (t54 != 192U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x4185 = 15;
	static volatile int32_t x4186 = -1;
	static uint16_t x4187 = UINT16_MAX;
	volatile int8_t x4188 = 1;
	volatile int32_t t55 = 1532;

	t55 = (x4185<<((x4186==x4187)|x4188));

	if (t55 != 30) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4194 = 15U;
	static int8_t x4195 = -1;
	int32_t x4196 = 7;
	volatile uint64_t t56 = 7634915994031LLU;

	t56 = (x4193<<((x4194==x4195)|x4196));

	if (t56 != 17722680177283680000LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4237 = UINT8_MAX;
	static int8_t x4238 = -1;
	uint32_t x4239 = 186U;
	int8_t x4240 = 7;
	static int32_t t57 = -2;

	t57 = (x4237<<((x4238==x4239)|x4240));

	if (t57 != 32640) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x4489 = 19847665882LLU;
	uint64_t x4490 = 1744186576LLU;
	uint32_t x4491 = UINT32_MAX;
	int8_t x4492 = 40;
	volatile uint64_t t58 = 93531991LLU;

	t58 = (x4489<<((x4490==x4491)|x4492));

	if (t58 != 241182273599176704LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4581 = INT8_MAX;
	volatile uint16_t x4582 = UINT16_MAX;
	volatile uint8_t x4584 = 1U;

	t59 = (x4581<<((x4582==x4583)|x4584));

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x4657 = 179152LLU;
	uint64_t x4658 = UINT64_MAX;
	int16_t x4659 = 0;
	int16_t x4660 = 0;
	uint64_t t60 = 11717LLU;

	t60 = (x4657<<((x4658==x4659)|x4660));

	if (t60 != 179152LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4677 = 935U;
	int32_t x4678 = INT32_MIN;
	volatile uint16_t x4679 = 9077U;
	volatile uint8_t x4680 = 6U;
	volatile int32_t t61 = -62;

	t61 = (x4677<<((x4678==x4679)|x4680));

	if (t61 != 59840) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4805 = UINT16_MAX;
	uint32_t x4807 = UINT32_MAX;
	static uint16_t x4808 = 15U;
	int32_t t62 = -126;

	t62 = (x4805<<((x4806==x4807)|x4808));

	if (t62 != 2147450880) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x4810 = -1LL;
	int8_t x4811 = -11;
	int32_t t63 = -1022731495;

	t63 = (x4809<<((x4810==x4811)|x4812));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4945 = UINT8_MAX;
	int8_t x4946 = INT8_MIN;
	uint16_t x4948 = 5U;
	int32_t t64 = 117784;

	t64 = (x4945<<((x4946==x4947)|x4948));

	if (t64 != 8160) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4961 = 11U;
	static uint32_t x4962 = UINT32_MAX;
	volatile int32_t x4963 = 214976706;
	volatile uint8_t x4964 = 5U;
	volatile int32_t t65 = -5837;

	t65 = (x4961<<((x4962==x4963)|x4964));

	if (t65 != 352) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x5006 = 70391724LLU;
	static int16_t x5007 = 58;
	static int8_t x5008 = 1;
	volatile int32_t t66 = -142899;

	t66 = (x5005<<((x5006==x5007)|x5008));

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x5041 = INT16_MAX;
	static uint16_t x5042 = 1033U;
	static int8_t x5043 = INT8_MAX;
	uint8_t x5044 = 0U;
	volatile int32_t t67 = 894;

	t67 = (x5041<<((x5042==x5043)|x5044));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x5109 = 1076;
	uint8_t x5110 = 0U;
	volatile uint8_t x5111 = 0U;

	t68 = (x5109<<((x5110==x5111)|x5112));

	if (t68 != 8608) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5201 = INT16_MAX;
	volatile uint8_t x5202 = 118U;
	static int64_t x5203 = INT64_MIN;
	int8_t x5204 = 5;
	volatile int32_t t69 = 812075;

	t69 = (x5201<<((x5202==x5203)|x5204));

	if (t69 != 1048544) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x5213 = UINT16_MAX;
	static uint16_t x5214 = 18U;
	static uint16_t x5215 = 38U;
	int32_t x5216 = 4;

	t70 = (x5213<<((x5214==x5215)|x5216));

	if (t70 != 1048560) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5225 = 246481U;
	uint32_t x5226 = 0U;
	volatile int8_t x5227 = INT8_MIN;
	int16_t x5228 = 0;
	uint32_t t71 = 8270787U;

	t71 = (x5225<<((x5226==x5227)|x5228));

	if (t71 != 246481U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x5233 = 0U;
	uint32_t x5234 = 824376U;
	volatile int16_t x5235 = INT16_MAX;
	uint64_t x5236 = 1LLU;
	static volatile int32_t t72 = 333;

	t72 = (x5233<<((x5234==x5235)|x5236));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x5269 = UINT32_MAX;
	uint32_t x5270 = 178U;
	volatile int8_t x5272 = 2;
	volatile uint32_t t73 = 40467377U;

	t73 = (x5269<<((x5270==x5271)|x5272));

	if (t73 != 4294967292U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5290 = UINT32_MAX;
	int64_t x5291 = -1LL;
	uint16_t x5292 = 6U;
	volatile uint32_t t74 = 1052U;

	t74 = (x5289<<((x5290==x5291)|x5292));

	if (t74 != 192U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x5493 = 92539LLU;
	volatile uint16_t x5494 = 115U;
	volatile uint64_t t75 = 231349178266LLU;

	t75 = (x5493<<((x5494==x5495)|x5496));

	if (t75 != 92539LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5725 = 82LLU;
	int64_t x5726 = INT64_MIN;
	static int64_t x5727 = -73LL;
	int8_t x5728 = 0;
	volatile uint64_t t76 = 5LLU;

	t76 = (x5725<<((x5726==x5727)|x5728));

	if (t76 != 82LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x5746 = 1U;
	uint8_t x5748 = 1U;

	t77 = (x5745<<((x5746==x5747)|x5748));

	if (t77 != 417192) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5789 = 390168351U;
	uint32_t x5790 = UINT32_MAX;
	int32_t x5791 = 69399;
	uint8_t x5792 = 25U;

	t78 = (x5789<<((x5790==x5791)|x5792));

	if (t78 != 1040187392U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5805 = INT8_MAX;
	static int8_t x5806 = -1;
	uint32_t x5807 = UINT32_MAX;
	volatile int32_t t79 = -7597882;

	t79 = (x5805<<((x5806==x5807)|x5808));

	if (t79 != 65024) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5965 = 248;
	uint8_t x5966 = UINT8_MAX;
	static volatile int32_t x5967 = 52;
	static volatile int32_t t80 = -424483597;

	t80 = (x5965<<((x5966==x5967)|x5968));

	if (t80 != 31744) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x6049 = 991305874560633852LL;
	int8_t x6050 = 3;
	int64_t x6051 = INT64_MAX;
	uint32_t x6052 = 1U;
	static volatile int64_t t81 = 112627024LL;

	t81 = (x6049<<((x6050==x6051)|x6052));

	if (t81 != 1982611749121267704LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x6149 = INT16_MAX;
	int16_t x6150 = INT16_MIN;
	static int32_t x6151 = -1;
	volatile int32_t t82 = -57924;

	t82 = (x6149<<((x6150==x6151)|x6152));

	if (t82 != 134213632) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6273 = UINT64_MAX;
	volatile uint8_t x6275 = 5U;
	int16_t x6276 = 1;
	uint64_t t83 = 5074819147407312044LLU;

	t83 = (x6273<<((x6274==x6275)|x6276));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x6421 = UINT32_MAX;
	static int64_t x6422 = -3592883784LL;
	uint16_t x6423 = UINT16_MAX;
	uint8_t x6424 = 10U;
	uint32_t t84 = 1250269U;

	t84 = (x6421<<((x6422==x6423)|x6424));

	if (t84 != 4294966272U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6429 = 106U;
	int32_t x6430 = INT32_MAX;
	int16_t x6431 = INT16_MIN;
	int8_t x6432 = 0;
	uint32_t t85 = 458207U;

	t85 = (x6429<<((x6430==x6431)|x6432));

	if (t85 != 106U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6465 = 3U;
	int8_t x6466 = 13;
	int16_t x6467 = INT16_MIN;
	volatile int32_t t86 = -1454;

	t86 = (x6465<<((x6466==x6467)|x6468));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6481 = 563730LLU;
	static int16_t x6482 = -10760;
	static volatile uint64_t t87 = 9549146455LLU;

	t87 = (x6481<<((x6482==x6483)|x6484));

	if (t87 != 1127460LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6497 = 50U;
	static int8_t x6498 = 8;
	static int16_t x6499 = INT16_MIN;
	int16_t x6500 = 0;
	volatile int32_t t88 = 907718821;

	t88 = (x6497<<((x6498==x6499)|x6500));

	if (t88 != 50) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6605 = INT16_MAX;
	uint16_t x6606 = UINT16_MAX;
	int64_t x6607 = -1841LL;
	static volatile uint64_t x6608 = 0LLU;
	int32_t t89 = -833328293;

	t89 = (x6605<<((x6606==x6607)|x6608));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x6689 = 1977U;
	static uint32_t x6690 = UINT32_MAX;
	volatile int32_t x6691 = -32206085;
	uint8_t x6692 = 1U;
	volatile int32_t t90 = 783999;

	t90 = (x6689<<((x6690==x6691)|x6692));

	if (t90 != 3954) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x6701 = UINT8_MAX;
	int64_t x6702 = INT64_MIN;
	volatile int32_t x6703 = INT32_MIN;
	int64_t x6704 = 6LL;
	int32_t t91 = -14;

	t91 = (x6701<<((x6702==x6703)|x6704));

	if (t91 != 16320) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6762 = 27086;
	int32_t t92 = 27311;

	t92 = (x6761<<((x6762==x6763)|x6764));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6837 = INT16_MAX;
	int16_t x6838 = INT16_MIN;
	uint8_t x6839 = UINT8_MAX;
	uint8_t x6840 = 15U;
	int32_t t93 = -2784;

	t93 = (x6837<<((x6838==x6839)|x6840));

	if (t93 != 1073709056) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6865 = INT16_MAX;
	int64_t x6866 = -3954551LL;
	uint64_t x6867 = 655995947566806042LLU;
	uint64_t x6868 = 2LLU;
	int32_t t94 = 2384526;

	t94 = (x6865<<((x6866==x6867)|x6868));

	if (t94 != 131068) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6917 = INT8_MAX;
	volatile int8_t x6918 = -1;
	uint32_t x6919 = 99927U;
	static int8_t x6920 = 1;

	t95 = (x6917<<((x6918==x6919)|x6920));

	if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6981 = 1162484666054LLU;
	volatile int64_t x6982 = INT64_MIN;
	int16_t x6983 = INT16_MAX;
	static uint8_t x6984 = 5U;
	uint64_t t96 = 220LLU;

	t96 = (x6981<<((x6982==x6983)|x6984));

	if (t96 != 37199509313728LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x7149 = 5U;
	static int16_t x7150 = INT16_MAX;
	int16_t x7151 = -4317;
	uint16_t x7152 = 1U;
	int32_t t97 = -210;

	t97 = (x7149<<((x7150==x7151)|x7152));

	if (t97 != 10) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x7281 = UINT16_MAX;
	int32_t x7282 = INT32_MAX;
	static volatile int8_t x7284 = 1;
	volatile int32_t t98 = -28072132;

	t98 = (x7281<<((x7282==x7283)|x7284));

	if (t98 != 131070) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x7465 = UINT32_MAX;
	uint8_t x7466 = UINT8_MAX;
	uint32_t t99 = UINT32_MAX;

	t99 = (x7465<<((x7466==x7467)|x7468));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

