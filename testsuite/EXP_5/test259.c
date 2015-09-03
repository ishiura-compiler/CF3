#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x31 = -1;
int8_t x32 = 1;
volatile int16_t x38 = 13;
volatile int64_t t1 = 1038LL;
uint32_t x216 = 5U;
uint64_t t2 = 6907856430449135LLU;
uint64_t x229 = 29LLU;
int32_t x333 = INT32_MIN;
uint32_t t6 = 1808U;
uint8_t x519 = 15U;
int8_t x567 = -1;
int32_t t11 = -12;
volatile uint16_t x637 = UINT16_MAX;
static uint32_t x639 = 241U;
static uint8_t x768 = 15U;
volatile int64_t t16 = -2LL;
volatile int64_t x834 = 2LL;
volatile int64_t t17 = 443202LL;
static uint64_t x894 = 2LLU;
uint16_t x896 = 0U;
volatile uint64_t t18 = UINT64_MAX;
int32_t x945 = 129015315;
int64_t x946 = INT64_MAX;
uint64_t x947 = UINT64_MAX;
int32_t x973 = INT32_MAX;
int32_t x1269 = INT32_MAX;
static volatile int64_t x1270 = -54889LL;
volatile int64_t t21 = 125362LL;
static int32_t x1534 = -1;
static uint64_t x1591 = 14772173365LLU;
int8_t x1649 = INT8_MAX;
int16_t x1652 = 0;
static int8_t x1698 = 23;
uint32_t x1699 = UINT32_MAX;
volatile uint32_t x1777 = 2841048U;
static int8_t x1820 = 40;
uint32_t x1823 = 981071811U;
int16_t x1942 = -202;
uint16_t x1944 = 1U;
int32_t x2118 = INT32_MAX;
int16_t x2119 = 49;
static uint64_t x2138 = 6330296542762907LLU;
static uint32_t x2398 = 2663960U;
static volatile uint64_t x2399 = UINT64_MAX;
volatile uint64_t t38 = UINT64_MAX;
volatile uint32_t x2426 = UINT32_MAX;
int64_t x2427 = -1LL;
volatile int64_t t39 = -10180LL;
static int64_t x2486 = -1LL;
int64_t x2529 = 53242LL;
int8_t x2555 = -2;
static int8_t x2556 = 12;
uint8_t x2616 = 0U;
int16_t x2668 = 14;
volatile uint64_t t45 = UINT64_MAX;
volatile uint16_t x2669 = 3910U;
int8_t x2670 = INT8_MIN;
uint8_t x2712 = 44U;
volatile int32_t x2797 = INT32_MAX;
volatile int64_t x2798 = INT64_MAX;
volatile uint32_t x2826 = UINT32_MAX;
uint8_t x2828 = 12U;
static int32_t x2886 = INT32_MAX;
uint32_t x2887 = 322424U;
static uint32_t x2987 = 0U;
uint16_t x3017 = 28171U;
static int8_t x3081 = INT8_MAX;
int16_t x3083 = INT16_MIN;
volatile int8_t x3084 = 0;
static uint64_t x3192 = 2LLU;
uint64_t t57 = 8602680016436578LLU;
int8_t x3410 = 4;
int16_t x3411 = -1586;
volatile int64_t t64 = 507377932339136328LL;
int16_t x3837 = INT16_MIN;
int8_t x3839 = 0;
static int16_t x3844 = 0;
uint64_t x3930 = UINT64_MAX;
uint64_t t72 = 233LLU;
volatile uint16_t x3938 = 17U;
volatile int16_t x3939 = INT16_MIN;
static int32_t x3993 = INT32_MIN;
uint8_t x3994 = UINT8_MAX;
int32_t t74 = INT32_MIN;
uint16_t x4001 = 60U;
int16_t x4002 = INT16_MIN;
static int64_t x4004 = 6LL;
uint64_t t75 = 11730191468152091LLU;
int32_t x4149 = 1052;
volatile int32_t x4150 = INT32_MAX;
uint32_t x4205 = 165810998U;
int8_t x4208 = 1;
int32_t x4225 = INT32_MIN;
int32_t x4279 = -1;
volatile uint8_t x4352 = 5U;
volatile int64_t t81 = -14795341197824LL;
static uint32_t x4500 = 1U;
static volatile int64_t x4647 = INT64_MIN;
int64_t t85 = -3072LL;
int64_t x4701 = -1LL;
int8_t x4702 = INT8_MIN;
uint8_t x4720 = 1U;
static int16_t x4734 = INT16_MAX;
int32_t x4784 = 6;
int32_t t90 = -2088894;
uint8_t x4861 = UINT8_MAX;
int16_t x5069 = -1;
static int8_t x5072 = 1;
uint16_t x5099 = 1U;
int8_t x5127 = INT8_MIN;


