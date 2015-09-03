#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x27 = 4025;
uint32_t x78 = 24323932U;
static int16_t x101 = INT16_MIN;
volatile uint8_t x184 = 2U;
int8_t x223 = 63;
int32_t x297 = 15931836;
int8_t x389 = INT8_MIN;
int64_t x391 = INT64_MAX;
int8_t x474 = INT8_MAX;
volatile int64_t t8 = -73286628LL;
int16_t x611 = INT16_MIN;
uint64_t t10 = 16312367704956LLU;
volatile int16_t x671 = INT16_MAX;
volatile uint64_t x747 = UINT64_MAX;
volatile uint16_t x780 = 30U;
static volatile int16_t x783 = -1;
static int16_t x924 = 1;
int16_t x959 = 5468;
int16_t x965 = INT16_MIN;
int64_t x966 = 0LL;
volatile int8_t x968 = 1;
volatile int64_t t22 = 1119LL;
uint64_t t23 = 329562278363LLU;
volatile uint8_t x1436 = 8U;
static uint8_t x1499 = 3U;
static volatile int32_t t31 = -24780;
static int16_t x1805 = -1;
int64_t x1806 = 6755248918820211LL;
static int32_t x1807 = 31351150;
uint8_t x1880 = 1U;
volatile uint32_t t33 = 91U;
int64_t x1889 = -537298675617LL;
uint8_t x1890 = 14U;
int16_t x1904 = 1;
volatile uint32_t x1918 = UINT32_MAX;
uint8_t x1919 = 84U;
uint32_t x1920 = 3U;
uint32_t t36 = 3U;
int64_t t37 = 4140827LL;
volatile uint32_t x1985 = 7928825U;
static uint32_t x1986 = 67385785U;
static int64_t x2006 = 319680463523815383LL;
static uint8_t x2007 = 120U;
uint8_t x2028 = 2U;
static int64_t x2065 = INT64_MIN;
int64_t x2067 = INT64_MAX;
int64_t x2097 = INT64_MIN;
uint32_t x2099 = 1334839U;
volatile int32_t t43 = -325618;
int8_t x2273 = -1;
volatile uint16_t x2275 = 5U;
volatile int64_t t44 = -49838645255582792LL;
int16_t x2302 = INT16_MAX;
volatile uint32_t x2461 = UINT32_MAX;
int8_t x2464 = 17;
static uint32_t t47 = 49399U;
int32_t x2468 = 6;
static uint32_t x2529 = 17304563U;
int8_t x2531 = 0;
static volatile uint32_t t51 = 11U;
volatile int64_t t52 = -45778LL;
uint64_t t53 = 5843010083LLU;
static int16_t x2665 = -4477;
uint32_t x2666 = 1110U;
int16_t x2854 = -7;
static volatile int32_t t57 = -113;
uint16_t x2936 = 0U;
volatile int32_t x2945 = INT32_MIN;
volatile int32_t t61 = 2;
volatile int32_t x3077 = INT32_MAX;
static volatile int32_t x3079 = INT32_MIN;
int64_t x3094 = INT64_MAX;
int32_t x3120 = 1;
volatile uint64_t t66 = 645000674571LLU;
static volatile int16_t x3169 = INT16_MAX;
int32_t t67 = 2115;
static uint64_t x3173 = UINT64_MAX;
volatile int64_t x3223 = 1423347720397LL;
uint16_t x3224 = 1U;
int16_t x3283 = -1;
int32_t x3342 = INT32_MAX;
volatile int8_t x3348 = 0;
uint32_t t78 = 1403883U;
int8_t x3741 = INT8_MAX;
static volatile int16_t x3821 = INT16_MAX;
int64_t t82 = -1805111373LL;
int32_t x3993 = -7900;
uint32_t x4065 = UINT32_MAX;
static volatile uint64_t x4067 = 6LLU;
int16_t x4410 = INT16_MAX;
volatile uint16_t x4412 = 7U;
int32_t x4453 = 7;
uint8_t x4468 = 0U;
int32_t x4496 = 1;
int8_t x4532 = 1;
int8_t x4594 = -1;
volatile int16_t x4596 = 28;
uint8_t x4664 = 0U;


