
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

uint32_t x2 = 2802U;
uint64_t x4 = UINT64_MAX;
uint16_t x43 = UINT16_MAX;
uint32_t x44 = 168616U;
uint32_t x212 = 60U;
uint32_t x241 = 1170514U;
int16_t x275 = 0;
int32_t t5 = 10760;
volatile int64_t x342 = -1LL;
volatile int16_t x343 = -1;
int16_t x500 = INT16_MAX;
int32_t t7 = -210;
static int8_t x711 = -4;
uint32_t x713 = 45U;
int8_t x716 = INT8_MIN;
static int8_t x799 = 0;
static volatile int32_t x897 = 1397567;
volatile int32_t t15 = -45;
uint32_t x1129 = 31243U;
static int8_t x1131 = 0;
int16_t x1333 = INT16_MAX;
int8_t x1335 = 0;
static uint8_t x1409 = 0U;
uint8_t x1693 = 0U;
int16_t x1696 = 845;
uint16_t x1754 = 0U;
int8_t x2012 = INT8_MIN;
uint64_t x2128 = 1011678LLU;
int32_t t35 = -640;
int16_t x2557 = 76;
uint64_t x2560 = 16564LLU;
volatile uint32_t x2701 = 198U;
uint64_t x2909 = 2255523LLU;
static uint64_t x2911 = UINT64_MAX;
uint64_t t39 = 126356517255626406LLU;
int32_t t40 = -72781;
static int8_t x3206 = -1;
int16_t x3208 = INT16_MAX;
uint32_t t41 = 853531U;
uint32_t x3587 = UINT32_MAX;
volatile int8_t x3842 = 0;
uint32_t x3844 = 1913748U;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	volatile uint64_t t0 = 256808458LLU;

    t0 = ((x1<<(x2*x3))*x4);

    if (t0 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x41 = 4635U;
	uint16_t x42 = 0U;
	static volatile uint32_t t1 = 431488558U;

    t1 = ((x41<<(x42*x43))*x44);

    if (t1 != 781535160U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x77 = 0;
	volatile uint64_t x78 = UINT64_MAX;
	int64_t x79 = -1LL;
	volatile int16_t x80 = -1596;
	int32_t t2 = -720;

    t2 = ((x77<<(x78*x79))*x80);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x209 = 7U;
	volatile uint16_t x210 = 2U;
	uint16_t x211 = 8U;
	static volatile uint32_t t3 = 3U;

    t3 = ((x209<<(x210*x211))*x212);

    if (t3 != 27525120U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x242 = -1;
	static volatile int32_t x243 = -1;
	static uint8_t x244 = 7U;
	volatile uint32_t t4 = 74132558U;

    t4 = ((x241<<(x242*x243))*x244);

    if (t4 != 16387196U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x273 = UINT16_MAX;
	int64_t x274 = 8292868460313LL;
	static int16_t x276 = 1;

    t5 = ((x273<<(x274*x275))*x276);

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x341 = 6;
	int16_t x344 = -1;
	int32_t t6 = 983324;

    t6 = ((x341<<(x342*x343))*x344);

    if (t6 != -12) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x497 = UINT8_MAX;
	uint32_t x498 = 246449062U;
	static int32_t x499 = INT32_MIN;

    t7 = ((x497<<(x498*x499))*x500);

    if (t7 != 8355585) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x637 = INT16_MAX;
	uint8_t x638 = 0U;
	int8_t x639 = INT8_MAX;
	static volatile int8_t x640 = 4;
	volatile int32_t t8 = -432028714;

    t8 = ((x637<<(x638*x639))*x640);

    if (t8 != 131068) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x709 = 6U;
	static int16_t x710 = -1;
	static int16_t x712 = INT16_MAX;
	uint32_t t9 = 115304U;

    t9 = ((x709<<(x710*x711))*x712);

    if (t9 != 3145632U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x714 = -13;
	static int8_t x715 = -1;
	uint32_t t10 = 65U;

    t10 = ((x713<<(x714*x715))*x716);

    if (t10 != 4247781376U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x741 = 201015001498268LLU;
	int16_t x742 = 0;
	static int32_t x743 = INT32_MIN;
	int32_t x744 = INT32_MIN;
	volatile uint64_t t11 = 1367027LLU;

    t11 = ((x741<<(x742*x743))*x744);

    if (t11 != 14276092724896595968LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	int64_t x754 = INT64_MIN;
	static int8_t x755 = 0;
	int16_t x756 = -5;
	volatile uint32_t t12 = 2143857932U;

    t12 = ((x753<<(x754*x755))*x756);

    if (t12 != 5U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x797 = 98;
	int8_t x798 = INT8_MAX;
	uint16_t x800 = UINT16_MAX;
	int32_t t13 = 518772562;

    t13 = ((x797<<(x798*x799))*x800);

    if (t13 != 6422430) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x881 = UINT16_MAX;
	static int16_t x882 = INT16_MIN;
	int8_t x883 = 0;
	uint16_t x884 = 405U;
	volatile int32_t t14 = 0;

    t14 = ((x881<<(x882*x883))*x884);

    if (t14 != 26541675) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x898 = -1LL;
	int16_t x899 = -1;
	volatile uint8_t x900 = 106U;

    t15 = ((x897<<(x898*x899))*x900);

    if (t15 != 296284204) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1021 = 4U;
	int32_t x1022 = 0;
	int32_t x1023 = INT32_MIN;
	int8_t x1024 = INT8_MIN;
	static int32_t t16 = 82247340;

    t16 = ((x1021<<(x1022*x1023))*x1024);

    if (t16 != -512) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x1053 = 1021;
	static int8_t x1054 = 5;
	uint8_t x1055 = 1U;
	volatile uint8_t x1056 = 1U;
	static int32_t t17 = -121;

    t17 = ((x1053<<(x1054*x1055))*x1056);

    if (t17 != 32672) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1065 = 828U;
	volatile int64_t x1066 = 0LL;
	int8_t x1067 = INT8_MAX;
	static int8_t x1068 = 14;
	uint32_t t18 = 138210407U;

    t18 = ((x1065<<(x1066*x1067))*x1068);

    if (t18 != 11592U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1130 = INT32_MAX;
	uint32_t x1132 = 708781U;
	volatile uint32_t t19 = 4104U;

    t19 = ((x1129<<(x1130*x1131))*x1132);

    if (t19 != 669608303U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1189 = 1069LLU;
	uint16_t x1190 = 0U;
	int32_t x1191 = INT32_MIN;
	int32_t x1192 = -10479846;
	static volatile uint64_t t20 = 6611856068513LLU;

    t20 = ((x1189<<(x1190*x1191))*x1192);

    if (t20 != 18446744062506596242LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1334 = 44705847762137038LLU;
	int8_t x1336 = -1;
	volatile int32_t t21 = 119489;

    t21 = ((x1333<<(x1334*x1335))*x1336);

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1389 = 109U;
	volatile uint8_t x1390 = 2U;
	int8_t x1391 = 7;
	int32_t x1392 = -1;
	int32_t t22 = 16847334;

    t22 = ((x1389<<(x1390*x1391))*x1392);

    if (t22 != -1785856) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1410 = 17099530716075093LLU;
	uint16_t x1411 = 0U;
	uint64_t x1412 = UINT64_MAX;
	uint64_t t23 = 2956473534798568614LLU;

    t23 = ((x1409<<(x1410*x1411))*x1412);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x1429 = 1;
	int8_t x1430 = 3;
	volatile uint64_t x1431 = 8LLU;
	int64_t x1432 = -1125LL;
	int64_t t24 = -1083LL;

    t24 = ((x1429<<(x1430*x1431))*x1432);

    if (t24 != -18874368000LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1521 = 1U;
	uint32_t x1522 = UINT32_MAX;
	int16_t x1523 = -1;
	int32_t x1524 = -407274421;
	int32_t t25 = -34079;

    t25 = ((x1521<<(x1522*x1523))*x1524);

    if (t25 != -814548842) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x1669 = UINT64_MAX;
	static int16_t x1670 = -1775;
	int8_t x1671 = 0;
	volatile int64_t x1672 = -462LL;
	volatile uint64_t t26 = 4051629159226171233LLU;

    t26 = ((x1669<<(x1670*x1671))*x1672);

    if (t26 != 462LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1694 = -1;
	static uint64_t x1695 = UINT64_MAX;
	static volatile int32_t t27 = -11077;

    t27 = ((x1693<<(x1694*x1695))*x1696);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1753 = 2536954LLU;
	volatile uint8_t x1755 = 34U;
	static uint64_t x1756 = 8136769917727455331LLU;
	static volatile uint64_t t28 = 34869366617626LLU;

    t28 = ((x1753<<(x1754*x1755))*x1756);

    if (t28 != 3395102549490536366LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1901 = UINT64_MAX;
	uint32_t x1902 = 2U;
	uint8_t x1903 = 5U;
	int64_t x1904 = -7LL;
	volatile uint64_t t29 = 10386185950860340LLU;

    t29 = ((x1901<<(x1902*x1903))*x1904);

    if (t29 != 7168LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x1997 = 0;
	volatile int16_t x1998 = -1;
	int32_t x1999 = -1;
	int16_t x2000 = -1;
	volatile int32_t t30 = -1;

    t30 = ((x1997<<(x1998*x1999))*x2000);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x2009 = 14454LLU;
	volatile int32_t x2010 = -1;
	int8_t x2011 = -25;
	uint64_t t31 = 9029104901939LLU;

    t31 = ((x2009<<(x2010*x2011))*x2012);

    if (t31 != 18446681994252255232LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2085 = INT16_MAX;
	volatile int32_t x2086 = 0;
	int32_t x2087 = INT32_MAX;
	int8_t x2088 = 1;
	int32_t t32 = -15823;

    t32 = ((x2085<<(x2086*x2087))*x2088);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2125 = UINT16_MAX;
	uint8_t x2126 = 1U;
	int8_t x2127 = 2;
	volatile uint64_t t33 = 22346014737LLU;

    t33 = ((x2125<<(x2126*x2127))*x2128);

    if (t33 != 265201270920LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x2389 = 3;
	volatile uint16_t x2390 = 3U;
	volatile int16_t x2391 = 5;
	static uint8_t x2392 = UINT8_MAX;
	int32_t t34 = -1;

    t34 = ((x2389<<(x2390*x2391))*x2392);

    if (t34 != 25067520) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x2421 = 50U;
	volatile int64_t x2422 = 0LL;
	uint64_t x2423 = 38353549527947590LLU;
	uint8_t x2424 = 0U;

    t35 = ((x2421<<(x2422*x2423))*x2424);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x2489 = 8546U;
	uint16_t x2490 = 0U;
	volatile int16_t x2491 = INT16_MIN;
	uint16_t x2492 = 509U;
	volatile int32_t t36 = 6461;

    t36 = ((x2489<<(x2490*x2491))*x2492);

    if (t36 != 4349914) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x2558 = UINT64_MAX;
	uint64_t x2559 = UINT64_MAX;
	volatile uint64_t t37 = 90983965770904661LLU;

    t37 = ((x2557<<(x2558*x2559))*x2560);

    if (t37 != 2517728LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2702 = -1;
	uint32_t x2703 = UINT32_MAX;
	static int16_t x2704 = INT16_MIN;
	uint32_t t38 = 549062U;

    t38 = ((x2701<<(x2702*x2703))*x2704);

    if (t38 != 4281991168U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x2910 = -23;
	static volatile uint16_t x2912 = 57U;

    t39 = ((x2909<<(x2910*x2911))*x2912);

    if (t39 != 1078479802073088LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x3065 = UINT16_MAX;
	int64_t x3066 = INT64_MIN;
	int8_t x3067 = 0;
	int8_t x3068 = -1;

    t40 = ((x3065<<(x3066*x3067))*x3068);

    if (t40 != -65535) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x3205 = UINT32_MAX;
	int16_t x3207 = -1;

    t41 = ((x3205<<(x3206*x3207))*x3208);

    if (t41 != 4294901762U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3373 = 0U;
	int16_t x3374 = -1;
	uint64_t x3375 = UINT64_MAX;
	uint16_t x3376 = UINT16_MAX;
	volatile int32_t t42 = -16951;

    t42 = ((x3373<<(x3374*x3375))*x3376);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x3585 = INT16_MAX;
	int8_t x3586 = -1;
	volatile int8_t x3588 = INT8_MIN;
	int32_t t43 = -7;

    t43 = ((x3585<<(x3586*x3587))*x3588);

    if (t43 != -8388352) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x3645 = 23LL;
	int16_t x3646 = -1;
	uint16_t x3647 = 0U;
	uint64_t x3648 = 51678227LLU;
	uint64_t t44 = 28008LLU;

    t44 = ((x3645<<(x3646*x3647))*x3648);

    if (t44 != 1188599221LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x3841 = UINT32_MAX;
	int32_t x3843 = -17345538;
	volatile uint32_t t45 = 252684U;

    t45 = ((x3841<<(x3842*x3843))*x3844);

    if (t45 != 4293053548U) { NG(); } else { ; }
	
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


    return 0;
}

