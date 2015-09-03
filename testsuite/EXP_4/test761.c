#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MAX;
int8_t x160 = -31;
volatile int64_t t1 = -241LL;
uint32_t x230 = 1U;
volatile int32_t t3 = -350713099;
int16_t x432 = INT16_MIN;
uint64_t x593 = 134LLU;
uint64_t t5 = 127618908795LLU;
static uint64_t x603 = UINT64_MAX;
uint32_t t6 = 217781U;
volatile int8_t x644 = INT8_MIN;
uint64_t t7 = UINT64_MAX;
int32_t t8 = -1537306;
uint64_t x723 = 13LLU;
static int32_t x783 = -423463624;
int32_t t10 = -3234;
int16_t x929 = INT16_MAX;
uint8_t x930 = 0U;
static int16_t x942 = INT16_MAX;
int32_t x944 = -387553427;
volatile int32_t t13 = 233;
static uint16_t x1017 = 6U;
int8_t x1018 = 9;
int64_t x1020 = -1LL;
static int8_t x1042 = INT8_MAX;
volatile int32_t x1567 = 93387613;
uint64_t x1638 = 13LLU;
static volatile int8_t x1639 = INT8_MAX;
int32_t t20 = -7;
int64_t x1943 = INT64_MIN;
int32_t x1944 = INT32_MIN;
static volatile int32_t t22 = 2;
uint8_t x1986 = 1U;
volatile int32_t t23 = -1;
uint8_t x2039 = 22U;
volatile int64_t t24 = INT64_MAX;
static uint8_t x2161 = UINT8_MAX;
volatile int64_t t27 = 9832699LL;


