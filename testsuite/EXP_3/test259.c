#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 13169722544271710LL;
volatile uint32_t x329 = 691U;
static int8_t x331 = 1;
int8_t x365 = 2;
volatile int32_t t4 = -10;
uint64_t x452 = 227LLU;
volatile int32_t x546 = 0;
uint16_t x582 = 4U;
uint16_t x697 = UINT16_MAX;
int8_t x700 = INT8_MAX;
static int8_t x922 = 7;
int64_t x1011 = INT64_MIN;
uint32_t x1023 = 9970U;
int8_t x1071 = -4;
volatile uint64_t t17 = 101076LLU;
static volatile uint16_t x1117 = UINT16_MAX;
uint64_t x1119 = 17456109919111252LLU;
int8_t x1189 = 1;
static int16_t x1192 = -1;
int16_t x1236 = 0;
uint32_t x1301 = 1799368636U;
uint8_t x1306 = 7U;
int64_t x1426 = 1LL;
int32_t x1428 = 74;
int8_t x1672 = INT8_MIN;
int16_t x1830 = 7;
uint32_t t31 = 58171113U;
int32_t x1904 = INT32_MAX;
int16_t x1946 = 29;
static volatile int64_t t33 = 261649065556092876LL;
static volatile uint64_t x2120 = UINT64_MAX;
static uint64_t t34 = 11139809551LLU;
int8_t x2259 = INT8_MAX;
uint64_t t38 = 277LLU;
static uint32_t x2445 = UINT32_MAX;
int16_t x2447 = -2371;
int8_t x2449 = 1;
int8_t x2451 = -1;
uint32_t x2478 = 0U;
int64_t t42 = -3LL;
static uint64_t x2792 = 36855485LLU;
uint64_t t43 = 200841973262948LLU;
uint8_t x2794 = 6U;
int32_t x2959 = -1;
int32_t x2981 = 640;
int32_t t47 = -119532485;
uint8_t x2990 = 12U;
int64_t x3158 = 0LL;
int64_t x3220 = -1LL;
volatile uint8_t x3279 = 22U;
static int8_t x3386 = 16;
int8_t x3452 = -59;
int32_t x3453 = 510637;
int64_t x3455 = -1LL;
static uint32_t x3465 = 164U;
volatile uint32_t t56 = 14U;
uint32_t t57 = 760U;
static uint8_t x3551 = UINT8_MAX;
volatile uint64_t x3552 = 968711852382070634LLU;
int8_t x3759 = INT8_MAX;
uint32_t x3813 = 30942280U;
static int8_t x3937 = INT8_MAX;
uint64_t x3985 = 5LLU;
uint32_t x3986 = 2U;
static volatile uint8_t x4322 = 2U;
uint16_t x4323 = 8U;
int64_t x4363 = INT64_MIN;
int8_t x4364 = INT8_MIN;
static volatile uint64_t t69 = 532369708LLU;
static int16_t x4423 = INT16_MIN;
int64_t t71 = INT64_MAX;
static int16_t x4491 = INT16_MIN;
int16_t x4551 = -1;
uint8_t x4566 = 6U;
uint32_t x4567 = 0U;
uint16_t x4568 = UINT16_MAX;
uint16_t x4650 = 0U;
static uint8_t x4765 = 1U;
static uint16_t x4767 = 584U;
static int8_t x4801 = INT8_MAX;
volatile uint16_t x4802 = 1U;
int32_t t78 = -11001;
uint32_t x4809 = 7U;
volatile uint16_t x5058 = 7U;
uint8_t x5060 = 41U;
volatile int8_t x5114 = 28;
static int32_t x5116 = INT32_MIN;
static uint32_t x5272 = 94626U;
int16_t x5394 = 0;
volatile uint8_t x5430 = 0U;
uint16_t x5498 = 0U;
volatile int16_t x5499 = 16105;
int16_t x5626 = 6;
int64_t x5627 = INT64_MIN;
static int64_t x5629 = INT64_MAX;
uint64_t x5631 = 10550248671349330LLU;
volatile uint64_t t92 = 447LLU;
volatile uint32_t x5709 = 20185980U;
int8_t x5711 = INT8_MAX;
uint8_t x5746 = 0U;
int32_t t94 = 5;
volatile uint64_t t95 = 502574716095LLU;
uint64_t t96 = 19LLU;
static int16_t x5882 = 2;
static volatile int64_t x5883 = INT64_MIN;
volatile uint32_t t99 = 1U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile uint8_t x2 = 1U;
	int64_t x3 = -2558356399LL;
	int16_t x4 = INT16_MAX;

	t0 = ((x1>>x2)|(x3-x4));

	if (t0 != -2147483649LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = 759;
	int16_t x18 = 12;
	int64_t x19 = INT64_MAX;
	uint32_t x20 = 12843U;
	volatile int64_t t1 = -231LL;

	t1 = ((x17>>x18)|(x19-x20));

	if (t1 != 9223372036854762964LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x117 = UINT32_MAX;
	uint16_t x118 = 3U;
	uint16_t x119 = 15U;
	uint64_t x120 = UINT64_MAX;
	static uint64_t t2 = 5938185501341365986LLU;

	t2 = ((x117>>x118)|(x119-x120));

	if (t2 != 536870911LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x330 = 1;
	volatile int8_t x332 = INT8_MIN;
	static uint32_t t3 = 29U;

	t3 = ((x329>>x330)|(x331-x332));

	if (t3 != 473U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x366 = 3U;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -1;

	t4 = ((x365>>x366)|(x367-x368));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x369 = 29U;
	volatile uint8_t x370 = 2U;
	int32_t x371 = INT32_MAX;
	static volatile int16_t x372 = 15;
	int32_t t5 = -10860;

	t5 = ((x369>>x370)|(x371-x372));

	if (t5 != 2147483639) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x429 = INT32_MAX;
	int8_t x430 = 0;
	uint8_t x431 = UINT8_MAX;
	static int8_t x432 = -4;
	static volatile int32_t t6 = INT32_MAX;

	t6 = ((x429>>x430)|(x431-x432));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x449 = UINT64_MAX;
	int64_t x450 = 0LL;
	static int8_t x451 = INT8_MIN;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x449>>x450)|(x451-x452));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x545 = UINT8_MAX;
	int8_t x547 = -46;
	uint8_t x548 = UINT8_MAX;
	int32_t t8 = -117360;

	t8 = ((x545>>x546)|(x547-x548));

	if (t8 != -257) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x581 = 1632113438LL;
	uint8_t x583 = 1U;
	uint32_t x584 = 2U;
	int64_t t9 = 261134880680662LL;

	t9 = ((x581>>x582)|(x583-x584));

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x605 = INT8_MAX;
	volatile uint16_t x606 = 6U;
	volatile int64_t x607 = -443799308602LL;
	int16_t x608 = -1;
	int64_t t10 = -90061211463515992LL;

	t10 = ((x605>>x606)|(x607-x608));

	if (t10 != -443799308601LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x698 = 0U;
	uint8_t x699 = UINT8_MAX;
	int32_t t11 = -3;

	t11 = ((x697>>x698)|(x699-x700));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x805 = 33;
	int8_t x806 = 1;
	uint32_t x807 = 229U;
	volatile int8_t x808 = INT8_MAX;
	volatile uint32_t t12 = 49U;

	t12 = ((x805>>x806)|(x807-x808));

	if (t12 != 118U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x921 = 2314U;
	int32_t x923 = INT32_MIN;
	volatile uint64_t x924 = 2084839805036LLU;
	static volatile uint64_t t13 = 36842383LLU;

	t13 = ((x921>>x922)|(x923-x924));

	if (t13 != 18446741986722262934LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1009 = 964;
	int16_t x1010 = 1;
	uint64_t x1012 = 448122337006711LLU;
	volatile uint64_t t14 = 315528303521235996LLU;

	t14 = ((x1009>>x1010)|(x1011-x1012));

	if (t14 != 9222923914517769195LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1021 = 0;
	int16_t x1022 = 0;
	uint32_t x1024 = 6U;
	uint32_t t15 = 3U;

	t15 = ((x1021>>x1022)|(x1023-x1024));

	if (t15 != 9964U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1053 = 3546;
	int16_t x1054 = 1;
	int64_t x1055 = INT64_MIN;
	int32_t x1056 = -1;
	volatile int64_t t16 = 122308606220518LL;

	t16 = ((x1053>>x1054)|(x1055-x1056));

	if (t16 != -9223372036854774035LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1069 = 5LLU;
	uint8_t x1070 = 9U;
	uint64_t x1072 = 2LLU;

	t17 = ((x1069>>x1070)|(x1071-x1072));

	if (t17 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1118 = 26;
	int32_t x1120 = -1;
	uint64_t t18 = 8LLU;

	t18 = ((x1117>>x1118)|(x1119-x1120));

	if (t18 != 17456109919111253LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1190 = 0;
	volatile int64_t x1191 = -294292576LL;
	volatile int64_t t19 = 66557651LL;

	t19 = ((x1189>>x1190)|(x1191-x1192));

	if (t19 != -294292575LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1233 = 71U;
	uint16_t x1234 = 2U;
	uint16_t x1235 = 1019U;
	int32_t t20 = 48;

	t20 = ((x1233>>x1234)|(x1235-x1236));

	if (t20 != 1019) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1302 = 3U;
	volatile int32_t x1303 = -779263649;
	int8_t x1304 = INT8_MAX;
	static volatile uint32_t t21 = 4U;

	t21 = ((x1301>>x1302)|(x1303-x1304));

	if (t21 != 3723322871U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1305 = 612777U;
	uint64_t x1307 = 585278507740414LLU;
	static int64_t x1308 = -1LL;
	volatile uint64_t t22 = 1547110839LLU;

	t22 = ((x1305>>x1306)|(x1307-x1308));

	if (t22 != 585278507745023LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1425 = UINT8_MAX;
	int8_t x1427 = INT8_MIN;
	int32_t t23 = -203200043;

	t23 = ((x1425>>x1426)|(x1427-x1428));

	if (t23 != -129) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1545 = 1;
	uint8_t x1546 = 2U;
	uint32_t x1547 = 1465873588U;
	int32_t x1548 = INT32_MAX;
	volatile uint32_t t24 = 120713342U;

	t24 = ((x1545>>x1546)|(x1547-x1548));

	if (t24 != 3613357237U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1593 = UINT16_MAX;
	volatile uint8_t x1594 = 0U;
	uint8_t x1595 = UINT8_MAX;
	int8_t x1596 = INT8_MIN;
	volatile int32_t t25 = -5140;

	t25 = ((x1593>>x1594)|(x1595-x1596));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1601 = INT16_MAX;
	static uint8_t x1602 = 3U;
	int64_t x1603 = -479007592932LL;
	int8_t x1604 = INT8_MIN;
	int64_t t26 = -146338LL;

	t26 = ((x1601>>x1602)|(x1603-x1604));

	if (t26 != -479007592449LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1609 = 15037365U;
	int64_t x1610 = 0LL;
	int64_t x1611 = INT64_MAX;
	int32_t x1612 = 6;
	volatile int64_t t27 = 187389LL;

	t27 = ((x1609>>x1610)|(x1611-x1612));

	if (t27 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1669 = 26U;
	uint8_t x1670 = 24U;
	uint16_t x1671 = UINT16_MAX;
	volatile int32_t t28 = 106533022;

	t28 = ((x1669>>x1670)|(x1671-x1672));

	if (t28 != 65663) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1689 = UINT8_MAX;
	int16_t x1690 = 0;
	int32_t x1691 = INT32_MIN;
	static int64_t x1692 = -1LL;
	volatile int64_t t29 = 15569301686354LL;

	t29 = ((x1689>>x1690)|(x1691-x1692));

	if (t29 != -2147483393LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1793 = INT64_MAX;
	int8_t x1794 = 0;
	int32_t x1795 = INT32_MIN;
	int32_t x1796 = -6875;
	int64_t t30 = 20456LL;

	t30 = ((x1793>>x1794)|(x1795-x1796));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1829 = 20U;
	static uint32_t x1831 = 671U;
	int16_t x1832 = -1;

	t31 = ((x1829>>x1830)|(x1831-x1832));

	if (t31 != 672U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1901 = 762U;
	uint8_t x1902 = 1U;
	int64_t x1903 = -1LL;
	volatile int64_t t32 = 31386986325149506LL;

	t32 = ((x1901>>x1902)|(x1903-x1904));

	if (t32 != -2147483267LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1945 = 229638483181LL;
	int16_t x1947 = 9;
	int32_t x1948 = -279002968;

	t33 = ((x1945>>x1946)|(x1947-x1948));

	if (t33 != 279003115LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2117 = 915U;
	volatile uint8_t x2118 = 0U;
	int8_t x2119 = 4;

	t34 = ((x2117>>x2118)|(x2119-x2120));

	if (t34 != 919LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2149 = UINT16_MAX;
	static volatile uint8_t x2150 = 12U;
	int64_t x2151 = -6092LL;
	uint8_t x2152 = 53U;
	volatile int64_t t35 = -14068103LL;

	t35 = ((x2149>>x2150)|(x2151-x2152));

	if (t35 != -6145LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2165 = 524177123U;
	static volatile int8_t x2166 = 17;
	int16_t x2167 = -1;
	uint32_t x2168 = 98618U;
	static uint32_t t36 = 2U;

	t36 = ((x2165>>x2166)|(x2167-x2168));

	if (t36 != 4294868959U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2217 = 3;
	uint16_t x2218 = 0U;
	uint16_t x2219 = 5676U;
	int16_t x2220 = -6135;
	int32_t t37 = -390790;

	t37 = ((x2217>>x2218)|(x2219-x2220));

	if (t37 != 11811) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2257 = 1U;
	int8_t x2258 = 29;
	uint64_t x2260 = UINT64_MAX;

	t38 = ((x2257>>x2258)|(x2259-x2260));

	if (t38 != 128LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2446 = 27;
	volatile int32_t x2448 = 6;
	uint32_t t39 = 49475U;

	t39 = ((x2445>>x2446)|(x2447-x2448));

	if (t39 != 4294964927U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2450 = 1;
	volatile int64_t x2452 = INT64_MIN;
	volatile int64_t t40 = INT64_MAX;

	t40 = ((x2449>>x2450)|(x2451-x2452));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2477 = 1642LL;
	int64_t x2479 = INT64_MIN;
	volatile uint64_t x2480 = 1851639790851479316LLU;
	volatile uint64_t t41 = 2036659761LLU;

	t41 = ((x2477>>x2478)|(x2479-x2480));

	if (t41 != 7371732246003298030LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2573 = 1U;
	uint16_t x2574 = 1U;
	volatile int64_t x2575 = -1LL;
	volatile int16_t x2576 = 5574;

	t42 = ((x2573>>x2574)|(x2575-x2576));

	if (t42 != -5575LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x2789 = 72U;
	volatile uint64_t x2790 = 25LLU;
	volatile uint8_t x2791 = 3U;

	t43 = ((x2789>>x2790)|(x2791-x2792));

	if (t43 != 18446744073672696134LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2793 = 726931330LL;
	uint8_t x2795 = 13U;
	uint16_t x2796 = 10U;
	int64_t t44 = -8580445479LL;

	t44 = ((x2793>>x2794)|(x2795-x2796));

	if (t44 != 11358303LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2957 = INT64_MAX;
	uint8_t x2958 = 9U;
	volatile int16_t x2960 = INT16_MIN;
	volatile int64_t t45 = 1450LL;

	t45 = ((x2957>>x2958)|(x2959-x2960));

	if (t45 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2973 = 11972;
	uint16_t x2974 = 15U;
	volatile int8_t x2975 = 1;
	int16_t x2976 = INT16_MIN;
	int32_t t46 = -3;

	t46 = ((x2973>>x2974)|(x2975-x2976));

	if (t46 != 32769) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2982 = 2U;
	volatile int16_t x2983 = INT16_MAX;
	static volatile int8_t x2984 = 0;

	t47 = ((x2981>>x2982)|(x2983-x2984));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2989 = 29333LL;
	volatile int32_t x2991 = INT32_MAX;
	int32_t x2992 = INT32_MAX;
	static int64_t t48 = 437545946120LL;

	t48 = ((x2989>>x2990)|(x2991-x2992));

	if (t48 != 7LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3157 = 58U;
	int32_t x3159 = -1;
	int16_t x3160 = 4466;
	volatile int32_t t49 = 47765;

	t49 = ((x3157>>x3158)|(x3159-x3160));

	if (t49 != -4417) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x3217 = 70127;
	static int8_t x3218 = 15;
	int64_t x3219 = INT64_MIN;
	volatile int64_t t50 = -6305196LL;

	t50 = ((x3217>>x3218)|(x3219-x3220));

	if (t50 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x3277 = 1278424449388946LL;
	int16_t x3278 = 15;
	volatile int32_t x3280 = INT32_MAX;
	volatile int64_t t51 = -13405790LL;

	t51 = ((x3277>>x3278)|(x3279-x3280));

	if (t51 != -1787771297LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3361 = 94869575267857118LLU;
	uint64_t x3362 = 7LLU;
	int8_t x3363 = INT8_MIN;
	uint64_t x3364 = UINT64_MAX;
	static uint64_t t52 = 1799203188LLU;

	t52 = ((x3361>>x3362)|(x3363-x3364));

	if (t52 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3385 = 1272U;
	int64_t x3387 = INT64_MAX;
	static uint32_t x3388 = UINT32_MAX;
	int64_t t53 = -201234882LL;

	t53 = ((x3385>>x3386)|(x3387-x3388));

	if (t53 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3449 = 30U;
	volatile int32_t x3450 = 0;
	uint64_t x3451 = 19703720LLU;
	volatile uint64_t t54 = 1LLU;

	t54 = ((x3449>>x3450)|(x3451-x3452));

	if (t54 != 19703807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3454 = 24;
	uint32_t x3456 = 1499465U;
	int64_t t55 = -5583873352224LL;

	t55 = ((x3453>>x3454)|(x3455-x3456));

	if (t55 != -1499466LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3466 = 9U;
	uint32_t x3467 = UINT32_MAX;
	volatile uint8_t x3468 = 31U;

	t56 = ((x3465>>x3466)|(x3467-x3468));

	if (t56 != 4294967264U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3537 = UINT16_MAX;
	uint16_t x3538 = 6U;
	uint32_t x3539 = UINT32_MAX;
	static volatile int32_t x3540 = -1;

	t57 = ((x3537>>x3538)|(x3539-x3540));

	if (t57 != 1023U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3549 = UINT32_MAX;
	static uint8_t x3550 = 2U;
	uint64_t t58 = 439073129209LLU;

	t58 = ((x3549>>x3550)|(x3551-x3552));

	if (t58 != 17478032221779525631LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x3757 = 11LLU;
	static uint8_t x3758 = 46U;
	int8_t x3760 = INT8_MIN;
	volatile uint64_t t59 = 1359122142LLU;

	t59 = ((x3757>>x3758)|(x3759-x3760));

	if (t59 != 255LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3797 = 1201647270U;
	int16_t x3798 = 29;
	int16_t x3799 = -12;
	int64_t x3800 = 4997712724LL;
	volatile int64_t t60 = 0LL;

	t60 = ((x3797>>x3798)|(x3799-x3800));

	if (t60 != -4997712734LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3814 = 14;
	volatile uint8_t x3815 = 38U;
	static volatile uint16_t x3816 = 4U;
	volatile uint32_t t61 = 515293231U;

	t61 = ((x3813>>x3814)|(x3815-x3816));

	if (t61 != 1890U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3861 = INT8_MAX;
	uint16_t x3862 = 1U;
	volatile int32_t x3863 = -14258;
	static uint16_t x3864 = 55U;
	static int32_t t62 = 980;

	t62 = ((x3861>>x3862)|(x3863-x3864));

	if (t62 != -14273) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3877 = INT32_MAX;
	uint16_t x3878 = 1U;
	volatile int64_t x3879 = -871904973LL;
	int8_t x3880 = 30;
	volatile int64_t t63 = 139LL;

	t63 = ((x3877>>x3878)|(x3879-x3880));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3938 = 12U;
	static volatile int16_t x3939 = INT16_MAX;
	volatile uint32_t x3940 = 444U;
	volatile uint32_t t64 = 0U;

	t64 = ((x3937>>x3938)|(x3939-x3940));

	if (t64 != 32323U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3987 = UINT64_MAX;
	int8_t x3988 = INT8_MAX;
	uint64_t t65 = 345409073LLU;

	t65 = ((x3985>>x3986)|(x3987-x3988));

	if (t65 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4321 = UINT32_MAX;
	volatile uint64_t x4324 = 18079383213LLU;
	volatile uint64_t t66 = 6LLU;

	t66 = ((x4321>>x4322)|(x4323-x4324));

	if (t66 != 18446744056529682431LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x4349 = 2978253175657LL;
	uint32_t x4350 = 30U;
	int64_t x4351 = 0LL;
	static int32_t x4352 = INT32_MIN;
	static volatile int64_t t67 = -9527034926LL;

	t67 = ((x4349>>x4350)|(x4351-x4352));

	if (t67 != 2147486421LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x4361 = 104U;
	volatile uint16_t x4362 = 1U;
	volatile int64_t t68 = 5555474574780LL;

	t68 = ((x4361>>x4362)|(x4363-x4364));

	if (t68 != -9223372036854775628LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4381 = INT8_MAX;
	uint8_t x4382 = 1U;
	int16_t x4383 = INT16_MIN;
	static uint64_t x4384 = 814743971422LLU;

	t69 = ((x4381>>x4382)|(x4383-x4384));

	if (t69 != 18446743258965547455LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x4421 = 28U;
	uint16_t x4422 = 7U;
	uint16_t x4424 = 422U;
	int32_t t70 = -52035;

	t70 = ((x4421>>x4422)|(x4423-x4424));

	if (t70 != -33190) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4477 = UINT32_MAX;
	int8_t x4478 = 2;
	int16_t x4479 = -1;
	volatile int64_t x4480 = INT64_MIN;

	t71 = ((x4477>>x4478)|(x4479-x4480));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4489 = INT64_MAX;
	uint16_t x4490 = 0U;
	static int16_t x4492 = INT16_MIN;
	static int64_t t72 = INT64_MAX;

	t72 = ((x4489>>x4490)|(x4491-x4492));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4545 = 361U;
	static int8_t x4546 = 5;
	int16_t x4547 = 2;
	int64_t x4548 = 65076LL;
	int64_t t73 = -42499361930673594LL;

	t73 = ((x4545>>x4546)|(x4547-x4548));

	if (t73 != -65073LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4549 = 0U;
	int8_t x4550 = 0;
	uint8_t x4552 = UINT8_MAX;
	static int32_t t74 = -619503;

	t74 = ((x4549>>x4550)|(x4551-x4552));

	if (t74 != -256) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4565 = 13;
	uint32_t t75 = 4039053U;

	t75 = ((x4565>>x4566)|(x4567-x4568));

	if (t75 != 4294901761U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x4649 = INT16_MAX;
	int8_t x4651 = INT8_MIN;
	static int64_t x4652 = -118417LL;
	static volatile int64_t t76 = 6641LL;

	t76 = ((x4649>>x4650)|(x4651-x4652));

	if (t76 != 131071LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4766 = 1;
	uint64_t x4768 = 274197499231LLU;
	uint64_t t77 = 90487223LLU;

	t77 = ((x4765>>x4766)|(x4767-x4768));

	if (t77 != 18446743799512052969LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x4803 = INT16_MAX;
	uint16_t x4804 = 933U;

	t78 = ((x4801>>x4802)|(x4803-x4804));

	if (t78 != 31871) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4810 = 0U;
	int32_t x4811 = 12431;
	int8_t x4812 = 2;
	static volatile uint32_t t79 = 20892050U;

	t79 = ((x4809>>x4810)|(x4811-x4812));

	if (t79 != 12431U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4889 = 87;
	uint8_t x4890 = 1U;
	volatile uint16_t x4891 = 2U;
	int64_t x4892 = -5320LL;
	int64_t t80 = -4608LL;

	t80 = ((x4889>>x4890)|(x4891-x4892));

	if (t80 != 5355LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5057 = INT16_MAX;
	volatile uint64_t x5059 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = ((x5057>>x5058)|(x5059-x5060));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x5113 = UINT32_MAX;
	volatile int16_t x5115 = -1;
	static uint32_t t82 = 1693179438U;

	t82 = ((x5113>>x5114)|(x5115-x5116));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5269 = 15;
	volatile int8_t x5270 = 1;
	int8_t x5271 = INT8_MIN;
	uint32_t t83 = 68U;

	t83 = ((x5269>>x5270)|(x5271-x5272));

	if (t83 != 4294872543U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x5393 = UINT64_MAX;
	int32_t x5395 = -615968669;
	static int64_t x5396 = INT64_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x5393>>x5394)|(x5395-x5396));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5429 = 1225U;
	int8_t x5431 = INT8_MIN;
	volatile int8_t x5432 = 13;
	volatile uint32_t t85 = 19826717U;

	t85 = ((x5429>>x5430)|(x5431-x5432));

	if (t85 != 4294967291U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5493 = INT8_MAX;
	volatile uint8_t x5494 = 27U;
	int32_t x5495 = -1;
	int64_t x5496 = -25897LL;
	volatile int64_t t86 = -282430LL;

	t86 = ((x5493>>x5494)|(x5495-x5496));

	if (t86 != 25896LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5497 = 1U;
	uint16_t x5500 = 9958U;
	int32_t t87 = 4;

	t87 = ((x5497>>x5498)|(x5499-x5500));

	if (t87 != 6147) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5509 = 3LLU;
	int8_t x5510 = 0;
	uint64_t x5511 = 3603529310024937324LLU;
	int8_t x5512 = -4;
	uint64_t t88 = 7260LLU;

	t88 = ((x5509>>x5510)|(x5511-x5512));

	if (t88 != 3603529310024937331LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5549 = 0U;
	static uint64_t x5550 = 30LLU;
	static int16_t x5551 = INT16_MIN;
	int8_t x5552 = INT8_MIN;
	static uint32_t t89 = 40631670U;

	t89 = ((x5549>>x5550)|(x5551-x5552));

	if (t89 != 4294934656U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x5625 = 0U;
	int16_t x5628 = INT16_MIN;
	volatile int64_t t90 = 0LL;

	t90 = ((x5625>>x5626)|(x5627-x5628));

	if (t90 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5630 = 7;
	uint32_t x5632 = 0U;
	uint64_t t91 = 1261213470791LLU;

	t91 = ((x5629>>x5630)|(x5631-x5632));

	if (t91 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5669 = UINT64_MAX;
	int16_t x5670 = 59;
	int16_t x5671 = INT16_MIN;
	static volatile int32_t x5672 = INT32_MIN;

	t92 = ((x5669>>x5670)|(x5671-x5672));

	if (t92 != 2147450911LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5710 = 0;
	volatile int8_t x5712 = INT8_MIN;
	volatile uint32_t t93 = 90U;

	t93 = ((x5709>>x5710)|(x5711-x5712));

	if (t93 != 20186111U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5745 = UINT8_MAX;
	int32_t x5747 = -15973;
	uint16_t x5748 = 10U;

	t94 = ((x5745>>x5746)|(x5747-x5748));

	if (t94 != -15873) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x5833 = 5396672080LLU;
	uint8_t x5834 = 37U;
	static uint16_t x5835 = 4U;
	volatile int32_t x5836 = INT32_MAX;

	t95 = ((x5833>>x5834)|(x5835-x5836));

	if (t95 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5873 = UINT16_MAX;
	uint8_t x5874 = 7U;
	uint64_t x5875 = 1969917398LLU;
	int8_t x5876 = 1;

	t96 = ((x5873>>x5874)|(x5875-x5876));

	if (t96 != 1969917439LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x5881 = 12042258374LL;
	int32_t x5884 = INT32_MIN;
	int64_t t97 = 224LL;

	t97 = ((x5881>>x5882)|(x5883-x5884));

	if (t97 != -9223372033844211215LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5925 = 3U;
	int8_t x5926 = 0;
	static int32_t x5927 = -103;
	static int8_t x5928 = -1;
	int32_t t98 = 16071904;

	t98 = ((x5925>>x5926)|(x5927-x5928));

	if (t98 != -101) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5933 = INT8_MAX;
	static uint8_t x5934 = 30U;
	int8_t x5935 = 53;
	uint32_t x5936 = 6825U;

	t99 = ((x5933>>x5934)|(x5935-x5936));

	if (t99 != 4294960524U) { NG(); } else { ; }
	
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

