
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

int16_t x404 = INT16_MIN;
volatile int16_t x437 = 664;
int16_t x440 = INT16_MIN;
volatile uint16_t x641 = UINT16_MAX;
int16_t x644 = 0;
static uint64_t x876 = 698869800LLU;
uint32_t x1165 = 3081U;
volatile int64_t x1167 = INT64_MAX;
volatile int32_t t9 = -1068608258;
uint16_t x1373 = UINT16_MAX;
static uint8_t x1374 = 4U;
int8_t x1376 = 14;
int32_t t10 = 1;
int16_t x1486 = 3;
int8_t x2068 = INT8_MIN;
static volatile uint16_t x2097 = 16U;
uint16_t x2098 = 8U;
uint16_t x2099 = 1425U;
int16_t x2162 = 0;
uint16_t x2163 = 21U;
static uint8_t x2217 = 44U;
volatile int32_t t19 = -8015437;
int16_t x2229 = INT16_MAX;
int8_t x2230 = 2;
static uint32_t x2405 = 237711U;
static int64_t x2637 = INT64_MAX;
int64_t t22 = INT64_MAX;
int32_t x2758 = 4;
volatile int32_t t24 = -40550054;
uint8_t x2965 = 11U;
int16_t x3126 = 0;
static uint32_t x3176 = 72U;
uint64_t t29 = 601709491007LLU;
uint8_t x3286 = 9U;
volatile int32_t t31 = 27;


