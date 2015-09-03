#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x50 = 48U;
uint16_t x51 = UINT16_MAX;
static int8_t x52 = INT8_MIN;
int64_t x289 = INT64_MAX;
volatile uint16_t x292 = 800U;
int8_t x498 = 1;
volatile int32_t x518 = 1;
int16_t x520 = INT16_MIN;
int32_t x523 = INT32_MIN;
int16_t x722 = 3;
int64_t x730 = 6LL;
int16_t x756 = INT16_MIN;
static int16_t x877 = 1070;
static int32_t t15 = 1;
int64_t x1043 = -23937417362552LL;
int32_t t16 = INT32_MIN;
uint8_t x1106 = 1U;
int32_t t19 = -1;
int16_t x1225 = INT16_MAX;
uint16_t x1226 = 4U;
volatile int32_t t20 = 304964280;
int8_t x1242 = 7;
int32_t x1283 = -1;
uint64_t x1437 = UINT64_MAX;
uint32_t x1445 = UINT32_MAX;
int16_t x1517 = 1;
int8_t x1518 = 0;
static volatile int32_t t27 = 23;
static uint64_t x1741 = UINT64_MAX;
volatile uint16_t x1790 = 2U;
int32_t t30 = -6752551;
volatile int64_t t31 = 29409240972491930LL;
uint64_t x2456 = UINT64_MAX;
static int64_t t39 = 79023587111338168LL;
int32_t x2541 = INT32_MAX;
int32_t x2683 = INT32_MIN;
int16_t x2768 = INT16_MAX;
volatile int32_t t43 = 3;
uint16_t x2933 = 4181U;
static int8_t x3016 = INT8_MIN;
int8_t x3065 = 58;
volatile int16_t x3447 = INT16_MIN;
int32_t x3621 = INT32_MAX;
int8_t x3654 = 11;
int64_t x3697 = INT64_MAX;
static uint8_t x3730 = 0U;
int8_t x3789 = INT8_MAX;
static uint64_t t61 = 2945243186LLU;
volatile uint16_t x3899 = UINT16_MAX;
static volatile int64_t t63 = 1805236526335761551LL;
int8_t x3942 = 1;
int64_t x3944 = -572631072025694593LL;
int32_t t65 = 1;
int8_t x4027 = INT8_MIN;
static uint32_t x4061 = 1U;
uint32_t x4062 = 14U;
int32_t t67 = -8974189;
int16_t x4092 = INT16_MAX;
int64_t x4127 = -1LL;
int8_t x4227 = INT8_MAX;
volatile int16_t x4228 = INT16_MIN;
volatile uint8_t x4270 = 0U;
static uint32_t x4295 = 72249U;
volatile int16_t x4393 = 48;
static uint16_t x4396 = 184U;
int8_t x4479 = 56;
static volatile int32_t t76 = 0;
volatile int16_t x4514 = 13;
int8_t x4609 = INT8_MAX;
uint8_t x4611 = 52U;
static int32_t x4801 = 1;
static int8_t x4826 = 2;
volatile int16_t x4888 = INT16_MIN;
volatile int32_t t85 = -997178358;
int8_t x5006 = 5;
static uint8_t x5094 = 7U;
uint8_t x5106 = 30U;
volatile uint32_t x5146 = 2U;
int16_t x5147 = 14;
int16_t x5148 = 0;
static volatile int16_t x5155 = -1;
static uint16_t x5421 = 19076U;
int32_t x5454 = 0;
int64_t x5455 = -32641210LL;
volatile int16_t x5479 = INT16_MAX;
int8_t x5480 = 1;
uint8_t x5534 = 0U;
volatile int8_t x5536 = -1;
int32_t t98 = -14;


