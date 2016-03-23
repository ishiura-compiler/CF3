
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

uint16_t x17 = 742U;
int16_t x124 = INT16_MIN;
static volatile int8_t x142 = 15;
uint64_t x143 = UINT64_MAX;
uint16_t x144 = 13U;
volatile uint64_t t2 = 1LLU;
static uint8_t x173 = 13U;
volatile uint8_t x370 = 18U;
uint64_t x371 = UINT64_MAX;
int8_t x474 = 3;
int32_t x779 = -1;
int8_t x780 = -1;
int16_t x863 = -1546;
static uint16_t x864 = 5U;
uint64_t x1047 = 519348LLU;
int64_t x1049 = INT64_MAX;
uint32_t t14 = 2U;
volatile int64_t t16 = -1273244213688462983LL;
uint8_t x1174 = 5U;
int16_t x1176 = 129;
volatile uint32_t t17 = 2314U;
volatile uint16_t x1261 = 1317U;
volatile uint64_t t19 = 169LLU;
uint8_t x1274 = 1U;
uint64_t x1275 = 462LLU;
int8_t x1346 = 3;
int16_t x1347 = INT16_MAX;
static uint8_t x1368 = 125U;
uint16_t x1403 = UINT16_MAX;
int8_t x1678 = 6;
int64_t x1689 = 123132455497LL;
int64_t x1692 = -1LL;
static uint32_t x1766 = 15U;
uint16_t x1767 = UINT16_MAX;
uint8_t x1815 = UINT8_MAX;
int32_t t28 = 11402;
uint8_t x1934 = 9U;
static uint8_t x1935 = 5U;
volatile uint32_t x1936 = 111127U;
volatile uint32_t t29 = 5732784U;
static uint64_t x2062 = 6LLU;
static volatile int64_t x2172 = 32780531414326LL;
static uint64_t x2212 = UINT64_MAX;
uint64_t t34 = 51595682LLU;
uint16_t x2348 = 29U;
static int8_t x2375 = INT8_MIN;
uint32_t t37 = 1339U;
int16_t x2425 = 1;
int32_t t38 = 400753436;
volatile uint16_t x2475 = 6594U;
uint8_t x2476 = UINT8_MAX;
int64_t x2566 = 1LL;
int16_t x2567 = -1;
int16_t x2676 = INT16_MAX;
volatile int64_t t44 = 50500197975397LL;
int32_t x2775 = 711010;
int64_t x2952 = INT64_MIN;
uint16_t x3465 = UINT16_MAX;
uint32_t x3475 = 492682U;
volatile uint64_t t53 = 119130881LLU;
static uint64_t x3492 = 3803607537809LLU;
volatile uint64_t t54 = 285LLU;
static int8_t x3627 = INT8_MAX;
static uint32_t x3677 = 18784386U;
int32_t x3679 = 5535;
static int8_t x3761 = 1;
static uint8_t x3762 = 3U;
static int16_t x4010 = 4;
volatile int64_t x4012 = -1LL;
volatile int64_t x4029 = 9109LL;
uint64_t t60 = 3071503LLU;
uint32_t x4087 = 283831490U;
int16_t x4206 = 19;
int32_t t62 = 192;
int8_t x4422 = 1;
int32_t x4423 = 3941494;
static volatile uint64_t t63 = 12311901LLU;
volatile int64_t x4912 = 64613LL;
int64_t t67 = -25431133LL;
uint32_t t68 = 61867607U;
static int8_t x5387 = -17;
int64_t x5722 = 0LL;
volatile uint64_t t70 = 7LLU;
uint64_t x5773 = UINT64_MAX;


