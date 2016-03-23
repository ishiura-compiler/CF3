
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

uint8_t x19 = UINT8_MAX;
volatile int32_t t2 = 1;
static int64_t x308 = -1LL;
int8_t x341 = INT8_MAX;
uint64_t x342 = 59807366104066528LLU;
uint8_t x537 = 26U;
int16_t x539 = INT16_MIN;
int16_t x567 = INT16_MIN;
uint64_t t11 = 1463364LLU;
int8_t x728 = -1;
int64_t x912 = -1LL;
static int8_t x919 = -1;
int32_t x1262 = -1;
volatile uint8_t x1389 = 55U;
int32_t x1438 = INT32_MAX;
volatile uint32_t x1440 = UINT32_MAX;
volatile uint8_t x1782 = UINT8_MAX;
int8_t x1784 = INT8_MIN;
static volatile int32_t t21 = 66;
volatile uint64_t t22 = 2130744LLU;
int64_t x1834 = INT64_MIN;
uint64_t x1914 = 14681LLU;
uint64_t x1923 = UINT64_MAX;
volatile int32_t x1936 = -1;
int8_t x1995 = -1;
volatile int32_t x2108 = INT32_MIN;
volatile int64_t x2139 = -1LL;
static uint64_t x2140 = UINT64_MAX;
uint64_t t30 = 1226609202LLU;
static volatile uint32_t t34 = 14U;
static int64_t x2566 = INT64_MIN;
int16_t x2567 = INT16_MIN;
int16_t x2568 = INT16_MIN;
static uint16_t x2677 = UINT16_MAX;
volatile uint16_t x2679 = UINT16_MAX;
uint16_t x2680 = UINT16_MAX;
uint16_t x2707 = 1U;
static int64_t x2724 = -1LL;
int16_t x2835 = -1;


