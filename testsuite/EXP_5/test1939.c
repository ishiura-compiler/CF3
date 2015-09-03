#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x269 = UINT16_MAX;
volatile uint64_t x439 = UINT64_MAX;
volatile uint64_t t2 = 2058496432LLU;
volatile uint16_t x723 = UINT16_MAX;
uint8_t x724 = 1U;
volatile uint64_t t4 = 56764200LLU;
uint16_t x1030 = 63U;
volatile uint8_t x1032 = 25U;
int32_t t6 = INT32_MIN;
int64_t x1127 = INT64_MIN;
volatile int32_t t9 = -6;
uint32_t x1553 = 163U;
uint32_t t12 = 13714667U;
volatile uint64_t x1812 = 1LLU;
uint64_t t14 = 183618678LLU;
volatile uint32_t x2394 = 0U;
int8_t x2402 = INT8_MIN;
static uint64_t t21 = 1990019957022LLU;
int32_t x2437 = -1003777;
volatile uint8_t x2445 = 11U;
volatile uint32_t t25 = 965694715U;
volatile int32_t t26 = 14234589;
int8_t x2634 = -1;
volatile uint64_t t27 = 298732265330460601LLU;
int64_t x2713 = INT64_MAX;
int16_t x2816 = 32;
int32_t t30 = -3;
volatile uint16_t x3030 = 4U;
uint8_t x3032 = 19U;
uint64_t x3053 = 7212842345LLU;
volatile uint64_t t32 = 120672706218LLU;
static volatile uint8_t x3075 = 0U;
int64_t t33 = INT64_MIN;
uint32_t x3321 = 48733U;
uint64_t x3322 = UINT64_MAX;
volatile int64_t x3489 = INT64_MIN;
int32_t x3581 = INT32_MAX;
volatile uint32_t t36 = 668962128U;
int16_t x3753 = INT16_MAX;
uint64_t x3754 = 122LLU;
uint8_t x3820 = 13U;
int32_t x3877 = INT32_MIN;
int8_t x3974 = INT8_MAX;
uint8_t x3975 = UINT8_MAX;
volatile int16_t x3989 = -5;
uint32_t x3991 = 52897313U;
int64_t x3992 = 0LL;
volatile uint32_t t44 = 61604372U;
uint16_t x4144 = 11U;
volatile uint32_t t45 = 99800646U;
volatile int32_t x4171 = 9049028;
uint64_t t47 = 100890337143238LLU;
volatile int64_t x4249 = INT64_MAX;
int8_t x4251 = -27;
static volatile int64_t t48 = -48976LL;
uint64_t t49 = 16LLU;
static uint8_t x4737 = 3U;
uint8_t x4740 = 0U;
static uint64_t x4773 = 52814449051LLU;
static int64_t x4777 = INT64_MIN;
uint64_t x4778 = 445812811210120LLU;
uint64_t x4926 = UINT64_MAX;
uint32_t t58 = 48U;
uint64_t t60 = 1051889021567LLU;
int16_t x5054 = INT16_MIN;
static uint8_t x5056 = 11U;
uint64_t t62 = 7954150868813987244LLU;
uint64_t x5218 = 14648234969737LLU;
int64_t x5289 = INT64_MAX;
int8_t x5463 = 5;
uint8_t x5506 = UINT8_MAX;
int8_t x5583 = INT8_MAX;
volatile uint8_t x5648 = 4U;
volatile uint8_t x5664 = 1U;
uint32_t x5666 = 1U;
int32_t x5667 = -16033721;
volatile int8_t x5765 = INT8_MIN;
int64_t x5869 = INT64_MIN;
static volatile uint16_t x6079 = 2921U;
static uint64_t x6086 = 7LLU;
uint16_t x6088 = 49U;
static int8_t x6137 = -1;
volatile int32_t t81 = -1;
int32_t x6253 = 37139319;
static uint64_t t84 = 917749527019005LLU;
uint16_t x6334 = 249U;
static uint16_t x6335 = 16U;
int64_t t87 = -1792639LL;
static volatile int16_t x6520 = 7;
static int16_t x6553 = INT16_MIN;
static int64_t x6554 = INT64_MAX;
volatile int64_t x6555 = 29451779749319951LL;
int64_t t89 = -21804900887794LL;
int16_t x6710 = INT16_MIN;
int16_t x6712 = 2;
static uint8_t x6856 = 1U;
uint16_t x6956 = 4U;
uint64_t t92 = 294LLU;
volatile int64_t x6965 = -1LL;
volatile uint64_t x6966 = 292092467936964894LLU;
int16_t x7098 = INT16_MAX;
uint64_t x7131 = UINT64_MAX;
uint64_t t97 = 25LLU;
static int16_t x7491 = -1;


