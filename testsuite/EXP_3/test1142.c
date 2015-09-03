#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MIN;
static uint64_t x173 = UINT64_MAX;
static int16_t x174 = INT16_MIN;
int32_t t1 = 433567564;
volatile int16_t x266 = 0;
int32_t x269 = -1;
int8_t x271 = 1;
int16_t x272 = 0;
uint64_t x307 = 36LLU;
volatile uint64_t x325 = UINT64_MAX;
volatile uint64_t x334 = 138294743LLU;
int32_t x498 = INT32_MAX;
uint8_t x499 = UINT8_MAX;
volatile uint64_t x557 = UINT64_MAX;
int8_t x559 = INT8_MAX;
int32_t x560 = 1;
uint32_t x622 = 740246543U;
volatile int8_t x624 = 1;
uint64_t x1075 = 88202957231LLU;
uint64_t t16 = 13520975389719LLU;
volatile int32_t x1122 = -1;
int64_t x1123 = 27027325278LL;
volatile int8_t x1161 = 15;
static volatile uint16_t x1167 = 1U;
volatile uint16_t x1175 = 19U;
int16_t x1190 = -1;
uint32_t x1282 = 236U;
int8_t x1332 = 36;
uint32_t x1402 = 2797U;
uint16_t x1458 = 728U;
static int8_t x1460 = 1;
int32_t x1573 = -19691333;
uint16_t x1575 = 54U;
int32_t t26 = 554273;
volatile uint32_t t27 = 19U;
int16_t x1746 = 21;
uint8_t x1748 = 3U;
volatile int32_t x1801 = INT32_MIN;
uint64_t x1803 = UINT64_MAX;
volatile int64_t t31 = -96049426871LL;
int64_t x1998 = -1498361668LL;
int32_t x2014 = INT32_MIN;
uint8_t x2016 = 1U;
uint8_t x2028 = 53U;
int64_t x2070 = INT64_MAX;
int16_t x2101 = -1;
static int64_t x2103 = 384LL;
int64_t t37 = 35621LL;
static uint32_t x2243 = 4U;
volatile int16_t x2451 = 3;
uint64_t x2457 = UINT64_MAX;
int64_t x2542 = INT64_MAX;
static volatile int64_t x2547 = 2LL;
volatile int16_t x2548 = 60;
static int32_t x2551 = INT32_MAX;
int32_t x2693 = INT32_MAX;
uint8_t x2776 = 25U;
uint64_t t49 = 1226338169690LLU;
int64_t x2819 = INT64_MAX;
int16_t x2854 = INT16_MAX;
volatile int64_t t51 = -424519033470029359LL;
int8_t x2973 = INT8_MAX;
uint8_t x2975 = UINT8_MAX;
static int8_t x2976 = 0;
volatile int32_t t52 = -1985;
uint16_t x2979 = 64U;
volatile int32_t t53 = 2032530;
int8_t x3001 = INT8_MAX;
uint16_t x3002 = 198U;
volatile int64_t x3189 = -276433433LL;
uint8_t x3192 = 5U;
volatile int32_t t56 = -142910;
int64_t t57 = 10675LL;
static int32_t t59 = 2817;
int8_t x3406 = INT8_MAX;
int8_t x3453 = -1;
int16_t x3454 = INT16_MIN;
volatile int32_t x3497 = -15449492;
static uint16_t x3498 = 545U;
static uint64_t x3530 = UINT64_MAX;
uint16_t x3531 = UINT16_MAX;
uint64_t t65 = 1447462236LLU;
uint8_t x3660 = 14U;
int32_t x3714 = -1;
int8_t x3724 = 1;
int64_t x3879 = INT64_MAX;
int8_t x3880 = 5;
int16_t x4145 = 4;
uint8_t x4147 = UINT8_MAX;
int8_t x4148 = 0;
volatile uint32_t x4246 = 139911543U;
uint32_t x4341 = UINT32_MAX;
uint64_t x4392 = 1LLU;
uint8_t x4460 = 0U;
static int32_t x4517 = INT32_MAX;
uint8_t x4528 = 42U;
int64_t x4670 = 389418928941LL;
static int64_t x4671 = 39359LL;
static uint8_t x4676 = 6U;
static int16_t x4827 = 1410;
uint8_t x4828 = 20U;
uint16_t x4848 = 0U;
uint8_t x4904 = 1U;
int8_t x4977 = -1;
volatile int32_t t91 = 142347889;
int8_t x5461 = -1;
int32_t x5495 = 393279004;
volatile int16_t x5513 = INT16_MIN;
uint16_t x5581 = UINT16_MAX;
static volatile int32_t x5582 = INT32_MIN;
int16_t x5665 = INT16_MIN;
int32_t t96 = 1259;
int16_t x5834 = INT16_MIN;


