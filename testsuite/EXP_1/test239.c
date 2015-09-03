#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x31 = 2U;
uint64_t t1 = 9LLU;
uint64_t x94 = UINT64_MAX;
uint64_t x104 = UINT64_MAX;
static uint8_t x135 = 6U;
static volatile int8_t x136 = INT8_MIN;
int8_t x276 = -1;
uint8_t x395 = 1U;
volatile int8_t x441 = -1;
volatile int32_t t7 = -11552697;
uint8_t x625 = 6U;
int64_t x626 = -1LL;
volatile uint64_t t10 = 30145857LLU;
uint16_t x776 = 301U;
volatile int16_t x778 = INT16_MIN;
static int8_t x779 = 1;
int16_t x800 = INT16_MIN;
static int32_t t14 = -718016589;
int32_t t16 = -6;
volatile int64_t t17 = 762850LL;
int8_t x1307 = 1;
uint64_t t18 = 7963803LLU;
uint16_t x1403 = 52U;
uint64_t x1706 = 1520853350243140LLU;
volatile uint64_t x1722 = 28861LLU;
int32_t t22 = 69242;
static int8_t x1807 = 0;
uint64_t t23 = 567LLU;
volatile int64_t x1836 = INT64_MIN;
static uint16_t x2096 = 12944U;
int16_t x2098 = INT16_MIN;
uint8_t x2099 = 5U;
volatile uint16_t x2308 = 1432U;
volatile int32_t t29 = -773411849;
int32_t x2350 = INT32_MIN;
uint8_t x2355 = 1U;
int32_t t31 = -405464;
uint16_t x2369 = UINT16_MAX;
uint32_t x2580 = UINT32_MAX;
uint32_t x2680 = 145278515U;
static uint64_t x2706 = 1040058LLU;
volatile uint16_t x2707 = 37U;
uint64_t t37 = 14683809715625230LLU;
int64_t x2852 = -21LL;
static uint16_t x2855 = 1U;
int16_t x2865 = INT16_MIN;
static int32_t t42 = -1;
uint8_t x2989 = 29U;
uint8_t x2991 = 1U;
uint64_t x3078 = 783LLU;
int8_t x3166 = INT8_MIN;
uint32_t x3183 = 20U;
uint64_t t47 = 12111248020843494LLU;
int8_t x3228 = INT8_MIN;
static uint64_t x3232 = 138714315LLU;
volatile uint32_t x3453 = UINT32_MAX;
uint32_t t50 = 2009317U;
uint64_t x3530 = 3578887591LLU;
int64_t t52 = -63146LL;
int64_t t53 = -1LL;
uint8_t x3627 = 5U;
uint8_t x3716 = 1U;
uint64_t x3746 = UINT64_MAX;
volatile int32_t x3813 = 0;
int32_t x3933 = INT32_MIN;
int32_t x3966 = 84;
static int16_t x3967 = 1;
volatile uint16_t x4129 = UINT16_MAX;
int32_t x4141 = INT32_MIN;
static volatile uint32_t t65 = 27562588U;
volatile int8_t x4312 = -1;
int32_t x4352 = INT32_MAX;
int64_t x4368 = -1LL;
int16_t x4488 = -2;
int64_t t70 = -438020728LL;
static uint64_t x4617 = 178475856687721173LLU;
int32_t x4674 = INT32_MIN;
volatile int8_t x4676 = INT8_MIN;
static int8_t x4969 = -11;
int32_t x5161 = -1;
static uint64_t t79 = 2182821025105506216LLU;
volatile int64_t x5237 = INT64_MIN;
uint64_t x5357 = 89869914251LLU;
int8_t x5358 = INT8_MAX;
volatile uint16_t x5798 = 7782U;
int64_t x5800 = INT64_MIN;
int64_t t85 = 4LL;
uint16_t x5832 = 534U;
static uint16_t x5841 = UINT16_MAX;
static int8_t x5967 = 0;
static uint8_t x6034 = UINT8_MAX;
static volatile int64_t t90 = 8646232737172LL;
volatile int64_t t92 = 1648342836434LL;
int32_t x6442 = -1707927;
int64_t x6477 = INT64_MIN;
int8_t x6479 = 1;
volatile uint64_t t96 = 7103857614LLU;
static uint16_t x6519 = 2U;


