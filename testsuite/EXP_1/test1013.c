
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

volatile int32_t t1 = 0;
int16_t x501 = INT16_MAX;
uint64_t t4 = 9215051955055673LLU;
int8_t x857 = INT8_MAX;
int8_t x858 = 9;
volatile int32_t x879 = -2;
uint32_t x889 = UINT32_MAX;
int16_t x892 = INT16_MIN;
static int16_t x1117 = 191;
volatile uint32_t t11 = 185915U;
uint64_t x1231 = UINT64_MAX;
uint64_t t12 = 216302266047223LLU;
uint8_t x1306 = 14U;
static volatile uint32_t x1654 = 4U;
volatile int32_t t18 = 1056917;
int32_t x1938 = 2;
int16_t x1940 = 798;
int8_t x2046 = 3;
volatile uint32_t x2157 = UINT32_MAX;
int64_t x2320 = -1LL;
static int64_t t23 = -609384591LL;
static int16_t x2333 = 403;
int8_t x2335 = INT8_MAX;
static volatile int64_t t24 = 59LL;
static int32_t x2515 = INT32_MIN;
static int16_t x2516 = -14;
static uint32_t t28 = 58527101U;
uint64_t x2795 = 267117LLU;
static volatile uint64_t t29 = 98365767053096LLU;
volatile int16_t x2827 = -1415;
uint64_t x2906 = 0LLU;
volatile uint64_t t33 = 345LLU;
uint8_t x3090 = 18U;
static int64_t t34 = 2669975LL;
int16_t x3163 = 1627;
int32_t x3290 = 0;
uint8_t x3514 = 8U;
volatile uint32_t x3515 = 62U;
volatile int16_t x3656 = -1;
int8_t x3781 = 23;
uint16_t x3799 = 48U;
uint8_t x4174 = 24U;
uint64_t x4353 = 14075924454334LLU;
int16_t x4355 = INT16_MIN;
uint32_t x4389 = UINT32_MAX;
volatile uint64_t x4485 = 39445LLU;
volatile uint32_t x4488 = UINT32_MAX;
int32_t t49 = -3;
uint8_t x4650 = 20U;
uint64_t x4665 = 55996002610114524LLU;
static uint16_t x4666 = 3U;
volatile uint64_t t51 = 112039122LLU;
static uint16_t x4711 = UINT16_MAX;
static uint64_t x4767 = 413876058886463LLU;
uint32_t x4805 = 22204U;
static uint8_t x4838 = 0U;
uint32_t x4854 = 24U;
int16_t x4855 = INT16_MAX;
int8_t x4878 = 0;
int8_t x4982 = 0;
uint8_t x5026 = 5U;
static volatile uint16_t x5027 = 2114U;
volatile uint64_t t59 = 823949157LLU;
volatile uint16_t x5109 = 0U;
uint32_t x5111 = 802525U;
volatile int16_t x5149 = 66;
uint32_t x5152 = UINT32_MAX;
uint32_t x5293 = UINT32_MAX;
int32_t x5295 = INT32_MIN;
static int16_t x5378 = 0;
volatile int16_t x5696 = -1;
volatile int64_t t69 = 1093211370182417LL;
int32_t x5704 = INT32_MIN;
volatile int32_t t70 = 2976;
int64_t x5720 = -13LL;
static int64_t t71 = 161725710267832573LL;
int32_t x6067 = INT32_MAX;
int64_t x6068 = -1LL;
int16_t x6072 = INT16_MIN;
uint64_t x6345 = UINT64_MAX;
uint32_t x6485 = 10292662U;
int64_t x6487 = -1LL;
uint32_t x6561 = UINT32_MAX;
volatile int8_t x6563 = -1;
static volatile uint32_t x6631 = 2783942U;
uint8_t x6690 = 10U;
uint32_t t83 = 189058U;
int16_t x6737 = 0;
int8_t x6738 = 31;
int64_t x6752 = -1LL;
static volatile uint64_t x6944 = 7500LLU;
int32_t x7081 = 3811;
uint32_t x7083 = 26U;
uint64_t t88 = 990738457LLU;
volatile int16_t x7170 = 0;
int32_t x7172 = INT32_MIN;
int8_t x7222 = 13;
static uint64_t t91 = 2744363534LLU;
uint32_t t93 = 49961U;
uint64_t t94 = 98409063LLU;
int16_t x7398 = 1;
int64_t x7416 = INT64_MIN;
static int32_t x7440 = INT32_MIN;
int64_t x7631 = -1LL;
uint32_t x7696 = 283213U;
volatile uint64_t t100 = 10499249411566LLU;
uint64_t x7725 = 3LLU;
volatile uint32_t t103 = 49772U;
int64_t x7892 = -103166055546LL;
uint64_t x7909 = 11609555797490291LLU;
uint8_t x7910 = 41U;
int32_t x7911 = INT32_MAX;
int8_t x8004 = INT8_MIN;
volatile uint16_t x8052 = UINT16_MAX;
static uint64_t t109 = 8144118511935923272LLU;


