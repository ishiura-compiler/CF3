#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x253 = INT8_MAX;


void f0(void) {
	uint16_t x254 = 133U;
	int16_t x255 = 26;
	uint8_t x256 = 0U;
	int32_t t0 = -19044099;

	t0 = (x253<<((x254>>x255)|x256));

	if (t0 != 127) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

