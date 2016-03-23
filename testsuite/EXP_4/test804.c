
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

int32_t x67 = -1;
int32_t x68 = 2449;
static int8_t x211 = -1;
static volatile int8_t x270 = 0;
static int16_t x272 = 3;
uint16_t x294 = 1U;
int8_t x295 = INT8_MAX;
uint32_t t3 = 186285784U;
static int32_t x456 = -1;
int32_t t5 = 110;
volatile uint8_t x511 = UINT8_MAX;
volatile uint8_t x512 = UINT8_MAX;
int16_t x857 = INT16_MAX;
volatile int8_t x858 = -1;
int64_t t10 = -111220LL;
volatile uint64_t t11 = 7859415202560LLU;
volatile int32_t x1353 = 32;
uint32_t x1355 = UINT32_MAX;
uint64_t x1509 = 29463937113693LLU;
int32_t x1510 = -1;
int8_t x1511 = INT8_MIN;
uint8_t x1529 = 3U;
volatile uint64_t x1665 = UINT64_MAX;
uint16_t x1709 = UINT16_MAX;
int64_t x1891 = INT64_MIN;
int8_t x1936 = -1;
uint64_t t21 = 2617248626889693914LLU;
int16_t x1961 = INT16_MAX;
int16_t x1963 = INT16_MIN;
volatile int32_t x2079 = -1;
static volatile int8_t x2175 = -1;
int32_t t29 = 107054206;
int64_t x2240 = INT64_MIN;
int32_t x2462 = 1;
int8_t x2464 = INT8_MIN;
static int32_t x2591 = INT32_MIN;
uint32_t t38 = UINT32_MAX;
uint32_t t40 = 11U;


