#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x12 = 0U;
uint32_t x49 = UINT32_MAX;
uint32_t t1 = 11942U;
uint16_t x112 = 3U;
int32_t t3 = 728391;
int32_t t4 = -16084;
int64_t x450 = 12163301660600LL;
int64_t x451 = INT64_MIN;
uint16_t x731 = 7U;
int32_t t6 = -250972421;
int32_t x812 = INT32_MAX;
volatile int32_t t7 = 29866974;
uint64_t x819 = 4786LLU;
uint16_t x1045 = 0U;
int32_t t10 = 316;
int64_t x1066 = INT64_MIN;
int8_t x1067 = INT8_MAX;
uint64_t x1110 = 1LLU;
int8_t x1112 = -1;
uint8_t x1215 = 12U;
uint64_t x1216 = UINT64_MAX;
static int32_t x1220 = INT32_MIN;
static volatile uint16_t x1311 = 6U;
static int8_t x1312 = -7;
static volatile int16_t x1369 = INT16_MAX;
uint8_t x1413 = 2U;
int64_t x1437 = INT64_MAX;
int32_t x1438 = -1;
volatile int64_t t19 = INT64_MAX;
int16_t x1527 = INT16_MAX;
int8_t x1550 = 1;
uint8_t x1612 = 7U;
volatile int8_t x1831 = INT8_MIN;
volatile int32_t t27 = -438;
int8_t x1855 = 18;
static int8_t x1934 = -6;
int16_t x1973 = 131;
static volatile int64_t x2031 = INT64_MAX;
volatile uint64_t x2032 = UINT64_MAX;
uint64_t t35 = UINT64_MAX;
static volatile int32_t t36 = -164082219;
uint32_t x2201 = UINT32_MAX;
volatile uint8_t x2378 = 0U;
int32_t t39 = -39340119;
uint8_t x2470 = 1U;
static int8_t x2574 = INT8_MIN;
int32_t x2650 = -2044;
static int32_t x2652 = -2;
int8_t x2800 = INT8_MAX;
int16_t x2804 = INT16_MIN;
uint16_t x2823 = 0U;
int32_t x2824 = -10;
volatile uint16_t x2862 = 1U;
int8_t x2871 = INT8_MAX;
int64_t x2872 = -1LL;
uint16_t x2893 = 15283U;
int64_t x2901 = 3578143539614324570LL;
int64_t t51 = -10803148470LL;
static uint32_t x2914 = 6U;
volatile int32_t t55 = 138027585;
int16_t x3565 = 3420;
int32_t x3566 = 5866523;
volatile int32_t t56 = -2;
uint64_t x3651 = 13682LLU;
volatile int64_t t57 = -13582358668449869LL;
int16_t x3774 = -1;
static int64_t x3850 = INT64_MIN;
int8_t x3860 = -1;
uint16_t x4037 = 3U;
static int32_t t62 = 0;
static int8_t x4130 = INT8_MIN;
int32_t t64 = 154596412;
uint16_t x4300 = 48U;
int32_t t67 = -26;
int32_t t68 = 6;
uint8_t x4693 = 12U;
volatile int16_t x4761 = 4;
static volatile int32_t x4763 = INT32_MIN;
volatile int32_t t73 = 141951;
int8_t x5047 = 11;
static volatile uint8_t x5049 = UINT8_MAX;
volatile int32_t t76 = 76298;
static uint16_t x5121 = UINT16_MAX;
int8_t x5238 = 0;
int8_t x5262 = -1;
volatile uint64_t t79 = 2915878525LLU;
volatile int64_t x5280 = -1LL;
volatile uint64_t t80 = 3239900458LLU;
uint16_t x5319 = 1U;
volatile int8_t x5320 = -1;
uint8_t x5342 = UINT8_MAX;
int64_t x5406 = INT64_MIN;
uint16_t x5408 = 0U;
static int32_t x5429 = 1;
volatile int32_t t86 = -179;
int64_t x5558 = 37LL;
uint16_t x5613 = UINT16_MAX;
int8_t x5615 = INT8_MIN;
volatile int32_t t88 = -2;
static int64_t x5736 = -1LL;
volatile int16_t x5795 = INT16_MIN;
int64_t t92 = 3834876549LL;
volatile uint8_t x5957 = 3U;
int8_t x6122 = -1;
int8_t x6206 = INT8_MIN;
int8_t x6208 = INT8_MIN;
uint8_t x6306 = 2U;
volatile int32_t t99 = 5371944;


