
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

static volatile uint64_t t0 = 143806352071939LLU;
int8_t x151 = 2;
int8_t x540 = -1;
uint64_t x1026 = 1494LLU;
uint64_t t5 = 413466492589LLU;
volatile uint32_t t7 = 739U;
int8_t x1167 = 0;
static uint64_t t8 = 3814319904830640965LLU;
uint8_t x1241 = 1U;
static int32_t x1353 = -523051;
uint32_t x1354 = 37300U;
volatile uint32_t t10 = 1921708985U;
volatile uint8_t x1780 = 14U;
volatile uint64_t t14 = 6179718158095LLU;
int64_t x2167 = INT64_MIN;
int64_t t16 = INT64_MAX;
int8_t x2229 = INT8_MAX;
static uint8_t x2670 = 34U;
uint64_t x2762 = UINT64_MAX;
volatile uint64_t x2864 = UINT64_MAX;
volatile uint32_t x2921 = 2045U;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	uint64_t x6 = 1784008199LLU;
	volatile int64_t x7 = 104LL;
	static int8_t x8 = INT8_MAX;

    t0 = ((x5|x6)<<(x7^x8));

    if (t0 != 14965345450196992LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	static int16_t x150 = -5212;
	volatile uint8_t x152 = 0U;
	static uint64_t t1 = 51LLU;

    t1 = ((x149|x150)<<(x151^x152));

    if (t1 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x537 = UINT8_MAX;
	static uint64_t x538 = UINT64_MAX;
	uint64_t x539 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = ((x537|x538)<<(x539^x540));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x573 = 43;
	int16_t x574 = INT16_MAX;
	volatile int8_t x575 = INT8_MIN;
	static int8_t x576 = INT8_MIN;
	static int32_t t3 = 2383;

    t3 = ((x573|x574)<<(x575^x576));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x857 = 1506815864076149625LLU;
	volatile int8_t x858 = -1;
	uint32_t x859 = UINT32_MAX;
	uint32_t x860 = UINT32_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x857|x858)<<(x859^x860));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x1025 = -3856236058468LL;
	static int8_t x1027 = INT8_MIN;
	int8_t x1028 = INT8_MIN;

    t5 = ((x1025|x1026)<<(x1027^x1028));

    if (t5 != 18446740217473494494LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x1033 = -1;
	static uint32_t x1034 = UINT32_MAX;
	int8_t x1035 = -1;
	static volatile int16_t x1036 = -1;
	uint32_t t6 = UINT32_MAX;

    t6 = ((x1033|x1034)<<(x1035^x1036));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x1053 = 6994754U;
	uint32_t x1054 = 10U;
	int8_t x1055 = 30;
	volatile uint8_t x1056 = 2U;

    t7 = ((x1053|x1054)<<(x1055^x1056));

    if (t7 != 2684354560U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x1165 = UINT8_MAX;
	static uint64_t x1166 = 10461LLU;
	int8_t x1168 = 3;

    t8 = ((x1165|x1166)<<(x1167^x1168));

    if (t8 != 83960LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x1242 = 87U;
	int16_t x1243 = -1;
	int64_t x1244 = -1LL;
	volatile uint32_t t9 = 20U;

    t9 = ((x1241|x1242)<<(x1243^x1244));

    if (t9 != 87U) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x1355 = -1;
	volatile int64_t x1356 = -1LL;

    t10 = ((x1353|x1354)<<(x1355^x1356));

    if (t10 != 4294481397U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1649 = 10U;
	static uint8_t x1650 = 115U;
	int32_t x1651 = -1;
	int8_t x1652 = -1;
	int32_t t11 = -7;

    t11 = ((x1649|x1650)<<(x1651^x1652));

    if (t11 != 123) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1741 = INT8_MAX;
	int32_t x1742 = 12205;
	int16_t x1743 = -1;
	static uint64_t x1744 = UINT64_MAX;
	volatile int32_t t12 = 2603135;

    t12 = ((x1741|x1742)<<(x1743^x1744));

    if (t12 != 12287) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1745 = 29361436553794687LLU;
	static int16_t x1746 = -1;
	volatile int16_t x1747 = 207;
	static uint8_t x1748 = UINT8_MAX;
	static volatile uint64_t t13 = 1491LLU;

    t13 = ((x1745|x1746)<<(x1747^x1748));

    if (t13 != 18446462598732840960LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x1777 = UINT64_MAX;
	uint8_t x1778 = UINT8_MAX;
	uint8_t x1779 = 27U;

    t14 = ((x1777|x1778)<<(x1779^x1780));

    if (t14 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x1885 = -175684;
	uint32_t x1886 = 4U;
	static volatile int8_t x1887 = -32;
	static int64_t x1888 = -1LL;
	static volatile uint32_t t15 = 53030U;

    t15 = ((x1885|x1886)<<(x1887^x1888));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x2165 = INT64_MAX;
	uint8_t x2166 = 56U;
	static int64_t x2168 = INT64_MIN;

    t16 = ((x2165|x2166)<<(x2167^x2168));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x2230 = INT16_MAX;
	int8_t x2231 = -1;
	volatile int32_t x2232 = -1;
	int32_t t17 = 0;

    t17 = ((x2229|x2230)<<(x2231^x2232));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x2309 = UINT32_MAX;
	static int8_t x2310 = INT8_MIN;
	int16_t x2311 = -1;
	int32_t x2312 = -1;
	uint32_t t18 = UINT32_MAX;

    t18 = ((x2309|x2310)<<(x2311^x2312));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x2325 = 37752024U;
	int16_t x2326 = 0;
	int64_t x2327 = -1LL;
	int8_t x2328 = -1;
	volatile uint32_t t19 = 218470694U;

    t19 = ((x2325|x2326)<<(x2327^x2328));

    if (t19 != 37752024U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2341 = UINT32_MAX;
	int8_t x2342 = 5;
	volatile uint64_t x2343 = 1LLU;
	static uint8_t x2344 = 14U;
	volatile uint32_t t20 = 1158313U;

    t20 = ((x2341|x2342)<<(x2343^x2344));

    if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x2669 = 2;
	uint8_t x2671 = 28U;
	int8_t x2672 = 17;
	int32_t t21 = 23856826;

    t21 = ((x2669|x2670)<<(x2671^x2672));

    if (t21 != 278528) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x2761 = -1LL;
	volatile int16_t x2763 = -1;
	uint64_t x2764 = UINT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = ((x2761|x2762)<<(x2763^x2764));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x2837 = 1217028525U;
	uint64_t x2838 = 224619801298LLU;
	static int8_t x2839 = INT8_MIN;
	int8_t x2840 = INT8_MIN;
	volatile uint64_t t23 = 1LLU;

    t23 = ((x2837|x2838)<<(x2839^x2840));

    if (t23 != 224628730879LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x2861 = 374263689U;
	volatile int32_t x2862 = INT32_MIN;
	static int32_t x2863 = -1;
	uint32_t t24 = 162940380U;

    t24 = ((x2861|x2862)<<(x2863^x2864));

    if (t24 != 2521747337U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x2922 = 30695093LLU;
	uint8_t x2923 = 7U;
	static int8_t x2924 = 0;
	volatile uint64_t t25 = 1649327997753LLU;

    t25 = ((x2921|x2922)<<(x2923^x2924));

    if (t25 != 3929013888LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x2993 = 4108U;
	uint8_t x2994 = 114U;
	uint8_t x2995 = 11U;
	static int8_t x2996 = 11;
	int32_t t26 = -1270;

    t26 = ((x2993|x2994)<<(x2995^x2996));

    if (t26 != 4222) { NG(); } else { ; }
	
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
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();


    return 0;
}

