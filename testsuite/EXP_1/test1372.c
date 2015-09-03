#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 3;
static int8_t x321 = INT8_MIN;
int16_t x322 = 1;
static int32_t t1 = -49481111;
volatile int32_t t2 = 0;
int32_t t4 = -1;
static int32_t t6 = 1667;
static int32_t t7 = -2;
volatile uint16_t x824 = 0U;
static uint16_t x882 = UINT16_MAX;
static volatile int16_t x1024 = 4;
int16_t x1134 = -1;
volatile int8_t x1269 = -3;
int32_t t14 = 0;
int64_t x1298 = INT64_MIN;
int16_t x1299 = INT16_MIN;
volatile int16_t x1392 = 1;
int64_t x1427 = -1LL;
int8_t x1478 = 0;
static int16_t x1479 = -1;
volatile int32_t t20 = 1;
volatile uint16_t x1620 = 1U;
static int8_t x1680 = 20;
uint32_t x1706 = UINT32_MAX;
volatile int64_t x1707 = -1LL;
uint64_t x1731 = UINT64_MAX;
uint8_t x1786 = 115U;
int16_t x1787 = -1;
static int16_t x1791 = -48;
int32_t t26 = 0;
int8_t x1841 = INT8_MIN;
int32_t t29 = 7;
int64_t x1887 = -1LL;
static uint32_t x1919 = UINT32_MAX;
volatile int8_t x1920 = 1;
uint64_t x2199 = 399154LLU;
int16_t x2222 = INT16_MIN;
int16_t x2223 = -1;
int16_t x2313 = -1993;
int8_t x2370 = INT8_MAX;
uint8_t x2372 = 27U;
int16_t x2439 = -146;
static int8_t x2440 = 1;
volatile uint32_t x2472 = 1U;
int32_t t42 = 1345;
static int64_t x2710 = 629997LL;
int32_t t44 = -20785018;
int8_t x2769 = INT8_MAX;
int32_t x2771 = -70017892;
uint8_t x2885 = UINT8_MAX;
int8_t x2887 = -1;
uint16_t x2948 = 1U;
static int16_t x2955 = -145;
uint32_t x3027 = UINT32_MAX;
uint8_t x3064 = 4U;
int32_t x3152 = 6;
int8_t x3159 = 0;
uint64_t x3160 = 1LLU;
static int32_t x3197 = INT32_MIN;
int16_t x3198 = -1;
static uint64_t t58 = 1613792440098567LLU;
int16_t x3361 = -44;
int16_t x3619 = INT16_MIN;
volatile uint16_t x3621 = UINT16_MAX;
static uint8_t x3879 = 1U;
uint16_t x3880 = 3U;
volatile int32_t t68 = 101153504;
volatile uint64_t x3970 = 0LLU;
int32_t t70 = 3988754;
int16_t x4019 = -1;
volatile uint8_t x4020 = 24U;
volatile int8_t x4037 = INT8_MAX;
int64_t x4078 = INT64_MIN;
static int32_t t75 = 1665035;
uint8_t x4304 = 2U;
int32_t x4406 = 38872;
volatile uint16_t x4433 = 22029U;
int64_t x4434 = INT64_MIN;
uint32_t x4501 = 11U;
uint64_t x4575 = 25121084170311525LLU;
uint8_t x4632 = 0U;
volatile int32_t t83 = -1;
int8_t x4654 = INT8_MIN;
uint32_t x4772 = 30U;
int8_t x4924 = 10;
volatile int32_t t88 = -26;
volatile int64_t x5070 = 15LL;
uint64_t t90 = 15825LLU;
uint32_t x5224 = 2U;
uint16_t x5242 = UINT16_MAX;
static uint64_t x5243 = UINT64_MAX;
static uint8_t x5244 = 10U;
static int64_t x5263 = -12580791648410143LL;
int32_t x5429 = INT32_MIN;
volatile int8_t x5430 = INT8_MIN;
uint64_t x5449 = UINT64_MAX;
volatile int32_t t99 = 0;


