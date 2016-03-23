
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

int16_t x1 = INT16_MAX;
int32_t x2 = -1;
uint8_t x3 = 3U;
static int32_t x4 = -1;
int32_t t0 = 1;
static uint16_t x68 = 133U;
volatile uint16_t x165 = 0U;
volatile uint64_t x168 = UINT64_MAX;
int32_t t4 = 7330;
int32_t x492 = 81;
int16_t x672 = INT16_MIN;
int32_t x726 = -1;
int8_t x730 = -1;
uint32_t x757 = 5225360U;
int64_t x761 = INT64_MAX;
static volatile int32_t x763 = -1;
static int8_t x842 = -1;
int8_t x1025 = INT8_MAX;
static int32_t x1026 = -1;
volatile int32_t t16 = 24;
uint32_t x1053 = 1259353886U;
int32_t x1198 = -1;
int32_t x1291 = -1;
int16_t x1378 = -1;
int8_t x1441 = -11;
int16_t x1484 = -1;
uint64_t x1497 = 1090LLU;
volatile uint64_t x1544 = UINT64_MAX;
uint32_t x1730 = UINT32_MAX;
volatile uint64_t x1829 = 1LLU;
int32_t x1901 = INT32_MIN;
int8_t x1902 = -1;
volatile uint32_t t31 = 112U;
int8_t x2237 = INT8_MIN;
uint32_t x2249 = UINT32_MAX;
int32_t t35 = 0;
int8_t x2527 = -1;
volatile int32_t t37 = 9;
int64_t x2539 = INT64_MAX;
static int32_t x2607 = -1583;
int16_t x2647 = -1;
static int8_t x2689 = -2;
int64_t x2692 = -1LL;
volatile uint32_t x2861 = 325074715U;
volatile uint32_t t47 = 137685438U;
static volatile int32_t t49 = -20;
int64_t x2969 = INT64_MIN;
int32_t x2998 = INT32_MIN;
int16_t x3187 = -1;
static uint64_t t57 = 95922519412226780LLU;
static int64_t t58 = 3490965049LL;
int16_t x3361 = -15;
uint64_t x3460 = UINT64_MAX;
volatile uint16_t x3608 = UINT16_MAX;
volatile int64_t x3649 = INT64_MIN;
int64_t x3650 = -1LL;
volatile int8_t x3683 = INT8_MIN;
int16_t x3882 = -1;
uint8_t x3883 = UINT8_MAX;
volatile uint64_t x4073 = UINT64_MAX;
volatile int8_t x4076 = -1;
volatile uint64_t t71 = 4133312974153074192LLU;
static int64_t x4116 = -1LL;
volatile int32_t t74 = 7350;
int16_t x4287 = -1;
int32_t t75 = -110610;
int16_t x4326 = -1;
static int32_t t77 = -33206420;
int16_t x4472 = 0;
int16_t x4698 = -1;
int32_t x4699 = INT32_MAX;
static int8_t x4707 = -1;
uint8_t x4708 = 105U;
static int32_t x4869 = -2065319;
volatile int64_t x4989 = -1LL;
int8_t x5063 = -1;
int32_t x5250 = -1;
uint8_t x5413 = UINT8_MAX;
static int64_t x5414 = -1LL;
volatile uint8_t x5437 = UINT8_MAX;
int8_t x5508 = INT8_MAX;
int8_t x5535 = INT8_MAX;
int64_t t99 = 0LL;
int32_t x5712 = -19355;
uint64_t x5892 = 34LLU;
volatile int32_t t102 = -11392;
static int64_t x5922 = -1LL;
static int8_t x5953 = INT8_MIN;
int32_t x5954 = -1;
volatile int32_t t105 = -210;
int32_t x6033 = INT32_MAX;
int8_t x6035 = INT8_MIN;
volatile int64_t t108 = 342867669242778225LL;


