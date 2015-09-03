#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x63 = -13;
int8_t x82 = 11;
static int64_t x83 = 1922707LL;
uint8_t x115 = 23U;
static volatile int64_t t2 = 1064639307858611LL;
static int32_t x188 = 1576;
uint32_t t4 = 2179040U;
uint64_t x370 = 45LLU;
volatile uint64_t t5 = 6226LLU;
static volatile uint16_t x442 = 5U;
static int64_t t7 = -7512522250163831LL;
static uint64_t x561 = UINT64_MAX;
static int64_t x563 = 22335196567LL;
static int32_t x612 = INT32_MAX;
static int64_t x663 = 36819103232226249LL;
int64_t x692 = INT64_MIN;
uint64_t x805 = UINT64_MAX;
uint8_t x890 = 15U;
int64_t x941 = 7LL;
int64_t t21 = 0LL;
uint32_t x1001 = 958091U;
int8_t x1002 = 3;
int8_t x1172 = -1;
int8_t x1246 = 1;
uint8_t x1354 = 39U;
uint64_t t25 = 13142LLU;
static volatile int64_t x1487 = -37187408LL;
volatile uint16_t x1665 = UINT16_MAX;
uint64_t x1668 = UINT64_MAX;
static uint64_t t29 = 128314LLU;
static int8_t x1896 = INT8_MIN;
uint64_t x2361 = UINT64_MAX;
int32_t x2508 = -1;
static volatile int64_t x2607 = INT64_MIN;
volatile uint64_t x2643 = 594547960274147237LLU;
static volatile uint64_t t41 = 2945080030LLU;
volatile int32_t x2656 = INT32_MAX;
volatile int32_t t42 = -12;
static volatile uint32_t x2692 = 57883037U;
uint16_t x2865 = 3U;
uint8_t x2868 = 48U;
volatile uint8_t x3002 = 1U;
static int32_t x3011 = INT32_MIN;
volatile int32_t x3016 = -1;
int8_t x3068 = -1;
int8_t x3207 = INT8_MIN;
int64_t x3237 = INT64_MAX;
volatile int8_t x3322 = 1;
int16_t x3324 = 1;
static uint32_t x3373 = 34214U;
int32_t x3410 = 1;
static int8_t x3435 = -1;
static uint8_t x3637 = 79U;
volatile int32_t t61 = 10459064;
static int16_t x3756 = -1;
volatile uint16_t x3792 = 100U;
static uint64_t t64 = 88LLU;
int8_t x4030 = 6;
int8_t x4050 = 2;
static int32_t x4052 = INT32_MIN;
uint64_t x4127 = 236165080LLU;
int16_t x4217 = 11210;
uint32_t x4260 = 69113U;
static volatile uint64_t t71 = 2095265154513931LLU;
int8_t x4330 = 0;
volatile uint32_t x4393 = UINT32_MAX;
volatile int16_t x4395 = INT16_MAX;
int32_t t74 = 37;
static uint32_t x4572 = UINT32_MAX;
int64_t x4640 = INT64_MAX;
uint8_t x4715 = 0U;
static volatile uint32_t t82 = 14U;
int8_t x5125 = 9;
volatile int16_t x5131 = -1;
int8_t x5211 = 3;
static volatile uint16_t x5251 = UINT16_MAX;
int8_t x5252 = -2;
volatile int16_t x5303 = INT16_MAX;
uint32_t x5338 = 2U;
int32_t x5738 = 1;
int32_t t95 = -30968;
static uint16_t x5957 = UINT16_MAX;
uint32_t x5959 = 3172U;
uint64_t x6000 = UINT64_MAX;
static uint64_t t98 = 34126445080104850LLU;
volatile int8_t x6026 = 1;


