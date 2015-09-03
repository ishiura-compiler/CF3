#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x71 = -3;
uint32_t x72 = UINT32_MAX;
int64_t t1 = 1LL;
uint64_t t5 = 1533122920250LLU;
int32_t x397 = 2;
volatile uint64_t x609 = 728631378LLU;
int8_t x611 = -1;
static volatile int8_t x847 = -1;
int8_t x848 = 0;
volatile int32_t t11 = -22;
int8_t x1091 = -2;
static volatile uint64_t x1334 = 3757LLU;
static uint32_t x1336 = 707U;
uint64_t t14 = 16338690241491LLU;
uint8_t x1337 = 3U;
int32_t t15 = -334242;
static volatile uint8_t x1378 = 12U;
uint64_t x1407 = 0LLU;
volatile uint32_t t18 = 313U;
int8_t x1457 = INT8_MAX;
uint32_t x1458 = 4153872U;
volatile int32_t t20 = -8;
uint16_t x1662 = UINT16_MAX;
volatile int32_t t21 = 3957;
int8_t x1741 = INT8_MIN;
static int8_t x1743 = -6;
uint8_t x1866 = 2U;
volatile int32_t t23 = 38248;
static uint16_t x2074 = UINT16_MAX;
volatile int32_t t26 = 450085;
uint64_t x2134 = 1018595831LLU;
uint8_t x2241 = 6U;
volatile uint16_t x2363 = 758U;
int8_t x2477 = 11;
uint64_t t31 = 4017666379755LLU;
volatile uint16_t x2622 = 88U;
int64_t t34 = -1488LL;
int64_t x2827 = INT64_MIN;
volatile int64_t t36 = 0LL;
int16_t x2965 = INT16_MIN;
static uint32_t x2967 = 0U;
int64_t t38 = 1769503LL;
int8_t x3097 = INT8_MAX;
static volatile int16_t x3100 = 0;
uint64_t x3242 = 67708961253LLU;
volatile int32_t x3381 = -860228983;
static uint64_t x3382 = UINT64_MAX;
volatile int8_t x3383 = 0;
volatile uint64_t t43 = 854773149011990869LLU;
uint32_t x3619 = 0U;
int8_t x3733 = -1;
int32_t t47 = -7524;
int64_t x4080 = -1LL;
uint64_t x4086 = 3822851418991LLU;
static uint32_t x4119 = 10U;
static volatile uint32_t t52 = 130834553U;
int64_t x4349 = -1LL;
int64_t x4351 = -1LL;
volatile int64_t t56 = -14LL;
static int16_t x4521 = INT16_MAX;
static volatile int32_t t58 = -7830808;
int64_t x4581 = 2387457825LL;
volatile uint16_t x4726 = 1862U;
int16_t x4727 = -1;
volatile int16_t x4789 = -377;
int16_t x4792 = -1;
volatile int32_t t61 = -11925;
int8_t x4804 = 0;
uint16_t x4810 = 9840U;
volatile uint64_t x4811 = UINT64_MAX;
static int8_t x4812 = -1;
int16_t x4837 = INT16_MAX;
uint32_t x4838 = UINT32_MAX;
uint32_t t64 = 131479123U;
int16_t x5022 = INT16_MAX;
volatile uint64_t x5155 = 8049LLU;
static uint32_t t67 = 398794723U;
uint64_t t70 = 20187802813275107LLU;
static int16_t x5295 = -1;
int8_t x5438 = INT8_MAX;
int64_t t74 = 7500104LL;
int64_t x5619 = 0LL;
volatile uint64_t x5659 = 2087087260586LLU;
int8_t x5759 = -1;
int32_t t78 = -3240401;
uint64_t x5810 = UINT64_MAX;
static volatile uint64_t t80 = 27454153034785LLU;
uint32_t x6074 = UINT32_MAX;
uint8_t x6076 = 0U;
int8_t x6256 = -1;
int8_t x6265 = INT8_MAX;
int16_t x6306 = INT16_MAX;
volatile int16_t x6308 = -1;
static int32_t t87 = 25923;
volatile int64_t t89 = 106979205990057650LL;
volatile int8_t x6625 = -30;
static int16_t x6630 = INT16_MAX;
volatile int8_t x6632 = -1;
static uint64_t t93 = 4594328637189407LLU;
volatile int16_t x6869 = INT16_MIN;
int8_t x6871 = 0;
int32_t x6872 = -52;
int64_t x7090 = 471727337613LL;
int32_t x7092 = -1;
volatile int64_t t96 = -10LL;
int64_t x7181 = INT64_MIN;
int32_t x7518 = 5587;


