#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x48 = 9U;
uint8_t x336 = 11U;
volatile int64_t x433 = 71LL;
uint16_t x435 = UINT16_MAX;
uint8_t x436 = 17U;
static volatile uint64_t x445 = UINT64_MAX;
int16_t x446 = INT16_MIN;
uint64_t t4 = 1700193711LLU;
uint64_t x494 = 1388LLU;
volatile uint32_t x495 = 987247179U;
uint16_t x496 = 4U;
uint64_t t5 = 1274109698951526LLU;
static volatile uint32_t t6 = 26458U;


void f0(void) {
	uint64_t x45 = UINT64_MAX;
	static int8_t x46 = -1;
	uint64_t x47 = 185570717LLU;
	volatile uint64_t t0 = 6039331890531606192LLU;

	t0 = ((x45|(x46+x47))<<x48);

	if (t0 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x209 = INT8_MAX;
	int64_t x210 = -3482713259496103LL;
	int64_t x211 = 18229667681148068LL;
	volatile uint8_t x212 = 1U;
	int64_t t1 = 10702LL;

	t1 = ((x209|(x210+x211))<<x212);

	if (t1 != 29493908843303934LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x333 = 1;
	volatile int32_t x334 = INT32_MIN;
	static uint64_t x335 = 45268463537813LLU;
	static uint64_t t2 = 2505626320422816LLU;

	t2 = ((x333|(x334+x335))<<x336);

	if (t2 != 92705415278929920LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x434 = 23U;
	int64_t t3 = -611746LL;

	t3 = ((x433|(x434+x435))<<x436);

	if (t3 != 8601337856LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x447 = 3U;
	int8_t x448 = 5;

	t4 = ((x445|(x446+x447))<<x448);

	if (t4 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x493 = INT8_MIN;

	t5 = ((x493|(x494+x495))<<x496);

	if (t5 != 18446744073709550448LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x501 = -1;
	uint32_t x502 = UINT32_MAX;
	static int16_t x503 = INT16_MAX;
	uint8_t x504 = 5U;

	t6 = ((x501|(x502+x503))<<x504);

	if (t6 != 4294967264U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x621 = 683328U;
	static volatile int64_t x622 = -1LL;
	int32_t x623 = 4498;
	volatile uint64_t x624 = 4LLU;
	int64_t t7 = -918LL;

	t7 = ((x621|(x622+x623))<<x624);

	if (t7 != 11001104LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x641 = 8551179764187261LL;
	volatile int32_t x642 = -40;
	uint64_t x643 = UINT64_MAX;
	int8_t x644 = 1;
	volatile uint64_t t8 = 113910027309198889LLU;

	t8 = ((x641|(x642+x643))<<x644);

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
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


    return 0;
}

