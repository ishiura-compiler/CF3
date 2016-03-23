
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 2518356LLU;
uint32_t x175 = 1589U;
static int32_t t1 = 18557;
volatile uint16_t x373 = 1U;
int32_t t3 = -243;
int16_t x510 = INT16_MAX;
static uint64_t t4 = 245967LLU;
int16_t x530 = -1;
uint16_t x531 = 1U;
uint64_t x657 = 465548268LLU;
volatile uint64_t t7 = 47501883498891LLU;


void f0(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	int16_t x70 = 1893;
	uint8_t x71 = 21U;
	int16_t x72 = 51;

    t0 = ((x69<<(x70&x71))<<x72);

    if (t0 != 18374686479671623680LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x173 = 54U;
	int16_t x174 = INT16_MIN;
	int32_t x176 = 1;

    t1 = ((x173<<(x174&x175))<<x176);

    if (t1 != 108) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x374 = 13U;
	static uint8_t x375 = 2U;
	uint8_t x376 = 0U;
	volatile int32_t t2 = 30;

    t2 = ((x373<<(x374&x375))<<x376);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	int64_t x403 = 11239750LL;
	int8_t x404 = 0;

    t3 = ((x401<<(x402&x403))<<x404);

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x509 = UINT64_MAX;
	int16_t x511 = INT16_MIN;
	uint8_t x512 = 4U;

    t4 = ((x509<<(x510&x511))<<x512);

    if (t4 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x529 = 33458879953LLU;
	uint16_t x532 = 26U;
	static volatile uint64_t t5 = 428773LLU;

    t5 = ((x529<<(x530&x531))<<x532);

    if (t5 != 4490774848716406784LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x577 = 12LLU;
	int64_t x578 = INT64_MIN;
	uint16_t x579 = 12510U;
	uint16_t x580 = 6U;
	volatile uint64_t t6 = 2548262170528795LLU;

    t6 = ((x577<<(x578&x579))<<x580);

    if (t6 != 768LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x658 = 73576895265LLU;
	static int8_t x659 = INT8_MAX;
	uint8_t x660 = 18U;

    t7 = ((x657<<(x658&x659))<<x660);

    if (t7 != 11484179049794764800LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x697 = 75U;
	int8_t x698 = -1;
	static uint8_t x699 = 9U;
	int8_t x700 = 4;
	int32_t t8 = -41;

    t8 = ((x697<<(x698&x699))<<x700);

    if (t8 != 614400) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1045 = 6358031647537398733LLU;
	int32_t x1046 = 523657561;
	uint16_t x1047 = 3U;
	int8_t x1048 = 0;
	uint64_t t9 = 99321LLU;

    t9 = ((x1045<<(x1046&x1047))<<x1048);

    if (t9 != 12716063295074797466LLU) { NG(); } else { ; }
	
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
    f9();


    return 0;
}

