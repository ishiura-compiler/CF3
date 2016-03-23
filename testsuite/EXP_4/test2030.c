
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

static int16_t x27 = 251;
static uint8_t x28 = 2U;
int32_t x154 = -1;
uint64_t t1 = 77LLU;
int32_t x162 = 90;
volatile int32_t x270 = INT32_MIN;
int64_t x272 = 1LL;
volatile int32_t t3 = 0;
int16_t x281 = INT16_MIN;
int8_t x284 = 0;
int8_t x437 = 0;
volatile int16_t x453 = INT16_MAX;
uint16_t x454 = 67U;
uint64_t x593 = UINT64_MAX;
static uint64_t x659 = UINT64_MAX;
uint64_t t8 = 63LLU;
int32_t x758 = INT32_MIN;
int8_t x760 = 3;
int16_t x880 = 0;
int16_t x1022 = -2;
volatile int8_t x1042 = INT8_MIN;
volatile int16_t x1161 = INT16_MIN;
int8_t x1344 = 7;
static volatile int32_t x1362 = 9869489;
int16_t x1386 = INT16_MIN;
volatile int16_t x1388 = 0;
int32_t t19 = 28;
static uint64_t x1539 = 4596LLU;
uint64_t t20 = 7882413221LLU;
int64_t x1657 = -1LL;
uint8_t x1658 = 1U;
int32_t t22 = 1054;
static int16_t x1945 = INT16_MAX;
volatile int32_t t26 = -12953549;
int8_t x2249 = INT8_MIN;
int8_t x2252 = 2;
volatile uint32_t t29 = 7533778U;
static int16_t x2383 = INT16_MAX;
static int8_t x2384 = 6;
uint8_t x2488 = 1U;
volatile uint64_t t32 = 32991606915253189LLU;
static int16_t x2728 = 0;
int8_t x2792 = 1;
static int32_t x2878 = INT32_MIN;
volatile int8_t x2880 = 4;


