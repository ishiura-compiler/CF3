#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 51527171025032LLU;


void f0(void) {
	uint64_t x49 = 702633172875LLU;
	static uint8_t x50 = 55U;
	int8_t x51 = INT8_MAX;
	uint16_t x52 = 623U;

	t0 = ((x49>>x50)%(x51%x52));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