void f0(void) {
	uint32_t x33 = 28362U;
	uint16_t x34 = 28U;
	uint16_t x35 = UINT16_MAX;
	uint16_t x36 = 0U;
	static uint32_t t0 = 1536233662U;

	t0 = (x33%(x34<<(x35*x36)));

	if (t0 != 26U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x69 = INT16_MIN;
	static volatile int64_t x70 = 22537567081385LL;

	t1 = (x69%(x70<<(x71*x72)));

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x77 = -3;
	uint8_t x78 = UINT8_MAX;
	static uint64_t x79 = UINT64_MAX;
	int8_t x80 = -1;
	int32_t t2 = -8770067;

	t2 = (x77%(x78<<(x79*x80)));

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x173 = 151445972U;
	static int8_t x174 = INT8_MAX;
	uint32_t x175 = 0U;
	int16_t x176 = -1;
	uint32_t t3 = 0U;

	t3 = (x173%(x174<<(x175*x176)));

	if (t3 != 123U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x237 = 413U;
	uint16_t x238 = 5U;
	volatile uint8_t x239 = 0U;
	int64_t x240 = INT64_MIN;
	uint32_t t4 = 48U;

	t4 = (x237%(x238<<(x239*x240)));

	if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x309 = 32LLU;
	int8_t x310 = 31;
	uint64_t x311 = 49223LLU;
	int16_t x312 = 0;

	t5 = (x309%(x310<<(x311*x312)));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x398 = 48892419774584105LL;
	int16_t x399 = 13;
	static int64_t x400 = 0LL;
	int64_t t6 = -1LL;

	t6 = (x397%(x398<<(x399*x400)));

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x461 = 3U;
	uint64_t x462 = 9757665400854LLU;
	static int8_t x463 = 0;
	volatile uint32_t x464 = UINT32_MAX;
	static uint64_t t7 = 3808800875583LLU;

	t7 = (x461%(x462<<(x463*x464)));

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x573 = INT64_MAX;
	volatile uint32_t x574 = 3275U;
	static int32_t x575 = -1;
	int16_t x576 = -1;
	int64_t t8 = -1660892563LL;

	t8 = (x573%(x574<<(x575*x576)));

	if (t8 != 1407LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x610 = INT16_MAX;
	uint64_t x612 = UINT64_MAX;
	static uint64_t t9 = 1580259LLU;

	t9 = (x609%(x610<<(x611*x612)));

	if (t9 != 24366LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x789 = UINT16_MAX;
	volatile int64_t x790 = 67362177921378LL;
	int8_t x791 = 0;
	int64_t x792 = INT64_MIN;
	volatile int64_t t10 = -471026308LL;

	t10 = (x789%(x790<<(x791*x792)));

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x845 = INT32_MAX;
	uint16_t x846 = UINT16_MAX;

	t11 = (x845%(x846<<(x847*x848)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1089 = UINT32_MAX;
	uint64_t x1090 = UINT64_MAX;
	volatile int16_t x1092 = -20;
	volatile uint64_t t12 = 28537979157LLU;

	t12 = (x1089%(x1090<<(x1091*x1092)));

	if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x1233 = INT8_MIN;
	uint16_t x1234 = 2556U;
	volatile int16_t x1235 = -1;
	int16_t x1236 = -1;
	int32_t t13 = 1;

	t13 = (x1233%(x1234<<(x1235*x1236)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1333 = -1LL;
	int8_t x1335 = 0;

	t14 = (x1333%(x1334<<(x1335*x1336)));

	if (t14 != 2329LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1338 = UINT8_MAX;
	int32_t x1339 = INT32_MIN;
	uint32_t x1340 = 508U;

	t15 = (x1337%(x1338<<(x1339*x1340)));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x1377 = -1LL;
	static int32_t x1379 = -1;
	static volatile int64_t x1380 = -1LL;
	volatile int64_t t16 = -28529615LL;

	t16 = (x1377%(x1378<<(x1379*x1380)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1397 = INT64_MIN;
	uint64_t x1398 = 484LLU;
	static int8_t x1399 = -1;
	int16_t x1400 = -31;
	volatile uint64_t t17 = 2390416565713LLU;

	t17 = (x1397%(x1398<<(x1399*x1400)));

	if (t17 != 386547056640LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1405 = INT16_MIN;
	uint32_t x1406 = 6390U;
	volatile uint8_t x1408 = UINT8_MAX;

	t18 = (x1405%(x1406<<(x1407*x1408)));

	if (t18 != 4658U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1459 = 15128964LLU;
	int64_t x1460 = INT64_MIN;
	static volatile uint32_t t19 = 7391U;

	t19 = (x1457%(x1458<<(x1459*x1460)));

	if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1501 = INT8_MAX;
	volatile uint16_t x1502 = 9U;
	static uint8_t x1503 = UINT8_MAX;
	uint8_t x1504 = 0U;

	t20 = (x1501%(x1502<<(x1503*x1504)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1661 = 8U;
	int8_t x1663 = 0;
	static int8_t x1664 = INT8_MIN;

	t21 = (x1661%(x1662<<(x1663*x1664)));

	if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1742 = 70U;
	static int8_t x1744 = -3;
	static volatile int32_t t22 = 4484033;

	t22 = (x1741%(x1742<<(x1743*x1744)));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1865 = 728;
	uint16_t x1867 = UINT16_MAX;
	volatile uint8_t x1868 = 0U;

	t23 = (x1865%(x1866<<(x1867*x1868)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1949 = 217U;
	uint16_t x1950 = 2837U;
	static int8_t x1951 = -1;
	int64_t x1952 = -1LL;
	uint32_t t24 = 4420794U;

	t24 = (x1949%(x1950<<(x1951*x1952)));

	if (t24 != 217U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x2017 = 3618LLU;
	int8_t x2018 = 1;
	static int8_t x2019 = 0;
	volatile int8_t x2020 = -28;
	uint64_t t25 = 6343143223LLU;

	t25 = (x2017%(x2018<<(x2019*x2020)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2073 = INT16_MIN;
	uint64_t x2075 = 109414LLU;
	static volatile int64_t x2076 = INT64_MIN;

	t26 = (x2073%(x2074<<(x2075*x2076)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x2133 = 406;
	uint8_t x2135 = 0U;
	static int32_t x2136 = INT32_MIN;
	volatile uint64_t t27 = 369419937414LLU;

	t27 = (x2133%(x2134<<(x2135*x2136)));

	if (t27 != 406LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x2242 = 25U;
	volatile int8_t x2243 = 12;
	volatile int8_t x2244 = 1;
	volatile uint32_t t28 = 25752U;

	t28 = (x2241%(x2242<<(x2243*x2244)));

	if (t28 != 6U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x2293 = 11U;
	uint64_t x2294 = 1964102393LLU;
	static int16_t x2295 = 23;
	volatile uint8_t x2296 = 0U;
	uint64_t t29 = 8828578177577612LLU;

	t29 = (x2293%(x2294<<(x2295*x2296)));

	if (t29 != 11LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x2361 = INT32_MAX;
	volatile int16_t x2362 = 3;
	uint8_t x2364 = 0U;
	int32_t t30 = -82;

	t30 = (x2361%(x2362<<(x2363*x2364)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2478 = 488479454703979LLU;
	static int8_t x2479 = -1;
	uint8_t x2480 = 0U;

	t31 = (x2477%(x2478<<(x2479*x2480)));

	if (t31 != 11LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2541 = 529199880U;
	uint64_t x2542 = 157526405112705LLU;
	uint8_t x2543 = 0U;
	static int32_t x2544 = 574038625;
	volatile uint64_t t32 = 7447627LLU;

	t32 = (x2541%(x2542<<(x2543*x2544)));

	if (t32 != 529199880LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2621 = INT8_MIN;
	static uint8_t x2623 = 0U;
	static int32_t x2624 = -4;
	static volatile int32_t t33 = -7207512;

	t33 = (x2621%(x2622<<(x2623*x2624)));

	if (t33 != -40) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2737 = INT64_MAX;
	int8_t x2738 = INT8_MAX;
	volatile uint64_t x2739 = UINT64_MAX;
	int8_t x2740 = -2;

	t34 = (x2737%(x2738<<(x2739*x2740)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2773 = -1LL;
	volatile int32_t x2774 = INT32_MAX;
	int16_t x2775 = 0;
	volatile int64_t x2776 = INT64_MIN;
	int64_t t35 = 204LL;

	t35 = (x2773%(x2774<<(x2775*x2776)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x2825 = INT64_MIN;
	uint32_t x2826 = 28648188U;
	static volatile uint64_t x2828 = 19094271860LLU;

	t36 = (x2825%(x2826<<(x2827*x2828)));

	if (t36 != -24004376LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2925 = 22U;
	int8_t x2926 = INT8_MAX;
	uint64_t x2927 = UINT64_MAX;
	static int16_t x2928 = -1;
	int32_t t37 = -3042138;

	t37 = (x2925%(x2926<<(x2927*x2928)));

	if (t37 != 22) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2966 = 250148961840LL;
	int32_t x2968 = INT32_MIN;

	t38 = (x2965%(x2966<<(x2967*x2968)));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x3098 = 3687;
	volatile int64_t x3099 = INT64_MAX;
	volatile int32_t t39 = 223;

	t39 = (x3097%(x3098<<(x3099*x3100)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x3237 = -961269956;
	uint32_t x3238 = 724574348U;
	int8_t x3239 = 0;
	uint64_t x3240 = UINT64_MAX;
	uint32_t t40 = 7912330U;

	t40 = (x3237%(x3238<<(x3239*x3240)));

	if (t40 != 435399948U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3241 = INT8_MAX;
	int64_t x3243 = 0LL;
	int8_t x3244 = -1;
	static volatile uint64_t t41 = 4438323909049835LLU;

	t41 = (x3241%(x3242<<(x3243*x3244)));

	if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3329 = INT8_MIN;
	uint16_t x3330 = UINT16_MAX;
	int64_t x3331 = INT64_MIN;
	int8_t x3332 = 0;
	volatile int32_t t42 = -360;

	t42 = (x3329%(x3330<<(x3331*x3332)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3384 = -1;

	t43 = (x3381%(x3382<<(x3383*x3384)));

	if (t43 != 18446744072849322633LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x3445 = -391536156318LL;
	uint32_t x3446 = 167U;
	volatile uint8_t x3447 = 0U;
	int16_t x3448 = INT16_MIN;
	volatile int64_t t44 = 49315917093LL;

	t44 = (x3445%(x3446<<(x3447*x3448)));

	if (t44 != -24LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3541 = 14U;
	int32_t x3542 = 451322646;
	uint64_t x3543 = 0LLU;
	static volatile int64_t x3544 = 2504310893LL;
	int32_t t45 = -2529;

	t45 = (x3541%(x3542<<(x3543*x3544)));

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3617 = UINT8_MAX;
	volatile uint8_t x3618 = 29U;
	uint64_t x3620 = 92LLU;
	static volatile int32_t t46 = 249787;

	t46 = (x3617%(x3618<<(x3619*x3620)));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3734 = UINT8_MAX;
	int16_t x3735 = -18;
	uint64_t x3736 = UINT64_MAX;

	t47 = (x3733%(x3734<<(x3735*x3736)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3921 = INT16_MIN;
	volatile int64_t x3922 = 20667LL;
	uint8_t x3923 = 5U;
	uint8_t x3924 = 0U;
	volatile int64_t t48 = -24973440013364678LL;

	t48 = (x3921%(x3922<<(x3923*x3924)));

	if (t48 != -12101LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x4001 = -170879016649220526LL;
	static uint64_t x4002 = 12397260080307LLU;
	uint32_t x4003 = UINT32_MAX;
	int16_t x4004 = -1;
	volatile uint64_t t49 = 4806154412LLU;

	t49 = (x4001%(x4002<<(x4003*x4004)));

	if (t49 != 22602833036602LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x4077 = UINT64_MAX;
	int32_t x4078 = 4179345;
	int32_t x4079 = -3;
	uint64_t t50 = 1123513897LLU;

	t50 = (x4077%(x4078<<(x4079*x4080)));

	if (t50 != 12580815LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x4085 = -92663;
	int32_t x4087 = -31;
	volatile int64_t x4088 = -1LL;
	volatile uint64_t t51 = 767272LLU;

	t51 = (x4085%(x4086<<(x4087*x4088)));

	if (t51 != 701788673242207753LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4117 = -7;
	uint32_t x4118 = 1094U;
	int8_t x4120 = 0;

	t52 = (x4117%(x4118<<(x4119*x4120)));

	if (t52 != 963U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x4133 = INT64_MIN;
	int8_t x4134 = 1;
	int16_t x4135 = 0;
	volatile int16_t x4136 = 43;
	volatile int64_t t53 = -2491LL;

	t53 = (x4133%(x4134<<(x4135*x4136)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x4309 = 1;
	uint32_t x4310 = UINT32_MAX;
	int32_t x4311 = -3;
	int8_t x4312 = -10;
	uint32_t t54 = 10255734U;

	t54 = (x4309%(x4310<<(x4311*x4312)));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x4333 = 0U;
	volatile uint32_t x4334 = 5745396U;
	int64_t x4335 = INT64_MAX;
	static int8_t x4336 = 0;
	volatile uint32_t t55 = 20995013U;

	t55 = (x4333%(x4334<<(x4335*x4336)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x4350 = UINT16_MAX;
	int8_t x4352 = 0;

	t56 = (x4349%(x4350<<(x4351*x4352)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4522 = 6U;
	uint16_t x4523 = 0U;
	int32_t x4524 = 195731;
	volatile int32_t t57 = 64167;

	t57 = (x4521%(x4522<<(x4523*x4524)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x4569 = 4U;
	uint16_t x4570 = UINT16_MAX;
	uint16_t x4571 = 0U;
	static uint8_t x4572 = 16U;

	t58 = (x4569%(x4570<<(x4571*x4572)));

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x4582 = 4442898U;
	int16_t x4583 = -1;
	uint32_t x4584 = UINT32_MAX;
	volatile int64_t t59 = 1395004526700LL;

	t59 = (x4581%(x4582<<(x4583*x4584)));

	if (t59 != 6064497LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x4725 = INT8_MAX;
	static volatile int32_t x4728 = -12;
	volatile int32_t t60 = 11;

	t60 = (x4725%(x4726<<(x4727*x4728)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x4790 = 5306U;
	static volatile int64_t x4791 = -1LL;

	t61 = (x4789%(x4790<<(x4791*x4792)));

	if (t61 != -377) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4801 = -1;
	uint64_t x4802 = 7231LLU;
	volatile int32_t x4803 = -1;
	uint64_t t62 = 59787LLU;

	t62 = (x4801%(x4802<<(x4803*x4804)));

	if (t62 != 6630LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4809 = INT16_MIN;
	volatile int32_t t63 = 384;

	t63 = (x4809%(x4810<<(x4811*x4812)));

	if (t63 != -13088) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4839 = 0;
	int64_t x4840 = -603077181LL;

	t64 = (x4837%(x4838<<(x4839*x4840)));

	if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x5021 = -1LL;
	int32_t x5023 = 0;
	volatile int64_t x5024 = INT64_MIN;
	volatile int64_t t65 = 3949672LL;

	t65 = (x5021%(x5022<<(x5023*x5024)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x5145 = 2;
	volatile uint32_t x5146 = 693342435U;
	static volatile int8_t x5147 = 0;
	int8_t x5148 = INT8_MIN;
	static uint32_t t66 = 7U;

	t66 = (x5145%(x5146<<(x5147*x5148)));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x5153 = INT32_MAX;
	static uint32_t x5154 = 341843U;
	int16_t x5156 = 0;

	t67 = (x5153%(x5154<<(x5155*x5156)));

	if (t67 != 25921U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x5165 = 2298U;
	static volatile int8_t x5166 = 1;
	uint16_t x5167 = 0U;
	static int32_t x5168 = -5;
	int32_t t68 = 32045477;

	t68 = (x5165%(x5166<<(x5167*x5168)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x5265 = INT64_MAX;
	uint8_t x5266 = 13U;
	int8_t x5267 = 0;
	int16_t x5268 = 4;
	int64_t t69 = -5056640LL;

	t69 = (x5265%(x5266<<(x5267*x5268)));

	if (t69 != 7LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5285 = INT8_MIN;
	uint64_t x5286 = 7997776721811370LLU;
	uint64_t x5287 = UINT64_MAX;
	uint64_t x5288 = UINT64_MAX;

	t70 = (x5285%(x5286<<(x5287*x5288)));

	if (t70 != 3870953212532268LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5293 = UINT32_MAX;
	uint16_t x5294 = 28171U;
	volatile int32_t x5296 = -1;
	uint32_t t71 = 4003177U;

	t71 = (x5293%(x5294<<(x5295*x5296)));

	if (t71 != 16635U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x5381 = -964648953243LL;
	uint8_t x5382 = 5U;
	int32_t x5383 = -1;
	uint8_t x5384 = 0U;
	int64_t t72 = -3945237492482694LL;

	t72 = (x5381%(x5382<<(x5383*x5384)));

	if (t72 != -3LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5417 = INT8_MAX;
	int64_t x5418 = INT64_MAX;
	int64_t x5419 = INT64_MIN;
	uint64_t x5420 = 1114682231962684096LLU;
	volatile int64_t t73 = -80740670281937LL;

	t73 = (x5417%(x5418<<(x5419*x5420)));

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x5437 = -1LL;
	uint16_t x5439 = 0U;
	int8_t x5440 = -1;

	t74 = (x5437%(x5438<<(x5439*x5440)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x5617 = -9;
	int16_t x5618 = 682;
	uint8_t x5620 = 112U;
	volatile int32_t t75 = 2;

	t75 = (x5617%(x5618<<(x5619*x5620)));

	if (t75 != -9) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x5641 = 156757715U;
	volatile int16_t x5642 = INT16_MAX;
	volatile uint64_t x5643 = 6536719218722112302LLU;
	int64_t x5644 = INT64_MIN;
	uint32_t t76 = 5487031U;

	t76 = (x5641%(x5642<<(x5643*x5644)));

	if (t76 != 387U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5657 = -1;
	int16_t x5658 = INT16_MAX;
	static volatile int64_t x5660 = INT64_MIN;
	volatile int32_t t77 = -6814;

	t77 = (x5657%(x5658<<(x5659*x5660)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x5757 = INT32_MAX;
	volatile int8_t x5758 = INT8_MAX;
	static uint64_t x5760 = UINT64_MAX;

	t78 = (x5757%(x5758<<(x5759*x5760)));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x5781 = 4177499;
	uint16_t x5782 = 29808U;
	uint8_t x5783 = 0U;
	static int16_t x5784 = INT16_MAX;
	int32_t t79 = 504;

	t79 = (x5781%(x5782<<(x5783*x5784)));

	if (t79 != 4379) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x5809 = 7;
	static volatile uint32_t x5811 = UINT32_MAX;
	uint8_t x5812 = 0U;

	t80 = (x5809%(x5810<<(x5811*x5812)));

	if (t80 != 7LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5857 = INT8_MAX;
	volatile uint8_t x5858 = 113U;
	int8_t x5859 = -23;
	int8_t x5860 = -1;
	volatile int32_t t81 = -230161983;

	t81 = (x5857%(x5858<<(x5859*x5860)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x5905 = UINT64_MAX;
	int64_t x5906 = 10LL;
	uint16_t x5907 = 1U;
	uint32_t x5908 = 3U;
	uint64_t t82 = 140757609829688609LLU;

	t82 = (x5905%(x5906<<(x5907*x5908)));

	if (t82 != 15LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5925 = UINT16_MAX;
	int16_t x5926 = INT16_MAX;
	uint8_t x5927 = 0U;
	uint16_t x5928 = 3611U;
	volatile int32_t t83 = 14;

	t83 = (x5925%(x5926<<(x5927*x5928)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x6073 = 357669LLU;
	int32_t x6075 = INT32_MAX;
	static uint64_t t84 = 19148444LLU;

	t84 = (x6073%(x6074<<(x6075*x6076)));

	if (t84 != 357669LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x6253 = -1;
	uint16_t x6254 = 121U;
	int32_t x6255 = -1;
	int32_t t85 = 2587800;

	t85 = (x6253%(x6254<<(x6255*x6256)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x6266 = UINT8_MAX;
	int64_t x6267 = -1LL;
	uint64_t x6268 = UINT64_MAX;
	volatile int32_t t86 = 671786504;

	t86 = (x6265%(x6266<<(x6267*x6268)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6305 = 97U;
	int32_t x6307 = -1;

	t87 = (x6305%(x6306<<(x6307*x6308)));

	if (t87 != 97) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x6349 = UINT64_MAX;
	int16_t x6350 = INT16_MAX;
	uint32_t x6351 = UINT32_MAX;
	int8_t x6352 = -6;
	uint64_t t88 = 18714398913LLU;

	t88 = (x6349%(x6350<<(x6351*x6352)));

	if (t88 != 524287LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6505 = 24094LL;
	volatile uint32_t x6506 = 948U;
	static volatile uint16_t x6507 = 115U;
	int16_t x6508 = 0;

	t89 = (x6505%(x6506<<(x6507*x6508)));

	if (t89 != 394LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6577 = INT16_MAX;
	volatile uint8_t x6578 = 71U;
	int64_t x6579 = -1LL;
	int64_t x6580 = -1LL;
	static int32_t t90 = 1;

	t90 = (x6577%(x6578<<(x6579*x6580)));

	if (t90 != 107) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6626 = UINT32_MAX;
	int64_t x6627 = INT64_MIN;
	uint64_t x6628 = 54666LLU;
	volatile uint32_t t91 = 2U;

	t91 = (x6625%(x6626<<(x6627*x6628)));

	if (t91 != 4294967266U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6629 = 14063545703180LLU;
	int16_t x6631 = -2;
	uint64_t t92 = 849675054670LLU;

	t92 = (x6629%(x6630<<(x6631*x6632)));

	if (t92 != 26496LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6661 = -1;
	static uint64_t x6662 = 162LLU;
	uint16_t x6663 = 0U;
	volatile uint64_t x6664 = 26334983279LLU;

	t93 = (x6661%(x6662<<(x6663*x6664)));

	if (t93 != 51LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x6870 = UINT16_MAX;
	int32_t t94 = -1370284;

	t94 = (x6869%(x6870<<(x6871*x6872)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x7037 = 14;
	static uint32_t x7038 = UINT32_MAX;
	uint32_t x7039 = UINT32_MAX;
	static int32_t x7040 = -1;
	volatile uint32_t t95 = 1U;

	t95 = (x7037%(x7038<<(x7039*x7040)));

	if (t95 != 14U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x7089 = 41052LL;
	uint32_t x7091 = UINT32_MAX;

	t96 = (x7089%(x7090<<(x7091*x7092)));

	if (t96 != 41052LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x7182 = INT16_MAX;
	static uint32_t x7183 = UINT32_MAX;
	volatile int16_t x7184 = -12;
	volatile int64_t t97 = 157001090LL;

	t97 = (x7181%(x7182<<(x7183*x7184)));

	if (t97 != -262144LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x7221 = UINT64_MAX;
	static uint16_t x7222 = 2427U;
	int16_t x7223 = -1;
	static int64_t x7224 = -1LL;
	uint64_t t98 = 32607599797660LLU;

	t98 = (x7221%(x7222<<(x7223*x7224)));

	if (t98 != 4827LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x7517 = INT16_MIN;
	int64_t x7519 = -1LL;
	static int8_t x7520 = -1;
	volatile int32_t t99 = 293878;

	t99 = (x7517%(x7518<<(x7519*x7520)));

	if (t99 != -10420) { NG(); } else { ; }
	
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

