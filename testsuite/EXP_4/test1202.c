#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 95511790678087LLU;
int64_t t1 = -120456289417853LL;
uint32_t x190 = 1U;
volatile int8_t x192 = INT8_MIN;
uint16_t x267 = 20247U;
int8_t x268 = -1;
uint8_t x338 = 15U;
int16_t x340 = -1;
int8_t x455 = INT8_MAX;
volatile uint64_t t5 = 38812676LLU;
uint8_t x806 = 10U;
static uint16_t x972 = 15674U;
uint32_t t10 = 257486U;
static uint8_t x1069 = 1U;
volatile int32_t t14 = -35;
int64_t x1105 = 45811692377064LL;
int8_t x1107 = INT8_MIN;
static uint8_t x1539 = 114U;
uint8_t x1540 = 115U;
volatile int32_t t21 = -58;
uint16_t x1989 = UINT16_MAX;
static int8_t x1990 = 1;
int32_t x1991 = -1;
int16_t x1994 = 0;
static uint64_t x2045 = 190992LLU;
volatile uint16_t x2047 = 3U;
int16_t x2077 = 42;
uint16_t x2080 = 7U;
int16_t x2098 = 2;
volatile int32_t t30 = 1307983;
uint64_t x2189 = UINT64_MAX;
static int64_t x2509 = 311114586LL;
static volatile uint32_t x2518 = 10U;
int32_t x2519 = -469;
uint32_t t35 = 346U;
int64_t x2551 = INT64_MAX;
int8_t x2613 = 0;
int16_t x2614 = 0;
int8_t x2961 = 1;
volatile int16_t x2963 = -1;
volatile uint16_t x3038 = 1U;
int8_t x3080 = INT8_MIN;
static volatile int32_t t42 = -7592159;
uint16_t x3126 = 12U;
uint16_t x3128 = UINT16_MAX;
int16_t x3168 = INT16_MIN;
volatile uint64_t x3236 = UINT64_MAX;
int32_t t49 = 143;
volatile int32_t x3725 = 2925;
static volatile int64_t x3955 = -131296LL;
int16_t x4034 = 0;
static int64_t x4039 = INT64_MIN;
static uint32_t x4085 = UINT32_MAX;
volatile int64_t x4087 = INT64_MAX;
int32_t x4297 = 305065;
static int32_t t59 = 162157250;
volatile uint32_t x4537 = UINT32_MAX;
uint16_t x4538 = 0U;
int8_t x4539 = INT8_MAX;
uint16_t x4540 = UINT16_MAX;
static uint32_t x4681 = 117907626U;
uint32_t t61 = 258U;
uint8_t x4690 = 2U;
static int32_t x4794 = 7;
int16_t x4804 = INT16_MIN;
static int32_t x5041 = 6257;
int64_t x5043 = INT64_MAX;
static int32_t x5061 = INT32_MAX;
volatile int32_t t68 = INT32_MAX;
uint16_t x5118 = 27U;
int16_t x5121 = INT16_MAX;
volatile int32_t t71 = 38954542;
int64_t x5172 = INT64_MIN;
int16_t x5209 = 3443;
volatile int8_t x5211 = INT8_MIN;
uint32_t x5230 = 23U;
int8_t x5231 = 2;
uint8_t x5232 = UINT8_MAX;
int16_t x5261 = INT16_MAX;
int32_t x5268 = INT32_MIN;
static uint16_t x5348 = 5753U;
int32_t x5467 = 65;
volatile int32_t x5468 = 639;
uint8_t x5614 = 7U;
volatile int64_t x5807 = 22228716020331LL;
static uint32_t x5808 = 1893U;
volatile int32_t x5927 = 3423;
uint64_t x5989 = 5929LLU;
uint32_t x6127 = 987436175U;
volatile int8_t x6347 = INT8_MIN;
int32_t t90 = -155833;
volatile uint8_t x6611 = 22U;
int64_t x6612 = INT64_MIN;
static int8_t x6627 = -3;
int8_t x6628 = INT8_MIN;
uint16_t x6690 = 13U;
volatile int32_t x6692 = 84249292;
uint64_t x6701 = UINT64_MAX;
uint8_t x6936 = UINT8_MAX;
volatile int32_t t97 = 1;
volatile int64_t x7271 = INT64_MIN;
int8_t x7272 = INT8_MIN;


