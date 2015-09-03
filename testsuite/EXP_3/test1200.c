#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x78 = 10U;
int32_t t0 = 2565870;
int32_t x282 = -3;
uint64_t x284 = UINT64_MAX;
uint64_t x497 = UINT64_MAX;
int8_t x500 = -1;
uint64_t t3 = 1554961128LLU;
uint16_t x586 = 100U;
int64_t x587 = -1LL;
int16_t x693 = -1;
volatile int32_t x750 = INT32_MAX;
uint32_t x973 = 20277U;
uint32_t t7 = 499332686U;
volatile int8_t x1001 = INT8_MAX;
uint64_t x1004 = UINT64_MAX;
int8_t x1046 = INT8_MAX;
int8_t x1070 = 1;
volatile int16_t x1071 = INT16_MAX;
int64_t t11 = 26191014203LL;
volatile int16_t x1160 = INT16_MIN;
static int64_t x1452 = INT64_MIN;
int64_t x1634 = 149616894868588502LL;
int64_t t17 = 1898615LL;
int8_t x1643 = -1;
volatile int64_t t18 = -53707762741LL;
volatile int16_t x1952 = INT16_MIN;
volatile int8_t x1962 = 26;
int32_t x1964 = INT32_MAX;
volatile int32_t t21 = 1515367;
static int8_t x2180 = INT8_MIN;
uint64_t t22 = 1228155539699LLU;
int8_t x2191 = -1;
int8_t x2197 = INT8_MIN;
int16_t x2198 = INT16_MIN;
static int32_t t24 = -9951;
int64_t x2597 = -1LL;


