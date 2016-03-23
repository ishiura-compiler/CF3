
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

uint32_t x305 = 55U;
int8_t x527 = 0;
uint8_t x616 = 3U;
uint16_t x640 = 2U;
static uint32_t t4 = 60525U;
static int32_t x1037 = -1;
static uint32_t x1120 = 45U;
int64_t x1158 = 6LL;
uint16_t x1159 = 48U;
int64_t t7 = 228783342480804LL;
static int32_t x1317 = INT32_MIN;
uint32_t x1318 = 30099513U;
volatile uint32_t t8 = 2877U;
uint16_t x1443 = 10U;
int8_t x1718 = INT8_MAX;


void f0(void) {
    	int32_t x25 = -885126264;
	uint64_t x26 = 13182931533LLU;
	int8_t x27 = -1;
	int8_t x28 = 2;
	static volatile uint64_t t0 = 6LLU;

    t0 = ((x25*x26)<<(x27+x28));

    if (t0 != 13556370274674937808LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x306 = 0;
	int32_t x307 = -1;
	uint64_t x308 = 1LLU;
	volatile uint32_t t1 = 1869528087U;

    t1 = ((x305*x306)<<(x307+x308));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile uint8_t x526 = UINT8_MAX;
	int16_t x528 = 13;
	uint32_t t2 = 231U;

    t2 = ((x525*x526)<<(x527+x528));

    if (t2 != 4292878336U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x613 = 301343LLU;
	int8_t x614 = INT8_MAX;
	static int8_t x615 = 0;
	volatile uint64_t t3 = 240635734829LLU;

    t3 = ((x613*x614)<<(x615+x616));

    if (t3 != 306164488LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x637 = -1;
	uint32_t x638 = 440U;
	int64_t x639 = -1LL;

    t4 = ((x637*x638)<<(x639+x640));

    if (t4 != 4294966416U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x1038 = UINT64_MAX;
	uint32_t x1039 = 0U;
	static int8_t x1040 = 15;
	volatile uint64_t t5 = 9490789156893603LLU;

    t5 = ((x1037*x1038)<<(x1039+x1040));

    if (t5 != 32768LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x1117 = INT16_MIN;
	uint64_t x1118 = 501350257358LLU;
	int8_t x1119 = -1;
	uint64_t t6 = 4631941465227691501LLU;

    t6 = ((x1117*x1118)<<(x1119+x1120));

    if (t6 != 10376293541461622784LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1157 = 0;
	static volatile int8_t x1160 = 7;

    t7 = ((x1157*x1158)<<(x1159+x1160));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x1319 = 53U;
	int8_t x1320 = -25;

    t8 = ((x1317*x1318)<<(x1319+x1320));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x1441 = 2958201008LLU;
	volatile int32_t x1442 = INT32_MIN;
	static volatile int64_t x1444 = -1LL;
	uint64_t t9 = 940747746LLU;

    t9 = ((x1441*x1442)<<(x1443+x1444));

    if (t9 != 12497295451906637824LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1581 = 1U;
	uint64_t x1582 = 8648560613727LLU;
	static uint32_t x1583 = UINT32_MAX;
	static uint16_t x1584 = 31U;
	volatile uint64_t t10 = 872025LLU;

    t10 = ((x1581*x1582)<<(x1583+x1584));

    if (t10 != 7608979281883955200LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint8_t x1593 = 112U;
	uint64_t x1594 = 17391917149LLU;
	volatile int16_t x1595 = 1;
	static int64_t x1596 = -1LL;
	uint64_t t11 = 15368086LLU;

    t11 = ((x1593*x1594)<<(x1595+x1596));

    if (t11 != 1947894720688LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x1717 = 6315U;
	volatile int16_t x1719 = -1;
	uint8_t x1720 = 6U;
	static volatile uint32_t t12 = 860367160U;

    t12 = ((x1717*x1718)<<(x1719+x1720));

    if (t12 != 25664160U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x1741 = -1;
	uint64_t x1742 = UINT64_MAX;
	static uint64_t x1743 = UINT64_MAX;
	static int8_t x1744 = 12;
	volatile uint64_t t13 = 240057792125753LLU;

    t13 = ((x1741*x1742)<<(x1743+x1744));

    if (t13 != 2048LLU) { NG(); } else { ; }
	
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
    f10();
    f11();
    f12();
    f13();


    return 0;
}

