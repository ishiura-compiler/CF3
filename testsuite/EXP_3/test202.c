
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

uint64_t t0 = 62973597LLU;
int16_t x112 = -1;
int32_t t1 = 0;
uint8_t x166 = 11U;
int64_t x167 = -1LL;
volatile int16_t x168 = -1;
int64_t x481 = -1LL;
volatile int16_t x484 = INT16_MIN;
static int64_t t4 = -135303815956398927LL;
volatile uint8_t x514 = 24U;
uint64_t x577 = UINT64_MAX;
uint64_t t6 = 2198849914692669555LLU;
uint64_t x675 = UINT64_MAX;
volatile int16_t x896 = -5;
uint64_t t10 = 221LLU;
int64_t x1051 = -1LL;
volatile uint64_t x1089 = 186900654LLU;
uint64_t x1090 = 17770460879249LLU;
static uint8_t x1091 = 0U;
int32_t x1092 = 0;
int8_t x1103 = 27;
int64_t x1146 = INT64_MAX;
static int16_t x1332 = INT16_MIN;
volatile uint32_t t16 = 24073U;
int64_t x1549 = 36281499LL;
int8_t x1611 = -1;
int32_t x2213 = 2830;
int32_t x2298 = INT32_MAX;
static int64_t x2336 = -1LL;
uint64_t x2501 = UINT64_MAX;
int8_t x2533 = INT8_MIN;
int16_t x2563 = -1;
uint64_t x2703 = UINT64_MAX;
volatile int16_t x2797 = INT16_MIN;
volatile int8_t x2933 = INT8_MIN;
static uint16_t x2934 = UINT16_MAX;
int16_t x2935 = -1;
uint32_t x3141 = 1026U;
int32_t x3142 = INT32_MAX;
uint64_t x3144 = UINT64_MAX;
uint32_t t36 = 171671U;


