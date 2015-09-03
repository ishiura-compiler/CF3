#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x30 = 1;
int32_t x31 = -1;


void f0(void) {
	static int64_t x29 = 4734795749LL;
	uint8_t x32 = 11U;
	static int64_t t0 = 2684LL;

	t0 = (x29<<(x30|(x31+x32)));

	if (t0 != 9696861693952LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

