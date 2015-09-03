#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x37 = UINT64_MAX;
static int16_t x39 = -1;
uint8_t x46 = 2U;
uint8_t x47 = UINT8_MAX;
static int32_t x62 = -1;
uint32_t x63 = UINT32_MAX;
volatile uint8_t x68 = 0U;
volatile uint64_t t4 = 32LLU;
static uint64_t x83 = 1983528295005LLU;
int64_t x206 = INT64_MAX;
volatile int64_t t7 = 1670592336167660359LL;
int16_t x209 = 5;
volatile int8_t x733 = -56;
int8_t x844 = 0;
int32_t x882 = INT32_MAX;
static uint8_t x990 = 33U;
int64_t x991 = 261326215586LL;
uint64_t t17 = 2921722LLU;
uint64_t x1166 = UINT64_MAX;
volatile int16_t x1281 = INT16_MIN;
uint8_t x1283 = 4U;
uint32_t x1305 = 8477391U;
uint8_t x1308 = 14U;
uint32_t x1342 = 140178U;
uint16_t x1344 = 34U;
static int8_t x1736 = 0;
int32_t x1862 = INT32_MIN;
int16_t x1864 = 1;
uint64_t x1930 = 547653022386LLU;
static volatile uint32_t x1953 = 78U;
int8_t x1954 = INT8_MIN;
uint64_t x1990 = 136509794967716009LLU;
int16_t x2042 = 10;
int32_t x2149 = INT32_MAX;
int16_t x2151 = INT16_MAX;
uint8_t x2256 = 1U;
volatile int32_t t34 = -101;
volatile uint16_t x2405 = 1980U;
int16_t x2406 = INT16_MAX;
uint32_t x2576 = 2U;
volatile int64_t x2618 = INT64_MIN;
volatile uint8_t x2620 = 2U;
volatile uint64_t t40 = 323039355756893617LLU;
static volatile uint16_t x2697 = UINT16_MAX;
static volatile uint64_t t41 = 25005458549327294LLU;
volatile int64_t x2813 = INT64_MIN;
volatile int32_t x3061 = 0;
static volatile uint16_t x3064 = 0U;
static volatile int64_t t44 = 471596874LL;
int16_t x3162 = INT16_MIN;
uint8_t x3172 = 15U;
int32_t x3405 = INT32_MAX;
int16_t x3428 = 0;
int16_t x3473 = INT16_MIN;
uint32_t t51 = 39888U;
static uint32_t x3519 = 97395U;
static int8_t x3559 = 2;
uint16_t x3619 = UINT16_MAX;
uint64_t x3655 = 12909722813LLU;
static volatile uint64_t t56 = 37LLU;
uint32_t t57 = 31U;
volatile uint16_t x3771 = UINT16_MAX;
uint8_t x3772 = 1U;
volatile int64_t x3809 = -9541502LL;
int32_t x3831 = -1;
uint32_t x3875 = 1709058870U;
uint32_t x3953 = UINT32_MAX;
volatile int32_t x4029 = INT32_MIN;
volatile uint64_t x4041 = 71054LLU;
int32_t x4044 = 12;
volatile uint64_t t66 = 7710717LLU;
int32_t x4274 = -1;
volatile int16_t x4276 = 3;
volatile uint32_t t68 = 488003U;
uint64_t x4374 = UINT64_MAX;
volatile uint64_t x4375 = 2509715561LLU;
static volatile uint64_t t69 = 0LLU;
int32_t x4462 = INT32_MIN;
static volatile uint64_t t70 = 384665924906LLU;
volatile int64_t t72 = 2LL;
int8_t x4709 = INT8_MIN;
uint32_t x4712 = 1U;
static uint64_t x4783 = 9LLU;
uint8_t x4839 = UINT8_MAX;
uint8_t x4869 = 28U;
static volatile int32_t x4870 = INT32_MIN;
uint64_t x4930 = 1871707900LLU;
uint16_t x4932 = 31U;
uint16_t x4997 = 47U;
static volatile int32_t x4998 = -1;
volatile uint32_t x5000 = 16U;
volatile int8_t x5087 = INT8_MIN;
volatile int32_t x5231 = -1;
uint16_t x5232 = 0U;
int16_t x5487 = 1;
static uint32_t x5488 = 7U;
uint64_t x5530 = 4442290126983096252LLU;
uint64_t t82 = 174308052LLU;
uint64_t x5602 = 42LLU;
static uint16_t x5604 = 1U;
uint32_t x5681 = 0U;
static int16_t x5702 = INT16_MAX;
volatile int8_t x5704 = 5;
int16_t x5721 = INT16_MIN;
static int8_t x6298 = INT8_MIN;
uint16_t x6366 = 169U;
uint8_t x6380 = 0U;
uint64_t x6508 = 2LLU;
int8_t x6722 = INT8_MAX;
volatile uint32_t x6723 = 5547U;
volatile uint32_t t94 = 2103930352U;
static uint8_t x6735 = 34U;
volatile uint64_t t95 = 1082LLU;
static int64_t x6753 = INT64_MIN;
int64_t x6829 = -1LL;
volatile uint64_t t98 = 94765588308103LLU;
static volatile int8_t x6860 = 0;


