
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

int32_t t4 = -19702480;
int8_t x736 = 23;
volatile int8_t x799 = -3;
uint16_t x800 = 2U;
uint64_t x945 = 17783315202135663LLU;
static volatile uint32_t x948 = 45U;
int16_t x1101 = 0;
uint8_t x1104 = 12U;
int32_t t8 = 2474;
int32_t t10 = 109206435;
int32_t t14 = 64424;
int8_t x2365 = 48;
uint64_t x2769 = 66934145LLU;
int8_t x2770 = -1;
int64_t x2771 = INT64_MIN;
int32_t t22 = -3811409;
int64_t x3135 = -276493458496328LL;
uint32_t x3136 = 63U;
volatile int32_t t25 = 713492748;
static int64_t x3181 = 15238857LL;
uint32_t t27 = 46842994U;
static uint32_t x3428 = 12U;
uint32_t x3701 = 2U;
volatile int32_t x3702 = INT32_MAX;
volatile uint32_t t30 = 2086770U;
uint8_t x4052 = 1U;
uint32_t x4089 = 0U;
volatile int16_t x4090 = -1;
uint32_t t33 = 18736U;
static uint64_t x4162 = 4229108518LLU;
static uint8_t x4163 = UINT8_MAX;
uint32_t x4353 = UINT32_MAX;
uint16_t x4354 = UINT16_MAX;


