#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x44 = 42;
volatile uint8_t x95 = 6U;
int16_t x234 = 0;
uint16_t x282 = 7U;
int8_t x284 = -1;
int32_t x435 = 15;
uint16_t x479 = 1U;
int32_t x633 = 57;
int32_t x712 = -2341;
static volatile int32_t t11 = 266044;
uint16_t x715 = 7U;
uint8_t x806 = UINT8_MAX;
static volatile int32_t x807 = 0;
int64_t t16 = -66626421205LL;
static volatile int16_t x1123 = 0;
static int64_t x1124 = 24624141LL;
volatile uint16_t x1237 = 13969U;
static uint64_t x1354 = 8258466062741808LLU;
int8_t x1356 = INT8_MIN;
uint64_t x1432 = UINT64_MAX;
volatile int8_t x1608 = INT8_MAX;
uint16_t x1815 = 27U;
volatile uint8_t x1828 = UINT8_MAX;
static int8_t x1912 = INT8_MAX;
int64_t x1980 = -1LL;
uint8_t x2143 = 4U;
volatile int32_t x2297 = INT32_MIN;
static volatile uint32_t x2300 = 30242619U;
int32_t x2390 = 301831;
static uint16_t x2470 = 24U;
int64_t t40 = -1LL;
int8_t x2490 = 2;
int16_t x2542 = 12471;
uint8_t x2725 = UINT8_MAX;
static uint32_t x2782 = UINT32_MAX;
static volatile int8_t x2784 = INT8_MIN;
int16_t x2790 = 436;
uint16_t x2858 = 0U;
volatile uint64_t x2880 = UINT64_MAX;
static volatile uint64_t t48 = 5700840752400997605LLU;
uint8_t x2903 = 12U;
volatile int16_t x3127 = 12;
static int16_t x3128 = 46;
volatile uint64_t t51 = 122396122551LLU;
volatile uint64_t t52 = 61732LLU;
uint32_t x3415 = 3U;
uint32_t x3471 = 0U;
int64_t x3506 = 7039107005221LL;
volatile int64_t t56 = 1LL;
int8_t x3515 = 0;
int32_t x3517 = 55770480;
volatile uint16_t x3570 = UINT16_MAX;
uint32_t x3597 = 3957150U;
static int8_t x3600 = INT8_MIN;
int64_t x3620 = INT64_MAX;
int64_t t61 = -1783326LL;
int8_t x3642 = INT8_MAX;
static uint16_t x3661 = UINT16_MAX;
static int32_t t64 = -1004;
uint16_t x3765 = 204U;
int8_t x3788 = INT8_MIN;
uint8_t x3882 = 57U;
static volatile uint32_t t68 = 3174570U;
int16_t x3929 = 5;
volatile int16_t x3931 = 58;
volatile int64_t t69 = -3253LL;
static uint32_t x4123 = 1U;
volatile uint16_t x4135 = 2U;
static int64_t x4136 = -1LL;
uint8_t x4140 = UINT8_MAX;
int16_t x4294 = INT16_MAX;
uint64_t t76 = 1939640253LLU;
volatile int8_t x4551 = 1;
volatile int32_t t79 = 6575;
int32_t t81 = -113420;
uint64_t x4673 = 16309LLU;
int8_t x4691 = 1;
int64_t x4692 = INT64_MIN;
int32_t x4773 = INT32_MIN;
volatile uint64_t x4826 = UINT64_MAX;
static volatile uint8_t x4827 = 9U;
int16_t x4877 = INT16_MIN;
uint64_t x4878 = UINT64_MAX;
volatile uint8_t x4879 = 6U;
int32_t x4880 = -1;
uint32_t t88 = 141621007U;
uint64_t x4910 = UINT64_MAX;
uint32_t x4968 = UINT32_MAX;
volatile int64_t x5139 = 12LL;
static uint32_t x5242 = UINT32_MAX;
static uint8_t x5406 = 0U;
uint8_t x5467 = 7U;
static int32_t x5474 = 372816273;
volatile uint8_t x5510 = 0U;
uint32_t x5530 = 105U;
uint32_t x5549 = UINT32_MAX;
volatile int16_t x5742 = 0;


