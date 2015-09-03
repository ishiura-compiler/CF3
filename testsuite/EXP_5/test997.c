#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
static int32_t t2 = -1;
static uint32_t x406 = UINT32_MAX;
static int32_t t4 = 1015526212;
int32_t t6 = -1;
static int64_t x924 = INT64_MAX;
static volatile int32_t t8 = 955;
uint16_t x953 = UINT16_MAX;
static int64_t x1077 = -1LL;
uint8_t x1079 = 1U;
volatile int16_t x1109 = INT16_MIN;
static int64_t x1133 = -1LL;
static int32_t t12 = -490773716;
int16_t x1178 = 4;
static volatile int32_t t15 = 731623;
uint32_t x1419 = 7U;
int32_t x1420 = -1;
int16_t x1427 = 9;
volatile int32_t t18 = -21;
volatile int64_t x1450 = 17LL;
int64_t x1469 = -786769979798849278LL;
uint64_t x1472 = UINT64_MAX;
static int32_t t20 = 47525506;
uint8_t x1479 = 10U;
int16_t x1533 = INT16_MIN;
uint64_t x1536 = 8149766566LLU;
int16_t x1588 = INT16_MAX;
int16_t x1617 = -1;
uint32_t x1620 = UINT32_MAX;
int8_t x1667 = 20;
volatile uint64_t x1826 = 1504LLU;
static uint8_t x1905 = 2U;
uint8_t x1907 = 1U;
volatile int32_t t29 = 420;
int8_t x1943 = 0;
volatile int32_t t32 = 978597;
static int8_t x2104 = INT8_MAX;
uint16_t x2110 = 285U;
int32_t t36 = -1886112;
volatile int8_t x2299 = 25;
volatile uint16_t x2501 = UINT16_MAX;
uint8_t x2621 = 80U;
volatile uint64_t x2734 = 29065046845LLU;
uint8_t x2735 = 3U;
int32_t x2885 = INT32_MAX;
uint8_t x2955 = 4U;
uint8_t x3101 = 1U;
uint16_t x3102 = UINT16_MAX;
static int16_t x3104 = 74;
int64_t x3121 = INT64_MAX;
int64_t x3289 = INT64_MIN;
static uint32_t x3293 = 63U;
static int32_t t53 = 2353;
static int8_t x3387 = 0;
uint8_t x3388 = 54U;
int8_t x3402 = INT8_MAX;
int16_t x3500 = INT16_MAX;
volatile int32_t t58 = 14;
volatile uint8_t x3943 = 1U;
volatile uint16_t x3966 = 15687U;
int32_t t61 = -760;
volatile uint32_t x4026 = 6679815U;
uint16_t x4027 = 5U;
volatile int16_t x4065 = INT16_MAX;
uint8_t x4067 = 10U;
uint64_t x4172 = UINT64_MAX;
int32_t t67 = -36893;
int16_t x4273 = INT16_MIN;
int32_t x4461 = INT32_MIN;
static uint16_t x4464 = 12396U;
uint8_t x4503 = 6U;
static volatile int8_t x4589 = -1;
int16_t x4944 = -1;
uint8_t x5044 = 2U;
volatile int32_t x5049 = -1;
volatile int32_t t78 = 52743318;
volatile uint64_t x5170 = UINT64_MAX;
int64_t x5297 = INT64_MIN;
int8_t x5300 = INT8_MIN;
volatile int32_t t83 = 6406;
volatile int32_t t84 = 3092;
uint8_t x5551 = 9U;
uint32_t x5565 = 0U;
volatile int32_t t86 = -486534;
int8_t x5590 = INT8_MAX;
static uint8_t x5591 = 0U;
volatile uint16_t x5815 = 5U;
uint8_t x5816 = UINT8_MAX;
static uint32_t x5818 = UINT32_MAX;
volatile uint64_t x5866 = 2LLU;
volatile uint8_t x5870 = UINT8_MAX;
volatile int32_t t91 = 25665949;
int16_t x5903 = 6;
int16_t x5980 = INT16_MIN;
volatile int32_t t95 = 13636;
int64_t x5990 = 3LL;
uint8_t x5992 = 0U;
uint8_t x6067 = 0U;
static volatile int32_t t97 = 48569;
static int64_t x6125 = INT64_MIN;
int32_t t98 = 687;
static volatile int32_t t99 = 113;


