#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 1U;
volatile uint8_t x8 = 6U;
int8_t x20 = INT8_MAX;
int32_t t4 = 76610871;
volatile int8_t x594 = 12;
static volatile int64_t t7 = -4191434033367LL;
uint8_t x670 = 26U;
volatile int32_t t9 = -353701933;
int16_t x859 = -294;
static volatile uint64_t x860 = 327LLU;
uint64_t t10 = 245569597476LLU;
static uint64_t t11 = 46680193307478828LLU;
int64_t x1099 = INT64_MIN;
int8_t x1309 = 0;
int64_t x1310 = 0LL;
int32_t t15 = -286136879;
static uint16_t x1461 = UINT16_MAX;
static volatile int32_t t17 = 7325110;
int64_t x1479 = -811569641919787LL;
int64_t t18 = -1LL;
static int32_t x1515 = 24196;
int32_t t19 = 17869;
static int64_t t20 = 2577729347550817263LL;
int32_t x1561 = INT32_MAX;
int8_t x1609 = INT8_MAX;
int8_t x1610 = 4;
uint8_t x1681 = UINT8_MAX;
uint8_t x1683 = 0U;
static uint32_t x1733 = 174U;
uint8_t x1758 = 14U;
int8_t x1841 = INT8_MAX;
int16_t x1842 = 7;
volatile int64_t t31 = -26536603551431757LL;
uint16_t x1979 = 157U;
static volatile uint16_t x2005 = 1U;
int64_t x2037 = INT64_MAX;
uint64_t x2038 = 5LLU;
int8_t x2039 = -27;
int32_t x2040 = INT32_MIN;
uint32_t x2343 = UINT32_MAX;
uint32_t t38 = 655U;
int16_t x2356 = INT16_MAX;
uint64_t t39 = 1073258232095715LLU;
static int64_t x2413 = INT64_MAX;
static uint32_t x2415 = 0U;
int64_t x2420 = 443169257675021448LL;
static int16_t x2877 = INT16_MAX;
volatile int32_t t47 = -901625525;
static volatile uint64_t x2996 = 1770159407416063524LLU;
int32_t x3105 = INT32_MAX;
int32_t x3209 = 2;
uint32_t x3211 = 123768U;
int32_t x3387 = -49;
int8_t x3408 = -1;
static int32_t x3439 = -1;
static volatile int16_t x3440 = -1;
static uint64_t x3531 = 88784372123030LLU;
uint8_t x3598 = 7U;
static uint16_t x3605 = UINT16_MAX;
int16_t x3608 = -1;
volatile int32_t x3652 = -1;
int64_t t62 = -52289671951LL;
uint8_t x3699 = 2U;
int32_t t63 = 15;
volatile uint64_t x3711 = 0LLU;
static uint64_t x3712 = UINT64_MAX;
uint64_t x3720 = 92705LLU;
static volatile int16_t x3833 = 3391;
static int8_t x3944 = INT8_MIN;
int64_t t69 = -4014364413LL;
uint8_t x4085 = UINT8_MAX;
volatile int32_t x4088 = INT32_MIN;
uint8_t x4244 = 10U;
uint32_t x4284 = UINT32_MAX;
static int16_t x4306 = 2;
volatile int64_t t78 = 18610478LL;
uint8_t x4445 = 2U;
uint64_t x4448 = UINT64_MAX;
uint64_t x4471 = 9853718987996LLU;
volatile uint32_t x4485 = 1546U;
uint8_t x4487 = 0U;
uint16_t x4489 = 5U;
uint8_t x4524 = UINT8_MAX;
int32_t t83 = 24630636;
uint8_t x4559 = 17U;
int16_t x4637 = INT16_MAX;
volatile uint8_t x4640 = UINT8_MAX;
volatile int16_t x5067 = INT16_MAX;
static volatile int32_t t88 = -99811827;
static int8_t x5085 = INT8_MAX;
int32_t t89 = 11775;
uint16_t x5222 = 7U;
volatile uint64_t t90 = 943975661010LLU;
uint8_t x5265 = UINT8_MAX;
static uint8_t x5266 = 0U;
volatile uint64_t t92 = UINT64_MAX;
int8_t x5607 = INT8_MIN;
volatile uint64_t t93 = 7268004493694LLU;
static int8_t x5640 = INT8_MIN;
uint32_t x5646 = 2U;
uint16_t x5647 = 77U;
int16_t x5809 = 9252;
uint32_t x5812 = 29U;
volatile uint32_t t99 = 397251662U;


