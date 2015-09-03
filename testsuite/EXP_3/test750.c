#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x314 = 3U;
int8_t x341 = INT8_MAX;
static uint64_t x456 = UINT64_MAX;
uint32_t x831 = 7098U;
uint8_t x1018 = 3U;
int64_t x1097 = INT64_MAX;
volatile int32_t t19 = 1;
uint32_t x1333 = 31667580U;
volatile uint16_t x1334 = 0U;
int32_t t21 = 0;
uint8_t x1393 = 12U;
uint32_t x1394 = 25U;
int32_t x1416 = -1;
int8_t x1430 = 1;
uint16_t x1589 = 21U;
int16_t x1635 = -1;
int32_t t28 = -711235025;
static volatile int8_t x1660 = 5;
volatile int32_t t30 = 0;
static int64_t x1671 = INT64_MIN;
uint64_t x1684 = UINT64_MAX;
uint8_t x1845 = UINT8_MAX;
int32_t t34 = 544562393;
int32_t x1868 = INT32_MIN;
static int32_t t35 = 2545044;
static int16_t x1995 = -1;
volatile int8_t x2144 = 47;
int16_t x2379 = INT16_MIN;
int32_t x2478 = 15;
static uint32_t x2536 = 1U;
static volatile int32_t t42 = -2181371;
static int8_t x2635 = INT8_MIN;
int16_t x2636 = INT16_MAX;
int64_t x2724 = -6670487337043564LL;
int8_t x2750 = 0;
volatile int32_t t46 = 2937;
int16_t x2869 = 0;
int32_t t51 = 33003275;
uint64_t x2949 = 31378667464LLU;
static int8_t x2952 = 11;
volatile int32_t t52 = 0;
int32_t x3126 = 0;
int16_t x3127 = -1;
int64_t x3190 = 1LL;
static int16_t x3191 = INT16_MIN;
uint8_t x3505 = 13U;
int64_t x3823 = INT64_MAX;
uint32_t x4070 = 1U;
volatile int8_t x4072 = -22;
int16_t x4144 = INT16_MIN;
int8_t x4230 = 0;
volatile uint16_t x4231 = 47U;
int16_t x4277 = 368;
int32_t x4351 = INT32_MAX;
volatile int8_t x4361 = INT8_MAX;
int32_t t72 = -5;
volatile uint8_t x4381 = 58U;
uint16_t x4510 = 2U;
static uint64_t x4553 = UINT64_MAX;
int8_t x4577 = INT8_MAX;
uint32_t x4860 = 888097U;
uint64_t x4992 = 84LLU;
volatile uint16_t x5346 = 8U;
volatile int32_t t84 = -13847;
int8_t x5759 = -1;
uint8_t x5794 = 18U;
int8_t x5832 = INT8_MIN;
int8_t x5922 = 5;
int32_t x5923 = 10415497;
uint64_t x5924 = UINT64_MAX;
int64_t x5971 = 511585185982416LL;
volatile uint32_t x5972 = 3642U;
uint64_t x5977 = UINT64_MAX;
uint8_t x5980 = UINT8_MAX;
static int32_t t95 = -15968;
static uint8_t x6062 = 16U;
int64_t x6064 = INT64_MIN;
static volatile int32_t t97 = -14;
int8_t x6167 = INT8_MIN;


