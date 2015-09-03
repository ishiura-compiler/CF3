#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x749 = 94047917858LLU;


void f0(void) {
	volatile int8_t x397 = -1;
	static uint64_t x398 = 44454LLU;
	static uint16_t x399 = 12U;
	uint8_t x400 = 6U;
	volatile uint64_t t0 = 5226LLU;

	t0 = (((x397^x398)>>x399)<<x400);

	if (t0 != 288230376151711040LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x750 = INT16_MIN;
	static int64_t x751 = 1LL;
	static int16_t x752 = 6;
	volatile uint64_t t1 = 15655895718087148LLU;

	t1 = (((x749^x750)>>x751)<<x752);

	if (t1 != 18446741064176559168LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

