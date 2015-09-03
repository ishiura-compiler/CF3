#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x90 = 86U;
int8_t x165 = -1;
uint64_t x166 = 1462854598224236260LLU;
uint32_t x168 = 109298U;
static uint8_t x182 = 5U;
volatile int32_t t3 = -22535;
uint64_t x222 = 3459LLU;
uint8_t x223 = 1U;
int8_t x224 = INT8_MAX;
int8_t x290 = 47;
int8_t x335 = 0;
int64_t x336 = 42277LL;
static int16_t x497 = INT16_MIN;
volatile int64_t t8 = 2671648302030LL;
static volatile int32_t t9 = -560742754;
volatile int8_t x887 = 0;
uint64_t x1150 = 965213309757881LLU;
volatile uint8_t x1151 = 3U;
static int8_t x1152 = -1;
uint64_t x1162 = UINT64_MAX;
uint8_t x1431 = 10U;
volatile uint64_t t17 = 2065LLU;
uint32_t x1518 = 648528U;
int64_t t18 = -58957LL;
uint8_t x1555 = 6U;
static int8_t x1613 = INT8_MIN;
static int64_t x1615 = 2LL;
int8_t x1769 = INT8_MIN;
volatile uint32_t x1786 = 2143312218U;
volatile int64_t x1788 = INT64_MAX;
uint8_t x1951 = 8U;
int64_t x1952 = 5110164520866346LL;
uint64_t x2026 = UINT64_MAX;
volatile uint64_t t27 = 230553182LLU;
int16_t x2062 = 9776;
volatile int16_t x2101 = INT16_MIN;
uint16_t x2102 = 1U;
volatile int8_t x2104 = INT8_MIN;
uint8_t x2242 = 2U;
volatile int64_t t32 = 245963019LL;
volatile uint32_t t33 = 1326848U;
int16_t x2361 = 7111;
static uint32_t x2363 = 7U;
int32_t x2433 = INT32_MIN;
static volatile uint64_t t40 = 1912184846871797821LLU;
volatile int16_t x2592 = -1;
uint8_t x2731 = 2U;
volatile uint64_t t44 = 12559491297472498LLU;
volatile uint8_t x2794 = 1U;
int8_t x2795 = 31;
volatile int64_t t47 = 40605LL;
uint8_t x2971 = 17U;
uint64_t t49 = 741746LLU;
uint32_t x2977 = UINT32_MAX;
volatile uint32_t x3044 = 879U;
volatile int32_t t53 = -2803913;
int64_t t54 = -13798468677960LL;
uint8_t x3156 = UINT8_MAX;
int8_t x3185 = INT8_MIN;
static uint8_t x3187 = 31U;
uint8_t x3203 = 1U;
uint64_t x3234 = 1053261LLU;
int32_t x3235 = 2;
int8_t x3417 = 26;
uint16_t x3458 = 0U;
uint16_t x3739 = 0U;
volatile uint32_t t64 = 213011U;
uint16_t x3806 = 5U;
int64_t x3822 = 4369758838516160748LL;
uint64_t t67 = 210772599005875736LLU;
int8_t x3872 = 16;
static uint32_t x3928 = 90U;
uint64_t x3988 = 9624254096LLU;
uint8_t x3995 = 0U;
uint64_t x4105 = 52132477960LLU;
static volatile uint16_t x4106 = UINT16_MAX;
int16_t x4121 = -1019;
volatile uint32_t t74 = 10623459U;
volatile uint32_t t75 = 27U;
int16_t x4180 = -1;
volatile int64_t t76 = 6493LL;
uint16_t x4226 = UINT16_MAX;
int32_t t77 = -476408509;
uint16_t x4258 = UINT16_MAX;
volatile int8_t x4265 = -31;
int8_t x4461 = -1;
int8_t x4463 = 0;
int16_t x4464 = INT16_MIN;
int8_t x4610 = INT8_MAX;
int16_t x4647 = 33;
int8_t x4681 = 3;
volatile int32_t x4683 = 13;
uint64_t t86 = 3909437LLU;
static int32_t x4744 = INT32_MAX;
static int64_t t89 = 2079303LL;
uint32_t x4789 = 1284U;
uint8_t x4801 = UINT8_MAX;
int16_t x4810 = INT16_MAX;
int64_t x4901 = INT64_MIN;
volatile uint16_t x4903 = 1U;
int32_t x4965 = 111099;
int64_t x4966 = INT64_MAX;
volatile int64_t x5049 = INT64_MIN;
volatile uint32_t x5052 = 133U;
int64_t x5061 = -1LL;
int16_t x5063 = 1;
int8_t x5203 = 7;
uint64_t x5225 = 122LLU;
volatile int16_t x5228 = INT16_MAX;