void f0(void) {
	static uint16_t x61 = UINT16_MAX;
	volatile uint8_t x62 = 13U;
	volatile int8_t x64 = INT8_MAX;
	volatile int32_t t0 = -1535770;

	t0 = ((x61<<x62)-(x63|x64));

	if (t0 != 536862721) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x81 = 14U;
	volatile int64_t x84 = -9LL;
	int64_t t1 = -672989625LL;

	t1 = ((x81<<x82)-(x83|x84));

	if (t1 != 28681LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x113 = 5;
	int8_t x114 = 0;
	int64_t x116 = -1LL;

	t2 = ((x113<<x114)-(x115|x116));

	if (t2 != 6LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x185 = INT8_MAX;
	int16_t x186 = 0;
	uint32_t x187 = UINT32_MAX;
	uint32_t t3 = 715U;

	t3 = ((x185<<x186)-(x187|x188));

	if (t3 != 128U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x197 = 651690011U;
	uint8_t x198 = 0U;
	uint32_t x199 = 131589910U;
	uint8_t x200 = 11U;

	t4 = ((x197<<x198)-(x199|x200));

	if (t4 != 520100092U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x369 = 302533731LLU;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MIN;

	t5 = ((x369<<x370)-(x371|x372));

	if (t5 != 688030396197142528LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x429 = 3909397685405776LLU;
	volatile uint8_t x430 = 15U;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = UINT32_MAX;
	uint64_t t6 = 16941104259LLU;

	t6 = ((x429<<x430)-(x431|x432));

	if (t6 != 17422678908824190977LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x441 = 31U;
	int64_t x443 = 12917509732889LL;
	static int64_t x444 = -1247730006597LL;

	t7 = ((x441<<x442)-(x443|x444));

	if (t7 != 50213LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x562 = 24;
	uint64_t x564 = 399LLU;
	uint64_t t8 = 3108742827223LLU;

	t8 = ((x561<<x562)-(x563|x564));

	if (t8 != 18446744051357577825LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x609 = 1839034LLU;
	uint8_t x610 = 59U;
	uint64_t x611 = 30506359LLU;
	static volatile uint64_t t9 = 4533935393LLU;

	t9 = ((x609<<x610)-(x611|x612));

	if (t9 != 14987979557741527041LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x661 = INT16_MAX;
	uint16_t x662 = 9U;
	uint32_t x664 = UINT32_MAX;
	volatile int64_t t10 = -1343832365467LL;

	t10 = ((x661<<x662)-(x663|x664));

	if (t10 != -36819105344389631LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x685 = INT32_MAX;
	uint16_t x686 = 0U;
	int32_t x687 = INT32_MAX;
	volatile int32_t x688 = 803;
	int32_t t11 = 18;

	t11 = ((x685<<x686)-(x687|x688));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x689 = UINT64_MAX;
	uint8_t x690 = 3U;
	int64_t x691 = -1LL;
	uint64_t t12 = 1LLU;

	t12 = ((x689<<x690)-(x691|x692));

	if (t12 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x729 = UINT32_MAX;
	int8_t x730 = 1;
	static int8_t x731 = INT8_MIN;
	int64_t x732 = INT64_MIN;
	volatile int64_t t13 = 11LL;

	t13 = ((x729<<x730)-(x731|x732));

	if (t13 != 4294967422LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x733 = 0;
	uint8_t x734 = 2U;
	uint64_t x735 = 109556764LLU;
	int32_t x736 = INT32_MAX;
	static volatile uint64_t t14 = 31482519557056LLU;

	t14 = ((x733<<x734)-(x735|x736));

	if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x781 = INT16_MAX;
	static uint8_t x782 = 12U;
	int8_t x783 = INT8_MIN;
	static int64_t x784 = 2157344637478584212LL;
	volatile int64_t t15 = -145945435280954926LL;

	t15 = ((x781<<x782)-(x783|x784));

	if (t15 != 134213740LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x806 = 1;
	int32_t x807 = -1109;
	int64_t x808 = INT64_MIN;
	static volatile uint64_t t16 = 110278715670190LLU;

	t16 = ((x805<<x806)-(x807|x808));

	if (t16 != 1107LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x873 = UINT64_MAX;
	uint16_t x874 = 13U;
	uint32_t x875 = 42177U;
	volatile int64_t x876 = 0LL;
	uint64_t t17 = 132605996284LLU;

	t17 = ((x873<<x874)-(x875|x876));

	if (t17 != 18446744073709501247LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x889 = 98U;
	volatile int32_t x891 = -29790;
	static int16_t x892 = INT16_MAX;
	int32_t t18 = 2;

	t18 = ((x889<<x890)-(x891|x892));

	if (t18 != 3211265) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x913 = 1LLU;
	static volatile int16_t x914 = 14;
	int64_t x915 = INT64_MIN;
	int64_t x916 = -1LL;
	static volatile uint64_t t19 = 791042191088580LLU;

	t19 = ((x913<<x914)-(x915|x916));

	if (t19 != 16385LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x942 = 9U;
	static int16_t x943 = INT16_MAX;
	static volatile int8_t x944 = INT8_MAX;
	int64_t t20 = 7779664LL;

	t20 = ((x941<<x942)-(x943|x944));

	if (t20 != -29183LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x973 = INT8_MAX;
	int32_t x974 = 0;
	int64_t x975 = INT64_MIN;
	int32_t x976 = INT32_MAX;

	t21 = ((x973<<x974)-(x975|x976));

	if (t21 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1003 = INT64_MAX;
	uint64_t x1004 = 119LLU;
	uint64_t t22 = 0LLU;

	t22 = ((x1001<<x1002)-(x1003|x1004));

	if (t22 != 9223372036862440537LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1169 = INT8_MAX;
	uint8_t x1170 = 6U;
	volatile int32_t x1171 = -17;
	volatile int32_t t23 = 428949;

	t23 = ((x1169<<x1170)-(x1171|x1172));

	if (t23 != 8129) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1245 = 34U;
	int8_t x1247 = INT8_MIN;
	static volatile uint8_t x1248 = UINT8_MAX;
	volatile int32_t t24 = -3225684;

	t24 = ((x1245<<x1246)-(x1247|x1248));

	if (t24 != 69) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1353 = 127LL;
	static int8_t x1355 = 1;
	uint64_t x1356 = UINT64_MAX;

	t25 = ((x1353<<x1354)-(x1355|x1356));

	if (t25 != 69818988363777LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1485 = 755266666LLU;
	uint16_t x1486 = 4U;
	uint16_t x1488 = 12802U;
	volatile uint64_t t26 = 6705091LLU;

	t26 = ((x1485<<x1486)-(x1487|x1488));

	if (t26 != 12121445358LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1637 = UINT64_MAX;
	uint8_t x1638 = 1U;
	uint32_t x1639 = UINT32_MAX;
	uint32_t x1640 = 53335854U;
	uint64_t t27 = 3198603184192561128LLU;

	t27 = ((x1637<<x1638)-(x1639|x1640));

	if (t27 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1666 = 3U;
	static volatile int8_t x1667 = 24;
	static volatile uint64_t t28 = 6597384586225LLU;

	t28 = ((x1665<<x1666)-(x1667|x1668));

	if (t28 != 524281LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1813 = UINT64_MAX;
	int64_t x1814 = 22LL;
	static int32_t x1815 = INT32_MIN;
	static volatile int32_t x1816 = -27775;

	t29 = ((x1813<<x1814)-(x1815|x1816));

	if (t29 != 18446744073705385087LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1893 = INT16_MAX;
	volatile int32_t x1894 = 4;
	int32_t x1895 = -1;
	int32_t t30 = 228728777;

	t30 = ((x1893<<x1894)-(x1895|x1896));

	if (t30 != 524273) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1905 = UINT16_MAX;
	int64_t x1906 = 1LL;
	static int16_t x1907 = -12505;
	int16_t x1908 = -1;
	int32_t t31 = -124;

	t31 = ((x1905<<x1906)-(x1907|x1908));

	if (t31 != 131071) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2077 = UINT16_MAX;
	uint16_t x2078 = 2U;
	uint8_t x2079 = 0U;
	int8_t x2080 = INT8_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x2077<<x2078)-(x2079|x2080));

	if (t32 != 262268) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2293 = 1LLU;
	uint32_t x2294 = 54U;
	int32_t x2295 = INT32_MIN;
	static int16_t x2296 = INT16_MIN;
	static uint64_t t33 = 6584018331079364241LLU;

	t33 = ((x2293<<x2294)-(x2295|x2296));

	if (t33 != 18014398509514752LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x2362 = 11U;
	int16_t x2363 = INT16_MAX;
	int32_t x2364 = INT32_MIN;
	uint64_t t34 = 1442619294677LLU;

	t34 = ((x2361<<x2362)-(x2363|x2364));

	if (t34 != 2147448833LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2413 = UINT32_MAX;
	static uint64_t x2414 = 7LLU;
	static uint64_t x2415 = 431016128413906163LLU;
	int32_t x2416 = 262229415;
	volatile uint64_t t35 = 5523952921642980432LLU;

	t35 = ((x2413<<x2414)-(x2415|x2416));

	if (t35 != 18015727949504610697LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2465 = UINT16_MAX;
	int8_t x2466 = 7;
	int8_t x2467 = INT8_MAX;
	uint64_t x2468 = 204059328LLU;
	volatile uint64_t t36 = 7LLU;

	t36 = ((x2465<<x2466)-(x2467|x2468));

	if (t36 != 18446744073513880705LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2505 = 349688U;
	uint8_t x2506 = 15U;
	volatile uint16_t x2507 = UINT16_MAX;
	volatile uint32_t t37 = 99U;

	t37 = ((x2505<<x2506)-(x2507|x2508));

	if (t37 != 2868641793U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2597 = UINT64_MAX;
	uint16_t x2598 = 1U;
	int32_t x2599 = 1799;
	uint16_t x2600 = 1857U;
	static volatile uint64_t t38 = 67068043LLU;

	t38 = ((x2597<<x2598)-(x2599|x2600));

	if (t38 != 18446744073709549751LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2605 = 75209LLU;
	volatile uint8_t x2606 = 10U;
	int32_t x2608 = -444;
	volatile uint64_t t39 = 19359791720083LLU;

	t39 = ((x2605<<x2606)-(x2607|x2608));

	if (t39 != 77014460LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2629 = 2001111839475432120LLU;
	uint16_t x2630 = 7U;
	uint8_t x2631 = 89U;
	volatile int64_t x2632 = -2414587191860595LL;
	volatile uint64_t t40 = 1181776970LLU;

	t40 = ((x2629<<x2630)-(x2631|x2632));

	if (t40 != 16337057081823000867LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2641 = 14089180LLU;
	static uint16_t x2642 = 8U;
	static uint64_t x2644 = 4079375LLU;

	t41 = ((x2641<<x2642)-(x2643|x2644));

	if (t41 != 17852196117039340625LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2653 = INT8_MAX;
	int8_t x2654 = 2;
	int32_t x2655 = -1;

	t42 = ((x2653<<x2654)-(x2655|x2656));

	if (t42 != 509) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2689 = 267586988116910LLU;
	volatile uint16_t x2690 = 11U;
	uint64_t x2691 = 8552570212887714LLU;
	volatile uint64_t t43 = 13786266523LLU;

	t43 = ((x2689<<x2690)-(x2691|x2692));

	if (t43 != 539465581416788545LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2833 = 0;
	int8_t x2834 = 19;
	int64_t x2835 = INT64_MIN;
	static int32_t x2836 = INT32_MIN;
	volatile int64_t t44 = -395238LL;

	t44 = ((x2833<<x2834)-(x2835|x2836));

	if (t44 != 2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2866 = 7U;
	int16_t x2867 = -1;
	int32_t t45 = -739189148;

	t45 = ((x2865<<x2866)-(x2867|x2868));

	if (t45 != 385) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3001 = 12;
	int8_t x3003 = INT8_MIN;
	uint64_t x3004 = 33LLU;
	volatile uint64_t t46 = 269745342462LLU;

	t46 = ((x3001<<x3002)-(x3003|x3004));

	if (t46 != 119LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3009 = 3353589453LL;
	uint32_t x3010 = 21U;
	static int32_t x3012 = -1;
	volatile int64_t t47 = 7346587395299803LL;

	t47 = ((x3009<<x3010)-(x3011|x3012));

	if (t47 != 7032986828537857LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3013 = UINT16_MAX;
	int16_t x3014 = 13;
	int32_t x3015 = INT32_MIN;
	int32_t t48 = -693;

	t48 = ((x3013<<x3014)-(x3015|x3016));

	if (t48 != 536862721) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x3065 = 0;
	volatile uint8_t x3066 = 29U;
	int8_t x3067 = INT8_MAX;
	int32_t t49 = -3450351;

	t49 = ((x3065<<x3066)-(x3067|x3068));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x3073 = UINT32_MAX;
	static uint16_t x3074 = 1U;
	volatile int16_t x3075 = INT16_MIN;
	int32_t x3076 = -1;
	uint32_t t50 = UINT32_MAX;

	t50 = ((x3073<<x3074)-(x3075|x3076));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x3137 = 0U;
	volatile int8_t x3138 = 19;
	int8_t x3139 = INT8_MIN;
	volatile int8_t x3140 = 0;
	int32_t t51 = 287;

	t51 = ((x3137<<x3138)-(x3139|x3140));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3157 = 1;
	uint8_t x3158 = 1U;
	volatile uint32_t x3159 = 980052746U;
	uint64_t x3160 = 112913959094666LLU;
	uint64_t t52 = 4094670623040940LLU;

	t52 = ((x3157<<x3158)-(x3159|x3160));

	if (t52 != 18446631159045657720LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3205 = INT8_MAX;
	uint64_t x3206 = 1LLU;
	volatile uint16_t x3208 = 28126U;
	volatile int32_t t53 = 1;

	t53 = ((x3205<<x3206)-(x3207|x3208));

	if (t53 != 288) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x3238 = 0U;
	int8_t x3239 = INT8_MIN;
	uint32_t x3240 = 9174U;
	static volatile int64_t t54 = 163694115533621702LL;

	t54 = ((x3237<<x3238)-(x3239|x3240));

	if (t54 != 9223372032559808553LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3321 = INT16_MAX;
	int8_t x3323 = -1;
	int32_t t55 = -989252763;

	t55 = ((x3321<<x3322)-(x3323|x3324));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3374 = 3U;
	int8_t x3375 = INT8_MAX;
	static uint8_t x3376 = UINT8_MAX;
	uint32_t t56 = 0U;

	t56 = ((x3373<<x3374)-(x3375|x3376));

	if (t56 != 273457U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3409 = 6U;
	volatile int64_t x3411 = 51510280870LL;
	uint8_t x3412 = 2U;
	static volatile int64_t t57 = 1031419754684403LL;

	t57 = ((x3409<<x3410)-(x3411|x3412));

	if (t57 != -51510280858LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3433 = 3635U;
	uint8_t x3434 = 10U;
	volatile int32_t x3436 = INT32_MAX;
	uint32_t t58 = 0U;

	t58 = ((x3433<<x3434)-(x3435|x3436));

	if (t58 != 3722241U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3569 = INT16_MAX;
	int16_t x3570 = 0;
	uint8_t x3571 = 15U;
	volatile int16_t x3572 = -54;
	int32_t t59 = -7828;

	t59 = ((x3569<<x3570)-(x3571|x3572));

	if (t59 != 32816) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3585 = 3U;
	volatile int8_t x3586 = 10;
	int16_t x3587 = INT16_MIN;
	int32_t x3588 = INT32_MIN;
	volatile int32_t t60 = -1706;

	t60 = ((x3585<<x3586)-(x3587|x3588));

	if (t60 != 35840) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3638 = 5U;
	int16_t x3639 = INT16_MAX;
	uint8_t x3640 = 1U;

	t61 = ((x3637<<x3638)-(x3639|x3640));

	if (t61 != -30239) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3713 = 2926;
	uint8_t x3714 = 1U;
	int16_t x3715 = 1;
	uint16_t x3716 = UINT16_MAX;
	int32_t t62 = -221643081;

	t62 = ((x3713<<x3714)-(x3715|x3716));

	if (t62 != -59683) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3753 = INT16_MAX;
	uint8_t x3754 = 0U;
	int64_t x3755 = INT64_MIN;
	int64_t t63 = 66121442LL;

	t63 = ((x3753<<x3754)-(x3755|x3756));

	if (t63 != 32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3789 = 5058423562704LLU;
	int16_t x3790 = 2;
	volatile int8_t x3791 = INT8_MAX;

	t64 = ((x3789<<x3790)-(x3791|x3792));

	if (t64 != 20233694250689LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3897 = INT16_MAX;
	uint8_t x3898 = 0U;
	static uint64_t x3899 = UINT64_MAX;
	static int16_t x3900 = INT16_MIN;
	volatile uint64_t t65 = 204763435643556LLU;

	t65 = ((x3897<<x3898)-(x3899|x3900));

	if (t65 != 32768LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4029 = UINT32_MAX;
	uint16_t x4031 = 112U;
	int64_t x4032 = INT64_MAX;
	static int64_t t66 = 104073220564710799LL;

	t66 = ((x4029<<x4030)-(x4031|x4032));

	if (t66 != -9223372032559808575LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4049 = 13;
	int64_t x4051 = INT64_MAX;
	volatile int64_t t67 = 14211938016LL;

	t67 = ((x4049<<x4050)-(x4051|x4052));

	if (t67 != 53LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x4125 = 124;
	uint8_t x4126 = 3U;
	uint32_t x4128 = 1U;
	volatile uint64_t t68 = 269479925LLU;

	t68 = ((x4125<<x4126)-(x4127|x4128));

	if (t68 != 18446744073473387527LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4218 = 1;
	uint32_t x4219 = 0U;
	uint64_t x4220 = 563735043762198LLU;
	volatile uint64_t t69 = 65556LLU;

	t69 = ((x4217<<x4218)-(x4219|x4220));

	if (t69 != 18446180338665811838LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4257 = 11U;
	static int8_t x4258 = 1;
	static int64_t x4259 = INT64_MAX;
	int64_t t70 = 1976107LL;

	t70 = ((x4257<<x4258)-(x4259|x4260));

	if (t70 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4281 = UINT64_MAX;
	uint8_t x4282 = 2U;
	uint32_t x4283 = 251521U;
	int64_t x4284 = INT64_MIN;

	t71 = ((x4281<<x4282)-(x4283|x4284));

	if (t71 != 9223372036854524283LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4329 = 8512913110831LLU;
	uint8_t x4331 = 3U;
	int32_t x4332 = -1;
	uint64_t t72 = 383295377190LLU;

	t72 = ((x4329<<x4330)-(x4331|x4332));

	if (t72 != 8512913110832LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4394 = 9;
	int16_t x4396 = INT16_MAX;
	uint32_t t73 = 30309518U;

	t73 = ((x4393<<x4394)-(x4395|x4396));

	if (t73 != 4294934017U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4529 = UINT8_MAX;
	int8_t x4530 = 3;
	static uint16_t x4531 = 4834U;
	volatile int16_t x4532 = INT16_MAX;

	t74 = ((x4529<<x4530)-(x4531|x4532));

	if (t74 != -30727) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4557 = UINT64_MAX;
	static int32_t x4558 = 3;
	int32_t x4559 = -1;
	static int64_t x4560 = -1LL;
	static uint64_t t75 = 156053551100018174LLU;

	t75 = ((x4557<<x4558)-(x4559|x4560));

	if (t75 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4569 = 3U;
	uint8_t x4570 = 1U;
	static volatile int16_t x4571 = -1;
	static volatile uint32_t t76 = 41887386U;

	t76 = ((x4569<<x4570)-(x4571|x4572));

	if (t76 != 7U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x4637 = 2333U;
	uint8_t x4638 = 18U;
	int32_t x4639 = INT32_MIN;
	int64_t t77 = -2071237141431LL;

	t77 = ((x4637<<x4638)-(x4639|x4640));

	if (t77 != 611581953LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4713 = UINT32_MAX;
	int8_t x4714 = 2;
	int32_t x4716 = 165112;
	uint32_t t78 = 7204U;

	t78 = ((x4713<<x4714)-(x4715|x4716));

	if (t78 != 4294802180U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4717 = 818030118U;
	uint8_t x4718 = 0U;
	int8_t x4719 = INT8_MIN;
	static int64_t x4720 = -161765607781246LL;
	int64_t t79 = 11112LL;

	t79 = ((x4717<<x4718)-(x4719|x4720));

	if (t79 != 818030244LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4813 = 1;
	uint8_t x4814 = 1U;
	int8_t x4815 = -24;
	int8_t x4816 = 20;
	volatile int32_t t80 = -114318;

	t80 = ((x4813<<x4814)-(x4815|x4816));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4865 = UINT8_MAX;
	volatile int16_t x4866 = 11;
	volatile int16_t x4867 = 7;
	int64_t x4868 = 7178821897LL;
	volatile int64_t t81 = 21970884691952LL;

	t81 = ((x4865<<x4866)-(x4867|x4868));

	if (t81 != -7178299663LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5061 = 14U;
	int8_t x5062 = 0;
	uint32_t x5063 = 612880U;
	uint32_t x5064 = 3230619U;

	t82 = ((x5061<<x5062)-(x5063|x5064));

	if (t82 != 4291208307U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5126 = 4U;
	uint32_t x5127 = 247193U;
	int64_t x5128 = INT64_MIN;
	int64_t t83 = -1848117524711620LL;

	t83 = ((x5125<<x5126)-(x5127|x5128));

	if (t83 != 9223372036854528759LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5129 = 2;
	int8_t x5130 = 3;
	int64_t x5132 = INT64_MIN;
	static int64_t t84 = -850964090864LL;

	t84 = ((x5129<<x5130)-(x5131|x5132));

	if (t84 != 17LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5209 = UINT32_MAX;
	uint8_t x5210 = 3U;
	uint16_t x5212 = 15U;
	uint32_t t85 = 464916U;

	t85 = ((x5209<<x5210)-(x5211|x5212));

	if (t85 != 4294967273U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5249 = 33050471U;
	uint8_t x5250 = 17U;
	volatile uint32_t t86 = 65162U;

	t86 = ((x5249<<x5250)-(x5251|x5252));

	if (t86 != 2664300545U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x5269 = 4106LLU;
	int8_t x5270 = 0;
	static uint64_t x5271 = UINT64_MAX;
	uint32_t x5272 = UINT32_MAX;
	static uint64_t t87 = 125662041LLU;

	t87 = ((x5269<<x5270)-(x5271|x5272));

	if (t87 != 4107LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5301 = 85U;
	int32_t x5302 = 1;
	int8_t x5304 = INT8_MIN;
	volatile int32_t t88 = -1478;

	t88 = ((x5301<<x5302)-(x5303|x5304));

	if (t88 != 171) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5337 = INT8_MAX;
	static uint16_t x5339 = 13813U;
	uint32_t x5340 = 332609742U;
	volatile uint32_t t89 = 11945U;

	t89 = ((x5337<<x5338)-(x5339|x5340));

	if (t89 != 3962356733U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x5405 = 0;
	int8_t x5406 = 2;
	int16_t x5407 = -86;
	int64_t x5408 = -1LL;
	static volatile int64_t t90 = -26717750199108262LL;

	t90 = ((x5405<<x5406)-(x5407|x5408));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5669 = UINT64_MAX;
	int8_t x5670 = 0;
	int64_t x5671 = -2057107368266466334LL;
	int64_t x5672 = -24LL;
	uint64_t t91 = 32443744508LLU;

	t91 = ((x5669<<x5670)-(x5671|x5672));

	if (t91 != 21LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x5737 = 12U;
	int16_t x5739 = INT16_MAX;
	int64_t x5740 = INT64_MAX;
	volatile int64_t t92 = -119542813011LL;

	t92 = ((x5737<<x5738)-(x5739|x5740));

	if (t92 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5769 = 600U;
	uint16_t x5770 = 11U;
	uint32_t x5771 = UINT32_MAX;
	uint32_t x5772 = 852012U;
	volatile uint32_t t93 = 51710U;

	t93 = ((x5769<<x5770)-(x5771|x5772));

	if (t93 != 1228801U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5881 = 74833U;
	int64_t x5882 = 3LL;
	uint8_t x5883 = 95U;
	uint32_t x5884 = UINT32_MAX;
	volatile uint32_t t94 = 582791766U;

	t94 = ((x5881<<x5882)-(x5883|x5884));

	if (t94 != 598665U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x5909 = UINT8_MAX;
	uint16_t x5910 = 1U;
	int32_t x5911 = -1;
	int32_t x5912 = INT32_MIN;

	t95 = ((x5909<<x5910)-(x5911|x5912));

	if (t95 != 511) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5921 = UINT8_MAX;
	int8_t x5922 = 0;
	static uint64_t x5923 = UINT64_MAX;
	int8_t x5924 = INT8_MAX;
	volatile uint64_t t96 = 1LLU;

	t96 = ((x5921<<x5922)-(x5923|x5924));

	if (t96 != 256LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5958 = 2LLU;
	static volatile uint32_t x5960 = 50U;
	volatile uint32_t t97 = 14916U;

	t97 = ((x5957<<x5958)-(x5959|x5960));

	if (t97 != 258950U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5997 = UINT64_MAX;
	int64_t x5998 = 22LL;
	static uint32_t x5999 = 231029U;

	t98 = ((x5997<<x5998)-(x5999|x6000));

	if (t98 != 18446744073705357313LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6025 = UINT64_MAX;
	uint16_t x6027 = 1U;
	uint16_t x6028 = 2U;
	volatile uint64_t t99 = 66979137431646845LLU;

	t99 = ((x6025<<x6026)-(x6027|x6028));

	if (t99 != 18446744073709551611LLU) { NG(); } else { ; }
	
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

