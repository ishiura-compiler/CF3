#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x114 = 1U;
volatile uint32_t t0 = 6418395U;
uint8_t x145 = UINT8_MAX;
uint32_t x148 = 20U;
uint64_t x151 = 144898071593491686LLU;
int32_t x358 = -1;
uint32_t x360 = 7U;
int16_t x377 = 4;
int8_t x378 = 1;
static int32_t x609 = INT32_MAX;
static uint64_t t8 = 4540049576LLU;
int32_t t10 = 132788802;
volatile int64_t x789 = INT64_MIN;
uint8_t x792 = 5U;
static int32_t x807 = -1;
volatile uint64_t x847 = UINT64_MAX;
volatile uint8_t x1008 = 20U;
uint8_t x1138 = 110U;
int32_t x1277 = 3402102;
volatile int64_t t18 = -3463455673600411063LL;
int64_t x1342 = INT64_MIN;
static int16_t x1367 = INT16_MIN;
int8_t x1577 = -1;
uint8_t x1597 = UINT8_MAX;
uint8_t x1712 = 4U;
uint32_t t24 = 76118U;
uint64_t t25 = 6235298519LLU;
int8_t x1957 = -5;
static int8_t x1973 = 1;
int8_t x1989 = INT8_MAX;
volatile uint32_t x2068 = 26U;
volatile int32_t t30 = -1;
static uint8_t x2090 = 74U;
static volatile uint64_t x2091 = 10193577540452LLU;
uint8_t x2092 = 2U;
static volatile uint64_t t31 = 24LLU;
static int32_t x2104 = 0;
int8_t x2157 = INT8_MAX;
int16_t x2201 = INT16_MIN;
uint8_t x2209 = 6U;
volatile int8_t x2215 = INT8_MIN;
static int8_t x2337 = INT8_MIN;
uint8_t x2340 = 23U;
int8_t x2424 = 0;
volatile uint8_t x2514 = 1U;
uint64_t x2515 = 170901015469LLU;
static uint64_t t41 = 2106282057397LLU;
int8_t x2534 = 0;
static int8_t x2535 = -1;
int16_t x2553 = -114;
uint8_t x2554 = 0U;
int8_t x2659 = -1;
static volatile int16_t x3125 = -819;
uint64_t t52 = 234167LLU;
int64_t x3183 = -1LL;
int8_t x3204 = 1;
int32_t x3219 = -897;
volatile int8_t x3227 = INT8_MIN;
int16_t x3249 = INT16_MIN;
volatile int64_t x3279 = -7495744467882LL;
int8_t x3302 = -1;
volatile int32_t x3387 = -496092594;
static volatile int8_t x3388 = 1;
int8_t x3492 = 3;
uint8_t x3498 = UINT8_MAX;
int32_t t65 = 347;
int32_t x3507 = -661;
int32_t t68 = -117588;
int8_t x3578 = -1;
volatile int32_t t71 = -9781;
static uint64_t t73 = 464826LLU;
static volatile int32_t t74 = -11070216;
uint16_t x3817 = UINT16_MAX;
static int32_t x3818 = -1;
static volatile int8_t x3837 = INT8_MIN;
static int16_t x4106 = INT16_MIN;
volatile int16_t x4366 = INT16_MIN;
int16_t x4647 = INT16_MIN;
volatile int8_t x4726 = INT8_MIN;
int8_t x4813 = -7;
uint64_t x4838 = 47603910LLU;
uint32_t x5001 = 475U;
uint32_t x5003 = UINT32_MAX;
static uint8_t x5004 = 14U;
uint32_t t88 = 7214963U;
static int32_t x5021 = INT32_MIN;
static uint8_t x5024 = 3U;
uint32_t t89 = 233U;
int32_t x5174 = -204047427;
volatile int64_t x5175 = -1LL;
int64_t x5253 = INT64_MIN;
volatile int8_t x5255 = -2;
static uint64_t x5256 = 2LLU;
uint16_t x5421 = 7U;
int64_t x5434 = -1LL;
volatile int8_t x5588 = 0;
int8_t x5774 = -1;
int8_t x5775 = -1;
volatile int32_t t99 = -3220544;