void f0(void) {
	static uint32_t x1 = 8703849U;
	uint16_t x2 = 31U;
	uint16_t x3 = 21U;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 45540444;

	t0 = (((x1>>x2)<=x3)|x4);

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x49 = 1LL;
	int32_t t1 = 0;

	t1 = (((x49>>x50)<=x51)|x52);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x81 = 2804796LLU;
	uint8_t x82 = 43U;
	volatile uint8_t x83 = UINT8_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t2 = -5802496LL;

	t2 = (((x81>>x82)<=x83)|x84);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 1U;
	int16_t x91 = -1;
	int64_t x92 = INT64_MAX;
	static int64_t t3 = INT64_MAX;

	t3 = (((x89>>x90)<=x91)|x92);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x290 = 62LLU;
	int8_t x291 = INT8_MAX;
	volatile int32_t t4 = 0;

	t4 = (((x289>>x290)<=x291)|x292);

	if (t4 != 801) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x497 = 143U;
	int16_t x499 = INT16_MAX;
	volatile uint32_t x500 = UINT32_MAX;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (((x497>>x498)<=x499)|x500);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x517 = INT64_MAX;
	static int32_t x519 = -41088;
	static int32_t t6 = 22;

	t6 = (((x517>>x518)<=x519)|x520);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x521 = UINT64_MAX;
	volatile uint16_t x522 = 4U;
	static volatile uint32_t x524 = 64483U;
	uint32_t t7 = 0U;

	t7 = (((x521>>x522)<=x523)|x524);

	if (t7 != 64483U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x545 = 13U;
	uint8_t x546 = 1U;
	int32_t x547 = INT32_MIN;
	volatile uint8_t x548 = UINT8_MAX;
	int32_t t8 = 23258469;

	t8 = (((x545>>x546)<=x547)|x548);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x629 = 1882;
	int8_t x630 = 0;
	volatile int64_t x631 = INT64_MIN;
	volatile int32_t x632 = INT32_MAX;
	int32_t t9 = INT32_MAX;

	t9 = (((x629>>x630)<=x631)|x632);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x721 = 0U;
	uint16_t x723 = UINT16_MAX;
	uint64_t x724 = 78217381641LLU;
	volatile uint64_t t10 = 3978027440276LLU;

	t10 = (((x721>>x722)<=x723)|x724);

	if (t10 != 78217381641LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x729 = 1372223087447LL;
	static uint64_t x731 = UINT64_MAX;
	volatile int8_t x732 = INT8_MIN;
	volatile int32_t t11 = 61777;

	t11 = (((x729>>x730)<=x731)|x732);

	if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x753 = INT8_MAX;
	volatile int16_t x754 = 0;
	static volatile int32_t x755 = INT32_MIN;
	int32_t t12 = 948687;

	t12 = (((x753>>x754)<=x755)|x756);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x873 = 26U;
	static uint8_t x874 = 11U;
	static int64_t x875 = INT64_MAX;
	uint8_t x876 = 42U;
	int32_t t13 = -73172;

	t13 = (((x873>>x874)<=x875)|x876);

	if (t13 != 43) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x878 = 8U;
	int16_t x879 = INT16_MIN;
	int32_t x880 = 5601;
	volatile int32_t t14 = -82519938;

	t14 = (((x877>>x878)<=x879)|x880);

	if (t14 != 5601) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x949 = INT16_MAX;
	uint32_t x950 = 4U;
	volatile uint16_t x951 = UINT16_MAX;
	int32_t x952 = INT32_MIN;

	t15 = (((x949>>x950)<=x951)|x952);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1041 = INT16_MAX;
	static uint8_t x1042 = 8U;
	int32_t x1044 = INT32_MIN;

	t16 = (((x1041>>x1042)<=x1043)|x1044);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x1105 = 0U;
	uint16_t x1107 = UINT16_MAX;
	int32_t x1108 = -1;
	static volatile int32_t t17 = -40500;

	t17 = (((x1105>>x1106)<=x1107)|x1108);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x1117 = UINT16_MAX;
	int8_t x1118 = 1;
	volatile int16_t x1119 = 79;
	volatile int64_t x1120 = -266LL;
	int64_t t18 = -54155LL;

	t18 = (((x1117>>x1118)<=x1119)|x1120);

	if (t18 != -266LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1217 = INT8_MAX;
	uint8_t x1218 = 10U;
	static uint64_t x1219 = UINT64_MAX;
	static uint8_t x1220 = UINT8_MAX;

	t19 = (((x1217>>x1218)<=x1219)|x1220);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1227 = INT32_MAX;
	int32_t x1228 = INT32_MIN;

	t20 = (((x1225>>x1226)<=x1227)|x1228);

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x1233 = UINT64_MAX;
	static int8_t x1234 = 1;
	static int8_t x1235 = INT8_MAX;
	int64_t x1236 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

	t21 = (((x1233>>x1234)<=x1235)|x1236);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1241 = 0;
	int64_t x1243 = INT64_MIN;
	volatile int32_t x1244 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = (((x1241>>x1242)<=x1243)|x1244);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1281 = 8940384454LL;
	volatile uint16_t x1282 = 54U;
	int8_t x1284 = INT8_MAX;
	int32_t t23 = 1;

	t23 = (((x1281>>x1282)<=x1283)|x1284);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1397 = 1369382295U;
	uint32_t x1398 = 2U;
	int16_t x1399 = 1;
	int8_t x1400 = INT8_MAX;
	static volatile int32_t t24 = -5164;

	t24 = (((x1397>>x1398)<=x1399)|x1400);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1438 = 18U;
	volatile int32_t x1439 = INT32_MIN;
	uint8_t x1440 = 58U;
	static volatile int32_t t25 = 1;

	t25 = (((x1437>>x1438)<=x1439)|x1440);

	if (t25 != 59) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1446 = 6LL;
	static uint8_t x1447 = UINT8_MAX;
	static volatile int64_t x1448 = -3721LL;
	static volatile int64_t t26 = 585916893LL;

	t26 = (((x1445>>x1446)<=x1447)|x1448);

	if (t26 != -3721LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1519 = INT8_MIN;
	static int16_t x1520 = -1;

	t27 = (((x1517>>x1518)<=x1519)|x1520);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1597 = INT64_MAX;
	int32_t x1598 = 1;
	static uint64_t x1599 = 233848785918904136LLU;
	int64_t x1600 = 3257975937LL;
	static volatile int64_t t28 = -3453LL;

	t28 = (((x1597>>x1598)<=x1599)|x1600);

	if (t28 != 3257975937LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1742 = 7U;
	static uint8_t x1743 = 1U;
	volatile uint8_t x1744 = 1U;
	static int32_t t29 = 68451;

	t29 = (((x1741>>x1742)<=x1743)|x1744);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1789 = UINT8_MAX;
	volatile int16_t x1791 = -1;
	uint8_t x1792 = 87U;

	t30 = (((x1789>>x1790)<=x1791)|x1792);

	if (t30 != 87) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1945 = INT32_MAX;
	static uint32_t x1946 = 8U;
	int8_t x1947 = 0;
	int64_t x1948 = 8564502857LL;

	t31 = (((x1945>>x1946)<=x1947)|x1948);

	if (t31 != 8564502857LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1961 = INT16_MAX;
	uint16_t x1962 = 4U;
	uint8_t x1963 = 3U;
	uint32_t x1964 = 458U;
	uint32_t t32 = 459565U;

	t32 = (((x1961>>x1962)<=x1963)|x1964);

	if (t32 != 458U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1985 = 5;
	static int16_t x1986 = 12;
	uint16_t x1987 = 0U;
	int8_t x1988 = -7;
	volatile int32_t t33 = -781;

	t33 = (((x1985>>x1986)<=x1987)|x1988);

	if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2149 = 58;
	static volatile uint8_t x2150 = 25U;
	static uint32_t x2151 = 143928659U;
	static int64_t x2152 = INT64_MIN;
	volatile int64_t t34 = 159346374206890207LL;

	t34 = (((x2149>>x2150)<=x2151)|x2152);

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2185 = UINT64_MAX;
	uint16_t x2186 = 11U;
	static uint16_t x2187 = 12360U;
	uint8_t x2188 = 44U;
	volatile int32_t t35 = -40584;

	t35 = (((x2185>>x2186)<=x2187)|x2188);

	if (t35 != 44) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2217 = INT16_MAX;
	uint32_t x2218 = 11U;
	int32_t x2219 = -490766;
	volatile int8_t x2220 = -1;
	volatile int32_t t36 = 0;

	t36 = (((x2217>>x2218)<=x2219)|x2220);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2393 = UINT8_MAX;
	uint8_t x2394 = 12U;
	volatile uint16_t x2395 = 4U;
	int64_t x2396 = 0LL;
	volatile int64_t t37 = -8313068762LL;

	t37 = (((x2393>>x2394)<=x2395)|x2396);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2453 = 1U;
	uint64_t x2454 = 0LLU;
	static uint64_t x2455 = 125025524905LLU;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x2453>>x2454)<=x2455)|x2456);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2525 = 18U;
	static volatile uint8_t x2526 = 5U;
	volatile int64_t x2527 = -1LL;
	volatile int64_t x2528 = -465269696LL;

	t39 = (((x2525>>x2526)<=x2527)|x2528);

	if (t39 != -465269696LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2542 = 2U;
	uint32_t x2543 = 499342U;
	volatile int16_t x2544 = -1;
	int32_t t40 = 15;

	t40 = (((x2541>>x2542)<=x2543)|x2544);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2633 = 21U;
	volatile uint8_t x2634 = 28U;
	int16_t x2635 = -1;
	static volatile uint64_t x2636 = 452LLU;
	uint64_t t41 = 1688885964669LLU;

	t41 = (((x2633>>x2634)<=x2635)|x2636);

	if (t41 != 452LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2681 = UINT64_MAX;
	uint8_t x2682 = 13U;
	static volatile uint8_t x2684 = 21U;
	static volatile int32_t t42 = -96557;

	t42 = (((x2681>>x2682)<=x2683)|x2684);

	if (t42 != 21) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x2765 = UINT16_MAX;
	static volatile int8_t x2766 = 0;
	int32_t x2767 = INT32_MAX;

	t43 = (((x2765>>x2766)<=x2767)|x2768);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2845 = 54U;
	uint8_t x2846 = 27U;
	volatile uint64_t x2847 = 7545287881691936LLU;
	static volatile int8_t x2848 = 0;
	volatile int32_t t44 = 446;

	t44 = (((x2845>>x2846)<=x2847)|x2848);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x2934 = 3U;
	int64_t x2935 = -9922529LL;
	int32_t x2936 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

	t45 = (((x2933>>x2934)<=x2935)|x2936);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2953 = 498030396443879291LLU;
	uint16_t x2954 = 41U;
	volatile int16_t x2955 = -1;
	uint16_t x2956 = 243U;
	volatile int32_t t46 = 166579;

	t46 = (((x2953>>x2954)<=x2955)|x2956);

	if (t46 != 243) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2993 = INT16_MAX;
	uint8_t x2994 = 30U;
	volatile int64_t x2995 = -1LL;
	static int32_t x2996 = INT32_MIN;
	int32_t t47 = INT32_MIN;

	t47 = (((x2993>>x2994)<=x2995)|x2996);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3013 = UINT8_MAX;
	uint64_t x3014 = 28LLU;
	uint8_t x3015 = UINT8_MAX;
	volatile int32_t t48 = 471170;

	t48 = (((x3013>>x3014)<=x3015)|x3016);

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x3037 = INT64_MAX;
	uint8_t x3038 = 15U;
	int16_t x3039 = -1;
	static int32_t x3040 = 51267020;
	volatile int32_t t49 = -2200224;

	t49 = (((x3037>>x3038)<=x3039)|x3040);

	if (t49 != 51267020) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3053 = 1;
	int32_t x3054 = 3;
	static volatile int16_t x3055 = -1;
	int64_t x3056 = -442166641584LL;
	int64_t t50 = 1LL;

	t50 = (((x3053>>x3054)<=x3055)|x3056);

	if (t50 != -442166641584LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3066 = 2U;
	static int16_t x3067 = INT16_MIN;
	static volatile int16_t x3068 = -1;
	static volatile int32_t t51 = 262274462;

	t51 = (((x3065>>x3066)<=x3067)|x3068);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3157 = 0U;
	uint8_t x3158 = 17U;
	int16_t x3159 = 3251;
	uint64_t x3160 = 89171665907947037LLU;
	uint64_t t52 = 5687820LLU;

	t52 = (((x3157>>x3158)<=x3159)|x3160);

	if (t52 != 89171665907947037LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3229 = 1;
	volatile int8_t x3230 = 0;
	volatile int16_t x3231 = -1;
	int8_t x3232 = INT8_MIN;
	volatile int32_t t53 = 109;

	t53 = (((x3229>>x3230)<=x3231)|x3232);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x3309 = 7U;
	static uint8_t x3310 = 0U;
	static int16_t x3311 = INT16_MIN;
	volatile uint8_t x3312 = UINT8_MAX;
	static int32_t t54 = -220245;

	t54 = (((x3309>>x3310)<=x3311)|x3312);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3445 = 3618U;
	uint8_t x3446 = 0U;
	static int32_t x3448 = -1;
	int32_t t55 = 0;

	t55 = (((x3445>>x3446)<=x3447)|x3448);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x3505 = 1U;
	uint16_t x3506 = 5U;
	int32_t x3507 = -186122043;
	int8_t x3508 = -13;
	int32_t t56 = 3244;

	t56 = (((x3505>>x3506)<=x3507)|x3508);

	if (t56 != -13) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3622 = 9U;
	int8_t x3623 = 1;
	volatile int32_t x3624 = INT32_MIN;
	int32_t t57 = INT32_MIN;

	t57 = (((x3621>>x3622)<=x3623)|x3624);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x3653 = 417U;
	volatile int64_t x3655 = INT64_MAX;
	volatile uint8_t x3656 = UINT8_MAX;
	int32_t t58 = 13;

	t58 = (((x3653>>x3654)<=x3655)|x3656);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3698 = 7U;
	uint8_t x3699 = UINT8_MAX;
	volatile int8_t x3700 = -56;
	volatile int32_t t59 = 62573;

	t59 = (((x3697>>x3698)<=x3699)|x3700);

	if (t59 != -56) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3729 = 0;
	uint64_t x3731 = UINT64_MAX;
	volatile uint64_t x3732 = 131582398631870LLU;
	volatile uint64_t t60 = 2838998LLU;

	t60 = (((x3729>>x3730)<=x3731)|x3732);

	if (t60 != 131582398631871LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x3790 = 0;
	volatile int64_t x3791 = -1LL;
	uint64_t x3792 = 3590LLU;

	t61 = (((x3789>>x3790)<=x3791)|x3792);

	if (t61 != 3590LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3841 = 0U;
	int8_t x3842 = 3;
	static int64_t x3843 = -1LL;
	int8_t x3844 = INT8_MIN;
	volatile int32_t t62 = -13721935;

	t62 = (((x3841>>x3842)<=x3843)|x3844);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x3897 = 23U;
	uint8_t x3898 = 1U;
	int64_t x3900 = 128268425066LL;

	t63 = (((x3897>>x3898)<=x3899)|x3900);

	if (t63 != 128268425067LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3941 = 1023450LLU;
	int64_t x3943 = -1LL;
	static int64_t t64 = 7590424LL;

	t64 = (((x3941>>x3942)<=x3943)|x3944);

	if (t64 != -572631072025694593LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3993 = 43307691LL;
	uint16_t x3994 = 13U;
	static uint64_t x3995 = 385017653608689020LLU;
	volatile int8_t x3996 = -1;

	t65 = (((x3993>>x3994)<=x3995)|x3996);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4025 = 129078664031982894LLU;
	volatile uint64_t x4026 = 2LLU;
	int16_t x4028 = -11041;
	volatile int32_t t66 = 342912;

	t66 = (((x4025>>x4026)<=x4027)|x4028);

	if (t66 != -11041) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4063 = 170592388LLU;
	int16_t x4064 = -1;

	t67 = (((x4061>>x4062)<=x4063)|x4064);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4081 = 62347U;
	int16_t x4082 = 1;
	volatile int64_t x4083 = -12989021LL;
	volatile int8_t x4084 = -1;
	int32_t t68 = -5;

	t68 = (((x4081>>x4082)<=x4083)|x4084);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x4089 = 869460711011LL;
	int8_t x4090 = 4;
	int64_t x4091 = -1LL;
	static int32_t t69 = -1075532;

	t69 = (((x4089>>x4090)<=x4091)|x4092);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4125 = 2626LLU;
	int8_t x4126 = 1;
	static volatile int64_t x4128 = -216561LL;
	volatile int64_t t70 = -36109779311475591LL;

	t70 = (((x4125>>x4126)<=x4127)|x4128);

	if (t70 != -216561LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4225 = UINT16_MAX;
	static uint16_t x4226 = 23U;
	volatile int32_t t71 = 10790354;

	t71 = (((x4225>>x4226)<=x4227)|x4228);

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4269 = 3;
	int8_t x4271 = -1;
	uint16_t x4272 = 1832U;
	int32_t t72 = 70702163;

	t72 = (((x4269>>x4270)<=x4271)|x4272);

	if (t72 != 1832) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4293 = 3U;
	int32_t x4294 = 9;
	uint8_t x4296 = UINT8_MAX;
	int32_t t73 = 7;

	t73 = (((x4293>>x4294)<=x4295)|x4296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x4369 = 5U;
	static uint8_t x4370 = 18U;
	static uint64_t x4371 = 3LLU;
	int32_t x4372 = INT32_MIN;
	volatile int32_t t74 = -47;

	t74 = (((x4369>>x4370)<=x4371)|x4372);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4394 = 5U;
	static volatile int32_t x4395 = -1;
	static volatile int32_t t75 = -1842026;

	t75 = (((x4393>>x4394)<=x4395)|x4396);

	if (t75 != 184) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4477 = INT32_MAX;
	int8_t x4478 = 1;
	int16_t x4480 = -3;

	t76 = (((x4477>>x4478)<=x4479)|x4480);

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x4497 = 1655U;
	int8_t x4498 = 8;
	uint32_t x4499 = 241521312U;
	volatile int32_t x4500 = INT32_MIN;
	int32_t t77 = 11543144;

	t77 = (((x4497>>x4498)<=x4499)|x4500);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4513 = 0;
	static int8_t x4515 = 21;
	uint8_t x4516 = 2U;
	volatile int32_t t78 = 674;

	t78 = (((x4513>>x4514)<=x4515)|x4516);

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4610 = 0LLU;
	volatile int16_t x4612 = -9834;
	volatile int32_t t79 = 907;

	t79 = (((x4609>>x4610)<=x4611)|x4612);

	if (t79 != -9834) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4697 = 87U;
	volatile int32_t x4698 = 30;
	int16_t x4699 = -1;
	volatile int32_t x4700 = INT32_MIN;
	int32_t t80 = INT32_MIN;

	t80 = (((x4697>>x4698)<=x4699)|x4700);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4802 = 3LL;
	uint32_t x4803 = 1809U;
	static int64_t x4804 = 966771891149LL;
	volatile int64_t t81 = -1LL;

	t81 = (((x4801>>x4802)<=x4803)|x4804);

	if (t81 != 966771891149LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4821 = 61397812920377LLU;
	volatile uint8_t x4822 = 0U;
	volatile int16_t x4823 = 11435;
	volatile uint16_t x4824 = 0U;
	static int32_t t82 = -18;

	t82 = (((x4821>>x4822)<=x4823)|x4824);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4825 = UINT32_MAX;
	int16_t x4827 = 308;
	int64_t x4828 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = (((x4825>>x4826)<=x4827)|x4828);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4885 = 719808163958176326LL;
	uint16_t x4886 = 2U;
	static uint8_t x4887 = 3U;
	static int32_t t84 = 45;

	t84 = (((x4885>>x4886)<=x4887)|x4888);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4917 = INT64_MAX;
	uint16_t x4918 = 2U;
	int64_t x4919 = 1709009756832LL;
	volatile int32_t x4920 = 4620151;

	t85 = (((x4917>>x4918)<=x4919)|x4920);

	if (t85 != 4620151) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5005 = 1486167236800LLU;
	int16_t x5007 = INT16_MIN;
	static int16_t x5008 = -1;
	int32_t t86 = -24849;

	t86 = (((x5005>>x5006)<=x5007)|x5008);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x5029 = 32642842U;
	uint64_t x5030 = 7LLU;
	uint16_t x5031 = UINT16_MAX;
	volatile uint16_t x5032 = 685U;
	int32_t t87 = -133501;

	t87 = (((x5029>>x5030)<=x5031)|x5032);

	if (t87 != 685) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5093 = 30U;
	int16_t x5095 = -1;
	static uint8_t x5096 = 0U;
	int32_t t88 = -192412;

	t88 = (((x5093>>x5094)<=x5095)|x5096);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x5105 = INT64_MAX;
	uint64_t x5107 = 1646592LLU;
	volatile uint64_t x5108 = 30641946622314LLU;
	static volatile uint64_t t89 = 407748528202LLU;

	t89 = (((x5105>>x5106)<=x5107)|x5108);

	if (t89 != 30641946622314LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5141 = INT16_MAX;
	uint16_t x5142 = 6U;
	uint16_t x5143 = 6U;
	int32_t x5144 = 50415309;
	int32_t t90 = 2046077;

	t90 = (((x5141>>x5142)<=x5143)|x5144);

	if (t90 != 50415309) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5145 = 20U;
	volatile int32_t t91 = -24169566;

	t91 = (((x5145>>x5146)<=x5147)|x5148);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5153 = 218;
	int8_t x5154 = 3;
	static uint8_t x5156 = UINT8_MAX;
	volatile int32_t t92 = 3334;

	t92 = (((x5153>>x5154)<=x5155)|x5156);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5422 = 5U;
	int32_t x5423 = INT32_MIN;
	static int16_t x5424 = -1;
	static volatile int32_t t93 = 185567;

	t93 = (((x5421>>x5422)<=x5423)|x5424);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5453 = 3;
	int16_t x5456 = 1;
	volatile int32_t t94 = 7615;

	t94 = (((x5453>>x5454)<=x5455)|x5456);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x5477 = 1994358929953894961LL;
	volatile uint8_t x5478 = 4U;
	int32_t t95 = 4385;

	t95 = (((x5477>>x5478)<=x5479)|x5480);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5533 = 190U;
	uint32_t x5535 = UINT32_MAX;
	int32_t t96 = 283671368;

	t96 = (((x5533>>x5534)<=x5535)|x5536);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5549 = 2950267LL;
	int8_t x5550 = 17;
	int16_t x5551 = -1;
	int64_t x5552 = -12184393792072LL;
	volatile int64_t t97 = 126LL;

	t97 = (((x5549>>x5550)<=x5551)|x5552);

	if (t97 != -12184393792072LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5625 = UINT32_MAX;
	int16_t x5626 = 1;
	int16_t x5627 = INT16_MIN;
	volatile int32_t x5628 = 0;

	t98 = (((x5625>>x5626)<=x5627)|x5628);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x5705 = 13919704025LLU;
	int16_t x5706 = 11;
	uint64_t x5707 = 1344030LLU;
	int64_t x5708 = 191260254032315692LL;
	volatile int64_t t99 = -1007LL;

	t99 = (((x5705>>x5706)<=x5707)|x5708);

	if (t99 != 191260254032315692LL) { NG(); } else { ; }
	
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