void f0(void) {
	uint32_t x29 = 2096603662U;
	int8_t x30 = 0;
	uint64_t x32 = 448LLU;
	volatile uint64_t t0 = 40175804LLU;

	t0 = (((x29-x30)<<x31)%x32);

	if (t0 != 440LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x53 = -1;
	static uint64_t x54 = UINT64_MAX;
	uint16_t x55 = 0U;
	int64_t x56 = INT64_MAX;

	t1 = (((x53-x54)<<x55)%x56);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x93 = INT8_MIN;
	uint8_t x95 = 16U;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t2 = 47893420569LLU;

	t2 = (((x93-x94)<<x95)%x96);

	if (t2 != 2139160576LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = -1;
	static uint8_t x103 = 17U;
	uint64_t t3 = 46716LLU;

	t3 = (((x101-x102)<<x103)%x104);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x133 = -1;
	uint32_t x134 = 5247U;
	static uint32_t t4 = 9486499U;

	t4 = (((x133-x134)<<x135)%x136);

	if (t4 != 4294631424U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x273 = -1;
	static volatile int16_t x274 = -1;
	volatile uint8_t x275 = 2U;
	int32_t t5 = -364503248;

	t5 = (((x273-x274)<<x275)%x276);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x393 = INT16_MAX;
	uint16_t x394 = 1798U;
	volatile int32_t x396 = INT32_MIN;
	static int32_t t6 = -2;

	t6 = (((x393-x394)<<x395)%x396);

	if (t6 != 61938) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x442 = -1;
	uint8_t x443 = 1U;
	int16_t x444 = INT16_MIN;

	t7 = (((x441-x442)<<x443)%x444);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x627 = 5U;
	int64_t x628 = INT64_MAX;
	static int64_t t8 = -576380267185635LL;

	t8 = (((x625-x626)<<x627)%x628);

	if (t8 != 224LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x629 = 361090854LLU;
	volatile int64_t x630 = INT64_MIN;
	uint16_t x631 = 0U;
	uint16_t x632 = UINT16_MAX;
	static volatile uint64_t t9 = 268596750LLU;

	t9 = (((x629-x630)<<x631)%x632);

	if (t9 != 25772LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x633 = 105010LLU;
	int32_t x634 = -6157034;
	uint32_t x635 = 1U;
	volatile uint16_t x636 = 19U;

	t10 = (((x633-x634)<<x635)%x636);

	if (t10 != 10LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x709 = 9470082LL;
	uint8_t x710 = 24U;
	int8_t x711 = 0;
	volatile int16_t x712 = INT16_MIN;
	volatile int64_t t11 = 15181877206LL;

	t11 = (((x709-x710)<<x711)%x712);

	if (t11 != 106LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x773 = 106896U;
	int8_t x774 = INT8_MAX;
	uint8_t x775 = 5U;
	uint32_t t12 = 302262U;

	t12 = (((x773-x774)<<x775)%x776);

	if (t12 != 258U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x777 = -4186;
	volatile int16_t x780 = INT16_MAX;
	int32_t t13 = -488643895;

	t13 = (((x777-x778)<<x779)%x780);

	if (t13 != 24397) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x797 = -1;
	int32_t x798 = -1;
	uint16_t x799 = 7U;

	t14 = (((x797-x798)<<x799)%x800);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x829 = -1LL;
	int16_t x830 = INT16_MIN;
	int8_t x831 = 13;
	static int8_t x832 = INT8_MAX;
	int64_t t15 = -349348019763LL;

	t15 = (((x829-x830)<<x831)%x832);

	if (t15 != 64LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x965 = 7U;
	volatile int8_t x966 = 4;
	int32_t x967 = 14;
	static int16_t x968 = -1;

	t16 = (((x965-x966)<<x967)%x968);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1117 = INT64_MIN;
	int64_t x1118 = INT64_MIN;
	int8_t x1119 = 8;
	static int8_t x1120 = INT8_MAX;

	t17 = (((x1117-x1118)<<x1119)%x1120);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1305 = 811760495LLU;
	int16_t x1306 = -3;
	uint64_t x1308 = UINT64_MAX;

	t18 = (((x1305-x1306)<<x1307)%x1308);

	if (t18 != 1623520996LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1401 = 19283;
	uint64_t x1402 = 409203489352LLU;
	volatile int32_t x1404 = INT32_MIN;
	uint64_t t19 = 548LLU;

	t19 = (((x1401-x1402)<<x1403)%x1404);

	if (t19 != 1202461100507922432LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1705 = 2U;
	int8_t x1707 = 0;
	uint64_t x1708 = 2892234053146LLU;
	volatile uint64_t t20 = 384492511LLU;

	t20 = (((x1705-x1706)<<x1707)%x1708);

	if (t20 != 546420693478LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1721 = INT32_MIN;
	int8_t x1723 = 9;
	static uint64_t x1724 = 44LLU;
	volatile uint64_t t21 = 4630283LLU;

	t21 = (((x1721-x1722)<<x1723)%x1724);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1745 = 60U;
	int8_t x1746 = -30;
	uint32_t x1747 = 23U;
	static uint16_t x1748 = 809U;

	t22 = (((x1745-x1746)<<x1747)%x1748);

	if (t22 != 549) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1805 = INT64_MIN;
	int64_t x1806 = INT64_MIN;
	uint64_t x1808 = 547511407LLU;

	t23 = (((x1805-x1806)<<x1807)%x1808);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1833 = UINT32_MAX;
	volatile uint32_t x1834 = 61520U;
	static uint8_t x1835 = 3U;
	volatile int64_t t24 = -2796030803LL;

	t24 = (((x1833-x1834)<<x1835)%x1836);

	if (t24 != 4294475128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2045 = INT16_MIN;
	int16_t x2046 = INT16_MIN;
	static uint16_t x2047 = 0U;
	int8_t x2048 = -1;
	volatile int32_t t25 = -437;

	t25 = (((x2045-x2046)<<x2047)%x2048);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2073 = 6801;
	uint32_t x2074 = 103942473U;
	int8_t x2075 = 2;
	int16_t x2076 = -2744;
	uint32_t t26 = 1U;

	t26 = (((x2073-x2074)<<x2075)%x2076);

	if (t26 != 3879224608U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x2093 = 213LLU;
	int16_t x2094 = -1;
	int8_t x2095 = 3;
	uint64_t t27 = 4112096021695172476LLU;

	t27 = (((x2093-x2094)<<x2095)%x2096);

	if (t27 != 1712LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2097 = INT16_MIN;
	volatile uint8_t x2100 = UINT8_MAX;
	static volatile int32_t t28 = -26872;

	t28 = (((x2097-x2098)<<x2099)%x2100);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2305 = INT16_MAX;
	volatile uint8_t x2306 = UINT8_MAX;
	static uint8_t x2307 = 1U;

	t29 = (((x2305-x2306)<<x2307)%x2308);

	if (t29 != 584) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2349 = -1;
	static volatile uint8_t x2351 = 0U;
	int16_t x2352 = -1;
	static int32_t t30 = 232;

	t30 = (((x2349-x2350)<<x2351)%x2352);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2353 = INT8_MIN;
	int8_t x2354 = INT8_MIN;
	int16_t x2356 = INT16_MAX;

	t31 = (((x2353-x2354)<<x2355)%x2356);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2370 = INT8_MAX;
	volatile int16_t x2371 = 1;
	int8_t x2372 = INT8_MAX;
	int32_t t32 = -47;

	t32 = (((x2369-x2370)<<x2371)%x2372);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2577 = 9431;
	int16_t x2578 = -4876;
	uint8_t x2579 = 4U;
	volatile uint32_t t33 = 1U;

	t33 = (((x2577-x2578)<<x2579)%x2580);

	if (t33 != 228912U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2629 = -1;
	static int8_t x2630 = -1;
	uint16_t x2631 = 7U;
	uint8_t x2632 = UINT8_MAX;
	int32_t t34 = 11620;

	t34 = (((x2629-x2630)<<x2631)%x2632);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2633 = INT8_MAX;
	static int8_t x2634 = INT8_MIN;
	volatile uint8_t x2635 = 0U;
	int8_t x2636 = INT8_MIN;
	volatile int32_t t35 = 4371151;

	t35 = (((x2633-x2634)<<x2635)%x2636);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2677 = 17464259LL;
	static volatile int16_t x2678 = 88;
	volatile uint8_t x2679 = 29U;
	int64_t t36 = -1LL;

	t36 = (((x2677-x2678)<<x2679)%x2680);

	if (t36 != 126753337LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2705 = 9;
	volatile int16_t x2708 = 106;

	t37 = (((x2705-x2706)<<x2707)%x2708);

	if (t37 != 28LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x2765 = INT16_MAX;
	volatile int64_t x2766 = -28068735LL;
	uint32_t x2767 = 0U;
	int64_t x2768 = -212874535675077LL;
	int64_t t38 = -3426664819LL;

	t38 = (((x2765-x2766)<<x2767)%x2768);

	if (t38 != 28101502LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x2849 = INT32_MIN;
	int32_t x2850 = INT32_MIN;
	static int16_t x2851 = 2;
	int64_t t39 = -48612LL;

	t39 = (((x2849-x2850)<<x2851)%x2852);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2853 = 8857LLU;
	uint64_t x2854 = UINT64_MAX;
	static int32_t x2856 = -1;
	volatile uint64_t t40 = 15873978924LLU;

	t40 = (((x2853-x2854)<<x2855)%x2856);

	if (t40 != 17716LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2866 = UINT32_MAX;
	int8_t x2867 = 2;
	static int8_t x2868 = -1;
	uint32_t t41 = 60950U;

	t41 = (((x2865-x2866)<<x2867)%x2868);

	if (t41 != 4294836228U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2981 = 4957U;
	int8_t x2982 = INT8_MIN;
	uint16_t x2983 = 3U;
	uint8_t x2984 = 13U;

	t42 = (((x2981-x2982)<<x2983)%x2984);

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2990 = INT8_MIN;
	int64_t x2992 = INT64_MIN;
	volatile int64_t t43 = 49LL;

	t43 = (((x2989-x2990)<<x2991)%x2992);

	if (t43 != 314LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x3077 = INT32_MAX;
	volatile uint16_t x3079 = 0U;
	volatile uint16_t x3080 = UINT16_MAX;
	uint64_t t44 = 61280LLU;

	t44 = (((x3077-x3078)<<x3079)%x3080);

	if (t44 != 31984LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3129 = INT8_MAX;
	uint32_t x3130 = 67U;
	int8_t x3131 = 0;
	int8_t x3132 = INT8_MAX;
	static uint32_t t45 = 1084855342U;

	t45 = (((x3129-x3130)<<x3131)%x3132);

	if (t45 != 60U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3165 = 1817839LLU;
	volatile uint8_t x3167 = 27U;
	int8_t x3168 = -1;
	uint64_t t46 = 504LLU;

	t46 = (((x3165-x3166)<<x3167)%x3168);

	if (t46 != 244003400318976LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3181 = 5U;
	volatile int16_t x3182 = -1;
	static uint64_t x3184 = 719069LLU;

	t47 = (((x3181-x3182)<<x3183)%x3184);

	if (t47 != 538904LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3225 = INT32_MAX;
	static uint16_t x3226 = UINT16_MAX;
	static volatile uint8_t x3227 = 0U;
	volatile int32_t t48 = 1;

	t48 = (((x3225-x3226)<<x3227)%x3228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3229 = 5U;
	uint32_t x3230 = 2723U;
	static int8_t x3231 = 0;
	volatile uint64_t t49 = 891481007793LLU;

	t49 = (((x3229-x3230)<<x3231)%x3232);

	if (t49 != 133535128LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x3454 = UINT32_MAX;
	volatile int64_t x3455 = 4LL;
	volatile int32_t x3456 = INT32_MIN;

	t50 = (((x3453-x3454)<<x3455)%x3456);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3529 = -478;
	uint16_t x3531 = 2U;
	uint8_t x3532 = 1U;
	uint64_t t51 = 62LLU;

	t51 = (((x3529-x3530)<<x3531)%x3532);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3549 = 65669732;
	uint8_t x3550 = 40U;
	static int64_t x3551 = 0LL;
	int64_t x3552 = INT64_MIN;

	t52 = (((x3549-x3550)<<x3551)%x3552);

	if (t52 != 65669692LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3601 = -1LL;
	volatile int32_t x3602 = -1;
	uint8_t x3603 = 5U;
	int16_t x3604 = INT16_MIN;

	t53 = (((x3601-x3602)<<x3603)%x3604);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3625 = INT32_MIN;
	uint64_t x3626 = UINT64_MAX;
	volatile int8_t x3628 = -1;
	static uint64_t t54 = 32820LLU;

	t54 = (((x3625-x3626)<<x3627)%x3628);

	if (t54 != 18446744004990074912LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3645 = INT16_MAX;
	uint64_t x3646 = 470809LLU;
	uint8_t x3647 = 60U;
	static uint16_t x3648 = UINT16_MAX;
	uint64_t t55 = 23068LLU;

	t55 = (((x3645-x3646)<<x3647)%x3648);

	if (t55 != 24576LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3657 = -53;
	uint64_t x3658 = 3906605225947LLU;
	uint8_t x3659 = 0U;
	int32_t x3660 = -1;
	uint64_t t56 = 354325995LLU;

	t56 = (((x3657-x3658)<<x3659)%x3660);

	if (t56 != 18446740167104325616LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3713 = 774U;
	uint8_t x3714 = 7U;
	static uint8_t x3715 = 5U;
	volatile uint32_t t57 = 352025U;

	t57 = (((x3713-x3714)<<x3715)%x3716);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3745 = 704574970U;
	int8_t x3747 = 21;
	int32_t x3748 = -1;
	uint64_t t58 = 1207551435146LLU;

	t58 = (((x3745-x3746)<<x3747)%x3748);

	if (t58 != 1477600809582592LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3814 = INT8_MIN;
	volatile uint8_t x3815 = 4U;
	static uint16_t x3816 = 448U;
	int32_t t59 = -686492863;

	t59 = (((x3813-x3814)<<x3815)%x3816);

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3825 = UINT8_MAX;
	uint64_t x3826 = 15720LLU;
	static uint8_t x3827 = 1U;
	volatile int64_t x3828 = -1LL;
	volatile uint64_t t60 = 2LLU;

	t60 = (((x3825-x3826)<<x3827)%x3828);

	if (t60 != 18446744073709520686LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3905 = -1LL;
	volatile int64_t x3906 = -1LL;
	int8_t x3907 = 0;
	uint32_t x3908 = UINT32_MAX;
	volatile int64_t t61 = 110917847LL;

	t61 = (((x3905-x3906)<<x3907)%x3908);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3934 = 180U;
	int64_t x3935 = 1LL;
	int64_t x3936 = 24720723LL;
	int64_t t62 = -12868641179LL;

	t62 = (((x3933-x3934)<<x3935)%x3936);

	if (t62 != 18281857LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3965 = 1340251LLU;
	uint64_t x3968 = UINT64_MAX;
	volatile uint64_t t63 = 1LLU;

	t63 = (((x3965-x3966)<<x3967)%x3968);

	if (t63 != 2680334LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4130 = -1;
	static int8_t x4131 = 8;
	int32_t x4132 = INT32_MIN;
	int32_t t64 = -184048292;

	t64 = (((x4129-x4130)<<x4131)%x4132);

	if (t64 != 16777216) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4142 = 116330U;
	int16_t x4143 = 0;
	uint16_t x4144 = 72U;

	t65 = (((x4141-x4142)<<x4143)%x4144);

	if (t65 != 6U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4297 = UINT16_MAX;
	int8_t x4298 = INT8_MIN;
	int32_t x4299 = 3;
	int64_t x4300 = INT64_MIN;
	static volatile int64_t t66 = -246144110581723LL;

	t66 = (((x4297-x4298)<<x4299)%x4300);

	if (t66 != 525304LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x4309 = 33U;
	volatile uint64_t x4310 = 13LLU;
	uint8_t x4311 = 2U;
	static uint64_t t67 = 4353183462LLU;

	t67 = (((x4309-x4310)<<x4311)%x4312);

	if (t67 != 80LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4349 = INT8_MIN;
	int8_t x4350 = INT8_MIN;
	uint8_t x4351 = 3U;
	volatile int32_t t68 = 21;

	t68 = (((x4349-x4350)<<x4351)%x4352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4365 = INT64_MIN;
	int64_t x4366 = INT64_MIN;
	uint32_t x4367 = 0U;
	static volatile int64_t t69 = -3026LL;

	t69 = (((x4365-x4366)<<x4367)%x4368);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4485 = 1U;
	int64_t x4486 = -1LL;
	static uint8_t x4487 = 3U;

	t70 = (((x4485-x4486)<<x4487)%x4488);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4557 = 117U;
	uint32_t x4558 = UINT32_MAX;
	int8_t x4559 = 27;
	int8_t x4560 = -3;
	uint32_t t71 = 43432876U;

	t71 = (((x4557-x4558)<<x4559)%x4560);

	if (t71 != 2952790016U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4618 = -3;
	uint32_t x4619 = 5U;
	uint64_t x4620 = 32911LLU;
	static uint64_t t72 = 6018205078681698730LLU;

	t72 = (((x4617-x4618)<<x4619)%x4620);

	if (t72 != 24543LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4673 = 1U;
	uint8_t x4675 = 6U;
	static volatile uint32_t t73 = 2U;

	t73 = (((x4673-x4674)<<x4675)%x4676);

	if (t73 != 64U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4813 = 1316898195LLU;
	int64_t x4814 = 2330479127LL;
	static volatile int16_t x4815 = 5;
	uint8_t x4816 = UINT8_MAX;
	static volatile uint64_t t74 = 5789826455425LLU;

	t74 = (((x4813-x4814)<<x4815)%x4816);

	if (t74 != 27LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x4893 = -1LL;
	static volatile int32_t x4894 = -108565574;
	uint32_t x4895 = 0U;
	int64_t x4896 = -1LL;
	int64_t t75 = 1153515741146293178LL;

	t75 = (((x4893-x4894)<<x4895)%x4896);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4937 = INT32_MAX;
	uint32_t x4938 = UINT32_MAX;
	int8_t x4939 = 30;
	int8_t x4940 = -6;
	uint32_t t76 = 33058946U;

	t76 = (((x4937-x4938)<<x4939)%x4940);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4970 = UINT32_MAX;
	static volatile uint8_t x4971 = 0U;
	volatile int16_t x4972 = INT16_MAX;
	static volatile uint32_t t77 = 11564U;

	t77 = (((x4969-x4970)<<x4971)%x4972);

	if (t77 != 32761U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x5061 = UINT8_MAX;
	uint8_t x5062 = UINT8_MAX;
	volatile int32_t x5063 = 1;
	static volatile int16_t x5064 = -1;
	int32_t t78 = 564;

	t78 = (((x5061-x5062)<<x5063)%x5064);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x5162 = UINT64_MAX;
	static volatile uint32_t x5163 = 0U;
	uint32_t x5164 = UINT32_MAX;

	t79 = (((x5161-x5162)<<x5163)%x5164);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5238 = 3LLU;
	uint16_t x5239 = 0U;
	static volatile int32_t x5240 = -3770;
	volatile uint64_t t80 = 35432LLU;

	t80 = (((x5237-x5238)<<x5239)%x5240);

	if (t80 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5359 = 11;
	uint64_t x5360 = UINT64_MAX;
	volatile uint64_t t81 = 15917048LLU;

	t81 = (((x5357-x5358)<<x5359)%x5360);

	if (t81 != 184053584125952LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5525 = INT64_MAX;
	uint64_t x5526 = 476282443474630779LLU;
	uint8_t x5527 = 1U;
	int64_t x5528 = -51806LL;
	uint64_t t82 = 1745254LLU;

	t82 = (((x5525-x5526)<<x5527)%x5528);

	if (t82 != 17494179186760290056LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5621 = 1487U;
	uint16_t x5622 = 51U;
	int8_t x5623 = 1;
	int8_t x5624 = INT8_MIN;
	volatile int32_t t83 = 1;

	t83 = (((x5621-x5622)<<x5623)%x5624);

	if (t83 != 56) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5761 = INT16_MAX;
	int16_t x5762 = INT16_MIN;
	uint32_t x5763 = 1U;
	int16_t x5764 = INT16_MAX;
	int32_t t84 = 38;

	t84 = (((x5761-x5762)<<x5763)%x5764);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5797 = 194370U;
	static uint8_t x5799 = 2U;

	t85 = (((x5797-x5798)<<x5799)%x5800);

	if (t85 != 746352LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5825 = 12252U;
	uint64_t x5826 = UINT64_MAX;
	volatile uint8_t x5827 = 3U;
	int32_t x5828 = -1;
	uint64_t t86 = 5LLU;

	t86 = (((x5825-x5826)<<x5827)%x5828);

	if (t86 != 98024LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x5829 = 49205U;
	int64_t x5830 = -1LL;
	volatile int8_t x5831 = 38;
	static volatile int64_t t87 = 477013689LL;

	t87 = (((x5829-x5830)<<x5831)%x5832);

	if (t87 != 360LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5842 = 1U;
	uint16_t x5843 = 2U;
	int8_t x5844 = INT8_MIN;
	volatile int32_t t88 = -4475;

	t88 = (((x5841-x5842)<<x5843)%x5844);

	if (t88 != 120) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5965 = -1LL;
	int16_t x5966 = INT16_MIN;
	volatile uint16_t x5968 = 144U;
	volatile int64_t t89 = -290503526441531283LL;

	t89 = (((x5965-x5966)<<x5967)%x5968);

	if (t89 != 79LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6033 = 2U;
	volatile uint8_t x6035 = 0U;
	static volatile int64_t x6036 = -1159978366197LL;

	t90 = (((x6033-x6034)<<x6035)%x6036);

	if (t90 != 4294967043LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6141 = INT32_MAX;
	volatile int16_t x6142 = 2;
	uint16_t x6143 = 0U;
	volatile uint16_t x6144 = UINT16_MAX;
	int32_t t91 = -6506;

	t91 = (((x6141-x6142)<<x6143)%x6144);

	if (t91 != 32765) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x6349 = INT8_MIN;
	int8_t x6350 = INT8_MIN;
	uint16_t x6351 = 16U;
	int64_t x6352 = -6662355714LL;

	t92 = (((x6349-x6350)<<x6351)%x6352);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6353 = -1;
	int16_t x6354 = INT16_MIN;
	static volatile int8_t x6355 = 1;
	static uint16_t x6356 = 13U;
	int32_t t93 = -1;

	t93 = (((x6353-x6354)<<x6355)%x6356);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6441 = 2LL;
	static int32_t x6443 = 1;
	volatile uint8_t x6444 = UINT8_MAX;
	int64_t t94 = -461272LL;

	t94 = (((x6441-x6442)<<x6443)%x6444);

	if (t94 != 133LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6478 = INT64_MIN;
	int16_t x6480 = -2;
	int64_t t95 = -295812334LL;

	t95 = (((x6477-x6478)<<x6479)%x6480);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6481 = UINT64_MAX;
	int32_t x6482 = INT32_MIN;
	static volatile int8_t x6483 = 15;
	static volatile int32_t x6484 = INT32_MIN;

	t96 = (((x6481-x6482)<<x6483)%x6484);

	if (t96 != 70368744144896LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x6517 = INT8_MAX;
	int16_t x6518 = INT16_MIN;
	int32_t x6520 = INT32_MIN;
	static int32_t t97 = -26108;

	t97 = (((x6517-x6518)<<x6519)%x6520);

	if (t97 != 131580) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6541 = UINT8_MAX;
	volatile uint8_t x6542 = 2U;
	volatile int16_t x6543 = 0;
	int16_t x6544 = INT16_MIN;
	volatile int32_t t98 = 1;

	t98 = (((x6541-x6542)<<x6543)%x6544);

	if (t98 != 253) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x6549 = INT8_MAX;
	static int8_t x6550 = 0;
	volatile int16_t x6551 = 1;
	static int64_t x6552 = -1166311674LL;
	static volatile int64_t t99 = 399452090547LL;

	t99 = (((x6549-x6550)<<x6551)%x6552);

	if (t99 != 254LL) { NG(); } else { ; }
	
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

