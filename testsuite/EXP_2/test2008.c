#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x234 = INT32_MIN;
static uint32_t t1 = 1U;
uint8_t x454 = UINT8_MAX;
uint8_t x504 = 5U;
volatile int32_t x521 = INT32_MIN;
volatile uint32_t x524 = 13U;
uint64_t t5 = 3819032307712LLU;
uint64_t x689 = 33883201111035701LLU;
uint8_t x690 = 7U;
uint16_t x856 = 15U;
volatile uint32_t t9 = 199167U;
static volatile uint64_t t10 = 38264183LLU;
uint32_t x962 = 118823U;
uint64_t x1202 = 238316390648265992LLU;
volatile int16_t x1203 = -1;
static int32_t x1204 = 3;
volatile uint64_t t16 = 386304803197091968LLU;
volatile int64_t x1217 = 305866028LL;
volatile uint64_t t17 = 268533519LLU;
uint64_t x1252 = 2LLU;
volatile uint32_t t18 = 22U;
static int8_t x1269 = -1;
static int8_t x1427 = INT8_MAX;
int32_t x1465 = 9;
static volatile uint16_t x1467 = 1925U;
int16_t x1605 = INT16_MAX;
uint32_t x1606 = UINT32_MAX;
uint8_t x1608 = 17U;
static uint16_t x1685 = 3U;
int8_t x1706 = 8;
uint64_t x1734 = 2084LLU;
static volatile int32_t x1735 = INT32_MAX;
uint64_t t28 = 2648180455LLU;
volatile uint8_t x1840 = 21U;
uint64_t t29 = 73689844469168LLU;
static int8_t x1865 = INT8_MIN;
int64_t x2017 = -1LL;
uint32_t t33 = 4211U;
static volatile uint8_t x2284 = 28U;
uint64_t t34 = 68348376047LLU;
uint16_t x2393 = 12877U;
volatile uint16_t x2394 = 45U;
volatile uint64_t t36 = 129818973457656LLU;
volatile uint16_t x2497 = UINT16_MAX;
volatile int64_t x2500 = 0LL;
int64_t x2729 = INT64_MAX;
int8_t x2851 = INT8_MIN;
int64_t x2958 = -62435LL;
volatile uint8_t x2960 = 1U;
uint64_t t44 = 224253923033676912LLU;
int8_t x3140 = 1;
volatile uint64_t t48 = UINT64_MAX;
static volatile uint8_t x3736 = 22U;
int64_t x3817 = 1LL;
uint64_t x3988 = 2LLU;
volatile uint64_t t51 = 137755602LLU;
uint8_t x4072 = 15U;
int64_t x4194 = -3819916470806755LL;
int16_t x4315 = INT16_MIN;
static uint8_t x4416 = 1U;
volatile uint16_t x4465 = UINT16_MAX;
volatile int32_t t59 = -75698;
int64_t x4667 = INT64_MAX;
static uint64_t x4761 = 5LLU;
int16_t x4769 = INT16_MAX;
static uint32_t x4771 = 4U;
static volatile uint16_t x4848 = 28U;
volatile uint64_t t66 = 842166630577LLU;
uint64_t x4981 = 110LLU;
static volatile int8_t x5019 = -1;
static volatile int16_t x5108 = 5;
uint32_t t69 = 2U;
int64_t x5149 = -476656265LL;
int16_t x5233 = -42;
int32_t x5234 = INT32_MIN;
uint64_t x5957 = 75624906445346LLU;
uint8_t x5958 = UINT8_MAX;
int16_t x5959 = INT16_MIN;
volatile uint32_t x5983 = 0U;
int32_t x5984 = 3;
uint32_t t79 = 58087180U;
static volatile uint32_t t81 = 6542374U;
uint64_t t82 = 200963984LLU;
int8_t x6238 = INT8_MAX;
volatile uint64_t t86 = 346254465960346LLU;
static volatile int8_t x6739 = 8;
uint64_t x7130 = UINT64_MAX;
uint64_t t94 = 57520188162LLU;


