
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

int32_t t0 = 15;
static int8_t x151 = -1;
volatile int8_t x152 = 54;
static int16_t x198 = -6;
int8_t x200 = 3;
uint16_t x241 = 395U;
int8_t x293 = -1;
uint16_t x360 = 2U;
int32_t t6 = 13;
volatile uint32_t x436 = 1U;
int64_t x562 = 428046195553879845LL;
int64_t t8 = -150LL;
uint16_t x619 = 11U;
int8_t x649 = -19;
volatile uint64_t x650 = UINT64_MAX;
uint8_t x669 = 124U;
uint8_t x670 = 3U;
int8_t x671 = 19;
uint64_t t12 = 6980833905330536LLU;
static int64_t x902 = INT64_MIN;
uint8_t x904 = 4U;
uint64_t x978 = UINT64_MAX;
uint32_t x1096 = 2U;
static volatile uint32_t x1109 = 6888U;
int64_t t21 = -12370120400642700LL;
int8_t x1506 = INT8_MIN;
static int8_t x1507 = 3;
int64_t x1602 = INT64_MAX;
int8_t x1603 = 12;
uint8_t x1615 = 6U;
uint8_t x1746 = UINT8_MAX;
uint64_t x2153 = UINT64_MAX;
uint64_t x2156 = 3LLU;
uint64_t t31 = 1896586LLU;
int8_t x2168 = -1;
volatile int32_t t32 = -23736078;
int64_t x2442 = INT64_MIN;
int8_t x2444 = 4;
volatile int64_t t35 = 15734318LL;
int8_t x2582 = INT8_MIN;
int32_t x2583 = 1;
uint8_t x2616 = 27U;
int64_t x2761 = INT64_MAX;
static int32_t x2763 = -1;
volatile int64_t t41 = 3580026459938214LL;


