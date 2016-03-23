
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

int32_t t3 = 4601;
int32_t t4 = 423;
static uint32_t x488 = UINT32_MAX;
int16_t x539 = INT16_MAX;
int8_t x540 = -1;
volatile int32_t t8 = -541179629;
int16_t x614 = -1;
static int32_t x651 = INT32_MIN;
static int32_t t11 = 3;
static uint32_t x717 = 91697955U;
int16_t x719 = -1;
uint16_t x745 = 138U;
volatile int64_t x746 = -1LL;
volatile int64_t x766 = -1LL;
volatile int16_t x767 = -190;
int16_t x778 = -1;
volatile int64_t x779 = 585140878812940LL;
static int64_t x780 = -1LL;
int16_t x865 = 1479;
static uint32_t x1135 = UINT32_MAX;
volatile uint64_t x1460 = 4LLU;
int8_t x1726 = -1;
uint32_t t22 = 117504U;
static uint64_t x1786 = UINT64_MAX;
int32_t x1788 = INT32_MIN;
int8_t x1868 = INT8_MIN;
uint16_t x1921 = 32U;
static int64_t x1922 = -1LL;
static int32_t t25 = 11015828;
int16_t x2031 = -674;
static volatile uint64_t x2129 = UINT64_MAX;
int32_t x2130 = INT32_MAX;
uint64_t t27 = UINT64_MAX;
int32_t x2546 = -1;
uint32_t x2597 = 190621U;
static volatile uint32_t t30 = 388895U;
int64_t x2791 = -1LL;
volatile uint32_t x3054 = UINT32_MAX;
int32_t x3089 = 32;
int64_t x3092 = -1LL;
volatile int32_t t33 = -37;
volatile int32_t x3383 = -1;
volatile int64_t x3612 = -1LL;
uint16_t x3673 = 6258U;
int32_t t40 = 3855989;
int16_t x3800 = INT16_MIN;
uint32_t x3965 = 55U;
volatile int64_t x3998 = -1LL;
int64_t x4077 = 2030813279LL;
int8_t x4080 = -1;


