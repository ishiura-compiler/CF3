#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x15 = 670727;
uint32_t x59 = UINT32_MAX;
static int8_t x77 = -6;
static int16_t x79 = 598;
static int64_t t3 = 6LL;
int32_t x605 = -1;
uint8_t x607 = 21U;
static int16_t x703 = INT16_MAX;
int32_t x737 = -1;
int16_t x738 = INT16_MIN;
int32_t x740 = 17;
int8_t x946 = INT8_MIN;
int16_t x995 = 1;
static volatile int32_t t13 = 1;
uint16_t x1173 = 705U;
volatile uint64_t x1193 = 3061553LLU;
uint64_t t16 = 220804024742LLU;
static int32_t x1361 = 2;
static volatile int16_t x1446 = -1;
static int16_t x1447 = INT16_MAX;
static uint8_t x1448 = 7U;
volatile int16_t x1520 = 0;
int64_t x1682 = -1LL;
static volatile uint32_t x1683 = UINT32_MAX;
int64_t t21 = 147008595584117261LL;
int16_t x1697 = -444;
int32_t x1698 = INT32_MIN;
uint16_t x1700 = 0U;
uint32_t x1794 = 27928U;
uint16_t x1796 = 38U;
static int8_t x1822 = INT8_MIN;
volatile uint16_t x1869 = 0U;
volatile uint32_t t29 = 1547954U;
uint8_t x2153 = 1U;
uint16_t x2156 = 0U;
volatile uint64_t x2169 = 5LLU;
uint32_t x2171 = 513U;
uint8_t x2172 = 1U;
volatile int64_t x2238 = 7156290862682LL;
int64_t x2240 = 35LL;
int8_t x2260 = 0;
int64_t x2421 = INT64_MIN;
uint16_t x2424 = 0U;
int64_t x2425 = INT64_MIN;
uint64_t x2426 = 1LLU;
static uint32_t x2427 = 9U;
int16_t x2493 = -1;
int8_t x2602 = INT8_MAX;
volatile int32_t t39 = -76732;
int8_t x2626 = INT8_MAX;
int16_t x2627 = 1;
int8_t x2762 = INT8_MAX;
uint32_t x2763 = UINT32_MAX;
static uint16_t x2780 = 14U;
volatile uint64_t t42 = 3521726257981LLU;
uint64_t x2897 = 5739223LLU;
int32_t x2900 = 0;
int32_t x2942 = -1;
volatile int8_t x2944 = 0;
static int8_t x3265 = INT8_MAX;
static int64_t x3266 = 27460272622747LL;
uint64_t x3393 = 62713792LLU;
int16_t x3422 = -20;
int8_t x3628 = 1;
int32_t t56 = 4384;
int32_t x3649 = INT32_MIN;
uint16_t x3651 = UINT16_MAX;
uint8_t x3652 = 2U;
int32_t x3766 = INT32_MAX;
static uint8_t x3768 = 11U;
int32_t x3881 = INT32_MIN;
static int8_t x4093 = INT8_MIN;
int16_t x4095 = INT16_MAX;
int32_t x4185 = -1;
static volatile int64_t t61 = -5LL;
static volatile int8_t x4192 = 14;
static volatile int16_t x4469 = INT16_MAX;
volatile int32_t t64 = 37;
int64_t x4597 = INT64_MIN;
static uint64_t x4598 = 53LLU;
int8_t x4600 = 1;
uint16_t x4639 = UINT16_MAX;
int32_t x4801 = INT32_MAX;
static int16_t x4802 = 837;
uint8_t x4804 = 0U;
int8_t x4838 = -1;
int8_t x4897 = INT8_MIN;
uint64_t x4898 = 1302LLU;
volatile uint64_t x4920 = 3LLU;
static volatile uint32_t t73 = 35U;
static volatile uint32_t x4969 = 730722U;
uint64_t x4971 = 5933462LLU;
uint16_t x4972 = 9U;
static uint16_t x5117 = UINT16_MAX;
uint64_t x5120 = 3LLU;
volatile uint64_t t79 = 2LLU;
uint8_t x5449 = 13U;
static int8_t x5451 = 1;
volatile int64_t t80 = 129LL;
uint16_t x5549 = UINT16_MAX;
int8_t x5552 = 27;
uint64_t x5822 = 6354127302975182256LLU;
uint8_t x5896 = 27U;
int64_t x6065 = 33147194077382LL;
volatile uint16_t x6067 = UINT16_MAX;
uint8_t x6169 = 74U;
uint64_t x6231 = 3050LLU;
static volatile uint64_t t91 = 14339512424122931LLU;
volatile uint16_t x6680 = 2U;
int64_t t97 = -6LL;
uint8_t x6704 = 3U;
static int16_t x6708 = 1;
volatile uint64_t t99 = 1394787622LLU;


