
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

volatile uint16_t x115 = 1U;
int8_t x207 = -1;
int32_t t1 = 201198;
uint64_t x418 = UINT64_MAX;
int32_t t6 = 1385;
int32_t t7 = -157727405;
uint8_t x600 = 5U;
int64_t x702 = INT64_MAX;
int32_t t10 = 321;
volatile int32_t t11 = -113314756;
static volatile int8_t x773 = INT8_MIN;
volatile int16_t x775 = 5;
volatile int16_t x819 = -1;
volatile uint8_t x964 = 15U;
int16_t x1005 = 14965;
int32_t t16 = 884873380;
int64_t x1070 = -1LL;
volatile int8_t x1071 = -1;
uint32_t x1088 = UINT32_MAX;
int32_t x1229 = INT32_MIN;
int32_t x1290 = 49;
volatile int16_t x1627 = 0;
uint64_t x2013 = UINT64_MAX;
int32_t x2034 = INT32_MIN;


void f0(void) {
    	int16_t x113 = 161;
	int64_t x114 = INT64_MIN;
	int16_t x116 = -1;
	volatile int32_t t0 = 817207;

    t0 = ((x113==x114)>>(x115+x116));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 615;
	int16_t x208 = 1;

    t1 = ((x205==x206)>>(x207+x208));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x261 = 6790034LLU;
	uint64_t x262 = 103797037883LLU;
	static volatile uint32_t x263 = 10U;
	volatile uint32_t x264 = UINT32_MAX;
	volatile int32_t t2 = 7;

    t2 = ((x261==x262)>>(x263+x264));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x317 = INT8_MAX;
	uint8_t x318 = 1U;
	uint8_t x319 = 21U;
	static int32_t x320 = -1;
	volatile int32_t t3 = 0;

    t3 = ((x317==x318)>>(x319+x320));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x325 = 1U;
	uint32_t x326 = 1635665286U;
	int64_t x327 = -1LL;
	volatile int16_t x328 = 20;
	static int32_t t4 = 102910;

    t4 = ((x325==x326)>>(x327+x328));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	volatile uint8_t x356 = 3U;
	int32_t t5 = 1863;

    t5 = ((x353==x354)>>(x355+x356));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x417 = -1;
	uint8_t x419 = 8U;
	int32_t x420 = -1;

    t6 = ((x417==x418)>>(x419+x420));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x457 = -12;
	uint8_t x458 = UINT8_MAX;
	static int8_t x459 = 1;
	int32_t x460 = -1;

    t7 = ((x457==x458)>>(x459+x460));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x597 = -1;
	static uint32_t x598 = 282656U;
	int64_t x599 = -1LL;
	volatile int32_t t8 = -2;

    t8 = ((x597==x598)>>(x599+x600));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x701 = -25;
	static volatile int8_t x703 = 8;
	int16_t x704 = -1;
	volatile int32_t t9 = 0;

    t9 = ((x701==x702)>>(x703+x704));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x741 = INT16_MIN;
	uint64_t x742 = 16382081LLU;
	int64_t x743 = -1LL;
	volatile uint64_t x744 = 1LLU;

    t10 = ((x741==x742)>>(x743+x744));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x769 = INT16_MAX;
	static int32_t x770 = -1;
	static int8_t x771 = -1;
	static volatile int16_t x772 = 7;

    t11 = ((x769==x770)>>(x771+x772));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x774 = -95979LL;
	uint16_t x776 = 0U;
	int32_t t12 = -403034;

    t12 = ((x773==x774)>>(x775+x776));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x805 = -1;
	static volatile uint16_t x806 = 14299U;
	static uint8_t x807 = 2U;
	static volatile int64_t x808 = -1LL;
	static volatile int32_t t13 = 0;

    t13 = ((x805==x806)>>(x807+x808));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x817 = INT8_MIN;
	int8_t x818 = -58;
	uint16_t x820 = 5U;
	static volatile int32_t t14 = 7887455;

    t14 = ((x817==x818)>>(x819+x820));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x961 = INT16_MIN;
	int64_t x962 = INT64_MIN;
	uint32_t x963 = UINT32_MAX;
	int32_t t15 = -3;

    t15 = ((x961==x962)>>(x963+x964));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1006 = 117;
	volatile uint16_t x1007 = 1U;
	volatile int16_t x1008 = -1;

    t16 = ((x1005==x1006)>>(x1007+x1008));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1069 = UINT16_MAX;
	volatile uint8_t x1072 = 31U;
	int32_t t17 = 3457;

    t17 = ((x1069==x1070)>>(x1071+x1072));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x1085 = INT32_MIN;
	volatile uint16_t x1086 = UINT16_MAX;
	static uint8_t x1087 = 1U;
	volatile int32_t t18 = 11957073;

    t18 = ((x1085==x1086)>>(x1087+x1088));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x1205 = -1;
	uint8_t x1206 = 84U;
	uint64_t x1207 = 0LLU;
	uint16_t x1208 = 1U;
	static int32_t t19 = -65985977;

    t19 = ((x1205==x1206)>>(x1207+x1208));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x1230 = INT8_MAX;
	uint8_t x1231 = 1U;
	uint64_t x1232 = UINT64_MAX;
	int32_t t20 = 11559;

    t20 = ((x1229==x1230)>>(x1231+x1232));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1289 = 187804537941927LL;
	uint16_t x1291 = 2U;
	uint16_t x1292 = 29U;
	volatile int32_t t21 = 5;

    t21 = ((x1289==x1290)>>(x1291+x1292));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x1469 = INT32_MIN;
	uint64_t x1470 = 4026913595003458LLU;
	volatile int32_t x1471 = -1;
	int8_t x1472 = 1;
	volatile int32_t t22 = 478;

    t22 = ((x1469==x1470)>>(x1471+x1472));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x1625 = 1U;
	int32_t x1626 = -1;
	uint8_t x1628 = 0U;
	int32_t t23 = 1716169;

    t23 = ((x1625==x1626)>>(x1627+x1628));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1765 = UINT64_MAX;
	uint32_t x1766 = 1753U;
	uint8_t x1767 = 3U;
	volatile uint8_t x1768 = 2U;
	volatile int32_t t24 = -52201;

    t24 = ((x1765==x1766)>>(x1767+x1768));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2014 = -1;
	static uint8_t x2015 = 28U;
	static volatile uint64_t x2016 = UINT64_MAX;
	volatile int32_t t25 = 4457593;

    t25 = ((x2013==x2014)>>(x2015+x2016));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x2033 = -1;
	uint8_t x2035 = 12U;
	static volatile int32_t x2036 = -3;
	int32_t t26 = -1;

    t26 = ((x2033==x2034)>>(x2035+x2036));

    if (t26 != 0) { NG(); } else { ; }
	
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

