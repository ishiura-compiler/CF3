#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	static uint8_t x21 = UINT8_MAX;
	uint16_t x22 = 8015U;
	uint32_t x23 = 305224U;
	static uint16_t x24 = 30U;
	int32_t t0 = 133562983;

	t0 = (x21<<((x22|x23)>>x24));

	if (t0 != 255) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

