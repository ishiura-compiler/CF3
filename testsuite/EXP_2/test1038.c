#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x123 = 4U;
uint16_t x266 = 72U;
static int16_t x333 = INT16_MAX;
int64_t x334 = 53226550LL;
volatile int64_t x461 = -1LL;
static int32_t x462 = 15110520;
volatile int64_t t8 = -26545874200901LL;
int64_t x624 = -1LL;
static int16_t x646 = INT16_MAX;
int8_t x648 = INT8_MAX;
uint64_t x741 = 648906646388LLU;
volatile uint8_t x742 = 1U;
uint64_t t13 = 743LLU;
uint32_t x1048 = 0U;
volatile int32_t x1197 = INT32_MAX;
uint32_t t19 = 8159847U;
int64_t x1329 = -1LL;
static volatile uint8_t x1331 = 0U;
volatile uint8_t x1370 = 16U;
volatile uint32_t x1398 = 54228U;
static volatile uint16_t x1414 = 0U;
static volatile int16_t x1415 = 5;
static int32_t t23 = 3584997;
uint64_t x1533 = 450669421654335701LLU;
uint8_t x1535 = 12U;
int8_t x1542 = 9;
static uint8_t x1586 = UINT8_MAX;
int64_t t26 = -634306951245LL;
static int8_t x1643 = 16;
volatile int32_t t29 = -5604;
volatile uint64_t t30 = 343589601055713LLU;
int64_t x1951 = 2LL;
volatile uint64_t x1952 = 13055LLU;
uint8_t x1966 = 3U;
static volatile int64_t t32 = 53066164988969425LL;
uint8_t x2015 = 3U;
static volatile int16_t x2118 = 897;
uint16_t x2194 = 42U;
int32_t t38 = INT32_MIN;
int16_t x2420 = -1;
volatile int64_t x2506 = 530LL;
static int64_t t43 = 379LL;
static int64_t x2592 = INT64_MIN;
int8_t x2654 = INT8_MAX;
int8_t x2656 = INT8_MAX;
static int64_t x2832 = 4364773659916736LL;
volatile int64_t t48 = 1120783481774929LL;
uint8_t x3049 = 46U;
static volatile int64_t x3050 = 3588433LL;
uint8_t x3083 = 10U;
int64_t x3102 = 4LL;
uint8_t x3103 = 0U;
volatile int64_t t51 = -499109302812813LL;
uint64_t x3106 = UINT64_MAX;
volatile int8_t x3107 = 5;
uint64_t t52 = 19453689901770073LLU;
static int8_t x3111 = 10;
static volatile int16_t x3135 = 0;
uint16_t x3136 = UINT16_MAX;
uint8_t x3426 = UINT8_MAX;
volatile uint64_t x3428 = 1602131688531558715LLU;
volatile uint64_t t59 = 2066575097960566195LLU;
static uint8_t x3750 = UINT8_MAX;
uint8_t x3800 = 8U;
int8_t x4044 = -5;
int16_t x4090 = 2;
int32_t t67 = -12769;
uint16_t x4370 = 34U;
volatile uint64_t t73 = 4LLU;
uint8_t x4427 = 3U;
static int32_t t74 = -443843451;
static uint8_t x4442 = UINT8_MAX;
uint32_t x4623 = 1U;
int16_t x4665 = -1;
int16_t x4802 = 9537;
int8_t x4803 = 5;
static int64_t x4844 = INT64_MAX;
static volatile int64_t x4886 = 30959799002LL;
uint8_t x4888 = 35U;
int16_t x4965 = INT16_MIN;
uint64_t x4990 = UINT64_MAX;
uint8_t x5038 = UINT8_MAX;
int16_t x5242 = INT16_MAX;
uint8_t x5379 = 0U;
int64_t x5447 = 15LL;
int64_t x5458 = 645LL;
int8_t x5460 = -3;
static int32_t x5529 = 54409279;
volatile int8_t x5530 = INT8_MAX;