void f0(void) {
	volatile uint32_t x113 = 6829859U;
	uint32_t x115 = UINT32_MAX;
	uint16_t x116 = 0U;

	t0 = (((x113<x114)-x115)<<x116);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x146 = -1;
	uint64_t x147 = 5463751953655LLU;
	volatile uint64_t t1 = 4LLU;

	t1 = (((x145<x146)-x147)<<x148);

	if (t1 != 12717584905153806336LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	uint8_t x152 = 3U;
	volatile uint64_t t2 = 192407LLU;

	t2 = (((x149<x150)-x151)<<x152);

	if (t2 != 17287559500961618136LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 3U;
	volatile int32_t t3 = -212486;

	t3 = (((x185<x186)-x187)<<x188);

	if (t3 != 262144) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x357 = UINT64_MAX;
	int32_t x359 = -51775;
	int32_t t4 = 11509089;

	t4 = (((x357<x358)-x359)<<x360);

	if (t4 != 6627200) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x379 = 248033550477630496LLU;
	volatile uint32_t x380 = 1U;
	volatile uint64_t t5 = 2138958547750452LLU;

	t5 = (((x377<x378)-x379)<<x380);

	if (t5 != 17950676972754290624LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x501 = INT32_MIN;
	int64_t x502 = INT64_MIN;
	static int8_t x503 = INT8_MIN;
	volatile uint16_t x504 = 2U;
	volatile int32_t t6 = -40605431;

	t6 = (((x501<x502)-x503)<<x504);

	if (t6 != 512) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x549 = -1;
	uint64_t x550 = UINT64_MAX;
	static uint32_t x551 = 109U;
	uint8_t x552 = 26U;
	uint32_t t7 = 545305609U;

	t7 = (((x549<x550)-x551)<<x552);

	if (t7 != 1275068416U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x610 = -1;
	uint64_t x611 = UINT64_MAX;
	static int64_t x612 = 45LL;

	t8 = (((x609<x610)-x611)<<x612);

	if (t8 != 35184372088832LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x617 = INT16_MAX;
	static uint8_t x618 = 36U;
	uint64_t x619 = 6LLU;
	static int16_t x620 = 6;
	uint64_t t9 = 162736448LLU;

	t9 = (((x617<x618)-x619)<<x620);

	if (t9 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x737 = INT32_MIN;
	static int16_t x738 = 205;
	uint8_t x739 = 1U;
	int64_t x740 = 0LL;

	t10 = (((x737<x738)-x739)<<x740);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x790 = 22066U;
	uint64_t x791 = 9642LLU;
	volatile uint64_t t11 = 81743605230144611LLU;

	t11 = (((x789<x790)-x791)<<x792);

	if (t11 != 18446744073709243104LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x805 = 7U;
	int32_t x806 = -1;
	int16_t x808 = 0;
	volatile int32_t t12 = 0;

	t12 = (((x805<x806)-x807)<<x808);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x829 = -1;
	static int16_t x830 = INT16_MIN;
	uint8_t x831 = 0U;
	int64_t x832 = 2LL;
	volatile int32_t t13 = -1;

	t13 = (((x829<x830)-x831)<<x832);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x845 = -133647553300749733LL;
	static int16_t x846 = 21;
	volatile int8_t x848 = 13;
	uint64_t t14 = 4147LLU;

	t14 = (((x845<x846)-x847)<<x848);

	if (t14 != 16384LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1005 = 19U;
	uint8_t x1006 = 11U;
	uint8_t x1007 = 0U;
	int32_t t15 = 772507;

	t15 = (((x1005<x1006)-x1007)<<x1008);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1137 = 68;
	int16_t x1139 = -1;
	int8_t x1140 = 0;
	static volatile int32_t t16 = -1491121;

	t16 = (((x1137<x1138)-x1139)<<x1140);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1193 = UINT16_MAX;
	uint32_t x1194 = UINT32_MAX;
	uint16_t x1195 = 1U;
	uint8_t x1196 = 0U;
	int32_t t17 = 15715992;

	t17 = (((x1193<x1194)-x1195)<<x1196);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1278 = INT32_MIN;
	static int64_t x1279 = -1LL;
	uint16_t x1280 = 3U;

	t18 = (((x1277<x1278)-x1279)<<x1280);

	if (t18 != 8LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1341 = 42U;
	int8_t x1343 = 0;
	static uint8_t x1344 = 31U;
	volatile int32_t t19 = 24631672;

	t19 = (((x1341<x1342)-x1343)<<x1344);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1365 = INT64_MIN;
	volatile int32_t x1366 = -63;
	int32_t x1368 = 1;
	static volatile int32_t t20 = -6934642;

	t20 = (((x1365<x1366)-x1367)<<x1368);

	if (t20 != 65538) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1578 = INT8_MIN;
	uint32_t x1579 = UINT32_MAX;
	int8_t x1580 = 4;
	uint32_t t21 = 6915990U;

	t21 = (((x1577<x1578)-x1579)<<x1580);

	if (t21 != 16U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1598 = 37;
	static volatile int64_t x1599 = -106200LL;
	uint8_t x1600 = 4U;
	int64_t t22 = -474249LL;

	t22 = (((x1597<x1598)-x1599)<<x1600);

	if (t22 != 1699200LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1705 = INT16_MAX;
	uint64_t x1706 = UINT64_MAX;
	static volatile int8_t x1707 = -1;
	static int8_t x1708 = 3;
	static volatile int32_t t23 = -13409034;

	t23 = (((x1705<x1706)-x1707)<<x1708);

	if (t23 != 16) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1709 = INT16_MAX;
	int8_t x1710 = INT8_MIN;
	static volatile uint32_t x1711 = 1880620935U;

	t24 = (((x1709<x1710)-x1711)<<x1712);

	if (t24 != 4269803408U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1765 = INT16_MAX;
	static uint64_t x1766 = 64306189936969LLU;
	volatile uint64_t x1767 = 1357534130187958252LLU;
	static uint8_t x1768 = 3U;

	t25 = (((x1765<x1766)-x1767)<<x1768);

	if (t25 != 7586471032205885608LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1925 = INT8_MIN;
	uint64_t x1926 = 5847748233116886LLU;
	static int64_t x1927 = -1LL;
	int8_t x1928 = 0;
	volatile int64_t t26 = 2440695711220LL;

	t26 = (((x1925<x1926)-x1927)<<x1928);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1958 = INT16_MIN;
	static volatile uint32_t x1959 = UINT32_MAX;
	static int8_t x1960 = 0;
	static volatile uint32_t t27 = 231411U;

	t27 = (((x1957<x1958)-x1959)<<x1960);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1974 = 118617U;
	int16_t x1975 = -1;
	static uint8_t x1976 = 2U;
	int32_t t28 = -292195263;

	t28 = (((x1973<x1974)-x1975)<<x1976);

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1990 = 5425992616LLU;
	int32_t x1991 = -1;
	static uint32_t x1992 = 21U;
	volatile int32_t t29 = 44;

	t29 = (((x1989<x1990)-x1991)<<x1992);

	if (t29 != 4194304) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2065 = 47053773123LL;
	volatile uint16_t x2066 = 118U;
	int8_t x2067 = -1;

	t30 = (((x2065<x2066)-x2067)<<x2068);

	if (t30 != 67108864) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2089 = INT32_MIN;

	t31 = (((x2089<x2090)-x2091)<<x2092);

	if (t31 != 18446703299399389812LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x2101 = 79;
	int64_t x2102 = INT64_MAX;
	int32_t x2103 = -1;
	volatile int32_t t32 = -45;

	t32 = (((x2101<x2102)-x2103)<<x2104);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2158 = -1LL;
	int16_t x2159 = -1;
	int8_t x2160 = 13;
	int32_t t33 = -4168985;

	t33 = (((x2157<x2158)-x2159)<<x2160);

	if (t33 != 8192) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2202 = UINT8_MAX;
	uint32_t x2203 = 95U;
	static uint8_t x2204 = 0U;
	volatile uint32_t t34 = 3728885U;

	t34 = (((x2201<x2202)-x2203)<<x2204);

	if (t34 != 4294967202U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2210 = INT64_MAX;
	static int64_t x2211 = -243LL;
	static int8_t x2212 = 14;
	int64_t t35 = -27LL;

	t35 = (((x2209<x2210)-x2211)<<x2212);

	if (t35 != 3997696LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2213 = 1U;
	uint32_t x2214 = UINT32_MAX;
	int8_t x2216 = 21;
	volatile int32_t t36 = 6042;

	t36 = (((x2213<x2214)-x2215)<<x2216);

	if (t36 != 270532608) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2217 = 2U;
	int16_t x2218 = INT16_MIN;
	volatile uint32_t x2219 = 267809499U;
	uint8_t x2220 = 4U;
	uint32_t t37 = 1U;

	t37 = (((x2217<x2218)-x2219)<<x2220);

	if (t37 != 10015312U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x2338 = -3007;
	uint32_t x2339 = UINT32_MAX;
	uint32_t t38 = 75U;

	t38 = (((x2337<x2338)-x2339)<<x2340);

	if (t38 != 8388608U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x2421 = -2;
	int32_t x2422 = INT32_MIN;
	int8_t x2423 = INT8_MIN;
	int32_t t39 = 6473;

	t39 = (((x2421<x2422)-x2423)<<x2424);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2497 = INT32_MAX;
	uint16_t x2498 = UINT16_MAX;
	static int8_t x2499 = INT8_MIN;
	int8_t x2500 = 0;
	volatile int32_t t40 = -14;

	t40 = (((x2497<x2498)-x2499)<<x2500);

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2513 = INT16_MIN;
	uint16_t x2516 = 6U;

	t41 = (((x2513<x2514)-x2515)<<x2516);

	if (t41 != 18446733136044561664LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2533 = INT32_MAX;
	uint8_t x2536 = 2U;
	volatile int32_t t42 = -11;

	t42 = (((x2533<x2534)-x2535)<<x2536);

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2537 = -1LL;
	int32_t x2538 = INT32_MIN;
	int8_t x2539 = INT8_MIN;
	int16_t x2540 = 22;
	volatile int32_t t43 = 4948;

	t43 = (((x2537<x2538)-x2539)<<x2540);

	if (t43 != 536870912) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2555 = INT8_MIN;
	static volatile uint16_t x2556 = 6U;
	volatile int32_t t44 = -5841654;

	t44 = (((x2553<x2554)-x2555)<<x2556);

	if (t44 != 8256) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2657 = INT8_MAX;
	volatile uint64_t x2658 = 16LLU;
	uint8_t x2660 = 25U;
	int32_t t45 = -65875;

	t45 = (((x2657<x2658)-x2659)<<x2660);

	if (t45 != 33554432) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2677 = -3;
	int16_t x2678 = INT16_MAX;
	static volatile int32_t x2679 = -1;
	int32_t x2680 = 0;
	static volatile int32_t t46 = 1;

	t46 = (((x2677<x2678)-x2679)<<x2680);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2729 = INT8_MAX;
	volatile int64_t x2730 = INT64_MIN;
	static volatile uint64_t x2731 = 25722743LLU;
	int8_t x2732 = 12;
	uint64_t t47 = 1192LLU;

	t47 = (((x2729<x2730)-x2731)<<x2732);

	if (t47 != 18446743968349196288LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2801 = 121LLU;
	static int16_t x2802 = -1;
	int16_t x2803 = INT16_MIN;
	static uint8_t x2804 = 1U;
	int32_t t48 = -1616358;

	t48 = (((x2801<x2802)-x2803)<<x2804);

	if (t48 != 65538) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x2877 = INT64_MIN;
	int64_t x2878 = -10809404007053LL;
	uint32_t x2879 = UINT32_MAX;
	uint16_t x2880 = 1U;
	static uint32_t t49 = 0U;

	t49 = (((x2877<x2878)-x2879)<<x2880);

	if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3081 = 48971U;
	uint16_t x3082 = UINT16_MAX;
	static int16_t x3083 = -1;
	uint8_t x3084 = 15U;
	volatile int32_t t50 = 38764;

	t50 = (((x3081<x3082)-x3083)<<x3084);

	if (t50 != 65536) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x3121 = INT64_MAX;
	static int64_t x3122 = 591LL;
	static uint32_t x3123 = UINT32_MAX;
	static uint16_t x3124 = 14U;
	uint32_t t51 = 8595U;

	t51 = (((x3121<x3122)-x3123)<<x3124);

	if (t51 != 16384U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3126 = INT8_MIN;
	uint64_t x3127 = 13075004238664LLU;
	static int64_t x3128 = 1LL;

	t52 = (((x3125<x3126)-x3127)<<x3128);

	if (t52 != 18446717923701074290LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3165 = 3611U;
	int16_t x3166 = INT16_MAX;
	volatile uint64_t x3167 = 62970733702349LLU;
	uint16_t x3168 = 20U;
	static volatile uint64_t t53 = 17336675332LLU;

	t53 = (((x3165<x3166)-x3167)<<x3168);

	if (t53 != 7757376232164950016LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3173 = 1;
	uint8_t x3174 = UINT8_MAX;
	int64_t x3175 = -6825717704959LL;
	int16_t x3176 = 3;
	volatile int64_t t54 = 1531178LL;

	t54 = (((x3173<x3174)-x3175)<<x3176);

	if (t54 != 54605741639680LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3181 = 1775979034800808877LL;
	int16_t x3182 = 990;
	uint8_t x3184 = 10U;
	static int64_t t55 = 3971088403095LL;

	t55 = (((x3181<x3182)-x3183)<<x3184);

	if (t55 != 1024LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3189 = INT64_MIN;
	int16_t x3190 = INT16_MAX;
	volatile int8_t x3191 = -1;
	volatile int16_t x3192 = 14;
	volatile int32_t t56 = 30615104;

	t56 = (((x3189<x3190)-x3191)<<x3192);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x3201 = -26;
	volatile int32_t x3202 = INT32_MAX;
	volatile int16_t x3203 = 1;
	int32_t t57 = -1839843;

	t57 = (((x3201<x3202)-x3203)<<x3204);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3217 = INT16_MAX;
	volatile int8_t x3218 = INT8_MIN;
	volatile uint8_t x3220 = 0U;
	volatile int32_t t58 = 344;

	t58 = (((x3217<x3218)-x3219)<<x3220);

	if (t58 != 897) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3225 = -14881;
	int64_t x3226 = INT64_MAX;
	int16_t x3228 = 0;
	static volatile int32_t t59 = -58;

	t59 = (((x3225<x3226)-x3227)<<x3228);

	if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3250 = INT16_MIN;
	int16_t x3251 = INT16_MIN;
	static volatile uint8_t x3252 = 0U;
	int32_t t60 = -6152;

	t60 = (((x3249<x3250)-x3251)<<x3252);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3277 = UINT32_MAX;
	volatile uint16_t x3278 = 8U;
	volatile int64_t x3280 = 0LL;
	int64_t t61 = 2748582396LL;

	t61 = (((x3277<x3278)-x3279)<<x3280);

	if (t61 != 7495744467882LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x3301 = INT64_MIN;
	uint32_t x3303 = 469375120U;
	volatile uint8_t x3304 = 6U;
	uint32_t t62 = 12539275U;

	t62 = (((x3301<x3302)-x3303)<<x3304);

	if (t62 != 24763456U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3385 = UINT8_MAX;
	volatile int16_t x3386 = -1;
	int32_t t63 = 813944;

	t63 = (((x3385<x3386)-x3387)<<x3388);

	if (t63 != 992185188) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3489 = -1;
	int8_t x3490 = 11;
	static uint32_t x3491 = 598U;
	uint32_t t64 = 231908U;

	t64 = (((x3489<x3490)-x3491)<<x3492);

	if (t64 != 4294962520U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3497 = INT16_MIN;
	int16_t x3499 = -1;
	int32_t x3500 = 3;

	t65 = (((x3497<x3498)-x3499)<<x3500);

	if (t65 != 16) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3505 = INT16_MIN;
	static int8_t x3506 = -1;
	uint8_t x3508 = 3U;
	int32_t t66 = -858537;

	t66 = (((x3505<x3506)-x3507)<<x3508);

	if (t66 != 5296) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3517 = -1;
	int8_t x3518 = INT8_MAX;
	uint64_t x3519 = 835397LLU;
	uint16_t x3520 = 0U;
	volatile uint64_t t67 = 15198709506977LLU;

	t67 = (((x3517<x3518)-x3519)<<x3520);

	if (t67 != 18446744073708716220LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3565 = 743;
	uint16_t x3566 = 1642U;
	static int32_t x3567 = -1;
	static uint8_t x3568 = 11U;

	t68 = (((x3565<x3566)-x3567)<<x3568);

	if (t68 != 4096) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3577 = INT64_MIN;
	volatile int16_t x3579 = INT16_MIN;
	static int8_t x3580 = 1;
	volatile int32_t t69 = 1;

	t69 = (((x3577<x3578)-x3579)<<x3580);

	if (t69 != 65538) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3617 = -34;
	static int64_t x3618 = INT64_MIN;
	int16_t x3619 = INT16_MIN;
	static uint8_t x3620 = 1U;
	int32_t t70 = 2086146;

	t70 = (((x3617<x3618)-x3619)<<x3620);

	if (t70 != 65536) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3621 = -1;
	int8_t x3622 = -1;
	int16_t x3623 = INT16_MIN;
	static int8_t x3624 = 2;

	t71 = (((x3621<x3622)-x3623)<<x3624);

	if (t71 != 131072) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3725 = INT8_MAX;
	int32_t x3726 = INT32_MIN;
	static volatile uint64_t x3727 = UINT64_MAX;
	int8_t x3728 = 1;
	uint64_t t72 = 1874655815279454LLU;

	t72 = (((x3725<x3726)-x3727)<<x3728);

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3741 = 3374;
	int16_t x3742 = -1;
	uint64_t x3743 = UINT64_MAX;
	int16_t x3744 = 0;

	t73 = (((x3741<x3742)-x3743)<<x3744);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3805 = UINT64_MAX;
	int64_t x3806 = -814445LL;
	int8_t x3807 = INT8_MIN;
	uint32_t x3808 = 0U;

	t74 = (((x3805<x3806)-x3807)<<x3808);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3819 = INT16_MIN;
	int32_t x3820 = 1;
	int32_t t75 = 69755742;

	t75 = (((x3817<x3818)-x3819)<<x3820);

	if (t75 != 65536) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3838 = -1LL;
	int16_t x3839 = INT16_MIN;
	int16_t x3840 = 1;
	volatile int32_t t76 = -179505;

	t76 = (((x3837<x3838)-x3839)<<x3840);

	if (t76 != 65538) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3977 = -316465870790028471LL;
	int64_t x3978 = INT64_MAX;
	int16_t x3979 = INT16_MIN;
	uint8_t x3980 = 0U;
	int32_t t77 = 138;

	t77 = (((x3977<x3978)-x3979)<<x3980);

	if (t77 != 32769) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4105 = INT64_MIN;
	static volatile int8_t x4107 = INT8_MIN;
	static volatile uint8_t x4108 = 16U;
	int32_t t78 = 1738;

	t78 = (((x4105<x4106)-x4107)<<x4108);

	if (t78 != 8454144) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4321 = 2U;
	static volatile int32_t x4322 = INT32_MAX;
	uint32_t x4323 = UINT32_MAX;
	volatile uint8_t x4324 = 1U;
	volatile uint32_t t79 = 78343583U;

	t79 = (((x4321<x4322)-x4323)<<x4324);

	if (t79 != 4U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4365 = INT16_MIN;
	int64_t x4367 = -1LL;
	static int8_t x4368 = 47;
	int64_t t80 = 7LL;

	t80 = (((x4365<x4366)-x4367)<<x4368);

	if (t80 != 140737488355328LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4449 = INT8_MIN;
	volatile int32_t x4450 = -1;
	int64_t x4451 = -9537062926043LL;
	uint32_t x4452 = 3U;
	volatile int64_t t81 = -1LL;

	t81 = (((x4449<x4450)-x4451)<<x4452);

	if (t81 != 76296503408352LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x4553 = UINT16_MAX;
	uint64_t x4554 = 632587LLU;
	uint16_t x4555 = 0U;
	uint16_t x4556 = 6U;
	int32_t t82 = -64744952;

	t82 = (((x4553<x4554)-x4555)<<x4556);

	if (t82 != 64) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4645 = INT8_MIN;
	int64_t x4646 = -1086LL;
	volatile uint32_t x4648 = 1U;
	int32_t t83 = 0;

	t83 = (((x4645<x4646)-x4647)<<x4648);

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4725 = 567566578LL;
	int8_t x4727 = INT8_MIN;
	uint32_t x4728 = 1U;
	int32_t t84 = 66;

	t84 = (((x4725<x4726)-x4727)<<x4728);

	if (t84 != 256) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4749 = -1;
	volatile int32_t x4750 = INT32_MIN;
	static uint64_t x4751 = 778676222974617347LLU;
	volatile uint8_t x4752 = 8U;
	volatile uint64_t t85 = 8LLU;

	t85 = (((x4749<x4750)-x4751)<<x4752);

	if (t85 != 3573071729303026944LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4814 = 111;
	int16_t x4815 = -12;
	int8_t x4816 = 2;
	volatile int32_t t86 = -52126128;

	t86 = (((x4813<x4814)-x4815)<<x4816);

	if (t86 != 52) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4837 = -1LL;
	uint32_t x4839 = 1089377U;
	static uint8_t x4840 = 0U;
	volatile uint32_t t87 = 10103700U;

	t87 = (((x4837<x4838)-x4839)<<x4840);

	if (t87 != 4293877919U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5002 = UINT16_MAX;

	t88 = (((x5001<x5002)-x5003)<<x5004);

	if (t88 != 32768U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x5022 = INT32_MIN;
	volatile uint32_t x5023 = UINT32_MAX;

	t89 = (((x5021<x5022)-x5023)<<x5024);

	if (t89 != 8U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x5065 = 4166;
	static int32_t x5066 = INT32_MAX;
	uint64_t x5067 = 48LLU;
	volatile int8_t x5068 = 10;
	uint64_t t90 = 107437LLU;

	t90 = (((x5065<x5066)-x5067)<<x5068);

	if (t90 != 18446744073709503488LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5173 = INT16_MIN;
	static volatile uint8_t x5176 = 2U;
	int64_t t91 = -1320LL;

	t91 = (((x5173<x5174)-x5175)<<x5176);

	if (t91 != 4LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x5213 = UINT16_MAX;
	int8_t x5214 = INT8_MAX;
	static int16_t x5215 = -12;
	int16_t x5216 = 1;
	int32_t t92 = -25;

	t92 = (((x5213<x5214)-x5215)<<x5216);

	if (t92 != 24) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5254 = UINT16_MAX;
	int32_t t93 = 2878777;

	t93 = (((x5253<x5254)-x5255)<<x5256);

	if (t93 != 12) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5422 = INT64_MAX;
	uint32_t x5423 = 5168U;
	int64_t x5424 = 7LL;
	volatile uint32_t t94 = 135U;

	t94 = (((x5421<x5422)-x5423)<<x5424);

	if (t94 != 4294305920U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5433 = INT32_MAX;
	volatile uint8_t x5435 = 0U;
	uint32_t x5436 = 13U;
	static int32_t t95 = -517451;

	t95 = (((x5433<x5434)-x5435)<<x5436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x5585 = 12U;
	uint64_t x5586 = 36LLU;
	static uint32_t x5587 = UINT32_MAX;
	volatile uint32_t t96 = 22836U;

	t96 = (((x5585<x5586)-x5587)<<x5588);

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5617 = INT8_MIN;
	uint64_t x5618 = 4069012277342LLU;
	int64_t x5619 = -1LL;
	static volatile int16_t x5620 = 3;
	int64_t t97 = -1310777LL;

	t97 = (((x5617<x5618)-x5619)<<x5620);

	if (t97 != 8LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5773 = 1;
	uint8_t x5776 = 21U;
	static volatile int32_t t98 = 5837068;

	t98 = (((x5773<x5774)-x5775)<<x5776);

	if (t98 != 2097152) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x5789 = 881992825U;
	volatile int32_t x5790 = -6;
	int8_t x5791 = -1;
	static uint8_t x5792 = 3U;

	t99 = (((x5789<x5790)-x5791)<<x5792);

	if (t99 != 16) { NG(); } else { ; }
	
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

