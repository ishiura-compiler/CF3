#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x106 = INT16_MIN;
volatile int32_t t1 = 1189;
static int8_t x151 = INT8_MIN;
int8_t x152 = INT8_MIN;
int32_t t2 = 1;
int64_t x284 = INT64_MAX;
volatile int64_t t4 = -1192209LL;
int64_t x441 = INT64_MIN;
uint32_t x443 = UINT32_MAX;
int32_t t6 = -256;
int8_t x733 = -5;
int32_t t7 = 448391098;
uint16_t x854 = 2U;
int16_t x988 = INT16_MAX;
int8_t x1027 = 3;
static volatile int64_t t12 = 3151419LL;
uint64_t x1133 = 2112417427LLU;
uint16_t x1134 = UINT16_MAX;
int32_t x1163 = -1;
static int32_t t14 = -1;
volatile int8_t x1176 = INT8_MAX;
uint64_t x1314 = 80173350399689572LLU;
int16_t x1385 = INT16_MAX;
static uint32_t x1431 = UINT32_MAX;
volatile uint64_t t19 = 115157323651LLU;
static int64_t x1488 = -1LL;
volatile int32_t t21 = 26416;
int64_t x1620 = INT64_MIN;
uint16_t x1698 = UINT16_MAX;
uint8_t x1862 = 1U;
int32_t x1863 = -1;
int16_t x2055 = INT16_MIN;
volatile int32_t t28 = 44912009;
int8_t x2330 = INT8_MIN;
uint64_t x2331 = UINT64_MAX;
static int64_t t33 = 72617727521LL;
int8_t x2497 = INT8_MIN;
uint32_t x2499 = UINT32_MAX;
volatile int32_t t34 = 1;