void f0(void) {
	uint64_t x9 = UINT64_MAX;
	static int8_t x10 = 0;
	volatile int16_t x11 = 2;
	static volatile int16_t x12 = INT16_MAX;
	int32_t t0 = 929;

	t0 = ((x9<<x10)<(x11%x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x133 = 438643403U;
	static uint8_t x134 = 1U;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	int32_t t1 = -31;

	t1 = ((x133<<x134)<(x135%x136));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 15U;
	static volatile uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t2 = 1217879;

	t2 = ((x213<<x214)<(x215%x216));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x313 = INT8_MAX;
	uint32_t x315 = 7640U;
	int32_t x316 = -1;
	int32_t t3 = 58000978;

	t3 = ((x313<<x314)<(x315%x316));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x342 = 23U;
	static uint16_t x343 = 197U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t4 = -65;

	t4 = ((x341<<x342)<(x343%x344));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = 49U;
	int64_t x455 = -1LL;
	int32_t t5 = -1162665;

	t5 = ((x453<<x454)<(x455%x456));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x573 = UINT8_MAX;
	uint16_t x574 = 20U;
	int16_t x575 = INT16_MIN;
	volatile uint16_t x576 = 65U;
	volatile int32_t t6 = 3;

	t6 = ((x573<<x574)<(x575%x576));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x705 = 483165741LLU;
	int8_t x706 = 46;
	int64_t x707 = 761822736582LL;
	uint64_t x708 = 53LLU;
	int32_t t7 = 1;

	t7 = ((x705<<x706)<(x707%x708));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x829 = 61991201LL;
	uint8_t x830 = 29U;
	uint32_t x832 = UINT32_MAX;
	static int32_t t8 = -7;

	t8 = ((x829<<x830)<(x831%x832));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x889 = UINT64_MAX;
	static int16_t x890 = 23;
	volatile uint8_t x891 = 3U;
	static int64_t x892 = INT64_MIN;
	int32_t t9 = -93;

	t9 = ((x889<<x890)<(x891%x892));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x913 = 21U;
	int16_t x914 = 0;
	uint16_t x915 = 24U;
	int8_t x916 = INT8_MAX;
	static int32_t t10 = 263;

	t10 = ((x913<<x914)<(x915%x916));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x981 = UINT32_MAX;
	int8_t x982 = 0;
	int8_t x983 = -1;
	uint16_t x984 = 16889U;
	static volatile int32_t t11 = 309;

	t11 = ((x981<<x982)<(x983%x984));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x1017 = 178LLU;
	volatile int8_t x1019 = 36;
	int8_t x1020 = -1;
	int32_t t12 = 8294974;

	t12 = ((x1017<<x1018)<(x1019%x1020));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x1021 = 1876155LL;
	uint32_t x1022 = 14U;
	int8_t x1023 = 2;
	uint64_t x1024 = 80636958769195LLU;
	int32_t t13 = -9007;

	t13 = ((x1021<<x1022)<(x1023%x1024));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x1033 = 1;
	static int16_t x1034 = 1;
	uint8_t x1035 = UINT8_MAX;
	int32_t x1036 = INT32_MIN;
	volatile int32_t t14 = 3580;

	t14 = ((x1033<<x1034)<(x1035%x1036));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1098 = 0;
	int16_t x1099 = -1;
	int32_t x1100 = INT32_MIN;
	volatile int32_t t15 = -3;

	t15 = ((x1097<<x1098)<(x1099%x1100));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1121 = 157038504965902327LLU;
	static uint8_t x1122 = 11U;
	uint16_t x1123 = 63U;
	int32_t x1124 = INT32_MIN;
	int32_t t16 = -194846384;

	t16 = ((x1121<<x1122)<(x1123%x1124));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x1137 = 92;
	uint8_t x1138 = 11U;
	volatile int16_t x1139 = -143;
	static uint16_t x1140 = UINT16_MAX;
	volatile int32_t t17 = -298;

	t17 = ((x1137<<x1138)<(x1139%x1140));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1245 = INT32_MAX;
	uint8_t x1246 = 0U;
	int8_t x1247 = INT8_MIN;
	int8_t x1248 = INT8_MIN;
	volatile int32_t t18 = 7801;

	t18 = ((x1245<<x1246)<(x1247%x1248));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1269 = 62U;
	int8_t x1270 = 1;
	uint32_t x1271 = UINT32_MAX;
	int8_t x1272 = INT8_MIN;

	t19 = ((x1269<<x1270)<(x1271%x1272));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1335 = 6U;
	uint8_t x1336 = UINT8_MAX;
	volatile int32_t t20 = 94;

	t20 = ((x1333<<x1334)<(x1335%x1336));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1365 = 7;
	int32_t x1366 = 11;
	int64_t x1367 = INT64_MIN;
	uint16_t x1368 = 51U;

	t21 = ((x1365<<x1366)<(x1367%x1368));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1395 = 364;
	int32_t x1396 = INT32_MIN;
	int32_t t22 = 0;

	t22 = ((x1393<<x1394)<(x1395%x1396));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1413 = UINT8_MAX;
	uint32_t x1414 = 0U;
	int16_t x1415 = -35;
	int32_t t23 = -130017370;

	t23 = ((x1413<<x1414)<(x1415%x1416));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1429 = INT8_MAX;
	static volatile int32_t x1431 = 7;
	uint64_t x1432 = 13162878479LLU;
	volatile int32_t t24 = 3062;

	t24 = ((x1429<<x1430)<(x1431%x1432));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1525 = UINT64_MAX;
	uint8_t x1526 = 0U;
	uint8_t x1527 = UINT8_MAX;
	int64_t x1528 = INT64_MIN;
	int32_t t25 = -5295714;

	t25 = ((x1525<<x1526)<(x1527%x1528));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1585 = UINT64_MAX;
	int16_t x1586 = 41;
	int32_t x1587 = INT32_MAX;
	int8_t x1588 = INT8_MIN;
	int32_t t26 = 7653;

	t26 = ((x1585<<x1586)<(x1587%x1588));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1590 = 2;
	int32_t x1591 = INT32_MIN;
	volatile int64_t x1592 = INT64_MIN;
	volatile int32_t t27 = 19920;

	t27 = ((x1589<<x1590)<(x1591%x1592));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1633 = 14371LLU;
	int64_t x1634 = 35LL;
	int16_t x1636 = -1;

	t28 = ((x1633<<x1634)<(x1635%x1636));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1657 = UINT16_MAX;
	uint16_t x1658 = 2U;
	uint64_t x1659 = UINT64_MAX;
	int32_t t29 = 494;

	t29 = ((x1657<<x1658)<(x1659%x1660));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1665 = 3275816U;
	volatile uint32_t x1666 = 6U;
	int64_t x1667 = -1LL;
	volatile int8_t x1668 = -3;

	t30 = ((x1665<<x1666)<(x1667%x1668));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1669 = UINT8_MAX;
	uint8_t x1670 = 5U;
	int16_t x1672 = INT16_MAX;
	volatile int32_t t31 = 716242;

	t31 = ((x1669<<x1670)<(x1671%x1672));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1681 = 111U;
	uint8_t x1682 = 5U;
	volatile uint8_t x1683 = UINT8_MAX;
	static volatile int32_t t32 = -1702;

	t32 = ((x1681<<x1682)<(x1683%x1684));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1805 = 7097411214092LL;
	int16_t x1806 = 0;
	volatile int8_t x1807 = 40;
	static uint16_t x1808 = 67U;
	int32_t t33 = 120792002;

	t33 = ((x1805<<x1806)<(x1807%x1808));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1846 = 5;
	volatile uint16_t x1847 = UINT16_MAX;
	int16_t x1848 = INT16_MAX;

	t34 = ((x1845<<x1846)<(x1847%x1848));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1865 = 13053323819692909LLU;
	static volatile uint16_t x1866 = 1U;
	static volatile int32_t x1867 = 5;

	t35 = ((x1865<<x1866)<(x1867%x1868));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x1961 = UINT16_MAX;
	int8_t x1962 = 2;
	uint64_t x1963 = 8970087223LLU;
	volatile uint8_t x1964 = 3U;
	static int32_t t36 = -118637;

	t36 = ((x1961<<x1962)<(x1963%x1964));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1993 = UINT64_MAX;
	static uint8_t x1994 = 13U;
	static volatile int32_t x1996 = -1;
	int32_t t37 = -5488;

	t37 = ((x1993<<x1994)<(x1995%x1996));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2141 = 5729U;
	uint8_t x2142 = 6U;
	int16_t x2143 = INT16_MAX;
	volatile int32_t t38 = 1;

	t38 = ((x2141<<x2142)<(x2143%x2144));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2377 = UINT16_MAX;
	uint8_t x2378 = 2U;
	static int64_t x2380 = -7751664161051674LL;
	int32_t t39 = -964070;

	t39 = ((x2377<<x2378)<(x2379%x2380));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2425 = 379U;
	int8_t x2426 = 4;
	int16_t x2427 = INT16_MIN;
	uint64_t x2428 = 1624224465268266LLU;
	int32_t t40 = 18931;

	t40 = ((x2425<<x2426)<(x2427%x2428));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2477 = 151;
	volatile int64_t x2479 = -13626353LL;
	uint16_t x2480 = 2891U;
	int32_t t41 = 1853;

	t41 = ((x2477<<x2478)<(x2479%x2480));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2533 = INT16_MAX;
	static volatile uint16_t x2534 = 5U;
	int64_t x2535 = 2216631562180LL;

	t42 = ((x2533<<x2534)<(x2535%x2536));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2613 = INT8_MAX;
	int16_t x2614 = 0;
	int16_t x2615 = -13;
	static int16_t x2616 = INT16_MIN;
	volatile int32_t t43 = 15091815;

	t43 = ((x2613<<x2614)<(x2615%x2616));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2633 = 797;
	int8_t x2634 = 1;
	volatile int32_t t44 = -876;

	t44 = ((x2633<<x2634)<(x2635%x2636));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2721 = 10113349U;
	int8_t x2722 = 2;
	uint64_t x2723 = UINT64_MAX;
	int32_t t45 = -72449;

	t45 = ((x2721<<x2722)<(x2723%x2724));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x2749 = 7975U;
	int8_t x2751 = INT8_MAX;
	int64_t x2752 = 2236562429895LL;

	t46 = ((x2749<<x2750)<(x2751%x2752));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2809 = UINT8_MAX;
	static int64_t x2810 = 2LL;
	int8_t x2811 = -33;
	int32_t x2812 = 22265;
	int32_t t47 = -183693642;

	t47 = ((x2809<<x2810)<(x2811%x2812));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2870 = 0;
	int8_t x2871 = -8;
	static int16_t x2872 = INT16_MIN;
	int32_t t48 = -1107315;

	t48 = ((x2869<<x2870)<(x2871%x2872));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2925 = UINT64_MAX;
	uint8_t x2926 = 0U;
	uint8_t x2927 = 1U;
	static int8_t x2928 = INT8_MIN;
	volatile int32_t t49 = 0;

	t49 = ((x2925<<x2926)<(x2927%x2928));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2937 = 848U;
	uint8_t x2938 = 14U;
	static int8_t x2939 = 24;
	int16_t x2940 = -280;
	volatile int32_t t50 = 47;

	t50 = ((x2937<<x2938)<(x2939%x2940));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2941 = 130727;
	volatile uint16_t x2942 = 0U;
	static uint32_t x2943 = UINT32_MAX;
	static uint8_t x2944 = 6U;

	t51 = ((x2941<<x2942)<(x2943%x2944));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2950 = 1;
	static int32_t x2951 = 154;

	t52 = ((x2949<<x2950)<(x2951%x2952));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2973 = 206U;
	uint64_t x2974 = 12LLU;
	int16_t x2975 = 3407;
	int8_t x2976 = 1;
	int32_t t53 = 696886556;

	t53 = ((x2973<<x2974)<(x2975%x2976));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x3125 = INT64_MAX;
	int16_t x3128 = INT16_MIN;
	int32_t t54 = 3095;

	t54 = ((x3125<<x3126)<(x3127%x3128));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3189 = INT8_MAX;
	static int64_t x3192 = -285LL;
	volatile int32_t t55 = 749923948;

	t55 = ((x3189<<x3190)<(x3191%x3192));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3241 = 88;
	static uint32_t x3242 = 13U;
	int16_t x3243 = -49;
	volatile uint8_t x3244 = UINT8_MAX;
	volatile int32_t t56 = -358;

	t56 = ((x3241<<x3242)<(x3243%x3244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3333 = UINT64_MAX;
	static uint32_t x3334 = 3U;
	uint32_t x3335 = 1U;
	static int32_t x3336 = 572;
	static volatile int32_t t57 = -2190;

	t57 = ((x3333<<x3334)<(x3335%x3336));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3445 = INT64_MAX;
	volatile int8_t x3446 = 0;
	volatile uint8_t x3447 = UINT8_MAX;
	uint16_t x3448 = 745U;
	static int32_t t58 = -230324093;

	t58 = ((x3445<<x3446)<(x3447%x3448));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3457 = 133661298U;
	uint8_t x3458 = 13U;
	int64_t x3459 = INT64_MIN;
	int8_t x3460 = -1;
	volatile int32_t t59 = 1011921;

	t59 = ((x3457<<x3458)<(x3459%x3460));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3506 = 17;
	static uint32_t x3507 = 2U;
	uint32_t x3508 = 28983884U;
	int32_t t60 = 1;

	t60 = ((x3505<<x3506)<(x3507%x3508));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3657 = 1;
	volatile int8_t x3658 = 1;
	static int8_t x3659 = INT8_MAX;
	int8_t x3660 = INT8_MIN;
	static volatile int32_t t61 = 1;

	t61 = ((x3657<<x3658)<(x3659%x3660));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3741 = 35083713220LLU;
	int8_t x3742 = 9;
	uint64_t x3743 = 2224467777200034368LLU;
	int8_t x3744 = INT8_MIN;
	int32_t t62 = 1046616;

	t62 = ((x3741<<x3742)<(x3743%x3744));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3821 = 2U;
	volatile uint32_t x3822 = 1U;
	volatile int8_t x3824 = INT8_MIN;
	int32_t t63 = 12;

	t63 = ((x3821<<x3822)<(x3823%x3824));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x4053 = 1468;
	int8_t x4054 = 11;
	uint8_t x4055 = 59U;
	volatile uint64_t x4056 = 15641614012325LLU;
	volatile int32_t t64 = -1;

	t64 = ((x4053<<x4054)<(x4055%x4056));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x4069 = INT16_MAX;
	static int32_t x4071 = -1;
	volatile int32_t t65 = 6718498;

	t65 = ((x4069<<x4070)<(x4071%x4072));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4085 = UINT64_MAX;
	volatile uint16_t x4086 = 9U;
	int64_t x4087 = INT64_MAX;
	uint32_t x4088 = UINT32_MAX;
	volatile int32_t t66 = 34060788;

	t66 = ((x4085<<x4086)<(x4087%x4088));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x4141 = 4U;
	int8_t x4142 = 0;
	int32_t x4143 = -1;
	volatile int32_t t67 = 15891;

	t67 = ((x4141<<x4142)<(x4143%x4144));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x4229 = 6U;
	int16_t x4232 = INT16_MIN;
	static int32_t t68 = 10511;

	t68 = ((x4229<<x4230)<(x4231%x4232));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x4278 = 0U;
	uint16_t x4279 = 0U;
	uint8_t x4280 = UINT8_MAX;
	volatile int32_t t69 = -453114;

	t69 = ((x4277<<x4278)<(x4279%x4280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4341 = 3;
	int16_t x4342 = 15;
	volatile uint8_t x4343 = UINT8_MAX;
	uint64_t x4344 = UINT64_MAX;
	int32_t t70 = 719056540;

	t70 = ((x4341<<x4342)<(x4343%x4344));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4349 = 1;
	uint8_t x4350 = 3U;
	static int32_t x4352 = INT32_MIN;
	volatile int32_t t71 = -558952212;

	t71 = ((x4349<<x4350)<(x4351%x4352));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4362 = 17;
	int8_t x4363 = -21;
	uint16_t x4364 = 15U;

	t72 = ((x4361<<x4362)<(x4363%x4364));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4382 = 15U;
	int8_t x4383 = INT8_MIN;
	uint64_t x4384 = 7LLU;
	volatile int32_t t73 = 186128;

	t73 = ((x4381<<x4382)<(x4383%x4384));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4473 = 243376968U;
	uint8_t x4474 = 0U;
	uint64_t x4475 = 61159LLU;
	static int16_t x4476 = INT16_MAX;
	static int32_t t74 = -34;

	t74 = ((x4473<<x4474)<(x4475%x4476));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4509 = UINT8_MAX;
	volatile int8_t x4511 = -1;
	int32_t x4512 = INT32_MIN;
	volatile int32_t t75 = -12106833;

	t75 = ((x4509<<x4510)<(x4511%x4512));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4554 = 6;
	int8_t x4555 = 18;
	int64_t x4556 = -127411685412924LL;
	int32_t t76 = 248676;

	t76 = ((x4553<<x4554)<(x4555%x4556));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4569 = 0;
	int32_t x4570 = 4;
	int8_t x4571 = -1;
	volatile uint32_t x4572 = UINT32_MAX;
	int32_t t77 = 1013670;

	t77 = ((x4569<<x4570)<(x4571%x4572));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4578 = 16;
	int32_t x4579 = INT32_MIN;
	int32_t x4580 = -1;
	int32_t t78 = 6;

	t78 = ((x4577<<x4578)<(x4579%x4580));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4693 = 7598807910869210LL;
	volatile int8_t x4694 = 4;
	static int8_t x4695 = -1;
	static int64_t x4696 = INT64_MIN;
	int32_t t79 = -45828627;

	t79 = ((x4693<<x4694)<(x4695%x4696));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x4857 = 3;
	volatile uint64_t x4858 = 3LLU;
	int32_t x4859 = INT32_MAX;
	volatile int32_t t80 = -15;

	t80 = ((x4857<<x4858)<(x4859%x4860));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4961 = 175846012132856123LL;
	volatile uint8_t x4962 = 3U;
	int64_t x4963 = INT64_MAX;
	uint32_t x4964 = UINT32_MAX;
	volatile int32_t t81 = 52;

	t81 = ((x4961<<x4962)<(x4963%x4964));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4989 = 1;
	static uint32_t x4990 = 2U;
	static int16_t x4991 = 4237;
	volatile int32_t t82 = -508;

	t82 = ((x4989<<x4990)<(x4991%x4992));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5145 = UINT32_MAX;
	static int8_t x5146 = 9;
	int32_t x5147 = INT32_MAX;
	int8_t x5148 = INT8_MAX;
	static int32_t t83 = -30;

	t83 = ((x5145<<x5146)<(x5147%x5148));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5345 = 0U;
	int8_t x5347 = INT8_MIN;
	int32_t x5348 = INT32_MIN;

	t84 = ((x5345<<x5346)<(x5347%x5348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5469 = 1;
	uint8_t x5470 = 9U;
	int32_t x5471 = INT32_MIN;
	int8_t x5472 = INT8_MAX;
	int32_t t85 = -87;

	t85 = ((x5469<<x5470)<(x5471%x5472));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5585 = 1141054734139LLU;
	volatile uint8_t x5586 = 0U;
	uint64_t x5587 = UINT64_MAX;
	uint8_t x5588 = UINT8_MAX;
	static volatile int32_t t86 = 206226347;

	t86 = ((x5585<<x5586)<(x5587%x5588));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5589 = 633808950422896LLU;
	volatile uint8_t x5590 = 44U;
	uint32_t x5591 = 1628016U;
	uint64_t x5592 = 145539064541LLU;
	volatile int32_t t87 = 32464;

	t87 = ((x5589<<x5590)<(x5591%x5592));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5605 = 0U;
	uint8_t x5606 = 1U;
	static int8_t x5607 = INT8_MAX;
	static uint8_t x5608 = UINT8_MAX;
	volatile int32_t t88 = 2;

	t88 = ((x5605<<x5606)<(x5607%x5608));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5757 = 0U;
	int8_t x5758 = 17;
	int8_t x5760 = 1;
	int32_t t89 = 44649754;

	t89 = ((x5757<<x5758)<(x5759%x5760));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5793 = 5444U;
	uint64_t x5795 = UINT64_MAX;
	int8_t x5796 = INT8_MAX;
	int32_t t90 = 27;

	t90 = ((x5793<<x5794)<(x5795%x5796));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x5829 = 1U;
	uint8_t x5830 = 5U;
	volatile int32_t x5831 = INT32_MIN;
	int32_t t91 = -962;

	t91 = ((x5829<<x5830)<(x5831%x5832));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5905 = UINT32_MAX;
	uint8_t x5906 = 7U;
	volatile int16_t x5907 = 0;
	int8_t x5908 = INT8_MAX;
	int32_t t92 = -350023386;

	t92 = ((x5905<<x5906)<(x5907%x5908));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x5921 = INT8_MAX;
	volatile int32_t t93 = 71052155;

	t93 = ((x5921<<x5922)<(x5923%x5924));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5969 = 2178996U;
	uint8_t x5970 = 15U;
	static int32_t t94 = 0;

	t94 = ((x5969<<x5970)<(x5971%x5972));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5978 = 5U;
	int8_t x5979 = -1;

	t95 = ((x5977<<x5978)<(x5979%x5980));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x6061 = 0;
	static volatile int32_t x6063 = INT32_MAX;
	static volatile int32_t t96 = -553962628;

	t96 = ((x6061<<x6062)<(x6063%x6064));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6089 = 29;
	int16_t x6090 = 1;
	uint32_t x6091 = UINT32_MAX;
	int64_t x6092 = 20406LL;

	t97 = ((x6089<<x6090)<(x6091%x6092));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6165 = 3164;
	int8_t x6166 = 2;
	int16_t x6168 = INT16_MIN;
	volatile int32_t t98 = -811054;

	t98 = ((x6165<<x6166)<(x6167%x6168));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6209 = UINT64_MAX;
	static uint16_t x6210 = 17U;
	int8_t x6211 = -1;
	uint64_t x6212 = UINT64_MAX;
	int32_t t99 = -167046;

	t99 = ((x6209<<x6210)<(x6211%x6212));

	if (t99 != 0) { NG(); } else { ; }
	
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

