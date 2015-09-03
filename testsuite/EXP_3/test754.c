#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x51 = INT32_MIN;
int32_t x128 = 7044823;
volatile uint32_t t3 = 2U;
int8_t x157 = 15;
volatile int16_t x158 = 0;
uint8_t x294 = 6U;
int16_t x305 = 71;
uint32_t x306 = 22U;
int8_t x307 = -1;
static int16_t x396 = INT16_MIN;
static uint32_t t10 = 123U;
uint16_t x439 = UINT16_MAX;
static uint64_t x440 = 5239LLU;
volatile uint64_t t12 = 219969177010772LLU;
int16_t x449 = 1;
static uint8_t x452 = UINT8_MAX;
uint64_t x453 = UINT64_MAX;
uint32_t x456 = 21569972U;
uint16_t x741 = UINT16_MAX;
uint16_t x742 = 4U;
int16_t x744 = INT16_MIN;
uint8_t x757 = 16U;
int16_t x1084 = INT16_MAX;
static int64_t t20 = 487439974LL;
int32_t x1118 = 0;
volatile int32_t t21 = 7;
int16_t x1160 = -1;
volatile uint64_t x1201 = 757885LLU;
uint8_t x1203 = 24U;
int32_t x1219 = INT32_MAX;
volatile int32_t t25 = -24168;
volatile uint16_t x1593 = 5U;
volatile int8_t x1594 = 1;
uint64_t x1595 = 896LLU;
volatile int32_t x1596 = INT32_MIN;
uint8_t x1662 = 5U;
int8_t x1696 = INT8_MIN;
volatile int32_t t30 = -775573;
volatile int8_t x1801 = 2;
int16_t x1861 = INT16_MAX;
static int64_t x1864 = -50003483836272261LL;
volatile int64_t t34 = 26208579LL;
uint64_t t35 = 33735554LLU;
static uint16_t x1937 = 0U;
volatile int16_t x1954 = 1;
int64_t x2108 = INT64_MAX;
uint16_t x2316 = 17766U;
int64_t t41 = 144772994349LL;
uint8_t x2353 = UINT8_MAX;
volatile uint8_t x2354 = 3U;
uint64_t x2411 = 1661802LLU;
volatile int32_t x2497 = 1204;
uint64_t t45 = 6744829LLU;
static volatile uint32_t t46 = 111U;
static volatile uint32_t x2669 = 2U;
uint16_t x2672 = 4U;
int16_t x2842 = 45;
int64_t x2844 = INT64_MIN;
uint8_t x2881 = 1U;
volatile int32_t x2895 = INT32_MIN;
int16_t x2952 = INT16_MIN;
uint64_t x3024 = UINT64_MAX;
uint64_t t54 = 32883705676LLU;
uint32_t x3036 = UINT32_MAX;
static uint64_t x3281 = 1834298659371371LLU;
uint8_t x3332 = UINT8_MAX;
volatile int32_t t58 = -219823;
volatile uint32_t x3537 = 280686U;
static volatile uint8_t x3755 = 3U;
uint64_t x3804 = 510192135LLU;
uint64_t x3813 = 173LLU;
int16_t x3815 = -107;
uint8_t x3816 = 72U;
int32_t x3892 = -880;
uint64_t x4045 = 580224087836457LLU;
uint8_t x4053 = 6U;
volatile int8_t x4056 = INT8_MIN;
uint8_t x4086 = 3U;
volatile uint64_t x4087 = 76586LLU;
uint8_t x4142 = 0U;
static int16_t x4183 = -1;
int64_t x4184 = -1LL;
int8_t x4274 = 6;
int8_t x4275 = -1;
static int32_t x4528 = INT32_MIN;
static volatile uint64_t t76 = 564434LLU;
uint64_t x4846 = 5LLU;
static int32_t t79 = -4441423;
int8_t x4946 = 3;
int64_t t82 = -20607564600577139LL;
int32_t x5112 = INT32_MAX;
volatile int16_t x5459 = 203;
uint8_t x5462 = 5U;
static int16_t x5463 = -9155;
uint32_t x5553 = UINT32_MAX;
uint64_t x5653 = UINT64_MAX;
volatile uint8_t x5655 = UINT8_MAX;
uint32_t x5665 = 49U;
uint8_t x5666 = 0U;
static uint64_t x5729 = 13021406967417LLU;
int16_t x5730 = 1;
uint32_t x5776 = UINT32_MAX;
int64_t x5779 = INT64_MAX;
uint16_t x5817 = 7U;
int64_t t98 = -49887894297333970LL;
static uint32_t x5861 = 65528U;


