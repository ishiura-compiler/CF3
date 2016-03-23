
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

volatile uint16_t x144 = 5U;
int16_t x330 = INT16_MIN;
volatile uint64_t x397 = UINT64_MAX;
int8_t x400 = 1;
uint64_t t3 = 945LLU;
uint32_t x410 = 210960044U;
int16_t x418 = -1;
volatile int8_t x428 = 1;
uint32_t t6 = 96564496U;
static volatile uint32_t x455 = 329775845U;
uint32_t t8 = 446630U;
uint8_t x1204 = 0U;
volatile uint32_t x1307 = 2496U;
uint8_t x1542 = 1U;
int8_t x1558 = INT8_MAX;
volatile uint16_t x1574 = 85U;
uint8_t x1710 = 100U;
uint32_t x1847 = 28877009U;
volatile uint64_t t22 = 16075766556874LLU;
int64_t t23 = 49LL;
volatile int16_t x1981 = INT16_MAX;
int32_t x1984 = 0;
volatile uint16_t x1992 = 0U;
volatile uint16_t x2045 = 0U;
int8_t x2047 = 1;
int16_t x2048 = 5;
static int64_t x2070 = 1546567514979LL;
uint16_t x2101 = 58U;
int32_t t30 = 17;
int16_t x2171 = INT16_MAX;
uint64_t t31 = 5538453032751821464LLU;
int16_t x2412 = 11;
uint32_t x2615 = 34U;


