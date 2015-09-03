#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 3489838954719523912LL;
volatile int64_t x8 = INT64_MAX;
int64_t t0 = 17741623685013LL;


void f0(void) {
	int64_t x6 = INT64_MIN;
	static int8_t x7 = -1;

	t0 = (x5<<(x6^(x7*x8)));

	if (t0 != 6979677909439047824LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

