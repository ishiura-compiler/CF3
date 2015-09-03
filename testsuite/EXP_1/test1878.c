#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x71 = INT8_MAX;
uint64_t t0 = 55817101LLU;
uint32_t x135 = UINT32_MAX;
int64_t x169 = -1LL;
static int64_t x170 = INT64_MIN;
static volatile uint32_t x172 = 15U;
int8_t x202 = INT8_MAX;
uint64_t t12 = 9365LLU;
uint8_t x962 = 0U;
int16_t x1051 = INT16_MIN;
uint8_t x1052 = 7U;
volatile uint64_t t15 = 4183314140793703584LLU;
uint16_t x1230 = 328U;
static int8_t x1231 = -1;
static int32_t t17 = -589584253;
uint8_t x1260 = 1U;
volatile int16_t x1281 = 9986;
int64_t x1282 = 145970LL;
static int8_t x1284 = 0;
int8_t x1293 = -42;
int8_t x1296 = 12;
volatile uint32_t t20 = 1868786U;
int16_t x1309 = 1;
static volatile uint16_t x1312 = 32U;
volatile int32_t x1318 = INT32_MAX;
int64_t x1433 = INT64_MIN;
int64_t x1457 = -221LL;
uint16_t x1460 = 13U;
uint32_t x1571 = 7253743U;
volatile uint32_t t29 = 30U;
uint32_t x1775 = UINT32_MAX;
uint16_t x1783 = UINT16_MAX;
uint8_t x1784 = 19U;
volatile int64_t t33 = -3303817451112310018LL;
volatile uint64_t t34 = 2715508227LLU;
static uint64_t x1969 = 138LLU;
int8_t x1976 = 3;
static uint16_t x2009 = 116U;
volatile int8_t x2010 = INT8_MAX;
static volatile int32_t t37 = -53919926;
volatile int32_t t38 = -49;
int16_t x2165 = 7;
static uint8_t x2166 = UINT8_MAX;
volatile uint8_t x2167 = UINT8_MAX;
int64_t x2414 = -6LL;
int8_t x2651 = -12;
uint16_t x2790 = 0U;
static int8_t x2824 = 1;
static int32_t x3034 = INT32_MIN;
static volatile uint64_t x3035 = 36113570123683855LLU;
uint8_t x3036 = 41U;
volatile uint64_t t46 = 523300081823408LLU;
static int32_t x3169 = INT32_MIN;
uint32_t t48 = 2128790794U;
static uint64_t x3391 = 26896500LLU;
volatile uint16_t x3392 = 1U;
volatile int16_t x3495 = INT16_MIN;
int32_t x3496 = 2;
uint64_t x3589 = UINT64_MAX;
static int32_t x3591 = -47;
int16_t x3614 = 11;
int8_t x3626 = -1;
volatile uint32_t x3694 = 158817661U;
static uint8_t x3696 = 0U;
uint64_t t56 = 87104529508274213LLU;
int16_t x4096 = 0;
volatile int16_t x4101 = INT16_MIN;
uint64_t x4103 = UINT64_MAX;
int8_t x4142 = INT8_MIN;
static int16_t x4143 = -1;
volatile uint32_t t63 = 143U;
uint8_t x4299 = 8U;
volatile uint32_t t64 = 4719730U;
volatile uint64_t t70 = 1LLU;
static uint8_t x4765 = 1U;
uint16_t x4820 = 3U;
static uint32_t t72 = 727045299U;
static volatile uint8_t x4828 = 4U;
volatile int16_t x4881 = -79;
int16_t x4883 = INT16_MIN;
volatile int64_t t75 = -2143LL;
uint64_t t78 = 100247100313000406LLU;
int16_t x5370 = INT16_MIN;
uint8_t x5438 = 97U;
uint8_t x5524 = 1U;
int64_t x5766 = -29209LL;
static uint8_t x5768 = 7U;
uint16_t x5833 = UINT16_MAX;
int16_t x5834 = -1;
uint8_t x5836 = 1U;
int32_t x5867 = 28773;
uint8_t x5868 = 0U;
volatile uint32_t x5979 = 1329442438U;
volatile int64_t t88 = 59LL;
static volatile uint64_t t89 = 117565974563LLU;
int16_t x6234 = -1;
int16_t x6395 = 210;
volatile uint64_t t91 = 361LLU;
uint32_t x6618 = UINT32_MAX;
uint64_t x6681 = 658908622013580676LLU;
volatile uint8_t x6740 = 27U;
volatile uint32_t x6750 = UINT32_MAX;
int32_t x6806 = 2899;
volatile uint32_t x6807 = 6805506U;
uint32_t t97 = 190903U;
uint64_t x6870 = 3681222908669126LLU;
volatile int8_t x6872 = 3;


