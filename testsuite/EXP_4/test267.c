
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

int16_t x141 = INT16_MIN;
volatile int32_t t2 = 3605294;
volatile int16_t x345 = 92;
volatile int16_t x348 = -1;
uint32_t x352 = UINT32_MAX;
int8_t x377 = INT8_MIN;
int64_t t5 = 5777099LL;
uint32_t t6 = 25315U;
int16_t x514 = 0;
static volatile int8_t x528 = -1;
static int64_t x576 = -1LL;
uint8_t x645 = 14U;
static uint8_t x647 = 3U;
static uint32_t t11 = 1314012U;
static int32_t x712 = INT32_MAX;
int8_t x807 = 7;
uint8_t x851 = 22U;
volatile uint8_t x1110 = 0U;
int8_t x1112 = 0;
volatile int32_t t18 = 2;
uint64_t x1230 = UINT64_MAX;
volatile int16_t x1497 = -1;
uint64_t x1509 = 239866LLU;
int8_t x1549 = -1;
volatile uint64_t x1574 = 13714628491500906LLU;


void f0(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x126 = 15843174U;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;
	uint32_t t0 = 67U;

    t0 = (x125+(x126<<(x127-x128)));

    if (t0 != 15843046U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x142 = 882071037671LLU;
	static uint8_t x143 = 5U;
	int32_t x144 = -1;
	static volatile uint64_t t1 = 401352LLU;

    t1 = (x141+(x142<<(x143-x144)));

    if (t1 != 56452546378176LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	static volatile int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;

    t2 = (x205+(x206<<(x207-x208)));

    if (t2 != -2147450881) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x346 = 14U;
	volatile uint32_t x347 = UINT32_MAX;
	int32_t t3 = -5955950;

    t3 = (x345+(x346<<(x347-x348)));

    if (t3 != 106) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x349 = -7;
	uint16_t x350 = 189U;
	int16_t x351 = -1;
	static volatile int32_t t4 = -226;

    t4 = (x349+(x350<<(x351-x352)));

    if (t4 != 182) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x378 = 35213LL;
	uint32_t x379 = 1U;
	static volatile int32_t x380 = -1;

    t5 = (x377+(x378<<(x379-x380)));

    if (t5 != 140724LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x509 = -5;
	volatile uint32_t x510 = 484U;
	int16_t x511 = -1;
	int8_t x512 = -1;

    t6 = (x509+(x510<<(x511-x512)));

    if (t6 != 479U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x513 = -1;
	volatile int8_t x515 = INT8_MIN;
	int8_t x516 = INT8_MIN;
	static int32_t t7 = -8359;

    t7 = (x513+(x514<<(x515-x516)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x525 = -11;
	int16_t x526 = INT16_MAX;
	static volatile uint8_t x527 = 3U;
	int32_t t8 = -180;

    t8 = (x525+(x526<<(x527-x528)));

    if (t8 != 524261) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x565 = 14;
	static uint64_t x566 = UINT64_MAX;
	uint8_t x567 = 15U;
	uint32_t x568 = UINT32_MAX;
	uint64_t t9 = 12LLU;

    t9 = (x565+(x566<<(x567-x568)));

    if (t9 != 18446744073709486094LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x573 = INT32_MIN;
	uint16_t x574 = 1021U;
	int32_t x575 = 0;
	int32_t t10 = 1;

    t10 = (x573+(x574<<(x575-x576)));

    if (t10 != -2147481606) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x646 = 353016531U;
	static uint32_t x648 = 1U;

    t11 = (x645+(x646<<(x647-x648)));

    if (t11 != 1412066138U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x709 = 12U;
	uint64_t x710 = 40117225137LLU;
	static int32_t x711 = INT32_MAX;
	static uint64_t t12 = 12535705LLU;

    t12 = (x709+(x710<<(x711-x712)));

    if (t12 != 40117225149LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x805 = 211673190U;
	static volatile int16_t x806 = 3;
	static uint64_t x808 = UINT64_MAX;
	volatile uint32_t t13 = 59U;

    t13 = (x805+(x806<<(x807-x808)));

    if (t13 != 211673958U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x849 = -1;
	volatile uint32_t x850 = 171286208U;
	uint32_t x852 = UINT32_MAX;
	volatile uint32_t t14 = 9532U;

    t14 = (x849+(x850<<(x851-x852)));

    if (t14 != 1610612735U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x881 = -1;
	uint64_t x882 = UINT64_MAX;
	int64_t x883 = -1LL;
	static int8_t x884 = -1;
	uint64_t t15 = 349292499381100LLU;

    t15 = (x881+(x882<<(x883-x884)));

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x1105 = 49511LLU;
	int8_t x1106 = INT8_MAX;
	static uint8_t x1107 = 12U;
	uint64_t x1108 = UINT64_MAX;
	volatile uint64_t t16 = 421493909349843791LLU;

    t16 = (x1105+(x1106<<(x1107-x1108)));

    if (t16 != 1089895LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1109 = 0U;
	static uint64_t x1111 = 12LLU;
	volatile int32_t t17 = 23697062;

    t17 = (x1109+(x1110<<(x1111-x1112)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1117 = 11;
	uint16_t x1118 = UINT16_MAX;
	int32_t x1119 = INT32_MIN;
	int32_t x1120 = INT32_MIN;

    t18 = (x1117+(x1118<<(x1119-x1120)));

    if (t18 != 65546) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1229 = 27274323U;
	uint8_t x1231 = 4U;
	int16_t x1232 = -1;
	static uint64_t t19 = 1070560245164705777LLU;

    t19 = (x1229+(x1230<<(x1231-x1232)));

    if (t19 != 27274291LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1233 = 2U;
	uint16_t x1234 = 2139U;
	uint8_t x1235 = 12U;
	int8_t x1236 = -4;
	volatile int32_t t20 = -29733;

    t20 = (x1233+(x1234<<(x1235-x1236)));

    if (t20 != 140181506) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1421 = UINT32_MAX;
	static int16_t x1422 = 20;
	int16_t x1423 = 2;
	uint64_t x1424 = UINT64_MAX;
	uint32_t t21 = 412U;

    t21 = (x1421+(x1422<<(x1423-x1424)));

    if (t21 != 159U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1498 = 10851LLU;
	volatile int64_t x1499 = INT64_MIN;
	int64_t x1500 = INT64_MIN;
	volatile uint64_t t22 = 12211234124289506LLU;

    t22 = (x1497+(x1498<<(x1499-x1500)));

    if (t22 != 10850LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1510 = UINT32_MAX;
	uint16_t x1511 = 0U;
	int64_t x1512 = -1LL;
	volatile uint64_t t23 = 225131LLU;

    t23 = (x1509+(x1510<<(x1511-x1512)));

    if (t23 != 4295207160LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1529 = INT8_MAX;
	static uint8_t x1530 = UINT8_MAX;
	static int32_t x1531 = -1;
	static uint64_t x1532 = UINT64_MAX;
	volatile int32_t t24 = 17477;

    t24 = (x1529+(x1530<<(x1531-x1532)));

    if (t24 != 382) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1550 = 167345708903LL;
	static int8_t x1551 = -1;
	int16_t x1552 = -13;
	volatile int64_t t25 = -181834LL;

    t25 = (x1549+(x1550<<(x1551-x1552)));

    if (t25 != 685448023666687LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1573 = INT8_MIN;
	int16_t x1575 = 0;
	static volatile int8_t x1576 = -1;
	volatile uint64_t t26 = 8LLU;

    t26 = (x1573+(x1574<<(x1575-x1576)));

    if (t26 != 27429256983001684LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1805 = 103289U;
	uint8_t x1806 = 43U;
	int8_t x1807 = 1;
	int8_t x1808 = -1;
	uint32_t t27 = 2U;

    t27 = (x1805+(x1806<<(x1807-x1808)));

    if (t27 != 103461U) { NG(); } else { ; }
	
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


    return 0;
}

