#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x278 = -6647467;
static uint64_t t0 = 90671281LLU;
static int8_t x478 = INT8_MAX;
int32_t x480 = 0;
volatile uint64_t t2 = 427LLU;
int32_t x677 = -1;
uint64_t t4 = UINT64_MAX;
volatile uint8_t x1430 = 3U;


void f0(void) {
	uint64_t x277 = 48531LLU;
	int8_t x279 = 1;
	uint64_t x280 = UINT64_MAX;

	t0 = ((x277|x278)<<(x279+x280));

	if (t0 != 18446744073702915543LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x445 = 0U;
	int16_t x446 = INT16_MIN;
	uint16_t x447 = 11U;
	int16_t x448 = -3;
	uint32_t t1 = 39483U;

	t1 = ((x445|x446)<<(x447+x448));

	if (t1 != 4286578688U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x477 = 62842902011448LLU;
	uint8_t x479 = 25U;

	t2 = ((x477|x478)<<(x479+x480));

	if (t2 != 5729057825288617984LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x678 = 189438716LLU;
	uint64_t x679 = 55LLU;
	int32_t x680 = 0;
	static uint64_t t3 = 50167438LLU;

	t3 = ((x677|x678)<<(x679+x680));

	if (t3 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x785 = UINT64_MAX;
	int8_t x786 = INT8_MIN;
	static int32_t x787 = 1;
	int32_t x788 = -1;

	t4 = ((x785|x786)<<(x787+x788));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x1017 = 69568988133481LLU;
	uint16_t x1018 = 715U;
	static uint8_t x1019 = 3U;
	volatile uint16_t x1020 = 2U;
	uint64_t t5 = 474140794995259089LLU;

	t5 = ((x1017|x1018)<<(x1019+x1020));

	if (t5 != 2226207620291936LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x1033 = INT64_MAX;
	uint64_t x1034 = 457994455074067LLU;
	int16_t x1035 = 0;
	static uint16_t x1036 = 37U;
	volatile uint64_t t6 = 465LLU;

	t6 = ((x1033|x1034)<<(x1035+x1036));

	if (t6 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x1193 = 84U;
	static uint32_t x1194 = 56260078U;
	static uint32_t x1195 = UINT32_MAX;
	volatile uint8_t x1196 = 3U;
	uint32_t t7 = 26U;

	t7 = ((x1193|x1194)<<(x1195+x1196));

	if (t7 != 225040376U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1429 = 49096825LL;
	static int16_t x1431 = 16;
	int32_t x1432 = -14;
	static int64_t t8 = -1LL;

	t8 = ((x1429|x1430)<<(x1431+x1432));

	if (t8 != 196387308LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();


    return 0;
}

