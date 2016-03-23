
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

uint8_t x95 = 6U;
volatile uint32_t x179 = 13U;
static int8_t x279 = 1;
static uint32_t x459 = 5U;
int32_t x512 = -1;
uint16_t x619 = 1U;
uint16_t x715 = 20U;
int64_t x800 = INT64_MIN;
uint16_t x900 = 116U;
int32_t t15 = -7;
uint32_t x1130 = UINT32_MAX;
static int8_t x1132 = -1;
static int16_t x1207 = 1;


void f0(void) {
    	int16_t x93 = -1;
	int16_t x94 = INT16_MAX;
	int8_t x96 = -1;
	volatile int32_t t0 = 12331;

    t0 = ((x93^(x94>>x95))*x96);

    if (t0 != 512) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 2076569745750060LLU;
	int8_t x131 = 25;
	uint32_t x132 = 131696971U;
	volatile uint64_t t1 = 55410049970914LLU;

    t1 = ((x129^(x130>>x131))*x132);

    if (t1 != 8153478265277842LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x165 = 1;
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 1U;
	uint32_t x168 = 128851449U;
	uint32_t t2 = 2168997U;

    t2 = ((x165^(x166>>x167))*x168);

    if (t2 != 3350380686U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x177 = INT64_MAX;
	uint64_t x178 = 3039680125LLU;
	int64_t x180 = 808978LL;
	volatile uint64_t t3 = 2LLU;

    t3 = ((x177^(x178>>x179))*x180);

    if (t3 != 18446743773534219826LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x277 = -1;
	volatile uint32_t x278 = 19U;
	uint64_t x280 = 3838947460LLU;
	uint64_t t4 = 11729873385529LLU;

    t4 = ((x277^(x278>>x279))*x280);

    if (t4 != 16488153753372793560LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x361 = INT32_MIN;
	uint64_t x362 = 95749575995LLU;
	int8_t x363 = 3;
	volatile int16_t x364 = INT16_MIN;
	volatile uint64_t t5 = 2053688084979LLU;

    t5 = ((x361^(x362>>x363))*x364);

    if (t5 != 381865922691072LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x457 = 19476U;
	int16_t x458 = INT16_MAX;
	volatile int32_t x460 = 0;
	uint32_t t6 = 1097731570U;

    t6 = ((x457^(x458>>x459))*x460);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x509 = -2;
	int16_t x510 = INT16_MAX;
	volatile int8_t x511 = 0;
	volatile int32_t t7 = 11;

    t7 = ((x509^(x510>>x511))*x512);

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x597 = 9006006;
	uint8_t x598 = UINT8_MAX;
	uint8_t x599 = 7U;
	volatile int8_t x600 = INT8_MAX;
	int32_t t8 = -53693;

    t8 = ((x597^(x598>>x599))*x600);

    if (t8 != 1143762889) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x617 = -1;
	uint64_t x618 = 37969146671856LLU;
	static volatile int16_t x620 = -1;
	uint64_t t9 = 19197153721109131LLU;

    t9 = ((x617^(x618>>x619))*x620);

    if (t9 != 18984573335929LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x713 = -1486;
	int8_t x714 = 0;
	volatile uint32_t x716 = 1803381U;
	volatile uint32_t t10 = 63148670U;

    t10 = ((x713^(x714>>x715))*x716);

    if (t10 != 1615143130U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x741 = 1508276U;
	uint16_t x742 = 16U;
	uint8_t x743 = 20U;
	uint64_t x744 = 40280545988251LLU;
	static volatile uint64_t t11 = 7434934LLU;

    t11 = ((x741^(x742>>x743))*x744);

    if (t11 != 5413948559846610428LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x797 = 126LLU;
	uint8_t x798 = 3U;
	uint32_t x799 = 1U;
	uint64_t t12 = 15735463LLU;

    t12 = ((x797^(x798>>x799))*x800);

    if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x809 = 124376243;
	int64_t x810 = INT64_MAX;
	uint8_t x811 = 28U;
	uint8_t x812 = UINT8_MAX;
	static volatile int64_t t13 = -2154177277123373LL;

    t13 = ((x809^(x810>>x811))*x812);

    if (t13 != 8730017341620LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x897 = UINT64_MAX;
	static volatile int8_t x898 = 8;
	int16_t x899 = 1;
	volatile uint64_t t14 = 1718471948LLU;

    t14 = ((x897^(x898>>x899))*x900);

    if (t14 != 18446744073709551036LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x973 = INT8_MAX;
	volatile int8_t x974 = INT8_MAX;
	uint8_t x975 = 0U;
	int8_t x976 = INT8_MIN;

    t15 = ((x973^(x974>>x975))*x976);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1129 = INT16_MIN;
	uint16_t x1131 = 1U;
	uint32_t t16 = 614845U;

    t16 = ((x1129^(x1130>>x1131))*x1132);

    if (t16 != 2147450881U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x1205 = 1845267326364087LL;
	uint64_t x1206 = UINT64_MAX;
	int64_t x1208 = INT64_MIN;
	volatile uint64_t t17 = 0LLU;

    t17 = ((x1205^(x1206>>x1207))*x1208);

    if (t17 != 0LLU) { NG(); } else { ; }
	
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
    f14();
    f15();
    f16();
    f17();


    return 0;
}

