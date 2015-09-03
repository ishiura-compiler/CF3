#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 421020;
static volatile uint16_t x96 = 0U;
volatile int8_t x266 = 1;
uint64_t t3 = 71160950857241LLU;
int16_t x568 = 0;
static uint32_t x582 = 60831102U;
int8_t x583 = 40;
uint32_t t6 = 137595U;
volatile int8_t x700 = 39;
int64_t x849 = INT64_MAX;
static uint8_t x868 = 1U;
static uint32_t x874 = 10U;
uint32_t x961 = 182U;
static uint64_t x963 = UINT64_MAX;
uint16_t x964 = 1U;
static uint16_t x1048 = 1U;
int16_t x1122 = -1;
int16_t x1397 = INT16_MAX;
int32_t t17 = -1643;
static uint8_t x1538 = 2U;
static int64_t x1540 = 1LL;
int16_t x1557 = 67;
static uint16_t x1672 = 31U;
int32_t x1676 = 1;
uint64_t x1774 = UINT64_MAX;
static uint8_t x1776 = 63U;
int32_t x1857 = INT32_MAX;
static uint8_t x1882 = 107U;
static int8_t x1883 = -1;
uint64_t x1893 = 51078276171LLU;
static volatile int32_t x1939 = -1;
volatile int64_t t28 = -39121724LL;
static int64_t x1982 = -1LL;
volatile int8_t x1983 = -4;
static int16_t x2010 = INT16_MIN;
volatile uint32_t t30 = 1635516U;
static uint8_t x2044 = 0U;
uint16_t x2100 = 47U;
int64_t t32 = 5112252683LL;
int16_t x2104 = 1;
volatile uint64_t t33 = 29LLU;
int64_t x2105 = INT64_MIN;
static int8_t x2138 = -1;
static uint8_t x2226 = 3U;
volatile uint32_t t36 = 1U;
uint64_t x2257 = UINT64_MAX;
static volatile int16_t x2260 = 57;
static uint64_t t38 = 3447769569391LLU;
static volatile uint8_t x2293 = UINT8_MAX;
static int8_t x2308 = 18;
uint32_t x2313 = 8725U;
int8_t x2316 = 14;
uint8_t x2702 = UINT8_MAX;
int8_t x2703 = INT8_MIN;
static uint64_t x2768 = 35LLU;
volatile int16_t x2957 = -1;
uint64_t x3244 = 14LLU;
volatile int8_t x3329 = INT8_MIN;
static volatile uint8_t x3330 = UINT8_MAX;
volatile uint8_t x3332 = 1U;
static int32_t x3415 = 27688634;
int64_t x3465 = INT64_MIN;
int8_t x3529 = INT8_MIN;
volatile uint64_t x3531 = 2LLU;
static int16_t x3703 = INT16_MIN;
static volatile uint32_t x3704 = 1U;
static volatile uint64_t t62 = 7471495943722655644LLU;
int32_t x3734 = -1;
volatile uint16_t x3774 = 18U;
uint64_t x3906 = UINT64_MAX;
static uint64_t t65 = 1704530390566LLU;
uint64_t x3945 = 88LLU;
static volatile uint32_t x3948 = 37U;
volatile int32_t x4431 = 0;
uint32_t t69 = 11252U;
uint64_t t70 = 35590718504221446LLU;
uint64_t x4613 = UINT64_MAX;
uint8_t x4675 = 30U;
uint16_t x4676 = 1U;
uint32_t t74 = 21361U;
static uint32_t x4894 = 177862407U;
uint8_t x5009 = 0U;
static uint8_t x5012 = 5U;
volatile int8_t x5174 = 0;
uint32_t x5175 = 14129548U;
static volatile int16_t x5196 = 4;
static uint16_t x5239 = 990U;
static uint16_t x5297 = UINT16_MAX;
uint8_t x5394 = UINT8_MAX;
int16_t x5395 = INT16_MIN;
static uint64_t x5491 = UINT64_MAX;
uint64_t x5506 = 0LLU;
int16_t x5539 = INT16_MIN;
uint32_t x5586 = UINT32_MAX;
int32_t x5633 = INT32_MIN;
int8_t x5642 = -8;
int8_t x5703 = -5;
uint16_t x5704 = 13U;
int64_t x5743 = -1LL;
volatile uint64_t t97 = 3522611022221932LLU;
volatile uint32_t t98 = 265U;
volatile uint32_t x5807 = UINT32_MAX;


