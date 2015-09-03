#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x333 = INT64_MIN;
volatile uint32_t x334 = 3831U;
static volatile int32_t t2 = 145567;
volatile int32_t t3 = -28883518;
uint16_t x453 = UINT16_MAX;
uint32_t x662 = 52U;
uint32_t x675 = 9U;
int64_t x840 = INT64_MIN;
int16_t x965 = -2;
static int8_t x966 = INT8_MAX;
uint64_t x968 = 9761329335LLU;
volatile int32_t t11 = 3793206;
int32_t t14 = 391;
volatile int8_t x1138 = 0;
int16_t x1173 = INT16_MAX;
uint32_t x1176 = 35945230U;
int64_t x1216 = -1985154954LL;
static int64_t x1232 = -33800LL;
static int16_t x1250 = 564;
static uint8_t x1252 = UINT8_MAX;
int16_t x1258 = 38;
volatile uint32_t x1280 = UINT32_MAX;
int8_t x1298 = 22;
uint16_t x1299 = 0U;
int32_t x1309 = -1;
uint64_t x1385 = 16226LLU;
int64_t x1386 = 178LL;
volatile uint16_t x1387 = 4U;
int16_t x1388 = INT16_MIN;
int32_t t24 = 780799618;
volatile uint32_t x1432 = 24741U;
uint32_t x1434 = 817683204U;
static int8_t x1543 = 11;
volatile uint32_t x1648 = 0U;
static uint64_t x1924 = UINT64_MAX;
volatile uint16_t x1970 = 24U;
static volatile int8_t x1971 = 0;
uint16_t x2179 = 1U;
uint32_t x2235 = 22U;
uint16_t x2347 = 0U;
volatile int32_t t38 = -336208102;
static int32_t x2401 = -1;
int64_t x2402 = 3838752LL;
static uint16_t x2403 = 33U;
volatile int32_t t43 = 327140089;
static uint16_t x2967 = 1U;
volatile int32_t x2972 = 380188329;
static int8_t x2995 = 2;
volatile int32_t t48 = -122741;
uint32_t x3094 = 0U;
uint16_t x3095 = 1U;
uint16_t x3106 = 3529U;
uint8_t x3108 = 27U;
int32_t t50 = -1450460;
static uint8_t x3120 = 0U;
int8_t x3190 = INT8_MAX;
uint8_t x3243 = 3U;
volatile int32_t t56 = -38;
uint32_t x3441 = UINT32_MAX;
volatile int32_t t57 = 426;
static int8_t x3447 = 3;
int16_t x3489 = -1;
int8_t x3501 = INT8_MIN;
int16_t x3536 = -1;
int64_t x3561 = INT64_MAX;
int32_t t64 = -5316;
int64_t x3581 = INT64_MIN;
volatile uint8_t x3583 = 0U;
int8_t x3681 = INT8_MIN;
uint8_t x3683 = 15U;
int32_t x3684 = INT32_MIN;
int16_t x3917 = INT16_MAX;
uint32_t x3918 = UINT32_MAX;
uint16_t x3978 = 46U;
int32_t x3980 = 3;
volatile int32_t t68 = 12;
int8_t x4031 = 5;
volatile int32_t x4032 = -2;
int32_t t69 = -220863211;
static volatile uint64_t x4066 = 3334613LLU;
static int32_t x4067 = 25;
uint16_t x4121 = 1U;
uint8_t x4159 = 7U;
static int16_t x4160 = -1;
static volatile int32_t t75 = 20;
volatile uint8_t x4169 = UINT8_MAX;
static int32_t t77 = 26097;
int8_t x4289 = INT8_MIN;
int8_t x4354 = INT8_MAX;
volatile int32_t x4356 = INT32_MIN;
int32_t t81 = 1764161;
uint64_t x4385 = 142LLU;
int32_t t82 = -4228893;
static int32_t t83 = 45276171;
int8_t x4614 = INT8_MAX;
int64_t x4616 = 1859209LL;
static volatile int32_t t85 = -77638994;
volatile uint8_t x4783 = 63U;
uint16_t x4784 = 76U;
int8_t x5030 = 1;
volatile int32_t x5045 = 1138;
uint32_t x5078 = 22106U;
uint64_t x5080 = UINT64_MAX;
int32_t t91 = 1022;
int16_t x5084 = -11199;
uint32_t x5117 = 120U;
static uint8_t x5120 = UINT8_MAX;
int16_t x5155 = 12;
int8_t x5156 = INT8_MIN;
uint16_t x5162 = 1033U;
static volatile int32_t x5163 = 9;
uint64_t x5229 = UINT64_MAX;
volatile int16_t x5232 = INT16_MIN;
volatile int32_t t97 = 448811535;


