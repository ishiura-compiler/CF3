#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -42999854;
uint16_t x73 = 17876U;
uint32_t x74 = 26103061U;
uint32_t t3 = 2090556U;
volatile uint64_t t4 = 234536745519126589LLU;
uint64_t x194 = 195LLU;
uint32_t x214 = 1588868U;
int32_t x215 = INT32_MAX;
uint16_t x218 = 2794U;
volatile int32_t x379 = INT32_MAX;
int8_t x380 = 1;
static volatile uint32_t x402 = 913U;
int8_t x454 = -1;
volatile int64_t t16 = 76242676214755514LL;
int8_t x782 = -1;
int8_t x783 = INT8_MIN;
uint32_t x784 = 4U;
int64_t x921 = 397423744805381LL;
uint8_t x922 = UINT8_MAX;
uint16_t x923 = 12U;
int8_t x948 = 5;
static int16_t x967 = -2630;
volatile int16_t x968 = 1;
uint16_t x1038 = 6U;
uint64_t t23 = 23LLU;
volatile uint32_t x1143 = 590330U;
int64_t x1149 = -21563LL;
uint32_t x1150 = 55U;
uint64_t x1173 = 159LLU;
uint64_t x1176 = 2LLU;
volatile int16_t x1390 = -2344;
uint8_t x1391 = UINT8_MAX;
uint64_t t29 = 2778297179239782LLU;
static int64_t x1487 = INT64_MIN;
int64_t t32 = 6686938952LL;
int8_t x1540 = 25;
uint8_t x1556 = 0U;
int64_t x1638 = INT64_MAX;
int64_t x1647 = -1LL;
uint16_t x1648 = 2U;
int64_t t37 = -24362899035688310LL;
uint64_t x1695 = 501LLU;
int32_t x1739 = 106425;
uint8_t x1740 = 1U;
static volatile int8_t x1752 = 1;
static uint32_t x1990 = 794588U;
uint32_t x2034 = UINT32_MAX;
static int16_t x2077 = INT16_MIN;
int64_t x2091 = INT64_MIN;
static uint64_t t52 = 420447LLU;
uint16_t x2249 = UINT16_MAX;
uint8_t x2277 = UINT8_MAX;
static int64_t x2292 = 1LL;
int8_t x2302 = -1;
volatile int64_t x2351 = 19928031147LL;
int32_t x2430 = INT32_MIN;
uint32_t x2432 = 11U;
int64_t x2481 = -1LL;
int64_t t61 = -23801197051224965LL;
volatile uint64_t x2506 = 720322744872943LLU;
int16_t x2550 = INT16_MIN;
volatile int16_t x2552 = 0;
int32_t t63 = 503258491;
int16_t x2693 = -1;
static uint8_t x2694 = 53U;
int16_t x2695 = INT16_MIN;
int8_t x2696 = 1;
int8_t x2898 = INT8_MIN;
static volatile int64_t t67 = 624142LL;
uint8_t x3056 = 2U;
int8_t x3152 = 1;
uint8_t x3357 = UINT8_MAX;
int32_t x3372 = 19;
volatile uint16_t x3430 = 27U;
int64_t x3575 = -412556574200083LL;
uint8_t x3590 = 0U;
uint64_t t79 = 2401948158314806LLU;
int64_t x3646 = 2LL;
volatile uint8_t x3648 = 7U;
int32_t x3769 = INT32_MIN;
uint16_t x3951 = 0U;
uint64_t x4021 = UINT64_MAX;
int8_t x4022 = INT8_MAX;
volatile uint64_t t85 = 2102567LLU;
int16_t x4210 = INT16_MIN;
uint8_t x4212 = 0U;
static uint32_t x4231 = 22495U;
uint8_t x4232 = 1U;
int64_t x4321 = -7054942887LL;
int16_t x4367 = INT16_MIN;
volatile int32_t t91 = -487;
volatile uint8_t x4416 = 0U;
volatile int8_t x4491 = -1;
uint32_t t93 = 837608U;
static uint64_t x4529 = 1873LLU;
int16_t x4531 = INT16_MIN;
uint32_t x4532 = 1U;
int8_t x4536 = 2;
int16_t x4574 = -1;
uint64_t x4575 = 382168932384853498LLU;
int32_t x4649 = INT32_MAX;
int8_t x4652 = 1;
int8_t x4840 = 0;
volatile uint64_t t99 = 9479065920015LLU;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	volatile int32_t x3 = INT32_MIN;
	static int8_t x4 = 0;
	static volatile int32_t t0 = -13;

	t0 = (((x1|x2)^x3)<<x4);

	if (t0 != 2147483602) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 40U;
	volatile int64_t x10 = 4229LL;
	uint16_t x11 = 2U;
	int64_t x12 = 0LL;
	volatile int64_t t1 = -405752403773LL;

	t1 = (((x9|x10)^x11)<<x12);

	if (t1 != 4271LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x65 = 71U;
	uint32_t x66 = 7933404U;
	static int8_t x67 = INT8_MIN;
	uint16_t x68 = 0U;
	static uint32_t t2 = 210646U;

	t2 = (((x65|x66)^x67)<<x68);

	if (t2 != 4287033951U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x75 = -1;
	int16_t x76 = 1;

	t3 = (((x73|x74)^x75)<<x76);

	if (t3 != 4242760788U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x89 = INT8_MAX;
	uint64_t x90 = UINT64_MAX;
	uint32_t x91 = 5725338U;
	uint16_t x92 = 0U;

	t4 = (((x89|x90)^x91)<<x92);

	if (t4 != 18446744073703826277LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x141 = UINT32_MAX;
	int32_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 17U;
	static uint32_t t5 = 5U;

	t5 = (((x141|x142)^x143)<<x144);

	if (t5 != 16646144U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x193 = 23U;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = 0U;
	static volatile uint64_t t6 = 1072180980964988LLU;

	t6 = (((x193|x194)^x195)<<x196);

	if (t6 != 18446744073709551447LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x213 = 188779394U;
	static uint16_t x216 = 11U;
	uint32_t t7 = 1059085U;

	t7 = (((x213|x214)^x215)<<x216);

	if (t7 != 973326336U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x217 = 748766;
	int8_t x219 = 1;
	uint8_t x220 = 1U;
	volatile int32_t t8 = -1043642;

	t8 = (((x217|x218)^x219)<<x220);

	if (t8 != 1498622) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x237 = 1U;
	int8_t x238 = -1;
	int32_t x239 = -450463;
	int8_t x240 = 1;
	int32_t t9 = 332643;

	t9 = (((x237|x238)^x239)<<x240);

	if (t9 != 900924) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x265 = -1;
	static int8_t x266 = INT8_MIN;
	int32_t x267 = -1548;
	int8_t x268 = 1;
	int32_t t10 = -5165;

	t10 = (((x265|x266)^x267)<<x268);

	if (t10 != 3094) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x317 = INT16_MAX;
	static uint16_t x318 = 2301U;
	int8_t x319 = INT8_MAX;
	int16_t x320 = 0;
	static int32_t t11 = -190624;

	t11 = (((x317|x318)^x319)<<x320);

	if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x377 = -3;
	uint64_t x378 = 3455066LLU;
	static uint64_t t12 = 703138LLU;

	t12 = (((x377|x378)^x379)<<x380);

	if (t12 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x401 = 73U;
	uint32_t x403 = UINT32_MAX;
	static int64_t x404 = 8LL;
	volatile uint32_t t13 = 938U;

	t13 = (((x401|x402)^x403)<<x404);

	if (t13 != 4294714880U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x453 = 1;
	static volatile int64_t x455 = -1047263419258378046LL;
	int8_t x456 = 0;
	static volatile int64_t t14 = 1LL;

	t14 = (((x453|x454)^x455)<<x456);

	if (t14 != 1047263419258378045LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x625 = UINT8_MAX;
	int16_t x626 = INT16_MAX;
	uint8_t x627 = 0U;
	uint64_t x628 = 1LLU;
	int32_t t15 = -17;

	t15 = (((x625|x626)^x627)<<x628);

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x697 = INT64_MAX;
	int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MIN;
	uint8_t x700 = 13U;

	t16 = (((x697|x698)^x699)<<x700);

	if (t16 != 268427264LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x781 = INT32_MIN;
	int32_t t17 = -49474;

	t17 = (((x781|x782)^x783)<<x784);

	if (t17 != 2032) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x801 = 1;
	int64_t x802 = INT64_MAX;
	int32_t x803 = 79;
	int8_t x804 = 0;
	volatile int64_t t18 = 16LL;

	t18 = (((x801|x802)^x803)<<x804);

	if (t18 != 9223372036854775728LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x924 = 3;
	volatile int64_t t19 = 435681LL;

	t19 = (((x921|x922)^x923)<<x924);

	if (t19 != 3179389958444952LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x945 = -41792541683965060LL;
	uint32_t x946 = 25328015U;
	volatile uint64_t x947 = 10974LLU;
	volatile uint64_t t20 = 255951708232963LLU;

	t20 = (((x945|x946)^x947)<<x948);

	if (t20 != 17109382740359914528LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x965 = UINT64_MAX;
	volatile int16_t x966 = INT16_MIN;
	volatile uint64_t t21 = 3LLU;

	t21 = (((x965|x966)^x967)<<x968);

	if (t21 != 5258LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1037 = INT16_MIN;
	volatile int64_t x1039 = INT64_MIN;
	uint16_t x1040 = 0U;
	volatile int64_t t22 = 6225LL;

	t22 = (((x1037|x1038)^x1039)<<x1040);

	if (t22 != 9223372036854743046LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1057 = INT16_MIN;
	uint64_t x1058 = 876714193615LLU;
	uint32_t x1059 = UINT32_MAX;
	static uint16_t x1060 = 17U;

	t23 = (((x1057|x1058)^x1059)<<x1060);

	if (t23 != 18446181124198629376LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1141 = UINT32_MAX;
	volatile int16_t x1142 = INT16_MAX;
	volatile uint16_t x1144 = 0U;
	volatile uint32_t t24 = 465264U;

	t24 = (((x1141|x1142)^x1143)<<x1144);

	if (t24 != 4294376965U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1151 = -42;
	uint16_t x1152 = 2U;
	static int64_t t25 = -219201100164938891LL;

	t25 = (((x1149|x1150)^x1151)<<x1152);

	if (t25 != 86148LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1174 = 17554U;
	volatile uint16_t x1175 = 208U;
	static uint64_t t26 = 721LLU;

	t26 = (((x1173|x1174)^x1175)<<x1176);

	if (t26 != 69948LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1321 = 602537917LLU;
	static int16_t x1322 = 1;
	volatile int64_t x1323 = -1LL;
	uint8_t x1324 = 27U;
	uint64_t t27 = 3696255LLU;

	t27 = (((x1321|x1322)^x1323)<<x1324);

	if (t27 != 18365872803321741312LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1333 = -1;
	volatile int64_t x1334 = INT64_MIN;
	int8_t x1335 = -10;
	uint8_t x1336 = 0U;
	volatile int64_t t28 = 20LL;

	t28 = (((x1333|x1334)^x1335)<<x1336);

	if (t28 != 9LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1389 = UINT64_MAX;
	static int32_t x1392 = 39;

	t29 = (((x1389|x1390)^x1391)<<x1392);

	if (t29 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1421 = 112U;
	uint16_t x1422 = 14U;
	uint8_t x1423 = 26U;
	uint16_t x1424 = 2U;
	volatile int32_t t30 = -2;

	t30 = (((x1421|x1422)^x1423)<<x1424);

	if (t30 != 400) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1453 = UINT32_MAX;
	volatile int16_t x1454 = 3;
	uint16_t x1455 = UINT16_MAX;
	uint32_t x1456 = 3U;
	uint32_t t31 = 95U;

	t31 = (((x1453|x1454)^x1455)<<x1456);

	if (t31 != 4294443008U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1485 = INT16_MIN;
	uint8_t x1486 = 89U;
	volatile uint16_t x1488 = 0U;

	t32 = (((x1485|x1486)^x1487)<<x1488);

	if (t32 != 9223372036854743129LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1497 = INT32_MAX;
	uint32_t x1498 = 4065U;
	int64_t x1499 = 1833805711659LL;
	uint8_t x1500 = 3U;
	int64_t t33 = -5LL;

	t33 = (((x1497|x1498)^x1499)<<x1500);

	if (t33 != 14655591003808LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1537 = -1;
	volatile int64_t x1538 = -125223LL;
	volatile uint64_t x1539 = UINT64_MAX;
	uint64_t t34 = 146408LLU;

	t34 = (((x1537|x1538)^x1539)<<x1540);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1553 = UINT32_MAX;
	static int32_t x1554 = INT32_MAX;
	uint32_t x1555 = 299088U;
	volatile uint32_t t35 = 216734U;

	t35 = (((x1553|x1554)^x1555)<<x1556);

	if (t35 != 4294668207U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1637 = 12U;
	static uint64_t x1639 = UINT64_MAX;
	int8_t x1640 = 30;
	uint64_t t36 = 1787513052LLU;

	t36 = (((x1637|x1638)^x1639)<<x1640);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x1645 = -1;
	uint16_t x1646 = 532U;

	t37 = (((x1645|x1646)^x1647)<<x1648);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1677 = INT32_MAX;
	int64_t x1678 = INT64_MIN;
	volatile int64_t x1679 = INT64_MIN;
	static uint16_t x1680 = 6U;
	volatile int64_t t38 = 7188024234584110LL;

	t38 = (((x1677|x1678)^x1679)<<x1680);

	if (t38 != 137438953408LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1693 = 19;
	int32_t x1694 = 135;
	uint8_t x1696 = 0U;
	volatile uint64_t t39 = 16619796167607LLU;

	t39 = (((x1693|x1694)^x1695)<<x1696);

	if (t39 != 354LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1709 = INT16_MIN;
	int8_t x1710 = 1;
	int64_t x1711 = -283078707LL;
	uint16_t x1712 = 0U;
	volatile int64_t t40 = 442105LL;

	t40 = (((x1709|x1710)^x1711)<<x1712);

	if (t40 != 283054028LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1737 = 1U;
	volatile int16_t x1738 = INT16_MAX;
	int32_t t41 = -306;

	t41 = (((x1737|x1738)^x1739)<<x1740);

	if (t41 != 245900) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1749 = INT16_MIN;
	uint64_t x1750 = UINT64_MAX;
	static volatile uint32_t x1751 = UINT32_MAX;
	static uint64_t t42 = 52LLU;

	t42 = (((x1749|x1750)^x1751)<<x1752);

	if (t42 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1757 = -1;
	volatile int64_t x1758 = -1LL;
	int8_t x1759 = INT8_MIN;
	uint16_t x1760 = 6U;
	volatile int64_t t43 = 56763040919051LL;

	t43 = (((x1757|x1758)^x1759)<<x1760);

	if (t43 != 8128LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1793 = INT8_MIN;
	static volatile int32_t x1794 = 62146;
	static volatile int32_t x1795 = INT32_MIN;
	uint8_t x1796 = 0U;
	volatile int32_t t44 = -17251372;

	t44 = (((x1793|x1794)^x1795)<<x1796);

	if (t44 != 2147483586) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1801 = -1LL;
	int16_t x1802 = INT16_MIN;
	uint64_t x1803 = UINT64_MAX;
	uint32_t x1804 = 2U;
	uint64_t t45 = 1050850LLU;

	t45 = (((x1801|x1802)^x1803)<<x1804);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1853 = 102553252224816LLU;
	int8_t x1854 = -1;
	int16_t x1855 = INT16_MAX;
	volatile uint16_t x1856 = 0U;
	uint64_t t46 = 35585165070LLU;

	t46 = (((x1853|x1854)^x1855)<<x1856);

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x1989 = 16283267U;
	uint8_t x1991 = 1U;
	uint8_t x1992 = 5U;
	static volatile uint32_t t47 = 812U;

	t47 = (((x1989|x1990)^x1991)<<x1992);

	if (t47 != 529529792U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2025 = 5U;
	static uint16_t x2026 = UINT16_MAX;
	static volatile uint64_t x2027 = 200976LLU;
	int8_t x2028 = 0;
	static uint64_t t48 = 103640649734906LLU;

	t48 = (((x2025|x2026)^x2027)<<x2028);

	if (t48 != 257775LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2033 = INT16_MIN;
	static int16_t x2035 = -5483;
	int32_t x2036 = 16;
	uint32_t t49 = 216U;

	t49 = (((x2033|x2034)^x2035)<<x2036);

	if (t49 != 359268352U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2078 = 0LLU;
	int64_t x2079 = INT64_MIN;
	uint16_t x2080 = 61U;
	volatile uint64_t t50 = 1059371724586LLU;

	t50 = (((x2077|x2078)^x2079)<<x2080);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2089 = -10;
	int64_t x2090 = INT64_MIN;
	int16_t x2092 = 0;
	static int64_t t51 = 709689630LL;

	t51 = (((x2089|x2090)^x2091)<<x2092);

	if (t51 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2165 = INT16_MIN;
	static volatile uint32_t x2166 = UINT32_MAX;
	static uint64_t x2167 = 24645410310713LLU;
	uint8_t x2168 = 15U;

	t52 = (((x2165|x2166)^x2167)<<x2168);

	if (t52 != 807663348792623104LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2250 = UINT64_MAX;
	volatile uint32_t x2251 = UINT32_MAX;
	volatile uint8_t x2252 = 46U;
	volatile uint64_t t53 = 8223LLU;

	t53 = (((x2249|x2250)^x2251)<<x2252);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x2278 = INT32_MIN;
	static uint64_t x2279 = UINT64_MAX;
	uint8_t x2280 = 1U;
	uint64_t t54 = 45636075198LLU;

	t54 = (((x2277|x2278)^x2279)<<x2280);

	if (t54 != 4294966784LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2289 = INT32_MIN;
	volatile uint64_t x2290 = UINT64_MAX;
	int8_t x2291 = 28;
	uint64_t t55 = 1LLU;

	t55 = (((x2289|x2290)^x2291)<<x2292);

	if (t55 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2301 = UINT8_MAX;
	int32_t x2303 = -1;
	int64_t x2304 = 0LL;
	int32_t t56 = 7;

	t56 = (((x2301|x2302)^x2303)<<x2304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2349 = INT32_MAX;
	static uint8_t x2350 = UINT8_MAX;
	uint8_t x2352 = 7U;
	int64_t t57 = 63496690787577LL;

	t57 = (((x2349|x2350)^x2351)<<x2352);

	if (t57 != 2671892244992LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2417 = 17316433309847871LL;
	int64_t x2418 = -1LL;
	int32_t x2419 = INT32_MIN;
	int32_t x2420 = 0;
	int64_t t58 = -30802858838LL;

	t58 = (((x2417|x2418)^x2419)<<x2420);

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2429 = -1;
	static uint64_t x2431 = 3LLU;
	volatile uint64_t t59 = 126764LLU;

	t59 = (((x2429|x2430)^x2431)<<x2432);

	if (t59 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2433 = -141635811503LL;
	int32_t x2434 = INT32_MAX;
	volatile int32_t x2435 = INT32_MIN;
	int8_t x2436 = 14;
	static int64_t t60 = 1030732LL;

	t60 = (((x2433|x2434)^x2435)<<x2436);

	if (t60 != 2322168557846528LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2482 = INT16_MIN;
	static int32_t x2483 = -2217;
	int8_t x2484 = 29;

	t61 = (((x2481|x2482)^x2483)<<x2484);

	if (t61 != 1189705940992LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x2505 = UINT32_MAX;
	volatile int16_t x2507 = -79;
	static uint8_t x2508 = 39U;
	volatile uint64_t t62 = 29043675011LLU;

	t62 = (((x2505|x2506)^x2507)<<x2508);

	if (t62 != 42880953483264LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2549 = UINT16_MAX;
	volatile int8_t x2551 = -1;

	t63 = (((x2549|x2550)^x2551)<<x2552);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2553 = UINT64_MAX;
	uint8_t x2554 = 2U;
	volatile uint8_t x2555 = 1U;
	uint8_t x2556 = 9U;
	uint64_t t64 = 14898431LLU;

	t64 = (((x2553|x2554)^x2555)<<x2556);

	if (t64 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t t65 = -735669281;

	t65 = (((x2693|x2694)^x2695)<<x2696);

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2897 = -21;
	static volatile uint64_t x2899 = 18537831228075LLU;
	uint64_t x2900 = 57LLU;
	uint64_t t66 = 145181LLU;

	t66 = (((x2897|x2898)^x2899)<<x2900);

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2949 = -1;
	uint16_t x2950 = 5U;
	int64_t x2951 = -28LL;
	uint8_t x2952 = 0U;

	t67 = (((x2949|x2950)^x2951)<<x2952);

	if (t67 != 27LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2973 = INT8_MIN;
	uint64_t x2974 = 7035263LLU;
	static uint64_t x2975 = 7700004LLU;
	uint8_t x2976 = 1U;
	uint64_t t68 = 24LLU;

	t68 = (((x2973|x2974)^x2975)<<x2976);

	if (t68 != 18446744073694151606LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x3033 = -1;
	uint16_t x3034 = 2U;
	static uint64_t x3035 = 506497588953LLU;
	int8_t x3036 = 11;
	uint64_t t69 = 25867LLU;

	t69 = (((x3033|x3034)^x3035)<<x3036);

	if (t69 != 18445706766647373824LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3053 = UINT64_MAX;
	uint16_t x3054 = UINT16_MAX;
	int32_t x3055 = 31424;
	uint64_t t70 = 239717622944LLU;

	t70 = (((x3053|x3054)^x3055)<<x3056);

	if (t70 != 18446744073709425916LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3149 = 1LL;
	static int8_t x3150 = INT8_MIN;
	volatile int32_t x3151 = -1;
	static int64_t t71 = -325261510LL;

	t71 = (((x3149|x3150)^x3151)<<x3152);

	if (t71 != 252LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3229 = 114U;
	int8_t x3230 = 4;
	static uint8_t x3231 = 125U;
	static uint16_t x3232 = 0U;
	static volatile int32_t t72 = -1723640;

	t72 = (((x3229|x3230)^x3231)<<x3232);

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3358 = 1299;
	uint32_t x3359 = 0U;
	uint8_t x3360 = 7U;
	volatile uint32_t t73 = 75793181U;

	t73 = (((x3357|x3358)^x3359)<<x3360);

	if (t73 != 196480U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3369 = 195162778U;
	volatile int32_t x3370 = INT32_MIN;
	int16_t x3371 = INT16_MIN;
	volatile uint32_t t74 = 10821176U;

	t74 = (((x3369|x3370)^x3371)<<x3372);

	if (t74 != 2496659456U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3389 = 0U;
	volatile uint16_t x3390 = UINT16_MAX;
	uint32_t x3391 = 13715U;
	int8_t x3392 = 1;
	static uint32_t t75 = 73U;

	t75 = (((x3389|x3390)^x3391)<<x3392);

	if (t75 != 103640U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x3429 = 20003U;
	uint16_t x3431 = 34U;
	uint8_t x3432 = 2U;
	static int32_t t76 = 1;

	t76 = (((x3429|x3430)^x3431)<<x3432);

	if (t76 != 79972) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3521 = 1214289751U;
	volatile uint64_t x3522 = 153530046054114309LLU;
	int16_t x3523 = INT16_MIN;
	uint8_t x3524 = 42U;
	static volatile uint64_t t77 = 219598807300628LLU;

	t77 = (((x3521|x3522)^x3523)<<x3524);

	if (t77 != 6979836152563892224LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x3573 = INT16_MIN;
	volatile uint64_t x3574 = 13401338LLU;
	uint16_t x3576 = 1U;
	uint64_t t78 = 7515140868224LLU;

	t78 = (((x3573|x3574)^x3575)<<x3576);

	if (t78 != 825113148400686LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x3589 = 3606408561LLU;
	int16_t x3591 = -1;
	uint64_t x3592 = 53LLU;

	t79 = (((x3589|x3590)^x3591)<<x3592);

	if (t79 != 5890708312600608768LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3645 = -1;
	static volatile int16_t x3647 = -1;
	volatile int64_t t80 = -516183LL;

	t80 = (((x3645|x3646)^x3647)<<x3648);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3681 = INT8_MIN;
	int64_t x3682 = 144LL;
	int32_t x3683 = INT32_MIN;
	volatile uint16_t x3684 = 7U;
	int64_t t81 = -3LL;

	t81 = (((x3681|x3682)^x3683)<<x3684);

	if (t81 != 274877892608LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3770 = INT32_MIN;
	uint64_t x3771 = 262013553208864491LLU;
	volatile uint8_t x3772 = 12U;
	static uint64_t t82 = 755957LLU;

	t82 = (((x3769|x3770)^x3771)<<x3772);

	if (t82 != 15150386041454505984LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3781 = 14626568828231LL;
	static volatile uint32_t x3782 = UINT32_MAX;
	volatile uint16_t x3783 = 402U;
	int8_t x3784 = 8;
	int64_t t83 = 1103699LL;

	t83 = (((x3781|x3782)^x3783)<<x3784);

	if (t83 != 3744936604101888LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3949 = INT16_MAX;
	volatile int16_t x3950 = 0;
	volatile uint8_t x3952 = 1U;
	int32_t t84 = 25332;

	t84 = (((x3949|x3950)^x3951)<<x3952);

	if (t84 != 65534) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4023 = UINT32_MAX;
	uint16_t x4024 = 4U;

	t85 = (((x4021|x4022)^x4023)<<x4024);

	if (t85 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4209 = -1;
	static int16_t x4211 = -1;
	int32_t t86 = -1985271;

	t86 = (((x4209|x4210)^x4211)<<x4212);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4229 = 14523U;
	uint32_t x4230 = UINT32_MAX;
	volatile uint32_t t87 = 3862U;

	t87 = (((x4229|x4230)^x4231)<<x4232);

	if (t87 != 4294922304U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4257 = 242U;
	volatile int16_t x4258 = INT16_MIN;
	static int16_t x4259 = INT16_MAX;
	int8_t x4260 = 1;
	static uint32_t t88 = 839267U;

	t88 = (((x4257|x4258)^x4259)<<x4260);

	if (t88 != 4294966810U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4313 = 1;
	uint64_t x4314 = 7559501351421227808LLU;
	static volatile uint16_t x4315 = 38U;
	volatile int8_t x4316 = 1;
	volatile uint64_t t89 = 366LLU;

	t89 = (((x4313|x4314)^x4315)<<x4316);

	if (t89 != 15119002702842455566LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4322 = 3;
	int32_t x4323 = INT32_MIN;
	volatile uint16_t x4324 = 3U;
	volatile int64_t t90 = -33LL;

	t90 = (((x4321|x4322)^x4323)<<x4324);

	if (t90 != 63819541208LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4365 = INT32_MIN;
	int16_t x4366 = INT16_MIN;
	volatile uint8_t x4368 = 0U;

	t91 = (((x4365|x4366)^x4367)<<x4368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4413 = -1;
	static int32_t x4414 = -1;
	static volatile int64_t x4415 = INT64_MIN;
	int64_t t92 = INT64_MAX;

	t92 = (((x4413|x4414)^x4415)<<x4416);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4489 = INT8_MIN;
	uint32_t x4490 = 2102005U;
	int16_t x4492 = 4;

	t93 = (((x4489|x4490)^x4491)<<x4492);

	if (t93 != 160U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x4530 = INT32_MIN;
	volatile uint64_t t94 = 69300494LLU;

	t94 = (((x4529|x4530)^x4531)<<x4532);

	if (t94 != 4294905506LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4533 = UINT32_MAX;
	uint64_t x4534 = UINT64_MAX;
	volatile int64_t x4535 = INT64_MIN;
	volatile uint64_t t95 = 7718052565660LLU;

	t95 = (((x4533|x4534)^x4535)<<x4536);

	if (t95 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4573 = 1552U;
	volatile int16_t x4576 = 26;
	uint64_t t96 = 41970362294300LLU;

	t96 = (((x4573|x4574)^x4575)<<x4576);

	if (t96 != 8787660627351961600LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4650 = INT32_MIN;
	static int8_t x4651 = INT8_MIN;
	volatile int32_t t97 = -23;

	t97 = (((x4649|x4650)^x4651)<<x4652);

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4701 = INT32_MIN;
	int32_t x4702 = INT32_MIN;
	int8_t x4703 = INT8_MIN;
	int16_t x4704 = 0;
	volatile int32_t t98 = 0;

	t98 = (((x4701|x4702)^x4703)<<x4704);

	if (t98 != 2147483520) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4837 = -4;
	static uint64_t x4838 = 5547456LLU;
	uint64_t x4839 = UINT64_MAX;

	t99 = (((x4837|x4838)^x4839)<<x4840);

	if (t99 != 3LLU) { NG(); } else { ; }
	
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