void f0(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MAX;
	uint16_t x72 = 1U;

	t0 = (((x69|x70)-x71)<<x72);

	if (t0 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x125 = 98LLU;
	static int16_t x126 = -1;
	uint64_t x127 = 783257919334424LLU;
	uint8_t x128 = 12U;
	volatile uint64_t t1 = 5806326LLU;

	t1 = (((x125|x126)-x127)<<x128);

	if (t1 != 15238519636115746816LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x133 = 75U;
	int32_t x134 = -1;
	int8_t x136 = 1;
	volatile uint32_t t2 = 11U;

	t2 = (((x133|x134)-x135)<<x136);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x171 = -1561LL;
	volatile int64_t t3 = 1479807186LL;

	t3 = (((x169|x170)-x171)<<x172);

	if (t3 != 51118080LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x201 = INT8_MIN;
	int64_t x203 = -1LL;
	uint8_t x204 = 21U;
	volatile int64_t t4 = -10064799473754337LL;

	t4 = (((x201|x202)-x203)<<x204);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x337 = 16296628LLU;
	int16_t x338 = -4;
	uint32_t x339 = UINT32_MAX;
	static uint16_t x340 = 25U;
	volatile uint64_t t5 = 55412LLU;

	t5 = (((x337|x338)-x339)<<x340);

	if (t5 != 18302628885533032448LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x353 = 1873U;
	static uint16_t x354 = UINT16_MAX;
	static uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 1U;
	uint64_t t6 = 7100373538836LLU;

	t6 = (((x353|x354)-x355)<<x356);

	if (t6 != 131072LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x429 = 1850U;
	int8_t x430 = -1;
	int16_t x431 = -1;
	static uint8_t x432 = 0U;
	volatile int32_t t7 = -4069;

	t7 = (((x429|x430)-x431)<<x432);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x473 = UINT8_MAX;
	static uint32_t x474 = UINT32_MAX;
	static int16_t x475 = INT16_MAX;
	static uint8_t x476 = 9U;
	uint32_t t8 = 2099348399U;

	t8 = (((x473|x474)-x475)<<x476);

	if (t8 != 4278190080U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x501 = 5467U;
	int8_t x502 = INT8_MAX;
	int16_t x503 = -938;
	int16_t x504 = 0;
	static volatile int32_t t9 = -433;

	t9 = (((x501|x502)-x503)<<x504);

	if (t9 != 6441) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x593 = INT8_MAX;
	volatile uint32_t x594 = 12U;
	static int32_t x595 = INT32_MIN;
	uint8_t x596 = 31U;
	volatile uint32_t t10 = 2U;

	t10 = (((x593|x594)-x595)<<x596);

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x613 = 3;
	int32_t x614 = 3824160;
	uint8_t x615 = UINT8_MAX;
	volatile int16_t x616 = 0;
	volatile int32_t t11 = 6883184;

	t11 = (((x613|x614)-x615)<<x616);

	if (t11 != 3823908) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x813 = INT16_MIN;
	static volatile int8_t x814 = INT8_MAX;
	uint64_t x815 = 72LLU;
	int16_t x816 = 1;

	t12 = (((x813|x814)-x815)<<x816);

	if (t12 != 18446744073709486190LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x901 = -1LL;
	volatile int64_t x902 = -1359646724085891LL;
	int16_t x903 = -1;
	uint8_t x904 = 7U;
	volatile int64_t t13 = -154408LL;

	t13 = (((x901|x902)-x903)<<x904);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x961 = 77366U;
	static uint64_t x963 = 7978592725355551LLU;
	volatile uint64_t x964 = 1LLU;
	static volatile uint64_t t14 = 14022696960425LLU;

	t14 = (((x961|x962)-x963)<<x964);

	if (t14 != 18430786888258995246LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1049 = INT64_MAX;
	volatile uint64_t x1050 = 905580LLU;

	t15 = (((x1049|x1050)-x1051)<<x1052);

	if (t15 != 4194176LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1053 = -22LL;
	static uint64_t x1054 = UINT64_MAX;
	int8_t x1055 = 1;
	uint8_t x1056 = 6U;
	uint64_t t16 = 400LLU;

	t16 = (((x1053|x1054)-x1055)<<x1056);

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1229 = 107322741;
	uint32_t x1232 = 0U;

	t17 = (((x1229|x1230)-x1231)<<x1232);

	if (t17 != 107322750) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1257 = 0LLU;
	uint64_t x1258 = UINT64_MAX;
	uint8_t x1259 = 2U;
	static volatile uint64_t t18 = 7LLU;

	t18 = (((x1257|x1258)-x1259)<<x1260);

	if (t18 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1283 = UINT16_MAX;
	volatile int64_t t19 = -29919665LL;

	t19 = (((x1281|x1282)-x1283)<<x1284);

	if (t19 != 81715LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1294 = UINT32_MAX;
	static uint8_t x1295 = 9U;

	t20 = (((x1293|x1294)-x1295)<<x1296);

	if (t20 != 4294926336U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1310 = 9399719643768859LLU;
	static int64_t x1311 = 1LL;
	volatile uint64_t t21 = 7519275LLU;

	t21 = (((x1309|x1310)-x1311)<<x1312);

	if (t21 != 14292991565780484096LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1317 = INT16_MIN;
	int16_t x1319 = -501;
	static volatile int8_t x1320 = 0;
	volatile int32_t t22 = 145;

	t22 = (((x1317|x1318)-x1319)<<x1320);

	if (t22 != 500) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1401 = -1;
	int16_t x1402 = INT16_MIN;
	static uint32_t x1403 = 744385U;
	volatile uint16_t x1404 = 20U;
	static volatile uint32_t t23 = 8U;

	t23 = (((x1401|x1402)-x1403)<<x1404);

	if (t23 != 1138753536U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1421 = INT32_MIN;
	uint64_t x1422 = 1228155111781207LLU;
	int32_t x1423 = INT32_MIN;
	uint8_t x1424 = 12U;
	volatile uint64_t t24 = 70973959435822LLU;

	t24 = (((x1421|x1422)-x1423)<<x1424);

	if (t24 != 2554082979840LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1434 = 1016;
	volatile uint64_t x1435 = UINT64_MAX;
	static int8_t x1436 = 0;
	uint64_t t25 = 8960113LLU;

	t25 = (((x1433|x1434)-x1435)<<x1436);

	if (t25 != 9223372036854776825LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1458 = -1;
	uint64_t x1459 = 5780899848197532LLU;
	static uint64_t t26 = 402450164597495LLU;

	t26 = (((x1457|x1458)-x1459)<<x1460);

	if (t26 != 7983100664694464512LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1569 = 66885969753620360LLU;
	static int64_t x1570 = -1LL;
	int8_t x1572 = 2;
	uint64_t t27 = 470466029463LLU;

	t27 = (((x1569|x1570)-x1571)<<x1572);

	if (t27 != 18446744073680536640LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1593 = INT16_MIN;
	static int64_t x1594 = -1LL;
	uint64_t x1595 = 11373508911315779LLU;
	uint8_t x1596 = 0U;
	volatile uint64_t t28 = 46375LLU;

	t28 = (((x1593|x1594)-x1595)<<x1596);

	if (t28 != 18435370564798235836LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1709 = 1;
	uint32_t x1710 = 31U;
	uint8_t x1711 = 21U;
	volatile int32_t x1712 = 0;

	t29 = (((x1709|x1710)-x1711)<<x1712);

	if (t29 != 10U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1733 = UINT32_MAX;
	static int64_t x1734 = -1LL;
	static int32_t x1735 = -3;
	uint8_t x1736 = 3U;
	static int64_t t30 = 29364LL;

	t30 = (((x1733|x1734)-x1735)<<x1736);

	if (t30 != 16LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x1773 = 2U;
	volatile int16_t x1774 = INT16_MIN;
	int8_t x1776 = 0;
	volatile uint32_t t31 = 391U;

	t31 = (((x1773|x1774)-x1775)<<x1776);

	if (t31 != 4294934531U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1781 = INT16_MIN;
	uint32_t x1782 = 526288U;
	volatile uint32_t t32 = 330U;

	t32 = (((x1781|x1782)-x1783)<<x1784);

	if (t32 != 1049100288U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1885 = 20U;
	int64_t x1886 = -1LL;
	static int8_t x1887 = INT8_MIN;
	volatile int8_t x1888 = 25;

	t33 = (((x1885|x1886)-x1887)<<x1888);

	if (t33 != 4261412864LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1929 = -29001887823381308LL;
	int64_t x1930 = INT64_MIN;
	uint64_t x1931 = UINT64_MAX;
	static int16_t x1932 = 6;

	t34 = (((x1929|x1930)-x1931)<<x1932);

	if (t34 != 16590623253013147968LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1970 = UINT32_MAX;
	int8_t x1971 = 1;
	volatile uint8_t x1972 = 1U;
	static volatile uint64_t t35 = 3514949684LLU;

	t35 = (((x1969|x1970)-x1971)<<x1972);

	if (t35 != 8589934588LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1973 = UINT8_MAX;
	uint64_t x1974 = 6461891740411647LLU;
	int16_t x1975 = INT16_MAX;
	uint64_t t36 = 1348459415474642LLU;

	t36 = (((x1973|x1974)-x1975)<<x1976);

	if (t36 != 51695133923031040LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2011 = -1;
	volatile int8_t x2012 = 11;

	t37 = (((x2009|x2010)-x2011)<<x2012);

	if (t37 != 262144) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2021 = INT16_MAX;
	int16_t x2022 = INT16_MAX;
	volatile int16_t x2023 = INT16_MIN;
	volatile uint8_t x2024 = 0U;

	t38 = (((x2021|x2022)-x2023)<<x2024);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2168 = 3U;
	int32_t t39 = -2658;

	t39 = (((x2165|x2166)-x2167)<<x2168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2413 = INT16_MIN;
	int16_t x2415 = -4147;
	int16_t x2416 = 1;
	volatile int64_t t40 = 431LL;

	t40 = (((x2413|x2414)-x2415)<<x2416);

	if (t40 != 8282LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2461 = INT64_MAX;
	int64_t x2462 = -3257433369883616581LL;
	static int64_t x2463 = -1LL;
	int64_t x2464 = 26LL;
	volatile int64_t t41 = -1730LL;

	t41 = (((x2461|x2462)-x2463)<<x2464);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2649 = INT16_MIN;
	int8_t x2650 = -3;
	uint8_t x2652 = 0U;
	volatile int32_t t42 = 59937;

	t42 = (((x2649|x2650)-x2651)<<x2652);

	if (t42 != 9) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2685 = 1733U;
	volatile uint32_t x2686 = UINT32_MAX;
	int16_t x2687 = INT16_MIN;
	uint8_t x2688 = 0U;
	static uint32_t t43 = 1992258U;

	t43 = (((x2685|x2686)-x2687)<<x2688);

	if (t43 != 32767U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2789 = -1;
	int16_t x2791 = INT16_MIN;
	uint16_t x2792 = 0U;
	int32_t t44 = 594599;

	t44 = (((x2789|x2790)-x2791)<<x2792);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2821 = 270U;
	static int16_t x2822 = -7;
	int64_t x2823 = -1LL;
	int64_t t45 = -6205184919LL;

	t45 = (((x2821|x2822)-x2823)<<x2824);

	if (t45 != 8589934592LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3033 = INT16_MAX;

	t46 = (((x3033|x3034)-x3035)<<x3036);

	if (t46 != 7696616578804088832LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3170 = 193U;
	int16_t x3171 = INT16_MIN;
	uint8_t x3172 = 27U;
	volatile uint32_t t47 = 179467U;

	t47 = (((x3169|x3170)-x3171)<<x3172);

	if (t47 != 134217728U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3297 = UINT32_MAX;
	uint16_t x3298 = UINT16_MAX;
	uint8_t x3299 = 15U;
	static uint8_t x3300 = 6U;

	t48 = (((x3297|x3298)-x3299)<<x3300);

	if (t48 != 4294966272U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3389 = 32830960LLU;
	int8_t x3390 = INT8_MIN;
	static volatile uint64_t t49 = 399794865465452612LLU;

	t49 = (((x3389|x3390)-x3391)<<x3392);

	if (t49 != 18446744073655758584LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3493 = 1441U;
	volatile uint64_t x3494 = 86914432287698120LLU;
	volatile uint64_t t50 = 12562132LLU;

	t50 = (((x3493|x3494)-x3495)<<x3496);

	if (t50 != 347657729150924708LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3513 = INT8_MIN;
	static int16_t x3514 = INT16_MAX;
	volatile int32_t x3515 = -1;
	static uint8_t x3516 = 0U;
	static int32_t t51 = 8640;

	t51 = (((x3513|x3514)-x3515)<<x3516);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3590 = 22;
	volatile uint16_t x3592 = 5U;
	static uint64_t t52 = 2753245367469782LLU;

	t52 = (((x3589|x3590)-x3591)<<x3592);

	if (t52 != 1472LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3593 = 189108254;
	int64_t x3594 = 0LL;
	uint8_t x3595 = UINT8_MAX;
	uint8_t x3596 = 2U;
	static int64_t t53 = -2481154LL;

	t53 = (((x3593|x3594)-x3595)<<x3596);

	if (t53 != 756431996LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x3613 = -1;
	static int8_t x3615 = -1;
	int8_t x3616 = 0;
	int32_t t54 = 1147;

	t54 = (((x3613|x3614)-x3615)<<x3616);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3625 = 323U;
	int32_t x3627 = -1;
	uint8_t x3628 = 1U;
	volatile int32_t t55 = 1889;

	t55 = (((x3625|x3626)-x3627)<<x3628);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3693 = INT8_MIN;
	uint64_t x3695 = 35LLU;

	t56 = (((x3693|x3694)-x3695)<<x3696);

	if (t56 != 4294967258LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3785 = INT16_MIN;
	uint32_t x3786 = UINT32_MAX;
	volatile int16_t x3787 = INT16_MIN;
	static uint16_t x3788 = 1U;
	uint32_t t57 = 1U;

	t57 = (((x3785|x3786)-x3787)<<x3788);

	if (t57 != 65534U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3937 = 5898U;
	int64_t x3938 = INT64_MAX;
	int64_t x3939 = INT64_MAX;
	uint8_t x3940 = 63U;
	volatile int64_t t58 = -2064483225949164963LL;

	t58 = (((x3937|x3938)-x3939)<<x3940);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3965 = UINT32_MAX;
	int8_t x3966 = INT8_MIN;
	volatile int16_t x3967 = -1;
	int8_t x3968 = 1;
	uint32_t t59 = 12U;

	t59 = (((x3965|x3966)-x3967)<<x3968);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4093 = 294199243U;
	volatile uint64_t x4094 = 29608LLU;
	static int8_t x4095 = INT8_MIN;
	volatile uint64_t t60 = 0LLU;

	t60 = (((x4093|x4094)-x4095)<<x4096);

	if (t60 != 294223979LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x4102 = 6;
	static volatile uint8_t x4104 = 51U;
	uint64_t t61 = 564557218LLU;

	t61 = (((x4101|x4102)-x4103)<<x4104);

	if (t61 != 15762598695796736LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4141 = -1;
	uint32_t x4144 = 11U;
	int32_t t62 = -810;

	t62 = (((x4141|x4142)-x4143)<<x4144);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x4205 = INT32_MIN;
	int8_t x4206 = -1;
	uint32_t x4207 = UINT32_MAX;
	uint16_t x4208 = 1U;

	t63 = (((x4205|x4206)-x4207)<<x4208);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4297 = UINT32_MAX;
	int8_t x4298 = INT8_MAX;
	uint8_t x4300 = 0U;

	t64 = (((x4297|x4298)-x4299)<<x4300);

	if (t64 != 4294967287U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4421 = INT16_MIN;
	uint32_t x4422 = 6U;
	static int64_t x4423 = -1LL;
	static uint32_t x4424 = 0U;
	int64_t t65 = -10762520501LL;

	t65 = (((x4421|x4422)-x4423)<<x4424);

	if (t65 != 4294934535LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4501 = -808;
	volatile int64_t x4502 = INT64_MAX;
	int16_t x4503 = INT16_MIN;
	volatile uint8_t x4504 = 12U;
	static volatile int64_t t66 = 1018019403321954LL;

	t66 = (((x4501|x4502)-x4503)<<x4504);

	if (t66 != 134213632LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4645 = -1;
	volatile int16_t x4646 = 1222;
	volatile int64_t x4647 = -2LL;
	static uint16_t x4648 = 57U;
	volatile int64_t t67 = 12459LL;

	t67 = (((x4645|x4646)-x4647)<<x4648);

	if (t67 != 144115188075855872LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x4669 = UINT64_MAX;
	uint16_t x4670 = 93U;
	volatile int32_t x4671 = -80450866;
	static int8_t x4672 = 9;
	static volatile uint64_t t68 = 3418528382915535LLU;

	t68 = (((x4669|x4670)-x4671)<<x4672);

	if (t68 != 41190842880LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4673 = INT32_MIN;
	uint64_t x4674 = UINT64_MAX;
	volatile int16_t x4675 = 19;
	volatile int16_t x4676 = 5;
	uint64_t t69 = 29LLU;

	t69 = (((x4673|x4674)-x4675)<<x4676);

	if (t69 != 18446744073709550976LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4733 = INT32_MIN;
	volatile int8_t x4734 = INT8_MIN;
	uint64_t x4735 = 214997LLU;
	int16_t x4736 = 1;

	t70 = (((x4733|x4734)-x4735)<<x4736);

	if (t70 != 18446744073709121366LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x4766 = INT8_MIN;
	uint32_t x4767 = UINT32_MAX;
	volatile uint8_t x4768 = 0U;
	uint32_t t71 = 470392U;

	t71 = (((x4765|x4766)-x4767)<<x4768);

	if (t71 != 4294967170U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4817 = 18U;
	int32_t x4818 = INT32_MAX;
	uint32_t x4819 = UINT32_MAX;

	t72 = (((x4817|x4818)-x4819)<<x4820);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4825 = INT8_MAX;
	int16_t x4826 = 618;
	static int8_t x4827 = INT8_MIN;
	int32_t t73 = -218;

	t73 = (((x4825|x4826)-x4827)<<x4828);

	if (t73 != 12272) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4857 = -4;
	volatile uint64_t x4858 = UINT64_MAX;
	uint32_t x4859 = 118482U;
	int32_t x4860 = 47;
	uint64_t t74 = 8LLU;

	t74 = (((x4857|x4858)-x4859)<<x4860);

	if (t74 != 1771744240905224192LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x4882 = -1LL;
	uint8_t x4884 = 10U;

	t75 = (((x4881|x4882)-x4883)<<x4884);

	if (t75 != 33553408LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5013 = INT32_MIN;
	int64_t x5014 = -2778152427039705LL;
	int64_t x5015 = -1027050715LL;
	uint8_t x5016 = 0U;
	volatile int64_t t76 = -716463509LL;

	t76 = (((x5013|x5014)-x5015)<<x5016);

	if (t76 != 950788354LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x5113 = -1;
	int8_t x5114 = INT8_MIN;
	int16_t x5115 = -1;
	uint8_t x5116 = 20U;
	int32_t t77 = -1;

	t77 = (((x5113|x5114)-x5115)<<x5116);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5177 = 43;
	volatile uint32_t x5178 = 139U;
	uint64_t x5179 = 50700450511LLU;
	static uint8_t x5180 = 1U;

	t78 = (((x5177|x5178)-x5179)<<x5180);

	if (t78 != 18446743972308650936LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5353 = INT16_MIN;
	uint32_t x5354 = UINT32_MAX;
	uint32_t x5355 = UINT32_MAX;
	uint64_t x5356 = 14LLU;
	uint32_t t79 = 14553906U;

	t79 = (((x5353|x5354)-x5355)<<x5356);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5369 = INT64_MAX;
	int32_t x5371 = INT32_MIN;
	uint8_t x5372 = 7U;
	int64_t t80 = 17468481948392LL;

	t80 = (((x5369|x5370)-x5371)<<x5372);

	if (t80 != 274877906816LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5437 = INT32_MIN;
	static volatile int64_t x5439 = -232643670015LL;
	volatile int16_t x5440 = 6;
	volatile int64_t t81 = 44259817LL;

	t81 = (((x5437|x5438)-x5439)<<x5440);

	if (t81 != 14751755933696LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5517 = INT64_MAX;
	volatile int32_t x5518 = -1;
	int16_t x5519 = -60;
	uint64_t x5520 = 0LLU;
	int64_t t82 = -335LL;

	t82 = (((x5517|x5518)-x5519)<<x5520);

	if (t82 != 59LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5521 = UINT64_MAX;
	int16_t x5522 = INT16_MIN;
	int8_t x5523 = INT8_MIN;
	volatile uint64_t t83 = 423683894347279LLU;

	t83 = (((x5521|x5522)-x5523)<<x5524);

	if (t83 != 254LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x5669 = INT32_MIN;
	static uint8_t x5670 = UINT8_MAX;
	uint64_t x5671 = UINT64_MAX;
	static uint8_t x5672 = 1U;
	volatile uint64_t t84 = 520818876700707483LLU;

	t84 = (((x5669|x5670)-x5671)<<x5672);

	if (t84 != 18446744069414584832LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5765 = INT64_MIN;
	volatile int32_t x5767 = INT32_MIN;
	int64_t t85 = 149887LL;

	t85 = (((x5765|x5766)-x5767)<<x5768);

	if (t85 != 274874168192LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x5835 = UINT32_MAX;
	volatile uint32_t t86 = 11U;

	t86 = (((x5833|x5834)-x5835)<<x5836);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5865 = 199695353U;
	int16_t x5866 = INT16_MAX;
	volatile uint32_t t87 = 423U;

	t87 = (((x5865|x5866)-x5867)<<x5868);

	if (t87 != 199692186U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5977 = INT32_MAX;
	volatile int64_t x5978 = 68677847524LL;
	int16_t x5980 = 1;

	t88 = (((x5977|x5978)-x5979)<<x5980);

	if (t88 != 134780068594LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6049 = -324224;
	volatile uint64_t x6050 = UINT64_MAX;
	int16_t x6051 = 12468;
	volatile uint16_t x6052 = 1U;

	t89 = (((x6049|x6050)-x6051)<<x6052);

	if (t89 != 18446744073709526678LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6233 = -1;
	int16_t x6235 = -3;
	volatile int16_t x6236 = 1;
	int32_t t90 = -26541729;

	t90 = (((x6233|x6234)-x6235)<<x6236);

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6393 = 30198823295597LLU;
	int16_t x6394 = INT16_MIN;
	uint8_t x6396 = 1U;

	t91 = (((x6393|x6394)-x6395)<<x6396);

	if (t91 != 18446744073709499190LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6617 = INT8_MIN;
	uint64_t x6619 = UINT64_MAX;
	volatile int8_t x6620 = 3;
	volatile uint64_t t92 = 78071796LLU;

	t92 = (((x6617|x6618)-x6619)<<x6620);

	if (t92 != 34359738368LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x6682 = INT16_MIN;
	volatile int16_t x6683 = -1;
	int32_t x6684 = 5;
	uint64_t t93 = 2537303LLU;

	t93 = (((x6681|x6682)-x6683)<<x6684);

	if (t93 != 18446744073709072544LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6737 = 28;
	uint32_t x6738 = 2805557U;
	uint16_t x6739 = 0U;
	uint32_t t94 = 139850078U;

	t94 = (((x6737|x6738)-x6739)<<x6740);

	if (t94 != 3892314112U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6749 = -1;
	int8_t x6751 = INT8_MIN;
	volatile int32_t x6752 = 17;
	volatile uint32_t t95 = 52015U;

	t95 = (((x6749|x6750)-x6751)<<x6752);

	if (t95 != 16646144U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x6805 = 1U;
	int16_t x6808 = 14;
	uint32_t t96 = 6419U;

	t96 = (((x6805|x6806)-x6807)<<x6808);

	if (t96 != 215236608U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x6821 = 2U;
	static uint8_t x6822 = 3U;
	uint32_t x6823 = UINT32_MAX;
	volatile int8_t x6824 = 12;

	t97 = (((x6821|x6822)-x6823)<<x6824);

	if (t97 != 16384U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x6869 = 5U;
	uint16_t x6871 = 5029U;
	uint64_t t98 = 2144676197LLU;

	t98 = (((x6869|x6870)-x6871)<<x6872);

	if (t98 != 29449783269312784LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6965 = 3LL;
	uint8_t x6966 = UINT8_MAX;
	volatile int32_t x6967 = -1;
	int8_t x6968 = 8;
	volatile int64_t t99 = -16543408234LL;

	t99 = (((x6965|x6966)-x6967)<<x6968);

	if (t99 != 65536LL) { NG(); } else { ; }
	
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

