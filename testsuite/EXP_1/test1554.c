#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x18 = 9U;
static int8_t x186 = INT8_MIN;
uint8_t x187 = UINT8_MAX;
int32_t t3 = -617;
int8_t x198 = -13;
volatile uint16_t x238 = UINT16_MAX;
int8_t x239 = 0;
int64_t x283 = INT64_MIN;
int16_t x296 = 2;
int16_t x329 = INT16_MAX;
static uint32_t x458 = UINT32_MAX;
volatile int16_t x460 = 0;
int16_t x489 = INT16_MAX;
uint16_t x491 = 582U;
static int8_t x532 = 0;
int32_t t15 = 983428;
volatile int16_t x594 = INT16_MIN;
uint64_t x595 = 24795876880932LLU;
int32_t t19 = 80026;
static uint8_t x661 = UINT8_MAX;
uint8_t x662 = 0U;
static volatile int8_t x672 = 6;
int32_t t22 = -1585157;
int64_t x745 = INT64_MAX;
uint16_t x747 = UINT16_MAX;
static int8_t x762 = INT8_MIN;
static int64_t x763 = 31424376108750966LL;
volatile uint32_t x803 = 16127106U;
int64_t x929 = INT64_MIN;
static int32_t x942 = INT32_MIN;
uint8_t x944 = 9U;
static volatile int32_t t27 = 1;
static uint8_t x949 = 31U;
static uint8_t x1020 = 0U;
static int8_t x1073 = INT8_MIN;
uint16_t x1076 = 1U;
uint64_t x1208 = 1LLU;
int32_t t33 = -785593;
uint16_t x1272 = 4U;
volatile int32_t t34 = -16312309;
int8_t x1278 = -1;
static volatile int32_t t35 = 1155;
int64_t x1394 = INT64_MIN;
static uint16_t x1462 = 25U;
int32_t x1491 = INT32_MAX;
int16_t x1576 = 0;
uint8_t x1659 = 0U;
volatile int8_t x1789 = INT8_MAX;
static int32_t x1834 = 40165609;
uint64_t x1861 = 132945634017LLU;
uint32_t x1862 = 8U;
int8_t x1863 = 0;
uint16_t x1880 = 19U;
int8_t x1894 = INT8_MIN;
uint8_t x1920 = 2U;
static int64_t x2005 = -1LL;
int32_t x2008 = 3;
int16_t x2249 = INT16_MAX;
int8_t x2250 = INT8_MAX;
int32_t t57 = -10265239;
uint64_t x2257 = 4587574396052205257LLU;
int32_t x2270 = -1;
volatile uint16_t x2271 = 9823U;
static uint16_t x2289 = 57U;
static int32_t x2290 = -1;
uint8_t x2292 = 4U;
static volatile uint8_t x2350 = 75U;
static int8_t x2351 = INT8_MIN;
volatile int32_t t63 = -323;
int16_t x2414 = INT16_MIN;
volatile uint64_t x2415 = UINT64_MAX;
static int32_t x2416 = 1;
volatile int16_t x2449 = INT16_MAX;
uint64_t t67 = 27771LLU;
static volatile uint8_t x2547 = 13U;
int32_t x2558 = -86945;
int64_t x2569 = 32LL;
int8_t x2570 = INT8_MIN;
static uint32_t x2571 = 2299U;
static int8_t x2572 = 0;
int8_t x2613 = -12;
int32_t x2810 = 38957;
int8_t x2871 = INT8_MIN;
volatile int64_t x2922 = INT64_MAX;
uint16_t x2976 = 49U;
int64_t t80 = 15454366330LL;
int64_t x3122 = -116184762261LL;
volatile int16_t x3124 = 49;
volatile uint64_t t82 = 1864430638024422LLU;
static uint8_t x3156 = 0U;
int32_t x3190 = -6630;
volatile uint16_t x3241 = UINT16_MAX;
volatile int32_t x3243 = INT32_MAX;
uint8_t x3244 = 26U;
volatile int32_t t86 = 325905;
int8_t x3348 = 12;
uint64_t t87 = 363781574244LLU;
uint8_t x3373 = 0U;
int16_t x3374 = INT16_MIN;
uint8_t x3383 = UINT8_MAX;
uint8_t x3412 = 4U;
int32_t x3415 = -141360877;
int8_t x3518 = INT8_MAX;
volatile int32_t t94 = 192;
int32_t x3521 = INT32_MIN;
volatile int32_t t95 = 96461290;
int64_t x3529 = -14LL;
static int32_t x3531 = INT32_MAX;
int64_t x3614 = 0LL;
int32_t x3615 = -1;


