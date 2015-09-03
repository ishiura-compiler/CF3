#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -135;
int64_t x12 = INT64_MAX;
int8_t x117 = -1;
volatile int64_t t1 = -17484926688681449LL;
static uint32_t x174 = 502607U;
int64_t t2 = -1462LL;
int16_t x189 = -1;
int64_t x190 = 979LL;
int32_t x192 = INT32_MIN;
int8_t x246 = INT8_MAX;
uint16_t x247 = 5U;
int8_t x517 = -1;
uint16_t x538 = 11U;
int8_t x543 = 1;
uint8_t x638 = 0U;
static uint64_t t11 = UINT64_MAX;
uint8_t x826 = 4U;
uint8_t x827 = 0U;
int32_t x836 = INT32_MIN;
uint16_t x858 = 177U;
volatile int32_t t16 = -48631;
static uint8_t x926 = 110U;
static int16_t x1030 = 7424;
int16_t x1032 = INT16_MIN;
int8_t x1038 = 1;
int32_t x1076 = 11822037;
uint32_t x1098 = 56U;
static int8_t x1190 = INT8_MAX;
volatile int32_t t22 = 3556084;
volatile uint64_t x1345 = 1LLU;
volatile uint64_t x1474 = 2018304144LLU;
volatile int32_t x1496 = -1;
static volatile int8_t x1905 = 0;
int64_t t32 = 35710407LL;
static int8_t x2135 = 9;
int32_t x2149 = INT32_MIN;
uint32_t x2150 = UINT32_MAX;
volatile uint8_t x2301 = 50U;
int16_t x2302 = 0;
volatile int8_t x2304 = INT8_MIN;
static uint16_t x2771 = 0U;
int8_t x2798 = INT8_MAX;
volatile uint32_t x3013 = UINT32_MAX;
int16_t x3014 = 349;
uint32_t x3015 = 3U;
static uint8_t x3095 = 1U;
volatile int32_t t48 = -6800947;
uint8_t x3109 = 1U;
uint32_t x3134 = 2066709U;
static int16_t x3136 = 1;
uint32_t x3171 = 6U;
int8_t x3277 = 19;
volatile uint32_t x3278 = 1005476U;
static int8_t x3393 = -5;
int8_t x3407 = 3;
uint64_t x3430 = UINT64_MAX;
int8_t x3495 = 1;
uint64_t x3496 = 216442851693371LLU;
uint64_t t57 = 7766514267853972387LLU;
volatile int64_t t59 = 32129466110LL;
int8_t x3576 = -1;
volatile int16_t x3590 = INT16_MAX;
volatile uint64_t x3677 = UINT64_MAX;
int8_t x3679 = 0;
static volatile uint64_t x3680 = 22699396391LLU;
volatile uint64_t t63 = 247LLU;
static int8_t x4277 = INT8_MAX;
static int32_t x4280 = INT32_MIN;
uint64_t x4335 = 6LLU;
static uint32_t x4336 = UINT32_MAX;
volatile int32_t x4372 = -1;
static int8_t x4490 = 0;
static volatile uint16_t x4607 = 12U;
volatile int32_t x4608 = INT32_MIN;
volatile uint16_t x4781 = 459U;
uint16_t x4783 = 13U;
volatile uint8_t x4803 = 4U;
int16_t x4920 = -1;
volatile int32_t t73 = -968;
static uint16_t x5006 = 13658U;
static int8_t x5007 = 10;
static int64_t x5277 = 239443470011124797LL;
volatile uint8_t x5278 = UINT8_MAX;
uint16_t x5281 = 95U;
uint8_t x5282 = UINT8_MAX;
static volatile uint64_t x5342 = 49483LLU;
volatile int8_t x5418 = INT8_MAX;
int8_t x5513 = -1;
int16_t x5696 = INT16_MIN;
int8_t x6074 = 0;
static int8_t x6085 = -10;
volatile uint8_t x6087 = 12U;
int64_t x6088 = 1120LL;
static int8_t x6100 = INT8_MIN;
uint64_t x6142 = 43846350LLU;
int16_t x6209 = -1;
uint64_t x6212 = 195LLU;
int64_t x6213 = INT64_MAX;
uint64_t x6214 = 261386188LLU;
uint32_t x6215 = 34U;
int16_t x6273 = -10057;
static int8_t x6323 = 24;
uint8_t x6363 = 3U;
volatile int32_t x6405 = INT32_MAX;
volatile uint16_t x6407 = 1U;
uint8_t x6415 = 0U;


