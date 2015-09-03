#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x256 = 10U;
uint64_t t1 = 241827540464673LLU;


void f0(void) {
	uint64_t x253 = 1179991645567616087LLU;
	uint64_t x254 = UINT64_MAX;
	uint16_t x255 = 4U;
	uint64_t t0 = 35398004795777LLU;

	t0 = (x253<<(x254-(x255-x256)));

	if (t0 != 866244510744611552LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x433 = 791498LLU;
	int8_t x434 = 0;
	int64_t x435 = -1LL;
	int64_t x436 = -1LL;

	t1 = (x433<<(x434-(x435-x436)));

	if (t1 != 791498LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

