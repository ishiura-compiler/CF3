#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x292 = 109556U;
int8_t x433 = 7;
int32_t t3 = 1;
uint8_t x439 = 33U;
static int16_t x569 = INT16_MAX;
uint16_t x642 = 1U;
int32_t x643 = 376900;
uint16_t x686 = 0U;
int32_t x687 = -1;
static volatile int32_t t9 = 0;
int8_t x918 = 0;
uint64_t x919 = 2974314312LLU;
int32_t x976 = INT32_MAX;
volatile uint8_t x1005 = UINT8_MAX;
static int16_t x1008 = INT16_MIN;
static volatile int32_t t12 = -18;
int8_t x1145 = 1;
int8_t x1230 = 18;
uint8_t x1235 = 1U;
int64_t x1333 = 207771416792750LL;
uint64_t x1335 = UINT64_MAX;
int16_t x1336 = INT16_MIN;
volatile int64_t t20 = 0LL;
static int8_t x1359 = -1;
static int8_t x1374 = 1;
uint64_t x1497 = 2LLU;
uint32_t x1546 = UINT32_MAX;
static volatile uint32_t t25 = 86480U;
int32_t t29 = 1884443;
volatile uint64_t x2181 = 1577496580886618LLU;
volatile uint8_t x2182 = 7U;
volatile int8_t x2306 = 0;
int16_t x2316 = INT16_MIN;
uint8_t x2394 = 0U;
uint64_t t37 = 9203359LLU;
uint8_t x2778 = 1U;
uint16_t x2838 = 0U;
int32_t x2840 = INT32_MIN;
int16_t x2901 = 12681;
volatile uint8_t x3146 = 47U;
int8_t x3147 = -1;
int8_t x3195 = -1;
static uint16_t x3214 = 10U;
uint32_t x3216 = 1308777U;
volatile uint32_t x3301 = UINT32_MAX;
uint16_t x3324 = UINT16_MAX;
volatile int16_t x3615 = -1;
int32_t x3616 = -7;
static int16_t x3925 = INT16_MAX;
static volatile int32_t x4015 = INT32_MAX;
int32_t x4016 = INT32_MIN;
int32_t t54 = -472406788;
int16_t x4366 = 1;
int8_t x4367 = INT8_MIN;
uint16_t x4602 = 1U;
volatile uint64_t t59 = 38750968803LLU;
static uint8_t x4972 = 7U;
uint16_t x5225 = 8U;
volatile uint16_t x5373 = UINT16_MAX;
int8_t x5375 = -2;
uint64_t x5426 = 0LLU;
static int8_t x5427 = 1;
static uint8_t x5428 = 1U;
int8_t x5449 = INT8_MAX;
static int8_t x5450 = 0;
int8_t x5451 = 0;
static volatile int32_t t69 = -2;
volatile int16_t x5574 = INT16_MIN;
int16_t x5575 = INT16_MIN;
int16_t x5768 = INT16_MIN;
volatile int32_t t77 = -20220209;
static int16_t x6133 = 83;
static int16_t x6136 = INT16_MAX;
int8_t x6266 = 0;
int32_t t82 = -2941215;
volatile int32_t x6887 = -1;
volatile uint8_t x7110 = 17U;
uint16_t x7198 = 30U;
volatile uint32_t t87 = 28034758U;
static uint64_t x7277 = 69778210LLU;
static uint64_t x7278 = 63LLU;
int32_t x7279 = INT32_MIN;
volatile int16_t x7408 = INT16_MAX;
static uint32_t x7525 = 4369U;
volatile int32_t x7528 = INT32_MAX;
static volatile int32_t t95 = 17;
volatile uint64_t x7768 = 1541623428202487LLU;