void f0(void) {
	uint64_t x25 = UINT64_MAX;
	static volatile uint16_t x26 = 4U;
	int64_t x28 = 0LL;
	uint64_t t0 = 1LLU;

	t0 = (x25&((x26+x27)>>x28));

	if (t0 != 4029LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x77 = INT64_MIN;
	volatile int16_t x79 = -615;
	uint32_t x80 = 13U;
	static volatile int64_t t1 = -199LL;

	t1 = (x77&((x78+x79)>>x80));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x102 = INT8_MIN;
	volatile uint8_t x103 = UINT8_MAX;
	volatile uint16_t x104 = 7U;
	int32_t t2 = -872059;

	t2 = (x101&((x102+x103)>>x104));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 2328U;
	volatile uint32_t t3 = 5541369U;

	t3 = (x181&((x182+x183)>>x184));

	if (t3 != 536870912U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x221 = INT32_MIN;
	static int32_t x222 = -1;
	volatile uint16_t x224 = 1U;
	int32_t t4 = -43;

	t4 = (x221&((x222+x223)>>x224));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 7U;
	int16_t x300 = 29;
	static volatile uint32_t t5 = 457096416U;

	t5 = (x297&((x298+x299)>>x300));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x390 = -1LL;
	uint8_t x392 = 25U;
	volatile int64_t t6 = -1009LL;

	t6 = (x389&((x390+x391)>>x392));

	if (t6 != 274877906816LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x473 = INT32_MIN;
	uint8_t x475 = 13U;
	static int16_t x476 = 2;
	static int32_t t7 = 569;

	t7 = (x473&((x474+x475)>>x476));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x517 = -1LL;
	uint8_t x518 = UINT8_MAX;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = 1U;

	t8 = (x517&((x518+x519)>>x520));

	if (t8 != 63LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x585 = 2LL;
	int16_t x586 = -1;
	int8_t x587 = INT8_MAX;
	volatile int8_t x588 = 12;
	int64_t t9 = -425069377788LL;

	t9 = (x585&((x586+x587)>>x588));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x609 = INT64_MIN;
	volatile uint64_t x610 = 68964158LLU;
	uint16_t x612 = 57U;

	t10 = (x609&((x610+x611)>>x612));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x669 = 11U;
	int8_t x670 = INT8_MIN;
	int16_t x672 = 1;
	volatile int32_t t11 = -359651;

	t11 = (x669&((x670+x671)>>x672));

	if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x745 = -784;
	int32_t x746 = INT32_MIN;
	volatile int8_t x748 = 1;
	volatile uint64_t t12 = 0LLU;

	t12 = (x745&((x746+x747)>>x748));

	if (t12 != 9223372035781033200LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x777 = 119;
	int32_t x778 = 159655427;
	int8_t x779 = -1;
	volatile int32_t t13 = 283377;

	t13 = (x777&((x778+x779)>>x780));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x781 = 6;
	static uint16_t x782 = UINT16_MAX;
	uint32_t x784 = 31U;
	int32_t t14 = -82927;

	t14 = (x781&((x782+x783)>>x784));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x785 = UINT8_MAX;
	int32_t x786 = -1;
	int8_t x787 = 2;
	uint8_t x788 = 5U;
	volatile int32_t t15 = 551323759;

	t15 = (x785&((x786+x787)>>x788));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x837 = INT32_MIN;
	static uint32_t x838 = 7527U;
	static int32_t x839 = INT32_MIN;
	volatile uint32_t x840 = 1U;
	uint32_t t16 = 47U;

	t16 = (x837&((x838+x839)>>x840));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x893 = -12295;
	volatile int8_t x894 = INT8_MAX;
	uint16_t x895 = 30992U;
	int32_t x896 = 0;
	volatile int32_t t17 = 16898361;

	t17 = (x893&((x894+x895)>>x896));

	if (t17 != 18825) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x921 = 445;
	volatile int16_t x922 = -1;
	static uint8_t x923 = UINT8_MAX;
	volatile int32_t t18 = -479;

	t18 = (x921&((x922+x923)>>x924));

	if (t18 != 61) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x957 = -1LL;
	int8_t x958 = INT8_MIN;
	static uint8_t x960 = 1U;
	int64_t t19 = -3200810896520847898LL;

	t19 = (x957&((x958+x959)>>x960));

	if (t19 != 2670LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x967 = 139345408058985281LL;
	int64_t t20 = -71084437LL;

	t20 = (x965&((x966+x967)>>x968));

	if (t20 != 69672704029491200LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1053 = 206210883U;
	uint16_t x1054 = 10960U;
	int8_t x1055 = INT8_MIN;
	uint8_t x1056 = 26U;
	volatile uint32_t t21 = 56971U;

	t21 = (x1053&((x1054+x1055)>>x1056));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1081 = 20U;
	int64_t x1082 = 1268103051495164700LL;
	int32_t x1083 = INT32_MIN;
	uint8_t x1084 = 3U;

	t22 = (x1081&((x1082+x1083)>>x1084));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1101 = 300;
	static int16_t x1102 = INT16_MIN;
	uint64_t x1103 = 2769559279110246869LLU;
	static volatile int16_t x1104 = 34;

	t23 = (x1101&((x1102+x1103)>>x1104));

	if (t23 != 12LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1137 = UINT8_MAX;
	volatile int8_t x1138 = 1;
	int64_t x1139 = 56109LL;
	int8_t x1140 = 15;
	int64_t t24 = 432LL;

	t24 = (x1137&((x1138+x1139)>>x1140));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x1433 = INT64_MIN;
	uint8_t x1434 = UINT8_MAX;
	static int8_t x1435 = INT8_MIN;
	static int64_t t25 = 1604925114957467LL;

	t25 = (x1433&((x1434+x1435)>>x1436));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1497 = -1;
	uint16_t x1498 = 28U;
	uint8_t x1500 = 3U;
	volatile int32_t t26 = 3;

	t26 = (x1497&((x1498+x1499)>>x1500));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1565 = UINT32_MAX;
	static volatile uint64_t x1566 = UINT64_MAX;
	volatile int16_t x1567 = -1;
	int16_t x1568 = 1;
	uint64_t t27 = 24731LLU;

	t27 = (x1565&((x1566+x1567)>>x1568));

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1633 = 1U;
	volatile int8_t x1634 = -1;
	static int32_t x1635 = 1668883;
	int8_t x1636 = 0;
	volatile int32_t t28 = -9072;

	t28 = (x1633&((x1634+x1635)>>x1636));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1733 = 5;
	static int64_t x1734 = 143LL;
	int8_t x1735 = -17;
	static uint8_t x1736 = 27U;
	int64_t t29 = -132024569630594845LL;

	t29 = (x1733&((x1734+x1735)>>x1736));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1745 = INT32_MIN;
	int64_t x1746 = INT64_MIN;
	static uint64_t x1747 = 215092619072LLU;
	static int32_t x1748 = 0;
	uint64_t t30 = 32LLU;

	t30 = (x1745&((x1746+x1747)>>x1748));

	if (t30 != 9223372251603140608LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1761 = UINT8_MAX;
	static int8_t x1762 = INT8_MAX;
	static int8_t x1763 = INT8_MAX;
	uint8_t x1764 = 3U;

	t31 = (x1761&((x1762+x1763)>>x1764));

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1808 = 1U;
	int64_t t32 = -721801LL;

	t32 = (x1805&((x1806+x1807)>>x1808));

	if (t32 != 3377624475085680LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1877 = INT16_MIN;
	uint32_t x1878 = 100207U;
	static int32_t x1879 = INT32_MIN;

	t33 = (x1877&((x1878+x1879)>>x1880));

	if (t33 != 1073774592U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1891 = 28U;
	uint16_t x1892 = 2U;
	volatile int64_t t34 = -3541281882LL;

	t34 = (x1889&((x1890+x1891)>>x1892));

	if (t34 != 10LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1901 = INT32_MIN;
	static uint64_t x1902 = 128962129748873LLU;
	int8_t x1903 = INT8_MIN;
	volatile uint64_t t35 = 225639LLU;

	t35 = (x1901&((x1902+x1903)>>x1904));

	if (t35 != 64480344014848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1917 = UINT32_MAX;

	t36 = (x1917&((x1918+x1919)>>x1920));

	if (t36 != 10U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x1945 = 1140176775U;
	int64_t x1946 = -1LL;
	int64_t x1947 = INT64_MAX;
	uint8_t x1948 = 56U;

	t37 = (x1945&((x1946+x1947)>>x1948));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1987 = -44;
	volatile uint8_t x1988 = 0U;
	static uint32_t t38 = 508314321U;

	t38 = (x1985&((x1986+x1987)>>x1988));

	if (t38 != 14729U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2005 = 8;
	volatile uint8_t x2008 = 12U;
	volatile int64_t t39 = 8842614921648LL;

	t39 = (x2005&((x2006+x2007)>>x2008));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2025 = 44307954255330553LLU;
	int8_t x2026 = INT8_MIN;
	volatile int32_t x2027 = INT32_MAX;
	uint64_t t40 = 3341445977621LLU;

	t40 = (x2025&((x2026+x2027)>>x2028));

	if (t40 != 35454169LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2066 = INT8_MIN;
	int16_t x2068 = 5;
	int64_t t41 = 33470792675662LL;

	t41 = (x2065&((x2066+x2067)>>x2068));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2098 = 2018U;
	int8_t x2100 = 4;
	volatile int64_t t42 = -1742087LL;

	t42 = (x2097&((x2098+x2099)>>x2100));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2265 = 150;
	uint8_t x2266 = UINT8_MAX;
	int16_t x2267 = 631;
	uint8_t x2268 = 24U;

	t43 = (x2265&((x2266+x2267)>>x2268));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2274 = -1LL;
	uint16_t x2276 = 4U;

	t44 = (x2273&((x2274+x2275)>>x2276));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2301 = 12682;
	uint16_t x2303 = UINT16_MAX;
	int8_t x2304 = 1;
	int32_t t45 = -246725166;

	t45 = (x2301&((x2302+x2303)>>x2304));

	if (t45 != 12682) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2369 = UINT32_MAX;
	int8_t x2370 = INT8_MAX;
	uint64_t x2371 = UINT64_MAX;
	volatile uint64_t x2372 = 10LLU;
	uint64_t t46 = 601829758LLU;

	t46 = (x2369&((x2370+x2371)>>x2372));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2462 = INT8_MAX;
	uint8_t x2463 = 2U;

	t47 = (x2461&((x2462+x2463)>>x2464));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2465 = INT8_MIN;
	static uint8_t x2466 = 8U;
	int16_t x2467 = INT16_MAX;
	volatile int32_t t48 = -43962;

	t48 = (x2465&((x2466+x2467)>>x2468));

	if (t48 != 512) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2509 = INT32_MIN;
	uint32_t x2510 = 3196932U;
	int16_t x2511 = INT16_MIN;
	volatile uint32_t x2512 = 2U;
	uint32_t t49 = 631066U;

	t49 = (x2509&((x2510+x2511)>>x2512));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2517 = INT64_MAX;
	int8_t x2518 = 3;
	uint64_t x2519 = UINT64_MAX;
	volatile uint8_t x2520 = 19U;
	uint64_t t50 = 5214LLU;

	t50 = (x2517&((x2518+x2519)>>x2520));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2530 = 54U;
	int8_t x2532 = 0;

	t51 = (x2529&((x2530+x2531)>>x2532));

	if (t51 != 50U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2617 = -1;
	int64_t x2618 = INT64_MAX;
	int32_t x2619 = -28;
	int8_t x2620 = 1;

	t52 = (x2617&((x2618+x2619)>>x2620));

	if (t52 != 4611686018427387889LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2621 = 12487961553918LL;
	uint64_t x2622 = UINT64_MAX;
	static uint64_t x2623 = 1269620LLU;
	uint8_t x2624 = 33U;

	t53 = (x2621&((x2622+x2623)>>x2624));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2667 = -121731;
	int8_t x2668 = 1;
	volatile uint32_t t54 = 80641U;

	t54 = (x2665&((x2666+x2667)>>x2668));

	if (t54 != 2147419137U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2685 = 1247U;
	uint8_t x2686 = 1U;
	static uint16_t x2687 = UINT16_MAX;
	int16_t x2688 = 2;
	uint32_t t55 = 74796152U;

	t55 = (x2685&((x2686+x2687)>>x2688));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2853 = UINT16_MAX;
	volatile uint64_t x2855 = 42432780413LLU;
	volatile uint8_t x2856 = 49U;
	uint64_t t56 = 0LLU;

	t56 = (x2853&((x2854+x2855)>>x2856));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2857 = -15971;
	static int8_t x2858 = -14;
	int8_t x2859 = INT8_MAX;
	uint8_t x2860 = 1U;

	t57 = (x2857&((x2858+x2859)>>x2860));

	if (t57 != 24) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2889 = 11675LLU;
	int8_t x2890 = INT8_MAX;
	volatile int8_t x2891 = -14;
	uint8_t x2892 = 9U;
	uint64_t t58 = 59797219540LLU;

	t58 = (x2889&((x2890+x2891)>>x2892));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2933 = INT8_MIN;
	volatile int32_t x2934 = -3558933;
	static uint64_t x2935 = 2364291712810172LLU;
	volatile uint64_t t59 = 59LLU;

	t59 = (x2933&((x2934+x2935)>>x2936));

	if (t59 != 2364291709251200LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2946 = INT32_MIN;
	static volatile int64_t x2947 = INT64_MAX;
	uint16_t x2948 = 11U;
	int64_t t60 = 628574242060228LL;

	t60 = (x2945&((x2946+x2947)>>x2948));

	if (t60 != 4503597479886848LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2957 = INT32_MIN;
	volatile int32_t x2958 = -1;
	uint16_t x2959 = UINT16_MAX;
	int16_t x2960 = 30;

	t61 = (x2957&((x2958+x2959)>>x2960));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x3078 = INT64_MAX;
	static uint32_t x3080 = 3U;
	volatile int64_t t62 = -16338276157031358LL;

	t62 = (x3077&((x3078+x3079)>>x3080));

	if (t62 != 1879048191LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3093 = 5862236770LLU;
	int8_t x3095 = INT8_MIN;
	uint8_t x3096 = 8U;
	uint64_t t63 = 3LLU;

	t63 = (x3093&((x3094+x3095)>>x3096));

	if (t63 != 5862236770LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3097 = 6LLU;
	int32_t x3098 = 115833699;
	uint8_t x3099 = 3U;
	static uint16_t x3100 = 3U;
	volatile uint64_t t64 = 3LLU;

	t64 = (x3097&((x3098+x3099)>>x3100));

	if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3117 = -1;
	volatile int8_t x3118 = INT8_MAX;
	uint16_t x3119 = 83U;
	int32_t t65 = 32659;

	t65 = (x3117&((x3118+x3119)>>x3120));

	if (t65 != 105) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3149 = -1;
	int8_t x3150 = 1;
	volatile uint64_t x3151 = 1198967095LLU;
	int8_t x3152 = 0;

	t66 = (x3149&((x3150+x3151)>>x3152));

	if (t66 != 1198967096LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3170 = UINT16_MAX;
	volatile uint8_t x3171 = 5U;
	int8_t x3172 = 3;

	t67 = (x3169&((x3170+x3171)>>x3172));

	if (t67 != 8192) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3174 = 81U;
	int16_t x3175 = INT16_MAX;
	uint8_t x3176 = 17U;
	uint64_t t68 = 7494043LLU;

	t68 = (x3173&((x3174+x3175)>>x3176));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3205 = 64249086795297LL;
	uint32_t x3206 = 619173563U;
	uint16_t x3207 = UINT16_MAX;
	static uint32_t x3208 = 12U;
	int64_t t69 = 33161947903LL;

	t69 = (x3205&((x3206+x3207)>>x3208));

	if (t69 != 151041LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x3221 = -5621494LL;
	int64_t x3222 = 912LL;
	int64_t t70 = -988LL;

	t70 = (x3221&((x3222+x3223)>>x3224));

	if (t70 != 711672729610LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3281 = 3U;
	static int8_t x3282 = 20;
	uint8_t x3284 = 2U;
	volatile int32_t t71 = 28744416;

	t71 = (x3281&((x3282+x3283)>>x3284));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x3301 = INT32_MAX;
	uint16_t x3302 = 10U;
	int8_t x3303 = INT8_MAX;
	static volatile int8_t x3304 = 3;
	int32_t t72 = 47202;

	t72 = (x3301&((x3302+x3303)>>x3304));

	if (t72 != 17) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3341 = UINT32_MAX;
	int8_t x3343 = -1;
	uint8_t x3344 = 14U;
	uint32_t t73 = 134243U;

	t73 = (x3341&((x3342+x3343)>>x3344));

	if (t73 != 131071U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x3345 = 702U;
	int32_t x3346 = 236784557;
	static volatile int32_t x3347 = -1;
	int32_t t74 = -71134;

	t74 = (x3345&((x3346+x3347)>>x3348));

	if (t74 != 684) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x3461 = 1U;
	uint8_t x3462 = 5U;
	volatile uint8_t x3463 = 22U;
	uint32_t x3464 = 0U;
	static int32_t t75 = 862791061;

	t75 = (x3461&((x3462+x3463)>>x3464));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3505 = -2;
	int16_t x3506 = INT16_MAX;
	volatile int8_t x3507 = -39;
	int64_t x3508 = 9LL;
	static int32_t t76 = 6;

	t76 = (x3505&((x3506+x3507)>>x3508));

	if (t76 != 62) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3517 = -383;
	uint32_t x3518 = 118837U;
	int32_t x3519 = INT32_MAX;
	uint64_t x3520 = 1LLU;
	uint32_t t77 = 1637138569U;

	t77 = (x3517&((x3518+x3519)>>x3520));

	if (t77 != 1073801216U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3577 = 5U;
	int16_t x3578 = INT16_MIN;
	uint32_t x3579 = 249015U;
	uint64_t x3580 = 0LLU;

	t78 = (x3577&((x3578+x3579)>>x3580));

	if (t78 != 5U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3601 = 16U;
	int16_t x3602 = INT16_MIN;
	static volatile uint32_t x3603 = 1U;
	volatile int16_t x3604 = 29;
	volatile uint32_t t79 = 2978031U;

	t79 = (x3601&((x3602+x3603)>>x3604));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3742 = 29U;
	int8_t x3743 = INT8_MIN;
	static volatile int16_t x3744 = 2;
	static volatile uint32_t t80 = 754U;

	t80 = (x3741&((x3742+x3743)>>x3744));

	if (t80 != 103U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x3822 = -1;
	static uint64_t x3823 = 4768911424593923LLU;
	uint16_t x3824 = 32U;
	static volatile uint64_t t81 = 98597178128LLU;

	t81 = (x3821&((x3822+x3823)>>x3824));

	if (t81 != 29004LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3925 = 0;
	int64_t x3926 = INT64_MAX;
	int8_t x3927 = INT8_MIN;
	static int8_t x3928 = 0;

	t82 = (x3925&((x3926+x3927)>>x3928));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3994 = 7560581377880LLU;
	uint16_t x3995 = 91U;
	uint16_t x3996 = 27U;
	static uint64_t t83 = 130930801432746LLU;

	t83 = (x3993&((x3994+x3995)>>x3996));

	if (t83 != 49152LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x4013 = -1LL;
	int64_t x4014 = 244431384863189302LL;
	static uint64_t x4015 = 52412LLU;
	int32_t x4016 = 1;
	volatile uint64_t t84 = 142002460LLU;

	t84 = (x4013&((x4014+x4015)>>x4016));

	if (t84 != 122215692431620857LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4066 = INT16_MIN;
	int16_t x4068 = 1;
	uint64_t t85 = 7313320593542334LLU;

	t85 = (x4065&((x4066+x4067)>>x4068));

	if (t85 != 4294950915LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4085 = INT64_MIN;
	uint16_t x4086 = UINT16_MAX;
	int32_t x4087 = 12;
	volatile uint8_t x4088 = 1U;
	volatile int64_t t86 = -505607581440437LL;

	t86 = (x4085&((x4086+x4087)>>x4088));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4093 = -1;
	uint8_t x4094 = UINT8_MAX;
	uint16_t x4095 = 57U;
	uint8_t x4096 = 0U;
	int32_t t87 = 0;

	t87 = (x4093&((x4094+x4095)>>x4096));

	if (t87 != 312) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x4137 = 0LLU;
	int64_t x4138 = 7914LL;
	int8_t x4139 = 0;
	int32_t x4140 = 0;
	volatile uint64_t t88 = 347863234704LLU;

	t88 = (x4137&((x4138+x4139)>>x4140));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4245 = UINT64_MAX;
	static int32_t x4246 = INT32_MAX;
	uint64_t x4247 = 11LLU;
	uint64_t x4248 = 2LLU;
	uint64_t t89 = 323LLU;

	t89 = (x4245&((x4246+x4247)>>x4248));

	if (t89 != 536870914LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x4337 = INT8_MAX;
	uint32_t x4338 = UINT32_MAX;
	uint16_t x4339 = 1106U;
	static uint8_t x4340 = 12U;
	volatile uint32_t t90 = 117U;

	t90 = (x4337&((x4338+x4339)>>x4340));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4389 = 7759690U;
	volatile int32_t x4390 = INT32_MAX;
	uint64_t x4391 = 18946LLU;
	uint8_t x4392 = 5U;
	volatile uint64_t t91 = 75122LLU;

	t91 = (x4389&((x4390+x4391)>>x4392));

	if (t91 != 576LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4401 = INT32_MAX;
	uint32_t x4402 = UINT32_MAX;
	static uint64_t x4403 = UINT64_MAX;
	static volatile int8_t x4404 = 0;
	volatile uint64_t t92 = 358312LLU;

	t92 = (x4401&((x4402+x4403)>>x4404));

	if (t92 != 2147483646LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4409 = INT8_MIN;
	int8_t x4411 = INT8_MIN;
	int32_t t93 = 56936;

	t93 = (x4409&((x4410+x4411)>>x4412));

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4454 = 33699126LLU;
	static int64_t x4455 = INT64_MAX;
	static uint8_t x4456 = 1U;
	volatile uint64_t t94 = 41484940LLU;

	t94 = (x4453&((x4454+x4455)>>x4456));

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4465 = 13U;
	int8_t x4466 = -1;
	uint64_t x4467 = 1043298315380632570LLU;
	uint64_t t95 = 2706521073LLU;

	t95 = (x4465&((x4466+x4467)>>x4468));

	if (t95 != 9LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4493 = INT16_MIN;
	uint16_t x4494 = 97U;
	static int16_t x4495 = INT16_MAX;
	volatile int32_t t96 = -201100323;

	t96 = (x4493&((x4494+x4495)>>x4496));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x4529 = 2187U;
	static volatile uint8_t x4530 = UINT8_MAX;
	int16_t x4531 = -1;
	static int32_t t97 = -123555;

	t97 = (x4529&((x4530+x4531)>>x4532));

	if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4593 = -646383805LL;
	static uint16_t x4595 = UINT16_MAX;
	int64_t t98 = -519563LL;

	t98 = (x4593&((x4594+x4595)>>x4596));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4661 = 1896LL;
	uint32_t x4662 = 1636U;
	uint64_t x4663 = 7804762LLU;
	uint64_t t99 = 79780LLU;

	t99 = (x4661&((x4662+x4663)>>x4664));

	if (t99 != 1320LLU) { NG(); } else { ; }
	
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

