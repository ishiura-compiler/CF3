#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x215 = UINT32_MAX;
static int8_t x229 = INT8_MIN;
uint8_t x338 = 2U;
int32_t t3 = 0;
volatile int32_t x423 = INT32_MAX;
volatile int32_t t4 = 15003306;
int32_t x606 = INT32_MIN;
volatile uint64_t t7 = 0LLU;
uint16_t x727 = 96U;
static volatile int16_t x766 = 1;
int64_t x888 = 1LL;
volatile int8_t x986 = INT8_MIN;
int16_t x987 = INT16_MAX;
static volatile int16_t x1050 = INT16_MIN;
volatile int16_t x1111 = 46;
int32_t x1122 = -1;
uint16_t x1142 = 293U;
int8_t x1150 = 1;
int64_t t16 = 140LL;
int8_t x1410 = INT8_MIN;
static volatile uint64_t x1411 = UINT64_MAX;
volatile int16_t x1449 = -6;
volatile uint8_t x1452 = 11U;
volatile int32_t t21 = 29665;
int32_t t22 = 186;
uint8_t x1558 = 57U;
volatile int32_t t23 = 1;
int64_t x1658 = 602LL;
uint8_t x1900 = 28U;
static volatile uint8_t x1954 = UINT8_MAX;
volatile int32_t t28 = -804740;
int16_t x1961 = INT16_MAX;
uint16_t x1963 = 743U;
volatile int32_t t30 = -57078;
static int64_t x2041 = -1LL;
int32_t x2085 = 28301799;
uint8_t x2087 = 0U;
static volatile uint32_t t33 = 1829116U;
volatile uint64_t x2218 = 6594551122LLU;
int16_t x2274 = 658;
int32_t x2299 = INT32_MAX;
uint8_t x2396 = 29U;
static volatile int32_t t37 = -307;
int8_t x2744 = 1;
volatile uint64_t t39 = 565031083360020665LLU;
uint32_t x2791 = 506U;
uint8_t x2812 = 16U;
int64_t x2982 = INT64_MIN;
int8_t x3046 = INT8_MAX;
volatile uint16_t x3075 = UINT16_MAX;
uint16_t x3076 = 9U;
volatile uint64_t t48 = 238315919001LLU;
volatile uint16_t x3152 = 6U;
int16_t x3174 = 2920;
static uint16_t x3207 = 6544U;
uint8_t x3345 = 6U;
int32_t t56 = -120;
volatile uint64_t x3351 = 1472LLU;
int64_t t59 = 364992676978LL;
volatile uint32_t t61 = 675029U;
int16_t x3602 = INT16_MIN;
int16_t x3603 = INT16_MAX;
volatile uint16_t x3628 = 19U;
int16_t x3789 = -1;
volatile uint16_t x3790 = UINT16_MAX;
int64_t x3833 = 148289675544583LL;
int8_t x3834 = INT8_MIN;
uint8_t x3835 = UINT8_MAX;
volatile int8_t x3886 = INT8_MAX;
volatile uint64_t x3918 = UINT64_MAX;
uint32_t x3919 = 0U;
int16_t x4317 = -14413;
static uint16_t x4318 = UINT16_MAX;
volatile int32_t t73 = 405;
static int8_t x4687 = 0;
uint64_t x4818 = UINT64_MAX;
uint8_t x4820 = 11U;
uint32_t x4829 = UINT32_MAX;
int8_t x4914 = INT8_MAX;
volatile int8_t x5032 = 0;
int32_t x5085 = INT32_MAX;
volatile uint8_t x5155 = 27U;
uint16_t x5178 = 1U;
volatile uint32_t t84 = 943051U;
int16_t x5441 = -1;
volatile int32_t t89 = -11;
volatile int32_t t90 = -278135440;
volatile int32_t x5511 = 3455;
volatile int32_t t92 = 1;
int16_t x5690 = -1591;
volatile int32_t t93 = -993040577;
int64_t x5734 = INT64_MAX;
int32_t x5802 = -1;
volatile int32_t x5803 = 271;
int8_t x6011 = INT8_MAX;
int8_t x6013 = -1;
volatile int32_t t99 = -10787522;


