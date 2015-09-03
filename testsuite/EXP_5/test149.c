#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x390 = 5;
int32_t x689 = 2;


void f0(void) {
	static int64_t x389 = 976919418LL;
	int8_t x391 = 22;
	uint8_t x392 = 3U;
	int64_t t0 = 1336029661714877281LL;

	t0 = (x389<<((x390+x391)|x392));

	if (t0 != 131119904723042304LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x690 = 9LLU;
	int16_t x691 = -1;
	uint16_t x692 = 24U;
	int32_t t1 = 19111;

	t1 = (x689<<((x690+x691)|x692));

	if (t1 != 33554432) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

