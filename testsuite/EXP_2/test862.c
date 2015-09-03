#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x47 = 1;
int8_t x49 = 13;
uint16_t x94 = 20579U;
int32_t x110 = 1;
int32_t t4 = -1383;
uint8_t x243 = 3U;
volatile int32_t t7 = -9442601;
static volatile uint16_t x325 = UINT16_MAX;
int16_t x326 = INT16_MAX;
int32_t t8 = 900809132;
static volatile uint8_t x383 = 1U;
static int8_t x588 = INT8_MIN;
int8_t x753 = INT8_MIN;
static int8_t x756 = INT8_MIN;
int8_t x785 = 7;
int8_t x805 = INT8_MAX;
int32_t t14 = 724079;
int64_t x835 = 0LL;
int64_t t15 = -106409582675LL;
uint64_t t16 = 656344LLU;
volatile uint8_t x1021 = UINT8_MAX;
int64_t x1022 = 3637351882228LL;
static int32_t x1024 = -1;
static uint16_t x1085 = UINT16_MAX;
uint64_t x1086 = 430211181196LLU;


void f0(void) {
	uint64_t x41 = UINT64_MAX;
	static uint64_t x42 = 84141205772231884LLU;
	int16_t x43 = 1;
	static int16_t x44 = -1;
	uint64_t t0 = 116373238941LLU;

	t0 = ((x41-(x42<<x43))/x44);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x45 = -29;
	static int64_t x46 = 5833356406814449LL;
	volatile int32_t x48 = 5893531;
	int64_t t1 = 45203005173LL;

	t1 = ((x45-(x46<<x47))/x48);

	if (t1 != -1979579442LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x50 = INT8_MAX;
	static volatile uint8_t x51 = 3U;
	int32_t x52 = -1;
	volatile int32_t t2 = -80381156;

	t2 = ((x49-(x50<<x51))/x52);

	if (t2 != 1003) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x93 = 12;
	uint8_t x95 = 6U;
	int16_t x96 = -1;
	int32_t t3 = 695336;

	t3 = ((x93-(x94<<x95))/x96);

	if (t3 != 1317044) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x109 = UINT16_MAX;
	volatile int8_t x111 = 23;
	uint16_t x112 = UINT16_MAX;

	t4 = ((x109-(x110<<x111))/x112);

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint8_t x202 = UINT8_MAX;
	volatile int32_t x203 = 23;
	static uint16_t x204 = 10U;
	static int32_t t5 = 6;

	t5 = ((x201-(x202<<x203))/x204);

	if (t5 != -213902950) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x241 = -1LL;
	static int64_t x242 = 156945248LL;
	int8_t x244 = -3;
	static volatile int64_t t6 = -1LL;

	t6 = ((x241-(x242<<x243))/x244);

	if (t6 != 418520661LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint16_t x290 = 18U;
	volatile uint32_t x291 = 7U;
	uint16_t x292 = 1U;

	t7 = ((x289-(x290<<x291))/x292);

	if (t7 != 63231) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x327 = 6;
	static volatile int32_t x328 = INT32_MAX;

	t8 = ((x325-(x326<<x327))/x328);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x381 = 8U;
	int64_t x382 = 75678LL;
	static int8_t x384 = INT8_MIN;
	int64_t t9 = -150372LL;

	t9 = ((x381-(x382<<x383))/x384);

	if (t9 != 1182LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x513 = 7;
	static volatile int8_t x514 = INT8_MAX;
	int16_t x515 = 1;
	int32_t x516 = -1;
	int32_t t10 = 1337158;

	t10 = ((x513-(x514<<x515))/x516);

	if (t10 != 247) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x585 = 27U;
	static int16_t x586 = INT16_MAX;
	static uint64_t x587 = 14LLU;
	int32_t t11 = -458;

	t11 = ((x585-(x586<<x587))/x588);

	if (t11 != 4194175) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x754 = 2955U;
	uint8_t x755 = 1U;
	volatile uint32_t t12 = 7652976U;

	t12 = ((x753-(x754<<x755))/x756);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x786 = 101U;
	uint8_t x787 = 3U;
	int64_t x788 = INT64_MIN;
	volatile int64_t t13 = -5493LL;

	t13 = ((x785-(x786<<x787))/x788);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x806 = 1U;
	int8_t x807 = 0;
	int32_t x808 = INT32_MIN;

	t14 = ((x805-(x806<<x807))/x808);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x833 = -1LL;
	int8_t x834 = INT8_MAX;
	static int8_t x836 = INT8_MIN;

	t15 = ((x833-(x834<<x835))/x836);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x949 = 167LLU;
	uint32_t x950 = 29695215U;
	static uint16_t x951 = 27U;
	int16_t x952 = -410;

	t16 = ((x949-(x950<<x951))/x952);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1023 = 21;
	int64_t t17 = 4008806171909128171LL;

	t17 = ((x1021-(x1022<<x1023))/x1024);

	if (t17 != 7628079774518214401LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1087 = 1;
	static uint16_t x1088 = 26U;
	uint64_t t18 = 561LLU;

	t18 = ((x1085-(x1086<<x1087))/x1088);

	if (t18 != 709490123587971336LLU) { NG(); } else { ; }
	
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


    return 0;
}