void f0(void) {
    	volatile int8_t x18 = 0;
	static int8_t x19 = INT8_MIN;
	volatile int32_t x20 = -6;
	volatile int32_t t0 = -54;

    t0 = ((x17<<x18)%(x19&x20));

    if (t0 != 102) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x121 = INT32_MAX;
	uint8_t x122 = 0U;
	static volatile int16_t x123 = -1;
	int32_t t1 = -250922769;

    t1 = ((x121<<x122)%(x123&x124));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x141 = UINT8_MAX;

    t2 = ((x141<<x142)%(x143&x144));

    if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x149 = 270186471690634579LLU;
	int64_t x150 = 35LL;
	int8_t x151 = INT8_MAX;
	uint32_t x152 = 22U;
	static uint64_t t3 = 2625488LLU;

    t3 = ((x149<<x150)%(x151&x152));

    if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x174 = 0;
	static volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1LL;
	uint64_t t4 = 299659283491645LLU;

    t4 = ((x173<<x174)%(x175&x176));

    if (t4 != 13LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x369 = UINT64_MAX;
	volatile int8_t x372 = -1;
	static uint64_t t5 = 27525LLU;

    t5 = ((x369<<x370)%(x371&x372));

    if (t5 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x401 = INT16_MAX;
	int64_t x402 = 1LL;
	uint8_t x403 = UINT8_MAX;
	volatile uint64_t x404 = 1786920672612054418LLU;
	uint64_t t6 = 483034431584279LLU;

    t6 = ((x401<<x402)%(x403&x404));

    if (t6 != 126LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x473 = INT8_MAX;
	static volatile int8_t x475 = 48;
	volatile int8_t x476 = -1;
	int32_t t7 = 401721361;

    t7 = ((x473<<x474)%(x475&x476));

    if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x525 = INT8_MAX;
	uint8_t x526 = 19U;
	volatile int8_t x527 = 7;
	static int8_t x528 = INT8_MAX;
	volatile int32_t t8 = -6710;

    t8 = ((x525<<x526)%(x527&x528));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x773 = 62;
	uint16_t x774 = 10U;
	uint32_t x775 = 11164970U;
	uint32_t x776 = 226U;
	static uint32_t t9 = 5U;

    t9 = ((x773<<x774)%(x775&x776));

    if (t9 != 10U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x777 = INT16_MAX;
	uint16_t x778 = 6U;
	static volatile int32_t t10 = 16142508;

    t10 = ((x777<<x778)%(x779&x780));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x861 = UINT8_MAX;
	uint8_t x862 = 16U;
	volatile int32_t t11 = 0;

    t11 = ((x861<<x862)%(x863&x864));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x1045 = UINT64_MAX;
	static uint8_t x1046 = 1U;
	volatile uint64_t x1048 = UINT64_MAX;
	static volatile uint64_t t12 = 18715589548LLU;

    t12 = ((x1045<<x1046)%(x1047&x1048));

    if (t12 != 476210LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x1050 = 0U;
	volatile int32_t x1051 = 26;
	uint8_t x1052 = 20U;
	int64_t t13 = 28148710LL;

    t13 = ((x1049<<x1050)%(x1051&x1052));

    if (t13 != 15LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1065 = 7272U;
	static int8_t x1066 = 0;
	static uint16_t x1067 = 39U;
	int32_t x1068 = 1;

    t14 = ((x1065<<x1066)%(x1067&x1068));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x1117 = UINT16_MAX;
	int16_t x1118 = 2;
	static volatile uint32_t x1119 = 1397U;
	volatile int64_t x1120 = -1LL;
	volatile int64_t t15 = -12135LL;

    t15 = ((x1117<<x1118)%(x1119&x1120));

    if (t15 != 901LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1141 = UINT32_MAX;
	int32_t x1142 = 14;
	static uint16_t x1143 = UINT16_MAX;
	volatile int64_t x1144 = -1LL;

    t16 = ((x1141<<x1142)%(x1143&x1144));

    if (t16 != 49152LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x1173 = UINT32_MAX;
	volatile uint16_t x1175 = UINT16_MAX;

    t17 = ((x1173<<x1174)%(x1175&x1176));

    if (t17 != 113U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1193 = INT8_MAX;
	static int32_t x1194 = 0;
	static int8_t x1195 = -1;
	static int16_t x1196 = INT16_MAX;
	int32_t t18 = 79098;

    t18 = ((x1193<<x1194)%(x1195&x1196));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x1262 = 1U;
	volatile uint64_t x1263 = 97058093600768LLU;
	static int64_t x1264 = -1LL;

    t19 = ((x1261<<x1262)%(x1263&x1264));

    if (t19 != 2634LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x1273 = 547U;
	static int64_t x1276 = -1LL;
	static volatile uint64_t t20 = 2042746253951LLU;

    t20 = ((x1273<<x1274)%(x1275&x1276));

    if (t20 != 170LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1293 = UINT32_MAX;
	uint32_t x1294 = 12U;
	int8_t x1295 = INT8_MIN;
	volatile int16_t x1296 = -1;
	uint32_t t21 = 27U;

    t21 = ((x1293<<x1294)%(x1295&x1296));

    if (t21 != 4294963200U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1345 = 2481317LLU;
	int64_t x1348 = -1568593098942041LL;
	uint64_t t22 = 1672782085369714417LLU;

    t22 = ((x1345<<x1346)%(x1347&x1348));

    if (t22 != 20872LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1365 = UINT32_MAX;
	uint16_t x1366 = 0U;
	volatile uint16_t x1367 = UINT16_MAX;
	uint32_t t23 = 1750736012U;

    t23 = ((x1365<<x1366)%(x1367&x1368));

    if (t23 != 45U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1401 = INT8_MAX;
	uint32_t x1402 = 4U;
	volatile uint64_t x1404 = 25818425646LLU;
	uint64_t t24 = 709185866751992LLU;

    t24 = ((x1401<<x1402)%(x1403&x1404));

    if (t24 != 2032LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x1677 = 17U;
	uint64_t x1679 = 28547376284575887LLU;
	uint16_t x1680 = 17951U;
	uint64_t t25 = 176LLU;

    t25 = ((x1677<<x1678)%(x1679&x1680));

    if (t25 != 8LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1690 = 0U;
	int8_t x1691 = -1;
	static volatile int64_t t26 = -1LL;

    t26 = ((x1689<<x1690)%(x1691&x1692));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x1765 = INT8_MAX;
	uint64_t x1768 = 734405LLU;
	volatile uint64_t t27 = 1740818666LLU;

    t27 = ((x1765<<x1766)%(x1767&x1768));

    if (t27 != 764LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1813 = 80012;
	int32_t x1814 = 3;
	int32_t x1816 = -52067;

    t28 = ((x1813<<x1814)%(x1815&x1816));

    if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x1933 = 2620U;

    t29 = ((x1933<<x1934)%(x1935&x1936));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1953 = 15U;
	uint8_t x1954 = 0U;
	int16_t x1955 = -1;
	volatile int8_t x1956 = INT8_MIN;
	uint32_t t30 = 56U;

    t30 = ((x1953<<x1954)%(x1955&x1956));

    if (t30 != 15U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1977 = 10;
	volatile int32_t x1978 = 5;
	static uint16_t x1979 = UINT16_MAX;
	static int8_t x1980 = INT8_MAX;
	static int32_t t31 = 439972216;

    t31 = ((x1977<<x1978)%(x1979&x1980));

    if (t31 != 66) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2061 = UINT64_MAX;
	int64_t x2063 = -1LL;
	uint16_t x2064 = 10U;
	uint64_t t32 = 13396974455568742LLU;

    t32 = ((x2061<<x2062)%(x2063&x2064));

    if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2169 = INT16_MAX;
	static volatile int16_t x2170 = 0;
	int16_t x2171 = INT16_MAX;
	static volatile int64_t t33 = -17693417LL;

    t33 = ((x2169<<x2170)%(x2171&x2172));

    if (t33 != 5523LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2209 = 85;
	uint8_t x2210 = 14U;
	volatile int8_t x2211 = -3;

    t34 = ((x2209<<x2210)%(x2211&x2212));

    if (t34 != 1392640LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2261 = 2676384954LLU;
	volatile int8_t x2262 = 59;
	int8_t x2263 = -1;
	uint64_t x2264 = UINT64_MAX;
	uint64_t t35 = 164582735337699LLU;

    t35 = ((x2261<<x2262)%(x2263&x2264));

    if (t35 != 14987979559889010688LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x2345 = 20633U;
	uint16_t x2346 = 0U;
	uint8_t x2347 = 4U;
	volatile int32_t t36 = -593308747;

    t36 = ((x2345<<x2346)%(x2347&x2348));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2373 = INT8_MAX;
	uint64_t x2374 = 11LLU;
	volatile uint32_t x2376 = 298U;

    t37 = ((x2373<<x2374)%(x2375&x2376));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x2426 = 27;
	static int8_t x2427 = 60;
	volatile int16_t x2428 = INT16_MAX;

    t38 = ((x2425<<x2426)%(x2427&x2428));

    if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2473 = 1;
	static uint8_t x2474 = 1U;
	int32_t t39 = 13888951;

    t39 = ((x2473<<x2474)%(x2475&x2476));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2565 = 104U;
	static volatile int8_t x2568 = INT8_MAX;
	int32_t t40 = -81;

    t40 = ((x2565<<x2566)%(x2567&x2568));

    if (t40 != 81) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2577 = 319631840;
	uint8_t x2578 = 2U;
	static int8_t x2579 = 46;
	uint64_t x2580 = 282990361661422643LLU;
	static uint64_t t41 = 140LLU;

    t41 = ((x2577<<x2578)%(x2579&x2580));

    if (t41 != 30LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x2673 = 0;
	int8_t x2674 = 0;
	uint16_t x2675 = UINT16_MAX;
	int32_t t42 = 1514415;

    t42 = ((x2673<<x2674)%(x2675&x2676));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x2693 = UINT8_MAX;
	uint16_t x2694 = 1U;
	int64_t x2695 = -1LL;
	static uint16_t x2696 = 54U;
	volatile int64_t t43 = 0LL;

    t43 = ((x2693<<x2694)%(x2695&x2696));

    if (t43 != 24LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2761 = INT32_MAX;
	volatile uint8_t x2762 = 0U;
	uint32_t x2763 = 1738191U;
	int64_t x2764 = -1447843096049LL;

    t44 = ((x2761<<x2762)%(x2763&x2764));

    if (t44 != 268346LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2773 = UINT16_MAX;
	uint8_t x2774 = 14U;
	int64_t x2776 = -1042035LL;
	static volatile int64_t t45 = -6237368LL;

    t45 = ((x2773<<x2774)%(x2775&x2776));

    if (t45 != 3840LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x2949 = 31;
	int8_t x2950 = 15;
	int8_t x2951 = -1;
	volatile int64_t t46 = -585320624LL;

    t46 = ((x2949<<x2950)%(x2951&x2952));

    if (t46 != 1015808LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x3013 = UINT64_MAX;
	uint8_t x3014 = 6U;
	int16_t x3015 = INT16_MAX;
	uint32_t x3016 = 124522U;
	static uint64_t t47 = 27418676LLU;

    t47 = ((x3013<<x3014)%(x3015&x3016));

    if (t47 != 19606LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x3073 = UINT64_MAX;
	static uint64_t x3074 = 0LLU;
	int16_t x3075 = INT16_MAX;
	int64_t x3076 = 3091973164658490LL;
	uint64_t t48 = 402876591497LLU;

    t48 = ((x3073<<x3074)%(x3075&x3076));

    if (t48 != 27329LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3129 = 31042515LLU;
	static uint32_t x3130 = 0U;
	uint16_t x3131 = 94U;
	uint64_t x3132 = 1336480436232390271LLU;
	volatile uint64_t t49 = 351803877937LLU;

    t49 = ((x3129<<x3130)%(x3131&x3132));

    if (t49 != 49LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3301 = UINT64_MAX;
	uint8_t x3302 = 1U;
	uint64_t x3303 = 24688340909667826LLU;
	uint64_t x3304 = 4025LLU;
	uint64_t t50 = 2LLU;

    t50 = ((x3301<<x3302)%(x3303&x3304));

    if (t50 != 14LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x3405 = 522184919120523LLU;
	static int16_t x3406 = 1;
	uint8_t x3407 = 4U;
	int32_t x3408 = INT32_MAX;
	uint64_t t51 = 7170768607613LLU;

    t51 = ((x3405<<x3406)%(x3407&x3408));

    if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x3466 = 0U;
	volatile int32_t x3467 = 531951;
	uint16_t x3468 = 869U;
	static volatile int32_t t52 = -694585;

    t52 = ((x3465<<x3466)%(x3467&x3468));

    if (t52 != 204) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3473 = 784266445746LLU;
	static int32_t x3474 = 0;
	int16_t x3476 = INT16_MIN;

    t53 = ((x3473<<x3474)%(x3475&x3476));

    if (t53 != 82866LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x3489 = UINT64_MAX;
	static int8_t x3490 = 48;
	uint8_t x3491 = UINT8_MAX;

    t54 = ((x3489<<x3490)%(x3491&x3492));

    if (t54 != 30LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x3577 = UINT32_MAX;
	uint16_t x3578 = 9U;
	volatile int64_t x3579 = -1LL;
	uint32_t x3580 = 4U;
	volatile int64_t t55 = 29078122490LL;

    t55 = ((x3577<<x3578)%(x3579&x3580));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x3625 = 0U;
	uint16_t x3626 = 10U;
	static uint64_t x3628 = 987049426070LLU;
	uint64_t t56 = 82838817591805757LLU;

    t56 = ((x3625<<x3626)%(x3627&x3628));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x3678 = 12U;
	int64_t x3680 = -1LL;
	int64_t t57 = 29LL;

    t57 = ((x3677<<x3678)%(x3679&x3680));

    if (t57 != 4864LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x3763 = 5763975;
	int8_t x3764 = -4;
	int32_t t58 = 152168;

    t58 = ((x3761<<x3762)%(x3763&x3764));

    if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x4009 = UINT8_MAX;
	static int16_t x4011 = -1;
	volatile int64_t t59 = 522294065576LL;

    t59 = ((x4009<<x4010)%(x4011&x4012));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x4030 = 0U;
	uint64_t x4031 = UINT64_MAX;
	volatile uint64_t x4032 = 141632LLU;

    t60 = ((x4029<<x4030)%(x4031&x4032));

    if (t60 != 9109LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4085 = 1707585U;
	uint32_t x4086 = 0U;
	volatile int16_t x4088 = -7219;
	uint32_t t61 = 211148688U;

    t61 = ((x4085<<x4086)%(x4087&x4088));

    if (t61 != 1707585U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x4205 = UINT8_MAX;
	volatile uint8_t x4207 = UINT8_MAX;
	int16_t x4208 = INT16_MAX;

    t62 = ((x4205<<x4206)%(x4207&x4208));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x4421 = 9057U;
	static volatile uint64_t x4424 = 26835583LLU;

    t63 = ((x4421<<x4422)%(x4423&x4424));

    if (t63 != 18114LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x4713 = 18172U;
	int8_t x4714 = 0;
	uint16_t x4715 = 10U;
	volatile int64_t x4716 = -369881386185189LL;
	static volatile int64_t t64 = -425940LL;

    t64 = ((x4713<<x4714)%(x4715&x4716));

    if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x4889 = INT16_MAX;
	volatile uint8_t x4890 = 6U;
	int8_t x4891 = INT8_MIN;
	uint16_t x4892 = 1699U;
	volatile int32_t t65 = 114977;

    t65 = ((x4889<<x4890)%(x4891&x4892));

    if (t65 != 448) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x4909 = INT8_MAX;
	uint64_t x4910 = 15LLU;
	int64_t x4911 = INT64_MAX;
	int64_t t66 = -26655887882161847LL;

    t66 = ((x4909<<x4910)%(x4911&x4912));

    if (t66 != 26304LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x5201 = UINT32_MAX;
	uint16_t x5202 = 27U;
	int16_t x5203 = INT16_MAX;
	int64_t x5204 = 50872815572LL;

    t67 = ((x5201<<x5202)%(x5203&x5204));

    if (t67 != 1992LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x5277 = INT8_MAX;
	static uint8_t x5278 = 15U;
	int8_t x5279 = -9;
	uint32_t x5280 = 1U;

    t68 = ((x5277<<x5278)%(x5279&x5280));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x5385 = 28U;
	static volatile uint8_t x5386 = 1U;
	static int8_t x5388 = 1;
	int32_t t69 = -381717;

    t69 = ((x5385<<x5386)%(x5387&x5388));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x5721 = 13283LLU;
	static int32_t x5723 = INT32_MIN;
	int8_t x5724 = -1;

    t70 = ((x5721<<x5722)%(x5723&x5724));

    if (t70 != 13283LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x5757 = 31U;
	uint8_t x5758 = 24U;
	volatile int8_t x5759 = 2;
	static int8_t x5760 = -1;
	static int32_t t71 = 484786289;

    t71 = ((x5757<<x5758)%(x5759&x5760));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x5774 = 6U;
	int64_t x5775 = -710040307134707LL;
	static int64_t x5776 = -1LL;
	uint64_t t72 = 3577LLU;

    t72 = ((x5773<<x5774)%(x5775&x5776));

    if (t72 != 710040307134643LLU) { NG(); } else { ; }
	
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
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();


    return 0;
}

