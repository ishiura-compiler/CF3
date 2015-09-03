#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = -4176653;
uint8_t x115 = 22U;
static int64_t x165 = -1LL;
volatile uint32_t x358 = 7114972U;
int8_t x360 = -7;
int64_t x393 = -1LL;
uint64_t x395 = 11LLU;
static volatile uint8_t x396 = 100U;
static uint8_t x599 = 0U;
int64_t t13 = INT64_MAX;
static volatile int8_t x693 = INT8_MIN;
static uint64_t x937 = UINT64_MAX;
static uint8_t x938 = UINT8_MAX;
int8_t x939 = 15;
int8_t x1147 = 22;
int32_t x1273 = 6;
volatile int32_t t21 = 23339;
int8_t x1309 = -49;
uint32_t x1331 = 5U;
int8_t x1332 = INT8_MIN;
volatile uint16_t x1426 = 4952U;
int64_t x1428 = -11617LL;
static int32_t t24 = -688;
uint8_t x1482 = 0U;
volatile int32_t t25 = -3925;
int64_t x1690 = 5278848638387319LL;
int16_t x1691 = 48;
volatile int8_t x1692 = 7;
uint64_t t26 = 3678655979623664LLU;
volatile int64_t x1741 = 2LL;
volatile int64_t x1952 = INT64_MIN;
int64_t x2005 = INT64_MIN;
static uint16_t x2008 = 70U;
volatile uint32_t x2086 = 161U;
volatile uint64_t x2088 = 3645797603901LLU;
volatile int32_t t32 = -6;
static volatile int8_t x2180 = INT8_MIN;
int16_t x2259 = 1;
int8_t x2481 = -19;
uint8_t x2507 = 1U;
volatile int32_t x2586 = INT32_MAX;
volatile int32_t t38 = -34733;
uint32_t x2647 = 15U;
int16_t x2653 = INT16_MIN;
int32_t x2677 = INT32_MAX;
volatile int32_t t41 = INT32_MAX;
int16_t x2700 = INT16_MAX;
static int8_t x2843 = 0;
volatile int64_t x2844 = INT64_MIN;
int8_t x2993 = 2;
volatile int32_t t51 = 0;
int32_t x3014 = INT32_MAX;
static uint8_t x3015 = 2U;
uint8_t x3016 = UINT8_MAX;
int64_t x3049 = INT64_MIN;
static int8_t x3051 = 14;
uint8_t x3063 = 9U;
int32_t x3064 = INT32_MAX;
int32_t x3091 = 7;
static volatile uint8_t x3092 = 100U;
static int64_t x3229 = 3147489929190321537LL;
static int16_t x3231 = 0;
int64_t t58 = INT64_MIN;
int8_t x3268 = INT8_MAX;
volatile uint32_t x3303 = 5U;
static uint32_t x3354 = UINT32_MAX;
int16_t x3365 = 3624;
int8_t x3446 = 0;
int16_t x3487 = 1;
int16_t x3635 = 2;
int32_t x3705 = INT32_MAX;
int32_t t70 = INT32_MAX;
uint64_t x3778 = UINT64_MAX;
uint8_t x3779 = 0U;
int64_t x3878 = 2082124791483LL;
static volatile int32_t t72 = -10836;
volatile int8_t x3901 = INT8_MAX;
static volatile int32_t x3904 = INT32_MIN;
uint32_t x3979 = 0U;
volatile int32_t x3980 = INT32_MIN;
uint32_t x4094 = UINT32_MAX;
uint16_t x4095 = 1U;
static uint64_t x4104 = UINT64_MAX;
uint8_t x4159 = 57U;
static volatile int32_t t81 = INT32_MIN;
uint16_t x4175 = 0U;
uint16_t x4176 = UINT16_MAX;
volatile int32_t t83 = -10169;
static int16_t x4220 = -1;
int8_t x4233 = INT8_MAX;
volatile int32_t x4365 = 120999395;
uint32_t x4470 = 2U;
int16_t x4660 = 221;
volatile int64_t t91 = 20540346174LL;
int32_t t92 = 1512568;
static uint32_t t93 = 3U;
volatile uint64_t x4872 = UINT64_MAX;
volatile int64_t t96 = 21421LL;
volatile int16_t x4936 = -1;
static int32_t t98 = -1017589231;
int64_t x5070 = INT64_MAX;
static int32_t t99 = 82;


