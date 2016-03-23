
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

static int16_t x42 = 10035;
int64_t x55 = 66885967276393LL;
int32_t t4 = 3429;
static int16_t x350 = INT16_MIN;
int64_t x362 = INT64_MAX;
static volatile uint8_t x684 = 5U;
int16_t x740 = 0;
int16_t x776 = 0;
static int32_t t11 = -2791;
int32_t t12 = INT32_MAX;
uint8_t x863 = 2U;
int32_t x899 = INT32_MAX;
int8_t x981 = INT8_MIN;
int16_t x983 = INT16_MAX;
volatile int64_t t16 = -283528791173382LL;
volatile uint32_t x1159 = 21U;
volatile uint64_t x1160 = 11LLU;
int64_t x1190 = -6814074971219059LL;
static int32_t x1630 = -1;
volatile uint64_t t25 = 1707797482558502LLU;
volatile int32_t t26 = -7;
static uint64_t t29 = 122884234LLU;


void f0(void) {
    	static int8_t x41 = -1;
	uint64_t x43 = 3579995188694LLU;
	uint8_t x44 = 1U;
	volatile int32_t t0 = 1;

    t0 = (x41-(x42>(x43>>x44)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x49 = UINT16_MAX;
	volatile int16_t x50 = INT16_MIN;
	uint64_t x51 = 154889969480LLU;
	uint8_t x52 = 14U;
	volatile int32_t t1 = -16034855;

    t1 = (x49-(x50>(x51>>x52)));

    if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x53 = INT32_MIN;
	int32_t x54 = -1;
	uint8_t x56 = 14U;
	volatile int32_t t2 = INT32_MIN;

    t2 = (x53-(x54>(x55>>x56)));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = 540U;
	uint32_t x155 = 20174542U;
	int64_t x156 = 1LL;
	volatile int32_t t3 = -907;

    t3 = (x153-(x154>(x155>>x156)));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x265 = 1;
	volatile uint64_t x266 = 962677LLU;
	volatile uint64_t x267 = UINT64_MAX;
	uint8_t x268 = 35U;

    t4 = (x265-(x266>(x267>>x268)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x349 = 398447063LL;
	volatile int8_t x351 = 44;
	volatile uint16_t x352 = 4U;
	volatile int64_t t5 = -2623691247020676152LL;

    t5 = (x349-(x350>(x351>>x352)));

    if (t5 != 398447063LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x361 = INT32_MAX;
	uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 0U;
	int32_t t6 = -2386;

    t6 = (x361-(x362>(x363>>x364)));

    if (t6 != 2147483646) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x465 = INT8_MIN;
	int16_t x466 = INT16_MAX;
	int16_t x467 = 1;
	uint8_t x468 = 28U;
	int32_t t7 = 2367;

    t7 = (x465-(x466>(x467>>x468)));

    if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x681 = -11;
	volatile int16_t x682 = INT16_MIN;
	volatile int16_t x683 = INT16_MAX;
	static int32_t t8 = 3550311;

    t8 = (x681-(x682>(x683>>x684)));

    if (t8 != -11) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x737 = 8047LL;
	static int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MAX;
	int64_t t9 = -3884308549382615LL;

    t9 = (x737-(x738>(x739>>x740)));

    if (t9 != 8047LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x765 = 0U;
	int32_t x766 = INT32_MIN;
	uint32_t x767 = 82364U;
	uint16_t x768 = 23U;
	int32_t t10 = -93;

    t10 = (x765-(x766>(x767>>x768)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x773 = UINT8_MAX;
	static uint32_t x774 = 406279679U;
	uint32_t x775 = 9067U;

    t11 = (x773-(x774>(x775>>x776)));

    if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x809 = INT32_MAX;
	uint64_t x810 = 56LLU;
	volatile uint8_t x811 = UINT8_MAX;
	volatile int16_t x812 = 1;

    t12 = (x809-(x810>(x811>>x812)));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x861 = -6;
	int8_t x862 = -1;
	volatile int8_t x864 = 1;
	int32_t t13 = 18;

    t13 = (x861-(x862>(x863>>x864)));

    if (t13 != -6) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x897 = INT16_MIN;
	int16_t x898 = INT16_MAX;
	int8_t x900 = 1;
	int32_t t14 = 58;

    t14 = (x897-(x898>(x899>>x900)));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x982 = 626130U;
	uint16_t x984 = 1U;
	volatile int32_t t15 = 39386;

    t15 = (x981-(x982>(x983>>x984)));

    if (t15 != -129) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x1021 = 7340405392632LL;
	int64_t x1022 = INT64_MIN;
	uint8_t x1023 = UINT8_MAX;
	volatile int16_t x1024 = 1;

    t16 = (x1021-(x1022>(x1023>>x1024)));

    if (t16 != 7340405392632LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x1029 = INT64_MAX;
	static int16_t x1030 = -447;
	uint64_t x1031 = 462575167656450341LLU;
	static uint16_t x1032 = 24U;
	static volatile int64_t t17 = 0LL;

    t17 = (x1029-(x1030>(x1031>>x1032)));

    if (t17 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1045 = 91;
	static uint16_t x1046 = UINT16_MAX;
	static uint16_t x1047 = 189U;
	static uint64_t x1048 = 0LLU;
	static int32_t t18 = 460098;

    t18 = (x1045-(x1046>(x1047>>x1048)));

    if (t18 != 90) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1053 = INT8_MAX;
	volatile int64_t x1054 = INT64_MIN;
	int8_t x1055 = 1;
	uint16_t x1056 = 4U;
	static volatile int32_t t19 = 0;

    t19 = (x1053-(x1054>(x1055>>x1056)));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1157 = 7526LL;
	static int64_t x1158 = 4LL;
	static int64_t t20 = -110712868797029LL;

    t20 = (x1157-(x1158>(x1159>>x1160)));

    if (t20 != 7525LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x1189 = -1;
	uint64_t x1191 = 25630943LLU;
	static uint8_t x1192 = 5U;
	static int32_t t21 = -5199200;

    t21 = (x1189-(x1190>(x1191>>x1192)));

    if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1461 = -1101422823677112LL;
	int64_t x1462 = -106154LL;
	volatile int8_t x1463 = INT8_MAX;
	volatile int16_t x1464 = 1;
	volatile int64_t t22 = -257LL;

    t22 = (x1461-(x1462>(x1463>>x1464)));

    if (t22 != -1101422823677112LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1617 = 9843088446LL;
	int16_t x1618 = INT16_MIN;
	int16_t x1619 = 1;
	static int8_t x1620 = 11;
	volatile int64_t t23 = -4897LL;

    t23 = (x1617-(x1618>(x1619>>x1620)));

    if (t23 != 9843088446LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1625 = -6367127408LL;
	uint32_t x1626 = UINT32_MAX;
	int8_t x1627 = 6;
	volatile uint8_t x1628 = 1U;
	int64_t t24 = 189240743972858LL;

    t24 = (x1625-(x1626>(x1627>>x1628)));

    if (t24 != -6367127409LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1629 = 1003117LLU;
	uint64_t x1631 = 14723654494620194LLU;
	int16_t x1632 = 0;

    t25 = (x1629-(x1630>(x1631>>x1632)));

    if (t25 != 1003116LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1689 = -1;
	static volatile int16_t x1690 = 4;
	uint8_t x1691 = 1U;
	volatile uint32_t x1692 = 3U;

    t26 = (x1689-(x1690>(x1691>>x1692)));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1717 = UINT16_MAX;
	int8_t x1718 = INT8_MIN;
	static uint64_t x1719 = UINT64_MAX;
	volatile uint8_t x1720 = 49U;
	static int32_t t27 = -15;

    t27 = (x1717-(x1718>(x1719>>x1720)));

    if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x1789 = 311U;
	uint8_t x1790 = UINT8_MAX;
	int64_t x1791 = 1474316218554LL;
	volatile uint32_t x1792 = 0U;
	static volatile int32_t t28 = 2888005;

    t28 = (x1789-(x1790>(x1791>>x1792)));

    if (t28 != 311) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1857 = 8289096347LLU;
	uint8_t x1858 = 57U;
	uint8_t x1859 = 16U;
	int16_t x1860 = 14;

    t29 = (x1857-(x1858>(x1859>>x1860)));

    if (t29 != 8289096346LLU) { NG(); } else { ; }
	
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

