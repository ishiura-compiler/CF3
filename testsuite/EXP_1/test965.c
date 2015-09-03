#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x56 = INT16_MAX;
uint8_t x60 = 126U;
uint32_t x149 = 117U;
static volatile uint32_t x345 = UINT32_MAX;
int32_t t7 = 171492;
uint32_t x460 = 22351U;
uint16_t x482 = 12U;
int64_t t10 = 4320220793376133LL;
int16_t x509 = INT16_MAX;
volatile int8_t x511 = INT8_MAX;
uint32_t x516 = 599768715U;
int16_t x563 = INT16_MIN;
uint8_t x682 = 3U;
volatile int8_t x695 = INT8_MIN;
int32_t t15 = -10;
int16_t x753 = INT16_MAX;
int16_t x755 = 1;
volatile uint16_t x756 = UINT16_MAX;
int8_t x789 = 18;
int64_t t19 = 4155753214719LL;
int64_t x879 = -589924498LL;
volatile int64_t x1000 = -1LL;
uint64_t x1025 = 64460186LLU;
static int64_t x1055 = -1LL;
uint64_t x1077 = UINT64_MAX;
volatile uint32_t x1156 = 412116893U;
uint32_t t27 = 16900U;
uint32_t x1284 = UINT32_MAX;
volatile uint32_t t28 = 31373U;
static int16_t x1286 = 1;
static uint8_t x1445 = 14U;
int16_t x1636 = INT16_MAX;
int32_t x1706 = 21;
static uint16_t x1707 = UINT16_MAX;
int32_t t36 = -32;
static int8_t x1834 = 2;
uint8_t x1998 = 0U;
volatile int8_t x2000 = INT8_MIN;
volatile int16_t x2154 = 0;
uint8_t x2190 = 2U;
static int16_t x2192 = INT16_MAX;
volatile int32_t t41 = -985103790;
volatile uint64_t x2242 = 5LLU;
int32_t x2269 = 61;
uint16_t x2270 = 17U;
uint16_t x2278 = 0U;
int32_t x2280 = INT32_MIN;
static int8_t x2287 = -1;
uint64_t x2288 = 1358038118LLU;
int8_t x2318 = 8;
int32_t t49 = -44871015;
volatile uint16_t x2433 = 0U;
volatile int16_t x2436 = -141;
static int32_t t50 = -1386;
static uint64_t x2605 = 319876LLU;
volatile int8_t x2675 = INT8_MIN;
int32_t t56 = 46478969;
uint8_t x2863 = UINT8_MAX;
static int16_t x2864 = INT16_MIN;
static volatile int32_t t58 = 397345;
uint64_t t59 = UINT64_MAX;
volatile int8_t x3092 = 9;
volatile int32_t t61 = 127;
static int8_t x3246 = 5;
static uint8_t x3363 = 6U;
uint64_t x3469 = UINT64_MAX;
uint16_t x3470 = 49U;
int8_t x3472 = -1;
int64_t x3531 = -1LL;
int8_t x3825 = 12;
int16_t x3827 = INT16_MIN;
int32_t x4040 = -313774;
uint16_t x4153 = 5540U;
volatile int8_t x4165 = 5;
static volatile uint8_t x4473 = UINT8_MAX;
volatile uint16_t x4569 = 87U;
static uint16_t x4748 = 5U;
uint64_t x4887 = UINT64_MAX;
static uint64_t x4989 = UINT64_MAX;
volatile int64_t x4991 = 51005LL;
uint16_t x5313 = UINT16_MAX;
int8_t x5430 = 20;
volatile int32_t t92 = -5;
uint8_t x5514 = 4U;
static int16_t x5562 = 12;
volatile uint64_t x5564 = UINT64_MAX;
volatile uint32_t x5615 = 384U;
int16_t x5616 = -23;
static uint32_t x5638 = 1U;
uint32_t x5639 = UINT32_MAX;
uint64_t x5687 = 98070543LLU;


