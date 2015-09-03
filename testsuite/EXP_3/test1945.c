#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -278772;
uint32_t x19 = 157791863U;
int32_t x103 = -42280;
int64_t x285 = 37059268670807LL;
static int8_t x288 = INT8_MIN;
uint8_t x413 = 5U;
static volatile int8_t x415 = -1;
volatile int8_t x426 = 36;
int8_t x427 = INT8_MIN;
volatile int32_t t8 = -181;
volatile int32_t t12 = 23188;
volatile int8_t x646 = 11;
int16_t x648 = -1;
int8_t x674 = 3;
volatile int16_t x781 = INT16_MAX;
int64_t x783 = 0LL;
static volatile int32_t t17 = -316110693;
uint64_t x844 = 79900942424LLU;
int32_t x847 = INT32_MIN;
int32_t x868 = INT32_MIN;
int64_t x924 = 0LL;
volatile int32_t t21 = 99012;
uint32_t x974 = 5U;
uint8_t x1025 = 1U;
uint8_t x1026 = 6U;
uint8_t x1027 = 2U;
int32_t x1129 = 0;
int8_t x1132 = 1;
static volatile uint8_t x1149 = 0U;
static volatile int8_t x1150 = 0;
static uint8_t x1185 = UINT8_MAX;
int32_t x1187 = INT32_MAX;
static int64_t x1252 = -1LL;
int32_t t32 = -367043485;
uint8_t x1450 = 0U;
int64_t x1455 = INT64_MIN;
uint32_t x1655 = 194303U;
uint16_t x1708 = 496U;
volatile int32_t t39 = -3669841;
static int16_t x1742 = 0;
int32_t t41 = 12;
int64_t x1820 = INT64_MIN;
volatile int32_t t42 = -4064325;
static int16_t x1863 = -1;
uint64_t x2005 = 3398LLU;
int8_t x2008 = INT8_MAX;
static volatile int32_t x2185 = 23222;
int8_t x2188 = -3;
static uint16_t x2309 = 6U;
volatile int32_t t49 = -14;
volatile uint16_t x2373 = UINT16_MAX;
uint32_t x2374 = 31U;
int8_t x2375 = -1;
static uint64_t x2401 = UINT64_MAX;
int32_t x2443 = INT32_MAX;
uint8_t x2506 = 1U;
uint64_t x2507 = 49LLU;
uint32_t x2515 = 2751176U;
uint8_t x2550 = 3U;
int32_t x2552 = INT32_MAX;
uint16_t x2570 = 3U;
uint32_t x2627 = 1245259U;
volatile int8_t x2710 = 7;
static volatile uint64_t x2845 = 6LLU;
int8_t x2895 = INT8_MIN;
int32_t t63 = -8009308;
int16_t x2999 = -1;
int64_t x3000 = -1LL;
uint8_t x3078 = 41U;
int16_t x3114 = 0;
int16_t x3115 = -1;
volatile int32_t t68 = -174;
int32_t x3228 = INT32_MIN;
uint64_t x3252 = UINT64_MAX;
int16_t x3261 = 1;
static int8_t x3264 = 3;
static volatile uint8_t x3373 = 1U;
uint8_t x3374 = 6U;
int16_t x3476 = 473;
int32_t t76 = -41;
int32_t x3553 = INT32_MAX;
uint8_t x3694 = 39U;
uint8_t x3729 = 0U;
static uint32_t x3730 = 1U;
uint32_t x3888 = 0U;
volatile int32_t t87 = -439;
int16_t x4161 = 5;
int32_t x4164 = -8;
int16_t x4191 = -1;
uint64_t x4481 = 436755492621LLU;
int8_t x4537 = 1;
volatile int16_t x4540 = 7508;
int8_t x4582 = 6;
volatile uint16_t x4702 = 10U;
static uint8_t x4731 = UINT8_MAX;
int64_t x4732 = INT64_MAX;
static volatile int32_t t97 = -167;
int16_t x4762 = 0;
volatile uint16_t x4763 = UINT16_MAX;
uint64_t x4764 = 13037773741575LLU;
int32_t t99 = -3311;


