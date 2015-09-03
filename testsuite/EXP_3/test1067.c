#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x35 = 24U;
volatile uint64_t t1 = 895LLU;
int64_t x162 = 12114LL;
int32_t x169 = INT32_MIN;
uint8_t x171 = UINT8_MAX;
int64_t t4 = 1507LL;
static int16_t x345 = INT16_MAX;
static volatile uint32_t t5 = 28U;
static uint8_t x373 = 25U;
static volatile int64_t x454 = INT64_MAX;
static volatile uint8_t x455 = UINT8_MAX;
int64_t t7 = 7265713705792LL;
int64_t x586 = INT64_MIN;
uint16_t x588 = 2U;
uint8_t x675 = 5U;
uint8_t x682 = 8U;
uint8_t x683 = 2U;
uint32_t x714 = 230425027U;
uint64_t x722 = 869726029484870LLU;
uint8_t x736 = 1U;
uint64_t x1230 = UINT64_MAX;
volatile uint64_t t21 = 317829LLU;
volatile uint64_t x1234 = 7172LLU;
volatile int8_t x1236 = 2;
uint64_t x1349 = 10790LLU;
uint8_t x1351 = 0U;
static uint8_t x1352 = 0U;
int8_t x1386 = INT8_MIN;
uint16_t x1404 = 9U;
int8_t x1445 = INT8_MAX;
int16_t x1447 = 1568;
volatile int8_t x1464 = 10;
int16_t x1521 = -1;
int32_t t30 = 4008;
static uint64_t t31 = 3714572732204350801LLU;
static uint32_t x1658 = UINT32_MAX;
static uint8_t x1662 = UINT8_MAX;
static int32_t x1682 = -222;
int8_t x1694 = INT8_MIN;
int32_t t35 = -26014930;
int64_t t36 = -370371870163500LL;
int16_t x1937 = INT16_MIN;
static int64_t x1938 = INT64_MIN;
uint16_t x2050 = 4672U;
volatile uint8_t x2141 = 1U;
int8_t x2308 = 3;
int8_t x2340 = 11;
int64_t x2345 = -1LL;
static int8_t x2410 = 51;
int8_t x2445 = INT8_MIN;
volatile uint8_t x2448 = 3U;
static uint16_t x2462 = UINT16_MAX;
static volatile int32_t x2639 = INT32_MAX;
int64_t t52 = -6492585823966064LL;
uint64_t x2814 = UINT64_MAX;
volatile uint64_t t54 = 7308609142186624787LLU;
static int16_t x2963 = 1;
uint8_t x3213 = 0U;
uint16_t x3431 = 85U;
volatile uint16_t x3432 = 2U;
int64_t x3461 = 4167645LL;
volatile int64_t t61 = 7690210841056LL;
static int8_t x3526 = INT8_MIN;
int16_t x3566 = -1;
uint8_t x3573 = UINT8_MAX;
int16_t x3574 = -1;
int16_t x3768 = 1;
volatile int64_t t65 = 10736661977254444LL;
int8_t x3808 = 3;
uint32_t t66 = 2708452U;
int16_t x4066 = INT16_MIN;
int64_t t67 = -1LL;
static uint32_t x4182 = 8916U;
static uint64_t x4293 = UINT64_MAX;
int32_t x4349 = -3;
volatile uint64_t x4464 = 6LLU;
int8_t x4570 = -1;
uint16_t x4572 = 7U;
int16_t x4686 = -4381;
uint16_t x4813 = 1U;
int16_t x4816 = 2;
uint32_t x4876 = 0U;
uint64_t t86 = 69448987369964756LLU;
uint16_t x5090 = UINT16_MAX;
int8_t x5092 = 4;
int64_t x5310 = -1LL;
int64_t x5489 = INT64_MIN;
static int32_t x5491 = 98124;
volatile int64_t t98 = -4590180LL;