void f0(void) {
	int64_t x1 = -1LL;
	volatile uint64_t x2 = UINT64_MAX;
	static uint16_t x3 = 2U;
	int64_t t0 = -1298143LL;

	t0 = (x1|((x2>>x3)==x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x17 = 943;
	volatile int16_t x18 = 12;
	uint64_t x19 = 5LLU;
	static int64_t x20 = INT64_MIN;
	static volatile int32_t t1 = 8146;

	t1 = (x17|((x18>>x19)==x20));

	if (t1 != 943) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x113 = 171530U;
	uint8_t x114 = 4U;
	uint8_t x116 = 127U;
	uint32_t t2 = 30555U;

	t2 = (x113|((x114>>x115)==x116));

	if (t2 != 171530U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MAX;
	int16_t x155 = 1;
	int8_t x156 = INT8_MIN;
	int32_t t3 = INT32_MIN;

	t3 = (x153|((x154>>x155)==x156));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x166 = 2243328255724236875LL;
	static int8_t x167 = 3;
	volatile int64_t x168 = 1353633505LL;
	volatile int64_t t4 = -25070058283LL;

	t4 = (x165|((x166>>x167)==x168));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x169 = INT32_MAX;
	uint32_t x170 = 3U;
	static volatile int32_t x171 = 5;
	uint16_t x172 = 17626U;
	int32_t t5 = INT32_MAX;

	t5 = (x169|((x170>>x171)==x172));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x193 = -4;
	static volatile int32_t x194 = 151015;
	uint64_t x195 = 5LLU;
	int8_t x196 = INT8_MIN;
	volatile int32_t t6 = 7;

	t6 = (x193|((x194>>x195)==x196));

	if (t6 != -4) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x201 = INT8_MAX;
	static int32_t x202 = 3176;
	int16_t x203 = 8;
	int8_t x204 = -1;
	volatile int32_t t7 = -6;

	t7 = (x201|((x202>>x203)==x204));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = 8028;
	static volatile uint16_t x239 = 3U;
	int64_t x240 = INT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x237|((x238>>x239)==x240));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x357 = UINT32_MAX;
	static volatile uint8_t x359 = 31U;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x357|((x358>>x359)==x360));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x394 = UINT64_MAX;
	volatile int64_t t10 = 794172260LL;

	t10 = (x393|((x394>>x395)==x396));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x561 = INT64_MIN;
	static uint8_t x562 = UINT8_MAX;
	int32_t x563 = 1;
	int64_t x564 = INT64_MIN;
	int64_t t11 = INT64_MIN;

	t11 = (x561|((x562>>x563)==x564));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x573 = -12870;
	uint16_t x574 = 3718U;
	int8_t x575 = 2;
	volatile int16_t x576 = INT16_MAX;
	static int32_t t12 = 3198;

	t12 = (x573|((x574>>x575)==x576));

	if (t12 != -12870) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x597 = INT64_MAX;
	uint64_t x598 = 10LLU;
	volatile int64_t x600 = 21214332919198946LL;

	t13 = (x597|((x598>>x599)==x600));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x694 = 35U;
	int16_t x695 = 26;
	int32_t x696 = INT32_MAX;
	int32_t t14 = -1379;

	t14 = (x693|((x694>>x695)==x696));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x717 = -43;
	uint64_t x718 = UINT64_MAX;
	uint8_t x719 = 0U;
	static int32_t x720 = INT32_MIN;
	int32_t t15 = 27308;

	t15 = (x717|((x718>>x719)==x720));

	if (t15 != -43) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x725 = 288245LLU;
	volatile uint64_t x726 = UINT64_MAX;
	int8_t x727 = 1;
	static int16_t x728 = -1;
	volatile uint64_t t16 = 94077838533LLU;

	t16 = (x725|((x726>>x727)==x728));

	if (t16 != 288245LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x885 = 4070742575LL;
	volatile uint64_t x886 = UINT64_MAX;
	int8_t x887 = 0;
	volatile int8_t x888 = INT8_MAX;
	static int64_t t17 = -295LL;

	t17 = (x885|((x886>>x887)==x888));

	if (t17 != 4070742575LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x913 = INT32_MIN;
	uint32_t x914 = 22U;
	uint64_t x915 = 1LLU;
	int16_t x916 = INT16_MAX;
	volatile int32_t t18 = INT32_MIN;

	t18 = (x913|((x914>>x915)==x916));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x940 = 67885856U;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (x937|((x938>>x939)==x940));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1145 = UINT8_MAX;
	uint16_t x1146 = 0U;
	volatile int16_t x1148 = INT16_MIN;
	int32_t t20 = -163009;

	t20 = (x1145|((x1146>>x1147)==x1148));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1274 = INT16_MAX;
	static int16_t x1275 = 0;
	uint8_t x1276 = UINT8_MAX;

	t21 = (x1273|((x1274>>x1275)==x1276));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1310 = 8196537859LL;
	static int8_t x1311 = 13;
	volatile int32_t x1312 = 87546;
	int32_t t22 = 14999;

	t22 = (x1309|((x1310>>x1311)==x1312));

	if (t22 != -49) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1329 = INT8_MAX;
	static int16_t x1330 = 29;
	static int32_t t23 = 471;

	t23 = (x1329|((x1330>>x1331)==x1332));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1425 = 1U;
	int32_t x1427 = 4;

	t24 = (x1425|((x1426>>x1427)==x1428));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1481 = 59U;
	int8_t x1483 = 1;
	static volatile uint16_t x1484 = 20U;

	t25 = (x1481|((x1482>>x1483)==x1484));

	if (t25 != 59) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1689 = 372166250632771LLU;

	t26 = (x1689|((x1690>>x1691)==x1692));

	if (t26 != 372166250632771LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1742 = UINT64_MAX;
	static volatile int64_t x1743 = 47LL;
	uint32_t x1744 = 32141U;
	int64_t t27 = -129619967977437LL;

	t27 = (x1741|((x1742>>x1743)==x1744));

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1789 = -1LL;
	static int8_t x1790 = INT8_MAX;
	uint8_t x1791 = 16U;
	int64_t x1792 = INT64_MAX;
	int64_t t28 = -108275LL;

	t28 = (x1789|((x1790>>x1791)==x1792));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1933 = 6724487385LL;
	static uint32_t x1934 = UINT32_MAX;
	uint16_t x1935 = 0U;
	static int8_t x1936 = -1;
	int64_t t29 = -20001149802296LL;

	t29 = (x1933|((x1934>>x1935)==x1936));

	if (t29 != 6724487385LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1949 = -1104;
	volatile int64_t x1950 = INT64_MAX;
	int32_t x1951 = 6;
	volatile int32_t t30 = 429;

	t30 = (x1949|((x1950>>x1951)==x1952));

	if (t30 != -1104) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2006 = 3305U;
	uint8_t x2007 = 3U;
	int64_t t31 = INT64_MIN;

	t31 = (x2005|((x2006>>x2007)==x2008));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2085 = 623U;
	uint16_t x2087 = 24U;

	t32 = (x2085|((x2086>>x2087)==x2088));

	if (t32 != 623) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2177 = INT16_MIN;
	static volatile uint16_t x2178 = 3U;
	static uint8_t x2179 = 3U;
	int32_t t33 = -530679996;

	t33 = (x2177|((x2178>>x2179)==x2180));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2241 = 31U;
	static int64_t x2242 = INT64_MAX;
	int8_t x2243 = 23;
	int64_t x2244 = INT64_MIN;
	static volatile int32_t t34 = -1574725;

	t34 = (x2241|((x2242>>x2243)==x2244));

	if (t34 != 31) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2257 = INT16_MAX;
	volatile uint64_t x2258 = 4843204511049LLU;
	static int64_t x2260 = INT64_MIN;
	volatile int32_t t35 = -203209214;

	t35 = (x2257|((x2258>>x2259)==x2260));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2482 = 275136038370573220LLU;
	uint16_t x2483 = 34U;
	int32_t x2484 = 915680367;
	volatile int32_t t36 = -59;

	t36 = (x2481|((x2482>>x2483)==x2484));

	if (t36 != -19) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2505 = UINT32_MAX;
	uint32_t x2506 = 2U;
	volatile int64_t x2508 = -69812899615764LL;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x2505|((x2506>>x2507)==x2508));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x2585 = UINT8_MAX;
	int8_t x2587 = 1;
	static uint64_t x2588 = 895585LLU;

	t38 = (x2585|((x2586>>x2587)==x2588));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2645 = 4U;
	static uint64_t x2646 = 12390897346LLU;
	uint64_t x2648 = UINT64_MAX;
	static int32_t t39 = 13;

	t39 = (x2645|((x2646>>x2647)==x2648));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2654 = UINT16_MAX;
	static volatile int32_t x2655 = 3;
	int64_t x2656 = INT64_MIN;
	volatile int32_t t40 = 96;

	t40 = (x2653|((x2654>>x2655)==x2656));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2678 = INT16_MAX;
	int8_t x2679 = 0;
	int32_t x2680 = INT32_MIN;

	t41 = (x2677|((x2678>>x2679)==x2680));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2697 = -164LL;
	static uint16_t x2698 = UINT16_MAX;
	uint8_t x2699 = 16U;
	int64_t t42 = -9055885227049LL;

	t42 = (x2697|((x2698>>x2699)==x2700));

	if (t42 != -164LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2717 = INT64_MIN;
	uint16_t x2718 = 65U;
	volatile int32_t x2719 = 1;
	static int8_t x2720 = 0;
	static volatile int64_t t43 = INT64_MIN;

	t43 = (x2717|((x2718>>x2719)==x2720));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2801 = INT32_MAX;
	static uint16_t x2802 = 1935U;
	static uint8_t x2803 = 1U;
	uint16_t x2804 = 772U;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x2801|((x2802>>x2803)==x2804));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x2809 = 3672;
	int32_t x2810 = 4979;
	static int64_t x2811 = 1LL;
	uint8_t x2812 = 18U;
	volatile int32_t t45 = -230;

	t45 = (x2809|((x2810>>x2811)==x2812));

	if (t45 != 3672) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2841 = 28;
	uint64_t x2842 = 4305057LLU;
	int32_t t46 = -422297;

	t46 = (x2841|((x2842>>x2843)==x2844));

	if (t46 != 28) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2901 = -3807882LL;
	int16_t x2902 = 127;
	int16_t x2903 = 1;
	int32_t x2904 = -1;
	int64_t t47 = -2824580592583318LL;

	t47 = (x2901|((x2902>>x2903)==x2904));

	if (t47 != -3807882LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2933 = UINT64_MAX;
	static uint16_t x2934 = 74U;
	int8_t x2935 = 0;
	int64_t x2936 = -2318689089LL;
	uint64_t t48 = UINT64_MAX;

	t48 = (x2933|((x2934>>x2935)==x2936));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2973 = INT16_MIN;
	int64_t x2974 = 227895LL;
	static uint64_t x2975 = 4LLU;
	static volatile int64_t x2976 = INT64_MIN;
	volatile int32_t t49 = -3;

	t49 = (x2973|((x2974>>x2975)==x2976));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2989 = -5058;
	uint64_t x2990 = 1095LLU;
	volatile uint8_t x2991 = 13U;
	static uint8_t x2992 = UINT8_MAX;
	int32_t t50 = -950475;

	t50 = (x2989|((x2990>>x2991)==x2992));

	if (t50 != -5058) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2994 = 115U;
	uint8_t x2995 = 28U;
	volatile int8_t x2996 = INT8_MIN;

	t51 = (x2993|((x2994>>x2995)==x2996));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3013 = INT16_MIN;
	volatile int32_t t52 = 1408;

	t52 = (x3013|((x3014>>x3015)==x3016));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x3050 = UINT8_MAX;
	int8_t x3052 = 1;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x3049|((x3050>>x3051)==x3052));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3061 = INT64_MIN;
	volatile uint16_t x3062 = 13392U;
	volatile int64_t t54 = INT64_MIN;

	t54 = (x3061|((x3062>>x3063)==x3064));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3089 = UINT32_MAX;
	uint16_t x3090 = UINT16_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x3089|((x3090>>x3091)==x3092));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3121 = UINT32_MAX;
	uint16_t x3122 = 160U;
	volatile uint8_t x3123 = 3U;
	volatile int16_t x3124 = INT16_MIN;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x3121|((x3122>>x3123)==x3124));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3230 = UINT32_MAX;
	int16_t x3232 = 2780;
	volatile int64_t t57 = 10907249LL;

	t57 = (x3229|((x3230>>x3231)==x3232));

	if (t57 != 3147489929190321537LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3249 = INT64_MIN;
	uint64_t x3250 = 7731296077LLU;
	volatile uint16_t x3251 = 14U;
	uint64_t x3252 = UINT64_MAX;

	t58 = (x3249|((x3250>>x3251)==x3252));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3265 = 48222622U;
	volatile uint8_t x3266 = UINT8_MAX;
	volatile uint8_t x3267 = 14U;
	volatile uint32_t t59 = 90U;

	t59 = (x3265|((x3266>>x3267)==x3268));

	if (t59 != 48222622U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x3301 = 14U;
	volatile uint64_t x3302 = 373635699112LLU;
	volatile int16_t x3304 = INT16_MIN;
	volatile int32_t t60 = -1;

	t60 = (x3301|((x3302>>x3303)==x3304));

	if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3353 = UINT32_MAX;
	int32_t x3355 = 2;
	uint64_t x3356 = 14524309LLU;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x3353|((x3354>>x3355)==x3356));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3366 = 1758720LL;
	uint32_t x3367 = 4U;
	int8_t x3368 = INT8_MIN;
	volatile int32_t t62 = -55;

	t62 = (x3365|((x3366>>x3367)==x3368));

	if (t62 != 3624) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3445 = 76U;
	static uint16_t x3447 = 26U;
	static uint8_t x3448 = 18U;
	volatile int32_t t63 = -40;

	t63 = (x3445|((x3446>>x3447)==x3448));

	if (t63 != 76) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3485 = 37832815LLU;
	uint64_t x3486 = UINT64_MAX;
	int64_t x3488 = -109628980511906514LL;
	static uint64_t t64 = 6995432LLU;

	t64 = (x3485|((x3486>>x3487)==x3488));

	if (t64 != 37832815LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3489 = -1;
	volatile uint8_t x3490 = 7U;
	uint16_t x3491 = 18U;
	uint64_t x3492 = 22984209614477LLU;
	int32_t t65 = 47;

	t65 = (x3489|((x3490>>x3491)==x3492));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3577 = INT16_MAX;
	int8_t x3578 = INT8_MAX;
	volatile int8_t x3579 = 1;
	int64_t x3580 = 126694LL;
	int32_t t66 = -65;

	t66 = (x3577|((x3578>>x3579)==x3580));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3593 = 1300U;
	uint32_t x3594 = UINT32_MAX;
	int16_t x3595 = 2;
	int32_t x3596 = INT32_MAX;
	int32_t t67 = 1;

	t67 = (x3593|((x3594>>x3595)==x3596));

	if (t67 != 1300) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3633 = INT64_MIN;
	uint8_t x3634 = 7U;
	uint8_t x3636 = 0U;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x3633|((x3634>>x3635)==x3636));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3673 = 27207461981561LL;
	uint16_t x3674 = UINT16_MAX;
	static uint8_t x3675 = 0U;
	static uint32_t x3676 = UINT32_MAX;
	static volatile int64_t t69 = 1396LL;

	t69 = (x3673|((x3674>>x3675)==x3676));

	if (t69 != 27207461981561LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3706 = UINT8_MAX;
	int32_t x3707 = 10;
	uint16_t x3708 = 10907U;

	t70 = (x3705|((x3706>>x3707)==x3708));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x3777 = -1;
	static int16_t x3780 = -1;
	int32_t t71 = 6194;

	t71 = (x3777|((x3778>>x3779)==x3780));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3877 = INT8_MIN;
	static int8_t x3879 = 0;
	int64_t x3880 = INT64_MAX;

	t72 = (x3877|((x3878>>x3879)==x3880));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3902 = 4U;
	int32_t x3903 = 0;
	static volatile int32_t t73 = -44;

	t73 = (x3901|((x3902>>x3903)==x3904));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3913 = 206U;
	uint64_t x3914 = 89606LLU;
	int8_t x3915 = 2;
	int64_t x3916 = 4934229541802511LL;
	volatile uint32_t t74 = 200193176U;

	t74 = (x3913|((x3914>>x3915)==x3916));

	if (t74 != 206U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3977 = -1LL;
	uint16_t x3978 = 9U;
	int64_t t75 = -5846987280807758LL;

	t75 = (x3977|((x3978>>x3979)==x3980));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x4093 = 3U;
	int32_t x4096 = INT32_MAX;
	static uint32_t t76 = 7U;

	t76 = (x4093|((x4094>>x4095)==x4096));

	if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4097 = -5;
	int32_t x4098 = INT32_MAX;
	uint8_t x4099 = 12U;
	uint64_t x4100 = 894775032926LLU;
	volatile int32_t t77 = -4233197;

	t77 = (x4097|((x4098>>x4099)==x4100));

	if (t77 != -5) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4101 = -1LL;
	uint8_t x4102 = UINT8_MAX;
	volatile uint8_t x4103 = 8U;
	int64_t t78 = 10375265671LL;

	t78 = (x4101|((x4102>>x4103)==x4104));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x4133 = 38U;
	uint64_t x4134 = UINT64_MAX;
	uint8_t x4135 = 1U;
	static int8_t x4136 = INT8_MIN;
	volatile int32_t t79 = 4395965;

	t79 = (x4133|((x4134>>x4135)==x4136));

	if (t79 != 38) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4137 = 6;
	static int16_t x4138 = INT16_MAX;
	int16_t x4139 = 8;
	static uint16_t x4140 = 67U;
	int32_t t80 = 31;

	t80 = (x4137|((x4138>>x4139)==x4140));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4157 = INT32_MIN;
	volatile uint64_t x4158 = 122888LLU;
	int64_t x4160 = INT64_MAX;

	t81 = (x4157|((x4158>>x4159)==x4160));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x4173 = INT16_MIN;
	int8_t x4174 = 13;
	int32_t t82 = -107082866;

	t82 = (x4173|((x4174>>x4175)==x4176));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4201 = 620;
	static uint32_t x4202 = 8U;
	static volatile uint8_t x4203 = 0U;
	uint8_t x4204 = 0U;

	t83 = (x4201|((x4202>>x4203)==x4204));

	if (t83 != 620) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x4217 = 6U;
	int64_t x4218 = INT64_MAX;
	volatile uint16_t x4219 = 28U;
	int32_t t84 = -84120;

	t84 = (x4217|((x4218>>x4219)==x4220));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x4234 = INT8_MAX;
	volatile int8_t x4235 = 2;
	volatile int32_t x4236 = 7;
	int32_t t85 = -27138513;

	t85 = (x4233|((x4234>>x4235)==x4236));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4366 = 368427780LL;
	int16_t x4367 = 46;
	int8_t x4368 = 1;
	volatile int32_t t86 = 27874975;

	t86 = (x4365|((x4366>>x4367)==x4368));

	if (t86 != 120999395) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4465 = 3U;
	int8_t x4466 = 9;
	uint8_t x4467 = 1U;
	int32_t x4468 = INT32_MIN;
	volatile uint32_t t87 = 2019319361U;

	t87 = (x4465|((x4466>>x4467)==x4468));

	if (t87 != 3U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x4469 = INT32_MIN;
	uint16_t x4471 = 9U;
	int32_t x4472 = INT32_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (x4469|((x4470>>x4471)==x4472));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4493 = 62LL;
	static uint16_t x4494 = 422U;
	int64_t x4495 = 1LL;
	volatile uint64_t x4496 = 1274LLU;
	int64_t t89 = -2014LL;

	t89 = (x4493|((x4494>>x4495)==x4496));

	if (t89 != 62LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4577 = -1LL;
	int16_t x4578 = INT16_MAX;
	static volatile uint8_t x4579 = 6U;
	volatile uint32_t x4580 = UINT32_MAX;
	volatile int64_t t90 = -565968137LL;

	t90 = (x4577|((x4578>>x4579)==x4580));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4657 = -122LL;
	static int64_t x4658 = 4992LL;
	int8_t x4659 = 22;

	t91 = (x4657|((x4658>>x4659)==x4660));

	if (t91 != -122LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4661 = -1;
	uint64_t x4662 = UINT64_MAX;
	int8_t x4663 = 3;
	int32_t x4664 = -1594816;

	t92 = (x4661|((x4662>>x4663)==x4664));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4701 = 60U;
	static uint16_t x4702 = 40U;
	volatile int16_t x4703 = 3;
	static int8_t x4704 = -1;

	t93 = (x4701|((x4702>>x4703)==x4704));

	if (t93 != 60U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x4809 = 70U;
	volatile uint16_t x4810 = 9861U;
	uint8_t x4811 = 28U;
	static uint8_t x4812 = 5U;
	volatile int32_t t94 = -15855;

	t94 = (x4809|((x4810>>x4811)==x4812));

	if (t94 != 70) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4869 = UINT64_MAX;
	uint32_t x4870 = 2470534U;
	uint8_t x4871 = 0U;
	static uint64_t t95 = UINT64_MAX;

	t95 = (x4869|((x4870>>x4871)==x4872));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4909 = -117358905781290044LL;
	int64_t x4910 = INT64_MAX;
	int32_t x4911 = 0;
	int32_t x4912 = -1;

	t96 = (x4909|((x4910>>x4911)==x4912));

	if (t96 != -117358905781290044LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4933 = -1;
	uint8_t x4934 = 1U;
	uint16_t x4935 = 8U;
	static int32_t t97 = 1588;

	t97 = (x4933|((x4934>>x4935)==x4936));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5009 = INT8_MIN;
	uint64_t x5010 = 2521585521LLU;
	uint8_t x5011 = 7U;
	uint8_t x5012 = 3U;

	t98 = (x5009|((x5010>>x5011)==x5012));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5069 = 1;
	uint16_t x5071 = 6U;
	int64_t x5072 = -424588324207682011LL;

	t99 = (x5069|((x5070>>x5071)==x5072));

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

