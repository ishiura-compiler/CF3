#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x75 = 0;
uint64_t x366 = 38933418272490228LLU;
uint64_t x458 = UINT64_MAX;
uint8_t x465 = UINT8_MAX;
uint16_t x467 = 3U;
int8_t x468 = INT8_MAX;
uint64_t t11 = 100978166504027803LLU;
static int16_t x684 = INT16_MIN;
int64_t x713 = INT64_MIN;
int64_t x805 = INT64_MAX;
int16_t x806 = 13;
volatile int64_t t15 = INT64_MAX;
uint8_t x822 = 42U;
uint16_t x823 = 11U;
volatile int64_t t17 = 680LL;
int16_t x922 = 5;
uint16_t x955 = 0U;
int8_t x1052 = -1;
int8_t x1056 = INT8_MIN;
volatile uint64_t t22 = UINT64_MAX;
int8_t x1322 = INT8_MAX;
uint8_t x1430 = 0U;
uint16_t x1447 = 1U;
uint8_t x1451 = 5U;
int64_t x1452 = INT64_MIN;
volatile uint8_t x1569 = 29U;
int32_t t31 = -867;
uint8_t x1822 = UINT8_MAX;
volatile uint64_t t34 = 21LLU;
int32_t x1953 = -1;
volatile uint64_t t37 = 53006241003LLU;
uint16_t x2230 = UINT16_MAX;
int8_t x2262 = 0;
uint64_t t41 = UINT64_MAX;
int16_t x2293 = -1;
uint64_t t43 = UINT64_MAX;
int64_t x2309 = 7169278LL;
static volatile uint16_t x2310 = 3536U;
int64_t x2320 = INT64_MIN;
static int64_t t45 = 31LL;
int8_t x2425 = -1;
uint64_t x2426 = UINT64_MAX;
uint32_t x2427 = 27U;
volatile uint64_t t47 = UINT64_MAX;
static int32_t x2464 = -303180;
static int8_t x2479 = 0;
uint64_t x2482 = 2238717990062LLU;
int16_t x2483 = 23;
uint16_t x2509 = 24422U;
int64_t x2511 = 2LL;
static volatile uint64_t t52 = 283565LLU;
static int32_t x2792 = INT32_MIN;
static int32_t x3290 = 0;
int64_t t60 = -5LL;
static int32_t x3465 = INT32_MIN;
volatile int64_t t62 = 14561082106496LL;
volatile uint8_t x3504 = UINT8_MAX;
int64_t x3669 = INT64_MAX;
static int8_t x3727 = 0;
int8_t x3747 = 0;
int8_t x3748 = -1;
int8_t x3790 = 21;
uint16_t x3792 = UINT16_MAX;
static int32_t x3902 = 100392954;
int16_t x3926 = INT16_MAX;
static uint64_t t74 = 1980LLU;
int64_t x4233 = 20561223976227LL;
static int64_t x4234 = 2476537826LL;
int64_t x4273 = -1LL;
static int16_t x4297 = INT16_MAX;
uint8_t x4299 = 0U;
uint8_t x4398 = UINT8_MAX;
volatile int32_t t79 = 4114386;
volatile uint16_t x4609 = UINT16_MAX;
static int8_t x4610 = 0;
uint8_t x4611 = 1U;
int16_t x4612 = -1;
int8_t x4651 = 9;
uint16_t x4652 = 40U;
int16_t x4664 = -1;
int64_t x4677 = -2LL;
volatile int64_t t84 = -10210LL;
int8_t x4731 = 1;
static int16_t x4769 = INT16_MIN;
uint16_t x4770 = 7U;
static uint32_t x4786 = 130773760U;
uint32_t t88 = 0U;
static volatile int64_t t89 = 277529646407165390LL;
int64_t x4916 = INT64_MIN;
int64_t x5025 = INT64_MIN;
uint8_t x5027 = 1U;
int64_t x5028 = INT64_MAX;
volatile int64_t t94 = 5083461673418LL;
int16_t x5509 = 486;
uint64_t t98 = 64802398LLU;
int32_t x5565 = INT32_MIN;