void f0(void) {
	uint16_t x1 = 815U;
	static uint32_t x2 = 19U;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = INT64_MAX;

	t0 = ((x1>>x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x17 = 9261U;
	uint8_t x18 = 0U;
	volatile uint8_t x20 = 12U;
	volatile int32_t t1 = 51909;

	t1 = ((x17>>x18)==(x19|x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x101 = 1006U;
	int16_t x102 = 2;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t2 = -21;

	t2 = ((x101>>x102)==(x103|x104));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x286 = 0;
	int32_t x287 = -1;
	static int32_t t3 = 88617082;

	t3 = ((x285>>x286)==(x287|x288));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x329 = 542262139LLU;
	int8_t x330 = 0;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 2U;
	int32_t t4 = 1;

	t4 = ((x329>>x330)==(x331|x332));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x353 = 936;
	uint8_t x354 = 15U;
	int32_t x355 = 32899;
	int16_t x356 = -1;
	int32_t t5 = -9;

	t5 = ((x353>>x354)==(x355|x356));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x361 = INT32_MAX;
	uint8_t x362 = 5U;
	int64_t x363 = INT64_MAX;
	uint32_t x364 = 27080U;
	volatile int32_t t6 = 373;

	t6 = ((x361>>x362)==(x363|x364));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x414 = 8U;
	int8_t x416 = INT8_MAX;
	volatile int32_t t7 = 1161546;

	t7 = ((x413>>x414)==(x415|x416));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x425 = 157126463162093124LL;
	static int8_t x428 = -1;

	t8 = ((x425>>x426)==(x427|x428));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x469 = 1503414;
	int8_t x470 = 1;
	static int64_t x471 = INT64_MIN;
	uint8_t x472 = 4U;
	static int32_t t9 = 54991;

	t9 = ((x469>>x470)==(x471|x472));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x561 = UINT64_MAX;
	int16_t x562 = 1;
	static int32_t x563 = -1;
	int64_t x564 = INT64_MIN;
	volatile int32_t t10 = 104727241;

	t10 = ((x561>>x562)==(x563|x564));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x581 = 2861;
	volatile int8_t x582 = 3;
	uint16_t x583 = UINT16_MAX;
	uint64_t x584 = 4602LLU;
	int32_t t11 = 69;

	t11 = ((x581>>x582)==(x583|x584));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x609 = 3461;
	int16_t x610 = 0;
	int64_t x611 = 34050398303409160LL;
	int16_t x612 = INT16_MAX;

	t12 = ((x609>>x610)==(x611|x612));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x645 = 9589U;
	int64_t x647 = -1LL;
	static int32_t t13 = -43033;

	t13 = ((x645>>x646)==(x647|x648));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x673 = 421U;
	volatile uint64_t x675 = 4619014041751LLU;
	int8_t x676 = INT8_MAX;
	int32_t t14 = -574060;

	t14 = ((x673>>x674)==(x675|x676));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x681 = 0U;
	uint8_t x682 = 0U;
	uint32_t x683 = UINT32_MAX;
	static uint8_t x684 = 55U;
	volatile int32_t t15 = -11885;

	t15 = ((x681>>x682)==(x683|x684));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x705 = 0U;
	static int8_t x706 = 3;
	static int32_t x707 = INT32_MIN;
	volatile int32_t x708 = INT32_MIN;
	volatile int32_t t16 = 18524695;

	t16 = ((x705>>x706)==(x707|x708));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x782 = 11;
	int32_t x784 = INT32_MIN;

	t17 = ((x781>>x782)==(x783|x784));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x841 = 24U;
	uint8_t x842 = 30U;
	static uint32_t x843 = 1096797U;
	int32_t t18 = -1058343;

	t18 = ((x841>>x842)==(x843|x844));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x845 = 0;
	static uint8_t x846 = 5U;
	int16_t x848 = -8;
	volatile int32_t t19 = -58;

	t19 = ((x845>>x846)==(x847|x848));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x865 = INT64_MAX;
	static uint32_t x866 = 19U;
	int8_t x867 = 5;
	int32_t t20 = -885;

	t20 = ((x865>>x866)==(x867|x868));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x921 = 1;
	uint32_t x922 = 10U;
	volatile int32_t x923 = -1;

	t21 = ((x921>>x922)==(x923|x924));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x941 = 87U;
	volatile uint8_t x942 = 1U;
	volatile int32_t x943 = INT32_MAX;
	static uint16_t x944 = 757U;
	static int32_t t22 = 32641;

	t22 = ((x941>>x942)==(x943|x944));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x973 = UINT64_MAX;
	uint32_t x975 = 15946161U;
	int64_t x976 = INT64_MIN;
	int32_t t23 = 5644;

	t23 = ((x973>>x974)==(x975|x976));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1028 = 8LLU;
	int32_t t24 = -1;

	t24 = ((x1025>>x1026)==(x1027|x1028));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1053 = 488;
	static int16_t x1054 = 0;
	int32_t x1055 = -1;
	int32_t x1056 = INT32_MIN;
	static int32_t t25 = -92;

	t25 = ((x1053>>x1054)==(x1055|x1056));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1113 = 2205838050944628597LL;
	volatile uint32_t x1114 = 5U;
	uint8_t x1115 = UINT8_MAX;
	uint8_t x1116 = UINT8_MAX;
	volatile int32_t t26 = 9796161;

	t26 = ((x1113>>x1114)==(x1115|x1116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1117 = INT32_MAX;
	uint8_t x1118 = 14U;
	static uint64_t x1119 = 6116628LLU;
	uint16_t x1120 = 25448U;
	volatile int32_t t27 = 14028787;

	t27 = ((x1117>>x1118)==(x1119|x1120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1130 = 30LLU;
	static int32_t x1131 = INT32_MAX;
	int32_t t28 = -6106686;

	t28 = ((x1129>>x1130)==(x1131|x1132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1151 = UINT8_MAX;
	static uint8_t x1152 = UINT8_MAX;
	static volatile int32_t t29 = -49;

	t29 = ((x1149>>x1150)==(x1151|x1152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1181 = INT64_MAX;
	static int8_t x1182 = 1;
	int64_t x1183 = INT64_MIN;
	int16_t x1184 = -1;
	volatile int32_t t30 = 12237695;

	t30 = ((x1181>>x1182)==(x1183|x1184));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1186 = 3LLU;
	uint8_t x1188 = 27U;
	volatile int32_t t31 = -207371976;

	t31 = ((x1185>>x1186)==(x1187|x1188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1249 = UINT64_MAX;
	uint32_t x1250 = 14U;
	int64_t x1251 = 4507012419175LL;

	t32 = ((x1249>>x1250)==(x1251|x1252));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1449 = 176199141LL;
	volatile int32_t x1451 = INT32_MIN;
	int8_t x1452 = INT8_MIN;
	static volatile int32_t t33 = 14549742;

	t33 = ((x1449>>x1450)==(x1451|x1452));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1453 = INT32_MAX;
	volatile uint8_t x1454 = 19U;
	static int8_t x1456 = 9;
	static int32_t t34 = -10176;

	t34 = ((x1453>>x1454)==(x1455|x1456));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1565 = 1929912U;
	uint32_t x1566 = 11U;
	uint8_t x1567 = UINT8_MAX;
	static uint8_t x1568 = 0U;
	volatile int32_t t35 = 792;

	t35 = ((x1565>>x1566)==(x1567|x1568));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1605 = 376LLU;
	int16_t x1606 = 2;
	static int32_t x1607 = INT32_MIN;
	volatile int8_t x1608 = 0;
	volatile int32_t t36 = -94801328;

	t36 = ((x1605>>x1606)==(x1607|x1608));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1653 = UINT8_MAX;
	int8_t x1654 = 0;
	int64_t x1656 = INT64_MIN;
	volatile int32_t t37 = -3;

	t37 = ((x1653>>x1654)==(x1655|x1656));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1697 = 1244819531LL;
	uint32_t x1698 = 0U;
	int8_t x1699 = INT8_MAX;
	volatile uint32_t x1700 = UINT32_MAX;
	int32_t t38 = -598;

	t38 = ((x1697>>x1698)==(x1699|x1700));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1705 = 3;
	int8_t x1706 = 10;
	int64_t x1707 = INT64_MAX;

	t39 = ((x1705>>x1706)==(x1707|x1708));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1741 = UINT32_MAX;
	static int8_t x1743 = INT8_MIN;
	uint32_t x1744 = 78886781U;
	int32_t t40 = -16427359;

	t40 = ((x1741>>x1742)==(x1743|x1744));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1793 = 228482U;
	uint64_t x1794 = 24LLU;
	int8_t x1795 = INT8_MIN;
	int64_t x1796 = 561290081415297LL;

	t41 = ((x1793>>x1794)==(x1795|x1796));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1817 = 2383385LLU;
	static int8_t x1818 = 14;
	int64_t x1819 = INT64_MAX;

	t42 = ((x1817>>x1818)==(x1819|x1820));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1861 = 1;
	int8_t x1862 = 16;
	static volatile uint8_t x1864 = 3U;
	static int32_t t43 = -1;

	t43 = ((x1861>>x1862)==(x1863|x1864));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1877 = 6919623U;
	uint32_t x1878 = 2U;
	volatile int16_t x1879 = -28;
	volatile int64_t x1880 = -1LL;
	int32_t t44 = -1682784;

	t44 = ((x1877>>x1878)==(x1879|x1880));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2006 = 10U;
	static int16_t x2007 = -109;
	static int32_t t45 = 646588147;

	t45 = ((x2005>>x2006)==(x2007|x2008));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2105 = 6U;
	int16_t x2106 = 25;
	uint16_t x2107 = UINT16_MAX;
	int16_t x2108 = INT16_MIN;
	int32_t t46 = -9512321;

	t46 = ((x2105>>x2106)==(x2107|x2108));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2161 = UINT64_MAX;
	volatile int8_t x2162 = 3;
	volatile int8_t x2163 = 1;
	uint8_t x2164 = UINT8_MAX;
	volatile int32_t t47 = 11403;

	t47 = ((x2161>>x2162)==(x2163|x2164));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2186 = 2U;
	int16_t x2187 = 586;
	static volatile int32_t t48 = 1376037;

	t48 = ((x2185>>x2186)==(x2187|x2188));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2310 = 3U;
	static volatile int8_t x2311 = INT8_MAX;
	uint32_t x2312 = UINT32_MAX;

	t49 = ((x2309>>x2310)==(x2311|x2312));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2376 = 167208243176LL;
	int32_t t50 = 95704493;

	t50 = ((x2373>>x2374)==(x2375|x2376));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2402 = 1U;
	uint8_t x2403 = UINT8_MAX;
	int8_t x2404 = 1;
	int32_t t51 = 22443;

	t51 = ((x2401>>x2402)==(x2403|x2404));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2441 = UINT64_MAX;
	int16_t x2442 = 0;
	volatile int64_t x2444 = INT64_MIN;
	int32_t t52 = -2780;

	t52 = ((x2441>>x2442)==(x2443|x2444));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2505 = 0;
	uint8_t x2508 = 2U;
	int32_t t53 = -1898983;

	t53 = ((x2505>>x2506)==(x2507|x2508));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2513 = 60411LLU;
	volatile uint64_t x2514 = 2LLU;
	int16_t x2516 = INT16_MAX;
	int32_t t54 = 396535;

	t54 = ((x2513>>x2514)==(x2515|x2516));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x2549 = 28955U;
	int32_t x2551 = INT32_MIN;
	volatile int32_t t55 = -153242729;

	t55 = ((x2549>>x2550)==(x2551|x2552));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2569 = 55U;
	int32_t x2571 = INT32_MIN;
	static int16_t x2572 = INT16_MAX;
	int32_t t56 = 0;

	t56 = ((x2569>>x2570)==(x2571|x2572));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2625 = INT32_MAX;
	volatile uint8_t x2626 = 20U;
	volatile int64_t x2628 = INT64_MIN;
	int32_t t57 = -896834;

	t57 = ((x2625>>x2626)==(x2627|x2628));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2709 = 50;
	static int16_t x2711 = INT16_MIN;
	int32_t x2712 = INT32_MAX;
	volatile int32_t t58 = 1;

	t58 = ((x2709>>x2710)==(x2711|x2712));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2801 = INT8_MAX;
	uint8_t x2802 = 13U;
	int32_t x2803 = -3;
	static int16_t x2804 = -10549;
	int32_t t59 = 1831;

	t59 = ((x2801>>x2802)==(x2803|x2804));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2825 = INT8_MAX;
	uint8_t x2826 = 20U;
	volatile int8_t x2827 = 25;
	int64_t x2828 = 3829399034351099LL;
	volatile int32_t t60 = -1;

	t60 = ((x2825>>x2826)==(x2827|x2828));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2846 = 1U;
	static uint64_t x2847 = 449609977288LLU;
	static int32_t x2848 = -198940305;
	volatile int32_t t61 = -1613969;

	t61 = ((x2845>>x2846)==(x2847|x2848));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2893 = 2;
	int32_t x2894 = 7;
	volatile int16_t x2896 = INT16_MAX;
	volatile int32_t t62 = -64506171;

	t62 = ((x2893>>x2894)==(x2895|x2896));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2897 = 84763;
	uint8_t x2898 = 7U;
	int16_t x2899 = INT16_MIN;
	int32_t x2900 = -166352784;

	t63 = ((x2897>>x2898)==(x2899|x2900));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x2977 = INT16_MAX;
	static uint16_t x2978 = 23U;
	int64_t x2979 = INT64_MAX;
	static int8_t x2980 = -3;
	int32_t t64 = -35;

	t64 = ((x2977>>x2978)==(x2979|x2980));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2997 = 1;
	int8_t x2998 = 0;
	volatile int32_t t65 = 59791;

	t65 = ((x2997>>x2998)==(x2999|x3000));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3077 = INT64_MAX;
	int64_t x3079 = INT64_MIN;
	int64_t x3080 = INT64_MAX;
	int32_t t66 = -2;

	t66 = ((x3077>>x3078)==(x3079|x3080));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3113 = INT32_MAX;
	int16_t x3116 = -1;
	volatile int32_t t67 = -49990023;

	t67 = ((x3113>>x3114)==(x3115|x3116));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x3153 = 0U;
	int8_t x3154 = 0;
	uint32_t x3155 = 5U;
	uint8_t x3156 = UINT8_MAX;

	t68 = ((x3153>>x3154)==(x3155|x3156));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3193 = UINT64_MAX;
	uint8_t x3194 = 33U;
	int32_t x3195 = 807549806;
	static int32_t x3196 = INT32_MIN;
	int32_t t69 = -2711013;

	t69 = ((x3193>>x3194)==(x3195|x3196));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3225 = 11809908;
	uint8_t x3226 = 3U;
	static uint16_t x3227 = 16647U;
	static volatile int32_t t70 = -12081;

	t70 = ((x3225>>x3226)==(x3227|x3228));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3249 = UINT64_MAX;
	int32_t x3250 = 10;
	static int8_t x3251 = -1;
	volatile int32_t t71 = 33332301;

	t71 = ((x3249>>x3250)==(x3251|x3252));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x3262 = 1;
	static volatile int64_t x3263 = INT64_MIN;
	static int32_t t72 = -34343;

	t72 = ((x3261>>x3262)==(x3263|x3264));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x3285 = INT64_MAX;
	uint8_t x3286 = 1U;
	int32_t x3287 = INT32_MIN;
	int8_t x3288 = INT8_MAX;
	int32_t t73 = -46864;

	t73 = ((x3285>>x3286)==(x3287|x3288));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x3305 = 61U;
	int8_t x3306 = 11;
	int8_t x3307 = -1;
	static int16_t x3308 = INT16_MIN;
	volatile int32_t t74 = 69;

	t74 = ((x3305>>x3306)==(x3307|x3308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3375 = INT8_MIN;
	uint64_t x3376 = 7958561062950273157LLU;
	volatile int32_t t75 = 55415303;

	t75 = ((x3373>>x3374)==(x3375|x3376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3473 = 20121653917730671LL;
	uint8_t x3474 = 9U;
	int8_t x3475 = INT8_MAX;

	t76 = ((x3473>>x3474)==(x3475|x3476));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3493 = INT64_MAX;
	int8_t x3494 = 48;
	int64_t x3495 = -1LL;
	static uint32_t x3496 = 607U;
	static int32_t t77 = 12;

	t77 = ((x3493>>x3494)==(x3495|x3496));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x3554 = 9U;
	int32_t x3555 = -1;
	int16_t x3556 = INT16_MIN;
	static volatile int32_t t78 = 215;

	t78 = ((x3553>>x3554)==(x3555|x3556));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x3565 = UINT64_MAX;
	int64_t x3566 = 2LL;
	uint32_t x3567 = UINT32_MAX;
	volatile uint64_t x3568 = UINT64_MAX;
	static int32_t t79 = 931823;

	t79 = ((x3565>>x3566)==(x3567|x3568));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3693 = 1040441916794038765LLU;
	int64_t x3695 = 376050433642LL;
	volatile uint8_t x3696 = UINT8_MAX;
	int32_t t80 = 0;

	t80 = ((x3693>>x3694)==(x3695|x3696));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3709 = 2U;
	uint8_t x3710 = 0U;
	int16_t x3711 = INT16_MIN;
	int16_t x3712 = -1;
	int32_t t81 = -56784066;

	t81 = ((x3709>>x3710)==(x3711|x3712));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3731 = 10494U;
	uint8_t x3732 = 6U;
	volatile int32_t t82 = -2920513;

	t82 = ((x3729>>x3730)==(x3731|x3732));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3773 = 1314793U;
	volatile int16_t x3774 = 1;
	uint8_t x3775 = UINT8_MAX;
	int64_t x3776 = INT64_MAX;
	volatile int32_t t83 = 359;

	t83 = ((x3773>>x3774)==(x3775|x3776));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3885 = 12U;
	static int16_t x3886 = 0;
	volatile uint32_t x3887 = 1732U;
	int32_t t84 = -1;

	t84 = ((x3885>>x3886)==(x3887|x3888));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3893 = 348U;
	uint16_t x3894 = 0U;
	static int64_t x3895 = 8LL;
	volatile uint64_t x3896 = 77444685417LLU;
	volatile int32_t t85 = 0;

	t85 = ((x3893>>x3894)==(x3895|x3896));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x3937 = INT64_MAX;
	int64_t x3938 = 1LL;
	int8_t x3939 = -1;
	int8_t x3940 = INT8_MAX;
	int32_t t86 = -50642924;

	t86 = ((x3937>>x3938)==(x3939|x3940));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4057 = 1307;
	uint16_t x4058 = 11U;
	volatile uint8_t x4059 = 11U;
	volatile int32_t x4060 = INT32_MIN;

	t87 = ((x4057>>x4058)==(x4059|x4060));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4162 = 0U;
	int8_t x4163 = INT8_MIN;
	volatile int32_t t88 = 106750;

	t88 = ((x4161>>x4162)==(x4163|x4164));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4189 = INT16_MAX;
	volatile uint16_t x4190 = 19U;
	uint64_t x4192 = 4442844103166711334LLU;
	int32_t t89 = -4913;

	t89 = ((x4189>>x4190)==(x4191|x4192));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4482 = 14U;
	int32_t x4483 = INT32_MIN;
	uint32_t x4484 = 95658188U;
	static int32_t t90 = -13;

	t90 = ((x4481>>x4482)==(x4483|x4484));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4489 = 4698LL;
	uint8_t x4490 = 4U;
	volatile int64_t x4491 = INT64_MIN;
	int8_t x4492 = -1;
	static volatile int32_t t91 = 88723110;

	t91 = ((x4489>>x4490)==(x4491|x4492));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4513 = UINT16_MAX;
	static uint64_t x4514 = 6LLU;
	int64_t x4515 = 58LL;
	static uint64_t x4516 = 78517969447LLU;
	int32_t t92 = -982327218;

	t92 = ((x4513>>x4514)==(x4515|x4516));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4538 = 1;
	int32_t x4539 = INT32_MIN;
	int32_t t93 = 24;

	t93 = ((x4537>>x4538)==(x4539|x4540));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4581 = 0;
	int16_t x4583 = INT16_MIN;
	uint16_t x4584 = 148U;
	static int32_t t94 = -9814878;

	t94 = ((x4581>>x4582)==(x4583|x4584));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4637 = 41;
	uint8_t x4638 = 13U;
	static volatile int16_t x4639 = 0;
	int8_t x4640 = INT8_MIN;
	int32_t t95 = 19712531;

	t95 = ((x4637>>x4638)==(x4639|x4640));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x4701 = UINT16_MAX;
	static uint16_t x4703 = 532U;
	volatile uint64_t x4704 = 28770LLU;
	volatile int32_t t96 = 436;

	t96 = ((x4701>>x4702)==(x4703|x4704));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4729 = 0;
	static volatile uint16_t x4730 = 0U;

	t97 = ((x4729>>x4730)==(x4731|x4732));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4761 = 7013;
	int32_t t98 = 3184;

	t98 = ((x4761>>x4762)==(x4763|x4764));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4805 = UINT16_MAX;
	int16_t x4806 = 1;
	volatile int32_t x4807 = INT32_MAX;
	uint16_t x4808 = 3027U;

	t99 = ((x4805>>x4806)==(x4807|x4808));

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