void f0(void) {
    	int64_t x25 = INT64_MIN;
	int16_t x26 = -1;
	volatile int64_t t0 = INT64_MAX;

    t0 = (x25^(x26%(x27>>x28)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x153 = -1626;
	volatile uint64_t x155 = UINT64_MAX;
	uint16_t x156 = 2U;

    t1 = (x153^(x154%(x155>>x156)));

    if (t1 != 18446744073709549989LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x161 = UINT8_MAX;
	volatile int16_t x163 = INT16_MAX;
	volatile uint8_t x164 = 2U;
	static volatile int32_t t2 = 18698532;

    t2 = (x161^(x162%(x163>>x164)));

    if (t2 != 165) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x269 = -1;
	uint16_t x271 = 2205U;

    t3 = (x269^(x270%(x271>>x272)));

    if (t3 != 819) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile uint64_t t4 = 5676528845611303LLU;

    t4 = (x281^(x282%(x283>>x284)));

    if (t4 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x438 = INT8_MIN;
	volatile int16_t x439 = 830;
	uint8_t x440 = 0U;
	int32_t t5 = 185180;

    t5 = (x437^(x438%(x439>>x440)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x455 = INT16_MAX;
	uint16_t x456 = 0U;
	static int32_t t6 = -2;

    t6 = (x453^(x454%(x455>>x456)));

    if (t6 != 32700) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x594 = INT32_MIN;
	int8_t x595 = INT8_MAX;
	int8_t x596 = 0;
	volatile uint64_t t7 = 576443744252LLU;

    t7 = (x593^(x594%(x595>>x596)));

    if (t7 != 7LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x657 = 14620U;
	int8_t x658 = -1;
	int16_t x660 = 3;

    t8 = (x657^(x658%(x659>>x660)));

    if (t8 != 14619LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x757 = UINT32_MAX;
	static uint16_t x759 = 11647U;
	uint32_t t9 = 14849U;

    t9 = (x757^(x758%(x759>>x760)));

    if (t9 != 1132U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x877 = 26539591U;
	uint16_t x878 = 0U;
	uint64_t x879 = UINT64_MAX;
	uint64_t t10 = 2049174242254027751LLU;

    t10 = (x877^(x878%(x879>>x880)));

    if (t10 != 26539591LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x1021 = INT16_MIN;
	volatile uint8_t x1023 = UINT8_MAX;
	uint16_t x1024 = 1U;
	static volatile int32_t t11 = 94;

    t11 = (x1021^(x1022%(x1023>>x1024)));

    if (t11 != 32766) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x1041 = 1;
	uint32_t x1043 = 253266U;
	uint32_t x1044 = 2U;
	uint32_t t12 = 4253U;

    t12 = (x1041^(x1042%(x1043>>x1044)));

    if (t12 != 52941U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x1162 = INT16_MIN;
	volatile uint8_t x1163 = 6U;
	uint32_t x1164 = 2U;
	volatile int32_t t13 = 220;

    t13 = (x1161^(x1162%(x1163>>x1164)));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x1245 = -33616278868876LL;
	uint8_t x1246 = UINT8_MAX;
	int8_t x1247 = INT8_MAX;
	int8_t x1248 = 0;
	static int64_t t14 = -1136929LL;

    t14 = (x1245^(x1246%(x1247>>x1248)));

    if (t14 != -33616278868875LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1341 = INT8_MIN;
	int64_t x1342 = -253LL;
	volatile uint64_t x1343 = 160689650089LLU;
	volatile uint64_t t15 = 36252LLU;

    t15 = (x1341^(x1342%(x1343>>x1344)));

    if (t15 != 18446744073428136106LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1361 = -1;
	static uint32_t x1363 = 74984U;
	static uint8_t x1364 = 1U;
	volatile uint32_t t16 = 37U;

    t16 = (x1361^(x1362%(x1363>>x1364)));

    if (t16 != 4294958202U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1385 = INT32_MIN;
	uint32_t x1387 = 5633U;
	uint32_t t17 = 0U;

    t17 = (x1385^(x1386%(x1387>>x1388)));

    if (t17 != 2147486629U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1413 = -1;
	uint64_t x1414 = UINT64_MAX;
	static volatile uint32_t x1415 = 55094440U;
	static uint8_t x1416 = 9U;
	uint64_t t18 = 3917495902793648LLU;

    t18 = (x1413^(x1414%(x1415>>x1416)));

    if (t18 != 18446744073709453132LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x1493 = 12U;
	static uint8_t x1494 = UINT8_MAX;
	int16_t x1495 = 163;
	uint8_t x1496 = 1U;

    t19 = (x1493^(x1494%(x1495>>x1496)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1537 = 12;
	int64_t x1538 = -1LL;
	int32_t x1540 = 6;

    t20 = (x1537^(x1538%(x1539>>x1540)));

    if (t20 != 5LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1659 = 9804212720258LLU;
	int64_t x1660 = 1LL;
	static volatile uint64_t t21 = 2LLU;

    t21 = (x1657^(x1658%(x1659>>x1660)));

    if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1685 = INT32_MAX;
	volatile uint8_t x1686 = 125U;
	static uint16_t x1687 = UINT16_MAX;
	uint8_t x1688 = 0U;

    t22 = (x1685^(x1686%(x1687>>x1688)));

    if (t22 != 2147483522) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1733 = INT16_MAX;
	static int8_t x1734 = INT8_MIN;
	uint16_t x1735 = 3098U;
	static int8_t x1736 = 0;
	volatile int32_t t23 = 30;

    t23 = (x1733^(x1734%(x1735>>x1736)));

    if (t23 != -32641) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1817 = UINT8_MAX;
	int32_t x1818 = -1;
	uint64_t x1819 = 4321393216998LLU;
	int8_t x1820 = 1;
	volatile uint64_t t24 = 41026666970657LLU;

    t24 = (x1817^(x1818%(x1819>>x1820)));

    if (t24 != 2044827146727LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x1946 = INT8_MIN;
	int64_t x1947 = 156957191LL;
	volatile uint32_t x1948 = 2U;
	static volatile int64_t t25 = -31126630LL;

    t25 = (x1945^(x1946%(x1947>>x1948)));

    if (t25 != -32641LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1989 = -1560;
	int16_t x1990 = -1474;
	int16_t x1991 = 43;
	static uint8_t x1992 = 0U;

    t26 = (x1989^(x1990%(x1991>>x1992)));

    if (t26 != 1564) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x2093 = INT32_MAX;
	static uint32_t x2094 = 1U;
	uint32_t x2095 = 602925U;
	uint32_t x2096 = 1U;
	static uint32_t t27 = 7U;

    t27 = (x2093^(x2094%(x2095>>x2096)));

    if (t27 != 2147483646U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x2169 = INT64_MIN;
	int8_t x2170 = -13;
	static uint64_t x2171 = UINT64_MAX;
	static uint32_t x2172 = 0U;
	volatile uint64_t t28 = 6438950186947377534LLU;

    t28 = (x2169^(x2170%(x2171>>x2172)));

    if (t28 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2250 = -3001;
	uint32_t x2251 = UINT32_MAX;

    t29 = (x2249^(x2250%(x2251>>x2252)));

    if (t29 != 3221228490U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x2381 = INT16_MAX;
	uint64_t x2382 = 117826655456LLU;
	volatile uint64_t t30 = 106006449925LLU;

    t30 = (x2381^(x2382%(x2383>>x2384)));

    if (t30 != 32740LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2485 = INT8_MIN;
	static uint8_t x2486 = 4U;
	static volatile int8_t x2487 = INT8_MAX;
	int32_t t31 = 6897;

    t31 = (x2485^(x2486%(x2487>>x2488)));

    if (t31 != -124) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2533 = INT8_MIN;
	uint64_t x2534 = UINT64_MAX;
	int8_t x2535 = INT8_MAX;
	int16_t x2536 = 6;

    t32 = (x2533^(x2534%(x2535>>x2536)));

    if (t32 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2685 = 2U;
	static int8_t x2686 = -14;
	uint64_t x2687 = 7017372850261514LLU;
	uint8_t x2688 = 9U;
	static uint64_t t33 = 64343494LLU;

    t33 = (x2685^(x2686%(x2687>>x2688)));

    if (t33 != 3369067149135LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2725 = -29;
	uint16_t x2726 = UINT16_MAX;
	int64_t x2727 = 895LL;
	int64_t t34 = -423048238168LL;

    t34 = (x2725^(x2726%(x2727>>x2728)));

    if (t34 != -213LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2777 = INT8_MIN;
	volatile int32_t x2778 = 809290;
	volatile int16_t x2779 = INT16_MAX;
	uint16_t x2780 = 0U;
	volatile int32_t t35 = 1;

    t35 = (x2777^(x2778%(x2779>>x2780)));

    if (t35 != -22814) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x2789 = INT32_MIN;
	int32_t x2790 = INT32_MIN;
	uint64_t x2791 = UINT64_MAX;
	volatile uint64_t t36 = 70073879656LLU;

    t36 = (x2789^(x2790%(x2791>>x2792)));

    if (t36 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x2829 = -1;
	int16_t x2830 = -1;
	int8_t x2831 = INT8_MAX;
	int32_t x2832 = 1;
	volatile int32_t t37 = -82;

    t37 = (x2829^(x2830%(x2831>>x2832)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x2841 = UINT32_MAX;
	static volatile int32_t x2842 = INT32_MIN;
	uint32_t x2843 = UINT32_MAX;
	volatile int32_t x2844 = 1;
	uint32_t t38 = 127357795U;

    t38 = (x2841^(x2842%(x2843>>x2844)));

    if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x2877 = 14U;
	int32_t x2879 = 352577219;
	int32_t t39 = -4619749;

    t39 = (x2877^(x2878%(x2879>>x2880)));

    if (t39 != -9984286) { NG(); } else { ; }
	
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


    return 0;
}