void f0(void) {
	volatile uint64_t x2 = 6906837920LLU;
	int8_t x3 = 6;
	static volatile uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = 193;

	t0 = (x1<((x2<<x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x21 = 7U;
	int32_t x22 = 0;
	uint8_t x23 = 6U;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t1 = -100719;

	t1 = (x21<((x22<<x23)|x24));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x77 = 0;
	volatile int64_t x78 = 1095512871515435LL;
	uint8_t x79 = 7U;
	volatile uint16_t x80 = 47U;

	t2 = (x77<((x78<<x79)|x80));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x405 = INT32_MAX;
	uint8_t x407 = 1U;
	uint32_t x408 = 105U;
	volatile int32_t t3 = 2116711;

	t3 = (x405<((x406<<x407)|x408));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x537 = INT8_MAX;
	uint16_t x538 = 223U;
	uint32_t x539 = 23U;
	volatile int8_t x540 = INT8_MIN;

	t4 = (x537<((x538<<x539)|x540));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x597 = INT16_MAX;
	uint8_t x598 = 10U;
	int8_t x599 = 0;
	int16_t x600 = INT16_MIN;
	volatile int32_t t5 = 214;

	t5 = (x597<((x598<<x599)|x600));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x805 = -1;
	uint64_t x806 = 18LLU;
	int32_t x807 = 55;
	static uint32_t x808 = UINT32_MAX;

	t6 = (x805<((x806<<x807)|x808));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x809 = 506;
	uint8_t x810 = 0U;
	int16_t x811 = 1;
	static int32_t x812 = INT32_MIN;
	volatile int32_t t7 = -52;

	t7 = (x809<((x810<<x811)|x812));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x921 = INT8_MIN;
	uint8_t x922 = UINT8_MAX;
	uint16_t x923 = 3U;

	t8 = (x921<((x922<<x923)|x924));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x954 = 61U;
	static int8_t x955 = 15;
	int32_t x956 = -6538323;
	static int32_t t9 = 8563;

	t9 = (x953<((x954<<x955)|x956));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1078 = UINT8_MAX;
	int16_t x1080 = INT16_MIN;
	volatile int32_t t10 = -79528;

	t10 = (x1077<((x1078<<x1079)|x1080));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x1110 = INT32_MAX;
	int32_t x1111 = 0;
	static int32_t x1112 = INT32_MIN;
	int32_t t11 = 1;

	t11 = (x1109<((x1110<<x1111)|x1112));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1134 = 10612U;
	static uint32_t x1135 = 17U;
	static int16_t x1136 = -1;

	t12 = (x1133<((x1134<<x1135)|x1136));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1177 = 383U;
	uint16_t x1179 = 6U;
	uint64_t x1180 = 1161499118LLU;
	int32_t t13 = -857022394;

	t13 = (x1177<((x1178<<x1179)|x1180));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x1273 = 65322LL;
	int16_t x1274 = 11373;
	uint8_t x1275 = 0U;
	volatile uint32_t x1276 = UINT32_MAX;
	int32_t t14 = -2166378;

	t14 = (x1273<((x1274<<x1275)|x1276));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1325 = UINT32_MAX;
	int8_t x1326 = 1;
	uint8_t x1327 = 5U;
	uint16_t x1328 = 2814U;

	t15 = (x1325<((x1326<<x1327)|x1328));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1381 = 445038440;
	uint16_t x1382 = 2027U;
	static uint32_t x1383 = 2U;
	uint64_t x1384 = 28302LLU;
	volatile int32_t t16 = 251788740;

	t16 = (x1381<((x1382<<x1383)|x1384));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1417 = UINT64_MAX;
	static uint64_t x1418 = 287902642100LLU;
	volatile int32_t t17 = -543644;

	t17 = (x1417<((x1418<<x1419)|x1420));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1425 = 7522U;
	int8_t x1426 = 6;
	int16_t x1428 = INT16_MIN;

	t18 = (x1425<((x1426<<x1427)|x1428));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1449 = 2307U;
	volatile uint16_t x1451 = 2U;
	static int32_t x1452 = -3273;
	int32_t t19 = -205447;

	t19 = (x1449<((x1450<<x1451)|x1452));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1470 = 46U;
	uint32_t x1471 = 0U;

	t20 = (x1469<((x1470<<x1471)|x1472));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1477 = INT32_MAX;
	static int8_t x1478 = 0;
	uint8_t x1480 = 19U;
	static int32_t t21 = -3;

	t21 = (x1477<((x1478<<x1479)|x1480));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1534 = 15U;
	int64_t x1535 = 1LL;
	int32_t t22 = -6264;

	t22 = (x1533<((x1534<<x1535)|x1536));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1581 = 1090;
	uint8_t x1582 = 1U;
	int8_t x1583 = 12;
	uint32_t x1584 = 223769882U;
	static int32_t t23 = 14277;

	t23 = (x1581<((x1582<<x1583)|x1584));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1585 = INT8_MIN;
	static volatile uint8_t x1586 = UINT8_MAX;
	static volatile int8_t x1587 = 0;
	int32_t t24 = 0;

	t24 = (x1585<((x1586<<x1587)|x1588));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1618 = 1;
	int32_t x1619 = 2;
	volatile int32_t t25 = 25271173;

	t25 = (x1617<((x1618<<x1619)|x1620));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1665 = 15U;
	uint8_t x1666 = UINT8_MAX;
	int16_t x1668 = 5040;
	int32_t t26 = 17091522;

	t26 = (x1665<((x1666<<x1667)|x1668));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1825 = INT8_MIN;
	static uint16_t x1827 = 25U;
	static int16_t x1828 = -9;
	volatile int32_t t27 = 172;

	t27 = (x1825<((x1826<<x1827)|x1828));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1885 = INT16_MIN;
	volatile int64_t x1886 = 230838072LL;
	static volatile uint8_t x1887 = 7U;
	int16_t x1888 = INT16_MAX;
	volatile int32_t t28 = 291522;

	t28 = (x1885<((x1886<<x1887)|x1888));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1906 = 3389U;
	static volatile int8_t x1908 = INT8_MIN;

	t29 = (x1905<((x1906<<x1907)|x1908));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1941 = INT32_MAX;
	int16_t x1942 = 6857;
	static int8_t x1944 = 20;
	volatile int32_t t30 = 28269;

	t30 = (x1941<((x1942<<x1943)|x1944));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1985 = INT8_MAX;
	uint64_t x1986 = 2155110760218LLU;
	static int16_t x1987 = 1;
	int32_t x1988 = INT32_MIN;
	static volatile int32_t t31 = -1702611;

	t31 = (x1985<((x1986<<x1987)|x1988));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1993 = 591035409223LLU;
	uint8_t x1994 = 6U;
	uint32_t x1995 = 25U;
	int32_t x1996 = INT32_MIN;

	t32 = (x1993<((x1994<<x1995)|x1996));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2061 = 15U;
	uint64_t x2062 = 187154LLU;
	static int8_t x2063 = 2;
	volatile uint8_t x2064 = 43U;
	int32_t t33 = -3218;

	t33 = (x2061<((x2062<<x2063)|x2064));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2101 = UINT16_MAX;
	uint8_t x2102 = 7U;
	static uint16_t x2103 = 22U;
	volatile int32_t t34 = 0;

	t34 = (x2101<((x2102<<x2103)|x2104));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2109 = 5190489517LLU;
	int16_t x2111 = 6;
	static uint64_t x2112 = 445061LLU;
	volatile int32_t t35 = 130657585;

	t35 = (x2109<((x2110<<x2111)|x2112));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2293 = 0LLU;
	uint8_t x2294 = 6U;
	int32_t x2295 = 1;
	static int32_t x2296 = 3;

	t36 = (x2293<((x2294<<x2295)|x2296));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x2297 = -1;
	int16_t x2298 = 0;
	int16_t x2300 = INT16_MIN;
	static volatile int32_t t37 = 4705;

	t37 = (x2297<((x2298<<x2299)|x2300));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2317 = INT16_MIN;
	int8_t x2318 = 52;
	uint16_t x2319 = 24U;
	uint32_t x2320 = 237562U;
	static int32_t t38 = -47;

	t38 = (x2317<((x2318<<x2319)|x2320));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2502 = 5649255652022165657LLU;
	uint8_t x2503 = 0U;
	static uint8_t x2504 = 28U;
	int32_t t39 = -5;

	t39 = (x2501<((x2502<<x2503)|x2504));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2622 = 17U;
	uint16_t x2623 = 2U;
	int8_t x2624 = -3;
	volatile int32_t t40 = -835;

	t40 = (x2621<((x2622<<x2623)|x2624));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2657 = INT64_MIN;
	volatile int64_t x2658 = 883860383603688787LL;
	int64_t x2659 = 1LL;
	static int8_t x2660 = 0;
	static volatile int32_t t41 = 378252986;

	t41 = (x2657<((x2658<<x2659)|x2660));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2733 = INT8_MIN;
	uint32_t x2736 = UINT32_MAX;
	static volatile int32_t t42 = -7812;

	t42 = (x2733<((x2734<<x2735)|x2736));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2757 = INT8_MIN;
	int8_t x2758 = INT8_MAX;
	volatile uint8_t x2759 = 4U;
	int64_t x2760 = 3403016LL;
	volatile int32_t t43 = 41640;

	t43 = (x2757<((x2758<<x2759)|x2760));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2886 = INT8_MAX;
	uint16_t x2887 = 0U;
	int8_t x2888 = -3;
	volatile int32_t t44 = 10880;

	t44 = (x2885<((x2886<<x2887)|x2888));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2953 = -2LL;
	uint8_t x2954 = 43U;
	uint64_t x2956 = UINT64_MAX;
	static volatile int32_t t45 = 899521;

	t45 = (x2953<((x2954<<x2955)|x2956));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3103 = 1;
	int32_t t46 = -216057;

	t46 = (x3101<((x3102<<x3103)|x3104));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3122 = INT16_MAX;
	int8_t x3123 = 3;
	int8_t x3124 = INT8_MIN;
	volatile int32_t t47 = 44876954;

	t47 = (x3121<((x3122<<x3123)|x3124));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3149 = UINT32_MAX;
	uint64_t x3150 = UINT64_MAX;
	uint8_t x3151 = 3U;
	uint64_t x3152 = 1505003807952LLU;
	volatile int32_t t48 = -547541;

	t48 = (x3149<((x3150<<x3151)|x3152));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3177 = -1;
	uint8_t x3178 = 3U;
	int16_t x3179 = 17;
	int8_t x3180 = 6;
	static int32_t t49 = -1;

	t49 = (x3177<((x3178<<x3179)|x3180));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x3201 = UINT16_MAX;
	uint16_t x3202 = 22365U;
	int16_t x3203 = 1;
	int64_t x3204 = INT64_MIN;
	int32_t t50 = 826068;

	t50 = (x3201<((x3202<<x3203)|x3204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3269 = 63;
	volatile int32_t x3270 = 49244;
	uint8_t x3271 = 5U;
	volatile int64_t x3272 = 2569182911819LL;
	volatile int32_t t51 = -1127223;

	t51 = (x3269<((x3270<<x3271)|x3272));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3290 = 15417649018LLU;
	uint16_t x3291 = 19U;
	int32_t x3292 = -154511;
	int32_t t52 = 410;

	t52 = (x3289<((x3290<<x3291)|x3292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3294 = 1867740964U;
	static int8_t x3295 = 6;
	uint32_t x3296 = 286595614U;

	t53 = (x3293<((x3294<<x3295)|x3296));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x3353 = INT32_MAX;
	uint8_t x3354 = 1U;
	volatile uint8_t x3355 = 1U;
	volatile uint16_t x3356 = UINT16_MAX;
	volatile int32_t t54 = 359;

	t54 = (x3353<((x3354<<x3355)|x3356));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3385 = 1783LLU;
	static volatile int8_t x3386 = 1;
	volatile int32_t t55 = 4652611;

	t55 = (x3385<((x3386<<x3387)|x3388));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3401 = -3;
	int8_t x3403 = 7;
	int16_t x3404 = 1013;
	int32_t t56 = 45923280;

	t56 = (x3401<((x3402<<x3403)|x3404));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3497 = INT64_MIN;
	int8_t x3498 = INT8_MAX;
	uint32_t x3499 = 16U;
	int32_t t57 = -5537;

	t57 = (x3497<((x3498<<x3499)|x3500));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3773 = 45496LLU;
	uint16_t x3774 = UINT16_MAX;
	volatile uint32_t x3775 = 4U;
	volatile int64_t x3776 = -1LL;

	t58 = (x3773<((x3774<<x3775)|x3776));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3925 = 62381;
	uint8_t x3926 = 62U;
	uint16_t x3927 = 4U;
	uint8_t x3928 = UINT8_MAX;
	static volatile int32_t t59 = 53070;

	t59 = (x3925<((x3926<<x3927)|x3928));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3941 = 953718U;
	int64_t x3942 = 13544158038654LL;
	int32_t x3944 = -1;
	volatile int32_t t60 = -2;

	t60 = (x3941<((x3942<<x3943)|x3944));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3965 = -1LL;
	uint64_t x3967 = 0LLU;
	int16_t x3968 = 355;

	t61 = (x3965<((x3966<<x3967)|x3968));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4025 = INT16_MAX;
	static int8_t x4028 = -1;
	volatile int32_t t62 = 33203927;

	t62 = (x4025<((x4026<<x4027)|x4028));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4029 = -1;
	volatile int16_t x4030 = 153;
	uint32_t x4031 = 2U;
	volatile int16_t x4032 = INT16_MIN;
	int32_t t63 = -30;

	t63 = (x4029<((x4030<<x4031)|x4032));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4066 = 149;
	volatile int32_t x4068 = -1;
	int32_t t64 = 6507;

	t64 = (x4065<((x4066<<x4067)|x4068));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4085 = 0LL;
	static uint8_t x4086 = 1U;
	int16_t x4087 = 0;
	int8_t x4088 = INT8_MAX;
	static int32_t t65 = 105952428;

	t65 = (x4085<((x4086<<x4087)|x4088));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4169 = UINT32_MAX;
	uint8_t x4170 = UINT8_MAX;
	static int16_t x4171 = 1;
	static volatile int32_t t66 = 975238550;

	t66 = (x4169<((x4170<<x4171)|x4172));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x4213 = UINT64_MAX;
	uint16_t x4214 = 16208U;
	volatile int8_t x4215 = 0;
	static int32_t x4216 = INT32_MAX;

	t67 = (x4213<((x4214<<x4215)|x4216));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x4274 = 6112807LLU;
	volatile int8_t x4275 = 60;
	int32_t x4276 = INT32_MIN;
	volatile int32_t t68 = 18077;

	t68 = (x4273<((x4274<<x4275)|x4276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4313 = UINT32_MAX;
	uint32_t x4314 = UINT32_MAX;
	volatile int16_t x4315 = 22;
	static int32_t x4316 = -5097403;
	volatile int32_t t69 = -450517701;

	t69 = (x4313<((x4314<<x4315)|x4316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4429 = 0U;
	uint32_t x4430 = 76703866U;
	uint8_t x4431 = 17U;
	uint8_t x4432 = 16U;
	volatile int32_t t70 = -24166;

	t70 = (x4429<((x4430<<x4431)|x4432));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4462 = 2U;
	volatile uint8_t x4463 = 15U;
	int32_t t71 = -42859;

	t71 = (x4461<((x4462<<x4463)|x4464));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4501 = UINT64_MAX;
	volatile int64_t x4502 = 2888386551501LL;
	static volatile int32_t x4504 = -902951561;
	volatile int32_t t72 = 50364;

	t72 = (x4501<((x4502<<x4503)|x4504));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4553 = 2;
	uint8_t x4554 = UINT8_MAX;
	uint8_t x4555 = 0U;
	int8_t x4556 = -5;
	volatile int32_t t73 = -25770582;

	t73 = (x4553<((x4554<<x4555)|x4556));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x4590 = 731U;
	uint8_t x4591 = 1U;
	static uint8_t x4592 = 2U;
	static int32_t t74 = -826305502;

	t74 = (x4589<((x4590<<x4591)|x4592));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4941 = 0;
	volatile uint32_t x4942 = UINT32_MAX;
	volatile uint8_t x4943 = 0U;
	volatile int32_t t75 = -8351370;

	t75 = (x4941<((x4942<<x4943)|x4944));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5041 = 0U;
	static int16_t x5042 = 246;
	uint8_t x5043 = 13U;
	volatile int32_t t76 = -13203513;

	t76 = (x5041<((x5042<<x5043)|x5044));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x5050 = 113U;
	uint64_t x5051 = 26LLU;
	int16_t x5052 = 2179;
	int32_t t77 = 59072455;

	t77 = (x5049<((x5050<<x5051)|x5052));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5053 = -39453;
	int16_t x5054 = 0;
	uint32_t x5055 = 1U;
	uint32_t x5056 = 8121U;

	t78 = (x5053<((x5054<<x5055)|x5056));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5097 = 7021460LLU;
	uint32_t x5098 = 497U;
	int16_t x5099 = 0;
	int16_t x5100 = 1236;
	volatile int32_t t79 = -29823855;

	t79 = (x5097<((x5098<<x5099)|x5100));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5109 = INT8_MIN;
	uint64_t x5110 = 872445776LLU;
	static uint8_t x5111 = 3U;
	static int32_t x5112 = -1;
	volatile int32_t t80 = 880;

	t80 = (x5109<((x5110<<x5111)|x5112));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5141 = INT16_MIN;
	int32_t x5142 = 1;
	static volatile int16_t x5143 = 1;
	uint32_t x5144 = UINT32_MAX;
	volatile int32_t t81 = 2416185;

	t81 = (x5141<((x5142<<x5143)|x5144));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5169 = 4879087970LL;
	volatile uint8_t x5171 = 0U;
	static uint64_t x5172 = 8333404LLU;
	int32_t t82 = -389;

	t82 = (x5169<((x5170<<x5171)|x5172));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5298 = INT16_MAX;
	uint8_t x5299 = 0U;

	t83 = (x5297<((x5298<<x5299)|x5300));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5533 = UINT64_MAX;
	uint8_t x5534 = 110U;
	uint64_t x5535 = 6LLU;
	int16_t x5536 = -3;

	t84 = (x5533<((x5534<<x5535)|x5536));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x5549 = INT64_MIN;
	uint32_t x5550 = 1658716612U;
	uint32_t x5552 = 1064117U;
	int32_t t85 = 366314179;

	t85 = (x5549<((x5550<<x5551)|x5552));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5566 = 109;
	uint8_t x5567 = 2U;
	int64_t x5568 = -1LL;

	t86 = (x5565<((x5566<<x5567)|x5568));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5589 = INT64_MIN;
	uint32_t x5592 = 202234910U;
	static volatile int32_t t87 = -3676;

	t87 = (x5589<((x5590<<x5591)|x5592));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5813 = -1;
	int16_t x5814 = 6;
	volatile int32_t t88 = 108495;

	t88 = (x5813<((x5814<<x5815)|x5816));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5817 = -1LL;
	uint8_t x5819 = 2U;
	static int32_t x5820 = -1;
	int32_t t89 = -1;

	t89 = (x5817<((x5818<<x5819)|x5820));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5865 = INT64_MAX;
	uint16_t x5867 = 3U;
	int16_t x5868 = 1687;
	int32_t t90 = -7366;

	t90 = (x5865<((x5866<<x5867)|x5868));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5869 = UINT32_MAX;
	static int16_t x5871 = 1;
	volatile uint32_t x5872 = UINT32_MAX;

	t91 = (x5869<((x5870<<x5871)|x5872));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x5901 = 1U;
	volatile uint16_t x5902 = UINT16_MAX;
	static int64_t x5904 = 8LL;
	volatile int32_t t92 = 215015;

	t92 = (x5901<((x5902<<x5903)|x5904));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5957 = INT64_MIN;
	volatile uint8_t x5958 = 73U;
	uint32_t x5959 = 14U;
	volatile int32_t x5960 = -228884293;
	volatile int32_t t93 = 6;

	t93 = (x5957<((x5958<<x5959)|x5960));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x5965 = UINT64_MAX;
	int8_t x5966 = 1;
	uint8_t x5967 = 1U;
	uint64_t x5968 = 129LLU;
	int32_t t94 = -4755;

	t94 = (x5965<((x5966<<x5967)|x5968));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5977 = INT8_MIN;
	volatile uint64_t x5978 = 22238660755649LLU;
	int8_t x5979 = 12;

	t95 = (x5977<((x5978<<x5979)|x5980));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5989 = 15550U;
	uint16_t x5991 = 6U;
	int32_t t96 = 1;

	t96 = (x5989<((x5990<<x5991)|x5992));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6065 = INT32_MAX;
	int32_t x6066 = INT32_MAX;
	static uint64_t x6068 = 354847LLU;

	t97 = (x6065<((x6066<<x6067)|x6068));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6126 = UINT32_MAX;
	static uint8_t x6127 = 6U;
	int8_t x6128 = -2;

	t98 = (x6125<((x6126<<x6127)|x6128));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x6177 = INT8_MIN;
	volatile uint16_t x6178 = 2U;
	volatile uint16_t x6179 = 2U;
	int8_t x6180 = -1;

	t99 = (x6177<((x6178<<x6179)|x6180));

	if (t99 != 1) { NG(); } else { ; }
	
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

