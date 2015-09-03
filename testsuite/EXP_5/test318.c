#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x262 = INT32_MAX;
int32_t x263 = INT32_MAX;
uint8_t x534 = 1U;
static int8_t x535 = -1;


void f0(void) {
	int32_t x261 = 0;
	uint16_t x264 = 4U;
	int32_t t0 = 177444;

	t0 = (x261<<((x262-x263)|x264));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x533 = UINT16_MAX;
	uint16_t x536 = 11U;
	int32_t t1 = -27331;

	t1 = (x533<<((x534-x535)|x536));

	if (t1 != 134215680) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

