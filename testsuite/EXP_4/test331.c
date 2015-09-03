#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x245 = 46410LL;
volatile int8_t x247 = -1;
int8_t x248 = 0;
uint64_t x517 = 482078137LLU;
int16_t x707 = 2;
static uint64_t t5 = 14957280500211LLU;


void f0(void) {
	static uint64_t x246 = UINT64_MAX;
	int64_t t0 = 1579641100653379LL;

	t0 = (x245<<(x246^(x247-x248)));

	if (t0 != 46410LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x377 = 40U;
	int8_t x378 = -5;
	uint32_t x379 = UINT32_MAX;
	uint8_t x380 = 28U;
	static int32_t t1 = 5725;

	t1 = (x377<<(x378^(x379-x380)));

	if (t1 != 671088640) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x497 = 1665372LLU;
	int16_t x498 = 0;
	int8_t x499 = -1;
	static int32_t x500 = -1;
	volatile uint64_t t2 = 12817261LLU;

	t2 = (x497<<(x498^(x499-x500)));

	if (t2 != 1665372LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x518 = -1;
	int8_t x519 = -25;
	int8_t x520 = -1;
	uint64_t t3 = 6528372094606530487LLU;

	t3 = (x517<<(x518^(x519-x520)));

	if (t3 != 4043964516663296LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x705 = UINT8_MAX;
	static int8_t x706 = INT8_MIN;
	static volatile uint8_t x708 = 124U;
	int32_t t4 = -353406;

	t4 = (x705<<(x706^(x707-x708)));

	if (t4 != 16320) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x989 = UINT64_MAX;
	int8_t x990 = -1;
	int8_t x991 = -1;
	volatile uint64_t x992 = 5LLU;

	t5 = (x989<<(x990^(x991-x992)));

	if (t5 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

