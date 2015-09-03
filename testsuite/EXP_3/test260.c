#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 431632288751LL;
volatile uint64_t t5 = 4071584LLU;
int32_t x364 = INT32_MIN;
uint64_t t6 = 28LLU;
int16_t x435 = INT16_MAX;
volatile int8_t x504 = INT8_MIN;
int64_t x533 = INT64_MAX;
int64_t x536 = -1LL;
int64_t t11 = -938126368LL;
static volatile uint16_t x774 = 2U;
static int16_t x775 = -1;
uint8_t x803 = 1U;
static volatile int64_t x804 = INT64_MAX;
uint8_t x806 = 0U;
int32_t x824 = INT32_MIN;
volatile uint32_t t16 = 0U;
uint32_t x853 = UINT32_MAX;
static uint8_t x854 = 0U;
uint8_t x906 = 0U;
static volatile int32_t x908 = INT32_MIN;
int32_t x935 = -5836652;
volatile int32_t t22 = 589644;
static int8_t x1275 = 0;
static volatile int32_t t25 = 874601218;
volatile uint64_t t26 = 919436530525LLU;
volatile uint8_t x1646 = 0U;
uint32_t x1653 = 1223041965U;
int8_t x1655 = -1;
uint32_t x1897 = 602410U;
uint32_t t31 = 3U;
uint16_t x1926 = 2U;
volatile int8_t x1927 = INT8_MIN;
static uint8_t x2114 = 0U;
static int8_t x2291 = -1;
int32_t x2292 = -129;
volatile uint8_t x2382 = 41U;
uint32_t x2384 = 112U;
uint32_t x2525 = 76422621U;
uint16_t x2526 = 0U;
volatile int16_t x2528 = INT16_MAX;
int64_t x2537 = 2111179065174926429LL;
int16_t x2538 = 0;
static uint16_t x2539 = 1U;
int64_t t42 = 10740308296632LL;
uint64_t t43 = 630LLU;
static uint16_t x2867 = 93U;
int8_t x2971 = INT8_MIN;
volatile uint64_t t47 = 801LLU;
static uint32_t x3104 = UINT32_MAX;
static volatile int64_t x3153 = INT64_MAX;
uint64_t x3156 = 169842457LLU;
uint32_t x3303 = 1032602019U;
volatile int8_t x3362 = 5;
int64_t x3364 = INT64_MIN;
static uint8_t x3428 = 0U;
static uint32_t x3491 = UINT32_MAX;
static int64_t x3492 = -1LL;
uint64_t x3781 = 6931404626LLU;
int32_t x3783 = 77212725;
uint16_t x3798 = 6U;
uint16_t x3877 = 1051U;
volatile int32_t x3879 = 1;
volatile int64_t x3903 = -1LL;
int8_t x4016 = INT8_MAX;
static int64_t t64 = -1LL;
uint64_t x4089 = 8362125090LLU;
static int8_t x4092 = -1;
static uint8_t x4158 = 0U;
static uint8_t x4160 = UINT8_MAX;
uint8_t x4205 = UINT8_MAX;
uint64_t x4262 = 16LLU;
static int8_t x4263 = INT8_MIN;
volatile uint32_t t71 = 3454U;
int16_t x4466 = 14;
volatile uint8_t x4482 = 1U;
int8_t x4484 = -1;
int16_t x4534 = 8;
int64_t x4710 = 1LL;
static int8_t x4752 = INT8_MIN;
int64_t t79 = -114725987406211LL;
volatile int16_t x4789 = 0;
uint32_t x4790 = 0U;
uint32_t x5033 = 27957147U;
uint16_t x5323 = UINT16_MAX;
uint16_t x5370 = 1U;
volatile int64_t x5485 = INT64_MAX;
uint8_t x5486 = 1U;
int8_t x5494 = 14;
uint8_t x5611 = 18U;
uint8_t x5714 = 28U;
uint32_t x5768 = 15242U;
uint16_t x5777 = 287U;
int16_t x5779 = -1110;
uint16_t x5903 = 2U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint8_t x2 = 5U;
	static volatile int32_t x3 = INT32_MAX;
	int16_t x4 = 950;

	t0 = ((x1>>x2)^(x3-x4));

	if (t0 != 288230374004229046LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x61 = INT8_MAX;
	volatile uint8_t x62 = 8U;
	static int16_t x63 = 8344;
	static volatile uint16_t x64 = 20U;
	int32_t t1 = 123928061;

	t1 = ((x61>>x62)^(x63-x64));

	if (t1 != 8324) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x85 = UINT32_MAX;
	uint32_t x86 = 18U;
	static volatile int16_t x87 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;
	volatile uint32_t t2 = 28U;

	t2 = ((x85>>x86)^(x87-x88));

	if (t2 != 16383U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x101 = 964223843LLU;
	int16_t x102 = 11;
	uint8_t x103 = 40U;
	volatile int32_t x104 = -303319;
	volatile uint64_t t3 = 9210724347299028058LLU;

	t3 = ((x101>>x102)^(x103-x104));

	if (t3 != 233443LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x109 = 2;
	volatile uint16_t x110 = 2U;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 166888815147112663LLU;
	uint64_t t4 = 136403506599744LLU;

	t4 = ((x109>>x110)^(x111-x112));

	if (t4 != 18279855258562439208LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x145 = 7917910872373866LLU;
	int32_t x146 = 0;
	int16_t x147 = INT16_MIN;
	static int16_t x148 = INT16_MAX;

	t5 = ((x145>>x146)^(x147-x148));

	if (t5 != 18438826162837142123LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x361 = 1;
	static int16_t x362 = 0;
	uint64_t x363 = 14091477LLU;

	t6 = ((x361>>x362)^(x363-x364));

	if (t6 != 2161575124LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = 23;
	int8_t x395 = INT8_MAX;
	int16_t x396 = 1;
	volatile uint64_t t7 = 7703069703LLU;

	t7 = ((x393>>x394)^(x395-x396));

	if (t7 != 2199023255425LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x409 = 23;
	volatile int16_t x410 = 1;
	uint8_t x411 = 0U;
	volatile int16_t x412 = 86;
	int32_t t8 = 115658332;

	t8 = ((x409>>x410)^(x411-x412));

	if (t8 != -95) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x433 = INT64_MAX;
	uint8_t x434 = 13U;
	uint32_t x436 = 78386390U;
	volatile int64_t t9 = -136171250064LL;

	t9 = ((x433>>x434)^(x435-x436));

	if (t9 != 1125895690228950LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x501 = INT16_MAX;
	int64_t x502 = 1LL;
	static int16_t x503 = INT16_MAX;
	static int32_t t10 = -63776;

	t10 = ((x501>>x502)^(x503-x504));

	if (t10 != 49024) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x534 = 2U;
	int64_t x535 = 2359972302LL;

	t11 = ((x533>>x534)^(x535-x536));

	if (t11 != 2305843006853721648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x665 = INT64_MAX;
	volatile int8_t x666 = 1;
	uint16_t x667 = 5657U;
	static int8_t x668 = INT8_MIN;
	static volatile int64_t t12 = 129201925126659LL;

	t12 = ((x665>>x666)^(x667-x668));

	if (t12 != 4611686018427382118LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x773 = UINT64_MAX;
	uint64_t x776 = 87207937307214LLU;
	volatile uint64_t t13 = 622902883696915203LLU;

	t13 = ((x773>>x774)^(x775-x776));

	if (t13 != 13835145263219470926LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x801 = 18090911590LLU;
	volatile uint8_t x802 = 2U;
	uint64_t t14 = 703623405772816794LLU;

	t14 = ((x801>>x802)^(x803-x804));

	if (t14 != 9223372041377503707LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x805 = UINT16_MAX;
	static uint16_t x807 = 1213U;
	uint8_t x808 = 62U;
	int32_t t15 = -195756;

	t15 = ((x805>>x806)^(x807-x808));

	if (t15 != 64384) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x821 = INT16_MAX;
	uint8_t x822 = 4U;
	static uint32_t x823 = UINT32_MAX;

	t16 = ((x821>>x822)^(x823-x824));

	if (t16 != 2147481600U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x855 = 8;
	uint32_t x856 = UINT32_MAX;
	uint32_t t17 = 16638666U;

	t17 = ((x853>>x854)^(x855-x856));

	if (t17 != 4294967286U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x905 = INT64_MAX;
	volatile int8_t x907 = -1;
	int64_t t18 = -991037772414LL;

	t18 = ((x905>>x906)^(x907-x908));

	if (t18 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x933 = 362300657U;
	int16_t x934 = 0;
	uint8_t x936 = 115U;
	uint32_t t19 = 1U;

	t19 = ((x933>>x934)^(x935-x936));

	if (t19 != 3929978064U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1017 = 48U;
	volatile uint16_t x1018 = 2U;
	uint64_t x1019 = 130038033082076641LLU;
	int8_t x1020 = INT8_MIN;
	volatile uint64_t t20 = 7998167827177LLU;

	t20 = ((x1017>>x1018)^(x1019-x1020));

	if (t20 != 130038033082076781LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1021 = 341913010;
	int64_t x1022 = 4LL;
	int32_t x1023 = INT32_MAX;
	uint8_t x1024 = 50U;
	int32_t t21 = -342;

	t21 = ((x1021>>x1022)^(x1023-x1024));

	if (t21 != 2126114070) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1033 = 3722;
	uint32_t x1034 = 11U;
	volatile int16_t x1035 = 1111;
	int32_t x1036 = INT32_MAX;

	t22 = ((x1033>>x1034)^(x1035-x1036));

	if (t22 != -2147482535) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1101 = 17U;
	uint8_t x1102 = 30U;
	static volatile int16_t x1103 = INT16_MIN;
	int8_t x1104 = INT8_MIN;
	int32_t t23 = 421148;

	t23 = ((x1101>>x1102)^(x1103-x1104));

	if (t23 != -32640) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1273 = 0U;
	volatile int8_t x1274 = 3;
	uint64_t x1276 = 324293916552757LLU;
	static volatile uint64_t t24 = 4122864LLU;

	t24 = ((x1273>>x1274)^(x1275-x1276));

	if (t24 != 18446419779792998859LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1325 = INT32_MAX;
	int8_t x1326 = 1;
	int32_t x1327 = INT32_MIN;
	int8_t x1328 = INT8_MIN;

	t25 = ((x1325>>x1326)^(x1327-x1328));

	if (t25 != -1073741953) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1393 = 85191913LLU;
	static uint16_t x1394 = 1U;
	static volatile int8_t x1395 = -1;
	static int32_t x1396 = 7765100;

	t26 = ((x1393>>x1394)^(x1395-x1396));

	if (t26 != 18446744073659250151LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1509 = 0U;
	static volatile int8_t x1510 = 0;
	int64_t x1511 = -96176LL;
	int16_t x1512 = INT16_MIN;
	int64_t t27 = 12832402648182190LL;

	t27 = ((x1509>>x1510)^(x1511-x1512));

	if (t27 != -63408LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1645 = 21LLU;
	int16_t x1647 = -741;
	static int32_t x1648 = INT32_MIN;
	uint64_t t28 = 558LLU;

	t28 = ((x1645>>x1646)^(x1647-x1648));

	if (t28 != 2147482894LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1654 = 24U;
	int16_t x1656 = INT16_MIN;
	uint32_t t29 = 951806U;

	t29 = ((x1653>>x1654)^(x1655-x1656));

	if (t29 != 32695U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1745 = 16U;
	volatile int8_t x1746 = 1;
	volatile int64_t x1747 = INT64_MIN;
	volatile int8_t x1748 = INT8_MIN;
	volatile int64_t t30 = -36897492266LL;

	t30 = ((x1745>>x1746)^(x1747-x1748));

	if (t30 != -9223372036854775672LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1898 = 0U;
	int16_t x1899 = -1;
	int16_t x1900 = INT16_MIN;

	t31 = ((x1897>>x1898)^(x1899-x1900));

	if (t31 != 610005U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1925 = 17U;
	int32_t x1928 = 264558886;
	int32_t t32 = -41571495;

	t32 = ((x1925>>x1926)^(x1927-x1928));

	if (t32 != -264559010) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2085 = 28U;
	int8_t x2086 = 2;
	volatile int16_t x2087 = INT16_MAX;
	int32_t x2088 = 2984174;
	volatile uint32_t t33 = 118417U;

	t33 = ((x2085>>x2086)^(x2087-x2088));

	if (t33 != 4292015894U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2113 = INT64_MAX;
	volatile uint8_t x2115 = UINT8_MAX;
	int32_t x2116 = -5876;
	int64_t t34 = -881693559382LL;

	t34 = ((x2113>>x2114)^(x2115-x2116));

	if (t34 != 9223372036854769676LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2177 = UINT8_MAX;
	volatile uint16_t x2178 = 5U;
	uint8_t x2179 = 1U;
	uint16_t x2180 = UINT16_MAX;
	volatile int32_t t35 = 19129;

	t35 = ((x2177>>x2178)^(x2179-x2180));

	if (t35 != -65531) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2289 = INT32_MAX;
	int8_t x2290 = 0;
	volatile int32_t t36 = -228019;

	t36 = ((x2289>>x2290)^(x2291-x2292));

	if (t36 != 2147483519) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2317 = UINT32_MAX;
	static uint16_t x2318 = 5U;
	volatile uint64_t x2319 = UINT64_MAX;
	static volatile int64_t x2320 = INT64_MIN;
	static uint64_t t37 = 34090157246416LLU;

	t37 = ((x2317>>x2318)^(x2319-x2320));

	if (t37 != 9223372036720558080LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2365 = INT64_MAX;
	static volatile int8_t x2366 = 14;
	uint32_t x2367 = UINT32_MAX;
	static int16_t x2368 = INT16_MIN;
	static volatile int64_t t38 = 13LL;

	t38 = ((x2365>>x2366)^(x2367-x2368));

	if (t38 != 562949953388544LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2381 = 19856801LLU;
	static int16_t x2383 = INT16_MIN;
	uint64_t t39 = 6067019052904612LLU;

	t39 = ((x2381>>x2382)^(x2383-x2384));

	if (t39 != 4294934416LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2527 = -3;
	uint32_t t40 = 8436049U;

	t40 = ((x2525>>x2526)^(x2527-x2528));

	if (t40 != 4218511907U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x2540 = 21885575LLU;
	static volatile uint64_t t41 = 37687580810736058LLU;

	t41 = ((x2537>>x2538)^(x2539-x2540));

	if (t41 != 16335565008522717479LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2621 = UINT8_MAX;
	uint16_t x2622 = 8U;
	int16_t x2623 = -9;
	int64_t x2624 = INT64_MIN;

	t42 = ((x2621>>x2622)^(x2623-x2624));

	if (t42 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2821 = 6211608LLU;
	uint32_t x2822 = 55U;
	volatile int16_t x2823 = INT16_MAX;
	int32_t x2824 = -1;

	t43 = ((x2821>>x2822)^(x2823-x2824));

	if (t43 != 32768LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2865 = 4U;
	uint8_t x2866 = 10U;
	int64_t x2868 = -1LL;
	volatile int64_t t44 = 14975902286LL;

	t44 = ((x2865>>x2866)^(x2867-x2868));

	if (t44 != 94LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2945 = 2U;
	int64_t x2946 = 1LL;
	int64_t x2947 = -13026LL;
	uint16_t x2948 = UINT16_MAX;
	int64_t t45 = 100854770067640065LL;

	t45 = ((x2945>>x2946)^(x2947-x2948));

	if (t45 != -78562LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2969 = 2501;
	static int8_t x2970 = 8;
	int16_t x2972 = -1;
	int32_t t46 = -83;

	t46 = ((x2969>>x2970)^(x2971-x2972));

	if (t46 != -120) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3073 = 10863U;
	static int32_t x3074 = 7;
	uint64_t x3075 = UINT64_MAX;
	int64_t x3076 = INT64_MAX;

	t47 = ((x3073>>x3074)^(x3075-x3076));

	if (t47 != 9223372036854775892LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3101 = 1;
	uint8_t x3102 = 29U;
	volatile int64_t x3103 = -164LL;
	volatile int64_t t48 = -314780LL;

	t48 = ((x3101>>x3102)^(x3103-x3104));

	if (t48 != -4294967459LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3133 = 108678040145998LLU;
	static uint16_t x3134 = 2U;
	int32_t x3135 = 1266;
	static uint64_t x3136 = 17LLU;
	volatile uint64_t t49 = 0LLU;

	t49 = ((x3133>>x3134)^(x3135-x3136));

	if (t49 != 27169510035698LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x3154 = 7LL;
	int16_t x3155 = INT16_MIN;
	uint64_t t50 = 67918971492979LLU;

	t50 = ((x3153>>x3154)^(x3155-x3156));

	if (t50 != 18374686479841498904LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3197 = UINT32_MAX;
	int8_t x3198 = 0;
	int16_t x3199 = 80;
	volatile int8_t x3200 = -1;
	static uint32_t t51 = 11271573U;

	t51 = ((x3197>>x3198)^(x3199-x3200));

	if (t51 != 4294967214U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3301 = INT32_MAX;
	uint8_t x3302 = 1U;
	uint16_t x3304 = 292U;
	uint32_t t52 = 38U;

	t52 = ((x3301>>x3302)^(x3303-x3304));

	if (t52 != 41140096U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3361 = INT16_MAX;
	static uint64_t x3363 = UINT64_MAX;
	volatile uint64_t t53 = 2149703LLU;

	t53 = ((x3361>>x3362)^(x3363-x3364));

	if (t53 != 9223372036854774784LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3385 = INT8_MAX;
	uint64_t x3386 = 2LLU;
	volatile uint32_t x3387 = 11003U;
	int16_t x3388 = -16263;
	static uint32_t t54 = 1925U;

	t54 = ((x3385>>x3386)^(x3387-x3388));

	if (t54 != 27293U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3425 = 0;
	int8_t x3426 = 1;
	volatile int32_t x3427 = -1;
	volatile int32_t t55 = -196418;

	t55 = ((x3425>>x3426)^(x3427-x3428));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3429 = UINT32_MAX;
	volatile uint8_t x3430 = 1U;
	int8_t x3431 = INT8_MAX;
	uint16_t x3432 = 4346U;
	uint32_t t56 = 1U;

	t56 = ((x3429>>x3430)^(x3431-x3432));

	if (t56 != 2147487866U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3489 = INT64_MAX;
	int8_t x3490 = 11;
	int64_t t57 = -12904965200LL;

	t57 = ((x3489>>x3490)^(x3491-x3492));

	if (t57 != 4503595332403199LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x3782 = 9;
	int32_t x3784 = -1;
	static uint64_t t58 = 471763505440032LLU;

	t58 = ((x3781>>x3782)^(x3783-x3784));

	if (t58 != 72662621LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3797 = INT32_MAX;
	uint64_t x3799 = UINT64_MAX;
	uint16_t x3800 = 0U;
	volatile uint64_t t59 = 4154721263524LLU;

	t59 = ((x3797>>x3798)^(x3799-x3800));

	if (t59 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3809 = 2;
	volatile int8_t x3810 = 6;
	int8_t x3811 = INT8_MAX;
	uint8_t x3812 = 29U;
	int32_t t60 = 363505;

	t60 = ((x3809>>x3810)^(x3811-x3812));

	if (t60 != 98) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x3878 = 17U;
	static volatile int8_t x3880 = INT8_MAX;
	int32_t t61 = -18;

	t61 = ((x3877>>x3878)^(x3879-x3880));

	if (t61 != -126) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3901 = UINT16_MAX;
	int8_t x3902 = 30;
	static int8_t x3904 = -5;
	volatile int64_t t62 = 1125217659754170074LL;

	t62 = ((x3901>>x3902)^(x3903-x3904));

	if (t62 != 4LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x4009 = INT16_MAX;
	static uint32_t x4010 = 1U;
	int32_t x4011 = INT32_MIN;
	uint64_t x4012 = UINT64_MAX;
	uint64_t t63 = 582098001678362LLU;

	t63 = ((x4009>>x4010)^(x4011-x4012));

	if (t63 != 18446744071562084350LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x4013 = INT64_MAX;
	int8_t x4014 = 41;
	static int8_t x4015 = -49;

	t64 = ((x4013>>x4014)^(x4015-x4016));

	if (t64 != -4194129LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4090 = 16U;
	uint16_t x4091 = 0U;
	static volatile uint64_t t65 = 5028695343219LLU;

	t65 = ((x4089>>x4090)^(x4091-x4092));

	if (t65 != 127594LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4157 = INT32_MAX;
	int32_t x4159 = INT32_MAX;
	int32_t t66 = 17;

	t66 = ((x4157>>x4158)^(x4159-x4160));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4206 = 6U;
	int8_t x4207 = 10;
	static int32_t x4208 = 447;
	volatile int32_t t67 = -6786;

	t67 = ((x4205>>x4206)^(x4207-x4208));

	if (t67 != -440) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4261 = 0U;
	int32_t x4264 = -1;
	volatile int32_t t68 = -7039;

	t68 = ((x4261>>x4262)^(x4263-x4264));

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4277 = UINT8_MAX;
	static volatile uint8_t x4278 = 4U;
	int16_t x4279 = -1310;
	int8_t x4280 = INT8_MIN;
	static volatile int32_t t69 = 837552;

	t69 = ((x4277>>x4278)^(x4279-x4280));

	if (t69 != -1171) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x4309 = 0U;
	int8_t x4310 = 3;
	static uint64_t x4311 = UINT64_MAX;
	static volatile int64_t x4312 = 16462099491827599LL;
	uint64_t t70 = 3400797424044LLU;

	t70 = ((x4309>>x4310)^(x4311-x4312));

	if (t70 != 18430281974217724016LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4349 = INT8_MAX;
	static uint8_t x4350 = 10U;
	static uint32_t x4351 = 13018U;
	static volatile int16_t x4352 = -1;

	t71 = ((x4349>>x4350)^(x4351-x4352));

	if (t71 != 13019U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4465 = INT32_MAX;
	int32_t x4467 = INT32_MIN;
	static int16_t x4468 = -1;
	volatile int32_t t72 = 3498;

	t72 = ((x4465>>x4466)^(x4467-x4468));

	if (t72 != -2147352578) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4469 = 12U;
	uint8_t x4470 = 8U;
	int8_t x4471 = INT8_MAX;
	volatile uint16_t x4472 = 7U;
	int32_t t73 = 509933;

	t73 = ((x4469>>x4470)^(x4471-x4472));

	if (t73 != 120) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4481 = UINT32_MAX;
	int64_t x4483 = -1LL;
	volatile int64_t t74 = 10LL;

	t74 = ((x4481>>x4482)^(x4483-x4484));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4533 = 0;
	uint16_t x4535 = 15431U;
	int16_t x4536 = INT16_MIN;
	int32_t t75 = -855688742;

	t75 = ((x4533>>x4534)^(x4535-x4536));

	if (t75 != 48199) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4569 = UINT32_MAX;
	int32_t x4570 = 1;
	volatile uint32_t x4571 = 13518724U;
	int32_t x4572 = -1;
	static uint32_t t76 = 17375352U;

	t76 = ((x4569>>x4570)^(x4571-x4572));

	if (t76 != 2133964922U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4661 = INT64_MAX;
	volatile uint8_t x4662 = 18U;
	int8_t x4663 = INT8_MIN;
	int32_t x4664 = -6952659;
	volatile int64_t t77 = -201451LL;

	t77 = ((x4661>>x4662)^(x4663-x4664));

	if (t77 != 35184365136300LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4709 = UINT16_MAX;
	int16_t x4711 = 29;
	int32_t x4712 = -1;
	volatile int32_t t78 = 1205;

	t78 = ((x4709>>x4710)^(x4711-x4712));

	if (t78 != 32737) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4749 = 11279LL;
	uint8_t x4750 = 0U;
	volatile int32_t x4751 = INT32_MIN;

	t79 = ((x4749>>x4750)^(x4751-x4752));

	if (t79 != -2147472241LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4791 = INT16_MIN;
	int8_t x4792 = -1;
	static int32_t t80 = -24983;

	t80 = ((x4789>>x4790)^(x4791-x4792));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4825 = 0U;
	uint8_t x4826 = 9U;
	static int8_t x4827 = INT8_MIN;
	int16_t x4828 = -910;
	int32_t t81 = 6;

	t81 = ((x4825>>x4826)^(x4827-x4828));

	if (t81 != 782) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5034 = 0;
	uint8_t x5035 = 126U;
	volatile int16_t x5036 = INT16_MIN;
	uint32_t t82 = 185990869U;

	t82 = ((x5033>>x5034)^(x5035-x5036));

	if (t82 != 27924453U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x5297 = 14;
	uint8_t x5298 = 0U;
	uint64_t x5299 = UINT64_MAX;
	static uint32_t x5300 = 194U;
	volatile uint64_t t83 = 3942937131812548LLU;

	t83 = ((x5297>>x5298)^(x5299-x5300));

	if (t83 != 18446744073709551411LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x5321 = INT32_MAX;
	uint8_t x5322 = 0U;
	uint32_t x5324 = 17U;
	volatile uint32_t t84 = 1741U;

	t84 = ((x5321>>x5322)^(x5323-x5324));

	if (t84 != 2147418129U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x5341 = 179U;
	int32_t x5342 = 1;
	int32_t x5343 = INT32_MAX;
	volatile int8_t x5344 = INT8_MAX;
	int32_t t85 = -9997;

	t85 = ((x5341>>x5342)^(x5343-x5344));

	if (t85 != 2147483609) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5345 = 46;
	int8_t x5346 = 1;
	uint32_t x5347 = 8547773U;
	int8_t x5348 = INT8_MAX;
	uint32_t t86 = 0U;

	t86 = ((x5345>>x5346)^(x5347-x5348));

	if (t86 != 8547625U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5369 = 4443291LL;
	uint64_t x5371 = UINT64_MAX;
	uint32_t x5372 = 2618U;
	volatile uint64_t t87 = 107801LLU;

	t87 = ((x5369>>x5370)^(x5371-x5372));

	if (t87 != 18446744073707328392LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5441 = UINT32_MAX;
	uint16_t x5442 = 15U;
	uint16_t x5443 = 215U;
	int16_t x5444 = INT16_MIN;
	static volatile uint32_t t88 = 8114U;

	t88 = ((x5441>>x5442)^(x5443-x5444));

	if (t88 != 98088U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x5487 = 0U;
	volatile int16_t x5488 = INT16_MAX;
	volatile int64_t t89 = -1500LL;

	t89 = ((x5485>>x5486)^(x5487-x5488));

	if (t89 != -4611686018427355138LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5493 = INT8_MAX;
	uint16_t x5495 = 6U;
	int64_t x5496 = INT64_MAX;
	static volatile int64_t t90 = 398971LL;

	t90 = ((x5493>>x5494)^(x5495-x5496));

	if (t90 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5553 = 1U;
	static uint8_t x5554 = 8U;
	volatile int16_t x5555 = INT16_MIN;
	volatile int16_t x5556 = -25;
	static int32_t t91 = 57370;

	t91 = ((x5553>>x5554)^(x5555-x5556));

	if (t91 != -32743) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5609 = 7U;
	int16_t x5610 = 3;
	uint16_t x5612 = UINT16_MAX;
	int32_t t92 = 1783597;

	t92 = ((x5609>>x5610)^(x5611-x5612));

	if (t92 != -65517) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5673 = UINT64_MAX;
	uint16_t x5674 = 5U;
	static volatile int16_t x5675 = INT16_MIN;
	int16_t x5676 = -1;
	volatile uint64_t t93 = 625407725020LLU;

	t93 = ((x5673>>x5674)^(x5675-x5676));

	if (t93 != 17870283321406160894LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5685 = INT8_MAX;
	int8_t x5686 = 2;
	uint16_t x5687 = UINT16_MAX;
	volatile uint16_t x5688 = UINT16_MAX;
	int32_t t94 = -20;

	t94 = ((x5685>>x5686)^(x5687-x5688));

	if (t94 != 31) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x5713 = 3363LLU;
	uint16_t x5715 = 2132U;
	uint16_t x5716 = UINT16_MAX;
	uint64_t t95 = 14472001LLU;

	t95 = ((x5713>>x5714)^(x5715-x5716));

	if (t95 != 18446744073709488213LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5737 = 4U;
	static uint16_t x5738 = 6U;
	static volatile int16_t x5739 = INT16_MIN;
	int16_t x5740 = INT16_MIN;
	volatile int32_t t96 = -13387258;

	t96 = ((x5737>>x5738)^(x5739-x5740));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5765 = UINT16_MAX;
	uint8_t x5766 = 4U;
	static volatile int32_t x5767 = INT32_MIN;
	volatile uint32_t t97 = 2944267U;

	t97 = ((x5765>>x5766)^(x5767-x5768));

	if (t97 != 2147470217U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5778 = 1;
	int64_t x5780 = INT64_MIN;
	static int64_t t98 = -924177LL;

	t98 = ((x5777>>x5778)^(x5779-x5780));

	if (t98 != 9223372036854774565LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x5901 = 18886124585LL;
	static volatile int8_t x5902 = 0;
	uint64_t x5904 = 305221734LLU;
	volatile uint64_t t99 = 88247384354102LLU;

	t99 = ((x5901>>x5902)^(x5903-x5904));

	if (t99 != 18446744054524660661LLU) { NG(); } else { ; }
	
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

