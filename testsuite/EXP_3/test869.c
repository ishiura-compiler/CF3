#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x83 = UINT64_MAX;
uint64_t t3 = 16151LLU;
static uint16_t x657 = UINT16_MAX;
int8_t x658 = -1;
uint64_t t4 = 7LLU;
int8_t x750 = 1;
volatile int64_t x833 = 1LL;
uint64_t x835 = UINT64_MAX;
volatile uint64_t t6 = 10LLU;
uint64_t x913 = 118291LLU;
volatile uint32_t x1228 = 4U;
volatile uint64_t t9 = 42725952165800LLU;
uint32_t x1279 = UINT32_MAX;
volatile int64_t x1363 = INT64_MAX;
int64_t t11 = -16688081356LL;
uint32_t t13 = 474U;
int16_t x1599 = INT16_MAX;
int32_t x1675 = 11;
int16_t x1855 = 699;
static volatile uint8_t x1932 = 5U;
uint64_t x2061 = UINT64_MAX;
static int32_t x2297 = -1;
int64_t x2318 = INT64_MAX;
uint32_t x2319 = 37299U;
uint8_t x2324 = 7U;
volatile int32_t x2369 = INT32_MIN;
int32_t t23 = -652494;
volatile uint64_t t25 = 2254LLU;
static int8_t x2513 = 7;
static uint8_t x2563 = 9U;
static uint32_t t28 = 38U;
uint16_t x2800 = 53U;
static uint64_t t31 = 10420838LLU;
static uint8_t x2851 = 2U;
volatile uint64_t x3037 = UINT64_MAX;
int16_t x3038 = INT16_MIN;
uint16_t x3040 = 23U;
uint64_t t36 = 24820LLU;
int64_t x3294 = INT64_MIN;
int16_t x3295 = INT16_MAX;
uint32_t x3321 = UINT32_MAX;
static int32_t x3322 = INT32_MAX;
int8_t x3324 = 3;
volatile uint32_t x3332 = 19U;
volatile uint64_t x3410 = 6531438534331897LLU;
uint8_t x3412 = 6U;
int16_t x3501 = -1;
uint32_t x3503 = 2309U;
volatile uint64_t x3551 = 1267843LLU;
volatile uint64_t t43 = 1LLU;
static int8_t x3686 = INT8_MAX;
uint8_t x3688 = 12U;
static volatile uint16_t x3779 = 48U;
volatile int32_t x3938 = INT32_MAX;
uint64_t x3939 = 5LLU;
uint32_t x3940 = 39U;
uint64_t t49 = 16254706LLU;
static volatile int16_t x4005 = 811;
int16_t x4008 = 2;
int8_t x4033 = 0;
int64_t t54 = 5LL;
volatile uint64_t t55 = 2645751664179211LLU;
static uint16_t x4313 = UINT16_MAX;
uint64_t t56 = 195218111338LLU;
int64_t x4384 = 1LL;
volatile uint64_t x4467 = 6720900662840LLU;
static int32_t x4510 = -1;
static int16_t x4529 = 16017;
static uint8_t x4537 = UINT8_MAX;
int16_t x4538 = INT16_MAX;
uint8_t x4584 = 14U;
uint64_t x4651 = 300549911341437LLU;
volatile int64_t x4893 = -53952LL;
uint8_t x4896 = 6U;
uint64_t t64 = 8406732022535897754LLU;
static int32_t x4902 = INT32_MIN;
int64_t t65 = -111087LL;
volatile int32_t x4994 = -72;
static uint16_t x5271 = UINT16_MAX;
static uint64_t x5272 = 9LLU;
int32_t x5466 = INT32_MAX;
int32_t x5804 = 0;
volatile int32_t x6005 = INT32_MIN;
int32_t t75 = 1615879;
int16_t x6082 = -2;
static int32_t x6115 = 2172;
int32_t t77 = 3388330;
static int16_t x6141 = -1;
static uint16_t x6251 = 70U;
int16_t x6258 = INT16_MIN;
volatile uint64_t x6259 = 4977202LLU;
int32_t x6331 = 0;
uint8_t x6372 = 4U;
volatile int32_t t82 = -240;
int8_t x6674 = 10;
int8_t x6896 = 0;
static int16_t x7050 = -1;
uint64_t x7205 = UINT64_MAX;
static int32_t x7258 = -1;
uint16_t x7259 = 107U;
static volatile int32_t t93 = -18536;
static int16_t x7314 = INT16_MIN;
uint16_t x7316 = 9U;
int16_t x7361 = INT16_MAX;
int8_t x7364 = 0;
volatile uint16_t x7644 = 1U;


