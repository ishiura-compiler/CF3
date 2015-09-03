#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x70 = 4101U;
volatile uint8_t x71 = 3U;
volatile int64_t t1 = 280385074331729868LL;
static volatile uint16_t x117 = UINT16_MAX;
uint64_t x177 = UINT64_MAX;
static volatile int8_t x180 = 2;
static uint64_t x296 = 46LLU;
static int64_t t7 = 1459128019368LL;
uint8_t x477 = UINT8_MAX;
int32_t t9 = 219832126;
static int8_t x524 = 0;
int32_t t10 = -3;
int32_t x540 = 0;
volatile uint32_t t11 = 104234U;
uint64_t x714 = 148834LLU;
volatile uint64_t t14 = 372214256664202010LLU;
volatile int8_t x739 = -1;
static volatile int32_t t17 = -2;
uint16_t x790 = 5741U;
int32_t x792 = 8;
int64_t x793 = INT64_MIN;
volatile int64_t x943 = INT64_MAX;
volatile uint64_t x992 = 1LLU;
volatile uint64_t t23 = 11746373677LLU;
static uint64_t x1126 = 1085021089004502370LLU;
int64_t x1177 = -38251156LL;
int32_t x1198 = 16179;
uint64_t x1199 = 8913090262665796963LLU;
uint64_t t28 = 1900LLU;
volatile uint64_t x1365 = 110904685461LLU;
uint32_t x1509 = 31366U;
static uint8_t x1511 = 13U;
static uint8_t x1512 = 20U;
static volatile uint8_t x1715 = 5U;
int16_t x1749 = INT16_MIN;
static volatile uint32_t x1751 = 43456768U;
int8_t x1876 = 1;
uint64_t x2097 = 3809932101638LLU;
volatile int64_t x2098 = -732596468LL;
static uint8_t x2100 = 1U;
volatile int8_t x2373 = INT8_MIN;
volatile uint64_t t41 = 10211381839166559LLU;
int64_t x2411 = 4982412588369LL;
uint32_t x2412 = 5U;
volatile uint64_t t44 = 14935541742034LLU;
volatile int8_t x2522 = -1;
volatile uint64_t t45 = 26212LLU;
int32_t x2707 = INT32_MIN;
static uint16_t x2749 = 197U;
uint8_t x2752 = 0U;
int64_t x2941 = -929094LL;
uint32_t x2990 = 6710U;
int32_t x2991 = -3057527;
uint16_t x2992 = 2U;
int8_t x3071 = INT8_MAX;
uint64_t x3086 = UINT64_MAX;
int16_t x3087 = -244;
uint64_t x3089 = 8603LLU;
uint8_t x3092 = 9U;
uint64_t x3157 = UINT64_MAX;
uint64_t t56 = 188LLU;
int16_t x3349 = INT16_MIN;
int8_t x3350 = INT8_MIN;
static uint64_t x3351 = UINT64_MAX;
uint8_t x3352 = 6U;
int32_t x3477 = 193196;
volatile uint16_t x3478 = UINT16_MAX;
int8_t x3533 = 18;
int8_t x3613 = 2;
static int16_t x3792 = 0;
static volatile uint64_t t65 = 3560738574920959260LLU;
static uint32_t x3912 = 0U;
uint64_t x3934 = 116431403329LLU;
static volatile int64_t x3945 = INT64_MAX;
uint16_t x3948 = 2U;
volatile int8_t x3973 = 40;
volatile uint32_t x3974 = 2678995U;
uint32_t x3989 = UINT32_MAX;
static volatile int64_t x3990 = 82592LL;
volatile int8_t x3991 = INT8_MIN;
uint16_t x4183 = 1557U;
int32_t t73 = 0;
volatile uint64_t t75 = 5LLU;
static volatile int16_t x4458 = -1;
static uint8_t x4460 = 22U;
uint8_t x4468 = 0U;
volatile int64_t t77 = 21191132417110701LL;
static uint8_t x4557 = 23U;
int32_t x4560 = 8;
static uint16_t x4661 = 31U;
volatile int32_t x4896 = 13;
int8_t x4917 = 0;
uint32_t t83 = 54378U;
uint64_t x5034 = 950166252919LLU;
int32_t x5077 = INT32_MAX;
int64_t x5127 = INT64_MIN;
static volatile int64_t x5241 = -549683100LL;
static volatile int16_t x5299 = INT16_MIN;
static uint64_t x5300 = 12LLU;
static uint64_t t93 = 1311133017594LLU;
int16_t x5617 = INT16_MIN;
static uint16_t x5618 = 2941U;
int32_t x5796 = 6;


