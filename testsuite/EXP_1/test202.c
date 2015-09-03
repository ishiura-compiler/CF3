#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x13 = 1U;
uint32_t x16 = 3U;
volatile uint8_t x132 = 0U;
uint64_t t2 = 7239193890255988LLU;
uint32_t x204 = 5U;
volatile uint64_t x242 = 7330228499514924781LLU;
volatile int8_t x244 = 14;
uint8_t x330 = 26U;
uint32_t t7 = 100U;
uint32_t x397 = 16101U;
int8_t x398 = 3;
static volatile int16_t x664 = 8;
volatile uint32_t t10 = 345604760U;
int16_t x678 = INT16_MIN;
static int64_t x711 = -2378643712LL;
int64_t t12 = 458084LL;
volatile uint64_t t13 = 7200271905259LLU;
int64_t x769 = INT64_MIN;
int16_t x823 = 257;
uint32_t t16 = 121327U;
int32_t x983 = 158608;
volatile uint64_t t18 = 111012957509LLU;
uint16_t x1306 = 5U;
uint32_t x1351 = 1U;
uint32_t x1374 = UINT32_MAX;
static volatile int32_t x1527 = 1781452;
volatile int8_t x1553 = -32;
static volatile uint32_t x1555 = 13172U;
int8_t x1556 = 15;
int64_t x1559 = INT64_MIN;
static uint64_t x1647 = UINT64_MAX;
uint32_t x1793 = 30653599U;
uint8_t x1796 = 19U;
static int8_t x1891 = INT8_MAX;
static uint64_t t30 = 5LLU;
int16_t x2183 = INT16_MIN;
int64_t x2225 = -1LL;
uint32_t x2228 = 5U;
int32_t x2234 = 0;
int16_t x2365 = INT16_MIN;
volatile int64_t t43 = 41589831LL;
int32_t x2545 = -1;
static volatile uint16_t x2665 = 5649U;
int8_t x2667 = INT8_MIN;
static volatile int32_t t46 = -35043;
volatile int32_t x2693 = INT32_MIN;
volatile uint64_t t48 = 582LLU;
int8_t x2783 = -54;
uint32_t t50 = 704855U;
uint64_t x2863 = 78617028284522LLU;
volatile int32_t t53 = -11159530;
uint64_t x2945 = 3LLU;
static int8_t x2947 = 0;
uint64_t t54 = 24111744128LLU;
uint16_t x3162 = 7634U;
static uint32_t x3213 = 5U;
int64_t x3349 = -1LL;
uint32_t x3350 = 9676902U;
static uint16_t x3352 = 5U;
int64_t x3378 = -1LL;
uint32_t t61 = 93452834U;
int8_t x3456 = 1;
static volatile int64_t t62 = 8178902LL;
int32_t x3461 = -1;
static volatile int32_t x3462 = -1;
uint32_t x3464 = 3U;
int16_t x3494 = -4;
uint32_t x3593 = 1490U;
int16_t x3596 = 1;
static uint64_t t66 = 241145LLU;
int8_t x3700 = 0;
uint16_t x3768 = 17U;
uint64_t t70 = 292451641LLU;
static volatile int16_t x4078 = -114;
uint64_t t73 = 3084LLU;
uint64_t x4101 = UINT64_MAX;
int8_t x4193 = -1;
uint16_t x4311 = 49U;
uint64_t t76 = 3LLU;
int8_t x4345 = 3;
static uint64_t x4348 = 0LLU;
volatile uint64_t t78 = 917663758086LLU;
volatile uint32_t x4431 = 73U;
int64_t t79 = 3649LL;
int8_t x4468 = 9;
int32_t t82 = -250952384;
static uint32_t x4505 = UINT32_MAX;
volatile int32_t x4531 = -1;
volatile int32_t t85 = 193517701;
int16_t x4918 = INT16_MIN;
uint8_t x5153 = 25U;
uint32_t t90 = 286694U;
uint8_t x5217 = UINT8_MAX;
volatile int32_t t91 = 0;
volatile int8_t x5248 = 13;
uint32_t x5274 = UINT32_MAX;
int16_t x5275 = INT16_MIN;
uint64_t x5382 = 3845625879416LLU;
volatile uint64_t t96 = 7LLU;
int8_t x5530 = -43;
int32_t x5531 = -1;
static uint64_t t99 = 9248573LLU;