void f0(void) {
    	int16_t x17 = INT16_MAX;
	static int64_t x18 = -1LL;
	uint8_t x20 = UINT8_MAX;
	int64_t t0 = -43946LL;

    t0 = ((x17+x18)/(x19==x20));

    if (t0 != 32766LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x141 = 596;
	int16_t x142 = INT16_MIN;
	int32_t x143 = -1;
	static volatile int16_t x144 = -1;
	volatile int32_t t1 = -124529;

    t1 = ((x141+x142)/(x143==x144));

    if (t1 != -32172) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x185 = UINT16_MAX;
	static int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int8_t x188 = -1;

    t2 = ((x185+x186)/(x187==x188));

    if (t2 != -2147418113) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x225 = INT64_MIN;
	int64_t x226 = 5947944190454174LL;
	volatile int8_t x227 = INT8_MIN;
	static int8_t x228 = INT8_MIN;
	static volatile int64_t t3 = -1452LL;

    t3 = ((x225+x226)/(x227==x228));

    if (t3 != -9217424092664321634LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x305 = INT8_MIN;
	uint64_t x306 = UINT64_MAX;
	static int32_t x307 = -1;
	static uint64_t t4 = 1006439524290344LLU;

    t4 = ((x305+x306)/(x307==x308));

    if (t4 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t5 = 1988994298975097853LLU;

    t5 = ((x341+x342)/(x343==x344));

    if (t5 != 59807366104066655LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x409 = 570515614U;
	uint8_t x410 = 10U;
	static int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MIN;
	volatile uint32_t t6 = 74U;

    t6 = ((x409+x410)/(x411==x412));

    if (t6 != 570515624U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x429 = -1LL;
	volatile int8_t x430 = -1;
	int8_t x431 = -1;
	int16_t x432 = -1;
	int64_t t7 = -7676LL;

    t7 = ((x429+x430)/(x431==x432));

    if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x521 = -1LL;
	volatile uint16_t x522 = 1510U;
	volatile uint64_t x523 = UINT64_MAX;
	int32_t x524 = -1;
	int64_t t8 = -17311LL;

    t8 = ((x521+x522)/(x523==x524));

    if (t8 != 1509LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x538 = 9397;
	volatile int16_t x540 = INT16_MIN;
	int32_t t9 = -58;

    t9 = ((x537+x538)/(x539==x540));

    if (t9 != 9423) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x565 = -1;
	int16_t x566 = INT16_MIN;
	static volatile int16_t x568 = INT16_MIN;
	volatile int32_t t10 = 2;

    t10 = ((x565+x566)/(x567==x568));

    if (t10 != -32769) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x665 = -22;
	uint64_t x666 = 996169LLU;
	uint64_t x667 = UINT64_MAX;
	volatile int8_t x668 = -1;

    t11 = ((x665+x666)/(x667==x668));

    if (t11 != 996147LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x725 = INT64_MAX;
	volatile int16_t x726 = -8551;
	volatile int64_t x727 = -1LL;
	volatile int64_t t12 = -1642426LL;

    t12 = ((x725+x726)/(x727==x728));

    if (t12 != 9223372036854767256LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x909 = INT16_MIN;
	static int8_t x910 = -1;
	int32_t x911 = -1;
	int32_t t13 = 812916;

    t13 = ((x909+x910)/(x911==x912));

    if (t13 != -32769) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x917 = 182U;
	uint16_t x918 = 22U;
	int8_t x920 = -1;
	static volatile int32_t t14 = 1918215;

    t14 = ((x917+x918)/(x919==x920));

    if (t14 != 204) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1025 = UINT8_MAX;
	int32_t x1026 = -363984;
	volatile int8_t x1027 = -1;
	volatile int32_t x1028 = -1;
	int32_t t15 = -5;

    t15 = ((x1025+x1026)/(x1027==x1028));

    if (t15 != -363729) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1053 = 766U;
	int8_t x1054 = INT8_MIN;
	int32_t x1055 = -1;
	static int32_t x1056 = -1;
	volatile int32_t t16 = -37945;

    t16 = ((x1053+x1054)/(x1055==x1056));

    if (t16 != 638) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1261 = -1;
	int8_t x1263 = INT8_MIN;
	static int8_t x1264 = INT8_MIN;
	static int32_t t17 = 25018;

    t17 = ((x1261+x1262)/(x1263==x1264));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1390 = 29U;
	int16_t x1391 = -1;
	volatile uint32_t x1392 = UINT32_MAX;
	static volatile int32_t t18 = 0;

    t18 = ((x1389+x1390)/(x1391==x1392));

    if (t18 != 84) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x1437 = 2154822U;
	int8_t x1439 = -1;
	static volatile uint32_t t19 = 203U;

    t19 = ((x1437+x1438)/(x1439==x1440));

    if (t19 != 2149638469U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x1745 = 38U;
	int16_t x1746 = 21;
	int16_t x1747 = -1;
	volatile int8_t x1748 = -1;
	volatile int32_t t20 = 0;

    t20 = ((x1745+x1746)/(x1747==x1748));

    if (t20 != 59) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1781 = -3;
	int8_t x1783 = INT8_MIN;

    t21 = ((x1781+x1782)/(x1783==x1784));

    if (t21 != 252) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1809 = 15311889124LLU;
	int64_t x1810 = -133479279378399248LL;
	uint32_t x1811 = UINT32_MAX;
	int8_t x1812 = -1;

    t22 = ((x1809+x1810)/(x1811==x1812));

    if (t22 != 18313264809643041492LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x1833 = INT8_MAX;
	static int32_t x1835 = -1;
	int64_t x1836 = -1LL;
	volatile int64_t t23 = -2LL;

    t23 = ((x1833+x1834)/(x1835==x1836));

    if (t23 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1913 = 308U;
	static int32_t x1915 = -1;
	static int64_t x1916 = -1LL;
	volatile uint64_t t24 = 47467624376LLU;

    t24 = ((x1913+x1914)/(x1915==x1916));

    if (t24 != 14989LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x1921 = -88516413;
	int8_t x1922 = -1;
	uint64_t x1924 = UINT64_MAX;
	volatile int32_t t25 = 2217954;

    t25 = ((x1921+x1922)/(x1923==x1924));

    if (t25 != -88516414) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1933 = -46;
	uint64_t x1934 = 1473346809421LLU;
	static uint64_t x1935 = UINT64_MAX;
	uint64_t t26 = 159LLU;

    t26 = ((x1933+x1934)/(x1935==x1936));

    if (t26 != 1473346809375LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x1949 = 49195LLU;
	int32_t x1950 = INT32_MIN;
	uint8_t x1951 = UINT8_MAX;
	uint8_t x1952 = UINT8_MAX;
	volatile uint64_t t27 = 4306339424611241425LLU;

    t27 = ((x1949+x1950)/(x1951==x1952));

    if (t27 != 18446744071562117163LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1993 = -1LL;
	uint32_t x1994 = 1987495957U;
	uint32_t x1996 = UINT32_MAX;
	volatile int64_t t28 = -19095113LL;

    t28 = ((x1993+x1994)/(x1995==x1996));

    if (t28 != 1987495956LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x2105 = -1LL;
	int16_t x2106 = INT16_MIN;
	int32_t x2107 = INT32_MIN;
	static int64_t t29 = -945044745762LL;

    t29 = ((x2105+x2106)/(x2107==x2108));

    if (t29 != -32769LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x2137 = 1U;
	uint64_t x2138 = 160LLU;

    t30 = ((x2137+x2138)/(x2139==x2140));

    if (t30 != 161LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x2197 = -630716LL;
	int16_t x2198 = -1;
	int8_t x2199 = INT8_MIN;
	volatile int8_t x2200 = INT8_MIN;
	volatile int64_t t31 = -248487LL;

    t31 = ((x2197+x2198)/(x2199==x2200));

    if (t31 != -630717LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2253 = -1;
	uint32_t x2254 = 15795U;
	int32_t x2255 = -1;
	uint64_t x2256 = UINT64_MAX;
	static volatile uint32_t t32 = 1057359U;

    t32 = ((x2253+x2254)/(x2255==x2256));

    if (t32 != 15794U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2489 = -143962010935782253LL;
	int8_t x2490 = INT8_MIN;
	int64_t x2491 = -1LL;
	int8_t x2492 = -1;
	static int64_t t33 = 56LL;

    t33 = ((x2489+x2490)/(x2491==x2492));

    if (t33 != -143962010935782381LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2533 = -1;
	uint32_t x2534 = UINT32_MAX;
	static int64_t x2535 = INT64_MAX;
	int64_t x2536 = INT64_MAX;

    t34 = ((x2533+x2534)/(x2535==x2536));

    if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x2565 = 14524967;
	static volatile int64_t t35 = -65959LL;

    t35 = ((x2565+x2566)/(x2567==x2568));

    if (t35 != -9223372036840250841LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x2641 = INT32_MIN;
	uint64_t x2642 = UINT64_MAX;
	int8_t x2643 = INT8_MIN;
	int8_t x2644 = INT8_MIN;
	uint64_t t36 = 521796665096615LLU;

    t36 = ((x2641+x2642)/(x2643==x2644));

    if (t36 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x2678 = -10524;
	volatile int32_t t37 = 217536;

    t37 = ((x2677+x2678)/(x2679==x2680));

    if (t37 != 55011) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2705 = -1;
	static int64_t x2706 = -12293LL;
	int8_t x2708 = 1;
	int64_t t38 = 989588564235LL;

    t38 = ((x2705+x2706)/(x2707==x2708));

    if (t38 != -12294LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2721 = 53;
	int32_t x2722 = INT32_MIN;
	uint64_t x2723 = UINT64_MAX;
	int32_t t39 = -11969235;

    t39 = ((x2721+x2722)/(x2723==x2724));

    if (t39 != -2147483595) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x2833 = 34667U;
	volatile int32_t x2834 = -1;
	uint64_t x2836 = UINT64_MAX;
	uint32_t t40 = 181651U;

    t40 = ((x2833+x2834)/(x2835==x2836));

    if (t40 != 34666U) { NG(); } else { ; }
	
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