void f0(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = 34071LL;
	int32_t x15 = -839744;
	int16_t x16 = 0;
	int64_t t0 = -1696644517315LL;

	t0 = ((x13%(x14*x15))>>x16);

	if (t0 != 65535LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x69 = INT64_MAX;
	volatile uint16_t x72 = 0U;

	t1 = ((x69%(x70*x71))>>x72);

	if (t1 != 3706LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x105 = 457787078LLU;
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 13U;
	uint8_t x108 = 1U;
	uint64_t t2 = 223613143959226147LLU;

	t2 = ((x105%(x106*x107))>>x108);

	if (t2 != 228893539LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x118 = -1;
	volatile int8_t x119 = -42;
	int16_t x120 = 7;
	volatile int32_t t3 = -593213;

	t3 = ((x117%(x118*x119))>>x120);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x141 = 48829511496LLU;
	int16_t x142 = INT16_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile uint8_t x144 = 1U;
	uint64_t t4 = 0LLU;

	t4 = ((x141%(x142*x143))>>x144);

	if (t4 != 3914170LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x178 = UINT16_MAX;
	uint8_t x179 = UINT8_MAX;
	uint64_t t5 = 20712270408865724LLU;

	t5 = ((x177%(x178*x179))>>x180);

	if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x213 = -1;
	uint64_t x214 = 29034LLU;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 17U;
	volatile uint64_t t6 = 871727627496965LLU;

	t6 = ((x213%(x214*x215))>>x216);

	if (t6 != 28LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = 8414940;
	static volatile int64_t x295 = -6266269228LL;

	t7 = ((x293%(x294*x295))>>x296);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x449 = 6;
	int16_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	static uint16_t x452 = 2U;
	volatile uint32_t t8 = 6029U;

	t8 = ((x449%(x450*x451))>>x452);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x478 = 13719;
	static int8_t x479 = INT8_MIN;
	uint8_t x480 = 18U;

	t9 = ((x477%(x478*x479))>>x480);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x521 = 11U;
	static uint16_t x522 = 1U;
	int16_t x523 = -1;

	t10 = ((x521%(x522*x523))>>x524);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x537 = INT32_MIN;
	uint8_t x538 = 1U;
	uint32_t x539 = 3898902U;

	t11 = ((x537%(x538*x539))>>x540);

	if (t11 != 3087548U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x597 = 1;
	uint64_t x598 = UINT64_MAX;
	int16_t x599 = INT16_MIN;
	uint8_t x600 = 43U;
	uint64_t t12 = 350624930827798046LLU;

	t12 = ((x597%(x598*x599))>>x600);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x665 = INT32_MIN;
	int16_t x666 = -1;
	int32_t x667 = 1;
	uint8_t x668 = 5U;
	int32_t t13 = -10707;

	t13 = ((x665%(x666*x667))>>x668);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x713 = 11719U;
	uint8_t x715 = 61U;
	int8_t x716 = 50;

	t14 = ((x713%(x714*x715))>>x716);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x737 = INT16_MIN;
	int16_t x738 = INT16_MIN;
	int8_t x740 = 8;
	int32_t t15 = 3;

	t15 = ((x737%(x738*x739))>>x740);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x757 = 31083511593763954LLU;
	int16_t x758 = -1;
	int16_t x759 = -25;
	uint8_t x760 = 3U;
	static volatile uint64_t t16 = 24233198LLU;

	t16 = ((x757%(x758*x759))>>x760);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x761 = 1;
	static int8_t x762 = INT8_MIN;
	static int16_t x763 = INT16_MAX;
	static uint8_t x764 = 0U;

	t17 = ((x761%(x762*x763))>>x764);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x789 = INT16_MAX;
	int8_t x791 = INT8_MAX;
	volatile int32_t t18 = -3097355;

	t18 = ((x789%(x790*x791))>>x792);

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x794 = 481757163LLU;
	int64_t x795 = -1LL;
	int64_t x796 = 27LL;
	uint64_t t19 = 5669696LLU;

	t19 = ((x793%(x794*x795))>>x796);

	if (t19 != 68719476736LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x905 = 7;
	int8_t x906 = INT8_MIN;
	uint8_t x907 = 52U;
	uint32_t x908 = 2U;
	static volatile int32_t t20 = 19867682;

	t20 = ((x905%(x906*x907))>>x908);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x941 = -1;
	volatile uint64_t x942 = 198LLU;
	static volatile int8_t x944 = 4;
	uint64_t t21 = 5LLU;

	t21 = ((x941%(x942*x943))>>x944);

	if (t21 != 12LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x989 = 42110422LLU;
	int16_t x990 = 315;
	uint32_t x991 = UINT32_MAX;
	uint64_t t22 = 3104LLU;

	t22 = ((x989%(x990*x991))>>x992);

	if (t22 != 21055211LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1009 = UINT16_MAX;
	uint64_t x1010 = 2LLU;
	static uint64_t x1011 = 59735644LLU;
	static uint32_t x1012 = 24U;

	t23 = ((x1009%(x1010*x1011))>>x1012);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1125 = -1;
	volatile int32_t x1127 = INT32_MIN;
	int32_t x1128 = 15;
	static uint64_t t24 = 128553360975797219LLU;

	t24 = ((x1125%(x1126*x1127))>>x1128);

	if (t24 != 149446564380671LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1133 = -35;
	uint64_t x1134 = 421582LLU;
	int8_t x1135 = 17;
	uint8_t x1136 = 5U;
	volatile uint64_t t25 = 417LLU;

	t25 = ((x1133%(x1134*x1135))>>x1136);

	if (t25 != 14103LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1157 = UINT64_MAX;
	uint16_t x1158 = 359U;
	int16_t x1159 = INT16_MAX;
	uint8_t x1160 = 52U;
	uint64_t t26 = 7LLU;

	t26 = ((x1157%(x1158*x1159))>>x1160);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1178 = UINT64_MAX;
	volatile uint8_t x1179 = 1U;
	static uint8_t x1180 = 31U;
	volatile uint64_t t27 = 2652870919LLU;

	t27 = ((x1177%(x1178*x1179))>>x1180);

	if (t27 != 8589934591LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x1197 = INT8_MAX;
	volatile int16_t x1200 = 1;

	t28 = ((x1197%(x1198*x1199))>>x1200);

	if (t28 != 63LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1366 = 124U;
	uint32_t x1367 = 162445U;
	int64_t x1368 = 1LL;
	volatile uint64_t t29 = 22804373LLU;

	t29 = ((x1365%(x1366*x1367))>>x1368);

	if (t29 != 8239780LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1510 = -1;
	volatile uint32_t t30 = 57488194U;

	t30 = ((x1509%(x1510*x1511))>>x1512);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1713 = -951129;
	uint64_t x1714 = UINT64_MAX;
	static uint8_t x1716 = 1U;
	volatile uint64_t t31 = 1212274LLU;

	t31 = ((x1713%(x1714*x1715))>>x1716);

	if (t31 != 9223372036854300243LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1750 = INT32_MAX;
	static int16_t x1752 = 1;
	static uint32_t t32 = 806764602U;

	t32 = ((x1749%(x1750*x1751))>>x1752);

	if (t32 != 21712000U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1813 = INT16_MIN;
	int16_t x1814 = INT16_MIN;
	uint64_t x1815 = 5525743LLU;
	static int8_t x1816 = 62;
	volatile uint64_t t33 = 13522690176011LLU;

	t33 = ((x1813%(x1814*x1815))>>x1816);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1873 = -1;
	uint64_t x1874 = 507847LLU;
	volatile int64_t x1875 = 47945078997LL;
	uint64_t t34 = 83824007LLU;

	t34 = ((x1873%(x1874*x1875))>>x1876);

	if (t34 != 7364660966865576LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x1993 = UINT8_MAX;
	int8_t x1994 = INT8_MAX;
	volatile int16_t x1995 = INT16_MIN;
	uint32_t x1996 = 25U;
	int32_t t35 = 1692;

	t35 = ((x1993%(x1994*x1995))>>x1996);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x2049 = 575062860LLU;
	uint16_t x2050 = 293U;
	volatile int8_t x2051 = INT8_MIN;
	uint8_t x2052 = 15U;
	static uint64_t t36 = 5752489LLU;

	t36 = ((x2049%(x2050*x2051))>>x2052);

	if (t36 != 17549LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2099 = UINT32_MAX;
	uint64_t t37 = 67416LLU;

	t37 = ((x2097%(x2098*x2099))>>x2100);

	if (t37 != 1904966050819LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2133 = INT8_MIN;
	int64_t x2134 = -1LL;
	int8_t x2135 = INT8_MIN;
	uint8_t x2136 = 1U;
	static volatile int64_t t38 = 1595936598834473LL;

	t38 = ((x2133%(x2134*x2135))>>x2136);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2169 = 28;
	static int8_t x2170 = INT8_MAX;
	int64_t x2171 = -1LL;
	static uint8_t x2172 = 44U;
	int64_t t39 = 8995401472798LL;

	t39 = ((x2169%(x2170*x2171))>>x2172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2249 = INT32_MIN;
	uint64_t x2250 = 1701361431339579LLU;
	int64_t x2251 = INT64_MIN;
	int16_t x2252 = 3;
	static volatile uint64_t t40 = 268840LLU;

	t40 = ((x2249%(x2250*x2251))>>x2252);

	if (t40 != 1152921504338411520LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2374 = 766;
	uint64_t x2375 = 626LLU;
	static uint8_t x2376 = 9U;

	t41 = ((x2373%(x2374*x2375))>>x2376);

	if (t41 != 759LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2381 = 119U;
	int16_t x2382 = 1;
	uint32_t x2383 = UINT32_MAX;
	volatile uint8_t x2384 = 3U;
	static volatile uint32_t t42 = 13U;

	t42 = ((x2381%(x2382*x2383))>>x2384);

	if (t42 != 14U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2401 = INT8_MAX;
	volatile int16_t x2402 = INT16_MIN;
	uint16_t x2403 = 67U;
	int64_t x2404 = 0LL;
	int32_t t43 = -11501;

	t43 = ((x2401%(x2402*x2403))>>x2404);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2409 = -1;
	uint64_t x2410 = 33028294663LLU;

	t44 = ((x2409%(x2410*x2411))>>x2412);

	if (t44 != 87899383470355990LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x2521 = INT16_MIN;
	volatile uint64_t x2523 = 3992613842819LLU;
	int8_t x2524 = 3;

	t45 = ((x2521%(x2522*x2523))>>x2524);

	if (t45 != 499076726256LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2529 = UINT64_MAX;
	volatile uint32_t x2530 = 1U;
	static int16_t x2531 = INT16_MAX;
	uint8_t x2532 = 14U;
	volatile uint64_t t46 = 206LLU;

	t46 = ((x2529%(x2530*x2531))>>x2532);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2637 = 4541;
	int32_t x2638 = -1;
	int64_t x2639 = INT64_MAX;
	int16_t x2640 = 10;
	int64_t t47 = -75050449LL;

	t47 = ((x2637%(x2638*x2639))>>x2640);

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2705 = 251656876U;
	static uint32_t x2706 = 9601U;
	static volatile uint8_t x2708 = 2U;
	static uint32_t t48 = 263303512U;

	t48 = ((x2705%(x2706*x2707))>>x2708);

	if (t48 != 62914219U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2750 = UINT64_MAX;
	int16_t x2751 = -1;
	volatile uint64_t t49 = 3LLU;

	t49 = ((x2749%(x2750*x2751))>>x2752);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2833 = 204061436U;
	static int8_t x2834 = 2;
	volatile uint16_t x2835 = 3U;
	static int16_t x2836 = 1;
	uint32_t t50 = 1U;

	t50 = ((x2833%(x2834*x2835))>>x2836);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2942 = INT64_MIN;
	static uint64_t x2943 = 1569175865148417LLU;
	uint8_t x2944 = 0U;
	volatile uint64_t t51 = 8163127932900774897LLU;

	t51 = ((x2941%(x2942*x2943))>>x2944);

	if (t51 != 9223372036853846714LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2989 = UINT64_MAX;
	uint64_t t52 = 370673LLU;

	t52 = ((x2989%(x2990*x2991))>>x2992);

	if (t52 != 109497893LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3069 = UINT16_MAX;
	int8_t x3070 = INT8_MIN;
	int16_t x3072 = 0;
	volatile int32_t t53 = -10;

	t53 = ((x3069%(x3070*x3071))>>x3072);

	if (t53 != 511) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3085 = INT8_MIN;
	static int16_t x3088 = 1;
	volatile uint64_t t54 = 8176355740LLU;

	t54 = ((x3085%(x3086*x3087))>>x3088);

	if (t54 != 66LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3090 = 36770015;
	volatile int32_t x3091 = 8;
	volatile uint64_t t55 = 25727LLU;

	t55 = ((x3089%(x3090*x3091))>>x3092);

	if (t55 != 16LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3158 = INT32_MIN;
	volatile uint64_t x3159 = 25278LLU;
	int16_t x3160 = 5;

	t56 = ((x3157%(x3158*x3159))>>x3160);

	if (t56 != 1696377864191LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3301 = 1;
	int64_t x3302 = 498493LL;
	int8_t x3303 = INT8_MIN;
	uint16_t x3304 = 20U;
	volatile int64_t t57 = 614564977277LL;

	t57 = ((x3301%(x3302*x3303))>>x3304);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t t58 = 107LLU;

	t58 = ((x3349%(x3350*x3351))>>x3352);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3393 = UINT8_MAX;
	int32_t x3394 = 2345;
	static int64_t x3395 = -12701771522564LL;
	volatile uint16_t x3396 = 3U;
	static int64_t t59 = 491169088537LL;

	t59 = ((x3393%(x3394*x3395))>>x3396);

	if (t59 != 31LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3479 = 343450070745LLU;
	int16_t x3480 = 1;
	uint64_t t60 = 2075858605797212LLU;

	t60 = ((x3477%(x3478*x3479))>>x3480);

	if (t60 != 96598LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3534 = -1LL;
	int8_t x3535 = INT8_MIN;
	int16_t x3536 = 2;
	volatile int64_t t61 = -43649LL;

	t61 = ((x3533%(x3534*x3535))>>x3536);

	if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3609 = INT8_MAX;
	uint64_t x3610 = 553314393LLU;
	int8_t x3611 = INT8_MIN;
	static uint32_t x3612 = 3U;
	volatile uint64_t t62 = 327012LLU;

	t62 = ((x3609%(x3610*x3611))>>x3612);

	if (t62 != 15LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3614 = INT8_MAX;
	static volatile int8_t x3615 = INT8_MIN;
	uint8_t x3616 = 11U;
	int32_t t63 = -1559;

	t63 = ((x3613%(x3614*x3615))>>x3616);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x3789 = INT16_MAX;
	static int64_t x3790 = INT64_MAX;
	volatile int8_t x3791 = -1;
	volatile int64_t t64 = -18895075629743774LL;

	t64 = ((x3789%(x3790*x3791))>>x3792);

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3853 = INT8_MIN;
	uint64_t x3854 = 24417340925640LLU;
	int16_t x3855 = INT16_MIN;
	volatile uint16_t x3856 = 35U;

	t65 = ((x3853%(x3854*x3855))>>x3856);

	if (t65 != 23286190LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3909 = 1059U;
	int8_t x3910 = -20;
	int16_t x3911 = -1;
	volatile uint32_t t66 = 48600367U;

	t66 = ((x3909%(x3910*x3911))>>x3912);

	if (t66 != 19U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3933 = -1;
	static volatile uint32_t x3935 = UINT32_MAX;
	uint8_t x3936 = 5U;
	uint64_t t67 = 2104502871LLU;

	t67 = ((x3933%(x3934*x3935))>>x3936);

	if (t67 != 11997790751514650LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3946 = 241128158U;
	int32_t x3947 = -1;
	volatile int64_t t68 = 544508LL;

	t68 = ((x3945%(x3946*x3947))>>x3948);

	if (t68 != 96939442LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3975 = 2;
	static uint8_t x3976 = 1U;
	uint32_t t69 = 61288805U;

	t69 = ((x3973%(x3974*x3975))>>x3976);

	if (t69 != 20U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3992 = 0;
	int64_t t70 = -136908264324945LL;

	t70 = ((x3989%(x3990*x3991))>>x3992);

	if (t70 != 2826239LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4181 = 7589218166719LLU;
	uint16_t x4182 = UINT16_MAX;
	int8_t x4184 = 6;
	static volatile uint64_t t71 = 9098630LLU;

	t71 = ((x4181%(x4182*x4183))>>x4184);

	if (t71 != 628915LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x4233 = 85974584;
	int16_t x4234 = 2061;
	uint32_t x4235 = 5426U;
	volatile uint8_t x4236 = 9U;
	uint32_t t72 = 34897U;

	t72 = ((x4233%(x4234*x4235))>>x4236);

	if (t72 != 15026U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4237 = -28;
	static uint8_t x4238 = 2U;
	int32_t x4239 = -1;
	volatile int8_t x4240 = 12;

	t73 = ((x4237%(x4238*x4239))>>x4240);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4313 = 1776051315LLU;
	static uint16_t x4314 = 21U;
	static volatile int16_t x4315 = INT16_MIN;
	volatile uint16_t x4316 = 52U;
	volatile uint64_t t74 = 226033565517340741LLU;

	t74 = ((x4313%(x4314*x4315))>>x4316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4413 = UINT64_MAX;
	static uint16_t x4414 = 61U;
	int16_t x4415 = INT16_MIN;
	uint16_t x4416 = 16U;

	t75 = ((x4413%(x4414*x4415))>>x4416);

	if (t75 != 30LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4457 = -1;
	uint64_t x4459 = 1277705LLU;
	volatile uint64_t t76 = 11109228997679893LLU;

	t76 = ((x4457%(x4458*x4459))>>x4460);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4465 = 2954;
	int64_t x4466 = -1LL;
	volatile int8_t x4467 = INT8_MIN;

	t77 = ((x4465%(x4466*x4467))>>x4468);

	if (t77 != 10LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4558 = INT16_MIN;
	uint32_t x4559 = 6336U;
	uint32_t t78 = 5U;

	t78 = ((x4557%(x4558*x4559))>>x4560);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4649 = 29;
	static uint16_t x4650 = 402U;
	uint64_t x4651 = 297348631630LLU;
	uint16_t x4652 = 1U;
	static uint64_t t79 = 668288843255LLU;

	t79 = ((x4649%(x4650*x4651))>>x4652);

	if (t79 != 14LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4662 = UINT32_MAX;
	int16_t x4663 = 1;
	uint8_t x4664 = 1U;
	volatile uint32_t t80 = 31720U;

	t80 = ((x4661%(x4662*x4663))>>x4664);

	if (t80 != 15U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4841 = 14567LLU;
	uint16_t x4842 = 526U;
	uint16_t x4843 = UINT16_MAX;
	int16_t x4844 = 1;
	volatile uint64_t t81 = 5013LLU;

	t81 = ((x4841%(x4842*x4843))>>x4844);

	if (t81 != 7283LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x4893 = -1;
	static uint32_t x4894 = 114U;
	int16_t x4895 = -2;
	static volatile uint32_t t82 = 57332581U;

	t82 = ((x4893%(x4894*x4895))>>x4896);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4918 = 59U;
	volatile uint32_t x4919 = 6981U;
	uint64_t x4920 = 9LLU;

	t83 = ((x4917%(x4918*x4919))>>x4920);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x5033 = -20;
	static int8_t x5035 = INT8_MAX;
	volatile int8_t x5036 = 57;
	volatile uint64_t t84 = 494447999060929LLU;

	t84 = ((x5033%(x5034*x5035))>>x5036);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5078 = UINT64_MAX;
	int16_t x5079 = -1;
	volatile int16_t x5080 = 0;
	volatile uint64_t t85 = 65169845163619LLU;

	t85 = ((x5077%(x5078*x5079))>>x5080);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5125 = INT16_MIN;
	static uint64_t x5126 = 349731LLU;
	int8_t x5128 = 40;
	static uint64_t t86 = 13698391533LLU;

	t86 = ((x5125%(x5126*x5127))>>x5128);

	if (t86 != 8388607LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5193 = INT16_MAX;
	int8_t x5194 = INT8_MAX;
	int8_t x5195 = 6;
	int32_t x5196 = 20;
	volatile int32_t t87 = -60;

	t87 = ((x5193%(x5194*x5195))>>x5196);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5221 = 1U;
	uint8_t x5222 = 1U;
	volatile int64_t x5223 = -111050836969675LL;
	volatile uint8_t x5224 = 3U;
	volatile int64_t t88 = -3494543834LL;

	t88 = ((x5221%(x5222*x5223))>>x5224);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x5242 = -1;
	int32_t x5243 = -1;
	uint16_t x5244 = 22U;
	int64_t t89 = 329LL;

	t89 = ((x5241%(x5242*x5243))>>x5244);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5245 = UINT8_MAX;
	static int8_t x5246 = INT8_MAX;
	uint64_t x5247 = 1511469860344398669LLU;
	int8_t x5248 = 63;
	volatile uint64_t t90 = 3275730763087845288LLU;

	t90 = ((x5245%(x5246*x5247))>>x5248);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5269 = 83;
	int64_t x5270 = -1LL;
	uint16_t x5271 = 147U;
	static uint16_t x5272 = 3U;
	volatile int64_t t91 = 7103772583LL;

	t91 = ((x5269%(x5270*x5271))>>x5272);

	if (t91 != 10LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5297 = INT8_MIN;
	uint32_t x5298 = 73616U;
	static uint32_t t92 = 543U;

	t92 = ((x5297%(x5298*x5299))>>x5300);

	if (t92 != 129279U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5349 = -1LL;
	int8_t x5350 = -1;
	volatile uint64_t x5351 = UINT64_MAX;
	uint8_t x5352 = 1U;

	t93 = ((x5349%(x5350*x5351))>>x5352);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5517 = 23;
	int8_t x5518 = INT8_MIN;
	int16_t x5519 = 10;
	uint8_t x5520 = 1U;
	int32_t t94 = -2325624;

	t94 = ((x5517%(x5518*x5519))>>x5520);

	if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5545 = INT8_MAX;
	int8_t x5546 = -1;
	uint8_t x5547 = 1U;
	uint16_t x5548 = 26U;
	volatile int32_t t95 = -265048520;

	t95 = ((x5545%(x5546*x5547))>>x5548);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5619 = 7384558LLU;
	uint8_t x5620 = 35U;
	static uint64_t t96 = 1215060092644656361LLU;

	t96 = ((x5617%(x5618*x5619))>>x5620);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5673 = -1;
	volatile uint8_t x5674 = UINT8_MAX;
	static uint64_t x5675 = 112914898020098181LLU;
	uint32_t x5676 = 7U;
	static uint64_t t97 = 99023007930950LLU;

	t97 = ((x5673%(x5674*x5675))>>x5676);

	if (t97 != 63282727752297399LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5741 = INT8_MAX;
	uint8_t x5742 = 37U;
	uint32_t x5743 = 3460466U;
	uint8_t x5744 = 5U;
	uint32_t t98 = 1122U;

	t98 = ((x5741%(x5742*x5743))>>x5744);

	if (t98 != 3U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5793 = INT64_MIN;
	int16_t x5794 = INT16_MIN;
	int8_t x5795 = -1;
	int64_t t99 = 8090573LL;

	t99 = ((x5793%(x5794*x5795))>>x5796);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