void f0(void) {
	volatile int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	static uint64_t x115 = UINT64_MAX;
	volatile uint8_t x116 = 0U;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x113|(x114|x115))<<x116);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x233 = 1420505U;
	uint8_t x235 = 10U;
	static int8_t x236 = 1;

	t1 = ((x233|(x234|x235))<<x236);

	if (t1 != 2841014U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x417 = 7097U;
	int32_t x418 = INT32_MIN;
	volatile int32_t x419 = 10576479;
	static uint8_t x420 = 16U;
	volatile uint32_t t2 = 14U;

	t2 = ((x417|(x418|x419))<<x420);

	if (t2 != 2080309248U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x453 = INT16_MAX;
	volatile uint16_t x455 = 6976U;
	volatile uint16_t x456 = 6U;
	volatile int32_t t3 = 260233986;

	t3 = ((x453|(x454|x455))<<x456);

	if (t3 != 2097088) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x501 = -1LL;
	uint64_t x502 = 82028149653201241LLU;
	int16_t x503 = INT16_MAX;
	static uint64_t t4 = 8682939LLU;

	t4 = ((x501|(x502|x503))<<x504);

	if (t4 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x522 = UINT64_MAX;
	int32_t x523 = INT32_MIN;

	t5 = ((x521|(x522|x523))<<x524);

	if (t5 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x691 = -1;
	static uint64_t x692 = 26LLU;
	volatile uint64_t t6 = 4212474114652951637LLU;

	t6 = ((x689|(x690|x691))<<x692);

	if (t6 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x769 = -1;
	int8_t x770 = INT8_MAX;
	uint64_t x771 = 556008543179LLU;
	int16_t x772 = 1;
	uint64_t t7 = 47034LLU;

	t7 = ((x769|(x770|x771))<<x772);

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x817 = 232770043LLU;
	int8_t x818 = INT8_MAX;
	int8_t x819 = INT8_MAX;
	static int8_t x820 = 17;
	static volatile uint64_t t8 = 192432016569666LLU;

	t8 = ((x817|(x818|x819))<<x820);

	if (t8 != 30509635600384LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x853 = 12488U;
	uint32_t x854 = 26U;
	int32_t x855 = INT32_MIN;

	t9 = ((x853|(x854|x855))<<x856);

	if (t9 != 409796608U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x885 = 58LLU;
	int32_t x886 = -559;
	volatile int32_t x887 = INT32_MIN;
	uint16_t x888 = 0U;

	t10 = ((x885|(x886|x887))<<x888);

	if (t10 != 18446744073709551099LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x889 = 3951U;
	uint64_t x890 = UINT64_MAX;
	static uint16_t x891 = UINT16_MAX;
	uint64_t x892 = 53LLU;
	volatile uint64_t t11 = 7811310307LLU;

	t11 = ((x889|(x890|x891))<<x892);

	if (t11 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x961 = -462877119;
	int16_t x963 = -1398;
	int8_t x964 = 5;
	static uint32_t t12 = 548390235U;

	t12 = ((x961|(x962|x963))<<x964);

	if (t12 != 4294958560U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x981 = INT64_MAX;
	volatile uint64_t x982 = 766672504LLU;
	uint64_t x983 = 173152918732472LLU;
	int16_t x984 = 0;
	volatile uint64_t t13 = 28292616440315456LLU;

	t13 = ((x981|(x982|x983))<<x984);

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x1089 = -143;
	int64_t x1090 = INT64_MAX;
	static volatile uint64_t x1091 = 123024LLU;
	uint16_t x1092 = 3U;
	volatile uint64_t t14 = 71LLU;

	t14 = ((x1089|(x1090|x1091))<<x1092);

	if (t14 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x1201 = -1LL;
	volatile uint64_t t15 = 153LLU;

	t15 = ((x1201|(x1202|x1203))<<x1204);

	if (t15 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1209 = 34727951812608912LLU;
	volatile int16_t x1210 = -1;
	volatile int32_t x1211 = INT32_MIN;
	int32_t x1212 = 1;

	t16 = ((x1209|(x1210|x1211))<<x1212);

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1218 = 3LLU;
	uint64_t x1219 = UINT64_MAX;
	int8_t x1220 = 1;

	t17 = ((x1217|(x1218|x1219))<<x1220);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1249 = 407873U;
	int16_t x1250 = INT16_MIN;
	int8_t x1251 = INT8_MIN;

	t18 = ((x1249|(x1250|x1251))<<x1252);

	if (t18 != 4294967044U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1270 = 35U;
	uint32_t x1271 = 338U;
	volatile uint32_t x1272 = 1U;
	volatile uint32_t t19 = 291856U;

	t19 = ((x1269|(x1270|x1271))<<x1272);

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x1317 = 34U;
	int8_t x1318 = INT8_MIN;
	uint64_t x1319 = 8791021208411562LLU;
	volatile uint64_t x1320 = 1LLU;
	static volatile uint64_t t20 = 2925LLU;

	t20 = ((x1317|(x1318|x1319))<<x1320);

	if (t20 != 18446744073709551444LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1397 = 340946072709575846LLU;
	uint32_t x1398 = UINT32_MAX;
	static volatile int64_t x1399 = -1LL;
	int32_t x1400 = 1;
	volatile uint64_t t21 = 6505637101760LLU;

	t21 = ((x1397|(x1398|x1399))<<x1400);

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1425 = UINT8_MAX;
	int8_t x1426 = INT8_MAX;
	uint8_t x1428 = 0U;
	static volatile int32_t t22 = -226158951;

	t22 = ((x1425|(x1426|x1427))<<x1428);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1466 = UINT32_MAX;
	static int8_t x1468 = 3;
	static uint32_t t23 = 1594337U;

	t23 = ((x1465|(x1466|x1467))<<x1468);

	if (t23 != 4294967288U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1607 = -1;
	static volatile uint32_t t24 = 532194954U;

	t24 = ((x1605|(x1606|x1607))<<x1608);

	if (t24 != 4294836224U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1686 = 402222U;
	static int64_t x1687 = 36LL;
	volatile uint8_t x1688 = 12U;
	static volatile int64_t t25 = 125029343452823LL;

	t25 = ((x1685|(x1686|x1687))<<x1688);

	if (t25 != 1647505408LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1701 = UINT32_MAX;
	static uint32_t x1702 = UINT32_MAX;
	int8_t x1703 = INT8_MIN;
	int8_t x1704 = 0;
	uint32_t t26 = UINT32_MAX;

	t26 = ((x1701|(x1702|x1703))<<x1704);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1705 = UINT32_MAX;
	static int8_t x1707 = 0;
	int8_t x1708 = 1;
	static uint32_t t27 = 2U;

	t27 = ((x1705|(x1706|x1707))<<x1708);

	if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1733 = -10;
	uint8_t x1736 = 1U;

	t28 = ((x1733|(x1734|x1735))<<x1736);

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1837 = 0;
	volatile int16_t x1838 = -2;
	uint64_t x1839 = UINT64_MAX;

	t29 = ((x1837|(x1838|x1839))<<x1840);

	if (t29 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1866 = UINT64_MAX;
	uint8_t x1867 = UINT8_MAX;
	uint8_t x1868 = 11U;
	static uint64_t t30 = 2535823827371725254LLU;

	t30 = ((x1865|(x1866|x1867))<<x1868);

	if (t30 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2018 = UINT64_MAX;
	uint64_t x2019 = UINT64_MAX;
	uint16_t x2020 = 3U;
	uint64_t t31 = 74160947228876LLU;

	t31 = ((x2017|(x2018|x2019))<<x2020);

	if (t31 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2021 = 10059567602LLU;
	int32_t x2022 = -1;
	int64_t x2023 = 2525536058LL;
	volatile int8_t x2024 = 0;
	static uint64_t t32 = UINT64_MAX;

	t32 = ((x2021|(x2022|x2023))<<x2024);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2093 = INT16_MAX;
	static uint32_t x2094 = 1261740944U;
	volatile int8_t x2095 = -1;
	static volatile int8_t x2096 = 3;

	t33 = ((x2093|(x2094|x2095))<<x2096);

	if (t33 != 4294967288U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2281 = 202U;
	uint64_t x2282 = 54418653615376LLU;
	int16_t x2283 = INT16_MAX;

	t34 = ((x2281|(x2282|x2283))<<x2284);

	if (t34 != 16521543193670451200LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2395 = 68112037785693630LLU;
	uint16_t x2396 = 43U;
	volatile uint64_t t35 = 43436015LLU;

	t35 = ((x2393|(x2394|x2395))<<x2396);

	if (t35 != 2882294965424095232LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2465 = UINT64_MAX;
	int8_t x2466 = INT8_MIN;
	static int16_t x2467 = INT16_MIN;
	uint8_t x2468 = 18U;

	t36 = ((x2465|(x2466|x2467))<<x2468);

	if (t36 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2498 = 31974U;
	volatile int8_t x2499 = 2;
	int32_t t37 = 1;

	t37 = ((x2497|(x2498|x2499))<<x2500);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2581 = -1;
	uint64_t x2582 = 5642651141331483LLU;
	int16_t x2583 = INT16_MIN;
	uint16_t x2584 = 7U;
	uint64_t t38 = 26479296147LLU;

	t38 = ((x2581|(x2582|x2583))<<x2584);

	if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2641 = -1;
	static uint64_t x2642 = 2134580851391677LLU;
	int32_t x2643 = INT32_MAX;
	static int8_t x2644 = 5;
	volatile uint64_t t39 = 151527421184759910LLU;

	t39 = ((x2641|(x2642|x2643))<<x2644);

	if (t39 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2697 = UINT16_MAX;
	uint16_t x2698 = 268U;
	uint32_t x2699 = UINT32_MAX;
	volatile uint16_t x2700 = 5U;
	volatile uint32_t t40 = 283U;

	t40 = ((x2697|(x2698|x2699))<<x2700);

	if (t40 != 4294967264U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2730 = -392194551;
	uint64_t x2731 = 95868906700660LLU;
	uint8_t x2732 = 10U;
	volatile uint64_t t41 = 84426487LLU;

	t41 = ((x2729|(x2730|x2731))<<x2732);

	if (t41 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2849 = UINT32_MAX;
	volatile int16_t x2850 = 3477;
	uint16_t x2852 = 10U;
	uint32_t t42 = 32578U;

	t42 = ((x2849|(x2850|x2851))<<x2852);

	if (t42 != 4294966272U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2957 = 3U;
	uint64_t x2959 = 265LLU;
	uint64_t t43 = 14LLU;

	t43 = ((x2957|(x2958|x2959))<<x2960);

	if (t43 != 18446744073709427262LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3009 = 509U;
	uint64_t x3010 = UINT64_MAX;
	int64_t x3011 = -1LL;
	int8_t x3012 = 29;

	t44 = ((x3009|(x3010|x3011))<<x3012);

	if (t44 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x3053 = UINT64_MAX;
	static uint8_t x3054 = 10U;
	int32_t x3055 = INT32_MIN;
	volatile uint16_t x3056 = 2U;
	volatile uint64_t t45 = 252220254967LLU;

	t45 = ((x3053|(x3054|x3055))<<x3056);

	if (t45 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3137 = 853509208LLU;
	volatile int64_t x3138 = 12798370596783LL;
	uint64_t x3139 = 116597LLU;
	volatile uint64_t t46 = 273188762014717373LLU;

	t46 = ((x3137|(x3138|x3139))<<x3140);

	if (t46 != 25597833089022LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3209 = INT64_MIN;
	volatile int32_t x3210 = -189722;
	volatile uint64_t x3211 = 9286479931819286LLU;
	volatile int8_t x3212 = 1;
	uint64_t t47 = 841233198LLU;

	t47 = ((x3209|(x3210|x3211))<<x3212);

	if (t47 != 18446744073709273068LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3597 = UINT64_MAX;
	int8_t x3598 = INT8_MIN;
	uint8_t x3599 = UINT8_MAX;
	int64_t x3600 = 0LL;

	t48 = ((x3597|(x3598|x3599))<<x3600);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x3733 = INT16_MIN;
	static uint64_t x3734 = UINT64_MAX;
	int16_t x3735 = 0;
	volatile uint64_t t49 = 95LLU;

	t49 = ((x3733|(x3734|x3735))<<x3736);

	if (t49 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3818 = 1977LLU;
	int16_t x3819 = 3367;
	uint8_t x3820 = 31U;
	uint64_t t50 = 1816741273894LLU;

	t50 = ((x3817|(x3818|x3819))<<x3820);

	if (t50 != 8656506585088LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3985 = 1398104337684LLU;
	int32_t x3986 = INT32_MIN;
	int8_t x3987 = -1;

	t51 = ((x3985|(x3986|x3987))<<x3988);

	if (t51 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x4069 = UINT64_MAX;
	int32_t x4070 = INT32_MIN;
	uint16_t x4071 = UINT16_MAX;
	static uint64_t t52 = 847359105844931308LLU;

	t52 = ((x4069|(x4070|x4071))<<x4072);

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4193 = 237LLU;
	int64_t x4195 = -1LL;
	int8_t x4196 = 13;
	uint64_t t53 = 144788LLU;

	t53 = ((x4193|(x4194|x4195))<<x4196);

	if (t53 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4249 = 24U;
	static int8_t x4250 = INT8_MAX;
	int16_t x4251 = INT16_MAX;
	uint32_t x4252 = 8U;
	volatile int32_t t54 = 408;

	t54 = ((x4249|(x4250|x4251))<<x4252);

	if (t54 != 8388352) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x4313 = 11U;
	static volatile uint64_t x4314 = 73LLU;
	uint8_t x4316 = 11U;
	static uint64_t t55 = 241355119632012859LLU;

	t55 = ((x4313|(x4314|x4315))<<x4316);

	if (t55 != 18446744073642596352LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4337 = 143860426362LLU;
	int16_t x4338 = -1;
	volatile int32_t x4339 = -1;
	volatile uint16_t x4340 = 1U;
	uint64_t t56 = 1299713758985039182LLU;

	t56 = ((x4337|(x4338|x4339))<<x4340);

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x4413 = INT16_MIN;
	uint64_t x4414 = UINT64_MAX;
	int16_t x4415 = -1;
	uint64_t t57 = 38440915LLU;

	t57 = ((x4413|(x4414|x4415))<<x4416);

	if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4421 = 1459380202719LLU;
	uint64_t x4422 = 802LLU;
	volatile uint8_t x4423 = 2U;
	uint8_t x4424 = 2U;
	uint64_t t58 = 7614020215367264LLU;

	t58 = ((x4421|(x4422|x4423))<<x4424);

	if (t58 != 5837520814076LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4466 = UINT16_MAX;
	static int16_t x4467 = 14;
	uint16_t x4468 = 1U;

	t59 = ((x4465|(x4466|x4467))<<x4468);

	if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4557 = INT8_MAX;
	int64_t x4558 = 112482090597377252LL;
	static uint32_t x4559 = 54U;
	uint8_t x4560 = 0U;
	int64_t t60 = -3037999LL;

	t60 = ((x4557|(x4558|x4559))<<x4560);

	if (t60 != 112482090597377279LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4613 = 3715;
	uint64_t x4614 = 17118145LLU;
	int8_t x4615 = INT8_MIN;
	uint8_t x4616 = 2U;
	volatile uint64_t t61 = 24LLU;

	t61 = ((x4613|(x4614|x4615))<<x4616);

	if (t61 != 18446744073709551372LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4665 = -1;
	uint64_t x4666 = UINT64_MAX;
	static uint8_t x4668 = 1U;
	volatile uint64_t t62 = 5974920900683152935LLU;

	t62 = ((x4665|(x4666|x4667))<<x4668);

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x4701 = INT8_MAX;
	uint64_t x4702 = 1LLU;
	uint32_t x4703 = 309995931U;
	static volatile uint16_t x4704 = 2U;
	volatile uint64_t t63 = 103980272LLU;

	t63 = ((x4701|(x4702|x4703))<<x4704);

	if (t63 != 1239984124LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4762 = INT8_MIN;
	static int16_t x4763 = INT16_MIN;
	uint8_t x4764 = 6U;
	volatile uint64_t t64 = 0LLU;

	t64 = ((x4761|(x4762|x4763))<<x4764);

	if (t64 != 18446744073709543744LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x4770 = 8701LLU;
	volatile uint64_t x4772 = 1LLU;
	uint64_t t65 = 236463453998LLU;

	t65 = ((x4769|(x4770|x4771))<<x4772);

	if (t65 != 65534LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4845 = UINT64_MAX;
	volatile int32_t x4846 = INT32_MIN;
	int16_t x4847 = INT16_MAX;

	t66 = ((x4845|(x4846|x4847))<<x4848);

	if (t66 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4982 = -1;
	uint8_t x4983 = 31U;
	static volatile int8_t x4984 = 3;
	static volatile uint64_t t67 = 3297236241LLU;

	t67 = ((x4981|(x4982|x4983))<<x4984);

	if (t67 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5017 = 165275LLU;
	int64_t x5018 = INT64_MIN;
	uint8_t x5020 = 29U;
	uint64_t t68 = 298237877647LLU;

	t68 = ((x5017|(x5018|x5019))<<x5020);

	if (t68 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x5105 = UINT32_MAX;
	uint32_t x5106 = 3091442U;
	uint32_t x5107 = 99600851U;

	t69 = ((x5105|(x5106|x5107))<<x5108);

	if (t69 != 4294967264U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x5133 = 1737846LLU;
	int32_t x5134 = INT32_MIN;
	int16_t x5135 = -1;
	uint8_t x5136 = 36U;
	volatile uint64_t t70 = 3404420LLU;

	t70 = ((x5133|(x5134|x5135))<<x5136);

	if (t70 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5150 = INT16_MIN;
	uint64_t x5151 = UINT64_MAX;
	int16_t x5152 = 14;
	volatile uint64_t t71 = 102461LLU;

	t71 = ((x5149|(x5150|x5151))<<x5152);

	if (t71 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x5235 = UINT32_MAX;
	static volatile uint16_t x5236 = 5U;
	uint32_t t72 = 135U;

	t72 = ((x5233|(x5234|x5235))<<x5236);

	if (t72 != 4294967264U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5413 = UINT8_MAX;
	volatile int8_t x5414 = 2;
	uint8_t x5415 = 3U;
	uint8_t x5416 = 12U;
	int32_t t73 = 1755;

	t73 = ((x5413|(x5414|x5415))<<x5416);

	if (t73 != 1044480) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5461 = INT16_MAX;
	static int16_t x5462 = -21;
	uint32_t x5463 = UINT32_MAX;
	uint64_t x5464 = 1LLU;
	static volatile uint32_t t74 = 886253U;

	t74 = ((x5461|(x5462|x5463))<<x5464);

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5709 = -1;
	int16_t x5710 = -1;
	static uint64_t x5711 = 5097163LLU;
	static int8_t x5712 = 1;
	uint64_t t75 = 658032290290607842LLU;

	t75 = ((x5709|(x5710|x5711))<<x5712);

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x5765 = 15;
	int8_t x5766 = 24;
	uint8_t x5767 = 0U;
	uint64_t x5768 = 7LLU;
	int32_t t76 = 231571968;

	t76 = ((x5765|(x5766|x5767))<<x5768);

	if (t76 != 3968) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5960 = 23;
	static uint64_t t77 = 2053536653LLU;

	t77 = ((x5957|(x5958|x5959))<<x5960);

	if (t77 != 18446743977064398848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5981 = INT16_MIN;
	int32_t x5982 = -1;
	volatile uint32_t t78 = 1227019747U;

	t78 = ((x5981|(x5982|x5983))<<x5984);

	if (t78 != 4294967288U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x6005 = 5878U;
	int8_t x6006 = -1;
	static int8_t x6007 = INT8_MAX;
	static int8_t x6008 = 28;

	t79 = ((x6005|(x6006|x6007))<<x6008);

	if (t79 != 4026531840U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x6069 = 501;
	uint32_t x6070 = 269U;
	static int8_t x6071 = INT8_MIN;
	static int8_t x6072 = 4;
	volatile uint32_t t80 = 4047459U;

	t80 = ((x6069|(x6070|x6071))<<x6072);

	if (t80 != 4294967248U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x6125 = -1;
	uint16_t x6126 = 8U;
	uint32_t x6127 = 30U;
	uint32_t x6128 = 14U;

	t81 = ((x6125|(x6126|x6127))<<x6128);

	if (t81 != 4294950912U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x6129 = -376471;
	uint8_t x6130 = 119U;
	uint64_t x6131 = 19LLU;
	int8_t x6132 = 31;

	t82 = ((x6129|(x6130|x6131))<<x6132);

	if (t82 != 18445935655637745664LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x6237 = 70;
	static volatile uint32_t x6239 = UINT32_MAX;
	int32_t x6240 = 1;
	volatile uint32_t t83 = 25622662U;

	t83 = ((x6237|(x6238|x6239))<<x6240);

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x6261 = UINT32_MAX;
	int8_t x6262 = INT8_MAX;
	uint16_t x6263 = UINT16_MAX;
	volatile uint8_t x6264 = 0U;
	uint32_t t84 = UINT32_MAX;

	t84 = ((x6261|(x6262|x6263))<<x6264);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x6533 = INT64_MIN;
	volatile int8_t x6534 = INT8_MAX;
	uint64_t x6535 = 2609988698757LLU;
	uint8_t x6536 = 27U;
	uint64_t t85 = 101910218LLU;

	t85 = ((x6533|(x6534|x6535))<<x6536);

	if (t85 != 18265359942443597824LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6649 = 167921380LLU;
	volatile int32_t x6650 = INT32_MIN;
	uint64_t x6651 = 1426824760157739083LLU;
	uint8_t x6652 = 0U;

	t86 = ((x6649|(x6650|x6651))<<x6652);

	if (t86 != 18446744072836046575LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6737 = UINT8_MAX;
	volatile uint8_t x6738 = UINT8_MAX;
	int8_t x6740 = 7;
	volatile int32_t t87 = 115533;

	t87 = ((x6737|(x6738|x6739))<<x6740);

	if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6757 = 35869793088LLU;
	uint64_t x6758 = 457320107002101071LLU;
	int32_t x6759 = INT32_MIN;
	static uint32_t x6760 = 41U;
	volatile uint64_t t88 = 60350150132LLU;

	t88 = ((x6757|(x6758|x6759))<<x6760);

	if (t88 != 287841149035479040LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x6789 = 1558LLU;
	uint16_t x6790 = UINT16_MAX;
	int8_t x6791 = INT8_MIN;
	volatile uint16_t x6792 = 3U;
	volatile uint64_t t89 = 13550194LLU;

	t89 = ((x6789|(x6790|x6791))<<x6792);

	if (t89 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x6837 = 15481251394LLU;
	int16_t x6838 = -11;
	int64_t x6839 = 4098932278LL;
	static int8_t x6840 = 0;
	uint64_t t90 = 122107906LLU;

	t90 = ((x6837|(x6838|x6839))<<x6840);

	if (t90 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x7001 = 972141839438LL;
	int8_t x7002 = 1;
	volatile uint16_t x7003 = 446U;
	volatile int8_t x7004 = 17;
	static volatile int64_t t91 = -862909809LL;

	t91 = ((x7001|(x7002|x7003))<<x7004);

	if (t91 != 127420575235571712LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x7129 = UINT64_MAX;
	uint32_t x7131 = 944U;
	uint8_t x7132 = 14U;
	uint64_t t92 = 12881920443LLU;

	t92 = ((x7129|(x7130|x7131))<<x7132);

	if (t92 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x7169 = 18150U;
	int32_t x7170 = INT32_MIN;
	static int32_t x7171 = INT32_MAX;
	uint8_t x7172 = 13U;
	uint32_t t93 = 80U;

	t93 = ((x7169|(x7170|x7171))<<x7172);

	if (t93 != 4294959104U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x7289 = 959724635;
	uint64_t x7290 = UINT64_MAX;
	int32_t x7291 = INT32_MIN;
	int8_t x7292 = 11;

	t94 = ((x7289|(x7290|x7291))<<x7292);

	if (t94 != 18446744073709549568LLU) { NG(); } else { ; }
	
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


    return 0;
}

