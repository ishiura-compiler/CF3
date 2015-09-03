#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x89 = 642563457U;
int16_t x90 = INT16_MIN;
volatile int8_t x92 = INT8_MIN;
uint8_t x122 = 24U;
static volatile int32_t t1 = -38025475;
int64_t x186 = -2995LL;
uint32_t x189 = 1135980U;
uint32_t x626 = 229075605U;
uint32_t x665 = 5144U;
int8_t x667 = -1;
uint64_t x1039 = 288LLU;
int64_t x1040 = INT64_MIN;
uint32_t t10 = 54723U;
volatile int32_t t12 = 117717;
uint8_t x1268 = 0U;
static uint16_t x1407 = UINT16_MAX;
volatile int8_t x1461 = 53;
uint8_t x1462 = 17U;
volatile int64_t x1529 = INT64_MAX;
static int64_t x1530 = INT64_MAX;
static volatile uint64_t x1581 = 135709LLU;
volatile int16_t x1585 = INT16_MIN;
uint8_t x1588 = UINT8_MAX;
volatile uint64_t t22 = 144714296470766LLU;
static volatile uint8_t x1601 = 31U;
static uint64_t x1614 = UINT64_MAX;
volatile uint64_t t24 = 27975727408180621LLU;
static volatile uint64_t x1703 = UINT64_MAX;
int64_t x1755 = -1LL;
volatile int64_t x1756 = -1LL;
int16_t x1844 = 0;
uint16_t x1998 = UINT16_MAX;
static volatile int64_t t31 = -6718LL;
static uint32_t x2026 = UINT32_MAX;
volatile uint32_t t32 = 2366U;
volatile int32_t x2076 = -1;
int64_t t33 = 71689949905077LL;
int8_t x2079 = -1;
int8_t x2295 = 5;
static volatile uint8_t x2296 = 4U;
uint16_t x2506 = UINT16_MAX;