void f0(void) {
	volatile uint16_t x73 = 0U;
	uint64_t x74 = UINT64_MAX;
	int8_t x76 = -4;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x73|((x74<<x75)|x76));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x154 = UINT64_MAX;
	static uint16_t x155 = 6U;
	int16_t x156 = INT16_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = (x153|((x154<<x155)|x156));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x197 = 151437906LLU;
	static uint8_t x198 = 38U;
	volatile uint8_t x199 = 13U;
	volatile int16_t x200 = -13968;
	static uint64_t t2 = 178022578LLU;

	t2 = (x197|((x198<<x199)|x200));

	if (t2 != 18446744073709538162LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x209 = 61U;
	int8_t x210 = INT8_MAX;
	static uint16_t x211 = 4U;
	volatile uint8_t x212 = 1U;
	int32_t t3 = 1247137;

	t3 = (x209|((x210<<x211)|x212));

	if (t3 != 2045) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x265 = 708149643397381307LL;
	int32_t x266 = 4002;
	uint16_t x267 = 1U;
	int32_t x268 = INT32_MIN;
	volatile int64_t t4 = 549650615LL;

	t4 = (x265|((x266<<x267)|x268));

	if (t4 != -964345857LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x273 = -1;
	uint32_t x274 = 79174880U;
	static uint8_t x275 = 1U;
	uint16_t x276 = 9320U;
	uint32_t t5 = UINT32_MAX;

	t5 = (x273|((x274<<x275)|x276));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x309 = -1LL;
	volatile uint16_t x310 = 12U;
	int8_t x311 = 1;
	static volatile int64_t x312 = INT64_MAX;
	int64_t t6 = -516462071LL;

	t6 = (x309|((x310<<x311)|x312));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x337 = 752U;
	volatile uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 3U;
	uint64_t x340 = 6LLU;
	static uint64_t t7 = 123117127022291412LLU;

	t7 = (x337|((x338<<x339)|x340));

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x365 = 6517U;
	uint16_t x367 = 1U;
	uint64_t x368 = 47532LLU;
	uint64_t t8 = 1636LLU;

	t8 = (x365|((x366<<x367)|x368));

	if (t8 != 77866836545027581LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x457 = UINT32_MAX;
	uint32_t x459 = 58U;
	int64_t x460 = 3196142LL;
	uint64_t t9 = 951850262750620LLU;

	t9 = (x457|((x458<<x459)|x460));

	if (t9 != 18158513701852807167LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x466 = UINT32_MAX;
	static volatile uint32_t t10 = UINT32_MAX;

	t10 = (x465|((x466<<x467)|x468));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x541 = 133268788509LLU;
	uint64_t x542 = 4113122619174LLU;
	int8_t x543 = 3;
	int16_t x544 = INT16_MIN;

	t11 = (x541|((x542<<x543)|x544));

	if (t11 != 18446744073709550909LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x613 = INT64_MIN;
	volatile int8_t x614 = 1;
	uint8_t x615 = 4U;
	uint16_t x616 = UINT16_MAX;
	int64_t t12 = 131067893LL;

	t12 = (x613|((x614<<x615)|x616));

	if (t12 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x681 = INT16_MIN;
	int8_t x682 = INT8_MAX;
	static int8_t x683 = 14;
	static int32_t t13 = 0;

	t13 = (x681|((x682<<x683)|x684));

	if (t13 != -16384) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x714 = 2;
	static volatile uint8_t x715 = 7U;
	uint8_t x716 = 64U;
	volatile int64_t t14 = 0LL;

	t14 = (x713|((x714<<x715)|x716));

	if (t14 != -9223372036854775488LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x807 = 2;
	static int16_t x808 = INT16_MAX;

	t15 = (x805|((x806<<x807)|x808));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x821 = INT8_MIN;
	int32_t x824 = INT32_MIN;
	volatile int32_t t16 = 642666;

	t16 = (x821|((x822<<x823)|x824));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x893 = -1LL;
	uint16_t x894 = 11241U;
	uint8_t x895 = 7U;
	int64_t x896 = -1LL;

	t17 = (x893|((x894<<x895)|x896));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x921 = 234U;
	volatile int64_t x923 = 0LL;
	int32_t x924 = INT32_MIN;
	int32_t t18 = 8918091;

	t18 = (x921|((x922<<x923)|x924));

	if (t18 != -2147483409) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x933 = -1;
	int8_t x934 = 31;
	static uint8_t x935 = 9U;
	uint64_t x936 = 35369321927609389LLU;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x933|((x934<<x935)|x936));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x953 = -1;
	uint8_t x954 = 4U;
	int16_t x956 = -3426;
	volatile int32_t t20 = 41970603;

	t20 = (x953|((x954<<x955)|x956));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x1049 = UINT8_MAX;
	uint32_t x1050 = 17628821U;
	static int8_t x1051 = 10;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x1049|((x1050<<x1051)|x1052));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1053 = UINT16_MAX;
	uint64_t x1054 = 3946LLU;
	volatile int8_t x1055 = 0;

	t22 = (x1053|((x1054<<x1055)|x1056));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1321 = INT64_MIN;
	int8_t x1323 = 0;
	int8_t x1324 = INT8_MIN;
	volatile int64_t t23 = 1300496291050LL;

	t23 = (x1321|((x1322<<x1323)|x1324));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x1357 = -1;
	int32_t x1358 = 837235;
	uint8_t x1359 = 6U;
	int32_t x1360 = INT32_MAX;
	static volatile int32_t t24 = 874324;

	t24 = (x1357|((x1358<<x1359)|x1360));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1429 = -13550;
	int64_t x1431 = 7LL;
	int32_t x1432 = -6;
	int32_t t25 = 414;

	t25 = (x1429|((x1430<<x1431)|x1432));

	if (t25 != -6) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1445 = -20;
	uint16_t x1446 = UINT16_MAX;
	int64_t x1448 = -1LL;
	int64_t t26 = 3819396360LL;

	t26 = (x1445|((x1446<<x1447)|x1448));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1449 = 4U;
	uint64_t x1450 = UINT64_MAX;
	volatile uint64_t t27 = 264113401419070687LLU;

	t27 = (x1449|((x1450<<x1451)|x1452));

	if (t27 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x1565 = UINT32_MAX;
	uint64_t x1566 = 45801019300024777LLU;
	static uint8_t x1567 = 2U;
	int64_t x1568 = 477323LL;
	volatile uint64_t t28 = 27LLU;

	t28 = (x1565|((x1566<<x1567)|x1568));

	if (t28 != 183204080573743103LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1570 = UINT64_MAX;
	uint16_t x1571 = 0U;
	static uint64_t x1572 = 100384292LLU;
	static uint64_t t29 = UINT64_MAX;

	t29 = (x1569|((x1570<<x1571)|x1572));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1589 = -5;
	uint16_t x1590 = UINT16_MAX;
	int16_t x1591 = 6;
	static int64_t x1592 = -1LL;
	volatile int64_t t30 = -4260289784563727334LL;

	t30 = (x1589|((x1590<<x1591)|x1592));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1697 = INT8_MIN;
	int8_t x1698 = 0;
	static uint16_t x1699 = 12U;
	int32_t x1700 = INT32_MIN;

	t31 = (x1697|((x1698<<x1699)|x1700));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1729 = INT8_MIN;
	volatile uint16_t x1730 = 304U;
	uint16_t x1731 = 14U;
	static uint32_t x1732 = 2462U;
	uint32_t t32 = 687226712U;

	t32 = (x1729|((x1730<<x1731)|x1732));

	if (t32 != 4294967198U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1821 = 16U;
	volatile int8_t x1823 = 9;
	int32_t x1824 = INT32_MIN;
	volatile int32_t t33 = 10;

	t33 = (x1821|((x1822<<x1823)|x1824));

	if (t33 != -2147353072) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1877 = 0;
	volatile uint64_t x1878 = 492279401349270LLU;
	uint16_t x1879 = 1U;
	int8_t x1880 = 3;

	t34 = (x1877|((x1878<<x1879)|x1880));

	if (t34 != 984558802698543LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1954 = 1892U;
	static uint8_t x1955 = 1U;
	static uint64_t x1956 = 276LLU;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x1953|((x1954<<x1955)|x1956));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2093 = UINT32_MAX;
	static uint8_t x2094 = 1U;
	volatile int8_t x2095 = 19;
	int8_t x2096 = INT8_MAX;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x2093|((x2094<<x2095)|x2096));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2101 = 62U;
	uint64_t x2102 = 24459318605679LLU;
	uint16_t x2103 = 50U;
	int64_t x2104 = 10494216334740LL;

	t37 = (x2101|((x2102<<x2103)|x2104));

	if (t37 != 15977656072220011966LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2153 = INT32_MAX;
	volatile uint32_t x2154 = 96006U;
	volatile uint16_t x2155 = 2U;
	static uint16_t x2156 = 5667U;
	static uint32_t t38 = 0U;

	t38 = (x2153|((x2154<<x2155)|x2156));

	if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2229 = -885760291303768LL;
	static volatile int8_t x2231 = 11;
	volatile uint64_t x2232 = 52052330LLU;
	static volatile uint64_t t39 = 173LLU;

	t39 = (x2229|((x2230<<x2231)|x2232));

	if (t39 != 18445858313477292010LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2261 = INT64_MIN;
	volatile int32_t x2263 = 0;
	volatile int16_t x2264 = INT16_MAX;
	int64_t t40 = -1LL;

	t40 = (x2261|((x2262<<x2263)|x2264));

	if (t40 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2269 = 12571;
	static uint64_t x2270 = 2464161LLU;
	volatile int16_t x2271 = 0;
	int64_t x2272 = -1LL;

	t41 = (x2269|((x2270<<x2271)|x2272));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2294 = 104415508588122202LLU;
	static volatile uint32_t x2295 = 59U;
	static int32_t x2296 = INT32_MIN;
	uint64_t t42 = UINT64_MAX;

	t42 = (x2293|((x2294<<x2295)|x2296));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x2301 = INT32_MAX;
	static uint64_t x2302 = UINT64_MAX;
	volatile uint8_t x2303 = 11U;
	int32_t x2304 = 535132;

	t43 = (x2301|((x2302<<x2303)|x2304));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2311 = 6;
	static volatile uint8_t x2312 = 9U;
	int64_t t44 = 45142271039LL;

	t44 = (x2309|((x2310<<x2311)|x2312));

	if (t44 != 7304447LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2317 = -1;
	volatile uint16_t x2318 = 18363U;
	int16_t x2319 = 1;

	t45 = (x2317|((x2318<<x2319)|x2320));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2428 = INT8_MIN;
	uint64_t t46 = UINT64_MAX;

	t46 = (x2425|((x2426<<x2427)|x2428));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2457 = -1;
	static uint64_t x2458 = 296219861773942777LLU;
	uint16_t x2459 = 3U;
	int32_t x2460 = 1134682;

	t47 = (x2457|((x2458<<x2459)|x2460));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2461 = 22U;
	static uint8_t x2462 = UINT8_MAX;
	volatile uint16_t x2463 = 5U;
	uint32_t t48 = 3U;

	t48 = (x2461|((x2462<<x2463)|x2464));

	if (t48 != 4294664182U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2477 = 1467U;
	int64_t x2478 = 12334364114912692LL;
	uint32_t x2480 = 108461105U;
	int64_t t49 = 72840963LL;

	t49 = (x2477|((x2478<<x2479)|x2480));

	if (t49 != 12334364121628095LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2481 = -1;
	uint32_t x2484 = 3078U;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x2481|((x2482<<x2483)|x2484));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2510 = INT16_MAX;
	int16_t x2512 = 127;
	volatile int32_t t51 = -1211107;

	t51 = (x2509|((x2510<<x2511)|x2512));

	if (t51 != 131071) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2637 = INT16_MAX;
	static uint16_t x2638 = 174U;
	uint16_t x2639 = 6U;
	uint64_t x2640 = 93639308829595LLU;

	t52 = (x2637|((x2638<<x2639)|x2640));

	if (t52 != 93639308836863LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2789 = INT16_MAX;
	uint32_t x2790 = 1889U;
	volatile int8_t x2791 = 4;
	volatile uint32_t t53 = 14408U;

	t53 = (x2789|((x2790<<x2791)|x2792));

	if (t53 != 2147516415U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2949 = 0;
	volatile uint16_t x2950 = 399U;
	volatile uint16_t x2951 = 0U;
	volatile int32_t x2952 = -8407076;
	int32_t t54 = -15169924;

	t54 = (x2949|((x2950<<x2951)|x2952));

	if (t54 != -8407073) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2965 = 2027;
	uint32_t x2966 = UINT32_MAX;
	volatile uint8_t x2967 = 16U;
	uint32_t x2968 = UINT32_MAX;
	uint32_t t55 = UINT32_MAX;

	t55 = (x2965|((x2966<<x2967)|x2968));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x3153 = UINT16_MAX;
	static int16_t x3154 = 4566;
	uint8_t x3155 = 11U;
	int32_t x3156 = -1;
	volatile int32_t t56 = -836155114;

	t56 = (x3153|((x3154<<x3155)|x3156));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3161 = INT8_MAX;
	static uint32_t x3162 = UINT32_MAX;
	uint8_t x3163 = 30U;
	uint16_t x3164 = 2215U;
	volatile uint32_t t57 = 1U;

	t57 = (x3161|((x3162<<x3163)|x3164));

	if (t57 != 3221227775U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3181 = INT64_MIN;
	int8_t x3182 = INT8_MAX;
	uint32_t x3183 = 18U;
	uint8_t x3184 = 7U;
	volatile int64_t t58 = -2022578677037LL;

	t58 = (x3181|((x3182<<x3183)|x3184));

	if (t58 != -9223372036821483513LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3289 = 974;
	int8_t x3291 = 0;
	static volatile int16_t x3292 = 169;
	int32_t t59 = -8;

	t59 = (x3289|((x3290<<x3291)|x3292));

	if (t59 != 1007) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3353 = INT64_MAX;
	uint16_t x3354 = 32496U;
	int32_t x3355 = 0;
	int8_t x3356 = INT8_MIN;

	t60 = (x3353|((x3354<<x3355)|x3356));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3466 = INT64_MAX;
	int8_t x3467 = 0;
	static uint8_t x3468 = 9U;
	int64_t t61 = -3356404105249LL;

	t61 = (x3465|((x3466<<x3467)|x3468));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3473 = -1;
	static int64_t x3474 = 1549LL;
	uint8_t x3475 = 1U;
	int32_t x3476 = INT32_MAX;

	t62 = (x3473|((x3474<<x3475)|x3476));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3501 = INT16_MAX;
	int8_t x3502 = 10;
	uint8_t x3503 = 7U;
	volatile int32_t t63 = -7256;

	t63 = (x3501|((x3502<<x3503)|x3504));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3670 = INT8_MAX;
	int64_t x3671 = 0LL;
	volatile int64_t x3672 = -1LL;
	volatile int64_t t64 = -29961513611631041LL;

	t64 = (x3669|((x3670<<x3671)|x3672));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3673 = UINT16_MAX;
	uint32_t x3674 = UINT32_MAX;
	static int8_t x3675 = 6;
	int32_t x3676 = INT32_MIN;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x3673|((x3674<<x3675)|x3676));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3725 = INT16_MIN;
	uint32_t x3726 = UINT32_MAX;
	static volatile uint8_t x3728 = 79U;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x3725|((x3726<<x3727)|x3728));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3745 = -6457960LL;
	static volatile uint64_t x3746 = 26LLU;
	uint64_t t67 = UINT64_MAX;

	t67 = (x3745|((x3746<<x3747)|x3748));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3789 = 279;
	static uint8_t x3791 = 0U;
	int32_t t68 = 27769;

	t68 = (x3789|((x3790<<x3791)|x3792));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3901 = INT64_MAX;
	int8_t x3903 = 0;
	uint32_t x3904 = 16787U;
	int64_t t69 = INT64_MAX;

	t69 = (x3901|((x3902<<x3903)|x3904));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3925 = -1;
	uint16_t x3927 = 12U;
	static int32_t x3928 = INT32_MIN;
	int32_t t70 = -49166325;

	t70 = (x3925|((x3926<<x3927)|x3928));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x3929 = -1;
	int16_t x3930 = INT16_MAX;
	int8_t x3931 = 1;
	int64_t x3932 = INT64_MIN;
	static volatile int64_t t71 = 2880688432251203331LL;

	t71 = (x3929|((x3930<<x3931)|x3932));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4125 = -1;
	uint32_t x4126 = UINT32_MAX;
	static uint8_t x4127 = 4U;
	static uint32_t x4128 = 725070420U;
	uint32_t t72 = UINT32_MAX;

	t72 = (x4125|((x4126<<x4127)|x4128));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4149 = 2;
	volatile int64_t x4150 = 4LL;
	int16_t x4151 = 1;
	volatile int64_t x4152 = -1LL;
	int64_t t73 = 1810871571761318568LL;

	t73 = (x4149|((x4150<<x4151)|x4152));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4177 = INT64_MIN;
	uint64_t x4178 = 94196011513LLU;
	volatile uint32_t x4179 = 1U;
	uint8_t x4180 = 1U;

	t74 = (x4177|((x4178<<x4179)|x4180));

	if (t74 != 9223372225246798835LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4235 = 1;
	int8_t x4236 = 0;
	int64_t t75 = 1516507907LL;

	t75 = (x4233|((x4234<<x4235)|x4236));

	if (t75 != 20561878839271LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4274 = UINT8_MAX;
	static uint16_t x4275 = 13U;
	int32_t x4276 = -1867607;
	volatile int64_t t76 = -331994844632625LL;

	t76 = (x4273|((x4274<<x4275)|x4276));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4298 = 2;
	static int64_t x4300 = -1LL;
	volatile int64_t t77 = -33469LL;

	t77 = (x4297|((x4298<<x4299)|x4300));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4397 = -1;
	uint16_t x4399 = 6U;
	volatile uint16_t x4400 = 1U;
	static int32_t t78 = 874975;

	t78 = (x4397|((x4398<<x4399)|x4400));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4501 = INT32_MIN;
	uint16_t x4502 = 0U;
	volatile uint8_t x4503 = 18U;
	static int16_t x4504 = -8;

	t79 = (x4501|((x4502<<x4503)|x4504));

	if (t79 != -8) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4513 = -7;
	int16_t x4514 = INT16_MAX;
	static int8_t x4515 = 1;
	uint8_t x4516 = UINT8_MAX;
	volatile int32_t t80 = 192;

	t80 = (x4513|((x4514<<x4515)|x4516));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t t81 = -55017;

	t81 = (x4609|((x4610<<x4611)|x4612));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4649 = INT32_MIN;
	volatile uint32_t x4650 = 61U;
	static uint32_t t82 = 843875737U;

	t82 = (x4649|((x4650<<x4651)|x4652));

	if (t82 != 2147514920U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x4661 = 20290U;
	int8_t x4662 = 53;
	volatile uint32_t x4663 = 6U;
	static volatile uint32_t t83 = UINT32_MAX;

	t83 = (x4661|((x4662<<x4663)|x4664));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4678 = INT16_MAX;
	uint16_t x4679 = 3U;
	int64_t x4680 = INT64_MIN;

	t84 = (x4677|((x4678<<x4679)|x4680));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4729 = INT32_MIN;
	uint32_t x4730 = 8U;
	int32_t x4732 = INT32_MIN;
	uint32_t t85 = 49U;

	t85 = (x4729|((x4730<<x4731)|x4732));

	if (t85 != 2147483664U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4771 = 1;
	int64_t x4772 = -6LL;
	volatile int64_t t86 = -718551692LL;

	t86 = (x4769|((x4770<<x4771)|x4772));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4785 = INT64_MAX;
	int8_t x4787 = 31;
	static int32_t x4788 = 312;
	static volatile int64_t t87 = INT64_MAX;

	t87 = (x4785|((x4786<<x4787)|x4788));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4821 = 19354940U;
	volatile uint8_t x4822 = 22U;
	int8_t x4823 = 1;
	int16_t x4824 = INT16_MAX;

	t88 = (x4821|((x4822<<x4823)|x4824));

	if (t88 != 19365887U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4889 = INT64_MIN;
	uint16_t x4890 = UINT16_MAX;
	uint16_t x4891 = 2U;
	static uint8_t x4892 = UINT8_MAX;

	t89 = (x4889|((x4890<<x4891)|x4892));

	if (t89 != -9223372036854513665LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4897 = INT64_MIN;
	uint64_t x4898 = 330125LLU;
	uint64_t x4899 = 3LLU;
	int64_t x4900 = -480997LL;
	volatile uint64_t t90 = 488863886LLU;

	t90 = (x4897|((x4898<<x4899)|x4900));

	if (t90 != 18446744073709088123LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4913 = 5309LLU;
	volatile int8_t x4914 = 8;
	uint8_t x4915 = 1U;
	uint64_t t91 = 177078576804738LLU;

	t91 = (x4913|((x4914<<x4915)|x4916));

	if (t91 != 9223372036854781117LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5021 = INT8_MIN;
	uint8_t x5022 = UINT8_MAX;
	static uint16_t x5023 = 15U;
	uint8_t x5024 = 15U;
	volatile int32_t t92 = 27019275;

	t92 = (x5021|((x5022<<x5023)|x5024));

	if (t92 != -113) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5026 = UINT32_MAX;
	int64_t t93 = 2858919103LL;

	t93 = (x5025|((x5026<<x5027)|x5028));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5037 = INT64_MAX;
	uint16_t x5038 = 426U;
	uint8_t x5039 = 0U;
	int16_t x5040 = -376;

	t94 = (x5037|((x5038<<x5039)|x5040));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5061 = UINT16_MAX;
	uint32_t x5062 = 6271848U;
	int32_t x5063 = 7;
	int64_t x5064 = 1LL;
	int64_t t95 = -2408172633784336724LL;

	t95 = (x5061|((x5062<<x5063)|x5064));

	if (t95 != 802815999LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5085 = -1;
	uint8_t x5086 = 2U;
	uint8_t x5087 = 0U;
	int64_t x5088 = INT64_MAX;
	volatile int64_t t96 = -32712055LL;

	t96 = (x5085|((x5086<<x5087)|x5088));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5121 = 1U;
	static int8_t x5122 = 61;
	uint16_t x5123 = 12U;
	static int32_t x5124 = INT32_MAX;
	static int32_t t97 = INT32_MAX;

	t97 = (x5121|((x5122<<x5123)|x5124));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5510 = 6766420683084437841LLU;
	int8_t x5511 = 1;
	volatile int8_t x5512 = INT8_MAX;

	t98 = (x5509|((x5510<<x5511)|x5512));

	if (t98 != 13532841366168876031LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5566 = 3U;
	int16_t x5567 = 1;
	volatile int32_t x5568 = INT32_MIN;
	uint32_t t99 = 124542819U;

	t99 = (x5565|((x5566<<x5567)|x5568));

	if (t99 != 2147483654U) { NG(); } else { ; }
	
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

