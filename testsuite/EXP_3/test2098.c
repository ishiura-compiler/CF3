#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = -1;
volatile int8_t x36 = INT8_MIN;
int32_t t1 = -5802527;
uint32_t x107 = 1754486417U;
int64_t t2 = -1210082LL;
static int32_t x204 = INT32_MIN;
int32_t t3 = -2;
static uint64_t t4 = 75318813506LLU;
uint8_t x346 = 3U;
static uint8_t x349 = 56U;
static uint64_t t6 = 67512124165970924LLU;
volatile uint64_t x385 = UINT64_MAX;
static volatile int64_t x453 = INT64_MAX;
int8_t x594 = 5;
int8_t x596 = -7;
static int32_t x657 = 13088;
uint8_t x742 = 0U;
int16_t x743 = INT16_MIN;
static uint32_t x926 = 0U;
uint16_t x970 = 8U;
int8_t x978 = 2;
uint64_t x1006 = 2LLU;
uint32_t x1007 = UINT32_MAX;
static uint8_t x1098 = 3U;
static volatile int64_t t17 = -1952433824052535LL;
uint8_t x1381 = 6U;
int16_t x1382 = 2;
static int8_t x1383 = INT8_MIN;
volatile int16_t x1508 = INT16_MIN;
volatile int32_t t19 = 0;
int64_t x1689 = 3564907LL;
static int16_t x1866 = 12;
int16_t x2088 = INT16_MIN;
volatile int32_t t23 = 71091962;
uint64_t x2237 = UINT64_MAX;
uint64_t t27 = 34969LLU;
uint16_t x2373 = UINT16_MAX;
volatile int32_t t28 = -24;
int8_t x2467 = INT8_MIN;
volatile uint64_t t32 = 856LLU;
int16_t x2631 = 0;
uint16_t x2766 = 1U;
int64_t x2767 = INT64_MAX;
int16_t x2867 = -1;
uint16_t x2985 = 214U;
uint8_t x3126 = 0U;
volatile uint16_t x3127 = 1U;
int8_t x3170 = 1;
int64_t x3303 = INT64_MIN;
volatile uint64_t t46 = 9257338050042640LLU;
volatile uint32_t x3612 = UINT32_MAX;
volatile uint32_t t49 = 962944163U;
int32_t t50 = 1462;
volatile int8_t x3705 = INT8_MAX;
int64_t x3708 = 15274LL;
static int16_t x3743 = 0;
uint32_t x3760 = 5203961U;
uint32_t t53 = 475U;
volatile uint32_t x3772 = UINT32_MAX;
uint32_t t54 = 364252U;
volatile int16_t x3977 = 197;
uint32_t x4073 = UINT32_MAX;
uint32_t x4085 = 1845735U;
uint32_t x4221 = 483404U;
int8_t x4224 = -1;
static int32_t x4243 = INT32_MIN;
int32_t x4244 = -15284;
int32_t x4448 = INT32_MIN;
uint32_t x4461 = UINT32_MAX;
uint16_t x4462 = 5U;
uint8_t x4542 = 12U;
static uint16_t x4605 = 38U;
int64_t x4607 = INT64_MAX;
int32_t x4642 = 21;
int32_t t65 = 194989;
volatile uint8_t x4757 = 120U;
int32_t x4835 = INT32_MIN;
uint8_t x4859 = 1U;
volatile uint32_t t68 = 56U;
static int32_t t72 = -7;
uint64_t x5125 = UINT64_MAX;
int64_t x5303 = INT64_MIN;
int32_t x5320 = -1;
uint32_t x5541 = 149U;
int8_t x5542 = 1;
volatile uint32_t t78 = 11680U;
static uint64_t x5677 = UINT64_MAX;
volatile int8_t x5680 = INT8_MIN;
volatile uint64_t t81 = 2107LLU;
volatile int32_t t83 = 7;
int64_t x5803 = 20183LL;
uint16_t x5825 = UINT16_MAX;
static int8_t x5826 = 3;
uint32_t x5828 = 17244632U;
volatile uint64_t x6065 = 1509776LLU;
uint64_t t89 = 12716409895868653LLU;
volatile uint8_t x6162 = 0U;
uint64_t x6163 = UINT64_MAX;
uint64_t x6164 = 27213811LLU;
int8_t x6559 = INT8_MIN;
uint8_t x6562 = 6U;
int64_t x6652 = -57020461050LL;
static int32_t x6766 = 0;
static int8_t x6767 = INT8_MAX;