void f0(void) {
	int32_t x5 = INT32_MIN;
	static volatile int64_t x6 = -1LL;
	volatile uint16_t x7 = 3U;
	static int16_t x8 = 1;
	int64_t t0 = 1023612LL;

	t0 = ((x5%x6)/(x7<<x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = 788U;
	static volatile int32_t x14 = 903934055;
	volatile uint16_t x16 = 3U;
	int32_t t1 = 153;

	t1 = ((x13%x14)/(x15<<x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x57 = 56998LL;
	int32_t x58 = -1;
	static uint32_t x60 = 0U;
	volatile int64_t t2 = -138062143470911LL;

	t2 = ((x57%x58)/(x59<<x60));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x78 = INT64_MIN;
	volatile int8_t x80 = 4;

	t3 = ((x77%x78)/(x79<<x80));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x97 = INT64_MIN;
	int64_t x98 = 1212011678493706LL;
	uint64_t x99 = UINT64_MAX;
	uint32_t x100 = 0U;
	volatile uint64_t t4 = 8398501060557199LLU;

	t4 = ((x97%x98)/(x99<<x100));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x209 = INT16_MAX;
	uint32_t x210 = 2925217U;
	static uint32_t x211 = 2U;
	int8_t x212 = 30;
	uint32_t t5 = 3982866U;

	t5 = ((x209%x210)/(x211<<x212));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x237 = 36;
	int64_t x238 = INT64_MIN;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = 3;
	int64_t t6 = 22436625439LL;

	t6 = ((x237%x238)/(x239<<x240));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x331 = 7;
	static uint16_t x332 = 3U;
	int64_t t7 = -10940551820LL;

	t7 = ((x329%x330)/(x331<<x332));

	if (t7 != 76695844LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x606 = -1;
	static volatile uint16_t x608 = 1U;
	int32_t t8 = -45626;

	t8 = ((x605%x606)/(x607<<x608));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x701 = INT64_MAX;
	uint8_t x702 = 6U;
	uint8_t x704 = 5U;
	volatile int64_t t9 = -64085573LL;

	t9 = ((x701%x702)/(x703<<x704));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x739 = 2502137769226LL;
	static volatile int64_t t10 = 1LL;

	t10 = ((x737%x738)/(x739<<x740));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x945 = INT16_MAX;
	uint64_t x947 = 56103887LLU;
	volatile uint16_t x948 = 0U;
	uint64_t t11 = 2LLU;

	t11 = ((x945%x946)/(x947<<x948));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x981 = 162544776711LLU;
	int16_t x982 = 7497;
	static uint64_t x983 = UINT64_MAX;
	uint16_t x984 = 0U;
	volatile uint64_t t12 = 216LLU;

	t12 = ((x981%x982)/(x983<<x984));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x993 = -469;
	int32_t x994 = INT32_MIN;
	static int16_t x996 = 0;

	t13 = ((x993%x994)/(x995<<x996));

	if (t13 != -469) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1001 = INT8_MIN;
	volatile int32_t x1002 = INT32_MAX;
	int16_t x1003 = 1;
	volatile int8_t x1004 = 1;
	int32_t t14 = 278;

	t14 = ((x1001%x1002)/(x1003<<x1004));

	if (t14 != -64) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x1174 = 759U;
	uint64_t x1175 = 11217951LLU;
	int8_t x1176 = 46;
	volatile uint64_t t15 = 7441547947798737136LLU;

	t15 = ((x1173%x1174)/(x1175<<x1176));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1194 = -1LL;
	uint8_t x1195 = UINT8_MAX;
	volatile uint8_t x1196 = 0U;

	t16 = ((x1193%x1194)/(x1195<<x1196));

	if (t16 != 12006LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1362 = 27U;
	uint32_t x1363 = 112151U;
	uint8_t x1364 = 10U;
	uint32_t t17 = 0U;

	t17 = ((x1361%x1362)/(x1363<<x1364));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1373 = UINT8_MAX;
	static int64_t x1374 = 408345425LL;
	uint64_t x1375 = UINT64_MAX;
	int8_t x1376 = 2;
	uint64_t t18 = 4359879992LLU;

	t18 = ((x1373%x1374)/(x1375<<x1376));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1445 = INT32_MIN;
	volatile int32_t t19 = 112145;

	t19 = ((x1445%x1446)/(x1447<<x1448));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1517 = 533;
	static volatile uint8_t x1518 = 14U;
	int8_t x1519 = 3;
	static int32_t t20 = -1;

	t20 = ((x1517%x1518)/(x1519<<x1520));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1681 = INT64_MAX;
	volatile uint8_t x1684 = 3U;

	t21 = ((x1681%x1682)/(x1683<<x1684));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1689 = UINT64_MAX;
	static uint32_t x1690 = 22U;
	static uint32_t x1691 = UINT32_MAX;
	uint8_t x1692 = 0U;
	volatile uint64_t t22 = 840902LLU;

	t22 = ((x1689%x1690)/(x1691<<x1692));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1699 = 29582265466LLU;
	volatile uint64_t t23 = 137202055LLU;

	t23 = ((x1697%x1698)/(x1699<<x1700));

	if (t23 != 623574421LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1793 = -1LL;
	static uint64_t x1795 = UINT64_MAX;
	uint64_t t24 = 36059915090329LLU;

	t24 = ((x1793%x1794)/(x1795<<x1796));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1821 = -35;
	uint32_t x1823 = 270498690U;
	int16_t x1824 = 3;
	uint32_t t25 = 772U;

	t25 = ((x1821%x1822)/(x1823<<x1824));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1837 = -66;
	uint16_t x1838 = 31U;
	volatile int16_t x1839 = 12659;
	uint8_t x1840 = 1U;
	int32_t t26 = -1043476551;

	t26 = ((x1837%x1838)/(x1839<<x1840));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1870 = INT32_MIN;
	uint64_t x1871 = UINT64_MAX;
	uint8_t x1872 = 13U;
	volatile uint64_t t27 = 1LLU;

	t27 = ((x1869%x1870)/(x1871<<x1872));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1957 = 8LLU;
	volatile int64_t x1958 = INT64_MIN;
	static int32_t x1959 = INT32_MAX;
	int8_t x1960 = 0;
	uint64_t t28 = 82LLU;

	t28 = ((x1957%x1958)/(x1959<<x1960));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x2041 = INT16_MIN;
	uint32_t x2042 = UINT32_MAX;
	uint16_t x2043 = 158U;
	uint8_t x2044 = 14U;

	t29 = ((x2041%x2042)/(x2043<<x2044));

	if (t29 != 1659U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2093 = 65U;
	int64_t x2094 = 24LL;
	static volatile uint64_t x2095 = UINT64_MAX;
	int16_t x2096 = 6;
	volatile uint64_t t30 = 492616177LLU;

	t30 = ((x2093%x2094)/(x2095<<x2096));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2154 = 128317263758LL;
	uint8_t x2155 = UINT8_MAX;
	static volatile int64_t t31 = 563732965627219184LL;

	t31 = ((x2153%x2154)/(x2155<<x2156));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2170 = 584237;
	uint64_t t32 = 2067376555700019LLU;

	t32 = ((x2169%x2170)/(x2171<<x2172));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2237 = 78073861366276461LLU;
	uint64_t x2239 = 2484949968LLU;
	uint64_t t33 = 1836411165875586949LLU;

	t33 = ((x2237%x2238)/(x2239<<x2240));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x2257 = INT16_MAX;
	volatile int32_t x2258 = INT32_MIN;
	uint16_t x2259 = 2728U;
	volatile int32_t t34 = -565597;

	t34 = ((x2257%x2258)/(x2259<<x2260));

	if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2345 = 63;
	int16_t x2346 = 6243;
	uint8_t x2347 = UINT8_MAX;
	volatile int8_t x2348 = 14;
	int32_t t35 = -1;

	t35 = ((x2345%x2346)/(x2347<<x2348));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2422 = 6982799361645136LLU;
	int8_t x2423 = INT8_MAX;
	static volatile uint64_t t36 = 418717203055212870LLU;

	t36 = ((x2421%x2422)/(x2423<<x2424));

	if (t36 != 47849444749577LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2428 = 0U;
	uint64_t t37 = 62LLU;

	t37 = ((x2425%x2426)/(x2427<<x2428));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2494 = 3857LL;
	static uint64_t x2495 = 1211LLU;
	uint8_t x2496 = 1U;
	uint64_t t38 = 8609391760036745LLU;

	t38 = ((x2493%x2494)/(x2495<<x2496));

	if (t38 != 7616327032910632LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2601 = INT8_MIN;
	int32_t x2603 = 3263;
	int16_t x2604 = 0;

	t39 = ((x2601%x2602)/(x2603<<x2604));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x2625 = INT8_MIN;
	uint64_t x2628 = 3LLU;
	int32_t t40 = -35;

	t40 = ((x2625%x2626)/(x2627<<x2628));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2761 = 1;
	uint8_t x2764 = 3U;
	volatile uint32_t t41 = 53238U;

	t41 = ((x2761%x2762)/(x2763<<x2764));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2777 = -1;
	int8_t x2778 = INT8_MIN;
	volatile uint64_t x2779 = UINT64_MAX;

	t42 = ((x2777%x2778)/(x2779<<x2780));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x2898 = -1;
	static volatile uint64_t x2899 = UINT64_MAX;
	volatile uint64_t t43 = 2LLU;

	t43 = ((x2897%x2898)/(x2899<<x2900));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2941 = -2984;
	uint16_t x2943 = 11U;
	volatile int32_t t44 = 224536;

	t44 = ((x2941%x2942)/(x2943<<x2944));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2961 = 11U;
	int32_t x2962 = 617643500;
	static volatile uint64_t x2963 = 9511946101233062LLU;
	static uint8_t x2964 = 5U;
	volatile uint64_t t45 = 723207648433LLU;

	t45 = ((x2961%x2962)/(x2963<<x2964));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3013 = INT32_MIN;
	uint64_t x3014 = 1300626LLU;
	volatile uint8_t x3015 = 3U;
	int32_t x3016 = 6;
	volatile uint64_t t46 = 83939153469080094LLU;

	t46 = ((x3013%x3014)/(x3015<<x3016));

	if (t46 != 6364LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x3065 = UINT16_MAX;
	int32_t x3066 = 1064;
	int64_t x3067 = 143239LL;
	uint8_t x3068 = 3U;
	volatile int64_t t47 = 1LL;

	t47 = ((x3065%x3066)/(x3067<<x3068));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3105 = 84275307455560LLU;
	uint16_t x3106 = UINT16_MAX;
	uint64_t x3107 = 18892LLU;
	int16_t x3108 = 3;
	volatile uint64_t t48 = 791693LLU;

	t48 = ((x3105%x3106)/(x3107<<x3108));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3185 = 169448745LLU;
	volatile uint8_t x3186 = UINT8_MAX;
	volatile int64_t x3187 = 208095LL;
	int8_t x3188 = 1;
	volatile uint64_t t49 = 1273079213747429591LLU;

	t49 = ((x3185%x3186)/(x3187<<x3188));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3267 = 16570949562654707LLU;
	uint16_t x3268 = 0U;
	volatile uint64_t t50 = 1746LLU;

	t50 = ((x3265%x3266)/(x3267<<x3268));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3365 = INT32_MAX;
	static int16_t x3366 = 11;
	uint64_t x3367 = 16424045310328923LLU;
	static uint32_t x3368 = 5U;
	volatile uint64_t t51 = 829360LLU;

	t51 = ((x3365%x3366)/(x3367<<x3368));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3394 = INT64_MIN;
	uint32_t x3395 = 56922U;
	static volatile int64_t x3396 = 7LL;
	static uint64_t t52 = 80239LLU;

	t52 = ((x3393%x3394)/(x3395<<x3396));

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x3421 = 12281235639LLU;
	uint64_t x3423 = 127LLU;
	volatile uint8_t x3424 = 25U;
	volatile uint64_t t53 = 4988347081974453926LLU;

	t53 = ((x3421%x3422)/(x3423<<x3424));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3565 = 5602087526473390LLU;
	int8_t x3566 = 4;
	uint32_t x3567 = 1241263U;
	volatile uint8_t x3568 = 7U;
	uint64_t t54 = 13909LLU;

	t54 = ((x3565%x3566)/(x3567<<x3568));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3597 = 28774713028709LLU;
	int16_t x3598 = INT16_MIN;
	uint32_t x3599 = 639648175U;
	static uint16_t x3600 = 3U;
	uint64_t t55 = 11LLU;

	t55 = ((x3597%x3598)/(x3599<<x3600));

	if (t55 != 34996LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3625 = INT16_MAX;
	int16_t x3626 = INT16_MAX;
	int16_t x3627 = 15632;

	t56 = ((x3625%x3626)/(x3627<<x3628));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3650 = INT32_MIN;
	volatile int32_t t57 = -4283923;

	t57 = ((x3649%x3650)/(x3651<<x3652));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3765 = 1U;
	uint64_t x3767 = 35LLU;
	volatile uint64_t t58 = 11846LLU;

	t58 = ((x3765%x3766)/(x3767<<x3768));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3882 = 2723LL;
	uint64_t x3883 = 87609648884347LLU;
	uint32_t x3884 = 2U;
	volatile uint64_t t59 = 87460132083LLU;

	t59 = ((x3881%x3882)/(x3883<<x3884));

	if (t59 != 52639LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x4094 = INT64_MIN;
	static volatile int16_t x4096 = 0;
	volatile int64_t t60 = 25619LL;

	t60 = ((x4093%x4094)/(x4095<<x4096));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4186 = INT64_MIN;
	static uint16_t x4187 = UINT16_MAX;
	uint64_t x4188 = 3LLU;

	t61 = ((x4185%x4186)/(x4187<<x4188));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4189 = INT32_MIN;
	int64_t x4190 = INT64_MIN;
	uint32_t x4191 = 889222U;
	volatile int64_t t62 = -17885LL;

	t62 = ((x4189%x4190)/(x4191<<x4192));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4413 = 10093;
	int64_t x4414 = INT64_MIN;
	uint32_t x4415 = UINT32_MAX;
	uint8_t x4416 = 3U;
	int64_t t63 = 7171119005103551LL;

	t63 = ((x4413%x4414)/(x4415<<x4416));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4470 = -2;
	uint16_t x4471 = UINT16_MAX;
	int8_t x4472 = 1;

	t64 = ((x4469%x4470)/(x4471<<x4472));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4545 = INT16_MAX;
	static volatile int8_t x4546 = 23;
	uint8_t x4547 = UINT8_MAX;
	uint16_t x4548 = 1U;
	int32_t t65 = 52138;

	t65 = ((x4545%x4546)/(x4547<<x4548));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4599 = 221228698753979LLU;
	volatile uint64_t t66 = 2LLU;

	t66 = ((x4597%x4598)/(x4599<<x4600));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x4637 = UINT64_MAX;
	volatile uint8_t x4638 = 3U;
	uint8_t x4640 = 0U;
	uint64_t t67 = 2342420650304LLU;

	t67 = ((x4637%x4638)/(x4639<<x4640));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4685 = INT16_MIN;
	volatile uint32_t x4686 = 68U;
	uint16_t x4687 = 14098U;
	uint8_t x4688 = 11U;
	volatile uint32_t t68 = 487U;

	t68 = ((x4685%x4686)/(x4687<<x4688));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x4803 = UINT16_MAX;
	int32_t t69 = 49;

	t69 = ((x4801%x4802)/(x4803<<x4804));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4837 = INT16_MIN;
	volatile uint32_t x4839 = 7U;
	uint8_t x4840 = 4U;
	volatile uint32_t t70 = 51132U;

	t70 = ((x4837%x4838)/(x4839<<x4840));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4899 = 3U;
	volatile uint16_t x4900 = 0U;
	static volatile uint64_t t71 = 187531992823829LLU;

	t71 = ((x4897%x4898)/(x4899<<x4900));

	if (t71 != 396LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4901 = INT64_MIN;
	static int8_t x4902 = -1;
	uint8_t x4903 = UINT8_MAX;
	uint8_t x4904 = 15U;
	volatile int64_t t72 = 94789942LL;

	t72 = ((x4901%x4902)/(x4903<<x4904));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4917 = -1;
	static int16_t x4918 = INT16_MAX;
	volatile uint32_t x4919 = 16709U;

	t73 = ((x4917%x4918)/(x4919<<x4920));

	if (t73 != 32130U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4970 = -1;
	uint64_t t74 = 84948LLU;

	t74 = ((x4969%x4970)/(x4971<<x4972));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5118 = 56;
	static int8_t x5119 = INT8_MAX;
	int32_t t75 = 1190;

	t75 = ((x5117%x5118)/(x5119<<x5120));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5181 = 0LLU;
	static volatile int32_t x5182 = INT32_MIN;
	uint16_t x5183 = UINT16_MAX;
	int32_t x5184 = 1;
	static uint64_t t76 = 46245971393LLU;

	t76 = ((x5181%x5182)/(x5183<<x5184));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x5217 = UINT16_MAX;
	int64_t x5218 = 15024LL;
	static int64_t x5219 = 808348223LL;
	static uint8_t x5220 = 5U;
	int64_t t77 = -6144LL;

	t77 = ((x5217%x5218)/(x5219<<x5220));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x5313 = -8LL;
	int64_t x5314 = 1712729315LL;
	uint64_t x5315 = UINT64_MAX;
	uint8_t x5316 = 53U;
	uint64_t t78 = 1LLU;

	t78 = ((x5313%x5314)/(x5315<<x5316));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x5381 = UINT64_MAX;
	int8_t x5382 = INT8_MAX;
	uint8_t x5383 = 15U;
	volatile uint8_t x5384 = 1U;

	t79 = ((x5381%x5382)/(x5383<<x5384));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5450 = INT64_MIN;
	static uint8_t x5452 = 2U;

	t80 = ((x5449%x5450)/(x5451<<x5452));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5513 = -1;
	volatile uint8_t x5514 = UINT8_MAX;
	uint64_t x5515 = 190LLU;
	uint16_t x5516 = 6U;
	uint64_t t81 = 250539405481LLU;

	t81 = ((x5513%x5514)/(x5515<<x5516));

	if (t81 != 1517001979745851LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5550 = -61;
	static volatile uint64_t x5551 = 53364485LLU;
	uint64_t t82 = 206745874160714LLU;

	t82 = ((x5549%x5550)/(x5551<<x5552));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x5821 = -1;
	uint64_t x5823 = 760006405614LLU;
	volatile uint16_t x5824 = 31U;
	uint64_t t83 = 1959753LLU;

	t83 = ((x5821%x5822)/(x5823<<x5824));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x5893 = 4292LLU;
	int64_t x5894 = 136610188217882LL;
	uint32_t x5895 = 39U;
	static uint64_t t84 = 288082378119LLU;

	t84 = ((x5893%x5894)/(x5895<<x5896));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6021 = INT8_MIN;
	uint16_t x6022 = 175U;
	uint8_t x6023 = UINT8_MAX;
	volatile uint32_t x6024 = 11U;
	int32_t t85 = 1;

	t85 = ((x6021%x6022)/(x6023<<x6024));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6025 = -61462916LL;
	static volatile uint16_t x6026 = 7160U;
	static uint8_t x6027 = 49U;
	int16_t x6028 = 6;
	volatile int64_t t86 = -291173063340LL;

	t86 = ((x6025%x6026)/(x6027<<x6028));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x6057 = INT16_MIN;
	static uint16_t x6058 = UINT16_MAX;
	uint8_t x6059 = UINT8_MAX;
	uint8_t x6060 = 0U;
	int32_t t87 = -4102130;

	t87 = ((x6057%x6058)/(x6059<<x6060));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6066 = 2U;
	int16_t x6068 = 0;
	volatile int64_t t88 = 109788315071775567LL;

	t88 = ((x6065%x6066)/(x6067<<x6068));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x6153 = 11U;
	int64_t x6154 = 9755921139324LL;
	uint32_t x6155 = UINT32_MAX;
	volatile int8_t x6156 = 1;
	int64_t t89 = 545LL;

	t89 = ((x6153%x6154)/(x6155<<x6156));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6170 = INT8_MIN;
	uint32_t x6171 = 813449022U;
	uint8_t x6172 = 0U;
	static volatile uint32_t t90 = 1892312917U;

	t90 = ((x6169%x6170)/(x6171<<x6172));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6229 = INT32_MIN;
	uint16_t x6230 = UINT16_MAX;
	int16_t x6232 = 1;

	t91 = ((x6229%x6230)/(x6231<<x6232));

	if (t91 != 3024056405526150LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6341 = INT8_MIN;
	uint64_t x6342 = UINT64_MAX;
	static volatile uint16_t x6343 = 819U;
	static uint8_t x6344 = 12U;
	static volatile uint64_t t92 = 29913991LLU;

	t92 = ((x6341%x6342)/(x6343<<x6344));

	if (t92 != 5498900643920LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6405 = 291616336288633LLU;
	int8_t x6406 = INT8_MIN;
	uint16_t x6407 = UINT16_MAX;
	static uint32_t x6408 = 3U;
	volatile uint64_t t93 = 28898241LLU;

	t93 = ((x6405%x6406)/(x6407<<x6408));

	if (t93 != 556222507LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x6489 = UINT8_MAX;
	uint64_t x6490 = 620558385662LLU;
	volatile int16_t x6491 = INT16_MAX;
	uint16_t x6492 = 13U;
	volatile uint64_t t94 = 155488350172537LLU;

	t94 = ((x6489%x6490)/(x6491<<x6492));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6533 = 3163LL;
	int8_t x6534 = -1;
	uint8_t x6535 = 70U;
	volatile uint32_t x6536 = 1U;
	volatile int64_t t95 = -65245951687907955LL;

	t95 = ((x6533%x6534)/(x6535<<x6536));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6661 = 1;
	int32_t x6662 = INT32_MIN;
	static volatile int64_t x6663 = 1984970LL;
	uint8_t x6664 = 3U;
	static int64_t t96 = -941093LL;

	t96 = ((x6661%x6662)/(x6663<<x6664));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6677 = -1;
	int64_t x6678 = -1LL;
	int32_t x6679 = 5877192;

	t97 = ((x6677%x6678)/(x6679<<x6680));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6701 = INT16_MIN;
	int8_t x6702 = 9;
	volatile uint16_t x6703 = 490U;
	int32_t t98 = 5285212;

	t98 = ((x6701%x6702)/(x6703<<x6704));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6705 = 4222936;
	volatile int8_t x6706 = -1;
	uint64_t x6707 = 4059LLU;

	t99 = ((x6705%x6706)/(x6707<<x6708));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

