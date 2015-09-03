#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -1;


void f0(void) {
	static int8_t x129 = 5;
	static volatile int8_t x130 = 6;
	volatile int8_t x131 = 0;
	int8_t x132 = -1;

	t0 = (x129>>(x130+(x131&x132)));

	if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

