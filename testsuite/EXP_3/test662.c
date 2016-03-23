
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

uint8_t x4 = 36U;
uint64_t t0 = 2LLU;
volatile int32_t x207 = -1;
int64_t t1 = -1LL;
static volatile uint64_t t3 = 1271LLU;
uint64_t t5 = 515717705923LLU;
uint8_t x1057 = 11U;
uint64_t t9 = 14222359830449021LLU;
int16_t x1379 = INT16_MIN;
volatile int64_t x1461 = 0LL;
volatile uint8_t x1462 = 10U;
volatile int16_t x1464 = -3;
int32_t x1488 = -1;
int64_t x1843 = -419058095469543160LL;
static int16_t x2040 = INT16_MIN;
uint32_t x2169 = UINT32_MAX;
volatile uint8_t x2285 = 38U;
volatile int32_t x2399 = INT32_MIN;
static uint32_t x2400 = 505316U;
static volatile int64_t x2481 = 10LL;
uint16_t x3042 = 0U;
int32_t t26 = -14940298;
int16_t x3395 = INT16_MAX;
uint64_t t29 = 11377818396700LLU;
static int32_t x3409 = INT32_MAX;
uint8_t x3469 = UINT8_MAX;
int64_t x3472 = INT64_MAX;
volatile int64_t t31 = -7813440803LL;
int64_t x3941 = 841941005308LL;
uint64_t x4070 = 0LLU;
int64_t x4071 = -174LL;
int64_t t35 = -114LL;
uint8_t x4291 = UINT8_MAX;
int32_t t37 = 1;
uint64_t x4349 = 7LLU;
int8_t x4350 = 2;
uint64_t t38 = 366161801045651LLU;
static int16_t x4573 = 1;
int64_t x4593 = 16794886326511061LL;
uint16_t x4596 = 8363U;
static volatile uint32_t t43 = 0U;
volatile int16_t x5074 = 6;
uint8_t x5142 = 3U;
static volatile uint64_t t50 = 94LLU;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	volatile int16_t x2 = 25;
	uint64_t x3 = UINT64_MAX;

    t0 = ((x1<<x2)/(x3/x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x205 = 11278655U;
	uint16_t x206 = 29U;
	int64_t x208 = -1LL;

    t1 = ((x205<<x206)/(x207/x208));

    if (t1 != 3758096384LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x541 = 94094174LL;
	int16_t x542 = 1;
	int16_t x543 = -3452;
	int8_t x544 = 1;
	volatile int64_t t2 = 197LL;

    t2 = ((x541<<x542)/(x543/x544));

    if (t2 != -54515LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x545 = 10LLU;
	static volatile uint8_t x546 = 0U;
	uint8_t x547 = 64U;
	int8_t x548 = -42;

    t3 = ((x545<<x546)/(x547/x548));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x597 = UINT64_MAX;
	static volatile int8_t x598 = 0;
	uint64_t x599 = UINT64_MAX;
	static uint64_t x600 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x597<<x598)/(x599/x600));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x601 = 5862029079426643LLU;
	int8_t x602 = 27;
	static int8_t x603 = -12;
	int16_t x604 = -1;

    t5 = ((x601<<x602)/(x603/x604));

    if (t5 != 1345251899123346090LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile uint8_t x762 = 2U;
	int64_t x763 = INT64_MAX;
	int16_t x764 = INT16_MIN;
	static volatile int64_t t6 = -11404644632LL;

    t6 = ((x761<<x762)/(x763/x764));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x1058 = 27U;
	int64_t x1059 = 109511LL;
	int64_t x1060 = -77023LL;
	int64_t t7 = 3221LL;

    t7 = ((x1057<<x1058)/(x1059/x1060));

    if (t7 != -1476395008LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x1201 = 1242LLU;
	uint32_t x1202 = 53U;
	uint8_t x1203 = UINT8_MAX;
	uint8_t x1204 = 59U;
	uint64_t t8 = 34283LLU;

    t8 = ((x1201<<x1202)/(x1203/x1204));

    if (t8 != 2796735368597078016LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x1325 = 144U;
	uint32_t x1326 = 9U;
	uint64_t x1327 = UINT64_MAX;
	static int64_t x1328 = INT64_MIN;

    t9 = ((x1325<<x1326)/(x1327/x1328));

    if (t9 != 73728LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x1377 = 60;
	int8_t x1378 = 7;
	uint64_t x1380 = 1082856617103512450LLU;
	uint64_t t10 = 8937111378LLU;

    t10 = ((x1377<<x1378)/(x1379/x1380));

    if (t10 != 451LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x1401 = 25;
	uint8_t x1402 = 8U;
	uint64_t x1403 = 1572LLU;
	uint8_t x1404 = 7U;
	volatile uint64_t t11 = 81053708286780818LLU;

    t11 = ((x1401<<x1402)/(x1403/x1404));

    if (t11 != 28LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x1463 = UINT64_MAX;
	uint64_t t12 = 420343177952489LLU;

    t12 = ((x1461<<x1462)/(x1463/x1464));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1485 = 85LLU;
	int16_t x1486 = 0;
	int64_t x1487 = INT64_MAX;
	volatile uint64_t t13 = 958608426771442LLU;

    t13 = ((x1485<<x1486)/(x1487/x1488));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1525 = UINT64_MAX;
	int8_t x1526 = 0;
	static int8_t x1527 = INT8_MAX;
	int8_t x1528 = -1;
	uint64_t t14 = 305739609LLU;

    t14 = ((x1525<<x1526)/(x1527/x1528));

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1617 = UINT16_MAX;
	uint16_t x1618 = 2U;
	int64_t x1619 = INT64_MIN;
	static int8_t x1620 = INT8_MIN;
	volatile int64_t t15 = 3089458327087LL;

    t15 = ((x1617<<x1618)/(x1619/x1620));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x1841 = 60912;
	uint16_t x1842 = 1U;
	int32_t x1844 = INT32_MAX;
	int64_t t16 = 643291867008776LL;

    t16 = ((x1841<<x1842)/(x1843/x1844));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x2037 = 12U;
	uint8_t x2038 = 1U;
	int32_t x2039 = INT32_MAX;
	volatile int32_t t17 = 3;

    t17 = ((x2037<<x2038)/(x2039/x2040));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x2170 = 1;
	int16_t x2171 = INT16_MIN;
	int16_t x2172 = -1;
	uint32_t t18 = 233236076U;

    t18 = ((x2169<<x2170)/(x2171/x2172));

    if (t18 != 131071U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2286 = 1U;
	uint32_t x2287 = 214843898U;
	uint64_t x2288 = 9309605LLU;
	volatile uint64_t t19 = 153LLU;

    t19 = ((x2285<<x2286)/(x2287/x2288));

    if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2389 = 219113065LLU;
	uint16_t x2390 = 3U;
	uint16_t x2391 = UINT16_MAX;
	static int16_t x2392 = -1;
	volatile uint64_t t20 = 1LLU;

    t20 = ((x2389<<x2390)/(x2391/x2392));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x2397 = 344LL;
	uint8_t x2398 = 0U;
	volatile int64_t t21 = -68LL;

    t21 = ((x2397<<x2398)/(x2399/x2400));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2482 = 26;
	int16_t x2483 = 2;
	int8_t x2484 = -1;
	int64_t t22 = 237102717079302444LL;

    t22 = ((x2481<<x2482)/(x2483/x2484));

    if (t22 != -335544320LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x2853 = 244576;
	volatile uint32_t x2854 = 2U;
	uint32_t x2855 = 3689268U;
	volatile uint64_t x2856 = 712LLU;
	volatile uint64_t t23 = 1555748499LLU;

    t23 = ((x2853<<x2854)/(x2855/x2856));

    if (t23 != 188LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x3041 = 755U;
	static int64_t x3043 = INT64_MAX;
	uint16_t x3044 = UINT16_MAX;
	volatile int64_t t24 = -26159322815LL;

    t24 = ((x3041<<x3042)/(x3043/x3044));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x3069 = UINT32_MAX;
	uint16_t x3070 = 2U;
	int64_t x3071 = INT64_MAX;
	static int8_t x3072 = INT8_MIN;
	int64_t t25 = 20320992548628091LL;

    t25 = ((x3069<<x3070)/(x3071/x3072));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x3189 = 106;
	static volatile uint8_t x3190 = 11U;
	static int8_t x3191 = INT8_MIN;
	int16_t x3192 = -1;

    t26 = ((x3189<<x3190)/(x3191/x3192));

    if (t26 != 1696) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x3369 = 7606;
	static uint8_t x3370 = 1U;
	int16_t x3371 = INT16_MIN;
	int8_t x3372 = 2;
	int32_t t27 = 2698498;

    t27 = ((x3369<<x3370)/(x3371/x3372));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x3393 = INT16_MAX;
	static int8_t x3394 = 1;
	volatile int8_t x3396 = INT8_MAX;
	volatile int32_t t28 = 47887;

    t28 = ((x3393<<x3394)/(x3395/x3396));

    if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x3401 = UINT64_MAX;
	uint64_t x3402 = 31LLU;
	volatile uint64_t x3403 = 5LLU;
	int16_t x3404 = 2;

    t29 = ((x3401<<x3402)/(x3403/x3404));

    if (t29 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x3410 = 0;
	int8_t x3411 = INT8_MAX;
	static uint32_t x3412 = 1U;
	volatile uint32_t t30 = 453U;

    t30 = ((x3409<<x3410)/(x3411/x3412));

    if (t30 != 16909320U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x3470 = 15LLU;
	int64_t x3471 = INT64_MIN;

    t31 = ((x3469<<x3470)/(x3471/x3472));

    if (t31 != -8355840LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x3665 = INT16_MAX;
	uint8_t x3666 = 9U;
	int32_t x3667 = INT32_MIN;
	int8_t x3668 = INT8_MIN;
	volatile int32_t t32 = -127335;

    t32 = ((x3665<<x3666)/(x3667/x3668));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x3773 = 3U;
	uint32_t x3774 = 1U;
	int16_t x3775 = INT16_MIN;
	static int64_t x3776 = -1LL;
	volatile int64_t t33 = 3021451377199826327LL;

    t33 = ((x3773<<x3774)/(x3775/x3776));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x3942 = 10LLU;
	uint32_t x3943 = UINT32_MAX;
	volatile int32_t x3944 = INT32_MAX;
	volatile int64_t t34 = 28112293575LL;

    t34 = ((x3941<<x3942)/(x3943/x3944));

    if (t34 != 431073794717696LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x4069 = UINT32_MAX;
	int8_t x4072 = INT8_MIN;

    t35 = ((x4069<<x4070)/(x4071/x4072));

    if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x4289 = UINT16_MAX;
	uint32_t x4290 = 0U;
	int8_t x4292 = INT8_MIN;
	int32_t t36 = 60;

    t36 = ((x4289<<x4290)/(x4291/x4292));

    if (t36 != -65535) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x4329 = UINT16_MAX;
	int16_t x4330 = 1;
	uint16_t x4331 = UINT16_MAX;
	volatile uint8_t x4332 = 8U;

    t37 = ((x4329<<x4330)/(x4331/x4332));

    if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x4351 = -826634740;
	int64_t x4352 = 192LL;

    t38 = ((x4349<<x4350)/(x4351/x4352));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x4521 = UINT16_MAX;
	static uint16_t x4522 = 5U;
	int64_t x4523 = -1LL;
	int64_t x4524 = -1LL;
	int64_t t39 = 1170374283LL;

    t39 = ((x4521<<x4522)/(x4523/x4524));

    if (t39 != 2097120LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x4525 = UINT16_MAX;
	volatile int16_t x4526 = 12;
	volatile uint8_t x4527 = UINT8_MAX;
	uint8_t x4528 = 1U;
	static int32_t t40 = -532205;

    t40 = ((x4525<<x4526)/(x4527/x4528));

    if (t40 != 1052672) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x4574 = 6U;
	int64_t x4575 = INT64_MIN;
	volatile uint64_t x4576 = 360131345352LLU;
	volatile uint64_t t41 = 1732403853817523366LLU;

    t41 = ((x4573<<x4574)/(x4575/x4576));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x4594 = 2U;
	int64_t x4595 = INT64_MAX;
	int64_t t42 = -456LL;

    t42 = ((x4593<<x4594)/(x4595/x4596));

    if (t42 != 60LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x4621 = 1517;
	uint16_t x4622 = 11U;
	volatile int32_t x4623 = -453;
	static uint32_t x4624 = 6003U;

    t43 = ((x4621<<x4622)/(x4623/x4624));

    if (t43 != 4U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x4821 = INT16_MAX;
	static uint8_t x4822 = 0U;
	int64_t x4823 = INT64_MIN;
	volatile uint32_t x4824 = UINT32_MAX;
	static volatile int64_t t44 = 1LL;

    t44 = ((x4821<<x4822)/(x4823/x4824));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x4845 = 7349027018LL;
	static uint16_t x4846 = 17U;
	int16_t x4847 = INT16_MAX;
	int16_t x4848 = -147;
	volatile int64_t t45 = 786883LL;

    t45 = ((x4845<<x4846)/(x4847/x4848));

    if (t45 != -4338971483348LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x4977 = 401594365501557774LLU;
	uint8_t x4978 = 50U;
	int16_t x4979 = -2283;
	uint32_t x4980 = 13U;
	static volatile uint64_t t46 = 42171373583667LLU;

    t46 = ((x4977<<x4978)/(x4979/x4980));

    if (t46 != 10516698584LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x5021 = UINT16_MAX;
	volatile int32_t x5022 = 0;
	int64_t x5023 = INT64_MAX;
	uint16_t x5024 = 101U;
	int64_t t47 = -11LL;

    t47 = ((x5021<<x5022)/(x5023/x5024));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x5073 = 571098U;
	uint32_t x5075 = UINT32_MAX;
	int32_t x5076 = -62;
	volatile uint32_t t48 = 583689U;

    t48 = ((x5073<<x5074)/(x5075/x5076));

    if (t48 != 36550272U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x5141 = 734LLU;
	uint16_t x5143 = 2169U;
	int8_t x5144 = INT8_MIN;
	static volatile uint64_t t49 = 95340737963942LLU;

    t49 = ((x5141<<x5142)/(x5143/x5144));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x5145 = UINT16_MAX;
	static int8_t x5146 = 1;
	int8_t x5147 = INT8_MIN;
	static uint64_t x5148 = 2830337955273700205LLU;

    t50 = ((x5145<<x5146)/(x5147/x5148));

    if (t50 != 21845LLU) { NG(); } else { ; }
	
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


    return 0;
}