void f0(void) {
	int32_t x270 = INT32_MIN;
	volatile uint64_t x271 = 1187858337LLU;
	static int8_t x272 = 2;
	static volatile uint64_t t0 = 427885LLU;

	t0 = (x269-((x270|x271)>>x272));

	if (t0 != 13835058055522135575LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x437 = 0U;
	int8_t x438 = INT8_MAX;
	uint32_t x440 = 14U;
	static uint64_t t1 = 8621464101185035LLU;

	t1 = (x437-((x438|x439)>>x440));

	if (t1 != 18445618173802708993LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x525 = -12;
	static uint16_t x526 = UINT16_MAX;
	static uint64_t x527 = 185541387490804LLU;
	uint64_t x528 = 30LLU;

	t2 = (x525-((x526|x527)>>x528));

	if (t2 != 18446744073709378806LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x721 = INT16_MIN;
	uint16_t x722 = UINT16_MAX;
	int32_t t3 = -224558;

	t3 = (x721-((x722|x723)>>x724));

	if (t3 != -65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x805 = UINT8_MAX;
	static uint64_t x806 = UINT64_MAX;
	uint16_t x807 = UINT16_MAX;
	static uint16_t x808 = 16U;

	t4 = (x805-((x806|x807)>>x808));

	if (t4 != 18446462598732841216LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x845 = UINT64_MAX;
	uint32_t x846 = 1921984532U;
	uint64_t x847 = 47404974443204LLU;
	int8_t x848 = 9;
	uint64_t t5 = 114195697857LLU;

	t5 = (x845-((x846|x847)>>x848));

	if (t5 != 18446743981120596010LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x1029 = INT32_MIN;
	volatile uint16_t x1031 = UINT16_MAX;

	t6 = (x1029-((x1030|x1031)>>x1032));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x1085 = UINT64_MAX;
	uint16_t x1086 = 124U;
	uint64_t x1087 = 6876LLU;
	uint8_t x1088 = 7U;
	uint64_t t7 = 1287888132006789833LLU;

	t7 = (x1085-((x1086|x1087)>>x1088));

	if (t7 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x1125 = INT16_MIN;
	volatile uint64_t x1126 = 5217336716305LLU;
	int16_t x1128 = 0;
	uint64_t t8 = 108208883539869LLU;

	t8 = (x1125-((x1126|x1127)>>x1128));

	if (t8 != 9223366819518026735LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x1153 = 6U;
	static uint16_t x1154 = 681U;
	static int8_t x1155 = INT8_MAX;
	int16_t x1156 = 0;

	t9 = (x1153-((x1154|x1155)>>x1156));

	if (t9 != -761) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1441 = -1;
	int16_t x1442 = INT16_MAX;
	uint8_t x1443 = 23U;
	uint8_t x1444 = 29U;
	static int32_t t10 = 29;

	t10 = (x1441-((x1442|x1443)>>x1444));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1537 = 6457935465271518382LLU;
	int64_t x1538 = 608683492378888390LL;
	static volatile uint8_t x1539 = UINT8_MAX;
	volatile uint64_t x1540 = 10LLU;
	uint64_t t11 = 224LLU;

	t11 = (x1537-((x1538|x1539)>>x1540));

	if (t11 != 6457341047798492124LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1554 = 71U;
	uint16_t x1555 = 28U;
	volatile uint32_t x1556 = 0U;

	t12 = (x1553-((x1554|x1555)>>x1556));

	if (t12 != 68U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1569 = INT64_MAX;
	static volatile int8_t x1570 = INT8_MAX;
	volatile int32_t x1571 = 102157286;
	uint8_t x1572 = 16U;
	volatile int64_t t13 = 62098586011169LL;

	t13 = (x1569-((x1570|x1571)>>x1572));

	if (t13 != 9223372036854774249LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1809 = 6U;
	static uint64_t x1810 = 143530488146LLU;
	int8_t x1811 = INT8_MIN;

	t14 = (x1809-((x1810|x1811)>>x1812));

	if (t14 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1873 = INT8_MAX;
	int64_t x1874 = INT64_MAX;
	uint32_t x1875 = 31802260U;
	int8_t x1876 = 21;
	static int64_t t15 = -238557690492290076LL;

	t15 = (x1873-((x1874|x1875)>>x1876));

	if (t15 != -4398046510976LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1953 = 1;
	uint64_t x1954 = 22737LLU;
	static int32_t x1955 = -1;
	volatile uint8_t x1956 = 4U;
	volatile uint64_t t16 = 6668150539431226LLU;

	t16 = (x1953-((x1954|x1955)>>x1956));

	if (t16 != 17293822569102704642LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x2029 = INT8_MIN;
	uint32_t x2030 = 191015U;
	int32_t x2031 = INT32_MIN;
	uint16_t x2032 = 3U;
	uint32_t t17 = 4367124U;

	t17 = (x2029-((x2030|x2031)>>x2032));

	if (t17 != 4026507836U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x2281 = INT16_MAX;
	uint16_t x2282 = UINT16_MAX;
	int16_t x2283 = 43;
	uint32_t x2284 = 3U;
	static volatile int32_t t18 = -7510;

	t18 = (x2281-((x2282|x2283)>>x2284));

	if (t18 != 24576) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x2381 = 434977543;
	static uint8_t x2382 = UINT8_MAX;
	int8_t x2383 = 8;
	static int8_t x2384 = 0;
	volatile int32_t t19 = 72558984;

	t19 = (x2381-((x2382|x2383)>>x2384));

	if (t19 != 434977288) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x2393 = -35;
	int64_t x2395 = 78147LL;
	uint8_t x2396 = 1U;
	int64_t t20 = 149908LL;

	t20 = (x2393-((x2394|x2395)>>x2396));

	if (t20 != -39108LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x2401 = 63677830U;
	uint64_t x2403 = UINT64_MAX;
	uint8_t x2404 = 2U;

	t21 = (x2401-((x2402|x2403)>>x2404));

	if (t21 != 13835058055345841543LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x2438 = 3;
	uint16_t x2439 = 1914U;
	uint32_t x2440 = 0U;
	volatile int32_t t22 = 3509131;

	t22 = (x2437-((x2438|x2439)>>x2440));

	if (t22 != -1005692) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x2446 = INT32_MAX;
	int64_t x2447 = INT64_MAX;
	static uint8_t x2448 = 49U;
	int64_t t23 = 40790LL;

	t23 = (x2445-((x2446|x2447)>>x2448));

	if (t23 != -16372LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x2541 = -2794730;
	volatile uint32_t x2542 = 3U;
	int32_t x2543 = 65920594;
	volatile uint8_t x2544 = 1U;
	uint32_t t24 = 18U;

	t24 = (x2541-((x2542|x2543)>>x2544));

	if (t24 != 4259212269U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x2545 = UINT8_MAX;
	int16_t x2546 = 12062;
	volatile uint32_t x2547 = UINT32_MAX;
	volatile int8_t x2548 = 1;

	t25 = (x2545-((x2546|x2547)>>x2548));

	if (t25 != 2147483904U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2617 = UINT16_MAX;
	static int16_t x2618 = INT16_MAX;
	int16_t x2619 = INT16_MAX;
	volatile uint16_t x2620 = 1U;

	t26 = (x2617-((x2618|x2619)>>x2620));

	if (t26 != 49152) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2633 = INT16_MAX;
	uint64_t x2635 = UINT64_MAX;
	uint32_t x2636 = 24U;

	t27 = (x2633-((x2634|x2635)>>x2636));

	if (t27 != 18446742974197956608LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x2714 = -1;
	uint32_t x2715 = 117U;
	int8_t x2716 = 1;
	int64_t t28 = -16687621562LL;

	t28 = (x2713-((x2714|x2715)>>x2716));

	if (t28 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2813 = -126;
	volatile int64_t x2814 = -15409679214919LL;
	uint64_t x2815 = 16330103LLU;
	uint64_t t29 = 12LLU;

	t29 = (x2813-((x2814|x2815)>>x2816));

	if (t29 != 18446744069414587782LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x3025 = -85;
	uint16_t x3026 = UINT16_MAX;
	volatile int16_t x3027 = 10;
	uint16_t x3028 = 22U;

	t30 = (x3025-((x3026|x3027)>>x3028));

	if (t30 != -85) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x3029 = INT16_MIN;
	uint16_t x3031 = 0U;
	volatile int32_t t31 = 6925119;

	t31 = (x3029-((x3030|x3031)>>x3032));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x3054 = UINT32_MAX;
	int8_t x3055 = INT8_MIN;
	int64_t x3056 = 5LL;

	t32 = (x3053-((x3054|x3055)>>x3056));

	if (t32 != 7078624618LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x3073 = -1;
	int64_t x3074 = INT64_MAX;
	int32_t x3076 = 0;

	t33 = (x3073-((x3074|x3075)>>x3076));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x3323 = INT64_MIN;
	uint8_t x3324 = 1U;
	uint64_t t34 = 683909198322LLU;

	t34 = (x3321-((x3322|x3323)>>x3324));

	if (t34 != 9223372036854824542LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x3490 = UINT64_MAX;
	static volatile uint16_t x3491 = 672U;
	int32_t x3492 = 0;
	uint64_t t35 = 26033174192LLU;

	t35 = (x3489-((x3490|x3491)>>x3492));

	if (t35 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x3582 = 4U;
	static volatile int16_t x3583 = INT16_MIN;
	static int16_t x3584 = 2;

	t36 = (x3581-((x3582|x3583)>>x3584));

	if (t36 != 1073750014U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x3685 = 1U;
	int8_t x3686 = INT8_MAX;
	int64_t x3687 = 481LL;
	int16_t x3688 = 16;
	volatile int64_t t37 = -12856067242LL;

	t37 = (x3685-((x3686|x3687)>>x3688));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3745 = UINT64_MAX;
	volatile uint32_t x3746 = 1U;
	int8_t x3747 = INT8_MIN;
	uint8_t x3748 = 1U;
	uint64_t t38 = 107995941159980LLU;

	t38 = (x3745-((x3746|x3747)>>x3748));

	if (t38 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3755 = -1;
	volatile int8_t x3756 = 31;
	uint64_t t39 = 13872092346485798LLU;

	t39 = (x3753-((x3754|x3755)>>x3756));

	if (t39 != 18446744065119649792LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3817 = 1023782;
	static volatile int32_t x3818 = -1;
	static uint32_t x3819 = 106U;
	volatile uint32_t t40 = 175801911U;

	t40 = (x3817-((x3818|x3819)>>x3820));

	if (t40 != 499495U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x3878 = 661884815703LLU;
	int32_t x3879 = INT32_MAX;
	volatile uint8_t x3880 = 3U;
	volatile uint64_t t41 = 2LLU;

	t41 = (x3877-((x3878|x3879)>>x3880));

	if (t41 != 18446743988615512065LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x3973 = 0;
	uint8_t x3976 = 8U;
	int32_t t42 = -9;

	t42 = (x3973-((x3974|x3975)>>x3976));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3985 = 25U;
	uint8_t x3986 = UINT8_MAX;
	int16_t x3987 = INT16_MAX;
	uint8_t x3988 = 0U;
	volatile int32_t t43 = 237694;

	t43 = (x3985-((x3986|x3987)>>x3988));

	if (t43 != -32742) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x3990 = INT16_MIN;

	t44 = (x3989-((x3990|x3991)>>x3992));

	if (t44 != 23002U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x4141 = INT32_MIN;
	uint32_t x4142 = 1896211U;
	int8_t x4143 = INT8_MIN;

	t45 = (x4141-((x4142|x4143)>>x4144));

	if (t45 != 2145386497U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x4169 = -222104;
	static int8_t x4170 = 0;
	uint8_t x4172 = 17U;
	volatile int32_t t46 = -70611;

	t46 = (x4169-((x4170|x4171)>>x4172));

	if (t46 != -222173) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x4205 = INT64_MIN;
	int8_t x4206 = INT8_MAX;
	uint64_t x4207 = 3723874359373800628LLU;
	volatile int8_t x4208 = 1;

	t47 = (x4205-((x4206|x4207)>>x4208));

	if (t47 != 7361434857167875457LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x4250 = UINT32_MAX;
	int8_t x4252 = 1;

	t48 = (x4249-((x4250|x4251)>>x4252));

	if (t48 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x4357 = 48142150U;
	uint8_t x4358 = 10U;
	static uint64_t x4359 = UINT64_MAX;
	static uint16_t x4360 = 1U;

	t49 = (x4357-((x4358|x4359)>>x4360));

	if (t49 != 9223372036902917959LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4369 = 17;
	static uint32_t x4370 = 13U;
	uint32_t x4371 = 23630367U;
	uint8_t x4372 = 27U;
	uint32_t t50 = 281020U;

	t50 = (x4369-((x4370|x4371)>>x4372));

	if (t50 != 17U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x4601 = UINT32_MAX;
	uint8_t x4602 = 0U;
	uint64_t x4603 = 64800LLU;
	int16_t x4604 = 1;
	uint64_t t51 = 15811LLU;

	t51 = (x4601-((x4602|x4603)>>x4604));

	if (t51 != 4294934895LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x4657 = 28U;
	uint64_t x4658 = 167514154792925LLU;
	int16_t x4659 = -1;
	volatile uint16_t x4660 = 3U;
	volatile uint64_t t52 = 74184981LLU;

	t52 = (x4657-((x4658|x4659)>>x4660));

	if (t52 != 16140901064495857693LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x4738 = 451406375;
	uint32_t x4739 = 700529U;
	volatile uint32_t t53 = 62U;

	t53 = (x4737-((x4738|x4739)>>x4740));

	if (t53 != 3843032460U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x4774 = 49448402585LLU;
	uint8_t x4775 = 1U;
	static uint16_t x4776 = 1U;
	volatile uint64_t t54 = 873545LLU;

	t54 = (x4773-((x4774|x4775)>>x4776));

	if (t54 != 28090247759LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x4779 = INT32_MIN;
	static uint32_t x4780 = 16U;
	static volatile uint64_t t55 = 170LLU;

	t55 = (x4777-((x4778|x4779)>>x4780));

	if (t55 != 9223090561878072769LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4925 = UINT64_MAX;
	static uint16_t x4927 = UINT16_MAX;
	int32_t x4928 = 1;
	uint64_t t56 = 9224468218685865LLU;

	t56 = (x4925-((x4926|x4927)>>x4928));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x4985 = INT32_MIN;
	uint64_t x4986 = UINT64_MAX;
	int32_t x4987 = INT32_MAX;
	int8_t x4988 = 29;
	uint64_t t57 = 2243LLU;

	t57 = (x4985-((x4986|x4987)>>x4988));

	if (t57 != 18446744037202329601LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x5001 = -1;
	static volatile int16_t x5002 = INT16_MAX;
	static uint32_t x5003 = 430704005U;
	uint64_t x5004 = 4LLU;

	t58 = (x5001-((x5002|x5003)>>x5004));

	if (t58 != 4268046336U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x5009 = INT64_MIN;
	uint16_t x5010 = UINT16_MAX;
	uint8_t x5011 = UINT8_MAX;
	uint8_t x5012 = 24U;
	int64_t t59 = INT64_MIN;

	t59 = (x5009-((x5010|x5011)>>x5012));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x5025 = 4413158035396LLU;
	uint32_t x5026 = 122810605U;
	int32_t x5027 = 0;
	uint8_t x5028 = 13U;

	t60 = (x5025-((x5026|x5027)>>x5028));

	if (t60 != 4413158020405LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x5029 = -1;
	uint16_t x5030 = 100U;
	volatile int64_t x5031 = INT64_MAX;
	int8_t x5032 = 27;
	static int64_t t61 = -33603881190644362LL;

	t61 = (x5029-((x5030|x5031)>>x5032));

	if (t61 != -68719476736LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x5053 = INT16_MAX;
	volatile uint64_t x5055 = 459LLU;

	t62 = (x5053-((x5054|x5055)>>x5056));

	if (t62 != 18437736874454843407LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5121 = 6U;
	static int32_t x5122 = 706374;
	static uint32_t x5123 = 5U;
	int32_t x5124 = 16;
	volatile uint32_t t63 = 225U;

	t63 = (x5121-((x5122|x5123)>>x5124));

	if (t63 != 4294967292U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x5141 = 10;
	int64_t x5142 = INT64_MAX;
	static uint32_t x5143 = UINT32_MAX;
	static volatile int8_t x5144 = 9;
	static int64_t t64 = 12LL;

	t64 = (x5141-((x5142|x5143)>>x5144));

	if (t64 != -18014398509481973LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5217 = INT8_MAX;
	uint32_t x5219 = 92U;
	uint64_t x5220 = 61LLU;
	uint64_t t65 = 1054480690418LLU;

	t65 = (x5217-((x5218|x5219)>>x5220));

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x5245 = 63;
	uint16_t x5246 = 2U;
	uint8_t x5247 = 13U;
	uint8_t x5248 = 6U;
	static int32_t t66 = 6;

	t66 = (x5245-((x5246|x5247)>>x5248));

	if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x5290 = -1;
	uint64_t x5291 = 70261279033384552LLU;
	volatile int16_t x5292 = 2;
	volatile uint64_t t67 = 722110212LLU;

	t67 = (x5289-((x5290|x5291)>>x5292));

	if (t67 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x5461 = -7;
	static volatile uint64_t x5462 = UINT64_MAX;
	static volatile int16_t x5464 = 1;
	volatile uint64_t t68 = 23327746251042319LLU;

	t68 = (x5461-((x5462|x5463)>>x5464));

	if (t68 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5505 = -1;
	uint16_t x5507 = 270U;
	int8_t x5508 = 15;
	volatile int32_t t69 = -1;

	t69 = (x5505-((x5506|x5507)>>x5508));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5581 = INT8_MIN;
	static uint16_t x5582 = 3780U;
	int16_t x5584 = 6;
	volatile int32_t t70 = 11;

	t70 = (x5581-((x5582|x5583)>>x5584));

	if (t70 != -187) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5605 = 955084635U;
	uint32_t x5606 = 1U;
	int8_t x5607 = -1;
	volatile uint64_t x5608 = 20LLU;
	volatile uint32_t t71 = 3U;

	t71 = (x5605-((x5606|x5607)>>x5608));

	if (t71 != 955080540U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x5609 = INT32_MIN;
	static uint64_t x5610 = UINT64_MAX;
	int8_t x5611 = 0;
	uint8_t x5612 = 2U;
	uint64_t t72 = 5343LLU;

	t72 = (x5609-((x5610|x5611)>>x5612));

	if (t72 != 13835058053134680065LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5645 = INT64_MIN;
	static uint64_t x5646 = UINT64_MAX;
	uint32_t x5647 = UINT32_MAX;
	volatile uint64_t t73 = 7862460360140LLU;

	t73 = (x5645-((x5646|x5647)>>x5648));

	if (t73 != 8070450532247928833LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5661 = INT16_MIN;
	uint32_t x5662 = 71563766U;
	volatile int8_t x5663 = INT8_MIN;
	uint32_t t74 = 115165050U;

	t74 = (x5661-((x5662|x5663)>>x5664));

	if (t74 != 2147450885U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x5665 = UINT16_MAX;
	static int16_t x5668 = 12;
	uint32_t t75 = 44080U;

	t75 = (x5665-((x5666|x5667)>>x5668));

	if (t75 != 4293988170U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x5766 = INT8_MAX;
	uint16_t x5767 = 76U;
	static int64_t x5768 = 1LL;
	volatile int32_t t76 = 78;

	t76 = (x5765-((x5766|x5767)>>x5768));

	if (t76 != -191) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5870 = 63413976374655020LLU;
	volatile int16_t x5871 = INT16_MAX;
	uint32_t x5872 = 10U;
	uint64_t t77 = 99230852663556LLU;

	t77 = (x5869-((x5870|x5871)>>x5872));

	if (t77 != 9223310109143472417LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x5889 = INT64_MIN;
	volatile int8_t x5890 = -1;
	static uint64_t x5891 = 1687856147157LLU;
	int16_t x5892 = 37;
	volatile uint64_t t78 = 23843111696LLU;

	t78 = (x5889-((x5890|x5891)>>x5892));

	if (t78 != 9223372036720558081LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6077 = 24;
	static volatile uint32_t x6078 = UINT32_MAX;
	int8_t x6080 = 1;
	static volatile uint32_t t79 = 13686U;

	t79 = (x6077-((x6078|x6079)>>x6080));

	if (t79 != 2147483673U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x6085 = UINT16_MAX;
	int8_t x6087 = INT8_MAX;
	uint64_t t80 = 1535226958430LLU;

	t80 = (x6085-((x6086|x6087)>>x6088));

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x6138 = 15U;
	volatile uint16_t x6139 = 4079U;
	int8_t x6140 = 0;

	t81 = (x6137-((x6138|x6139)>>x6140));

	if (t81 != -4080) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6165 = -1LL;
	int64_t x6166 = INT64_MIN;
	uint64_t x6167 = 6044771899161852LLU;
	uint8_t x6168 = 1U;
	static volatile uint64_t t82 = 90LLU;

	t82 = (x6165-((x6166|x6167)>>x6168));

	if (t82 != 13832035669332582785LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x6254 = 5;
	volatile uint8_t x6255 = 0U;
	uint8_t x6256 = 5U;
	volatile int32_t t83 = -47139;

	t83 = (x6253-((x6254|x6255)>>x6256));

	if (t83 != 37139319) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x6261 = INT16_MIN;
	uint64_t x6262 = UINT64_MAX;
	static int8_t x6263 = -1;
	volatile uint8_t x6264 = 1U;

	t84 = (x6261-((x6262|x6263)>>x6264));

	if (t84 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x6333 = -1LL;
	uint16_t x6336 = 7U;
	int64_t t85 = -49LL;

	t85 = (x6333-((x6334|x6335)>>x6336));

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x6365 = -1;
	uint8_t x6366 = 0U;
	uint8_t x6367 = UINT8_MAX;
	uint8_t x6368 = 10U;
	int32_t t86 = 15;

	t86 = (x6365-((x6366|x6367)>>x6368));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x6389 = 7569U;
	uint16_t x6390 = 25871U;
	volatile int64_t x6391 = 410461637068999614LL;
	uint8_t x6392 = 4U;

	t87 = (x6389-((x6390|x6391)>>x6392));

	if (t87 != -25653852316805482LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6517 = 210U;
	volatile uint16_t x6518 = UINT16_MAX;
	static uint32_t x6519 = 24654U;
	volatile uint32_t t88 = 0U;

	t88 = (x6517-((x6518|x6519)>>x6520));

	if (t88 != 4294966995U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x6556 = 2U;

	t89 = (x6553-((x6554|x6555)>>x6556));

	if (t89 != -2305843009213726719LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6709 = -1LL;
	uint64_t x6711 = 132211769306LLU;
	volatile uint64_t t90 = 758981930029195LLU;

	t90 = (x6709-((x6710|x6711)>>x6712));

	if (t90 != 13835058055282163721LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6853 = INT16_MAX;
	static uint64_t x6854 = 756736715743016488LLU;
	static uint8_t x6855 = UINT8_MAX;
	uint64_t t91 = 168132LLU;

	t91 = (x6853-((x6854|x6855)>>x6856));

	if (t91 != 18068375715838076032LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x6953 = -35404080818LL;
	static uint64_t x6954 = 2113535425LLU;
	volatile uint32_t x6955 = UINT32_MAX;

	t92 = (x6953-((x6954|x6955)>>x6956));

	if (t92 != 18446744038037035343LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6967 = -20;
	volatile int16_t x6968 = 1;
	uint64_t t93 = 1077140034730064LLU;

	t93 = (x6965-((x6966|x6967)>>x6968));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x7097 = 392357810;
	static uint8_t x7099 = 66U;
	static int32_t x7100 = 0;
	volatile int32_t t94 = -56133114;

	t94 = (x7097-((x7098|x7099)>>x7100));

	if (t94 != 392325043) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x7129 = INT64_MAX;
	int32_t x7130 = INT32_MAX;
	int8_t x7132 = 18;
	static uint64_t t95 = 1498178LLU;

	t95 = (x7129-((x7130|x7131)>>x7132));

	if (t95 != 9223301668110598144LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x7381 = -435;
	static volatile uint8_t x7382 = UINT8_MAX;
	volatile uint8_t x7383 = 5U;
	static volatile uint8_t x7384 = 1U;
	volatile int32_t t96 = -2;

	t96 = (x7381-((x7382|x7383)>>x7384));

	if (t96 != -562) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x7425 = UINT16_MAX;
	uint64_t x7426 = UINT64_MAX;
	int64_t x7427 = 565976668768578LL;
	int16_t x7428 = 6;

	t97 = (x7425-((x7426|x7427)>>x7428));

	if (t97 != 18158513697557905408LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x7469 = INT8_MIN;
	uint8_t x7470 = 0U;
	uint32_t x7471 = UINT32_MAX;
	uint8_t x7472 = 0U;
	volatile uint32_t t98 = 42U;

	t98 = (x7469-((x7470|x7471)>>x7472));

	if (t98 != 4294967169U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x7489 = 7935447906094998LL;
	static uint64_t x7490 = UINT64_MAX;
	uint8_t x7492 = 1U;
	uint64_t t99 = 316725458185LLU;

	t99 = (x7489-((x7490|x7491)>>x7492));

	if (t99 != 9231307484760870807LLU) { NG(); } else { ; }
	
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