void f0(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = 0U;
	int64_t t0 = 149876042668873757LL;

	t0 = (x41&((x42>>x43)&x44));

	if (t0 != 42LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile uint16_t x46 = 5U;
	static int16_t x47 = 1;
	int8_t x48 = 18;
	volatile int32_t t1 = -229;

	t1 = (x45&((x46>>x47)&x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x77 = 1U;
	volatile int16_t x78 = INT16_MAX;
	static int16_t x79 = 1;
	uint32_t x80 = 31140126U;
	volatile uint32_t t2 = 1U;

	t2 = (x77&((x78>>x79)&x80));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x93 = INT32_MIN;
	static uint16_t x94 = 1073U;
	uint8_t x96 = 3U;
	volatile int32_t t3 = -3016;

	t3 = (x93&((x94>>x95)&x96));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x233 = UINT8_MAX;
	uint16_t x235 = 1U;
	static int8_t x236 = INT8_MIN;
	int32_t t4 = 13;

	t4 = (x233&((x234>>x235)&x236));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x261 = 5;
	uint8_t x262 = 0U;
	static uint8_t x263 = 1U;
	int64_t x264 = -29618927385LL;
	int64_t t5 = 11916899448300LL;

	t5 = (x261&((x262>>x263)&x264));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x281 = -1;
	uint8_t x283 = 0U;
	volatile int32_t t6 = -2521;

	t6 = (x281&((x282>>x283)&x284));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x433 = INT16_MAX;
	uint16_t x434 = UINT16_MAX;
	int8_t x436 = INT8_MIN;
	volatile int32_t t7 = -9599;

	t7 = (x433&((x434>>x435)&x436));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x477 = 2108918940705LL;
	int8_t x478 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	int64_t t8 = -31252051586310LL;

	t8 = (x477&((x478>>x479)&x480));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x549 = -630078LL;
	static int8_t x550 = INT8_MAX;
	volatile uint8_t x551 = 14U;
	static uint32_t x552 = UINT32_MAX;
	int64_t t9 = 202938LL;

	t9 = (x549&((x550>>x551)&x552));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x634 = UINT64_MAX;
	uint16_t x635 = 23U;
	int16_t x636 = INT16_MIN;
	uint64_t t10 = 4664347384141157934LLU;

	t10 = (x633&((x634>>x635)&x636));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x709 = INT16_MAX;
	int8_t x710 = 14;
	uint8_t x711 = 30U;

	t11 = (x709&((x710>>x711)&x712));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x713 = 106480574610085LLU;
	int64_t x714 = INT64_MAX;
	int64_t x716 = INT64_MAX;
	volatile uint64_t t12 = 218713LLU;

	t12 = (x713&((x714>>x715)&x716));

	if (t12 != 106480574610085LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x805 = INT64_MIN;
	uint32_t x808 = UINT32_MAX;
	int64_t t13 = 1985LL;

	t13 = (x805&((x806>>x807)&x808));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x817 = UINT16_MAX;
	int32_t x818 = INT32_MAX;
	volatile int8_t x819 = 7;
	int32_t x820 = INT32_MIN;
	volatile int32_t t14 = -986;

	t14 = (x817&((x818>>x819)&x820));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x837 = -15736;
	int8_t x838 = INT8_MAX;
	uint32_t x839 = 1U;
	int16_t x840 = INT16_MIN;
	static volatile int32_t t15 = 70139451;

	t15 = (x837&((x838>>x839)&x840));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x937 = -5LL;
	static int64_t x938 = INT64_MAX;
	static int16_t x939 = 4;
	static volatile int64_t x940 = INT64_MIN;

	t16 = (x937&((x938>>x939)&x940));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1121 = 18598LLU;
	uint64_t x1122 = 30506421606LLU;
	volatile uint64_t t17 = 104LLU;

	t17 = (x1121&((x1122>>x1123)&x1124));

	if (t17 != 2052LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x1209 = UINT8_MAX;
	uint64_t x1210 = 583142179LLU;
	uint8_t x1211 = 7U;
	uint16_t x1212 = UINT16_MAX;
	volatile uint64_t t18 = 12492903930LLU;

	t18 = (x1209&((x1210>>x1211)&x1212));

	if (t18 != 22LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1238 = 0LLU;
	volatile uint16_t x1239 = 0U;
	volatile uint8_t x1240 = 8U;
	static uint64_t t19 = 881890354LLU;

	t19 = (x1237&((x1238>>x1239)&x1240));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1265 = -1;
	static volatile int8_t x1266 = INT8_MAX;
	uint32_t x1267 = 8U;
	static int32_t x1268 = INT32_MIN;
	volatile int32_t t20 = -98;

	t20 = (x1265&((x1266>>x1267)&x1268));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1301 = -1;
	uint64_t x1302 = 1468997147365624LLU;
	volatile uint8_t x1303 = 1U;
	volatile int64_t x1304 = 3896LL;
	volatile uint64_t t21 = 10398LLU;

	t21 = (x1301&((x1302>>x1303)&x1304));

	if (t21 != 2104LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1353 = UINT8_MAX;
	uint8_t x1355 = 5U;
	uint64_t t22 = 58413317576333LLU;

	t22 = (x1353&((x1354>>x1355)&x1356));

	if (t22 != 128LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1429 = -1LL;
	uint64_t x1430 = UINT64_MAX;
	uint64_t x1431 = 57LLU;
	uint64_t t23 = 1014897633560LLU;

	t23 = (x1429&((x1430>>x1431)&x1432));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1565 = -1;
	volatile uint32_t x1566 = UINT32_MAX;
	int8_t x1567 = 0;
	volatile int16_t x1568 = -1;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x1565&((x1566>>x1567)&x1568));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1605 = 70LLU;
	int32_t x1606 = INT32_MAX;
	uint8_t x1607 = 14U;
	volatile uint64_t t25 = 115LLU;

	t25 = (x1605&((x1606>>x1607)&x1608));

	if (t25 != 70LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1701 = -1;
	uint32_t x1702 = UINT32_MAX;
	int32_t x1703 = 1;
	static int64_t x1704 = -1LL;
	static int64_t t26 = 3492701447268LL;

	t26 = (x1701&((x1702>>x1703)&x1704));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1813 = 9706094358458833LLU;
	uint8_t x1814 = 9U;
	int16_t x1816 = 6473;
	volatile uint64_t t27 = 107813969LLU;

	t27 = (x1813&((x1814>>x1815)&x1816));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1825 = 1;
	uint32_t x1826 = 1690982U;
	int8_t x1827 = 0;
	volatile uint32_t t28 = 294U;

	t28 = (x1825&((x1826>>x1827)&x1828));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1869 = INT64_MIN;
	uint64_t x1870 = 530284547LLU;
	volatile uint16_t x1871 = 4U;
	int16_t x1872 = -1;
	volatile uint64_t t29 = 1479347259LLU;

	t29 = (x1869&((x1870>>x1871)&x1872));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1881 = INT16_MIN;
	static uint64_t x1882 = 5043LLU;
	static int64_t x1883 = 0LL;
	int64_t x1884 = 133131994361LL;
	volatile uint64_t t30 = 269678056988521LLU;

	t30 = (x1881&((x1882>>x1883)&x1884));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1909 = 113875519203001LLU;
	uint64_t x1910 = 2668144LLU;
	uint16_t x1911 = 0U;
	volatile uint64_t t31 = 45674901585274972LLU;

	t31 = (x1909&((x1910>>x1911)&x1912));

	if (t31 != 48LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1949 = -1;
	uint64_t x1950 = 62LLU;
	uint8_t x1951 = 30U;
	int64_t x1952 = INT64_MAX;
	uint64_t t32 = 8486648684760803LLU;

	t32 = (x1949&((x1950>>x1951)&x1952));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1977 = -1LL;
	volatile uint64_t x1978 = 2245311LLU;
	uint8_t x1979 = 29U;
	uint64_t t33 = 24820519397141LLU;

	t33 = (x1977&((x1978>>x1979)&x1980));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2141 = 63636U;
	uint8_t x2142 = 1U;
	volatile int64_t x2144 = 4538002455324LL;
	int64_t t34 = -141137220624LL;

	t34 = (x2141&((x2142>>x2143)&x2144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2169 = 32027LLU;
	int16_t x2170 = 5760;
	int8_t x2171 = 0;
	static int8_t x2172 = -20;
	volatile uint64_t t35 = 4645292642225757221LLU;

	t35 = (x2169&((x2170>>x2171)&x2172));

	if (t35 != 5120LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2173 = INT16_MIN;
	int64_t x2174 = 9926471518734LL;
	int16_t x2175 = 1;
	uint16_t x2176 = 8092U;
	static int64_t t36 = 713625LL;

	t36 = (x2173&((x2174>>x2175)&x2176));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2298 = UINT8_MAX;
	int64_t x2299 = 4LL;
	uint32_t t37 = 14848U;

	t37 = (x2297&((x2298>>x2299)&x2300));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2345 = 3039687843LL;
	uint16_t x2346 = UINT16_MAX;
	volatile int64_t x2347 = 3LL;
	uint16_t x2348 = 1U;
	int64_t t38 = -316913LL;

	t38 = (x2345&((x2346>>x2347)&x2348));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2389 = UINT64_MAX;
	static int8_t x2391 = 10;
	int64_t x2392 = INT64_MIN;
	uint64_t t39 = 2214210502LLU;

	t39 = (x2389&((x2390>>x2391)&x2392));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2469 = INT16_MIN;
	static int8_t x2471 = 0;
	int64_t x2472 = INT64_MIN;

	t40 = (x2469&((x2470>>x2471)&x2472));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2489 = 3281282U;
	int16_t x2491 = 0;
	int8_t x2492 = INT8_MAX;
	static uint32_t t41 = 845058U;

	t41 = (x2489&((x2490>>x2491)&x2492));

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2497 = UINT16_MAX;
	int16_t x2498 = INT16_MAX;
	int16_t x2499 = 5;
	int8_t x2500 = INT8_MAX;
	volatile int32_t t42 = 2046179;

	t42 = (x2497&((x2498>>x2499)&x2500));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2541 = UINT16_MAX;
	static int32_t x2543 = 0;
	int32_t x2544 = INT32_MIN;
	int32_t t43 = 0;

	t43 = (x2541&((x2542>>x2543)&x2544));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2726 = 5LL;
	volatile uint8_t x2727 = 47U;
	int16_t x2728 = -1;
	int64_t t44 = -17234143597262185LL;

	t44 = (x2725&((x2726>>x2727)&x2728));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2781 = INT8_MIN;
	volatile uint16_t x2783 = 2U;
	volatile uint32_t t45 = 26554862U;

	t45 = (x2781&((x2782>>x2783)&x2784));

	if (t45 != 1073741696U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2789 = 8971849790LLU;
	uint8_t x2791 = 9U;
	volatile uint32_t x2792 = 59U;
	uint64_t t46 = 923138LLU;

	t46 = (x2789&((x2790>>x2791)&x2792));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x2857 = UINT32_MAX;
	uint32_t x2859 = 15U;
	int32_t x2860 = 5411949;
	volatile uint32_t t47 = 1915518125U;

	t47 = (x2857&((x2858>>x2859)&x2860));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x2877 = -1;
	static int8_t x2878 = 1;
	static uint16_t x2879 = 0U;

	t48 = (x2877&((x2878>>x2879)&x2880));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2901 = -1;
	int32_t x2902 = 3221376;
	uint32_t x2904 = 922357625U;
	uint32_t t49 = 36U;

	t49 = (x2901&((x2902>>x2903)&x2904));

	if (t49 != 784U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x3125 = UINT16_MAX;
	static int32_t x3126 = 1630;
	volatile int32_t t50 = 1990;

	t50 = (x3125&((x3126>>x3127)&x3128));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3185 = INT16_MAX;
	static uint64_t x3186 = 9863033433LLU;
	uint16_t x3187 = 1U;
	uint16_t x3188 = 30926U;

	t51 = (x3185&((x3186>>x3187)&x3188));

	if (t51 != 30732LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3369 = 26382U;
	volatile uint64_t x3370 = 13286295101187LLU;
	int8_t x3371 = 39;
	volatile uint16_t x3372 = UINT16_MAX;

	t52 = (x3369&((x3370>>x3371)&x3372));

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3413 = -1LL;
	int8_t x3414 = 36;
	int16_t x3416 = 52;
	volatile int64_t t53 = 4250372398LL;

	t53 = (x3413&((x3414>>x3415)&x3416));

	if (t53 != 4LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3425 = INT32_MIN;
	static volatile int64_t x3426 = 7609735616LL;
	int16_t x3427 = 41;
	int32_t x3428 = -1;
	static int64_t t54 = -284716762586295LL;

	t54 = (x3425&((x3426>>x3427)&x3428));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3469 = -1LL;
	int64_t x3470 = 7663LL;
	volatile int32_t x3472 = INT32_MIN;
	int64_t t55 = 18111685833LL;

	t55 = (x3469&((x3470>>x3471)&x3472));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3505 = -1;
	int8_t x3507 = 5;
	int8_t x3508 = 1;

	t56 = (x3505&((x3506>>x3507)&x3508));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3513 = 89960656U;
	volatile int64_t x3514 = INT64_MAX;
	int64_t x3516 = INT64_MIN;
	int64_t t57 = 3541916677547389063LL;

	t57 = (x3513&((x3514>>x3515)&x3516));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3518 = 0U;
	volatile uint16_t x3519 = 9U;
	uint16_t x3520 = 739U;
	uint32_t t58 = 2968U;

	t58 = (x3517&((x3518>>x3519)&x3520));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3569 = 19U;
	uint16_t x3571 = 27U;
	static volatile int8_t x3572 = INT8_MIN;
	volatile int32_t t59 = -30063;

	t59 = (x3569&((x3570>>x3571)&x3572));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3598 = INT64_MAX;
	uint8_t x3599 = 0U;
	volatile int64_t t60 = -11781LL;

	t60 = (x3597&((x3598>>x3599)&x3600));

	if (t60 != 3957120LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3617 = UINT16_MAX;
	int8_t x3618 = 0;
	volatile uint8_t x3619 = 0U;

	t61 = (x3617&((x3618>>x3619)&x3620));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3641 = 1U;
	int32_t x3643 = 26;
	int16_t x3644 = INT16_MAX;
	volatile int32_t t62 = -5521137;

	t62 = (x3641&((x3642>>x3643)&x3644));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3662 = 526150751U;
	static int64_t x3663 = 1LL;
	int32_t x3664 = INT32_MAX;
	uint32_t t63 = 1214392U;

	t63 = (x3661&((x3662>>x3663)&x3664));

	if (t63 != 13871U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3729 = 1443U;
	uint16_t x3730 = 2U;
	static int8_t x3731 = 2;
	uint8_t x3732 = 0U;

	t64 = (x3729&((x3730>>x3731)&x3732));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3766 = 7342U;
	uint64_t x3767 = 30LLU;
	static int64_t x3768 = -1LL;
	int64_t t65 = 284239652446144256LL;

	t65 = (x3765&((x3766>>x3767)&x3768));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x3785 = INT64_MIN;
	volatile int64_t x3786 = INT64_MAX;
	int32_t x3787 = 0;
	int64_t t66 = -1624520738028LL;

	t66 = (x3785&((x3786>>x3787)&x3788));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3861 = -285453;
	int32_t x3862 = INT32_MAX;
	uint16_t x3863 = 6U;
	uint8_t x3864 = 115U;
	int32_t t67 = 0;

	t67 = (x3861&((x3862>>x3863)&x3864));

	if (t67 != 115) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3881 = UINT32_MAX;
	volatile uint8_t x3883 = 25U;
	static volatile int16_t x3884 = -1;

	t68 = (x3881&((x3882>>x3883)&x3884));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3930 = 3LL;
	int32_t x3932 = INT32_MAX;

	t69 = (x3929&((x3930>>x3931)&x3932));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4045 = INT16_MIN;
	static uint32_t x4046 = 160U;
	int8_t x4047 = 1;
	int32_t x4048 = 49980;
	volatile uint32_t t70 = 54U;

	t70 = (x4045&((x4046>>x4047)&x4048));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4121 = INT8_MIN;
	volatile int8_t x4122 = 0;
	uint32_t x4124 = 110156843U;
	uint32_t t71 = 1931739482U;

	t71 = (x4121&((x4122>>x4123)&x4124));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x4133 = INT16_MAX;
	int64_t x4134 = 211LL;
	volatile int64_t t72 = -2996816838948717941LL;

	t72 = (x4133&((x4134>>x4135)&x4136));

	if (t72 != 52LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4137 = INT16_MIN;
	int64_t x4138 = 703455465LL;
	int8_t x4139 = 0;
	static int64_t t73 = 248571533566980LL;

	t73 = (x4137&((x4138>>x4139)&x4140));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4205 = -35;
	int64_t x4206 = 588863LL;
	int16_t x4207 = 6;
	int8_t x4208 = INT8_MAX;
	static int64_t t74 = 6906LL;

	t74 = (x4205&((x4206>>x4207)&x4208));

	if (t74 != 80LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4293 = 10;
	int16_t x4295 = 0;
	int32_t x4296 = -21;
	volatile int32_t t75 = -1293;

	t75 = (x4293&((x4294>>x4295)&x4296));

	if (t75 != 10) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4301 = 9;
	static uint64_t x4302 = 723629194924770694LLU;
	static uint8_t x4303 = 44U;
	int32_t x4304 = INT32_MAX;

	t76 = (x4301&((x4302>>x4303)&x4304));

	if (t76 != 9LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4365 = INT16_MIN;
	volatile uint64_t x4366 = 4371840400599850LLU;
	int8_t x4367 = 41;
	int8_t x4368 = INT8_MAX;
	static uint64_t t77 = 95302217980559728LLU;

	t77 = (x4365&((x4366>>x4367)&x4368));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4469 = -1;
	int8_t x4470 = INT8_MAX;
	uint32_t x4471 = 1U;
	static int16_t x4472 = INT16_MIN;
	volatile int32_t t78 = 130806;

	t78 = (x4469&((x4470>>x4471)&x4472));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4549 = INT32_MIN;
	int16_t x4550 = 9737;
	int32_t x4552 = INT32_MIN;

	t79 = (x4549&((x4550>>x4551)&x4552));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4605 = 110U;
	static int16_t x4606 = 3;
	int8_t x4607 = 0;
	int64_t x4608 = -22LL;
	int64_t t80 = -12LL;

	t80 = (x4605&((x4606>>x4607)&x4608));

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x4621 = -9;
	uint8_t x4622 = 29U;
	volatile int8_t x4623 = 1;
	int32_t x4624 = -19907;

	t81 = (x4621&((x4622>>x4623)&x4624));

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4653 = INT16_MAX;
	uint8_t x4654 = UINT8_MAX;
	uint8_t x4655 = 28U;
	int16_t x4656 = -1;
	static volatile int32_t t82 = -112409;

	t82 = (x4653&((x4654>>x4655)&x4656));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x4674 = 3858017U;
	volatile uint8_t x4675 = 5U;
	static int32_t x4676 = INT32_MAX;
	uint64_t t83 = 19285LLU;

	t83 = (x4673&((x4674>>x4675)&x4676));

	if (t83 != 5809LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4689 = INT8_MIN;
	static uint16_t x4690 = 8058U;
	int64_t t84 = 7828LL;

	t84 = (x4689&((x4690>>x4691)&x4692));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4774 = 4741U;
	uint8_t x4775 = 3U;
	int8_t x4776 = INT8_MIN;
	volatile uint32_t t85 = 8728U;

	t85 = (x4773&((x4774>>x4775)&x4776));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4825 = INT8_MIN;
	int8_t x4828 = INT8_MIN;
	volatile uint64_t t86 = 493222LLU;

	t86 = (x4825&((x4826>>x4827)&x4828));

	if (t86 != 36028797018963840LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t t87 = 27493141728410LLU;

	t87 = (x4877&((x4878>>x4879)&x4880));

	if (t87 != 288230376151678976LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x4897 = INT16_MAX;
	static uint32_t x4898 = 3449610U;
	uint8_t x4899 = 18U;
	int32_t x4900 = INT32_MAX;

	t88 = (x4897&((x4898>>x4899)&x4900));

	if (t88 != 13U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4909 = -10;
	volatile uint8_t x4911 = 1U;
	volatile int8_t x4912 = INT8_MIN;
	volatile uint64_t t89 = 2643559150493953LLU;

	t89 = (x4909&((x4910>>x4911)&x4912));

	if (t89 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4965 = INT64_MAX;
	uint8_t x4966 = 3U;
	uint64_t x4967 = 20LLU;
	int64_t t90 = -788173636528518LL;

	t90 = (x4965&((x4966>>x4967)&x4968));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x5137 = INT16_MIN;
	volatile uint16_t x5138 = 6849U;
	int64_t x5140 = -1LL;
	volatile int64_t t91 = 7422475780489211LL;

	t91 = (x5137&((x5138>>x5139)&x5140));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x5241 = INT32_MIN;
	uint8_t x5243 = 30U;
	static int16_t x5244 = INT16_MAX;
	volatile uint32_t t92 = 18U;

	t92 = (x5241&((x5242>>x5243)&x5244));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5405 = INT16_MAX;
	uint32_t x5407 = 2U;
	static int32_t x5408 = -373322;
	volatile int32_t t93 = -13;

	t93 = (x5405&((x5406>>x5407)&x5408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5465 = INT16_MIN;
	uint8_t x5466 = 83U;
	int64_t x5468 = INT64_MIN;
	volatile int64_t t94 = -27506751868057056LL;

	t94 = (x5465&((x5466>>x5467)&x5468));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5473 = UINT16_MAX;
	int32_t x5475 = 19;
	uint16_t x5476 = UINT16_MAX;
	int32_t t95 = -362;

	t95 = (x5473&((x5474>>x5475)&x5476));

	if (t95 != 711) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5509 = 9569LL;
	volatile int32_t x5511 = 0;
	uint32_t x5512 = 8574U;
	volatile int64_t t96 = -380079061264421LL;

	t96 = (x5509&((x5510>>x5511)&x5512));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5529 = INT64_MAX;
	static int8_t x5531 = 28;
	static int16_t x5532 = INT16_MIN;
	static volatile int64_t t97 = 25447522421679014LL;

	t97 = (x5529&((x5530>>x5531)&x5532));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5550 = UINT64_MAX;
	int8_t x5551 = 0;
	uint64_t x5552 = 23580112LLU;
	uint64_t t98 = 4LLU;

	t98 = (x5549&((x5550>>x5551)&x5552));

	if (t98 != 23580112LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5741 = 30923952U;
	int8_t x5743 = 1;
	uint32_t x5744 = 5688U;
	volatile uint32_t t99 = 962U;

	t99 = (x5741&((x5742>>x5743)&x5744));

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

