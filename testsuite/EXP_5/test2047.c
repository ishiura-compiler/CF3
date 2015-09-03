#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint64_t x213 = 41423582852053198LLU;
	int64_t x214 = INT64_MAX;
	static int64_t x215 = INT64_MIN;
	int8_t x216 = -1;
	static uint64_t t0 = 51LLU;

	t0 = (x213<<((x214^x215)-x216));

	if (t0 != 41423582852053198LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