void f0(void) {
	uint16_t x6 = 1U;
	static uint32_t x7 = UINT32_MAX;
	uint32_t t0 = 1281U;

	t0 = ((x5>>x6)|(x7&x8));

	if (t0 != 6U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x17 = INT8_MAX;
	volatile int8_t x18 = 4;
	static uint32_t x19 = UINT32_MAX;
	uint32_t t1 = 114656U;

	t1 = ((x17>>x18)|(x19&x20));

	if (t1 != 127U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x25 = UINT16_MAX;
	static int64_t x26 = 1LL;
	int64_t x27 = -1LL;
	static volatile int8_t x28 = -10;
	volatile int64_t t2 = 435839LL;

	t2 = ((x25>>x26)|(x27&x28));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint16_t x150 = 9U;
	int32_t x151 = 7;
	static int8_t x152 = 1;
	uint32_t t3 = 3028752U;

	t3 = ((x149>>x150)|(x151&x152));

	if (t3 != 8388607U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x401 = INT16_MAX;
	volatile uint16_t x402 = 24U;
	int32_t x403 = -7741;
	int8_t x404 = -62;

	t4 = ((x401>>x402)|(x403&x404));

	if (t4 != -7742) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x593 = 1606U;
	int64_t x595 = INT64_MIN;
	uint8_t x596 = UINT8_MAX;
	volatile int64_t t5 = 33341005844LL;

	t5 = ((x593>>x594)|(x595&x596));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x633 = 10515959268203847LLU;
	uint16_t x634 = 0U;
	int32_t x635 = INT32_MIN;
	volatile int16_t x636 = INT16_MIN;
	static volatile uint64_t t6 = 176797149185LLU;

	t6 = ((x633>>x634)|(x635&x636));

	if (t6 != 18446744071841471815LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x653 = 1977642518759408LL;
	volatile uint8_t x654 = 2U;
	static uint16_t x655 = 15501U;
	uint32_t x656 = UINT32_MAX;

	t7 = ((x653>>x654)|(x655&x656));

	if (t7 != 494410629692925LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x669 = INT8_MAX;
	uint32_t x671 = 426U;
	int32_t x672 = -1;
	uint32_t t8 = 7490U;

	t8 = ((x669>>x670)|(x671&x672));

	if (t8 != 426U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x733 = 221U;
	int16_t x734 = 4;
	static int16_t x735 = INT16_MAX;
	int16_t x736 = INT16_MIN;

	t9 = ((x733>>x734)|(x735&x736));

	if (t9 != 13) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x857 = 275U;
	int8_t x858 = 1;

	t10 = ((x857>>x858)|(x859&x860));

	if (t10 != 203LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x1081 = 83U;
	uint8_t x1082 = 15U;
	uint64_t x1083 = 3719260LLU;
	int64_t x1084 = INT64_MIN;

	t11 = ((x1081>>x1082)|(x1083&x1084));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x1097 = 1U;
	volatile int8_t x1098 = 1;
	volatile uint8_t x1100 = 1U;
	int64_t t12 = -422398LL;

	t12 = ((x1097>>x1098)|(x1099&x1100));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x1145 = 1U;
	static volatile uint8_t x1146 = 7U;
	volatile uint64_t x1147 = 5408071281647353LLU;
	uint32_t x1148 = 7018U;
	static uint64_t t13 = 3716LLU;

	t13 = ((x1145>>x1146)|(x1147&x1148));

	if (t13 != 6760LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1157 = 244LLU;
	uint8_t x1158 = 1U;
	uint64_t x1159 = 223926639LLU;
	static volatile int32_t x1160 = -1;
	uint64_t t14 = 94648901474033LLU;

	t14 = ((x1157>>x1158)|(x1159&x1160));

	if (t14 != 223926655LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1311 = -1;
	volatile int16_t x1312 = -1;

	t15 = ((x1309>>x1310)|(x1311&x1312));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1462 = 9;
	int64_t x1463 = -551LL;
	volatile int32_t x1464 = -1;
	int64_t t16 = 2946294103104LL;

	t16 = ((x1461>>x1462)|(x1463&x1464));

	if (t16 != -513LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x1473 = 0;
	volatile int8_t x1474 = 0;
	volatile int16_t x1475 = INT16_MIN;
	volatile int32_t x1476 = INT32_MAX;

	t17 = ((x1473>>x1474)|(x1475&x1476));

	if (t17 != 2147450880) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1477 = 608U;
	uint8_t x1478 = 3U;
	uint32_t x1480 = UINT32_MAX;

	t18 = ((x1477>>x1478)|(x1479&x1480));

	if (t18 != 3083365085LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1513 = 0;
	int8_t x1514 = 3;
	static int16_t x1516 = 109;

	t19 = ((x1513>>x1514)|(x1515&x1516));

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1545 = INT64_MAX;
	int8_t x1546 = 31;
	static uint16_t x1547 = 38U;
	static int64_t x1548 = -1LL;

	t20 = ((x1545>>x1546)|(x1547&x1548));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1562 = 11LL;
	static uint16_t x1563 = UINT16_MAX;
	static volatile uint16_t x1564 = 3U;
	volatile int32_t t21 = 53;

	t21 = ((x1561>>x1562)|(x1563&x1564));

	if (t21 != 1048575) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1611 = INT32_MAX;
	int32_t x1612 = -17;
	volatile int32_t t22 = 2;

	t22 = ((x1609>>x1610)|(x1611&x1612));

	if (t22 != 2147483631) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1633 = INT32_MAX;
	volatile uint8_t x1634 = 26U;
	int32_t x1635 = 5;
	uint32_t x1636 = 25943U;
	uint32_t t23 = 23U;

	t23 = ((x1633>>x1634)|(x1635&x1636));

	if (t23 != 31U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1682 = 4;
	uint8_t x1684 = 12U;
	static volatile int32_t t24 = 130037363;

	t24 = ((x1681>>x1682)|(x1683&x1684));

	if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1685 = 254630LLU;
	volatile int8_t x1686 = 0;
	uint64_t x1687 = UINT64_MAX;
	int8_t x1688 = 1;
	volatile uint64_t t25 = 3046171570526LLU;

	t25 = ((x1685>>x1686)|(x1687&x1688));

	if (t25 != 254631LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1734 = 24;
	volatile int8_t x1735 = -1;
	int16_t x1736 = INT16_MIN;
	uint32_t t26 = 34U;

	t26 = ((x1733>>x1734)|(x1735&x1736));

	if (t26 != 4294934528U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1749 = UINT64_MAX;
	static uint8_t x1750 = 1U;
	int16_t x1751 = -1022;
	int8_t x1752 = -1;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = ((x1749>>x1750)|(x1751&x1752));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1757 = 3U;
	static uint16_t x1759 = UINT16_MAX;
	static int64_t x1760 = 534187LL;
	volatile int64_t t28 = -126465458859164674LL;

	t28 = ((x1757>>x1758)|(x1759&x1760));

	if (t28 != 9899LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1843 = INT16_MAX;
	static int64_t x1844 = -376174725LL;
	volatile int64_t t29 = -1823835563825LL;

	t29 = ((x1841>>x1842)|(x1843&x1844));

	if (t29 != 1915LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1937 = UINT8_MAX;
	volatile uint8_t x1938 = 1U;
	uint8_t x1939 = 93U;
	static uint8_t x1940 = 3U;
	volatile int32_t t30 = 113121;

	t30 = ((x1937>>x1938)|(x1939&x1940));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1965 = INT64_MAX;
	uint8_t x1966 = 4U;
	volatile int8_t x1967 = 0;
	uint8_t x1968 = UINT8_MAX;

	t31 = ((x1965>>x1966)|(x1967&x1968));

	if (t31 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1977 = INT64_MAX;
	static int8_t x1978 = 0;
	uint64_t x1980 = UINT64_MAX;
	uint64_t t32 = 5654169LLU;

	t32 = ((x1977>>x1978)|(x1979&x1980));

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1981 = 115U;
	int8_t x1982 = 1;
	static int64_t x1983 = INT64_MAX;
	uint64_t x1984 = 8052814168185472189LLU;
	volatile uint64_t t33 = 1533660385LLU;

	t33 = ((x1981>>x1982)|(x1983&x1984));

	if (t33 != 8052814168185472189LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2006 = 1U;
	uint64_t x2007 = UINT64_MAX;
	int16_t x2008 = -1;
	static uint64_t t34 = UINT64_MAX;

	t34 = ((x2005>>x2006)|(x2007&x2008));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2021 = INT32_MAX;
	static volatile uint8_t x2022 = 1U;
	int8_t x2023 = INT8_MIN;
	int8_t x2024 = -1;
	volatile int32_t t35 = -425;

	t35 = ((x2021>>x2022)|(x2023&x2024));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t t36 = 2428261383799LL;

	t36 = ((x2037>>x2038)|(x2039&x2040));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2229 = 470323;
	uint16_t x2230 = 0U;
	uint32_t x2231 = 0U;
	uint8_t x2232 = 15U;
	volatile uint32_t t37 = 29765826U;

	t37 = ((x2229>>x2230)|(x2231&x2232));

	if (t37 != 470323U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2341 = INT16_MAX;
	uint8_t x2342 = 2U;
	volatile int32_t x2344 = INT32_MIN;

	t38 = ((x2341>>x2342)|(x2343&x2344));

	if (t38 != 2147491839U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2353 = 32048867848LLU;
	int16_t x2354 = 49;
	uint64_t x2355 = 357072916680LLU;

	t39 = ((x2353>>x2354)|(x2355&x2356));

	if (t39 != 20680LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2361 = 1861784342553756990LLU;
	static volatile uint16_t x2362 = 63U;
	int32_t x2363 = 517;
	int64_t x2364 = INT64_MIN;
	uint64_t t40 = 38409503652918376LLU;

	t40 = ((x2361>>x2362)|(x2363&x2364));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2414 = 12;
	int64_t x2416 = -1LL;
	volatile int64_t t41 = -5989LL;

	t41 = ((x2413>>x2414)|(x2415&x2416));

	if (t41 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2417 = 116U;
	static int8_t x2418 = 1;
	int64_t x2419 = INT64_MIN;
	volatile int64_t t42 = 0LL;

	t42 = ((x2417>>x2418)|(x2419&x2420));

	if (t42 != 58LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x2529 = 98017U;
	int8_t x2530 = 7;
	int32_t x2531 = 11;
	volatile uint64_t x2532 = 7250811718368670LLU;
	volatile uint64_t t43 = 12443LLU;

	t43 = ((x2529>>x2530)|(x2531&x2532));

	if (t43 != 767LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2649 = UINT32_MAX;
	int8_t x2650 = 1;
	int32_t x2651 = -1670016;
	static uint16_t x2652 = 5U;
	uint32_t t44 = 314U;

	t44 = ((x2649>>x2650)|(x2651&x2652));

	if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2781 = 545379280556912859LLU;
	int64_t x2782 = 4LL;
	static int8_t x2783 = -6;
	uint8_t x2784 = 97U;
	volatile uint64_t t45 = 92LLU;

	t45 = ((x2781>>x2782)|(x2783&x2784));

	if (t45 != 34086205034807149LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2849 = 0LL;
	uint8_t x2850 = 1U;
	int32_t x2851 = -1;
	static int8_t x2852 = 3;
	volatile int64_t t46 = 31LL;

	t46 = ((x2849>>x2850)|(x2851&x2852));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2878 = 1;
	int32_t x2879 = INT32_MIN;
	uint16_t x2880 = UINT16_MAX;

	t47 = ((x2877>>x2878)|(x2879&x2880));

	if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2909 = 110023043799LLU;
	static volatile uint8_t x2910 = 2U;
	static int32_t x2911 = -2337293;
	int16_t x2912 = INT16_MAX;
	uint64_t t48 = 63LLU;

	t48 = ((x2909>>x2910)|(x2911&x2912));

	if (t48 != 27505778679LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2961 = INT64_MAX;
	static uint32_t x2962 = 2U;
	int32_t x2963 = INT32_MAX;
	volatile int8_t x2964 = 2;
	int64_t t49 = 1LL;

	t49 = ((x2961>>x2962)|(x2963&x2964));

	if (t49 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2993 = 986;
	uint8_t x2994 = 0U;
	volatile int16_t x2995 = INT16_MIN;
	static uint64_t t50 = 1215363LLU;

	t50 = ((x2993>>x2994)|(x2995&x2996));

	if (t50 != 1770159407416050650LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3073 = 0U;
	uint8_t x3074 = 3U;
	volatile uint16_t x3075 = UINT16_MAX;
	volatile int32_t x3076 = 148;
	volatile int32_t t51 = -41087551;

	t51 = ((x3073>>x3074)|(x3075&x3076));

	if (t51 != 148) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x3106 = 0U;
	int16_t x3107 = INT16_MIN;
	int32_t x3108 = -25;
	volatile int32_t t52 = -1028694397;

	t52 = ((x3105>>x3106)|(x3107&x3108));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3210 = 1U;
	static int16_t x3212 = INT16_MAX;
	volatile uint32_t t53 = 64628255U;

	t53 = ((x3209>>x3210)|(x3211&x3212));

	if (t53 != 25465U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3241 = INT32_MAX;
	volatile uint32_t x3242 = 12U;
	int16_t x3243 = -9;
	int64_t x3244 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = ((x3241>>x3242)|(x3243&x3244));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3261 = 0;
	int16_t x3262 = 1;
	int32_t x3263 = INT32_MIN;
	int64_t x3264 = INT64_MIN;
	static volatile int64_t t55 = INT64_MIN;

	t55 = ((x3261>>x3262)|(x3263&x3264));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3385 = 5;
	static int64_t x3386 = 2LL;
	volatile int16_t x3388 = INT16_MIN;
	int32_t t56 = -1029527;

	t56 = ((x3385>>x3386)|(x3387&x3388));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3405 = 713616474029098258LLU;
	uint8_t x3406 = 6U;
	uint32_t x3407 = 13782U;
	uint64_t t57 = 255542361LLU;

	t57 = ((x3405>>x3406)|(x3407&x3408));

	if (t57 != 11150257406705110LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3437 = 16;
	uint64_t x3438 = 12LLU;
	int32_t t58 = -3;

	t58 = ((x3437>>x3438)|(x3439&x3440));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3529 = 6;
	volatile int64_t x3530 = 2LL;
	uint32_t x3532 = 861415U;
	uint64_t t59 = 1050LLU;

	t59 = ((x3529>>x3530)|(x3531&x3532));

	if (t59 != 263303LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3597 = 12U;
	volatile int32_t x3599 = -1;
	int64_t x3600 = INT64_MAX;
	volatile int64_t t60 = INT64_MAX;

	t60 = ((x3597>>x3598)|(x3599&x3600));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3606 = 2U;
	volatile int32_t x3607 = -1;
	static int32_t t61 = 1647;

	t61 = ((x3605>>x3606)|(x3607&x3608));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3649 = INT16_MAX;
	uint64_t x3650 = 4LLU;
	int64_t x3651 = INT64_MIN;

	t62 = ((x3649>>x3650)|(x3651&x3652));

	if (t62 != -9223372036854773761LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3697 = 38U;
	volatile int16_t x3698 = 5;
	volatile int16_t x3700 = INT16_MIN;

	t63 = ((x3697>>x3698)|(x3699&x3700));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3709 = 6021U;
	uint8_t x3710 = 2U;
	volatile uint64_t t64 = 50002133085458LLU;

	t64 = ((x3709>>x3710)|(x3711&x3712));

	if (t64 != 1505LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3717 = INT16_MAX;
	uint8_t x3718 = 1U;
	uint64_t x3719 = 28419526335206105LLU;
	uint64_t t65 = 96692746LLU;

	t65 = ((x3717>>x3718)|(x3719&x3720));

	if (t65 != 81919LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3789 = 20LL;
	int16_t x3790 = 0;
	int32_t x3791 = INT32_MAX;
	int64_t x3792 = 61559LL;
	volatile int64_t t66 = 59819532449LL;

	t66 = ((x3789>>x3790)|(x3791&x3792));

	if (t66 != 61559LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3834 = 30U;
	int32_t x3835 = INT32_MAX;
	uint64_t x3836 = 8183347LLU;
	uint64_t t67 = 212426961397LLU;

	t67 = ((x3833>>x3834)|(x3835&x3836));

	if (t67 != 8183347LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3881 = 0;
	static uint32_t x3882 = 3U;
	static int64_t x3883 = -1037790797949LL;
	int64_t x3884 = -1602346747326255LL;
	volatile int64_t t68 = -50184003782519952LL;

	t68 = ((x3881>>x3882)|(x3883&x3884));

	if (t68 != -1603036106387327LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3941 = 52LL;
	uint8_t x3942 = 7U;
	uint32_t x3943 = 86015U;

	t69 = ((x3941>>x3942)|(x3943&x3944));

	if (t69 != 85888LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4029 = UINT32_MAX;
	uint8_t x4030 = 3U;
	static int32_t x4031 = INT32_MAX;
	volatile int64_t x4032 = INT64_MIN;
	volatile int64_t t70 = 3488998436LL;

	t70 = ((x4029>>x4030)|(x4031&x4032));

	if (t70 != 536870911LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x4065 = UINT32_MAX;
	uint8_t x4066 = 1U;
	int8_t x4067 = INT8_MAX;
	static volatile int64_t x4068 = INT64_MIN;
	int64_t t71 = 257815LL;

	t71 = ((x4065>>x4066)|(x4067&x4068));

	if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x4086 = 21U;
	uint16_t x4087 = UINT16_MAX;
	volatile int32_t t72 = -620610;

	t72 = ((x4085>>x4086)|(x4087&x4088));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4121 = 3U;
	static uint8_t x4122 = 7U;
	static uint32_t x4123 = 497U;
	uint64_t x4124 = 51038288545017LLU;
	volatile uint64_t t73 = 9905175LLU;

	t73 = ((x4121>>x4122)|(x4123&x4124));

	if (t73 != 241LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4241 = 6941751431967LLU;
	uint16_t x4242 = 19U;
	volatile uint32_t x4243 = UINT32_MAX;
	volatile uint64_t t74 = 11LLU;

	t74 = ((x4241>>x4242)|(x4243&x4244));

	if (t74 != 13240350LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4269 = UINT8_MAX;
	int8_t x4270 = 0;
	int8_t x4271 = -1;
	volatile int32_t x4272 = INT32_MAX;
	volatile int32_t t75 = INT32_MAX;

	t75 = ((x4269>>x4270)|(x4271&x4272));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4281 = UINT32_MAX;
	uint64_t x4282 = 4LLU;
	uint32_t x4283 = 1U;
	volatile uint32_t t76 = 36731822U;

	t76 = ((x4281>>x4282)|(x4283&x4284));

	if (t76 != 268435455U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4305 = INT64_MAX;
	int64_t x4307 = 15354339350LL;
	static int64_t x4308 = INT64_MIN;
	volatile int64_t t77 = 4119718351433232141LL;

	t77 = ((x4305>>x4306)|(x4307&x4308));

	if (t77 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4409 = 4319930899637406010LL;
	volatile uint32_t x4410 = 21U;
	static int16_t x4411 = -145;
	uint8_t x4412 = UINT8_MAX;

	t78 = ((x4409>>x4410)|(x4411&x4412));

	if (t78 != 2059903573887LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4446 = 3U;
	volatile int16_t x4447 = -29;
	uint64_t t79 = 22LLU;

	t79 = ((x4445>>x4446)|(x4447&x4448));

	if (t79 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4469 = 32420;
	uint8_t x4470 = 7U;
	int64_t x4472 = INT64_MIN;
	uint64_t t80 = 292847894558LLU;

	t80 = ((x4469>>x4470)|(x4471&x4472));

	if (t80 != 253LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4486 = 0;
	static volatile int8_t x4488 = INT8_MIN;
	volatile uint32_t t81 = 109847U;

	t81 = ((x4485>>x4486)|(x4487&x4488));

	if (t81 != 1546U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4490 = 0U;
	int32_t x4491 = INT32_MIN;
	static volatile int32_t x4492 = INT32_MIN;
	int32_t t82 = 378;

	t82 = ((x4489>>x4490)|(x4491&x4492));

	if (t82 != -2147483643) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4521 = UINT16_MAX;
	int16_t x4522 = 1;
	int16_t x4523 = 13370;

	t83 = ((x4521>>x4522)|(x4523&x4524));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x4557 = 1677428;
	volatile int8_t x4558 = 3;
	volatile int64_t x4560 = 0LL;
	int64_t t84 = -73979996518438LL;

	t84 = ((x4557>>x4558)|(x4559&x4560));

	if (t84 != 209678LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4638 = 0U;
	int32_t x4639 = 121879519;
	int32_t t85 = 46485415;

	t85 = ((x4637>>x4638)|(x4639&x4640));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4925 = 5931;
	uint8_t x4926 = 0U;
	uint64_t x4927 = 2410958LLU;
	int64_t x4928 = -1LL;
	volatile uint64_t t86 = 31824561714270LLU;

	t86 = ((x4925>>x4926)|(x4927&x4928));

	if (t86 != 2416623LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5037 = UINT64_MAX;
	static uint8_t x5038 = 2U;
	volatile uint64_t x5039 = 14058835665LLU;
	int32_t x5040 = 5089;
	volatile uint64_t t87 = 1110473LLU;

	t87 = ((x5037>>x5038)|(x5039&x5040));

	if (t87 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5065 = INT16_MAX;
	volatile int8_t x5066 = 31;
	int32_t x5068 = INT32_MIN;

	t88 = ((x5065>>x5066)|(x5067&x5068));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5086 = 1U;
	int32_t x5087 = INT32_MAX;
	uint16_t x5088 = 1956U;

	t89 = ((x5085>>x5086)|(x5087&x5088));

	if (t89 != 1983) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5221 = UINT64_MAX;
	uint8_t x5223 = 28U;
	int16_t x5224 = INT16_MIN;

	t90 = ((x5221>>x5222)|(x5223&x5224));

	if (t90 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5267 = 71U;
	static volatile uint32_t x5268 = 89629U;
	static volatile uint32_t t91 = 300689U;

	t91 = ((x5265>>x5266)|(x5267&x5268));

	if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5569 = UINT64_MAX;
	static int64_t x5570 = 0LL;
	volatile int16_t x5571 = 3845;
	int16_t x5572 = INT16_MIN;

	t92 = ((x5569>>x5570)|(x5571&x5572));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5605 = UINT64_MAX;
	int8_t x5606 = 1;
	int8_t x5608 = INT8_MAX;

	t93 = ((x5605>>x5606)|(x5607&x5608));

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5637 = 46U;
	uint8_t x5638 = 5U;
	int8_t x5639 = INT8_MAX;
	volatile int32_t t94 = 1;

	t94 = ((x5637>>x5638)|(x5639&x5640));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5645 = INT8_MAX;
	int8_t x5648 = 0;
	volatile int32_t t95 = 1;

	t95 = ((x5645>>x5646)|(x5647&x5648));

	if (t95 != 31) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5681 = INT64_MAX;
	volatile uint16_t x5682 = 55U;
	int64_t x5683 = INT64_MIN;
	static int8_t x5684 = 14;
	int64_t t96 = 58289587616275LL;

	t96 = ((x5681>>x5682)|(x5683&x5684));

	if (t96 != 255LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5729 = 0;
	uint16_t x5730 = 1U;
	uint16_t x5731 = 446U;
	volatile int64_t x5732 = -1LL;
	int64_t t97 = 112357LL;

	t97 = ((x5729>>x5730)|(x5731&x5732));

	if (t97 != 446LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5737 = UINT64_MAX;
	uint32_t x5738 = 9U;
	static uint32_t x5739 = UINT32_MAX;
	int64_t x5740 = INT64_MIN;
	static volatile uint64_t t98 = 250362421475708270LLU;

	t98 = ((x5737>>x5738)|(x5739&x5740));

	if (t98 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5810 = 0U;
	uint32_t x5811 = 5644U;

	t99 = ((x5809>>x5810)|(x5811&x5812));

	if (t99 != 9260U) { NG(); } else { ; }
	
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

