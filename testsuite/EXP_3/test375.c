
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

int8_t x79 = -23;
static volatile int8_t x141 = INT8_MIN;
int32_t x279 = INT32_MIN;
static int32_t x280 = INT32_MIN;
int64_t x327 = -1LL;
static volatile uint64_t t5 = 23LLU;
int32_t x544 = -1;
int32_t x716 = -1;
static volatile uint32_t t9 = 6U;
volatile uint8_t x1462 = 19U;
uint64_t x1506 = UINT64_MAX;
int8_t x1507 = 3;
static volatile uint64_t x1508 = UINT64_MAX;
volatile uint32_t x1666 = 198U;
int32_t x1847 = 1;
static int32_t t16 = 1255;
volatile int16_t x2000 = -3;
volatile uint64_t t18 = 36LLU;
uint16_t x2130 = UINT16_MAX;
static volatile uint32_t t20 = 895230728U;
static int32_t x2161 = -1;
uint8_t x2625 = UINT8_MAX;


void f0(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	int64_t x78 = 11725569LL;
	int8_t x80 = -53;
	int64_t t0 = -13503LL;

    t0 = ((x77|x78)>>(x79-x80));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x142 = 130916LLU;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	static volatile uint64_t t1 = 1590878140237119LLU;

    t1 = ((x141|x142)>>(x143-x144));

    if (t1 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x273 = 508193;
	int8_t x274 = INT8_MAX;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t x276 = -1;
	volatile int32_t t2 = 32902599;

    t2 = ((x273|x274)>>(x275-x276));

    if (t2 != 508287) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x277 = INT8_MAX;
	uint16_t x278 = UINT16_MAX;
	static volatile int32_t t3 = -9814;

    t3 = ((x277|x278)>>(x279-x280));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x297 = 79U;
	uint32_t x298 = 47910653U;
	static volatile int64_t x299 = -1LL;
	int64_t x300 = -1LL;
	static volatile uint32_t t4 = 696U;

    t4 = ((x297|x298)>>(x299-x300));

    if (t4 != 47910655U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x325 = 485984422402165LLU;
	uint16_t x326 = 238U;
	int8_t x328 = -1;

    t5 = ((x325|x326)>>(x327-x328));

    if (t5 != 485984422402303LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x541 = 3210756811298591LLU;
	static volatile int8_t x542 = 1;
	uint8_t x543 = 0U;
	uint64_t t6 = 250LLU;

    t6 = ((x541|x542)>>(x543-x544));

    if (t6 != 1605378405649295LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x713 = 27U;
	uint8_t x714 = UINT8_MAX;
	uint16_t x715 = 26U;
	volatile int32_t t7 = -172546;

    t7 = ((x713|x714)>>(x715-x716));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x821 = 3946308491866768LLU;
	int32_t x822 = INT32_MAX;
	int16_t x823 = -1;
	volatile int64_t x824 = -1LL;
	static uint64_t t8 = 16178504064229488LLU;

    t8 = ((x821|x822)>>(x823-x824));

    if (t8 != 3946310440845311LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x1013 = UINT8_MAX;
	static volatile uint32_t x1014 = UINT32_MAX;
	uint8_t x1015 = 1U;
	int32_t x1016 = -1;

    t9 = ((x1013|x1014)>>(x1015-x1016));

    if (t9 != 1073741823U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x1285 = 10U;
	static volatile uint16_t x1286 = 3373U;
	uint32_t x1287 = 0U;
	int64_t x1288 = -1LL;
	volatile uint32_t t10 = 12450159U;

    t10 = ((x1285|x1286)>>(x1287-x1288));

    if (t10 != 1687U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1461 = 760LLU;
	uint64_t x1463 = UINT64_MAX;
	int16_t x1464 = -1;
	volatile uint64_t t11 = 234184256LLU;

    t11 = ((x1461|x1462)>>(x1463-x1464));

    if (t11 != 763LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1505 = 1375U;
	volatile uint64_t t12 = 15713655412LLU;

    t12 = ((x1505|x1506)>>(x1507-x1508));

    if (t12 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1665 = 228225540408096LLU;
	volatile int8_t x1667 = -1;
	static int32_t x1668 = -1;
	volatile uint64_t t13 = 1143259928982573LLU;

    t13 = ((x1665|x1666)>>(x1667-x1668));

    if (t13 != 228225540408294LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x1693 = 1U;
	volatile uint16_t x1694 = 21U;
	int32_t x1695 = -1;
	int8_t x1696 = -1;
	int32_t t14 = -855;

    t14 = ((x1693|x1694)>>(x1695-x1696));

    if (t14 != 21) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x1797 = 3U;
	static volatile uint64_t x1798 = 15944250LLU;
	int32_t x1799 = INT32_MAX;
	int32_t x1800 = INT32_MAX;
	volatile uint64_t t15 = 10951052630743LLU;

    t15 = ((x1797|x1798)>>(x1799-x1800));

    if (t15 != 15944251LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x1845 = 1;
	static uint16_t x1846 = 38U;
	static uint64_t x1848 = UINT64_MAX;

    t16 = ((x1845|x1846)>>(x1847-x1848));

    if (t16 != 9) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1897 = INT16_MAX;
	static uint8_t x1898 = UINT8_MAX;
	int64_t x1899 = -1LL;
	int64_t x1900 = -1LL;
	int32_t t17 = -1;

    t17 = ((x1897|x1898)>>(x1899-x1900));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x1997 = 41317LLU;
	volatile int32_t x1998 = INT32_MAX;
	uint16_t x1999 = 1U;

    t18 = ((x1997|x1998)>>(x1999-x2000));

    if (t18 != 134217727LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x2125 = UINT64_MAX;
	static uint8_t x2126 = 17U;
	volatile uint8_t x2127 = 3U;
	int16_t x2128 = -1;
	volatile uint64_t t19 = 139628LLU;

    t19 = ((x2125|x2126)>>(x2127-x2128));

    if (t19 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2129 = 1750082012U;
	volatile int32_t x2131 = -1;
	int16_t x2132 = -1;

    t20 = ((x2129|x2130)>>(x2131-x2132));

    if (t20 != 1750138879U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x2137 = INT32_MIN;
	uint64_t x2138 = 80LLU;
	int8_t x2139 = 1;
	volatile int16_t x2140 = 0;
	static uint64_t t21 = 826917LLU;

    t21 = ((x2137|x2138)>>(x2139-x2140));

    if (t21 != 9223372035781034024LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x2141 = 6LL;
	int64_t x2142 = INT64_MAX;
	volatile int8_t x2143 = 9;
	int8_t x2144 = -24;
	static int64_t t22 = -1975035LL;

    t22 = ((x2141|x2142)>>(x2143-x2144));

    if (t22 != 1073741823LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x2162 = 0U;
	static int8_t x2163 = -1;
	int64_t x2164 = -1LL;
	uint32_t t23 = UINT32_MAX;

    t23 = ((x2161|x2162)>>(x2163-x2164));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x2201 = 8419034885LLU;
	uint64_t x2202 = 66185749LLU;
	uint32_t x2203 = UINT32_MAX;
	int8_t x2204 = -1;
	uint64_t t24 = 59165161487129676LLU;

    t24 = ((x2201|x2202)>>(x2203-x2204));

    if (t24 != 8454795029LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x2385 = UINT32_MAX;
	static int32_t x2386 = -32441171;
	volatile uint8_t x2387 = UINT8_MAX;
	uint8_t x2388 = UINT8_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = ((x2385|x2386)>>(x2387-x2388));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x2501 = UINT64_MAX;
	uint64_t x2502 = 185500LLU;
	int8_t x2503 = -1;
	static int64_t x2504 = -1LL;
	volatile uint64_t t26 = UINT64_MAX;

    t26 = ((x2501|x2502)>>(x2503-x2504));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x2626 = 47LLU;
	uint16_t x2627 = 4U;
	volatile int16_t x2628 = -1;
	volatile uint64_t t27 = 1739900061989012233LLU;

    t27 = ((x2625|x2626)>>(x2627-x2628));

    if (t27 != 7LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2629 = 2815408959838LLU;
	uint16_t x2630 = 715U;
	uint8_t x2631 = 11U;
	int32_t x2632 = -1;
	volatile uint64_t t28 = 69866LLU;

    t28 = ((x2629|x2630)>>(x2631-x2632));

    if (t28 != 687355703LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x2685 = -1;
	uint32_t x2686 = 22809010U;
	static volatile uint8_t x2687 = 0U;
	uint64_t x2688 = UINT64_MAX;
	static volatile uint32_t t29 = 69U;

    t29 = ((x2685|x2686)>>(x2687-x2688));

    if (t29 != 2147483647U) { NG(); } else { ; }
	
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


    return 0;
}