void f0(void) {
	uint32_t x225 = 48U;
	uint32_t x226 = 654913U;
	int16_t x227 = -1;
	volatile int8_t x228 = 3;

	t0 = (((x225<x226)-x227)>>x228);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x323 = -92;
	uint16_t x324 = 1U;

	t1 = (((x321<x322)-x323)>>x324);

	if (t1 != 46) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x393 = -31;
	volatile int64_t x394 = -1LL;
	int16_t x395 = -1;
	static uint16_t x396 = 15U;

	t2 = (((x393<x394)-x395)>>x396);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MAX;
	static int8_t x467 = -1;
	uint32_t x468 = 2U;
	volatile int32_t t3 = -8;

	t3 = (((x465<x466)-x467)>>x468);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x533 = -1;
	int8_t x534 = -1;
	int8_t x535 = INT8_MIN;
	int16_t x536 = 1;

	t4 = (((x533<x534)-x535)>>x536);

	if (t4 != 64) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x549 = -1LL;
	static int8_t x550 = INT8_MIN;
	volatile int16_t x551 = -13;
	static volatile uint32_t x552 = 2U;
	int32_t t5 = 5;

	t5 = (((x549<x550)-x551)>>x552);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x681 = 13U;
	int64_t x682 = INT64_MIN;
	static int8_t x683 = INT8_MIN;
	int8_t x684 = 4;

	t6 = (((x681<x682)-x683)>>x684);

	if (t6 != 8) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x709 = 3LLU;
	int64_t x710 = -2584953302LL;
	static int8_t x711 = INT8_MIN;
	static volatile int16_t x712 = 1;

	t7 = (((x709<x710)-x711)>>x712);

	if (t7 != 64) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x801 = 2U;
	volatile uint16_t x802 = 279U;
	uint32_t x803 = 152U;
	volatile int8_t x804 = 1;
	uint32_t t8 = 768193024U;

	t8 = (((x801<x802)-x803)>>x804);

	if (t8 != 2147483572U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x817 = 106781427;
	int8_t x818 = INT8_MIN;
	int8_t x819 = -6;
	uint8_t x820 = 2U;
	int32_t t9 = 21;

	t9 = (((x817<x818)-x819)>>x820);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x821 = INT32_MIN;
	int64_t x822 = INT64_MAX;
	volatile int8_t x823 = 1;
	int32_t t10 = 278;

	t10 = (((x821<x822)-x823)>>x824);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x881 = -9;
	int8_t x883 = INT8_MIN;
	uint8_t x884 = 11U;
	volatile int32_t t11 = -18;

	t11 = (((x881<x882)-x883)>>x884);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1021 = 1U;
	int32_t x1022 = -1;
	int16_t x1023 = -13773;
	static volatile int32_t t12 = 14;

	t12 = (((x1021<x1022)-x1023)>>x1024);

	if (t12 != 860) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x1133 = INT16_MIN;
	uint64_t x1135 = 420605144688894303LLU;
	uint16_t x1136 = 30U;
	uint64_t t13 = 8207555931458758LLU;

	t13 = (((x1133<x1134)-x1135)>>x1136);

	if (t13 != 16788150117LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1270 = INT8_MIN;
	static int8_t x1271 = INT8_MIN;
	volatile int16_t x1272 = 30;

	t14 = (((x1269<x1270)-x1271)>>x1272);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x1297 = -1;
	uint8_t x1300 = 10U;
	static volatile int32_t t15 = -59029708;

	t15 = (((x1297<x1298)-x1299)>>x1300);

	if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1305 = -1;
	volatile int64_t x1306 = INT64_MIN;
	static volatile int32_t x1307 = -1;
	volatile uint8_t x1308 = 13U;
	volatile int32_t t16 = -486148;

	t16 = (((x1305<x1306)-x1307)>>x1308);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1389 = INT8_MAX;
	volatile int16_t x1390 = INT16_MAX;
	volatile uint32_t x1391 = UINT32_MAX;
	volatile uint32_t t17 = 37055667U;

	t17 = (((x1389<x1390)-x1391)>>x1392);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1425 = 1;
	int64_t x1426 = INT64_MAX;
	volatile uint32_t x1428 = 0U;
	static int64_t t18 = 221203LL;

	t18 = (((x1425<x1426)-x1427)>>x1428);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1477 = INT8_MIN;
	volatile int8_t x1480 = 20;
	static volatile int32_t t19 = 10;

	t19 = (((x1477<x1478)-x1479)>>x1480);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1533 = INT16_MIN;
	volatile int32_t x1534 = INT32_MIN;
	uint16_t x1535 = 0U;
	int8_t x1536 = 1;

	t20 = (((x1533<x1534)-x1535)>>x1536);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1617 = INT64_MIN;
	volatile int16_t x1618 = INT16_MAX;
	volatile uint32_t x1619 = 9180U;
	volatile uint32_t t21 = 2903472U;

	t21 = (((x1617<x1618)-x1619)>>x1620);

	if (t21 != 2147479058U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1677 = INT8_MAX;
	uint16_t x1678 = 0U;
	volatile uint64_t x1679 = UINT64_MAX;
	uint64_t t22 = 19576LLU;

	t22 = (((x1677<x1678)-x1679)>>x1680);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1705 = INT16_MAX;
	volatile uint8_t x1708 = 22U;
	int64_t t23 = -4LL;

	t23 = (((x1705<x1706)-x1707)>>x1708);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1729 = INT8_MIN;
	volatile int64_t x1730 = INT64_MAX;
	static volatile int16_t x1732 = 4;
	static uint64_t t24 = 22684478307LLU;

	t24 = (((x1729<x1730)-x1731)>>x1732);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1785 = UINT32_MAX;
	volatile uint16_t x1788 = 1U;
	volatile int32_t t25 = 58;

	t25 = (((x1785<x1786)-x1787)>>x1788);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1789 = INT64_MIN;
	int8_t x1790 = 0;
	uint64_t x1792 = 3LLU;

	t26 = (((x1789<x1790)-x1791)>>x1792);

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1817 = INT32_MIN;
	int16_t x1818 = -1;
	volatile int16_t x1819 = -3;
	volatile uint8_t x1820 = 3U;
	int32_t t27 = 1185924;

	t27 = (((x1817<x1818)-x1819)>>x1820);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1842 = -2524340;
	volatile uint64_t x1843 = 6378642LLU;
	volatile uint8_t x1844 = 1U;
	uint64_t t28 = 215226943LLU;

	t28 = (((x1841<x1842)-x1843)>>x1844);

	if (t28 != 9223372036851586487LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1869 = -36;
	uint32_t x1870 = 7062801U;
	int16_t x1871 = -1;
	volatile int8_t x1872 = 5;

	t29 = (((x1869<x1870)-x1871)>>x1872);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1885 = 407U;
	int64_t x1886 = -1LL;
	uint8_t x1888 = 6U;
	static int64_t t30 = -89766684169775LL;

	t30 = (((x1885<x1886)-x1887)>>x1888);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1917 = UINT64_MAX;
	static int64_t x1918 = INT64_MAX;
	volatile uint32_t t31 = 414983U;

	t31 = (((x1917<x1918)-x1919)>>x1920);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2181 = INT8_MAX;
	int16_t x2182 = -1259;
	static uint64_t x2183 = 23298LLU;
	static volatile int64_t x2184 = 54LL;
	uint64_t t32 = 261504601501853LLU;

	t32 = (((x2181<x2182)-x2183)>>x2184);

	if (t32 != 1023LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2197 = 28073U;
	static int64_t x2198 = INT64_MAX;
	uint8_t x2200 = 21U;
	volatile uint64_t t33 = 17LLU;

	t33 = (((x2197<x2198)-x2199)>>x2200);

	if (t33 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2221 = -29866158758LL;
	static int8_t x2224 = 0;
	int32_t t34 = -1513;

	t34 = (((x2221<x2222)-x2223)>>x2224);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x2225 = 3979U;
	uint32_t x2226 = 1U;
	int8_t x2227 = -1;
	uint16_t x2228 = 0U;
	volatile int32_t t35 = 406807;

	t35 = (((x2225<x2226)-x2227)>>x2228);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2314 = 3352U;
	uint64_t x2315 = UINT64_MAX;
	uint8_t x2316 = 13U;
	uint64_t t36 = 743192424LLU;

	t36 = (((x2313<x2314)-x2315)>>x2316);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2369 = 1141U;
	static uint32_t x2371 = UINT32_MAX;
	static uint32_t t37 = 204348U;

	t37 = (((x2369<x2370)-x2371)>>x2372);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2437 = INT8_MAX;
	uint8_t x2438 = UINT8_MAX;
	static int32_t t38 = -1488154;

	t38 = (((x2437<x2438)-x2439)>>x2440);

	if (t38 != 73) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2469 = -1;
	volatile uint8_t x2470 = 109U;
	volatile int64_t x2471 = -138LL;
	static int64_t t39 = 2785805393LL;

	t39 = (((x2469<x2470)-x2471)>>x2472);

	if (t39 != 69LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2537 = 0U;
	static int8_t x2538 = -29;
	volatile uint32_t x2539 = UINT32_MAX;
	uint8_t x2540 = 26U;
	uint32_t t40 = 1843U;

	t40 = (((x2537<x2538)-x2539)>>x2540);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2653 = -193LL;
	volatile int32_t x2654 = INT32_MIN;
	volatile int8_t x2655 = INT8_MIN;
	static uint16_t x2656 = 4U;
	int32_t t41 = 51576613;

	t41 = (((x2653<x2654)-x2655)>>x2656);

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2693 = 13U;
	uint8_t x2694 = UINT8_MAX;
	int32_t x2695 = -1;
	int8_t x2696 = 0;

	t42 = (((x2693<x2694)-x2695)>>x2696);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2709 = 1237U;
	volatile int8_t x2711 = -1;
	int8_t x2712 = 0;
	volatile int32_t t43 = 2;

	t43 = (((x2709<x2710)-x2711)>>x2712);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2733 = INT16_MIN;
	volatile uint8_t x2734 = 1U;
	int32_t x2735 = -299422946;
	uint8_t x2736 = 3U;

	t44 = (((x2733<x2734)-x2735)>>x2736);

	if (t44 != 37427868) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2770 = -904;
	volatile uint64_t x2772 = 4LLU;
	int32_t t45 = 98184;

	t45 = (((x2769<x2770)-x2771)>>x2772);

	if (t45 != 4376118) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2886 = INT8_MAX;
	uint32_t x2888 = 2U;
	volatile int32_t t46 = -147080958;

	t46 = (((x2885<x2886)-x2887)>>x2888);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2945 = INT16_MIN;
	uint16_t x2946 = 900U;
	int8_t x2947 = -1;
	volatile int32_t t47 = 1;

	t47 = (((x2945<x2946)-x2947)>>x2948);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2953 = 1;
	static uint8_t x2954 = 20U;
	uint8_t x2956 = 0U;
	int32_t t48 = -1627;

	t48 = (((x2953<x2954)-x2955)>>x2956);

	if (t48 != 146) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2989 = INT64_MIN;
	int16_t x2990 = -1;
	static int32_t x2991 = 1;
	uint64_t x2992 = 7LLU;
	int32_t t49 = 733;

	t49 = (((x2989<x2990)-x2991)>>x2992);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3025 = 1;
	int8_t x3026 = INT8_MIN;
	uint8_t x3028 = 26U;
	uint32_t t50 = 718518152U;

	t50 = (((x3025<x3026)-x3027)>>x3028);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3061 = INT8_MAX;
	volatile int32_t x3062 = INT32_MIN;
	volatile int32_t x3063 = -6435410;
	int32_t t51 = 10;

	t51 = (((x3061<x3062)-x3063)>>x3064);

	if (t51 != 402213) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3077 = 671903;
	int16_t x3078 = -1;
	static int32_t x3079 = -1;
	static uint64_t x3080 = 20LLU;
	volatile int32_t t52 = -1;

	t52 = (((x3077<x3078)-x3079)>>x3080);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x3149 = -1;
	uint8_t x3150 = 0U;
	volatile int8_t x3151 = -1;
	int32_t t53 = 1;

	t53 = (((x3149<x3150)-x3151)>>x3152);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3157 = INT16_MIN;
	static int16_t x3158 = INT16_MIN;
	static volatile int32_t t54 = 196993970;

	t54 = (((x3157<x3158)-x3159)>>x3160);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3199 = INT16_MIN;
	uint8_t x3200 = 5U;
	static int32_t t55 = -1;

	t55 = (((x3197<x3198)-x3199)>>x3200);

	if (t55 != 1024) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3225 = INT32_MAX;
	uint64_t x3226 = 800092LLU;
	int16_t x3227 = -829;
	int64_t x3228 = 1LL;
	int32_t t56 = -1;

	t56 = (((x3225<x3226)-x3227)>>x3228);

	if (t56 != 414) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3285 = -1;
	int64_t x3286 = 33694LL;
	static uint64_t x3287 = 235294594503LLU;
	volatile uint8_t x3288 = 0U;
	uint64_t t57 = 94559LLU;

	t57 = (((x3285<x3286)-x3287)>>x3288);

	if (t57 != 18446743838414957114LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3357 = 244;
	int8_t x3358 = -1;
	static uint64_t x3359 = UINT64_MAX;
	int8_t x3360 = 38;

	t58 = (((x3357<x3358)-x3359)>>x3360);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3362 = INT16_MAX;
	volatile int8_t x3363 = -1;
	uint8_t x3364 = 17U;
	int32_t t59 = 1;

	t59 = (((x3361<x3362)-x3363)>>x3364);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x3477 = UINT16_MAX;
	int16_t x3478 = 1;
	static uint64_t x3479 = UINT64_MAX;
	static uint8_t x3480 = 48U;
	volatile uint64_t t60 = 7549796LLU;

	t60 = (((x3477<x3478)-x3479)>>x3480);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3605 = 2927U;
	int32_t x3606 = INT32_MAX;
	static volatile int16_t x3607 = 0;
	uint32_t x3608 = 0U;
	int32_t t61 = -27289775;

	t61 = (((x3605<x3606)-x3607)>>x3608);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3617 = 856810U;
	int32_t x3618 = INT32_MIN;
	static uint8_t x3620 = 29U;
	static volatile int32_t t62 = 62337704;

	t62 = (((x3617<x3618)-x3619)>>x3620);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x3622 = 10973315LLU;
	static volatile int16_t x3623 = INT16_MIN;
	volatile uint8_t x3624 = 0U;
	volatile int32_t t63 = 0;

	t63 = (((x3621<x3622)-x3623)>>x3624);

	if (t63 != 32769) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3665 = INT16_MIN;
	int8_t x3666 = INT8_MIN;
	int32_t x3667 = -1;
	static volatile uint8_t x3668 = 0U;
	int32_t t64 = 53;

	t64 = (((x3665<x3666)-x3667)>>x3668);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3697 = -1;
	int8_t x3698 = 1;
	static uint64_t x3699 = UINT64_MAX;
	uint32_t x3700 = 60U;
	volatile uint64_t t65 = 978445017LLU;

	t65 = (((x3697<x3698)-x3699)>>x3700);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3745 = INT16_MAX;
	int64_t x3746 = INT64_MIN;
	int16_t x3747 = INT16_MIN;
	int16_t x3748 = 11;
	static int32_t t66 = -389;

	t66 = (((x3745<x3746)-x3747)>>x3748);

	if (t66 != 16) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3789 = 10114U;
	volatile int16_t x3790 = INT16_MIN;
	int8_t x3791 = INT8_MIN;
	volatile uint8_t x3792 = 1U;
	int32_t t67 = -952817;

	t67 = (((x3789<x3790)-x3791)>>x3792);

	if (t67 != 64) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3877 = 1;
	int8_t x3878 = INT8_MAX;

	t68 = (((x3877<x3878)-x3879)>>x3880);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3889 = 7159084454021LL;
	static int8_t x3890 = -1;
	int8_t x3891 = INT8_MIN;
	int16_t x3892 = 2;
	volatile int32_t t69 = -4;

	t69 = (((x3889<x3890)-x3891)>>x3892);

	if (t69 != 32) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3969 = UINT8_MAX;
	int8_t x3971 = INT8_MIN;
	int32_t x3972 = 0;

	t70 = (((x3969<x3970)-x3971)>>x3972);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3977 = INT64_MIN;
	uint16_t x3978 = 338U;
	int16_t x3979 = INT16_MIN;
	volatile int8_t x3980 = 1;
	volatile int32_t t71 = -6;

	t71 = (((x3977<x3978)-x3979)>>x3980);

	if (t71 != 16384) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x4017 = UINT64_MAX;
	static uint32_t x4018 = 3102049U;
	volatile int32_t t72 = -32489;

	t72 = (((x4017<x4018)-x4019)>>x4020);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4038 = -132568826;
	int8_t x4039 = -1;
	static int16_t x4040 = 7;
	volatile int32_t t73 = -14811757;

	t73 = (((x4037<x4038)-x4039)>>x4040);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4077 = UINT8_MAX;
	static int8_t x4079 = INT8_MIN;
	volatile uint8_t x4080 = 12U;
	volatile int32_t t74 = 542816;

	t74 = (((x4077<x4078)-x4079)>>x4080);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x4145 = -1195154061LL;
	uint32_t x4146 = UINT32_MAX;
	volatile int8_t x4147 = INT8_MIN;
	uint8_t x4148 = 2U;

	t75 = (((x4145<x4146)-x4147)>>x4148);

	if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4301 = 0;
	uint8_t x4302 = 5U;
	uint8_t x4303 = 0U;
	volatile int32_t t76 = 6;

	t76 = (((x4301<x4302)-x4303)>>x4304);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4405 = -28811;
	uint32_t x4407 = UINT32_MAX;
	uint8_t x4408 = 5U;
	volatile uint32_t t77 = 1295415U;

	t77 = (((x4405<x4406)-x4407)>>x4408);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4435 = -1;
	static volatile int32_t x4436 = 0;
	volatile int32_t t78 = -11;

	t78 = (((x4433<x4434)-x4435)>>x4436);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4449 = 1LLU;
	int64_t x4450 = -17393645LL;
	uint32_t x4451 = 1U;
	uint8_t x4452 = 21U;
	uint32_t t79 = 457U;

	t79 = (((x4449<x4450)-x4451)>>x4452);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4502 = UINT64_MAX;
	int64_t x4503 = -1LL;
	static uint8_t x4504 = 0U;
	volatile int64_t t80 = 0LL;

	t80 = (((x4501<x4502)-x4503)>>x4504);

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4573 = 0U;
	int32_t x4574 = INT32_MAX;
	int8_t x4576 = 1;
	uint64_t t81 = 518134935LLU;

	t81 = (((x4573<x4574)-x4575)>>x4576);

	if (t81 != 9210811494769620046LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4601 = -1;
	static uint8_t x4602 = 31U;
	uint32_t x4603 = 231U;
	uint32_t x4604 = 2U;
	volatile uint32_t t82 = 1U;

	t82 = (((x4601<x4602)-x4603)>>x4604);

	if (t82 != 1073741766U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x4629 = INT16_MIN;
	static volatile int8_t x4630 = INT8_MAX;
	int8_t x4631 = INT8_MIN;

	t83 = (((x4629<x4630)-x4631)>>x4632);

	if (t83 != 129) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x4641 = -5;
	int64_t x4642 = 665127073LL;
	static volatile int16_t x4643 = INT16_MIN;
	int8_t x4644 = 29;
	static volatile int32_t t84 = 115;

	t84 = (((x4641<x4642)-x4643)>>x4644);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4653 = INT32_MAX;
	int8_t x4655 = INT8_MIN;
	volatile uint16_t x4656 = 10U;
	int32_t t85 = 3;

	t85 = (((x4653<x4654)-x4655)>>x4656);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4769 = INT16_MIN;
	volatile uint16_t x4770 = 3000U;
	int8_t x4771 = -1;
	static int32_t t86 = 7535887;

	t86 = (((x4769<x4770)-x4771)>>x4772);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4877 = INT8_MIN;
	int64_t x4878 = INT64_MIN;
	volatile int64_t x4879 = -1LL;
	uint8_t x4880 = 12U;
	volatile int64_t t87 = 218845689438LL;

	t87 = (((x4877<x4878)-x4879)>>x4880);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4921 = 12U;
	static int64_t x4922 = -1LL;
	int16_t x4923 = INT16_MIN;

	t88 = (((x4921<x4922)-x4923)>>x4924);

	if (t88 != 32) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5021 = UINT16_MAX;
	int16_t x5022 = INT16_MIN;
	static volatile uint32_t x5023 = 267196U;
	static int32_t x5024 = 0;
	volatile uint32_t t89 = 985564647U;

	t89 = (((x5021<x5022)-x5023)>>x5024);

	if (t89 != 4294700100U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5069 = UINT16_MAX;
	uint64_t x5071 = 6508400LLU;
	int16_t x5072 = 0;

	t90 = (((x5069<x5070)-x5071)>>x5072);

	if (t90 != 18446744073703043216LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x5221 = UINT16_MAX;
	int8_t x5222 = INT8_MAX;
	uint64_t x5223 = UINT64_MAX;
	volatile uint64_t t91 = 34717511745228LLU;

	t91 = (((x5221<x5222)-x5223)>>x5224);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5241 = INT32_MIN;
	static uint64_t t92 = 2864340LLU;

	t92 = (((x5241<x5242)-x5243)>>x5244);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5261 = -5955;
	uint32_t x5262 = 180993U;
	volatile uint8_t x5264 = 11U;
	volatile int64_t t93 = 531932LL;

	t93 = (((x5261<x5262)-x5263)>>x5264);

	if (t93 != 6142964672075LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5277 = UINT32_MAX;
	int16_t x5278 = INT16_MIN;
	int8_t x5279 = INT8_MIN;
	static uint8_t x5280 = 6U;
	int32_t t94 = 1297;

	t94 = (((x5277<x5278)-x5279)>>x5280);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5309 = -1;
	static int32_t x5310 = INT32_MAX;
	uint64_t x5311 = 348LLU;
	int8_t x5312 = 25;
	volatile uint64_t t95 = 19021823LLU;

	t95 = (((x5309<x5310)-x5311)>>x5312);

	if (t95 != 549755813887LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5317 = -305306654668LL;
	static int32_t x5318 = -1;
	static int16_t x5319 = -1;
	static uint8_t x5320 = 0U;
	volatile int32_t t96 = -31144;

	t96 = (((x5317<x5318)-x5319)>>x5320);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5431 = 9032180207426089260LLU;
	volatile uint16_t x5432 = 61U;
	uint64_t t97 = 847028499966LLU;

	t97 = (((x5429<x5430)-x5431)>>x5432);

	if (t97 != 4LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5450 = -1LL;
	int8_t x5451 = INT8_MIN;
	static uint32_t x5452 = 6U;
	volatile int32_t t98 = 8;

	t98 = (((x5449<x5450)-x5451)>>x5452);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5601 = INT8_MIN;
	static int32_t x5602 = INT32_MIN;
	static int32_t x5603 = -31183816;
	int8_t x5604 = 7;

	t99 = (((x5601<x5602)-x5603)>>x5604);

	if (t99 != 243623) { NG(); } else { ; }
	
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

