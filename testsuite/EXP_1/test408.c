#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x50 = 15484306996984415LLU;
volatile uint64_t t0 = 132449631489420411LLU;
int16_t x199 = 2;
int64_t x321 = -1110405LL;
uint64_t x344 = 4847141LLU;
uint64_t t6 = 1373088362011556LLU;
uint64_t t7 = 4220370768LLU;
uint8_t x429 = 5U;
int8_t x437 = INT8_MIN;
static volatile int8_t x639 = 5;
static uint64_t x713 = 527459146063015664LLU;
static volatile uint8_t x774 = 0U;
static volatile int32_t t13 = 852;
uint64_t t14 = 7659825304850098LLU;
static uint32_t x957 = 0U;
static int32_t x958 = -1;
int32_t x986 = -79944248;
volatile uint32_t x1020 = 742023125U;
static int8_t x1089 = 1;
int8_t x1090 = 0;
int8_t x1091 = 18;
uint32_t x1137 = 5221104U;
static uint8_t x1146 = 17U;
uint8_t x1217 = 0U;
uint8_t x1219 = 0U;
volatile int32_t t22 = 59129;
volatile int8_t x1244 = INT8_MAX;
uint64_t x1266 = 128262LLU;
static uint8_t x1515 = 0U;
volatile uint64_t t25 = 2LLU;
volatile uint64_t t26 = 11032588202668LLU;
volatile int64_t t27 = -12397854477938LL;
volatile uint32_t t28 = 1367800168U;
static uint8_t x1823 = 8U;
uint64_t x1825 = 2153335395359LLU;
uint8_t x1975 = 0U;
volatile uint32_t x2041 = UINT32_MAX;
uint32_t t37 = 55664U;
volatile uint8_t x2047 = 29U;
static uint64_t t38 = 49671538264LLU;
uint32_t x2110 = 650962291U;
static uint32_t x2125 = 1725774140U;
volatile int8_t x2128 = -13;
int32_t x2157 = INT32_MIN;
uint8_t x2160 = 35U;
static uint16_t x2261 = 304U;
static int64_t x2316 = -13LL;
static int64_t t44 = -37LL;
uint16_t x2380 = UINT16_MAX;
uint32_t x2404 = 9973U;
int8_t x2413 = INT8_MAX;
int16_t x2416 = INT16_MIN;
uint8_t x2421 = 13U;
uint64_t x2424 = UINT64_MAX;
volatile int8_t x2441 = INT8_MIN;
volatile int8_t x2443 = 0;
int64_t t49 = 22497LL;
volatile uint8_t x2515 = 3U;
static volatile uint64_t x2516 = 35542LLU;
int16_t x2535 = 26;
volatile uint64_t t52 = 121731258LLU;
uint8_t x2568 = 28U;
volatile int32_t x2925 = -2840818;
static int64_t x3202 = 1400667721901100LL;
int32_t x3204 = INT32_MIN;
int32_t x3217 = -1;
int8_t x3234 = -1;
static uint8_t x3235 = 0U;
volatile uint32_t x3337 = UINT32_MAX;
int16_t x3338 = INT16_MAX;
int8_t x3344 = INT8_MAX;
int8_t x3357 = -2;
static volatile int32_t t63 = -145;
int64_t x3422 = -1LL;
uint16_t x3547 = 11U;
uint16_t x3733 = UINT16_MAX;
int32_t x3842 = -19042;
static volatile int16_t x3877 = 0;
volatile uint64_t t72 = 457331LLU;
volatile uint32_t t75 = 55399U;
int8_t x4198 = INT8_MAX;
uint16_t x4199 = 15U;
uint16_t x4235 = 1U;
uint32_t x4257 = 0U;
static volatile int64_t t79 = -7604487LL;
volatile uint16_t x4274 = 63U;
static uint16_t x4351 = 0U;
int8_t x4426 = -1;
int8_t x4427 = 1;
volatile int8_t x4428 = INT8_MIN;
static int32_t t82 = 1;
static volatile uint64_t t83 = 401527236219621LLU;
static uint64_t x4789 = 327242LLU;
int8_t x4791 = 3;
static int8_t x4846 = INT8_MIN;
uint8_t x4920 = 33U;
volatile int8_t x5031 = 9;
uint8_t x5235 = 2U;
static uint64_t x5262 = 122273610276380360LLU;
static int64_t x5264 = 140359941802622000LL;
uint32_t x5374 = UINT32_MAX;
static uint32_t x5422 = UINT32_MAX;
int16_t x5525 = INT16_MIN;
uint64_t t98 = 122532446552314891LLU;
static volatile uint8_t x5703 = 2U;
uint32_t t99 = 5381290U;


