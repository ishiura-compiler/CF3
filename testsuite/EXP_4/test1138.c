
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

volatile int16_t x33 = 5389;
int32_t t0 = 600250;
volatile uint64_t t1 = 16879636209013171LLU;
uint32_t x375 = UINT32_MAX;
static int32_t x449 = INT32_MIN;
int32_t x450 = INT32_MAX;
uint64_t t4 = 9191880880087190030LLU;
static int32_t x574 = 3922902;
static uint16_t x831 = UINT16_MAX;
uint16_t x832 = 3U;
int32_t t8 = 276800;
static uint32_t x880 = 13U;
uint64_t t9 = 97989168088719023LLU;
static int32_t x1434 = -1;
static uint64_t x1529 = UINT64_MAX;
int16_t x1534 = INT16_MIN;
uint32_t x1535 = UINT32_MAX;
uint8_t x1536 = 28U;
uint8_t x1701 = 5U;
volatile uint16_t x1843 = 7U;
int32_t x1844 = 5;
int8_t x2102 = INT8_MAX;
int8_t x2200 = 1;
volatile uint16_t x2460 = 1U;
volatile int64_t x2590 = 315736LL;
volatile uint8_t x2592 = 0U;
volatile uint16_t x2913 = UINT16_MAX;
uint8_t x2981 = 9U;
int32_t x2982 = -3496;
int32_t x2983 = INT32_MAX;
static uint16_t x3098 = UINT16_MAX;
static uint32_t x3099 = 101U;
static volatile uint16_t x3166 = UINT16_MAX;
static int64_t t37 = 107963199547995682LL;
volatile int64_t x3694 = INT64_MAX;
int32_t x3701 = -13;
int32_t x3901 = INT32_MIN;
volatile int32_t t44 = 7311;
int32_t x3971 = 1790948;
volatile int64_t x4109 = 2621941263LL;
uint64_t t46 = 21066613402LLU;
uint32_t x4495 = 2096679U;
volatile uint32_t t48 = UINT32_MAX;
uint8_t x4525 = UINT8_MAX;
static int32_t x4940 = 2;
uint64_t t51 = 975092222LLU;
static uint64_t x5091 = 1754147LLU;
uint64_t t52 = 8984252489186860106LLU;
int8_t x5133 = INT8_MAX;
int16_t x5135 = INT16_MAX;