void f0(void) {
    	int32_t x33 = INT32_MIN;
	volatile uint64_t x34 = UINT64_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	int16_t x36 = -1;

    t0 = ((x33+x34)<<(x35-x36));

    if (t0 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x109 = 47U;
	static int16_t x110 = 13;
	int16_t x111 = 7;

    t1 = ((x109+x110)<<(x111-x112));

    if (t1 != 15360) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x165 = 6U;
	volatile int32_t t2 = -1203380;

    t2 = ((x165+x166)<<(x167-x168));

    if (t2 != 17) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MIN;
	static volatile int64_t x315 = -1LL;
	int8_t x316 = -1;
	int64_t t3 = -63540LL;

    t3 = ((x313+x314)<<(x315-x316));

    if (t3 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x482 = UINT32_MAX;
	int16_t x483 = INT16_MIN;

    t4 = ((x481+x482)<<(x483-x484));

    if (t4 != 4294967294LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x513 = -1LL;
	int8_t x515 = INT8_MIN;
	int16_t x516 = -177;
	int64_t t5 = 563LL;

    t5 = ((x513+x514)<<(x515-x516));

    if (t5 != 12947848928690176LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x578 = -27522741834713LL;
	int64_t x579 = -1LL;
	int8_t x580 = -1;

    t6 = ((x577+x578)<<(x579-x580));

    if (t6 != 18446716550967716902LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x673 = 16U;
	uint16_t x674 = UINT16_MAX;
	uint64_t x676 = UINT64_MAX;
	static uint32_t t7 = 39529220U;

    t7 = ((x673+x674)<<(x675-x676));

    if (t7 != 65551U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x857 = UINT32_MAX;
	int8_t x858 = -1;
	static int16_t x859 = -1;
	int16_t x860 = -1;
	volatile uint32_t t8 = 22512U;

    t8 = ((x857+x858)<<(x859-x860));

    if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x893 = -1;
	uint16_t x894 = 6104U;
	int64_t x895 = -1LL;
	int32_t t9 = -69309;

    t9 = ((x893+x894)<<(x895-x896));

    if (t9 != 97648) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x909 = 2690836LLU;
	uint64_t x910 = 11830159678177307LLU;
	int64_t x911 = INT64_MIN;
	int64_t x912 = INT64_MIN;

    t10 = ((x909+x910)<<(x911-x912));

    if (t10 != 11830159680868143LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x1049 = 236270U;
	uint64_t x1050 = 658700446652158798LLU;
	int16_t x1052 = -6;
	volatile uint64_t t11 = 220LLU;

    t11 = ((x1049+x1050)<<(x1051-x1052));

    if (t11 != 2631670219167090560LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t t12 = 995736767LLU;

    t12 = ((x1089+x1090)<<(x1091-x1092));

    if (t12 != 17770647779903LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x1101 = 10176;
	uint32_t x1102 = 470U;
	int64_t x1104 = -1LL;
	static uint32_t t13 = 3366U;

    t13 = ((x1101+x1102)<<(x1103-x1104));

    if (t13 != 1610612736U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1145 = -14842800352LL;
	int8_t x1147 = -1;
	volatile int16_t x1148 = -1;
	volatile int64_t t14 = -1555709668LL;

    t14 = ((x1145+x1146)<<(x1147-x1148));

    if (t14 != 9223372022011975455LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x1329 = 1042666077U;
	int64_t x1330 = -1LL;
	int16_t x1331 = INT16_MIN;
	int64_t t15 = -7700422132082051LL;

    t15 = ((x1329+x1330)<<(x1331-x1332));

    if (t15 != 1042666076LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1333 = 6513702U;
	int8_t x1334 = -1;
	int64_t x1335 = -1LL;
	static int8_t x1336 = -1;

    t16 = ((x1333+x1334)<<(x1335-x1336));

    if (t16 != 6513701U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1445 = UINT8_MAX;
	int16_t x1446 = 210;
	int8_t x1447 = 0;
	int64_t x1448 = -1LL;
	int32_t t17 = 42;

    t17 = ((x1445+x1446)<<(x1447-x1448));

    if (t17 != 930) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1550 = INT8_MIN;
	int32_t x1551 = 15;
	int8_t x1552 = 0;
	int64_t t18 = 7111789772891LL;

    t18 = ((x1549+x1550)<<(x1551-x1552));

    if (t18 != 1188867964928LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1589 = -1;
	static volatile uint16_t x1590 = 9U;
	static volatile int8_t x1591 = 14;
	int64_t x1592 = -1LL;
	volatile int32_t t19 = 730339;

    t19 = ((x1589+x1590)<<(x1591-x1592));

    if (t19 != 262144) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1609 = 20673U;
	int8_t x1610 = 7;
	volatile uint64_t x1612 = UINT64_MAX;
	volatile int32_t t20 = 1;

    t20 = ((x1609+x1610)<<(x1611-x1612));

    if (t20 != 20680) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1733 = INT16_MAX;
	int32_t x1734 = -1;
	int32_t x1735 = 3;
	uint64_t x1736 = UINT64_MAX;
	volatile int32_t t21 = 539;

    t21 = ((x1733+x1734)<<(x1735-x1736));

    if (t21 != 524256) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1969 = UINT32_MAX;
	static int32_t x1970 = -2;
	static int32_t x1971 = INT32_MIN;
	int32_t x1972 = INT32_MIN;
	volatile uint32_t t22 = 0U;

    t22 = ((x1969+x1970)<<(x1971-x1972));

    if (t22 != 4294967293U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x1985 = 186U;
	int32_t x1986 = -1;
	int16_t x1987 = -1;
	int8_t x1988 = -15;
	volatile int32_t t23 = 29;

    t23 = ((x1985+x1986)<<(x1987-x1988));

    if (t23 != 3031040) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x2061 = UINT8_MAX;
	uint32_t x2062 = UINT32_MAX;
	int32_t x2063 = -1;
	static int16_t x2064 = -28;
	volatile uint32_t t24 = 15828177U;

    t24 = ((x2061+x2062)<<(x2063-x2064));

    if (t24 != 4026531840U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x2214 = 13;
	static int64_t x2215 = 13LL;
	volatile uint8_t x2216 = 2U;
	static int32_t t25 = -1214269;

    t25 = ((x2213+x2214)<<(x2215-x2216));

    if (t25 != 5822464) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2297 = 7LL;
	volatile int8_t x2299 = 6;
	static int64_t x2300 = -1LL;
	int64_t t26 = 442LL;

    t26 = ((x2297+x2298)<<(x2299-x2300));

    if (t26 != 274877907712LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x2333 = 5U;
	static int64_t x2334 = 1912931432LL;
	uint64_t x2335 = UINT64_MAX;
	static volatile int64_t t27 = 254429702688LL;

    t27 = ((x2333+x2334)<<(x2335-x2336));

    if (t27 != 1912931437LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2502 = 1273U;
	static uint16_t x2503 = 24U;
	int32_t x2504 = -1;
	uint64_t t28 = 230666664196854551LLU;

    t28 = ((x2501+x2502)<<(x2503-x2504));

    if (t28 != 42681237504LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2534 = 7960U;
	uint16_t x2535 = 2U;
	volatile int32_t x2536 = -1;
	volatile int32_t t29 = -125739;

    t29 = ((x2533+x2534)<<(x2535-x2536));

    if (t29 != 62656) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2561 = INT8_MAX;
	uint8_t x2562 = UINT8_MAX;
	int8_t x2564 = -1;
	static volatile int32_t t30 = 0;

    t30 = ((x2561+x2562)<<(x2563-x2564));

    if (t30 != 382) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x2701 = INT16_MIN;
	uint64_t x2702 = 2076753793127213LLU;
	int64_t x2704 = -1LL;
	uint64_t t31 = 8593382617490LLU;

    t31 = ((x2701+x2702)<<(x2703-x2704));

    if (t31 != 2076753793094445LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2798 = 360524;
	static int16_t x2799 = 8;
	int64_t x2800 = -1LL;
	volatile int32_t t32 = 12126799;

    t32 = ((x2797+x2798)<<(x2799-x2800));

    if (t32 != 167811072) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2837 = INT16_MAX;
	int32_t x2838 = 361317538;
	int32_t x2839 = -1;
	int8_t x2840 = -1;
	volatile int32_t t33 = 5834168;

    t33 = ((x2837+x2838)<<(x2839-x2840));

    if (t33 != 361350305) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x2885 = 128LLU;
	static volatile int16_t x2886 = INT16_MAX;
	static int32_t x2887 = INT32_MIN;
	int32_t x2888 = INT32_MIN;
	volatile uint64_t t34 = 343090813491481LLU;

    t34 = ((x2885+x2886)<<(x2887-x2888));

    if (t34 != 32895LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x2936 = -1;
	volatile int32_t t35 = -79609;

    t35 = ((x2933+x2934)<<(x2935-x2936));

    if (t35 != 65407) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3143 = 1LL;

    t36 = ((x3141+x3142)<<(x3143-x3144));

    if (t36 != 4100U) { NG(); } else { ; }
	
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

