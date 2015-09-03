#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x80 = -1;
volatile int32_t t4 = -128;
volatile uint16_t x363 = 1U;
uint32_t x682 = UINT32_MAX;
uint8_t x684 = UINT8_MAX;
volatile uint32_t t7 = 85022U;
uint64_t x712 = 6904529812930LLU;
static uint32_t x787 = 6U;
static uint32_t t9 = 1176U;
int64_t x840 = INT64_MIN;
int64_t x890 = INT64_MAX;
uint64_t x948 = 398724LLU;
volatile int64_t x958 = 20252LL;
int16_t x970 = 74;
static uint64_t x1013 = 58292188477LLU;
uint64_t x1064 = 551LLU;
static int8_t x1089 = -1;
static uint32_t x1090 = 234693U;
int8_t x1092 = -14;
int64_t x1108 = -1LL;
static uint16_t x1300 = 7099U;
uint16_t x1358 = UINT16_MAX;
int32_t x1482 = 3568323;
int32_t x1484 = -1;
static int32_t t23 = -290373162;
int64_t x1489 = -216043313422207008LL;
int64_t t24 = 4375685716758414LL;
static int8_t x1643 = 2;
uint8_t x1732 = 24U;
static uint64_t t27 = 6342LLU;
uint64_t x1809 = 1LLU;
uint16_t x1810 = 275U;
static uint32_t x1853 = UINT32_MAX;
static uint64_t t31 = 23464722783078700LLU;
int16_t x2069 = INT16_MAX;
volatile int32_t t33 = 104081;
uint8_t x2081 = UINT8_MAX;
static uint8_t x2083 = 10U;
static uint16_t x2107 = 31U;
uint16_t x2195 = 14U;
volatile uint32_t t36 = 46U;
int8_t x2202 = INT8_MAX;
uint8_t x2205 = 24U;
static volatile uint32_t x2206 = 12461U;
static volatile uint32_t t38 = 4788U;
static volatile uint8_t x2410 = 7U;
volatile uint32_t x2411 = 6U;
static int64_t x2412 = INT64_MIN;
uint32_t x2606 = 406U;
int64_t x2908 = INT64_MAX;
int8_t x3029 = INT8_MIN;
int8_t x3035 = 3;
uint8_t x3407 = 1U;
volatile int64_t t47 = 12187097136801LL;
int8_t x3434 = 0;
uint32_t t48 = 0U;
volatile int16_t x3475 = 3;
static int32_t x3569 = -19;
static int8_t x3572 = INT8_MIN;
uint32_t t50 = 54277169U;
uint32_t t54 = 1031109117U;
uint8_t x3903 = 2U;
int32_t x3922 = 153;
int16_t x3957 = -1;
uint64_t x3960 = 3343630985131227LLU;
int32_t t60 = 7;
static uint8_t x4226 = 37U;
uint64_t x4241 = UINT64_MAX;
uint8_t x4315 = 0U;
int32_t x4409 = -842509587;
int32_t x4410 = 27;
volatile int8_t x4425 = -57;
volatile uint64_t x4427 = 0LLU;
int32_t t67 = 1;
static int64_t x4498 = 5645683492LL;
int32_t x4598 = 60841872;
volatile int16_t x4815 = 7;
static uint32_t x4880 = UINT32_MAX;
int16_t x5082 = INT16_MAX;
static volatile uint16_t x5083 = 13U;
uint64_t x5098 = 7LLU;
int16_t x5099 = 1;
uint64_t t80 = 122209539731LLU;
uint64_t x5250 = UINT64_MAX;
uint8_t x5251 = 3U;
uint8_t x5447 = 6U;
uint64_t x5448 = UINT64_MAX;
static volatile uint64_t t85 = 54LLU;
uint32_t x5602 = 1836398493U;
int64_t x5718 = 441123827443811LL;
volatile uint32_t t91 = 13U;
int64_t x6014 = 1818426919468LL;
volatile int32_t x6015 = 1;
int8_t x6041 = INT8_MIN;
uint8_t x6149 = 71U;
uint64_t x6439 = 4LLU;
int32_t t98 = 276704113;
volatile uint32_t t99 = 1U;