void f0(void) {
	int8_t x13 = INT8_MIN;
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 3U;
	int8_t x16 = INT8_MIN;
	int32_t t0 = 156928014;

	t0 = (x13<((x14<<x15)+x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x313 = INT64_MIN;
	static int32_t x314 = 41;
	volatile uint32_t x315 = 20U;
	static uint16_t x316 = 402U;
	volatile int32_t t1 = 34038959;

	t1 = (x313<((x314<<x315)+x316));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x335 = 3U;
	int16_t x336 = INT16_MIN;

	t2 = (x333<((x334<<x335)+x336));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x341 = -1;
	uint8_t x342 = 4U;
	int16_t x343 = 24;
	volatile uint16_t x344 = UINT16_MAX;

	t3 = (x341<((x342<<x343)+x344));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x417 = -1;
	uint16_t x418 = 27074U;
	static volatile int8_t x419 = 0;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t4 = 8357201;

	t4 = (x417<((x418<<x419)+x420));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x454 = INT16_MAX;
	int8_t x455 = 11;
	int64_t x456 = -1LL;
	static volatile int32_t t5 = 15714141;

	t5 = (x453<((x454<<x455)+x456));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x661 = 612U;
	volatile uint8_t x663 = 0U;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t6 = -25;

	t6 = (x661<((x662<<x663)+x664));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x673 = 11U;
	static volatile uint32_t x674 = 18827U;
	int64_t x676 = 11478308411LL;
	volatile int32_t t7 = 499;

	t7 = (x673<((x674<<x675)+x676));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x701 = 878634639911716LL;
	static uint32_t x702 = 299698U;
	volatile int16_t x703 = 2;
	volatile int64_t x704 = -1LL;
	static volatile int32_t t8 = 466512;

	t8 = (x701<((x702<<x703)+x704));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x729 = -87;
	int16_t x730 = INT16_MAX;
	uint16_t x731 = 1U;
	volatile int16_t x732 = INT16_MIN;
	static int32_t t9 = 6535;

	t9 = (x729<((x730<<x731)+x732));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x837 = 46U;
	int64_t x838 = 95066894562751036LL;
	int16_t x839 = 0;
	static volatile int32_t t10 = -107785504;

	t10 = (x837<((x838<<x839)+x840));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x967 = 9U;

	t11 = (x965<((x966<<x967)+x968));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x1097 = INT32_MAX;
	int64_t x1098 = 3385573237LL;
	volatile uint8_t x1099 = 0U;
	uint8_t x1100 = 0U;
	int32_t t12 = -28215;

	t12 = (x1097<((x1098<<x1099)+x1100));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1109 = UINT64_MAX;
	static uint16_t x1110 = UINT16_MAX;
	int8_t x1111 = 3;
	static volatile uint64_t x1112 = UINT64_MAX;
	static int32_t t13 = 0;

	t13 = (x1109<((x1110<<x1111)+x1112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1133 = 0U;
	uint8_t x1134 = 11U;
	static volatile uint32_t x1135 = 13U;
	uint32_t x1136 = 45961U;

	t14 = (x1133<((x1134<<x1135)+x1136));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x1137 = INT8_MIN;
	uint8_t x1139 = 4U;
	volatile uint16_t x1140 = 4U;
	static volatile int32_t t15 = -426;

	t15 = (x1137<((x1138<<x1139)+x1140));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x1174 = INT16_MAX;
	uint8_t x1175 = 13U;
	volatile int32_t t16 = 112973745;

	t16 = (x1173<((x1174<<x1175)+x1176));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1213 = INT64_MIN;
	volatile int16_t x1214 = 0;
	static int16_t x1215 = 1;
	volatile int32_t t17 = -446710733;

	t17 = (x1213<((x1214<<x1215)+x1216));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1229 = -1;
	static int16_t x1230 = 241;
	volatile uint32_t x1231 = 14U;
	volatile int32_t t18 = -1444855;

	t18 = (x1229<((x1230<<x1231)+x1232));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1249 = -27;
	int8_t x1251 = 9;
	volatile int32_t t19 = -6;

	t19 = (x1249<((x1250<<x1251)+x1252));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1257 = 518118708LLU;
	static int16_t x1259 = 1;
	int64_t x1260 = -281392192021LL;
	int32_t t20 = -268106;

	t20 = (x1257<((x1258<<x1259)+x1260));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1277 = 21U;
	uint64_t x1278 = UINT64_MAX;
	uint32_t x1279 = 1U;
	volatile int32_t t21 = -986;

	t21 = (x1277<((x1278<<x1279)+x1280));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1297 = 360U;
	uint64_t x1300 = UINT64_MAX;
	int32_t t22 = -51215;

	t22 = (x1297<((x1298<<x1299)+x1300));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1310 = 126U;
	uint8_t x1311 = 6U;
	int8_t x1312 = -1;
	volatile int32_t t23 = -3;

	t23 = (x1309<((x1310<<x1311)+x1312));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {


	t24 = (x1385<((x1386<<x1387)+x1388));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1429 = INT64_MIN;
	int8_t x1430 = INT8_MAX;
	uint8_t x1431 = 4U;
	volatile int32_t t25 = -1;

	t25 = (x1429<((x1430<<x1431)+x1432));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1433 = -1;
	int8_t x1435 = 18;
	static int64_t x1436 = INT64_MIN;
	static volatile int32_t t26 = -27;

	t26 = (x1433<((x1434<<x1435)+x1436));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1529 = INT16_MIN;
	int16_t x1530 = INT16_MAX;
	uint16_t x1531 = 1U;
	uint32_t x1532 = 1701857U;
	int32_t t27 = -44;

	t27 = (x1529<((x1530<<x1531)+x1532));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1541 = UINT8_MAX;
	uint8_t x1542 = 10U;
	volatile int8_t x1544 = INT8_MAX;
	int32_t t28 = 32;

	t28 = (x1541<((x1542<<x1543)+x1544));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1545 = 4580U;
	uint8_t x1546 = UINT8_MAX;
	static uint8_t x1547 = 1U;
	static uint32_t x1548 = 2241U;
	static int32_t t29 = 539112249;

	t29 = (x1545<((x1546<<x1547)+x1548));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1645 = INT8_MIN;
	uint8_t x1646 = 0U;
	uint8_t x1647 = 2U;
	volatile int32_t t30 = 2098163;

	t30 = (x1645<((x1646<<x1647)+x1648));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1849 = UINT8_MAX;
	static uint64_t x1850 = 1LLU;
	static uint8_t x1851 = 0U;
	uint32_t x1852 = 113368U;
	int32_t t31 = 4;

	t31 = (x1849<((x1850<<x1851)+x1852));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1893 = 0;
	uint8_t x1894 = UINT8_MAX;
	int32_t x1895 = 0;
	uint64_t x1896 = 70336244102665008LLU;
	int32_t t32 = -161;

	t32 = (x1893<((x1894<<x1895)+x1896));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1921 = INT64_MIN;
	uint16_t x1922 = 5U;
	uint8_t x1923 = 9U;
	volatile int32_t t33 = 0;

	t33 = (x1921<((x1922<<x1923)+x1924));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1969 = -182936468848809LL;
	static int8_t x1972 = 1;
	int32_t t34 = 379195171;

	t34 = (x1969<((x1970<<x1971)+x1972));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2109 = -1LL;
	uint16_t x2110 = 4U;
	uint16_t x2111 = 15U;
	int8_t x2112 = INT8_MAX;
	int32_t t35 = -1;

	t35 = (x2109<((x2110<<x2111)+x2112));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2177 = INT64_MAX;
	volatile int16_t x2178 = 665;
	uint32_t x2180 = UINT32_MAX;
	int32_t t36 = -13130983;

	t36 = (x2177<((x2178<<x2179)+x2180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2233 = UINT64_MAX;
	int64_t x2234 = 61775686940LL;
	static uint32_t x2236 = 1U;
	volatile int32_t t37 = 85;

	t37 = (x2233<((x2234<<x2235)+x2236));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2345 = INT16_MIN;
	static int32_t x2346 = INT32_MAX;
	volatile uint64_t x2348 = 1987927731434669LLU;

	t38 = (x2345<((x2346<<x2347)+x2348));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x2385 = INT32_MAX;
	static volatile uint64_t x2386 = 764730899587LLU;
	int16_t x2387 = 1;
	int8_t x2388 = -1;
	volatile int32_t t39 = -758847540;

	t39 = (x2385<((x2386<<x2387)+x2388));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2404 = 4U;
	volatile int32_t t40 = 12;

	t40 = (x2401<((x2402<<x2403)+x2404));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x2561 = INT64_MAX;
	uint32_t x2562 = UINT32_MAX;
	uint8_t x2563 = 12U;
	static int8_t x2564 = INT8_MAX;
	volatile int32_t t41 = 65405;

	t41 = (x2561<((x2562<<x2563)+x2564));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2805 = -1;
	uint64_t x2806 = UINT64_MAX;
	static int64_t x2807 = 6LL;
	volatile uint8_t x2808 = 37U;
	volatile int32_t t42 = -3;

	t42 = (x2805<((x2806<<x2807)+x2808));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2821 = 306;
	uint32_t x2822 = UINT32_MAX;
	uint16_t x2823 = 3U;
	int8_t x2824 = -1;

	t43 = (x2821<((x2822<<x2823)+x2824));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2965 = INT8_MIN;
	volatile uint8_t x2966 = 7U;
	int32_t x2968 = INT32_MIN;
	volatile int32_t t44 = 81724;

	t44 = (x2965<((x2966<<x2967)+x2968));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2969 = INT32_MIN;
	uint64_t x2970 = UINT64_MAX;
	int8_t x2971 = 0;
	int32_t t45 = -197;

	t45 = (x2969<((x2970<<x2971)+x2972));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2993 = INT8_MIN;
	uint64_t x2994 = 1874LLU;
	int8_t x2996 = INT8_MAX;
	volatile int32_t t46 = 69;

	t46 = (x2993<((x2994<<x2995)+x2996));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3021 = 127U;
	uint32_t x3022 = 6707056U;
	static volatile int64_t x3023 = 0LL;
	uint16_t x3024 = 30U;
	static int32_t t47 = -971100;

	t47 = (x3021<((x3022<<x3023)+x3024));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3065 = INT16_MIN;
	int8_t x3066 = INT8_MAX;
	uint8_t x3067 = 0U;
	volatile int32_t x3068 = -1;

	t48 = (x3065<((x3066<<x3067)+x3068));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3093 = INT64_MIN;
	uint16_t x3096 = 68U;
	volatile int32_t t49 = -3455;

	t49 = (x3093<((x3094<<x3095)+x3096));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3105 = INT16_MIN;
	uint8_t x3107 = 0U;

	t50 = (x3105<((x3106<<x3107)+x3108));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3117 = UINT64_MAX;
	static uint32_t x3118 = UINT32_MAX;
	uint64_t x3119 = 6LLU;
	int32_t t51 = 2;

	t51 = (x3117<((x3118<<x3119)+x3120));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3189 = INT16_MAX;
	volatile uint8_t x3191 = 6U;
	int64_t x3192 = 42990LL;
	volatile int32_t t52 = -226370;

	t52 = (x3189<((x3190<<x3191)+x3192));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3205 = 11748;
	static volatile uint8_t x3206 = 1U;
	uint16_t x3207 = 5U;
	int16_t x3208 = INT16_MIN;
	volatile int32_t t53 = -171361;

	t53 = (x3205<((x3206<<x3207)+x3208));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3237 = INT16_MIN;
	uint8_t x3238 = 1U;
	static int8_t x3239 = 4;
	int8_t x3240 = INT8_MIN;
	int32_t t54 = 116;

	t54 = (x3237<((x3238<<x3239)+x3240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3241 = -1;
	volatile uint32_t x3242 = UINT32_MAX;
	uint8_t x3244 = 24U;
	volatile int32_t t55 = 10;

	t55 = (x3241<((x3242<<x3243)+x3244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3333 = UINT32_MAX;
	int8_t x3334 = 25;
	uint16_t x3335 = 24U;
	int32_t x3336 = -1;

	t56 = (x3333<((x3334<<x3335)+x3336));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3442 = UINT16_MAX;
	uint16_t x3443 = 3U;
	static uint8_t x3444 = UINT8_MAX;

	t57 = (x3441<((x3442<<x3443)+x3444));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3445 = 81997341743160LLU;
	volatile uint64_t x3446 = 1LLU;
	uint16_t x3448 = 288U;
	int32_t t58 = -16567792;

	t58 = (x3445<((x3446<<x3447)+x3448));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3481 = 11LLU;
	uint32_t x3482 = UINT32_MAX;
	volatile uint8_t x3483 = 3U;
	uint8_t x3484 = 20U;
	volatile int32_t t59 = -25273;

	t59 = (x3481<((x3482<<x3483)+x3484));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3490 = INT8_MAX;
	volatile uint8_t x3491 = 12U;
	uint64_t x3492 = 11110293LLU;
	volatile int32_t t60 = -12660964;

	t60 = (x3489<((x3490<<x3491)+x3492));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3502 = UINT64_MAX;
	int8_t x3503 = 36;
	int64_t x3504 = INT64_MIN;
	volatile int32_t t61 = -633899085;

	t61 = (x3501<((x3502<<x3503)+x3504));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x3513 = UINT32_MAX;
	int8_t x3514 = INT8_MAX;
	int16_t x3515 = 0;
	volatile int8_t x3516 = INT8_MIN;
	volatile int32_t t62 = 124;

	t62 = (x3513<((x3514<<x3515)+x3516));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3533 = UINT32_MAX;
	int64_t x3534 = 232LL;
	uint8_t x3535 = 0U;
	volatile int32_t t63 = 21283;

	t63 = (x3533<((x3534<<x3535)+x3536));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x3562 = UINT16_MAX;
	uint16_t x3563 = 1U;
	int16_t x3564 = INT16_MAX;

	t64 = (x3561<((x3562<<x3563)+x3564));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3582 = UINT16_MAX;
	int8_t x3584 = INT8_MIN;
	int32_t t65 = -57530487;

	t65 = (x3581<((x3582<<x3583)+x3584));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x3682 = 7062536951421389LLU;
	volatile int32_t t66 = -1;

	t66 = (x3681<((x3682<<x3683)+x3684));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x3919 = 16U;
	int64_t x3920 = 50758619011603LL;
	volatile int32_t t67 = -1;

	t67 = (x3917<((x3918<<x3919)+x3920));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3977 = 19;
	uint16_t x3979 = 14U;

	t68 = (x3977<((x3978<<x3979)+x3980));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4029 = 7U;
	volatile uint8_t x4030 = 1U;

	t69 = (x4029<((x4030<<x4031)+x4032));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4041 = INT32_MIN;
	static uint32_t x4042 = UINT32_MAX;
	static uint32_t x4043 = 29U;
	static volatile uint64_t x4044 = 97LLU;
	int32_t t70 = -1056148;

	t70 = (x4041<((x4042<<x4043)+x4044));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4053 = INT64_MIN;
	uint64_t x4054 = 154LLU;
	uint8_t x4055 = 10U;
	uint64_t x4056 = 1LLU;
	int32_t t71 = 13;

	t71 = (x4053<((x4054<<x4055)+x4056));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4065 = 1U;
	int32_t x4068 = INT32_MIN;
	volatile int32_t t72 = -1;

	t72 = (x4065<((x4066<<x4067)+x4068));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4097 = INT32_MIN;
	uint16_t x4098 = 2U;
	uint8_t x4099 = 6U;
	int64_t x4100 = INT64_MIN;
	int32_t t73 = 2495953;

	t73 = (x4097<((x4098<<x4099)+x4100));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4122 = INT16_MAX;
	static uint16_t x4123 = 13U;
	int16_t x4124 = INT16_MIN;
	volatile int32_t t74 = 744860829;

	t74 = (x4121<((x4122<<x4123)+x4124));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4157 = 4487U;
	int16_t x4158 = 1820;

	t75 = (x4157<((x4158<<x4159)+x4160));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4170 = 56U;
	uint8_t x4171 = 3U;
	int64_t x4172 = INT64_MIN;
	int32_t t76 = -1693882;

	t76 = (x4169<((x4170<<x4171)+x4172));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4173 = 13U;
	int16_t x4174 = INT16_MAX;
	static int8_t x4175 = 12;
	int8_t x4176 = 2;

	t77 = (x4173<((x4174<<x4175)+x4176));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4209 = INT16_MIN;
	volatile uint16_t x4210 = 328U;
	uint8_t x4211 = 16U;
	static volatile uint32_t x4212 = 3305250U;
	int32_t t78 = -7020108;

	t78 = (x4209<((x4210<<x4211)+x4212));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4249 = INT16_MIN;
	int8_t x4250 = INT8_MAX;
	uint8_t x4251 = 12U;
	int64_t x4252 = INT64_MIN;
	static volatile int32_t t79 = -360;

	t79 = (x4249<((x4250<<x4251)+x4252));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4290 = UINT32_MAX;
	uint8_t x4291 = 1U;
	static int16_t x4292 = 5;
	volatile int32_t t80 = 23518998;

	t80 = (x4289<((x4290<<x4291)+x4292));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4353 = INT32_MIN;
	uint8_t x4355 = 5U;

	t81 = (x4353<((x4354<<x4355)+x4356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4386 = UINT8_MAX;
	uint64_t x4387 = 23LLU;
	int32_t x4388 = INT32_MIN;

	t82 = (x4385<((x4386<<x4387)+x4388));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4537 = UINT16_MAX;
	uint8_t x4538 = 4U;
	uint16_t x4539 = 11U;
	volatile int32_t x4540 = INT32_MIN;

	t83 = (x4537<((x4538<<x4539)+x4540));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4593 = INT16_MAX;
	static int16_t x4594 = INT16_MAX;
	static volatile uint8_t x4595 = 0U;
	uint32_t x4596 = 31822626U;
	int32_t t84 = 94635641;

	t84 = (x4593<((x4594<<x4595)+x4596));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4613 = -1;
	volatile uint16_t x4615 = 1U;

	t85 = (x4613<((x4614<<x4615)+x4616));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4753 = INT64_MAX;
	int16_t x4754 = 0;
	static uint16_t x4755 = 25U;
	volatile int64_t x4756 = -1LL;
	int32_t t86 = -2595;

	t86 = (x4753<((x4754<<x4755)+x4756));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x4781 = 1773030577811LLU;
	uint64_t x4782 = UINT64_MAX;
	volatile int32_t t87 = -1;

	t87 = (x4781<((x4782<<x4783)+x4784));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4949 = INT64_MIN;
	int16_t x4950 = INT16_MAX;
	uint8_t x4951 = 11U;
	static uint64_t x4952 = 4897664LLU;
	int32_t t88 = 11006246;

	t88 = (x4949<((x4950<<x4951)+x4952));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x5029 = 473U;
	volatile int8_t x5031 = 29;
	volatile int8_t x5032 = -1;
	int32_t t89 = 1655;

	t89 = (x5029<((x5030<<x5031)+x5032));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5046 = 3510775U;
	uint16_t x5047 = 24U;
	static int8_t x5048 = 7;
	static volatile int32_t t90 = 349;

	t90 = (x5045<((x5046<<x5047)+x5048));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5077 = 1LL;
	uint8_t x5079 = 8U;

	t91 = (x5077<((x5078<<x5079)+x5080));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5081 = INT64_MIN;
	static volatile int16_t x5082 = INT16_MAX;
	static uint8_t x5083 = 2U;
	volatile int32_t t92 = 748741801;

	t92 = (x5081<((x5082<<x5083)+x5084));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5118 = 1;
	volatile int8_t x5119 = 0;
	static int32_t t93 = -1;

	t93 = (x5117<((x5118<<x5119)+x5120));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x5153 = UINT16_MAX;
	static uint32_t x5154 = UINT32_MAX;
	int32_t t94 = 5891;

	t94 = (x5153<((x5154<<x5155)+x5156));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5161 = 47;
	volatile uint32_t x5164 = UINT32_MAX;
	static volatile int32_t t95 = -237940;

	t95 = (x5161<((x5162<<x5163)+x5164));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5189 = INT16_MIN;
	uint64_t x5190 = UINT64_MAX;
	static uint64_t x5191 = 0LLU;
	uint8_t x5192 = 60U;
	static volatile int32_t t96 = -4153903;

	t96 = (x5189<((x5190<<x5191)+x5192));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5230 = 3U;
	uint32_t x5231 = 14U;

	t97 = (x5229<((x5230<<x5231)+x5232));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5321 = 57U;
	static volatile uint64_t x5322 = 2476513833726LLU;
	static int8_t x5323 = 23;
	volatile int16_t x5324 = -6;
	static volatile int32_t t98 = 116;

	t98 = (x5321<((x5322<<x5323)+x5324));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5389 = INT32_MIN;
	uint16_t x5390 = 0U;
	int8_t x5391 = 15;
	uint16_t x5392 = 1276U;
	int32_t t99 = 60888721;

	t99 = (x5389<((x5390<<x5391)+x5392));

	if (t99 != 1) { NG(); } else { ; }
	
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

