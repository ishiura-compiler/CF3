#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x161 = 57735356U;


void f0(void) {
	int32_t x162 = 9;
	static volatile int16_t x163 = -1;
	int64_t x164 = -1LL;
	volatile uint32_t t0 = 1325701742U;

	t0 = (x161<<(x162|(x163^x164)));

	if (t0 != 3790698496U) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