void f0(void) {
    	volatile int32_t x45 = INT32_MIN;
	volatile int16_t x46 = -8;
	volatile int64_t x47 = -1LL;
	static uint8_t x48 = 7U;

    t0 = ((x45/x46)>>(x47+x48));

    if (t0 != 4194304) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x89 = -1LL;
	static uint64_t x90 = 1LLU;
	static uint8_t x91 = 4U;
	int8_t x92 = -1;
	uint64_t t1 = 36442449072281LLU;

    t1 = ((x89/x90)>>(x91+x92));

    if (t1 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x149 = 406423261494LLU;
	uint64_t x150 = 69940918199771548LLU;
	uint64_t t2 = 733424936059568LLU;

    t2 = ((x149/x150)>>(x151+x152));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x197 = -1;
	static volatile uint16_t x199 = 0U;
	int32_t t3 = -33847;

    t3 = ((x197/x198)>>(x199+x200));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x242 = UINT64_MAX;
	volatile int8_t x243 = 31;
	static uint8_t x244 = 8U;
	uint64_t t4 = 7609850LLU;

    t4 = ((x241/x242)>>(x243+x244));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x294 = 23U;
	static int32_t x295 = 10;
	int8_t x296 = 2;
	int32_t t5 = 274195;

    t5 = ((x293/x294)>>(x295+x296));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x357 = -62;
	uint16_t x358 = 261U;
	volatile int8_t x359 = -1;

    t6 = ((x357/x358)>>(x359+x360));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x433 = 90U;
	uint8_t x434 = 24U;
	static uint8_t x435 = 0U;
	int32_t t7 = -4;

    t7 = ((x433/x434)>>(x435+x436));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x561 = INT16_MAX;
	int8_t x563 = 1;
	uint16_t x564 = 29U;

    t8 = ((x561/x562)>>(x563+x564));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x617 = INT64_MIN;
	int16_t x618 = INT16_MIN;
	int16_t x620 = -1;
	int64_t t9 = -4181923417LL;

    t9 = ((x617/x618)>>(x619+x620));

    if (t9 != 274877906944LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x651 = 26;
	int32_t x652 = -1;
	uint64_t t10 = 59517LLU;

    t10 = ((x649/x650)>>(x651+x652));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x672 = 2;
	static volatile int32_t t11 = -4902757;

    t11 = ((x669/x670)>>(x671+x672));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x757 = 23U;
	volatile uint64_t x758 = 2573388669LLU;
	int32_t x759 = -1;
	volatile uint32_t x760 = 62U;

    t12 = ((x757/x758)>>(x759+x760));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x889 = 27U;
	int64_t x890 = INT64_MIN;
	volatile uint32_t x891 = 11U;
	uint64_t x892 = UINT64_MAX;
	volatile int64_t t13 = 7455315110LL;

    t13 = ((x889/x890)>>(x891+x892));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x901 = UINT64_MAX;
	uint16_t x903 = 4U;
	uint64_t t14 = 9LLU;

    t14 = ((x901/x902)>>(x903+x904));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x929 = INT8_MAX;
	int64_t x930 = INT64_MIN;
	uint16_t x931 = 7U;
	uint64_t x932 = UINT64_MAX;
	int64_t t15 = -3090LL;

    t15 = ((x929/x930)>>(x931+x932));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x977 = INT8_MIN;
	volatile uint64_t x979 = UINT64_MAX;
	volatile uint32_t x980 = 43U;
	uint64_t t16 = 1667353697LLU;

    t16 = ((x977/x978)>>(x979+x980));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1093 = INT8_MIN;
	uint16_t x1094 = UINT16_MAX;
	uint64_t x1095 = UINT64_MAX;
	volatile int32_t t17 = -1513684;

    t17 = ((x1093/x1094)>>(x1095+x1096));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1110 = -1;
	int8_t x1111 = 22;
	int16_t x1112 = 1;
	uint32_t t18 = 44598U;

    t18 = ((x1109/x1110)>>(x1111+x1112));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x1349 = UINT16_MAX;
	int8_t x1350 = INT8_MAX;
	static volatile int32_t x1351 = 29;
	int16_t x1352 = -2;
	int32_t t19 = -151595;

    t19 = ((x1349/x1350)>>(x1351+x1352));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1353 = 1051832633936913098LL;
	static uint64_t x1354 = 64174936357358078LLU;
	int32_t x1355 = -1;
	int8_t x1356 = 52;
	static volatile uint64_t t20 = 520986142LLU;

    t20 = ((x1353/x1354)>>(x1355+x1356));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1413 = INT32_MIN;
	int64_t x1414 = INT64_MIN;
	volatile uint32_t x1415 = UINT32_MAX;
	static int16_t x1416 = 1;

    t21 = ((x1413/x1414)>>(x1415+x1416));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1505 = 2U;
	static volatile int8_t x1508 = -1;
	static int32_t t22 = 173;

    t22 = ((x1505/x1506)>>(x1507+x1508));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1601 = -1;
	static int32_t x1604 = -1;
	int64_t t23 = -16LL;

    t23 = ((x1601/x1602)>>(x1603+x1604));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1613 = -1LL;
	volatile int32_t x1614 = INT32_MIN;
	volatile uint32_t x1616 = UINT32_MAX;
	static int64_t t24 = 790535605148796LL;

    t24 = ((x1613/x1614)>>(x1615+x1616));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x1745 = UINT32_MAX;
	static int8_t x1747 = 1;
	volatile int16_t x1748 = -1;
	uint32_t t25 = 91U;

    t25 = ((x1745/x1746)>>(x1747+x1748));

    if (t25 != 16843009U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1813 = UINT64_MAX;
	int64_t x1814 = INT64_MIN;
	int8_t x1815 = 0;
	int32_t x1816 = 1;
	volatile uint64_t t26 = 198942LLU;

    t26 = ((x1813/x1814)>>(x1815+x1816));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1857 = -1837LL;
	int16_t x1858 = -507;
	uint8_t x1859 = 9U;
	int8_t x1860 = 0;
	int64_t t27 = -1134766691957LL;

    t27 = ((x1857/x1858)>>(x1859+x1860));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1929 = INT8_MIN;
	int64_t x1930 = INT64_MAX;
	int64_t x1931 = -1LL;
	int32_t x1932 = 2;
	volatile int64_t t28 = 0LL;

    t28 = ((x1929/x1930)>>(x1931+x1932));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x2073 = -1;
	int64_t x2074 = INT64_MIN;
	int16_t x2075 = -1;
	volatile uint8_t x2076 = 12U;
	volatile int64_t t29 = 338623467877LL;

    t29 = ((x2073/x2074)>>(x2075+x2076));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x2141 = -1LL;
	int8_t x2142 = INT8_MAX;
	uint8_t x2143 = 27U;
	static uint16_t x2144 = 13U;
	volatile int64_t t30 = -303593129729LL;

    t30 = ((x2141/x2142)>>(x2143+x2144));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x2154 = INT64_MIN;
	uint8_t x2155 = 13U;

    t31 = ((x2153/x2154)>>(x2155+x2156));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2165 = -1;
	uint16_t x2166 = 14U;
	uint8_t x2167 = 14U;

    t32 = ((x2165/x2166)>>(x2167+x2168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2257 = -1;
	int16_t x2258 = -1;
	uint32_t x2259 = 1U;
	int8_t x2260 = 3;
	volatile int32_t t33 = -267111626;

    t33 = ((x2257/x2258)>>(x2259+x2260));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2393 = INT64_MAX;
	int16_t x2394 = INT16_MAX;
	volatile int8_t x2395 = 28;
	int32_t x2396 = -1;
	int64_t t34 = -54206313LL;

    t34 = ((x2393/x2394)>>(x2395+x2396));

    if (t34 != 2097216LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x2441 = INT8_MAX;
	volatile uint32_t x2443 = 11U;

    t35 = ((x2441/x2442)>>(x2443+x2444));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x2449 = 509U;
	int16_t x2450 = INT16_MIN;
	uint8_t x2451 = 12U;
	int64_t x2452 = -1LL;
	int32_t t36 = 1943810;

    t36 = ((x2449/x2450)>>(x2451+x2452));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x2545 = 261LL;
	static volatile int32_t x2546 = INT32_MAX;
	uint64_t x2547 = UINT64_MAX;
	uint32_t x2548 = 2U;
	volatile int64_t t37 = 86LL;

    t37 = ((x2545/x2546)>>(x2547+x2548));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x2581 = -1LL;
	uint8_t x2584 = 3U;
	volatile int64_t t38 = -31665846LL;

    t38 = ((x2581/x2582)>>(x2583+x2584));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x2613 = -1;
	static uint16_t x2614 = 32U;
	int8_t x2615 = -19;
	int32_t t39 = -1;

    t39 = ((x2613/x2614)>>(x2615+x2616));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x2762 = 167;
	uint64_t x2764 = 1LLU;
	static volatile int64_t t40 = 4283750920257LL;

    t40 = ((x2761/x2762)>>(x2763+x2764));

    if (t40 != 55229772675777100LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x2813 = -1;
	static volatile int64_t x2814 = INT64_MAX;
	static int64_t x2815 = -1LL;
	uint8_t x2816 = 3U;

    t41 = ((x2813/x2814)>>(x2815+x2816));

    if (t41 != 0LL) { NG(); } else { ; }
	
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
    f41();


    return 0;
}

