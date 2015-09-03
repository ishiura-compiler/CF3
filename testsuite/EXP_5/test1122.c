#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x27 = 1;
int32_t x28 = INT32_MIN;
uint16_t x261 = 1U;
int32_t t3 = -1849458;
uint16_t x496 = 26962U;
volatile int32_t t6 = 604744299;
volatile int32_t x585 = INT32_MIN;


void f0(void) {
	int32_t x5 = -37343379;
	int16_t x6 = 5;
	volatile uint8_t x7 = 2U;
	volatile int16_t x8 = 6993;
	int32_t t0 = 30249990;

	t0 = (x5/((x6>>x7)<x8));

	if (t0 != -37343379) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x25 = 23;
	uint64_t x26 = UINT64_MAX;
	int32_t t1 = 396;

	t1 = (x25/((x26>>x27)<x28));

	if (t1 != 23) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x185 = 1081499014992027LL;
	int8_t x186 = INT8_MAX;
	uint8_t x187 = 16U;
	uint32_t x188 = 13U;
	volatile int64_t t2 = -384360525LL;

	t2 = (x185/((x186>>x187)<x188));

	if (t2 != 1081499014992027LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x262 = 1626;
	int8_t x263 = 3;
	uint8_t x264 = UINT8_MAX;

	t3 = (x261/((x262>>x263)<x264));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x493 = 5056;
	static int8_t x494 = 0;
	uint16_t x495 = 3U;
	int32_t t4 = 7;

	t4 = (x493/((x494>>x495)<x496));

	if (t4 != 5056) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x577 = INT16_MIN;
	volatile uint16_t x578 = 31U;
	volatile uint16_t x579 = 0U;
	int64_t x580 = 38LL;
	int32_t t5 = -14894;

	t5 = (x577/((x578>>x579)<x580));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x581 = 19;
	volatile uint16_t x582 = 4U;
	int16_t x583 = 1;
	uint16_t x584 = 12951U;

	t6 = (x581/((x582>>x583)<x584));

	if (t6 != 19) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x586 = 137040U;
	uint8_t x587 = 25U;
	uint64_t x588 = 959947LLU;
	int32_t t7 = INT32_MIN;

	t7 = (x585/((x586>>x587)<x588));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
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


    return 0;
}

