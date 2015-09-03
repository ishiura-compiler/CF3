#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	static int8_t x65 = 1;
	int64_t x66 = -157597617418LL;
	static int8_t x67 = 0;
	int32_t x68 = 0;
	int32_t t0 = -231526;

	t0 = (x65/((x66==x67)==x68));

	if (t0 != 1) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