void f0(void) {
    	uint8_t x53 = UINT8_MAX;
	int32_t x54 = -1;
	int8_t x55 = 2;
	volatile uint64_t x56 = UINT64_MAX;
	volatile int32_t t0 = -4476641;

    t0 = (x53<<(x54^(x55|x56)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x129 = 3;
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	int16_t x132 = 1;
	static volatile int32_t t1 = -24;

    t1 = (x129<<(x130^(x131|x132)));

    if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x133 = 0U;
	int8_t x134 = -1;
	volatile int16_t x135 = INT16_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t2 = -28268;

    t2 = (x133<<(x134^(x135|x136)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x161 = INT16_MAX;
	int16_t x162 = -117;
	static int8_t x163 = INT8_MIN;
	static uint32_t x164 = 3U;

    t3 = (x161<<(x162^(x163|x164)));

    if (t3 != 8388352) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x229 = 10U;
	int8_t x230 = -3;
	static uint8_t x231 = UINT8_MAX;
	int8_t x232 = -1;

    t4 = (x229<<(x230^(x231|x232)));

    if (t4 != 40) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x313 = INT64_MAX;
	uint64_t x314 = UINT64_MAX;
	static int8_t x315 = 3;
	volatile int8_t x316 = -1;
	static int64_t t5 = INT64_MAX;

    t5 = (x313<<(x314^(x315|x316)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x345 = 253129340613165897LLU;
	static int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 48U;
	uint64_t t6 = 87774650100LLU;

    t6 = (x345<<(x346^(x347|x348)));

    if (t6 != 236720455413661696LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x485 = UINT16_MAX;
	static volatile int16_t x486 = -2;
	volatile uint32_t x487 = UINT32_MAX;
	int32_t t7 = -2177;

    t7 = (x485<<(x486^(x487|x488)));

    if (t7 != 131070) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x537 = 0U;
	int32_t x538 = -1;

    t8 = (x537<<(x538^(x539|x540)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x613 = 7855U;
	int32_t x615 = INT32_MAX;
	volatile int16_t x616 = INT16_MIN;
	int32_t t9 = 222846710;

    t9 = (x613<<(x614^(x615|x616)));

    if (t9 != 7855) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x633 = INT32_MAX;
	int8_t x634 = INT8_MIN;
	int8_t x635 = INT8_MIN;
	int8_t x636 = 0;
	int32_t t10 = INT32_MAX;

    t10 = (x633<<(x634^(x635|x636)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x649 = UINT8_MAX;
	int64_t x650 = -1LL;
	int16_t x652 = -1;

    t11 = (x649<<(x650^(x651|x652)));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x718 = UINT64_MAX;
	static int32_t x720 = INT32_MIN;
	volatile uint32_t t12 = 2077U;

    t12 = (x717<<(x718^(x719|x720)));

    if (t12 != 91697955U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x747 = -1;
	int64_t x748 = INT64_MAX;
	int32_t t13 = 0;

    t13 = (x745<<(x746^(x747|x748)));

    if (t13 != 138) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x765 = INT32_MAX;
	int8_t x768 = -1;
	static int32_t t14 = INT32_MAX;

    t14 = (x765<<(x766^(x767|x768)));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x777 = 1;
	volatile int32_t t15 = 830726;

    t15 = (x777<<(x778^(x779|x780)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x866 = -1;
	volatile int8_t x867 = -6;
	uint32_t x868 = 1857263U;
	volatile int32_t t16 = 8360169;

    t16 = (x865<<(x866^(x867|x868)));

    if (t16 != 1479) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x945 = 3857LL;
	uint64_t x946 = UINT64_MAX;
	uint16_t x947 = UINT16_MAX;
	int8_t x948 = INT8_MIN;
	volatile int64_t t17 = 17190420955066LL;

    t17 = (x945<<(x946^(x947|x948)));

    if (t17 != 3857LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1133 = UINT8_MAX;
	int16_t x1134 = -1;
	volatile int32_t x1136 = -90190688;
	volatile int32_t t18 = 25;

    t18 = (x1133<<(x1134^(x1135|x1136)));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1457 = 60U;
	int8_t x1458 = INT8_MIN;
	static int8_t x1459 = INT8_MIN;
	static int32_t t19 = -915807805;

    t19 = (x1457<<(x1458^(x1459|x1460)));

    if (t19 != 960) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1473 = 779U;
	static int8_t x1474 = -1;
	int16_t x1475 = INT16_MIN;
	int8_t x1476 = -2;
	int32_t t20 = 3;

    t20 = (x1473<<(x1474^(x1475|x1476)));

    if (t20 != 1558) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1725 = 5295;
	volatile int32_t x1727 = INT32_MIN;
	int64_t x1728 = INT64_MAX;
	static volatile int32_t t21 = 34587;

    t21 = (x1725<<(x1726^(x1727|x1728)));

    if (t21 != 5295) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x1729 = 10U;
	static volatile int32_t x1730 = -1;
	int8_t x1731 = INT8_MIN;
	volatile uint32_t x1732 = UINT32_MAX;

    t22 = (x1729<<(x1730^(x1731|x1732)));

    if (t22 != 10U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x1785 = 6LL;
	static int32_t x1787 = -1;
	int64_t t23 = 186218LL;

    t23 = (x1785<<(x1786^(x1787|x1788)));

    if (t23 != 6LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1865 = 13;
	volatile int8_t x1866 = -1;
	static int16_t x1867 = -786;
	static int32_t t24 = 3565;

    t24 = (x1865<<(x1866^(x1867|x1868)));

    if (t24 != 1703936) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1923 = 22;
	int8_t x1924 = -1;

    t25 = (x1921<<(x1922^(x1923|x1924)));

    if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2029 = 4U;
	uint64_t x2030 = UINT64_MAX;
	int16_t x2032 = INT16_MAX;
	static uint32_t t26 = 212U;

    t26 = (x2029<<(x2030^(x2031|x2032)));

    if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2131 = UINT16_MAX;
	int32_t x2132 = INT32_MAX;

    t27 = (x2129<<(x2130^(x2131|x2132)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2249 = UINT64_MAX;
	static int16_t x2250 = -1;
	uint16_t x2251 = UINT16_MAX;
	uint32_t x2252 = UINT32_MAX;
	volatile uint64_t t28 = UINT64_MAX;

    t28 = (x2249<<(x2250^(x2251|x2252)));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x2545 = 254;
	int8_t x2547 = -1;
	int16_t x2548 = INT16_MIN;
	volatile int32_t t29 = -8;

    t29 = (x2545<<(x2546^(x2547|x2548)));

    if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2598 = INT8_MIN;
	static int32_t x2599 = INT32_MIN;
	static int8_t x2600 = INT8_MIN;

    t30 = (x2597<<(x2598^(x2599|x2600)));

    if (t30 != 190621U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x2789 = INT16_MAX;
	static int8_t x2790 = -1;
	int32_t x2792 = -1;
	int32_t t31 = -1355979;

    t31 = (x2789<<(x2790^(x2791|x2792)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x3053 = 2185U;
	int32_t x3055 = -1;
	int16_t x3056 = INT16_MIN;
	uint32_t t32 = 85404U;

    t32 = (x3053<<(x3054^(x3055|x3056)));

    if (t32 != 2185U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x3090 = -1;
	volatile uint32_t x3091 = 1312U;

    t33 = (x3089<<(x3090^(x3091|x3092)));

    if (t33 != 32) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x3217 = 544923573LLU;
	static int16_t x3218 = -1;
	volatile int32_t x3219 = INT32_MAX;
	int32_t x3220 = INT32_MIN;
	volatile uint64_t t34 = 259121399460182787LLU;

    t34 = (x3217<<(x3218^(x3219|x3220)));

    if (t34 != 544923573LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x3253 = 0U;
	int32_t x3254 = -1;
	int8_t x3255 = -18;
	int8_t x3256 = INT8_MIN;
	int32_t t35 = 885;

    t35 = (x3253<<(x3254^(x3255|x3256)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3289 = INT64_MAX;
	int64_t x3290 = -1LL;
	int32_t x3291 = -1;
	static int8_t x3292 = 0;
	static volatile int64_t t36 = INT64_MAX;

    t36 = (x3289<<(x3290^(x3291|x3292)));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x3381 = INT16_MAX;
	static int16_t x3382 = -1;
	int64_t x3384 = INT64_MAX;
	int32_t t37 = 20415366;

    t37 = (x3381<<(x3382^(x3383|x3384)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x3409 = 129U;
	uint64_t x3410 = UINT64_MAX;
	int8_t x3411 = 32;
	int16_t x3412 = -1;
	volatile uint32_t t38 = 635631387U;

    t38 = (x3409<<(x3410^(x3411|x3412)));

    if (t38 != 129U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x3609 = 6;
	volatile int32_t x3610 = -1;
	int16_t x3611 = 180;
	static volatile int32_t t39 = 89;

    t39 = (x3609<<(x3610^(x3611|x3612)));

    if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x3674 = -1LL;
	static int32_t x3675 = INT32_MAX;
	int8_t x3676 = INT8_MIN;

    t40 = (x3673<<(x3674^(x3675|x3676)));

    if (t40 != 6258) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x3797 = 6705U;
	volatile int32_t x3798 = -1;
	volatile int16_t x3799 = INT16_MAX;
	int32_t t41 = -17391;

    t41 = (x3797<<(x3798^(x3799|x3800)));

    if (t41 != 6705) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x3966 = -1;
	int16_t x3967 = -1;
	static int32_t x3968 = -1;
	volatile uint32_t t42 = 1322693U;

    t42 = (x3965<<(x3966^(x3967|x3968)));

    if (t42 != 55U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x3997 = INT32_MAX;
	int32_t x3999 = INT32_MAX;
	int16_t x4000 = INT16_MIN;
	volatile int32_t t43 = INT32_MAX;

    t43 = (x3997<<(x3998^(x3999|x4000)));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x4078 = -1;
	uint8_t x4079 = UINT8_MAX;
	int64_t t44 = 1700355777733901LL;

    t44 = (x4077<<(x4078^(x4079|x4080)));

    if (t44 != 2030813279LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x4121 = UINT8_MAX;
	uint32_t x4122 = UINT32_MAX;
	volatile uint32_t x4123 = 419403262U;
	volatile int32_t x4124 = -1;
	volatile int32_t t45 = -1;

    t45 = (x4121<<(x4122^(x4123|x4124)));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x4197 = UINT32_MAX;
	int64_t x4198 = -1LL;
	int8_t x4199 = INT8_MAX;
	int8_t x4200 = -1;
	uint32_t t46 = UINT32_MAX;

    t46 = (x4197<<(x4198^(x4199|x4200)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
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


    return 0;
}