void f0(void) {
	uint8_t x49 = UINT8_MAX;
	volatile uint32_t x50 = 8U;
	static uint16_t x52 = 831U;
	volatile int32_t t0 = 29150876;

	t0 = ((x49<<x50)^(x51%x52));

	if (t0 != -65432) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x125 = 3U;
	volatile int8_t x126 = 0;
	int8_t x127 = INT8_MIN;
	volatile int32_t t1 = 121;

	t1 = ((x125<<x126)^(x127%x128));

	if (t1 != -125) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x133 = 410LLU;
	static uint8_t x134 = 1U;
	static int8_t x135 = 4;
	volatile uint16_t x136 = 5049U;
	uint64_t t2 = 1828573LLU;

	t2 = ((x133<<x134)^(x135%x136));

	if (t2 != 816LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x145 = 17195740U;
	static uint8_t x146 = 1U;
	uint8_t x147 = 6U;
	uint16_t x148 = 31U;

	t3 = ((x145<<x146)^(x147%x148));

	if (t3 != 34391486U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x159 = INT8_MAX;
	static uint64_t x160 = UINT64_MAX;
	static uint64_t t4 = 3529215273LLU;

	t4 = ((x157<<x158)^(x159%x160));

	if (t4 != 112LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x229 = 2;
	uint8_t x230 = 5U;
	static uint8_t x231 = UINT8_MAX;
	int8_t x232 = -1;
	volatile int32_t t5 = -8685;

	t5 = ((x229<<x230)^(x231%x232));

	if (t5 != 64) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x293 = 8824197;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = 1U;
	volatile int64_t t6 = 5037774LL;

	t6 = ((x293<<x294)^(x295%x296));

	if (t6 != 564748608LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t7 = -22686798;

	t7 = ((x305<<x306)^(x307%x308));

	if (t7 != -297795585) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x369 = INT16_MAX;
	static uint8_t x370 = 4U;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = INT32_MAX;
	int32_t t8 = 1;

	t8 = ((x369<<x370)^(x371%x372));

	if (t8 != 491535) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x385 = 211715014082863351LLU;
	int16_t x386 = 1;
	static uint32_t x387 = 2067694874U;
	static uint8_t x388 = 28U;
	volatile uint64_t t9 = 7779084930810031811LLU;

	t9 = ((x385<<x386)^(x387%x388));

	if (t9 != 423430028165726688LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x393 = 25U;
	int16_t x394 = 0;
	int16_t x395 = -14272;

	t10 = ((x393<<x394)^(x395%x396));

	if (t10 != 4294953049U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x417 = 29U;
	uint64_t x418 = 2LLU;
	volatile int32_t x419 = INT32_MAX;
	static uint16_t x420 = UINT16_MAX;
	int32_t t11 = 43000414;

	t11 = ((x417<<x418)^(x419%x420));

	if (t11 != 32651) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x437 = INT16_MAX;
	volatile int8_t x438 = 3;

	t12 = ((x437<<x438)^(x439%x440));

	if (t12 != 259475LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x450 = 3;
	uint64_t x451 = 1511950339124LLU;
	uint64_t t13 = 15LLU;

	t13 = ((x449<<x450)^(x451%x452));

	if (t13 != 36LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x454 = 5U;
	int8_t x455 = INT8_MIN;
	volatile uint64_t t14 = 5555233893312568870LLU;

	t14 = ((x453<<x454)^(x455%x456));

	if (t14 != 18446744073707008884LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x545 = 1LL;
	volatile int8_t x546 = 0;
	uint64_t x547 = 205001388557581656LLU;
	uint64_t x548 = 893118673957LLU;
	uint64_t t15 = 9622LLU;

	t15 = ((x545<<x546)^(x547%x548));

	if (t15 != 286849535619LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x701 = UINT32_MAX;
	int8_t x702 = 2;
	int8_t x703 = -1;
	int8_t x704 = INT8_MIN;
	uint32_t t16 = 57629140U;

	t16 = ((x701<<x702)^(x703%x704));

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x709 = UINT64_MAX;
	static int32_t x710 = 0;
	int32_t x711 = INT32_MIN;
	uint64_t x712 = UINT64_MAX;
	volatile uint64_t t17 = 3444665522210165LLU;

	t17 = ((x709<<x710)^(x711%x712));

	if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x743 = INT32_MIN;
	static volatile int32_t t18 = 65165;

	t18 = ((x741<<x742)^(x743%x744));

	if (t18 != 1048560) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x758 = 0U;
	int32_t x759 = -82;
	int16_t x760 = INT16_MIN;
	static int32_t t19 = -248;

	t19 = ((x757<<x758)^(x759%x760));

	if (t19 != -66) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1081 = 110U;
	uint8_t x1082 = 19U;
	int64_t x1083 = INT64_MIN;

	t20 = ((x1081<<x1082)^(x1083%x1084));

	if (t20 != -57671688LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1117 = UINT8_MAX;
	int8_t x1119 = 3;
	int32_t x1120 = 11821955;

	t21 = ((x1117<<x1118)^(x1119%x1120));

	if (t21 != 252) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1141 = 12759129805672LLU;
	int16_t x1142 = 1;
	static volatile int64_t x1143 = -76LL;
	uint16_t x1144 = UINT16_MAX;
	volatile uint64_t t22 = 19582515LLU;

	t22 = ((x1141<<x1142)^(x1143%x1144));

	if (t22 != 18446718555449940324LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1157 = UINT8_MAX;
	uint32_t x1158 = 1U;
	uint64_t x1159 = 230060418949LLU;
	uint64_t t23 = 2LLU;

	t23 = ((x1157<<x1158)^(x1159%x1160));

	if (t23 != 230060418683LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1202 = 20;
	uint16_t x1204 = 19157U;
	static volatile uint64_t t24 = 59426534315489147LLU;

	t24 = ((x1201<<x1202)^(x1203%x1204));

	if (t24 != 794700021784LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1217 = 1939U;
	static int8_t x1218 = 16;
	int32_t x1220 = -175540096;

	t25 = ((x1217<<x1218)^(x1219%x1220));

	if (t25 != 98739711) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1241 = UINT8_MAX;
	static uint8_t x1242 = 0U;
	int64_t x1243 = INT64_MIN;
	int32_t x1244 = 4810;
	int64_t t26 = -1452162384LL;

	t26 = ((x1241<<x1242)^(x1243%x1244));

	if (t26 != -4151LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t t27 = 116111010412422LLU;

	t27 = ((x1593<<x1594)^(x1595%x1596));

	if (t27 != 906LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1661 = 36224U;
	int64_t x1663 = INT64_MIN;
	int16_t x1664 = INT16_MIN;
	int64_t t28 = -82735179880LL;

	t28 = ((x1661<<x1662)^(x1663%x1664));

	if (t28 != 1159168LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1693 = 7U;
	uint8_t x1694 = 1U;
	volatile int32_t x1695 = INT32_MIN;
	static volatile int32_t t29 = 786;

	t29 = ((x1693<<x1694)^(x1695%x1696));

	if (t29 != 14) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1741 = 15U;
	volatile uint8_t x1742 = 3U;
	uint8_t x1743 = 9U;
	volatile int32_t x1744 = INT32_MAX;

	t30 = ((x1741<<x1742)^(x1743%x1744));

	if (t30 != 113) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1769 = 1506137092328LL;
	int8_t x1770 = 14;
	volatile int8_t x1771 = -1;
	static volatile int64_t x1772 = INT64_MIN;
	static int64_t t31 = -9589712878LL;

	t31 = ((x1769<<x1770)^(x1771%x1772));

	if (t31 != -24676550120701953LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1802 = 0LL;
	uint8_t x1803 = 9U;
	int8_t x1804 = -24;
	int32_t t32 = -1;

	t32 = ((x1801<<x1802)^(x1803%x1804));

	if (t32 != 11) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1821 = 4871767509097579LLU;
	uint16_t x1822 = 11U;
	int64_t x1823 = INT64_MIN;
	static uint32_t x1824 = 15485U;
	volatile uint64_t t33 = 26850215191LLU;

	t33 = ((x1821<<x1822)^(x1823%x1824));

	if (t33 != 8469364215077710387LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1862 = 10U;
	static volatile int32_t x1863 = INT32_MIN;

	t34 = ((x1861<<x1862)^(x1863%x1864));

	if (t34 != -2113930240LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1873 = 7U;
	volatile uint16_t x1874 = 0U;
	static volatile uint64_t x1875 = UINT64_MAX;
	static uint8_t x1876 = 8U;

	t35 = ((x1873<<x1874)^(x1875%x1876));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1889 = 492;
	static int8_t x1890 = 0;
	int8_t x1891 = INT8_MIN;
	int64_t x1892 = 209849966936LL;
	volatile int64_t t36 = 455475966892LL;

	t36 = ((x1889<<x1890)^(x1891%x1892));

	if (t36 != -404LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1938 = 2U;
	int8_t x1939 = INT8_MAX;
	int32_t x1940 = -548567562;
	int32_t t37 = -8235451;

	t37 = ((x1937<<x1938)^(x1939%x1940));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x1953 = UINT8_MAX;
	volatile int8_t x1955 = 1;
	int32_t x1956 = -193;
	int32_t t38 = 3530267;

	t38 = ((x1953<<x1954)^(x1955%x1956));

	if (t38 != 511) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2069 = UINT8_MAX;
	volatile uint16_t x2070 = 13U;
	static int64_t x2071 = -15635LL;
	int64_t x2072 = -1LL;
	int64_t t39 = -1225LL;

	t39 = ((x2069<<x2070)^(x2071%x2072));

	if (t39 != 2088960LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2105 = 1U;
	volatile int32_t x2106 = 1;
	int8_t x2107 = INT8_MIN;
	volatile int64_t t40 = 255490711057376LL;

	t40 = ((x2105<<x2106)^(x2107%x2108));

	if (t40 != -126LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2313 = 6U;
	static volatile int8_t x2314 = 4;
	int64_t x2315 = INT64_MIN;

	t41 = ((x2313<<x2314)^(x2315%x2316));

	if (t41 != -17048LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2355 = INT64_MAX;
	volatile uint16_t x2356 = 821U;
	volatile int64_t t42 = 7228320LL;

	t42 = ((x2353<<x2354)^(x2355%x2356));

	if (t42 != 1551LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2409 = 65U;
	uint32_t x2410 = 9U;
	uint64_t x2412 = 7722223018LLU;
	static uint64_t t43 = 550967146634293LLU;

	t43 = ((x2409<<x2410)^(x2411%x2412));

	if (t43 != 1694058LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2498 = 1U;
	int64_t x2499 = -33889820795052LL;
	volatile int16_t x2500 = INT16_MIN;
	volatile int64_t t44 = -188432269142191LL;

	t44 = ((x2497<<x2498)^(x2499%x2500));

	if (t44 != -27076LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2525 = UINT64_MAX;
	int8_t x2526 = 3;
	uint32_t x2527 = 10477U;
	int16_t x2528 = -1;

	t45 = ((x2525<<x2526)^(x2527%x2528));

	if (t45 != 18446744073709541141LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x2549 = 260692407U;
	int8_t x2550 = 8;
	volatile int16_t x2551 = INT16_MAX;
	volatile int8_t x2552 = INT8_MAX;

	t46 = ((x2549<<x2550)^(x2551%x2552));

	if (t46 != 2312746753U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2581 = 129439381U;
	uint8_t x2582 = 2U;
	static int16_t x2583 = INT16_MIN;
	uint8_t x2584 = 6U;
	static uint32_t t47 = 5548690U;

	t47 = ((x2581<<x2582)^(x2583%x2584));

	if (t47 != 3777209770U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2670 = 1U;
	int8_t x2671 = 1;
	uint32_t t48 = 1161277U;

	t48 = ((x2669<<x2670)^(x2671%x2672));

	if (t48 != 5U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2841 = UINT64_MAX;
	uint16_t x2843 = 2334U;
	uint64_t t49 = 1597045268114253242LLU;

	t49 = ((x2841<<x2842)^(x2843%x2844));

	if (t49 != 18446708889337465118LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2882 = 2;
	static int16_t x2883 = INT16_MIN;
	int16_t x2884 = -1;
	volatile int32_t t50 = 389;

	t50 = ((x2881<<x2882)^(x2883%x2884));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2893 = INT64_MAX;
	uint16_t x2894 = 0U;
	int32_t x2896 = INT32_MAX;
	static int64_t t51 = INT64_MIN;

	t51 = ((x2893<<x2894)^(x2895%x2896));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2949 = UINT16_MAX;
	int8_t x2950 = 0;
	static int8_t x2951 = INT8_MIN;
	int32_t t52 = -43433;

	t52 = ((x2949<<x2950)^(x2951%x2952));

	if (t52 != -65409) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x2957 = 42273796212LL;
	uint32_t x2958 = 27U;
	uint8_t x2959 = 5U;
	int8_t x2960 = INT8_MAX;
	static int64_t t53 = -964880523LL;

	t53 = ((x2957<<x2958)^(x2959%x2960));

	if (t53 != 5673892881509646341LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3021 = 1U;
	uint8_t x3022 = 1U;
	int8_t x3023 = INT8_MAX;

	t54 = ((x3021<<x3022)^(x3023%x3024));

	if (t54 != 125LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3033 = 378;
	int8_t x3034 = 1;
	int8_t x3035 = INT8_MIN;
	volatile uint32_t t55 = 213U;

	t55 = ((x3033<<x3034)^(x3035%x3036));

	if (t55 != 4294966644U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3282 = 32U;
	static uint64_t x3283 = UINT64_MAX;
	volatile int16_t x3284 = INT16_MAX;
	volatile uint64_t t56 = 5776126739677LLU;

	t56 = ((x3281<<x3282)^(x3283%x3284));

	if (t56 != 17294096807059521551LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3329 = 1;
	int8_t x3330 = 4;
	uint64_t x3331 = 1481141031846398719LLU;
	uint64_t t57 = 28980LLU;

	t57 = ((x3329<<x3330)^(x3331%x3332));

	if (t57 != 185LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3333 = 3;
	uint8_t x3334 = 25U;
	volatile int32_t x3335 = -1;
	int16_t x3336 = -47;

	t58 = ((x3333<<x3334)^(x3335%x3336));

	if (t58 != -100663297) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3413 = 93U;
	static volatile uint8_t x3414 = 4U;
	uint8_t x3415 = 110U;
	int16_t x3416 = -1;
	int32_t t59 = -15457438;

	t59 = ((x3413<<x3414)^(x3415%x3416));

	if (t59 != 1488) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3497 = 9439449325LLU;
	static uint8_t x3498 = 12U;
	volatile int64_t x3499 = -1LL;
	static int64_t x3500 = INT64_MIN;
	uint64_t t60 = 52922871512847LLU;

	t60 = ((x3497<<x3498)^(x3499%x3500));

	if (t60 != 18446705409725116415LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3533 = UINT64_MAX;
	volatile int8_t x3534 = 1;
	int16_t x3535 = -1;
	uint32_t x3536 = 196773U;
	volatile uint64_t t61 = 123319540159920LLU;

	t61 = ((x3533<<x3534)^(x3535%x3536));

	if (t61 != 18446744073709548590LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x3538 = 0;
	int32_t x3539 = INT32_MIN;
	volatile int16_t x3540 = INT16_MAX;
	volatile uint32_t t62 = 124660U;

	t62 = ((x3537<<x3538)^(x3539%x3540));

	if (t62 != 4294686608U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3753 = 13826;
	int8_t x3754 = 1;
	volatile uint32_t x3756 = 8U;
	static volatile uint32_t t63 = 291344U;

	t63 = ((x3753<<x3754)^(x3755%x3756));

	if (t63 != 27655U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3797 = 23U;
	uint32_t x3798 = 0U;
	int16_t x3799 = -1;
	int16_t x3800 = -1;
	static volatile int32_t t64 = 2395100;

	t64 = ((x3797<<x3798)^(x3799%x3800));

	if (t64 != 23) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3801 = 6285U;
	static int32_t x3802 = 0;
	int16_t x3803 = -1;
	volatile uint64_t t65 = 477039037LLU;

	t65 = ((x3801<<x3802)^(x3803%x3804));

	if (t65 != 286398612LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3814 = 1U;
	static uint64_t t66 = 251519LLU;

	t66 = ((x3813<<x3814)^(x3815%x3816));

	if (t66 != 18446744073709551239LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3889 = 181782653102LL;
	uint8_t x3890 = 0U;
	int16_t x3891 = INT16_MAX;
	static int64_t t67 = 610490627LL;

	t67 = ((x3889<<x3890)^(x3891%x3892));

	if (t67 != 181782653025LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4046 = 2;
	static volatile int16_t x4047 = 1;
	uint8_t x4048 = UINT8_MAX;
	volatile uint64_t t68 = 587868007073266429LLU;

	t68 = ((x4045<<x4046)^(x4047%x4048));

	if (t68 != 2320896351345829LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x4054 = 6U;
	int64_t x4055 = 7511726446LL;
	volatile int64_t t69 = -102LL;

	t69 = ((x4053<<x4054)^(x4055%x4056));

	if (t69 != 494LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x4085 = 6371461U;
	int32_t x4088 = INT32_MAX;
	uint64_t t70 = 313765LLU;

	t70 = ((x4085<<x4086)^(x4087%x4088));

	if (t70 != 50917122LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x4141 = 1U;
	static uint64_t x4143 = 60034LLU;
	static int64_t x4144 = INT64_MAX;
	uint64_t t71 = 16389110401224533LLU;

	t71 = ((x4141<<x4142)^(x4143%x4144));

	if (t71 != 60035LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4181 = 3U;
	static uint16_t x4182 = 0U;
	int64_t t72 = -315803LL;

	t72 = ((x4181<<x4182)^(x4183%x4184));

	if (t72 != 3LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x4245 = 477885584932LLU;
	uint8_t x4246 = 0U;
	volatile int64_t x4247 = INT64_MAX;
	int16_t x4248 = INT16_MIN;
	uint64_t t73 = 5LLU;

	t73 = ((x4245<<x4246)^(x4247%x4248));

	if (t73 != 477885573595LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4253 = UINT32_MAX;
	uint8_t x4254 = 17U;
	int8_t x4255 = INT8_MIN;
	int64_t x4256 = INT64_MAX;
	volatile int64_t t74 = 16326188533856072LL;

	t74 = ((x4253<<x4254)^(x4255%x4256));

	if (t74 != -4294836352LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4273 = 85U;
	uint8_t x4276 = UINT8_MAX;
	uint32_t t75 = 25U;

	t75 = ((x4273<<x4274)^(x4275%x4276));

	if (t75 != 4294961855U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x4525 = 125425185166LLU;
	int8_t x4526 = 17;
	static int8_t x4527 = -1;

	t76 = ((x4525<<x4526)^(x4527%x4528));

	if (t76 != 18430304343839473663LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x4661 = INT16_MAX;
	uint64_t x4662 = 5LLU;
	int64_t x4663 = 42177LL;
	int16_t x4664 = 1;
	int64_t t77 = -12402LL;

	t77 = ((x4661<<x4662)^(x4663%x4664));

	if (t77 != 1048544LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4709 = INT16_MAX;
	int32_t x4710 = 5;
	int16_t x4711 = INT16_MAX;
	int8_t x4712 = 1;
	static volatile int32_t t78 = 15523;

	t78 = ((x4709<<x4710)^(x4711%x4712));

	if (t78 != 1048544) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4845 = 676;
	uint8_t x4847 = 125U;
	int32_t x4848 = INT32_MAX;

	t79 = ((x4845<<x4846)^(x4847%x4848));

	if (t79 != 21757) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x4897 = INT8_MAX;
	int8_t x4898 = 4;
	uint32_t x4899 = UINT32_MAX;
	int64_t x4900 = -1LL;
	static volatile int64_t t80 = 1540932943218LL;

	t80 = ((x4897<<x4898)^(x4899%x4900));

	if (t80 != 2032LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4917 = UINT16_MAX;
	volatile uint8_t x4918 = 0U;
	static int64_t x4919 = INT64_MIN;
	int8_t x4920 = -14;
	volatile int64_t t81 = -200725117943LL;

	t81 = ((x4917<<x4918)^(x4919%x4920));

	if (t81 != -65529LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4945 = UINT8_MAX;
	int64_t x4947 = 1628952204411298LL;
	uint16_t x4948 = 4U;

	t82 = ((x4945<<x4946)^(x4947%x4948));

	if (t82 != 2042LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x5049 = 28222U;
	volatile int64_t x5050 = 0LL;
	volatile int64_t x5051 = INT64_MAX;
	int16_t x5052 = INT16_MIN;
	static int64_t t83 = -35945LL;

	t83 = ((x5049<<x5050)^(x5051%x5052));

	if (t83 != 4545LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5109 = 2;
	volatile int8_t x5110 = 0;
	volatile uint32_t x5111 = UINT32_MAX;
	static uint32_t t84 = 79U;

	t84 = ((x5109<<x5110)^(x5111%x5112));

	if (t84 != 3U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5193 = 105428LLU;
	uint64_t x5194 = 7LLU;
	uint32_t x5195 = UINT32_MAX;
	uint16_t x5196 = 201U;
	uint64_t t85 = 52092LLU;

	t85 = ((x5193<<x5194)^(x5195%x5196));

	if (t85 != 13494883LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5253 = 29U;
	uint16_t x5254 = 26U;
	uint32_t x5255 = 1094584U;
	int16_t x5256 = INT16_MAX;
	uint32_t t86 = 633017854U;

	t86 = ((x5253<<x5254)^(x5255%x5256));

	if (t86 != 1946170329U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5265 = UINT64_MAX;
	uint8_t x5266 = 0U;
	volatile uint16_t x5267 = 25U;
	static int16_t x5268 = INT16_MAX;
	volatile uint64_t t87 = 16548054LLU;

	t87 = ((x5265<<x5266)^(x5267%x5268));

	if (t87 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5353 = 2U;
	int64_t x5354 = 0LL;
	int64_t x5355 = INT64_MAX;
	int16_t x5356 = 7615;
	volatile int64_t t88 = -2847921236LL;

	t88 = ((x5353<<x5354)^(x5355%x5356));

	if (t88 != 6845LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x5361 = 4028;
	static int16_t x5362 = 9;
	uint32_t x5363 = UINT32_MAX;
	int32_t x5364 = INT32_MIN;
	uint32_t t89 = 38U;

	t89 = ((x5361<<x5362)^(x5363%x5364));

	if (t89 != 2145421311U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5457 = INT16_MAX;
	int32_t x5458 = 12;
	static int8_t x5460 = INT8_MAX;
	volatile int32_t t90 = -1958;

	t90 = ((x5457<<x5458)^(x5459%x5460));

	if (t90 != 134213708) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x5461 = 3;
	uint32_t x5464 = 1036869U;
	volatile uint32_t t91 = 1046035U;

	t91 = ((x5461<<x5462)^(x5463%x5464));

	if (t91 != 246711U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5554 = 1U;
	uint8_t x5555 = 4U;
	int64_t x5556 = -1LL;
	static int64_t t92 = -2LL;

	t92 = ((x5553<<x5554)^(x5555%x5556));

	if (t92 != 4294967294LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5654 = 0;
	volatile int16_t x5656 = INT16_MIN;
	volatile uint64_t t93 = 196LLU;

	t93 = ((x5653<<x5654)^(x5655%x5656));

	if (t93 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5667 = 1;
	static uint8_t x5668 = 12U;
	uint32_t t94 = 554U;

	t94 = ((x5665<<x5666)^(x5667%x5668));

	if (t94 != 48U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5731 = -1109353044959744LL;
	int64_t x5732 = INT64_MIN;
	uint64_t t95 = 1LLU;

	t95 = ((x5729<<x5730)^(x5731%x5732));

	if (t95 != 18445645262387901170LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5773 = 2;
	int32_t x5774 = 10;
	static int16_t x5775 = -1;
	volatile uint32_t t96 = 3141U;

	t96 = ((x5773<<x5774)^(x5775%x5776));

	if (t96 != 2048U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x5777 = 111U;
	uint8_t x5778 = 11U;
	volatile int8_t x5780 = INT8_MIN;
	int64_t t97 = -15LL;

	t97 = ((x5777<<x5778)^(x5779%x5780));

	if (t97 != 227455LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5818 = 0U;
	int64_t x5819 = INT64_MAX;
	uint16_t x5820 = 207U;

	t98 = ((x5817<<x5818)^(x5819%x5820));

	if (t98 != 30LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5862 = 1;
	volatile int8_t x5863 = INT8_MIN;
	int64_t x5864 = INT64_MIN;
	int64_t t99 = -15389340159LL;

	t99 = ((x5861<<x5862)^(x5863%x5864));

	if (t99 != -130960LL) { NG(); } else { ; }
	
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