void f0(void) {
    	uint16_t x65 = 40U;
	static uint64_t x66 = 14LLU;
	int32_t t0 = 642156380;

    t0 = (x65<<(x66-(x67%x68)));

    if (t0 != 1310720) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x209 = 3364175715249LLU;
	int8_t x210 = 0;
	int64_t x212 = 4262487073792761974LL;
	static uint64_t t1 = 11103LLU;

    t1 = (x209<<(x210-(x211%x212)));

    if (t1 != 6728351430498LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x269 = 1609U;
	uint32_t x271 = UINT32_MAX;
	int32_t t2 = 12;

    t2 = (x269<<(x270-(x271%x272)));

    if (t2 != 1609) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x293 = 63761U;
	int8_t x296 = INT8_MAX;

    t3 = (x293<<(x294-(x295%x296)));

    if (t3 != 127522U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x453 = UINT8_MAX;
	static uint32_t x454 = 0U;
	int32_t x455 = -157566030;
	static int32_t t4 = 158;

    t4 = (x453<<(x454-(x455%x456)));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x489 = 61057;
	static uint32_t x490 = 2U;
	uint32_t x491 = 0U;
	static int8_t x492 = 2;

    t5 = (x489<<(x490-(x491%x492)));

    if (t5 != 244228) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x509 = UINT64_MAX;
	uint64_t x510 = 3LLU;
	uint64_t t6 = 537965LLU;

    t6 = (x509<<(x510-(x511%x512)));

    if (t6 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x637 = INT16_MAX;
	int16_t x638 = INT16_MIN;
	static int16_t x639 = INT16_MIN;
	static uint32_t x640 = UINT32_MAX;
	int32_t t7 = -214;

    t7 = (x637<<(x638-(x639%x640)));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x665 = 49138710LLU;
	uint16_t x666 = 18U;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MIN;
	static uint64_t t8 = 13251754491704459LLU;

    t8 = (x665<<(x666-(x667%x668)));

    if (t8 != 12881417994240LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x859 = -1;
	static volatile uint8_t x860 = UINT8_MAX;
	volatile int32_t t9 = 20;

    t9 = (x857<<(x858-(x859%x860)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x937 = 11LL;
	static int64_t x938 = -1LL;
	int16_t x939 = -19;
	int32_t x940 = INT32_MIN;

    t10 = (x937<<(x938-(x939%x940)));

    if (t10 != 2883584LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1169 = UINT64_MAX;
	int8_t x1170 = 1;
	int16_t x1171 = INT16_MIN;
	int8_t x1172 = -1;

    t11 = (x1169<<(x1170-(x1171%x1172)));

    if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x1297 = 1U;
	uint8_t x1298 = 3U;
	volatile int16_t x1299 = -1;
	int32_t x1300 = 12363;
	int32_t t12 = -197788;

    t12 = (x1297<<(x1298-(x1299%x1300)));

    if (t12 != 16) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x1354 = INT32_MIN;
	volatile int32_t x1356 = INT32_MIN;
	volatile int32_t t13 = 1;

    t13 = (x1353<<(x1354-(x1355%x1356)));

    if (t13 != 64) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1457 = 0U;
	uint16_t x1458 = 0U;
	int32_t x1459 = -1;
	int32_t x1460 = INT32_MIN;
	volatile int32_t t14 = -21393;

    t14 = (x1457<<(x1458-(x1459%x1460)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1512 = INT8_MAX;
	static volatile uint64_t t15 = 8171LLU;

    t15 = (x1509<<(x1510-(x1511%x1512)));

    if (t15 != 29463937113693LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1530 = 0U;
	int8_t x1531 = -1;
	volatile int64_t x1532 = -1LL;
	volatile int32_t t16 = -128626046;

    t16 = (x1529<<(x1530-(x1531%x1532)));

    if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1666 = -2;
	static int16_t x1667 = -64;
	int64_t x1668 = 7562LL;
	volatile uint64_t t17 = 36664816811179527LLU;

    t17 = (x1665<<(x1666-(x1667%x1668)));

    if (t17 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x1710 = -1LL;
	int8_t x1711 = INT8_MIN;
	volatile int64_t x1712 = -13LL;
	volatile int32_t t18 = 696484931;

    t18 = (x1709<<(x1710-(x1711%x1712)));

    if (t18 != 67107840) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1889 = UINT8_MAX;
	int8_t x1890 = 13;
	int64_t x1892 = INT64_MAX;
	int32_t t19 = -3266;

    t19 = (x1889<<(x1890-(x1891%x1892)));

    if (t19 != 4177920) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x1905 = INT16_MAX;
	int64_t x1906 = -1LL;
	int8_t x1907 = INT8_MIN;
	volatile uint8_t x1908 = 61U;
	int32_t t20 = 17530;

    t20 = (x1905<<(x1906-(x1907%x1908)));

    if (t20 != 1048544) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1933 = 424530483228LLU;
	int8_t x1934 = 8;
	int16_t x1935 = -64;

    t21 = (x1933<<(x1934-(x1935%x1936)));

    if (t21 != 108679803706368LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x1962 = INT16_MIN;
	int32_t x1964 = INT32_MIN;
	int32_t t22 = 5;

    t22 = (x1961<<(x1962-(x1963%x1964)));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x2033 = 39LLU;
	int16_t x2034 = -1;
	volatile int64_t x2035 = -1LL;
	static int16_t x2036 = INT16_MIN;
	volatile uint64_t t23 = 1034145162879995715LLU;

    t23 = (x2033<<(x2034-(x2035%x2036)));

    if (t23 != 39LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x2077 = UINT16_MAX;
	uint8_t x2078 = 12U;
	int32_t x2080 = INT32_MAX;
	volatile int32_t t24 = 336978;

    t24 = (x2077<<(x2078-(x2079%x2080)));

    if (t24 != 536862720) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x2161 = 0;
	int16_t x2162 = -1;
	int16_t x2163 = -1;
	static int32_t x2164 = 53569283;
	int32_t t25 = -5407;

    t25 = (x2161<<(x2162-(x2163%x2164)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2165 = UINT32_MAX;
	int8_t x2166 = 2;
	static int8_t x2167 = -1;
	uint16_t x2168 = UINT16_MAX;
	static volatile uint32_t t26 = 4U;

    t26 = (x2165<<(x2166-(x2167%x2168)));

    if (t26 != 4294967288U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2173 = 18;
	uint64_t x2174 = UINT64_MAX;
	int8_t x2176 = 3;
	static volatile int32_t t27 = 16019818;

    t27 = (x2173<<(x2174-(x2175%x2176)));

    if (t27 != 18) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2205 = 2U;
	static uint8_t x2206 = UINT8_MAX;
	static uint8_t x2207 = UINT8_MAX;
	volatile int32_t x2208 = INT32_MAX;
	static int32_t t28 = -865;

    t28 = (x2205<<(x2206-(x2207%x2208)));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x2229 = 23;
	int32_t x2230 = 14;
	uint16_t x2231 = 1423U;
	volatile uint16_t x2232 = 7U;

    t29 = (x2229<<(x2230-(x2231%x2232)));

    if (t29 != 94208) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x2237 = UINT64_MAX;
	volatile int8_t x2238 = INT8_MIN;
	static volatile int8_t x2239 = INT8_MIN;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (x2237<<(x2238-(x2239%x2240)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x2265 = 31777U;
	int8_t x2266 = 3;
	volatile int16_t x2267 = INT16_MIN;
	int8_t x2268 = INT8_MIN;
	static int32_t t31 = 11294;

    t31 = (x2265<<(x2266-(x2267%x2268)));

    if (t31 != 254216) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x2333 = 27LLU;
	int32_t x2334 = 58;
	int8_t x2335 = 1;
	int64_t x2336 = -49110862LL;
	uint64_t t32 = 20190734LLU;

    t32 = (x2333<<(x2334-(x2335%x2336)));

    if (t32 != 3891110078048108544LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2413 = 1LL;
	static volatile int8_t x2414 = -1;
	volatile int32_t x2415 = -6832601;
	int8_t x2416 = INT8_MAX;
	int64_t t33 = -551237312370551LL;

    t33 = (x2413<<(x2414-(x2415%x2416)));

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x2461 = 931417325;
	int8_t x2463 = INT8_MIN;
	int32_t t34 = 1266638;

    t34 = (x2461<<(x2462-(x2463%x2464)));

    if (t34 != 1862834650) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x2469 = 68U;
	static volatile int64_t x2470 = -1LL;
	int16_t x2471 = -2;
	volatile int64_t x2472 = INT64_MAX;
	volatile int32_t t35 = -264;

    t35 = (x2469<<(x2470-(x2471%x2472)));

    if (t35 != 136) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x2589 = 7126247692LLU;
	uint8_t x2590 = 1U;
	int8_t x2592 = INT8_MAX;
	volatile uint64_t t36 = 2147346221LLU;

    t36 = (x2589<<(x2590-(x2591%x2592)));

    if (t36 != 3648638818304LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x2597 = 8139029U;
	int32_t x2598 = -1;
	int32_t x2599 = INT32_MIN;
	int8_t x2600 = INT8_MAX;
	uint32_t t37 = 161U;

    t37 = (x2597<<(x2598-(x2599%x2600)));

    if (t37 != 1041795712U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x2613 = UINT32_MAX;
	int8_t x2614 = -1;
	static int64_t x2615 = -1LL;
	int16_t x2616 = INT16_MAX;

    t38 = (x2613<<(x2614-(x2615%x2616)));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2625 = 0;
	int8_t x2626 = -1;
	int8_t x2627 = -1;
	static int16_t x2628 = -996;
	volatile int32_t t39 = 45722160;

    t39 = (x2625<<(x2626-(x2627%x2628)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x2733 = 28U;
	static uint64_t x2734 = 3LLU;
	static int16_t x2735 = INT16_MIN;
	int16_t x2736 = -1;

    t40 = (x2733<<(x2734-(x2735%x2736)));

    if (t40 != 224U) { NG(); } else { ; }
	
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
    f37();
    f38();
    f39();
    f40();


    return 0;
}