void f0(void) {
    	int32_t x141 = -921;
	static int64_t x142 = -1LL;
	uint32_t x143 = 1724891U;
	volatile int64_t t0 = 3772629780312596921LL;

    t0 = ((x141-x142)|(x143<<x144));

    if (t0 != -152LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x213 = UINT32_MAX;
	static int32_t x214 = 2;
	uint64_t x215 = 440LLU;
	int64_t x216 = 0LL;
	volatile uint64_t t1 = 11587894LLU;

    t1 = ((x213-x214)|(x215<<x216));

    if (t1 != 4294967293LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x329 = INT32_MIN;
	uint32_t x331 = 0U;
	static int8_t x332 = 0;
	uint32_t t2 = 200103U;

    t2 = ((x329-x330)|(x331<<x332));

    if (t2 != 2147516416U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x398 = 7U;
	volatile int64_t x399 = 331341LL;

    t3 = ((x397-x398)|(x399<<x400));

    if (t3 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x409 = INT8_MIN;
	int64_t x411 = 2LL;
	int8_t x412 = 2;
	int64_t t4 = -3122894068467LL;

    t4 = ((x409-x410)|(x411<<x412));

    if (t4 != 4084007132LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x417 = 14548376LLU;
	uint32_t x419 = UINT32_MAX;
	static volatile uint8_t x420 = 24U;
	volatile uint64_t t5 = 1LLU;

    t5 = ((x417-x418)|(x419<<x420));

    if (t5 != 4292738457LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x425 = 7U;
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = 26363;

    t6 = ((x425-x426)|(x427<<x428));

    if (t6 != 52734U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x449 = 114608U;
	uint16_t x450 = 2389U;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = 1;
	uint32_t t7 = 220U;

    t7 = ((x449-x450)|(x451<<x452));

    if (t7 != 112639U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x453 = -710;
	int32_t x454 = INT32_MIN;
	static volatile int32_t x456 = 10;

    t8 = ((x453-x454)|(x455<<x456));

    if (t8 != 4294966586U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x857 = 4;
	volatile int32_t x858 = INT32_MAX;
	int16_t x859 = INT16_MAX;
	static int8_t x860 = 3;
	int32_t t9 = -65179;

    t9 = ((x857-x858)|(x859<<x860));

    if (t9 != -2147221507) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x989 = 6U;
	volatile int8_t x990 = INT8_MIN;
	uint8_t x991 = 4U;
	int8_t x992 = 2;
	int32_t t10 = 8;

    t10 = ((x989-x990)|(x991<<x992));

    if (t10 != 150) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x1001 = 68881554LLU;
	int8_t x1002 = INT8_MIN;
	volatile uint8_t x1003 = UINT8_MAX;
	uint32_t x1004 = 15U;
	uint64_t t11 = 7801273338742901LLU;

    t11 = ((x1001-x1002)|(x1003<<x1004));

    if (t11 != 75468050LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x1025 = INT16_MIN;
	int16_t x1026 = INT16_MIN;
	volatile uint16_t x1027 = 2516U;
	static volatile uint8_t x1028 = 12U;
	volatile int32_t t12 = 7325167;

    t12 = ((x1025-x1026)|(x1027<<x1028));

    if (t12 != 10305536) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1201 = 3779U;
	int8_t x1202 = -1;
	int16_t x1203 = 1;
	volatile int32_t t13 = -12094;

    t13 = ((x1201-x1202)|(x1203<<x1204));

    if (t13 != 3781) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1269 = 102U;
	int16_t x1270 = INT16_MIN;
	uint8_t x1271 = 32U;
	uint32_t x1272 = 0U;
	static int32_t t14 = -428777;

    t14 = ((x1269-x1270)|(x1271<<x1272));

    if (t14 != 32870) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1305 = INT8_MIN;
	uint32_t x1306 = 11U;
	uint16_t x1308 = 8U;
	volatile uint32_t t15 = 578695U;

    t15 = ((x1305-x1306)|(x1307<<x1308));

    if (t15 != 4294967157U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1541 = INT16_MIN;
	uint16_t x1543 = UINT16_MAX;
	uint8_t x1544 = 4U;
	volatile int32_t t16 = -113322;

    t16 = ((x1541-x1542)|(x1543<<x1544));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1557 = UINT64_MAX;
	static int32_t x1559 = 391021;
	static volatile int8_t x1560 = 0;
	volatile uint64_t t17 = 8226019582698179LLU;

    t17 = ((x1557-x1558)|(x1559<<x1560));

    if (t17 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x1573 = -1;
	static uint16_t x1575 = UINT16_MAX;
	int8_t x1576 = 1;
	int32_t t18 = -222707;

    t18 = ((x1573-x1574)|(x1575<<x1576));

    if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1609 = 814;
	uint64_t x1610 = 789017659LLU;
	static uint8_t x1611 = UINT8_MAX;
	uint8_t x1612 = 11U;
	volatile uint64_t t19 = 3429LLU;

    t19 = ((x1609-x1610)|(x1611<<x1612));

    if (t19 != 18446744072921022195LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x1709 = INT16_MIN;
	uint64_t x1711 = 15344LLU;
	uint8_t x1712 = 28U;
	volatile uint64_t t20 = 1236LLU;

    t20 = ((x1709-x1710)|(x1711<<x1712));

    if (t20 != 18446744073709518748LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1845 = INT16_MAX;
	int32_t x1846 = -415;
	int8_t x1848 = 3;
	static uint32_t t21 = 0U;

    t21 = ((x1845-x1846)|(x1847<<x1848));

    if (t21 != 231049118U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1885 = INT16_MIN;
	uint64_t x1886 = 1699876155005116LLU;
	uint64_t x1887 = 18LLU;
	int64_t x1888 = 0LL;

    t22 = ((x1885-x1886)|(x1887<<x1888));

    if (t22 != 18445044197554513750LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x1953 = -1LL;
	int64_t x1954 = INT64_MAX;
	uint32_t x1955 = 6U;
	int8_t x1956 = 3;

    t23 = ((x1953-x1954)|(x1955<<x1956));

    if (t23 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x1982 = 1823U;
	int16_t x1983 = 0;
	static volatile int32_t t24 = 567551485;

    t24 = ((x1981-x1982)|(x1983<<x1984));

    if (t24 != 30944) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1989 = 5;
	static uint32_t x1990 = 1726U;
	uint32_t x1991 = 61U;
	static uint32_t t25 = 1044U;

    t25 = ((x1989-x1990)|(x1991<<x1992));

    if (t25 != 4294965631U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1993 = UINT32_MAX;
	static int32_t x1994 = -1611;
	static int8_t x1995 = INT8_MAX;
	static int8_t x1996 = 1;
	volatile uint32_t t26 = 2481U;

    t26 = ((x1993-x1994)|(x1995<<x1996));

    if (t26 != 1790U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x2046 = UINT32_MAX;
	uint32_t t27 = 124564U;

    t27 = ((x2045-x2046)|(x2047<<x2048));

    if (t27 != 33U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2069 = UINT64_MAX;
	uint32_t x2071 = UINT32_MAX;
	static uint8_t x2072 = 1U;
	volatile uint64_t t28 = 5565628542594LLU;

    t28 = ((x2069-x2070)|(x2071<<x2072));

    if (t28 != 18446742527521325054LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2102 = 13;
	static int16_t x2103 = 447;
	int16_t x2104 = 1;
	volatile int32_t t29 = -46367;

    t29 = ((x2101-x2102)|(x2103<<x2104));

    if (t29 != 895) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x2145 = INT16_MAX;
	int32_t x2146 = 26;
	uint8_t x2147 = UINT8_MAX;
	uint8_t x2148 = 1U;

    t30 = ((x2145-x2146)|(x2147<<x2148));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2169 = 2905LLU;
	uint16_t x2170 = 2U;
	int8_t x2172 = 11;

    t31 = ((x2169-x2170)|(x2171<<x2172));

    if (t31 != 67107671LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2385 = INT8_MIN;
	uint16_t x2386 = 1472U;
	int16_t x2387 = INT16_MAX;
	int8_t x2388 = 0;
	int32_t t32 = -267;

    t32 = ((x2385-x2386)|(x2387<<x2388));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2401 = -1LL;
	uint32_t x2402 = 166956210U;
	uint8_t x2403 = 12U;
	int8_t x2404 = 1;
	int64_t t33 = -10895373LL;

    t33 = ((x2401-x2402)|(x2403<<x2404));

    if (t33 != -166956195LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x2409 = 2425U;
	int64_t x2410 = -1LL;
	uint8_t x2411 = 4U;
	volatile int64_t t34 = 31740956109768749LL;

    t34 = ((x2409-x2410)|(x2411<<x2412));

    if (t34 != 10618LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2433 = -96;
	uint32_t x2434 = 429U;
	uint16_t x2435 = 2292U;
	uint32_t x2436 = 0U;
	uint32_t t35 = 1U;

    t35 = ((x2433-x2434)|(x2435<<x2436));

    if (t35 != 4294966775U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2613 = -1;
	int64_t x2614 = INT64_MIN;
	int16_t x2616 = 0;
	int64_t t36 = INT64_MAX;

    t36 = ((x2613-x2614)|(x2615<<x2616));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
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
    f36();


    return 0;
}