void f0(void) {
	uint8_t x13 = 91U;
	static uint8_t x14 = 11U;
	int64_t x15 = 1LL;
	int16_t x16 = -7;
	volatile int32_t t0 = -851786019;

	t0 = ((x13-(x14>>x15))-x16);

	if (t0 != 93) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x77 = 1024751236306615486LLU;
	uint8_t x78 = UINT8_MAX;
	uint8_t x79 = 1U;
	static uint64_t t1 = 32172471756140747LLU;

	t1 = ((x77-(x78>>x79))-x80);

	if (t1 != 1024751236306615360LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x117 = -5;
	uint32_t x118 = 1405U;
	int16_t x119 = 21;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t2 = 33U;

	t2 = ((x117-(x118>>x119))-x120);

	if (t2 != 4294967292U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x269 = INT8_MAX;
	int8_t x270 = 27;
	volatile uint16_t x271 = 4U;
	int32_t x272 = -4029552;
	int32_t t3 = 55793;

	t3 = ((x269-(x270>>x271))-x272);

	if (t3 != 4029678) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x333 = UINT16_MAX;
	uint16_t x334 = 6U;
	static uint64_t x335 = 2LLU;
	int16_t x336 = 3;

	t4 = ((x333-(x334>>x335))-x336);

	if (t4 != 65531) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x361 = UINT64_MAX;
	static uint32_t x362 = 9U;
	int32_t x364 = INT32_MIN;
	uint64_t t5 = 5109035148346594LLU;

	t5 = ((x361-(x362>>x363))-x364);

	if (t5 != 2147483643LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x493 = -13;
	int32_t x494 = 3;
	int16_t x495 = 24;
	uint8_t x496 = 106U;
	volatile int32_t t6 = 1;

	t6 = ((x493-(x494>>x495))-x496);

	if (t6 != -119) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x681 = -1;
	uint8_t x683 = 7U;

	t7 = ((x681-(x682>>x683))-x684);

	if (t7 != 4261412609U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x709 = 13U;
	static uint16_t x710 = UINT16_MAX;
	uint8_t x711 = 22U;
	static uint64_t t8 = 70620417992215LLU;

	t8 = ((x709-(x710>>x711))-x712);

	if (t8 != 18446737169179738699LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x785 = 386U;
	volatile uint32_t x786 = UINT32_MAX;
	int16_t x788 = 19;

	t9 = ((x785-(x786>>x787))-x788);

	if (t9 != 4227858800U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x837 = -1;
	volatile int64_t x838 = INT64_MAX;
	static int8_t x839 = 0;
	int64_t t10 = -2013707LL;

	t10 = ((x837-(x838>>x839))-x840);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x889 = INT8_MIN;
	uint8_t x891 = 1U;
	uint8_t x892 = 18U;
	volatile int64_t t11 = -3258LL;

	t11 = ((x889-(x890>>x891))-x892);

	if (t11 != -4611686018427388049LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x933 = UINT8_MAX;
	static uint32_t x934 = 647268U;
	static uint16_t x935 = 31U;
	int64_t x936 = -2496161786790544LL;
	volatile int64_t t12 = 55LL;

	t12 = ((x933-(x934>>x935))-x936);

	if (t12 != 2496161786790799LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x945 = UINT64_MAX;
	int16_t x946 = 1;
	volatile int32_t x947 = 1;
	uint64_t t13 = 6087LLU;

	t13 = ((x945-(x946>>x947))-x948);

	if (t13 != 18446744073709152891LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x957 = 895065315U;
	uint16_t x959 = 0U;
	static int8_t x960 = 0;
	static volatile int64_t t14 = -2611401933211788LL;

	t14 = ((x957-(x958>>x959))-x960);

	if (t14 != 895045063LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x969 = UINT8_MAX;
	uint8_t x971 = 1U;
	volatile int16_t x972 = -247;
	int32_t t15 = 5;

	t15 = ((x969-(x970>>x971))-x972);

	if (t15 != 465) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x1014 = UINT16_MAX;
	uint16_t x1015 = 1U;
	int8_t x1016 = INT8_MIN;
	uint64_t t16 = 511813942437LLU;

	t16 = ((x1013-(x1014>>x1015))-x1016);

	if (t16 != 58292155838LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1045 = INT32_MIN;
	volatile uint64_t x1046 = 86964LLU;
	uint8_t x1047 = 6U;
	static int32_t x1048 = -180073040;
	uint64_t t17 = 250366145521993674LLU;

	t17 = ((x1045-(x1046>>x1047))-x1048);

	if (t17 != 18446744071742139650LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1061 = UINT64_MAX;
	volatile int64_t x1062 = 12458350LL;
	int16_t x1063 = 0;
	static volatile uint64_t t18 = 7LLU;

	t18 = ((x1061-(x1062>>x1063))-x1064);

	if (t18 != 18446744073697092714LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1091 = 1;
	volatile uint32_t t19 = 1892U;

	t19 = ((x1089-(x1090>>x1091))-x1092);

	if (t19 != 4294849963U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1105 = -1LL;
	uint32_t x1106 = 1U;
	uint8_t x1107 = 29U;
	int64_t t20 = 477219963812017559LL;

	t20 = ((x1105-(x1106>>x1107))-x1108);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1297 = 0;
	uint8_t x1298 = 0U;
	int8_t x1299 = 0;
	static int32_t t21 = 1;

	t21 = ((x1297-(x1298>>x1299))-x1300);

	if (t21 != -7099) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1357 = INT8_MIN;
	volatile int8_t x1359 = 14;
	int8_t x1360 = -1;
	volatile int32_t t22 = 26;

	t22 = ((x1357-(x1358>>x1359))-x1360);

	if (t22 != -130) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1481 = UINT8_MAX;
	volatile uint8_t x1483 = 0U;

	t23 = ((x1481-(x1482>>x1483))-x1484);

	if (t23 != -3568067) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1490 = 54U;
	uint8_t x1491 = 14U;
	static volatile int8_t x1492 = 29;

	t24 = ((x1489-(x1490>>x1491))-x1492);

	if (t24 != -216043313422207037LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x1641 = -29;
	static int64_t x1642 = INT64_MAX;
	int16_t x1644 = -1;
	int64_t t25 = 3LL;

	t25 = ((x1641-(x1642>>x1643))-x1644);

	if (t25 != -2305843009213693979LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1701 = UINT32_MAX;
	uint8_t x1702 = 15U;
	uint16_t x1703 = 30U;
	static volatile int32_t x1704 = INT32_MIN;
	volatile uint32_t t26 = 79300U;

	t26 = ((x1701-(x1702>>x1703))-x1704);

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1729 = INT16_MAX;
	static uint64_t x1730 = UINT64_MAX;
	int8_t x1731 = 20;

	t27 = ((x1729-(x1730>>x1731))-x1732);

	if (t27 != 18446726481523539944LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1761 = 133506646U;
	volatile uint64_t x1762 = 47527LLU;
	uint16_t x1763 = 54U;
	int64_t x1764 = INT64_MIN;
	uint64_t t28 = 353LLU;

	t28 = ((x1761-(x1762>>x1763))-x1764);

	if (t28 != 9223372036988282454LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1811 = 16U;
	uint64_t x1812 = 27549326123509217LLU;
	uint64_t t29 = 53LLU;

	t29 = ((x1809-(x1810>>x1811))-x1812);

	if (t29 != 18419194747586042400LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1854 = 0;
	int8_t x1855 = 0;
	int32_t x1856 = -3;
	volatile uint32_t t30 = 49004042U;

	t30 = ((x1853-(x1854>>x1855))-x1856);

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1857 = 43;
	uint64_t x1858 = UINT64_MAX;
	uint8_t x1859 = 0U;
	uint16_t x1860 = 6569U;

	t31 = ((x1857-(x1858>>x1859))-x1860);

	if (t31 != 18446744073709545091LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1945 = 385U;
	volatile uint64_t x1946 = UINT64_MAX;
	uint16_t x1947 = 1U;
	int8_t x1948 = INT8_MIN;
	static uint64_t t32 = 20021LLU;

	t32 = ((x1945-(x1946>>x1947))-x1948);

	if (t32 != 9223372036854776322LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x2070 = 35U;
	static uint32_t x2071 = 3U;
	static int8_t x2072 = -1;

	t33 = ((x2069-(x2070>>x2071))-x2072);

	if (t33 != 32764) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2082 = 2885U;
	int32_t x2084 = INT32_MIN;
	uint32_t t34 = 129723284U;

	t34 = ((x2081-(x2082>>x2083))-x2084);

	if (t34 != 2147483901U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2105 = -1;
	volatile uint64_t x2106 = UINT64_MAX;
	int16_t x2108 = INT16_MAX;
	uint64_t t35 = 16LLU;

	t35 = ((x2105-(x2106>>x2107))-x2108);

	if (t35 != 18446744065119584257LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x2193 = 1579U;
	uint32_t x2194 = UINT32_MAX;
	static uint16_t x2196 = UINT16_MAX;

	t36 = ((x2193-(x2194>>x2195))-x2196);

	if (t36 != 4294641197U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2201 = INT16_MIN;
	uint8_t x2203 = 14U;
	volatile int16_t x2204 = -2382;
	volatile int32_t t37 = -56064;

	t37 = ((x2201-(x2202>>x2203))-x2204);

	if (t37 != -30386) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x2207 = 29;
	static int16_t x2208 = INT16_MIN;

	t38 = ((x2205-(x2206>>x2207))-x2208);

	if (t38 != 32792U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2409 = INT32_MIN;
	volatile int64_t t39 = 435793LL;

	t39 = ((x2409-(x2410>>x2411))-x2412);

	if (t39 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2605 = INT16_MAX;
	int16_t x2607 = 0;
	static int32_t x2608 = -2862;
	volatile uint32_t t40 = 5U;

	t40 = ((x2605-(x2606>>x2607))-x2608);

	if (t40 != 35223U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2869 = -1;
	static uint8_t x2870 = UINT8_MAX;
	uint8_t x2871 = 5U;
	uint16_t x2872 = 1U;
	int32_t t41 = -2033;

	t41 = ((x2869-(x2870>>x2871))-x2872);

	if (t41 != -9) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2905 = -1LL;
	int16_t x2906 = INT16_MAX;
	uint8_t x2907 = 18U;
	static volatile int64_t t42 = INT64_MIN;

	t42 = ((x2905-(x2906>>x2907))-x2908);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3030 = INT8_MAX;
	int64_t x3031 = 1LL;
	uint8_t x3032 = 24U;
	static int32_t t43 = 961313481;

	t43 = ((x3029-(x3030>>x3031))-x3032);

	if (t43 != -215) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3033 = INT8_MIN;
	static uint32_t x3034 = UINT32_MAX;
	static uint8_t x3036 = 124U;
	uint32_t t44 = 447039U;

	t44 = ((x3033-(x3034>>x3035))-x3036);

	if (t44 != 3758096133U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3225 = 231135860LLU;
	volatile uint64_t x3226 = 236210271LLU;
	uint16_t x3227 = 2U;
	static int32_t x3228 = -1;
	uint64_t t45 = 246801295002941091LLU;

	t45 = ((x3225-(x3226>>x3227))-x3228);

	if (t45 != 172083294LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x3329 = -1LL;
	static uint64_t x3330 = 1358645061296339384LLU;
	uint8_t x3331 = 43U;
	uint16_t x3332 = 0U;
	uint64_t t46 = 15853332LLU;

	t46 = ((x3329-(x3330>>x3331))-x3332);

	if (t46 != 18446744073709397155LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x3405 = -1LL;
	static uint32_t x3406 = UINT32_MAX;
	volatile uint32_t x3408 = 12568U;

	t47 = ((x3405-(x3406>>x3407))-x3408);

	if (t47 != -2147496216LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x3433 = 228779003U;
	uint16_t x3435 = 2U;
	volatile uint8_t x3436 = 27U;

	t48 = ((x3433-(x3434>>x3435))-x3436);

	if (t48 != 228778976U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3473 = INT8_MIN;
	uint16_t x3474 = UINT16_MAX;
	int16_t x3476 = INT16_MIN;
	volatile int32_t t49 = 127;

	t49 = ((x3473-(x3474>>x3475))-x3476);

	if (t49 != 24449) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x3570 = UINT32_MAX;
	uint16_t x3571 = 1U;

	t50 = ((x3569-(x3570>>x3571))-x3572);

	if (t50 != 2147483758U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3617 = 1LLU;
	volatile int64_t x3618 = 192594125813158LL;
	uint16_t x3619 = 3U;
	static volatile uint8_t x3620 = 12U;
	uint64_t t51 = 111246268108LLU;

	t51 = ((x3617-(x3618>>x3619))-x3620);

	if (t51 != 18446719999443824961LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3649 = -1928;
	volatile uint64_t x3650 = 80074807702765LLU;
	volatile uint16_t x3651 = 0U;
	uint32_t x3652 = 129237U;
	static volatile uint64_t t52 = 1805134606344052375LLU;

	t52 = ((x3649-(x3650>>x3651))-x3652);

	if (t52 != 18446663998901717686LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3693 = INT8_MIN;
	static uint16_t x3694 = UINT16_MAX;
	int8_t x3695 = 15;
	int8_t x3696 = -3;
	volatile int32_t t53 = 1891378;

	t53 = ((x3693-(x3694>>x3695))-x3696);

	if (t53 != -126) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3809 = INT16_MIN;
	uint32_t x3810 = UINT32_MAX;
	volatile uint16_t x3811 = 30U;
	uint32_t x3812 = 125U;

	t54 = ((x3809-(x3810>>x3811))-x3812);

	if (t54 != 4294934400U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x3873 = INT8_MAX;
	volatile uint16_t x3874 = 0U;
	int8_t x3875 = 3;
	uint16_t x3876 = UINT16_MAX;
	int32_t t55 = -225488;

	t55 = ((x3873-(x3874>>x3875))-x3876);

	if (t55 != -65408) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x3901 = 42U;
	volatile uint16_t x3902 = 29U;
	uint32_t x3904 = 1374U;
	uint32_t t56 = 3U;

	t56 = ((x3901-(x3902>>x3903))-x3904);

	if (t56 != 4294965957U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3921 = 1139661U;
	volatile uint32_t x3923 = 1U;
	static int16_t x3924 = INT16_MIN;
	uint32_t t57 = 3U;

	t57 = ((x3921-(x3922>>x3923))-x3924);

	if (t57 != 1172353U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3958 = UINT8_MAX;
	static int32_t x3959 = 3;
	static volatile uint64_t t58 = 19LLU;

	t58 = ((x3957-(x3958>>x3959))-x3960);

	if (t58 != 18443400442724420357LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3961 = 2575U;
	static int64_t x3962 = 9822148271809LL;
	static uint8_t x3963 = 32U;
	int8_t x3964 = INT8_MAX;
	int64_t t59 = -34174805LL;

	t59 = ((x3961-(x3962>>x3963))-x3964);

	if (t59 != 162LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3993 = 0;
	uint8_t x3994 = 0U;
	uint8_t x3995 = 13U;
	volatile uint8_t x3996 = 0U;

	t60 = ((x3993-(x3994>>x3995))-x3996);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4069 = INT16_MIN;
	static int64_t x4070 = INT64_MAX;
	int8_t x4071 = 2;
	static int16_t x4072 = INT16_MIN;
	volatile int64_t t61 = -74351036119LL;

	t61 = ((x4069-(x4070>>x4071))-x4072);

	if (t61 != -2305843009213693951LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4225 = 11451493318425LLU;
	volatile uint8_t x4227 = 21U;
	uint8_t x4228 = 0U;
	uint64_t t62 = 973010753519LLU;

	t62 = ((x4225-(x4226>>x4227))-x4228);

	if (t62 != 11451493318425LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x4242 = UINT64_MAX;
	uint16_t x4243 = 0U;
	volatile uint8_t x4244 = 3U;
	static uint64_t t63 = 216678379172410133LLU;

	t63 = ((x4241-(x4242>>x4243))-x4244);

	if (t63 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x4313 = -1LL;
	uint64_t x4314 = 206724030339032344LLU;
	volatile int64_t x4316 = INT64_MAX;
	uint64_t t64 = 6016352LLU;

	t64 = ((x4313-(x4314>>x4315))-x4316);

	if (t64 != 9016648006515743464LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x4411 = 3;
	uint32_t x4412 = 147U;
	volatile uint32_t t65 = 66756U;

	t65 = ((x4409-(x4410>>x4411))-x4412);

	if (t65 != 3452457559U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x4426 = 892U;
	int16_t x4428 = -1;
	int32_t t66 = 534361483;

	t66 = ((x4425-(x4426>>x4427))-x4428);

	if (t66 != -948) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x4473 = -1;
	int32_t x4474 = INT32_MAX;
	int8_t x4475 = 1;
	volatile uint16_t x4476 = 2137U;

	t67 = ((x4473-(x4474>>x4475))-x4476);

	if (t67 != -1073743961) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4497 = INT8_MIN;
	uint8_t x4499 = 0U;
	static int64_t x4500 = -1LL;
	int64_t t68 = 1526LL;

	t68 = ((x4497-(x4498>>x4499))-x4500);

	if (t68 != -5645683619LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4573 = 19070LLU;
	static int64_t x4574 = INT64_MAX;
	uint32_t x4575 = 26U;
	int32_t x4576 = INT32_MIN;
	static uint64_t t69 = 7976129537235978163LLU;

	t69 = ((x4573-(x4574>>x4575))-x4576);

	if (t69 != 18446743938418100863LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x4597 = 36U;
	uint16_t x4599 = 13U;
	int16_t x4600 = -1;
	int32_t t70 = -30903103;

	t70 = ((x4597-(x4598>>x4599))-x4600);

	if (t70 != -7389) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4621 = -1;
	volatile uint16_t x4622 = 5545U;
	int16_t x4623 = 0;
	int32_t x4624 = -70725;
	volatile int32_t t71 = -32785;

	t71 = ((x4621-(x4622>>x4623))-x4624);

	if (t71 != 65179) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4797 = -1LL;
	uint64_t x4798 = 1041813444756048913LLU;
	int8_t x4799 = 13;
	int8_t x4800 = 36;
	volatile uint64_t t72 = 4544677336721490728LLU;

	t72 = ((x4797-(x4798>>x4799))-x4800);

	if (t72 != 18446616899216783507LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4813 = -1370919092376LL;
	uint32_t x4814 = UINT32_MAX;
	int32_t x4816 = -1;
	int64_t t73 = -86106LL;

	t73 = ((x4813-(x4814>>x4815))-x4816);

	if (t73 != -1370952646806LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4861 = INT16_MAX;
	int8_t x4862 = 1;
	uint8_t x4863 = 2U;
	uint32_t x4864 = 1725734U;
	volatile uint32_t t74 = 524U;

	t74 = ((x4861-(x4862>>x4863))-x4864);

	if (t74 != 4293274329U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4877 = -4789200;
	uint64_t x4878 = UINT64_MAX;
	uint8_t x4879 = 2U;
	volatile uint64_t t75 = 55048428619431LLU;

	t75 = ((x4877-(x4878>>x4879))-x4880);

	if (t75 != 13835058050982407218LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5065 = 50;
	uint8_t x5066 = UINT8_MAX;
	uint8_t x5067 = 23U;
	int16_t x5068 = INT16_MIN;
	static int32_t t76 = -26542388;

	t76 = ((x5065-(x5066>>x5067))-x5068);

	if (t76 != 32818) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5081 = -23;
	int8_t x5084 = 2;
	int32_t t77 = 3577370;

	t77 = ((x5081-(x5082>>x5083))-x5084);

	if (t77 != -28) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5097 = INT16_MIN;
	static volatile uint32_t x5100 = 8U;
	uint64_t t78 = 7040578675963411LLU;

	t78 = ((x5097-(x5098>>x5099))-x5100);

	if (t78 != 18446744073709518837LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x5101 = -1;
	int16_t x5102 = INT16_MAX;
	uint8_t x5103 = 2U;
	int8_t x5104 = 1;
	int32_t t79 = -8502;

	t79 = ((x5101-(x5102>>x5103))-x5104);

	if (t79 != -8193) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5217 = -1;
	uint64_t x5218 = UINT64_MAX;
	int8_t x5219 = 35;
	int8_t x5220 = INT8_MIN;

	t80 = ((x5217-(x5218>>x5219))-x5220);

	if (t80 != 18446744073172680832LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x5249 = INT16_MAX;
	static volatile int64_t x5252 = 11448105419151310LL;
	uint64_t t81 = 3LLU;

	t81 = ((x5249-(x5250>>x5251))-x5252);

	if (t81 != 16129452959076739122LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5301 = INT64_MIN;
	static int8_t x5302 = 0;
	volatile int8_t x5303 = 1;
	int32_t x5304 = -1;
	int64_t t82 = 8416LL;

	t82 = ((x5301-(x5302>>x5303))-x5304);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x5321 = 101029324954246LL;
	static uint16_t x5322 = 832U;
	int8_t x5323 = 21;
	int16_t x5324 = INT16_MIN;
	volatile int64_t t83 = 139LL;

	t83 = ((x5321-(x5322>>x5323))-x5324);

	if (t83 != 101029324987014LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5389 = 15;
	uint16_t x5390 = UINT16_MAX;
	int16_t x5391 = 11;
	static int16_t x5392 = -6;
	int32_t t84 = 365;

	t84 = ((x5389-(x5390>>x5391))-x5392);

	if (t84 != -10) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5445 = INT16_MIN;
	uint32_t x5446 = 3000115U;

	t85 = ((x5445-(x5446>>x5447))-x5448);

	if (t85 != 4294887653LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5517 = UINT16_MAX;
	volatile uint32_t x5518 = 362985U;
	static int16_t x5519 = 0;
	volatile int8_t x5520 = 15;
	uint32_t t86 = 28U;

	t86 = ((x5517-(x5518>>x5519))-x5520);

	if (t86 != 4294669831U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5601 = -15;
	static int16_t x5603 = 10;
	int32_t x5604 = INT32_MIN;
	uint32_t t87 = 1U;

	t87 = ((x5601-(x5602>>x5603))-x5604);

	if (t87 != 2145690276U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x5617 = -1;
	uint32_t x5618 = 15U;
	static uint8_t x5619 = 0U;
	int32_t x5620 = 93;
	uint32_t t88 = 9708136U;

	t88 = ((x5617-(x5618>>x5619))-x5620);

	if (t88 != 4294967187U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5701 = 3169;
	static volatile uint32_t x5702 = UINT32_MAX;
	uint8_t x5703 = 23U;
	uint8_t x5704 = 27U;
	uint32_t t89 = 32098235U;

	t89 = ((x5701-(x5702>>x5703))-x5704);

	if (t89 != 2631U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5717 = 50U;
	uint8_t x5719 = 3U;
	int32_t x5720 = INT32_MIN;
	int64_t t90 = 1LL;

	t90 = ((x5717-(x5718>>x5719))-x5720);

	if (t90 != -55138330946778LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5801 = 0;
	uint8_t x5802 = 4U;
	volatile int16_t x5803 = 3;
	uint32_t x5804 = UINT32_MAX;

	t91 = ((x5801-(x5802>>x5803))-x5804);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x6013 = INT8_MIN;
	int32_t x6016 = -464;
	int64_t t92 = -44678687271110041LL;

	t92 = ((x6013-(x6014>>x6015))-x6016);

	if (t92 != -909213459398LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6042 = 333U;
	static int32_t x6043 = 10;
	uint32_t x6044 = 805198961U;
	uint32_t t93 = 1275U;

	t93 = ((x6041-(x6042>>x6043))-x6044);

	if (t93 != 3489768207U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x6150 = INT64_MAX;
	volatile int16_t x6151 = 1;
	int32_t x6152 = -1;
	static int64_t t94 = 3910229LL;

	t94 = ((x6149-(x6150>>x6151))-x6152);

	if (t94 != -4611686018427387831LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6437 = -1;
	uint64_t x6438 = 3654014377630646LLU;
	static uint8_t x6440 = 3U;
	uint64_t t95 = 691096624238432LLU;

	t95 = ((x6437-(x6438>>x6439))-x6440);

	if (t95 != 18446515697810949697LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x6525 = INT16_MAX;
	int8_t x6526 = 47;
	int8_t x6527 = 1;
	uint64_t x6528 = 1133LLU;
	static uint64_t t96 = 29LLU;

	t96 = ((x6525-(x6526>>x6527))-x6528);

	if (t96 != 31611LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6665 = INT16_MIN;
	static int64_t x6666 = 8319336536403302LL;
	uint8_t x6667 = 8U;
	static int16_t x6668 = 11;
	int64_t t97 = 17289326683373127LL;

	t97 = ((x6665-(x6666>>x6667))-x6668);

	if (t97 != -32497408378104LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6685 = INT32_MAX;
	static uint16_t x6686 = 0U;
	uint8_t x6687 = 4U;
	volatile int32_t x6688 = INT32_MAX;

	t98 = ((x6685-(x6686>>x6687))-x6688);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x6737 = 337U;
	uint16_t x6738 = UINT16_MAX;
	int64_t x6739 = 10LL;
	int32_t x6740 = INT32_MIN;

	t99 = ((x6737-(x6738>>x6739))-x6740);

	if (t99 != 2147483922U) { NG(); } else { ; }
	
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