void f0(void) {
	volatile int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = UINT8_MAX;
	static int8_t x120 = 15;
	int32_t t0 = 10325;

	t0 = ((x117<=x118)^(x119>>x120));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x213 = -6;
	int8_t x214 = 1;
	static uint32_t x216 = 0U;
	volatile uint32_t t1 = 6302037U;

	t1 = ((x213<=x214)^(x215>>x216));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x230 = UINT32_MAX;
	static int64_t x231 = INT64_MAX;
	uint8_t x232 = 43U;
	static volatile int64_t t2 = 13LL;

	t2 = ((x229<=x230)^(x231>>x232));

	if (t2 != 1048574LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x337 = 236645U;
	int32_t x339 = 2557;
	volatile uint8_t x340 = 7U;

	t3 = ((x337<=x338)^(x339>>x340));

	if (t3 != 19) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x421 = INT16_MAX;
	uint16_t x422 = UINT16_MAX;
	uint8_t x424 = 6U;

	t4 = ((x421<=x422)^(x423>>x424));

	if (t4 != 33554430) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x589 = INT16_MIN;
	volatile int16_t x590 = INT16_MIN;
	uint64_t x591 = UINT64_MAX;
	volatile uint16_t x592 = 9U;
	volatile uint64_t t5 = 343LLU;

	t5 = ((x589<=x590)^(x591>>x592));

	if (t5 != 36028797018963966LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x605 = INT64_MIN;
	static int16_t x607 = INT16_MAX;
	uint16_t x608 = 2U;
	volatile int32_t t6 = -730796;

	t6 = ((x605<=x606)^(x607>>x608));

	if (t6 != 8190) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x677 = INT32_MIN;
	static int8_t x678 = -1;
	static uint64_t x679 = 31LLU;
	volatile uint8_t x680 = 8U;

	t7 = ((x677<=x678)^(x679>>x680));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x725 = 229LL;
	static volatile int16_t x726 = INT16_MAX;
	uint64_t x728 = 21LLU;
	static volatile int32_t t8 = -185732;

	t8 = ((x725<=x726)^(x727>>x728));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x765 = 1660942U;
	static volatile uint64_t x767 = 4107547611LLU;
	uint32_t x768 = 9U;
	volatile uint64_t t9 = 241629373190LLU;

	t9 = ((x765<=x766)^(x767>>x768));

	if (t9 != 8022553LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x885 = INT64_MIN;
	static uint64_t x886 = UINT64_MAX;
	uint32_t x887 = UINT32_MAX;
	volatile uint32_t t10 = 13518916U;

	t10 = ((x885<=x886)^(x887>>x888));

	if (t10 != 2147483646U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x985 = -1LL;
	volatile int16_t x988 = 7;
	int32_t t11 = 48;

	t11 = ((x985<=x986)^(x987>>x988));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x1049 = UINT64_MAX;
	volatile int32_t x1051 = INT32_MAX;
	uint32_t x1052 = 14U;
	volatile int32_t t12 = 15078;

	t12 = ((x1049<=x1050)^(x1051>>x1052));

	if (t12 != 131071) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1109 = INT64_MIN;
	uint64_t x1110 = 7LLU;
	int64_t x1112 = 19LL;
	int32_t t13 = -227;

	t13 = ((x1109<=x1110)^(x1111>>x1112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x1121 = 12U;
	volatile uint8_t x1123 = 31U;
	static volatile uint8_t x1124 = 10U;
	int32_t t14 = 1;

	t14 = ((x1121<=x1122)^(x1123>>x1124));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1141 = INT8_MIN;
	uint64_t x1143 = 320380898LLU;
	uint64_t x1144 = 1LLU;
	uint64_t t15 = 937487LLU;

	t15 = ((x1141<=x1142)^(x1143>>x1144));

	if (t15 != 160190448LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1149 = -1;
	static int64_t x1151 = 1037775304620926182LL;
	static int8_t x1152 = 3;

	t16 = ((x1149<=x1150)^(x1151>>x1152));

	if (t16 != 129721913077615773LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1309 = 30869334115021LLU;
	uint32_t x1310 = 12041329U;
	static volatile uint8_t x1311 = 1U;
	volatile int8_t x1312 = 28;
	int32_t t17 = 31451;

	t17 = ((x1309<=x1310)^(x1311>>x1312));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1373 = 36795573U;
	int16_t x1374 = 11710;
	uint8_t x1375 = 1U;
	volatile uint16_t x1376 = 2U;
	volatile int32_t t18 = 508600;

	t18 = ((x1373<=x1374)^(x1375>>x1376));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1381 = INT32_MIN;
	volatile uint16_t x1382 = 58U;
	int8_t x1383 = INT8_MAX;
	static volatile uint16_t x1384 = 2U;
	volatile int32_t t19 = -1050402142;

	t19 = ((x1381<=x1382)^(x1383>>x1384));

	if (t19 != 30) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1409 = 1U;
	volatile int8_t x1412 = 0;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x1409<=x1410)^(x1411>>x1412));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1450 = 5U;
	int16_t x1451 = INT16_MAX;

	t21 = ((x1449<=x1450)^(x1451>>x1452));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1545 = -1LL;
	volatile int64_t x1546 = INT64_MIN;
	uint16_t x1547 = UINT16_MAX;
	int8_t x1548 = 0;

	t22 = ((x1545<=x1546)^(x1547>>x1548));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1557 = INT16_MIN;
	int8_t x1559 = INT8_MAX;
	volatile uint16_t x1560 = 5U;

	t23 = ((x1557<=x1558)^(x1559>>x1560));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1593 = INT32_MIN;
	uint16_t x1594 = 5U;
	uint16_t x1595 = 1U;
	int16_t x1596 = 4;
	volatile int32_t t24 = -231913025;

	t24 = ((x1593<=x1594)^(x1595>>x1596));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1657 = 154996216180148738LLU;
	uint64_t x1659 = UINT64_MAX;
	uint64_t x1660 = 63LLU;
	static uint64_t t25 = 469865611LLU;

	t25 = ((x1657<=x1658)^(x1659>>x1660));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1701 = 13U;
	static volatile uint16_t x1702 = UINT16_MAX;
	uint8_t x1703 = UINT8_MAX;
	uint16_t x1704 = 0U;
	static volatile int32_t t26 = -2685;

	t26 = ((x1701<=x1702)^(x1703>>x1704));

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1897 = INT32_MIN;
	int16_t x1898 = -1;
	uint8_t x1899 = UINT8_MAX;
	static int32_t t27 = 463562;

	t27 = ((x1897<=x1898)^(x1899>>x1900));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1953 = -177;
	volatile uint16_t x1955 = 0U;
	volatile int16_t x1956 = 17;

	t28 = ((x1953<=x1954)^(x1955>>x1956));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1962 = INT16_MAX;
	uint8_t x1964 = 30U;
	static int32_t t29 = -7;

	t29 = ((x1961<=x1962)^(x1963>>x1964));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1981 = 2;
	int64_t x1982 = -62147252LL;
	volatile uint16_t x1983 = 8U;
	uint8_t x1984 = 7U;

	t30 = ((x1981<=x1982)^(x1983>>x1984));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2042 = -1LL;
	uint64_t x2043 = UINT64_MAX;
	volatile uint16_t x2044 = 3U;
	volatile uint64_t t31 = 81036LLU;

	t31 = ((x2041<=x2042)^(x2043>>x2044));

	if (t31 != 2305843009213693950LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x2086 = -1;
	int16_t x2088 = 12;
	static volatile int32_t t32 = 12248962;

	t32 = ((x2085<=x2086)^(x2087>>x2088));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2113 = INT8_MIN;
	int8_t x2114 = INT8_MAX;
	uint32_t x2115 = 489U;
	uint16_t x2116 = 8U;

	t33 = ((x2113<=x2114)^(x2115>>x2116));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2217 = 3;
	static uint32_t x2219 = 184808U;
	static volatile uint16_t x2220 = 3U;
	uint32_t t34 = 137U;

	t34 = ((x2217<=x2218)^(x2219>>x2220));

	if (t34 != 23100U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2273 = INT16_MIN;
	uint16_t x2275 = UINT16_MAX;
	static uint8_t x2276 = 9U;
	int32_t t35 = -122740;

	t35 = ((x2273<=x2274)^(x2275>>x2276));

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2297 = UINT64_MAX;
	volatile uint64_t x2298 = 45016213LLU;
	uint16_t x2300 = 1U;
	static int32_t t36 = -54055492;

	t36 = ((x2297<=x2298)^(x2299>>x2300));

	if (t36 != 1073741823) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2393 = -1LL;
	uint64_t x2394 = 1LLU;
	uint16_t x2395 = UINT16_MAX;

	t37 = ((x2393<=x2394)^(x2395>>x2396));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2633 = -1;
	uint32_t x2634 = 12395831U;
	uint64_t x2635 = 777100LLU;
	int16_t x2636 = 15;
	static uint64_t t38 = 220LLU;

	t38 = ((x2633<=x2634)^(x2635>>x2636));

	if (t38 != 23LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2741 = 12318LL;
	uint64_t x2742 = 31955411LLU;
	uint64_t x2743 = 42804766LLU;

	t39 = ((x2741<=x2742)^(x2743>>x2744));

	if (t39 != 21402382LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2781 = 13;
	int8_t x2782 = -1;
	int64_t x2783 = 83563594597LL;
	uint8_t x2784 = 0U;
	int64_t t40 = -1044307685912430LL;

	t40 = ((x2781<=x2782)^(x2783>>x2784));

	if (t40 != 83563594597LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2789 = -223;
	uint8_t x2790 = UINT8_MAX;
	static uint16_t x2792 = 24U;
	uint32_t t41 = 28U;

	t41 = ((x2789<=x2790)^(x2791>>x2792));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2809 = 54897751750408971LLU;
	volatile int64_t x2810 = 39320095493383LL;
	uint64_t x2811 = 1465348LLU;
	uint64_t t42 = 29026LLU;

	t42 = ((x2809<=x2810)^(x2811>>x2812));

	if (t42 != 22LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2921 = -326341652211332LL;
	static uint8_t x2922 = UINT8_MAX;
	int8_t x2923 = 0;
	uint8_t x2924 = 16U;
	static volatile int32_t t43 = -513083866;

	t43 = ((x2921<=x2922)^(x2923>>x2924));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2981 = 389;
	uint16_t x2983 = 2717U;
	static uint8_t x2984 = 23U;
	volatile int32_t t44 = 456;

	t44 = ((x2981<=x2982)^(x2983>>x2984));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3005 = INT16_MIN;
	int32_t x3006 = -1;
	uint64_t x3007 = UINT64_MAX;
	uint16_t x3008 = 0U;
	volatile uint64_t t45 = 10128728257276LLU;

	t45 = ((x3005<=x3006)^(x3007>>x3008));

	if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3045 = INT32_MAX;
	int16_t x3047 = INT16_MAX;
	uint8_t x3048 = 23U;
	int32_t t46 = 3078496;

	t46 = ((x3045<=x3046)^(x3047>>x3048));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x3073 = INT64_MIN;
	volatile int64_t x3074 = -1LL;
	static int32_t t47 = 6;

	t47 = ((x3073<=x3074)^(x3075>>x3076));

	if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3085 = 1;
	static int32_t x3086 = -1;
	uint64_t x3087 = 29052877197LLU;
	int8_t x3088 = 1;

	t48 = ((x3085<=x3086)^(x3087>>x3088));

	if (t48 != 14526438598LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3093 = 5U;
	uint32_t x3094 = 26216U;
	int8_t x3095 = 1;
	uint16_t x3096 = 3U;
	int32_t t49 = -413;

	t49 = ((x3093<=x3094)^(x3095>>x3096));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3149 = 5853U;
	volatile uint64_t x3150 = 351888136257181537LLU;
	static int32_t x3151 = 0;
	volatile int32_t t50 = -3;

	t50 = ((x3149<=x3150)^(x3151>>x3152));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x3173 = -300312227LL;
	static int16_t x3175 = INT16_MAX;
	int8_t x3176 = 6;
	volatile int32_t t51 = 195252876;

	t51 = ((x3173<=x3174)^(x3175>>x3176));

	if (t51 != 510) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x3205 = -1;
	volatile int8_t x3206 = INT8_MIN;
	int64_t x3208 = 2LL;
	static volatile int32_t t52 = -382;

	t52 = ((x3205<=x3206)^(x3207>>x3208));

	if (t52 != 1636) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x3233 = 14505U;
	volatile int32_t x3234 = INT32_MIN;
	uint64_t x3235 = UINT64_MAX;
	uint8_t x3236 = 4U;
	static volatile uint64_t t53 = 7875005409LLU;

	t53 = ((x3233<=x3234)^(x3235>>x3236));

	if (t53 != 1152921504606846974LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3277 = 0;
	static int8_t x3278 = INT8_MIN;
	static int32_t x3279 = 631261;
	int8_t x3280 = 1;
	int32_t t54 = -49038;

	t54 = ((x3277<=x3278)^(x3279>>x3280));

	if (t54 != 315630) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3285 = -1;
	int16_t x3286 = -1836;
	uint8_t x3287 = 49U;
	int8_t x3288 = 7;
	static volatile int32_t t55 = -14318;

	t55 = ((x3285<=x3286)^(x3287>>x3288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3346 = INT32_MIN;
	uint8_t x3347 = 0U;
	static uint8_t x3348 = 1U;

	t56 = ((x3345<=x3346)^(x3347>>x3348));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3349 = -2;
	volatile uint8_t x3350 = 9U;
	uint16_t x3352 = 43U;
	uint64_t t57 = 68289LLU;

	t57 = ((x3349<=x3350)^(x3351>>x3352));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3361 = INT16_MIN;
	uint16_t x3362 = 7U;
	int64_t x3363 = 19276327588589618LL;
	int8_t x3364 = 3;
	volatile int64_t t58 = -101265LL;

	t58 = ((x3361<=x3362)^(x3363>>x3364));

	if (t58 != 2409540948573703LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3449 = -224559042;
	volatile int16_t x3450 = -3298;
	int64_t x3451 = 650180155471129963LL;
	static uint16_t x3452 = 12U;

	t59 = ((x3449<=x3450)^(x3451>>x3452));

	if (t59 != 158735389519319LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3477 = -1;
	int32_t x3478 = INT32_MIN;
	uint64_t x3479 = UINT64_MAX;
	volatile uint16_t x3480 = 35U;
	static uint64_t t60 = 492644774123143LLU;

	t60 = ((x3477<=x3478)^(x3479>>x3480));

	if (t60 != 536870911LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x3573 = 6508U;
	volatile int64_t x3574 = INT64_MIN;
	uint32_t x3575 = 810514721U;
	int16_t x3576 = 0;

	t61 = ((x3573<=x3574)^(x3575>>x3576));

	if (t61 != 810514721U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3601 = 105U;
	uint64_t x3604 = 0LLU;
	volatile int32_t t62 = 11075;

	t62 = ((x3601<=x3602)^(x3603>>x3604));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x3625 = UINT32_MAX;
	uint64_t x3626 = UINT64_MAX;
	volatile int32_t x3627 = 485;
	volatile int32_t t63 = -99762;

	t63 = ((x3625<=x3626)^(x3627>>x3628));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3665 = INT64_MAX;
	int8_t x3666 = 3;
	uint8_t x3667 = UINT8_MAX;
	int16_t x3668 = 6;
	volatile int32_t t64 = 346209;

	t64 = ((x3665<=x3666)^(x3667>>x3668));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3729 = INT64_MIN;
	int32_t x3730 = -132762866;
	uint64_t x3731 = UINT64_MAX;
	static uint8_t x3732 = 5U;
	volatile uint64_t t65 = 36401LLU;

	t65 = ((x3729<=x3730)^(x3731>>x3732));

	if (t65 != 576460752303423486LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3791 = INT16_MAX;
	uint8_t x3792 = 0U;
	int32_t t66 = 69787739;

	t66 = ((x3789<=x3790)^(x3791>>x3792));

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3836 = 11U;
	int32_t t67 = -5992;

	t67 = ((x3833<=x3834)^(x3835>>x3836));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3885 = UINT64_MAX;
	static uint64_t x3887 = 1066LLU;
	static uint8_t x3888 = 6U;
	volatile uint64_t t68 = 292LLU;

	t68 = ((x3885<=x3886)^(x3887>>x3888));

	if (t68 != 16LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3917 = 1U;
	uint8_t x3920 = 1U;
	uint32_t t69 = 11U;

	t69 = ((x3917<=x3918)^(x3919>>x3920));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4057 = INT8_MAX;
	int8_t x4058 = INT8_MAX;
	uint8_t x4059 = UINT8_MAX;
	static int8_t x4060 = 15;
	int32_t t70 = 80;

	t70 = ((x4057<=x4058)^(x4059>>x4060));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4181 = INT64_MAX;
	static volatile int16_t x4182 = INT16_MIN;
	int8_t x4183 = 10;
	uint8_t x4184 = 18U;
	static int32_t t71 = -9992330;

	t71 = ((x4181<=x4182)^(x4183>>x4184));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4281 = INT16_MAX;
	static uint16_t x4282 = UINT16_MAX;
	volatile int8_t x4283 = INT8_MAX;
	int8_t x4284 = 0;
	static int32_t t72 = 318;

	t72 = ((x4281<=x4282)^(x4283>>x4284));

	if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4319 = 3756;
	uint16_t x4320 = 7U;

	t73 = ((x4317<=x4318)^(x4319>>x4320));

	if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4401 = INT64_MIN;
	static int64_t x4402 = INT64_MIN;
	uint16_t x4403 = UINT16_MAX;
	uint16_t x4404 = 3U;
	volatile int32_t t74 = -85288248;

	t74 = ((x4401<=x4402)^(x4403>>x4404));

	if (t74 != 8190) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x4685 = INT64_MAX;
	int64_t x4686 = INT64_MAX;
	volatile int64_t x4688 = 0LL;
	volatile int32_t t75 = 3920251;

	t75 = ((x4685<=x4686)^(x4687>>x4688));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4817 = INT32_MAX;
	int64_t x4819 = INT64_MAX;
	int64_t t76 = 8219793LL;

	t76 = ((x4817<=x4818)^(x4819>>x4820));

	if (t76 != 4503599627370494LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4830 = UINT64_MAX;
	int8_t x4831 = 4;
	volatile int32_t x4832 = 1;
	volatile int32_t t77 = 1;

	t77 = ((x4829<=x4830)^(x4831>>x4832));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4913 = -12;
	uint64_t x4915 = UINT64_MAX;
	int64_t x4916 = 1LL;
	uint64_t t78 = 5618872LLU;

	t78 = ((x4913<=x4914)^(x4915>>x4916));

	if (t78 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x5029 = UINT64_MAX;
	int32_t x5030 = INT32_MIN;
	int32_t x5031 = INT32_MAX;
	volatile int32_t t79 = INT32_MAX;

	t79 = ((x5029<=x5030)^(x5031>>x5032));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5049 = UINT64_MAX;
	int64_t x5050 = INT64_MAX;
	int8_t x5051 = 1;
	uint8_t x5052 = 14U;
	volatile int32_t t80 = 24681233;

	t80 = ((x5049<=x5050)^(x5051>>x5052));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5086 = 2474;
	static uint32_t x5087 = 110U;
	static uint8_t x5088 = 12U;
	uint32_t t81 = 118871460U;

	t81 = ((x5085<=x5086)^(x5087>>x5088));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5153 = -1;
	int8_t x5154 = INT8_MIN;
	volatile uint8_t x5156 = 4U;
	volatile int32_t t82 = 236457466;

	t82 = ((x5153<=x5154)^(x5155>>x5156));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5177 = -32;
	volatile int16_t x5179 = INT16_MAX;
	int16_t x5180 = 1;
	static volatile int32_t t83 = 990;

	t83 = ((x5177<=x5178)^(x5179>>x5180));

	if (t83 != 16382) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5189 = INT8_MIN;
	volatile int8_t x5190 = -11;
	static uint32_t x5191 = UINT32_MAX;
	uint8_t x5192 = 30U;

	t84 = ((x5189<=x5190)^(x5191>>x5192));

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5205 = 7U;
	volatile uint8_t x5206 = 11U;
	volatile int32_t x5207 = 1;
	volatile uint8_t x5208 = 3U;
	volatile int32_t t85 = 71991385;

	t85 = ((x5205<=x5206)^(x5207>>x5208));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5361 = INT32_MAX;
	static uint32_t x5362 = 1744465U;
	uint8_t x5363 = 6U;
	volatile uint8_t x5364 = 1U;
	volatile int32_t t86 = 20950471;

	t86 = ((x5361<=x5362)^(x5363>>x5364));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x5365 = 19U;
	volatile uint8_t x5366 = 0U;
	uint32_t x5367 = 2912779U;
	volatile int32_t x5368 = 1;
	uint32_t t87 = 341949512U;

	t87 = ((x5365<=x5366)^(x5367>>x5368));

	if (t87 != 1456389U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5397 = 4U;
	int32_t x5398 = -1;
	uint32_t x5399 = 1U;
	uint8_t x5400 = 5U;
	uint32_t t88 = 207U;

	t88 = ((x5397<=x5398)^(x5399>>x5400));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5442 = 456LLU;
	uint16_t x5443 = 168U;
	uint8_t x5444 = 0U;

	t89 = ((x5441<=x5442)^(x5443>>x5444));

	if (t89 != 168) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5449 = UINT8_MAX;
	int32_t x5450 = INT32_MIN;
	uint16_t x5451 = 59U;
	static uint8_t x5452 = 0U;

	t90 = ((x5449<=x5450)^(x5451>>x5452));

	if (t90 != 59) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5509 = 0;
	volatile int16_t x5510 = -1;
	int16_t x5512 = 1;
	volatile int32_t t91 = -57440;

	t91 = ((x5509<=x5510)^(x5511>>x5512));

	if (t91 != 1727) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5657 = INT8_MIN;
	volatile int8_t x5658 = INT8_MIN;
	int32_t x5659 = INT32_MAX;
	int8_t x5660 = 0;

	t92 = ((x5657<=x5658)^(x5659>>x5660));

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x5689 = UINT16_MAX;
	uint16_t x5691 = 131U;
	uint8_t x5692 = 27U;

	t93 = ((x5689<=x5690)^(x5691>>x5692));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5733 = 2523;
	int8_t x5735 = INT8_MAX;
	uint8_t x5736 = 14U;
	static int32_t t94 = 3230088;

	t94 = ((x5733<=x5734)^(x5735>>x5736));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x5745 = 19LLU;
	int16_t x5746 = -1;
	uint32_t x5747 = 36U;
	volatile uint64_t x5748 = 5LLU;
	uint32_t t95 = 53U;

	t95 = ((x5745<=x5746)^(x5747>>x5748));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5801 = UINT16_MAX;
	uint8_t x5804 = 1U;
	int32_t t96 = 31750195;

	t96 = ((x5801<=x5802)^(x5803>>x5804));

	if (t96 != 135) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x5821 = INT64_MAX;
	int32_t x5822 = -1;
	uint16_t x5823 = 128U;
	volatile uint32_t x5824 = 11U;
	volatile int32_t t97 = 218;

	t97 = ((x5821<=x5822)^(x5823>>x5824));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6009 = 28792771LLU;
	int16_t x6010 = INT16_MAX;
	static volatile uint16_t x6012 = 2U;
	static volatile int32_t t98 = -10;

	t98 = ((x6009<=x6010)^(x6011>>x6012));

	if (t98 != 31) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x6014 = 1995362LLU;
	int8_t x6015 = INT8_MAX;
	uint64_t x6016 = 0LLU;

	t99 = ((x6013<=x6014)^(x6015>>x6016));

	if (t99 != 127) { NG(); } else { ; }
	
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