void f0(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MAX;
	static volatile int8_t x72 = -1;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x69<<(x70+(x71/x72)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x101 = 22805834LL;
	static volatile int8_t x102 = 1;
	int8_t x103 = INT8_MAX;
	volatile uint64_t x104 = 1680LLU;
	volatile int64_t t1 = 172214657590272LL;

	t1 = (x101<<(x102+(x103/x104)));

	if (t1 != 45611668LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x289 = 488346741U;
	static int8_t x290 = 33;
	static int64_t x291 = -475141LL;
	volatile uint32_t t2 = 1U;

	t2 = (x289<<(x290+(x291/x292)));

	if (t2 != 2684354560U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x434 = -17;
	uint16_t x435 = 3240U;
	uint8_t x436 = 117U;

	t3 = (x433<<(x434+(x435/x436)));

	if (t3 != 7168) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 1U;
	int8_t x440 = INT8_MIN;
	int32_t t4 = 1;

	t4 = (x437<<(x438+(x439/x440)));

	if (t4 != 510) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x570 = 3U;
	int16_t x571 = INT16_MIN;
	int32_t x572 = INT32_MIN;
	static int32_t t5 = 678;

	t5 = (x569<<(x570+(x571/x572)));

	if (t5 != 262136) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x641 = UINT64_MAX;
	int64_t x644 = 1110448807045012LL;
	static uint64_t t6 = 35157767610544896LLU;

	t6 = (x641<<(x642+(x643/x644)));

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x685 = 10;
	int16_t x688 = -1;
	int32_t t7 = 51555950;

	t7 = (x685<<(x686+(x687/x688)));

	if (t7 != 20) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x749 = UINT32_MAX;
	int16_t x750 = 0;
	uint64_t x751 = UINT64_MAX;
	int8_t x752 = -14;
	uint32_t t8 = 626U;

	t8 = (x749<<(x750+(x751/x752)));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x873 = 87U;
	uint8_t x874 = 0U;
	static int64_t x875 = -9LL;
	int8_t x876 = INT8_MIN;

	t9 = (x873<<(x874+(x875/x876)));

	if (t9 != 87) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x917 = 2U;
	int32_t x920 = INT32_MAX;
	volatile int32_t t10 = 11;

	t10 = (x917<<(x918+(x919/x920)));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x973 = 1U;
	static uint8_t x974 = 1U;
	int16_t x975 = -1;
	volatile int32_t t11 = 3;

	t11 = (x973<<(x974+(x975/x976)));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1006 = -1;
	int16_t x1007 = INT16_MIN;

	t12 = (x1005<<(x1006+(x1007/x1008)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1029 = 59U;
	volatile uint16_t x1030 = 2U;
	static volatile uint32_t x1031 = 136862U;
	static int32_t x1032 = INT32_MAX;
	volatile int32_t t13 = 3905243;

	t13 = (x1029<<(x1030+(x1031/x1032)));

	if (t13 != 236) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1041 = INT32_MAX;
	int16_t x1042 = -1;
	int8_t x1043 = -1;
	uint64_t x1044 = UINT64_MAX;
	int32_t t14 = INT32_MAX;

	t14 = (x1041<<(x1042+(x1043/x1044)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1089 = 3904U;
	uint8_t x1090 = 6U;
	int16_t x1091 = 3610;
	int16_t x1092 = -3433;
	static uint32_t t15 = 5511627U;

	t15 = (x1089<<(x1090+(x1091/x1092)));

	if (t15 != 124928U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1146 = -1;
	volatile int32_t x1147 = -1;
	int32_t x1148 = -1;
	static int32_t t16 = -31;

	t16 = (x1145<<(x1146+(x1147/x1148)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1157 = INT8_MAX;
	int32_t x1158 = 9;
	int8_t x1159 = 3;
	int16_t x1160 = INT16_MAX;
	int32_t t17 = -1797;

	t17 = (x1157<<(x1158+(x1159/x1160)));

	if (t17 != 65024) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1229 = 4U;
	static int64_t x1231 = 112LL;
	static volatile int32_t x1232 = INT32_MIN;
	volatile int32_t t18 = 14;

	t18 = (x1229<<(x1230+(x1231/x1232)));

	if (t18 != 1048576) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1233 = 54492517U;
	uint16_t x1234 = 10U;
	uint32_t x1236 = UINT32_MAX;
	volatile uint32_t t19 = 8U;

	t19 = (x1233<<(x1234+(x1235/x1236)));

	if (t19 != 4260729856U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1334 = -1LL;

	t20 = (x1333<<(x1334+(x1335/x1336)));

	if (t20 != 207771416792750LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1357 = 330822LL;
	int16_t x1358 = -1;
	uint32_t x1360 = 109940473U;
	volatile int64_t t21 = 1635800277292003863LL;

	t21 = (x1357<<(x1358+(x1359/x1360)));

	if (t21 != 90935658931027968LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1373 = 121642439LL;
	int64_t x1375 = -922791768LL;
	static int32_t x1376 = INT32_MIN;
	int64_t t22 = 1LL;

	t22 = (x1373<<(x1374+(x1375/x1376)));

	if (t22 != 243284878LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1477 = 3;
	static int8_t x1478 = 0;
	int8_t x1479 = -5;
	int8_t x1480 = 16;
	static volatile int32_t t23 = 2024396;

	t23 = (x1477<<(x1478+(x1479/x1480)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1498 = 62U;
	int64_t x1499 = -1LL;
	uint16_t x1500 = 28783U;
	volatile uint64_t t24 = 4314855990476123LLU;

	t24 = (x1497<<(x1498+(x1499/x1500)));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1545 = 2U;
	int16_t x1547 = INT16_MIN;
	static uint32_t x1548 = 857799197U;

	t25 = (x1545<<(x1546+(x1547/x1548)));

	if (t25 != 32U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1701 = 63U;
	uint8_t x1702 = 0U;
	int8_t x1703 = INT8_MAX;
	static int16_t x1704 = 23;
	volatile int32_t t26 = -1;

	t26 = (x1701<<(x1702+(x1703/x1704)));

	if (t26 != 2016) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1869 = 9692U;
	int64_t x1870 = 1LL;
	int32_t x1871 = 2658981;
	static int64_t x1872 = INT64_MIN;
	volatile int32_t t27 = 18;

	t27 = (x1869<<(x1870+(x1871/x1872)));

	if (t27 != 19384) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2057 = UINT32_MAX;
	int8_t x2058 = 1;
	uint32_t x2059 = 3039U;
	uint32_t x2060 = 1525118048U;
	static uint32_t t28 = 5640505U;

	t28 = (x2057<<(x2058+(x2059/x2060)));

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2085 = INT16_MAX;
	int16_t x2086 = INT16_MIN;
	int16_t x2087 = INT16_MIN;
	int64_t x2088 = -1LL;

	t29 = (x2085<<(x2086+(x2087/x2088)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x2183 = 219U;
	int8_t x2184 = INT8_MAX;
	volatile uint64_t t30 = 3LLU;

	t30 = (x2181<<(x2182+(x2183/x2184)));

	if (t30 != 403839124706974208LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2305 = 1128393LL;
	int16_t x2307 = -1;
	int32_t x2308 = -15422;
	volatile int64_t t31 = 4646LL;

	t31 = (x2305<<(x2306+(x2307/x2308)));

	if (t31 != 1128393LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x2313 = 918282313LLU;
	static uint16_t x2314 = 34U;
	static volatile uint16_t x2315 = 31719U;
	volatile uint64_t t32 = 10390587500854981LLU;

	t32 = (x2313<<(x2314+(x2315/x2316)));

	if (t32 != 15775970011320942592LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2393 = 27;
	static int32_t x2395 = INT32_MAX;
	int64_t x2396 = INT64_MIN;
	volatile int32_t t33 = -3;

	t33 = (x2393<<(x2394+(x2395/x2396)));

	if (t33 != 27) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2397 = INT16_MAX;
	volatile int8_t x2398 = -1;
	int8_t x2399 = -1;
	int8_t x2400 = -1;
	int32_t t34 = -15791745;

	t34 = (x2397<<(x2398+(x2399/x2400)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2413 = UINT64_MAX;
	uint64_t x2414 = 10LLU;
	int64_t x2415 = -1421719LL;
	int64_t x2416 = -1976465811903280299LL;
	volatile uint64_t t35 = 772LLU;

	t35 = (x2413<<(x2414+(x2415/x2416)));

	if (t35 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2557 = INT16_MAX;
	volatile int8_t x2558 = 1;
	int16_t x2559 = INT16_MAX;
	int16_t x2560 = INT16_MIN;
	int32_t t36 = -51484950;

	t36 = (x2557<<(x2558+(x2559/x2560)));

	if (t36 != 65534) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2661 = 2599080037LLU;
	uint32_t x2662 = UINT32_MAX;
	uint32_t x2663 = 1064U;
	uint32_t x2664 = 101U;

	t37 = (x2661<<(x2662+(x2663/x2664)));

	if (t37 != 1330728978944LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2685 = 1U;
	static int64_t x2686 = -1LL;
	uint64_t x2687 = UINT64_MAX;
	int8_t x2688 = INT8_MIN;
	static int32_t t38 = -179727;

	t38 = (x2685<<(x2686+(x2687/x2688)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2777 = INT16_MAX;
	uint8_t x2779 = 79U;
	int64_t x2780 = INT64_MIN;
	volatile int32_t t39 = 811626326;

	t39 = (x2777<<(x2778+(x2779/x2780)));

	if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2837 = UINT16_MAX;
	static volatile int64_t x2839 = -1LL;
	static volatile int32_t t40 = 6;

	t40 = (x2837<<(x2838+(x2839/x2840)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2857 = INT8_MAX;
	static uint64_t x2858 = 3LLU;
	volatile int8_t x2859 = INT8_MIN;
	volatile int64_t x2860 = -411437342854582227LL;
	volatile int32_t t41 = -55;

	t41 = (x2857<<(x2858+(x2859/x2860)));

	if (t41 != 1016) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2902 = 7U;
	uint32_t x2903 = UINT32_MAX;
	static int8_t x2904 = -7;
	volatile int32_t t42 = -28;

	t42 = (x2901<<(x2902+(x2903/x2904)));

	if (t42 != 3246336) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2905 = 4471;
	uint8_t x2906 = 12U;
	uint8_t x2907 = 2U;
	static volatile uint32_t x2908 = 509U;
	int32_t t43 = 96882629;

	t43 = (x2905<<(x2906+(x2907/x2908)));

	if (t43 != 18313216) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2913 = UINT32_MAX;
	int8_t x2914 = 26;
	int16_t x2915 = INT16_MIN;
	uint16_t x2916 = UINT16_MAX;
	uint32_t t44 = 14181U;

	t44 = (x2913<<(x2914+(x2915/x2916)));

	if (t44 != 4227858432U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3145 = UINT64_MAX;
	int32_t x3148 = INT32_MIN;
	volatile uint64_t t45 = 238560LLU;

	t45 = (x3145<<(x3146+(x3147/x3148)));

	if (t45 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x3193 = 1U;
	int8_t x3194 = -1;
	uint64_t x3196 = UINT64_MAX;
	int32_t t46 = -738369;

	t46 = (x3193<<(x3194+(x3195/x3196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3213 = 405U;
	volatile int64_t x3215 = 1061453LL;
	volatile uint32_t t47 = 23U;

	t47 = (x3213<<(x3214+(x3215/x3216)));

	if (t47 != 414720U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x3302 = -1;
	static uint32_t x3303 = UINT32_MAX;
	int16_t x3304 = -1;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x3301<<(x3302+(x3303/x3304)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3321 = INT64_MAX;
	int8_t x3322 = 0;
	int64_t x3323 = -299LL;
	int64_t t49 = INT64_MAX;

	t49 = (x3321<<(x3322+(x3323/x3324)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3597 = 2148276735641LLU;
	int8_t x3598 = 0;
	uint16_t x3599 = 1175U;
	static int64_t x3600 = INT64_MIN;
	static volatile uint64_t t50 = 7LLU;

	t50 = (x3597<<(x3598+(x3599/x3600)));

	if (t50 != 2148276735641LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x3613 = UINT16_MAX;
	uint16_t x3614 = 5U;
	volatile int32_t t51 = 55;

	t51 = (x3613<<(x3614+(x3615/x3616)));

	if (t51 != 2097120) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3926 = 7U;
	volatile int32_t x3927 = 21;
	static int32_t x3928 = -1034348523;
	volatile int32_t t52 = 5037;

	t52 = (x3925<<(x3926+(x3927/x3928)));

	if (t52 != 4194176) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3985 = UINT8_MAX;
	uint16_t x3986 = 2U;
	int16_t x3987 = 1722;
	static uint32_t x3988 = UINT32_MAX;
	static int32_t t53 = 0;

	t53 = (x3985<<(x3986+(x3987/x3988)));

	if (t53 != 1020) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x4013 = UINT16_MAX;
	uint16_t x4014 = 2U;

	t54 = (x4013<<(x4014+(x4015/x4016)));

	if (t54 != 262140) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x4365 = UINT32_MAX;
	int64_t x4368 = -882LL;
	volatile uint32_t t55 = 68624U;

	t55 = (x4365<<(x4366+(x4367/x4368)));

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x4413 = UINT64_MAX;
	static int8_t x4414 = 3;
	int16_t x4415 = -1;
	int64_t x4416 = -1LL;
	volatile uint64_t t56 = 124676441LLU;

	t56 = (x4413<<(x4414+(x4415/x4416)));

	if (t56 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x4533 = UINT32_MAX;
	static volatile int16_t x4534 = 0;
	int32_t x4535 = 4782;
	uint32_t x4536 = UINT32_MAX;
	static uint32_t t57 = UINT32_MAX;

	t57 = (x4533<<(x4534+(x4535/x4536)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4601 = 610294386U;
	volatile uint16_t x4603 = 13577U;
	int64_t x4604 = 63627270147661LL;
	volatile uint32_t t58 = 864555U;

	t58 = (x4601<<(x4602+(x4603/x4604)));

	if (t58 != 1220588772U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x4641 = 104571270947661583LLU;
	int8_t x4642 = -1;
	volatile int32_t x4643 = -9;
	static int16_t x4644 = -1;

	t59 = (x4641<<(x4642+(x4643/x4644)));

	if (t59 != 8323501288891813632LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x4737 = 3;
	int8_t x4738 = 0;
	static uint32_t x4739 = 42U;
	int32_t x4740 = INT32_MIN;
	static int32_t t60 = 2081;

	t60 = (x4737<<(x4738+(x4739/x4740)));

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x4901 = INT32_MAX;
	int16_t x4902 = -1;
	uint32_t x4903 = UINT32_MAX;
	int16_t x4904 = INT16_MIN;
	static int32_t t61 = INT32_MAX;

	t61 = (x4901<<(x4902+(x4903/x4904)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4969 = UINT32_MAX;
	int64_t x4970 = -1LL;
	uint16_t x4971 = 59U;
	volatile uint32_t t62 = 3000U;

	t62 = (x4969<<(x4970+(x4971/x4972)));

	if (t62 != 4294967168U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x5053 = 1232U;
	volatile uint8_t x5054 = 3U;
	volatile uint32_t x5055 = 295850U;
	int16_t x5056 = INT16_MIN;
	static volatile int32_t t63 = -60;

	t63 = (x5053<<(x5054+(x5055/x5056)));

	if (t63 != 9856) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x5101 = 1969106776LLU;
	volatile uint64_t x5102 = 53LLU;
	int32_t x5103 = 42430;
	int32_t x5104 = INT32_MIN;
	uint64_t t64 = 1699157635LLU;

	t64 = (x5101<<(x5102+(x5103/x5104)));

	if (t64 != 16933534598913064960LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5226 = 1;
	volatile int64_t x5227 = -1LL;
	uint16_t x5228 = UINT16_MAX;
	static int32_t t65 = 49;

	t65 = (x5225<<(x5226+(x5227/x5228)));

	if (t65 != 16) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x5374 = 12U;
	int64_t x5376 = INT64_MIN;
	volatile int32_t t66 = -978894307;

	t66 = (x5373<<(x5374+(x5375/x5376)));

	if (t66 != 268431360) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x5425 = 18LLU;
	volatile uint64_t t67 = 21960238590LLU;

	t67 = (x5425<<(x5426+(x5427/x5428)));

	if (t67 != 36LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x5452 = 893686;
	volatile int32_t t68 = 0;

	t68 = (x5449<<(x5450+(x5451/x5452)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x5533 = 290;
	uint8_t x5534 = 0U;
	int32_t x5535 = INT32_MIN;
	uint64_t x5536 = UINT64_MAX;

	t69 = (x5533<<(x5534+(x5535/x5536)));

	if (t69 != 290) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5573 = INT8_MAX;
	static volatile int16_t x5576 = -1;
	static int32_t t70 = 5951440;

	t70 = (x5573<<(x5574+(x5575/x5576)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5577 = 18288046U;
	static uint8_t x5578 = 24U;
	static int8_t x5579 = 5;
	int8_t x5580 = -1;
	volatile uint32_t t71 = 12639625U;

	t71 = (x5577<<(x5578+(x5579/x5580)));

	if (t71 != 1836056576U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5653 = 7;
	volatile int16_t x5654 = 0;
	uint16_t x5655 = 53U;
	uint32_t x5656 = UINT32_MAX;
	volatile int32_t t72 = 10;

	t72 = (x5653<<(x5654+(x5655/x5656)));

	if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5733 = 15887973436LL;
	int64_t x5734 = 23LL;
	int8_t x5735 = 0;
	static uint64_t x5736 = UINT64_MAX;
	volatile int64_t t73 = -124943352LL;

	t73 = (x5733<<(x5734+(x5735/x5736)));

	if (t73 != 133277981069017088LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5765 = 2593;
	volatile int16_t x5766 = -1;
	volatile int16_t x5767 = INT16_MIN;
	int32_t t74 = -2;

	t74 = (x5765<<(x5766+(x5767/x5768)));

	if (t74 != 2593) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5937 = 31189715LL;
	uint16_t x5938 = 1U;
	static uint16_t x5939 = 633U;
	static int64_t x5940 = INT64_MIN;
	int64_t t75 = -59465231LL;

	t75 = (x5937<<(x5938+(x5939/x5940)));

	if (t75 != 62379430LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5989 = INT8_MAX;
	static int8_t x5990 = 0;
	int8_t x5991 = INT8_MIN;
	static int32_t x5992 = INT32_MAX;
	int32_t t76 = -3;

	t76 = (x5989<<(x5990+(x5991/x5992)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x6037 = 4U;
	int8_t x6038 = -1;
	uint8_t x6039 = UINT8_MAX;
	static int8_t x6040 = INT8_MAX;

	t77 = (x6037<<(x6038+(x6039/x6040)));

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x6134 = 1;
	int8_t x6135 = INT8_MAX;
	static volatile int32_t t78 = 1;

	t78 = (x6133<<(x6134+(x6135/x6136)));

	if (t78 != 166) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x6265 = 9065U;
	int64_t x6267 = -1LL;
	static uint8_t x6268 = 2U;
	volatile int32_t t79 = 156;

	t79 = (x6265<<(x6266+(x6267/x6268)));

	if (t79 != 9065) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x6273 = 19U;
	static volatile uint8_t x6274 = 9U;
	static int16_t x6275 = INT16_MIN;
	int32_t x6276 = INT32_MAX;
	static int32_t t80 = 2070659;

	t80 = (x6273<<(x6274+(x6275/x6276)));

	if (t80 != 9728) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x6397 = 4LLU;
	uint8_t x6398 = 3U;
	uint16_t x6399 = 7U;
	int16_t x6400 = -517;
	volatile uint64_t t81 = 4006362014744833LLU;

	t81 = (x6397<<(x6398+(x6399/x6400)));

	if (t81 != 32LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6505 = INT8_MAX;
	int8_t x6506 = -1;
	uint32_t x6507 = UINT32_MAX;
	int32_t x6508 = INT32_MIN;

	t82 = (x6505<<(x6506+(x6507/x6508)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6669 = 41236;
	uint8_t x6670 = 0U;
	int16_t x6671 = INT16_MAX;
	uint64_t x6672 = UINT64_MAX;
	int32_t t83 = -8246;

	t83 = (x6669<<(x6670+(x6671/x6672)));

	if (t83 != 41236) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x6693 = UINT32_MAX;
	volatile int32_t x6694 = -1;
	static uint8_t x6695 = 24U;
	int8_t x6696 = 7;
	uint32_t t84 = 39252456U;

	t84 = (x6693<<(x6694+(x6695/x6696)));

	if (t84 != 4294967292U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x6885 = 123U;
	int8_t x6886 = 1;
	uint32_t x6888 = 1097001709U;
	int32_t t85 = 998;

	t85 = (x6885<<(x6886+(x6887/x6888)));

	if (t85 != 1968) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x7109 = 672244U;
	int32_t x7111 = INT32_MIN;
	uint32_t x7112 = 465558013U;
	uint32_t t86 = 1034937988U;

	t86 = (x7109<<(x7110+(x7111/x7112)));

	if (t86 != 1048576000U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x7197 = 2U;
	int8_t x7199 = 1;
	int64_t x7200 = -1LL;

	t87 = (x7197<<(x7198+(x7199/x7200)));

	if (t87 != 1073741824U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x7205 = INT8_MAX;
	volatile int64_t x7206 = 5LL;
	volatile int8_t x7207 = 0;
	static uint8_t x7208 = 29U;
	static int32_t t88 = 24;

	t88 = (x7205<<(x7206+(x7207/x7208)));

	if (t88 != 4064) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x7273 = 119U;
	int16_t x7274 = 15;
	uint32_t x7275 = 44U;
	static uint8_t x7276 = UINT8_MAX;
	static volatile int32_t t89 = -65538107;

	t89 = (x7273<<(x7274+(x7275/x7276)));

	if (t89 != 3899392) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x7280 = INT32_MAX;
	uint64_t t90 = 242LLU;

	t90 = (x7277<<(x7278+(x7279/x7280)));

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x7405 = 6249222773811LLU;
	int8_t x7406 = -1;
	uint16_t x7407 = UINT16_MAX;
	uint64_t t91 = 25509588964LLU;

	t91 = (x7405<<(x7406+(x7407/x7408)));

	if (t91 != 12498445547622LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x7526 = 15U;
	uint64_t x7527 = 51LLU;
	uint32_t t92 = 63860414U;

	t92 = (x7525<<(x7526+(x7527/x7528)));

	if (t92 != 143163392U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x7629 = 2996;
	volatile int32_t x7630 = 1;
	int16_t x7631 = -1;
	uint16_t x7632 = 24674U;
	int32_t t93 = -1131348;

	t93 = (x7629<<(x7630+(x7631/x7632)));

	if (t93 != 5992) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x7693 = 5020U;
	int16_t x7694 = 3;
	uint64_t x7695 = UINT64_MAX;
	int64_t x7696 = -1LL;
	static uint32_t t94 = 3390U;

	t94 = (x7693<<(x7694+(x7695/x7696)));

	if (t94 != 80320U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x7705 = 49;
	int32_t x7706 = -1;
	uint32_t x7707 = UINT32_MAX;
	int8_t x7708 = INT8_MIN;

	t95 = (x7705<<(x7706+(x7707/x7708)));

	if (t95 != 49) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x7765 = 0;
	int8_t x7766 = 1;
	int16_t x7767 = INT16_MAX;
	static int32_t t96 = -373;

	t96 = (x7765<<(x7766+(x7767/x7768)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x7789 = 7645085814024LLU;
	int64_t x7790 = -1LL;
	static int8_t x7791 = INT8_MIN;
	int8_t x7792 = INT8_MIN;
	volatile uint64_t t97 = 8278290467663LLU;

	t97 = (x7789<<(x7790+(x7791/x7792)));

	if (t97 != 7645085814024LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x7985 = 4089379LLU;
	uint8_t x7986 = 25U;
	int32_t x7987 = -998833;
	int64_t x7988 = INT64_MAX;
	uint64_t t98 = 3263673494989LLU;

	t98 = (x7985<<(x7986+(x7987/x7988)));

	if (t98 != 137216789577728LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x8073 = 720LL;
	uint8_t x8074 = 12U;
	uint32_t x8075 = 1U;
	int8_t x8076 = 27;
	volatile int64_t t99 = 46179397LL;

	t99 = (x8073<<(x8074+(x8075/x8076)));

	if (t99 != 2949120LL) { NG(); } else { ; }
	
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

