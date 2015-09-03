#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x220 = 3U;
uint16_t x1033 = UINT16_MAX;


void f0(void) {
	static volatile uint64_t x217 = 51298214665607LLU;
	uint16_t x218 = 168U;
	int8_t x219 = INT8_MIN;
	volatile uint64_t t0 = 3561167LLU;

	t0 = (x217<<((x218+x219)>>x220));

	if (t0 != 1641542869299424LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x321 = 5;
	static uint16_t x322 = 118U;
	int8_t x323 = INT8_MAX;
	uint32_t x324 = 28U;
	int32_t t1 = -1;

	t1 = (x321<<((x322+x323)>>x324));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x469 = INT16_MAX;
	uint16_t x470 = 838U;
	uint16_t x471 = 7509U;
	uint8_t x472 = 28U;
	volatile int32_t t2 = 906064837;

	t2 = (x469<<((x470+x471)>>x472));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x725 = UINT16_MAX;
	static uint16_t x726 = UINT16_MAX;
	int16_t x727 = INT16_MIN;
	uint8_t x728 = 13U;
	int32_t t3 = 5771542;

	t3 = (x725<<((x726+x727)>>x728));

	if (t3 != 524280) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x1034 = -1;
	static int16_t x1035 = INT16_MAX;
	static volatile int16_t x1036 = 14;
	volatile int32_t t4 = 287474;

	t4 = (x1033<<((x1034+x1035)>>x1036));

	if (t4 != 131070) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