void f0(void) {
	uint8_t x81 = 7U;
	uint16_t x82 = 636U;
	uint16_t x84 = 5U;
	uint64_t t0 = 131LLU;

	t0 = ((x81-x82)&(x83<<x84));

	if (t0 != 18446744073709550976LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x85 = 9;
	static int64_t x86 = -1LL;
	static volatile uint16_t x87 = 8U;
	int16_t x88 = 1;
	int64_t t1 = 3LL;

	t1 = ((x85-x86)&(x87<<x88));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x297 = 1446647U;
	uint16_t x298 = 1U;
	int16_t x299 = 1661;
	uint8_t x300 = 12U;
	static volatile uint32_t t2 = 50U;

	t2 = ((x297-x298)&(x299<<x300));

	if (t2 != 397312U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x473 = INT32_MIN;
	uint64_t x474 = 16558574610770363LLU;
	uint64_t x475 = UINT64_MAX;
	static volatile uint8_t x476 = 1U;

	t3 = ((x473-x474)&(x475<<x476));

	if (t3 != 18430185496951297604LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x659 = 0LLU;
	uint8_t x660 = 0U;

	t4 = ((x657-x658)&(x659<<x660));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x749 = -1482LL;
	int16_t x751 = INT16_MAX;
	volatile int16_t x752 = 0;
	volatile int64_t t5 = 8208669606985LL;

	t5 = ((x749-x750)&(x751<<x752));

	if (t5 != 31285LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x834 = -1;
	uint32_t x836 = 10U;

	t6 = ((x833-x834)&(x835<<x836));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x914 = INT64_MIN;
	int16_t x915 = 6167;
	uint32_t x916 = 1U;
	uint64_t t7 = 19415LLU;

	t7 = ((x913-x914)&(x915<<x916));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x1137 = UINT8_MAX;
	int8_t x1138 = INT8_MIN;
	int64_t x1139 = 8104575731LL;
	static volatile int8_t x1140 = 0;
	int64_t t8 = 6127LL;

	t8 = ((x1137-x1138)&(x1139<<x1140));

	if (t8 != 115LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x1225 = UINT64_MAX;
	int32_t x1226 = -7;
	uint32_t x1227 = UINT32_MAX;

	t9 = ((x1225-x1226)&(x1227<<x1228));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1277 = 43U;
	uint8_t x1278 = 35U;
	uint32_t x1280 = 3U;
	uint32_t t10 = 3029U;

	t10 = ((x1277-x1278)&(x1279<<x1280));

	if (t10 != 8U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x1361 = INT8_MIN;
	int64_t x1362 = -1LL;
	int8_t x1364 = 0;

	t11 = ((x1361-x1362)&(x1363<<x1364));

	if (t11 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1445 = 112054;
	int32_t x1446 = -578;
	uint32_t x1447 = UINT32_MAX;
	static int32_t x1448 = 6;
	static volatile uint32_t t12 = 4U;

	t12 = ((x1445-x1446)&(x1447<<x1448));

	if (t12 != 112576U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1557 = INT8_MIN;
	int32_t x1558 = -1;
	uint32_t x1559 = UINT32_MAX;
	volatile int16_t x1560 = 10;

	t13 = ((x1557-x1558)&(x1559<<x1560));

	if (t13 != 4294966272U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x1597 = UINT16_MAX;
	volatile uint32_t x1598 = 54320974U;
	int8_t x1600 = 1;
	static uint32_t t14 = 1571U;

	t14 = ((x1597-x1598)&(x1599<<x1600));

	if (t14 != 8368U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1629 = INT8_MIN;
	uint32_t x1630 = UINT32_MAX;
	int8_t x1631 = 20;
	static int8_t x1632 = 16;
	volatile uint32_t t15 = 33320296U;

	t15 = ((x1629-x1630)&(x1631<<x1632));

	if (t15 != 1310720U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1673 = INT16_MIN;
	static int8_t x1674 = -1;
	uint8_t x1676 = 19U;
	static int32_t t16 = 34961;

	t16 = ((x1673-x1674)&(x1675<<x1676));

	if (t16 != 5767168) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1853 = UINT32_MAX;
	uint8_t x1854 = 2U;
	volatile uint8_t x1856 = 1U;
	static volatile uint32_t t17 = 107229476U;

	t17 = ((x1853-x1854)&(x1855<<x1856));

	if (t17 != 1396U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1929 = 0;
	int32_t x1930 = INT32_MAX;
	uint16_t x1931 = 39U;
	static int32_t t18 = 8;

	t18 = ((x1929-x1930)&(x1931<<x1932));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x2062 = 80LLU;
	uint16_t x2063 = 3417U;
	uint8_t x2064 = 2U;
	static uint64_t t19 = 78974997LLU;

	t19 = ((x2061-x2062)&(x2063<<x2064));

	if (t19 != 13604LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x2298 = UINT64_MAX;
	int8_t x2299 = 0;
	uint32_t x2300 = 4U;
	volatile uint64_t t20 = 167375967370041487LLU;

	t20 = ((x2297-x2298)&(x2299<<x2300));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x2317 = UINT8_MAX;
	volatile int64_t x2320 = 1LL;
	int64_t t21 = -12041980055LL;

	t21 = ((x2317-x2318)&(x2319<<x2320));

	if (t21 != 256LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x2321 = 18;
	int16_t x2322 = 4;
	int64_t x2323 = 43106826031917LL;
	volatile int64_t t22 = -5055143969138093LL;

	t22 = ((x2321-x2322)&(x2323<<x2324));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x2370 = -1;
	uint16_t x2371 = 31U;
	volatile uint16_t x2372 = 1U;

	t23 = ((x2369-x2370)&(x2371<<x2372));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x2417 = -3312043;
	int16_t x2418 = INT16_MAX;
	int8_t x2419 = 13;
	uint8_t x2420 = 5U;
	volatile int32_t t24 = -511;

	t24 = ((x2417-x2418)&(x2419<<x2420));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2481 = INT32_MIN;
	volatile uint64_t x2482 = UINT64_MAX;
	uint64_t x2483 = UINT64_MAX;
	int32_t x2484 = 7;

	t25 = ((x2481-x2482)&(x2483<<x2484));

	if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2514 = 1259149178220310LLU;
	volatile uint8_t x2515 = UINT8_MAX;
	volatile uint8_t x2516 = 2U;
	static volatile uint64_t t26 = 28LLU;

	t26 = ((x2513-x2514)&(x2515<<x2516));

	if (t26 != 240LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x2561 = INT8_MIN;
	volatile uint8_t x2562 = UINT8_MAX;
	static uint16_t x2564 = 2U;
	volatile int32_t t27 = -72276;

	t27 = ((x2561-x2562)&(x2563<<x2564));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2657 = INT8_MAX;
	int16_t x2658 = -1;
	volatile uint32_t x2659 = 136245717U;
	volatile uint64_t x2660 = 11LLU;

	t28 = ((x2657-x2658)&(x2659<<x2660));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2669 = 35U;
	static int16_t x2670 = 0;
	volatile int64_t x2671 = 350735820440LL;
	uint8_t x2672 = 1U;
	int64_t t29 = 119904021311LL;

	t29 = ((x2669-x2670)&(x2671<<x2672));

	if (t29 != 32LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x2725 = 37747U;
	int16_t x2726 = 750;
	int16_t x2727 = INT16_MAX;
	uint8_t x2728 = 10U;
	static uint32_t t30 = 1497U;

	t30 = ((x2725-x2726)&(x2727<<x2728));

	if (t30 != 36864U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2797 = 6442LLU;
	int16_t x2798 = 0;
	uint64_t x2799 = 59152905988359068LLU;

	t31 = ((x2797-x2798)&(x2799<<x2800));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2849 = 1;
	static int16_t x2850 = -1;
	uint8_t x2852 = 4U;
	static volatile int32_t t32 = -2;

	t32 = ((x2849-x2850)&(x2851<<x2852));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x2857 = INT8_MIN;
	int16_t x2858 = INT16_MIN;
	uint32_t x2859 = 7539701U;
	int8_t x2860 = 0;
	uint32_t t33 = 1071326673U;

	t33 = ((x2857-x2858)&(x2859<<x2860));

	if (t33 != 2944U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2885 = UINT16_MAX;
	uint16_t x2886 = 45U;
	int8_t x2887 = INT8_MAX;
	uint32_t x2888 = 1U;
	int32_t t34 = 417257685;

	t34 = ((x2885-x2886)&(x2887<<x2888));

	if (t34 != 210) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x3039 = 1697000710LLU;
	static uint64_t t35 = 6079422760046LLU;

	t35 = ((x3037-x3038)&(x3039<<x3040));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x3045 = 266480LLU;
	int64_t x3046 = -463322133LL;
	volatile int32_t x3047 = 114;
	int8_t x3048 = 12;

	t36 = ((x3045-x3046)&(x3047<<x3048));

	if (t36 != 65536LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x3157 = 1U;
	int8_t x3158 = 6;
	int64_t x3159 = 1391024785039LL;
	uint8_t x3160 = 3U;
	volatile int64_t t37 = 60558612555894539LL;

	t37 = ((x3157-x3158)&(x3159<<x3160));

	if (t37 != 11128198280312LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x3293 = UINT64_MAX;
	uint8_t x3296 = 1U;
	volatile uint64_t t38 = 2LLU;

	t38 = ((x3293-x3294)&(x3295<<x3296));

	if (t38 != 65534LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x3323 = UINT16_MAX;
	static uint32_t t39 = 74559U;

	t39 = ((x3321-x3322)&(x3323<<x3324));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x3329 = INT64_MAX;
	uint8_t x3330 = UINT8_MAX;
	int16_t x3331 = 3255;
	volatile int64_t t40 = 252691919589234LL;

	t40 = ((x3329-x3330)&(x3331<<x3332));

	if (t40 != 1706557440LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3409 = 872269075909434773LLU;
	uint8_t x3411 = 5U;
	uint64_t t41 = 393654LLU;

	t41 = ((x3409-x3410)&(x3411<<x3412));

	if (t41 != 256LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3502 = 1;
	uint32_t x3504 = 1U;
	static uint32_t t42 = 7102U;

	t42 = ((x3501-x3502)&(x3503<<x3504));

	if (t42 != 4618U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3549 = 3;
	int64_t x3550 = -8LL;
	uint8_t x3552 = 4U;

	t43 = ((x3549-x3550)&(x3551<<x3552));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3685 = UINT8_MAX;
	volatile int16_t x3687 = 0;
	int32_t t44 = 1;

	t44 = ((x3685-x3686)&(x3687<<x3688));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3757 = 588;
	int8_t x3758 = 24;
	int8_t x3759 = 0;
	uint8_t x3760 = 1U;
	static volatile int32_t t45 = -7;

	t45 = ((x3757-x3758)&(x3759<<x3760));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3777 = 1027168134317824LL;
	int8_t x3778 = INT8_MIN;
	uint8_t x3780 = 1U;
	static int64_t t46 = -1232664396LL;

	t46 = ((x3777-x3778)&(x3779<<x3780));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x3873 = INT32_MAX;
	uint8_t x3874 = 46U;
	uint16_t x3875 = 25U;
	int8_t x3876 = 0;
	int32_t t47 = -244813;

	t47 = ((x3873-x3874)&(x3875<<x3876));

	if (t47 != 17) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x3925 = INT16_MIN;
	int64_t x3926 = INT64_MIN;
	uint64_t x3927 = 50612038313LLU;
	static uint32_t x3928 = 0U;
	static uint64_t t48 = 225931985LLU;

	t48 = ((x3925-x3926)&(x3927<<x3928));

	if (t48 != 50612011008LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3937 = -1;

	t49 = ((x3937-x3938)&(x3939<<x3940));

	if (t49 != 2748779069440LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3977 = 106;
	int16_t x3978 = INT16_MIN;
	static int64_t x3979 = 3129LL;
	int8_t x3980 = 1;
	static volatile int64_t t50 = -6271LL;

	t50 = ((x3977-x3978)&(x3979<<x3980));

	if (t50 != 98LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3985 = 13989U;
	volatile uint16_t x3986 = UINT16_MAX;
	uint8_t x3987 = 5U;
	uint32_t x3988 = 0U;
	int32_t t51 = 243350;

	t51 = ((x3985-x3986)&(x3987<<x3988));

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4006 = INT16_MIN;
	int64_t x4007 = 537267584575226763LL;
	int64_t t52 = 140466LL;

	t52 = ((x4005-x4006)&(x4007<<x4008));

	if (t52 != 552LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4034 = 1U;
	int8_t x4035 = 3;
	int16_t x4036 = 19;
	int32_t t53 = -6;

	t53 = ((x4033-x4034)&(x4035<<x4036));

	if (t53 != 1572864) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4177 = UINT8_MAX;
	int64_t x4178 = 0LL;
	static int16_t x4179 = INT16_MAX;
	int16_t x4180 = 0;

	t54 = ((x4177-x4178)&(x4179<<x4180));

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4265 = INT8_MIN;
	uint8_t x4266 = 56U;
	uint64_t x4267 = 124155760LLU;
	int32_t x4268 = 1;

	t55 = ((x4265-x4266)&(x4267<<x4268));

	if (t55 != 248311360LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4314 = 112328LLU;
	uint64_t x4315 = 3485055139556LLU;
	int8_t x4316 = 0;

	t56 = ((x4313-x4314)&(x4315<<x4316));

	if (t56 != 3485055125540LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4381 = 5;
	int64_t x4382 = -1LL;
	int8_t x4383 = INT8_MAX;
	volatile int64_t t57 = -270LL;

	t57 = ((x4381-x4382)&(x4383<<x4384));

	if (t57 != 6LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x4465 = INT8_MAX;
	int16_t x4466 = INT16_MAX;
	volatile uint32_t x4468 = 0U;
	uint64_t t58 = 33594785397070LLU;

	t58 = ((x4465-x4466)&(x4467<<x4468));

	if (t58 != 6720900661248LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x4509 = 2534070U;
	static volatile uint8_t x4511 = UINT8_MAX;
	volatile uint32_t x4512 = 2U;
	uint32_t t59 = 15U;

	t59 = ((x4509-x4510)&(x4511<<x4512));

	if (t59 != 692U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4530 = 3602LLU;
	static uint16_t x4531 = UINT16_MAX;
	volatile int32_t x4532 = 1;
	volatile uint64_t t60 = 19447972120284346LLU;

	t60 = ((x4529-x4530)&(x4531<<x4532));

	if (t60 != 12414LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x4539 = INT64_MAX;
	int8_t x4540 = 0;
	volatile int64_t t61 = -67641824952110LL;

	t61 = ((x4537-x4538)&(x4539<<x4540));

	if (t61 != 9223372036854743296LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4581 = 11;
	int32_t x4582 = -1045912;
	int8_t x4583 = 7;
	volatile int32_t t62 = 6506;

	t62 = ((x4581-x4582)&(x4583<<x4584));

	if (t62 != 114688) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4649 = -46589683;
	static volatile uint16_t x4650 = 0U;
	static int32_t x4652 = 48;
	volatile uint64_t t63 = 99546177552426LLU;

	t63 = ((x4649-x4650)&(x4651<<x4652));

	if (t63 != 16824603782926041088LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4894 = -1;
	volatile uint64_t x4895 = 41191764279LLU;

	t64 = ((x4893-x4894)&(x4895<<x4896));

	if (t64 != 2636272897344LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x4901 = -1LL;
	int64_t x4903 = 6LL;
	int16_t x4904 = 3;

	t65 = ((x4901-x4902)&(x4903<<x4904));

	if (t65 != 48LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4937 = -1LL;
	uint16_t x4938 = 2781U;
	int16_t x4939 = INT16_MAX;
	uint8_t x4940 = 6U;
	int64_t t66 = 1499195378008LL;

	t66 = ((x4937-x4938)&(x4939<<x4940));

	if (t66 != 2094336LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4993 = INT16_MIN;
	uint64_t x4995 = 15517550371264LLU;
	volatile int16_t x4996 = 0;
	volatile uint64_t t67 = 1993558LLU;

	t67 = ((x4993-x4994)&(x4995<<x4996));

	if (t67 != 15517550346304LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x5197 = INT64_MAX;
	volatile uint64_t x5198 = 53565402959963839LLU;
	uint8_t x5199 = 89U;
	uint8_t x5200 = 4U;
	static volatile uint64_t t68 = 55835127LLU;

	t68 = ((x5197-x5198)&(x5199<<x5200));

	if (t68 != 256LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5269 = INT8_MIN;
	static volatile int16_t x5270 = 1;
	volatile int32_t t69 = 1;

	t69 = ((x5269-x5270)&(x5271<<x5272));

	if (t69 != 33553920) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5305 = UINT8_MAX;
	volatile uint8_t x5306 = 26U;
	uint32_t x5307 = UINT32_MAX;
	int16_t x5308 = 3;
	volatile uint32_t t70 = 116452U;

	t70 = ((x5305-x5306)&(x5307<<x5308));

	if (t70 != 224U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x5405 = 0;
	volatile uint16_t x5406 = UINT16_MAX;
	int8_t x5407 = 0;
	uint16_t x5408 = 27U;
	volatile int32_t t71 = 261556598;

	t71 = ((x5405-x5406)&(x5407<<x5408));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x5465 = 878629200;
	volatile uint8_t x5467 = UINT8_MAX;
	static uint8_t x5468 = 1U;
	volatile int32_t t72 = 2452862;

	t72 = ((x5465-x5466)&(x5467<<x5468));

	if (t72 != 336) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5709 = -1LL;
	int16_t x5710 = -1;
	int16_t x5711 = 3;
	uint8_t x5712 = 4U;
	volatile int64_t t73 = -58463984114595737LL;

	t73 = ((x5709-x5710)&(x5711<<x5712));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5801 = 12016307;
	int16_t x5802 = INT16_MAX;
	static uint32_t x5803 = 20191U;
	volatile uint32_t t74 = 265U;

	t74 = ((x5801-x5802)&(x5803<<x5804));

	if (t74 != 19092U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x6006 = INT32_MIN;
	uint8_t x6007 = 34U;
	uint8_t x6008 = 0U;

	t75 = ((x6005-x6006)&(x6007<<x6008));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x6081 = 1126898166607LL;
	uint32_t x6083 = UINT32_MAX;
	uint8_t x6084 = 0U;
	volatile int64_t t76 = 445LL;

	t76 = ((x6081-x6082)&(x6083<<x6084));

	if (t76 != 1616735057LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x6113 = INT16_MAX;
	int16_t x6114 = -1;
	uint8_t x6116 = 1U;

	t77 = ((x6113-x6114)&(x6115<<x6116));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x6142 = -1;
	int8_t x6143 = 55;
	static uint8_t x6144 = 5U;
	int32_t t78 = 47473888;

	t78 = ((x6141-x6142)&(x6143<<x6144));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x6249 = -1;
	static int16_t x6250 = INT16_MIN;
	uint16_t x6252 = 6U;
	volatile int32_t t79 = 13635329;

	t79 = ((x6249-x6250)&(x6251<<x6252));

	if (t79 != 4480) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6257 = -1;
	volatile int32_t x6260 = 6;
	volatile uint64_t t80 = 11024LLU;

	t80 = ((x6257-x6258)&(x6259<<x6260));

	if (t80 != 3200LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6329 = INT16_MIN;
	uint16_t x6330 = UINT16_MAX;
	static volatile int8_t x6332 = 0;
	volatile int32_t t81 = 409917220;

	t81 = ((x6329-x6330)&(x6331<<x6332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x6369 = INT8_MAX;
	int32_t x6370 = 125;
	uint8_t x6371 = UINT8_MAX;

	t82 = ((x6369-x6370)&(x6371<<x6372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6633 = 2655792;
	static int64_t x6634 = -520407534230320LL;
	int16_t x6635 = INT16_MAX;
	uint8_t x6636 = 2U;
	int64_t t83 = -4609442LL;

	t83 = ((x6633-x6634)&(x6635<<x6636));

	if (t83 != 123232LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x6673 = 0;
	static uint64_t x6675 = 1794438952585106LLU;
	uint8_t x6676 = 15U;
	uint64_t t84 = 23850658LLU;

	t84 = ((x6673-x6674)&(x6675<<x6676));

	if (t84 != 3459943377180098560LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x6729 = 2644U;
	volatile int8_t x6730 = INT8_MAX;
	static uint16_t x6731 = UINT16_MAX;
	int32_t x6732 = 0;
	volatile int32_t t85 = -168674;

	t85 = ((x6729-x6730)&(x6731<<x6732));

	if (t85 != 2517) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x6853 = INT8_MIN;
	static int16_t x6854 = 3394;
	int32_t x6855 = 676;
	int32_t x6856 = 1;
	int32_t t86 = 64245813;

	t86 = ((x6853-x6854)&(x6855<<x6856));

	if (t86 != 8) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6893 = INT64_MIN;
	static int8_t x6894 = 0;
	uint64_t x6895 = UINT64_MAX;
	uint64_t t87 = 3733289891646455LLU;

	t87 = ((x6893-x6894)&(x6895<<x6896));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x6909 = 3U;
	static int8_t x6910 = INT8_MIN;
	uint64_t x6911 = UINT64_MAX;
	uint8_t x6912 = 3U;
	volatile uint64_t t88 = 1LLU;

	t88 = ((x6909-x6910)&(x6911<<x6912));

	if (t88 != 128LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x7049 = 53;
	static uint16_t x7051 = UINT16_MAX;
	volatile uint8_t x7052 = 1U;
	volatile int32_t t89 = -735;

	t89 = ((x7049-x7050)&(x7051<<x7052));

	if (t89 != 54) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x7089 = INT64_MAX;
	volatile uint16_t x7090 = UINT16_MAX;
	volatile uint64_t x7091 = 623019860970552LLU;
	uint8_t x7092 = 1U;
	volatile uint64_t t90 = 8LLU;

	t90 = ((x7089-x7090)&(x7091<<x7092));

	if (t90 != 1246039721902080LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x7206 = 1860135U;
	uint16_t x7207 = 282U;
	uint16_t x7208 = 1U;
	static uint64_t t91 = 1014265211988LLU;

	t91 = ((x7205-x7206)&(x7207<<x7208));

	if (t91 != 16LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x7225 = INT32_MAX;
	int8_t x7226 = 0;
	int8_t x7227 = INT8_MAX;
	static int64_t x7228 = 0LL;
	volatile int32_t t92 = 1;

	t92 = ((x7225-x7226)&(x7227<<x7228));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x7257 = INT32_MIN;
	static int16_t x7260 = 0;

	t93 = ((x7257-x7258)&(x7259<<x7260));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x7313 = 2004U;
	int16_t x7315 = INT16_MAX;
	volatile uint32_t t94 = 47822U;

	t94 = ((x7313-x7314)&(x7315<<x7316));

	if (t94 != 34304U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x7353 = 0U;
	uint32_t x7354 = 3U;
	uint64_t x7355 = UINT64_MAX;
	uint16_t x7356 = 2U;
	volatile uint64_t t95 = 508099889346057990LLU;

	t95 = ((x7353-x7354)&(x7355<<x7356));

	if (t95 != 4294967292LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x7362 = -655112397003LL;
	int32_t x7363 = INT32_MAX;
	volatile int64_t t96 = 3859371529537648967LL;

	t96 = ((x7361-x7362)&(x7363<<x7364));

	if (t96 != 129917130LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x7529 = INT8_MAX;
	uint16_t x7530 = UINT16_MAX;
	uint8_t x7531 = 102U;
	int32_t x7532 = 1;
	volatile int32_t t97 = 199;

	t97 = ((x7529-x7530)&(x7531<<x7532));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x7641 = UINT32_MAX;
	uint8_t x7642 = 1U;
	static uint32_t x7643 = 36U;
	volatile uint32_t t98 = 33848340U;

	t98 = ((x7641-x7642)&(x7643<<x7644));

	if (t98 != 72U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x7649 = 2U;
	int32_t x7650 = -409889353;
	static uint8_t x7651 = 9U;
	uint8_t x7652 = 3U;
	static int32_t t99 = -23568;

	t99 = ((x7649-x7650)&(x7651<<x7652));

	if (t99 != 72) { NG(); } else { ; }
	
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