void f0(void) {
	int64_t x10 = -1LL;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = 0;
	volatile int32_t t0 = -189;

	t0 = ((x9<=x10)&(x11>>x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x175 = 2;
	volatile int8_t x176 = 1;

	t1 = ((x173<=x174)&(x175>>x176));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x267 = 1469417412LLU;
	int8_t x268 = 13;
	static uint64_t t2 = 6073597775LLU;

	t2 = ((x265<=x266)&(x267>>x268));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x270 = 2;
	static volatile int32_t t3 = -65954;

	t3 = ((x269<=x270)&(x271>>x272));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = 1;
	uint8_t x308 = 3U;
	uint64_t t4 = 51722812215LLU;

	t4 = ((x305<=x306)&(x307>>x308));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x321 = -1;
	static int16_t x322 = INT16_MAX;
	static volatile uint32_t x323 = 2217727U;
	uint8_t x324 = 3U;
	volatile uint32_t t5 = 1U;

	t5 = ((x321<=x322)&(x323>>x324));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x326 = 194637564577494958LLU;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = 4U;
	static volatile int64_t t6 = 4607LL;

	t6 = ((x325<=x326)&(x327>>x328));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x333 = 6950149LL;
	static volatile uint16_t x335 = 514U;
	uint16_t x336 = 7U;
	int32_t t7 = -136;

	t7 = ((x333<=x334)&(x335>>x336));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x354 = 19U;
	uint8_t x355 = 1U;
	uint8_t x356 = 0U;
	volatile int32_t t8 = 514977;

	t8 = ((x353<=x354)&(x355>>x356));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x461 = -27;
	int64_t x462 = 1LL;
	static int16_t x463 = INT16_MAX;
	uint64_t x464 = 0LLU;
	int32_t t9 = 1538680;

	t9 = ((x461<=x462)&(x463>>x464));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x497 = 323U;
	volatile int16_t x500 = 4;
	int32_t t10 = -4682;

	t10 = ((x497<=x498)&(x499>>x500));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x558 = INT16_MIN;
	volatile int32_t t11 = -6;

	t11 = ((x557<=x558)&(x559>>x560));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x621 = 29799U;
	volatile uint8_t x623 = UINT8_MAX;
	int32_t t12 = 364;

	t12 = ((x621<=x622)&(x623>>x624));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x661 = UINT64_MAX;
	int8_t x662 = INT8_MIN;
	int64_t x663 = INT64_MAX;
	int8_t x664 = 53;
	int64_t t13 = -1LL;

	t13 = ((x661<=x662)&(x663>>x664));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x729 = 369U;
	volatile int64_t x730 = INT64_MIN;
	uint8_t x731 = UINT8_MAX;
	static uint8_t x732 = 9U;
	volatile int32_t t14 = 1263920;

	t14 = ((x729<=x730)&(x731>>x732));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x781 = 10;
	volatile int8_t x782 = 3;
	uint64_t x783 = 496210318781060386LLU;
	uint16_t x784 = 11U;
	volatile uint64_t t15 = 437LLU;

	t15 = ((x781<=x782)&(x783>>x784));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1073 = 59;
	uint8_t x1074 = 99U;
	uint8_t x1076 = 37U;

	t16 = ((x1073<=x1074)&(x1075>>x1076));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1121 = 1118;
	int8_t x1124 = 1;
	volatile int64_t t17 = 130LL;

	t17 = ((x1121<=x1122)&(x1123>>x1124));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1162 = 220561526921713LL;
	uint32_t x1163 = 210639013U;
	static volatile int8_t x1164 = 4;
	volatile uint32_t t18 = 38629745U;

	t18 = ((x1161<=x1162)&(x1163>>x1164));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1165 = INT64_MAX;
	uint16_t x1166 = 25U;
	int8_t x1168 = 6;
	volatile int32_t t19 = -23;

	t19 = ((x1165<=x1166)&(x1167>>x1168));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1173 = 116637345;
	int8_t x1174 = -1;
	static volatile uint16_t x1176 = 1U;
	int32_t t20 = -21969;

	t20 = ((x1173<=x1174)&(x1175>>x1176));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1189 = INT16_MIN;
	int8_t x1191 = 1;
	static int64_t x1192 = 7LL;
	volatile int32_t t21 = 10;

	t21 = ((x1189<=x1190)&(x1191>>x1192));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1281 = 4828;
	int16_t x1283 = 1;
	uint16_t x1284 = 18U;
	volatile int32_t t22 = -13581;

	t22 = ((x1281<=x1282)&(x1283>>x1284));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1329 = 0LL;
	int64_t x1330 = INT64_MIN;
	uint64_t x1331 = 144351LLU;
	uint64_t t23 = 5325133166817064LLU;

	t23 = ((x1329<=x1330)&(x1331>>x1332));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1401 = 2U;
	uint32_t x1403 = UINT32_MAX;
	static volatile uint8_t x1404 = 4U;
	uint32_t t24 = 1U;

	t24 = ((x1401<=x1402)&(x1403>>x1404));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1457 = UINT16_MAX;
	int8_t x1459 = 16;
	static volatile int32_t t25 = 126825;

	t25 = ((x1457<=x1458)&(x1459>>x1460));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1574 = -1;
	static uint8_t x1576 = 1U;

	t26 = ((x1573<=x1574)&(x1575>>x1576));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1713 = 235127U;
	int8_t x1714 = INT8_MIN;
	uint32_t x1715 = 575570U;
	int8_t x1716 = 5;

	t27 = ((x1713<=x1714)&(x1715>>x1716));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x1745 = 33;
	volatile uint16_t x1747 = UINT16_MAX;
	int32_t t28 = 387091422;

	t28 = ((x1745<=x1746)&(x1747>>x1748));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1802 = 1U;
	int8_t x1804 = 14;
	uint64_t t29 = 3498730884LLU;

	t29 = ((x1801<=x1802)&(x1803>>x1804));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1829 = -4352767;
	int16_t x1830 = -2;
	int8_t x1831 = 26;
	volatile uint16_t x1832 = 16U;
	static int32_t t30 = 2;

	t30 = ((x1829<=x1830)&(x1831>>x1832));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1909 = UINT16_MAX;
	int64_t x1910 = INT64_MIN;
	int64_t x1911 = 33793056432111027LL;
	static uint8_t x1912 = 7U;

	t31 = ((x1909<=x1910)&(x1911>>x1912));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1997 = -32018152;
	volatile uint8_t x1999 = UINT8_MAX;
	uint8_t x2000 = 22U;
	static volatile int32_t t32 = -603;

	t32 = ((x1997<=x1998)&(x1999>>x2000));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2013 = 33342856;
	volatile uint64_t x2015 = UINT64_MAX;
	static volatile uint64_t t33 = 16794483509LLU;

	t33 = ((x2013<=x2014)&(x2015>>x2016));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2025 = INT32_MIN;
	static uint64_t x2026 = UINT64_MAX;
	uint64_t x2027 = 179671503385387LLU;
	uint64_t t34 = 253221157LLU;

	t34 = ((x2025<=x2026)&(x2027>>x2028));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2065 = 110U;
	int16_t x2066 = INT16_MAX;
	uint64_t x2067 = UINT64_MAX;
	volatile uint16_t x2068 = 10U;
	uint64_t t35 = 47323545342843428LLU;

	t35 = ((x2065<=x2066)&(x2067>>x2068));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2069 = 107U;
	uint64_t x2071 = UINT64_MAX;
	int8_t x2072 = 1;
	volatile uint64_t t36 = 4076217133423LLU;

	t36 = ((x2069<=x2070)&(x2071>>x2072));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2102 = 28;
	uint8_t x2104 = 3U;

	t37 = ((x2101<=x2102)&(x2103>>x2104));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2165 = 666168235320057LLU;
	static uint16_t x2166 = UINT16_MAX;
	uint8_t x2167 = 93U;
	static uint8_t x2168 = 1U;
	volatile int32_t t38 = 0;

	t38 = ((x2165<=x2166)&(x2167>>x2168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2241 = 728U;
	int8_t x2242 = -1;
	uint8_t x2244 = 1U;
	uint32_t t39 = 1015U;

	t39 = ((x2241<=x2242)&(x2243>>x2244));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2449 = 6U;
	int32_t x2450 = INT32_MIN;
	volatile int8_t x2452 = 1;
	static volatile int32_t t40 = 32401;

	t40 = ((x2449<=x2450)&(x2451>>x2452));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2458 = INT16_MIN;
	static int64_t x2459 = 38745705634LL;
	uint8_t x2460 = 35U;
	int64_t t41 = -5LL;

	t41 = ((x2457<=x2458)&(x2459>>x2460));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2529 = UINT64_MAX;
	uint32_t x2530 = UINT32_MAX;
	int32_t x2531 = INT32_MAX;
	uint8_t x2532 = 1U;
	int32_t t42 = 0;

	t42 = ((x2529<=x2530)&(x2531>>x2532));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2541 = 5362253237LLU;
	uint16_t x2543 = 4U;
	uint32_t x2544 = 5U;
	int32_t t43 = 232;

	t43 = ((x2541<=x2542)&(x2543>>x2544));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2545 = 5U;
	int32_t x2546 = -1;
	volatile int64_t t44 = 1762160LL;

	t44 = ((x2545<=x2546)&(x2547>>x2548));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x2549 = 51U;
	static volatile uint16_t x2550 = UINT16_MAX;
	uint16_t x2552 = 0U;
	static volatile int32_t t45 = 21;

	t45 = ((x2549<=x2550)&(x2551>>x2552));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2694 = INT8_MIN;
	volatile uint32_t x2695 = 8125U;
	int16_t x2696 = 3;
	uint32_t t46 = 387006U;

	t46 = ((x2693<=x2694)&(x2695>>x2696));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2717 = -1;
	int64_t x2718 = -256115LL;
	static volatile int64_t x2719 = INT64_MAX;
	uint16_t x2720 = 21U;
	int64_t t47 = 43068755LL;

	t47 = ((x2717<=x2718)&(x2719>>x2720));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x2765 = 7U;
	static int8_t x2766 = 6;
	uint8_t x2767 = 2U;
	static uint16_t x2768 = 2U;
	static int32_t t48 = 377;

	t48 = ((x2765<=x2766)&(x2767>>x2768));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2773 = INT64_MAX;
	uint32_t x2774 = 25004U;
	volatile uint64_t x2775 = 4LLU;

	t49 = ((x2773<=x2774)&(x2775>>x2776));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2817 = INT64_MIN;
	uint64_t x2818 = 23776501LLU;
	volatile uint8_t x2820 = 23U;
	static volatile int64_t t50 = 613LL;

	t50 = ((x2817<=x2818)&(x2819>>x2820));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2853 = -1;
	static int64_t x2855 = INT64_MAX;
	volatile int16_t x2856 = 7;

	t51 = ((x2853<=x2854)&(x2855>>x2856));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x2974 = -18408;

	t52 = ((x2973<=x2974)&(x2975>>x2976));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2977 = 50U;
	int64_t x2978 = INT64_MIN;
	int8_t x2980 = 0;

	t53 = ((x2977<=x2978)&(x2979>>x2980));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x3003 = UINT64_MAX;
	uint16_t x3004 = 0U;
	static uint64_t t54 = 4289054633499987LLU;

	t54 = ((x3001<=x3002)&(x3003>>x3004));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x3025 = -1LL;
	static uint8_t x3026 = UINT8_MAX;
	volatile uint32_t x3027 = UINT32_MAX;
	uint16_t x3028 = 1U;
	static uint32_t t55 = 1018U;

	t55 = ((x3025<=x3026)&(x3027>>x3028));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x3190 = 133;
	volatile int16_t x3191 = INT16_MAX;

	t56 = ((x3189<=x3190)&(x3191>>x3192));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3229 = -1;
	int32_t x3230 = INT32_MIN;
	static int64_t x3231 = INT64_MAX;
	uint8_t x3232 = 7U;

	t57 = ((x3229<=x3230)&(x3231>>x3232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3277 = UINT64_MAX;
	uint16_t x3278 = 419U;
	static volatile uint32_t x3279 = 13752346U;
	int32_t x3280 = 19;
	volatile uint32_t t58 = 25U;

	t58 = ((x3277<=x3278)&(x3279>>x3280));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3309 = INT32_MIN;
	int8_t x3310 = INT8_MIN;
	uint16_t x3311 = 1U;
	uint16_t x3312 = 0U;

	t59 = ((x3309<=x3310)&(x3311>>x3312));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3405 = INT16_MAX;
	int16_t x3407 = INT16_MAX;
	int8_t x3408 = 5;
	volatile int32_t t60 = 8067248;

	t60 = ((x3405<=x3406)&(x3407>>x3408));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3455 = UINT16_MAX;
	static uint16_t x3456 = 2U;
	volatile int32_t t61 = 0;

	t61 = ((x3453<=x3454)&(x3455>>x3456));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x3499 = 15U;
	uint16_t x3500 = 2U;
	volatile int32_t t62 = -203;

	t62 = ((x3497<=x3498)&(x3499>>x3500));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3529 = 13;
	int16_t x3532 = 1;
	volatile int32_t t63 = 174811;

	t63 = ((x3529<=x3530)&(x3531>>x3532));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3561 = -1;
	uint32_t x3562 = 42U;
	uint32_t x3563 = UINT32_MAX;
	uint16_t x3564 = 1U;
	uint32_t t64 = 214U;

	t64 = ((x3561<=x3562)&(x3563>>x3564));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3645 = 1;
	uint64_t x3646 = 30553931490LLU;
	uint64_t x3647 = 80026111064200783LLU;
	volatile uint8_t x3648 = 4U;

	t65 = ((x3645<=x3646)&(x3647>>x3648));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3657 = 1;
	uint16_t x3658 = 363U;
	static volatile uint32_t x3659 = 28U;
	volatile uint32_t t66 = 457808148U;

	t66 = ((x3657<=x3658)&(x3659>>x3660));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3713 = INT64_MIN;
	volatile uint64_t x3715 = 3678963085059800LLU;
	uint8_t x3716 = 51U;
	static volatile uint64_t t67 = 4330LLU;

	t67 = ((x3713<=x3714)&(x3715>>x3716));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3721 = 9;
	int32_t x3722 = -90;
	static volatile uint16_t x3723 = 1646U;
	int32_t t68 = -2404918;

	t68 = ((x3721<=x3722)&(x3723>>x3724));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3749 = -1LL;
	uint64_t x3750 = 171LLU;
	uint8_t x3751 = 1U;
	uint8_t x3752 = 7U;
	volatile int32_t t69 = -45761134;

	t69 = ((x3749<=x3750)&(x3751>>x3752));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3829 = -668298;
	volatile int8_t x3830 = -52;
	uint16_t x3831 = 39U;
	uint16_t x3832 = 3U;
	volatile int32_t t70 = 87309;

	t70 = ((x3829<=x3830)&(x3831>>x3832));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3853 = INT16_MIN;
	uint8_t x3854 = UINT8_MAX;
	volatile int64_t x3855 = 6516993642521LL;
	volatile uint16_t x3856 = 3U;
	volatile int64_t t71 = -16189455814490849LL;

	t71 = ((x3853<=x3854)&(x3855>>x3856));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3877 = -1LL;
	uint64_t x3878 = 6368LLU;
	int64_t t72 = 193416150038LL;

	t72 = ((x3877<=x3878)&(x3879>>x3880));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4146 = UINT8_MAX;
	volatile int32_t t73 = -89;

	t73 = ((x4145<=x4146)&(x4147>>x4148));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4245 = 7189U;
	uint32_t x4247 = 33U;
	uint64_t x4248 = 15LLU;
	volatile uint32_t t74 = 1575653U;

	t74 = ((x4245<=x4246)&(x4247>>x4248));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4277 = INT8_MIN;
	int64_t x4278 = INT64_MIN;
	static volatile uint8_t x4279 = 80U;
	int8_t x4280 = 0;
	int32_t t75 = -731410;

	t75 = ((x4277<=x4278)&(x4279>>x4280));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x4342 = INT64_MAX;
	int64_t x4343 = 56196086LL;
	int8_t x4344 = 5;
	volatile int64_t t76 = -28861487511228403LL;

	t76 = ((x4341<=x4342)&(x4343>>x4344));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4389 = 140LLU;
	static volatile int8_t x4390 = 1;
	static volatile int16_t x4391 = 1;
	volatile int32_t t77 = 3212;

	t77 = ((x4389<=x4390)&(x4391>>x4392));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4457 = INT16_MAX;
	int32_t x4458 = -94822;
	uint8_t x4459 = 40U;
	volatile int32_t t78 = -958;

	t78 = ((x4457<=x4458)&(x4459>>x4460));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4465 = -1345486145170959998LL;
	uint32_t x4466 = 10682U;
	volatile uint32_t x4467 = UINT32_MAX;
	volatile uint32_t x4468 = 4U;
	static volatile uint32_t t79 = 829479U;

	t79 = ((x4465<=x4466)&(x4467>>x4468));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4518 = INT32_MIN;
	uint8_t x4519 = 0U;
	uint8_t x4520 = 0U;
	volatile int32_t t80 = 40168;

	t80 = ((x4517<=x4518)&(x4519>>x4520));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4525 = -2599;
	static int32_t x4526 = INT32_MIN;
	uint64_t x4527 = 653LLU;
	volatile uint64_t t81 = 1089569871049658681LLU;

	t81 = ((x4525<=x4526)&(x4527>>x4528));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4537 = INT16_MIN;
	int16_t x4538 = 13066;
	static int8_t x4539 = INT8_MAX;
	volatile int8_t x4540 = 1;
	static volatile int32_t t82 = 5;

	t82 = ((x4537<=x4538)&(x4539>>x4540));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4669 = -2;
	int8_t x4672 = 3;
	int64_t t83 = 816342LL;

	t83 = ((x4669<=x4670)&(x4671>>x4672));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x4673 = 1U;
	int16_t x4674 = -5;
	uint32_t x4675 = 8U;
	volatile uint32_t t84 = 17456U;

	t84 = ((x4673<=x4674)&(x4675>>x4676));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4801 = -1;
	int32_t x4802 = INT32_MIN;
	int16_t x4803 = INT16_MAX;
	uint8_t x4804 = 17U;
	int32_t t85 = -2936;

	t85 = ((x4801<=x4802)&(x4803>>x4804));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4825 = 748;
	volatile int32_t x4826 = -19027241;
	volatile int32_t t86 = -1111052;

	t86 = ((x4825<=x4826)&(x4827>>x4828));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4845 = UINT32_MAX;
	volatile uint32_t x4846 = UINT32_MAX;
	int16_t x4847 = 187;
	int32_t t87 = -2713670;

	t87 = ((x4845<=x4846)&(x4847>>x4848));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4901 = -1;
	int16_t x4902 = -15;
	uint8_t x4903 = 10U;
	int32_t t88 = 44820956;

	t88 = ((x4901<=x4902)&(x4903>>x4904));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4978 = 25U;
	int64_t x4979 = 3820404965996524545LL;
	uint16_t x4980 = 1U;
	volatile int64_t t89 = 388987606984LL;

	t89 = ((x4977<=x4978)&(x4979>>x4980));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5105 = 107U;
	uint8_t x5106 = UINT8_MAX;
	uint64_t x5107 = 56054LLU;
	uint16_t x5108 = 36U;
	uint64_t t90 = 3653490818LLU;

	t90 = ((x5105<=x5106)&(x5107>>x5108));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x5177 = -1LL;
	static int32_t x5178 = -248889384;
	uint16_t x5179 = 2U;
	volatile int8_t x5180 = 0;

	t91 = ((x5177<=x5178)&(x5179>>x5180));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5462 = INT32_MIN;
	static uint8_t x5463 = 104U;
	uint8_t x5464 = 1U;
	volatile int32_t t92 = -11007084;

	t92 = ((x5461<=x5462)&(x5463>>x5464));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5493 = INT16_MAX;
	int8_t x5494 = INT8_MIN;
	static uint8_t x5496 = 0U;
	static volatile int32_t t93 = -24054;

	t93 = ((x5493<=x5494)&(x5495>>x5496));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5514 = 7442;
	uint64_t x5515 = 1306866LLU;
	static volatile uint8_t x5516 = 62U;
	volatile uint64_t t94 = 1291239330916LLU;

	t94 = ((x5513<=x5514)&(x5515>>x5516));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5583 = UINT32_MAX;
	int16_t x5584 = 10;
	uint32_t t95 = 31325432U;

	t95 = ((x5581<=x5582)&(x5583>>x5584));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5666 = 1;
	uint16_t x5667 = UINT16_MAX;
	int64_t x5668 = 3LL;

	t96 = ((x5665<=x5666)&(x5667>>x5668));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5749 = -192651690930LL;
	uint32_t x5750 = 632543U;
	static uint64_t x5751 = 57LLU;
	uint8_t x5752 = 62U;
	uint64_t t97 = 2156LLU;

	t97 = ((x5749<=x5750)&(x5751>>x5752));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5833 = INT16_MIN;
	volatile int32_t x5835 = INT32_MAX;
	uint16_t x5836 = 1U;
	volatile int32_t t98 = -177;

	t98 = ((x5833<=x5834)&(x5835>>x5836));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5853 = 1;
	int64_t x5854 = INT64_MIN;
	uint16_t x5855 = 1U;
	uint8_t x5856 = 0U;
	volatile int32_t t99 = -6587;

	t99 = ((x5853<=x5854)&(x5855>>x5856));

	if (t99 != 0) { NG(); } else { ; }
	
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

