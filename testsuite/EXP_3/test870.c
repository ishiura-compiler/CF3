#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x154 = -1;
static volatile int32_t t3 = 7935644;
uint16_t x372 = 15U;
static uint8_t x471 = 0U;
volatile uint32_t x472 = 3U;
int64_t t5 = -29333134730LL;
uint16_t x695 = UINT16_MAX;
uint64_t x734 = 1841689LLU;
volatile uint8_t x735 = UINT8_MAX;
volatile int8_t x801 = INT8_MIN;
uint8_t x803 = UINT8_MAX;
int8_t x820 = 1;
int64_t x829 = INT64_MAX;
static int8_t x831 = INT8_MAX;
volatile int64_t t11 = 21357078562711146LL;
int16_t x834 = -1;
uint16_t x835 = UINT16_MAX;
int32_t t12 = -1;
volatile int16_t x1077 = INT16_MIN;
static int16_t x1302 = INT16_MAX;
uint64_t x1310 = 25150434299330LLU;
uint64_t x1327 = 15657LLU;
int8_t x1333 = -1;
uint16_t x1335 = UINT16_MAX;
static int32_t t23 = 3239234;
static int64_t x1355 = 32621712066899LL;
volatile int32_t x1530 = 125351;


void f0(void) {
	int8_t x17 = -1;
	int8_t x18 = -1;
	uint32_t x19 = 443U;
	volatile uint16_t x20 = 1U;
	volatile uint32_t t0 = 7380091U;

	t0 = ((x17-x18)|(x19<<x20));

	if (t0 != 886U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x155 = 7;
	uint8_t x156 = 1U;
	volatile int32_t t1 = -882404;

	t1 = ((x153-x154)|(x155<<x156));

	if (t1 != 270) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x237 = -4651;
	static volatile uint64_t x238 = UINT64_MAX;
	static volatile int32_t x239 = 1;
	volatile uint8_t x240 = 6U;
	volatile uint64_t t2 = 12027LLU;

	t2 = ((x237-x238)|(x239<<x240));

	if (t2 != 18446744073709546966LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x253 = 119U;
	int32_t x254 = -8862;
	volatile int16_t x255 = 0;
	uint64_t x256 = 1LLU;

	t3 = ((x253-x254)|(x255<<x256));

	if (t3 != 8981) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x369 = 3;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 0U;
	int32_t t4 = 6;

	t4 = ((x369-x370)|(x371<<x372));

	if (t4 != 32771) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x469 = -1;
	int64_t x470 = 5113667980531155LL;

	t5 = ((x469-x470)|(x471<<x472));

	if (t5 != -5113667980531156LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x581 = 0;
	uint32_t x582 = 113U;
	uint64_t x583 = UINT64_MAX;
	int16_t x584 = 1;
	static uint64_t t6 = UINT64_MAX;

	t6 = ((x581-x582)|(x583<<x584));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x693 = 0;
	int32_t x694 = -72;
	uint64_t x696 = 0LLU;
	volatile int32_t t7 = 99;

	t7 = ((x693-x694)|(x695<<x696));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x733 = UINT64_MAX;
	uint32_t x736 = 8U;
	volatile uint64_t t8 = 1030032312825552781LLU;

	t8 = ((x733-x734)|(x735<<x736));

	if (t8 != 18446744073707716582LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x802 = INT32_MIN;
	uint8_t x804 = 7U;
	int32_t t9 = -6236137;

	t9 = ((x801-x802)|(x803<<x804));

	if (t9 != 2147483520) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x817 = INT8_MIN;
	int32_t x818 = INT32_MIN;
	uint32_t x819 = 153U;
	static volatile uint32_t t10 = 58928182U;

	t10 = ((x817-x818)|(x819<<x820));

	if (t10 != 2147483570U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x830 = UINT16_MAX;
	static int64_t x832 = 1LL;

	t11 = ((x829-x830)|(x831<<x832));

	if (t11 != 9223372036854710526LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x833 = INT8_MIN;
	uint16_t x836 = 3U;

	t12 = ((x833-x834)|(x835<<x836));

	if (t12 != -7) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x1017 = -1;
	static int8_t x1018 = -6;
	uint64_t x1019 = 61001LLU;
	uint16_t x1020 = 0U;
	volatile uint64_t t13 = 2756346677LLU;

	t13 = ((x1017-x1018)|(x1019<<x1020));

	if (t13 != 61005LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1025 = -1;
	volatile int32_t x1026 = INT32_MIN;
	int8_t x1027 = 0;
	uint8_t x1028 = 1U;
	static int32_t t14 = INT32_MAX;

	t14 = ((x1025-x1026)|(x1027<<x1028));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1053 = 12U;
	int32_t x1054 = -1;
	uint8_t x1055 = 12U;
	uint8_t x1056 = 1U;
	int32_t t15 = 3607248;

	t15 = ((x1053-x1054)|(x1055<<x1056));

	if (t15 != 29) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1078 = INT32_MIN;
	static uint64_t x1079 = 556585915470500LLU;
	static uint64_t x1080 = 0LLU;
	uint64_t t16 = 133823017688LLU;

	t16 = ((x1077-x1078)|(x1079<<x1080));

	if (t16 != 556586959360676LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1221 = INT32_MIN;
	int8_t x1222 = INT8_MIN;
	uint16_t x1223 = 41U;
	int32_t x1224 = 0;
	volatile int32_t t17 = -53121;

	t17 = ((x1221-x1222)|(x1223<<x1224));

	if (t17 != -2147483479) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1233 = 1344;
	static uint64_t x1234 = 26343331909LLU;
	uint16_t x1235 = UINT16_MAX;
	volatile int8_t x1236 = 2;
	volatile uint64_t t18 = 1272LLU;

	t18 = ((x1233-x1234)|(x1235<<x1236));

	if (t18 != 18446744047366438911LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1301 = INT8_MIN;
	static uint16_t x1303 = UINT16_MAX;
	int32_t x1304 = 1;
	int32_t t19 = 1777032;

	t19 = ((x1301-x1302)|(x1303<<x1304));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1309 = 5;
	int16_t x1311 = 12799;
	int8_t x1312 = 17;
	volatile uint64_t t20 = 1077045556898731689LLU;

	t20 = ((x1309-x1310)|(x1311<<x1312));

	if (t20 != 18446718924394213955LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1313 = 1051U;
	static int16_t x1314 = INT16_MAX;
	uint16_t x1315 = 254U;
	int16_t x1316 = 1;
	volatile uint32_t t21 = 94409554U;

	t21 = ((x1313-x1314)|(x1315<<x1316));

	if (t21 != 4294936060U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1325 = -1;
	int16_t x1326 = INT16_MAX;
	volatile uint16_t x1328 = 62U;
	uint64_t t22 = 92175LLU;

	t22 = ((x1325-x1326)|(x1327<<x1328));

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1334 = INT16_MAX;
	uint64_t x1336 = 1LLU;

	t23 = ((x1333-x1334)|(x1335<<x1336));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1353 = 57U;
	int8_t x1354 = INT8_MIN;
	uint8_t x1356 = 7U;
	int64_t t24 = -247022598957LL;

	t24 = ((x1353-x1354)|(x1355<<x1356));

	if (t24 != 4175579144563129LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1437 = UINT32_MAX;
	static int8_t x1438 = -1;
	uint32_t x1439 = UINT32_MAX;
	uint16_t x1440 = 0U;
	uint32_t t25 = UINT32_MAX;

	t25 = ((x1437-x1438)|(x1439<<x1440));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1441 = 13LLU;
	uint16_t x1442 = UINT16_MAX;
	static int16_t x1443 = 94;
	uint8_t x1444 = 6U;
	uint64_t t26 = 63670LLU;

	t26 = ((x1441-x1442)|(x1443<<x1444));

	if (t26 != 18446744073709492110LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1529 = INT32_MAX;
	uint64_t x1531 = 43853567639LLU;
	int64_t x1532 = 4LL;
	volatile uint64_t t27 = 81536770290LLU;

	t27 = ((x1529-x1530)|(x1531<<x1532));

	if (t27 != 702227119992LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1605 = -1;
	int8_t x1606 = INT8_MIN;
	uint64_t x1607 = UINT64_MAX;
	int64_t x1608 = 10LL;
	uint64_t t28 = 5622573LLU;

	t28 = ((x1605-x1606)|(x1607<<x1608));

	if (t28 != 18446744073709550719LLU) { NG(); } else { ; }
	
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

