#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x165 = INT64_MIN;
static int32_t x167 = 2;
int16_t x485 = -2;
static uint32_t x512 = 8U;


void f0(void) {
	volatile int8_t x166 = INT8_MIN;
	uint8_t x168 = 15U;
	static int32_t t0 = -3;

	t0 = (((x165<=x166)<<x167)<<x168);

	if (t0 != 131072) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x345 = INT64_MAX;
	volatile uint16_t x346 = UINT16_MAX;
	uint8_t x347 = 3U;
	volatile int8_t x348 = 2;
	volatile int32_t t1 = -378;

	t1 = (((x345<=x346)<<x347)<<x348);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x486 = 1U;
	uint8_t x487 = 10U;
	static uint16_t x488 = 0U;
	volatile int32_t t2 = -1;

	t2 = (((x485<=x486)<<x487)<<x488);

	if (t2 != 1024) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x509 = -1;
	volatile int8_t x510 = INT8_MIN;
	int16_t x511 = 0;
	int32_t t3 = -1;

	t3 = (((x509<=x510)<<x511)<<x512);

	if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