void f0(void) {
	static volatile uint16_t x25 = 26U;
	static int16_t x26 = INT16_MAX;
	uint16_t x27 = 96U;
	uint16_t x28 = 2U;
	static volatile int32_t t0 = -2466;

	t0 = (x25/((x26|x27)<<x28));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x38 = 505U;
	volatile uint8_t x40 = 12U;
	static volatile uint64_t t1 = 16822490852266211LLU;

	t1 = (x37/((x38|x39)<<x40));

	if (t1 != 4294971392LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x45 = INT8_MIN;
	int16_t x48 = 18;
	volatile int32_t t2 = -21644;

	t2 = (x45/((x46|x47)<<x48));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x61 = 15;
	static volatile int16_t x64 = 16;
	volatile uint32_t t3 = 4015692U;

	t3 = (x61/((x62|x63)<<x64));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = 41554022897524057LL;
	uint32_t x67 = 9U;

	t4 = (x65/((x66|x67)<<x68));

	if (t4 != 443LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x81 = 7654U;
	uint64_t x82 = 2269612LLU;
	int8_t x84 = 7;
	volatile uint64_t t5 = 0LLU;

	t5 = (x81/((x82|x83)<<x84));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x153 = 756943LLU;
	uint64_t x154 = 4091877453775043LLU;
	volatile uint32_t x155 = 4U;
	static volatile uint64_t x156 = 12LLU;
	volatile uint64_t t6 = 5872LLU;

	t6 = (x153/((x154|x155)<<x156));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x205 = -2054982;
	int16_t x207 = INT16_MAX;
	uint16_t x208 = 0U;

	t7 = (x205/((x206|x207)<<x208));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x210 = 15917LLU;
	int8_t x211 = -1;
	uint8_t x212 = 62U;
	uint64_t t8 = 522545922LLU;

	t8 = (x209/((x210|x211)<<x212));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x381 = INT32_MAX;
	uint8_t x382 = 5U;
	int32_t x383 = 4777;
	uint32_t x384 = 0U;
	volatile int32_t t9 = -19338888;

	t9 = (x381/((x382|x383)<<x384));

	if (t9 != 449170) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x734 = 862631451U;
	int16_t x735 = -1;
	uint32_t x736 = 3U;
	static volatile uint32_t t10 = 1105U;

	t10 = (x733/((x734|x735)<<x736));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x825 = 146182233492325056LLU;
	static uint16_t x826 = 1U;
	uint64_t x827 = 2039671LLU;
	volatile int8_t x828 = 5;
	volatile uint64_t t11 = 185757570512LLU;

	t11 = (x825/((x826|x827)<<x828));

	if (t11 != 2239672376LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x841 = UINT64_MAX;
	uint8_t x842 = UINT8_MAX;
	uint64_t x843 = 709LLU;
	volatile uint64_t t12 = 29LLU;

	t12 = (x841/((x842|x843)<<x844));

	if (t12 != 24050513785801240LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x881 = 60LL;
	volatile int16_t x883 = 212;
	static volatile uint8_t x884 = 0U;
	int64_t t13 = 6598330LL;

	t13 = (x881/((x882|x883)<<x884));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x913 = 14LLU;
	static volatile int16_t x914 = -1;
	static uint32_t x915 = 1631U;
	static int16_t x916 = 9;
	volatile uint64_t t14 = 4120120613239302057LLU;

	t14 = (x913/((x914|x915)<<x916));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x933 = INT16_MIN;
	uint32_t x934 = 2715U;
	uint32_t x935 = 909U;
	volatile uint8_t x936 = 7U;
	uint32_t t15 = 19U;

	t15 = (x933/((x934|x935)<<x936));

	if (t15 != 11278U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x989 = INT64_MIN;
	static uint32_t x992 = 0U;
	volatile int64_t t16 = 2023LL;

	t16 = (x989/((x990|x991)<<x992));

	if (t16 != -35294476LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1025 = INT32_MIN;
	uint64_t x1026 = UINT64_MAX;
	static volatile int32_t x1027 = INT32_MIN;
	int8_t x1028 = 1;

	t17 = (x1025/((x1026|x1027)<<x1028));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1165 = 2091;
	int8_t x1167 = 32;
	uint8_t x1168 = 12U;
	volatile uint64_t t18 = 737390426985LLU;

	t18 = (x1165/((x1166|x1167)<<x1168));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1282 = 1362;
	int16_t x1284 = 1;
	static volatile int32_t t19 = -1;

	t19 = (x1281/((x1282|x1283)<<x1284));

	if (t19 != -11) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1306 = 44;
	volatile uint16_t x1307 = 1U;
	uint32_t t20 = 3651434U;

	t20 = (x1305/((x1306|x1307)<<x1308));

	if (t20 != 11U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1341 = UINT8_MAX;
	int64_t x1343 = 440197LL;
	int64_t t21 = 1LL;

	t21 = (x1341/((x1342|x1343)<<x1344));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1601 = INT16_MIN;
	uint8_t x1602 = 1U;
	uint32_t x1603 = 14857691U;
	uint8_t x1604 = 3U;
	static volatile uint32_t t22 = 163U;

	t22 = (x1601/((x1602|x1603)<<x1604));

	if (t22 != 36U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1625 = INT64_MIN;
	static uint64_t x1626 = 584617LLU;
	volatile uint16_t x1627 = 2296U;
	static uint8_t x1628 = 0U;
	volatile uint64_t t23 = 534913290371LLU;

	t23 = (x1625/((x1626|x1627)<<x1628));

	if (t23 != 15774618369608LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1733 = 2;
	volatile int32_t x1734 = INT32_MAX;
	volatile uint8_t x1735 = 84U;
	volatile int32_t t24 = 15774817;

	t24 = (x1733/((x1734|x1735)<<x1736));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1861 = 2962;
	static volatile uint64_t x1863 = 17905394LLU;
	volatile uint64_t t25 = 3858283981661LLU;

	t25 = (x1861/((x1862|x1863)<<x1864));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x1929 = INT64_MAX;
	uint16_t x1931 = 5U;
	uint16_t x1932 = 30U;
	uint64_t t26 = 705756529882531LLU;

	t26 = (x1929/((x1930|x1931)<<x1932));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1955 = UINT64_MAX;
	uint16_t x1956 = 3U;
	uint64_t t27 = 3LLU;

	t27 = (x1953/((x1954|x1955)<<x1956));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1989 = -8864;
	int16_t x1991 = INT16_MAX;
	uint16_t x1992 = 2U;
	volatile uint64_t t28 = 2536170663146131226LLU;

	t28 = (x1989/((x1990|x1991)<<x1992));

	if (t28 != 33LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2021 = INT8_MIN;
	static uint32_t x2022 = UINT32_MAX;
	static volatile uint32_t x2023 = UINT32_MAX;
	int8_t x2024 = 1;
	uint32_t t29 = 1U;

	t29 = (x2021/((x2022|x2023)<<x2024));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2041 = INT64_MAX;
	uint8_t x2043 = 1U;
	uint8_t x2044 = 8U;
	int64_t t30 = -222096576729LL;

	t30 = (x2041/((x2042|x2043)<<x2044));

	if (t30 != 3275345183542178LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2085 = INT64_MAX;
	uint64_t x2086 = 97466LLU;
	int32_t x2087 = INT32_MIN;
	uint16_t x2088 = 13U;
	volatile uint64_t t31 = 9420042506720998LLU;

	t31 = (x2085/((x2086|x2087)<<x2088));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2150 = 7321682779384802LLU;
	uint8_t x2152 = 12U;
	uint64_t t32 = 2201826LLU;

	t32 = (x2149/((x2150|x2151)<<x2152));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2165 = 42U;
	int8_t x2166 = 34;
	uint32_t x2167 = 53U;
	uint8_t x2168 = 28U;
	uint32_t t33 = 28U;

	t33 = (x2165/((x2166|x2167)<<x2168));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x2253 = INT16_MIN;
	static int8_t x2254 = INT8_MAX;
	int32_t x2255 = 7217;

	t34 = (x2253/((x2254|x2255)<<x2256));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2285 = -1;
	volatile int16_t x2286 = INT16_MAX;
	uint64_t x2287 = 51420324178688LLU;
	uint8_t x2288 = 0U;
	uint64_t t35 = 26LLU;

	t35 = (x2285/((x2286|x2287)<<x2288));

	if (t35 != 358744LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2341 = INT32_MIN;
	int8_t x2342 = INT8_MAX;
	static int8_t x2343 = INT8_MAX;
	int8_t x2344 = 1;
	static int32_t t36 = 686535;

	t36 = (x2341/((x2342|x2343)<<x2344));

	if (t36 != -8454660) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2407 = 1915;
	uint8_t x2408 = 3U;
	int32_t t37 = 393752795;

	t37 = (x2405/((x2406|x2407)<<x2408));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2573 = UINT8_MAX;
	uint64_t x2574 = UINT64_MAX;
	static uint8_t x2575 = 4U;
	static uint64_t t38 = 770544718663531LLU;

	t38 = (x2573/((x2574|x2575)<<x2576));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2617 = INT32_MIN;
	volatile uint64_t x2619 = UINT64_MAX;
	uint64_t t39 = 15308LLU;

	t39 = (x2617/((x2618|x2619)<<x2620));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2677 = -1LL;
	volatile uint64_t x2678 = 233524511LLU;
	uint8_t x2679 = 15U;
	uint8_t x2680 = 41U;

	t40 = (x2677/((x2678|x2679)<<x2680));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2698 = UINT64_MAX;
	volatile uint32_t x2699 = UINT32_MAX;
	uint64_t x2700 = 29LLU;

	t41 = (x2697/((x2698|x2699)<<x2700));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2814 = -1;
	uint64_t x2815 = UINT64_MAX;
	uint16_t x2816 = 6U;
	uint64_t t42 = 2775680246333620855LLU;

	t42 = (x2813/((x2814|x2815)<<x2816));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2841 = INT8_MAX;
	uint64_t x2842 = 22127LLU;
	uint32_t x2843 = 31047U;
	int32_t x2844 = 3;
	uint64_t t43 = 0LLU;

	t43 = (x2841/((x2842|x2843)<<x2844));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3062 = 31540LL;
	uint16_t x3063 = 45U;

	t44 = (x3061/((x3062|x3063)<<x3064));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3161 = INT8_MAX;
	uint32_t x3163 = 355U;
	static int8_t x3164 = 21;
	uint32_t t45 = 308U;

	t45 = (x3161/((x3162|x3163)<<x3164));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3165 = INT64_MAX;
	volatile uint64_t x3166 = UINT64_MAX;
	int8_t x3167 = INT8_MIN;
	int8_t x3168 = 0;
	volatile uint64_t t46 = 537LLU;

	t46 = (x3165/((x3166|x3167)<<x3168));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x3169 = -2;
	uint32_t x3170 = UINT32_MAX;
	int8_t x3171 = -1;
	volatile uint32_t t47 = 6115473U;

	t47 = (x3169/((x3170|x3171)<<x3172));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3285 = 158655154060182LL;
	static volatile uint64_t x3286 = 627465LLU;
	static volatile int64_t x3287 = -119013783LL;
	uint8_t x3288 = 21U;
	uint64_t t48 = 7485307808003LLU;

	t48 = (x3285/((x3286|x3287)<<x3288));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3406 = -1;
	uint32_t x3407 = 6637258U;
	static int8_t x3408 = 6;
	volatile uint32_t t49 = 9U;

	t49 = (x3405/((x3406|x3407)<<x3408));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3425 = 126152162935967LL;
	static uint32_t x3426 = 44414U;
	int32_t x3427 = INT32_MAX;
	static volatile int64_t t50 = 206283364LL;

	t50 = (x3425/((x3426|x3427)<<x3428));

	if (t50 != 58744LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3474 = 147346656U;
	int16_t x3475 = INT16_MIN;
	int16_t x3476 = 1;

	t51 = (x3473/((x3474|x3475)<<x3476));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3517 = INT8_MIN;
	uint32_t x3518 = UINT32_MAX;
	uint8_t x3520 = 30U;
	volatile uint32_t t52 = 37227742U;

	t52 = (x3517/((x3518|x3519)<<x3520));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3525 = UINT32_MAX;
	static uint16_t x3526 = UINT16_MAX;
	uint32_t x3527 = 13U;
	uint8_t x3528 = 2U;
	uint32_t t53 = 160062U;

	t53 = (x3525/((x3526|x3527)<<x3528));

	if (t53 != 16384U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3557 = 39U;
	volatile uint8_t x3558 = UINT8_MAX;
	uint8_t x3560 = 5U;
	volatile uint32_t t54 = 23U;

	t54 = (x3557/((x3558|x3559)<<x3560));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3617 = 83546U;
	volatile uint32_t x3618 = 15912U;
	int8_t x3620 = 1;
	uint32_t t55 = 54570661U;

	t55 = (x3617/((x3618|x3619)<<x3620));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3653 = 336110270U;
	static int8_t x3654 = INT8_MIN;
	int8_t x3656 = 2;

	t56 = (x3653/((x3654|x3655)<<x3656));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3697 = INT32_MAX;
	int8_t x3698 = INT8_MIN;
	volatile uint32_t x3699 = UINT32_MAX;
	int32_t x3700 = 1;

	t57 = (x3697/((x3698|x3699)<<x3700));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3765 = 1168;
	uint8_t x3766 = 0U;
	uint8_t x3767 = 9U;
	int64_t x3768 = 12LL;
	int32_t t58 = 825085964;

	t58 = (x3765/((x3766|x3767)<<x3768));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3769 = INT64_MIN;
	uint32_t x3770 = 557566U;
	static volatile int64_t t59 = -36074LL;

	t59 = (x3769/((x3770|x3771)<<x3772));

	if (t59 != -7818762609168LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3810 = 4;
	static volatile int16_t x3811 = 0;
	uint8_t x3812 = 18U;
	volatile int64_t t60 = 460818815533LL;

	t60 = (x3809/((x3810|x3811)<<x3812));

	if (t60 != -9LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3829 = INT8_MIN;
	volatile uint64_t x3830 = UINT64_MAX;
	int32_t x3832 = 1;
	volatile uint64_t t61 = 4032794639238093LLU;

	t61 = (x3829/((x3830|x3831)<<x3832));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3857 = INT32_MIN;
	uint16_t x3858 = UINT16_MAX;
	int8_t x3859 = 2;
	uint16_t x3860 = 0U;
	volatile int32_t t62 = -116778394;

	t62 = (x3857/((x3858|x3859)<<x3860));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3873 = -2262;
	int8_t x3874 = INT8_MAX;
	int16_t x3876 = 9;
	static volatile uint32_t t63 = 264U;

	t63 = (x3873/((x3874|x3875)<<x3876));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3954 = INT16_MAX;
	uint16_t x3955 = UINT16_MAX;
	uint8_t x3956 = 13U;
	uint32_t t64 = 77U;

	t64 = (x3953/((x3954|x3955)<<x3956));

	if (t64 != 8U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x4030 = -3105430;
	uint64_t x4031 = 4248520461023LLU;
	uint8_t x4032 = 16U;
	uint64_t t65 = 14052392611832LLU;

	t65 = (x4029/((x4030|x4031)<<x4032));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4042 = INT64_MIN;
	uint64_t x4043 = 2019086914LLU;

	t66 = (x4041/((x4042|x4043)<<x4044));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4141 = INT64_MIN;
	uint64_t x4142 = 268920016022LLU;
	volatile int64_t x4143 = -1LL;
	uint16_t x4144 = 53U;
	volatile uint64_t t67 = 10088875886755LLU;

	t67 = (x4141/((x4142|x4143)<<x4144));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4273 = INT16_MIN;
	static uint32_t x4275 = 10U;

	t68 = (x4273/((x4274|x4275)<<x4276));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4373 = 1179552U;
	static uint32_t x4376 = 0U;

	t69 = (x4373/((x4374|x4375)<<x4376));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x4461 = INT32_MAX;
	uint64_t x4463 = 41673684518LLU;
	uint8_t x4464 = 15U;

	t70 = (x4461/((x4462|x4463)<<x4464));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4481 = INT64_MIN;
	uint64_t x4482 = 6416477LLU;
	static volatile uint16_t x4483 = UINT16_MAX;
	uint8_t x4484 = 47U;
	uint64_t t71 = 92LLU;

	t71 = (x4481/((x4482|x4483)<<x4484));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4629 = 893652976904683LL;
	int8_t x4630 = INT8_MIN;
	volatile uint32_t x4631 = 7332180U;
	static int16_t x4632 = 0;

	t72 = (x4629/((x4630|x4631)<<x4632));

	if (t72 != 208069LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4710 = 1890365802U;
	uint16_t x4711 = UINT16_MAX;
	volatile uint32_t t73 = 452289656U;

	t73 = (x4709/((x4710|x4711)<<x4712));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4781 = 983619074LLU;
	uint16_t x4782 = 419U;
	int8_t x4784 = 31;
	volatile uint64_t t74 = 7337219LLU;

	t74 = (x4781/((x4782|x4783)<<x4784));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4837 = 14590581482LLU;
	uint64_t x4838 = UINT64_MAX;
	int64_t x4840 = 1LL;
	uint64_t t75 = 1133LLU;

	t75 = (x4837/((x4838|x4839)<<x4840));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x4871 = UINT64_MAX;
	static volatile int16_t x4872 = 1;
	static uint64_t t76 = 27890713441023LLU;

	t76 = (x4869/((x4870|x4871)<<x4872));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4929 = 10282830394LLU;
	uint8_t x4931 = UINT8_MAX;
	uint64_t t77 = 1241091276750991LLU;

	t77 = (x4929/((x4930|x4931)<<x4932));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4999 = 15876U;
	volatile uint32_t t78 = 173U;

	t78 = (x4997/((x4998|x4999)<<x5000));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5085 = INT32_MAX;
	uint64_t x5086 = 526LLU;
	volatile uint8_t x5088 = 1U;
	volatile uint64_t t79 = 33279955575812LLU;

	t79 = (x5085/((x5086|x5087)<<x5088));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5229 = 113350146U;
	static uint64_t x5230 = 3LLU;
	uint64_t t80 = 144448963961899LLU;

	t80 = (x5229/((x5230|x5231)<<x5232));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5485 = 72U;
	static int16_t x5486 = INT16_MAX;
	uint32_t t81 = 521107U;

	t81 = (x5485/((x5486|x5487)<<x5488));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5529 = -29226851967811LL;
	uint32_t x5531 = UINT32_MAX;
	static volatile uint8_t x5532 = 51U;

	t82 = (x5529/((x5530|x5531)<<x5532));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5601 = 387U;
	volatile uint16_t x5603 = 4837U;
	volatile uint64_t t83 = 3483902LLU;

	t83 = (x5601/((x5602|x5603)<<x5604));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5682 = UINT8_MAX;
	uint32_t x5683 = 122622U;
	int8_t x5684 = 2;
	volatile uint32_t t84 = 3889505U;

	t84 = (x5681/((x5682|x5683)<<x5684));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5701 = UINT16_MAX;
	uint32_t x5703 = 1U;
	volatile uint32_t t85 = 14474074U;

	t85 = (x5701/((x5702|x5703)<<x5704));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5722 = 4388180832085023597LLU;
	int32_t x5723 = -7048;
	volatile uint8_t x5724 = 11U;
	volatile uint64_t t86 = 949051109LLU;

	t86 = (x5721/((x5722|x5723)<<x5724));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5817 = 3U;
	int64_t x5818 = INT64_MIN;
	volatile uint64_t x5819 = 3788238508LLU;
	static int8_t x5820 = 18;
	volatile uint64_t t87 = 3042112733359LLU;

	t87 = (x5817/((x5818|x5819)<<x5820));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5889 = INT16_MIN;
	static int32_t x5890 = 3456;
	static uint16_t x5891 = UINT16_MAX;
	volatile uint8_t x5892 = 4U;
	int32_t t88 = 7284;

	t88 = (x5889/((x5890|x5891)<<x5892));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6077 = -37;
	uint32_t x6078 = UINT32_MAX;
	int16_t x6079 = 9;
	uint32_t x6080 = 2U;
	volatile uint32_t t89 = 62U;

	t89 = (x6077/((x6078|x6079)<<x6080));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x6297 = 0U;
	volatile uint64_t x6299 = 5380889014026826LLU;
	uint16_t x6300 = 26U;
	volatile uint64_t t90 = 191998084429446132LLU;

	t90 = (x6297/((x6298|x6299)<<x6300));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x6365 = -3LL;
	int64_t x6367 = INT64_MAX;
	int8_t x6368 = 0;
	volatile int64_t t91 = 2LL;

	t91 = (x6365/((x6366|x6367)<<x6368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6377 = UINT32_MAX;
	static volatile uint8_t x6378 = 47U;
	uint16_t x6379 = 118U;
	volatile uint32_t t92 = 1085194799U;

	t92 = (x6377/((x6378|x6379)<<x6380));

	if (t92 != 33818640U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6505 = 3281U;
	int64_t x6506 = -1LL;
	uint64_t x6507 = 21477477LLU;
	uint64_t t93 = 97411782902057LLU;

	t93 = (x6505/((x6506|x6507)<<x6508));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x6721 = INT8_MIN;
	uint32_t x6724 = 6U;

	t94 = (x6721/((x6722|x6723)<<x6724));

	if (t94 != 11917U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x6733 = 833367689675222LLU;
	uint8_t x6734 = 4U;
	uint8_t x6736 = 24U;

	t95 = (x6733/((x6734|x6735)<<x6736));

	if (t95 != 1307173LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6754 = INT8_MAX;
	uint32_t x6755 = 7021U;
	int8_t x6756 = 0;
	static int64_t t96 = -27LL;

	t96 = (x6753/((x6754|x6755)<<x6756));

	if (t96 != -1310324199013322LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6761 = 350504U;
	uint64_t x6762 = 3023972855819LLU;
	static int16_t x6763 = INT16_MIN;
	uint8_t x6764 = 1U;
	uint64_t t97 = 286195604554712LLU;

	t97 = (x6761/((x6762|x6763)<<x6764));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x6830 = UINT64_MAX;
	uint8_t x6831 = UINT8_MAX;
	int8_t x6832 = 0;

	t98 = (x6829/((x6830|x6831)<<x6832));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x6857 = 2LL;
	volatile uint32_t x6858 = 5554530U;
	int8_t x6859 = -54;
	int64_t t99 = -4700575966LL;

	t99 = (x6857/((x6858|x6859)<<x6860));

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