void f0(void) {
    	int16_t x261 = 9546;
	int32_t x262 = 0;
	int8_t x263 = INT8_MIN;
	static uint16_t x264 = 2U;
	int32_t t0 = 52;

    t0 = ((x261/(x262>x263))<<x264);

    if (t0 != 38184) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x313 = 77;
	static int8_t x314 = 3;
	int16_t x315 = INT16_MIN;
	static int16_t x316 = 4;
	static int32_t t1 = -21195602;

    t1 = ((x313/(x314>x315))<<x316);

    if (t1 != 1232) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x397 = 7;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MAX;
	uint8_t x400 = 0U;
	volatile int32_t t2 = -14743112;

    t2 = ((x397/(x398>x399))<<x400);

    if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x565 = UINT32_MAX;
	int64_t x566 = INT64_MAX;
	int8_t x567 = 13;
	static uint8_t x568 = 7U;
	uint32_t t3 = 113149U;

    t3 = ((x565/(x566>x567))<<x568);

    if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x649 = 3;
	volatile int32_t x650 = INT32_MIN;
	static volatile uint64_t x651 = 118691752935LLU;
	static uint16_t x652 = 2U;

    t4 = ((x649/(x650>x651))<<x652);

    if (t4 != 12) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x733 = 54241963LLU;
	uint16_t x734 = 1U;
	int8_t x735 = -1;
	uint64_t t5 = 741760187LLU;

    t5 = ((x733/(x734>x735))<<x736);

    if (t5 != 455014564757504LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x797 = INT8_MAX;
	uint16_t x798 = UINT16_MAX;
	volatile int32_t t6 = 3;

    t6 = ((x797/(x798>x799))<<x800);

    if (t6 != 508) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x946 = 1096879266U;
	static uint8_t x947 = 2U;
	static volatile uint64_t t7 = 0LLU;

    t7 = ((x945/(x946>x947))<<x948);

    if (t7 != 12307739647278055424LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x1102 = 33U;
	volatile int32_t x1103 = 2;

    t8 = ((x1101/(x1102>x1103))<<x1104);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1301 = UINT64_MAX;
	static volatile int64_t x1302 = 471724058691LL;
	uint64_t x1303 = 419339191253LLU;
	uint8_t x1304 = 7U;
	uint64_t t9 = 9116485633970464LLU;

    t9 = ((x1301/(x1302>x1303))<<x1304);

    if (t9 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1485 = 8U;
	int8_t x1486 = 34;
	int32_t x1487 = INT32_MIN;
	int8_t x1488 = 3;

    t10 = ((x1485/(x1486>x1487))<<x1488);

    if (t10 != 64) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x1713 = 3197;
	int16_t x1714 = 29;
	int64_t x1715 = INT64_MIN;
	int8_t x1716 = 1;
	int32_t t11 = -560;

    t11 = ((x1713/(x1714>x1715))<<x1716);

    if (t11 != 6394) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1857 = INT8_MAX;
	uint64_t x1858 = 407LLU;
	static volatile uint8_t x1859 = 61U;
	static uint32_t x1860 = 6U;
	volatile int32_t t12 = -1623188;

    t12 = ((x1857/(x1858>x1859))<<x1860);

    if (t12 != 8128) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x1905 = 663U;
	int32_t x1906 = -24;
	volatile int16_t x1907 = INT16_MIN;
	static uint16_t x1908 = 13U;
	int32_t t13 = -305;

    t13 = ((x1905/(x1906>x1907))<<x1908);

    if (t13 != 5431296) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x1949 = UINT16_MAX;
	uint64_t x1950 = UINT64_MAX;
	uint64_t x1951 = 2480589LLU;
	uint8_t x1952 = 0U;

    t14 = ((x1949/(x1950>x1951))<<x1952);

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x1985 = 102415181LL;
	static uint16_t x1986 = 29U;
	int8_t x1987 = 0;
	volatile uint16_t x1988 = 30U;
	int64_t t15 = 1375127259LL;

    t15 = ((x1985/(x1986>x1987))<<x1988);

    if (t15 != 109967463252230144LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x2129 = UINT32_MAX;
	int16_t x2130 = INT16_MIN;
	int64_t x2131 = INT64_MIN;
	uint8_t x2132 = 4U;
	static volatile uint32_t t16 = 1U;

    t16 = ((x2129/(x2130>x2131))<<x2132);

    if (t16 != 4294967280U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x2345 = 501367485U;
	static int8_t x2346 = INT8_MIN;
	uint64_t x2347 = 63469827LLU;
	uint16_t x2348 = 14U;
	static uint32_t t17 = 1929509346U;

    t17 = ((x2345/(x2346>x2347))<<x2348);

    if (t17 != 2427404288U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x2366 = INT8_MIN;
	volatile uint32_t x2367 = 768169U;
	int32_t x2368 = 3;
	int32_t t18 = -783;

    t18 = ((x2365/(x2366>x2367))<<x2368);

    if (t18 != 384) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint16_t x2513 = 6U;
	int8_t x2514 = -5;
	volatile uint64_t x2515 = 2169LLU;
	int8_t x2516 = 6;
	int32_t t19 = 64;

    t19 = ((x2513/(x2514>x2515))<<x2516);

    if (t19 != 384) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2713 = UINT64_MAX;
	int32_t x2714 = INT32_MAX;
	static int64_t x2715 = -1LL;
	static int16_t x2716 = 0;
	uint64_t t20 = UINT64_MAX;

    t20 = ((x2713/(x2714>x2715))<<x2716);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x2772 = 7U;
	static volatile uint64_t t21 = 5463995903788978453LLU;

    t21 = ((x2769/(x2770>x2771))<<x2772);

    if (t21 != 8567570560LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x2993 = 6U;
	int8_t x2994 = -1;
	uint32_t x2995 = 43U;
	uint8_t x2996 = 4U;

    t22 = ((x2993/(x2994>x2995))<<x2996);

    if (t22 != 96) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x3129 = 1696298U;
	static uint8_t x3130 = 0U;
	volatile int64_t x3131 = INT64_MIN;
	uint16_t x3132 = 3U;
	volatile uint32_t t23 = 4999U;

    t23 = ((x3129/(x3130>x3131))<<x3132);

    if (t23 != 13570384U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x3133 = 707082730254536LLU;
	int32_t x3134 = INT32_MIN;
	volatile uint64_t t24 = 33LLU;

    t24 = ((x3133/(x3134>x3135))<<x3136);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x3169 = 4;
	volatile uint32_t x3170 = UINT32_MAX;
	uint8_t x3171 = 24U;
	static volatile uint8_t x3172 = 14U;

    t25 = ((x3169/(x3170>x3171))<<x3172);

    if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x3182 = 1LL;
	int16_t x3183 = INT16_MIN;
	uint16_t x3184 = 37U;
	int64_t t26 = -216889595975522877LL;

    t26 = ((x3181/(x3182>x3183))<<x3184);

    if (t26 != 2094412558189461504LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x3273 = UINT32_MAX;
	uint32_t x3274 = UINT32_MAX;
	uint32_t x3275 = 2360U;
	int8_t x3276 = 27;

    t27 = ((x3273/(x3274>x3275))<<x3276);

    if (t27 != 4160749568U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x3409 = 12;
	int8_t x3410 = INT8_MAX;
	int16_t x3411 = INT16_MIN;
	int16_t x3412 = 16;
	int32_t t28 = 48126;

    t28 = ((x3409/(x3410>x3411))<<x3412);

    if (t28 != 786432) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x3425 = 36;
	static volatile int64_t x3426 = INT64_MAX;
	volatile int16_t x3427 = -2;
	volatile int32_t t29 = -518;

    t29 = ((x3425/(x3426>x3427))<<x3428);

    if (t29 != 147456) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x3703 = INT8_MAX;
	uint32_t x3704 = 27U;

    t30 = ((x3701/(x3702>x3703))<<x3704);

    if (t30 != 268435456U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x3905 = 1LL;
	volatile uint16_t x3906 = UINT16_MAX;
	volatile int8_t x3907 = -1;
	static int8_t x3908 = 0;
	int64_t t31 = 1593151LL;

    t31 = ((x3905/(x3906>x3907))<<x3908);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x4049 = UINT8_MAX;
	volatile uint8_t x4050 = 69U;
	volatile int16_t x4051 = -1;
	volatile int32_t t32 = 46071617;

    t32 = ((x4049/(x4050>x4051))<<x4052);

    if (t32 != 510) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x4091 = 1377976364088LLU;
	int16_t x4092 = 2;

    t33 = ((x4089/(x4090>x4091))<<x4092);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x4161 = 32U;
	uint16_t x4164 = 2U;
	volatile int32_t t34 = 24;

    t34 = ((x4161/(x4162>x4163))<<x4164);

    if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x4355 = INT8_MAX;
	uint8_t x4356 = 4U;
	volatile uint32_t t35 = 3U;

    t35 = ((x4353/(x4354>x4355))<<x4356);

    if (t35 != 4294967280U) { NG(); } else { ; }
	
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
    f33();
    f34();
    f35();


    return 0;
}

