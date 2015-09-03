#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x19 = 13;
int32_t t0 = -26;
int16_t x195 = -1;
int8_t x278 = INT8_MIN;
uint16_t x449 = 3556U;
int32_t x451 = 1;
uint16_t x452 = 0U;
uint64_t x533 = UINT64_MAX;
uint32_t x909 = 26395123U;
volatile int32_t t13 = -2;
int32_t t15 = -945008033;
volatile uint64_t t16 = 11044724396938LLU;
uint8_t x1269 = 10U;
int64_t x1270 = INT64_MIN;
static volatile int32_t x1274 = -1;
int8_t x1318 = INT8_MIN;
int32_t t21 = 15;
static volatile uint16_t x1365 = 3572U;
uint16_t x1367 = UINT16_MAX;
int32_t t22 = 56542;
volatile int32_t x1424 = -19;
uint64_t t27 = 4270LLU;
int32_t t28 = 3001;
volatile uint64_t x1834 = UINT64_MAX;
int8_t x1835 = INT8_MIN;
static uint32_t t29 = UINT32_MAX;
int32_t x2008 = -1;
int16_t x2027 = -6;
volatile uint16_t x2557 = 2U;
static uint16_t x2558 = 6U;
int32_t x2581 = 15;
int32_t x2583 = 12030;
volatile int64_t x2605 = 998255151LL;
static int64_t x2606 = INT64_MIN;
static uint32_t x2607 = 24U;
int16_t x2779 = INT16_MIN;
uint8_t x2840 = 0U;
static uint16_t x2856 = UINT16_MAX;
volatile int8_t x2917 = 3;
uint32_t x2919 = 2906U;
volatile uint32_t x2927 = 20U;
static uint8_t x2963 = 0U;
int16_t x3140 = 11;
volatile int32_t t47 = -2;
int32_t x3738 = 470860262;
int32_t x3777 = 1;
uint8_t x3780 = 1U;
volatile int32_t t51 = 548;
volatile int32_t t52 = 6816255;
uint64_t x3890 = 47LLU;
static int64_t x3924 = -1LL;
uint16_t x4073 = 6770U;
int32_t x4075 = INT32_MIN;
int32_t x4110 = 7;
volatile int64_t x4111 = INT64_MAX;
uint16_t x4113 = UINT16_MAX;
static uint8_t x4114 = 1U;
uint8_t x4284 = 3U;
uint32_t t60 = 1331920498U;
int8_t x4392 = -1;
int32_t t64 = 731710;
volatile uint16_t x4455 = 7U;
uint64_t x4456 = UINT64_MAX;
volatile int32_t t65 = 17;
int64_t x4485 = 3000008717743LL;
static int64_t x4487 = 96051LL;
uint16_t x4653 = 5U;
int64_t x4654 = INT64_MIN;
int32_t t69 = 195;
volatile int8_t x4849 = 0;
static volatile int16_t x5090 = INT16_MAX;
static int32_t x5091 = INT32_MIN;
int16_t x5217 = INT16_MAX;
volatile int8_t x5244 = -28;
static int32_t x5597 = 553;
volatile uint64_t t79 = 20453112116LLU;
static uint32_t t80 = 397724U;
int64_t x5737 = 657938720737297LL;
static volatile int32_t x5739 = -83;
uint8_t x5740 = 1U;
uint8_t x5757 = UINT8_MAX;
int32_t x5759 = -1;
int32_t t83 = 246859045;
static int32_t t85 = -196354065;
volatile int32_t x6048 = -24;
int32_t t86 = 2324309;
int8_t x6061 = INT8_MAX;
uint8_t x6064 = 0U;
uint8_t x6147 = 3U;
uint64_t x6229 = 5162553685529443LLU;
uint8_t x6230 = 21U;
volatile int16_t x6380 = -13;
uint8_t x6421 = 100U;
volatile int32_t x6423 = INT32_MIN;
uint32_t x6424 = UINT32_MAX;
int8_t x6449 = 15;
volatile int64_t x6841 = INT64_MAX;