void f0(void) {
	int16_t x9 = 817;
	volatile int8_t x10 = -59;
	static uint32_t x11 = 1U;
	volatile int32_t t0 = -3;

	t0 = (x9<<((x10&x11)-x12));

	if (t0 != 1634) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x50 = 142760819009LLU;
	static int16_t x51 = 13;
	volatile uint8_t x52 = 0U;

	t1 = (x49<<((x50&x51)-x52));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x109 = 0;
	uint8_t x110 = 38U;
	uint64_t x111 = 28806LLU;
	volatile int32_t t2 = 59346005;

	t2 = (x109<<((x110&x111)-x112));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x357 = 44U;
	uint8_t x358 = 2U;
	int64_t x359 = 60487LL;
	int8_t x360 = -7;

	t3 = (x357<<((x358&x359)-x360));

	if (t3 != 22528) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x389 = INT8_MAX;
	static volatile uint32_t x390 = 1U;
	int64_t x391 = INT64_MIN;
	volatile int32_t x392 = -1;

	t4 = (x389<<((x390&x391)-x392));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x449 = UINT64_MAX;
	int32_t x452 = -1;
	volatile uint64_t t5 = 64110LLU;

	t5 = (x449<<((x450&x451)-x452));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x729 = 6U;
	volatile int8_t x730 = 7;
	int8_t x732 = -1;

	t6 = (x729<<((x730&x731)-x732));

	if (t6 != 1536) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x809 = INT8_MAX;
	int8_t x810 = -1;
	int32_t x811 = INT32_MAX;

	t7 = (x809<<((x810&x811)-x812));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x817 = UINT32_MAX;
	uint8_t x818 = 0U;
	uint8_t x820 = 0U;
	uint32_t t8 = UINT32_MAX;

	t8 = (x817<<((x818&x819)-x820));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x853 = UINT8_MAX;
	uint32_t x854 = 316U;
	uint16_t x855 = 4744U;
	uint8_t x856 = 1U;
	int32_t t9 = 1675550;

	t9 = (x853<<((x854&x855)-x856));

	if (t9 != 32640) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x1046 = 0LLU;
	uint16_t x1047 = 579U;
	int64_t x1048 = -1LL;

	t10 = (x1045<<((x1046&x1047)-x1048));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1065 = INT8_MAX;
	int8_t x1068 = -1;
	int32_t t11 = 381444;

	t11 = (x1065<<((x1066&x1067)-x1068));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1109 = 172580168996LL;
	static uint64_t x1111 = UINT64_MAX;
	int64_t t12 = 7373978834LL;

	t12 = (x1109<<((x1110&x1111)-x1112));

	if (t12 != 690320675984LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1213 = 14601846U;
	static volatile int64_t x1214 = -1LL;
	uint32_t t13 = 28903779U;

	t13 = (x1213<<((x1214&x1215)-x1216));

	if (t13 != 3654205440U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x1217 = 27924U;
	int8_t x1218 = -1;
	int32_t x1219 = INT32_MIN;
	int32_t t14 = 111;

	t14 = (x1217<<((x1218&x1219)-x1220));

	if (t14 != 27924) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1309 = 130;
	int16_t x1310 = INT16_MIN;
	static volatile int32_t t15 = 7;

	t15 = (x1309<<((x1310&x1311)-x1312));

	if (t15 != 16640) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1321 = UINT8_MAX;
	volatile uint16_t x1322 = 1U;
	int8_t x1323 = -11;
	uint32_t x1324 = UINT32_MAX;
	static int32_t t16 = 117332297;

	t16 = (x1321<<((x1322&x1323)-x1324));

	if (t16 != 1020) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1370 = UINT64_MAX;
	volatile int8_t x1371 = INT8_MIN;
	static int8_t x1372 = INT8_MIN;
	int32_t t17 = -393;

	t17 = (x1369<<((x1370&x1371)-x1372));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1414 = INT8_MAX;
	int16_t x1415 = INT16_MIN;
	uint64_t x1416 = UINT64_MAX;
	int32_t t18 = -620650393;

	t18 = (x1413<<((x1414&x1415)-x1416));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1439 = -1;
	static volatile uint32_t x1440 = UINT32_MAX;

	t19 = (x1437<<((x1438&x1439)-x1440));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x1525 = 0;
	int64_t x1526 = INT64_MIN;
	int8_t x1528 = -14;
	volatile int32_t t20 = -1140;

	t20 = (x1525<<((x1526&x1527)-x1528));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1529 = INT8_MAX;
	static uint64_t x1530 = 20218944407509LLU;
	int8_t x1531 = 5;
	int8_t x1532 = -1;
	int32_t t21 = 7067494;

	t21 = (x1529<<((x1530&x1531)-x1532));

	if (t21 != 8128) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1549 = 4794U;
	int16_t x1551 = INT16_MAX;
	volatile uint32_t x1552 = UINT32_MAX;
	volatile uint32_t t22 = 8548905U;

	t22 = (x1549<<((x1550&x1551)-x1552));

	if (t22 != 19176U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1569 = 0U;
	int8_t x1570 = 5;
	int8_t x1571 = INT8_MIN;
	volatile uint64_t x1572 = UINT64_MAX;
	volatile uint32_t t23 = 12U;

	t23 = (x1569<<((x1570&x1571)-x1572));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1609 = 8LLU;
	uint8_t x1610 = 47U;
	int64_t x1611 = 927LL;
	volatile uint64_t t24 = 1922733668LLU;

	t24 = (x1609<<((x1610&x1611)-x1612));

	if (t24 != 2048LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1661 = 2;
	static int32_t x1662 = -1;
	static uint64_t x1663 = UINT64_MAX;
	int8_t x1664 = -21;
	volatile int32_t t25 = -467494787;

	t25 = (x1661<<((x1662&x1663)-x1664));

	if (t25 != 2097152) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1745 = 284875342408550926LL;
	int16_t x1746 = INT16_MIN;
	uint8_t x1747 = UINT8_MAX;
	int32_t x1748 = 0;
	volatile int64_t t26 = -18354665496LL;

	t26 = (x1745<<((x1746&x1747)-x1748));

	if (t26 != 284875342408550926LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1829 = 1U;
	int64_t x1830 = -1LL;
	int8_t x1832 = INT8_MIN;

	t27 = (x1829<<((x1830&x1831)-x1832));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1853 = 5U;
	static uint8_t x1854 = 23U;
	uint8_t x1856 = 12U;
	int32_t t28 = -29;

	t28 = (x1853<<((x1854&x1855)-x1856));

	if (t28 != 320) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1885 = UINT32_MAX;
	int8_t x1886 = INT8_MAX;
	volatile int32_t x1887 = INT32_MIN;
	int8_t x1888 = -1;
	static volatile uint32_t t29 = 4U;

	t29 = (x1885<<((x1886&x1887)-x1888));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x1893 = 25603LLU;
	uint8_t x1894 = 1U;
	int32_t x1895 = -80125;
	int64_t x1896 = -1LL;
	uint64_t t30 = 19546351LLU;

	t30 = (x1893<<((x1894&x1895)-x1896));

	if (t30 != 102412LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1933 = 1;
	static uint8_t x1935 = 18U;
	uint64_t x1936 = 12LLU;
	int32_t t31 = -1;

	t31 = (x1933<<((x1934&x1935)-x1936));

	if (t31 != 64) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1974 = INT8_MIN;
	uint8_t x1975 = 0U;
	int16_t x1976 = -1;
	static volatile int32_t t32 = -3208650;

	t32 = (x1973<<((x1974&x1975)-x1976));

	if (t32 != 262) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2029 = 10U;
	volatile int64_t x2030 = INT64_MIN;
	static volatile uint32_t t33 = 133916849U;

	t33 = (x2029<<((x2030&x2031)-x2032));

	if (t33 != 20U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2089 = 56528LLU;
	int8_t x2090 = 7;
	uint16_t x2091 = 20U;
	int8_t x2092 = -5;
	static volatile uint64_t t34 = 3793968LLU;

	t34 = (x2089<<((x2090&x2091)-x2092));

	if (t34 != 28942336LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2153 = UINT64_MAX;
	int8_t x2154 = -1;
	volatile int64_t x2155 = -1LL;
	int64_t x2156 = -1LL;

	t35 = (x2153<<((x2154&x2155)-x2156));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2161 = 7234U;
	int8_t x2162 = INT8_MIN;
	volatile uint8_t x2163 = 0U;
	int16_t x2164 = -1;

	t36 = (x2161<<((x2162&x2163)-x2164));

	if (t36 != 14468) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2202 = 445;
	uint64_t x2203 = 1334365218643467LLU;
	volatile int32_t x2204 = 0;
	uint32_t t37 = 30U;

	t37 = (x2201<<((x2202&x2203)-x2204));

	if (t37 != 4294966784U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2261 = 34358035089778LLU;
	static uint16_t x2262 = 69U;
	volatile int32_t x2263 = 1;
	int64_t x2264 = -30LL;
	static uint64_t t38 = 3254307LLU;

	t38 = (x2261<<((x2262&x2263)-x2264));

	if (t38 != 14788981943970037760LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2377 = 2;
	static int64_t x2379 = INT64_MIN;
	int16_t x2380 = -1;

	t39 = (x2377<<((x2378&x2379)-x2380));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x2469 = 200;
	int8_t x2471 = -2;
	int32_t x2472 = -1;
	volatile int32_t t40 = -3161;

	t40 = (x2469<<((x2470&x2471)-x2472));

	if (t40 != 400) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2573 = 3;
	int64_t x2575 = -1LL;
	int8_t x2576 = INT8_MIN;
	int32_t t41 = 415501;

	t41 = (x2573<<((x2574&x2575)-x2576));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2589 = INT16_MAX;
	int8_t x2590 = INT8_MIN;
	volatile uint64_t x2591 = UINT64_MAX;
	int8_t x2592 = INT8_MIN;
	int32_t t42 = 119562767;

	t42 = (x2589<<((x2590&x2591)-x2592));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2649 = 98950052627554468LL;
	uint64_t x2651 = 36LLU;
	int64_t t43 = 919027196979LL;

	t43 = (x2649<<((x2650&x2651)-x2652));

	if (t43 != 6332803368163485952LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2789 = INT8_MAX;
	int32_t x2790 = INT32_MIN;
	volatile uint16_t x2791 = UINT16_MAX;
	int64_t x2792 = -1LL;
	int32_t t44 = -27818468;

	t44 = (x2789<<((x2790&x2791)-x2792));

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2797 = 87515;
	static volatile int32_t x2798 = -1;
	int8_t x2799 = INT8_MAX;
	int32_t t45 = 313;

	t45 = (x2797<<((x2798&x2799)-x2800));

	if (t45 != 87515) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2801 = 229959359U;
	int16_t x2802 = INT16_MIN;
	int16_t x2803 = -1;
	static uint32_t t46 = 177U;

	t46 = (x2801<<((x2802&x2803)-x2804));

	if (t46 != 229959359U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2821 = 0;
	int64_t x2822 = -1LL;
	int32_t t47 = 9958114;

	t47 = (x2821<<((x2822&x2823)-x2824));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2861 = UINT64_MAX;
	uint8_t x2863 = 0U;
	volatile int64_t x2864 = -1LL;
	static volatile uint64_t t48 = 1198491540943LLU;

	t48 = (x2861<<((x2862&x2863)-x2864));

	if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2869 = UINT16_MAX;
	uint64_t x2870 = 140LLU;
	static volatile int32_t t49 = -893266;

	t49 = (x2869<<((x2870&x2871)-x2872));

	if (t49 != 536862720) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2894 = INT8_MIN;
	static int8_t x2895 = INT8_MAX;
	int8_t x2896 = -1;
	static volatile int32_t t50 = 177589035;

	t50 = (x2893<<((x2894&x2895)-x2896));

	if (t50 != 30566) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x2902 = 4U;
	int16_t x2903 = INT16_MIN;
	volatile uint64_t x2904 = UINT64_MAX;

	t51 = (x2901<<((x2902&x2903)-x2904));

	if (t51 != 7156287079228649140LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2913 = INT16_MAX;
	int16_t x2915 = 147;
	static uint8_t x2916 = 0U;
	int32_t t52 = 184540;

	t52 = (x2913<<((x2914&x2915)-x2916));

	if (t52 != 131068) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3165 = UINT16_MAX;
	uint8_t x3166 = 80U;
	int16_t x3167 = INT16_MIN;
	uint64_t x3168 = UINT64_MAX;
	volatile int32_t t53 = 248469;

	t53 = (x3165<<((x3166&x3167)-x3168));

	if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3213 = 22786U;
	static int8_t x3214 = 1;
	static int32_t x3215 = INT32_MAX;
	int16_t x3216 = 0;
	static int32_t t54 = 1;

	t54 = (x3213<<((x3214&x3215)-x3216));

	if (t54 != 45572) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3501 = 39U;
	int8_t x3502 = INT8_MIN;
	int16_t x3503 = INT16_MIN;
	int16_t x3504 = INT16_MIN;

	t55 = (x3501<<((x3502&x3503)-x3504));

	if (t55 != 39) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3567 = INT32_MIN;
	int16_t x3568 = -1;

	t56 = (x3565<<((x3566&x3567)-x3568));

	if (t56 != 6840) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3649 = 1LL;
	int8_t x3650 = 4;
	static int8_t x3652 = -1;

	t57 = (x3649<<((x3650&x3651)-x3652));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3773 = 6076;
	int16_t x3775 = 8;
	static uint32_t x3776 = UINT32_MAX;
	volatile int32_t t58 = 8663;

	t58 = (x3773<<((x3774&x3775)-x3776));

	if (t58 != 3110912) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3789 = 195763756575586664LLU;
	int16_t x3790 = 1;
	static int8_t x3791 = INT8_MIN;
	int16_t x3792 = 0;
	uint64_t t59 = 7057242806LLU;

	t59 = (x3789<<((x3790&x3791)-x3792));

	if (t59 != 195763756575586664LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3849 = 2879;
	static volatile int64_t x3851 = -158857847LL;
	int64_t x3852 = INT64_MIN;
	int32_t t60 = -193961;

	t60 = (x3849<<((x3850&x3851)-x3852));

	if (t60 != 2879) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3857 = 1LLU;
	static uint16_t x3858 = 13U;
	volatile int64_t x3859 = -1LL;
	static volatile uint64_t t61 = 13547828781LLU;

	t61 = (x3857<<((x3858&x3859)-x3860));

	if (t61 != 16384LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x4038 = 0LL;
	uint8_t x4039 = UINT8_MAX;
	uint8_t x4040 = 0U;

	t62 = (x4037<<((x4038&x4039)-x4040));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x4129 = 209405178961366101LLU;
	int8_t x4131 = INT8_MAX;
	static uint64_t x4132 = UINT64_MAX;
	uint64_t t63 = 3827248LLU;

	t63 = (x4129<<((x4130&x4131)-x4132));

	if (t63 != 418810357922732202LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x4149 = 1;
	static int32_t x4150 = -41603;
	volatile int64_t x4151 = INT64_MIN;
	volatile int64_t x4152 = INT64_MIN;

	t64 = (x4149<<((x4150&x4151)-x4152));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4221 = UINT32_MAX;
	volatile int8_t x4222 = INT8_MIN;
	int32_t x4223 = -1;
	int8_t x4224 = INT8_MIN;
	static volatile uint32_t t65 = UINT32_MAX;

	t65 = (x4221<<((x4222&x4223)-x4224));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4297 = 484U;
	static uint32_t x4298 = 180U;
	static volatile int8_t x4299 = INT8_MAX;
	static uint32_t t66 = 33234798U;

	t66 = (x4297<<((x4298&x4299)-x4300));

	if (t66 != 7744U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4337 = 3;
	int32_t x4338 = 10568269;
	int64_t x4339 = INT64_MIN;
	static uint64_t x4340 = UINT64_MAX;

	t67 = (x4337<<((x4338&x4339)-x4340));

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4489 = 3U;
	uint8_t x4490 = 3U;
	volatile uint32_t x4491 = 17637160U;
	volatile int64_t x4492 = -1LL;

	t68 = (x4489<<((x4490&x4491)-x4492));

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4617 = UINT8_MAX;
	int16_t x4618 = 24;
	int8_t x4619 = 52;
	int32_t x4620 = 1;
	int32_t t69 = -1;

	t69 = (x4617<<((x4618&x4619)-x4620));

	if (t69 != 8355840) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4649 = INT32_MAX;
	int64_t x4650 = INT64_MIN;
	int32_t x4651 = -1;
	int64_t x4652 = INT64_MIN;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x4649<<((x4650&x4651)-x4652));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x4694 = INT16_MAX;
	static volatile int8_t x4695 = INT8_MAX;
	int8_t x4696 = INT8_MAX;
	int32_t t71 = 44911260;

	t71 = (x4693<<((x4694&x4695)-x4696));

	if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4762 = INT8_MIN;
	int32_t x4764 = INT32_MIN;
	int32_t t72 = 5577;

	t72 = (x4761<<((x4762&x4763)-x4764));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4965 = 12U;
	uint64_t x4966 = 21623LLU;
	int32_t x4967 = 0;
	volatile int16_t x4968 = 0;

	t73 = (x4965<<((x4966&x4967)-x4968));

	if (t73 != 12) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x5021 = 10;
	volatile int8_t x5022 = INT8_MIN;
	int32_t x5023 = INT32_MIN;
	int32_t x5024 = INT32_MIN;
	volatile int32_t t74 = -71367837;

	t74 = (x5021<<((x5022&x5023)-x5024));

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5045 = 4552879371LL;
	static int32_t x5046 = INT32_MAX;
	int8_t x5048 = -1;
	static volatile int64_t t75 = 2LL;

	t75 = (x5045<<((x5046&x5047)-x5048));

	if (t75 != 18648593903616LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x5050 = INT8_MAX;
	volatile uint8_t x5051 = 21U;
	static int8_t x5052 = -1;

	t76 = (x5049<<((x5050&x5051)-x5052));

	if (t76 != 1069547520) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5122 = 2U;
	uint8_t x5123 = 27U;
	int32_t x5124 = -1;
	volatile int32_t t77 = -507796193;

	t77 = (x5121<<((x5122&x5123)-x5124));

	if (t77 != 524280) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x5237 = 8604889429277LL;
	static uint8_t x5239 = 30U;
	uint8_t x5240 = 0U;
	int64_t t78 = -660224701LL;

	t78 = (x5237<<((x5238&x5239)-x5240));

	if (t78 != 8604889429277LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x5261 = UINT64_MAX;
	uint8_t x5263 = 2U;
	int8_t x5264 = -28;

	t79 = (x5261<<((x5262&x5263)-x5264));

	if (t79 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5277 = 65LLU;
	volatile int8_t x5278 = INT8_MAX;
	uint8_t x5279 = 0U;

	t80 = (x5277<<((x5278&x5279)-x5280));

	if (t80 != 130LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5285 = INT8_MAX;
	int32_t x5286 = INT32_MIN;
	volatile int16_t x5287 = -1;
	int32_t x5288 = INT32_MIN;
	volatile int32_t t81 = 1809207;

	t81 = (x5285<<((x5286&x5287)-x5288));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5317 = 9U;
	static int32_t x5318 = 413158;
	volatile int32_t t82 = 0;

	t82 = (x5317<<((x5318&x5319)-x5320));

	if (t82 != 18) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5341 = 16;
	uint8_t x5343 = 3U;
	int16_t x5344 = 0;
	static int32_t t83 = 4873572;

	t83 = (x5341<<((x5342&x5343)-x5344));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5405 = 2U;
	uint32_t x5407 = 208267203U;
	volatile int32_t t84 = 2;

	t84 = (x5405<<((x5406&x5407)-x5408));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5430 = 143U;
	uint16_t x5431 = 614U;
	static int16_t x5432 = -6;
	volatile int32_t t85 = 254276546;

	t85 = (x5429<<((x5430&x5431)-x5432));

	if (t85 != 4096) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x5457 = INT8_MAX;
	int16_t x5458 = INT16_MAX;
	int32_t x5459 = INT32_MIN;
	int16_t x5460 = -1;

	t86 = (x5457<<((x5458&x5459)-x5460));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5557 = UINT64_MAX;
	uint64_t x5559 = 2235LLU;
	int8_t x5560 = 26;
	volatile uint64_t t87 = 14LLU;

	t87 = (x5557<<((x5558&x5559)-x5560));

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x5614 = -66;
	volatile int8_t x5616 = INT8_MIN;

	t88 = (x5613<<((x5614&x5615)-x5616));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5733 = 711U;
	volatile int16_t x5734 = INT16_MAX;
	int32_t x5735 = INT32_MIN;
	int32_t t89 = 108;

	t89 = (x5733<<((x5734&x5735)-x5736));

	if (t89 != 1422) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5745 = 24328LLU;
	int16_t x5746 = -1;
	static int32_t x5747 = -1;
	int8_t x5748 = -14;
	volatile uint64_t t90 = 7324820LLU;

	t90 = (x5745<<((x5746&x5747)-x5748));

	if (t90 != 199294976LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5793 = 12;
	int32_t x5794 = 182;
	int8_t x5796 = -1;
	static volatile int32_t t91 = -567;

	t91 = (x5793<<((x5794&x5795)-x5796));

	if (t91 != 24) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5829 = 278132709240377086LL;
	int32_t x5830 = INT32_MIN;
	uint8_t x5831 = UINT8_MAX;
	int64_t x5832 = -1LL;

	t92 = (x5829<<((x5830&x5831)-x5832));

	if (t92 != 556265418480754172LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5958 = 3U;
	uint8_t x5959 = 54U;
	int8_t x5960 = -1;
	int32_t t93 = -3133;

	t93 = (x5957<<((x5958&x5959)-x5960));

	if (t93 != 24) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6089 = UINT32_MAX;
	static uint64_t x6090 = 142LLU;
	volatile uint32_t x6091 = 76U;
	int32_t x6092 = -1;
	uint32_t t94 = 57476U;

	t94 = (x6089<<((x6090&x6091)-x6092));

	if (t94 != 4294959104U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x6121 = 1U;
	static int8_t x6123 = -1;
	int8_t x6124 = -1;
	static int32_t t95 = -22;

	t95 = (x6121<<((x6122&x6123)-x6124));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x6205 = INT64_MAX;
	uint64_t x6207 = UINT64_MAX;
	int64_t t96 = INT64_MAX;

	t96 = (x6205<<((x6206&x6207)-x6208));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6273 = 187U;
	volatile uint16_t x6274 = 2135U;
	static volatile int64_t x6275 = INT64_MIN;
	static int64_t x6276 = -1LL;
	static volatile uint32_t t97 = 1U;

	t97 = (x6273<<((x6274&x6275)-x6276));

	if (t97 != 374U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x6305 = 9402420609LLU;
	volatile int8_t x6307 = INT8_MAX;
	int32_t x6308 = -1;
	uint64_t t98 = 464107321177889567LLU;

	t98 = (x6305<<((x6306&x6307)-x6308));

	if (t98 != 75219364872LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x6485 = 12U;
	int16_t x6486 = -1;
	int16_t x6487 = 0;
	int16_t x6488 = -1;

	t99 = (x6485<<((x6486&x6487)-x6488));

	if (t99 != 24) { NG(); } else { ; }
	
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