void f0(void) {
	int32_t x105 = INT32_MAX;
	static uint8_t x106 = 1U;
	int64_t x107 = INT64_MAX;
	static int16_t x108 = INT16_MAX;

	t0 = (x105>>(x106>>(x107%x108)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x157 = 6906666904146LL;
	uint32_t x158 = 50U;
	uint64_t x159 = UINT64_MAX;

	t1 = (x157>>(x158>>(x159%x160)));

	if (t1 != 6906666904146LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x229 = 49651U;
	int8_t x231 = -1;
	static volatile uint64_t x232 = UINT64_MAX;
	uint32_t t2 = 63014U;

	t2 = (x229>>(x230>>(x231%x232)));

	if (t2 != 24825U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x401 = 25U;
	uint8_t x402 = 1U;
	uint64_t x403 = 6LLU;
	int8_t x404 = -1;

	t3 = (x401>>(x402>>(x403%x404)));

	if (t3 != 25) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x429 = 1086727U;
	static volatile uint32_t x430 = 621U;
	uint8_t x431 = 6U;
	uint32_t t4 = 461U;

	t4 = (x429>>(x430>>(x431%x432)));

	if (t4 != 2122U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x594 = INT8_MAX;
	static uint16_t x595 = 27U;
	uint16_t x596 = 18266U;

	t5 = (x593>>(x594>>(x595%x596)));

	if (t5 != 134LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x601 = UINT32_MAX;
	uint16_t x602 = 8U;
	uint16_t x604 = UINT16_MAX;

	t6 = (x601>>(x602>>(x603%x604)));

	if (t6 != 16777215U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x641 = UINT64_MAX;
	uint32_t x642 = 36U;
	static int16_t x643 = 6421;

	t7 = (x641>>(x642>>(x643%x644)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x661 = 1469U;
	int16_t x662 = INT16_MAX;
	uint64_t x663 = UINT64_MAX;
	uint8_t x664 = 39U;

	t8 = (x661>>(x662>>(x663%x664)));

	if (t8 != 1469) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x721 = INT8_MAX;
	uint32_t x722 = 26021U;
	volatile int8_t x724 = -1;
	static volatile int32_t t9 = 26159072;

	t9 = (x721>>(x722>>(x723%x724)));

	if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x781 = UINT16_MAX;
	uint16_t x782 = 3U;
	volatile int8_t x784 = -1;

	t10 = (x781>>(x782>>(x783%x784)));

	if (t10 != 8191) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x821 = INT64_MAX;
	static uint16_t x822 = 3U;
	volatile int32_t x823 = INT32_MAX;
	int16_t x824 = -1;
	static int64_t t11 = -285279LL;

	t11 = (x821>>(x822>>(x823%x824)));

	if (t11 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x931 = 27;
	int16_t x932 = INT16_MIN;
	int32_t t12 = 1;

	t12 = (x929>>(x930>>(x931%x932)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x941 = 933;
	uint8_t x943 = 26U;

	t13 = (x941>>(x942>>(x943%x944)));

	if (t13 != 933) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1019 = INT8_MAX;
	volatile int32_t t14 = -2;

	t14 = (x1017>>(x1018>>(x1019%x1020)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x1041 = INT32_MAX;
	uint8_t x1043 = 22U;
	uint8_t x1044 = UINT8_MAX;
	static volatile int32_t t15 = INT32_MAX;

	t15 = (x1041>>(x1042>>(x1043%x1044)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1117 = 95881810LLU;
	int16_t x1118 = INT16_MAX;
	static uint8_t x1119 = UINT8_MAX;
	uint8_t x1120 = 24U;
	volatile uint64_t t16 = 9601603453289LLU;

	t16 = (x1117>>(x1118>>(x1119%x1120)));

	if (t16 != 95881810LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1269 = 3190LLU;
	int8_t x1270 = INT8_MAX;
	int64_t x1271 = INT64_MAX;
	int8_t x1272 = -2;
	volatile uint64_t t17 = 19LLU;

	t17 = (x1269>>(x1270>>(x1271%x1272)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1565 = INT8_MAX;
	int8_t x1566 = 1;
	int16_t x1568 = -1;
	int32_t t18 = 1237;

	t18 = (x1565>>(x1566>>(x1567%x1568)));

	if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1637 = INT8_MAX;
	static int8_t x1640 = -1;
	int32_t t19 = -542655;

	t19 = (x1637>>(x1638>>(x1639%x1640)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1697 = UINT16_MAX;
	static int8_t x1698 = 2;
	int8_t x1699 = 14;
	static int16_t x1700 = -15093;

	t20 = (x1697>>(x1698>>(x1699%x1700)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1941 = 6U;
	int8_t x1942 = 1;
	static int32_t t21 = 116683457;

	t21 = (x1941>>(x1942>>(x1943%x1944)));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1945 = INT32_MAX;
	uint32_t x1946 = 3U;
	uint16_t x1947 = 1U;
	int32_t x1948 = INT32_MAX;

	t22 = (x1945>>(x1946>>(x1947%x1948)));

	if (t22 != 1073741823) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1985 = 50U;
	static uint8_t x1987 = 0U;
	static int64_t x1988 = INT64_MAX;

	t23 = (x1985>>(x1986>>(x1987%x1988)));

	if (t23 != 25) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2037 = INT64_MAX;
	uint16_t x2038 = 38U;
	uint32_t x2040 = UINT32_MAX;

	t24 = (x2037>>(x2038>>(x2039%x2040)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2097 = 70502850LL;
	int8_t x2098 = INT8_MAX;
	int32_t x2099 = 13090;
	int8_t x2100 = 40;
	volatile int64_t t25 = 267042424829LL;

	t25 = (x2097>>(x2098>>(x2099%x2100)));

	if (t25 != 70502850LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2162 = 26;
	uint64_t x2163 = UINT64_MAX;
	uint16_t x2164 = 41U;
	volatile int32_t t26 = -7264;

	t26 = (x2161>>(x2162>>(x2163%x2164)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x2205 = 2LL;
	uint8_t x2206 = 6U;
	uint8_t x2207 = 1U;
	uint8_t x2208 = UINT8_MAX;

	t27 = (x2205>>(x2206>>(x2207%x2208)));

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

