
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

volatile int16_t x22 = 0;
static volatile uint64_t t0 = UINT64_MAX;
uint64_t x181 = 14392447578LLU;
int16_t x182 = -1;
uint64_t x187 = UINT64_MAX;
int64_t x188 = INT64_MIN;
uint64_t x373 = UINT64_MAX;
int16_t x374 = -1;
static int32_t x375 = -1563976;
static uint16_t x445 = 461U;
int16_t x447 = INT16_MAX;
int16_t x450 = -10;
volatile int32_t t8 = -359101;
volatile int32_t x535 = -65421030;
int64_t x811 = -32801196LL;
volatile int8_t x870 = -13;
static volatile int32_t t16 = -162612551;
int8_t x1219 = -1;
uint8_t x1233 = UINT8_MAX;
int32_t x1236 = INT32_MIN;
int32_t t19 = -215349770;
static int16_t x1419 = -378;
int16_t x1543 = INT16_MIN;
int64_t x1544 = INT64_MAX;
uint8_t x1591 = 0U;
int32_t x1623 = -2010;
static uint64_t x1624 = UINT64_MAX;
int8_t x1678 = -1;
volatile int32_t x1679 = -1;
int64_t x1680 = INT64_MIN;
int32_t x1722 = -1;
int32_t t26 = 112084649;


void f0(void) {
    	uint64_t x21 = UINT64_MAX;
	int32_t x23 = -1284;
	int16_t x24 = INT16_MIN;

    t0 = (x21>>(x22*(x23|x24)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x173 = 23U;
	int64_t x174 = -1LL;
	static int8_t x175 = INT8_MAX;
	static int8_t x176 = INT8_MIN;
	int32_t t1 = 1;

    t1 = (x173>>(x174*(x175|x176)));

    if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x183 = 39U;
	int16_t x184 = -1;
	volatile uint64_t t2 = 1407589LLU;

    t2 = (x181>>(x182*(x183|x184)));

    if (t2 != 7196223789LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x185 = INT16_MAX;
	int32_t x186 = -1;
	int32_t t3 = 47760;

    t3 = (x185>>(x186*(x187|x188)));

    if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x325 = 51U;
	uint8_t x326 = 0U;
	volatile int8_t x327 = -1;
	uint16_t x328 = 7922U;
	int32_t t4 = 16237;

    t4 = (x325>>(x326*(x327|x328)));

    if (t4 != 51) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x376 = -1LL;
	uint64_t t5 = 1887800763224LLU;

    t5 = (x373>>(x374*(x375|x376)));

    if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x429 = UINT8_MAX;
	int32_t x430 = -1;
	int32_t x431 = -1;
	static int8_t x432 = -1;
	int32_t t6 = 101811;

    t6 = (x429>>(x430*(x431|x432)));

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x446 = UINT64_MAX;
	static int64_t x448 = -9930LL;
	volatile int32_t t7 = 3;

    t7 = (x445>>(x446*(x447|x448)));

    if (t7 != 230) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x449 = 5U;
	int64_t x451 = INT64_MIN;
	int32_t x452 = -1;

    t8 = (x449>>(x450*(x451|x452)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	volatile int8_t x490 = -1;
	static int32_t x491 = -1;
	int32_t x492 = -28;
	uint64_t t9 = 7957LLU;

    t9 = (x489>>(x490*(x491|x492)));

    if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x509 = 7359U;
	int32_t x510 = -3;
	uint8_t x511 = 14U;
	uint32_t x512 = UINT32_MAX;
	int32_t t10 = 1869905;

    t10 = (x509>>(x510*(x511|x512)));

    if (t10 != 919) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x513 = 3824422648480349LLU;
	volatile int64_t x514 = -1LL;
	int8_t x515 = INT8_MIN;
	static uint64_t x516 = 33534163LLU;
	uint64_t t11 = 55427LLU;

    t11 = (x513>>(x514*(x515|x516)));

    if (t11 != 108LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x533 = 1U;
	int8_t x534 = -3;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t12 = 1325;

    t12 = (x533>>(x534*(x535|x536)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x573 = 3;
	volatile int32_t x574 = -1;
	int8_t x575 = -1;
	int8_t x576 = INT8_MAX;
	volatile int32_t t13 = 0;

    t13 = (x573>>(x574*(x575|x576)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x665 = UINT8_MAX;
	int16_t x666 = 0;
	volatile uint32_t x667 = 26542865U;
	uint8_t x668 = 28U;
	volatile int32_t t14 = 40130;

    t14 = (x665>>(x666*(x667|x668)));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x809 = 31215682LL;
	uint64_t x810 = UINT64_MAX;
	static volatile int32_t x812 = INT32_MAX;
	int64_t t15 = -13632460122LL;

    t15 = (x809>>(x810*(x811|x812)));

    if (t15 != 15607841LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x869 = 2;
	uint64_t x871 = UINT64_MAX;
	int8_t x872 = INT8_MIN;

    t16 = (x869>>(x870*(x871|x872)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1001 = 0;
	static uint32_t x1002 = UINT32_MAX;
	int16_t x1003 = 31;
	volatile int8_t x1004 = -1;
	static volatile int32_t t17 = 0;

    t17 = (x1001>>(x1002*(x1003|x1004)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x1217 = UINT8_MAX;
	int32_t x1218 = -1;
	int8_t x1220 = -1;
	static int32_t t18 = 18270;

    t18 = (x1217>>(x1218*(x1219|x1220)));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x1234 = -9020;
	uint32_t x1235 = 0U;

    t19 = (x1233>>(x1234*(x1235|x1236)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x1417 = 63;
	static int16_t x1418 = -3;
	uint16_t x1420 = 30073U;
	volatile int32_t t20 = -30;

    t20 = (x1417>>(x1418*(x1419|x1420)));

    if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1541 = UINT32_MAX;
	int32_t x1542 = -1;
	static volatile uint32_t t21 = 7193987U;

    t21 = (x1541>>(x1542*(x1543|x1544)));

    if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x1589 = UINT8_MAX;
	uint64_t x1590 = UINT64_MAX;
	static int8_t x1592 = -6;
	int32_t t22 = 218;

    t22 = (x1589>>(x1590*(x1591|x1592)));

    if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1621 = 2581519LLU;
	static volatile int8_t x1622 = -1;
	uint64_t t23 = 23102038033870LLU;

    t23 = (x1621>>(x1622*(x1623|x1624)));

    if (t23 != 1290759LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x1673 = UINT32_MAX;
	int64_t x1674 = -1LL;
	int8_t x1675 = INT8_MIN;
	volatile int8_t x1676 = -3;
	volatile uint32_t t24 = 0U;

    t24 = (x1673>>(x1674*(x1675|x1676)));

    if (t24 != 536870911U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1677 = 3101726645LLU;
	uint64_t t25 = 4944425756451155963LLU;

    t25 = (x1677>>(x1678*(x1679|x1680)));

    if (t25 != 1550863322LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x1721 = 108U;
	int16_t x1723 = 25;
	uint32_t x1724 = UINT32_MAX;

    t26 = (x1721>>(x1722*(x1723|x1724)));

    if (t26 != 54) { NG(); } else { ; }
	
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