void f0(void) {
	int8_t x69 = INT8_MAX;
	volatile int16_t x70 = -1;
	static uint64_t x71 = UINT64_MAX;
	int16_t x72 = -1;
	volatile int32_t t0 = 0;

	t0 = ((x69/x70)%(x71==x72));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x105 = INT32_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile int16_t x108 = -1;

	t1 = ((x105/x106)%(x107==x108));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x149 = INT8_MAX;
	volatile int32_t x150 = INT32_MIN;

	t2 = ((x149/x150)%(x151==x152));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = -1;
	volatile int64_t x283 = INT64_MAX;
	static volatile int32_t t3 = -4572974;

	t3 = ((x281/x282)%(x283==x284));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = 8LL;
	int64_t x299 = -1LL;
	int16_t x300 = -1;

	t4 = ((x297/x298)%(x299==x300));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x442 = INT8_MIN;
	int8_t x444 = -1;
	static int64_t t5 = -2514300LL;

	t5 = ((x441/x442)%(x443==x444));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x489 = INT8_MAX;
	uint16_t x490 = 18733U;
	uint16_t x491 = UINT16_MAX;
	uint16_t x492 = UINT16_MAX;

	t6 = ((x489/x490)%(x491==x492));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x734 = UINT16_MAX;
	int8_t x735 = INT8_MIN;
	int8_t x736 = INT8_MIN;

	t7 = ((x733/x734)%(x735==x736));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x757 = -1;
	volatile int8_t x758 = INT8_MAX;
	int64_t x759 = INT64_MIN;
	int64_t x760 = INT64_MIN;
	volatile int32_t t8 = 18849795;

	t8 = ((x757/x758)%(x759==x760));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x817 = INT64_MIN;
	int16_t x818 = -201;
	static int32_t x819 = INT32_MIN;
	volatile int32_t x820 = INT32_MIN;
	int64_t t9 = 979109LL;

	t9 = ((x817/x818)%(x819==x820));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x853 = INT64_MIN;
	int32_t x855 = INT32_MAX;
	int32_t x856 = INT32_MAX;
	volatile int64_t t10 = 451049940495LL;

	t10 = ((x853/x854)%(x855==x856));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x985 = UINT32_MAX;
	int16_t x986 = INT16_MIN;
	volatile int16_t x987 = INT16_MAX;
	static uint32_t t11 = 423260U;

	t11 = ((x985/x986)%(x987==x988));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x1025 = 954363711247LL;
	int64_t x1026 = INT64_MIN;
	static uint8_t x1028 = 3U;

	t12 = ((x1025/x1026)%(x1027==x1028));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1135 = -1;
	static volatile int8_t x1136 = -1;
	static volatile uint64_t t13 = 3383942LLU;

	t13 = ((x1133/x1134)%(x1135==x1136));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x1161 = INT32_MIN;
	volatile int32_t x1162 = -19720881;
	volatile int32_t x1164 = -1;

	t14 = ((x1161/x1162)%(x1163==x1164));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1173 = 1339U;
	uint8_t x1174 = 15U;
	int8_t x1175 = INT8_MAX;
	static volatile uint32_t t15 = 0U;

	t15 = ((x1173/x1174)%(x1175==x1176));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1273 = INT32_MIN;
	uint8_t x1274 = UINT8_MAX;
	uint32_t x1275 = UINT32_MAX;
	int16_t x1276 = -1;
	static volatile int32_t t16 = 146;

	t16 = ((x1273/x1274)%(x1275==x1276));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1313 = -1;
	static volatile int32_t x1315 = -1;
	int32_t x1316 = -1;
	static uint64_t t17 = 219401653400204224LLU;

	t17 = ((x1313/x1314)%(x1315==x1316));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1386 = UINT8_MAX;
	volatile int8_t x1387 = -1;
	int8_t x1388 = -1;
	int32_t t18 = -28377;

	t18 = ((x1385/x1386)%(x1387==x1388));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1429 = 24LLU;
	volatile uint64_t x1430 = UINT64_MAX;
	int16_t x1432 = -1;

	t19 = ((x1429/x1430)%(x1431==x1432));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1485 = INT32_MAX;
	static uint64_t x1486 = 4396949265848549LLU;
	volatile int64_t x1487 = -1LL;
	volatile uint64_t t20 = 20625799303LLU;

	t20 = ((x1485/x1486)%(x1487==x1488));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1585 = -11;
	uint16_t x1586 = 13U;
	static int16_t x1587 = INT16_MIN;
	static int16_t x1588 = INT16_MIN;

	t21 = ((x1585/x1586)%(x1587==x1588));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1617 = INT16_MAX;
	int32_t x1618 = -7559563;
	int64_t x1619 = INT64_MIN;
	int32_t t22 = 63034;

	t22 = ((x1617/x1618)%(x1619==x1620));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1633 = -1;
	static uint8_t x1634 = UINT8_MAX;
	uint8_t x1635 = 1U;
	volatile int8_t x1636 = 1;
	int32_t t23 = 166427551;

	t23 = ((x1633/x1634)%(x1635==x1636));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1697 = 1005;
	static int8_t x1699 = INT8_MIN;
	int8_t x1700 = INT8_MIN;
	int32_t t24 = 4985417;

	t24 = ((x1697/x1698)%(x1699==x1700));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1701 = 0U;
	uint64_t x1702 = 4LLU;
	static int32_t x1703 = -1;
	int16_t x1704 = -1;
	uint64_t t25 = 890721204792274960LLU;

	t25 = ((x1701/x1702)%(x1703==x1704));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1861 = -3603;
	uint32_t x1864 = UINT32_MAX;
	static volatile int32_t t26 = 0;

	t26 = ((x1861/x1862)%(x1863==x1864));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2053 = 9;
	int32_t x2054 = INT32_MAX;
	volatile int16_t x2056 = INT16_MIN;
	volatile int32_t t27 = -862641555;

	t27 = ((x2053/x2054)%(x2055==x2056));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2077 = INT32_MAX;
	int16_t x2078 = -4834;
	volatile int32_t x2079 = -1;
	static int16_t x2080 = -1;

	t28 = ((x2077/x2078)%(x2079==x2080));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x2097 = 1406468U;
	static volatile int8_t x2098 = -6;
	int8_t x2099 = INT8_MAX;
	int8_t x2100 = INT8_MAX;
	volatile uint32_t t29 = 63440U;

	t29 = ((x2097/x2098)%(x2099==x2100));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2177 = -1;
	int32_t x2178 = INT32_MIN;
	uint64_t x2179 = UINT64_MAX;
	uint64_t x2180 = UINT64_MAX;
	volatile int32_t t30 = -564748686;

	t30 = ((x2177/x2178)%(x2179==x2180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2229 = UINT64_MAX;
	int8_t x2230 = INT8_MIN;
	int8_t x2231 = -1;
	int64_t x2232 = -1LL;
	static uint64_t t31 = 51867822190518LLU;

	t31 = ((x2229/x2230)%(x2231==x2232));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2329 = -1;
	int16_t x2332 = -1;
	int32_t t32 = 963970068;

	t32 = ((x2329/x2330)%(x2331==x2332));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2441 = UINT16_MAX;
	static int64_t x2442 = INT64_MAX;
	int32_t x2443 = -1;
	volatile uint32_t x2444 = UINT32_MAX;

	t33 = ((x2441/x2442)%(x2443==x2444));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2498 = 5;
	int32_t x2500 = -1;

	t34 = ((x2497/x2498)%(x2499==x2500));

	if (t34 != 0) { NG(); } else { ; }
	
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


    return 0;
}