void f0(void) {
	int64_t x17 = -1LL;
	volatile uint32_t x19 = 0U;
	uint8_t x20 = 27U;
	static volatile uint32_t t0 = 39792U;

	t0 = (((x17<=x18)*x19)>>x20);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x57 = INT16_MIN;
	volatile int8_t x58 = 1;
	uint8_t x59 = 30U;
	volatile uint16_t x60 = 3U;
	static int32_t t1 = -83109302;

	t1 = (((x57<=x58)*x59)>>x60);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x165 = -57;
	static volatile int8_t x166 = -1;
	volatile int32_t x167 = 11993639;
	int8_t x168 = 0;
	volatile int32_t t2 = 295082;

	t2 = (((x165<=x166)*x167)>>x168);

	if (t2 != 11993639) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int8_t x188 = 4;

	t3 = (((x185<=x186)*x187)>>x188);

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x197 = INT32_MIN;
	int64_t x199 = INT64_MAX;
	int16_t x200 = 1;
	volatile int64_t t4 = -825LL;

	t4 = (((x197<=x198)*x199)>>x200);

	if (t4 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x237 = INT32_MIN;
	uint32_t x240 = 23U;
	volatile int32_t t5 = 9514;

	t5 = (((x237<=x238)*x239)>>x240);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x265 = 1653261;
	int64_t x266 = 26042681452915LL;
	int16_t x267 = 19;
	static int8_t x268 = 8;
	static int32_t t6 = 88636;

	t6 = (((x265<=x266)*x267)>>x268);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x281 = INT8_MIN;
	volatile uint64_t x282 = 1524166LLU;
	uint8_t x284 = 1U;
	volatile int64_t t7 = -2659203213790481061LL;

	t7 = (((x281<=x282)*x283)>>x284);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = 57;
	int32_t t8 = 522171779;

	t8 = (((x293<=x294)*x295)>>x296);

	if (t8 != 14) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	static int16_t x332 = 5;
	int32_t t9 = -1029485992;

	t9 = (((x329<=x330)*x331)>>x332);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x353 = INT32_MAX;
	int64_t x354 = -96349222891616LL;
	int8_t x355 = INT8_MIN;
	static int8_t x356 = 5;
	volatile int32_t t10 = 2;

	t10 = (((x353<=x354)*x355)>>x356);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x445 = 34530109615733180LL;
	int32_t x446 = INT32_MAX;
	int64_t x447 = 64791LL;
	uint16_t x448 = 2U;
	volatile int64_t t11 = -1086981194297316025LL;

	t11 = (((x445<=x446)*x447)>>x448);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x457 = 0;
	uint16_t x459 = 2U;
	volatile int32_t t12 = -2;

	t12 = (((x457<=x458)*x459)>>x460);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x490 = 5;
	int8_t x492 = 2;
	int32_t t13 = 867012;

	t13 = (((x489<=x490)*x491)>>x492);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x529 = INT16_MIN;
	int64_t x530 = INT64_MIN;
	int64_t x531 = INT64_MIN;
	static int64_t t14 = -10LL;

	t14 = (((x529<=x530)*x531)>>x532);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x537 = INT64_MAX;
	int8_t x538 = INT8_MIN;
	int8_t x539 = INT8_MIN;
	volatile uint8_t x540 = 13U;

	t15 = (((x537<=x538)*x539)>>x540);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x593 = UINT64_MAX;
	static uint8_t x596 = 0U;
	uint64_t t16 = 55LLU;

	t16 = (((x593<=x594)*x595)>>x596);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x605 = INT64_MIN;
	int16_t x606 = INT16_MIN;
	int16_t x607 = 1;
	volatile int8_t x608 = 3;
	int32_t t17 = -149962254;

	t17 = (((x605<=x606)*x607)>>x608);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x637 = 854122284LLU;
	int32_t x638 = -1;
	int8_t x639 = INT8_MAX;
	uint8_t x640 = 3U;
	int32_t t18 = -1;

	t18 = (((x637<=x638)*x639)>>x640);

	if (t18 != 15) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x641 = -4034;
	int16_t x642 = -4071;
	static uint16_t x643 = 1782U;
	static uint8_t x644 = 15U;

	t19 = (((x641<=x642)*x643)>>x644);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x663 = UINT64_MAX;
	uint16_t x664 = 5U;
	volatile uint64_t t20 = 1079159852213LLU;

	t20 = (((x661<=x662)*x663)>>x664);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x669 = INT32_MIN;
	uint8_t x670 = 0U;
	int8_t x671 = 3;
	volatile int32_t t21 = -634898;

	t21 = (((x669<=x670)*x671)>>x672);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x709 = INT64_MIN;
	volatile uint32_t x710 = UINT32_MAX;
	int16_t x711 = INT16_MAX;
	volatile int8_t x712 = 1;

	t22 = (((x709<=x710)*x711)>>x712);

	if (t22 != 16383) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x746 = INT64_MAX;
	uint8_t x748 = 4U;
	volatile int32_t t23 = -12434;

	t23 = (((x745<=x746)*x747)>>x748);

	if (t23 != 4095) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x761 = 159159U;
	volatile int8_t x764 = 3;
	volatile int64_t t24 = -10542354987261LL;

	t24 = (((x761<=x762)*x763)>>x764);

	if (t24 != 3928047013593870LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x801 = 168;
	uint16_t x802 = 140U;
	uint16_t x804 = 5U;
	uint32_t t25 = 9933U;

	t25 = (((x801<=x802)*x803)>>x804);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x930 = INT32_MIN;
	int64_t x931 = INT64_MAX;
	int16_t x932 = 37;
	int64_t t26 = -270LL;

	t26 = (((x929<=x930)*x931)>>x932);

	if (t26 != 67108863LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x941 = INT8_MIN;
	volatile int16_t x943 = INT16_MIN;

	t27 = (((x941<=x942)*x943)>>x944);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x950 = INT16_MIN;
	int64_t x951 = INT64_MAX;
	uint8_t x952 = 58U;
	int64_t t28 = 1007713LL;

	t28 = (((x949<=x950)*x951)>>x952);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x965 = 207;
	static uint64_t x966 = UINT64_MAX;
	uint8_t x967 = 22U;
	uint16_t x968 = 15U;
	static volatile int32_t t29 = -7851;

	t29 = (((x965<=x966)*x967)>>x968);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1017 = UINT16_MAX;
	int16_t x1018 = INT16_MIN;
	static uint16_t x1019 = 1U;
	int32_t t30 = -2593;

	t30 = (((x1017<=x1018)*x1019)>>x1020);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1074 = INT32_MIN;
	volatile int64_t x1075 = INT64_MAX;
	int64_t t31 = -8959459805664LL;

	t31 = (((x1073<=x1074)*x1075)>>x1076);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1133 = 98896900U;
	uint16_t x1134 = 4U;
	static uint64_t x1135 = 8001632504LLU;
	uint8_t x1136 = 7U;
	volatile uint64_t t32 = 1297885499737106084LLU;

	t32 = (((x1133<=x1134)*x1135)>>x1136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1205 = UINT8_MAX;
	int32_t x1206 = INT32_MAX;
	volatile uint8_t x1207 = 5U;

	t33 = (((x1205<=x1206)*x1207)>>x1208);

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1269 = -1;
	int32_t x1270 = INT32_MAX;
	int8_t x1271 = INT8_MAX;

	t34 = (((x1269<=x1270)*x1271)>>x1272);

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1277 = INT16_MIN;
	int8_t x1279 = INT8_MAX;
	uint8_t x1280 = 1U;

	t35 = (((x1277<=x1278)*x1279)>>x1280);

	if (t35 != 63) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1381 = 4U;
	static int16_t x1382 = INT16_MIN;
	volatile int64_t x1383 = -1LL;
	uint8_t x1384 = 17U;
	int64_t t36 = 3860067LL;

	t36 = (((x1381<=x1382)*x1383)>>x1384);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1393 = 496LLU;
	uint32_t x1395 = UINT32_MAX;
	static volatile int8_t x1396 = 2;
	static volatile uint32_t t37 = 6U;

	t37 = (((x1393<=x1394)*x1395)>>x1396);

	if (t37 != 1073741823U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1429 = INT8_MAX;
	volatile uint64_t x1430 = 28216195131112LLU;
	uint8_t x1431 = 1U;
	uint16_t x1432 = 0U;
	int32_t t38 = -831;

	t38 = (((x1429<=x1430)*x1431)>>x1432);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1461 = -1LL;
	volatile int32_t x1463 = INT32_MAX;
	uint32_t x1464 = 13U;
	volatile int32_t t39 = -434;

	t39 = (((x1461<=x1462)*x1463)>>x1464);

	if (t39 != 262143) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1489 = 0U;
	uint32_t x1490 = UINT32_MAX;
	uint8_t x1492 = 5U;
	volatile int32_t t40 = -63;

	t40 = (((x1489<=x1490)*x1491)>>x1492);

	if (t40 != 67108863) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1573 = INT32_MIN;
	volatile int8_t x1574 = -1;
	uint16_t x1575 = 427U;
	int32_t t41 = 53423098;

	t41 = (((x1573<=x1574)*x1575)>>x1576);

	if (t41 != 427) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1657 = INT16_MAX;
	uint64_t x1658 = 438LLU;
	volatile uint16_t x1660 = 20U;
	volatile int32_t t42 = 25226;

	t42 = (((x1657<=x1658)*x1659)>>x1660);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1790 = 4U;
	static volatile uint32_t x1791 = 51296789U;
	uint16_t x1792 = 0U;
	static volatile uint32_t t43 = 206494894U;

	t43 = (((x1789<=x1790)*x1791)>>x1792);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1833 = INT64_MIN;
	static uint16_t x1835 = UINT16_MAX;
	int16_t x1836 = 1;
	int32_t t44 = -2001;

	t44 = (((x1833<=x1834)*x1835)>>x1836);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1837 = 25;
	static int8_t x1838 = INT8_MIN;
	uint8_t x1839 = 26U;
	static int16_t x1840 = 6;
	volatile int32_t t45 = 7657;

	t45 = (((x1837<=x1838)*x1839)>>x1840);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1845 = 1471U;
	int32_t x1846 = -1;
	static uint16_t x1847 = 5254U;
	int8_t x1848 = 0;
	int32_t t46 = 55195;

	t46 = (((x1845<=x1846)*x1847)>>x1848);

	if (t46 != 5254) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1864 = 1U;
	int32_t t47 = 444;

	t47 = (((x1861<=x1862)*x1863)>>x1864);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1877 = INT32_MAX;
	uint64_t x1878 = 25046LLU;
	static uint8_t x1879 = 22U;
	int32_t t48 = -252;

	t48 = (((x1877<=x1878)*x1879)>>x1880);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1893 = 348U;
	int8_t x1895 = INT8_MIN;
	int64_t x1896 = 0LL;
	static volatile int32_t t49 = 2467081;

	t49 = (((x1893<=x1894)*x1895)>>x1896);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1917 = -1LL;
	int64_t x1918 = INT64_MIN;
	uint64_t x1919 = UINT64_MAX;
	uint64_t t50 = 1040LLU;

	t50 = (((x1917<=x1918)*x1919)>>x1920);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2006 = 104193855U;
	uint32_t x2007 = 89U;
	volatile uint32_t t51 = 19U;

	t51 = (((x2005<=x2006)*x2007)>>x2008);

	if (t51 != 11U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2125 = INT8_MIN;
	uint16_t x2126 = 19661U;
	static uint8_t x2127 = 9U;
	int16_t x2128 = 4;
	volatile int32_t t52 = -3065103;

	t52 = (((x2125<=x2126)*x2127)>>x2128);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2137 = INT8_MAX;
	uint16_t x2138 = UINT16_MAX;
	int64_t x2139 = INT64_MAX;
	volatile uint8_t x2140 = 1U;
	int64_t t53 = -249890138053LL;

	t53 = (((x2137<=x2138)*x2139)>>x2140);

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2185 = INT64_MAX;
	int32_t x2186 = INT32_MIN;
	uint64_t x2187 = 11208951LLU;
	static uint16_t x2188 = 1U;
	volatile uint64_t t54 = 1840407670668793841LLU;

	t54 = (((x2185<=x2186)*x2187)>>x2188);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2213 = 1;
	int32_t x2214 = -1;
	uint8_t x2215 = 1U;
	int16_t x2216 = 0;
	volatile int32_t t55 = -11048;

	t55 = (((x2213<=x2214)*x2215)>>x2216);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2229 = -1LL;
	int16_t x2230 = -3753;
	uint32_t x2231 = 1618U;
	int8_t x2232 = 1;
	static volatile uint32_t t56 = 65614U;

	t56 = (((x2229<=x2230)*x2231)>>x2232);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2251 = 52U;
	int8_t x2252 = 7;

	t57 = (((x2249<=x2250)*x2251)>>x2252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2258 = 18U;
	int32_t x2259 = 7970064;
	volatile int16_t x2260 = 2;
	volatile int32_t t58 = -496;

	t58 = (((x2257<=x2258)*x2259)>>x2260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2269 = INT8_MIN;
	int8_t x2272 = 0;
	int32_t t59 = -2811;

	t59 = (((x2269<=x2270)*x2271)>>x2272);

	if (t59 != 9823) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2291 = INT8_MAX;
	static int32_t t60 = 11575;

	t60 = (((x2289<=x2290)*x2291)>>x2292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2321 = UINT64_MAX;
	static uint8_t x2322 = UINT8_MAX;
	int64_t x2323 = INT64_MIN;
	int8_t x2324 = 3;
	int64_t t61 = -338077LL;

	t61 = (((x2321<=x2322)*x2323)>>x2324);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2349 = INT32_MAX;
	uint16_t x2352 = 8U;
	int32_t t62 = 1;

	t62 = (((x2349<=x2350)*x2351)>>x2352);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2405 = -1;
	int64_t x2406 = 50231LL;
	uint16_t x2407 = 429U;
	uint8_t x2408 = 1U;

	t63 = (((x2405<=x2406)*x2407)>>x2408);

	if (t63 != 214) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2413 = INT32_MIN;
	volatile uint64_t t64 = 6LLU;

	t64 = (((x2413<=x2414)*x2415)>>x2416);

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2433 = -1;
	uint64_t x2434 = UINT64_MAX;
	uint32_t x2435 = 764958938U;
	uint8_t x2436 = 8U;
	volatile uint32_t t65 = 166U;

	t65 = (((x2433<=x2434)*x2435)>>x2436);

	if (t65 != 2988120U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2450 = -1LL;
	static int8_t x2451 = INT8_MIN;
	uint16_t x2452 = 7U;
	volatile int32_t t66 = 3;

	t66 = (((x2449<=x2450)*x2451)>>x2452);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2513 = UINT16_MAX;
	uint32_t x2514 = UINT32_MAX;
	volatile uint64_t x2515 = 57827251473158392LLU;
	uint8_t x2516 = 6U;

	t67 = (((x2513<=x2514)*x2515)>>x2516);

	if (t67 != 903550804268099LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2525 = 8077915493376859LL;
	volatile int16_t x2526 = INT16_MIN;
	static int64_t x2527 = -1LL;
	static int32_t x2528 = 10;
	volatile int64_t t68 = 363724522LL;

	t68 = (((x2525<=x2526)*x2527)>>x2528);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2545 = 10182U;
	static volatile uint32_t x2546 = UINT32_MAX;
	static uint32_t x2548 = 11U;
	int32_t t69 = 12;

	t69 = (((x2545<=x2546)*x2547)>>x2548);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2557 = 1LL;
	int32_t x2559 = INT32_MAX;
	int64_t x2560 = 28LL;
	int32_t t70 = 2038661;

	t70 = (((x2557<=x2558)*x2559)>>x2560);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t t71 = 35750U;

	t71 = (((x2569<=x2570)*x2571)>>x2572);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2593 = INT64_MAX;
	uint32_t x2594 = UINT32_MAX;
	static int32_t x2595 = INT32_MAX;
	uint16_t x2596 = 0U;
	volatile int32_t t72 = -80429981;

	t72 = (((x2593<=x2594)*x2595)>>x2596);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2614 = INT16_MIN;
	volatile uint64_t x2615 = UINT64_MAX;
	volatile int32_t x2616 = 15;
	volatile uint64_t t73 = 23379830086680252LLU;

	t73 = (((x2613<=x2614)*x2615)>>x2616);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2633 = UINT32_MAX;
	int16_t x2634 = 13153;
	static int32_t x2635 = INT32_MIN;
	uint8_t x2636 = 6U;
	int32_t t74 = -1552;

	t74 = (((x2633<=x2634)*x2635)>>x2636);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2809 = 11985;
	int32_t x2811 = INT32_MAX;
	uint8_t x2812 = 30U;
	volatile int32_t t75 = -6411;

	t75 = (((x2809<=x2810)*x2811)>>x2812);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x2853 = 5521920279759473LLU;
	static int16_t x2854 = INT16_MIN;
	int16_t x2855 = 0;
	uint16_t x2856 = 7U;
	int32_t t76 = 49895;

	t76 = (((x2853<=x2854)*x2855)>>x2856);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x2869 = UINT64_MAX;
	uint64_t x2870 = 2414124892505LLU;
	int8_t x2872 = 0;
	volatile int32_t t77 = -17535;

	t77 = (((x2869<=x2870)*x2871)>>x2872);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2921 = -1;
	uint64_t x2923 = UINT64_MAX;
	int32_t x2924 = 3;
	uint64_t t78 = 106499012LLU;

	t78 = (((x2921<=x2922)*x2923)>>x2924);

	if (t78 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2973 = INT64_MIN;
	int16_t x2974 = INT16_MIN;
	volatile int64_t x2975 = INT64_MAX;
	volatile int64_t t79 = -111633475212LL;

	t79 = (((x2973<=x2974)*x2975)>>x2976);

	if (t79 != 16383LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3057 = -409;
	uint64_t x3058 = 761551312457667048LLU;
	int64_t x3059 = 13LL;
	uint8_t x3060 = 1U;

	t80 = (((x3057<=x3058)*x3059)>>x3060);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x3121 = -1;
	int64_t x3123 = -39885521LL;
	int64_t t81 = 30290180895LL;

	t81 = (((x3121<=x3122)*x3123)>>x3124);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3125 = 0U;
	volatile uint64_t x3126 = UINT64_MAX;
	uint64_t x3127 = 2LLU;
	static int8_t x3128 = 1;

	t82 = (((x3125<=x3126)*x3127)>>x3128);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x3153 = 7004519LL;
	volatile uint32_t x3154 = 6241131U;
	int32_t x3155 = 209752944;
	int32_t t83 = -1298;

	t83 = (((x3153<=x3154)*x3155)>>x3156);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3173 = UINT8_MAX;
	int32_t x3174 = INT32_MIN;
	int32_t x3175 = INT32_MIN;
	uint8_t x3176 = 1U;
	int32_t t84 = 164062;

	t84 = (((x3173<=x3174)*x3175)>>x3176);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x3189 = 21;
	static int64_t x3191 = INT64_MAX;
	uint8_t x3192 = 0U;
	int64_t t85 = 923989573665LL;

	t85 = (((x3189<=x3190)*x3191)>>x3192);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3242 = 1;

	t86 = (((x3241<=x3242)*x3243)>>x3244);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3345 = 1733266447LL;
	volatile int8_t x3346 = -61;
	static uint64_t x3347 = UINT64_MAX;

	t87 = (((x3345<=x3346)*x3347)>>x3348);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x3375 = 18;
	uint16_t x3376 = 0U;
	int32_t t88 = 1;

	t88 = (((x3373<=x3374)*x3375)>>x3376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3381 = INT16_MIN;
	int8_t x3382 = INT8_MIN;
	uint8_t x3384 = 1U;
	int32_t t89 = 1641180;

	t89 = (((x3381<=x3382)*x3383)>>x3384);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3389 = INT64_MAX;
	uint8_t x3390 = UINT8_MAX;
	static uint8_t x3391 = 2U;
	static volatile uint64_t x3392 = 0LLU;
	static volatile int32_t t90 = 6;

	t90 = (((x3389<=x3390)*x3391)>>x3392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3409 = INT32_MAX;
	int8_t x3410 = -3;
	volatile int64_t x3411 = INT64_MIN;
	int64_t t91 = 1019006119011992083LL;

	t91 = (((x3409<=x3410)*x3411)>>x3412);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x3413 = UINT32_MAX;
	volatile int64_t x3414 = -1LL;
	uint64_t x3416 = 12LLU;
	volatile int32_t t92 = -74;

	t92 = (((x3413<=x3414)*x3415)>>x3416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3417 = 0;
	int64_t x3418 = 6929620952LL;
	volatile uint8_t x3419 = 19U;
	volatile uint32_t x3420 = 1U;
	int32_t t93 = -3344;

	t93 = (((x3417<=x3418)*x3419)>>x3420);

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3517 = INT64_MIN;
	uint8_t x3519 = 26U;
	int8_t x3520 = 1;

	t94 = (((x3517<=x3518)*x3519)>>x3520);

	if (t94 != 13) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3522 = 6285898LL;
	uint16_t x3523 = 262U;
	int8_t x3524 = 1;

	t95 = (((x3521<=x3522)*x3523)>>x3524);

	if (t95 != 131) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3530 = 3507U;
	uint16_t x3532 = 10U;
	int32_t t96 = 29;

	t96 = (((x3529<=x3530)*x3531)>>x3532);

	if (t96 != 2097151) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3613 = 8;
	uint8_t x3616 = 11U;
	volatile int32_t t97 = -14;

	t97 = (((x3613<=x3614)*x3615)>>x3616);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x3641 = 256112395LLU;
	int8_t x3642 = INT8_MIN;
	uint8_t x3643 = 1U;
	int8_t x3644 = 14;
	volatile int32_t t98 = 693057199;

	t98 = (((x3641<=x3642)*x3643)>>x3644);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x3649 = 259125666414LLU;
	uint16_t x3650 = 25U;
	static uint64_t x3651 = 1551120002LLU;
	uint8_t x3652 = 2U;
	volatile uint64_t t99 = 1930349LLU;

	t99 = (((x3649<=x3650)*x3651)>>x3652);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