void f0(void) {
	static int8_t x77 = -1;
	static uint32_t x79 = UINT32_MAX;
	uint32_t x80 = UINT32_MAX;

	t0 = ((x77-x78)/(x79==x80));

	if (t0 != -11) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x253 = 88626U;
	uint64_t x254 = 4272590346493422LLU;
	int8_t x255 = -1;
	volatile int32_t x256 = -1;
	volatile uint64_t t1 = 122LLU;

	t1 = ((x253-x254)/(x255==x256));

	if (t1 != 18442471483363146820LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x281 = 116642907LL;
	uint64_t x283 = UINT64_MAX;
	volatile int64_t t2 = -491291669791LL;

	t2 = ((x281-x282)/(x283==x284));

	if (t2 != 116642910LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x498 = -1LL;
	uint32_t x499 = UINT32_MAX;

	t3 = ((x497-x498)/(x499==x500));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x585 = INT64_MAX;
	int32_t x588 = -1;
	int64_t t4 = -357772LL;

	t4 = ((x585-x586)/(x587==x588));

	if (t4 != 9223372036854775707LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x694 = INT32_MIN;
	static int16_t x695 = INT16_MAX;
	int16_t x696 = INT16_MAX;
	int32_t t5 = INT32_MAX;

	t5 = ((x693-x694)/(x695==x696));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x749 = 1;
	static uint64_t x751 = UINT64_MAX;
	int8_t x752 = -1;
	static volatile int32_t t6 = 756420204;

	t6 = ((x749-x750)/(x751==x752));

	if (t6 != -2147483646) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x974 = INT16_MIN;
	volatile int64_t x975 = -1LL;
	static int8_t x976 = -1;

	t7 = ((x973-x974)/(x975==x976));

	if (t7 != 53045U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x1002 = 1;
	int32_t x1003 = -1;
	int32_t t8 = 37038873;

	t8 = ((x1001-x1002)/(x1003==x1004));

	if (t8 != 126) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x1045 = -1;
	static int16_t x1047 = -1;
	volatile int32_t x1048 = -1;
	static int32_t t9 = 4111;

	t9 = ((x1045-x1046)/(x1047==x1048));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1069 = -1;
	static int16_t x1072 = INT16_MAX;
	int32_t t10 = -64991;

	t10 = ((x1069-x1070)/(x1071==x1072));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1081 = UINT32_MAX;
	volatile int64_t x1082 = INT64_MAX;
	int16_t x1083 = INT16_MIN;
	int16_t x1084 = INT16_MIN;

	t11 = ((x1081-x1082)/(x1083==x1084));

	if (t11 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1157 = 131589072U;
	int16_t x1158 = INT16_MAX;
	static int16_t x1159 = INT16_MIN;
	volatile uint32_t t12 = 4U;

	t12 = ((x1157-x1158)/(x1159==x1160));

	if (t12 != 131556305U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x1325 = INT64_MAX;
	int64_t x1326 = 60998305516061534LL;
	int8_t x1327 = INT8_MAX;
	int8_t x1328 = INT8_MAX;
	volatile int64_t t13 = 9278053770LL;

	t13 = ((x1325-x1326)/(x1327==x1328));

	if (t13 != 9162373731338714273LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1449 = INT8_MIN;
	uint64_t x1450 = 4433793155723LLU;
	int64_t x1451 = INT64_MIN;
	volatile uint64_t t14 = 1430204538876705LLU;

	t14 = ((x1449-x1450)/(x1451==x1452));

	if (t14 != 18446739639916395765LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1469 = -1;
	int8_t x1470 = INT8_MIN;
	uint64_t x1471 = UINT64_MAX;
	int16_t x1472 = -1;
	volatile int32_t t15 = 50;

	t15 = ((x1469-x1470)/(x1471==x1472));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1593 = -1LL;
	volatile int8_t x1594 = 42;
	volatile int32_t x1595 = -1;
	int8_t x1596 = -1;
	int64_t t16 = 113928LL;

	t16 = ((x1593-x1594)/(x1595==x1596));

	if (t16 != -43LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1633 = -7;
	int8_t x1635 = INT8_MIN;
	static int8_t x1636 = INT8_MIN;

	t17 = ((x1633-x1634)/(x1635==x1636));

	if (t17 != -149616894868588509LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1641 = INT64_MIN;
	int16_t x1642 = -1;
	uint64_t x1644 = UINT64_MAX;

	t18 = ((x1641-x1642)/(x1643==x1644));

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x1697 = UINT16_MAX;
	volatile uint32_t x1698 = UINT32_MAX;
	static int32_t x1699 = INT32_MAX;
	static int32_t x1700 = INT32_MAX;
	volatile uint32_t t19 = 1217U;

	t19 = ((x1697-x1698)/(x1699==x1700));

	if (t19 != 65536U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1949 = INT32_MAX;
	static uint8_t x1950 = 0U;
	volatile int16_t x1951 = INT16_MIN;
	static int32_t t20 = INT32_MAX;

	t20 = ((x1949-x1950)/(x1951==x1952));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1961 = INT8_MIN;
	int32_t x1963 = INT32_MAX;

	t21 = ((x1961-x1962)/(x1963==x1964));

	if (t21 != -154) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2177 = 25058863893LLU;
	volatile int32_t x2178 = INT32_MAX;
	int8_t x2179 = INT8_MIN;

	t22 = ((x2177-x2178)/(x2179==x2180));

	if (t22 != 22911380246LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2189 = 63159195094095LLU;
	int32_t x2190 = INT32_MIN;
	volatile uint32_t x2192 = UINT32_MAX;
	uint64_t t23 = 15LLU;

	t23 = ((x2189-x2190)/(x2191==x2192));

	if (t23 != 63161342577743LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2199 = -1;
	int16_t x2200 = -1;

	t24 = ((x2197-x2198)/(x2199==x2200));

	if (t24 != 32640) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2533 = INT8_MAX;
	uint32_t x2534 = 19960043U;
	int16_t x2535 = -1;
	int32_t x2536 = -1;
	uint32_t t25 = 78130982U;

	t25 = ((x2533-x2534)/(x2535==x2536));

	if (t25 != 4275007380U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2598 = INT32_MAX;
	volatile int16_t x2599 = INT16_MIN;
	int16_t x2600 = INT16_MIN;
	static int64_t t26 = -246379392548499LL;

	t26 = ((x2597-x2598)/(x2599==x2600));

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2613 = -1LL;
	int32_t x2614 = -1;
	int32_t x2615 = -1;
	int8_t x2616 = -1;
	int64_t t27 = 20862LL;

	t27 = ((x2613-x2614)/(x2615==x2616));

	if (t27 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