void f0(void) {
	int16_t x13 = INT16_MAX;
	uint32_t x14 = 0U;
	int32_t x15 = INT32_MIN;
	static int32_t t0 = -7;

	t0 = ((x13<<x14)%(x15^x16));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = 0;
	static uint16_t x35 = 910U;

	t1 = ((x33<<x34)%(x35^x36));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x105 = 65803;
	int64_t x106 = 0LL;
	int64_t x108 = INT64_MIN;

	t2 = ((x105<<x106)%(x107^x108));

	if (t2 != 65803LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x201 = 21;
	volatile int64_t x202 = 15LL;
	int16_t x203 = -1;

	t3 = ((x201<<x202)%(x203^x204));

	if (t3 != 688128) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 49LLU;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = 3;

	t4 = ((x325<<x326)%(x327^x328));

	if (t4 != 9222809086901354493LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x345 = 6U;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;
	int32_t t5 = -2510;

	t5 = ((x345<<x346)%(x347^x348));

	if (t5 != 48) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x350 = 12U;
	volatile uint64_t x351 = 23LLU;
	volatile uint32_t x352 = UINT32_MAX;

	t6 = ((x349<<x350)%(x351^x352));

	if (t6 != 229376LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x386 = 13U;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = 0;
	volatile uint64_t t7 = 126516599369755917LLU;

	t7 = ((x385<<x386)%(x387^x388));

	if (t7 != 24576LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x454 = 0U;
	volatile int8_t x455 = 54;
	int8_t x456 = INT8_MIN;
	volatile int64_t t8 = -9939614725LL;

	t8 = ((x453<<x454)%(x455^x456));

	if (t8 != 5LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x593 = 114020LLU;
	int16_t x595 = 6;
	static uint64_t t9 = 1064175719385LLU;

	t9 = ((x593<<x594)%(x595^x596));

	if (t9 != 3648640LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x658 = 5;
	int16_t x659 = -23;
	static int32_t x660 = INT32_MIN;
	int32_t t10 = -93007;

	t10 = ((x657<<x658)%(x659^x660));

	if (t10 != 418816) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x741 = 3U;
	int64_t x744 = -11348642701LL;
	int64_t t11 = -2195389043238LL;

	t11 = ((x741<<x742)%(x743^x744));

	if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x925 = 1LLU;
	uint16_t x927 = UINT16_MAX;
	int16_t x928 = -15052;
	volatile uint64_t t12 = 131731LLU;

	t12 = ((x925<<x926)%(x927^x928));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x969 = 0;
	uint8_t x971 = 116U;
	int32_t x972 = 3098;
	int32_t t13 = -5471668;

	t13 = ((x969<<x970)%(x971^x972));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x977 = 0U;
	int64_t x979 = INT64_MIN;
	int64_t x980 = -129LL;
	int64_t t14 = -1LL;

	t14 = ((x977<<x978)%(x979^x980));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1005 = 343687905;
	int64_t x1008 = -96032354LL;
	volatile int64_t t15 = 13943LL;

	t15 = ((x1005<<x1006)%(x1007^x1008));

	if (t15 != 1374751620LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1097 = 3U;
	int32_t x1099 = -1;
	int64_t x1100 = INT64_MAX;
	volatile int64_t t16 = 8504757LL;

	t16 = ((x1097<<x1098)%(x1099^x1100));

	if (t16 != 24LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1337 = INT64_MAX;
	static int8_t x1338 = 0;
	static volatile uint32_t x1339 = 16184U;
	volatile int32_t x1340 = 7146967;

	t17 = ((x1337<<x1338)%(x1339^x1340));

	if (t17 != 977491LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1384 = 80;
	int32_t t18 = 28314687;

	t18 = ((x1381<<x1382)%(x1383^x1384));

	if (t18 != 24) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1505 = UINT16_MAX;
	volatile int8_t x1506 = 6;
	uint16_t x1507 = 2759U;

	t19 = ((x1505<<x1506)%(x1507^x1508));

	if (t19 != 22989) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1690 = 2U;
	uint32_t x1691 = 6264720U;
	uint64_t x1692 = 11018LLU;
	uint64_t t20 = 254419421000LLU;

	t20 = ((x1689<<x1690)%(x1691^x1692));

	if (t20 != 1711224LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1857 = 28499551U;
	int16_t x1858 = 30;
	uint8_t x1859 = 27U;
	volatile int64_t x1860 = INT64_MIN;
	static int64_t t21 = 5357LL;

	t21 = ((x1857<<x1858)%(x1859^x1860));

	if (t21 != 3221225472LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1865 = 0;
	int8_t x1867 = INT8_MIN;
	static int8_t x1868 = 0;
	volatile int32_t t22 = 0;

	t22 = ((x1865<<x1866)%(x1867^x1868));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x2085 = 1;
	uint16_t x2086 = 19U;
	int8_t x2087 = -6;

	t23 = ((x2085<<x2086)%(x2087^x2088));

	if (t23 != 96) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2185 = INT16_MAX;
	static uint32_t x2186 = 3U;
	volatile int32_t x2187 = -1;
	uint16_t x2188 = 20481U;
	volatile int32_t t24 = 58845;

	t24 = ((x2185<<x2186)%(x2187^x2188));

	if (t24 != 16352) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x2238 = 23;
	int32_t x2239 = INT32_MIN;
	static int16_t x2240 = -1;
	uint64_t t25 = 2122189684965560LLU;

	t25 = ((x2237<<x2238)%(x2239^x2240));

	if (t25 != 2139095043LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x2261 = 516U;
	volatile uint16_t x2262 = 14U;
	uint8_t x2263 = 80U;
	static volatile int64_t x2264 = INT64_MIN;
	static volatile int64_t t26 = -55957570494169LL;

	t26 = ((x2261<<x2262)%(x2263^x2264));

	if (t26 != 8454144LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x2297 = 1996353821LLU;
	int16_t x2298 = 11;
	uint64_t x2299 = UINT64_MAX;
	volatile uint32_t x2300 = 25U;

	t27 = ((x2297<<x2298)%(x2299^x2300));

	if (t27 != 4088532625408LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x2374 = 12U;
	int32_t x2375 = -1581;
	int32_t x2376 = -40;

	t28 = ((x2373<<x2374)%(x2375^x2376));

	if (t28 != 561) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2465 = 626378851372LLU;
	uint16_t x2466 = 22U;
	int32_t x2468 = 596322445;
	static uint64_t t29 = 8322392LLU;

	t29 = ((x2465<<x2466)%(x2467^x2468));

	if (t29 != 2627223321824985088LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2469 = 729U;
	uint32_t x2470 = 14U;
	uint64_t x2471 = 402513471048006862LLU;
	static int8_t x2472 = INT8_MIN;
	volatile uint64_t t30 = 511263950677LLU;

	t30 = ((x2469<<x2470)%(x2471^x2472));

	if (t30 != 11943936LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2553 = 581LL;
	uint16_t x2554 = 9U;
	uint8_t x2555 = 0U;
	uint8_t x2556 = 2U;
	int64_t t31 = 3658632499LL;

	t31 = ((x2553<<x2554)%(x2555^x2556));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x2581 = 38806794775753LLU;
	uint16_t x2582 = 0U;
	int16_t x2583 = 247;
	int8_t x2584 = INT8_MAX;

	t32 = ((x2581<<x2582)%(x2583^x2584));

	if (t32 != 65LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2629 = 2;
	uint32_t x2630 = 16U;
	int64_t x2632 = -1LL;
	volatile int64_t t33 = 83446828283LL;

	t33 = ((x2629<<x2630)%(x2631^x2632));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2765 = 10567189U;
	static uint32_t x2768 = 699158464U;
	int64_t t34 = 456873LL;

	t34 = ((x2765<<x2766)%(x2767^x2768));

	if (t34 != 21134378LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2785 = 485U;
	int8_t x2786 = 1;
	static int32_t x2787 = 3691257;
	volatile int8_t x2788 = INT8_MIN;
	volatile int32_t t35 = 251;

	t35 = ((x2785<<x2786)%(x2787^x2788));

	if (t35 != 970) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2865 = 44427701111057LLU;
	uint16_t x2866 = 5U;
	int8_t x2868 = 0;
	volatile uint64_t t36 = 310959542871745LLU;

	t36 = ((x2865<<x2866)%(x2867^x2868));

	if (t36 != 1421686435553824LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2941 = INT8_MAX;
	volatile uint8_t x2942 = 1U;
	int8_t x2943 = INT8_MIN;
	int8_t x2944 = INT8_MAX;
	int32_t t37 = -22385;

	t37 = ((x2941<<x2942)%(x2943^x2944));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2986 = 1U;
	int64_t x2987 = INT64_MIN;
	static int16_t x2988 = 7323;
	volatile int64_t t38 = 298771926075708051LL;

	t38 = ((x2985<<x2986)%(x2987^x2988));

	if (t38 != 428LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3117 = UINT64_MAX;
	int8_t x3118 = 0;
	uint64_t x3119 = UINT64_MAX;
	int32_t x3120 = INT32_MAX;
	uint64_t t39 = 11859900256244265LLU;

	t39 = ((x3117<<x3118)%(x3119^x3120));

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x3125 = 15502U;
	uint64_t x3128 = 3314LLU;
	static uint64_t t40 = 16LLU;

	t40 = ((x3125<<x3126)%(x3127^x3128));

	if (t40 != 2242LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3169 = 24U;
	uint16_t x3171 = 7U;
	volatile int64_t x3172 = -59182349LL;
	volatile int64_t t41 = 79453171299249330LL;

	t41 = ((x3169<<x3170)%(x3171^x3172));

	if (t41 != 48LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x3221 = 56434530999LLU;
	uint32_t x3222 = 0U;
	uint32_t x3223 = 232U;
	uint8_t x3224 = 0U;
	uint64_t t42 = 18383998LLU;

	t42 = ((x3221<<x3222)%(x3223^x3224));

	if (t42 != 183LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3301 = 3;
	static uint16_t x3302 = 1U;
	int16_t x3304 = INT16_MIN;
	static volatile int64_t t43 = -7739094847470LL;

	t43 = ((x3301<<x3302)%(x3303^x3304));

	if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x3309 = 10286810806LLU;
	static int8_t x3310 = 63;
	uint16_t x3311 = 1U;
	int64_t x3312 = -2994967634147LL;
	uint64_t t44 = 11519518LLU;

	t44 = ((x3309<<x3310)%(x3311^x3312));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3361 = UINT16_MAX;
	volatile int8_t x3362 = 0;
	static volatile int32_t x3363 = INT32_MIN;
	uint8_t x3364 = 36U;
	int32_t t45 = 67148182;

	t45 = ((x3361<<x3362)%(x3363^x3364));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3469 = 64897660483158LLU;
	int16_t x3470 = 0;
	uint16_t x3471 = 12U;
	int32_t x3472 = -1;

	t46 = ((x3469<<x3470)%(x3471^x3472));

	if (t46 != 64897660483158LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3481 = INT8_MAX;
	int8_t x3482 = 22;
	volatile uint32_t x3483 = 41774U;
	static int8_t x3484 = -59;
	uint32_t t47 = 21179598U;

	t47 = ((x3481<<x3482)%(x3483^x3484));

	if (t47 != 532676608U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3585 = UINT16_MAX;
	static volatile int16_t x3586 = 3;
	int8_t x3587 = INT8_MAX;
	int64_t x3588 = 58513917068612053LL;
	volatile int64_t t48 = -56252707797228570LL;

	t48 = ((x3585<<x3586)%(x3587^x3588));

	if (t48 != 524280LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3609 = 2U;
	static uint32_t x3610 = 23U;
	volatile int32_t x3611 = INT32_MIN;

	t49 = ((x3609<<x3610)%(x3611^x3612));

	if (t49 != 16777216U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x3625 = 15U;
	static uint8_t x3626 = 12U;
	volatile int32_t x3627 = INT32_MIN;
	int32_t x3628 = -7;

	t50 = ((x3625<<x3626)%(x3627^x3628));

	if (t50 != 61440) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x3706 = 3U;
	int8_t x3707 = -1;
	volatile int64_t t51 = -1LL;

	t51 = ((x3705<<x3706)%(x3707^x3708));

	if (t51 != 1016LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3741 = 14;
	uint32_t x3742 = 3U;
	int8_t x3744 = INT8_MIN;
	int32_t t52 = -1773;

	t52 = ((x3741<<x3742)%(x3743^x3744));

	if (t52 != 112) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3757 = 7770U;
	uint8_t x3758 = 24U;
	int8_t x3759 = -1;

	t53 = ((x3757<<x3758)%(x3759^x3760));

	if (t53 != 1509949440U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3769 = 1U;
	int64_t x3770 = 3LL;
	int8_t x3771 = INT8_MAX;

	t54 = ((x3769<<x3770)%(x3771^x3772));

	if (t54 != 8U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3978 = 1U;
	int64_t x3979 = INT64_MIN;
	uint64_t x3980 = 215LLU;
	uint64_t t55 = 3511079983333LLU;

	t55 = ((x3977<<x3978)%(x3979^x3980));

	if (t55 != 394LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x4074 = 0U;
	int8_t x4075 = INT8_MAX;
	uint64_t x4076 = UINT64_MAX;
	uint64_t t56 = 538542620955813LLU;

	t56 = ((x4073<<x4074)%(x4075^x4076));

	if (t56 != 4294967295LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4086 = 0U;
	uint16_t x4087 = 2749U;
	volatile uint32_t x4088 = 4002U;
	volatile uint32_t t57 = 180065711U;

	t57 = ((x4085<<x4086)%(x4087^x4088));

	if (t57 != 1158U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x4222 = 1;
	static volatile int16_t x4223 = INT16_MIN;
	volatile uint32_t t58 = 12270083U;

	t58 = ((x4221<<x4222)%(x4223^x4224));

	if (t58 != 16565U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x4225 = 112U;
	uint8_t x4226 = 19U;
	static int32_t x4227 = INT32_MAX;
	volatile int16_t x4228 = -74;
	uint32_t t59 = 48063U;

	t59 = ((x4225<<x4226)%(x4227^x4228));

	if (t59 != 58720256U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4241 = 892004002LLU;
	int8_t x4242 = 0;
	uint64_t t60 = 8LLU;

	t60 = ((x4241<<x4242)%(x4243^x4244));

	if (t60 != 892004002LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4445 = UINT8_MAX;
	uint16_t x4446 = 14U;
	static int64_t x4447 = -1LL;
	volatile int64_t t61 = -127LL;

	t61 = ((x4445<<x4446)%(x4447^x4448));

	if (t61 != 4177920LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4463 = INT32_MAX;
	int16_t x4464 = INT16_MAX;
	volatile uint32_t t62 = 109237036U;

	t62 = ((x4461<<x4462)%(x4463^x4464));

	if (t62 != 65504U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x4541 = 14;
	volatile int8_t x4543 = INT8_MAX;
	int16_t x4544 = -1;
	static volatile int32_t t63 = -36782;

	t63 = ((x4541<<x4542)%(x4543^x4544));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x4606 = 2U;
	volatile int32_t x4608 = INT32_MIN;
	static int64_t t64 = -42029438938965371LL;

	t64 = ((x4605<<x4606)%(x4607^x4608));

	if (t64 != 152LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x4641 = INT8_MAX;
	static volatile int8_t x4643 = INT8_MIN;
	int8_t x4644 = -37;

	t65 = ((x4641<<x4642)%(x4643^x4644));

	if (t65 != 50) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4758 = 3U;
	static int32_t x4759 = INT32_MAX;
	uint16_t x4760 = UINT16_MAX;
	volatile int32_t t66 = -228490;

	t66 = ((x4757<<x4758)%(x4759^x4760));

	if (t66 != 960) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x4833 = 769497U;
	static uint8_t x4834 = 5U;
	volatile int8_t x4836 = INT8_MAX;
	static uint32_t t67 = 8155942U;

	t67 = ((x4833<<x4834)%(x4835^x4836));

	if (t67 != 24623904U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4857 = 117U;
	int32_t x4858 = 14;
	int8_t x4860 = INT8_MIN;

	t68 = ((x4857<<x4858)%(x4859^x4860));

	if (t68 != 1916928U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x4993 = 414;
	static uint8_t x4994 = 5U;
	int16_t x4995 = -1;
	volatile int8_t x4996 = -56;
	int32_t t69 = -49040;

	t69 = ((x4993<<x4994)%(x4995^x4996));

	if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x5025 = INT32_MAX;
	uint16_t x5026 = 0U;
	static int8_t x5027 = -1;
	uint8_t x5028 = UINT8_MAX;
	int32_t t70 = -66521984;

	t70 = ((x5025<<x5026)%(x5027^x5028));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5029 = 212;
	static int32_t x5030 = 0;
	volatile int32_t x5031 = INT32_MIN;
	static int64_t x5032 = INT64_MIN;
	volatile int64_t t71 = -292091506017LL;

	t71 = ((x5029<<x5030)%(x5031^x5032));

	if (t71 != 212LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5053 = 1;
	uint32_t x5054 = 1U;
	int16_t x5055 = 3388;
	uint16_t x5056 = UINT16_MAX;

	t72 = ((x5053<<x5054)%(x5055^x5056));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x5126 = 6;
	static int8_t x5127 = INT8_MIN;
	uint16_t x5128 = 993U;
	static volatile uint64_t t73 = 57765800300871LLU;

	t73 = ((x5125<<x5126)%(x5127^x5128));

	if (t73 != 863LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5301 = INT32_MAX;
	static volatile uint8_t x5302 = 0U;
	volatile uint16_t x5304 = 11U;
	volatile int64_t t74 = 392679LL;

	t74 = ((x5301<<x5302)%(x5303^x5304));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5317 = 9866U;
	static uint8_t x5318 = 0U;
	int16_t x5319 = 57;
	int32_t t75 = -26316725;

	t75 = ((x5317<<x5318)%(x5319^x5320));

	if (t75 != 6) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5397 = UINT32_MAX;
	static uint8_t x5398 = 10U;
	int8_t x5399 = -12;
	static int32_t x5400 = INT32_MIN;
	uint32_t t76 = 6U;

	t76 = ((x5397<<x5398)%(x5399^x5400));

	if (t76 != 2147482636U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5401 = 5;
	int8_t x5402 = 0;
	volatile uint16_t x5403 = 93U;
	uint8_t x5404 = UINT8_MAX;
	volatile int32_t t77 = -261757;

	t77 = ((x5401<<x5402)%(x5403^x5404));

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x5543 = 7U;
	int32_t x5544 = -1;

	t78 = ((x5541<<x5542)%(x5543^x5544));

	if (t78 != 298U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5569 = INT8_MAX;
	int8_t x5570 = 2;
	volatile int16_t x5571 = -3;
	int64_t x5572 = INT64_MIN;
	volatile int64_t t79 = -2822615716121647664LL;

	t79 = ((x5569<<x5570)%(x5571^x5572));

	if (t79 != 508LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5678 = 3U;
	int16_t x5679 = INT16_MIN;
	volatile uint64_t t80 = 59746065731026LLU;

	t80 = ((x5677<<x5678)%(x5679^x5680));

	if (t80 != 248LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5757 = 2146838634810166LLU;
	uint16_t x5758 = 8U;
	static int8_t x5759 = 42;
	int8_t x5760 = INT8_MAX;

	t81 = ((x5757<<x5758)%(x5759^x5760));

	if (t81 != 61LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5765 = UINT32_MAX;
	int8_t x5766 = 0;
	int32_t x5767 = 1;
	int16_t x5768 = INT16_MIN;
	volatile uint32_t t82 = 7398874U;

	t82 = ((x5765<<x5766)%(x5767^x5768));

	if (t82 != 32766U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5785 = 0U;
	int16_t x5786 = 0;
	int16_t x5787 = 86;
	int32_t x5788 = -1;

	t83 = ((x5785<<x5786)%(x5787^x5788));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5801 = 164U;
	volatile int64_t x5802 = 3LL;
	int16_t x5804 = -1;
	volatile int64_t t84 = 807318221632LL;

	t84 = ((x5801<<x5802)%(x5803^x5804));

	if (t84 != 1312LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5827 = -119474486056LL;
	volatile int64_t t85 = -666811100953502581LL;

	t85 = ((x5825<<x5826)%(x5827^x5828));

	if (t85 != 524280LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5853 = 0;
	uint8_t x5854 = 2U;
	static int32_t x5855 = 1;
	static int32_t x5856 = 2;
	volatile int32_t t86 = 101;

	t86 = ((x5853<<x5854)%(x5855^x5856));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5913 = INT16_MAX;
	int32_t x5914 = 0;
	uint64_t x5915 = UINT64_MAX;
	int64_t x5916 = INT64_MAX;
	uint64_t t87 = 713961610906311866LLU;

	t87 = ((x5913<<x5914)%(x5915^x5916));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x6057 = 6923517U;
	uint8_t x6058 = 0U;
	volatile int32_t x6059 = 5;
	volatile int32_t x6060 = INT32_MAX;
	static volatile uint32_t t88 = 3544467U;

	t88 = ((x6057<<x6058)%(x6059^x6060));

	if (t88 != 6923517U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x6066 = 0U;
	volatile uint32_t x6067 = UINT32_MAX;
	int64_t x6068 = 979011955148904LL;

	t89 = ((x6065<<x6066)%(x6067^x6068));

	if (t89 != 1509776LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6073 = UINT32_MAX;
	uint32_t x6074 = 13U;
	uint8_t x6075 = 2U;
	int32_t x6076 = -1;
	static uint32_t t90 = 4915638U;

	t90 = ((x6073<<x6074)%(x6075^x6076));

	if (t90 != 4294959104U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x6161 = 835U;
	uint64_t t91 = 127956LLU;

	t91 = ((x6161<<x6162)%(x6163^x6164));

	if (t91 != 835LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x6357 = INT8_MAX;
	uint8_t x6358 = 0U;
	int16_t x6359 = -643;
	uint64_t x6360 = 1691347LLU;
	volatile uint64_t t92 = 30765356LLU;

	t92 = ((x6357<<x6358)%(x6359^x6360));

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x6413 = UINT16_MAX;
	static uint8_t x6414 = 0U;
	int32_t x6415 = -1;
	uint64_t x6416 = 61514442467LLU;
	volatile uint64_t t93 = 513652118695LLU;

	t93 = ((x6413<<x6414)%(x6415^x6416));

	if (t93 != 65535LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6545 = 219992U;
	uint64_t x6546 = 1LLU;
	int64_t x6547 = -1LL;
	int32_t x6548 = INT32_MAX;
	static int64_t t94 = -44319LL;

	t94 = ((x6545<<x6546)%(x6547^x6548));

	if (t94 != 439984LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x6557 = 25U;
	int16_t x6558 = 3;
	int32_t x6560 = INT32_MAX;
	volatile uint32_t t95 = 1068099U;

	t95 = ((x6557<<x6558)%(x6559^x6560));

	if (t95 != 200U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6561 = INT16_MAX;
	int64_t x6563 = INT64_MAX;
	int32_t x6564 = INT32_MIN;
	int64_t t96 = -1096315529227471LL;

	t96 = ((x6561<<x6562)%(x6563^x6564));

	if (t96 != 2097088LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x6649 = 18U;
	uint8_t x6650 = 12U;
	uint64_t x6651 = UINT64_MAX;
	volatile uint64_t t97 = 12305936183826LLU;

	t97 = ((x6649<<x6650)%(x6651^x6652));

	if (t97 != 73728LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6677 = INT8_MAX;
	static volatile int16_t x6678 = 2;
	int32_t x6679 = INT32_MIN;
	int64_t x6680 = INT64_MIN;
	volatile int64_t t98 = -213297205075220407LL;

	t98 = ((x6677<<x6678)%(x6679^x6680));

	if (t98 != 508LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6765 = 1U;
	int16_t x6768 = 1;
	volatile int32_t t99 = -34741917;

	t99 = ((x6765<<x6766)%(x6767^x6768));

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