void f0(void) {
	static volatile int32_t x89 = INT32_MIN;
	uint16_t x91 = 0U;
	int64_t x92 = INT64_MIN;
	volatile int64_t t0 = 11053986LL;

	t0 = (x89%((x90>>x91)|x92));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x167 = 63LLU;
	volatile uint64_t t1 = 193LLU;

	t1 = (x165%((x166>>x167)|x168));

	if (t1 != 12517LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x183 = 3U;
	int64_t x184 = -1LL;
	static volatile int64_t t2 = -554279LL;

	t2 = (x181%((x182>>x183)|x184));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x197 = -41;
	uint16_t x198 = 74U;
	int8_t x199 = 15;
	int8_t x200 = -1;

	t3 = (x197%((x198>>x199)|x200));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x221 = INT32_MIN;
	static uint64_t t4 = 42LLU;

	t4 = (x221%((x222>>x223)|x224));

	if (t4 != 302LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x289 = 53;
	uint16_t x291 = 1U;
	uint8_t x292 = 15U;
	int32_t t5 = -881944623;

	t5 = (x289%((x290>>x291)|x292));

	if (t5 != 22) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x333 = 60395LL;
	uint8_t x334 = 100U;
	static volatile int64_t t6 = 8328LL;

	t6 = (x333%((x334>>x335)|x336));

	if (t6 != 18054LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x401 = -29;
	uint16_t x402 = UINT16_MAX;
	volatile int8_t x403 = 1;
	int32_t x404 = -1;
	volatile int32_t t7 = -8195;

	t7 = (x401%((x402>>x403)|x404));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x498 = INT64_MAX;
	static uint8_t x499 = 13U;
	int64_t x500 = -14LL;

	t8 = (x497%((x498>>x499)|x500));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x581 = INT8_MIN;
	int32_t x582 = INT32_MAX;
	int8_t x583 = 1;
	volatile int8_t x584 = INT8_MIN;

	t9 = (x581%((x582>>x583)|x584));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x713 = -321;
	uint64_t x714 = 358375733284869LLU;
	int8_t x715 = 0;
	int64_t x716 = INT64_MIN;
	volatile uint64_t t10 = 2226105030802463LLU;

	t10 = (x713%((x714>>x715)|x716));

	if (t10 != 9223013661121490618LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x733 = UINT64_MAX;
	uint16_t x734 = 5599U;
	static uint16_t x735 = 1U;
	volatile int64_t x736 = -993727244868LL;
	uint64_t t11 = 12858LLU;

	t11 = (x733%((x734>>x735)|x736));

	if (t11 != 993727242240LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x885 = 59975LLU;
	static volatile uint32_t x886 = 0U;
	int32_t x888 = -1;
	volatile uint64_t t12 = 447503LLU;

	t12 = (x885%((x886>>x887)|x888));

	if (t12 != 59975LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x1137 = -2240;
	static uint8_t x1138 = UINT8_MAX;
	static uint32_t x1139 = 2U;
	int32_t x1140 = -8996089;
	volatile int32_t t13 = 1;

	t13 = (x1137%((x1138>>x1139)|x1140));

	if (t13 != -2240) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1149 = 65807712LLU;
	volatile uint64_t t14 = 2LLU;

	t14 = (x1149%((x1150>>x1151)|x1152));

	if (t14 != 65807712LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x1161 = 1;
	uint8_t x1163 = 43U;
	volatile int64_t x1164 = INT64_MAX;
	uint64_t t15 = 26LLU;

	t15 = (x1161%((x1162>>x1163)|x1164));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1301 = 5LL;
	uint16_t x1302 = 29320U;
	volatile uint16_t x1303 = 1U;
	int32_t x1304 = -1;
	volatile int64_t t16 = -22849132905LL;

	t16 = (x1301%((x1302>>x1303)|x1304));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1429 = UINT32_MAX;
	uint64_t x1430 = UINT64_MAX;
	uint8_t x1432 = 1U;

	t17 = (x1429%((x1430>>x1431)|x1432));

	if (t17 != 4294967295LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1517 = INT16_MIN;
	int16_t x1519 = 0;
	int64_t x1520 = -904601313994421412LL;

	t18 = (x1517%((x1518>>x1519)|x1520));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1553 = UINT32_MAX;
	uint64_t x1554 = 74872573LLU;
	volatile int64_t x1556 = INT64_MIN;
	uint64_t t19 = 38999851464574937LLU;

	t19 = (x1553%((x1554>>x1555)|x1556));

	if (t19 != 4294967295LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1569 = -6;
	uint32_t x1570 = 3450500U;
	int8_t x1571 = 13;
	int32_t x1572 = INT32_MIN;
	uint32_t t20 = 37209U;

	t20 = (x1569%((x1570>>x1571)|x1572));

	if (t20 != 2147483221U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1585 = INT32_MIN;
	int32_t x1586 = 3531161;
	uint8_t x1587 = 12U;
	static uint64_t x1588 = 0LLU;
	static volatile uint64_t t21 = 143808959542348LLU;

	t21 = (x1585%((x1586>>x1587)|x1588));

	if (t21 != 480LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1614 = 15;
	int32_t x1616 = -1;
	int32_t t22 = -76894;

	t22 = (x1613%((x1614>>x1615)|x1616));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1745 = 11U;
	int16_t x1746 = 7;
	int8_t x1747 = 0;
	int64_t x1748 = 296253421690LL;
	volatile int64_t t23 = 2167028087752521362LL;

	t23 = (x1745%((x1746>>x1747)|x1748));

	if (t23 != 11LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1770 = UINT32_MAX;
	uint16_t x1771 = 3U;
	static volatile int64_t x1772 = INT64_MIN;
	volatile int64_t t24 = 621892003LL;

	t24 = (x1769%((x1770>>x1771)|x1772));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1785 = -19263975196146626LL;
	static int16_t x1787 = 1;
	static volatile int64_t t25 = 1020170158408029LL;

	t25 = (x1785%((x1786>>x1787)|x1788));

	if (t25 != -19263975196146626LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1949 = UINT8_MAX;
	uint32_t x1950 = UINT32_MAX;
	static volatile int64_t t26 = -129696008LL;

	t26 = (x1949%((x1950>>x1951)|x1952));

	if (t26 != 255LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2025 = -130397LL;
	int8_t x2027 = 0;
	int32_t x2028 = -12361;

	t27 = (x2025%((x2026>>x2027)|x2028));

	if (t27 != 18446744073709421219LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2061 = INT64_MIN;
	uint32_t x2063 = 1U;
	volatile uint32_t x2064 = UINT32_MAX;
	volatile int64_t t28 = 120902399061LL;

	t28 = (x2061%((x2062>>x2063)|x2064));

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2103 = 8;
	int32_t t29 = 30099997;

	t29 = (x2101%((x2102>>x2103)|x2104));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2149 = 3U;
	uint8_t x2150 = 6U;
	uint16_t x2151 = 0U;
	static volatile int64_t x2152 = INT64_MIN;
	volatile int64_t t30 = 2LL;

	t30 = (x2149%((x2150>>x2151)|x2152));

	if (t30 != 3LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2185 = -29;
	static int64_t x2186 = INT64_MAX;
	volatile uint8_t x2187 = 0U;
	volatile int32_t x2188 = -7822731;
	static volatile int64_t t31 = 1706LL;

	t31 = (x2185%((x2186>>x2187)|x2188));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2241 = 0U;
	int8_t x2243 = 23;
	static int64_t x2244 = -1LL;

	t32 = (x2241%((x2242>>x2243)|x2244));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2257 = -1045;
	int8_t x2258 = 43;
	static uint8_t x2259 = 8U;
	uint32_t x2260 = 915748U;

	t33 = (x2257%((x2258>>x2259)|x2260));

	if (t33 != 108131U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x2349 = 3U;
	int16_t x2350 = INT16_MAX;
	uint32_t x2351 = 6U;
	static int64_t x2352 = 75238121712LL;
	volatile int64_t t34 = 908199LL;

	t34 = (x2349%((x2350>>x2351)|x2352));

	if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2362 = INT64_MAX;
	int32_t x2364 = 1396;
	int64_t t35 = -14702944851LL;

	t35 = (x2361%((x2362>>x2363)|x2364));

	if (t35 != 7111LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2434 = 1733U;
	uint8_t x2435 = 1U;
	int16_t x2436 = INT16_MIN;
	volatile uint32_t t36 = 500609U;

	t36 = (x2433%((x2434>>x2435)|x2436));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2481 = INT8_MIN;
	uint64_t x2482 = 33130371LLU;
	static int16_t x2483 = 13;
	static int8_t x2484 = INT8_MAX;
	volatile uint64_t t37 = 1993748LLU;

	t37 = (x2481%((x2482>>x2483)|x2484));

	if (t37 != 3983LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2525 = INT8_MIN;
	volatile int32_t x2526 = INT32_MAX;
	int64_t x2527 = 7LL;
	uint32_t x2528 = UINT32_MAX;
	uint32_t t38 = 75008328U;

	t38 = (x2525%((x2526>>x2527)|x2528));

	if (t38 != 4294967168U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2553 = -1;
	volatile uint64_t x2554 = UINT64_MAX;
	uint16_t x2555 = 4U;
	static uint8_t x2556 = 38U;
	static uint64_t t39 = 1485LLU;

	t39 = (x2553%((x2554>>x2555)|x2556));

	if (t39 != 15LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2557 = 2114LLU;
	static uint16_t x2558 = 38U;
	int16_t x2559 = 3;
	int8_t x2560 = INT8_MIN;

	t40 = (x2557%((x2558>>x2559)|x2560));

	if (t40 != 2114LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x2589 = 107649777033851360LL;
	uint8_t x2590 = 5U;
	volatile uint8_t x2591 = 1U;
	volatile int64_t t41 = 5LL;

	t41 = (x2589%((x2590>>x2591)|x2592));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2593 = 69U;
	int8_t x2594 = INT8_MAX;
	int32_t x2595 = 25;
	int8_t x2596 = 33;
	volatile int32_t t42 = 4028;

	t42 = (x2593%((x2594>>x2595)|x2596));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x2609 = INT32_MIN;
	static uint64_t x2610 = 82941328LLU;
	static uint8_t x2611 = 44U;
	static int64_t x2612 = 71323LL;
	uint64_t t43 = 350LLU;

	t43 = (x2609%((x2610>>x2611)|x2612));

	if (t43 != 28175LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2729 = -1LL;
	static uint32_t x2730 = 11U;
	uint64_t x2732 = 45916LLU;

	t44 = (x2729%((x2730>>x2731)|x2732));

	if (t44 != 43377LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2741 = 0;
	static uint64_t x2742 = 71LLU;
	uint16_t x2743 = 0U;
	volatile uint8_t x2744 = 107U;
	static uint64_t t45 = 71043LLU;

	t45 = (x2741%((x2742>>x2743)|x2744));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2793 = 11170;
	int16_t x2796 = INT16_MAX;
	int32_t t46 = -797830;

	t46 = (x2793%((x2794>>x2795)|x2796));

	if (t46 != 11170) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2905 = -240530857247437874LL;
	int16_t x2906 = 12;
	static uint32_t x2907 = 3U;
	int16_t x2908 = -4;

	t47 = (x2905%((x2906>>x2907)|x2908));

	if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2913 = UINT16_MAX;
	uint8_t x2914 = 0U;
	static uint8_t x2915 = 20U;
	volatile uint16_t x2916 = 2U;
	static int32_t t48 = 11870;

	t48 = (x2913%((x2914>>x2915)|x2916));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2969 = INT64_MAX;
	static uint64_t x2970 = 69584746LLU;
	uint32_t x2972 = UINT32_MAX;

	t49 = (x2969%((x2970>>x2971)|x2972));

	if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2978 = 59851164U;
	int8_t x2979 = 0;
	volatile int32_t x2980 = INT32_MAX;
	uint32_t t50 = 22U;

	t50 = (x2977%((x2978>>x2979)|x2980));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3041 = INT64_MIN;
	static uint16_t x3042 = 222U;
	int8_t x3043 = 1;
	int64_t t51 = -2643341285LL;

	t51 = (x3041%((x3042>>x3043)|x3044));

	if (t51 != -494LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3117 = -1;
	uint32_t x3118 = 180U;
	static uint8_t x3119 = 6U;
	int32_t x3120 = INT32_MIN;
	static volatile uint32_t t52 = 7U;

	t52 = (x3117%((x3118>>x3119)|x3120));

	if (t52 != 2147483645U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x3125 = -68704946;
	volatile int8_t x3126 = 9;
	uint32_t x3127 = 6U;
	int32_t x3128 = -2080276;

	t53 = (x3125%((x3126>>x3127)|x3128));

	if (t53 != -55838) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x3149 = 0U;
	uint16_t x3150 = UINT16_MAX;
	static uint16_t x3151 = 0U;
	static int64_t x3152 = -1LL;

	t54 = (x3149%((x3150>>x3151)|x3152));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3153 = 103U;
	static volatile uint16_t x3154 = UINT16_MAX;
	int8_t x3155 = 16;
	static volatile int32_t t55 = 11381;

	t55 = (x3153%((x3154>>x3155)|x3156));

	if (t55 != 103) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3186 = 24U;
	uint8_t x3188 = 78U;
	int32_t t56 = -833616;

	t56 = (x3185%((x3186>>x3187)|x3188));

	if (t56 != -50) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3201 = INT64_MIN;
	uint16_t x3202 = 15624U;
	static volatile int8_t x3204 = 0;
	int64_t t57 = -544LL;

	t57 = (x3201%((x3202>>x3203)|x3204));

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3233 = INT8_MAX;
	static int16_t x3236 = -1;
	volatile uint64_t t58 = 133836894264LLU;

	t58 = (x3233%((x3234>>x3235)|x3236));

	if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3418 = UINT32_MAX;
	int16_t x3419 = 0;
	volatile uint64_t x3420 = 25LLU;
	uint64_t t59 = 476761LLU;

	t59 = (x3417%((x3418>>x3419)|x3420));

	if (t59 != 26LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3441 = INT64_MIN;
	static volatile uint64_t x3442 = 4112LLU;
	volatile uint8_t x3443 = 39U;
	int16_t x3444 = INT16_MAX;
	uint64_t t60 = 1881254313371LLU;

	t60 = (x3441%((x3442>>x3443)|x3444));

	if (t60 != 8LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3457 = 31LLU;
	int8_t x3459 = 1;
	int32_t x3460 = -1;
	uint64_t t61 = 4207227250LLU;

	t61 = (x3457%((x3458>>x3459)|x3460));

	if (t61 != 31LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3473 = 238741572891089734LLU;
	int16_t x3474 = 0;
	int8_t x3475 = 0;
	static int8_t x3476 = -1;
	uint64_t t62 = 269768532883935LLU;

	t62 = (x3473%((x3474>>x3475)|x3476));

	if (t62 != 238741572891089734LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3737 = 13354000457319420LLU;
	int32_t x3738 = INT32_MAX;
	int64_t x3740 = -1LL;
	uint64_t t63 = 62379543263LLU;

	t63 = (x3737%((x3738>>x3739)|x3740));

	if (t63 != 13354000457319420LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3801 = UINT32_MAX;
	uint16_t x3802 = UINT16_MAX;
	int8_t x3803 = 4;
	uint8_t x3804 = 1U;

	t64 = (x3801%((x3802>>x3803)|x3804));

	if (t64 != 255U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3805 = 52U;
	int8_t x3807 = 24;
	volatile int32_t x3808 = -1;
	volatile int32_t t65 = -4996;

	t65 = (x3805%((x3806>>x3807)|x3808));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3821 = 3U;
	volatile uint64_t x3823 = 29LLU;
	int32_t x3824 = 1737;
	int64_t t66 = -8680136LL;

	t66 = (x3821%((x3822>>x3823)|x3824));

	if (t66 != 3LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3861 = -36802952;
	uint64_t x3862 = 92LLU;
	int8_t x3863 = 1;
	int8_t x3864 = INT8_MIN;

	t67 = (x3861%((x3862>>x3863)|x3864));

	if (t67 != 18446744073672748664LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3869 = INT64_MAX;
	int64_t x3870 = INT64_MAX;
	uint8_t x3871 = 10U;
	int64_t t68 = -989577070869189568LL;

	t68 = (x3869%((x3870>>x3871)|x3872));

	if (t68 != 1023LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3925 = INT32_MAX;
	volatile int16_t x3926 = INT16_MAX;
	uint16_t x3927 = 18U;
	static uint32_t t69 = 14925320U;

	t69 = (x3925%((x3926>>x3927)|x3928));

	if (t69 != 37U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3937 = INT64_MAX;
	static uint16_t x3938 = 1997U;
	static uint8_t x3939 = 5U;
	static uint16_t x3940 = UINT16_MAX;
	volatile int64_t t70 = 13LL;

	t70 = (x3937%((x3938>>x3939)|x3940));

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3985 = -1;
	uint32_t x3986 = 36367653U;
	int8_t x3987 = 2;
	volatile uint64_t t71 = 1036225LLU;

	t71 = (x3985%((x3986>>x3987)|x3988));

	if (t71 != 9040893014LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x3993 = -1;
	uint64_t x3994 = 610591306LLU;
	uint32_t x3996 = UINT32_MAX;
	static volatile uint64_t t72 = 1142107309219003LLU;

	t72 = (x3993%((x3994>>x3995)|x3996));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4107 = 10U;
	int16_t x4108 = -1639;
	static volatile uint64_t t73 = 693419129503097LLU;

	t73 = (x4105%((x4106>>x4107)|x4108));

	if (t73 != 52132477960LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4122 = 50U;
	static volatile int32_t x4123 = 31;
	static uint16_t x4124 = UINT16_MAX;

	t74 = (x4121%((x4122>>x4123)|x4124));

	if (t74 != 64517U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4145 = 0U;
	static uint16_t x4146 = 0U;
	uint16_t x4147 = 26U;
	uint32_t x4148 = UINT32_MAX;

	t75 = (x4145%((x4146>>x4147)|x4148));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4177 = INT64_MAX;
	uint8_t x4178 = UINT8_MAX;
	uint8_t x4179 = 2U;

	t76 = (x4177%((x4178>>x4179)|x4180));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4225 = -121;
	int16_t x4227 = 0;
	int32_t x4228 = INT32_MIN;

	t77 = (x4225%((x4226>>x4227)|x4228));

	if (t77 != -121) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4257 = UINT16_MAX;
	uint8_t x4259 = 2U;
	static int8_t x4260 = -1;
	volatile int32_t t78 = 45;

	t78 = (x4257%((x4258>>x4259)|x4260));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4266 = 12U;
	int8_t x4267 = 0;
	int64_t x4268 = INT64_MIN;
	int64_t t79 = -25LL;

	t79 = (x4265%((x4266>>x4267)|x4268));

	if (t79 != -31LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4349 = -24447730LL;
	uint64_t x4350 = 5489002LLU;
	volatile int32_t x4351 = 30;
	static int64_t x4352 = INT64_MAX;
	uint64_t t80 = 108524LLU;

	t80 = (x4349%((x4350>>x4351)|x4352));

	if (t80 != 9223372036830328079LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4462 = 22749LL;
	static int64_t t81 = -588944709533963LL;

	t81 = (x4461%((x4462>>x4463)|x4464));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4521 = 84U;
	volatile int64_t x4522 = INT64_MAX;
	static uint8_t x4523 = 5U;
	int16_t x4524 = INT16_MAX;
	int64_t t82 = 229809813LL;

	t82 = (x4521%((x4522>>x4523)|x4524));

	if (t82 != 84LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4609 = INT64_MAX;
	uint16_t x4611 = 10U;
	int16_t x4612 = -1;
	volatile int64_t t83 = -2639655LL;

	t83 = (x4609%((x4610>>x4611)|x4612));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4637 = UINT32_MAX;
	static volatile uint8_t x4638 = 45U;
	static uint8_t x4639 = 28U;
	static uint32_t x4640 = UINT32_MAX;
	uint32_t t84 = 174785U;

	t84 = (x4637%((x4638>>x4639)|x4640));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4645 = UINT8_MAX;
	int64_t x4646 = INT64_MAX;
	int32_t x4648 = 944762177;
	int64_t t85 = 99238481585185LL;

	t85 = (x4645%((x4646>>x4647)|x4648));

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4682 = 13974;
	uint64_t x4684 = 3LLU;

	t86 = (x4681%((x4682>>x4683)|x4684));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x4701 = 1838U;
	int64_t x4702 = INT64_MAX;
	uint8_t x4703 = 30U;
	static volatile int8_t x4704 = INT8_MAX;
	volatile int64_t t87 = 30457310961035LL;

	t87 = (x4701%((x4702>>x4703)|x4704));

	if (t87 != 1838LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4713 = -1;
	uint16_t x4714 = 0U;
	int16_t x4715 = 6;
	volatile int8_t x4716 = -1;
	int32_t t88 = 13933024;

	t88 = (x4713%((x4714>>x4715)|x4716));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4741 = UINT32_MAX;
	int64_t x4742 = 37671609080341LL;
	int8_t x4743 = 21;

	t89 = (x4741%((x4742>>x4743)|x4744));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4790 = UINT16_MAX;
	static uint8_t x4791 = 3U;
	volatile uint32_t x4792 = 1U;
	static uint32_t t90 = 6336567U;

	t90 = (x4789%((x4790>>x4791)|x4792));

	if (t90 != 1284U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x4802 = UINT16_MAX;
	uint16_t x4803 = 5U;
	int32_t x4804 = INT32_MIN;
	static volatile int32_t t91 = -459198351;

	t91 = (x4801%((x4802>>x4803)|x4804));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4809 = 20351U;
	int8_t x4811 = 27;
	volatile int16_t x4812 = INT16_MIN;
	uint32_t t92 = 195648423U;

	t92 = (x4809%((x4810>>x4811)|x4812));

	if (t92 != 20351U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4902 = 130466823581LLU;
	int32_t x4904 = -1;
	uint64_t t93 = 354943221711601028LLU;

	t93 = (x4901%((x4902>>x4903)|x4904));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x4967 = 3LLU;
	static int8_t x4968 = INT8_MAX;
	volatile int64_t t94 = -50366795647971264LL;

	t94 = (x4965%((x4966>>x4967)|x4968));

	if (t94 != 111099LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5050 = UINT64_MAX;
	uint16_t x5051 = 0U;
	uint64_t t95 = 1985LLU;

	t95 = (x5049%((x5050>>x5051)|x5052));

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x5062 = 945578714903382003LL;
	uint16_t x5064 = 0U;
	int64_t t96 = 27615736LL;

	t96 = (x5061%((x5062>>x5063)|x5064));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5201 = 19LLU;
	uint8_t x5202 = UINT8_MAX;
	uint16_t x5204 = 4031U;
	uint64_t t97 = 3727952443LLU;

	t97 = (x5201%((x5202>>x5203)|x5204));

	if (t97 != 19LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5226 = INT16_MAX;
	volatile uint8_t x5227 = 0U;
	uint64_t t98 = 7544640381950LLU;

	t98 = (x5225%((x5226>>x5227)|x5228));

	if (t98 != 122LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5257 = 41LLU;
	volatile int16_t x5258 = INT16_MAX;
	uint8_t x5259 = 1U;
	volatile uint8_t x5260 = 59U;
	volatile uint64_t t99 = 30318LLU;

	t99 = (x5257%((x5258>>x5259)|x5260));

	if (t99 != 41LLU) { NG(); } else { ; }
	
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