void f0(void) {
	int64_t x29 = -10LL;
	int64_t x30 = -1LL;
	static int64_t t0 = 549642230793945656LL;

	t0 = (x29|((x30-x31)>>x32));

	if (t0 != -10LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x37 = -12099894;
	int64_t x39 = -1LL;
	uint32_t x40 = 2U;

	t1 = (x37|((x38-x39)>>x40));

	if (t1 != -12099893LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x213 = 15566918U;
	int32_t x214 = INT32_MAX;
	uint64_t x215 = 13572229234470246LLU;

	t2 = (x213|((x214-x215)>>x216));

	if (t2 != 576036620221668054LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	uint64_t x227 = 17581497015LLU;
	static uint8_t x228 = 1U;
	uint64_t t3 = 918LLU;

	t3 = (x225|((x226-x227)>>x228));

	if (t3 != 18446744073709540004LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x230 = 1499;
	int16_t x231 = -1;
	volatile uint32_t x232 = 1U;
	uint64_t t4 = 7932243065469LLU;

	t4 = (x229|((x230-x231)>>x232));

	if (t4 != 767LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x329 = INT16_MIN;
	volatile int16_t x330 = -1;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 4U;
	volatile int32_t t5 = 1;

	t5 = (x329|((x330-x331)>>x332));

	if (t5 != -30721) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	static uint32_t x336 = 13U;

	t6 = (x333|((x334-x335)>>x336));

	if (t6 != 2147745791U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x337 = 1;
	volatile int16_t x338 = INT16_MAX;
	int32_t x339 = 0;
	static uint8_t x340 = 2U;
	static int32_t t7 = 74;

	t7 = (x337|((x338-x339)>>x340));

	if (t7 != 8191) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = -3590;
	int32_t x368 = 5;
	static volatile int32_t t8 = -1431;

	t8 = (x365|((x366-x367)>>x368));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x517 = -15352;
	volatile int32_t x518 = INT32_MAX;
	int32_t x520 = 1;
	volatile int32_t t9 = -832;

	t9 = (x517|((x518-x519)>>x520));

	if (t9 != -8) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x565 = INT8_MAX;
	volatile int8_t x566 = 0;
	uint8_t x568 = 1U;
	int32_t t10 = -547;

	t10 = (x565|((x566-x567)>>x568));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x605 = UINT16_MAX;
	int8_t x606 = -1;
	int32_t x607 = -1;
	uint8_t x608 = 0U;

	t11 = (x605|((x606-x607)>>x608));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x638 = 32U;
	uint8_t x640 = 0U;
	static uint32_t t12 = UINT32_MAX;

	t12 = (x637|((x638-x639)>>x640));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x649 = INT64_MIN;
	uint16_t x650 = UINT16_MAX;
	int16_t x651 = 14065;
	static int32_t x652 = 0;
	int64_t t13 = -1LL;

	t13 = (x649|((x650-x651)>>x652));

	if (t13 != -9223372036854724338LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x713 = INT8_MIN;
	uint16_t x714 = 41U;
	int64_t x715 = -1LL;
	uint64_t x716 = 24LLU;
	int64_t t14 = 42308517988LL;

	t14 = (x713|((x714-x715)>>x716));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x765 = 0;
	static uint16_t x766 = 438U;
	uint16_t x767 = 97U;
	volatile int32_t t15 = -774683;

	t15 = (x765|((x766-x767)>>x768));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x781 = -1323369990LL;
	uint32_t x782 = UINT32_MAX;
	int16_t x783 = INT16_MIN;
	static int16_t x784 = 5;

	t16 = (x781|((x782-x783)>>x784));

	if (t16 != -1323369473LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x833 = INT32_MIN;
	int32_t x835 = INT32_MIN;
	static volatile uint16_t x836 = 2U;

	t17 = (x833|((x834-x835)>>x836));

	if (t17 != -1610612736LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x893 = INT64_MAX;
	static uint32_t x895 = 748U;

	t18 = (x893|((x894-x895)>>x896));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x948 = 0;
	volatile uint64_t t19 = 180LLU;

	t19 = (x945|((x946-x947)>>x948));

	if (t19 != 9223372036983791123LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x974 = UINT16_MAX;
	static uint64_t x975 = 934105892672260LLU;
	int64_t x976 = 41LL;
	volatile uint64_t t20 = 2506436058LLU;

	t20 = (x973|((x974-x975)>>x976));

	if (t20 != 2147483647LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1271 = INT32_MIN;
	int8_t x1272 = 2;

	t21 = (x1269|((x1270-x1271)>>x1272));

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1305 = INT32_MAX;
	int64_t x1306 = -634452077031764748LL;
	int64_t x1307 = INT64_MIN;
	uint8_t x1308 = 2U;
	volatile int64_t t22 = -54469119399912LL;

	t22 = (x1305|((x1306-x1307)>>x1308));

	if (t22 != 2147229991526465535LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1533 = UINT8_MAX;
	uint32_t x1535 = 324341691U;
	int8_t x1536 = 1;
	uint32_t t23 = 2107677375U;

	t23 = (x1533|((x1534-x1535)>>x1536));

	if (t23 != 1985313023U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1589 = 1299;
	static uint16_t x1590 = UINT16_MAX;
	int32_t x1592 = 1;
	uint64_t t24 = 590275897LLU;

	t24 = (x1589|((x1590-x1591)>>x1592));

	if (t24 != 9223372029468723191LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1650 = UINT64_MAX;
	int8_t x1651 = -2;
	uint64_t t25 = 4LLU;

	t25 = (x1649|((x1650-x1651)>>x1652));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1697 = INT32_MIN;
	uint8_t x1700 = 23U;
	static uint32_t t26 = 18731U;

	t26 = (x1697|((x1698-x1699)>>x1700));

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1769 = UINT16_MAX;
	uint64_t x1770 = UINT64_MAX;
	int64_t x1771 = INT64_MAX;
	int16_t x1772 = 0;
	volatile uint64_t t27 = 0LLU;

	t27 = (x1769|((x1770-x1771)>>x1772));

	if (t27 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1778 = 25;
	static int8_t x1779 = 12;
	int32_t x1780 = 1;
	volatile uint32_t t28 = 44201U;

	t28 = (x1777|((x1778-x1779)>>x1780));

	if (t28 != 2841054U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1817 = 185579155;
	static uint32_t x1818 = UINT32_MAX;
	int64_t x1819 = -1LL;
	int64_t t29 = -3992305LL;

	t29 = (x1817|((x1818-x1819)>>x1820));

	if (t29 != 185579155LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1821 = -1;
	int8_t x1822 = -1;
	uint32_t x1824 = 4U;
	uint32_t t30 = UINT32_MAX;

	t30 = (x1821|((x1822-x1823)>>x1824));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1941 = 214826298284631LLU;
	int32_t x1943 = INT32_MIN;
	uint64_t t31 = 2975654688012754LLU;

	t31 = (x1941|((x1942-x1943)>>x1944));

	if (t31 != 214826747953119LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2013 = UINT64_MAX;
	uint64_t x2014 = UINT64_MAX;
	int16_t x2015 = -7822;
	int64_t x2016 = 0LL;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x2013|((x2014-x2015)>>x2016));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2117 = 1U;
	static int32_t x2120 = 0;
	volatile int32_t t33 = 13;

	t33 = (x2117|((x2118-x2119)>>x2120));

	if (t33 != 2147483599) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2137 = 1LL;
	uint64_t x2139 = 6727158881254210742LLU;
	uint16_t x2140 = 1U;
	volatile uint64_t t34 = 605789302819980437LLU;

	t34 = (x2137|((x2138-x2139)>>x2140));

	if (t34 != 5862957744499051891LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2177 = 82U;
	static int16_t x2178 = INT16_MIN;
	static int32_t x2179 = INT32_MIN;
	static int8_t x2180 = 10;
	uint32_t t35 = 25132134U;

	t35 = (x2177|((x2178-x2179)>>x2180));

	if (t35 != 2097138U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2181 = -1LL;
	volatile int16_t x2182 = 1;
	static volatile uint64_t x2183 = 121LLU;
	uint8_t x2184 = 54U;
	uint64_t t36 = UINT64_MAX;

	t36 = (x2181|((x2182-x2183)>>x2184));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2273 = 0;
	static volatile uint32_t x2274 = 1889501953U;
	volatile uint32_t x2275 = UINT32_MAX;
	uint16_t x2276 = 1U;
	static volatile uint32_t t37 = 3283246U;

	t37 = (x2273|((x2274-x2275)>>x2276));

	if (t37 != 944750977U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2397 = -1;
	static int8_t x2400 = 7;

	t38 = (x2397|((x2398-x2399)>>x2400));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2425 = INT16_MAX;
	static int16_t x2428 = 15;

	t39 = (x2425|((x2426-x2427)>>x2428));

	if (t39 != 163839LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2481 = INT32_MIN;
	uint64_t x2482 = 166333324810394LLU;
	int64_t x2483 = -1LL;
	static int16_t x2484 = 8;
	uint64_t t40 = 99236745090709LLU;

	t40 = (x2481|((x2482-x2483)>>x2484));

	if (t40 != 18446744072761556312LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2485 = 27U;
	int32_t x2487 = INT32_MIN;
	volatile uint16_t x2488 = 0U;
	int64_t t41 = 211702974LL;

	t41 = (x2485|((x2486-x2487)>>x2488));

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2530 = UINT64_MAX;
	static int32_t x2531 = 121912;
	static uint8_t x2532 = 59U;
	volatile uint64_t t42 = 0LLU;

	t42 = (x2529|((x2530-x2531)>>x2532));

	if (t42 != 53247LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2553 = INT32_MIN;
	static int8_t x2554 = 0;
	volatile int32_t t43 = INT32_MIN;

	t43 = (x2553|((x2554-x2555)>>x2556));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2613 = -1;
	uint32_t x2614 = 2071U;
	uint16_t x2615 = 6287U;
	uint32_t t44 = UINT32_MAX;

	t44 = (x2613|((x2614-x2615)>>x2616));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2665 = -1LL;
	uint16_t x2666 = 6858U;
	uint64_t x2667 = UINT64_MAX;

	t45 = (x2665|((x2666-x2667)>>x2668));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2671 = INT16_MIN;
	volatile int8_t x2672 = 0;
	int32_t t46 = 3726;

	t46 = (x2669|((x2670-x2671)>>x2672));

	if (t46 != 32710) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2709 = INT16_MIN;
	uint64_t x2710 = UINT64_MAX;
	int16_t x2711 = INT16_MIN;
	volatile uint64_t t47 = 324LLU;

	t47 = (x2709|((x2710-x2711)>>x2712));

	if (t47 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2799 = INT32_MAX;
	uint8_t x2800 = 2U;
	int64_t t48 = -50254077625342784LL;

	t48 = (x2797|((x2798-x2799)>>x2800));

	if (t48 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2825 = -1LL;
	int8_t x2827 = -1;
	static volatile int64_t t49 = 366911612LL;

	t49 = (x2825|((x2826-x2827)>>x2828));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2829 = INT8_MIN;
	volatile int64_t x2830 = 201796712834LL;
	int32_t x2831 = INT32_MIN;
	int8_t x2832 = 13;
	int64_t t50 = -66560946131293LL;

	t50 = (x2829|((x2830-x2831)>>x2832));

	if (t50 != -85LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2881 = -292179081853258LL;
	volatile int16_t x2882 = -1;
	static int32_t x2883 = INT32_MIN;
	int8_t x2884 = 5;
	volatile int64_t t51 = 112402LL;

	t51 = (x2881|((x2882-x2883)>>x2884));

	if (t51 != -292179041845249LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2885 = INT64_MIN;
	uint16_t x2888 = 1U;
	int64_t t52 = -22372220666322LL;

	t52 = (x2885|((x2886-x2887)>>x2888));

	if (t52 != -9223372035781195197LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2985 = 7;
	int64_t x2986 = INT64_MAX;
	static volatile int8_t x2988 = 1;
	volatile int64_t t53 = 0LL;

	t53 = (x2985|((x2986-x2987)>>x2988));

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3018 = INT32_MAX;
	static int32_t x3019 = 46;
	volatile uint8_t x3020 = 2U;
	volatile int32_t t54 = -333655104;

	t54 = (x3017|((x3018-x3019)>>x3020));

	if (t54 != 536870911) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3033 = -1;
	uint64_t x3034 = UINT64_MAX;
	int16_t x3035 = -24;
	uint8_t x3036 = 62U;
	uint64_t t55 = UINT64_MAX;

	t55 = (x3033|((x3034-x3035)>>x3036));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3082 = UINT16_MAX;
	static int32_t t56 = 46;

	t56 = (x3081|((x3082-x3083)>>x3084));

	if (t56 != 98303) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x3189 = INT64_MIN;
	uint64_t x3190 = 260953LLU;
	uint8_t x3191 = 27U;

	t57 = (x3189|((x3190-x3191)>>x3192));

	if (t57 != 9223372036854841039LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3261 = INT32_MIN;
	int64_t x3262 = 376604LL;
	volatile uint8_t x3263 = UINT8_MAX;
	int16_t x3264 = 0;
	volatile int64_t t58 = -39LL;

	t58 = (x3261|((x3262-x3263)>>x3264));

	if (t58 != -2147107299LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3301 = UINT16_MAX;
	int16_t x3302 = INT16_MIN;
	uint32_t x3303 = 396002650U;
	static int8_t x3304 = 0;
	static uint32_t t59 = 1688927424U;

	t59 = (x3301|((x3302-x3303)>>x3304));

	if (t59 != 3898933247U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3357 = -24216;
	uint64_t x3358 = 918179573409LLU;
	uint64_t x3359 = 2966269307LLU;
	int8_t x3360 = 7;
	static uint64_t t60 = 177851871332LLU;

	t60 = (x3357|((x3358-x3359)>>x3360));

	if (t60 != 18446744073709546986LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3381 = INT32_MIN;
	volatile uint16_t x3382 = 5707U;
	int64_t x3383 = -129360LL;
	static volatile int64_t x3384 = 1LL;
	int64_t t61 = 2LL;

	t61 = (x3381|((x3382-x3383)>>x3384));

	if (t61 != -2147416115LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3409 = 8U;
	uint8_t x3412 = 1U;
	volatile int32_t t62 = 46068805;

	t62 = (x3409|((x3410-x3411)>>x3412));

	if (t62 != 795) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x3585 = -1;
	volatile int32_t x3586 = -3;
	volatile uint32_t x3587 = UINT32_MAX;
	int16_t x3588 = 3;
	uint32_t t63 = UINT32_MAX;

	t63 = (x3585|((x3586-x3587)>>x3588));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3605 = -1;
	int64_t x3606 = 182777175558633LL;
	uint8_t x3607 = 1U;
	int8_t x3608 = 0;

	t64 = (x3605|((x3606-x3607)>>x3608));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x3653 = -726;
	int32_t x3654 = -1;
	uint32_t x3655 = 16437434U;
	uint8_t x3656 = 25U;
	uint32_t t65 = 30628082U;

	t65 = (x3653|((x3654-x3655)>>x3656));

	if (t65 != 4294966655U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3681 = 61U;
	static volatile uint64_t x3682 = 7571460LLU;
	volatile int16_t x3683 = 10;
	volatile uint8_t x3684 = 3U;
	uint64_t t66 = 2148LLU;

	t66 = (x3681|((x3682-x3683)>>x3684));

	if (t66 != 946431LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3705 = 3708U;
	uint8_t x3706 = UINT8_MAX;
	int64_t x3707 = -1LL;
	volatile int32_t x3708 = 23;
	volatile int64_t t67 = -6282640473LL;

	t67 = (x3705|((x3706-x3707)>>x3708));

	if (t67 != 3708LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3765 = INT32_MIN;
	uint8_t x3766 = 36U;
	uint8_t x3767 = 5U;
	volatile int32_t x3768 = 8;
	volatile int32_t t68 = INT32_MIN;

	t68 = (x3765|((x3766-x3767)>>x3768));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3817 = INT8_MIN;
	volatile int8_t x3818 = -1;
	uint64_t x3819 = UINT64_MAX;
	static int32_t x3820 = 50;
	volatile uint64_t t69 = 303491462LLU;

	t69 = (x3817|((x3818-x3819)>>x3820));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3838 = INT32_MAX;
	static uint16_t x3840 = 7U;
	static int32_t t70 = -118919442;

	t70 = (x3837|((x3838-x3839)>>x3840));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3841 = INT64_MIN;
	static int64_t x3842 = -1LL;
	static int64_t x3843 = -1LL;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x3841|((x3842-x3843)>>x3844));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3929 = INT32_MIN;
	int16_t x3931 = INT16_MAX;
	volatile uint32_t x3932 = 6U;

	t72 = (x3929|((x3930-x3931)>>x3932));

	if (t72 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3937 = INT16_MIN;
	static uint8_t x3940 = 3U;
	int32_t t73 = 451623688;

	t73 = (x3937|((x3938-x3939)>>x3940));

	if (t73 != -28670) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3995 = UINT8_MAX;
	uint8_t x3996 = 0U;

	t74 = (x3993|((x3994-x3995)>>x3996));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4003 = 111585LLU;

	t75 = (x4001|((x4002-x4003)>>x4004));

	if (t75 != 288230376151709500LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4151 = 3366LLU;
	volatile uint8_t x4152 = 0U;
	volatile uint64_t t76 = 983092019346465422LLU;

	t76 = (x4149|((x4150-x4151)>>x4152));

	if (t76 != 2147481309LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4169 = INT32_MIN;
	volatile int64_t x4170 = -1LL;
	uint64_t x4171 = 470841254551LLU;
	uint16_t x4172 = 33U;
	volatile uint64_t t77 = 2933610LLU;

	t77 = (x4169|((x4170-x4171)>>x4172));

	if (t77 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4206 = UINT8_MAX;
	int32_t x4207 = -1;
	static uint32_t t78 = 3123U;

	t78 = (x4205|((x4206-x4207)>>x4208));

	if (t78 != 165811126U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4226 = 0U;
	static int8_t x4227 = -27;
	int32_t x4228 = 1;
	volatile uint32_t t79 = 52065U;

	t79 = (x4225|((x4226-x4227)>>x4228));

	if (t79 != 2147483661U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4277 = 9;
	volatile int64_t x4278 = -1LL;
	volatile uint16_t x4280 = 1U;
	volatile int64_t t80 = -130838753220852LL;

	t80 = (x4277|((x4278-x4279)>>x4280));

	if (t80 != 9LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4349 = -1;
	int16_t x4350 = INT16_MAX;
	int64_t x4351 = -1LL;

	t81 = (x4349|((x4350-x4351)>>x4352));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4497 = 4876U;
	uint8_t x4498 = 29U;
	int8_t x4499 = 0;
	int32_t t82 = -47;

	t82 = (x4497|((x4498-x4499)>>x4500));

	if (t82 != 4878) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4529 = INT32_MAX;
	uint16_t x4530 = 57U;
	volatile int16_t x4531 = -1;
	volatile int16_t x4532 = 14;
	int32_t t83 = INT32_MAX;

	t83 = (x4529|((x4530-x4531)>>x4532));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4557 = INT16_MIN;
	volatile uint64_t x4558 = 22524LLU;
	static uint64_t x4559 = UINT64_MAX;
	uint8_t x4560 = 2U;
	volatile uint64_t t84 = 237898647980553LLU;

	t84 = (x4557|((x4558-x4559)>>x4560));

	if (t84 != 18446744073709524479LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4645 = 0;
	int16_t x4646 = -1;
	uint8_t x4648 = 9U;

	t85 = (x4645|((x4646-x4647)>>x4648));

	if (t85 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4703 = INT64_MIN;
	int8_t x4704 = 2;
	int64_t t86 = 4806118LL;

	t86 = (x4701|((x4702-x4703)>>x4704));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4717 = INT32_MIN;
	int16_t x4718 = -1;
	uint32_t x4719 = UINT32_MAX;
	uint32_t t87 = 176754616U;

	t87 = (x4717|((x4718-x4719)>>x4720));

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4733 = 3U;
	int8_t x4735 = INT8_MIN;
	uint8_t x4736 = 15U;
	volatile int32_t t88 = 24;

	t88 = (x4733|((x4734-x4735)>>x4736));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4781 = 742;
	int32_t x4782 = 387471;
	volatile int16_t x4783 = INT16_MAX;
	volatile int32_t t89 = 21603903;

	t89 = (x4781|((x4782-x4783)>>x4784));

	if (t89 != 6118) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4829 = UINT16_MAX;
	static volatile int16_t x4830 = -11;
	int16_t x4831 = INT16_MIN;
	uint8_t x4832 = 0U;

	t90 = (x4829|((x4830-x4831)>>x4832));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4833 = INT8_MAX;
	int8_t x4834 = INT8_MAX;
	static uint16_t x4835 = 2U;
	volatile uint8_t x4836 = 5U;
	volatile int32_t t91 = 88728;

	t91 = (x4833|((x4834-x4835)>>x4836));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x4862 = UINT16_MAX;
	volatile uint64_t x4863 = 3537765480405LLU;
	uint32_t x4864 = 9U;
	volatile uint64_t t92 = 48LLU;

	t92 = (x4861|((x4862-x4863)>>x4864));

	if (t92 != 36028790109265919LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4985 = 1U;
	uint64_t x4986 = 133534LLU;
	int32_t x4987 = -157376298;
	uint8_t x4988 = 6U;
	static volatile uint64_t t93 = 11491747LLU;

	t93 = (x4985|((x4986-x4987)>>x4988));

	if (t93 != 2461091LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x5009 = 48750U;
	volatile int64_t x5010 = INT64_MAX;
	uint64_t x5011 = 307253LLU;
	int16_t x5012 = 1;
	uint64_t t94 = 27284126LLU;

	t94 = (x5009|((x5010-x5011)>>x5012));

	if (t94 != 4611686018427240431LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5070 = 0;
	static volatile int64_t x5071 = -1LL;
	int64_t t95 = -1886164LL;

	t95 = (x5069|((x5070-x5071)>>x5072));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5097 = UINT64_MAX;
	int32_t x5098 = INT32_MAX;
	static uint16_t x5100 = 23U;
	uint64_t t96 = UINT64_MAX;

	t96 = (x5097|((x5098-x5099)>>x5100));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5125 = 540583157066992428LLU;
	int32_t x5126 = 864;
	uint8_t x5128 = 0U;
	volatile uint64_t t97 = 853863481414LLU;

	t97 = (x5125|((x5126-x5127)>>x5128));

	if (t97 != 540583157066992620LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x5193 = 2U;
	int8_t x5194 = INT8_MIN;
	static int64_t x5195 = -1696650875218LL;
	static int8_t x5196 = 7;
	static int64_t t98 = 21232566LL;

	t98 = (x5193|((x5194-x5195)>>x5196));

	if (t98 != 13255084963LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5321 = 26;
	uint64_t x5322 = 7261517494739094LLU;
	volatile int16_t x5323 = INT16_MIN;
	static uint8_t x5324 = 2U;
	volatile uint64_t t99 = 4871705967017LLU;

	t99 = (x5321|((x5322-x5323)>>x5324));

	if (t99 != 1815379373692991LLU) { NG(); } else { ; }
	
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

