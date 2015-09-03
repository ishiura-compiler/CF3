#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x329 = 19U;
static int32_t x332 = INT32_MAX;
int32_t t0 = 228;


void f0(void) {
	int32_t x330 = INT32_MAX;
	uint8_t x331 = 26U;

	t0 = (x329<<(x330^(x331^x332)));

	if (t0 != 1275068416) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

