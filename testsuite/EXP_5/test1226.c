#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x142 = -1LL;


void f0(void) {
	static int64_t x141 = -564907016631830403LL;
	volatile uint64_t x143 = UINT64_MAX;
	int8_t x144 = -1;
	int64_t t0 = -204229LL;

	t0 = (x141/((x142==x143)/x144));

	if (t0 != 564907016631830403LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

