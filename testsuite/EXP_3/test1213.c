#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x30 = INT32_MAX;
uint32_t t0 = 16644450U;
int32_t x99 = INT32_MAX;
int16_t x415 = INT16_MIN;
uint32_t x495 = UINT32_MAX;
volatile uint32_t t3 = 19U;
int64_t x555 = INT64_MIN;
int32_t x694 = -1;
volatile int8_t x695 = INT8_MIN;
uint64_t x833 = UINT64_MAX;
volatile int32_t x835 = -1;
static int64_t x1063 = -1LL;
volatile int8_t x1117 = INT8_MAX;
volatile uint8_t x1118 = 112U;
static volatile int32_t t13 = -51952155;
uint16_t x1125 = UINT16_MAX;
int32_t x1128 = -1;


void f0(void) {
	uint32_t x29 = 218U;
	static uint64_t x31 = UINT64_MAX;
	int64_t x32 = -1LL;

	t0 = ((x29*x30)/(x31==x32));

	if (t0 != 4294967078U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x97 = 2U;
	static int16_t x98 = 0;
	static int32_t x100 = INT32_MAX;
	int32_t t1 = -6;

	t1 = ((x97*x98)/(x99==x100));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x413 = 1899LLU;
	uint8_t x414 = 100U;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t2 = 5388107499693167LLU;

	t2 = ((x413*x414)/(x415==x416));

	if (t2 != 189900LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x493 = INT16_MAX;
	static uint32_t x494 = 4046810U;
	volatile int16_t x496 = -1;

	t3 = ((x493*x494)/(x495==x496));

	if (t3 != 3752804390U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x553 = -1;
	static volatile int16_t x554 = -3953;
	int64_t x556 = INT64_MIN;
	static volatile int32_t t4 = 293824076;

	t4 = ((x553*x554)/(x555==x556));

	if (t4 != 3953) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x693 = 457;
	static int8_t x696 = INT8_MIN;
	int32_t t5 = -23212590;

	t5 = ((x693*x694)/(x695==x696));

	if (t5 != -457) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x713 = INT16_MIN;
	static volatile int64_t x714 = 44012129764LL;
	int64_t x715 = -1LL;
	int8_t x716 = -1;
	volatile int64_t t6 = -32226487437LL;

	t6 = ((x713*x714)/(x715==x716));

	if (t6 != -1442189468106752LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x789 = -1;
	static int32_t x790 = -1;
	int8_t x791 = -1;
	uint64_t x792 = UINT64_MAX;
	int32_t t7 = -21527668;

	t7 = ((x789*x790)/(x791==x792));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x834 = 11U;
	uint64_t x836 = UINT64_MAX;
	uint64_t t8 = 24344069191274371LLU;

	t8 = ((x833*x834)/(x835==x836));

	if (t8 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x845 = UINT64_MAX;
	uint32_t x846 = 9U;
	int8_t x847 = -1;
	int32_t x848 = -1;
	uint64_t t9 = 11LLU;

	t9 = ((x845*x846)/(x847==x848));

	if (t9 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x909 = -9380;
	uint16_t x910 = UINT16_MAX;
	int16_t x911 = -1;
	static volatile int32_t x912 = -1;
	static int32_t t10 = 275895410;

	t10 = ((x909*x910)/(x911==x912));

	if (t10 != -614718300) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1061 = 950731LL;
	volatile int64_t x1062 = 9LL;
	int64_t x1064 = -1LL;
	int64_t t11 = -8341590LL;

	t11 = ((x1061*x1062)/(x1063==x1064));

	if (t11 != 8556579LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x1109 = UINT64_MAX;
	static int8_t x1110 = -8;
	int8_t x1111 = -1;
	volatile uint64_t x1112 = UINT64_MAX;
	uint64_t t12 = 160565094250620533LLU;

	t12 = ((x1109*x1110)/(x1111==x1112));

	if (t12 != 8LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x1119 = -1LL;
	int8_t x1120 = -1;

	t13 = ((x1117*x1118)/(x1119==x1120));

	if (t13 != 14224) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x1126 = -6;
	int8_t x1127 = -1;
	int32_t t14 = 1;

	t14 = ((x1125*x1126)/(x1127==x1128));

	if (t14 != -393210) { NG(); } else { ; }
	
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

