#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 0LL;
uint64_t t0 = 58809804LLU;
volatile int32_t t2 = 118161;
static int32_t x578 = 1;
static int64_t t7 = 16018LL;
int32_t x965 = 1;
static uint8_t x966 = 54U;
int8_t x968 = 0;
int16_t x1060 = 1;
volatile uint8_t x1153 = UINT8_MAX;
int8_t x1154 = -1;
static uint64_t x1221 = 2462247486LLU;


void f0(void) {
	uint64_t x1 = 158527930964416LLU;
	uint64_t x3 = UINT64_MAX;
	static uint8_t x4 = 18U;

	t0 = (x1>>((x2&x3)^x4));

	if (t0 != 604736064LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x93 = INT64_MAX;
	static int16_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = -1;
	static volatile int64_t t1 = INT64_MAX;

	t1 = (x93>>((x94&x95)^x96));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x301 = 36U;
	uint16_t x302 = 7U;
	uint16_t x303 = UINT16_MAX;
	static int64_t x304 = 2LL;

	t2 = (x301>>((x302&x303)^x304));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x389 = INT16_MAX;
	volatile int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	volatile int16_t x392 = INT16_MIN;
	static int32_t t3 = -94279;

	t3 = (x389>>((x390&x391)^x392));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x441 = INT8_MAX;
	volatile int64_t x442 = INT64_MIN;
	int64_t x443 = 29362689610964882LL;
	volatile uint8_t x444 = 14U;
	volatile int32_t t4 = -14793;

	t4 = (x441>>((x442&x443)^x444));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MIN;
	int64_t x539 = -3136LL;
	int32_t x540 = INT32_MIN;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x537>>((x538&x539)^x540));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x577 = 60U;
	volatile uint8_t x579 = 8U;
	int8_t x580 = 1;
	volatile int32_t t6 = -28416;

	t6 = (x577>>((x578&x579)^x580));

	if (t6 != 30) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x589 = 3LL;
	int64_t x590 = 0LL;
	int32_t x591 = -1;
	uint8_t x592 = 1U;

	t7 = (x589>>((x590&x591)^x592));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x737 = 8;
	int8_t x738 = -1;
	int8_t x739 = -17;
	volatile int16_t x740 = -1;
	static volatile int32_t t8 = 3015;

	t8 = (x737>>((x738&x739)^x740));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x917 = INT8_MAX;
	static int32_t x918 = INT32_MAX;
	int64_t x919 = INT64_MIN;
	volatile int8_t x920 = 28;
	volatile int32_t t9 = 19;

	t9 = (x917>>((x918&x919)^x920));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x967 = 26980656476132819LLU;
	volatile int32_t t10 = 120523;

	t10 = (x965>>((x966&x967)^x968));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x1057 = 10U;
	uint8_t x1058 = 13U;
	static int32_t x1059 = INT32_MIN;
	volatile uint32_t t11 = 1970523U;

	t11 = (x1057>>((x1058&x1059)^x1060));

	if (t11 != 5U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x1093 = 1U;
	static int16_t x1094 = INT16_MIN;
	uint16_t x1095 = 295U;
	static uint8_t x1096 = 9U;
	static int32_t t12 = 483702428;

	t12 = (x1093>>((x1094&x1095)^x1096));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1155 = -1LL;
	int16_t x1156 = -1;
	int32_t t13 = 4;

	t13 = (x1153>>((x1154&x1155)^x1156));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1222 = 2898026715161LLU;
	int16_t x1223 = 1;
	uint16_t x1224 = 1U;
	volatile uint64_t t14 = 12LLU;

	t14 = (x1221>>((x1222&x1223)^x1224));

	if (t14 != 2462247486LLU) { NG(); } else { ; }
	
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


    return 0;
}