void f0(void) {
    

    t0 = (x1%(x2==(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x65 = 2U;
	int32_t x66 = -1;
	int32_t x67 = -1;
	volatile int32_t t1 = 102129740;

    t1 = (x65%(x66==(x67|x68)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x129 = 5U;
	volatile uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MIN;
	volatile int8_t x132 = -1;
	int32_t t2 = 6;

    t2 = (x129%(x130==(x131|x132)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	int32_t t3 = 7858;

    t3 = (x145%(x146==(x147|x148)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x166 = -1;
	static uint32_t x167 = 884109U;

    t4 = (x165%(x166==(x167|x168)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x357 = -1;
	volatile uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MAX;
	int8_t x360 = INT8_MIN;
	static int32_t t5 = -150339;

    t5 = (x357%(x358==(x359|x360)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x425 = INT64_MAX;
	uint32_t x426 = UINT32_MAX;
	static volatile int16_t x427 = -1;
	int8_t x428 = -1;
	int64_t t6 = -793052622LL;

    t6 = (x425%(x426==(x427|x428)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x437 = INT8_MAX;
	int64_t x438 = -1LL;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = -1;
	int32_t t7 = 3;

    t7 = (x437%(x438==(x439|x440)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x489 = UINT16_MAX;
	static int8_t x490 = -1;
	static int16_t x491 = -2;
	static int32_t t8 = -209632;

    t8 = (x489%(x490==(x491|x492)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x669 = UINT8_MAX;
	static uint64_t x670 = UINT64_MAX;
	int16_t x671 = -1;
	int32_t t9 = -73521011;

    t9 = (x669%(x670==(x671|x672)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x725 = 18;
	int16_t x727 = -1;
	int64_t x728 = -1LL;
	volatile int32_t t10 = 0;

    t10 = (x725%(x726==(x727|x728)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x729 = 1U;
	volatile uint32_t x731 = UINT32_MAX;
	int16_t x732 = INT16_MIN;
	int32_t t11 = 4144534;

    t11 = (x729%(x730==(x731|x732)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x758 = -1;
	uint16_t x759 = 1U;
	int16_t x760 = -1;
	volatile uint32_t t12 = 43047107U;

    t12 = (x757%(x758==(x759|x760)));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x762 = -1;
	int32_t x764 = -1;
	static int64_t t13 = 854994122LL;

    t13 = (x761%(x762==(x763|x764)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x841 = INT32_MAX;
	int64_t x843 = 0LL;
	int64_t x844 = -1LL;
	int32_t t14 = 1039;

    t14 = (x841%(x842==(x843|x844)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x965 = INT16_MIN;
	uint32_t x966 = UINT32_MAX;
	int8_t x967 = INT8_MIN;
	volatile int8_t x968 = -1;
	int32_t t15 = 1577;

    t15 = (x965%(x966==(x967|x968)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1027 = -1;
	volatile uint16_t x1028 = 173U;

    t16 = (x1025%(x1026==(x1027|x1028)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1054 = -1LL;
	int8_t x1055 = -1;
	static uint16_t x1056 = UINT16_MAX;
	volatile uint32_t t17 = 69U;

    t17 = (x1053%(x1054==(x1055|x1056)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1173 = UINT64_MAX;
	int32_t x1174 = -1;
	uint64_t x1175 = UINT64_MAX;
	uint32_t x1176 = 118250U;
	volatile uint64_t t18 = 10LLU;

    t18 = (x1173%(x1174==(x1175|x1176)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1197 = 126U;
	volatile int32_t x1199 = -507270293;
	int32_t x1200 = -1;
	int32_t t19 = 8867;

    t19 = (x1197%(x1198==(x1199|x1200)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1289 = INT32_MIN;
	static uint32_t x1290 = UINT32_MAX;
	uint16_t x1292 = 16247U;
	volatile int32_t t20 = 85;

    t20 = (x1289%(x1290==(x1291|x1292)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x1305 = INT16_MAX;
	int16_t x1306 = -1;
	int32_t x1307 = INT32_MAX;
	volatile int16_t x1308 = INT16_MIN;
	static int32_t t21 = -10727;

    t21 = (x1305%(x1306==(x1307|x1308)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x1341 = 758U;
	int8_t x1342 = -1;
	volatile int32_t x1343 = -1;
	int16_t x1344 = INT16_MAX;
	static uint32_t t22 = 785U;

    t22 = (x1341%(x1342==(x1343|x1344)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1377 = UINT64_MAX;
	int32_t x1379 = -242;
	int16_t x1380 = -1;
	uint64_t t23 = 3208675344593123LLU;

    t23 = (x1377%(x1378==(x1379|x1380)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1442 = -1;
	int8_t x1443 = -17;
	int8_t x1444 = INT8_MAX;
	volatile int32_t t24 = -7236;

    t24 = (x1441%(x1442==(x1443|x1444)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x1481 = 86366LLU;
	int16_t x1482 = -1;
	int16_t x1483 = -1;
	volatile uint64_t t25 = 8076LLU;

    t25 = (x1481%(x1482==(x1483|x1484)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1498 = UINT64_MAX;
	volatile uint64_t x1499 = UINT64_MAX;
	volatile int16_t x1500 = 93;
	uint64_t t26 = 4792073LLU;

    t26 = (x1497%(x1498==(x1499|x1500)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x1541 = INT16_MIN;
	static int32_t x1542 = -1;
	uint64_t x1543 = 14481874LLU;
	int32_t t27 = -464682;

    t27 = (x1541%(x1542==(x1543|x1544)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1729 = INT16_MIN;
	uint16_t x1731 = 417U;
	int32_t x1732 = -1;
	volatile int32_t t28 = -367837;

    t28 = (x1729%(x1730==(x1731|x1732)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x1830 = -1;
	int32_t x1831 = INT32_MIN;
	int32_t x1832 = -1;
	volatile uint64_t t29 = 936100381LLU;

    t29 = (x1829%(x1830==(x1831|x1832)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1903 = INT16_MAX;
	int32_t x1904 = -1;
	volatile int32_t t30 = -68998;

    t30 = (x1901%(x1902==(x1903|x1904)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x1929 = 7316175U;
	int8_t x1930 = -1;
	int8_t x1931 = INT8_MAX;
	uint32_t x1932 = UINT32_MAX;

    t31 = (x1929%(x1930==(x1931|x1932)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x2238 = -1LL;
	int8_t x2239 = -1;
	uint16_t x2240 = 27U;
	volatile int32_t t32 = 371478704;

    t32 = (x2237%(x2238==(x2239|x2240)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2250 = -1LL;
	volatile int32_t x2251 = INT32_MAX;
	volatile int32_t x2252 = INT32_MIN;
	static uint32_t t33 = 2103898704U;

    t33 = (x2249%(x2250==(x2251|x2252)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x2345 = INT16_MAX;
	int64_t x2346 = -1LL;
	volatile int16_t x2347 = INT16_MIN;
	volatile int64_t x2348 = -1LL;
	static int32_t t34 = -306;

    t34 = (x2345%(x2346==(x2347|x2348)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2461 = -3;
	int8_t x2462 = INT8_MIN;
	int32_t x2463 = 0;
	static volatile int8_t x2464 = INT8_MIN;

    t35 = (x2461%(x2462==(x2463|x2464)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2521 = 56U;
	int16_t x2522 = -1;
	int8_t x2523 = INT8_MIN;
	static int16_t x2524 = -1;
	volatile uint32_t t36 = 5950U;

    t36 = (x2521%(x2522==(x2523|x2524)));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x2525 = 11U;
	volatile int64_t x2526 = -1LL;
	uint16_t x2528 = UINT16_MAX;

    t37 = (x2525%(x2526==(x2527|x2528)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2537 = 3;
	int16_t x2538 = -1;
	int64_t x2540 = INT64_MIN;
	int32_t t38 = -286;

    t38 = (x2537%(x2538==(x2539|x2540)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x2597 = UINT64_MAX;
	int64_t x2598 = -1LL;
	int8_t x2599 = INT8_MIN;
	uint8_t x2600 = UINT8_MAX;
	static volatile uint64_t t39 = 3727LLU;

    t39 = (x2597%(x2598==(x2599|x2600)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2605 = 3;
	volatile int32_t x2606 = -1;
	static int32_t x2608 = INT32_MAX;
	int32_t t40 = -15;

    t40 = (x2605%(x2606==(x2607|x2608)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2609 = INT8_MIN;
	uint64_t x2610 = UINT64_MAX;
	volatile int16_t x2611 = INT16_MIN;
	static int32_t x2612 = INT32_MAX;
	int32_t t41 = 568043;

    t41 = (x2609%(x2610==(x2611|x2612)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x2645 = -13LL;
	volatile uint64_t x2646 = UINT64_MAX;
	int8_t x2648 = -1;
	static int64_t t42 = 2401189LL;

    t42 = (x2645%(x2646==(x2647|x2648)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2681 = 24;
	int16_t x2682 = -1;
	volatile int16_t x2683 = -709;
	static int32_t x2684 = -1;
	volatile int32_t t43 = 30509;

    t43 = (x2681%(x2682==(x2683|x2684)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2690 = UINT64_MAX;
	int32_t x2691 = -20;
	static volatile int32_t t44 = -129550;

    t44 = (x2689%(x2690==(x2691|x2692)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x2757 = 210442457159640LLU;
	int32_t x2758 = -1;
	static int64_t x2759 = INT64_MAX;
	int64_t x2760 = -1LL;
	uint64_t t45 = 4023841000738675LLU;

    t45 = (x2757%(x2758==(x2759|x2760)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2801 = INT8_MAX;
	uint64_t x2802 = UINT64_MAX;
	static int64_t x2803 = INT64_MAX;
	volatile int32_t x2804 = -3397542;
	volatile int32_t t46 = -295;

    t46 = (x2801%(x2802==(x2803|x2804)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2862 = -1;
	static int8_t x2863 = INT8_MIN;
	int16_t x2864 = INT16_MAX;

    t47 = (x2861%(x2862==(x2863|x2864)));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x2865 = INT8_MIN;
	int8_t x2866 = -1;
	int8_t x2867 = 39;
	volatile uint32_t x2868 = UINT32_MAX;
	int32_t t48 = -49373806;

    t48 = (x2865%(x2866==(x2867|x2868)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x2869 = INT32_MIN;
	volatile int32_t x2870 = -1;
	int64_t x2871 = -1LL;
	uint16_t x2872 = UINT16_MAX;

    t49 = (x2869%(x2870==(x2871|x2872)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2873 = -330585;
	uint64_t x2874 = UINT64_MAX;
	static volatile int8_t x2875 = INT8_MAX;
	volatile int32_t x2876 = -1;
	int32_t t50 = 25;

    t50 = (x2873%(x2874==(x2875|x2876)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x2953 = 10U;
	int8_t x2954 = -1;
	volatile uint64_t x2955 = UINT64_MAX;
	static uint16_t x2956 = UINT16_MAX;
	int32_t t51 = -413172;

    t51 = (x2953%(x2954==(x2955|x2956)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2970 = -1;
	int16_t x2971 = -1;
	int32_t x2972 = INT32_MIN;
	volatile int64_t t52 = 147984LL;

    t52 = (x2969%(x2970==(x2971|x2972)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2997 = INT16_MIN;
	int32_t x2999 = INT32_MIN;
	int64_t x3000 = INT64_MIN;
	static int32_t t53 = 155507831;

    t53 = (x2997%(x2998==(x2999|x3000)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3061 = INT8_MAX;
	volatile int64_t x3062 = -1LL;
	int32_t x3063 = INT32_MIN;
	volatile int32_t x3064 = INT32_MAX;
	int32_t t54 = 3902;

    t54 = (x3061%(x3062==(x3063|x3064)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x3169 = 32U;
	uint16_t x3170 = UINT16_MAX;
	volatile uint16_t x3171 = UINT16_MAX;
	uint16_t x3172 = UINT16_MAX;
	volatile int32_t t55 = -244651388;

    t55 = (x3169%(x3170==(x3171|x3172)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3185 = INT16_MAX;
	int32_t x3186 = -1;
	static int64_t x3188 = -1LL;
	static int32_t t56 = 17;

    t56 = (x3185%(x3186==(x3187|x3188)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x3189 = 123191227703766LLU;
	static int32_t x3190 = -1;
	uint16_t x3191 = UINT16_MAX;
	uint64_t x3192 = UINT64_MAX;

    t57 = (x3189%(x3190==(x3191|x3192)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x3197 = -1LL;
	int32_t x3198 = -1;
	static volatile uint64_t x3199 = UINT64_MAX;
	uint32_t x3200 = UINT32_MAX;

    t58 = (x3197%(x3198==(x3199|x3200)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x3309 = 26U;
	volatile uint32_t x3310 = UINT32_MAX;
	uint16_t x3311 = UINT16_MAX;
	int16_t x3312 = INT16_MIN;
	int32_t t59 = -16877398;

    t59 = (x3309%(x3310==(x3311|x3312)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3362 = -1;
	volatile int16_t x3363 = INT16_MAX;
	int8_t x3364 = -6;
	volatile int32_t t60 = -113430;

    t60 = (x3361%(x3362==(x3363|x3364)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x3393 = INT64_MIN;
	int8_t x3394 = -1;
	int8_t x3395 = INT8_MIN;
	uint8_t x3396 = UINT8_MAX;
	volatile int64_t t61 = 49152LL;

    t61 = (x3393%(x3394==(x3395|x3396)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x3457 = 6U;
	uint64_t x3458 = UINT64_MAX;
	uint16_t x3459 = UINT16_MAX;
	static volatile int32_t t62 = 321235025;

    t62 = (x3457%(x3458==(x3459|x3460)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x3561 = 7;
	volatile int32_t x3562 = -1;
	volatile int8_t x3563 = INT8_MIN;
	uint64_t x3564 = UINT64_MAX;
	int32_t t63 = 433223000;

    t63 = (x3561%(x3562==(x3563|x3564)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x3605 = 40958147925790311LL;
	int8_t x3606 = -1;
	int8_t x3607 = -1;
	volatile int64_t t64 = -828595923564113471LL;

    t64 = (x3605%(x3606==(x3607|x3608)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x3651 = -1LL;
	int32_t x3652 = -13484910;
	static int64_t t65 = -5469673602337368LL;

    t65 = (x3649%(x3650==(x3651|x3652)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3681 = INT64_MIN;
	int16_t x3682 = -1;
	uint32_t x3684 = UINT32_MAX;
	volatile int64_t t66 = 186655245LL;

    t66 = (x3681%(x3682==(x3683|x3684)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3881 = INT8_MAX;
	static volatile int8_t x3884 = INT8_MIN;
	int32_t t67 = -1;

    t67 = (x3881%(x3882==(x3883|x3884)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3945 = UINT16_MAX;
	static int32_t x3946 = -1;
	volatile int8_t x3947 = -1;
	uint64_t x3948 = 146187LLU;
	static volatile int32_t t68 = -45;

    t68 = (x3945%(x3946==(x3947|x3948)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x3981 = UINT8_MAX;
	static int8_t x3982 = -1;
	static int8_t x3983 = 1;
	int64_t x3984 = -1LL;
	int32_t t69 = 2980299;

    t69 = (x3981%(x3982==(x3983|x3984)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x4017 = 15440U;
	int8_t x4018 = -1;
	uint16_t x4019 = UINT16_MAX;
	static int64_t x4020 = -1LL;
	volatile int32_t t70 = -15;

    t70 = (x4017%(x4018==(x4019|x4020)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x4074 = -1;
	volatile int64_t x4075 = INT64_MAX;

    t71 = (x4073%(x4074==(x4075|x4076)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x4089 = -1;
	static int8_t x4090 = -1;
	uint64_t x4091 = UINT64_MAX;
	volatile int64_t x4092 = 3145244887206292843LL;
	static volatile int32_t t72 = -47563020;

    t72 = (x4089%(x4090==(x4091|x4092)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x4113 = -254851LL;
	int64_t x4114 = -1LL;
	int64_t x4115 = -87LL;
	int64_t t73 = -397775662LL;

    t73 = (x4113%(x4114==(x4115|x4116)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x4149 = INT16_MAX;
	volatile int32_t x4150 = INT32_MAX;
	int32_t x4151 = INT32_MAX;
	int8_t x4152 = 1;

    t74 = (x4149%(x4150==(x4151|x4152)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4285 = INT8_MAX;
	volatile int16_t x4286 = -1;
	uint32_t x4288 = UINT32_MAX;

    t75 = (x4285%(x4286==(x4287|x4288)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x4325 = -1005;
	static uint64_t x4327 = UINT64_MAX;
	int16_t x4328 = INT16_MIN;
	volatile int32_t t76 = -3588;

    t76 = (x4325%(x4326==(x4327|x4328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x4361 = INT16_MAX;
	static volatile int32_t x4362 = -1;
	uint64_t x4363 = UINT64_MAX;
	volatile int16_t x4364 = 308;

    t77 = (x4361%(x4362==(x4363|x4364)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x4409 = -1;
	static volatile uint32_t x4410 = UINT32_MAX;
	int16_t x4411 = INT16_MIN;
	static int16_t x4412 = INT16_MAX;
	volatile int32_t t78 = -12410160;

    t78 = (x4409%(x4410==(x4411|x4412)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x4469 = 69711539231385908LL;
	int32_t x4470 = INT32_MIN;
	int32_t x4471 = INT32_MIN;
	volatile int64_t t79 = -19139746552866LL;

    t79 = (x4469%(x4470==(x4471|x4472)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x4529 = INT64_MIN;
	static int8_t x4530 = -1;
	int64_t x4531 = -1LL;
	int32_t x4532 = -1;
	volatile int64_t t80 = -1LL;

    t80 = (x4529%(x4530==(x4531|x4532)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x4697 = 7;
	int8_t x4700 = INT8_MIN;
	int32_t t81 = -229095;

    t81 = (x4697%(x4698==(x4699|x4700)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x4705 = INT64_MIN;
	uint32_t x4706 = UINT32_MAX;
	static volatile int64_t t82 = 217083328LL;

    t82 = (x4705%(x4706==(x4707|x4708)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4870 = -1;
	int8_t x4871 = -1;
	int16_t x4872 = 39;
	int32_t t83 = 6959;

    t83 = (x4869%(x4870==(x4871|x4872)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x4990 = -1;
	int16_t x4991 = -1;
	volatile int8_t x4992 = INT8_MIN;
	volatile int64_t t84 = -2592264146320011242LL;

    t84 = (x4989%(x4990==(x4991|x4992)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x5061 = -22;
	static volatile int16_t x5062 = -1;
	int16_t x5064 = INT16_MIN;
	int32_t t85 = 787614841;

    t85 = (x5061%(x5062==(x5063|x5064)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x5069 = UINT64_MAX;
	int64_t x5070 = -1LL;
	static volatile int16_t x5071 = INT16_MIN;
	int16_t x5072 = -1;
	static volatile uint64_t t86 = 639456895830251858LLU;

    t86 = (x5069%(x5070==(x5071|x5072)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x5209 = -1LL;
	int32_t x5210 = -1;
	int32_t x5211 = -1;
	static volatile int64_t x5212 = -1LL;
	static volatile int64_t t87 = -127LL;

    t87 = (x5209%(x5210==(x5211|x5212)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x5233 = INT64_MIN;
	static uint64_t x5234 = UINT64_MAX;
	volatile int8_t x5235 = INT8_MIN;
	volatile uint8_t x5236 = UINT8_MAX;
	int64_t t88 = 190616951LL;

    t88 = (x5233%(x5234==(x5235|x5236)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x5249 = INT16_MAX;
	volatile uint16_t x5251 = 6201U;
	volatile int16_t x5252 = -1;
	int32_t t89 = -28564;

    t89 = (x5249%(x5250==(x5251|x5252)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x5365 = -1523LL;
	volatile uint64_t x5366 = UINT64_MAX;
	volatile int8_t x5367 = INT8_MAX;
	int8_t x5368 = INT8_MIN;
	static int64_t t90 = -162618LL;

    t90 = (x5365%(x5366==(x5367|x5368)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5415 = -1;
	static volatile int32_t x5416 = -1;
	volatile int32_t t91 = 17;

    t91 = (x5413%(x5414==(x5415|x5416)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x5421 = -1;
	static int64_t x5422 = -1LL;
	int32_t x5423 = -1;
	int32_t x5424 = -1;
	static int32_t t92 = -182646;

    t92 = (x5421%(x5422==(x5423|x5424)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x5438 = UINT32_MAX;
	int8_t x5439 = -9;
	volatile int32_t x5440 = INT32_MAX;
	int32_t t93 = -493;

    t93 = (x5437%(x5438==(x5439|x5440)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x5457 = 24U;
	int64_t x5458 = -1LL;
	uint64_t x5459 = UINT64_MAX;
	uint32_t x5460 = 1017655U;
	static uint32_t t94 = 2124372495U;

    t94 = (x5457%(x5458==(x5459|x5460)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x5465 = UINT16_MAX;
	volatile int32_t x5466 = -1;
	uint32_t x5467 = UINT32_MAX;
	static int32_t x5468 = INT32_MIN;
	int32_t t95 = -120;

    t95 = (x5465%(x5466==(x5467|x5468)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x5505 = INT16_MIN;
	uint64_t x5506 = UINT64_MAX;
	uint64_t x5507 = UINT64_MAX;
	static int32_t t96 = 1518676;

    t96 = (x5505%(x5506==(x5507|x5508)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x5521 = 111U;
	uint16_t x5522 = UINT16_MAX;
	int16_t x5523 = 0;
	static volatile uint16_t x5524 = UINT16_MAX;
	volatile int32_t t97 = -19;

    t97 = (x5521%(x5522==(x5523|x5524)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x5533 = -131615485568783907LL;
	int16_t x5534 = -1;
	static int16_t x5536 = -1;
	int64_t t98 = -394185056LL;

    t98 = (x5533%(x5534==(x5535|x5536)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x5553 = -1806009326LL;
	int64_t x5554 = -1LL;
	static int32_t x5555 = -1;
	int32_t x5556 = INT32_MIN;

    t99 = (x5553%(x5554==(x5555|x5556)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5653 = 0U;
	volatile int32_t x5654 = -1;
	int32_t x5655 = INT32_MIN;
	static volatile uint64_t x5656 = UINT64_MAX;
	volatile int32_t t100 = 262;

    t100 = (x5653%(x5654==(x5655|x5656)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x5709 = INT32_MIN;
	static volatile uint32_t x5710 = UINT32_MAX;
	int8_t x5711 = -5;
	volatile int32_t t101 = 25201631;

    t101 = (x5709%(x5710==(x5711|x5712)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x5889 = 1U;
	uint64_t x5890 = UINT64_MAX;
	uint64_t x5891 = UINT64_MAX;

    t102 = (x5889%(x5890==(x5891|x5892)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x5901 = 6U;
	volatile int16_t x5902 = -1;
	static int16_t x5903 = INT16_MIN;
	volatile int16_t x5904 = -1;
	volatile int32_t t103 = -171409620;

    t103 = (x5901%(x5902==(x5903|x5904)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x5921 = -1;
	int16_t x5923 = -1;
	volatile int8_t x5924 = INT8_MIN;
	int32_t t104 = 2883;

    t104 = (x5921%(x5922==(x5923|x5924)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x5955 = UINT8_MAX;
	int8_t x5956 = -7;

    t105 = (x5953%(x5954==(x5955|x5956)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x6034 = INT8_MIN;
	int8_t x6036 = INT8_MIN;
	int32_t t106 = -1976378;

    t106 = (x6033%(x6034==(x6035|x6036)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x6061 = INT64_MIN;
	uint64_t x6062 = UINT64_MAX;
	int8_t x6063 = -1;
	int64_t x6064 = INT64_MIN;
	volatile int64_t t107 = 24LL;

    t107 = (x6061%(x6062==(x6063|x6064)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x6065 = INT64_MIN;
	int16_t x6066 = -1;
	static int8_t x6067 = INT8_MAX;
	volatile int8_t x6068 = INT8_MIN;

    t108 = (x6065%(x6066==(x6067|x6068)));

    if (t108 != 0LL) { NG(); } else { ; }
	
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
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();


    return 0;
}