void f0(void) {
	int8_t x49 = INT8_MAX;
	int8_t x51 = 22;
	volatile uint16_t x52 = 150U;

	t0 = (((x49*x50)<<x51)%x52);

	if (t0 != 24LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x197 = 5160;
	int8_t x198 = 7;
	int8_t x200 = INT8_MIN;
	volatile int32_t t1 = -13536;

	t1 = (((x197*x198)<<x199)%x200);

	if (t1 != 96) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x261 = UINT8_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 1U;
	int16_t x264 = 305;
	volatile uint64_t t2 = 3805243LLU;

	t2 = (((x261*x262)<<x263)%x264);

	if (t2 != 116LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x322 = -2;
	uint8_t x323 = 2U;
	volatile int64_t x324 = INT64_MIN;
	int64_t t3 = 6893030616498856LL;

	t3 = (((x321*x322)<<x323)%x324);

	if (t3 != 8883240LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x325 = -4;
	int16_t x326 = -1;
	volatile int8_t x327 = 0;
	static uint32_t x328 = 1818U;
	volatile uint32_t t4 = 72683541U;

	t4 = (((x325*x326)<<x327)%x328);

	if (t4 != 4U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x333 = INT64_MIN;
	uint32_t x334 = 0U;
	volatile uint16_t x335 = 30U;
	volatile int64_t x336 = 6105324480046862LL;
	static volatile int64_t t5 = -2143804989062LL;

	t5 = (((x333*x334)<<x335)%x336);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x341 = -611288;
	static uint32_t x342 = 18915477U;
	static volatile uint8_t x343 = 0U;

	t6 = (((x341*x342)<<x343)%x344);

	if (t6 != 4410822LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = 3439678LLU;
	static uint32_t x367 = 8U;
	static uint16_t x368 = 601U;

	t7 = (((x365*x366)<<x367)%x368);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x430 = 0U;
	uint32_t x431 = 14U;
	static volatile uint64_t x432 = 43462293671921234LLU;
	volatile uint64_t t8 = 79275586794467973LLU;

	t8 = (((x429*x430)<<x431)%x432);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x438 = -1;
	static uint32_t x439 = 15U;
	int32_t x440 = INT32_MIN;
	static int32_t t9 = 17;

	t9 = (((x437*x438)<<x439)%x440);

	if (t9 != 4194304) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x637 = INT16_MAX;
	volatile uint8_t x638 = UINT8_MAX;
	int8_t x640 = -1;
	volatile int32_t t10 = -1922;

	t10 = (((x637*x638)<<x639)%x640);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x709 = 0;
	int16_t x710 = INT16_MIN;
	uint16_t x711 = 5U;
	int32_t x712 = 26315302;
	int32_t t11 = 617002;

	t11 = (((x709*x710)<<x711)%x712);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x714 = -491912LL;
	int32_t x715 = 2;
	int64_t x716 = 477874LL;
	static volatile uint64_t t12 = 25185451183996456LLU;

	t12 = (((x713*x714)<<x715)%x716);

	if (t12 != 206728LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x773 = INT32_MIN;
	uint8_t x775 = 0U;
	int32_t x776 = -1;

	t13 = (((x773*x774)<<x775)%x776);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x813 = 3842U;
	uint64_t x814 = 198419789LLU;
	uint8_t x815 = 5U;
	static int64_t x816 = -1LL;

	t14 = (((x813*x814)<<x815)%x816);

	if (t14 != 24394522538816LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x959 = 2;
	volatile int64_t x960 = -1LL;
	int64_t t15 = 3563940880181347LL;

	t15 = (((x957*x958)<<x959)%x960);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x985 = -1;
	uint8_t x987 = 1U;
	static int32_t x988 = 545317;
	volatile int32_t t16 = 31558922;

	t16 = (((x985*x986)<<x987)%x988);

	if (t16 != 110615) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1017 = 49U;
	uint16_t x1018 = UINT16_MAX;
	static uint16_t x1019 = 8U;
	static volatile uint32_t t17 = 27U;

	t17 = (((x1017*x1018)<<x1019)%x1020);

	if (t17 != 80047915U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1092 = INT32_MIN;
	volatile int32_t t18 = 75170404;

	t18 = (((x1089*x1090)<<x1091)%x1092);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1113 = INT16_MIN;
	int32_t x1114 = -1;
	int16_t x1115 = 2;
	int16_t x1116 = -285;
	volatile int32_t t19 = 4525498;

	t19 = (((x1113*x1114)<<x1115)%x1116);

	if (t19 != 257) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1138 = -1;
	volatile uint8_t x1139 = 29U;
	int64_t x1140 = INT64_MIN;
	int64_t t20 = -1061997522846LL;

	t20 = (((x1137*x1138)<<x1139)%x1140);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1145 = 3U;
	int8_t x1147 = 0;
	volatile int32_t x1148 = 872432014;
	static volatile int32_t t21 = -1;

	t21 = (((x1145*x1146)<<x1147)%x1148);

	if (t21 != 51) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1218 = INT16_MIN;
	uint16_t x1220 = UINT16_MAX;

	t22 = (((x1217*x1218)<<x1219)%x1220);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1241 = -1LL;
	int16_t x1242 = -12429;
	uint64_t x1243 = 14LLU;
	int64_t t23 = 15795626000LL;

	t23 = (((x1241*x1242)<<x1243)%x1244);

	if (t23 != 110LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1265 = INT16_MAX;
	uint16_t x1267 = 5U;
	static uint8_t x1268 = 1U;
	volatile uint64_t t24 = 1503394428804LLU;

	t24 = (((x1265*x1266)<<x1267)%x1268);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1513 = 18386507329LLU;
	int8_t x1514 = 0;
	static int16_t x1516 = 897;

	t25 = (((x1513*x1514)<<x1515)%x1516);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1581 = INT16_MIN;
	static uint64_t x1582 = UINT64_MAX;
	static volatile uint16_t x1583 = 0U;
	uint32_t x1584 = 513849910U;

	t26 = (((x1581*x1582)<<x1583)%x1584);

	if (t26 != 32768LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1653 = 1392113651LL;
	static int8_t x1654 = 23;
	uint8_t x1655 = 7U;
	int16_t x1656 = INT16_MAX;

	t27 = (((x1653*x1654)<<x1655)%x1656);

	if (t27 != 28335LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x1665 = UINT32_MAX;
	int16_t x1666 = -1;
	static uint32_t x1667 = 1U;
	static int8_t x1668 = -1;

	t28 = (((x1665*x1666)<<x1667)%x1668);

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1697 = INT8_MIN;
	static int32_t x1698 = -1;
	uint8_t x1699 = 0U;
	static volatile int16_t x1700 = INT16_MAX;
	int32_t t29 = -342341;

	t29 = (((x1697*x1698)<<x1699)%x1700);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1821 = INT16_MIN;
	uint64_t x1822 = UINT64_MAX;
	uint8_t x1824 = 30U;
	uint64_t t30 = 1248505221518LLU;

	t30 = (((x1821*x1822)<<x1823)%x1824);

	if (t30 != 8LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1826 = 1U;
	uint16_t x1827 = 7U;
	uint32_t x1828 = UINT32_MAX;
	uint64_t t31 = 261923576882900679LLU;

	t31 = (((x1825*x1826)<<x1827)%x1828);

	if (t31 != 1699416622LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1909 = INT8_MAX;
	int8_t x1910 = INT8_MAX;
	int8_t x1911 = 1;
	static int64_t x1912 = INT64_MIN;
	int64_t t32 = 0LL;

	t32 = (((x1909*x1910)<<x1911)%x1912);

	if (t32 != 32258LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1917 = 14775107LLU;
	int8_t x1918 = INT8_MIN;
	uint32_t x1919 = 5U;
	int64_t x1920 = INT64_MIN;
	static uint64_t t33 = 1356260846072695LLU;

	t33 = (((x1917*x1918)<<x1919)%x1920);

	if (t33 != 9223371976335937536LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1941 = UINT64_MAX;
	static int16_t x1942 = INT16_MIN;
	static uint8_t x1943 = 12U;
	volatile uint32_t x1944 = UINT32_MAX;
	static uint64_t t34 = 1673231068706367246LLU;

	t34 = (((x1941*x1942)<<x1943)%x1944);

	if (t34 != 134217728LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1973 = 0;
	int64_t x1974 = INT64_MIN;
	uint32_t x1976 = 26U;
	static int64_t t35 = -379125LL;

	t35 = (((x1973*x1974)<<x1975)%x1976);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2001 = INT8_MIN;
	uint32_t x2002 = 1713884731U;
	static volatile uint64_t x2003 = 17LLU;
	int32_t x2004 = -1089875;
	static uint32_t t36 = 337031103U;

	t36 = (((x2001*x2002)<<x2003)%x2004);

	if (t36 != 3305111552U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x2042 = INT32_MAX;
	int32_t x2043 = 3;
	volatile uint32_t x2044 = UINT32_MAX;

	t37 = (((x2041*x2042)<<x2043)%x2044);

	if (t37 != 8U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2045 = 3322295298246898LLU;
	volatile int8_t x2046 = 1;
	int8_t x2048 = INT8_MIN;

	t38 = (((x2045*x2046)<<x2047)%x2048);

	if (t38 != 9575472073875128320LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2109 = 829;
	int8_t x2111 = 12;
	static volatile int8_t x2112 = INT8_MIN;
	uint32_t t39 = 48U;

	t39 = (((x2109*x2110)<<x2111)%x2112);

	if (t39 != 810971136U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2126 = 2LL;
	static int32_t x2127 = 20;
	int64_t t40 = -196221963874623264LL;

	t40 = (((x2125*x2126)<<x2127)%x2128);

	if (t40 != 8LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2158 = 1012U;
	static uint8_t x2159 = 4U;
	uint32_t t41 = 3184821U;

	t41 = (((x2157*x2158)<<x2159)%x2160);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2262 = 41202691589LL;
	static int32_t x2263 = 2;
	volatile int32_t x2264 = INT32_MIN;
	static volatile int64_t t42 = 55LL;

	t42 = (((x2261*x2262)<<x2263)%x2264);

	if (t42 != 1679464384LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x2289 = 14045U;
	volatile uint64_t x2290 = UINT64_MAX;
	volatile uint8_t x2291 = 35U;
	volatile int8_t x2292 = 1;
	static volatile uint64_t t43 = 512812291594142549LLU;

	t43 = (((x2289*x2290)<<x2291)%x2292);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2313 = -1LL;
	int32_t x2314 = INT32_MIN;
	static uint32_t x2315 = 28U;

	t44 = (((x2313*x2314)<<x2315)%x2316);

	if (t44 != 7LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2377 = 38053550910LLU;
	int8_t x2378 = 0;
	uint8_t x2379 = 1U;
	static volatile uint64_t t45 = 104845668LLU;

	t45 = (((x2377*x2378)<<x2379)%x2380);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2401 = -1;
	int8_t x2402 = -6;
	static uint32_t x2403 = 2U;
	volatile uint32_t t46 = 262U;

	t46 = (((x2401*x2402)<<x2403)%x2404);

	if (t46 != 24U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x2414 = 2039772976887207666LLU;
	int16_t x2415 = 15;
	uint64_t t47 = 63656350832636678LLU;

	t47 = (((x2413*x2414)<<x2415)%x2416);

	if (t47 != 5794976579403055104LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2422 = 254141040U;
	uint16_t x2423 = 4U;
	volatile uint64_t t48 = 1317782952LLU;

	t48 = (((x2421*x2422)<<x2423)%x2424);

	if (t48 != 1321728768LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2442 = 475407U;
	int64_t x2444 = INT64_MIN;

	t49 = (((x2441*x2442)<<x2443)%x2444);

	if (t49 != 4234115200LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2505 = UINT64_MAX;
	uint8_t x2506 = 1U;
	uint8_t x2507 = 28U;
	static int8_t x2508 = INT8_MAX;
	uint64_t t50 = 286736073LLU;

	t50 = (((x2505*x2506)<<x2507)%x2508);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2513 = -2074802340LL;
	int16_t x2514 = INT16_MIN;
	uint64_t t51 = 1643086044328335LLU;

	t51 = (((x2513*x2514)<<x2515)%x2516);

	if (t51 != 2106LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2533 = 200930U;
	uint64_t x2534 = 339700LLU;
	uint16_t x2536 = 3U;

	t52 = (((x2533*x2534)<<x2535)%x2536);

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2565 = INT16_MIN;
	static int32_t x2566 = -1;
	uint16_t x2567 = 0U;
	int32_t t53 = 8;

	t53 = (((x2565*x2566)<<x2567)%x2568);

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2781 = UINT16_MAX;
	uint16_t x2782 = 16145U;
	volatile uint8_t x2783 = 1U;
	int8_t x2784 = 3;
	volatile int32_t t54 = 254726013;

	t54 = (((x2781*x2782)<<x2783)%x2784);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2926 = 762852U;
	int64_t x2927 = 1LL;
	static uint32_t x2928 = UINT32_MAX;
	volatile uint32_t t55 = 667357471U;

	t55 = (((x2925*x2926)<<x2927)%x2928);

	if (t55 != 3669583088U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3061 = 3LLU;
	int16_t x3062 = INT16_MAX;
	int8_t x3063 = 22;
	int8_t x3064 = INT8_MIN;
	volatile uint64_t t56 = 788821221343767011LLU;

	t56 = (((x3061*x3062)<<x3063)%x3064);

	if (t56 != 412304277504LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3089 = 39151268488LLU;
	int16_t x3090 = -13423;
	uint32_t x3091 = 40U;
	int64_t x3092 = -1LL;
	volatile uint64_t t57 = 23233LLU;

	t57 = (((x3089*x3090)<<x3091)%x3092);

	if (t57 != 7725652481870397440LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3201 = 2LLU;
	uint8_t x3203 = 7U;
	static uint64_t t58 = 50582965599LLU;

	t58 = (((x3201*x3202)<<x3203)%x3204);

	if (t58 != 358570936806681600LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3218 = 2414512U;
	static int8_t x3219 = 11;
	int32_t x3220 = -1;
	uint32_t t59 = 5U;

	t59 = (((x3217*x3218)<<x3219)%x3220);

	if (t59 != 3645014016U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3233 = -1;
	static uint64_t x3236 = 517LLU;
	uint64_t t60 = 582131034LLU;

	t60 = (((x3233*x3234)<<x3235)%x3236);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x3339 = 3;
	static int16_t x3340 = INT16_MAX;
	static uint32_t t61 = 1227U;

	t61 = (((x3337*x3338)<<x3339)%x3340);

	if (t61 != 4U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3341 = -1324973LL;
	int8_t x3342 = -1;
	static uint32_t x3343 = 10U;
	volatile int64_t t62 = -218216458603LL;

	t62 = (((x3341*x3342)<<x3343)%x3344);

	if (t62 != 110LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3358 = INT16_MIN;
	static uint16_t x3359 = 6U;
	int32_t x3360 = INT32_MAX;

	t63 = (((x3357*x3358)<<x3359)%x3360);

	if (t63 != 4194304) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3421 = INT16_MIN;
	uint16_t x3423 = 13U;
	int8_t x3424 = 24;
	volatile int64_t t64 = 609673708939514919LL;

	t64 = (((x3421*x3422)<<x3423)%x3424);

	if (t64 != 16LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3529 = UINT64_MAX;
	static int64_t x3530 = -140779107843LL;
	volatile uint16_t x3531 = 5U;
	volatile int16_t x3532 = -1;
	uint64_t t65 = 9LLU;

	t65 = (((x3529*x3530)<<x3531)%x3532);

	if (t65 != 4504931450976LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3545 = 5876U;
	uint32_t x3546 = UINT32_MAX;
	uint8_t x3548 = UINT8_MAX;
	static uint32_t t66 = 215647U;

	t66 = (((x3545*x3546)<<x3547)%x3548);

	if (t66 != 168U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3573 = -1570;
	volatile int16_t x3574 = INT16_MIN;
	static volatile uint32_t x3575 = 4U;
	volatile int8_t x3576 = 53;
	static volatile int32_t t67 = -6599111;

	t67 = (((x3573*x3574)<<x3575)%x3576);

	if (t67 != 25) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3621 = -1;
	volatile uint32_t x3622 = 60429U;
	static uint8_t x3623 = 4U;
	uint32_t x3624 = 15501778U;
	uint32_t t68 = 0U;

	t68 = (((x3621*x3622)<<x3623)%x3624);

	if (t68 != 7926U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3734 = 1948425LLU;
	uint8_t x3735 = 3U;
	int64_t x3736 = -33703LL;
	volatile uint64_t t69 = 229722678LLU;

	t69 = (((x3733*x3734)<<x3735)%x3736);

	if (t69 != 1021520259000LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3745 = 2U;
	volatile uint64_t x3746 = UINT64_MAX;
	static volatile uint16_t x3747 = 7U;
	uint32_t x3748 = UINT32_MAX;
	volatile uint64_t t70 = 55LLU;

	t70 = (((x3745*x3746)<<x3747)%x3748);

	if (t70 != 4294967040LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3841 = 6284LLU;
	uint32_t x3843 = 4U;
	uint16_t x3844 = 3147U;
	volatile uint64_t t71 = 30670714675687LLU;

	t71 = (((x3841*x3842)<<x3843)%x3844);

	if (t71 != 2057LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3878 = UINT64_MAX;
	int32_t x3879 = 61;
	static uint64_t x3880 = 3079816498941673645LLU;

	t72 = (((x3877*x3878)<<x3879)%x3880);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3969 = INT8_MIN;
	volatile int8_t x3970 = INT8_MIN;
	uint32_t x3971 = 2U;
	volatile int8_t x3972 = -1;
	volatile int32_t t73 = 14;

	t73 = (((x3969*x3970)<<x3971)%x3972);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4085 = UINT64_MAX;
	int8_t x4086 = INT8_MIN;
	int16_t x4087 = 5;
	static uint64_t x4088 = 4994754LLU;
	uint64_t t74 = 219342LLU;

	t74 = (((x4085*x4086)<<x4087)%x4088);

	if (t74 != 4096LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4177 = INT16_MIN;
	uint32_t x4178 = UINT32_MAX;
	uint16_t x4179 = 0U;
	volatile int32_t x4180 = INT32_MIN;

	t75 = (((x4177*x4178)<<x4179)%x4180);

	if (t75 != 32768U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4197 = 4150U;
	uint64_t x4200 = 410348790135920266LLU;
	volatile uint64_t t76 = 1020873069LLU;

	t76 = (((x4197*x4198)<<x4199)%x4200);

	if (t76 != 90505216LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4233 = 0U;
	int16_t x4234 = -1;
	int8_t x4236 = INT8_MIN;
	int32_t t77 = 1;

	t77 = (((x4233*x4234)<<x4235)%x4236);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4249 = 536334509835982LLU;
	static int32_t x4250 = -2987;
	int8_t x4251 = 58;
	int32_t x4252 = INT32_MIN;
	uint64_t t78 = 613LLU;

	t78 = (((x4249*x4250)<<x4251)%x4252);

	if (t78 != 10952754293765046272LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4258 = 15LL;
	static int8_t x4259 = 0;
	static uint8_t x4260 = 6U;

	t79 = (((x4257*x4258)<<x4259)%x4260);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4273 = INT16_MAX;
	int8_t x4275 = 1;
	volatile int64_t x4276 = INT64_MIN;
	volatile int64_t t80 = -31LL;

	t80 = (((x4273*x4274)<<x4275)%x4276);

	if (t80 != 4128642LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x4349 = INT8_MIN;
	static uint64_t x4350 = UINT64_MAX;
	static int32_t x4352 = 28844;
	volatile uint64_t t81 = 38422LLU;

	t81 = (((x4349*x4350)<<x4351)%x4352);

	if (t81 != 128LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4425 = -1;

	t82 = (((x4425*x4426)<<x4427)%x4428);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4497 = UINT64_MAX;
	int32_t x4498 = INT32_MIN;
	volatile int8_t x4499 = 1;
	volatile uint32_t x4500 = 6296U;

	t83 = (((x4497*x4498)<<x4499)%x4500);

	if (t83 != 6088LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4549 = 499173205462087LLU;
	volatile int64_t x4550 = 63631110688821308LL;
	static int8_t x4551 = 62;
	static uint8_t x4552 = 29U;
	volatile uint64_t t84 = 852956435528LLU;

	t84 = (((x4549*x4550)<<x4551)%x4552);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4629 = UINT8_MAX;
	static uint32_t x4630 = 1010024U;
	int8_t x4631 = 1;
	uint8_t x4632 = UINT8_MAX;
	volatile uint32_t t85 = 934572U;

	t85 = (((x4629*x4630)<<x4631)%x4632);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4693 = UINT16_MAX;
	static int8_t x4694 = 0;
	uint16_t x4695 = 7U;
	uint16_t x4696 = 1184U;
	volatile int32_t t86 = -784354;

	t86 = (((x4693*x4694)<<x4695)%x4696);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x4790 = UINT8_MAX;
	int8_t x4792 = 1;
	uint64_t t87 = 824656196508LLU;

	t87 = (((x4789*x4790)<<x4791)%x4792);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4845 = INT8_MIN;
	uint16_t x4847 = 0U;
	uint32_t x4848 = 4001856U;
	uint32_t t88 = 1680209124U;

	t88 = (((x4845*x4846)<<x4847)%x4848);

	if (t88 != 16384U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4917 = 221U;
	int8_t x4918 = INT8_MIN;
	uint8_t x4919 = 21U;
	uint32_t t89 = 1470885U;

	t89 = (((x4917*x4918)<<x4919)%x4920);

	if (t89 != 9U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5029 = INT32_MIN;
	uint64_t x5030 = UINT64_MAX;
	int16_t x5032 = INT16_MIN;
	volatile uint64_t t90 = 379286988873564124LLU;

	t90 = (((x5029*x5030)<<x5031)%x5032);

	if (t90 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5233 = 140U;
	int16_t x5234 = 3;
	int64_t x5236 = INT64_MIN;
	int64_t t91 = -799200797699508LL;

	t91 = (((x5233*x5234)<<x5235)%x5236);

	if (t91 != 1680LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5261 = -245308701240988LL;
	int8_t x5263 = 0;
	static uint64_t t92 = 837230606003105LLU;

	t92 = (((x5261*x5262)<<x5263)%x5264);

	if (t92 != 16582215609202768LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5333 = 3089467709780982544LLU;
	int8_t x5334 = -9;
	uint8_t x5335 = 13U;
	int16_t x5336 = 2923;
	volatile uint64_t t93 = 7766191LLU;

	t93 = (((x5333*x5334)<<x5335)%x5336);

	if (t93 != 2497LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5373 = INT32_MIN;
	volatile uint32_t x5375 = 1U;
	static uint64_t x5376 = 309619397981897LLU;
	uint64_t t94 = 157820423239505LLU;

	t94 = (((x5373*x5374)<<x5375)%x5376);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x5421 = INT8_MAX;
	int8_t x5423 = 0;
	volatile uint16_t x5424 = 647U;
	uint32_t t95 = 181711547U;

	t95 = (((x5421*x5422)<<x5423)%x5424);

	if (t95 != 9U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5509 = -1281;
	uint64_t x5510 = UINT64_MAX;
	volatile uint16_t x5511 = 1U;
	int8_t x5512 = INT8_MAX;
	volatile uint64_t t96 = 17875790844794179LLU;

	t96 = (((x5509*x5510)<<x5511)%x5512);

	if (t96 != 22LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x5526 = 11U;
	static uint8_t x5527 = 14U;
	uint32_t x5528 = UINT32_MAX;
	volatile uint32_t t97 = 97656U;

	t97 = (((x5525*x5526)<<x5527)%x5528);

	if (t97 != 2684354560U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x5565 = 40U;
	uint64_t x5566 = 4894400552LLU;
	static uint8_t x5567 = 6U;
	int64_t x5568 = 21LL;

	t98 = (((x5565*x5566)<<x5567)%x5568);

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5701 = -9704;
	uint32_t x5702 = 0U;
	int8_t x5704 = -1;

	t99 = (((x5701*x5702)<<x5703)%x5704);

	if (t99 != 0U) { NG(); } else { ; }
	
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

