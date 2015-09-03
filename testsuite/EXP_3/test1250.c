#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x29 = 127U;
int8_t x114 = 2;
int32_t t2 = 0;
uint64_t x184 = 117LLU;
static int8_t x190 = 5;
volatile uint32_t t5 = 63076215U;
volatile int16_t x255 = -1;
static uint32_t x405 = 101185U;
uint64_t t10 = UINT64_MAX;
int8_t x663 = INT8_MAX;
int64_t x664 = INT64_MIN;
static uint64_t x681 = 1LLU;
volatile uint64_t t13 = 125887644415LLU;
uint8_t x778 = 15U;
int32_t x780 = INT32_MIN;
volatile int32_t x815 = 1;
uint64_t x871 = UINT64_MAX;
uint32_t x1057 = 1165787U;
int8_t x1059 = -1;
volatile int16_t x1060 = INT16_MIN;
uint32_t t19 = 169445U;
uint64_t x1249 = 24LLU;
static uint8_t x1250 = 14U;
int16_t x1251 = -1;
static uint64_t x1279 = 48751LLU;
int32_t t23 = -670645;
uint64_t x1453 = UINT64_MAX;
uint16_t x1481 = UINT16_MAX;
volatile int32_t x1484 = -1;
uint32_t x1642 = 15U;
int8_t x1644 = INT8_MAX;
uint8_t x1686 = 1U;
volatile uint16_t x1687 = 1342U;
volatile int32_t t27 = -9;
int32_t x1714 = 26;
uint16_t x1742 = 2U;
uint64_t x1769 = 101809494605488972LLU;
int64_t x1772 = INT64_MAX;
uint64_t x1935 = UINT64_MAX;
int8_t x2021 = INT8_MAX;
uint8_t x2022 = 3U;
volatile int64_t x2024 = INT64_MIN;
static uint32_t x2066 = 0U;
volatile int32_t t35 = INT32_MAX;
int8_t x2142 = 0;
uint32_t x2204 = 15952U;
int64_t x2331 = INT64_MIN;
volatile int32_t t40 = -220;
uint64_t x2383 = 335385075780169923LLU;
uint64_t t42 = UINT64_MAX;
uint8_t x2402 = 16U;
int8_t x2545 = 0;
volatile int8_t x2657 = INT8_MAX;
int32_t x2659 = INT32_MIN;
volatile int32_t t46 = 227499880;
int8_t x2668 = INT8_MIN;
volatile int32_t t47 = -1;
int16_t x2691 = -1;
int8_t x2692 = INT8_MIN;
static volatile uint32_t t48 = 490U;
int16_t x2707 = INT16_MAX;
static int32_t x2708 = INT32_MAX;
static int32_t t49 = -6945904;
volatile uint8_t x2753 = 0U;
static volatile int32_t x2754 = 2;
int64_t x2884 = INT64_MAX;
volatile uint8_t x3097 = 37U;
static int8_t x3100 = -7;
volatile uint8_t x3104 = 42U;
int32_t x3189 = INT32_MAX;
volatile int16_t x3327 = -1;
static volatile int32_t t59 = -20011;
int32_t x3408 = INT32_MAX;
uint8_t x3553 = 104U;
uint8_t x3741 = 2U;
volatile int32_t t65 = -43;
volatile int64_t t67 = 361791789492LL;
int64_t x3980 = 1666030376790LL;
static int64_t x4072 = INT64_MAX;
static uint8_t x4086 = 8U;
static int32_t t72 = 54317;
static uint32_t x4281 = 13U;
int32_t x4284 = -26757;
volatile int64_t x4340 = -1LL;
volatile int32_t t75 = -8182654;
int64_t x4392 = INT64_MIN;
uint32_t x4460 = 85809U;
volatile int64_t x4499 = INT64_MIN;
volatile uint16_t x4500 = 2397U;
uint32_t x4592 = 245702550U;