void f0(void) {
    	uint16_t x34 = UINT16_MAX;
	volatile uint16_t x35 = 361U;
	uint8_t x36 = 8U;

    t0 = (x33/(x34&(x35<<x36)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x109 = 15174976361917LLU;
	volatile int64_t x110 = -1LL;
	uint16_t x111 = 12489U;
	static uint8_t x112 = 1U;

    t1 = (x109/(x110&(x111<<x112)));

    if (t1 != 607533684LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x373 = INT32_MIN;
	uint64_t x374 = 125126673LLU;
	volatile int8_t x376 = 0;
	volatile uint64_t t2 = 239626024540LLU;

    t2 = (x373/(x374&(x375<<x376)));

    if (t2 != 147424554887LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x409 = INT8_MAX;
	int32_t x410 = INT32_MIN;
	int64_t x411 = 27538376418551478LL;
	static uint16_t x412 = 6U;
	int64_t t3 = 1183436166467LL;

    t3 = (x409/(x410&(x411<<x412)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x451 = UINT64_MAX;
	uint8_t x452 = 13U;

    t4 = (x449/(x450&(x451<<x452)));

    if (t4 != 8589967359LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x573 = INT32_MIN;
	volatile int16_t x575 = 6507;
	uint8_t x576 = 0U;
	volatile int32_t t5 = -510762;

    t5 = (x573/(x574&(x575<<x576)));

    if (t5 != -332119) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x645 = INT32_MAX;
	static uint32_t x646 = 1514132U;
	int8_t x647 = 1;
	int8_t x648 = 4;
	uint32_t t6 = 117U;

    t6 = (x645/(x646&(x647<<x648)));

    if (t6 != 134217727U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x729 = -1;
	int64_t x730 = INT64_MAX;
	int64_t x731 = INT64_MAX;
	uint8_t x732 = 0U;
	int64_t t7 = 31LL;

    t7 = (x729/(x730&(x731<<x732)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x829 = 1;
	static volatile uint16_t x830 = 5396U;

    t8 = (x829/(x830&(x831<<x832)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x877 = INT32_MAX;
	static volatile int8_t x878 = -1;
	volatile uint64_t x879 = 9035123638434770565LLU;

    t9 = (x877/(x878&(x879<<x880)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x1097 = INT16_MIN;
	uint64_t x1098 = 1268828318557LLU;
	uint64_t x1099 = 12150824141LLU;
	uint16_t x1100 = 21U;
	static volatile uint64_t t10 = 33612217854332615LLU;

    t10 = (x1097/(x1098&(x1099<<x1100)));

    if (t10 != 16580884LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x1169 = 6U;
	static uint64_t x1170 = UINT64_MAX;
	volatile uint64_t x1171 = 427LLU;
	static volatile int8_t x1172 = 2;
	volatile uint64_t t11 = 28041905LLU;

    t11 = (x1169/(x1170&(x1171<<x1172)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x1321 = INT16_MIN;
	int8_t x1322 = INT8_MAX;
	static int8_t x1323 = INT8_MAX;
	uint16_t x1324 = 1U;
	volatile int32_t t12 = 1;

    t12 = (x1321/(x1322&(x1323<<x1324)));

    if (t12 != -260) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x1417 = 3494261528473764963LL;
	uint32_t x1418 = 2236U;
	uint32_t x1419 = 50885476U;
	static uint16_t x1420 = 0U;
	int64_t t13 = -298482403309998347LL;

    t13 = (x1417/(x1418&(x1419<<x1420)));

    if (t13 != 97062820235382360LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1433 = 685U;
	uint32_t x1435 = 79231U;
	uint16_t x1436 = 2U;
	static volatile uint32_t t14 = 6931U;

    t14 = (x1433/(x1434&(x1435<<x1436)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1530 = 20U;
	uint16_t x1531 = UINT16_MAX;
	static int8_t x1532 = 1;
	uint64_t t15 = 28704656940294LLU;

    t15 = (x1529/(x1530&(x1531<<x1532)));

    if (t15 != 922337203685477580LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1533 = 495400;
	uint32_t t16 = 1053524650U;

    t16 = (x1533/(x1534&(x1535<<x1536)));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1641 = UINT32_MAX;
	static uint8_t x1642 = UINT8_MAX;
	uint8_t x1643 = 3U;
	int8_t x1644 = 0;
	volatile uint32_t t17 = 1U;

    t17 = (x1641/(x1642&(x1643<<x1644)));

    if (t17 != 1431655765U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1702 = INT16_MIN;
	uint32_t x1703 = 817U;
	volatile uint16_t x1704 = 26U;
	uint32_t t18 = 358115U;

    t18 = (x1701/(x1702&(x1703<<x1704)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x1745 = 6U;
	int8_t x1746 = INT8_MIN;
	uint32_t x1747 = 1621U;
	uint32_t x1748 = 2U;
	volatile uint32_t t19 = 86748985U;

    t19 = (x1745/(x1746&(x1747<<x1748)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1841 = INT16_MAX;
	volatile int16_t x1842 = -1;
	static int32_t t20 = 1;

    t20 = (x1841/(x1842&(x1843<<x1844)));

    if (t20 != 146) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x2101 = 0U;
	static volatile uint32_t x2103 = 1810997996U;
	static uint8_t x2104 = 4U;
	static volatile uint32_t t21 = 998530025U;

    t21 = (x2101/(x2102&(x2103<<x2104)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x2153 = INT8_MIN;
	int8_t x2154 = INT8_MAX;
	int32_t x2155 = 4057;
	uint16_t x2156 = 3U;
	int32_t t22 = -96;

    t22 = (x2153/(x2154&(x2155<<x2156)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x2157 = 56U;
	int16_t x2158 = INT16_MAX;
	uint16_t x2159 = 68U;
	volatile uint8_t x2160 = 3U;
	static int32_t t23 = 504;

    t23 = (x2157/(x2158&(x2159<<x2160)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2197 = 1U;
	uint64_t x2198 = 1816871853597383LLU;
	uint32_t x2199 = UINT32_MAX;
	static volatile uint64_t t24 = 6689621LLU;

    t24 = (x2197/(x2198&(x2199<<x2200)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2385 = 24;
	volatile uint64_t x2386 = UINT64_MAX;
	static int8_t x2387 = 1;
	volatile uint8_t x2388 = 1U;
	static uint64_t t25 = 15833717546LLU;

    t25 = (x2385/(x2386&(x2387<<x2388)));

    if (t25 != 12LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x2425 = INT16_MIN;
	static int8_t x2426 = INT8_MAX;
	volatile int64_t x2427 = 57LL;
	int8_t x2428 = 0;
	int64_t t26 = 52778708LL;

    t26 = (x2425/(x2426&(x2427<<x2428)));

    if (t26 != -574LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x2457 = INT16_MIN;
	int16_t x2458 = INT16_MAX;
	uint64_t x2459 = 3805300248783608370LLU;
	uint64_t t27 = 54146673356285494LLU;

    t27 = (x2457/(x2458&(x2459<<x2460)));

    if (t27 != 1375390998636259LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2589 = INT32_MAX;
	uint16_t x2591 = 753U;
	int64_t t28 = -293992LL;

    t28 = (x2589/(x2590&(x2591<<x2592)));

    if (t28 != 26843545LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2745 = -1;
	int32_t x2746 = -425730;
	static uint8_t x2747 = 1U;
	uint8_t x2748 = 1U;
	volatile int32_t t29 = 13224815;

    t29 = (x2745/(x2746&(x2747<<x2748)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x2777 = 3;
	int8_t x2778 = INT8_MIN;
	static uint32_t x2779 = 3929U;
	int32_t x2780 = 18;
	static volatile uint32_t t30 = 7928U;

    t30 = (x2777/(x2778&(x2779<<x2780)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x2825 = 247813865U;
	int8_t x2826 = INT8_MIN;
	uint8_t x2827 = UINT8_MAX;
	uint16_t x2828 = 5U;
	uint32_t t31 = 3019U;

    t31 = (x2825/(x2826&(x2827<<x2828)));

    if (t31 != 30730U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2914 = 2762U;
	int8_t x2915 = 1;
	static int8_t x2916 = 11;
	int32_t t32 = 10369217;

    t32 = (x2913/(x2914&(x2915<<x2916)));

    if (t32 != 31) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x2984 = 0U;
	int32_t t33 = -381694;

    t33 = (x2981/(x2982&(x2983<<x2984)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x3097 = 0;
	int8_t x3100 = 6;
	volatile uint32_t t34 = 249717343U;

    t34 = (x3097/(x3098&(x3099<<x3100)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x3165 = -339853888806882LL;
	volatile uint8_t x3167 = UINT8_MAX;
	uint16_t x3168 = 6U;
	int64_t t35 = -1238942645997111810LL;

    t35 = (x3165/(x3166&(x3167<<x3168)));

    if (t35 != -20824380441LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3241 = -1LL;
	uint64_t x3242 = 2919LLU;
	int32_t x3243 = 43;
	uint8_t x3244 = 1U;
	static uint64_t t36 = 7911452633LLU;

    t36 = (x3241/(x3242&(x3243<<x3244)));

    if (t36 != 263524915338707880LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x3521 = 18733;
	int64_t x3522 = 898862108LL;
	volatile int16_t x3523 = 232;
	volatile int16_t x3524 = 7;

    t37 = (x3521/(x3522&(x3523<<x3524)));

    if (t37 != 18LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x3569 = 0U;
	volatile int16_t x3570 = INT16_MAX;
	uint64_t x3571 = 33496460597549077LLU;
	int16_t x3572 = 0;
	static volatile uint64_t t38 = 6265LLU;

    t38 = (x3569/(x3570&(x3571<<x3572)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x3617 = 37U;
	int8_t x3618 = INT8_MIN;
	static uint8_t x3619 = 14U;
	uint32_t x3620 = 16U;
	volatile int32_t t39 = 14759;

    t39 = (x3617/(x3618&(x3619<<x3620)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x3625 = 11;
	int8_t x3626 = 8;
	volatile uint64_t x3627 = 9021456282657597701LLU;
	int8_t x3628 = 1;
	volatile uint64_t t40 = 773271LLU;

    t40 = (x3625/(x3626&(x3627<<x3628)));

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3629 = INT16_MIN;
	int64_t x3630 = INT64_MAX;
	static uint64_t x3631 = 41924854LLU;
	static uint32_t x3632 = 0U;
	uint64_t t41 = 29925LLU;

    t41 = (x3629/(x3630&(x3631<<x3632)));

    if (t41 != 439995427860LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x3693 = 1;
	static uint16_t x3695 = 3899U;
	uint8_t x3696 = 12U;
	static volatile int64_t t42 = 20LL;

    t42 = (x3693/(x3694&(x3695<<x3696)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3702 = 437980361U;
	uint8_t x3703 = 112U;
	volatile uint16_t x3704 = 5U;
	static volatile uint32_t t43 = 2271U;

    t43 = (x3701/(x3702&(x3703<<x3704)));

    if (t43 != 1398101U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3902 = INT8_MAX;
	volatile int16_t x3903 = INT16_MAX;
	volatile int16_t x3904 = 0;

    t44 = (x3901/(x3902&(x3903<<x3904)));

    if (t44 != -16909320) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x3969 = -1;
	uint64_t x3970 = 1115677317LLU;
	volatile uint8_t x3972 = 8U;
	uint64_t t45 = 1691LLU;

    t45 = (x3969/(x3970&(x3971<<x3972)));

    if (t45 != 472372522275LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x4110 = INT32_MIN;
	uint64_t x4111 = UINT64_MAX;
	int16_t x4112 = 1;

    t46 = (x4109/(x4110&(x4111<<x4112)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4121 = INT32_MIN;
	static uint64_t x4122 = 191807419265LLU;
	volatile int8_t x4123 = INT8_MAX;
	volatile uint16_t x4124 = 2U;
	volatile uint64_t t47 = 809951LLU;

    t47 = (x4121/(x4122&(x4123<<x4124)));

    if (t47 != 48038396019692885LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x4493 = -1;
	int8_t x4494 = 1;
	int64_t x4496 = 0LL;

    t48 = (x4493/(x4494&(x4495<<x4496)));

    if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x4526 = INT16_MAX;
	uint32_t x4527 = UINT32_MAX;
	int16_t x4528 = 0;
	volatile uint32_t t49 = 7U;

    t49 = (x4525/(x4526&(x4527<<x4528)));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x4569 = INT16_MIN;
	int64_t x4570 = 18116333LL;
	uint8_t x4571 = 2U;
	uint64_t x4572 = 2LLU;
	volatile int64_t t50 = -2565347369LL;

    t50 = (x4569/(x4570&(x4571<<x4572)));

    if (t50 != -4096LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x4937 = -1LL;
	volatile uint32_t x4938 = UINT32_MAX;
	volatile uint64_t x4939 = 207568842411LLU;

    t51 = (x4937/(x4938&(x4939<<x4940)));

    if (t51 != 13697926239LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x5089 = -1;
	uint8_t x5090 = 59U;
	int8_t x5092 = 0;

    t52 = (x5089/(x5090&(x5091<<x5092)));

    if (t52 != 527049830677415760LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x5105 = UINT64_MAX;
	static uint16_t x5106 = 124U;
	uint32_t x5107 = 226U;
	int32_t x5108 = 0;
	volatile uint64_t t53 = 263180LLU;

    t53 = (x5105/(x5106&(x5107<<x5108)));

    if (t53 != 192153584101141162LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x5134 = -12629966383LL;
	uint8_t x5136 = 7U;
	volatile int64_t t54 = -30242618914647LL;

    t54 = (x5133/(x5134&(x5135<<x5136)));

    if (t54 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

