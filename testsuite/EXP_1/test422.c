#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x245 = -1;
int32_t x246 = -117;
static volatile int32_t t0 = -5935374;
static uint64_t x285 = 137741033424354LLU;
uint8_t x288 = 3U;
int16_t x461 = INT16_MAX;
int8_t x759 = 17;
volatile uint64_t t4 = 10900LLU;
int32_t x1077 = 45654549;
static volatile uint64_t x1369 = 45194124LLU;
static volatile uint64_t t6 = 3760635283616928LLU;


void f0(void) {
	volatile uint8_t x247 = 4U;
	int32_t x248 = 11;

	t0 = (((x245*x246)>>x247)<<x248);

	if (t0 != 14336) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x286 = 0LL;
	uint8_t x287 = 4U;
	volatile uint64_t t1 = 1100487899244197LLU;

	t1 = (((x285*x286)>>x287)<<x288);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x321 = UINT8_MAX;
	static volatile uint64_t x322 = 220068347170364LLU;
	volatile uint8_t x323 = 7U;
	volatile int8_t x324 = 0;
	volatile uint64_t t2 = 417085591871LLU;

	t2 = (((x321*x322)>>x323)<<x324);

	if (t2 != 438417410378459LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x462 = 20238603601904587LLU;
	int64_t x463 = 0LL;
	static int16_t x464 = 0;
	uint64_t t3 = 1195829545LLU;

	t3 = (((x461*x462)>>x463)<<x464);

	if (t3 != 17522281643773295669LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x757 = -1844649LL;
	uint64_t x758 = 1645833LLU;
	int8_t x760 = 5;

	t4 = (((x757*x758)>>x759)<<x760);

	if (t4 != 4503598886163392LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x1078 = UINT32_MAX;
	uint16_t x1079 = 2U;
	int8_t x1080 = 0;
	volatile uint32_t t5 = 322U;

	t5 = (((x1077*x1078)>>x1079)<<x1080);

	if (t5 != 1062328186U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x1370 = -1;
	static int32_t x1371 = 5;
	uint8_t x1372 = 1U;

	t6 = (((x1369*x1370)>>x1371)<<x1372);

	if (t6 != 1152921504604022342LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

