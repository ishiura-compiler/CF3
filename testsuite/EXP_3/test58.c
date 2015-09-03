#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x13 = 7592846508147894LLU;
static uint64_t t0 = 740004543320963LLU;
int64_t t1 = -59962785744996027LL;
int16_t x187 = 12;
int32_t t2 = 14;
int32_t x193 = -34;
static volatile int16_t x195 = -1;
int32_t t3 = 9726947;
int8_t x246 = -1;
int8_t x315 = -1;
int8_t x316 = 10;
volatile int32_t t5 = -7;
uint64_t x334 = UINT64_MAX;
int8_t x335 = 12;
int16_t x336 = 3;
int64_t x438 = -1LL;
volatile uint16_t x607 = 2U;
int32_t x830 = 622;
uint64_t x1271 = 2LLU;
volatile uint64_t x1417 = UINT64_MAX;
uint16_t x1492 = 38U;
uint8_t x1637 = 21U;
int8_t x1638 = INT8_MIN;
volatile int32_t t20 = -3;
static uint8_t x1805 = 5U;
int32_t x1806 = INT32_MAX;
int32_t x1859 = -1;
int16_t x1971 = 19;
int8_t x1972 = -1;
int16_t x1988 = -1;
static uint64_t x2099 = 1LLU;
int64_t t25 = -3352748LL;
volatile int32_t x2134 = -1;
volatile int32_t x2135 = -1;
uint64_t x2185 = UINT64_MAX;


