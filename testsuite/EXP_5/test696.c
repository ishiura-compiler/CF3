#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x242 = 0;
uint64_t x289 = UINT64_MAX;
int8_t x291 = INT8_MAX;
volatile int32_t t3 = -17868;
uint8_t x346 = 34U;
uint8_t x347 = 1U;
uint64_t x684 = UINT64_MAX;
int16_t x783 = -1;
uint16_t x917 = UINT16_MAX;
int16_t x919 = -1;
int32_t t11 = -4097684;
int8_t x947 = -1;
int8_t x1023 = 3;
static uint32_t x1037 = 127062397U;
int8_t x1040 = -1;
volatile int32_t x1193 = 2255;
static int8_t x1246 = INT8_MIN;
volatile int32_t t19 = -122;


void f0(void) {
	static int64_t x241 = INT64_MAX;
	static uint8_t x243 = UINT8_MAX;
	static int16_t x244 = -1;
	volatile int64_t t0 = 24685LL;

	t0 = (x241>>((x242%x243)-x244));

	if (t0 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x277 = 9U;
	volatile int64_t x278 = -1LL;
	uint16_t x279 = UINT16_MAX;
	static volatile int16_t x280 = -1;
	static int32_t t1 = 160;

	t1 = (x277>>((x278%x279)-x280));

	if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x290 = -1;
	int8_t x292 = -1;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x289>>((x290%x291)-x292));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x297 = 57U;
	int32_t x298 = INT32_MAX;
	int8_t x299 = -1;
	uint32_t x300 = UINT32_MAX;

	t3 = (x297>>((x298%x299)-x300));

	if (t3 != 28) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x345 = 51LLU;
	uint32_t x348 = UINT32_MAX;
	static uint64_t t4 = 43836636707952510LLU;

	t4 = (x345>>((x346%x347)-x348));

	if (t4 != 25LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x429 = 1;
	static int8_t x430 = 0;
	uint8_t x431 = 1U;
	int32_t x432 = -1;
	volatile int32_t t5 = 2;

	t5 = (x429>>((x430%x431)-x432));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x465 = INT64_MAX;
	uint32_t x466 = UINT32_MAX;
	static volatile int8_t x467 = 2;
	uint64_t x468 = UINT64_MAX;
	volatile int64_t t6 = 6995LL;

	t6 = (x465>>((x466%x467)-x468));

	if (t6 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x681 = UINT32_MAX;
	int16_t x682 = 7;
	int32_t x683 = INT32_MAX;
	uint32_t t7 = 1836717U;

	t7 = (x681>>((x682%x683)-x684));

	if (t7 != 16777215U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x709 = UINT16_MAX;
	int64_t x710 = -1LL;
	uint16_t x711 = 14U;
	int32_t x712 = -1;
	int32_t t8 = 53557143;

	t8 = (x709>>((x710%x711)-x712));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x781 = UINT16_MAX;
	static int32_t x782 = INT32_MAX;
	int16_t x784 = -1;
	volatile int32_t t9 = -84466;

	t9 = (x781>>((x782%x783)-x784));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x897 = 16;
	volatile int8_t x898 = INT8_MAX;
	int8_t x899 = INT8_MAX;
	int8_t x900 = -1;
	int32_t t10 = -5003645;

	t10 = (x897>>((x898%x899)-x900));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x918 = 11355U;
	int8_t x920 = -1;

	t11 = (x917>>((x918%x919)-x920));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x945 = 0;
	uint8_t x946 = UINT8_MAX;
	static int8_t x948 = -6;
	static volatile int32_t t12 = 13;

	t12 = (x945>>((x946%x947)-x948));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1021 = 558;
	uint8_t x1022 = 1U;
	static int16_t x1024 = -1;
	int32_t t13 = -27;

	t13 = (x1021>>((x1022%x1023)-x1024));

	if (t13 != 139) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1038 = INT64_MAX;
	int64_t x1039 = -1LL;
	uint32_t t14 = 34653953U;

	t14 = (x1037>>((x1038%x1039)-x1040));

	if (t14 != 63531198U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1041 = 374797476992LLU;
	uint16_t x1042 = 13U;
	int64_t x1043 = INT64_MIN;
	int64_t x1044 = -1LL;
	uint64_t t15 = 3883836LLU;

	t15 = (x1041>>((x1042%x1043)-x1044));

	if (t15 != 22875822LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1161 = INT32_MAX;
	int8_t x1162 = INT8_MIN;
	static int8_t x1163 = INT8_MIN;
	int8_t x1164 = -1;
	int32_t t16 = -21197;

	t16 = (x1161>>((x1162%x1163)-x1164));

	if (t16 != 1073741823) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1194 = INT32_MIN;
	volatile int16_t x1195 = INT16_MIN;
	int64_t x1196 = -1LL;
	volatile int32_t t17 = -225394;

	t17 = (x1193>>((x1194%x1195)-x1196));

	if (t17 != 1127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1237 = 5913354LLU;
	static volatile int8_t x1238 = -1;
	static uint16_t x1239 = UINT16_MAX;
	int8_t x1240 = -1;
	uint64_t t18 = 590642091949848898LLU;

	t18 = (x1237>>((x1238%x1239)-x1240));

	if (t18 != 5913354LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x1245 = 23566U;
	int8_t x1247 = -1;
	volatile uint64_t x1248 = UINT64_MAX;

	t19 = (x1245>>((x1246%x1247)-x1248));

	if (t19 != 11783) { NG(); } else { ; }
	
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


    return 0;
}

