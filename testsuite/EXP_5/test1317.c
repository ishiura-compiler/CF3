#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x185 = -32976341;
int64_t x188 = -1LL;
static volatile int64_t x219 = -1LL;
int32_t x220 = INT32_MAX;
volatile int32_t t2 = INT32_MAX;
uint64_t t4 = 13365465LLU;
uint32_t x670 = 0U;
volatile int32_t x785 = -4191;
int32_t x786 = -1;
int32_t x788 = -1;
uint64_t x987 = UINT64_MAX;
uint32_t x1044 = UINT32_MAX;
uint32_t t10 = 264468U;
uint32_t x1146 = 0U;
int64_t x1333 = INT64_MIN;
static int8_t x1376 = -1;
int8_t x1407 = 6;
int32_t x1522 = INT32_MIN;
static volatile int32_t t19 = -4682;
int64_t x1628 = INT64_MAX;
int32_t x1821 = INT32_MAX;
static uint16_t x1822 = UINT16_MAX;
static uint32_t x1824 = 3235U;
uint16_t x1840 = UINT16_MAX;


void f0(void) {
	volatile uint16_t x129 = 747U;
	static int16_t x130 = -1;
	static uint64_t x131 = UINT64_MAX;
	int16_t x132 = 13;
	volatile int32_t t0 = 505454244;

	t0 = (x129/((x130==x131)&x132));

	if (t0 != 747) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x186 = INT32_MAX;
	static int32_t x187 = INT32_MAX;
	volatile int64_t t1 = -83144881684LL;

	t1 = (x185/((x186==x187)&x188));

	if (t1 != -32976341LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = -1;

	t2 = (x217/((x218==x219)&x220));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x245 = 10269U;
	int32_t x246 = -1;
	int8_t x247 = -1;
	static int16_t x248 = INT16_MAX;
	static volatile int32_t t3 = -10944;

	t3 = (x245/((x246==x247)&x248));

	if (t3 != 10269) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = -1;
	int8_t x347 = -1;
	volatile uint64_t x348 = 47LLU;

	t4 = (x345/((x346==x347)&x348));

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x509 = INT64_MIN;
	volatile int32_t x510 = INT32_MAX;
	int32_t x511 = INT32_MAX;
	int8_t x512 = -1;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x509/((x510==x511)&x512));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x669 = INT64_MIN;
	uint32_t x671 = 0U;
	int64_t x672 = INT64_MAX;
	static int64_t t6 = INT64_MIN;

	t6 = (x669/((x670==x671)&x672));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x787 = -1;
	int32_t t7 = 470;

	t7 = (x785/((x786==x787)&x788));

	if (t7 != -4191) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x869 = INT8_MIN;
	volatile int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MIN;
	volatile int64_t x872 = INT64_MAX;
	volatile int64_t t8 = -27851703LL;

	t8 = (x869/((x870==x871)&x872));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x985 = 2U;
	int8_t x986 = -1;
	static int8_t x988 = -1;
	static int32_t t9 = 738829340;

	t9 = (x985/((x986==x987)&x988));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x1041 = INT16_MIN;
	int32_t x1042 = INT32_MIN;
	static volatile int32_t x1043 = INT32_MIN;

	t10 = (x1041/((x1042==x1043)&x1044));

	if (t10 != 4294934528U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x1145 = UINT16_MAX;
	uint8_t x1147 = 0U;
	int64_t x1148 = -15LL;
	int64_t t11 = -16544014975501LL;

	t11 = (x1145/((x1146==x1147)&x1148));

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x1285 = 1297119908LLU;
	int8_t x1286 = -1;
	uint32_t x1287 = UINT32_MAX;
	static uint32_t x1288 = 1273294511U;
	uint64_t t12 = 889818621383831LLU;

	t12 = (x1285/((x1286==x1287)&x1288));

	if (t12 != 1297119908LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1293 = UINT32_MAX;
	volatile int32_t x1294 = INT32_MAX;
	int32_t x1295 = INT32_MAX;
	uint8_t x1296 = UINT8_MAX;
	static uint32_t t13 = UINT32_MAX;

	t13 = (x1293/((x1294==x1295)&x1296));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1334 = INT32_MAX;
	int32_t x1335 = INT32_MAX;
	int16_t x1336 = INT16_MAX;
	static volatile int64_t t14 = INT64_MIN;

	t14 = (x1333/((x1334==x1335)&x1336));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1373 = 3731086LLU;
	volatile uint64_t x1374 = UINT64_MAX;
	volatile uint64_t x1375 = UINT64_MAX;
	static volatile uint64_t t15 = 510754488LLU;

	t15 = (x1373/((x1374==x1375)&x1376));

	if (t15 != 3731086LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1377 = 13996915199620230LLU;
	static int32_t x1378 = INT32_MIN;
	static int32_t x1379 = INT32_MIN;
	volatile uint64_t x1380 = 7370925714185LLU;
	volatile uint64_t t16 = 762553383LLU;

	t16 = (x1377/((x1378==x1379)&x1380));

	if (t16 != 13996915199620230LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1405 = -1;
	static int8_t x1406 = 6;
	static int32_t x1408 = 2263263;
	volatile int32_t t17 = 1;

	t17 = (x1405/((x1406==x1407)&x1408));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1421 = 9U;
	uint64_t x1422 = UINT64_MAX;
	static int64_t x1423 = -1LL;
	static int16_t x1424 = INT16_MAX;
	int32_t t18 = 359511517;

	t18 = (x1421/((x1422==x1423)&x1424));

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1521 = -1;
	int32_t x1523 = INT32_MIN;
	volatile uint8_t x1524 = 3U;

	t19 = (x1521/((x1522==x1523)&x1524));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1625 = 0U;
	int8_t x1626 = -1;
	int16_t x1627 = -1;
	volatile int64_t t20 = -16198025398728LL;

	t20 = (x1625/((x1626==x1627)&x1628));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1823 = UINT16_MAX;
	volatile uint32_t t21 = 1771U;

	t21 = (x1821/((x1822==x1823)&x1824));

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1837 = -2;
	static int8_t x1838 = INT8_MIN;
	volatile int8_t x1839 = INT8_MIN;
	volatile int32_t t22 = -129690;

	t22 = (x1837/((x1838==x1839)&x1840));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1853 = 6U;
	static int8_t x1854 = INT8_MIN;
	int8_t x1855 = INT8_MIN;
	volatile int8_t x1856 = 7;
	int32_t t23 = 101800788;

	t23 = (x1853/((x1854==x1855)&x1856));

	if (t23 != 6) { NG(); } else { ; }
	
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


    return 0;
}

