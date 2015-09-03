#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x358 = 3U;
int32_t x360 = -1;


void f0(void) {
	int64_t x357 = 216688887736795LL;
	int32_t x359 = -1;
	static int64_t t0 = -4126924388133210LL;

	t0 = (x357<<(x358|(x359*x360)));

	if (t0 != 1733511101894360LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