void f0(void) {
	static int16_t x30 = 0;
	uint32_t x31 = 9U;
	int16_t x32 = INT16_MAX;
	static int32_t t0 = 12252763;

	t0 = ((x29<<x30)-(x31==x32));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x93 = INT16_MAX;
	int16_t x94 = 1;
	volatile int8_t x95 = INT8_MIN;
	volatile int8_t x96 = 30;
	int32_t t1 = -1361;

	t1 = ((x93<<x94)-(x95==x96));

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x113 = 4U;
	int16_t x115 = 0;
	uint8_t x116 = UINT8_MAX;

	t2 = ((x113<<x114)-(x115==x116));

	if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x177 = 419792709770752098LLU;
	int16_t x178 = 0;
	static int8_t x179 = INT8_MAX;
	int32_t x180 = -1;
	volatile uint64_t t3 = 23311206666LLU;

	t3 = ((x177<<x178)-(x179==x180));

	if (t3 != 419792709770752098LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x181 = 3789LL;
	static uint16_t x182 = 4U;
	static int32_t x183 = -1;
	int64_t t4 = 0LL;

	t4 = ((x181<<x182)-(x183==x184));

	if (t4 != 60624LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int16_t x191 = INT16_MIN;
	static int32_t x192 = INT32_MIN;

	t5 = ((x189<<x190)-(x191==x192));

	if (t5 != 4294967264U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x229 = UINT64_MAX;
	volatile int8_t x230 = 1;
	int32_t x231 = INT32_MIN;
	int64_t x232 = 6LL;
	uint64_t t6 = 26242044LLU;

	t6 = ((x229<<x230)-(x231==x232));

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x253 = 1118U;
	uint16_t x254 = 0U;
	static int32_t x256 = INT32_MAX;
	int32_t t7 = -1436;

	t7 = ((x253<<x254)-(x255==x256));

	if (t7 != 1118) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x406 = 11U;
	static int8_t x407 = -1;
	static int16_t x408 = 27;
	uint32_t t8 = 323U;

	t8 = ((x405<<x406)-(x407==x408));

	if (t8 != 207226880U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x629 = 38U;
	int16_t x630 = 14;
	int64_t x631 = 12925LL;
	static int64_t x632 = -1LL;
	volatile int32_t t9 = 48152;

	t9 = ((x629<<x630)-(x631==x632));

	if (t9 != 622592) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x633 = UINT64_MAX;
	int16_t x634 = 0;
	uint32_t x635 = 30U;
	volatile uint64_t x636 = 246321377752104742LLU;

	t10 = ((x633<<x634)-(x635==x636));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x637 = INT16_MAX;
	int16_t x638 = 5;
	static volatile uint8_t x639 = UINT8_MAX;
	static uint8_t x640 = 2U;
	volatile int32_t t11 = 131506755;

	t11 = ((x637<<x638)-(x639==x640));

	if (t11 != 1048544) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x661 = 2;
	uint8_t x662 = 0U;
	volatile int32_t t12 = -69528;

	t12 = ((x661<<x662)-(x663==x664));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x682 = 1U;
	static volatile int64_t x683 = -2LL;
	uint64_t x684 = 943786LLU;

	t13 = ((x681<<x682)-(x683==x684));

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x741 = 2U;
	volatile int32_t x742 = 0;
	int32_t x743 = -3;
	uint32_t x744 = UINT32_MAX;
	int32_t t14 = -6782961;

	t14 = ((x741<<x742)-(x743==x744));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x777 = 7U;
	int64_t x779 = 32411129944540LL;
	volatile int32_t t15 = 1706;

	t15 = ((x777<<x778)-(x779==x780));

	if (t15 != 229376) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x813 = UINT16_MAX;
	int8_t x814 = 2;
	static int8_t x816 = INT8_MIN;
	volatile int32_t t16 = -3;

	t16 = ((x813<<x814)-(x815==x816));

	if (t16 != 262140) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x869 = UINT32_MAX;
	uint8_t x870 = 1U;
	int32_t x872 = -2948;
	uint32_t t17 = 134303U;

	t17 = ((x869<<x870)-(x871==x872));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1021 = UINT32_MAX;
	uint8_t x1022 = 18U;
	uint64_t x1023 = 84069211475175LLU;
	int64_t x1024 = INT64_MIN;
	volatile uint32_t t18 = 3741U;

	t18 = ((x1021<<x1022)-(x1023==x1024));

	if (t18 != 4294705152U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1058 = 1LLU;

	t19 = ((x1057<<x1058)-(x1059==x1060));

	if (t19 != 2331574U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1252 = INT32_MAX;
	uint64_t t20 = 12424710409LLU;

	t20 = ((x1249<<x1250)-(x1251==x1252));

	if (t20 != 393216LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1261 = 2640935285565328LLU;
	uint8_t x1262 = 4U;
	static int16_t x1263 = 2662;
	int8_t x1264 = INT8_MIN;
	volatile uint64_t t21 = 529972659046272LLU;

	t21 = ((x1261<<x1262)-(x1263==x1264));

	if (t21 != 42254964569045248LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1277 = 23;
	static int64_t x1278 = 1LL;
	static volatile uint64_t x1280 = 19908915345387568LLU;
	int32_t t22 = -860707669;

	t22 = ((x1277<<x1278)-(x1279==x1280));

	if (t22 != 46) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1445 = 0U;
	static int8_t x1446 = 27;
	int64_t x1447 = -1LL;
	int16_t x1448 = 1703;

	t23 = ((x1445<<x1446)-(x1447==x1448));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1454 = 1U;
	uint64_t x1455 = UINT64_MAX;
	static int8_t x1456 = INT8_MIN;
	uint64_t t24 = 11484722331051LLU;

	t24 = ((x1453<<x1454)-(x1455==x1456));

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1482 = 1U;
	int16_t x1483 = -1;
	static volatile int32_t t25 = -198651754;

	t25 = ((x1481<<x1482)-(x1483==x1484));

	if (t25 != 131069) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1641 = 3U;
	static int16_t x1643 = -1;
	uint32_t t26 = 1295226U;

	t26 = ((x1641<<x1642)-(x1643==x1644));

	if (t26 != 98304U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1685 = 1U;
	uint8_t x1688 = UINT8_MAX;

	t27 = ((x1685<<x1686)-(x1687==x1688));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1713 = 9U;
	int32_t x1715 = 164521783;
	int8_t x1716 = INT8_MAX;
	volatile int32_t t28 = -2070626;

	t28 = ((x1713<<x1714)-(x1715==x1716));

	if (t28 != 603979776) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1741 = 59039;
	static int32_t x1743 = INT32_MIN;
	int32_t x1744 = -1;
	int32_t t29 = 3445;

	t29 = ((x1741<<x1742)-(x1743==x1744));

	if (t29 != 236156) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1770 = 13U;
	volatile int32_t x1771 = INT32_MIN;
	uint64_t t30 = 184LLU;

	t30 = ((x1769<<x1770)-(x1771==x1772));

	if (t30 != 3919896491235835904LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1933 = 0;
	int8_t x1934 = 22;
	int32_t x1936 = -3116;
	volatile int32_t t31 = -474805;

	t31 = ((x1933<<x1934)-(x1935==x1936));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2023 = 1838978834LL;
	static int32_t t32 = 69763529;

	t32 = ((x2021<<x2022)-(x2023==x2024));

	if (t32 != 1016) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2061 = 19U;
	uint8_t x2062 = 22U;
	int32_t x2063 = INT32_MIN;
	static volatile uint64_t x2064 = 6LLU;
	volatile int32_t t33 = -1;

	t33 = ((x2061<<x2062)-(x2063==x2064));

	if (t33 != 79691776) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2065 = INT32_MAX;
	int32_t x2067 = INT32_MIN;
	int8_t x2068 = 0;
	int32_t t34 = INT32_MAX;

	t34 = ((x2065<<x2066)-(x2067==x2068));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2081 = INT32_MAX;
	static volatile int16_t x2082 = 0;
	int8_t x2083 = -2;
	int32_t x2084 = INT32_MIN;

	t35 = ((x2081<<x2082)-(x2083==x2084));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2141 = UINT32_MAX;
	volatile uint32_t x2143 = 4945661U;
	static int8_t x2144 = -1;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = ((x2141<<x2142)-(x2143==x2144));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2201 = 13;
	int8_t x2202 = 1;
	uint8_t x2203 = 22U;
	static int32_t t37 = 490280968;

	t37 = ((x2201<<x2202)-(x2203==x2204));

	if (t37 != 26) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2277 = 262U;
	uint8_t x2278 = 26U;
	static uint64_t x2279 = 98256378051577LLU;
	static int32_t x2280 = 1;
	uint32_t t38 = 41558706U;

	t38 = ((x2277<<x2278)-(x2279==x2280));

	if (t38 != 402653184U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2329 = 427;
	uint64_t x2330 = 21LLU;
	int32_t x2332 = INT32_MAX;
	int32_t t39 = 12408;

	t39 = ((x2329<<x2330)-(x2331==x2332));

	if (t39 != 895483904) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2333 = 28U;
	uint16_t x2334 = 1U;
	int16_t x2335 = INT16_MIN;
	int16_t x2336 = -114;

	t40 = ((x2333<<x2334)-(x2335==x2336));

	if (t40 != 56) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2381 = 4787U;
	uint8_t x2382 = 0U;
	int64_t x2384 = -1LL;
	int32_t t41 = 6223;

	t41 = ((x2381<<x2382)-(x2383==x2384));

	if (t41 != 4787) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2397 = UINT64_MAX;
	uint8_t x2398 = 0U;
	int64_t x2399 = -1LL;
	static uint16_t x2400 = 61U;

	t42 = ((x2397<<x2398)-(x2399==x2400));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2401 = 16U;
	int64_t x2403 = -1LL;
	int16_t x2404 = -1;
	int32_t t43 = 258248349;

	t43 = ((x2401<<x2402)-(x2403==x2404));

	if (t43 != 1048575) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2413 = INT8_MAX;
	uint8_t x2414 = 0U;
	int8_t x2415 = -1;
	uint32_t x2416 = 796984582U;
	int32_t t44 = 6621;

	t44 = ((x2413<<x2414)-(x2415==x2416));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2546 = 4U;
	int64_t x2547 = INT64_MAX;
	int16_t x2548 = INT16_MIN;
	volatile int32_t t45 = 1;

	t45 = ((x2545<<x2546)-(x2547==x2548));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2658 = 0;
	int64_t x2660 = INT64_MIN;

	t46 = ((x2657<<x2658)-(x2659==x2660));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2665 = 14U;
	uint8_t x2666 = 5U;
	int8_t x2667 = 3;

	t47 = ((x2665<<x2666)-(x2667==x2668));

	if (t47 != 448) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x2689 = UINT32_MAX;
	volatile uint8_t x2690 = 1U;

	t48 = ((x2689<<x2690)-(x2691==x2692));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2705 = INT16_MAX;
	int32_t x2706 = 1;

	t49 = ((x2705<<x2706)-(x2707==x2708));

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x2755 = 745309634342218506LLU;
	uint32_t x2756 = UINT32_MAX;
	static int32_t t50 = -537808;

	t50 = ((x2753<<x2754)-(x2755==x2756));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2809 = 9;
	static uint8_t x2810 = 20U;
	int16_t x2811 = -16054;
	volatile int8_t x2812 = 15;
	int32_t t51 = -24087321;

	t51 = ((x2809<<x2810)-(x2811==x2812));

	if (t51 != 9437184) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2841 = 15U;
	volatile int16_t x2842 = 25;
	int32_t x2843 = -62122611;
	int32_t x2844 = -1;
	static volatile int32_t t52 = 809460755;

	t52 = ((x2841<<x2842)-(x2843==x2844));

	if (t52 != 503316480) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2881 = 1;
	int8_t x2882 = 2;
	int8_t x2883 = INT8_MIN;
	volatile int32_t t53 = 11;

	t53 = ((x2881<<x2882)-(x2883==x2884));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3001 = 57;
	uint8_t x3002 = 2U;
	uint32_t x3003 = UINT32_MAX;
	uint64_t x3004 = 45366652LLU;
	volatile int32_t t54 = -1;

	t54 = ((x3001<<x3002)-(x3003==x3004));

	if (t54 != 228) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3033 = 237U;
	volatile uint16_t x3034 = 19U;
	int32_t x3035 = -1;
	int32_t x3036 = -145;
	volatile int32_t t55 = 61;

	t55 = ((x3033<<x3034)-(x3035==x3036));

	if (t55 != 124256256) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x3098 = 0LLU;
	volatile uint32_t x3099 = UINT32_MAX;
	volatile int32_t t56 = 1687;

	t56 = ((x3097<<x3098)-(x3099==x3100));

	if (t56 != 37) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3101 = 602U;
	static uint8_t x3102 = 0U;
	int64_t x3103 = INT64_MAX;
	static volatile int32_t t57 = 491;

	t57 = ((x3101<<x3102)-(x3103==x3104));

	if (t57 != 602) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x3190 = 0;
	uint8_t x3191 = UINT8_MAX;
	uint32_t x3192 = 7329661U;
	volatile int32_t t58 = INT32_MAX;

	t58 = ((x3189<<x3190)-(x3191==x3192));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3325 = 7958U;
	volatile int8_t x3326 = 0;
	int64_t x3328 = INT64_MAX;

	t59 = ((x3325<<x3326)-(x3327==x3328));

	if (t59 != 7958) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3405 = 22;
	uint16_t x3406 = 5U;
	int32_t x3407 = INT32_MIN;
	volatile int32_t t60 = 1;

	t60 = ((x3405<<x3406)-(x3407==x3408));

	if (t60 != 704) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3429 = 10U;
	volatile uint8_t x3430 = 10U;
	int64_t x3431 = INT64_MIN;
	int8_t x3432 = INT8_MIN;
	int32_t t61 = -29786;

	t61 = ((x3429<<x3430)-(x3431==x3432));

	if (t61 != 10240) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3433 = 1U;
	int16_t x3434 = 12;
	uint16_t x3435 = 49U;
	int64_t x3436 = -1LL;
	volatile uint32_t t62 = 1561U;

	t62 = ((x3433<<x3434)-(x3435==x3436));

	if (t62 != 4096U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x3554 = 1U;
	uint32_t x3555 = 19U;
	uint64_t x3556 = 741091014568629LLU;
	int32_t t63 = -7836;

	t63 = ((x3553<<x3554)-(x3555==x3556));

	if (t63 != 208) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x3653 = UINT16_MAX;
	static uint16_t x3654 = 3U;
	static int64_t x3655 = INT64_MIN;
	int16_t x3656 = 27;
	int32_t t64 = -794517745;

	t64 = ((x3653<<x3654)-(x3655==x3656));

	if (t64 != 524280) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3742 = 1LLU;
	uint16_t x3743 = 93U;
	int64_t x3744 = INT64_MIN;

	t65 = ((x3741<<x3742)-(x3743==x3744));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3873 = 3U;
	static uint16_t x3874 = 0U;
	uint16_t x3875 = 788U;
	volatile uint16_t x3876 = UINT16_MAX;
	int32_t t66 = 4719;

	t66 = ((x3873<<x3874)-(x3875==x3876));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3893 = 55166LL;
	volatile int16_t x3894 = 0;
	int32_t x3895 = INT32_MIN;
	volatile int8_t x3896 = INT8_MAX;

	t67 = ((x3893<<x3894)-(x3895==x3896));

	if (t67 != 55166LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3973 = INT32_MAX;
	volatile uint16_t x3974 = 0U;
	int8_t x3975 = 1;
	static int8_t x3976 = -1;
	static volatile int32_t t68 = INT32_MAX;

	t68 = ((x3973<<x3974)-(x3975==x3976));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3977 = 61035711929LLU;
	volatile int32_t x3978 = 1;
	volatile int32_t x3979 = INT32_MIN;
	static uint64_t t69 = 2360082546LLU;

	t69 = ((x3977<<x3978)-(x3979==x3980));

	if (t69 != 122071423858LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4069 = 0U;
	volatile uint16_t x4070 = 1U;
	int8_t x4071 = INT8_MAX;
	volatile int32_t t70 = -978;

	t70 = ((x4069<<x4070)-(x4071==x4072));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4085 = INT16_MAX;
	volatile uint64_t x4087 = 1368110965LLU;
	uint8_t x4088 = 15U;
	volatile int32_t t71 = -205390518;

	t71 = ((x4085<<x4086)-(x4087==x4088));

	if (t71 != 8388352) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4141 = UINT8_MAX;
	static uint8_t x4142 = 0U;
	int8_t x4143 = INT8_MIN;
	int64_t x4144 = INT64_MIN;

	t72 = ((x4141<<x4142)-(x4143==x4144));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4149 = 0U;
	static int8_t x4150 = 23;
	int64_t x4151 = -7170650LL;
	uint64_t x4152 = UINT64_MAX;
	uint32_t t73 = 63101277U;

	t73 = ((x4149<<x4150)-(x4151==x4152));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4282 = 0;
	static int8_t x4283 = INT8_MAX;
	uint32_t t74 = 2723U;

	t74 = ((x4281<<x4282)-(x4283==x4284));

	if (t74 != 13U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4337 = INT16_MAX;
	volatile int16_t x4338 = 11;
	uint32_t x4339 = UINT32_MAX;

	t75 = ((x4337<<x4338)-(x4339==x4340));

	if (t75 != 67106816) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4389 = INT16_MAX;
	uint8_t x4390 = 1U;
	int64_t x4391 = -1LL;
	static int32_t t76 = -2;

	t76 = ((x4389<<x4390)-(x4391==x4392));

	if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4457 = UINT64_MAX;
	int8_t x4458 = 0;
	uint64_t x4459 = UINT64_MAX;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x4457<<x4458)-(x4459==x4460));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4497 = 1;
	uint8_t x4498 = 1U;
	static int32_t t78 = 195358;

	t78 = ((x4497<<x4498)-(x4499==x4500));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4589 = 5;
	volatile uint8_t x4590 = 0U;
	int32_t x4591 = INT32_MIN;
	volatile int32_t t79 = -1;

	t79 = ((x4589<<x4590)-(x4591==x4592));

	if (t79 != 5) { NG(); } else { ; }
	
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


    return 0;
}