void f0(void) {
	uint64_t x10 = 8195307109329LLU;
	static int8_t x11 = 6;
	static uint64_t t0 = 39884264812LLU;

	t0 = (x9|((x10<<x11)/x12));

	if (t0 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x118 = 6290U;
	uint8_t x119 = 0U;
	int64_t x120 = -1LL;

	t1 = (x117|((x118<<x119)/x120));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x173 = UINT8_MAX;
	static int16_t x175 = 19;
	volatile int64_t x176 = INT64_MIN;

	t2 = (x173|((x174<<x175)/x176));

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x191 = 2;
	static int64_t t3 = 170109007660LL;

	t3 = (x189|((x190<<x191)/x192));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x197 = -1LL;
	volatile uint64_t x198 = 3423811280100837LLU;
	static volatile int8_t x199 = 2;
	volatile uint32_t x200 = 202749U;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x197|((x198<<x199)/x200));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x245 = 0U;
	volatile uint64_t x248 = UINT64_MAX;
	volatile uint64_t t5 = 787276905011LLU;

	t5 = (x245|((x246<<x247)/x248));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x349 = UINT32_MAX;
	static uint32_t x350 = 216727U;
	uint8_t x351 = 25U;
	volatile int8_t x352 = INT8_MAX;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x349|((x350<<x351)/x352));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x385 = UINT32_MAX;
	uint64_t x386 = 1174780LLU;
	int8_t x387 = 33;
	int32_t x388 = -1;
	static volatile uint64_t t7 = 100560404133043LLU;

	t7 = (x385|((x386<<x387)/x388));

	if (t7 != 4294967295LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x518 = UINT8_MAX;
	int8_t x519 = 1;
	int16_t x520 = -112;
	int32_t t8 = 41954950;

	t8 = (x517|((x518<<x519)/x520));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x537 = INT8_MIN;
	int8_t x539 = 15;
	int16_t x540 = 4699;
	int32_t t9 = 73;

	t9 = (x537|((x538<<x539)/x540));

	if (t9 != -52) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x541 = INT64_MAX;
	uint8_t x542 = 9U;
	uint64_t x544 = UINT64_MAX;
	uint64_t t10 = 7LLU;

	t10 = (x541|((x542<<x543)/x544));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x637 = -1;
	static uint16_t x639 = 23U;
	volatile uint64_t x640 = 4224349LLU;

	t11 = (x637|((x638<<x639)/x640));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x673 = -575;
	volatile int8_t x674 = 1;
	int8_t x675 = 3;
	int64_t x676 = INT64_MIN;
	int64_t t12 = 17LL;

	t12 = (x673|((x674<<x675)/x676));

	if (t12 != -575LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x789 = -1;
	uint8_t x790 = 68U;
	uint8_t x791 = 12U;
	uint64_t x792 = 5358050382LLU;
	uint64_t t13 = UINT64_MAX;

	t13 = (x789|((x790<<x791)/x792));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x825 = 2542LLU;
	uint8_t x828 = 47U;
	uint64_t t14 = 45071LLU;

	t14 = (x825|((x826<<x827)/x828));

	if (t14 != 2542LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x833 = INT8_MAX;
	int8_t x834 = INT8_MAX;
	volatile uint8_t x835 = 2U;
	volatile int32_t t15 = -1966865;

	t15 = (x833|((x834<<x835)/x836));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x857 = -47;
	int8_t x859 = 0;
	volatile int8_t x860 = INT8_MIN;

	t16 = (x857|((x858<<x859)/x860));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x925 = INT32_MAX;
	int16_t x927 = 3;
	int64_t x928 = -264265446LL;
	volatile int64_t t17 = -352027583LL;

	t17 = (x925|((x926<<x927)/x928));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1029 = UINT8_MAX;
	volatile uint16_t x1031 = 5U;
	static volatile int32_t t18 = -294581821;

	t18 = (x1029|((x1030<<x1031)/x1032));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1037 = 1;
	static int16_t x1039 = 1;
	volatile int64_t x1040 = INT64_MIN;
	static volatile int64_t t19 = -782936340751189414LL;

	t19 = (x1037|((x1038<<x1039)/x1040));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1073 = UINT8_MAX;
	static uint32_t x1074 = 25U;
	static volatile uint8_t x1075 = 3U;
	volatile uint32_t t20 = 5094843U;

	t20 = (x1073|((x1074<<x1075)/x1076));

	if (t20 != 255U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1097 = 76530LLU;
	static uint8_t x1099 = 5U;
	uint8_t x1100 = 1U;
	volatile uint64_t t21 = 3LLU;

	t21 = (x1097|((x1098<<x1099)/x1100));

	if (t21 != 77810LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1189 = -11;
	int8_t x1191 = 13;
	int32_t x1192 = -1;

	t22 = (x1189|((x1190<<x1191)/x1192));

	if (t22 != -11) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1297 = INT8_MIN;
	volatile uint32_t x1298 = 923417484U;
	uint8_t x1299 = 27U;
	int32_t x1300 = -1;
	volatile uint32_t t23 = 237U;

	t23 = (x1297|((x1298<<x1299)/x1300));

	if (t23 != 4294967168U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1346 = 0;
	uint16_t x1347 = 0U;
	static uint8_t x1348 = UINT8_MAX;
	static uint64_t t24 = 27961500876LLU;

	t24 = (x1345|((x1346<<x1347)/x1348));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1473 = 6U;
	uint32_t x1475 = 3U;
	int64_t x1476 = INT64_MAX;
	uint64_t t25 = 1053312704318193312LLU;

	t25 = (x1473|((x1474<<x1475)/x1476));

	if (t25 != 6LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1493 = 3994694003585622309LLU;
	int32_t x1494 = 252;
	static int64_t x1495 = 6LL;
	uint64_t t26 = 1030048LLU;

	t26 = (x1493|((x1494<<x1495)/x1496));

	if (t26 != 18446744073709543717LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1497 = 1U;
	uint8_t x1498 = UINT8_MAX;
	int16_t x1499 = 0;
	int64_t x1500 = 11497960LL;
	int64_t t27 = 8999349813086LL;

	t27 = (x1497|((x1498<<x1499)/x1500));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1873 = -1;
	static volatile uint32_t x1874 = 2U;
	uint8_t x1875 = 2U;
	volatile int64_t x1876 = 109LL;
	int64_t t28 = 289949294178LL;

	t28 = (x1873|((x1874<<x1875)/x1876));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1906 = 98U;
	volatile uint8_t x1907 = 13U;
	int8_t x1908 = INT8_MIN;
	int32_t t29 = 707910688;

	t29 = (x1905|((x1906<<x1907)/x1908));

	if (t29 != -6272) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1977 = UINT8_MAX;
	volatile uint64_t x1978 = 4303928718471410LLU;
	volatile uint16_t x1979 = 31U;
	int32_t x1980 = -10783228;
	volatile uint64_t t30 = 4981996388439966LLU;

	t30 = (x1977|((x1978<<x1979)/x1980));

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2049 = 10612;
	uint64_t x2050 = 1762975LLU;
	uint16_t x2051 = 0U;
	int16_t x2052 = -1;
	static volatile uint64_t t31 = 8LLU;

	t31 = (x2049|((x2050<<x2051)/x2052));

	if (t31 != 10612LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2089 = -852720940508LL;
	int8_t x2090 = INT8_MAX;
	uint8_t x2091 = 3U;
	int16_t x2092 = 1;

	t32 = (x2089|((x2090<<x2091)/x2092));

	if (t32 != -852720940036LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2133 = 21;
	uint64_t x2134 = 9029LLU;
	int16_t x2136 = -1;
	volatile uint64_t t33 = 7172604720061LLU;

	t33 = (x2133|((x2134<<x2135)/x2136));

	if (t33 != 21LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2151 = 1U;
	int8_t x2152 = INT8_MAX;
	static volatile uint32_t t34 = 3930U;

	t34 = (x2149|((x2150<<x2151)/x2152));

	if (t34 != 2181302288U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2189 = INT16_MIN;
	uint8_t x2190 = UINT8_MAX;
	uint16_t x2191 = 18U;
	int16_t x2192 = INT16_MIN;
	int32_t t35 = 67933;

	t35 = (x2189|((x2190<<x2191)/x2192));

	if (t35 != -2040) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x2303 = 6U;
	int32_t t36 = 252511210;

	t36 = (x2301|((x2302<<x2303)/x2304));

	if (t36 != 50) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2341 = INT32_MIN;
	uint16_t x2342 = 3686U;
	uint8_t x2343 = 3U;
	volatile int32_t x2344 = INT32_MIN;
	volatile int32_t t37 = INT32_MIN;

	t37 = (x2341|((x2342<<x2343)/x2344));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2377 = INT16_MAX;
	uint16_t x2378 = 2U;
	uint8_t x2379 = 1U;
	int64_t x2380 = 166385864511LL;
	static volatile int64_t t38 = -59786575LL;

	t38 = (x2377|((x2378<<x2379)/x2380));

	if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2413 = 20U;
	uint64_t x2414 = 8814184721988396419LLU;
	uint16_t x2415 = 6U;
	static int8_t x2416 = 19;
	volatile uint64_t t39 = 6042896801LLU;

	t39 = (x2413|((x2414<<x2415)/x2416));

	if (t39 != 563447368208990653LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2421 = UINT16_MAX;
	static uint64_t x2422 = UINT64_MAX;
	int16_t x2423 = 1;
	int64_t x2424 = INT64_MIN;
	uint64_t t40 = 1318724070268835LLU;

	t40 = (x2421|((x2422<<x2423)/x2424));

	if (t40 != 65535LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2449 = INT8_MIN;
	uint8_t x2450 = UINT8_MAX;
	int32_t x2451 = 7;
	int64_t x2452 = INT64_MIN;
	int64_t t41 = 1LL;

	t41 = (x2449|((x2450<<x2451)/x2452));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2557 = -1LL;
	uint64_t x2558 = UINT64_MAX;
	static volatile int32_t x2559 = 1;
	uint16_t x2560 = UINT16_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x2557|((x2558<<x2559)/x2560));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2693 = -1;
	uint16_t x2694 = 1U;
	int8_t x2695 = 3;
	int16_t x2696 = 1;
	volatile int32_t t43 = 2394583;

	t43 = (x2693|((x2694<<x2695)/x2696));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2769 = -1;
	int8_t x2770 = INT8_MAX;
	static uint8_t x2772 = 22U;
	int32_t t44 = 21955;

	t44 = (x2769|((x2770<<x2771)/x2772));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2797 = 9334LLU;
	uint8_t x2799 = 12U;
	volatile uint64_t x2800 = 121674854519LLU;
	uint64_t t45 = 9390615993LLU;

	t45 = (x2797|((x2798<<x2799)/x2800));

	if (t45 != 9334LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3016 = INT16_MIN;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x3013|((x3014<<x3015)/x3016));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3057 = 50U;
	volatile int8_t x3058 = INT8_MAX;
	uint16_t x3059 = 20U;
	static uint64_t x3060 = 784399LLU;
	volatile uint64_t t47 = 14896LLU;

	t47 = (x3057|((x3058<<x3059)/x3060));

	if (t47 != 187LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3093 = -5;
	uint8_t x3094 = UINT8_MAX;
	int32_t x3096 = INT32_MIN;

	t48 = (x3093|((x3094<<x3095)/x3096));

	if (t48 != -5) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x3110 = INT16_MAX;
	static uint16_t x3111 = 0U;
	static int8_t x3112 = INT8_MIN;
	int32_t t49 = 455996;

	t49 = (x3109|((x3110<<x3111)/x3112));

	if (t49 != -255) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x3133 = 102585101U;
	int64_t x3135 = 1LL;
	uint32_t t50 = 2032380U;

	t50 = (x3133|((x3134<<x3135)/x3136));

	if (t50 != 104813359U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x3141 = UINT32_MAX;
	volatile uint16_t x3142 = 123U;
	int16_t x3143 = 17;
	static volatile int32_t x3144 = -1;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x3141|((x3142<<x3143)/x3144));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3169 = INT8_MIN;
	volatile uint32_t x3170 = 14295820U;
	int16_t x3172 = -1;
	uint32_t t52 = 1U;

	t52 = (x3169|((x3170<<x3171)/x3172));

	if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3279 = 1;
	uint8_t x3280 = 1U;
	uint32_t t53 = 307896U;

	t53 = (x3277|((x3278<<x3279)/x3280));

	if (t53 != 2010971U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3394 = 135564323LLU;
	uint8_t x3395 = 11U;
	int32_t x3396 = -9017;
	volatile uint64_t t54 = 106378856688204633LLU;

	t54 = (x3393|((x3394<<x3395)/x3396));

	if (t54 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x3405 = 10U;
	volatile int8_t x3406 = INT8_MAX;
	int64_t x3408 = -1LL;
	int64_t t55 = 255LL;

	t55 = (x3405|((x3406<<x3407)/x3408));

	if (t55 != -1014LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3429 = INT16_MIN;
	uint16_t x3431 = 2U;
	uint64_t x3432 = 7498325LLU;
	uint64_t t56 = 160194922LLU;

	t56 = (x3429|((x3430<<x3431)/x3432));

	if (t56 != 18446744073709549413LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x3493 = UINT8_MAX;
	uint16_t x3494 = UINT16_MAX;

	t57 = (x3493|((x3494<<x3495)/x3496));

	if (t57 != 255LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3505 = 517U;
	static int8_t x3506 = 3;
	uint8_t x3507 = 12U;
	int32_t x3508 = -1;
	uint32_t t58 = 87903677U;

	t58 = (x3505|((x3506<<x3507)/x3508));

	if (t58 != 4294955525U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3517 = INT8_MIN;
	uint16_t x3518 = 116U;
	static volatile int16_t x3519 = 0;
	int64_t x3520 = -1LL;

	t59 = (x3517|((x3518<<x3519)/x3520));

	if (t59 != -116LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x3573 = -5;
	uint64_t x3574 = UINT64_MAX;
	uint64_t x3575 = 0LLU;
	uint64_t t60 = 391971286585LLU;

	t60 = (x3573|((x3574<<x3575)/x3576));

	if (t60 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3589 = 17098U;
	uint8_t x3591 = 2U;
	int64_t x3592 = -1LL;
	volatile int64_t t61 = -2831875LL;

	t61 = (x3589|((x3590<<x3591)/x3592));

	if (t61 != -113970LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3678 = 3;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x3677|((x3678<<x3679)/x3680));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x3901 = 4757U;
	uint64_t x3902 = 175138LLU;
	uint8_t x3903 = 3U;
	uint8_t x3904 = 7U;

	t63 = (x3901|((x3902<<x3903)/x3904));

	if (t63 != 204765LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4278 = 7U;
	int8_t x4279 = 1;
	volatile uint32_t t64 = 663529U;

	t64 = (x4277|((x4278<<x4279)/x4280));

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x4333 = INT8_MIN;
	uint32_t x4334 = 7498U;
	static volatile uint32_t t65 = 6625523U;

	t65 = (x4333|((x4334<<x4335)/x4336));

	if (t65 != 4294967168U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4369 = 223U;
	uint8_t x4370 = 91U;
	volatile int8_t x4371 = 0;
	static int32_t t66 = 518485;

	t66 = (x4369|((x4370<<x4371)/x4372));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x4489 = INT16_MAX;
	uint32_t x4491 = 7U;
	uint32_t x4492 = 10720621U;
	volatile uint32_t t67 = 2803598U;

	t67 = (x4489|((x4490<<x4491)/x4492));

	if (t67 != 32767U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4605 = -1LL;
	static int64_t x4606 = 37LL;
	volatile int64_t t68 = -1287LL;

	t68 = (x4605|((x4606<<x4607)/x4608));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x4661 = 0;
	uint8_t x4662 = UINT8_MAX;
	volatile uint32_t x4663 = 1U;
	int32_t x4664 = INT32_MAX;
	static volatile int32_t t69 = 2383;

	t69 = (x4661|((x4662<<x4663)/x4664));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x4737 = -1;
	uint8_t x4738 = UINT8_MAX;
	uint16_t x4739 = 4U;
	volatile int8_t x4740 = INT8_MIN;
	volatile int32_t t70 = -868658;

	t70 = (x4737|((x4738<<x4739)/x4740));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4782 = 341;
	int16_t x4784 = -756;
	int32_t t71 = 7889;

	t71 = (x4781|((x4782<<x4783)/x4784));

	if (t71 != -3621) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4801 = UINT32_MAX;
	uint16_t x4802 = UINT16_MAX;
	volatile int16_t x4804 = -207;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x4801|((x4802<<x4803)/x4804));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4917 = 49;
	uint16_t x4918 = 0U;
	int8_t x4919 = 11;

	t73 = (x4917|((x4918<<x4919)/x4920));

	if (t73 != 49) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x5005 = -1704665232LL;
	volatile int64_t x5008 = INT64_MAX;
	volatile int64_t t74 = 711441785LL;

	t74 = (x5005|((x5006<<x5007)/x5008));

	if (t74 != -1704665232LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x5041 = 989371LLU;
	uint8_t x5042 = 1U;
	static int32_t x5043 = 0;
	static uint8_t x5044 = UINT8_MAX;
	uint64_t t75 = 15798740247776LLU;

	t75 = (x5041|((x5042<<x5043)/x5044));

	if (t75 != 989371LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x5125 = INT32_MAX;
	volatile uint16_t x5126 = UINT16_MAX;
	uint8_t x5127 = 0U;
	volatile uint8_t x5128 = 26U;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x5125|((x5126<<x5127)/x5128));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x5279 = 4U;
	uint8_t x5280 = 2U;
	static int64_t t77 = 0LL;

	t77 = (x5277|((x5278<<x5279)/x5280));

	if (t77 != 239443470011125757LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5283 = 11U;
	uint8_t x5284 = 15U;
	volatile int32_t t78 = -12441;

	t78 = (x5281|((x5282<<x5283)/x5284));

	if (t78 != 34911) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5341 = 20;
	uint8_t x5343 = 8U;
	int8_t x5344 = -1;
	static uint64_t t79 = 2991528691942316LLU;

	t79 = (x5341|((x5342<<x5343)/x5344));

	if (t79 != 20LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5357 = INT16_MAX;
	uint8_t x5358 = 2U;
	uint64_t x5359 = 1LLU;
	volatile int8_t x5360 = INT8_MIN;
	volatile int32_t t80 = -15518;

	t80 = (x5357|((x5358<<x5359)/x5360));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x5417 = -1;
	int8_t x5419 = 3;
	volatile int64_t x5420 = INT64_MIN;
	volatile int64_t t81 = -41105686452177708LL;

	t81 = (x5417|((x5418<<x5419)/x5420));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x5514 = 147849U;
	int8_t x5515 = 4;
	static uint64_t x5516 = 67839873547558LLU;
	uint64_t t82 = UINT64_MAX;

	t82 = (x5513|((x5514<<x5515)/x5516));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x5693 = 682916199;
	int8_t x5694 = 1;
	uint16_t x5695 = 1U;
	volatile int32_t t83 = -391029199;

	t83 = (x5693|((x5694<<x5695)/x5696));

	if (t83 != 682916199) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5705 = -107;
	static int16_t x5706 = 3020;
	uint64_t x5707 = 2LLU;
	int8_t x5708 = INT8_MIN;
	volatile int32_t t84 = 274023;

	t84 = (x5705|((x5706<<x5707)/x5708));

	if (t84 != -73) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x5829 = INT16_MIN;
	volatile uint32_t x5830 = 1463705U;
	uint32_t x5831 = 0U;
	int8_t x5832 = -7;
	uint32_t t85 = 2U;

	t85 = (x5829|((x5830<<x5831)/x5832));

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5885 = UINT64_MAX;
	volatile uint32_t x5886 = 518730749U;
	static int16_t x5887 = 2;
	volatile int64_t x5888 = INT64_MIN;
	static volatile uint64_t t86 = UINT64_MAX;

	t86 = (x5885|((x5886<<x5887)/x5888));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x6073 = INT32_MIN;
	uint8_t x6075 = 8U;
	uint8_t x6076 = UINT8_MAX;
	int32_t t87 = INT32_MIN;

	t87 = (x6073|((x6074<<x6075)/x6076));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x6086 = 10U;
	volatile int64_t t88 = 10996872074LL;

	t88 = (x6085|((x6086<<x6087)/x6088));

	if (t88 != -10LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6097 = 0LLU;
	uint32_t x6098 = 5761011U;
	int16_t x6099 = 1;
	uint64_t t89 = 130382LLU;

	t89 = (x6097|((x6098<<x6099)/x6100));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6113 = -1;
	uint8_t x6114 = 14U;
	uint8_t x6115 = 3U;
	uint32_t x6116 = UINT32_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (x6113|((x6114<<x6115)/x6116));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x6141 = INT64_MIN;
	int16_t x6143 = 2;
	volatile int64_t x6144 = INT64_MIN;
	uint64_t t91 = 713LLU;

	t91 = (x6141|((x6142<<x6143)/x6144));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6210 = UINT32_MAX;
	uint16_t x6211 = 0U;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x6209|((x6210<<x6211)/x6212));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6216 = 33U;
	static uint64_t t93 = 8239566427LLU;

	t93 = (x6213|((x6214<<x6215)/x6216));

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6274 = UINT16_MAX;
	int16_t x6275 = 1;
	volatile int32_t x6276 = 1756981;
	int32_t t94 = 107489458;

	t94 = (x6273|((x6274<<x6275)/x6276));

	if (t94 != -10057) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6293 = 101LL;
	int8_t x6294 = 5;
	uint64_t x6295 = 0LLU;
	int8_t x6296 = INT8_MAX;
	int64_t t95 = 1118943946701730616LL;

	t95 = (x6293|((x6294<<x6295)/x6296));

	if (t95 != 101LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6321 = INT64_MIN;
	volatile uint64_t x6322 = UINT64_MAX;
	int32_t x6324 = INT32_MAX;
	static uint64_t t96 = 0LLU;

	t96 = (x6321|((x6322<<x6323)/x6324));

	if (t96 != 9223372045444710403LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6361 = 690879118474155727LLU;
	uint64_t x6362 = 12056153407080845LLU;
	uint8_t x6364 = 3U;
	static volatile uint64_t t97 = 490950568569590LLU;

	t97 = (x6361|((x6362<<x6363)/x6364));

	if (t97 != 717900716911328975LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6406 = INT16_MAX;
	int16_t x6408 = INT16_MIN;
	int32_t t98 = 106;

	t98 = (x6405|((x6406<<x6407)/x6408));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6413 = 0;
	uint8_t x6414 = 4U;
	volatile int16_t x6416 = -324;
	int32_t t99 = -3536899;

	t99 = (x6413|((x6414<<x6415)/x6416));

	if (t99 != 0) { NG(); } else { ; }
	
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