void f0(void) {
	static uint64_t x17 = 946796LLU;
	volatile uint64_t x18 = 1LLU;
	uint16_t x19 = 15U;
	uint8_t x20 = 3U;

	t0 = (x17<<(x18-(x19==x20)));

	if (t0 != 1893592LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x69 = 1LL;
	static uint16_t x70 = 1U;
	int16_t x71 = 1236;
	int64_t x72 = -5190614357LL;

	t1 = (x69<<(x70-(x71==x72)));

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x189 = 39U;
	volatile int8_t x191 = INT8_MIN;
	int32_t t2 = -435299454;

	t2 = (x189<<(x190-(x191==x192)));

	if (t2 != 39) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x265 = 3LLU;
	int8_t x266 = 1;
	uint64_t t3 = 521058LLU;

	t3 = (x265<<(x266-(x267==x268)));

	if (t3 != 6LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x337 = 54U;
	uint64_t x339 = UINT64_MAX;
	uint32_t t4 = 420899751U;

	t4 = (x337<<(x338-(x339==x340)));

	if (t4 != 884736U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x453 = UINT64_MAX;
	uint16_t x454 = 1U;
	uint64_t x456 = 33896512355428LLU;

	t5 = (x453<<(x454-(x455==x456)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x465 = 1568150250LLU;
	int8_t x466 = 1;
	volatile uint64_t x467 = 196LLU;
	uint64_t x468 = 195LLU;
	volatile uint64_t t6 = 829257LLU;

	t6 = (x465<<(x466-(x467==x468)));

	if (t6 != 3136300500LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x805 = 364U;
	uint32_t x807 = UINT32_MAX;
	uint32_t x808 = UINT32_MAX;
	static uint32_t t7 = 50U;

	t7 = (x805<<(x806-(x807==x808)));

	if (t7 != 186368U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x809 = UINT32_MAX;
	uint16_t x810 = 21U;
	int32_t x811 = INT32_MAX;
	uint8_t x812 = UINT8_MAX;
	static uint32_t t8 = 2U;

	t8 = (x809<<(x810-(x811==x812)));

	if (t8 != 4292870144U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x857 = INT8_MAX;
	int8_t x858 = 3;
	int8_t x859 = -1;
	int32_t x860 = INT32_MIN;
	volatile int32_t t9 = 0;

	t9 = (x857<<(x858-(x859==x860)));

	if (t9 != 1016) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x969 = 1032460545U;
	volatile uint8_t x970 = 0U;
	int16_t x971 = -17;

	t10 = (x969<<(x970-(x971==x972)));

	if (t10 != 1032460545U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1045 = INT16_MAX;
	uint32_t x1046 = 0U;
	volatile int16_t x1047 = INT16_MIN;
	int64_t x1048 = -1LL;
	volatile int32_t t11 = 9;

	t11 = (x1045<<(x1046-(x1047==x1048)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x1061 = UINT64_MAX;
	uint8_t x1062 = 8U;
	int64_t x1063 = INT64_MAX;
	int64_t x1064 = INT64_MIN;
	static volatile uint64_t t12 = 28LLU;

	t12 = (x1061<<(x1062-(x1063==x1064)));

	if (t12 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x1065 = UINT8_MAX;
	volatile int8_t x1066 = 1;
	static int8_t x1067 = -1;
	int32_t x1068 = INT32_MAX;
	int32_t t13 = -25162;

	t13 = (x1065<<(x1066-(x1067==x1068)));

	if (t13 != 510) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x1070 = 8LL;
	uint32_t x1071 = 1603U;
	volatile int16_t x1072 = -1;

	t14 = (x1069<<(x1070-(x1071==x1072)));

	if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1106 = 0;
	int16_t x1108 = INT16_MAX;
	volatile int64_t t15 = 2035106081010122495LL;

	t15 = (x1105<<(x1106-(x1107==x1108)));

	if (t15 != 45811692377064LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1137 = 216885620;
	static volatile uint8_t x1138 = 0U;
	int64_t x1139 = INT64_MIN;
	int32_t x1140 = INT32_MAX;
	volatile int32_t t16 = -1251901;

	t16 = (x1137<<(x1138-(x1139==x1140)));

	if (t16 != 216885620) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1205 = UINT16_MAX;
	uint64_t x1206 = 7LLU;
	int8_t x1207 = INT8_MIN;
	static uint64_t x1208 = 387372LLU;
	int32_t t17 = -500216474;

	t17 = (x1205<<(x1206-(x1207==x1208)));

	if (t17 != 8388480) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1217 = 63U;
	int16_t x1218 = 0;
	int16_t x1219 = -1;
	static int16_t x1220 = INT16_MIN;
	static int32_t t18 = -9;

	t18 = (x1217<<(x1218-(x1219==x1220)));

	if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1225 = 42U;
	uint8_t x1226 = 9U;
	int64_t x1227 = 1LL;
	int64_t x1228 = -1LL;
	volatile uint32_t t19 = 56867U;

	t19 = (x1225<<(x1226-(x1227==x1228)));

	if (t19 != 21504U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1537 = 45U;
	uint16_t x1538 = 0U;
	static volatile int32_t t20 = 51;

	t20 = (x1537<<(x1538-(x1539==x1540)));

	if (t20 != 45) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1645 = 5048U;
	int8_t x1646 = 1;
	volatile int64_t x1647 = INT64_MIN;
	int8_t x1648 = INT8_MIN;

	t21 = (x1645<<(x1646-(x1647==x1648)));

	if (t21 != 10096) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1685 = INT8_MAX;
	uint8_t x1686 = 0U;
	int64_t x1687 = -1LL;
	int8_t x1688 = INT8_MIN;
	volatile int32_t t22 = -146067484;

	t22 = (x1685<<(x1686-(x1687==x1688)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1829 = 33093974162LL;
	int8_t x1830 = 1;
	int16_t x1831 = INT16_MIN;
	static volatile int64_t x1832 = INT64_MIN;
	int64_t t23 = 5LL;

	t23 = (x1829<<(x1830-(x1831==x1832)));

	if (t23 != 66187948324LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1893 = 36281280;
	static int16_t x1894 = 3;
	int64_t x1895 = INT64_MIN;
	int8_t x1896 = INT8_MIN;
	int32_t t24 = -13;

	t24 = (x1893<<(x1894-(x1895==x1896)));

	if (t24 != 290250240) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1992 = UINT8_MAX;
	volatile int32_t t25 = -386205;

	t25 = (x1989<<(x1990-(x1991==x1992)));

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1993 = 13739LLU;
	uint16_t x1995 = 1005U;
	int64_t x1996 = -1LL;
	volatile uint64_t t26 = 504209LLU;

	t26 = (x1993<<(x1994-(x1995==x1996)));

	if (t26 != 13739LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x2046 = 27U;
	static int64_t x2048 = INT64_MAX;
	uint64_t t27 = 1038111522212559LLU;

	t27 = (x2045<<(x2046-(x2047==x2048)));

	if (t27 != 25634512306176LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x2078 = 3;
	volatile uint64_t x2079 = 4252LLU;
	int32_t t28 = -40;

	t28 = (x2077<<(x2078-(x2079==x2080)));

	if (t28 != 336) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2089 = UINT16_MAX;
	volatile uint32_t x2090 = 7U;
	static int32_t x2091 = INT32_MAX;
	uint16_t x2092 = 3359U;
	volatile int32_t t29 = -30886;

	t29 = (x2089<<(x2090-(x2091==x2092)));

	if (t29 != 8388480) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2097 = 44104464;
	volatile int64_t x2099 = -6837LL;
	uint16_t x2100 = 13628U;

	t30 = (x2097<<(x2098-(x2099==x2100)));

	if (t30 != 176417856) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2133 = 875U;
	uint8_t x2134 = 28U;
	int16_t x2135 = -43;
	uint8_t x2136 = UINT8_MAX;
	uint32_t t31 = 496569615U;

	t31 = (x2133<<(x2134-(x2135==x2136)));

	if (t31 != 2952790016U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2190 = 30U;
	static uint64_t x2191 = 19954701LLU;
	uint64_t x2192 = 18LLU;
	volatile uint64_t t32 = 8952LLU;

	t32 = (x2189<<(x2190-(x2191==x2192)));

	if (t32 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2417 = 1435U;
	int8_t x2418 = 10;
	int64_t x2419 = INT64_MIN;
	volatile uint64_t x2420 = UINT64_MAX;
	int32_t t33 = -1851;

	t33 = (x2417<<(x2418-(x2419==x2420)));

	if (t33 != 1469440) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2510 = 10U;
	int8_t x2511 = INT8_MIN;
	int16_t x2512 = INT16_MAX;
	int64_t t34 = -96LL;

	t34 = (x2509<<(x2510-(x2511==x2512)));

	if (t34 != 318581336064LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2517 = UINT32_MAX;
	uint64_t x2520 = UINT64_MAX;

	t35 = (x2517<<(x2518-(x2519==x2520)));

	if (t35 != 4294966272U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2549 = INT16_MAX;
	uint16_t x2550 = 2U;
	static volatile uint64_t x2552 = 231743504423LLU;
	volatile int32_t t36 = 2040633;

	t36 = (x2549<<(x2550-(x2551==x2552)));

	if (t36 != 131068) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2615 = UINT32_MAX;
	static int64_t x2616 = INT64_MIN;
	int32_t t37 = -62;

	t37 = (x2613<<(x2614-(x2615==x2616)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2713 = UINT64_MAX;
	static int16_t x2714 = 1;
	int8_t x2715 = INT8_MIN;
	int64_t x2716 = -1LL;
	volatile uint64_t t38 = 1932496599990836494LLU;

	t38 = (x2713<<(x2714-(x2715==x2716)));

	if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2962 = 1;
	static int64_t x2964 = INT64_MIN;
	int32_t t39 = 289417;

	t39 = (x2961<<(x2962-(x2963==x2964)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3037 = 10;
	uint16_t x3039 = UINT16_MAX;
	uint8_t x3040 = 3U;
	int32_t t40 = -936;

	t40 = (x3037<<(x3038-(x3039==x3040)));

	if (t40 != 20) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x3065 = 1;
	volatile uint8_t x3066 = 0U;
	volatile uint8_t x3067 = UINT8_MAX;
	static int32_t x3068 = INT32_MAX;
	volatile int32_t t41 = 13461;

	t41 = (x3065<<(x3066-(x3067==x3068)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3077 = 40;
	static int8_t x3078 = 8;
	int8_t x3079 = INT8_MAX;

	t42 = (x3077<<(x3078-(x3079==x3080)));

	if (t42 != 10240) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3125 = 16524701388482LLU;
	int64_t x3127 = -1LL;
	volatile uint64_t t43 = 2681LLU;

	t43 = (x3125<<(x3126-(x3127==x3128)));

	if (t43 != 67685176887222272LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3157 = 9784985LLU;
	int16_t x3158 = 3;
	int16_t x3159 = INT16_MIN;
	int64_t x3160 = 1076499359928LL;
	static uint64_t t44 = 0LLU;

	t44 = (x3157<<(x3158-(x3159==x3160)));

	if (t44 != 78279880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x3165 = 15;
	int32_t x3166 = 0;
	int16_t x3167 = 9396;
	volatile int32_t t45 = -267;

	t45 = (x3165<<(x3166-(x3167==x3168)));

	if (t45 != 15) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3221 = 0U;
	static volatile int16_t x3222 = 18;
	int64_t x3223 = 6610LL;
	int32_t x3224 = INT32_MAX;
	volatile int32_t t46 = -5750069;

	t46 = (x3221<<(x3222-(x3223==x3224)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3233 = UINT16_MAX;
	int8_t x3234 = 3;
	volatile uint64_t x3235 = 489481152027525867LLU;
	static volatile int32_t t47 = -910;

	t47 = (x3233<<(x3234-(x3235==x3236)));

	if (t47 != 524280) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3273 = 22;
	uint32_t x3274 = 2U;
	uint16_t x3275 = UINT16_MAX;
	static uint16_t x3276 = 14681U;
	static int32_t t48 = 5160;

	t48 = (x3273<<(x3274-(x3275==x3276)));

	if (t48 != 88) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x3357 = 0;
	static volatile uint32_t x3358 = 9U;
	static int8_t x3359 = INT8_MIN;
	int8_t x3360 = -1;

	t49 = (x3357<<(x3358-(x3359==x3360)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3553 = INT16_MAX;
	int64_t x3554 = 1LL;
	volatile uint32_t x3555 = UINT32_MAX;
	int32_t x3556 = 45074;
	volatile int32_t t50 = 2544888;

	t50 = (x3553<<(x3554-(x3555==x3556)));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3557 = 0U;
	volatile uint8_t x3558 = 5U;
	int64_t x3559 = -2661445030906487LL;
	uint16_t x3560 = 0U;
	static int32_t t51 = 141;

	t51 = (x3557<<(x3558-(x3559==x3560)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3726 = 4;
	int32_t x3727 = INT32_MIN;
	int32_t x3728 = -1;
	int32_t t52 = -8987;

	t52 = (x3725<<(x3726-(x3727==x3728)));

	if (t52 != 46800) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3953 = 596475;
	uint8_t x3954 = 3U;
	int8_t x3956 = -1;
	int32_t t53 = 72126653;

	t53 = (x3953<<(x3954-(x3955==x3956)));

	if (t53 != 4771800) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x4033 = UINT8_MAX;
	uint64_t x4035 = 332LLU;
	volatile int8_t x4036 = 0;
	static volatile int32_t t54 = 11649583;

	t54 = (x4033<<(x4034-(x4035==x4036)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x4037 = 1690032U;
	static int8_t x4038 = 7;
	uint8_t x4040 = 83U;
	volatile uint32_t t55 = 2075040220U;

	t55 = (x4037<<(x4038-(x4039==x4040)));

	if (t55 != 216324096U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4086 = 3U;
	int8_t x4088 = 7;
	uint32_t t56 = 797112195U;

	t56 = (x4085<<(x4086-(x4087==x4088)));

	if (t56 != 4294967288U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4298 = 3U;
	int16_t x4299 = 1538;
	static int8_t x4300 = INT8_MIN;
	int32_t t57 = -3463057;

	t57 = (x4297<<(x4298-(x4299==x4300)));

	if (t57 != 2440520) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4393 = 0U;
	volatile int32_t x4394 = 0;
	int16_t x4395 = -14858;
	int64_t x4396 = INT64_MAX;
	volatile int32_t t58 = 13579089;

	t58 = (x4393<<(x4394-(x4395==x4396)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4489 = UINT16_MAX;
	uint16_t x4490 = 6U;
	uint64_t x4491 = 485390780041LLU;
	volatile uint16_t x4492 = UINT16_MAX;

	t59 = (x4489<<(x4490-(x4491==x4492)));

	if (t59 != 4194240) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x4537<<(x4538-(x4539==x4540)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4682 = 2;
	uint32_t x4683 = 1089U;
	static uint32_t x4684 = 367U;

	t61 = (x4681<<(x4682-(x4683==x4684)));

	if (t61 != 471630504U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4689 = 0;
	int64_t x4691 = -1LL;
	uint16_t x4692 = 191U;
	int32_t t62 = -194108943;

	t62 = (x4689<<(x4690-(x4691==x4692)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4757 = UINT32_MAX;
	int8_t x4758 = 5;
	int16_t x4759 = 0;
	volatile uint8_t x4760 = 0U;
	uint32_t t63 = 1063560209U;

	t63 = (x4757<<(x4758-(x4759==x4760)));

	if (t63 != 4294967280U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4793 = 7U;
	volatile int8_t x4795 = INT8_MIN;
	volatile int16_t x4796 = -866;
	static uint32_t t64 = 1935754430U;

	t64 = (x4793<<(x4794-(x4795==x4796)));

	if (t64 != 896U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4801 = 184873867U;
	int8_t x4802 = 23;
	int8_t x4803 = INT8_MIN;
	volatile uint32_t t65 = 42075337U;

	t65 = (x4801<<(x4802-(x4803==x4804)));

	if (t65 != 3313500160U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4845 = INT16_MAX;
	uint16_t x4846 = 9U;
	volatile uint16_t x4847 = 15176U;
	int8_t x4848 = -4;
	volatile int32_t t66 = 98877;

	t66 = (x4845<<(x4846-(x4847==x4848)));

	if (t66 != 16776704) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x5042 = 6U;
	volatile int8_t x5044 = -30;
	volatile int32_t t67 = -1227;

	t67 = (x5041<<(x5042-(x5043==x5044)));

	if (t67 != 400448) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x5062 = 0;
	uint16_t x5063 = 1194U;
	int8_t x5064 = -1;

	t68 = (x5061<<(x5062-(x5063==x5064)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x5113 = 0;
	uint8_t x5114 = 5U;
	int32_t x5115 = INT32_MAX;
	uint8_t x5116 = 1U;
	static int32_t t69 = 0;

	t69 = (x5113<<(x5114-(x5115==x5116)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x5117 = 1856778782U;
	volatile int8_t x5119 = INT8_MAX;
	volatile int32_t x5120 = -389104676;
	volatile uint32_t t70 = 465306832U;

	t70 = (x5117<<(x5118-(x5119==x5120)));

	if (t70 != 4026531840U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5122 = 1;
	static int64_t x5123 = -1LL;
	int16_t x5124 = 0;

	t71 = (x5121<<(x5122-(x5123==x5124)));

	if (t71 != 65534) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x5169 = 1488LLU;
	uint8_t x5170 = 11U;
	volatile uint16_t x5171 = 405U;
	uint64_t t72 = 14325639893786649LLU;

	t72 = (x5169<<(x5170-(x5171==x5172)));

	if (t72 != 3047424LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5210 = 10U;
	int8_t x5212 = INT8_MIN;
	volatile int32_t t73 = -116109;

	t73 = (x5209<<(x5210-(x5211==x5212)));

	if (t73 != 1762816) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5229 = 10U;
	static int32_t t74 = -63398;

	t74 = (x5229<<(x5230-(x5231==x5232)));

	if (t74 != 83886080) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5262 = 7U;
	int32_t x5263 = -253683572;
	volatile int32_t x5264 = 26807588;
	volatile int32_t t75 = -7476;

	t75 = (x5261<<(x5262-(x5263==x5264)));

	if (t75 != 4194176) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5265 = UINT16_MAX;
	static int16_t x5266 = 15;
	int16_t x5267 = -1;
	volatile int32_t t76 = 1;

	t76 = (x5265<<(x5266-(x5267==x5268)));

	if (t76 != 2147450880) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5273 = 27668482U;
	volatile int8_t x5274 = 3;
	int64_t x5275 = -1LL;
	volatile uint16_t x5276 = 7U;
	static volatile uint32_t t77 = 1U;

	t77 = (x5273<<(x5274-(x5275==x5276)));

	if (t77 != 221347856U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5345 = 275515U;
	volatile int16_t x5346 = 29;
	uint32_t x5347 = 525071114U;
	volatile uint32_t t78 = 13551U;

	t78 = (x5345<<(x5346-(x5347==x5348)));

	if (t78 != 1610612736U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5465 = UINT8_MAX;
	uint16_t x5466 = 5U;
	int32_t t79 = 56838;

	t79 = (x5465<<(x5466-(x5467==x5468)));

	if (t79 != 8160) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5505 = 1U;
	uint8_t x5506 = 2U;
	volatile int64_t x5507 = INT64_MIN;
	int8_t x5508 = INT8_MIN;
	static volatile int32_t t80 = -174400718;

	t80 = (x5505<<(x5506-(x5507==x5508)));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x5613 = 96U;
	uint16_t x5615 = UINT16_MAX;
	static int32_t x5616 = INT32_MIN;
	static int32_t t81 = 31943;

	t81 = (x5613<<(x5614-(x5615==x5616)));

	if (t81 != 12288) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5641 = 957625LL;
	static volatile uint8_t x5642 = 15U;
	int16_t x5643 = INT16_MAX;
	int8_t x5644 = -1;
	volatile int64_t t82 = 503995LL;

	t82 = (x5641<<(x5642-(x5643==x5644)));

	if (t82 != 31379456000LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5805 = 47783LL;
	uint8_t x5806 = 1U;
	int64_t t83 = 1075298711893904LL;

	t83 = (x5805<<(x5806-(x5807==x5808)));

	if (t83 != 95566LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5921 = 15U;
	volatile uint32_t x5922 = 1U;
	uint32_t x5923 = 153640U;
	uint8_t x5924 = 0U;
	volatile uint32_t t84 = 4166U;

	t84 = (x5921<<(x5922-(x5923==x5924)));

	if (t84 != 30U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5925 = UINT16_MAX;
	volatile uint16_t x5926 = 1U;
	volatile uint8_t x5928 = 0U;
	int32_t t85 = 13483;

	t85 = (x5925<<(x5926-(x5927==x5928)));

	if (t85 != 131070) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5990 = 1;
	uint16_t x5991 = 0U;
	uint32_t x5992 = UINT32_MAX;
	uint64_t t86 = 14027177938898LLU;

	t86 = (x5989<<(x5990-(x5991==x5992)));

	if (t86 != 11858LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6125 = INT8_MAX;
	uint16_t x6126 = 0U;
	volatile int8_t x6128 = INT8_MIN;
	int32_t t87 = -101;

	t87 = (x6125<<(x6126-(x6127==x6128)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6345 = 1065573767U;
	uint8_t x6346 = 4U;
	int64_t x6348 = -1LL;
	uint32_t t88 = 1U;

	t88 = (x6345<<(x6346-(x6347==x6348)));

	if (t88 != 4164278384U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x6421 = 142345211LLU;
	volatile uint8_t x6422 = 13U;
	static volatile int32_t x6423 = 3929910;
	uint64_t x6424 = 35937983833LLU;
	uint64_t t89 = 2022594LLU;

	t89 = (x6421<<(x6422-(x6423==x6424)));

	if (t89 != 1166091968512LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x6453 = 108U;
	uint8_t x6454 = 3U;
	volatile int8_t x6455 = INT8_MAX;
	static int64_t x6456 = INT64_MIN;

	t90 = (x6453<<(x6454-(x6455==x6456)));

	if (t90 != 864) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x6609 = 39U;
	volatile int64_t x6610 = 2LL;
	uint32_t t91 = 6U;

	t91 = (x6609<<(x6610-(x6611==x6612)));

	if (t91 != 156U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x6625 = 1;
	uint16_t x6626 = 0U;
	volatile int32_t t92 = -1357;

	t92 = (x6625<<(x6626-(x6627==x6628)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6677 = UINT16_MAX;
	int8_t x6678 = 0;
	int32_t x6679 = -2292;
	volatile int16_t x6680 = INT16_MIN;
	int32_t t93 = -3;

	t93 = (x6677<<(x6678-(x6679==x6680)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6689 = 32382;
	volatile uint64_t x6691 = 38379LLU;
	int32_t t94 = 1106;

	t94 = (x6689<<(x6690-(x6691==x6692)));

	if (t94 != 265273344) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6702 = 0;
	volatile uint8_t x6703 = 9U;
	uint64_t x6704 = 30809796940LLU;
	uint64_t t95 = UINT64_MAX;

	t95 = (x6701<<(x6702-(x6703==x6704)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x6933 = 557084754U;
	uint16_t x6934 = 11U;
	int8_t x6935 = -1;
	uint32_t t96 = 380363027U;

	t96 = (x6933<<(x6934-(x6935==x6936)));

	if (t96 != 2743242752U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6977 = 2U;
	volatile uint16_t x6978 = 8U;
	int16_t x6979 = INT16_MIN;
	static uint16_t x6980 = UINT16_MAX;

	t97 = (x6977<<(x6978-(x6979==x6980)));

	if (t97 != 512) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x7037 = UINT16_MAX;
	uint8_t x7038 = 1U;
	uint64_t x7039 = 79LLU;
	int32_t x7040 = 7;
	volatile int32_t t98 = -10139;

	t98 = (x7037<<(x7038-(x7039==x7040)));

	if (t98 != 131070) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x7269 = 36390761;
	static int8_t x7270 = 1;
	int32_t t99 = -851;

	t99 = (x7269<<(x7270-(x7271==x7272)));

	if (t99 != 72781522) { NG(); } else { ; }
	
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