void f0(void) {
	volatile uint32_t x14 = UINT32_MAX;
	int8_t x15 = INT8_MAX;
	static volatile uint32_t t0 = 7527U;

	t0 = (((x13-x14)*x15)>>x16);

	if (t0 != 31U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x129 = 3567385U;
	int8_t x130 = INT8_MIN;
	volatile uint8_t x131 = 23U;
	static volatile uint32_t t1 = 9593U;

	t1 = (((x129-x130)*x131)>>x132);

	if (t1 != 82052799U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x161 = INT32_MIN;
	static volatile uint64_t x162 = 1LLU;
	volatile uint8_t x163 = UINT8_MAX;
	static volatile uint8_t x164 = 56U;

	t2 = (((x161-x162)*x163)>>x164);

	if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x165 = -1LL;
	uint64_t x166 = 0LLU;
	int64_t x167 = INT64_MIN;
	int8_t x168 = 0;
	uint64_t t3 = 55LLU;

	t3 = (((x165-x166)*x167)>>x168);

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x201 = 10243U;
	int8_t x202 = INT8_MIN;
	static uint32_t x203 = 74338840U;
	static uint32_t t4 = 1265924U;

	t4 = (((x201-x202)*x203)>>x204);

	if (t4 != 67780114U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x225 = INT8_MIN;
	static uint64_t x226 = UINT64_MAX;
	static volatile int64_t x227 = -1LL;
	int8_t x228 = 2;
	volatile uint64_t t5 = 6899348450LLU;

	t5 = (((x225-x226)*x227)>>x228);

	if (t5 != 31LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x241 = 1;
	uint64_t x243 = 4065692260462903642LLU;
	static uint64_t t6 = 4234827LLU;

	t6 = (((x241-x242)*x243)>>x244);

	if (t6 != 744767174002892LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x329 = -1;
	uint32_t x331 = UINT32_MAX;
	uint8_t x332 = 0U;

	t7 = (((x329-x330)*x331)>>x332);

	if (t7 != 27U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x399 = 757687LLU;
	static uint8_t x400 = 7U;
	static volatile uint64_t t8 = 1020458373LLU;

	t8 = (((x397-x398)*x399)>>x400);

	if (t8 != 95290979LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x661 = 619738447728343804LLU;
	int32_t x662 = 12447;
	int16_t x663 = INT16_MIN;
	uint64_t t9 = 5457LLU;

	t9 = (((x661-x662)*x663)>>x664);

	if (t9 != 8889726532243840LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x673 = 11515626U;
	static volatile uint8_t x674 = UINT8_MAX;
	uint32_t x675 = 768U;
	volatile uint8_t x676 = 0U;

	t10 = (((x673-x674)*x675)>>x676);

	if (t10 != 253870336U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x677 = 85;
	int64_t x679 = 8624838429LL;
	int8_t x680 = 1;
	static volatile int64_t t11 = 0LL;

	t11 = (((x677-x678)*x679)>>x680);

	if (t11 != 141675908453968LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x709 = -4894;
	volatile int8_t x710 = -1;
	volatile int16_t x712 = 1;

	t12 = (((x709-x710)*x711)>>x712);

	if (t12 != 5819351841408LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x745 = 9U;
	uint64_t x746 = UINT64_MAX;
	int32_t x747 = 183589496;
	uint8_t x748 = 1U;

	t13 = (((x745-x746)*x747)>>x748);

	if (t13 != 917947480LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x770 = 9LLU;
	int64_t x771 = INT64_MAX;
	int8_t x772 = 49;
	volatile uint64_t t14 = 58837LLU;

	t14 = (((x769-x770)*x771)>>x772);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x777 = 2737836190220LLU;
	static volatile int8_t x778 = -1;
	uint16_t x779 = 27U;
	int8_t x780 = 1;
	static uint64_t t15 = 106894628604456LLU;

	t15 = (((x777-x778)*x779)>>x780);

	if (t15 != 36960788567983LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x821 = 85609U;
	volatile int8_t x822 = INT8_MIN;
	uint8_t x824 = 2U;

	t16 = (((x821-x822)*x823)>>x824);

	if (t16 != 5508602U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x957 = 64U;
	uint32_t x958 = 6502523U;
	int16_t x959 = INT16_MIN;
	static volatile int8_t x960 = 1;
	volatile uint32_t t17 = 70U;

	t17 = (((x957-x958)*x959)>>x960);

	if (t17 != 1309589504U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x981 = UINT64_MAX;
	static int8_t x982 = -55;
	uint8_t x984 = 14U;

	t18 = (((x981-x982)*x983)>>x984);

	if (t18 != 522LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1121 = UINT8_MAX;
	static int16_t x1122 = -2;
	volatile uint16_t x1123 = 42U;
	int8_t x1124 = 0;
	static int32_t t19 = -61;

	t19 = (((x1121-x1122)*x1123)>>x1124);

	if (t19 != 10794) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1305 = INT64_MAX;
	uint64_t x1307 = UINT64_MAX;
	uint32_t x1308 = 42U;
	uint64_t t20 = 8649915980702LLU;

	t20 = (((x1305-x1306)*x1307)>>x1308);

	if (t20 != 2097152LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1333 = 3;
	volatile uint32_t x1334 = 1779955772U;
	int32_t x1335 = 1;
	uint8_t x1336 = 26U;
	volatile uint32_t t21 = 513285900U;

	t21 = (((x1333-x1334)*x1335)>>x1336);

	if (t21 != 37U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1349 = 563LLU;
	uint64_t x1350 = UINT64_MAX;
	uint8_t x1352 = 54U;
	uint64_t t22 = 1140872LLU;

	t22 = (((x1349-x1350)*x1351)>>x1352);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1373 = -223;
	volatile uint8_t x1375 = 1U;
	uint32_t x1376 = 1U;
	volatile uint32_t t23 = 250U;

	t23 = (((x1373-x1374)*x1375)>>x1376);

	if (t23 != 2147483537U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x1525 = 7U;
	int32_t x1526 = -1;
	int8_t x1528 = 1;
	int32_t t24 = -3784;

	t24 = (((x1525-x1526)*x1527)>>x1528);

	if (t24 != 7125808) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1554 = 14421U;
	uint32_t t25 = 406U;

	t25 = (((x1553-x1554)*x1555)>>x1556);

	if (t25 != 125262U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1557 = UINT16_MAX;
	uint64_t x1558 = 7426LLU;
	volatile uint32_t x1560 = 1U;
	static uint64_t t26 = 4669748694168LLU;

	t26 = (((x1557-x1558)*x1559)>>x1560);

	if (t26 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1645 = -1LL;
	volatile int16_t x1646 = -1;
	uint8_t x1648 = 0U;
	volatile uint64_t t27 = 2940046868279LLU;

	t27 = (((x1645-x1646)*x1647)>>x1648);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1794 = 5328LLU;
	uint16_t x1795 = 34U;
	volatile uint64_t t28 = 1695960623146759LLU;

	t28 = (((x1793-x1794)*x1795)>>x1796);

	if (t28 != 1987LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1845 = 13759;
	uint16_t x1846 = 5259U;
	uint16_t x1847 = 85U;
	uint32_t x1848 = 2U;
	int32_t t29 = -29601;

	t29 = (((x1845-x1846)*x1847)>>x1848);

	if (t29 != 180625) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1889 = UINT64_MAX;
	static uint64_t x1890 = 2946365LLU;
	uint8_t x1892 = 7U;

	t30 = (((x1889-x1890)*x1891)>>x1892);

	if (t30 != 144115188072932524LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2073 = -498;
	int32_t x2074 = INT32_MIN;
	uint64_t x2075 = 67195LLU;
	uint8_t x2076 = 0U;
	static volatile uint64_t t31 = 52062LLU;

	t31 = (((x2073-x2074)*x2075)>>x2076);

	if (t31 != 144300130264250LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x2137 = UINT32_MAX;
	volatile uint64_t x2138 = UINT64_MAX;
	int8_t x2139 = INT8_MAX;
	static int8_t x2140 = 0;
	uint64_t t32 = 2LLU;

	t32 = (((x2137-x2138)*x2139)>>x2140);

	if (t32 != 545460846592LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x2169 = INT16_MAX;
	uint16_t x2170 = 25U;
	static int16_t x2171 = 1;
	uint16_t x2172 = 4U;
	static volatile int32_t t33 = 900136832;

	t33 = (((x2169-x2170)*x2171)>>x2172);

	if (t33 != 2046) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2181 = UINT64_MAX;
	static uint8_t x2182 = UINT8_MAX;
	int8_t x2184 = 1;
	uint64_t t34 = 147386914066LLU;

	t34 = (((x2181-x2182)*x2183)>>x2184);

	if (t34 != 4194304LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2226 = 13368U;
	int32_t x2227 = -247;
	int64_t t35 = 4929038249708LL;

	t35 = (((x2225-x2226)*x2227)>>x2228);

	if (t35 != 103191LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2233 = 117U;
	int64_t x2235 = 14566228LL;
	uint8_t x2236 = 2U;
	static volatile int64_t t36 = -36720813273036LL;

	t36 = (((x2233-x2234)*x2235)>>x2236);

	if (t36 != 426062169LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2245 = INT64_MIN;
	uint64_t x2246 = 290255766420316619LLU;
	volatile uint64_t x2247 = 1373589169LLU;
	int64_t x2248 = 1LL;
	uint64_t t37 = 0LLU;

	t37 = (((x2245-x2246)*x2247)>>x2248);

	if (t37 != 2559175264058410066LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2261 = UINT8_MAX;
	uint16_t x2262 = 499U;
	uint64_t x2263 = UINT64_MAX;
	volatile int8_t x2264 = 13;
	uint64_t t38 = 517297404680LLU;

	t38 = (((x2261-x2262)*x2263)>>x2264);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2277 = 10995U;
	volatile int8_t x2278 = INT8_MAX;
	volatile uint8_t x2279 = 7U;
	static int16_t x2280 = 1;
	int32_t t39 = 58816784;

	t39 = (((x2277-x2278)*x2279)>>x2280);

	if (t39 != 38038) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2281 = INT64_MAX;
	uint32_t x2282 = 13688243U;
	volatile uint32_t x2283 = 1U;
	static volatile uint16_t x2284 = 1U;
	volatile int64_t t40 = -1931LL;

	t40 = (((x2281-x2282)*x2283)>>x2284);

	if (t40 != 4611686018420543782LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2366 = UINT32_MAX;
	static int8_t x2367 = 40;
	volatile uint8_t x2368 = 2U;
	volatile uint32_t t41 = 13570U;

	t41 = (((x2365-x2366)*x2367)>>x2368);

	if (t41 != 1073414154U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2505 = INT8_MIN;
	static uint32_t x2506 = 1U;
	int32_t x2507 = 133454469;
	uint8_t x2508 = 2U;
	volatile uint32_t t42 = 31044U;

	t42 = (((x2505-x2506)*x2507)>>x2508);

	if (t42 != 1064802494U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2513 = -1LL;
	static int32_t x2514 = -1;
	static int16_t x2515 = 2;
	int32_t x2516 = 0;

	t43 = (((x2513-x2514)*x2515)>>x2516);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2546 = 517294986810LL;
	int8_t x2547 = -25;
	volatile uint16_t x2548 = 0U;
	static volatile int64_t t44 = 3635LL;

	t44 = (((x2545-x2546)*x2547)>>x2548);

	if (t44 != 12932374670275LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2605 = UINT64_MAX;
	int8_t x2606 = INT8_MIN;
	volatile int64_t x2607 = -291398LL;
	uint16_t x2608 = 36U;
	static uint64_t t45 = 2785802960261455551LLU;

	t45 = (((x2605-x2606)*x2607)>>x2608);

	if (t45 != 268435455LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2666 = INT16_MAX;
	uint8_t x2668 = 1U;

	t46 = (((x2665-x2666)*x2667)>>x2668);

	if (t46 != 1735552) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2694 = 0;
	int64_t x2695 = -3LL;
	int8_t x2696 = 7;
	static int64_t t47 = -5333LL;

	t47 = (((x2693-x2694)*x2695)>>x2696);

	if (t47 != 50331648LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2717 = 27306091806LLU;
	int64_t x2718 = INT64_MIN;
	uint32_t x2719 = 737915736U;
	uint16_t x2720 = 62U;

	t48 = (((x2717-x2718)*x2719)>>x2720);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2725 = -1;
	static uint64_t x2726 = 2009374571194646LLU;
	volatile int8_t x2727 = INT8_MIN;
	uint16_t x2728 = 1U;
	static uint64_t t49 = 63LLU;

	t49 = (((x2725-x2726)*x2727)>>x2728);

	if (t49 != 128599972556457408LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2781 = INT8_MIN;
	uint32_t x2782 = UINT32_MAX;
	uint16_t x2784 = 2U;

	t50 = (((x2781-x2782)*x2783)>>x2784);

	if (t50 != 1714U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2797 = UINT64_MAX;
	int8_t x2798 = 36;
	static int64_t x2799 = -109506519351444761LL;
	uint64_t x2800 = 1LLU;
	static uint64_t t51 = 1788619LLU;

	t51 = (((x2797-x2798)*x2799)>>x2800);

	if (t51 != 2025870608001728078LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2861 = 2U;
	uint16_t x2862 = UINT16_MAX;
	static uint32_t x2864 = 26U;
	static volatile uint64_t t52 = 1520639420410221LLU;

	t52 = (((x2861-x2862)*x2863)>>x2864);

	if (t52 != 198106979714LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2901 = 20;
	volatile uint16_t x2902 = 7147U;
	volatile int16_t x2903 = -1;
	static uint8_t x2904 = 0U;

	t53 = (((x2901-x2902)*x2903)>>x2904);

	if (t53 != 7127) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2946 = INT64_MIN;
	static volatile int8_t x2948 = 27;

	t54 = (((x2945-x2946)*x2947)>>x2948);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2949 = INT8_MIN;
	uint64_t x2950 = 1512743147LLU;
	volatile uint8_t x2951 = 3U;
	static uint16_t x2952 = 0U;
	volatile uint64_t t55 = 970354206446506LLU;

	t55 = (((x2949-x2950)*x2951)>>x2952);

	if (t55 != 18446744069171321791LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3161 = 0;
	int8_t x3163 = INT8_MIN;
	uint16_t x3164 = 8U;
	volatile int32_t t56 = -679;

	t56 = (((x3161-x3162)*x3163)>>x3164);

	if (t56 != 3817) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3214 = INT8_MAX;
	uint64_t x3215 = UINT64_MAX;
	uint16_t x3216 = 1U;
	static uint64_t t57 = 4LLU;

	t57 = (((x3213-x3214)*x3215)>>x3216);

	if (t57 != 9223372034707292221LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3351 = -1LL;
	static int64_t t58 = 231239531274826128LL;

	t58 = (((x3349-x3350)*x3351)>>x3352);

	if (t58 != 302403LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3361 = UINT16_MAX;
	int8_t x3362 = 1;
	uint32_t x3363 = UINT32_MAX;
	int16_t x3364 = 1;
	volatile uint32_t t59 = 23U;

	t59 = (((x3361-x3362)*x3363)>>x3364);

	if (t59 != 2147450881U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3377 = 263866091764LLU;
	static uint16_t x3379 = UINT16_MAX;
	static uint8_t x3380 = 12U;
	volatile uint64_t t60 = 1140LLU;

	t60 = (((x3377-x3378)*x3379)>>x3380);

	if (t60 != 4221793047807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3389 = INT8_MIN;
	uint16_t x3390 = 36U;
	uint32_t x3391 = 16060383U;
	static int64_t x3392 = 0LL;

	t61 = (((x3389-x3390)*x3391)>>x3392);

	if (t61 != 1661064484U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3453 = INT8_MIN;
	static volatile int64_t x3454 = 68686193346LL;
	uint32_t x3455 = 0U;

	t62 = (((x3453-x3454)*x3455)>>x3456);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3463 = UINT64_MAX;
	volatile uint64_t t63 = 735917007LLU;

	t63 = (((x3461-x3462)*x3463)>>x3464);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3477 = 57573888U;
	uint16_t x3478 = 1U;
	static int8_t x3479 = INT8_MIN;
	uint8_t x3480 = 1U;
	volatile uint32_t t64 = 32039U;

	t64 = (((x3477-x3478)*x3479)>>x3480);

	if (t64 != 610238528U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3493 = 7U;
	uint8_t x3495 = 28U;
	static int8_t x3496 = 0;
	static int32_t t65 = 7;

	t65 = (((x3493-x3494)*x3495)>>x3496);

	if (t65 != 308) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3594 = 15LLU;
	int16_t x3595 = 1;

	t66 = (((x3593-x3594)*x3595)>>x3596);

	if (t66 != 737LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3697 = INT16_MAX;
	uint64_t x3698 = UINT64_MAX;
	static uint32_t x3699 = 592U;
	volatile uint64_t t67 = 235LLU;

	t67 = (((x3697-x3698)*x3699)>>x3700);

	if (t67 != 19398656LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3765 = INT8_MAX;
	int64_t x3766 = -1LL;
	static uint64_t x3767 = 85906LLU;
	volatile uint64_t t68 = 32677374208199LLU;

	t68 = (((x3765-x3766)*x3767)>>x3768);

	if (t68 != 83LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3781 = INT16_MIN;
	uint8_t x3782 = UINT8_MAX;
	static uint64_t x3783 = UINT64_MAX;
	volatile uint8_t x3784 = 25U;
	static uint64_t t69 = 0LLU;

	t69 = (((x3781-x3782)*x3783)>>x3784);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3849 = -1;
	uint64_t x3850 = UINT64_MAX;
	int32_t x3851 = -1;
	int16_t x3852 = 0;

	t70 = (((x3849-x3850)*x3851)>>x3852);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3997 = UINT64_MAX;
	volatile int32_t x3998 = INT32_MIN;
	int8_t x3999 = -1;
	static uint64_t x4000 = 39LLU;
	volatile uint64_t t71 = 4501981988188LLU;

	t71 = (((x3997-x3998)*x3999)>>x4000);

	if (t71 != 33554431LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4077 = 55U;
	static volatile uint64_t x4079 = UINT64_MAX;
	static int16_t x4080 = 6;
	volatile uint64_t t72 = 4LLU;

	t72 = (((x4077-x4078)*x4079)>>x4080);

	if (t72 != 288230376151711741LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4085 = UINT32_MAX;
	volatile int16_t x4086 = INT16_MIN;
	uint64_t x4087 = 11016502517312LLU;
	uint32_t x4088 = 3U;

	t73 = (((x4085-x4086)*x4087)>>x4088);

	if (t73 != 45122217248095288LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4102 = INT32_MIN;
	int64_t x4103 = INT64_MIN;
	static volatile int16_t x4104 = 4;
	uint64_t t74 = 238LLU;

	t74 = (((x4101-x4102)*x4103)>>x4104);

	if (t74 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4194 = INT16_MIN;
	volatile uint64_t x4195 = 23690814051893144LLU;
	static uint8_t x4196 = 6U;
	uint64_t t75 = 84752878LLU;

	t75 = (((x4193-x4194)*x4195)>>x4196);

	if (t75 != 23650827227835649LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4309 = -1;
	uint64_t x4310 = 14781547643060020LLU;
	uint8_t x4312 = 63U;

	t76 = (((x4309-x4310)*x4311)>>x4312);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x4346 = INT16_MIN;
	int8_t x4347 = INT8_MAX;
	int32_t t77 = 0;

	t77 = (((x4345-x4346)*x4347)>>x4348);

	if (t77 != 4161917) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4413 = 0LLU;
	int16_t x4414 = INT16_MIN;
	uint32_t x4415 = UINT32_MAX;
	int64_t x4416 = 0LL;

	t78 = (((x4413-x4414)*x4415)>>x4416);

	if (t78 != 140737488322560LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4429 = INT64_MIN;
	volatile int64_t x4430 = INT64_MIN;
	static uint8_t x4432 = 7U;

	t79 = (((x4429-x4430)*x4431)>>x4432);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x4433 = UINT64_MAX;
	int64_t x4434 = INT64_MIN;
	volatile uint8_t x4435 = 3U;
	static uint64_t x4436 = 12LLU;
	volatile uint64_t t80 = 10056368LLU;

	t80 = (((x4433-x4434)*x4435)>>x4436);

	if (t80 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x4465 = 27688240LLU;
	volatile int32_t x4466 = 480387337;
	int16_t x4467 = 276;
	uint64_t t81 = 1913728241183159646LLU;

	t81 = (((x4465-x4466)*x4467)>>x4468);

	if (t81 != 36028796774930861LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4497 = -1;
	int16_t x4498 = INT16_MIN;
	uint16_t x4499 = UINT16_MAX;
	static uint8_t x4500 = 15U;

	t82 = (((x4497-x4498)*x4499)>>x4500);

	if (t82 != 65533) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x4506 = 553752513U;
	static int16_t x4507 = 7335;
	static uint8_t x4508 = 9U;
	volatile uint32_t t83 = 37U;

	t83 = (((x4505-x4506)*x4507)>>x4508);

	if (t83 != 2469476U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4529 = INT16_MIN;
	int16_t x4530 = 13018;
	uint8_t x4532 = 1U;
	int32_t t84 = -984;

	t84 = (((x4529-x4530)*x4531)>>x4532);

	if (t84 != 22893) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4561 = INT32_MIN;
	static int32_t x4562 = INT32_MIN;
	volatile int16_t x4563 = INT16_MAX;
	uint16_t x4564 = 1U;

	t85 = (((x4561-x4562)*x4563)>>x4564);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4869 = 340947768157675LL;
	volatile uint64_t x4870 = 4159116158LLU;
	static int32_t x4871 = INT32_MIN;
	int16_t x4872 = 10;
	static uint64_t t86 = 115LLU;

	t86 = (((x4869-x4870)*x4871)>>x4872);

	if (t86 != 16934049723449344LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4917 = -1;
	static uint64_t x4919 = UINT64_MAX;
	int16_t x4920 = 23;
	static uint64_t t87 = 7192LLU;

	t87 = (((x4917-x4918)*x4919)>>x4920);

	if (t87 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x4929 = -12267862734015LL;
	int16_t x4930 = INT16_MAX;
	uint8_t x4931 = 0U;
	uint32_t x4932 = 56U;
	volatile int64_t t88 = -3659724807491552172LL;

	t88 = (((x4929-x4930)*x4931)>>x4932);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x5154 = INT32_MAX;
	uint64_t x5155 = 19222124251870LLU;
	int16_t x5156 = 44;
	uint64_t t89 = 27898272991887289LLU;

	t89 = (((x5153-x5154)*x5155)>>x5156);

	if (t89 != 262402LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5161 = INT8_MAX;
	int8_t x5162 = INT8_MIN;
	uint32_t x5163 = UINT32_MAX;
	int8_t x5164 = 14;

	t90 = (((x5161-x5162)*x5163)>>x5164);

	if (t90 != 262143U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5218 = 60;
	int32_t x5219 = 5179726;
	uint8_t x5220 = 6U;

	t91 = (((x5217-x5218)*x5219)>>x5220);

	if (t91 != 15781977) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5229 = -1;
	volatile uint64_t x5230 = 878564866673041222LLU;
	int16_t x5231 = INT16_MIN;
	uint8_t x5232 = 39U;
	uint64_t t92 = 4LLU;

	t92 = (((x5229-x5230)*x5231)>>x5232);

	if (t92 != 21632870LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5245 = 41970469U;
	int32_t x5246 = INT32_MIN;
	uint8_t x5247 = 13U;
	volatile uint32_t t93 = 1051381U;

	t93 = (((x5245-x5246)*x5247)>>x5248);

	if (t93 != 328747U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x5273 = 13U;
	int8_t x5276 = 9;
	volatile uint32_t t94 = 813U;

	t94 = (((x5273-x5274)*x5275)>>x5276);

	if (t94 != 8387712U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5297 = INT8_MAX;
	int64_t x5298 = 138953141123349698LL;
	volatile uint64_t x5299 = 2068LLU;
	int8_t x5300 = 1;
	uint64_t t95 = 106933725843LLU;

	t95 = (((x5297-x5298)*x5299)>>x5300);

	if (t95 != 3896404668132956514LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5381 = UINT16_MAX;
	static int8_t x5383 = -1;
	static uint16_t x5384 = 7U;

	t96 = (((x5381-x5382)*x5383)>>x5384);

	if (t96 != 30043951670LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5465 = 1385LLU;
	uint64_t x5466 = 33266520LLU;
	volatile int8_t x5467 = INT8_MIN;
	volatile uint32_t x5468 = 2U;
	volatile uint64_t t97 = 15560666743292LLU;

	t97 = (((x5465-x5466)*x5467)>>x5468);

	if (t97 != 1064484320LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5529 = INT32_MIN;
	uint32_t x5532 = 13U;
	int32_t t98 = -111709;

	t98 = (((x5529-x5530)*x5531)>>x5532);

	if (t98 != 262143) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5561 = UINT8_MAX;
	uint8_t x5562 = 8U;
	volatile uint64_t x5563 = UINT64_MAX;
	uint16_t x5564 = 0U;

	t99 = (((x5561-x5562)*x5563)>>x5564);

	if (t99 != 18446744073709551369LLU) { NG(); } else { ; }
	
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