void f0(void) {
    	uint32_t x225 = 14660U;
	uint8_t x226 = 26U;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 305U;
	static uint32_t t0 = 1U;

    t0 = (((x225<<x226)*x227)%x228);

    if (t0 != 225U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x453 = 6U;
	static uint8_t x454 = 13U;
	uint16_t x455 = 6914U;
	volatile uint16_t x456 = 2609U;

    t1 = (((x453<<x454)*x455)%x456);

    if (t1 != 1633) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x502 = 0;
	uint64_t x503 = UINT64_MAX;
	volatile uint8_t x504 = 12U;
	volatile uint64_t t2 = 3343LLU;

    t2 = (((x501<<x502)*x503)%x504);

    if (t2 != 9LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x561 = 0U;
	static uint8_t x562 = 3U;
	volatile uint64_t x563 = UINT64_MAX;
	int32_t x564 = -10512;
	uint64_t t3 = 379907LLU;

    t3 = (((x561<<x562)*x563)%x564);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x681 = UINT32_MAX;
	int64_t x682 = 1LL;
	static uint64_t x683 = 13717LLU;
	uint32_t x684 = UINT32_MAX;

    t4 = (((x681<<x682)*x683)%x684);

    if (t4 != 4294953578LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x697 = 12U;
	int8_t x698 = 0;
	volatile int16_t x699 = 26;
	int64_t x700 = INT64_MIN;
	static volatile int64_t t5 = 113158167762492774LL;

    t5 = (((x697<<x698)*x699)%x700);

    if (t5 != 312LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x859 = 3U;
	volatile int32_t x860 = INT32_MIN;
	int32_t t6 = 0;

    t6 = (((x857<<x858)*x859)%x860);

    if (t6 != 195072) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x869 = UINT64_MAX;
	int8_t x870 = 4;
	static uint8_t x871 = 101U;
	volatile uint64_t x872 = UINT64_MAX;
	static uint64_t t7 = 63773359983379411LLU;

    t7 = (((x869<<x870)*x871)%x872);

    if (t7 != 18446744073709550000LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x877 = 5843;
	volatile uint16_t x878 = 1U;
	int64_t x880 = INT64_MAX;
	int64_t t8 = -20120454LL;

    t8 = (((x877<<x878)*x879)%x880);

    if (t8 != -23372LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x890 = 3;
	volatile int32_t x891 = -1;
	uint32_t t9 = 3453U;

    t9 = (((x889<<x890)*x891)%x892);

    if (t9 != 8U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x989 = 6066118741574LLU;
	static uint8_t x990 = 2U;
	int32_t x991 = 884439;
	uint64_t x992 = 5LLU;
	uint64_t t10 = 0LLU;

    t10 = (((x989<<x990)*x991)%x992);

    if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1118 = 0U;
	uint32_t x1119 = 1198799952U;
	int16_t x1120 = INT16_MIN;

    t11 = (((x1117<<x1118)*x1119)%x1120);

    if (t11 != 1337524144U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x1229 = 1;
	static uint8_t x1230 = 1U;
	static int8_t x1232 = 1;

    t12 = (((x1229<<x1230)*x1231)%x1232);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1305 = UINT64_MAX;
	int8_t x1307 = -1;
	volatile int64_t x1308 = 1LL;
	volatile uint64_t t13 = 30LLU;

    t13 = (((x1305<<x1306)*x1307)%x1308);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1397 = 5844774U;
	static uint8_t x1398 = 0U;
	uint32_t x1399 = UINT32_MAX;
	static int64_t x1400 = INT64_MAX;
	int64_t t14 = -523779068529451LL;

    t14 = (((x1397<<x1398)*x1399)%x1400);

    if (t14 != 4289122522LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1441 = INT8_MAX;
	static volatile int8_t x1442 = 0;
	volatile int8_t x1443 = INT8_MAX;
	int8_t x1444 = 13;
	int32_t t15 = -41953;

    t15 = (((x1441<<x1442)*x1443)%x1444);

    if (t15 != 9) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1653 = UINT32_MAX;
	static int32_t x1655 = -977399;
	int32_t x1656 = -1;
	volatile uint32_t t16 = 338041480U;

    t16 = (((x1653<<x1654)*x1655)%x1656);

    if (t16 != 15638384U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1805 = 30897968836831495LLU;
	int64_t x1806 = 0LL;
	uint16_t x1807 = UINT16_MAX;
	static int8_t x1808 = -1;
	uint64_t t17 = 42798323704451376LLU;

    t17 = (((x1805<<x1806)*x1807)%x1808);

    if (t17 != 14203283687410898681LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x1873 = 47;
	uint16_t x1874 = 1U;
	int8_t x1875 = INT8_MAX;
	int8_t x1876 = INT8_MIN;

    t18 = (((x1873<<x1874)*x1875)%x1876);

    if (t18 != 34) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1937 = 0;
	uint8_t x1939 = 60U;
	static int32_t t19 = 30;

    t19 = (((x1937<<x1938)*x1939)%x1940);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2005 = UINT32_MAX;
	uint8_t x2006 = 0U;
	uint8_t x2007 = 63U;
	int64_t x2008 = -3069548LL;
	volatile int64_t t20 = -4139648LL;

    t20 = (((x2005<<x2006)*x2007)%x2008);

    if (t20 != 669581LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x2045 = UINT8_MAX;
	int8_t x2047 = INT8_MAX;
	static uint16_t x2048 = 1186U;
	volatile int32_t t21 = 1;

    t21 = (((x2045<<x2046)*x2047)%x2048);

    if (t21 != 532) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x2158 = 1;
	uint32_t x2159 = 249539425U;
	volatile uint64_t x2160 = 506886802632023LLU;
	uint64_t t22 = 125LLU;

    t22 = (((x2157<<x2158)*x2159)%x2160);

    if (t22 != 3795888446LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x2317 = 1;
	volatile uint8_t x2318 = 1U;
	uint32_t x2319 = UINT32_MAX;

    t23 = (((x2317<<x2318)*x2319)%x2320);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x2334 = 0;
	volatile int64_t x2336 = -1LL;

    t24 = (((x2333<<x2334)*x2335)%x2336);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2341 = 5929187270670364LLU;
	static uint8_t x2342 = 0U;
	volatile int16_t x2343 = INT16_MIN;
	int8_t x2344 = INT8_MIN;
	uint64_t t25 = 37094537719LLU;

    t25 = (((x2341<<x2342)*x2343)%x2344);

    if (t25 != 8626576325478580224LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2437 = 11LL;
	static volatile uint16_t x2438 = 3U;
	int32_t x2439 = -1;
	volatile int64_t x2440 = 25877768584941LL;
	static volatile int64_t t26 = -3LL;

    t26 = (((x2437<<x2438)*x2439)%x2440);

    if (t26 != -88LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x2513 = 2200221914606679LLU;
	uint64_t x2514 = 57LLU;
	uint64_t t27 = 2102413LLU;

    t27 = (((x2513<<x2514)*x2515)%x2516);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x2645 = 406;
	static int8_t x2646 = 3;
	uint32_t x2647 = 793265U;
	int16_t x2648 = INT16_MIN;

    t28 = (((x2645<<x2646)*x2647)%x2648);

    if (t28 != 2576524720U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2793 = 0;
	static volatile uint16_t x2794 = 1U;
	int32_t x2796 = 52;

    t29 = (((x2793<<x2794)*x2795)%x2796);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x2825 = 115LLU;
	static uint8_t x2826 = 1U;
	volatile int64_t x2828 = 257238792567227756LL;
	static volatile uint64_t t30 = 370237139576854LLU;

    t30 = (((x2825<<x2826)*x2827)%x2828);

    if (t30 != 182789801436055490LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2873 = 1;
	uint8_t x2874 = 9U;
	static int64_t x2875 = -1LL;
	volatile int64_t x2876 = INT64_MIN;
	static int64_t t31 = 3307427LL;

    t31 = (((x2873<<x2874)*x2875)%x2876);

    if (t31 != -512LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2905 = 310U;
	volatile int64_t x2907 = -13052LL;
	int64_t x2908 = -4818522LL;
	volatile int64_t t32 = 6313328657360407LL;

    t32 = (((x2905<<x2906)*x2907)%x2908);

    if (t32 != -4046120LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2953 = 20076084LLU;
	uint8_t x2954 = 13U;
	int8_t x2955 = INT8_MAX;
	int64_t x2956 = -1LL;

    t33 = (((x2953<<x2954)*x2955)%x2956);

    if (t33 != 20886836576256LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x3089 = 13U;
	int64_t x3091 = -1LL;
	int8_t x3092 = INT8_MIN;

    t34 = (((x3089<<x3090)*x3091)%x3092);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x3161 = 3;
	static uint16_t x3162 = 10U;
	volatile int8_t x3164 = INT8_MIN;
	volatile int32_t t35 = 71;

    t35 = (((x3161<<x3162)*x3163)%x3164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x3289 = 5;
	uint16_t x3291 = UINT16_MAX;
	int8_t x3292 = 2;
	int32_t t36 = 1333;

    t36 = (((x3289<<x3290)*x3291)%x3292);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x3509 = 0;
	uint32_t x3510 = 1U;
	uint32_t x3511 = 1341838640U;
	int64_t x3512 = INT64_MIN;
	int64_t t37 = 254743671LL;

    t37 = (((x3509<<x3510)*x3511)%x3512);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x3513 = INT16_MAX;
	volatile uint16_t x3516 = UINT16_MAX;
	volatile uint32_t t38 = 23581U;

    t38 = (((x3513<<x3514)*x3515)%x3516);

    if (t38 != 57599U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x3533 = UINT32_MAX;
	uint8_t x3534 = 6U;
	static volatile int64_t x3535 = -1LL;
	int64_t x3536 = -215267049032520258LL;
	int64_t t39 = -9871259371773LL;

    t39 = (((x3533<<x3534)*x3535)%x3536);

    if (t39 != -4294967232LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x3653 = 2;
	uint8_t x3654 = 1U;
	static int8_t x3655 = INT8_MAX;
	int32_t t40 = 671;

    t40 = (((x3653<<x3654)*x3655)%x3656);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3782 = 0;
	int32_t x3783 = -2082;
	static uint32_t x3784 = 30997607U;
	static volatile uint32_t t41 = 51995U;

    t41 = (((x3781<<x3782)*x3783)%x3784);

    if (t41 != 17249644U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x3797 = UINT8_MAX;
	volatile uint8_t x3798 = 4U;
	uint16_t x3800 = 112U;
	int32_t t42 = -60127;

    t42 = (((x3797<<x3798)*x3799)%x3800);

    if (t42 != 64) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x3813 = 21U;
	uint16_t x3814 = 3U;
	int64_t x3815 = -1LL;
	volatile uint64_t x3816 = UINT64_MAX;
	volatile uint64_t t43 = 188LLU;

    t43 = (((x3813<<x3814)*x3815)%x3816);

    if (t43 != 18446744073709551448LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x3909 = UINT64_MAX;
	uint32_t x3910 = 1U;
	int8_t x3911 = INT8_MIN;
	volatile int16_t x3912 = INT16_MIN;
	uint64_t t44 = 43LLU;

    t44 = (((x3909<<x3910)*x3911)%x3912);

    if (t44 != 256LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x4173 = UINT64_MAX;
	static int16_t x4175 = -142;
	static int64_t x4176 = INT64_MIN;
	uint64_t t45 = 129147430LLU;

    t45 = (((x4173<<x4174)*x4175)%x4176);

    if (t45 != 2382364672LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x4354 = 8LLU;
	static int64_t x4356 = INT64_MIN;
	volatile uint64_t t46 = 12075LLU;

    t46 = (((x4353<<x4354)*x4355)%x4356);

    if (t46 != 1826423994090258432LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x4390 = 2U;
	int8_t x4391 = INT8_MAX;
	int8_t x4392 = INT8_MIN;
	static volatile uint32_t t47 = 3750703U;

    t47 = (((x4389<<x4390)*x4391)%x4392);

    if (t47 != 4294966788U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x4486 = 0U;
	volatile uint16_t x4487 = 16U;
	volatile uint64_t t48 = 1043242704857LLU;

    t48 = (((x4485<<x4486)*x4487)%x4488);

    if (t48 != 631120LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x4549 = INT8_MAX;
	static uint8_t x4550 = 3U;
	static int8_t x4551 = INT8_MAX;
	int8_t x4552 = -1;

    t49 = (((x4549<<x4550)*x4551)%x4552);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x4649 = 1357793987U;
	int16_t x4651 = INT16_MAX;
	int64_t x4652 = -445003975LL;
	int64_t t50 = 102LL;

    t50 = (((x4649<<x4650)*x4651)%x4652);

    if (t50 != 71128491LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x4667 = 4U;
	volatile uint16_t x4668 = UINT16_MAX;

    t51 = (((x4665<<x4666)*x4667)%x4668);

    if (t51 != 41958LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x4709 = 11U;
	int8_t x4710 = 0;
	volatile int16_t x4712 = INT16_MIN;
	int32_t t52 = -15914550;

    t52 = (((x4709<<x4710)*x4711)%x4712);

    if (t52 != 32757) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x4765 = UINT64_MAX;
	uint8_t x4766 = 24U;
	static volatile int32_t x4768 = INT32_MAX;
	uint64_t t53 = 1802073LLU;

    t53 = (((x4765<<x4766)*x4767)%x4768);

    if (t53 != 1794182879LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x4806 = 13;
	uint8_t x4807 = 12U;
	int8_t x4808 = -1;
	uint32_t t54 = 2U;

    t54 = (((x4805<<x4806)*x4807)%x4808);

    if (t54 != 2182742016U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x4837 = 49LLU;
	uint16_t x4839 = 398U;
	static uint8_t x4840 = UINT8_MAX;
	uint64_t t55 = 92LLU;

    t55 = (((x4837<<x4838)*x4839)%x4840);

    if (t55 != 122LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x4853 = 1026575U;
	int64_t x4856 = INT64_MIN;
	int64_t t56 = -2390147716LL;

    t56 = (((x4853<<x4854)*x4855)%x4856);

    if (t56 != 4043309056LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x4877 = INT16_MAX;
	int16_t x4879 = INT16_MIN;
	static int16_t x4880 = INT16_MIN;
	static int32_t t57 = -613438949;

    t57 = (((x4877<<x4878)*x4879)%x4880);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x4981 = INT8_MAX;
	uint32_t x4983 = UINT32_MAX;
	int32_t x4984 = -23855;
	static volatile uint32_t t58 = 46442U;

    t58 = (((x4981<<x4982)*x4983)%x4984);

    if (t58 != 23728U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x5025 = 1399488LLU;
	volatile int16_t x5028 = INT16_MIN;

    t59 = (((x5025<<x5026)*x5027)%x5028);

    if (t59 != 94672564224LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x5110 = 0;
	static int64_t x5112 = INT64_MIN;
	int64_t t60 = 0LL;

    t60 = (((x5109<<x5110)*x5111)%x5112);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x5150 = 2;
	int8_t x5151 = 0;
	static uint32_t t61 = 23U;

    t61 = (((x5149<<x5150)*x5151)%x5152);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x5294 = 0LL;
	int16_t x5296 = -1;
	volatile uint32_t t62 = 120U;

    t62 = (((x5293<<x5294)*x5295)%x5296);

    if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x5377 = UINT64_MAX;
	int64_t x5379 = INT64_MIN;
	uint16_t x5380 = UINT16_MAX;
	volatile uint64_t t63 = 16583538204267LLU;

    t63 = (((x5377<<x5378)*x5379)%x5380);

    if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x5389 = UINT32_MAX;
	int8_t x5390 = 21;
	int64_t x5391 = 1LL;
	int64_t x5392 = INT64_MIN;
	int64_t t64 = 6613399722314LL;

    t64 = (((x5389<<x5390)*x5391)%x5392);

    if (t64 != 4292870144LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x5405 = 8;
	int16_t x5406 = 9;
	uint8_t x5407 = 1U;
	int32_t x5408 = -2;
	volatile int32_t t65 = 1547953;

    t65 = (((x5405<<x5406)*x5407)%x5408);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x5449 = 52U;
	uint32_t x5450 = 1U;
	static volatile uint16_t x5451 = UINT16_MAX;
	volatile uint64_t x5452 = 1958683LLU;
	uint64_t t66 = 0LLU;

    t66 = (((x5449<<x5450)*x5451)%x5452);

    if (t66 != 939591LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x5461 = 1;
	uint32_t x5462 = 2U;
	volatile int8_t x5463 = -44;
	int8_t x5464 = -1;
	volatile int32_t t67 = -669;

    t67 = (((x5461<<x5462)*x5463)%x5464);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x5653 = 186U;
	static uint16_t x5654 = 6U;
	static int16_t x5655 = -1;
	int16_t x5656 = INT16_MIN;
	static int32_t t68 = -12;

    t68 = (((x5653<<x5654)*x5655)%x5656);

    if (t68 != -11904) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x5693 = UINT16_MAX;
	uint8_t x5694 = 0U;
	static int64_t x5695 = -6567583796295LL;

    t69 = (((x5693<<x5694)*x5695)%x5696);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x5701 = 4684;
	uint16_t x5702 = 11U;
	int8_t x5703 = 1;

    t70 = (((x5701<<x5702)*x5703)%x5704);

    if (t70 != 9592832) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x5717 = 11;
	static volatile uint8_t x5718 = 3U;
	volatile uint16_t x5719 = 457U;

    t71 = (((x5717<<x5718)*x5719)%x5720);

    if (t71 != 7LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x6057 = 48397U;
	volatile int8_t x6058 = 1;
	uint64_t x6059 = 424672090781985258LLU;
	int32_t x6060 = -14446759;
	static uint64_t t72 = 1524390857LLU;

    t72 = (((x6057<<x6058)*x6059)%x6060);

    if (t72 != 6364558926600062404LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x6065 = UINT32_MAX;
	static uint16_t x6066 = 4U;
	volatile int64_t t73 = -132945569LL;

    t73 = (((x6065<<x6066)*x6067)%x6068);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x6069 = 17;
	static uint8_t x6070 = 0U;
	int16_t x6071 = INT16_MIN;
	int32_t t74 = 46659;

    t74 = (((x6069<<x6070)*x6071)%x6072);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x6077 = 843923640LL;
	uint32_t x6078 = 11U;
	volatile uint8_t x6079 = 6U;
	static int64_t x6080 = 1271LL;
	volatile int64_t t75 = 58102LL;

    t75 = (((x6077<<x6078)*x6079)%x6080);

    if (t75 != 1231LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x6253 = UINT64_MAX;
	int8_t x6254 = 0;
	static int32_t x6255 = 122120;
	static uint8_t x6256 = UINT8_MAX;
	uint64_t t76 = 38LLU;

    t76 = (((x6253<<x6254)*x6255)%x6256);

    if (t76 != 26LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x6265 = 1149;
	static uint8_t x6266 = 1U;
	int8_t x6267 = -1;
	uint16_t x6268 = 891U;
	static int32_t t77 = 1;

    t77 = (((x6265<<x6266)*x6267)%x6268);

    if (t77 != -516) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x6346 = 2;
	static int8_t x6347 = INT8_MAX;
	volatile uint16_t x6348 = UINT16_MAX;
	volatile uint64_t t78 = 3886515LLU;

    t78 = (((x6345<<x6346)*x6347)%x6348);

    if (t78 != 65028LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x6486 = 1LL;
	volatile int16_t x6488 = -3040;
	int64_t t79 = -10744957927543385LL;

    t79 = (((x6485<<x6486)*x6487)%x6488);

    if (t79 != -1484LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x6513 = UINT32_MAX;
	volatile uint8_t x6514 = 2U;
	int16_t x6515 = 826;
	int64_t x6516 = 7242934055089LL;
	int64_t t80 = -407713LL;

    t80 = (((x6513<<x6514)*x6515)%x6516);

    if (t80 != 4294963992LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x6562 = 3U;
	static int64_t x6564 = INT64_MAX;
	volatile int64_t t81 = -604369005173LL;

    t81 = (((x6561<<x6562)*x6563)%x6564);

    if (t81 != 8LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x6629 = INT8_MAX;
	int8_t x6630 = 3;
	volatile int64_t x6632 = INT64_MIN;
	static volatile int64_t t82 = -209390416275LL;

    t82 = (((x6629<<x6630)*x6631)%x6632);

    if (t82 != 2828485072LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x6689 = 87U;
	uint32_t x6691 = 2U;
	uint8_t x6692 = UINT8_MAX;

    t83 = (((x6689<<x6690)*x6691)%x6692);

    if (t83 != 186U) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x6693 = INT16_MAX;
	uint8_t x6694 = 0U;
	static int16_t x6695 = INT16_MIN;
	volatile int16_t x6696 = 3010;
	int32_t t84 = 205763417;

    t84 = (((x6693<<x6694)*x6695)%x6696);

    if (t84 != -2926) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x6739 = UINT16_MAX;
	static uint64_t x6740 = UINT64_MAX;
	uint64_t t85 = 5LLU;

    t85 = (((x6737<<x6738)*x6739)%x6740);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x6749 = INT8_MAX;
	static int8_t x6750 = 2;
	static int8_t x6751 = -1;
	volatile int64_t t86 = 5989134686524495LL;

    t86 = (((x6749<<x6750)*x6751)%x6752);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x6941 = 50;
	static uint64_t x6942 = 13LLU;
	int16_t x6943 = 0;
	volatile uint64_t t87 = 0LLU;

    t87 = (((x6941<<x6942)*x6943)%x6944);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x7082 = 3U;
	uint64_t x7084 = 45754859622147235LLU;

    t88 = (((x7081<<x7082)*x7083)%x7084);

    if (t88 != 792688LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x7169 = UINT8_MAX;
	int32_t x7171 = -1;
	int32_t t89 = 6120;

    t89 = (((x7169<<x7170)*x7171)%x7172);

    if (t89 != -255) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x7221 = 141822LL;
	static uint8_t x7223 = 110U;
	uint64_t x7224 = UINT64_MAX;
	volatile uint64_t t90 = 3004147217948668385LLU;

    t90 = (((x7221<<x7222)*x7223)%x7224);

    if (t90 != 127798640640LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x7281 = 179302752178LLU;
	static int8_t x7282 = 3;
	int64_t x7283 = INT64_MAX;
	static int32_t x7284 = INT32_MIN;

    t91 = (((x7281<<x7282)*x7283)%x7284);

    if (t91 != 18446742639287534192LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x7289 = INT8_MAX;
	volatile uint32_t x7290 = 13U;
	volatile uint64_t x7291 = 66396LLU;
	uint16_t x7292 = 846U;
	volatile uint64_t t92 = 2453814136475LLU;

    t92 = (((x7289<<x7290)*x7291)%x7292);

    if (t92 != 402LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x7297 = 1497801630U;
	volatile uint16_t x7298 = 1U;
	int32_t x7299 = 106874;
	uint16_t x7300 = 135U;

    t93 = (((x7297<<x7298)*x7299)%x7300);

    if (t93 != 54U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x7369 = 0LLU;
	uint32_t x7370 = 9U;
	uint16_t x7371 = UINT16_MAX;
	uint16_t x7372 = 1096U;

    t94 = (((x7369<<x7370)*x7371)%x7372);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x7397 = 0U;
	int64_t x7399 = INT64_MIN;
	int16_t x7400 = INT16_MIN;
	static volatile int64_t t95 = -38591188494LL;

    t95 = (((x7397<<x7398)*x7399)%x7400);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x7413 = 3137U;
	uint8_t x7414 = 3U;
	static int64_t x7415 = -1LL;
	volatile int64_t t96 = 431LL;

    t96 = (((x7413<<x7414)*x7415)%x7416);

    if (t96 != -25096LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x7437 = 251580302U;
	uint8_t x7438 = 11U;
	volatile uint64_t x7439 = 12233304575906LLU;
	volatile uint64_t t97 = 13945335LLU;

    t97 = (((x7437<<x7438)*x7439)%x7440);

    if (t97 != 8027155320131215360LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x7513 = 5476LL;
	int16_t x7514 = 4;
	int16_t x7515 = INT16_MIN;
	int32_t x7516 = 9;
	int64_t t98 = -4427LL;

    t98 = (((x7513<<x7514)*x7515)%x7516);

    if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x7629 = INT32_MAX;
	static int8_t x7630 = 0;
	uint16_t x7632 = UINT16_MAX;
	int64_t t99 = 66235914721225LL;

    t99 = (((x7629<<x7630)*x7631)%x7632);

    if (t99 != -32767LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x7693 = 2077LLU;
	uint8_t x7694 = 49U;
	uint32_t x7695 = 8U;

    t100 = (((x7693<<x7694)*x7695)%x7696);

    if (t100 != 155907LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x7721 = 5LL;
	int32_t x7722 = 1;
	volatile uint16_t x7723 = UINT16_MAX;
	uint8_t x7724 = UINT8_MAX;
	volatile int64_t t101 = -2020LL;

    t101 = (((x7721<<x7722)*x7723)%x7724);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x7726 = 1U;
	volatile int32_t x7727 = -1;
	static int32_t x7728 = -83754083;
	uint64_t t102 = 4035298305521LLU;

    t102 = (((x7725<<x7726)*x7727)%x7728);

    if (t102 != 83754077LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x7765 = UINT8_MAX;
	volatile int8_t x7766 = 8;
	uint16_t x7767 = 4U;
	uint32_t x7768 = 6U;

    t103 = (((x7765<<x7766)*x7767)%x7768);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x7809 = UINT64_MAX;
	uint8_t x7810 = 16U;
	uint64_t x7811 = 586LLU;
	int64_t x7812 = -1LL;
	uint64_t t104 = 890175679959LLU;

    t104 = (((x7809<<x7810)*x7811)%x7812);

    if (t104 != 18446744073671147520LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x7889 = 1;
	static uint16_t x7890 = 1U;
	volatile uint64_t x7891 = 100354932227612555LLU;
	static volatile uint64_t t105 = 20LLU;

    t105 = (((x7889<<x7890)*x7891)%x7892);

    if (t105 != 200709864455225110LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x7912 = INT8_MIN;
	uint64_t t106 = 135LLU;

    t106 = (((x7909<<x7910)*x7911)%x7912);

    if (t106 != 7028740230744113152LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x8001 = 441;
	uint16_t x8002 = 21U;
	volatile int64_t x8003 = -1LL;
	int64_t t107 = 140LL;

    t107 = (((x8001<<x8002)*x8003)%x8004);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x8029 = INT16_MAX;
	uint8_t x8030 = 7U;
	int8_t x8031 = INT8_MIN;
	static int32_t x8032 = -1;
	volatile int32_t t108 = 22745;

    t108 = (((x8029<<x8030)*x8031)%x8032);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x8049 = 12LLU;
	uint64_t x8050 = 1LLU;
	int8_t x8051 = -3;

    t109 = (((x8049<<x8050)*x8051)%x8052);

    if (t109 != 65464LLU) { NG(); } else { ; }
	
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
    f109();


    return 0;
}