void f0(void) {
	static int32_t x33 = INT32_MIN;
	int64_t x34 = -1491889LL;
	int64_t x36 = 1LL;
	volatile int64_t t0 = 1931729618LL;

	t0 = ((x33%x34)+(x35>>x36));

	if (t0 != -655365LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x81 = -64;
	uint64_t x82 = 7343295044LLU;
	volatile int64_t x83 = INT64_MAX;
	int8_t x84 = 0;

	t1 = ((x81%x82)+(x83>>x84));

	if (t1 != 9223372041820458999LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x161 = INT16_MAX;
	int64_t x163 = INT64_MAX;
	uint16_t x164 = 1U;
	volatile int64_t t2 = -17645222426748LL;

	t2 = ((x161%x162)+(x163>>x164));

	if (t2 != 4611686018427396442LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x170 = INT8_MIN;
	volatile uint8_t x172 = 20U;
	int32_t t3 = 2401128;

	t3 = ((x169%x170)+(x171>>x172));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x177 = -4;
	volatile int64_t x178 = -1LL;
	int64_t x179 = INT64_MAX;
	volatile uint8_t x180 = 37U;

	t4 = ((x177%x178)+(x179>>x180));

	if (t4 != 67108863LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x346 = 84222159U;
	volatile uint16_t x347 = 977U;
	int8_t x348 = 0;

	t5 = ((x345%x346)+(x347>>x348));

	if (t5 != 33744U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x374 = 14547U;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = 53U;
	volatile int64_t t6 = -212203360633092LL;

	t6 = ((x373%x374)+(x375>>x376));

	if (t6 != 1048LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x453 = INT64_MIN;
	uint8_t x456 = 0U;

	t7 = ((x453%x454)+(x455>>x456));

	if (t7 != 254LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x457 = INT64_MIN;
	int64_t x458 = 5162LL;
	uint32_t x459 = 1467U;
	uint16_t x460 = 3U;
	int64_t t8 = -25551491134673484LL;

	t8 = ((x457%x458)+(x459>>x460));

	if (t8 != -4701LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x465 = 6581;
	int64_t x466 = INT64_MIN;
	static int16_t x467 = 305;
	uint8_t x468 = 0U;
	volatile int64_t t9 = 23352615LL;

	t9 = ((x465%x466)+(x467>>x468));

	if (t9 != 6886LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x569 = -1;
	int16_t x570 = -1;
	volatile int16_t x571 = INT16_MAX;
	uint8_t x572 = 1U;
	int32_t t10 = -2203;

	t10 = ((x569%x570)+(x571>>x572));

	if (t10 != 16383) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x585 = INT64_MIN;
	int8_t x587 = 0;
	static volatile int64_t t11 = 235899963841831LL;

	t11 = ((x585%x586)+(x587>>x588));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x673 = UINT8_MAX;
	int16_t x674 = -70;
	volatile uint8_t x676 = 6U;
	volatile int32_t t12 = 26;

	t12 = ((x673%x674)+(x675>>x676));

	if (t12 != 45) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x681 = 1U;
	static int16_t x684 = 6;
	int32_t t13 = 0;

	t13 = ((x681%x682)+(x683>>x684));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x713 = -1;
	uint32_t x715 = 1U;
	static volatile uint8_t x716 = 9U;
	uint32_t t14 = 939U;

	t14 = ((x713%x714)+(x715>>x716));

	if (t14 != 147316809U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x721 = 1U;
	uint64_t x723 = 2094857977121LLU;
	static int8_t x724 = 26;
	uint64_t t15 = 1971966751137LLU;

	t15 = ((x721%x722)+(x723>>x724));

	if (t15 != 31216LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x733 = INT16_MAX;
	uint16_t x734 = 552U;
	static uint32_t x735 = UINT32_MAX;
	volatile uint32_t t16 = 13U;

	t16 = ((x733%x734)+(x735>>x736));

	if (t16 != 2147483846U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x837 = INT32_MAX;
	int32_t x838 = -1;
	uint16_t x839 = 7276U;
	uint8_t x840 = 1U;
	int32_t t17 = -8792940;

	t17 = ((x837%x838)+(x839>>x840));

	if (t17 != 3638) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x925 = INT32_MAX;
	uint32_t x926 = 2657U;
	uint64_t x927 = 8039901LLU;
	int16_t x928 = 3;
	static uint64_t t18 = 2258760463426LLU;

	t18 = ((x925%x926)+(x927>>x928));

	if (t18 != 1005582LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1137 = 3;
	int32_t x1138 = -5;
	uint16_t x1139 = 12U;
	volatile int16_t x1140 = 1;
	volatile int32_t t19 = 111;

	t19 = ((x1137%x1138)+(x1139>>x1140));

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1217 = INT16_MIN;
	uint64_t x1218 = UINT64_MAX;
	uint16_t x1219 = 216U;
	volatile uint8_t x1220 = 2U;
	uint64_t t20 = 195638846245478104LLU;

	t20 = ((x1217%x1218)+(x1219>>x1220));

	if (t20 != 18446744073709518902LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1229 = -102085166;
	uint32_t x1231 = 174U;
	volatile int16_t x1232 = 5;

	t21 = ((x1229%x1230)+(x1231>>x1232));

	if (t21 != 18446744073607466455LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1233 = UINT8_MAX;
	volatile uint64_t x1235 = 1905320938315752LLU;
	static uint64_t t22 = 795621665LLU;

	t22 = ((x1233%x1234)+(x1235>>x1236));

	if (t22 != 476330234579193LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1350 = 2788209U;
	uint64_t t23 = 694171008LLU;

	t23 = ((x1349%x1350)+(x1351>>x1352));

	if (t23 != 10790LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1385 = 13U;
	volatile int16_t x1387 = INT16_MAX;
	int8_t x1388 = 15;
	static int32_t t24 = 0;

	t24 = ((x1385%x1386)+(x1387>>x1388));

	if (t24 != 13) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1401 = INT8_MIN;
	volatile uint16_t x1402 = 200U;
	uint8_t x1403 = 0U;
	volatile int32_t t25 = 555049;

	t25 = ((x1401%x1402)+(x1403>>x1404));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1446 = 1;
	volatile uint64_t x1448 = 4LLU;
	volatile int32_t t26 = -59496;

	t26 = ((x1445%x1446)+(x1447>>x1448));

	if (t26 != 98) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1461 = 277U;
	int16_t x1462 = INT16_MIN;
	volatile uint32_t x1463 = 1120U;
	uint32_t t27 = 517111789U;

	t27 = ((x1461%x1462)+(x1463>>x1464));

	if (t27 != 278U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1505 = -1LL;
	int16_t x1506 = INT16_MAX;
	uint16_t x1507 = UINT16_MAX;
	uint8_t x1508 = 0U;
	static volatile int64_t t28 = -162195743274LL;

	t28 = ((x1505%x1506)+(x1507>>x1508));

	if (t28 != 65534LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1522 = 46;
	uint64_t x1523 = 13491948719101LLU;
	uint8_t x1524 = 2U;
	uint64_t t29 = 23LLU;

	t29 = ((x1521%x1522)+(x1523>>x1524));

	if (t29 != 3372987179774LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1577 = 1U;
	volatile int16_t x1578 = -6;
	static int8_t x1579 = 0;
	int32_t x1580 = 1;

	t30 = ((x1577%x1578)+(x1579>>x1580));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1601 = INT16_MIN;
	int8_t x1602 = INT8_MAX;
	uint64_t x1603 = 35463561064486239LLU;
	uint8_t x1604 = 11U;

	t31 = ((x1601%x1602)+(x1603>>x1604));

	if (t31 != 17316191926016LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1657 = 352051U;
	uint64_t x1659 = UINT64_MAX;
	int8_t x1660 = 22;
	volatile uint64_t t32 = 7679801516078652LLU;

	t32 = ((x1657%x1658)+(x1659>>x1660));

	if (t32 != 4398046863154LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1661 = 0;
	static int16_t x1663 = INT16_MAX;
	volatile uint8_t x1664 = 11U;
	volatile int32_t t33 = -44673;

	t33 = ((x1661%x1662)+(x1663>>x1664));

	if (t33 != 15) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1681 = UINT32_MAX;
	volatile uint8_t x1683 = 0U;
	uint8_t x1684 = 2U;
	static volatile uint32_t t34 = 365563U;

	t34 = ((x1681%x1682)+(x1683>>x1684));

	if (t34 != 221U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1693 = -1;
	int32_t x1695 = INT32_MAX;
	int8_t x1696 = 0;

	t35 = ((x1693%x1694)+(x1695>>x1696));

	if (t35 != 2147483646) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1769 = 18102U;
	uint16_t x1770 = UINT16_MAX;
	int64_t x1771 = 1525347180058757LL;
	uint16_t x1772 = 0U;

	t36 = ((x1769%x1770)+(x1771>>x1772));

	if (t36 != 1525347180076859LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1939 = INT16_MAX;
	static uint16_t x1940 = 5U;
	int64_t t37 = -180114955751903596LL;

	t37 = ((x1937%x1938)+(x1939>>x1940));

	if (t37 != -31745LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1953 = -1;
	uint8_t x1954 = 2U;
	uint64_t x1955 = 38240899LLU;
	static volatile uint16_t x1956 = 3U;
	volatile uint64_t t38 = 1923867582LLU;

	t38 = ((x1953%x1954)+(x1955>>x1956));

	if (t38 != 4780111LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2049 = INT32_MAX;
	int16_t x2051 = INT16_MAX;
	int16_t x2052 = 1;
	int32_t t39 = -42866;

	t39 = ((x2049%x2050)+(x2051>>x2052));

	if (t39 != 19902) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x2142 = -1;
	uint8_t x2143 = 1U;
	uint8_t x2144 = 20U;
	volatile int32_t t40 = -27350730;

	t40 = ((x2141%x2142)+(x2143>>x2144));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2165 = -3LL;
	volatile uint16_t x2166 = 1U;
	uint32_t x2167 = 484256U;
	uint64_t x2168 = 0LLU;
	int64_t t41 = 8000LL;

	t41 = ((x2165%x2166)+(x2167>>x2168));

	if (t41 != 484256LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2305 = UINT8_MAX;
	volatile uint16_t x2306 = 76U;
	uint16_t x2307 = 217U;
	volatile int32_t t42 = -4054771;

	t42 = ((x2305%x2306)+(x2307>>x2308));

	if (t42 != 54) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2337 = 47;
	static int8_t x2338 = INT8_MIN;
	uint64_t x2339 = 9475092LLU;
	static uint64_t t43 = 21LLU;

	t43 = ((x2337%x2338)+(x2339>>x2340));

	if (t43 != 4673LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2346 = UINT64_MAX;
	static volatile int32_t x2347 = 0;
	int16_t x2348 = 1;
	volatile uint64_t t44 = 6998843835LLU;

	t44 = ((x2345%x2346)+(x2347>>x2348));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2349 = UINT16_MAX;
	volatile int32_t x2350 = INT32_MIN;
	uint32_t x2351 = 3U;
	uint8_t x2352 = 0U;
	uint32_t t45 = 60U;

	t45 = ((x2349%x2350)+(x2351>>x2352));

	if (t45 != 65538U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2409 = 2893610580851366345LL;
	int16_t x2411 = INT16_MAX;
	static uint8_t x2412 = 20U;
	volatile int64_t t46 = 2LL;

	t46 = ((x2409%x2410)+(x2411>>x2412));

	if (t46 != 11LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2446 = -170628;
	static int64_t x2447 = INT64_MAX;
	volatile int64_t t47 = 959951LL;

	t47 = ((x2445%x2446)+(x2447>>x2448));

	if (t47 != 1152921504606846847LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2461 = -29;
	uint32_t x2463 = UINT32_MAX;
	static volatile uint8_t x2464 = 1U;
	volatile uint32_t t48 = 1368367U;

	t48 = ((x2461%x2462)+(x2463>>x2464));

	if (t48 != 2147483618U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2533 = 2;
	static int16_t x2534 = -608;
	int64_t x2535 = 6901721LL;
	uint64_t x2536 = 34LLU;
	static int64_t t49 = -2LL;

	t49 = ((x2533%x2534)+(x2535>>x2536));

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2601 = INT16_MIN;
	int32_t x2602 = 78133161;
	int8_t x2603 = INT8_MAX;
	static int8_t x2604 = 3;
	static volatile int32_t t50 = 681191442;

	t50 = ((x2601%x2602)+(x2603>>x2604));

	if (t50 != -32753) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2637 = -10;
	int16_t x2638 = 1;
	int8_t x2640 = 7;
	static volatile int32_t t51 = -3086;

	t51 = ((x2637%x2638)+(x2639>>x2640));

	if (t51 != 16777215) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2649 = 14;
	static volatile int32_t x2650 = 1512348;
	int64_t x2651 = 24300554922LL;
	uint16_t x2652 = 12U;

	t52 = ((x2649%x2650)+(x2651>>x2652));

	if (t52 != 5932766LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x2809 = 1408639031U;
	int16_t x2810 = INT16_MIN;
	int64_t x2811 = INT64_MAX;
	int16_t x2812 = 62;
	volatile int64_t t53 = 24LL;

	t53 = ((x2809%x2810)+(x2811>>x2812));

	if (t53 != 1408639032LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2813 = UINT64_MAX;
	int32_t x2815 = 1018017;
	int8_t x2816 = 0;

	t54 = ((x2813%x2814)+(x2815>>x2816));

	if (t54 != 1018017LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x2901 = 9452U;
	int64_t x2902 = -68457256157162LL;
	int64_t x2903 = 386535587744909010LL;
	uint8_t x2904 = 3U;
	int64_t t55 = 3308423LL;

	t55 = ((x2901%x2902)+(x2903>>x2904));

	if (t55 != 48316948468123078LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2961 = INT8_MAX;
	static uint32_t x2962 = 44U;
	int8_t x2964 = 0;
	volatile uint32_t t56 = 187794U;

	t56 = ((x2961%x2962)+(x2963>>x2964));

	if (t56 != 40U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3214 = INT32_MAX;
	static int64_t x3215 = 61566LL;
	int16_t x3216 = 0;
	volatile int64_t t57 = 125LL;

	t57 = ((x3213%x3214)+(x3215>>x3216));

	if (t57 != 61566LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3401 = -1;
	int16_t x3402 = INT16_MIN;
	int32_t x3403 = 2317657;
	uint8_t x3404 = 1U;
	int32_t t58 = -12167;

	t58 = ((x3401%x3402)+(x3403>>x3404));

	if (t58 != 1158827) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3429 = -3;
	volatile int64_t x3430 = INT64_MIN;
	static int64_t t59 = -4761700808372533LL;

	t59 = ((x3429%x3430)+(x3431>>x3432));

	if (t59 != 18LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3462 = 52287957339LL;
	static uint16_t x3463 = 3654U;
	uint8_t x3464 = 25U;
	int64_t t60 = -422022LL;

	t60 = ((x3461%x3462)+(x3463>>x3464));

	if (t60 != 4167645LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3505 = -4271801905LL;
	int32_t x3506 = -1;
	static uint32_t x3507 = 632631791U;
	uint8_t x3508 = 5U;

	t61 = ((x3505%x3506)+(x3507>>x3508));

	if (t61 != 19769743LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3525 = INT16_MIN;
	uint64_t x3527 = UINT64_MAX;
	uint8_t x3528 = 7U;
	static volatile uint64_t t62 = 244987LLU;

	t62 = ((x3525%x3526)+(x3527>>x3528));

	if (t62 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3565 = INT8_MIN;
	static uint64_t x3567 = UINT64_MAX;
	volatile int8_t x3568 = 5;
	static volatile uint64_t t63 = 2621047LLU;

	t63 = ((x3565%x3566)+(x3567>>x3568));

	if (t63 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3575 = 254U;
	int8_t x3576 = 0;
	volatile int32_t t64 = -158;

	t64 = ((x3573%x3574)+(x3575>>x3576));

	if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3765 = -546804716LL;
	volatile int16_t x3766 = -1;
	static int16_t x3767 = 381;

	t65 = ((x3765%x3766)+(x3767>>x3768));

	if (t65 != 190LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x3805 = 3386573U;
	uint16_t x3806 = 242U;
	uint16_t x3807 = 3743U;

	t66 = ((x3805%x3806)+(x3807>>x3808));

	if (t66 != 492U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4065 = 709;
	static int64_t x4067 = INT64_MAX;
	uint16_t x4068 = 5U;

	t67 = ((x4065%x4066)+(x4067>>x4068));

	if (t67 != 288230376151712452LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x4113 = INT8_MAX;
	uint64_t x4114 = 121423553423115LLU;
	uint64_t x4115 = UINT64_MAX;
	uint8_t x4116 = 26U;
	volatile uint64_t t68 = 801236939LLU;

	t68 = ((x4113%x4114)+(x4115>>x4116));

	if (t68 != 274877907070LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4181 = -1;
	uint32_t x4183 = UINT32_MAX;
	uint16_t x4184 = 3U;
	volatile uint32_t t69 = 36882U;

	t69 = ((x4181%x4182)+(x4183>>x4184));

	if (t69 != 536876182U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4294 = INT32_MAX;
	static uint32_t x4295 = UINT32_MAX;
	int8_t x4296 = 0;
	uint64_t t70 = 8434598487452LLU;

	t70 = ((x4293%x4294)+(x4295>>x4296));

	if (t70 != 4294967298LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4337 = 399655641LLU;
	int8_t x4338 = -1;
	uint64_t x4339 = 13118082601LLU;
	volatile int16_t x4340 = 14;
	uint64_t t71 = 235560667LLU;

	t71 = ((x4337%x4338)+(x4339>>x4340));

	if (t71 != 400456305LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4341 = INT32_MAX;
	int16_t x4342 = INT16_MIN;
	int16_t x4343 = INT16_MAX;
	uint32_t x4344 = 7U;
	static int32_t t72 = -698560;

	t72 = ((x4341%x4342)+(x4343>>x4344));

	if (t72 != 33022) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4350 = 5U;
	uint8_t x4351 = UINT8_MAX;
	static int16_t x4352 = 10;
	int32_t t73 = 1609171;

	t73 = ((x4349%x4350)+(x4351>>x4352));

	if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4381 = INT32_MAX;
	int64_t x4382 = INT64_MAX;
	static int64_t x4383 = 3046983278743LL;
	volatile uint16_t x4384 = 5U;
	int64_t t74 = -1210111309342778959LL;

	t74 = ((x4381%x4382)+(x4383>>x4384));

	if (t74 != 97365711107LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4461 = -128179;
	int8_t x4462 = -1;
	uint64_t x4463 = UINT64_MAX;
	uint64_t t75 = 7930076530605354LLU;

	t75 = ((x4461%x4462)+(x4463>>x4464));

	if (t75 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x4509 = -4228424533656887LL;
	static int32_t x4510 = -12121136;
	int32_t x4511 = INT32_MAX;
	static uint32_t x4512 = 4U;
	int64_t t76 = -57575LL;

	t76 = ((x4509%x4510)+(x4511>>x4512));

	if (t76 != 124675944LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x4569 = INT64_MAX;
	uint64_t x4571 = 39591381970236029LLU;
	uint64_t t77 = 0LLU;

	t77 = ((x4569%x4570)+(x4571>>x4572));

	if (t77 != 309307671642468LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4573 = INT64_MAX;
	int16_t x4574 = -126;
	volatile uint8_t x4575 = 1U;
	volatile int32_t x4576 = 0;
	int64_t t78 = -1523LL;

	t78 = ((x4573%x4574)+(x4575>>x4576));

	if (t78 != 8LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x4685 = -1LL;
	int32_t x4687 = 1;
	uint8_t x4688 = 1U;
	int64_t t79 = 373791595774LL;

	t79 = ((x4685%x4686)+(x4687>>x4688));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4781 = UINT8_MAX;
	uint16_t x4782 = 12U;
	uint8_t x4783 = 88U;
	uint64_t x4784 = 0LLU;
	int32_t t80 = 3;

	t80 = ((x4781%x4782)+(x4783>>x4784));

	if (t80 != 91) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x4814 = 5U;
	int8_t x4815 = 0;
	static volatile int32_t t81 = -98;

	t81 = ((x4813%x4814)+(x4815>>x4816));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4873 = 116U;
	int16_t x4874 = INT16_MIN;
	uint8_t x4875 = 2U;
	int32_t t82 = 1;

	t82 = ((x4873%x4874)+(x4875>>x4876));

	if (t82 != 118) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4893 = 46U;
	uint16_t x4894 = 713U;
	int32_t x4895 = INT32_MAX;
	int8_t x4896 = 18;
	static volatile int32_t t83 = -3;

	t83 = ((x4893%x4894)+(x4895>>x4896));

	if (t83 != 8237) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x4937 = UINT32_MAX;
	uint64_t x4938 = 1993627806750LLU;
	uint8_t x4939 = 0U;
	static uint16_t x4940 = 11U;
	uint64_t t84 = 26931149536299LLU;

	t84 = ((x4937%x4938)+(x4939>>x4940));

	if (t84 != 4294967295LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x4941 = -1;
	volatile int64_t x4942 = INT64_MIN;
	uint32_t x4943 = UINT32_MAX;
	uint8_t x4944 = 0U;
	int64_t t85 = 11560452491563LL;

	t85 = ((x4941%x4942)+(x4943>>x4944));

	if (t85 != 4294967294LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5013 = 65285663851LLU;
	int64_t x5014 = INT64_MIN;
	uint32_t x5015 = 65285U;
	int8_t x5016 = 0;

	t86 = ((x5013%x5014)+(x5015>>x5016));

	if (t86 != 65285729136LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5045 = 2148070U;
	int16_t x5046 = -1;
	volatile int8_t x5047 = 14;
	int16_t x5048 = 0;
	volatile uint32_t t87 = 577U;

	t87 = ((x5045%x5046)+(x5047>>x5048));

	if (t87 != 2148084U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5049 = INT64_MIN;
	int64_t x5050 = INT64_MIN;
	uint16_t x5051 = 0U;
	volatile int8_t x5052 = 1;
	int64_t t88 = 9177050338133LL;

	t88 = ((x5049%x5050)+(x5051>>x5052));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5089 = INT8_MIN;
	uint32_t x5091 = 14262711U;
	uint32_t t89 = 2131613228U;

	t89 = ((x5089%x5090)+(x5091>>x5092));

	if (t89 != 891291U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x5257 = -1;
	int32_t x5258 = INT32_MIN;
	volatile int8_t x5259 = INT8_MAX;
	uint16_t x5260 = 9U;
	int32_t t90 = 19147;

	t90 = ((x5257%x5258)+(x5259>>x5260));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x5265 = -1;
	static volatile int16_t x5266 = -1;
	int64_t x5267 = INT64_MAX;
	uint8_t x5268 = 1U;
	int64_t t91 = -3859401LL;

	t91 = ((x5265%x5266)+(x5267>>x5268));

	if (t91 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5309 = INT16_MIN;
	static uint64_t x5311 = 119931935174840LLU;
	int16_t x5312 = 0;
	volatile uint64_t t92 = 35815LLU;

	t92 = ((x5309%x5310)+(x5311>>x5312));

	if (t92 != 119931935174840LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5490 = INT64_MIN;
	static uint16_t x5492 = 4U;
	int64_t t93 = -130479LL;

	t93 = ((x5489%x5490)+(x5491>>x5492));

	if (t93 != 6132LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x5593 = -1;
	static volatile int64_t x5594 = 49352353186768555LL;
	static int16_t x5595 = INT16_MAX;
	uint16_t x5596 = 0U;
	int64_t t94 = -2156469902009810511LL;

	t94 = ((x5593%x5594)+(x5595>>x5596));

	if (t94 != 32766LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5665 = INT16_MIN;
	static int8_t x5666 = INT8_MIN;
	volatile uint16_t x5667 = 707U;
	int32_t x5668 = 1;
	volatile int32_t t95 = -65672;

	t95 = ((x5665%x5666)+(x5667>>x5668));

	if (t95 != 353) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5805 = -230700465212675LL;
	int16_t x5806 = INT16_MIN;
	volatile uint64_t x5807 = 11657LLU;
	static uint8_t x5808 = 5U;
	uint64_t t96 = 35659379456793366LLU;

	t96 = ((x5805%x5806)+(x5807>>x5808));

	if (t96 != 18446744073709532265LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5917 = -1;
	int64_t x5918 = -3364LL;
	static int16_t x5919 = 105;
	int64_t x5920 = 30LL;
	volatile int64_t t97 = 380488627599758360LL;

	t97 = ((x5917%x5918)+(x5919>>x5920));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5933 = INT64_MIN;
	uint8_t x5934 = UINT8_MAX;
	uint16_t x5935 = 2U;
	uint8_t x5936 = 1U;

	t98 = ((x5933%x5934)+(x5935>>x5936));

	if (t98 != -127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6013 = INT16_MIN;
	volatile int8_t x6014 = INT8_MIN;
	int8_t x6015 = 8;
	int16_t x6016 = 2;
	volatile int32_t t99 = 30;

	t99 = ((x6013%x6014)+(x6015>>x6016));

	if (t99 != 2) { NG(); } else { ; }
	
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