void f0(void) {
	int16_t x91 = 0;
	uint32_t t0 = 14486879U;

	t0 = ((x89-x90)>>(x91*x92));

	if (t0 != 642596225U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x121 = UINT16_MAX;
	int64_t x123 = INT64_MAX;
	int8_t x124 = 0;

	t1 = ((x121-x122)>>(x123*x124));

	if (t1 != 65511) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x185 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	static int32_t x188 = -1;
	static volatile int64_t t2 = -1LL;

	t2 = ((x185-x186)>>(x187*x188));

	if (t2 != 17881LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x190 = INT32_MAX;
	int16_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t3 = 6463U;

	t3 = ((x189-x190)>>(x191*x192));

	if (t3 != 1074309814U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x277 = -1LL;
	int16_t x278 = -1;
	int32_t x279 = -2;
	static uint64_t x280 = UINT64_MAX;
	static volatile int64_t t4 = 47297LL;

	t4 = ((x277-x278)>>(x279*x280));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x389 = -29;
	int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	int32_t x392 = -1;
	static volatile int32_t t5 = 11;

	t5 = ((x389-x390)>>(x391*x392));

	if (t5 != 49) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x625 = INT16_MIN;
	static int8_t x627 = 0;
	int32_t x628 = -3873025;
	uint32_t t6 = 2088335U;

	t6 = ((x625-x626)>>(x627*x628));

	if (t6 != 4065858923U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x666 = INT16_MIN;
	uint64_t x668 = UINT64_MAX;
	uint32_t t7 = 1U;

	t7 = ((x665-x666)>>(x667*x668));

	if (t7 != 18956U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x833 = INT32_MAX;
	uint32_t x834 = UINT32_MAX;
	uint8_t x835 = 3U;
	volatile uint16_t x836 = 1U;
	volatile uint32_t t8 = 4599U;

	t8 = ((x833-x834)>>(x835*x836));

	if (t8 != 268435456U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x941 = 39U;
	static int8_t x942 = 0;
	static int8_t x943 = -9;
	volatile int32_t x944 = -1;
	volatile uint32_t t9 = 6805U;

	t9 = ((x941-x942)>>(x943*x944));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1037 = 0;
	static uint32_t x1038 = 1260432U;

	t10 = ((x1037-x1038)>>(x1039*x1040));

	if (t10 != 4293706864U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1049 = -1;
	static int64_t x1050 = INT64_MIN;
	int8_t x1051 = -1;
	volatile int64_t x1052 = -1LL;
	volatile int64_t t11 = 0LL;

	t11 = ((x1049-x1050)>>(x1051*x1052));

	if (t11 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x1053 = INT8_MAX;
	int8_t x1054 = INT8_MIN;
	int8_t x1055 = 0;
	int64_t x1056 = INT64_MAX;

	t12 = ((x1053-x1054)>>(x1055*x1056));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1233 = -1;
	int64_t x1234 = -1LL;
	int16_t x1235 = -12;
	int8_t x1236 = -4;
	volatile int64_t t13 = 46134125958060421LL;

	t13 = ((x1233-x1234)>>(x1235*x1236));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1241 = 222146296;
	static volatile int32_t x1242 = 1135697;
	static volatile int16_t x1243 = 0;
	static int64_t x1244 = -1LL;
	volatile int32_t t14 = -106482;

	t14 = ((x1241-x1242)>>(x1243*x1244));

	if (t14 != 221010599) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1265 = -798;
	uint32_t x1266 = 1U;
	static volatile int16_t x1267 = 889;
	volatile uint32_t t15 = 1U;

	t15 = ((x1265-x1266)>>(x1267*x1268));

	if (t15 != 4294966497U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1397 = 0;
	uint32_t x1398 = UINT32_MAX;
	volatile int32_t x1399 = -1;
	volatile int16_t x1400 = -1;
	static volatile uint32_t t16 = 4271657U;

	t16 = ((x1397-x1398)>>(x1399*x1400));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1405 = -1;
	uint64_t x1406 = UINT64_MAX;
	static uint8_t x1408 = 0U;
	volatile uint64_t t17 = 664549370LLU;

	t17 = ((x1405-x1406)>>(x1407*x1408));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1463 = -1;
	int8_t x1464 = -1;
	volatile int32_t t18 = -1;

	t18 = ((x1461-x1462)>>(x1463*x1464));

	if (t18 != 18) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1531 = 6U;
	uint32_t x1532 = 1U;
	static int64_t t19 = 0LL;

	t19 = ((x1529-x1530)>>(x1531*x1532));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1557 = -1;
	uint32_t x1558 = 3U;
	int8_t x1559 = INT8_MIN;
	uint64_t x1560 = 0LLU;
	uint32_t t20 = 2064679321U;

	t20 = ((x1557-x1558)>>(x1559*x1560));

	if (t20 != 4294967292U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1582 = UINT32_MAX;
	volatile int8_t x1583 = 0;
	int64_t x1584 = -1LL;
	uint64_t t21 = 184615731646LLU;

	t21 = ((x1581-x1582)>>(x1583*x1584));

	if (t21 != 18446744069414720030LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1586 = 109218LLU;
	uint32_t x1587 = 0U;

	t22 = ((x1585-x1586)>>(x1587*x1588));

	if (t22 != 18446744073709409630LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1602 = 20804890317725782LLU;
	static int8_t x1603 = 0;
	volatile int8_t x1604 = INT8_MAX;
	static uint64_t t23 = 50LLU;

	t23 = ((x1601-x1602)>>(x1603*x1604));

	if (t23 != 18425939183391825865LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1613 = 1U;
	volatile uint64_t x1615 = UINT64_MAX;
	volatile int16_t x1616 = -1;

	t24 = ((x1613-x1614)>>(x1615*x1616));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1701 = INT32_MAX;
	volatile int64_t x1702 = -1LL;
	int16_t x1704 = -1;
	volatile int64_t t25 = 887LL;

	t25 = ((x1701-x1702)>>(x1703*x1704));

	if (t25 != 1073741824LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x1753 = 14366U;
	static int8_t x1754 = -1;
	static volatile int32_t t26 = 0;

	t26 = ((x1753-x1754)>>(x1755*x1756));

	if (t26 != 7183) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x1781 = UINT16_MAX;
	uint16_t x1782 = 20U;
	uint32_t x1783 = 226U;
	int8_t x1784 = 0;
	int32_t t27 = -10;

	t27 = ((x1781-x1782)>>(x1783*x1784));

	if (t27 != 65515) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1841 = INT8_MIN;
	static uint64_t x1842 = 509LLU;
	int8_t x1843 = INT8_MIN;
	volatile uint64_t t28 = 88590314316483236LLU;

	t28 = ((x1841-x1842)>>(x1843*x1844));

	if (t28 != 18446744073709550979LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1921 = INT64_MAX;
	uint8_t x1922 = 0U;
	volatile uint32_t x1923 = UINT32_MAX;
	int16_t x1924 = -1;
	volatile int64_t t29 = 939LL;

	t29 = ((x1921-x1922)>>(x1923*x1924));

	if (t29 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1997 = UINT32_MAX;
	int16_t x1999 = 0;
	volatile int32_t x2000 = INT32_MAX;
	uint32_t t30 = 1477461163U;

	t30 = ((x1997-x1998)>>(x1999*x2000));

	if (t30 != 4294901760U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2001 = INT8_MIN;
	int64_t x2002 = INT64_MIN;
	int32_t x2003 = 4;
	uint16_t x2004 = 12U;

	t31 = ((x2001-x2002)>>(x2003*x2004));

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2025 = 0;
	int8_t x2027 = 0;
	uint8_t x2028 = 43U;

	t32 = ((x2025-x2026)>>(x2027*x2028));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2073 = 13740LL;
	uint8_t x2074 = 26U;
	int64_t x2075 = -1LL;

	t33 = ((x2073-x2074)>>(x2075*x2076));

	if (t33 != 6857LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2077 = 593696;
	static uint8_t x2078 = UINT8_MAX;
	uint32_t x2080 = UINT32_MAX;
	static int32_t t34 = -56272;

	t34 = ((x2077-x2078)>>(x2079*x2080));

	if (t34 != 296720) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2133 = INT16_MIN;
	int32_t x2134 = -150125485;
	volatile uint64_t x2135 = UINT64_MAX;
	volatile int64_t x2136 = -1LL;
	static int32_t t35 = -90815765;

	t35 = ((x2133-x2134)>>(x2135*x2136));

	if (t35 != 75046358) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2293 = -1;
	uint64_t x2294 = 860LLU;
	static uint64_t t36 = 262839962065LLU;

	t36 = ((x2293-x2294)>>(x2295*x2296));

	if (t36 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2397 = 461U;
	static int64_t x2398 = -741000916LL;
	static int64_t x2399 = INT64_MAX;
	int8_t x2400 = 0;
	static volatile int64_t t37 = -16LL;

	t37 = ((x2397-x2398)>>(x2399*x2400));

	if (t37 != 741001377LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2493 = UINT16_MAX;
	uint64_t x2494 = UINT64_MAX;
	int64_t x2495 = -486378LL;
	volatile uint8_t x2496 = 0U;
	volatile uint64_t t38 = 8343164457LLU;

	t38 = ((x2493-x2494)>>(x2495*x2496));

	if (t38 != 65536LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2497 = 2U;
	static uint64_t x2498 = 693456804LLU;
	int8_t x2499 = 0;
	int32_t x2500 = INT32_MIN;
	volatile uint64_t t39 = 248693694LLU;

	t39 = ((x2497-x2498)>>(x2499*x2500));

	if (t39 != 18446744073016094814LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2505 = 47U;
	int16_t x2507 = INT16_MIN;
	volatile int8_t x2508 = 0;
	uint32_t t40 = 15849U;

	t40 = ((x2505-x2506)>>(x2507*x2508));

	if (t40 != 4294901808U) { NG(); } else { ; }
	
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


    return 0;
}