void f0(void) {
	int8_t x17 = INT8_MAX;
	static volatile int32_t x18 = INT32_MIN;
	int8_t x20 = -1;

	t0 = (x17>>((x18&x19)-x20));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x97 = INT32_MAX;
	int8_t x98 = 3;
	volatile int16_t x99 = 5034;
	int8_t x100 = -1;
	static volatile int32_t t1 = -323697;

	t1 = (x97>>((x98&x99)-x100));

	if (t1 != 268435455) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x133 = 11;
	uint16_t x134 = 3U;
	int16_t x135 = 15;
	uint8_t x136 = 2U;
	volatile int32_t t2 = 325924223;

	t2 = (x133>>((x134&x135)-x136));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = -1;
	int16_t x196 = -1;
	uint64_t t3 = UINT64_MAX;

	t3 = (x193>>((x194&x195)-x196));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x277 = INT16_MAX;
	volatile uint8_t x279 = 20U;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t4 = 5982255;

	t4 = (x277>>((x278&x279)-x280));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x450 = 350U;
	int32_t t5 = 777791;

	t5 = (x449>>((x450&x451)-x452));

	if (t5 != 3556) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x457 = INT16_MAX;
	uint8_t x458 = UINT8_MAX;
	static int8_t x459 = -1;
	uint8_t x460 = UINT8_MAX;
	int32_t t6 = 41;

	t6 = (x457>>((x458&x459)-x460));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x469 = 0;
	uint16_t x470 = 0U;
	int32_t x471 = 208128438;
	uint8_t x472 = 0U;
	volatile int32_t t7 = 16196;

	t7 = (x469>>((x470&x471)-x472));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x513 = INT16_MAX;
	static volatile int8_t x514 = 7;
	int64_t x515 = INT64_MIN;
	int8_t x516 = -1;
	volatile int32_t t8 = -1740;

	t8 = (x513>>((x514&x515)-x516));

	if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x534 = INT64_MAX;
	static int32_t x535 = 287;
	uint8_t x536 = UINT8_MAX;
	volatile uint64_t t9 = 3LLU;

	t9 = (x533>>((x534&x535)-x536));

	if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x653 = 8U;
	int64_t x654 = INT64_MIN;
	uint32_t x655 = UINT32_MAX;
	static int8_t x656 = -1;
	int32_t t10 = 873535;

	t10 = (x653>>((x654&x655)-x656));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x749 = UINT32_MAX;
	static int64_t x750 = INT64_MIN;
	static uint32_t x751 = 8180U;
	static int16_t x752 = -1;
	volatile uint32_t t11 = 34U;

	t11 = (x749>>((x750&x751)-x752));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x910 = INT32_MIN;
	int8_t x911 = 7;
	int16_t x912 = -1;
	volatile uint32_t t12 = 1556997U;

	t12 = (x909>>((x910&x911)-x912));

	if (t12 != 13197561U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x985 = 2862U;
	int8_t x986 = INT8_MIN;
	static int64_t x987 = INT64_MIN;
	int64_t x988 = INT64_MIN;

	t13 = (x985>>((x986&x987)-x988));

	if (t13 != 2862) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1045 = 1567718238U;
	volatile int64_t x1046 = INT64_MAX;
	static int64_t x1047 = INT64_MIN;
	volatile int32_t x1048 = -1;
	volatile uint32_t t14 = 16U;

	t14 = (x1045>>((x1046&x1047)-x1048));

	if (t14 != 783859119U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1129 = 5U;
	int16_t x1130 = INT16_MAX;
	int64_t x1131 = INT64_MIN;
	int16_t x1132 = -1;

	t15 = (x1129>>((x1130&x1131)-x1132));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1225 = 7638912766619236LLU;
	volatile uint8_t x1226 = 12U;
	int8_t x1227 = 4;
	uint64_t x1228 = UINT64_MAX;

	t16 = (x1225>>((x1226&x1227)-x1228));

	if (t16 != 238716023956851LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1241 = 390979;
	int64_t x1242 = -1LL;
	uint64_t x1243 = UINT64_MAX;
	uint64_t x1244 = UINT64_MAX;
	static int32_t t17 = -607860343;

	t17 = (x1241>>((x1242&x1243)-x1244));

	if (t17 != 390979) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1271 = 3;
	int16_t x1272 = -1;
	static volatile int32_t t18 = 306015263;

	t18 = (x1269>>((x1270&x1271)-x1272));

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1273 = 13U;
	static int16_t x1275 = -1;
	int8_t x1276 = -7;
	volatile int32_t t19 = -75093;

	t19 = (x1273>>((x1274&x1275)-x1276));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1317 = 286347284088199LLU;
	int16_t x1319 = INT16_MIN;
	static int16_t x1320 = INT16_MIN;
	volatile uint64_t t20 = 88547LLU;

	t20 = (x1317>>((x1318&x1319)-x1320));

	if (t20 != 286347284088199LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1325 = 637946;
	static volatile int32_t x1326 = INT32_MIN;
	uint64_t x1327 = 252217385LLU;
	int8_t x1328 = -1;

	t21 = (x1325>>((x1326&x1327)-x1328));

	if (t21 != 318973) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1366 = 0;
	int8_t x1368 = -4;

	t22 = (x1365>>((x1366&x1367)-x1368));

	if (t22 != 223) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1421 = INT16_MAX;
	volatile int8_t x1422 = INT8_MAX;
	static uint8_t x1423 = 5U;
	volatile int32_t t23 = 178656447;

	t23 = (x1421>>((x1422&x1423)-x1424));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1433 = UINT16_MAX;
	uint8_t x1434 = 96U;
	int32_t x1435 = 18800;
	uint16_t x1436 = 90U;
	volatile int32_t t24 = -336;

	t24 = (x1433>>((x1434&x1435)-x1436));

	if (t24 != 1023) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1441 = INT64_MAX;
	int16_t x1442 = INT16_MIN;
	uint16_t x1443 = 4U;
	static int8_t x1444 = -1;
	int64_t t25 = -300LL;

	t25 = (x1441>>((x1442&x1443)-x1444));

	if (t25 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1617 = INT64_MAX;
	static int8_t x1618 = 51;
	int32_t x1619 = INT32_MAX;
	int16_t x1620 = -1;
	int64_t t26 = 691145732602054241LL;

	t26 = (x1617>>((x1618&x1619)-x1620));

	if (t26 != 2047LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1633 = UINT64_MAX;
	uint32_t x1634 = 92U;
	uint16_t x1635 = 943U;
	uint32_t x1636 = 1U;

	t27 = (x1633>>((x1634&x1635)-x1636));

	if (t27 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1701 = 1538U;
	volatile int32_t x1702 = INT32_MIN;
	volatile int16_t x1703 = INT16_MAX;
	int64_t x1704 = -13LL;

	t28 = (x1701>>((x1702&x1703)-x1704));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1833 = UINT32_MAX;
	static volatile int8_t x1836 = INT8_MIN;

	t29 = (x1833>>((x1834&x1835)-x1836));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2005 = 24462U;
	int32_t x2006 = 0;
	int8_t x2007 = INT8_MIN;
	static int32_t t30 = -54566345;

	t30 = (x2005>>((x2006&x2007)-x2008));

	if (t30 != 12231) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2025 = INT32_MAX;
	uint16_t x2026 = 15U;
	static int8_t x2028 = -1;
	volatile int32_t t31 = 961837220;

	t31 = (x2025>>((x2026&x2027)-x2028));

	if (t31 != 1048575) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2193 = 1;
	static int8_t x2194 = INT8_MAX;
	int8_t x2195 = 7;
	int8_t x2196 = -1;
	int32_t t32 = -21;

	t32 = (x2193>>((x2194&x2195)-x2196));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2257 = 79926410U;
	uint64_t x2258 = UINT64_MAX;
	volatile int16_t x2259 = INT16_MIN;
	int16_t x2260 = INT16_MIN;
	uint32_t t33 = 7U;

	t33 = (x2257>>((x2258&x2259)-x2260));

	if (t33 != 79926410U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2285 = INT8_MAX;
	uint32_t x2286 = 440976222U;
	int32_t x2287 = INT32_MIN;
	static int8_t x2288 = -3;
	int32_t t34 = 1143780;

	t34 = (x2285>>((x2286&x2287)-x2288));

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2289 = UINT16_MAX;
	int16_t x2290 = INT16_MIN;
	volatile uint8_t x2291 = 53U;
	int8_t x2292 = -1;
	volatile int32_t t35 = 0;

	t35 = (x2289>>((x2290&x2291)-x2292));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2559 = 5500U;
	uint32_t x2560 = UINT32_MAX;
	int32_t t36 = -4788643;

	t36 = (x2557>>((x2558&x2559)-x2560));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2582 = 3;
	static uint32_t x2584 = UINT32_MAX;
	volatile int32_t t37 = 66;

	t37 = (x2581>>((x2582&x2583)-x2584));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2608 = -1;
	int64_t t38 = 535LL;

	t38 = (x2605>>((x2606&x2607)-x2608));

	if (t38 != 499127575LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2777 = INT8_MAX;
	int64_t x2778 = 0LL;
	volatile int16_t x2780 = -2;
	volatile int32_t t39 = 916095;

	t39 = (x2777>>((x2778&x2779)-x2780));

	if (t39 != 31) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2837 = UINT64_MAX;
	static int16_t x2838 = 8;
	uint32_t x2839 = 70U;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = (x2837>>((x2838&x2839)-x2840));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2853 = UINT64_MAX;
	static volatile int64_t x2854 = -1LL;
	uint16_t x2855 = UINT16_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x2853>>((x2854&x2855)-x2856));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2918 = INT64_MIN;
	int64_t x2920 = -1LL;
	int32_t t42 = 459135291;

	t42 = (x2917>>((x2918&x2919)-x2920));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x2925 = INT8_MAX;
	volatile int8_t x2926 = 1;
	static int32_t x2928 = -3;
	volatile int32_t t43 = 0;

	t43 = (x2925>>((x2926&x2927)-x2928));

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2933 = UINT16_MAX;
	uint8_t x2934 = 13U;
	uint64_t x2935 = 252LLU;
	static int8_t x2936 = -1;
	static volatile int32_t t44 = 5;

	t44 = (x2933>>((x2934&x2935)-x2936));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2961 = UINT8_MAX;
	volatile int64_t x2962 = 22983073LL;
	volatile uint64_t x2964 = UINT64_MAX;
	static int32_t t45 = -2788;

	t45 = (x2961>>((x2962&x2963)-x2964));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3061 = 21U;
	static uint8_t x3062 = 0U;
	int64_t x3063 = INT64_MAX;
	int8_t x3064 = 0;
	volatile int32_t t46 = -38018195;

	t46 = (x3061>>((x3062&x3063)-x3064));

	if (t46 != 21) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3137 = 0U;
	int8_t x3138 = 53;
	uint32_t x3139 = 109U;

	t47 = (x3137>>((x3138&x3139)-x3140));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3277 = UINT8_MAX;
	static int32_t x3278 = INT32_MIN;
	static int8_t x3279 = INT8_MAX;
	static int8_t x3280 = -1;
	int32_t t48 = 108;

	t48 = (x3277>>((x3278&x3279)-x3280));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3373 = INT64_MAX;
	int32_t x3374 = -1;
	uint8_t x3375 = UINT8_MAX;
	static volatile uint8_t x3376 = UINT8_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x3373>>((x3374&x3375)-x3376));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3737 = INT8_MAX;
	uint8_t x3739 = 2U;
	int16_t x3740 = -9;
	volatile int32_t t50 = -628808;

	t50 = (x3737>>((x3738&x3739)-x3740));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x3778 = 2U;
	uint8_t x3779 = 3U;

	t51 = (x3777>>((x3778&x3779)-x3780));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3837 = INT16_MAX;
	static int16_t x3838 = -1;
	int32_t x3839 = 1;
	int32_t x3840 = -1;

	t52 = (x3837>>((x3838&x3839)-x3840));

	if (t52 != 8191) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3877 = 13832698072LLU;
	int32_t x3878 = INT32_MIN;
	uint16_t x3879 = 2166U;
	int16_t x3880 = -1;
	uint64_t t53 = 1299LLU;

	t53 = (x3877>>((x3878&x3879)-x3880));

	if (t53 != 6916349036LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3889 = INT16_MAX;
	int32_t x3891 = 293513;
	static uint64_t x3892 = UINT64_MAX;
	volatile int32_t t54 = -6394579;

	t54 = (x3889>>((x3890&x3891)-x3892));

	if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3921 = 7386865730201LL;
	uint32_t x3922 = 6U;
	int8_t x3923 = -3;
	static int64_t t55 = 36330LL;

	t55 = (x3921>>((x3922&x3923)-x3924));

	if (t55 != 230839554068LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x4074 = UINT32_MAX;
	int32_t x4076 = INT32_MIN;
	int32_t t56 = -52378057;

	t56 = (x4073>>((x4074&x4075)-x4076));

	if (t56 != 6770) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4109 = INT32_MAX;
	int8_t x4112 = -1;
	int32_t t57 = 238395;

	t57 = (x4109>>((x4110&x4111)-x4112));

	if (t57 != 8388607) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4115 = -1;
	int32_t x4116 = -1;
	static volatile int32_t t58 = -70;

	t58 = (x4113>>((x4114&x4115)-x4116));

	if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4237 = UINT16_MAX;
	static int64_t x4238 = 5LL;
	static uint32_t x4239 = 552543463U;
	int32_t x4240 = -1;
	static int32_t t59 = 49274;

	t59 = (x4237>>((x4238&x4239)-x4240));

	if (t59 != 1023) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4281 = 1509386115U;
	uint32_t x4282 = 16493U;
	uint32_t x4283 = 68117U;

	t60 = (x4281>>((x4282&x4283)-x4284));

	if (t60 != 377346528U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x4309 = 591834183;
	volatile int64_t x4310 = INT64_MIN;
	static uint16_t x4311 = 1U;
	int16_t x4312 = -1;
	static volatile int32_t t61 = -1375658;

	t61 = (x4309>>((x4310&x4311)-x4312));

	if (t61 != 295917091) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4349 = 109U;
	uint32_t x4350 = 33042268U;
	volatile int32_t x4351 = INT32_MIN;
	int32_t x4352 = -1;
	volatile int32_t t62 = 22176;

	t62 = (x4349>>((x4350&x4351)-x4352));

	if (t62 != 54) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x4389 = UINT8_MAX;
	uint64_t x4390 = 359543LLU;
	int8_t x4391 = 0;
	int32_t t63 = -2;

	t63 = (x4389>>((x4390&x4391)-x4392));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4401 = 2U;
	volatile int32_t x4402 = 6;
	int64_t x4403 = -52LL;
	int32_t x4404 = -1;

	t64 = (x4401>>((x4402&x4403)-x4404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4453 = UINT8_MAX;
	int64_t x4454 = 764LL;

	t65 = (x4453>>((x4454&x4455)-x4456));

	if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4486 = 18U;
	volatile uint64_t x4488 = UINT64_MAX;
	int64_t t66 = -3519567944154821LL;

	t66 = (x4485>>((x4486&x4487)-x4488));

	if (t66 != 5722062LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4655 = 687U;
	uint8_t x4656 = 0U;
	int32_t t67 = 10;

	t67 = (x4653>>((x4654&x4655)-x4656));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4661 = 173697034LLU;
	int16_t x4662 = INT16_MIN;
	uint16_t x4663 = 1U;
	uint32_t x4664 = UINT32_MAX;
	volatile uint64_t t68 = 433630381880792LLU;

	t68 = (x4661>>((x4662&x4663)-x4664));

	if (t68 != 86848517LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4721 = 10U;
	static int16_t x4722 = INT16_MIN;
	int8_t x4723 = 5;
	int32_t x4724 = -1;

	t69 = (x4721>>((x4722&x4723)-x4724));

	if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4850 = UINT8_MAX;
	uint8_t x4851 = 5U;
	volatile int8_t x4852 = 2;
	int32_t t70 = 1126750;

	t70 = (x4849>>((x4850&x4851)-x4852));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4909 = 2760U;
	volatile int8_t x4910 = 26;
	uint16_t x4911 = 570U;
	int16_t x4912 = 0;
	int32_t t71 = 1;

	t71 = (x4909>>((x4910&x4911)-x4912));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x5041 = 2474;
	volatile int8_t x5042 = -1;
	static uint8_t x5043 = 5U;
	uint64_t x5044 = UINT64_MAX;
	int32_t t72 = -4;

	t72 = (x5041>>((x5042&x5043)-x5044));

	if (t72 != 38) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x5089 = UINT32_MAX;
	volatile int8_t x5092 = -1;
	volatile uint32_t t73 = 394U;

	t73 = (x5089>>((x5090&x5091)-x5092));

	if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5218 = 4;
	int8_t x5219 = 1;
	static int16_t x5220 = 0;
	volatile int32_t t74 = 12;

	t74 = (x5217>>((x5218&x5219)-x5220));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5241 = 20167127361LL;
	static int32_t x5242 = -3;
	volatile uint8_t x5243 = 1U;
	volatile int64_t t75 = 3224LL;

	t75 = (x5241>>((x5242&x5243)-x5244));

	if (t75 != 37LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5261 = INT16_MAX;
	int16_t x5262 = INT16_MAX;
	static uint8_t x5263 = 24U;
	static int32_t x5264 = 2;
	static volatile int32_t t76 = 6;

	t76 = (x5261>>((x5262&x5263)-x5264));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5393 = UINT16_MAX;
	static uint64_t x5394 = 28LLU;
	uint64_t x5395 = UINT64_MAX;
	uint32_t x5396 = 12U;
	volatile int32_t t77 = -7721097;

	t77 = (x5393>>((x5394&x5395)-x5396));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x5598 = 9U;
	int8_t x5599 = 17;
	static int8_t x5600 = -1;
	static int32_t t78 = -70795115;

	t78 = (x5597>>((x5598&x5599)-x5600));

	if (t78 != 138) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x5621 = 17810831335479472LLU;
	int8_t x5622 = 2;
	volatile int32_t x5623 = 13526572;
	int64_t x5624 = -1LL;

	t79 = (x5621>>((x5622&x5623)-x5624));

	if (t79 != 8905415667739736LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5637 = 961045005U;
	volatile int8_t x5638 = 4;
	static uint16_t x5639 = UINT16_MAX;
	static volatile int8_t x5640 = 0;

	t80 = (x5637>>((x5638&x5639)-x5640));

	if (t80 != 60065312U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5738 = 29;
	static int64_t t81 = -10922721552359LL;

	t81 = (x5737>>((x5738&x5739)-x5740));

	if (t81 != 160629570492LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5758 = 6;
	int16_t x5760 = -1;
	static volatile int32_t t82 = 8279929;

	t82 = (x5757>>((x5758&x5759)-x5760));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5813 = 0U;
	uint8_t x5814 = 0U;
	uint64_t x5815 = UINT64_MAX;
	int64_t x5816 = -1LL;

	t83 = (x5813>>((x5814&x5815)-x5816));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5845 = 4259552U;
	int8_t x5846 = INT8_MIN;
	int32_t x5847 = 112;
	uint8_t x5848 = 0U;
	volatile uint32_t t84 = 4U;

	t84 = (x5845>>((x5846&x5847)-x5848));

	if (t84 != 4259552U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5921 = UINT16_MAX;
	volatile int64_t x5922 = INT64_MIN;
	uint64_t x5923 = 524482883192LLU;
	int32_t x5924 = -1;

	t85 = (x5921>>((x5922&x5923)-x5924));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x6045 = INT32_MAX;
	int16_t x6046 = INT16_MAX;
	static volatile uint8_t x6047 = 0U;

	t86 = (x6045>>((x6046&x6047)-x6048));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x6062 = 1007844;
	int32_t x6063 = INT32_MIN;
	volatile int32_t t87 = -16;

	t87 = (x6061>>((x6062&x6063)-x6064));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6145 = UINT64_MAX;
	uint32_t x6146 = 516811U;
	volatile uint16_t x6148 = 1U;
	uint64_t t88 = 16532075324393LLU;

	t88 = (x6145>>((x6146&x6147)-x6148));

	if (t88 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6165 = 5U;
	uint32_t x6166 = 6U;
	uint8_t x6167 = UINT8_MAX;
	int32_t x6168 = -1;
	volatile int32_t t89 = -37998406;

	t89 = (x6165>>((x6166&x6167)-x6168));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x6231 = INT8_MIN;
	volatile uint32_t x6232 = UINT32_MAX;
	volatile uint64_t t90 = 235018LLU;

	t90 = (x6229>>((x6230&x6231)-x6232));

	if (t90 != 2581276842764721LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6377 = 41279610LLU;
	int16_t x6378 = 22;
	int8_t x6379 = INT8_MIN;
	uint64_t t91 = 1506759072057674LLU;

	t91 = (x6377>>((x6378&x6379)-x6380));

	if (t91 != 5039LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x6413 = 709;
	volatile int8_t x6414 = 17;
	uint16_t x6415 = 5U;
	int8_t x6416 = -1;
	volatile int32_t t92 = 27398859;

	t92 = (x6413>>((x6414&x6415)-x6416));

	if (t92 != 177) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x6422 = UINT16_MAX;
	int32_t t93 = 32;

	t93 = (x6421>>((x6422&x6423)-x6424));

	if (t93 != 50) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x6441 = UINT8_MAX;
	int32_t x6442 = INT32_MIN;
	uint32_t x6443 = 468442018U;
	int64_t x6444 = -1LL;
	static volatile int32_t t94 = 2304487;

	t94 = (x6441>>((x6442&x6443)-x6444));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x6450 = -1LL;
	volatile int8_t x6451 = INT8_MIN;
	static int8_t x6452 = INT8_MIN;
	static int32_t t95 = -3263;

	t95 = (x6449>>((x6450&x6451)-x6452));

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6621 = UINT32_MAX;
	static int8_t x6622 = INT8_MAX;
	static int64_t x6623 = -1LL;
	static int8_t x6624 = INT8_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (x6621>>((x6622&x6623)-x6624));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6633 = 1U;
	static int64_t x6634 = 1847LL;
	uint64_t x6635 = 1LLU;
	volatile int8_t x6636 = 1;
	int32_t t97 = 461;

	t97 = (x6633>>((x6634&x6635)-x6636));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6769 = 942099823716809LLU;
	int64_t x6770 = INT64_MIN;
	volatile int32_t x6771 = INT32_MAX;
	volatile int16_t x6772 = -4;
	uint64_t t98 = 403592945653540214LLU;

	t98 = (x6769>>((x6770&x6771)-x6772));

	if (t98 != 58881238982300LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6842 = INT16_MIN;
	int16_t x6843 = INT16_MAX;
	uint32_t x6844 = UINT32_MAX;
	int64_t t99 = 1LL;

	t99 = (x6841>>((x6842&x6843)-x6844));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

