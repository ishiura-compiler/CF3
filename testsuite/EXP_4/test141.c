
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

int8_t x2 = INT8_MAX;
uint32_t x75 = UINT32_MAX;
int8_t x76 = 11;
int8_t x230 = 5;
volatile int8_t x231 = -1;
uint8_t x232 = 28U;
uint32_t t2 = UINT32_MAX;
static uint8_t x299 = 3U;
volatile uint64_t x300 = 0LLU;
static uint64_t t3 = 258365521812484090LLU;
int8_t x533 = INT8_MIN;
uint8_t x535 = 11U;
volatile uint32_t t4 = 1384827573U;
uint16_t x788 = 27U;
uint64_t t6 = 2088979LLU;
static volatile uint32_t t7 = 21707U;
uint8_t x972 = 15U;
int8_t x1123 = 42;
int8_t x1223 = 25;
int32_t t11 = 268610;
int32_t t13 = 85515;
volatile int8_t x1589 = 1;
volatile int8_t x1591 = -1;
uint64_t x1614 = 5641LLU;
int64_t x1754 = INT64_MAX;
static int16_t x1756 = -1;
uint8_t x1757 = 123U;
static int8_t x1760 = 2;
static uint32_t x1778 = 21614U;
uint8_t x1876 = 2U;
static uint64_t x2418 = 1264800507LLU;
static uint64_t t27 = 767117168072LLU;
int32_t x2629 = INT32_MIN;
int64_t x2631 = -7LL;
int32_t t30 = 59;
static uint16_t x2746 = 12552U;
volatile int32_t t32 = 7499104;
static uint8_t x2891 = 54U;
int16_t x3178 = 2688;
static uint16_t x3343 = 12U;
static volatile uint64_t t36 = UINT64_MAX;
uint32_t x3508 = 7U;
static uint64_t x3678 = UINT64_MAX;
uint32_t x3679 = 31U;
static volatile uint32_t x3680 = UINT32_MAX;
int32_t x3713 = INT32_MIN;
volatile uint16_t x3714 = 10U;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	uint16_t x3 = 5U;
	static volatile uint8_t x4 = 14U;
	static volatile uint32_t t0 = UINT32_MAX;

    t0 = (x1+(x2>>(x3+x4)));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x73 = INT32_MIN;
	volatile uint16_t x74 = 89U;
	volatile int32_t t1 = INT32_MIN;

    t1 = (x73+(x74>>(x75+x76)));

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x229 = UINT32_MAX;

    t2 = (x229+(x230>>(x231+x232)));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x297 = INT16_MIN;
	uint64_t x298 = 8517752772842724LLU;

    t3 = (x297+(x298>>(x299+x300)));

    if (t3 != 1064719096572572LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x534 = 13U;
	int8_t x536 = 10;

    t4 = (x533+(x534>>(x535+x536)));

    if (t4 != 4294967168U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x785 = INT32_MIN;
	int64_t x786 = 2622421522310348LL;
	static volatile uint32_t x787 = UINT32_MAX;
	static volatile int64_t t5 = 145362983942LL;

    t5 = (x785+(x786>>(x787+x788)));

    if (t5 != -2108406523LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x913 = INT32_MIN;
	uint64_t x914 = UINT64_MAX;
	uint16_t x915 = 10U;
	int8_t x916 = -3;

    t6 = (x913+(x914>>(x915+x916)));

    if (t6 != 144115185928372223LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x965 = UINT16_MAX;
	uint32_t x966 = 14070U;
	volatile int8_t x967 = 5;
	uint32_t x968 = UINT32_MAX;

    t7 = (x965+(x966>>(x967+x968)));

    if (t7 != 66414U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x969 = INT16_MIN;
	uint16_t x970 = UINT16_MAX;
	static uint64_t x971 = UINT64_MAX;
	static int32_t t8 = 156300;

    t8 = (x969+(x970>>(x971+x972)));

    if (t8 != -32765) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x997 = INT16_MIN;
	uint64_t x998 = 134525444993LLU;
	int8_t x999 = 3;
	static int32_t x1000 = -1;
	uint64_t t9 = 1851LLU;

    t9 = (x997+(x998>>(x999+x1000)));

    if (t9 != 33631328480LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x1121 = -1LL;
	static uint64_t x1122 = 271891835669466831LLU;
	volatile uint32_t x1124 = 14U;
	static volatile uint64_t t10 = 13736LLU;

    t10 = (x1121+(x1122>>(x1123+x1124)));

    if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x1221 = UINT8_MAX;
	uint8_t x1222 = 1U;
	volatile uint64_t x1224 = UINT64_MAX;

    t11 = (x1221+(x1222>>(x1223+x1224)));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x1313 = 7219782LLU;
	volatile int64_t x1314 = 0LL;
	uint16_t x1315 = 44U;
	int8_t x1316 = -3;
	uint64_t t12 = 1336168LLU;

    t12 = (x1313+(x1314>>(x1315+x1316)));

    if (t12 != 7219782LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x1369 = INT16_MAX;
	volatile int32_t x1370 = 791908088;
	int8_t x1371 = -1;
	uint32_t x1372 = 7U;

    t13 = (x1369+(x1370>>(x1371+x1372)));

    if (t13 != 12406330) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1425 = 26720986356908LLU;
	static int8_t x1426 = INT8_MAX;
	int8_t x1427 = -1;
	uint32_t x1428 = 13U;
	volatile uint64_t t14 = 5LLU;

    t14 = (x1425+(x1426>>(x1427+x1428)));

    if (t14 != 26720986356908LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x1590 = INT8_MAX;
	int32_t x1592 = 3;
	int32_t t15 = -162790308;

    t15 = (x1589+(x1590>>(x1591+x1592)));

    if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1613 = 465105LLU;
	uint64_t x1615 = UINT64_MAX;
	volatile int64_t x1616 = 1LL;
	uint64_t t16 = 340269030LLU;

    t16 = (x1613+(x1614>>(x1615+x1616)));

    if (t16 != 470746LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1645 = -1;
	static uint64_t x1646 = 2624LLU;
	int8_t x1647 = 21;
	int16_t x1648 = 28;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = (x1645+(x1646>>(x1647+x1648)));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x1725 = INT8_MIN;
	int32_t x1726 = 588450;
	int32_t x1727 = -1;
	uint16_t x1728 = 7U;
	static volatile int32_t t18 = -11;

    t18 = (x1725+(x1726>>(x1727+x1728)));

    if (t18 != 9066) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1733 = -91;
	int16_t x1734 = INT16_MAX;
	volatile uint8_t x1735 = 2U;
	static uint16_t x1736 = 12U;
	volatile int32_t t19 = -369789308;

    t19 = (x1733+(x1734>>(x1735+x1736)));

    if (t19 != -90) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1753 = -1;
	int8_t x1755 = 3;
	static int64_t t20 = -486731424490577388LL;

    t20 = (x1753+(x1754>>(x1755+x1756)));

    if (t20 != 2305843009213693950LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1758 = INT64_MAX;
	static int8_t x1759 = -1;
	int64_t t21 = -1LL;

    t21 = (x1757+(x1758>>(x1759+x1760)));

    if (t21 != 4611686018427388026LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1777 = INT32_MIN;
	int32_t x1779 = -1;
	static volatile int8_t x1780 = 6;
	volatile uint32_t t22 = 1U;

    t22 = (x1777+(x1778>>(x1779+x1780)));

    if (t22 != 2147484323U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x1873 = -3;
	uint64_t x1874 = UINT64_MAX;
	int16_t x1875 = -1;
	uint64_t t23 = 433549LLU;

    t23 = (x1873+(x1874>>(x1875+x1876)));

    if (t23 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x2089 = 3127712960LLU;
	volatile uint32_t x2090 = 534518730U;
	static volatile int8_t x2091 = -1;
	int8_t x2092 = 20;
	volatile uint64_t t24 = 392110230369259061LLU;

    t24 = (x2089+(x2090>>(x2091+x2092)));

    if (t24 != 3127713979LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x2337 = 3U;
	int16_t x2338 = 126;
	uint8_t x2339 = 1U;
	volatile uint32_t x2340 = 2U;
	volatile uint32_t t25 = 14U;

    t25 = (x2337+(x2338>>(x2339+x2340)));

    if (t25 != 18U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2345 = -1;
	uint32_t x2346 = 25089U;
	int8_t x2347 = 3;
	int64_t x2348 = -1LL;
	volatile uint32_t t26 = 7486U;

    t26 = (x2345+(x2346>>(x2347+x2348)));

    if (t26 != 6271U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x2417 = INT8_MIN;
	int16_t x2419 = 0;
	uint8_t x2420 = 17U;

    t27 = (x2417+(x2418>>(x2419+x2420)));

    if (t27 != 9521LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x2429 = 23U;
	int32_t x2430 = 28686;
	volatile uint8_t x2431 = 21U;
	int64_t x2432 = -1LL;
	volatile uint32_t t28 = 357993U;

    t28 = (x2429+(x2430>>(x2431+x2432)));

    if (t28 != 23U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x2521 = -1;
	int16_t x2522 = 3064;
	uint8_t x2523 = 3U;
	static int32_t x2524 = -1;
	static volatile int32_t t29 = -31534211;

    t29 = (x2521+(x2522>>(x2523+x2524)));

    if (t29 != 765) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x2630 = INT16_MAX;
	uint8_t x2632 = 18U;

    t30 = (x2629+(x2630>>(x2631+x2632)));

    if (t30 != -2147483633) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2697 = INT8_MIN;
	volatile uint8_t x2698 = 93U;
	int16_t x2699 = -1;
	static volatile int16_t x2700 = 25;
	int32_t t31 = -6;

    t31 = (x2697+(x2698>>(x2699+x2700)));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2745 = INT8_MAX;
	int8_t x2747 = -1;
	uint8_t x2748 = 9U;

    t32 = (x2745+(x2746>>(x2747+x2748)));

    if (t32 != 176) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x2761 = 515U;
	int64_t x2762 = INT64_MAX;
	volatile int16_t x2763 = -1;
	static int8_t x2764 = 4;
	static volatile int64_t t33 = 7424168640LL;

    t33 = (x2761+(x2762>>(x2763+x2764)));

    if (t33 != 1152921504606847490LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x2889 = INT64_MIN;
	uint64_t x2890 = 699280514505LLU;
	int8_t x2892 = -7;
	volatile uint64_t t34 = 9021921LLU;

    t34 = (x2889+(x2890>>(x2891+x2892)));

    if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x3177 = 531886446LL;
	int16_t x3179 = 1;
	int32_t x3180 = -1;
	volatile int64_t t35 = 95598LL;

    t35 = (x3177+(x3178>>(x3179+x3180)));

    if (t35 != 531889134LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x3341 = UINT64_MAX;
	uint64_t x3342 = 68LLU;
	int64_t x3344 = -1LL;

    t36 = (x3341+(x3342>>(x3343+x3344)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x3473 = INT64_MIN;
	uint16_t x3474 = UINT16_MAX;
	uint32_t x3475 = UINT32_MAX;
	volatile uint8_t x3476 = 17U;
	int64_t t37 = INT64_MIN;

    t37 = (x3473+(x3474>>(x3475+x3476)));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x3505 = -1208816;
	int8_t x3506 = INT8_MAX;
	volatile int16_t x3507 = -1;
	int32_t t38 = -8976236;

    t38 = (x3505+(x3506>>(x3507+x3508)));

    if (t38 != -1208815) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x3677 = INT64_MIN;
	volatile uint64_t t39 = 1707626044LLU;

    t39 = (x3677+(x3678>>(x3679+x3680)));

    if (t39 != 9223372054034644991LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x3715 = -1;
	int32_t x3716 = 3;
	int32_t t40 = 4;

    t40 = (x3713+(x3714>>(x3715+x3716)));

    if (t40 != -2147483646) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3725 = INT16_MIN;
	static int64_t x3726 = 44786682386LL;
	static uint32_t x3727 = 15U;
	uint16_t x3728 = 20U;
	volatile int64_t t41 = 1LL;

    t41 = (x3725+(x3726>>(x3727+x3728)));

    if (t41 != -32767LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x3985 = 502LLU;
	int16_t x3986 = 7635;
	int32_t x3987 = -1;
	int8_t x3988 = 1;
	static uint64_t t42 = 683786682LLU;

    t42 = (x3985+(x3986>>(x3987+x3988)));

    if (t42 != 8137LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x4133 = INT32_MIN;
	volatile uint8_t x4134 = UINT8_MAX;
	int8_t x4135 = 13;
	int8_t x4136 = 12;
	int32_t t43 = INT32_MIN;

    t43 = (x4133+(x4134>>(x4135+x4136)));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x4157 = 604535864509442LL;
	uint32_t x4158 = UINT32_MAX;
	volatile int64_t x4159 = -1LL;
	static int8_t x4160 = 17;
	static volatile int64_t t44 = 64782LL;

    t44 = (x4157+(x4158>>(x4159+x4160)));

    if (t44 != 604535864574977LL) { NG(); } else { ; }
	
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


    return 0;
}