void f0(void) {
    	static volatile uint32_t x233 = 8480343U;
	uint8_t x234 = 0U;
	int64_t x235 = 342577553LL;
	int32_t x236 = INT32_MIN;
	uint32_t t0 = 388759465U;

    t0 = (x233<<(x234/(x235>x236)));

    if (t0 != 8480343U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x345 = 107515814545LLU;
	static uint16_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	volatile int16_t x348 = INT16_MIN;
	static volatile uint64_t t1 = 2LLU;

    t1 = (x345<<(x346/(x347>x348)));

    if (t1 != 107515814545LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	int32_t x402 = 22;
	static uint8_t x403 = 14U;
	uint64_t t2 = 6752845320705LLU;

    t2 = (x401<<(x402/(x403>x404)));

    if (t2 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x438 = 0U;
	int32_t x439 = -1;
	volatile int32_t t3 = 109129;

    t3 = (x437<<(x438/(x439>x440)));

    if (t3 != 664) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x642 = 0;
	uint32_t x643 = 703932036U;
	static int32_t t4 = 885510116;

    t4 = (x641<<(x642/(x643>x644)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x805 = 4U;
	static uint8_t x806 = 28U;
	static int32_t x807 = -2;
	int8_t x808 = INT8_MIN;
	volatile int32_t t5 = 4514778;

    t5 = (x805<<(x806/(x807>x808)));

    if (t5 != 1073741824) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x873 = 51U;
	volatile int16_t x874 = 11;
	static int32_t x875 = -1;
	int32_t t6 = -2989815;

    t6 = (x873<<(x874/(x875>x876)));

    if (t6 != 104448) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x1077 = 3;
	int8_t x1078 = 3;
	uint8_t x1079 = 107U;
	int8_t x1080 = 1;
	static volatile int32_t t7 = -7;

    t7 = (x1077<<(x1078/(x1079>x1080)));

    if (t7 != 24) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x1166 = 11LL;
	volatile int64_t x1168 = -439854341907927LL;
	static uint32_t t8 = 28U;

    t8 = (x1165<<(x1166/(x1167>x1168)));

    if (t8 != 6309888U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x1225 = INT16_MAX;
	int32_t x1226 = 0;
	static volatile int8_t x1227 = -1;
	int16_t x1228 = -5764;

    t9 = (x1225<<(x1226/(x1227>x1228)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x1375 = 75529LLU;

    t10 = (x1373<<(x1374/(x1375>x1376)));

    if (t10 != 1048560) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x1485 = UINT32_MAX;
	volatile int16_t x1487 = 3034;
	int8_t x1488 = 5;
	volatile uint32_t t11 = 4931430U;

    t11 = (x1485<<(x1486/(x1487>x1488)));

    if (t11 != 4294967288U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x1501 = INT8_MAX;
	uint8_t x1502 = 10U;
	int16_t x1503 = -1;
	static int8_t x1504 = -30;
	int32_t t12 = -5;

    t12 = (x1501<<(x1502/(x1503>x1504)));

    if (t12 != 130048) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x1853 = 1;
	static uint16_t x1854 = 11U;
	int64_t x1855 = INT64_MAX;
	int8_t x1856 = INT8_MIN;
	volatile int32_t t13 = -1;

    t13 = (x1853<<(x1854/(x1855>x1856)));

    if (t13 != 2048) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x2025 = 159060498LLU;
	volatile int8_t x2026 = 1;
	static volatile int8_t x2027 = INT8_MAX;
	static volatile int64_t x2028 = INT64_MIN;
	uint64_t t14 = 1553118983LLU;

    t14 = (x2025<<(x2026/(x2027>x2028)));

    if (t14 != 318120996LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x2065 = 102U;
	volatile uint64_t x2066 = 8LLU;
	int64_t x2067 = INT64_MAX;
	volatile int32_t t15 = -769;

    t15 = (x2065<<(x2066/(x2067>x2068)));

    if (t15 != 26112) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x2089 = 72347235U;
	volatile uint8_t x2090 = 9U;
	static uint32_t x2091 = 54U;
	static uint8_t x2092 = 7U;
	static uint32_t t16 = 61035562U;

    t16 = (x2089<<(x2090/(x2091>x2092)));

    if (t16 != 2682045952U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x2100 = INT32_MIN;
	int32_t t17 = 3;

    t17 = (x2097<<(x2098/(x2099>x2100)));

    if (t17 != 4096) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x2161 = 1U;
	static int8_t x2164 = -1;
	volatile int32_t t18 = 11061789;

    t18 = (x2161<<(x2162/(x2163>x2164)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x2218 = 0LLU;
	volatile int32_t x2219 = 83858;
	int8_t x2220 = -1;

    t19 = (x2217<<(x2218/(x2219>x2220)));

    if (t19 != 44) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x2231 = INT64_MAX;
	volatile int64_t x2232 = -98248LL;
	volatile int32_t t20 = 305530;

    t20 = (x2229<<(x2230/(x2231>x2232)));

    if (t20 != 131068) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x2406 = 8U;
	static uint32_t x2407 = 96312U;
	uint8_t x2408 = UINT8_MAX;
	volatile uint32_t t21 = 18534023U;

    t21 = (x2405<<(x2406/(x2407>x2408)));

    if (t21 != 60854016U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2638 = 0;
	static int16_t x2639 = INT16_MIN;
	volatile uint32_t x2640 = 59670U;

    t22 = (x2637<<(x2638/(x2639>x2640)));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2757 = 2U;
	uint16_t x2759 = UINT16_MAX;
	int16_t x2760 = INT16_MAX;
	static volatile int32_t t23 = 26007979;

    t23 = (x2757<<(x2758/(x2759>x2760)));

    if (t23 != 32) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2857 = 11U;
	uint8_t x2858 = 4U;
	static int32_t x2859 = INT32_MAX;
	int16_t x2860 = -7;

    t24 = (x2857<<(x2858/(x2859>x2860)));

    if (t24 != 176) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2869 = 3U;
	uint16_t x2870 = 1U;
	volatile int16_t x2871 = -1;
	int64_t x2872 = INT64_MIN;
	volatile int32_t t25 = -182;

    t25 = (x2869<<(x2870/(x2871>x2872)));

    if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2966 = 3U;
	volatile int32_t x2967 = INT32_MAX;
	int64_t x2968 = -13636687935695LL;
	volatile int32_t t26 = -813640544;

    t26 = (x2965<<(x2966/(x2967>x2968)));

    if (t26 != 88) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x3093 = UINT8_MAX;
	static uint8_t x3094 = 7U;
	uint8_t x3095 = UINT8_MAX;
	int16_t x3096 = INT16_MIN;
	volatile int32_t t27 = -82450459;

    t27 = (x3093<<(x3094/(x3095>x3096)));

    if (t27 != 32640) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x3125 = 0;
	static uint8_t x3127 = UINT8_MAX;
	int64_t x3128 = INT64_MIN;
	volatile int32_t t28 = 5495;

    t28 = (x3125<<(x3126/(x3127>x3128)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x3173 = 372791960501567LLU;
	uint8_t x3174 = 58U;
	static uint64_t x3175 = 2353963907150691548LLU;

    t29 = (x3173<<(x3174/(x3175>x3176)));

    if (t29 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x3285 = 14U;
	int64_t x3287 = -264146599842080910LL;
	static volatile int64_t x3288 = INT64_MIN;
	volatile int32_t t30 = 59988706;

    t30 = (x3285<<(x3286/(x3287>x3288)));

    if (t30 != 7168) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x3357 = INT16_MAX;
	volatile int32_t x3358 = 0;
	int32_t x3359 = INT32_MIN;
	uint64_t x3360 = 875305255LLU;

    t31 = (x3357<<(x3358/(x3359>x3360)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x3381 = 13500599815LL;
	static uint8_t x3382 = 3U;
	volatile int16_t x3383 = -1;
	volatile uint64_t x3384 = 137045239774LLU;
	volatile int64_t t32 = 1092347816824185LL;

    t32 = (x3381<<(x3382/(x3383>x3384)));

    if (t32 != 108004798520LL) { NG(); } else { ; }
	
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
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();


    return 0;
}

