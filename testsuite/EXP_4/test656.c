#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x49 = 1U;
volatile uint8_t x51 = 0U;
volatile uint8_t x614 = 0U;
uint64_t t2 = 654516394605914466LLU;
volatile uint8_t x881 = 120U;
int8_t x882 = 0;
static volatile int32_t t5 = -448;
static uint32_t x1274 = 0U;
uint16_t x1275 = 7U;
static uint32_t x1276 = 175210389U;
uint8_t x1326 = 6U;


void f0(void) {
	static int8_t x50 = 4;
	static int64_t x52 = INT64_MIN;
	static int32_t t0 = -11555708;

	t0 = (x49<<(x50|(x51/x52)));

	if (t0 != 16) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x297 = INT16_MAX;
	int8_t x298 = 0;
	int8_t x299 = -8;
	int8_t x300 = INT8_MAX;
	volatile int32_t t1 = 25;

	t1 = (x297<<(x298|(x299/x300)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x613 = 3729723677365722230LLU;
	uint8_t x615 = 9U;
	uint8_t x616 = 103U;

	t2 = (x613<<(x614|(x615/x616)));

	if (t2 != 3729723677365722230LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x673 = 12U;
	uint8_t x674 = 21U;
	int32_t x675 = -339;
	int8_t x676 = INT8_MIN;
	int32_t t3 = -1001612;

	t3 = (x673<<(x674|(x675/x676)));

	if (t3 != 100663296) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x829 = 16031U;
	int8_t x830 = 0;
	static int16_t x831 = -1;
	int16_t x832 = INT16_MAX;
	volatile int32_t t4 = 3;

	t4 = (x829<<(x830|(x831/x832)));

	if (t4 != 16031) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x883 = INT8_MIN;
	int16_t x884 = -6;

	t5 = (x881<<(x882|(x883/x884)));

	if (t5 != 251658240) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x1273 = 14U;
	static volatile int32_t t6 = -174486926;

	t6 = (x1273<<(x1274|(x1275/x1276)));

	if (t6 != 14) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x1325 = 4U;
	static int64_t x1327 = INT64_MAX;
	static uint64_t x1328 = UINT64_MAX;
	static int32_t t7 = -1765872;

	t7 = (x1325<<(x1326|(x1327/x1328)));

	if (t7 != 256) { NG(); } else { ; }
	
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