void f0(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int16_t x34 = -1;
	int8_t x35 = INT8_MAX;
	uint16_t x36 = 1U;
	volatile int32_t t0 = 840100375;

	t0 = ((x33+(x34*x35))<<x36);

	if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x89 = -43;
	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 14LLU;

	t1 = ((x89+(x90*x91))<<x92);

	if (t1 != 1392640) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x93 = UINT16_MAX;
	static uint64_t x94 = 1243162LLU;
	static int64_t x95 = 181918635882LL;
	volatile uint64_t t2 = 49046493213LLU;

	t2 = ((x93+(x94*x95))<<x96);

	if (t2 != 226154335220404419LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x267 = 15LLU;
	int8_t x268 = 29;

	t3 = ((x265+(x266*x267))<<x268);

	if (t3 != 8053063680LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x497 = INT32_MAX;
	uint32_t x498 = 0U;
	int64_t x499 = INT64_MAX;
	volatile int32_t x500 = 11;
	int64_t t4 = 8276471LL;

	t4 = ((x497+(x498*x499))<<x500);

	if (t4 != 4398046509056LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x565 = UINT32_MAX;
	uint16_t x566 = 465U;
	int32_t x567 = -232;
	uint32_t t5 = 24701U;

	t5 = ((x565+(x566*x567))<<x568);

	if (t5 != 4294859415U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x581 = INT8_MAX;
	int8_t x584 = 21;

	t6 = ((x581+(x582*x583))<<x584);

	if (t6 != 2246049792U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x681 = UINT32_MAX;
	int32_t x682 = -6364;
	volatile int8_t x683 = 41;
	uint16_t x684 = 6U;
	static uint32_t t7 = 198725U;

	t7 = ((x681+(x682*x683))<<x684);

	if (t7 != 4278268096U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x697 = 542644604391646883LLU;
	uint16_t x698 = UINT16_MAX;
	volatile int8_t x699 = INT8_MAX;
	volatile uint64_t t8 = 42233498600795LLU;

	t8 = ((x697+(x698*x699))<<x700);

	if (t8 != 5004363402148052992LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x817 = 12LLU;
	uint16_t x818 = UINT16_MAX;
	volatile uint8_t x819 = UINT8_MAX;
	int16_t x820 = 2;
	uint64_t t9 = 18355566946LLU;

	t9 = ((x817+(x818*x819))<<x820);

	if (t9 != 66845748LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x850 = 429018953LLU;
	int8_t x851 = -1;
	volatile uint8_t x852 = 1U;
	uint64_t t10 = 5890352LLU;

	t10 = ((x849+(x850*x851))<<x852);

	if (t10 != 18446744072851513708LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x865 = 374U;
	uint32_t x866 = 24U;
	static uint64_t x867 = UINT64_MAX;
	volatile uint64_t t11 = 4747101515670LLU;

	t11 = ((x865+(x866*x867))<<x868);

	if (t11 != 700LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x873 = -1;
	int32_t x875 = INT32_MIN;
	uint8_t x876 = 9U;
	static uint32_t t12 = 15539019U;

	t12 = ((x873+(x874*x875))<<x876);

	if (t12 != 4294966784U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x962 = INT64_MAX;
	uint64_t t13 = 4LLU;

	t13 = ((x961+(x962*x963))<<x964);

	if (t13 != 366LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x1045 = -1LL;
	static int64_t x1046 = -3560847166LL;
	int8_t x1047 = INT8_MIN;
	int64_t t14 = -42754459243LL;

	t14 = ((x1045+(x1046*x1047))<<x1048);

	if (t14 != 911576874494LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1121 = 265656640211472LLU;
	static int32_t x1123 = -1;
	uint16_t x1124 = 0U;
	uint64_t t15 = 2364LLU;

	t15 = ((x1121+(x1122*x1123))<<x1124);

	if (t15 != 265656640211473LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1293 = 7;
	int64_t x1294 = -1LL;
	uint64_t x1295 = UINT64_MAX;
	volatile int8_t x1296 = 22;
	uint64_t t16 = 371924217LLU;

	t16 = ((x1293+(x1294*x1295))<<x1296);

	if (t16 != 33554432LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x1398 = 1852;
	volatile int16_t x1399 = -1;
	int8_t x1400 = 5;

	t17 = ((x1397+(x1398*x1399))<<x1400);

	if (t17 != 989280) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1441 = INT16_MAX;
	volatile uint8_t x1442 = 94U;
	static volatile int16_t x1443 = 29;
	uint32_t x1444 = 0U;
	volatile int32_t t18 = -402;

	t18 = ((x1441+(x1442*x1443))<<x1444);

	if (t18 != 35493) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1537 = INT8_MIN;
	static uint32_t x1539 = UINT32_MAX;
	volatile uint32_t t19 = 11598U;

	t19 = ((x1537+(x1538*x1539))<<x1540);

	if (t19 != 4294967036U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1558 = 60124233LLU;
	volatile int8_t x1559 = INT8_MAX;
	static volatile uint8_t x1560 = 5U;
	uint64_t t20 = 18504LLU;

	t20 = ((x1557+(x1558*x1559))<<x1560);

	if (t20 != 244344885056LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1669 = INT8_MAX;
	uint64_t x1670 = UINT64_MAX;
	volatile int8_t x1671 = -1;
	static uint64_t t21 = 263209800519815131LLU;

	t21 = ((x1669+(x1670*x1671))<<x1672);

	if (t21 != 274877906944LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1673 = 4191975947LL;
	uint32_t x1674 = UINT32_MAX;
	int32_t x1675 = INT32_MAX;
	int64_t t22 = -211028LL;

	t22 = ((x1673+(x1674*x1675))<<x1676);

	if (t22 != 12678919192LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1773 = 2156U;
	int16_t x1775 = 452;
	uint64_t t23 = 7707945LLU;

	t23 = ((x1773+(x1774*x1775))<<x1776);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1858 = INT16_MIN;
	uint32_t x1859 = 20U;
	volatile uint32_t x1860 = 17U;
	volatile uint32_t t24 = 28U;

	t24 = ((x1857+(x1858*x1859))<<x1860);

	if (t24 != 4294836224U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1881 = UINT32_MAX;
	static int8_t x1884 = 1;
	uint32_t t25 = 190U;

	t25 = ((x1881+(x1882*x1883))<<x1884);

	if (t25 != 4294967080U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1894 = INT8_MIN;
	uint64_t x1895 = UINT64_MAX;
	volatile int8_t x1896 = 21;
	static volatile uint64_t t26 = 3236958104948364503LLU;

	t26 = ((x1893+(x1894*x1895))<<x1896);

	if (t26 != 107118909297000448LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1897 = 1945LLU;
	uint32_t x1898 = 125237U;
	static int32_t x1899 = INT32_MAX;
	static uint32_t x1900 = 0U;
	uint64_t t27 = 150853LLU;

	t27 = ((x1897+(x1898*x1899))<<x1900);

	if (t27 != 2147360356LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1937 = -6683574LL;
	uint32_t x1938 = 4457153U;
	uint8_t x1940 = 7U;

	t28 = ((x1937+(x1938*x1939))<<x1940);

	if (t28 != 548329800832LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1981 = 451818089;
	uint8_t x1984 = 1U;
	volatile int64_t t29 = 25431904791865LL;

	t29 = ((x1981+(x1982*x1983))<<x1984);

	if (t29 != 903636186LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2009 = 7U;
	int16_t x2011 = -1;
	uint8_t x2012 = 1U;

	t30 = ((x2009+(x2010*x2011))<<x2012);

	if (t30 != 65550U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2041 = INT64_MAX;
	static uint16_t x2042 = UINT16_MAX;
	int64_t x2043 = -42932792LL;
	int64_t t31 = 2247LL;

	t31 = ((x2041+(x2042*x2043))<<x2044);

	if (t31 != 9223369223254252087LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2097 = 2956U;
	int8_t x2098 = -1;
	int64_t x2099 = -1LL;

	t32 = ((x2097+(x2098*x2099))<<x2100);

	if (t32 != 416160753066704896LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2101 = 6U;
	uint64_t x2102 = 160179LLU;
	uint8_t x2103 = 59U;

	t33 = ((x2101+(x2102*x2103))<<x2104);

	if (t33 != 18901134LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2106 = 196LL;
	static uint64_t x2107 = 68331290152LLU;
	uint8_t x2108 = 59U;
	volatile uint64_t t34 = 37LLU;

	t34 = ((x2105+(x2106*x2107))<<x2108);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2137 = INT64_MAX;
	static int64_t x2139 = INT64_MAX;
	int16_t x2140 = 9;
	int64_t t35 = -12214141602LL;

	t35 = ((x2137+(x2138*x2139))<<x2140);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x2225 = INT32_MAX;
	uint32_t x2227 = 56984U;
	uint16_t x2228 = 1U;

	t36 = ((x2225+(x2226*x2227))<<x2228);

	if (t36 != 341902U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2258 = UINT32_MAX;
	static volatile int32_t x2259 = -2522;
	volatile uint64_t t37 = 10614551905363LLU;

	t37 = ((x2257+(x2258*x2259))<<x2260);

	if (t37 != 12826251738751172608LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2281 = INT32_MIN;
	uint64_t x2282 = UINT64_MAX;
	volatile int32_t x2283 = INT32_MIN;
	int8_t x2284 = 1;

	t38 = ((x2281+(x2282*x2283))<<x2284);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2294 = UINT32_MAX;
	uint64_t x2295 = 37535169497LLU;
	static int8_t x2296 = 1;
	volatile uint64_t t39 = 23132861LLU;

	t39 = ((x2293+(x2294*x2295))<<x2296);

	if (t39 != 8830001550730824268LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2305 = 207U;
	uint32_t x2306 = 5368294U;
	int8_t x2307 = -1;
	volatile uint32_t t40 = 9922U;

	t40 = ((x2305+(x2306*x2307))<<x2308);

	if (t40 != 1537474560U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2314 = INT16_MAX;
	volatile uint64_t x2315 = UINT64_MAX;
	uint64_t t41 = 1945049711584723LLU;

	t41 = ((x2313+(x2314*x2315))<<x2316);

	if (t41 != 18446744073315647488LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2397 = UINT16_MAX;
	static volatile int64_t x2398 = -325846186321LL;
	int64_t x2399 = -34LL;
	int16_t x2400 = 18;
	volatile int64_t t42 = 6879873LL;

	t42 = ((x2397+(x2398*x2399))<<x2400);

	if (t42 != 2904233187855302656LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2661 = -1LL;
	static uint32_t x2662 = 208403395U;
	static int32_t x2663 = -1;
	uint32_t x2664 = 7U;
	int64_t t43 = 57418496774553LL;

	t43 = ((x2661+(x2662*x2663))<<x2664);

	if (t43 != 523080179200LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2701 = 74912U;
	static int16_t x2704 = 9;
	static volatile uint32_t t44 = 38373U;

	t44 = ((x2701+(x2702*x2703))<<x2704);

	if (t44 != 21643264U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2765 = 0;
	int64_t x2766 = -1LL;
	static int32_t x2767 = -1;
	static volatile int64_t t45 = -1LL;

	t45 = ((x2765+(x2766*x2767))<<x2768);

	if (t45 != 34359738368LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x2958 = 7U;
	uint32_t x2959 = 2095549116U;
	uint64_t x2960 = 0LLU;
	uint32_t t46 = 107532U;

	t46 = ((x2957+(x2958*x2959))<<x2960);

	if (t46 != 1783941923U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2977 = -1LL;
	int8_t x2978 = INT8_MIN;
	uint32_t x2979 = UINT32_MAX;
	volatile int8_t x2980 = 3;
	volatile int64_t t47 = -135969107818069560LL;

	t47 = ((x2977+(x2978*x2979))<<x2980);

	if (t47 != 1016LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2985 = INT8_MAX;
	int64_t x2986 = INT64_MIN;
	int8_t x2987 = 0;
	int8_t x2988 = 1;
	volatile int64_t t48 = 135179516654099LL;

	t48 = ((x2985+(x2986*x2987))<<x2988);

	if (t48 != 254LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3093 = -496215049177LL;
	static int8_t x3094 = INT8_MIN;
	static volatile uint64_t x3095 = UINT64_MAX;
	int8_t x3096 = 9;
	volatile uint64_t t49 = 392820087998LLU;

	t49 = ((x3093+(x3094*x3095))<<x3096);

	if (t49 != 18446490011604438528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3121 = 0U;
	volatile int32_t x3122 = 0;
	uint64_t x3123 = 473154345312LLU;
	volatile uint8_t x3124 = 21U;
	static volatile uint64_t t50 = 11601928291014LLU;

	t50 = ((x3121+(x3122*x3123))<<x3124);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3241 = INT8_MAX;
	int32_t x3242 = -1;
	int16_t x3243 = INT16_MIN;
	static volatile int32_t t51 = -99604;

	t51 = ((x3241+(x3242*x3243))<<x3244);

	if (t51 != 538951680) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x3245 = 12100LL;
	volatile int16_t x3246 = 160;
	static volatile int8_t x3247 = INT8_MAX;
	static uint32_t x3248 = 21U;
	int64_t t52 = 2363713494656LL;

	t52 = ((x3245+(x3246*x3247))<<x3248);

	if (t52 != 67989667840LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x3331 = 38U;
	volatile int32_t t53 = 222013;

	t53 = ((x3329+(x3330*x3331))<<x3332);

	if (t53 != 19124) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3413 = INT16_MAX;
	uint32_t x3414 = 1660925210U;
	volatile uint64_t x3416 = 3LLU;
	uint32_t t54 = 39530U;

	t54 = ((x3413+(x3414*x3415))<<x3416);

	if (t54 != 2387019544U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3466 = INT64_MIN;
	static uint64_t x3467 = UINT64_MAX;
	static int8_t x3468 = 1;
	volatile uint64_t t55 = 141291464615LLU;

	t55 = ((x3465+(x3466*x3467))<<x3468);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3530 = -21;
	volatile int8_t x3532 = 1;
	volatile uint64_t t56 = 449501835362156LLU;

	t56 = ((x3529+(x3530*x3531))<<x3532);

	if (t56 != 18446744073709551276LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3597 = -3;
	volatile uint64_t x3598 = UINT64_MAX;
	int64_t x3599 = INT64_MIN;
	uint8_t x3600 = 3U;
	uint64_t t57 = 2364269955005875970LLU;

	t57 = ((x3597+(x3598*x3599))<<x3600);

	if (t57 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3633 = -1LL;
	volatile uint32_t x3634 = 2326004U;
	int8_t x3635 = -1;
	volatile uint16_t x3636 = 6U;
	int64_t t58 = -116793LL;

	t58 = ((x3633+(x3634*x3635))<<x3636);

	if (t58 != 274729042624LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3641 = 26317093U;
	int8_t x3642 = 1;
	uint16_t x3643 = 5181U;
	volatile int16_t x3644 = 0;
	static uint32_t t59 = 184U;

	t59 = ((x3641+(x3642*x3643))<<x3644);

	if (t59 != 26322274U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3669 = 1926738U;
	uint8_t x3670 = 20U;
	int8_t x3671 = -1;
	uint8_t x3672 = 15U;
	volatile uint32_t t60 = 1874449U;

	t60 = ((x3669+(x3670*x3671))<<x3672);

	if (t60 != 3005153280U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x3681 = UINT32_MAX;
	uint32_t x3682 = 475075U;
	int16_t x3683 = INT16_MAX;
	static uint16_t x3684 = 23U;
	static uint32_t t61 = 1U;

	t61 = ((x3681+(x3682*x3683))<<x3684);

	if (t61 != 503316480U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3701 = UINT64_MAX;
	int16_t x3702 = 4;

	t62 = ((x3701+(x3702*x3703))<<x3704);

	if (t62 != 18446744073709289470LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x3733 = INT8_MAX;
	volatile uint64_t x3735 = UINT64_MAX;
	static volatile uint32_t x3736 = 3U;
	static uint64_t t63 = 118280471760808427LLU;

	t63 = ((x3733+(x3734*x3735))<<x3736);

	if (t63 != 1024LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3773 = 1U;
	int32_t x3775 = -10314;
	uint16_t x3776 = 13U;
	volatile uint32_t t64 = 1U;

	t64 = ((x3773+(x3774*x3775))<<x3776);

	if (t64 != 2774114304U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3905 = 6282043956033499LLU;
	int32_t x3907 = INT32_MIN;
	int64_t x3908 = 0LL;

	t65 = ((x3905+(x3906*x3907))<<x3908);

	if (t65 != 6282046103517147LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3946 = -3;
	int8_t x3947 = INT8_MIN;
	volatile uint64_t t66 = 1LLU;

	t66 = ((x3945+(x3946*x3947))<<x3948);

	if (t66 != 64871186038784LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x4057 = -53;
	volatile uint8_t x4058 = 16U;
	volatile uint16_t x4059 = 13U;
	static uint8_t x4060 = 0U;
	int32_t t67 = -3891278;

	t67 = ((x4057+(x4058*x4059))<<x4060);

	if (t67 != 155) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x4429 = INT16_MAX;
	volatile int64_t x4430 = INT64_MAX;
	uint16_t x4432 = 44U;
	int64_t t68 = -1880383341972LL;

	t68 = ((x4429+(x4430*x4431))<<x4432);

	if (t68 != 576443160117379072LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4445 = -4;
	static volatile uint32_t x4446 = 30U;
	uint16_t x4447 = 1309U;
	static uint8_t x4448 = 20U;

	t69 = ((x4445+(x4446*x4447))<<x4448);

	if (t69 != 2518679552U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x4521 = 438276722LLU;
	uint64_t x4522 = UINT64_MAX;
	int64_t x4523 = -1LL;
	int8_t x4524 = 5;

	t70 = ((x4521+(x4522*x4523))<<x4524);

	if (t70 != 14024855136LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4537 = 0U;
	uint16_t x4538 = 29039U;
	uint32_t x4539 = UINT32_MAX;
	uint32_t x4540 = 0U;
	static volatile uint32_t t71 = 3951295U;

	t71 = ((x4537+(x4538*x4539))<<x4540);

	if (t71 != 4294938257U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4581 = 0U;
	int64_t x4582 = -1LL;
	static int32_t x4583 = INT32_MIN;
	uint32_t x4584 = 0U;
	volatile int64_t t72 = 2623577683LL;

	t72 = ((x4581+(x4582*x4583))<<x4584);

	if (t72 != 2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4614 = -1LL;
	int16_t x4615 = INT16_MAX;
	uint8_t x4616 = 3U;
	static uint64_t t73 = 259442348825638LLU;

	t73 = ((x4613+(x4614*x4615))<<x4616);

	if (t73 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4673 = -1;
	uint32_t x4674 = 44572885U;

	t74 = ((x4673+(x4674*x4675))<<x4676);

	if (t74 != 2674373098U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4845 = 3369U;
	int32_t x4846 = INT32_MIN;
	int8_t x4847 = 0;
	int8_t x4848 = 2;
	volatile int32_t t75 = 86;

	t75 = ((x4845+(x4846*x4847))<<x4848);

	if (t75 != 13476) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4857 = 3;
	static int64_t x4858 = -1LL;
	volatile uint64_t x4859 = 540489914396926LLU;
	static uint8_t x4860 = 15U;
	uint64_t t76 = 15526LLU;

	t76 = ((x4857+(x4858*x4859))<<x4860);

	if (t76 != 735970558751178752LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4893 = 228722092;
	volatile uint16_t x4895 = 22414U;
	uint32_t x4896 = 2U;
	volatile uint32_t t77 = 2U;

	t77 = ((x4893+(x4894*x4895))<<x4896);

	if (t77 != 133280312U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5010 = -1LL;
	static int8_t x5011 = -1;
	int64_t t78 = 65751874892307378LL;

	t78 = ((x5009+(x5010*x5011))<<x5012);

	if (t78 != 32LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5097 = 30U;
	uint16_t x5098 = UINT16_MAX;
	static volatile int64_t x5099 = 2LL;
	static int8_t x5100 = 1;
	volatile int64_t t79 = 23285LL;

	t79 = ((x5097+(x5098*x5099))<<x5100);

	if (t79 != 262200LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5153 = 10101225202295LLU;
	int32_t x5154 = -1;
	int64_t x5155 = -3157801436116864172LL;
	volatile uint8_t x5156 = 5U;
	volatile uint64_t t80 = 28804LLU;

	t80 = ((x5153+(x5154*x5155))<<x5156);

	if (t80 != 8816248826398368864LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5173 = 5428956488655382LL;
	static uint16_t x5176 = 4U;
	int64_t t81 = 5619LL;

	t81 = ((x5173+(x5174*x5175))<<x5176);

	if (t81 != 86863303818486112LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5193 = 0U;
	int32_t x5194 = 266095968;
	int32_t x5195 = 0;
	volatile int32_t t82 = 286547085;

	t82 = ((x5193+(x5194*x5195))<<x5196);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5237 = 44796U;
	uint16_t x5238 = 28U;
	uint8_t x5240 = 9U;
	volatile uint32_t t83 = 985722U;

	t83 = ((x5237+(x5238*x5239))<<x5240);

	if (t83 != 37128192U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5298 = UINT64_MAX;
	static int64_t x5299 = -1LL;
	uint16_t x5300 = 3U;
	volatile uint64_t t84 = 489045731946871539LLU;

	t84 = ((x5297+(x5298*x5299))<<x5300);

	if (t84 != 524288LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x5393 = 6977LLU;
	uint8_t x5396 = 8U;
	static volatile uint64_t t85 = 10700814670268738LLU;

	t85 = ((x5393+(x5394*x5395))<<x5396);

	if (t85 != 18446744071572242688LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5413 = 0U;
	volatile int8_t x5414 = 31;
	uint64_t x5415 = 9LLU;
	static volatile uint16_t x5416 = 43U;
	static uint64_t t86 = 14LLU;

	t86 = ((x5413+(x5414*x5415))<<x5416);

	if (t86 != 2454109953196032LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5421 = INT16_MIN;
	volatile uint32_t x5422 = 55323847U;
	static uint32_t x5423 = 12U;
	int16_t x5424 = 5;
	volatile uint32_t t87 = 220856377U;

	t87 = ((x5421+(x5422*x5423))<<x5424);

	if (t87 != 4063439488U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5489 = INT32_MIN;
	int8_t x5490 = -1;
	int8_t x5492 = 47;
	uint64_t t88 = 2641493708LLU;

	t88 = ((x5489+(x5490*x5491))<<x5492);

	if (t88 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5505 = INT32_MIN;
	int16_t x5507 = -1;
	uint16_t x5508 = 62U;
	volatile uint64_t t89 = 2135085LLU;

	t89 = ((x5505+(x5506*x5507))<<x5508);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5537 = 47;
	uint32_t x5538 = 7078U;
	int8_t x5540 = 0;
	uint32_t t90 = 0U;

	t90 = ((x5537+(x5538*x5539))<<x5540);

	if (t90 != 4063035439U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x5581 = -1LL;
	uint32_t x5582 = 630309U;
	uint32_t x5583 = 399545664U;
	uint8_t x5584 = 31U;
	volatile int64_t t91 = 39770849430495LL;

	t91 = ((x5581+(x5582*x5583))<<x5584);

	if (t91 != 3909556719918776320LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5585 = 2345U;
	uint64_t x5587 = 39106LLU;
	uint16_t x5588 = 52U;
	uint64_t t92 = 165301565094039388LLU;

	t92 = ((x5585+(x5586*x5587))<<x5588);

	if (t92 != 463870761619161088LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5634 = UINT64_MAX;
	static int16_t x5635 = -1;
	volatile uint8_t x5636 = 0U;
	uint64_t t93 = 231272LLU;

	t93 = ((x5633+(x5634*x5635))<<x5636);

	if (t93 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5641 = -1063891120214235279LL;
	uint64_t x5643 = 48524189793030921LLU;
	volatile int32_t x5644 = 1;
	uint64_t t94 = 3044813615260582LLU;

	t94 = ((x5641+(x5642*x5643))<<x5644);

	if (t94 != 15542574796592586322LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x5701 = UINT8_MAX;
	int16_t x5702 = 0;
	volatile int32_t t95 = -126818661;

	t95 = ((x5701+(x5702*x5703))<<x5704);

	if (t95 != 2088960) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5713 = 104U;
	int32_t x5714 = -153;
	int16_t x5715 = INT16_MIN;
	static uint32_t x5716 = 3U;
	int32_t t96 = -54754824;

	t96 = ((x5713+(x5714*x5715))<<x5716);

	if (t96 != 40108864) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5741 = 76U;
	static volatile uint64_t x5742 = UINT64_MAX;
	volatile uint16_t x5744 = 0U;

	t97 = ((x5741+(x5742*x5743))<<x5744);

	if (t97 != 77LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5745 = 98U;
	static volatile int8_t x5746 = -1;
	static int16_t x5747 = INT16_MIN;
	static uint8_t x5748 = 3U;

	t98 = ((x5745+(x5746*x5747))<<x5748);

	if (t98 != 262928U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x5805 = 0U;
	volatile uint16_t x5806 = UINT16_MAX;
	volatile int16_t x5808 = 1;
	uint32_t t99 = 22854135U;

	t99 = ((x5805+(x5806*x5807))<<x5808);

	if (t99 != 4294836226U) { NG(); } else { ; }
	
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

