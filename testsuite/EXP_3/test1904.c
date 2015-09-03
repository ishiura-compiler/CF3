#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t2 = -435053301305LL;
uint8_t x940 = 0U;
volatile int64_t t3 = 2223973762121453268LL;
int16_t x1098 = INT16_MIN;


void f0(void) {
	int8_t x297 = 1;
	int32_t x298 = INT32_MAX;
	int32_t x299 = 0;
	int16_t x300 = 12;
	volatile int32_t t0 = -56311;

	t0 = ((x297/x298)<<(x299|x300));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x657 = -9;
	int32_t x658 = INT32_MIN;
	int8_t x659 = 31;
	uint32_t x660 = 3U;
	volatile int32_t t1 = 7;

	t1 = ((x657/x658)<<(x659|x660));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x813 = -1LL;
	uint32_t x814 = UINT32_MAX;
	uint32_t x815 = 51U;
	int8_t x816 = 0;

	t2 = ((x813/x814)<<(x815|x816));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x937 = -2803764286297LL;
	int64_t x938 = INT64_MAX;
	int16_t x939 = 1;

	t3 = ((x937/x938)<<(x939|x940));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x1097 = -1;
	uint64_t x1099 = 0LLU;
	uint16_t x1100 = 20U;
	int32_t t4 = -3;

	t4 = ((x1097/x1098)<<(x1099|x1100));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x1173 = 173786230563662LL;
	int16_t x1174 = 12724;
	uint16_t x1175 = 3U;
	uint8_t x1176 = 2U;
	int64_t t5 = -2499129989152LL;

	t5 = ((x1173/x1174)<<(x1175|x1176));

	if (t5 != 109265155960LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x1237 = INT16_MIN;
	static int32_t x1238 = INT32_MIN;
	uint32_t x1239 = 14U;
	static int16_t x1240 = 7;
	static int32_t t6 = -5;

	t6 = ((x1237/x1238)<<(x1239|x1240));

	if (t6 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