void f0(void) {
	int16_t x14 = INT16_MAX;
	static volatile uint32_t x15 = UINT32_MAX;
	volatile int8_t x16 = 10;

	t0 = ((x13%x14)<<(x15+x16));

	if (t0 != 11805696LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x181 = INT16_MAX;
	int64_t x182 = -1LL;
	volatile uint16_t x183 = 2U;
	volatile uint8_t x184 = 61U;

	t1 = ((x181%x182)<<(x183+x184));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x185 = 0U;
	volatile int16_t x186 = -1;
	uint8_t x188 = 15U;

	t2 = ((x185%x186)<<(x187+x188));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x194 = -1;
	uint32_t x196 = 2U;

	t3 = ((x193%x194)<<(x195+x196));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x245 = -400520340LL;
	uint8_t x247 = 53U;
	uint8_t x248 = 4U;
	volatile int64_t t4 = 5LL;

	t4 = ((x245%x246)<<(x247+x248));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x313 = 8178295;
	int8_t x314 = -3;

	t5 = ((x313%x314)<<(x315+x316));

	if (t5 != 512) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x333 = INT8_MIN;
	volatile uint64_t t6 = 1605478938421780618LLU;

	t6 = ((x333%x334)<<(x335+x336));

	if (t6 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x437 = INT32_MIN;
	int8_t x439 = 1;
	int32_t x440 = -1;
	int64_t t7 = 51LL;

	t7 = ((x437%x438)<<(x439+x440));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x553 = UINT32_MAX;
	int64_t x554 = 1LL;
	volatile int32_t x555 = 54;
	static int32_t x556 = -1;
	volatile int64_t t8 = -108LL;

	t8 = ((x553%x554)<<(x555+x556));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x605 = UINT16_MAX;
	int32_t x606 = -6;
	uint32_t x608 = UINT32_MAX;
	volatile int32_t t9 = 3936647;

	t9 = ((x605%x606)<<(x607+x608));

	if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x829 = 9374643U;
	static int8_t x831 = -1;
	uint16_t x832 = 2U;
	volatile uint32_t t10 = 930413U;

	t10 = ((x829%x830)<<(x831+x832));

	if (t10 != 962U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x913 = UINT32_MAX;
	int16_t x914 = INT16_MAX;
	uint64_t x915 = UINT64_MAX;
	uint16_t x916 = 25U;
	uint32_t t11 = 3184U;

	t11 = ((x913%x914)<<(x915+x916));

	if (t11 != 50331648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1041 = 1U;
	static int64_t x1042 = -1LL;
	volatile int16_t x1043 = -1;
	volatile uint8_t x1044 = 47U;
	static volatile int64_t t12 = 7248981422LL;

	t12 = ((x1041%x1042)<<(x1043+x1044));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1217 = 5U;
	int8_t x1218 = INT8_MIN;
	volatile uint16_t x1219 = 0U;
	static uint8_t x1220 = 2U;
	static int32_t t13 = 59063682;

	t13 = ((x1217%x1218)<<(x1219+x1220));

	if (t13 != 20) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1269 = 57;
	int8_t x1270 = INT8_MAX;
	int8_t x1272 = 10;
	volatile int32_t t14 = 3;

	t14 = ((x1269%x1270)<<(x1271+x1272));

	if (t14 != 233472) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1418 = 16345;
	int8_t x1419 = 1;
	uint8_t x1420 = 2U;
	uint64_t t15 = 323418442690697712LLU;

	t15 = ((x1417%x1418)<<(x1419+x1420));

	if (t15 != 100080LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1473 = INT16_MIN;
	volatile uint64_t x1474 = UINT64_MAX;
	int8_t x1475 = 6;
	volatile int64_t x1476 = -1LL;
	uint64_t t16 = 515560093358LLU;

	t16 = ((x1473%x1474)<<(x1475+x1476));

	if (t16 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1489 = 32;
	static uint64_t x1490 = 5836371025795LLU;
	int8_t x1491 = -1;
	volatile uint64_t t17 = 23233828101454LLU;

	t17 = ((x1489%x1490)<<(x1491+x1492));

	if (t17 != 4398046511104LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1639 = 0;
	uint16_t x1640 = 3U;
	volatile int32_t t18 = -51873;

	t18 = ((x1637%x1638)<<(x1639+x1640));

	if (t18 != 168) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1709 = UINT64_MAX;
	int8_t x1710 = INT8_MAX;
	static int8_t x1711 = 4;
	static uint64_t x1712 = 28LLU;
	uint64_t t19 = 6997891390842LLU;

	t19 = ((x1709%x1710)<<(x1711+x1712));

	if (t19 != 4294967296LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1745 = -5;
	volatile uint16_t x1746 = 1U;
	int8_t x1747 = 9;
	uint16_t x1748 = 1U;

	t20 = ((x1745%x1746)<<(x1747+x1748));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1807 = -1;
	int32_t x1808 = 9;
	int32_t t21 = 15181338;

	t21 = ((x1805%x1806)<<(x1807+x1808));

	if (t21 != 1280) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1857 = 3690U;
	volatile int32_t x1858 = -1;
	volatile uint8_t x1860 = 22U;
	int32_t t22 = -5;

	t22 = ((x1857%x1858)<<(x1859+x1860));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1969 = INT64_MIN;
	int64_t x1970 = INT64_MIN;
	volatile int64_t t23 = -7043778811LL;

	t23 = ((x1969%x1970)<<(x1971+x1972));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1985 = 9;
	uint32_t x1986 = 3U;
	uint32_t x1987 = 3U;
	static volatile uint32_t t24 = 2855U;

	t24 = ((x1985%x1986)<<(x1987+x1988));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x2097 = UINT16_MAX;
	volatile int64_t x2098 = INT64_MAX;
	volatile int16_t x2100 = -1;

	t25 = ((x2097%x2098)<<(x2099+x2100));

	if (t25 != 65535LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x2133 = INT16_MAX;
	uint8_t x2136 = 7U;
	int32_t t26 = -74183873;

	t26 = ((x2133%x2134)<<(x2135+x2136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2186 = -1;
	int16_t x2187 = 15;
	int64_t x2188 = 1LL;
	volatile uint64_t t27 = 35561080LLU;

	t27 = ((x2185%x2186)<<(x2187+x2188));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x2237 = 1373248LLU;
	uint16_t x2238 = 1U;
	int32_t x2239 = -2;
	uint32_t x2240 = 5U;
	static uint64_t t28 = 13351594LLU;

	t28 = ((x2237%x2238)<<(x2239+x2240));

	if (t28 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