void f0(void) {
	uint16_t x1 = 0U;
	int16_t x2 = INT16_MAX;
	int32_t x3 = 0;
	uint16_t x4 = 6937U;
	volatile int32_t t0 = -3433409;

	t0 = ((x1-(x2>>x3))&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x121 = -170;
	uint8_t x122 = UINT8_MAX;
	int32_t x124 = 86;
	volatile int32_t t1 = 3990188;

	t1 = ((x121-(x122>>x123))&x124);

	if (t1 != 70) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x205 = 406677U;
	volatile uint8_t x206 = UINT8_MAX;
	uint8_t x207 = 29U;
	int8_t x208 = INT8_MAX;
	static uint32_t t2 = 0U;

	t2 = ((x205-(x206>>x207))&x208);

	if (t2 != 21U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x241 = -2;
	int64_t x242 = INT64_MAX;
	volatile uint8_t x243 = 1U;
	static volatile int8_t x244 = -1;
	int64_t t3 = 279099599365817648LL;

	t3 = ((x241-(x242>>x243))&x244);

	if (t3 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x265 = 63661053;
	static volatile int8_t x267 = 3;
	volatile int32_t x268 = 2;
	int32_t t4 = 28221656;

	t4 = ((x265-(x266>>x267))&x268);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x335 = 1;
	uint8_t x336 = 6U;
	static volatile int64_t t5 = 5133886104054850LL;

	t5 = ((x333-(x334>>x335))&x336);

	if (t5 != 4LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x373 = INT16_MIN;
	static uint32_t x374 = UINT32_MAX;
	uint8_t x375 = 1U;
	volatile int64_t x376 = -1LL;
	volatile int64_t t6 = 1246806824645909375LL;

	t6 = ((x373-(x374>>x375))&x376);

	if (t6 != 2147450881LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x429 = 23U;
	int64_t x430 = 23908450824LL;
	static int16_t x431 = 1;
	int32_t x432 = INT32_MAX;
	volatile int64_t t7 = 291386789794642865LL;

	t7 = ((x429-(x430>>x431))&x432);

	if (t7 != 930676499LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x463 = 16U;
	uint16_t x464 = 2U;

	t8 = ((x461-(x462>>x463))&x464);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x621 = 0;
	volatile uint8_t x622 = 4U;
	int16_t x623 = 29;
	volatile int64_t t9 = -630LL;

	t9 = ((x621-(x622>>x623))&x624);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x645 = -2236941749910533488LL;
	static volatile int8_t x647 = 0;
	volatile int64_t t10 = -137469LL;

	t10 = ((x645-(x646>>x647))&x648);

	if (t10 != 17LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x743 = 0LL;
	volatile int32_t x744 = -1;
	volatile uint64_t t11 = 2680572090864121538LLU;

	t11 = ((x741-(x742>>x743))&x744);

	if (t11 != 648906646387LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x929 = UINT16_MAX;
	uint16_t x930 = 415U;
	uint8_t x931 = 4U;
	static uint16_t x932 = 460U;
	int32_t t12 = 107837;

	t12 = ((x929-(x930>>x931))&x932);

	if (t12 != 452) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x965 = UINT32_MAX;
	static uint64_t x966 = UINT64_MAX;
	int8_t x967 = 23;
	static volatile uint32_t x968 = 3932632U;

	t13 = ((x965-(x966>>x967))&x968);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1045 = 2;
	uint64_t x1046 = 902223199154674911LLU;
	volatile uint8_t x1047 = 62U;
	uint64_t t14 = 23595889LLU;

	t14 = ((x1045-(x1046>>x1047))&x1048);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1085 = 2683LLU;
	static uint32_t x1086 = 1379U;
	int16_t x1087 = 21;
	uint8_t x1088 = 19U;
	uint64_t t15 = 159781LLU;

	t15 = ((x1085-(x1086>>x1087))&x1088);

	if (t15 != 19LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1113 = INT8_MIN;
	uint32_t x1114 = 29U;
	uint8_t x1115 = 17U;
	int64_t x1116 = INT64_MAX;
	int64_t t16 = -123099231416288020LL;

	t16 = ((x1113-(x1114>>x1115))&x1116);

	if (t16 != 4294967168LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1198 = UINT16_MAX;
	int8_t x1199 = 18;
	int64_t x1200 = INT64_MAX;
	static volatile int64_t t17 = -38102859853920471LL;

	t17 = ((x1197-(x1198>>x1199))&x1200);

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1201 = -1LL;
	int8_t x1202 = 15;
	volatile int16_t x1203 = 8;
	uint8_t x1204 = 1U;
	volatile int64_t t18 = 58884732430775123LL;

	t18 = ((x1201-(x1202>>x1203))&x1204);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1281 = 940U;
	uint8_t x1282 = 5U;
	uint8_t x1283 = 7U;
	volatile int16_t x1284 = INT16_MAX;

	t19 = ((x1281-(x1282>>x1283))&x1284);

	if (t19 != 940U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1330 = 8807U;
	uint16_t x1332 = UINT16_MAX;
	int64_t t20 = -501890344791508213LL;

	t20 = ((x1329-(x1330>>x1331))&x1332);

	if (t20 != 56728LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1369 = -1LL;
	int64_t x1371 = 1LL;
	volatile int16_t x1372 = -1192;
	int64_t t21 = 1222126637LL;

	t21 = ((x1369-(x1370>>x1371))&x1372);

	if (t21 != -1200LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1397 = 312990641LLU;
	int64_t x1399 = 20LL;
	int64_t x1400 = INT64_MIN;
	uint64_t t22 = 375922535597LLU;

	t22 = ((x1397-(x1398>>x1399))&x1400);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1413 = 4U;
	int8_t x1416 = INT8_MIN;

	t23 = ((x1413-(x1414>>x1415))&x1416);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1534 = UINT64_MAX;
	uint16_t x1536 = 460U;
	volatile uint64_t t24 = 266023270013191LLU;

	t24 = ((x1533-(x1534>>x1535))&x1536);

	if (t24 != 196LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1541 = 7009832LL;
	volatile uint8_t x1543 = 0U;
	uint32_t x1544 = UINT32_MAX;
	int64_t t25 = -648311328277LL;

	t25 = ((x1541-(x1542>>x1543))&x1544);

	if (t25 != 7009823LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1585 = 29U;
	uint8_t x1587 = 25U;
	int64_t x1588 = INT64_MIN;

	t26 = ((x1585-(x1586>>x1587))&x1588);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1641 = -13;
	uint32_t x1642 = UINT32_MAX;
	int32_t x1644 = 3081114;
	volatile uint32_t t27 = 769015323U;

	t27 = ((x1641-(x1642>>x1643))&x1644);

	if (t27 != 3015568U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1721 = INT16_MIN;
	static int8_t x1722 = 0;
	int8_t x1723 = 11;
	volatile int32_t x1724 = -20;
	static volatile int32_t t28 = -7955;

	t28 = ((x1721-(x1722>>x1723))&x1724);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1729 = -1;
	uint16_t x1730 = 18841U;
	uint8_t x1731 = 3U;
	uint8_t x1732 = UINT8_MAX;

	t29 = ((x1729-(x1730>>x1731))&x1732);

	if (t29 != 204) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1909 = INT32_MIN;
	int64_t x1910 = INT64_MAX;
	int8_t x1911 = 1;
	uint64_t x1912 = 8786398650031426LLU;

	t30 = ((x1909-(x1910>>x1911))&x1912);

	if (t30 != 8786397133537280LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1949 = INT32_MAX;
	uint8_t x1950 = 1U;
	volatile uint64_t t31 = 940938467725290LLU;

	t31 = ((x1949-(x1950>>x1951))&x1952);

	if (t31 != 13055LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1965 = INT64_MIN;
	volatile uint8_t x1967 = 17U;
	int16_t x1968 = INT16_MAX;

	t32 = ((x1965-(x1966>>x1967))&x1968);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1981 = 19U;
	static uint64_t x1982 = UINT64_MAX;
	int8_t x1983 = 46;
	int64_t x1984 = 57LL;
	volatile uint64_t t33 = 795084075784286767LLU;

	t33 = ((x1981-(x1982>>x1983))&x1984);

	if (t33 != 16LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2013 = INT8_MIN;
	int16_t x2014 = INT16_MAX;
	int16_t x2016 = INT16_MAX;
	volatile int32_t t34 = -955209070;

	t34 = ((x2013-(x2014>>x2015))&x2016);

	if (t34 != 28545) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2117 = 2456U;
	int16_t x2119 = 23;
	static int32_t x2120 = INT32_MAX;
	uint32_t t35 = 151387343U;

	t35 = ((x2117-(x2118>>x2119))&x2120);

	if (t35 != 2456U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2173 = 58050440LLU;
	uint64_t x2174 = 31144724223LLU;
	int8_t x2175 = 17;
	uint32_t x2176 = 38925831U;
	volatile uint64_t t36 = 485707LLU;

	t36 = ((x2173-(x2174>>x2175))&x2176);

	if (t36 != 38807041LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2193 = 1015646838U;
	volatile int16_t x2195 = 29;
	int16_t x2196 = -1;
	static uint32_t t37 = 399U;

	t37 = ((x2193-(x2194>>x2195))&x2196);

	if (t37 != 1015646838U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2221 = INT32_MIN;
	static int8_t x2222 = 0;
	int8_t x2223 = 29;
	int8_t x2224 = INT8_MIN;

	t38 = ((x2221-(x2222>>x2223))&x2224);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2289 = 3U;
	int16_t x2290 = INT16_MAX;
	static int8_t x2291 = 2;
	int8_t x2292 = 14;
	int32_t t39 = -27232;

	t39 = ((x2289-(x2290>>x2291))&x2292);

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2393 = INT8_MIN;
	static int8_t x2394 = INT8_MAX;
	uint8_t x2395 = 21U;
	static int8_t x2396 = INT8_MIN;
	int32_t t40 = 1;

	t40 = ((x2393-(x2394>>x2395))&x2396);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2401 = 5U;
	int8_t x2402 = INT8_MAX;
	static uint8_t x2403 = 22U;
	int32_t x2404 = 14228;
	volatile int32_t t41 = -25684186;

	t41 = ((x2401-(x2402>>x2403))&x2404);

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2417 = 6U;
	int16_t x2418 = 8189;
	int16_t x2419 = 15;
	int32_t t42 = 16295652;

	t42 = ((x2417-(x2418>>x2419))&x2420);

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2505 = INT8_MIN;
	static int32_t x2507 = 13;
	uint8_t x2508 = UINT8_MAX;

	t43 = ((x2505-(x2506>>x2507))&x2508);

	if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2589 = -1LL;
	int32_t x2590 = INT32_MAX;
	uint16_t x2591 = 1U;
	volatile int64_t t44 = INT64_MIN;

	t44 = ((x2589-(x2590>>x2591))&x2592);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2649 = INT8_MAX;
	int32_t x2650 = INT32_MAX;
	static uint8_t x2651 = 22U;
	int64_t x2652 = INT64_MIN;
	static volatile int64_t t45 = INT64_MIN;

	t45 = ((x2649-(x2650>>x2651))&x2652);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2653 = -1;
	volatile uint32_t x2655 = 14U;
	volatile int32_t t46 = 209696015;

	t46 = ((x2653-(x2654>>x2655))&x2656);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2741 = INT8_MIN;
	volatile uint32_t x2742 = 1853U;
	uint8_t x2743 = 0U;
	int32_t x2744 = INT32_MAX;
	uint32_t t47 = 1632185772U;

	t47 = ((x2741-(x2742>>x2743))&x2744);

	if (t47 != 2147481667U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2829 = INT8_MAX;
	int8_t x2830 = INT8_MAX;
	volatile uint32_t x2831 = 12U;

	t48 = ((x2829-(x2830>>x2831))&x2832);

	if (t48 != 64LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3051 = 0;
	int16_t x3052 = -1;
	static int64_t t49 = 6444LL;

	t49 = ((x3049-(x3050>>x3051))&x3052);

	if (t49 != -3588387LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3081 = UINT16_MAX;
	uint8_t x3082 = 0U;
	uint16_t x3084 = UINT16_MAX;
	volatile int32_t t50 = -414061;

	t50 = ((x3081-(x3082>>x3083))&x3084);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3101 = INT8_MIN;
	static int8_t x3104 = -1;

	t51 = ((x3101-(x3102>>x3103))&x3104);

	if (t51 != -132LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3105 = INT8_MAX;
	uint16_t x3108 = 311U;

	t52 = ((x3105-(x3106>>x3107))&x3108);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3109 = -1717;
	uint16_t x3110 = 111U;
	int64_t x3112 = 9445476927228013LL;
	volatile int64_t t53 = 73410211307326172LL;

	t53 = ((x3109-(x3110>>x3111))&x3112);

	if (t53 != 9445476927227977LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3133 = UINT16_MAX;
	uint16_t x3134 = 125U;
	volatile int32_t t54 = -1583;

	t54 = ((x3133-(x3134>>x3135))&x3136);

	if (t54 != 65410) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3181 = 47107789937217703LLU;
	uint32_t x3182 = 1022613703U;
	uint8_t x3183 = 15U;
	uint32_t x3184 = UINT32_MAX;
	static volatile uint64_t t55 = 253693415LLU;

	t55 = ((x3181-(x3182>>x3183))&x3184);

	if (t55 != 224138944LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3189 = -26;
	uint64_t x3190 = 2LLU;
	int8_t x3191 = 7;
	int8_t x3192 = 4;
	static uint64_t t56 = 32345LLU;

	t56 = ((x3189-(x3190>>x3191))&x3192);

	if (t56 != 4LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3253 = INT8_MAX;
	static int64_t x3254 = INT64_MAX;
	volatile uint8_t x3255 = 34U;
	uint32_t x3256 = 14573507U;
	volatile int64_t t57 = 131615231485207LL;

	t57 = ((x3253-(x3254>>x3255))&x3256);

	if (t57 != 128LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3425 = UINT32_MAX;
	static uint8_t x3427 = 5U;
	static volatile uint64_t t58 = 19906497881308LLU;

	t58 = ((x3425-(x3426>>x3427))&x3428);

	if (t58 != 1112670520LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x3433 = -243418812316LL;
	uint64_t x3434 = 27926042871020LLU;
	int8_t x3435 = 26;
	uint32_t x3436 = 6369U;

	t59 = ((x3433-(x3434>>x3435))&x3436);

	if (t59 != 4320LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3457 = UINT8_MAX;
	uint64_t x3458 = UINT64_MAX;
	static volatile int16_t x3459 = 45;
	uint32_t x3460 = UINT32_MAX;
	uint64_t t60 = 87882408429755728LLU;

	t60 = ((x3457-(x3458>>x3459))&x3460);

	if (t60 != 4294443264LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3505 = 523U;
	uint8_t x3506 = 86U;
	int16_t x3507 = 13;
	int8_t x3508 = INT8_MIN;
	static volatile int32_t t61 = 486;

	t61 = ((x3505-(x3506>>x3507))&x3508);

	if (t61 != 512) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3749 = INT32_MIN;
	uint8_t x3751 = 11U;
	int64_t x3752 = -26775253LL;
	static volatile int64_t t62 = 66485995LL;

	t62 = ((x3749-(x3750>>x3751))&x3752);

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x3797 = INT32_MIN;
	uint64_t x3798 = 21055163411LLU;
	uint8_t x3799 = 63U;
	uint64_t t63 = 1658048298256122815LLU;

	t63 = ((x3797-(x3798>>x3799))&x3800);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3929 = -319;
	int8_t x3930 = 40;
	volatile uint8_t x3931 = 3U;
	int64_t x3932 = INT64_MAX;
	static volatile int64_t t64 = -7299510642297LL;

	t64 = ((x3929-(x3930>>x3931))&x3932);

	if (t64 != 9223372036854775484LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x3949 = 15873U;
	uint8_t x3950 = UINT8_MAX;
	volatile uint8_t x3951 = 5U;
	uint64_t x3952 = UINT64_MAX;
	volatile uint64_t t65 = 25358LLU;

	t65 = ((x3949-(x3950>>x3951))&x3952);

	if (t65 != 15866LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4041 = UINT64_MAX;
	uint8_t x4042 = 35U;
	volatile uint16_t x4043 = 2U;
	volatile uint64_t t66 = 747062LLU;

	t66 = ((x4041-(x4042>>x4043))&x4044);

	if (t66 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x4089 = UINT16_MAX;
	uint64_t x4091 = 19LLU;
	uint16_t x4092 = 9U;

	t67 = ((x4089-(x4090>>x4091))&x4092);

	if (t67 != 9) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x4093 = INT8_MAX;
	uint16_t x4094 = 5483U;
	uint32_t x4095 = 14U;
	int32_t x4096 = INT32_MAX;
	static volatile int32_t t68 = 7221;

	t68 = ((x4093-(x4094>>x4095))&x4096);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4145 = 42U;
	uint16_t x4146 = 1912U;
	volatile uint8_t x4147 = 0U;
	uint8_t x4148 = 49U;
	volatile int32_t t69 = 743438;

	t69 = ((x4145-(x4146>>x4147))&x4148);

	if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x4157 = 86U;
	uint8_t x4158 = UINT8_MAX;
	int32_t x4159 = 1;
	int64_t x4160 = INT64_MIN;
	int64_t t70 = INT64_MIN;

	t70 = ((x4157-(x4158>>x4159))&x4160);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4333 = UINT64_MAX;
	int8_t x4334 = INT8_MAX;
	int16_t x4335 = 1;
	uint16_t x4336 = UINT16_MAX;
	volatile uint64_t t71 = 3456874131187LLU;

	t71 = ((x4333-(x4334>>x4335))&x4336);

	if (t71 != 65472LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4353 = 130089LL;
	int64_t x4354 = 10957856639LL;
	int8_t x4355 = 0;
	uint64_t x4356 = 18573669946329LLU;
	volatile uint64_t t72 = 7392792915845LLU;

	t72 = ((x4353-(x4354>>x4355))&x4356);

	if (t72 != 18571453157512LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x4369 = 5904LLU;
	uint8_t x4371 = 12U;
	int16_t x4372 = 0;

	t73 = ((x4369-(x4370>>x4371))&x4372);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x4425 = 4U;
	volatile int8_t x4426 = 0;
	volatile int32_t x4428 = INT32_MIN;

	t74 = ((x4425-(x4426>>x4427))&x4428);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4441 = 3;
	static volatile int8_t x4443 = 1;
	static int64_t x4444 = -1LL;
	int64_t t75 = -1307791LL;

	t75 = ((x4441-(x4442>>x4443))&x4444);

	if (t75 != -124LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4553 = 72U;
	uint16_t x4554 = UINT16_MAX;
	int8_t x4555 = 1;
	volatile uint32_t x4556 = 23U;
	volatile uint32_t t76 = 6580124U;

	t76 = ((x4553-(x4554>>x4555))&x4556);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4621 = -1;
	uint8_t x4622 = 0U;
	static int16_t x4624 = -1;
	volatile int32_t t77 = 505343461;

	t77 = ((x4621-(x4622>>x4623))&x4624);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x4666 = UINT16_MAX;
	uint8_t x4667 = 5U;
	int8_t x4668 = INT8_MAX;
	volatile int32_t t78 = -55849111;

	t78 = ((x4665-(x4666>>x4667))&x4668);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4801 = UINT32_MAX;
	int64_t x4804 = 389153407495370843LL;
	int64_t t79 = 115962509910547LL;

	t79 = ((x4801-(x4802>>x4803))&x4804);

	if (t79 != 1491400785LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x4813 = UINT8_MAX;
	static volatile uint64_t x4814 = UINT64_MAX;
	uint8_t x4815 = 2U;
	int8_t x4816 = 3;
	volatile uint64_t t80 = 6253568856037148181LLU;

	t80 = ((x4813-(x4814>>x4815))&x4816);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4829 = 0;
	uint8_t x4830 = 61U;
	volatile uint8_t x4831 = 7U;
	static int32_t x4832 = INT32_MIN;
	int32_t t81 = -9;

	t81 = ((x4829-(x4830>>x4831))&x4832);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x4841 = INT16_MAX;
	volatile int16_t x4842 = 1412;
	static int16_t x4843 = 1;
	int64_t t82 = 59144LL;

	t82 = ((x4841-(x4842>>x4843))&x4844);

	if (t82 != 32061LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4885 = 551U;
	int16_t x4887 = 11;
	int64_t t83 = -7LL;

	t83 = ((x4885-(x4886>>x4887))&x4888);

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x4966 = 201U;
	uint8_t x4967 = 0U;
	int64_t x4968 = INT64_MAX;
	volatile int64_t t84 = 87728LL;

	t84 = ((x4965-(x4966>>x4967))&x4968);

	if (t84 != 9223372036854742839LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4989 = INT16_MIN;
	uint16_t x4991 = 30U;
	uint32_t x4992 = UINT32_MAX;
	volatile uint64_t t85 = 1940503650LLU;

	t85 = ((x4989-(x4990>>x4991))&x4992);

	if (t85 != 4294934529LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x5037 = -8653898889271LL;
	uint8_t x5039 = 11U;
	int16_t x5040 = INT16_MIN;
	volatile int64_t t86 = -1229281LL;

	t86 = ((x5037-(x5038>>x5039))&x5040);

	if (t86 != -8653898907648LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x5053 = UINT8_MAX;
	uint64_t x5054 = UINT64_MAX;
	uint8_t x5055 = 28U;
	int16_t x5056 = -1632;
	static uint64_t t87 = 270915580534LLU;

	t87 = ((x5053-(x5054>>x5055))&x5056);

	if (t87 != 18446744004990075136LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5097 = UINT16_MAX;
	uint64_t x5098 = UINT64_MAX;
	static uint8_t x5099 = 0U;
	int16_t x5100 = INT16_MIN;
	uint64_t t88 = 2136658268004LLU;

	t88 = ((x5097-(x5098>>x5099))&x5100);

	if (t88 != 65536LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5105 = UINT8_MAX;
	static volatile uint16_t x5106 = 0U;
	volatile int32_t x5107 = 1;
	int16_t x5108 = INT16_MIN;
	int32_t t89 = 22928012;

	t89 = ((x5105-(x5106>>x5107))&x5108);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5117 = INT16_MIN;
	uint16_t x5118 = UINT16_MAX;
	uint32_t x5119 = 4U;
	uint32_t x5120 = UINT32_MAX;
	uint32_t t90 = 0U;

	t90 = ((x5117-(x5118>>x5119))&x5120);

	if (t90 != 4294930433U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x5153 = INT32_MIN;
	static volatile uint32_t x5154 = 4525917U;
	uint8_t x5155 = 0U;
	uint32_t x5156 = 30U;
	uint32_t t91 = 548001U;

	t91 = ((x5153-(x5154>>x5155))&x5156);

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x5221 = INT16_MIN;
	static volatile int8_t x5222 = 0;
	uint32_t x5223 = 15U;
	int64_t x5224 = 10736296271708104LL;
	static int64_t t92 = 138395773976177LL;

	t92 = ((x5221-(x5222>>x5223))&x5224);

	if (t92 != 10736296271675392LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5241 = INT64_MIN;
	uint8_t x5243 = 21U;
	volatile int8_t x5244 = -1;
	volatile int64_t t93 = INT64_MIN;

	t93 = ((x5241-(x5242>>x5243))&x5244);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x5281 = -1179;
	volatile int64_t x5282 = 241LL;
	uint8_t x5283 = 5U;
	static int64_t x5284 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = ((x5281-(x5282>>x5283))&x5284);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x5377 = UINT8_MAX;
	uint16_t x5378 = 80U;
	int8_t x5380 = 2;
	volatile int32_t t95 = -3;

	t95 = ((x5377-(x5378>>x5379))&x5380);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5445 = -1LL;
	uint8_t x5446 = 0U;
	static volatile int8_t x5448 = -1;
	int64_t t96 = -206956LL;

	t96 = ((x5445-(x5446>>x5447))&x5448);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5457 = 17945U;
	uint16_t x5459 = 2U;
	int64_t t97 = 25115760LL;

	t97 = ((x5457-(x5458>>x5459))&x5460);

	if (t97 != 17784LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x5531 = 1U;
	volatile uint64_t x5532 = 0LLU;
	static volatile uint64_t t98 = 2153LLU;

	t98 = ((x5529-(x5530>>x5531))&x5532);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5561 = INT64_MAX;
	volatile uint16_t x5562 = UINT16_MAX;
	volatile int16_t x5563 = 2;
	static int16_t x5564 = -1;
	volatile int64_t t99 = 714911670LL;

	t99 = ((x5561-(x5562>>x5563))&x5564);

	if (t99 != 9223372036854759424LL) { NG(); } else { ; }
	
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