void f0(void) {
	static int8_t x53 = 0;
	int16_t x54 = 0;
	int16_t x55 = INT16_MIN;
	volatile int32_t t0 = 137;

	t0 = (((x53<<x54)<=x55)*x56);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = 11U;
	uint32_t x59 = UINT32_MAX;
	static int32_t t1 = -3187618;

	t1 = (((x57<<x58)<=x59)*x60);

	if (t1 != 126) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x93 = INT16_MAX;
	int32_t x94 = 12;
	volatile int64_t x95 = 28466031237662106LL;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t2 = -707;

	t2 = (((x93<<x94)<=x95)*x96);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x150 = 2U;
	int32_t x151 = -2940;
	volatile int16_t x152 = -1;
	volatile int32_t t3 = -402;

	t3 = (((x149<<x150)<=x151)*x152);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 4U;
	static int32_t x239 = INT32_MAX;
	volatile int32_t x240 = -1;
	volatile int32_t t4 = -3196;

	t4 = (((x237<<x238)<=x239)*x240);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x277 = 101726LLU;
	uint8_t x278 = 0U;
	volatile uint64_t x279 = 1566279385LLU;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t5 = INT32_MAX;

	t5 = (((x277<<x278)<=x279)*x280);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x289 = 117U;
	volatile uint8_t x290 = 0U;
	volatile int16_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t6 = 115012LLU;

	t6 = (((x289<<x290)<=x291)*x292);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x346 = 5U;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = -1;

	t7 = (((x345<<x346)<=x347)*x348);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x397 = 565082248U;
	uint16_t x398 = 1U;
	int8_t x399 = INT8_MIN;
	int16_t x400 = 888;
	volatile int32_t t8 = 6429869;

	t8 = (((x397<<x398)<=x399)*x400);

	if (t8 != 888) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x457 = 12306257LL;
	uint8_t x458 = 2U;
	static int8_t x459 = INT8_MIN;
	uint32_t t9 = 15020U;

	t9 = (((x457<<x458)<=x459)*x460);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x481 = UINT64_MAX;
	int32_t x483 = INT32_MAX;
	int64_t x484 = INT64_MAX;

	t10 = (((x481<<x482)<=x483)*x484);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x510 = 1LL;
	uint32_t x512 = 7U;
	volatile uint32_t t11 = 18333642U;

	t11 = (((x509<<x510)<=x511)*x512);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x513 = 5675;
	uint32_t x514 = 5U;
	uint64_t x515 = 2538990LLU;
	volatile uint32_t t12 = 1371U;

	t12 = (((x513<<x514)<=x515)*x516);

	if (t12 != 599768715U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x561 = 1U;
	uint64_t x562 = 7LLU;
	uint64_t x564 = 7053523090787917289LLU;
	uint64_t t13 = 1935977LLU;

	t13 = (((x561<<x562)<=x563)*x564);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x681 = 122U;
	int32_t x683 = 3716530;
	volatile int64_t x684 = INT64_MAX;
	volatile int64_t t14 = INT64_MAX;

	t14 = (((x681<<x682)<=x683)*x684);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x693 = UINT16_MAX;
	uint64_t x694 = 0LLU;
	static int16_t x696 = -1;

	t15 = (((x693<<x694)<=x695)*x696);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x697 = 342231367;
	uint8_t x698 = 0U;
	volatile uint8_t x699 = 0U;
	static int8_t x700 = -50;
	static int32_t t16 = -51324088;

	t16 = (((x697<<x698)<=x699)*x700);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x754 = 0U;
	int32_t t17 = 6613;

	t17 = (((x753<<x754)<=x755)*x756);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x790 = 24U;
	int64_t x791 = -1LL;
	static volatile uint8_t x792 = UINT8_MAX;
	volatile int32_t t18 = 420930;

	t18 = (((x789<<x790)<=x791)*x792);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x793 = 0U;
	uint16_t x794 = 12U;
	volatile uint64_t x795 = 86776LLU;
	int64_t x796 = -383390720280LL;

	t19 = (((x793<<x794)<=x795)*x796);

	if (t19 != -383390720280LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x877 = 1;
	uint8_t x878 = 5U;
	int16_t x880 = -1;
	volatile int32_t t20 = -7620251;

	t20 = (((x877<<x878)<=x879)*x880);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x949 = 58377274LLU;
	int8_t x950 = 0;
	uint32_t x951 = 30U;
	uint8_t x952 = UINT8_MAX;
	volatile int32_t t21 = 0;

	t21 = (((x949<<x950)<=x951)*x952);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x997 = UINT8_MAX;
	int8_t x998 = 19;
	static int32_t x999 = INT32_MIN;
	volatile int64_t t22 = 1051885LL;

	t22 = (((x997<<x998)<=x999)*x1000);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1026 = 0LL;
	int8_t x1027 = 18;
	uint8_t x1028 = 5U;
	volatile int32_t t23 = 6952836;

	t23 = (((x1025<<x1026)<=x1027)*x1028);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1053 = UINT64_MAX;
	uint8_t x1054 = 29U;
	int8_t x1056 = INT8_MIN;
	int32_t t24 = 1250841;

	t24 = (((x1053<<x1054)<=x1055)*x1056);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1078 = 6;
	int64_t x1079 = -2955LL;
	int64_t x1080 = -1LL;
	volatile int64_t t25 = 0LL;

	t25 = (((x1077<<x1078)<=x1079)*x1080);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1145 = UINT8_MAX;
	uint8_t x1146 = 6U;
	uint32_t x1147 = 524U;
	int16_t x1148 = -140;
	volatile int32_t t26 = -382;

	t26 = (((x1145<<x1146)<=x1147)*x1148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1153 = 27082LLU;
	volatile uint8_t x1154 = 33U;
	uint16_t x1155 = UINT16_MAX;

	t27 = (((x1153<<x1154)<=x1155)*x1156);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1281 = 117242396400640955LLU;
	uint16_t x1282 = 22U;
	int16_t x1283 = INT16_MAX;

	t28 = (((x1281<<x1282)<=x1283)*x1284);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1285 = 0U;
	int8_t x1287 = 0;
	int32_t x1288 = INT32_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (((x1285<<x1286)<=x1287)*x1288);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1381 = INT8_MAX;
	static int64_t x1382 = 0LL;
	static uint64_t x1383 = 949LLU;
	static volatile int32_t x1384 = -1;
	volatile int32_t t30 = -13703;

	t30 = (((x1381<<x1382)<=x1383)*x1384);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1446 = 0;
	static uint32_t x1447 = UINT32_MAX;
	int16_t x1448 = INT16_MAX;
	volatile int32_t t31 = -22599;

	t31 = (((x1445<<x1446)<=x1447)*x1448);

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1505 = 5837629U;
	uint8_t x1506 = 0U;
	static uint16_t x1507 = 27U;
	volatile int16_t x1508 = INT16_MIN;
	volatile int32_t t32 = 91;

	t32 = (((x1505<<x1506)<=x1507)*x1508);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1517 = 38461374LLU;
	uint16_t x1518 = 1U;
	uint64_t x1519 = 1740467333349LLU;
	uint16_t x1520 = UINT16_MAX;
	static volatile int32_t t33 = -1;

	t33 = (((x1517<<x1518)<=x1519)*x1520);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1633 = UINT8_MAX;
	uint32_t x1634 = 0U;
	static int32_t x1635 = 1;
	int32_t t34 = 5902294;

	t34 = (((x1633<<x1634)<=x1635)*x1636);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1673 = 31372LLU;
	volatile uint16_t x1674 = 3U;
	int64_t x1675 = -6LL;
	int64_t x1676 = -1LL;
	static int64_t t35 = -27530401135LL;

	t35 = (((x1673<<x1674)<=x1675)*x1676);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1705 = UINT32_MAX;
	int8_t x1708 = -1;

	t36 = (((x1705<<x1706)<=x1707)*x1708);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1833 = UINT64_MAX;
	int16_t x1835 = INT16_MIN;
	int8_t x1836 = -1;
	int32_t t37 = 702841753;

	t37 = (((x1833<<x1834)<=x1835)*x1836);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1973 = INT8_MAX;
	uint8_t x1974 = 0U;
	int32_t x1975 = 101822;
	int8_t x1976 = INT8_MAX;
	int32_t t38 = -99;

	t38 = (((x1973<<x1974)<=x1975)*x1976);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1997 = 11;
	volatile uint32_t x1999 = 743334U;
	int32_t t39 = 25920;

	t39 = (((x1997<<x1998)<=x1999)*x2000);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x2153 = 9U;
	int8_t x2155 = -1;
	volatile int8_t x2156 = 0;
	int32_t t40 = 32149;

	t40 = (((x2153<<x2154)<=x2155)*x2156);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2189 = UINT32_MAX;
	static int64_t x2191 = -14950372354593LL;

	t41 = (((x2189<<x2190)<=x2191)*x2192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2225 = 0;
	static uint8_t x2226 = 0U;
	uint64_t x2227 = UINT64_MAX;
	static volatile uint8_t x2228 = UINT8_MAX;
	static volatile int32_t t42 = 2;

	t42 = (((x2225<<x2226)<=x2227)*x2228);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2241 = UINT64_MAX;
	static uint32_t x2243 = 6366608U;
	int8_t x2244 = -9;
	int32_t t43 = 19188083;

	t43 = (((x2241<<x2242)<=x2243)*x2244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2271 = 0;
	int8_t x2272 = -1;
	static int32_t t44 = 1;

	t44 = (((x2269<<x2270)<=x2271)*x2272);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x2277 = 6055292U;
	static uint8_t x2279 = 1U;
	int32_t t45 = -132956;

	t45 = (((x2277<<x2278)<=x2279)*x2280);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2285 = UINT32_MAX;
	uint16_t x2286 = 3U;
	static volatile uint64_t t46 = 779026LLU;

	t46 = (((x2285<<x2286)<=x2287)*x2288);

	if (t46 != 1358038118LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2305 = 40U;
	int8_t x2306 = 3;
	int16_t x2307 = INT16_MIN;
	volatile int64_t x2308 = INT64_MIN;
	int64_t t47 = 28316604222LL;

	t47 = (((x2305<<x2306)<=x2307)*x2308);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2317 = 12U;
	static volatile uint16_t x2319 = UINT16_MAX;
	static int64_t x2320 = 1187203270606LL;
	volatile int64_t t48 = 77472510964LL;

	t48 = (((x2317<<x2318)<=x2319)*x2320);

	if (t48 != 1187203270606LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2429 = 51;
	volatile int16_t x2430 = 3;
	int64_t x2431 = INT64_MIN;
	volatile int16_t x2432 = INT16_MIN;

	t49 = (((x2429<<x2430)<=x2431)*x2432);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2434 = 10U;
	int32_t x2435 = -1;

	t50 = (((x2433<<x2434)<=x2435)*x2436);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2437 = UINT8_MAX;
	static volatile int8_t x2438 = 11;
	int16_t x2439 = INT16_MAX;
	int32_t x2440 = INT32_MIN;
	int32_t t51 = 6090;

	t51 = (((x2437<<x2438)<=x2439)*x2440);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2513 = 57901U;
	uint8_t x2514 = 0U;
	volatile int8_t x2515 = -2;
	int32_t x2516 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = (((x2513<<x2514)<=x2515)*x2516);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x2606 = 16U;
	volatile int8_t x2607 = INT8_MIN;
	uint8_t x2608 = 63U;
	int32_t t53 = -2017;

	t53 = (((x2605<<x2606)<=x2607)*x2608);

	if (t53 != 63) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2673 = 39671U;
	uint8_t x2674 = 15U;
	static uint32_t x2676 = 40U;
	static volatile uint32_t t54 = 6650U;

	t54 = (((x2673<<x2674)<=x2675)*x2676);

	if (t54 != 40U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x2685 = 1624097U;
	uint8_t x2686 = 0U;
	uint8_t x2687 = UINT8_MAX;
	volatile uint16_t x2688 = UINT16_MAX;
	volatile int32_t t55 = -130074769;

	t55 = (((x2685<<x2686)<=x2687)*x2688);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2757 = 1;
	volatile uint8_t x2758 = 23U;
	int32_t x2759 = 2232;
	int16_t x2760 = -1;

	t56 = (((x2757<<x2758)<=x2759)*x2760);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2801 = 0LLU;
	int16_t x2802 = 14;
	int16_t x2803 = INT16_MAX;
	int64_t x2804 = -1LL;
	static int64_t t57 = 5LL;

	t57 = (((x2801<<x2802)<=x2803)*x2804);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2861 = INT16_MAX;
	uint16_t x2862 = 2U;

	t58 = (((x2861<<x2862)<=x2863)*x2864);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2921 = 57U;
	volatile uint8_t x2922 = 2U;
	volatile int64_t x2923 = INT64_MAX;
	uint64_t x2924 = UINT64_MAX;

	t59 = (((x2921<<x2922)<=x2923)*x2924);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2953 = 510;
	int32_t x2954 = 0;
	int32_t x2955 = INT32_MIN;
	int32_t x2956 = INT32_MIN;
	volatile int32_t t60 = -538956397;

	t60 = (((x2953<<x2954)<=x2955)*x2956);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x3089 = 12391U;
	int8_t x3090 = 19;
	int8_t x3091 = -1;

	t61 = (((x3089<<x3090)<=x3091)*x3092);

	if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3153 = INT8_MAX;
	int8_t x3154 = 8;
	static int64_t x3155 = INT64_MIN;
	int32_t x3156 = -42928226;
	int32_t t62 = 40;

	t62 = (((x3153<<x3154)<=x3155)*x3156);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x3213 = UINT64_MAX;
	static volatile int16_t x3214 = 1;
	static uint16_t x3215 = UINT16_MAX;
	int8_t x3216 = -1;
	volatile int32_t t63 = 13;

	t63 = (((x3213<<x3214)<=x3215)*x3216);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3233 = UINT16_MAX;
	uint8_t x3234 = 9U;
	uint64_t x3235 = 15LLU;
	int8_t x3236 = INT8_MIN;
	int32_t t64 = 104;

	t64 = (((x3233<<x3234)<=x3235)*x3236);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3245 = 29U;
	volatile int32_t x3247 = 4119;
	int8_t x3248 = -1;
	static int32_t t65 = -1898957;

	t65 = (((x3245<<x3246)<=x3247)*x3248);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x3361 = 15U;
	uint8_t x3362 = 7U;
	int16_t x3364 = INT16_MIN;
	static volatile int32_t t66 = -1037131;

	t66 = (((x3361<<x3362)<=x3363)*x3364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3449 = 30U;
	uint8_t x3450 = 4U;
	int32_t x3451 = -1;
	uint8_t x3452 = 15U;
	int32_t t67 = 176215;

	t67 = (((x3449<<x3450)<=x3451)*x3452);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3471 = INT64_MIN;
	int32_t t68 = -1;

	t68 = (((x3469<<x3470)<=x3471)*x3472);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3529 = 24992LLU;
	uint8_t x3530 = 10U;
	static uint32_t x3532 = 44880U;
	volatile uint32_t t69 = 1158968U;

	t69 = (((x3529<<x3530)<=x3531)*x3532);

	if (t69 != 44880U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x3629 = 3387389164567253LLU;
	static uint16_t x3630 = 12U;
	uint64_t x3631 = 217671597LLU;
	int32_t x3632 = INT32_MIN;
	int32_t t70 = 1786945;

	t70 = (((x3629<<x3630)<=x3631)*x3632);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3826 = 1U;
	int8_t x3828 = INT8_MIN;
	volatile int32_t t71 = -95;

	t71 = (((x3825<<x3826)<=x3827)*x3828);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3969 = UINT32_MAX;
	static int32_t x3970 = 24;
	volatile int16_t x3971 = -1;
	int16_t x3972 = INT16_MIN;
	static int32_t t72 = 2505073;

	t72 = (((x3969<<x3970)<=x3971)*x3972);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4037 = 41;
	volatile uint16_t x4038 = 1U;
	int64_t x4039 = 7LL;
	volatile int32_t t73 = 4;

	t73 = (((x4037<<x4038)<=x4039)*x4040);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4121 = INT16_MAX;
	int8_t x4122 = 10;
	static volatile int16_t x4123 = 3760;
	uint8_t x4124 = 1U;
	volatile int32_t t74 = -245044;

	t74 = (((x4121<<x4122)<=x4123)*x4124);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x4149 = UINT8_MAX;
	uint16_t x4150 = 3U;
	int32_t x4151 = INT32_MIN;
	int16_t x4152 = -1;
	volatile int32_t t75 = 178;

	t75 = (((x4149<<x4150)<=x4151)*x4152);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4154 = 1LL;
	int16_t x4155 = -1;
	int16_t x4156 = INT16_MIN;
	int32_t t76 = 2221;

	t76 = (((x4153<<x4154)<=x4155)*x4156);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x4166 = 1;
	static int8_t x4167 = INT8_MIN;
	int8_t x4168 = INT8_MAX;
	static int32_t t77 = -114;

	t77 = (((x4165<<x4166)<=x4167)*x4168);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4245 = 1U;
	static uint32_t x4246 = 13U;
	uint8_t x4247 = UINT8_MAX;
	uint32_t x4248 = UINT32_MAX;
	volatile uint32_t t78 = 44107U;

	t78 = (((x4245<<x4246)<=x4247)*x4248);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4474 = 17U;
	static uint8_t x4475 = 0U;
	static int32_t x4476 = INT32_MIN;
	static int32_t t79 = -35083125;

	t79 = (((x4473<<x4474)<=x4475)*x4476);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x4493 = 960270U;
	uint8_t x4494 = 0U;
	uint64_t x4495 = UINT64_MAX;
	uint32_t x4496 = 28218U;
	uint32_t t80 = 24415188U;

	t80 = (((x4493<<x4494)<=x4495)*x4496);

	if (t80 != 28218U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x4570 = 1;
	int64_t x4571 = INT64_MIN;
	int8_t x4572 = INT8_MIN;
	int32_t t81 = -122;

	t81 = (((x4569<<x4570)<=x4571)*x4572);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4745 = UINT8_MAX;
	static int64_t x4746 = 1LL;
	volatile int16_t x4747 = -7;
	volatile int32_t t82 = 119;

	t82 = (((x4745<<x4746)<=x4747)*x4748);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4885 = INT16_MAX;
	int8_t x4886 = 1;
	volatile uint64_t x4888 = 100LLU;
	volatile uint64_t t83 = 5393LLU;

	t83 = (((x4885<<x4886)<=x4887)*x4888);

	if (t83 != 100LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4990 = 21U;
	static uint16_t x4992 = 18U;
	static volatile int32_t t84 = 0;

	t84 = (((x4989<<x4990)<=x4991)*x4992);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5029 = 18U;
	uint16_t x5030 = 0U;
	int8_t x5031 = INT8_MIN;
	static volatile int64_t x5032 = 19240484384616890LL;
	int64_t t85 = -126460167832LL;

	t85 = (((x5029<<x5030)<=x5031)*x5032);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5057 = 33U;
	uint8_t x5058 = 1U;
	static int16_t x5059 = -1;
	static volatile int8_t x5060 = INT8_MIN;
	static int32_t t86 = -22;

	t86 = (((x5057<<x5058)<=x5059)*x5060);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x5173 = 2571U;
	uint8_t x5174 = 1U;
	int64_t x5175 = -1LL;
	volatile int64_t x5176 = INT64_MAX;
	volatile int64_t t87 = -6414872LL;

	t87 = (((x5173<<x5174)<=x5175)*x5176);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x5217 = INT32_MAX;
	static int16_t x5218 = 0;
	volatile int16_t x5219 = INT16_MIN;
	int32_t x5220 = 42;
	volatile int32_t t88 = 6098296;

	t88 = (((x5217<<x5218)<=x5219)*x5220);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x5314 = 11U;
	static int64_t x5315 = 84922LL;
	volatile uint16_t x5316 = UINT16_MAX;
	int32_t t89 = -9600799;

	t89 = (((x5313<<x5314)<=x5315)*x5316);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5365 = 53LLU;
	volatile int8_t x5366 = 49;
	uint16_t x5367 = 9552U;
	uint8_t x5368 = 1U;
	volatile int32_t t90 = 6120794;

	t90 = (((x5365<<x5366)<=x5367)*x5368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5429 = 406272178575LLU;
	volatile uint16_t x5431 = 23615U;
	uint16_t x5432 = 14U;
	volatile int32_t t91 = 24661080;

	t91 = (((x5429<<x5430)<=x5431)*x5432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x5437 = 78U;
	int8_t x5438 = 0;
	volatile int64_t x5439 = 1579251931LL;
	static uint16_t x5440 = 2262U;

	t92 = (((x5437<<x5438)<=x5439)*x5440);

	if (t92 != 2262) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5513 = 56U;
	uint8_t x5515 = 0U;
	uint8_t x5516 = 116U;
	int32_t t93 = 0;

	t93 = (((x5513<<x5514)<=x5515)*x5516);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5561 = 954738934654639LLU;
	int8_t x5563 = INT8_MIN;
	uint64_t t94 = UINT64_MAX;

	t94 = (((x5561<<x5562)<=x5563)*x5564);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x5589 = 5373654334232565819LLU;
	volatile uint8_t x5590 = 1U;
	uint32_t x5591 = UINT32_MAX;
	uint32_t x5592 = UINT32_MAX;
	volatile uint32_t t95 = 120017U;

	t95 = (((x5589<<x5590)<=x5591)*x5592);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5613 = 335942638LL;
	volatile uint8_t x5614 = 10U;
	volatile int32_t t96 = -34232;

	t96 = (((x5613<<x5614)<=x5615)*x5616);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5637 = UINT32_MAX;
	static uint8_t x5640 = UINT8_MAX;
	volatile int32_t t97 = 1713;

	t97 = (((x5637<<x5638)<=x5639)*x5640);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x5677 = 1129U;
	int8_t x5678 = 1;
	static int64_t x5679 = -31327345514LL;
	uint32_t x5680 = UINT32_MAX;
	volatile uint32_t t98 = 251098U;

	t98 = (((x5677<<x5678)<=x5679)*x5680);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5685 = 0;
	volatile int8_t x5686 = 12;
	int8_t x5688 = 0;
	volatile int32_t t99 = -238;

	t99 = (((x5685<<x5686)<=x5687)*x5688);

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

