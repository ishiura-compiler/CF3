
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

uint64_t x29 = UINT64_MAX;
int64_t x31 = 3862671742963636886LL;
int32_t x93 = INT32_MAX;
int64_t x111 = INT64_MAX;
volatile uint32_t x225 = 30U;
int8_t x296 = 1;
int64_t t5 = 58088854143667001LL;
uint16_t x408 = 1U;
uint32_t x449 = UINT32_MAX;
uint16_t x450 = UINT16_MAX;
static uint32_t t7 = 3U;
static int16_t x541 = 3997;
static int32_t t8 = -6424;
volatile int16_t x634 = -1;
volatile int64_t x813 = INT64_MIN;
int64_t x816 = 1LL;
uint8_t x896 = 0U;
volatile int64_t t11 = -36873878542LL;
uint8_t x972 = 2U;
int32_t t13 = -253;
uint32_t x1051 = UINT32_MAX;
int32_t x1106 = INT32_MAX;
int16_t x1274 = INT16_MAX;
int8_t x1305 = 18;
int32_t x1502 = INT32_MAX;
volatile int64_t t19 = 557448191870959173LL;
int16_t x1565 = -105;
static int64_t x1567 = INT64_MAX;
volatile uint64_t t27 = 17LLU;
uint8_t x1852 = 2U;
volatile uint64_t t28 = 24452214828LLU;
int32_t x1869 = INT32_MAX;
uint32_t x1871 = 4149772U;
volatile int32_t x2449 = -25263318;
uint64_t x2456 = 1LLU;
static uint32_t x2559 = UINT32_MAX;
uint8_t x2560 = 1U;
uint32_t t36 = 2671105U;
int32_t x2745 = 455;
int64_t t38 = 22482578LL;
int64_t x2877 = INT64_MIN;
uint64_t x2878 = 1849244130337523LLU;
volatile uint32_t t40 = 444239954U;
static uint64_t t41 = 40LLU;
static int16_t x3170 = INT16_MIN;
int8_t x3172 = 18;
static int8_t x3189 = INT8_MIN;
uint64_t x3190 = UINT64_MAX;
int64_t x3225 = -1LL;
volatile int32_t x3307 = INT32_MAX;
static int32_t x3394 = INT32_MAX;
int32_t x3449 = INT32_MAX;
static uint64_t x3452 = 2LLU;
volatile uint32_t t48 = 22295409U;
volatile uint8_t x3564 = 0U;
uint16_t x3612 = 3U;
int32_t t53 = 21;
uint8_t x3769 = UINT8_MAX;
uint16_t x3799 = UINT16_MAX;
volatile uint64_t x4091 = 801LLU;
uint64_t t59 = 80LLU;
volatile int64_t t60 = -744397794310874208LL;
volatile uint64_t t62 = 436218039LLU;
int32_t x4409 = INT32_MIN;
volatile int8_t x4410 = INT8_MIN;
volatile int8_t x4412 = 1;
volatile int8_t x4479 = 54;
static int32_t x4530 = INT32_MIN;
volatile uint64_t t65 = 768677796239729624LLU;
uint8_t x4743 = UINT8_MAX;
int8_t x4854 = INT8_MAX;
uint8_t x4888 = 7U;
volatile uint32_t t71 = 2048283U;
uint8_t x4917 = 46U;
uint8_t x4920 = 0U;
int32_t t73 = 0;
uint8_t x4965 = 14U;
int64_t x5154 = INT64_MAX;
static uint64_t x5239 = 2971223752LLU;
volatile uint64_t t77 = 107222LLU;
uint16_t x5284 = 4U;
uint32_t t79 = 182237824U;


void f0(void) {
    	volatile uint16_t x30 = 14U;
	uint16_t x32 = 14U;
	volatile uint64_t t0 = 165064175LLU;

    t0 = ((x29|x30)/(x31>>x32));

    if (t0 != 78244LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x94 = INT8_MAX;
	static int16_t x95 = INT16_MAX;
	volatile uint8_t x96 = 0U;
	static volatile int32_t t1 = 14273653;

    t1 = ((x93|x94)/(x95>>x96));

    if (t1 != 65538) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x109 = INT32_MIN;
	volatile int16_t x110 = -4;
	uint64_t x112 = 15LLU;
	int64_t t2 = 204LL;

    t2 = ((x109|x110)/(x111>>x112));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x226 = -27456065;
	uint64_t x227 = 6807160145855585795LLU;
	uint16_t x228 = 1U;
	uint64_t t3 = 67504238716186172LLU;

    t3 = ((x225|x226)/(x227>>x228));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x293 = 1U;
	int64_t x294 = 2642205541911858LL;
	uint32_t x295 = 454U;
	volatile int64_t t4 = -203281358050LL;

    t4 = ((x293|x294)/(x295>>x296));

    if (t4 != 11639671990801LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MAX;
	static volatile int64_t x299 = INT64_MAX;
	uint16_t x300 = 0U;

    t5 = ((x297|x298)/(x299>>x300));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MAX;
	uint8_t x407 = 66U;
	int32_t t6 = 3398364;

    t6 = ((x405|x406)/(x407>>x408));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x451 = 3574U;
	volatile int8_t x452 = 1;

    t7 = ((x449|x450)/(x451>>x452));

    if (t7 != 2403451U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x542 = 4;
	volatile int32_t x543 = 1;
	uint8_t x544 = 0U;

    t8 = ((x541|x542)/(x543>>x544));

    if (t8 != 3997) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x633 = INT64_MAX;
	uint8_t x635 = UINT8_MAX;
	int8_t x636 = 0;
	volatile int64_t t9 = 756631LL;

    t9 = ((x633|x634)/(x635>>x636));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x814 = 24U;
	int64_t x815 = INT64_MAX;
	static volatile int64_t t10 = -120245LL;

    t10 = ((x813|x814)/(x815>>x816));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x893 = 236U;
	int64_t x894 = INT64_MIN;
	uint32_t x895 = 36898U;

    t11 = ((x893|x894)/(x895>>x896));

    if (t11 != -249969430236185LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x929 = INT16_MAX;
	int8_t x930 = INT8_MAX;
	uint32_t x931 = 1203219661U;
	uint16_t x932 = 0U;
	uint32_t t12 = 13297U;

    t12 = ((x929|x930)/(x931>>x932));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x969 = INT32_MAX;
	uint16_t x970 = UINT16_MAX;
	uint16_t x971 = UINT16_MAX;

    t13 = ((x969|x970)/(x971>>x972));

    if (t13 != 131080) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x1049 = UINT8_MAX;
	uint64_t x1050 = UINT64_MAX;
	int32_t x1052 = 22;
	volatile uint64_t t14 = 4468842LLU;

    t14 = ((x1049|x1050)/(x1051>>x1052));

    if (t14 != 18032007892189200LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1105 = -1;
	uint16_t x1107 = 2527U;
	int8_t x1108 = 0;
	volatile int32_t t15 = 2;

    t15 = ((x1105|x1106)/(x1107>>x1108));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1273 = -1;
	static int32_t x1275 = 333423;
	static int8_t x1276 = 12;
	int32_t t16 = -99266779;

    t16 = ((x1273|x1274)/(x1275>>x1276));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1306 = INT8_MAX;
	int32_t x1307 = 120256242;
	int8_t x1308 = 1;
	static volatile int32_t t17 = 105;

    t17 = ((x1305|x1306)/(x1307>>x1308));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1501 = 14323;
	uint32_t x1503 = 1541414U;
	int8_t x1504 = 6;
	volatile uint32_t t18 = 3395U;

    t18 = ((x1501|x1502)/(x1503>>x1504));

    if (t18 != 89166U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1505 = INT64_MAX;
	int64_t x1506 = INT64_MIN;
	uint16_t x1507 = UINT16_MAX;
	int8_t x1508 = 0;

    t19 = ((x1505|x1506)/(x1507>>x1508));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x1521 = INT16_MIN;
	static uint16_t x1522 = 892U;
	volatile uint32_t x1523 = 571224655U;
	int8_t x1524 = 4;
	static uint32_t t20 = 3U;

    t20 = ((x1521|x1522)/(x1523>>x1524));

    if (t20 != 120U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1537 = INT16_MIN;
	uint8_t x1538 = UINT8_MAX;
	static uint64_t x1539 = 99768688971134434LLU;
	uint8_t x1540 = 12U;
	volatile uint64_t t21 = 2554953251780478148LLU;

    t21 = ((x1537|x1538)/(x1539>>x1540));

    if (t21 != 757330LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1566 = -1;
	int8_t x1568 = 1;
	int64_t t22 = -97205052376LL;

    t22 = ((x1565|x1566)/(x1567>>x1568));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1629 = INT32_MAX;
	uint64_t x1630 = 215186338168128LLU;
	uint32_t x1631 = 228102337U;
	int32_t x1632 = 9;
	volatile uint64_t t23 = 6620LLU;

    t23 = ((x1629|x1630)/(x1631>>x1632));

    if (t23 != 483009327LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1681 = INT16_MIN;
	volatile int32_t x1682 = INT32_MAX;
	volatile uint64_t x1683 = UINT64_MAX;
	uint8_t x1684 = 17U;
	uint64_t t24 = 38983189LLU;

    t24 = ((x1681|x1682)/(x1683>>x1684));

    if (t24 != 131072LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1741 = INT8_MIN;
	int64_t x1742 = INT64_MIN;
	static int16_t x1743 = 786;
	uint8_t x1744 = 2U;
	volatile int64_t t25 = -2LL;

    t25 = ((x1741|x1742)/(x1743>>x1744));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x1753 = INT64_MAX;
	int32_t x1754 = -1;
	uint16_t x1755 = UINT16_MAX;
	int8_t x1756 = 0;
	static volatile int64_t t26 = -11825768843LL;

    t26 = ((x1753|x1754)/(x1755>>x1756));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1833 = 13766291986427256LL;
	static uint8_t x1834 = 2U;
	uint64_t x1835 = UINT64_MAX;
	uint8_t x1836 = 8U;

    t27 = ((x1833|x1834)/(x1835>>x1836));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x1849 = UINT8_MAX;
	volatile int16_t x1850 = INT16_MAX;
	uint64_t x1851 = 127790946931952342LLU;

    t28 = ((x1849|x1850)/(x1851>>x1852));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x1870 = 74054702LLU;
	int16_t x1872 = 1;
	uint64_t t29 = 277844340278248LLU;

    t29 = ((x1869|x1870)/(x1871>>x1872));

    if (t29 != 1034LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1961 = 409353;
	int64_t x1962 = INT64_MIN;
	static uint16_t x1963 = UINT16_MAX;
	uint8_t x1964 = 1U;
	volatile int64_t t30 = -98940456034LL;

    t30 = ((x1961|x1962)/(x1963>>x1964));

    if (t30 != -281483566907387LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x2169 = INT32_MIN;
	static int64_t x2170 = INT64_MIN;
	static volatile int32_t x2171 = INT32_MAX;
	int64_t x2172 = 10LL;
	int64_t t31 = 1LL;

    t31 = ((x2169|x2170)/(x2171>>x2172));

    if (t31 != -1024LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2450 = INT64_MIN;
	static volatile uint32_t x2451 = 3710U;
	uint16_t x2452 = 8U;
	volatile int64_t t32 = 129698914006938997LL;

    t32 = ((x2449|x2450)/(x2451>>x2452));

    if (t32 != -1804522LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2453 = 49U;
	int8_t x2454 = 63;
	uint16_t x2455 = 3U;
	volatile int32_t t33 = 3;

    t33 = ((x2453|x2454)/(x2455>>x2456));

    if (t33 != 63) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2557 = INT8_MIN;
	int32_t x2558 = INT32_MAX;
	volatile uint32_t t34 = 13271811U;

    t34 = ((x2557|x2558)/(x2559>>x2560));

    if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x2585 = INT64_MIN;
	int16_t x2586 = INT16_MIN;
	int64_t x2587 = 520791671246472241LL;
	uint8_t x2588 = 3U;
	volatile int64_t t35 = 53633LL;

    t35 = ((x2585|x2586)/(x2587>>x2588));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x2741 = 6123;
	static int16_t x2742 = 9471;
	volatile uint32_t x2743 = UINT32_MAX;
	static volatile int8_t x2744 = 1;

    t36 = ((x2741|x2742)/(x2743>>x2744));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2746 = -23431LL;
	static uint64_t x2747 = 3910304732696866577LLU;
	uint32_t x2748 = 3U;
	static volatile uint64_t t37 = 3430LLU;

    t37 = ((x2745|x2746)/(x2747>>x2748));

    if (t37 != 37LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2857 = INT16_MIN;
	int64_t x2858 = -6344973593862109LL;
	int64_t x2859 = 7588581862543211LL;
	uint8_t x2860 = 13U;

    t38 = ((x2857|x2858)/(x2859>>x2860));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2879 = UINT32_MAX;
	int32_t x2880 = 6;
	static volatile uint64_t t39 = 268105513370LLU;

    t39 = ((x2877|x2878)/(x2879>>x2880));

    if (t39 != 137466511405LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x3025 = UINT32_MAX;
	int16_t x3026 = -1;
	uint8_t x3027 = 79U;
	int64_t x3028 = 0LL;

    t40 = ((x3025|x3026)/(x3027>>x3028));

    if (t40 != 54366674U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x3097 = 8892700LLU;
	int32_t x3098 = 2659;
	uint64_t x3099 = 79095797950LLU;
	int8_t x3100 = 1;

    t41 = ((x3097|x3098)/(x3099>>x3100));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x3169 = 20331409514110LLU;
	uint64_t x3171 = 4120940420LLU;
	uint64_t t42 = 11489LLU;

    t42 = ((x3169|x3170)/(x3171>>x3172));

    if (t42 != 1173457002144371LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x3191 = 2665;
	volatile int64_t x3192 = 4LL;
	volatile uint64_t t43 = 7007033920345LLU;

    t43 = ((x3189|x3190)/(x3191>>x3192));

    if (t43 != 111124964299455130LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x3209 = UINT64_MAX;
	int32_t x3210 = -6941;
	uint32_t x3211 = 192028470U;
	int8_t x3212 = 8;
	volatile uint64_t t44 = 201650811LLU;

    t44 = ((x3209|x3210)/(x3211>>x3212));

    if (t44 != 24592019146112LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x3226 = -1LL;
	int64_t x3227 = 644513808067LL;
	uint32_t x3228 = 14U;
	int64_t t45 = 2909280364600LL;

    t45 = ((x3225|x3226)/(x3227>>x3228));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x3305 = 45138636780728LLU;
	volatile uint16_t x3306 = 11998U;
	int8_t x3308 = 0;
	volatile uint64_t t46 = 2629LLU;

    t46 = ((x3305|x3306)/(x3307>>x3308));

    if (t46 != 21019LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3393 = INT16_MIN;
	static int64_t x3395 = INT64_MAX;
	uint8_t x3396 = 28U;
	static int64_t t47 = -8216407184LL;

    t47 = ((x3393|x3394)/(x3395>>x3396));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x3450 = 2468U;
	uint32_t x3451 = UINT32_MAX;

    t48 = ((x3449|x3450)/(x3451>>x3452));

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x3521 = 0;
	int16_t x3522 = 4;
	uint64_t x3523 = UINT64_MAX;
	uint16_t x3524 = 14U;
	volatile uint64_t t49 = 10148269681208504LLU;

    t49 = ((x3521|x3522)/(x3523>>x3524));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3561 = 4695901524187074LL;
	int64_t x3562 = INT64_MAX;
	uint32_t x3563 = 574U;
	int64_t t50 = 2LL;

    t50 = ((x3561|x3562)/(x3563>>x3564));

    if (t50 != 16068592398701700LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x3585 = INT16_MAX;
	uint64_t x3586 = 2018LLU;
	uint32_t x3587 = 24417636U;
	uint16_t x3588 = 0U;
	volatile uint64_t t51 = 1LLU;

    t51 = ((x3585|x3586)/(x3587>>x3588));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x3609 = 104199270U;
	uint64_t x3610 = 3277698858087LLU;
	int16_t x3611 = INT16_MAX;
	volatile uint64_t t52 = 1526932939LLU;

    t52 = ((x3609|x3610)/(x3611>>x3612));

    if (t52 != 800415445LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3733 = 66U;
	static int8_t x3734 = 62;
	static int16_t x3735 = INT16_MAX;
	uint8_t x3736 = 11U;

    t53 = ((x3733|x3734)/(x3735>>x3736));

    if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3770 = 61U;
	uint32_t x3771 = UINT32_MAX;
	int16_t x3772 = 1;
	uint32_t t54 = 364U;

    t54 = ((x3769|x3770)/(x3771>>x3772));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3797 = INT32_MIN;
	uint64_t x3798 = 6839415159LLU;
	int16_t x3800 = 6;
	volatile uint64_t t55 = 17LLU;

    t55 = ((x3797|x3798)/(x3799>>x3800));

    if (t55 != 18032007890478037LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x3889 = 0LLU;
	volatile int8_t x3890 = 1;
	int16_t x3891 = 11637;
	int32_t x3892 = 4;
	static uint64_t t56 = 110576LLU;

    t56 = ((x3889|x3890)/(x3891>>x3892));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x3985 = INT16_MAX;
	static int64_t x3986 = INT64_MIN;
	uint16_t x3987 = UINT16_MAX;
	uint8_t x3988 = 1U;
	int64_t t57 = -88077711672LL;

    t57 = ((x3985|x3986)/(x3987>>x3988));

    if (t57 != -281483566907399LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x4089 = UINT8_MAX;
	uint8_t x4090 = UINT8_MAX;
	uint16_t x4092 = 1U;
	volatile uint64_t t58 = 64098081LLU;

    t58 = ((x4089|x4090)/(x4091>>x4092));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x4109 = INT8_MIN;
	uint64_t x4110 = 21918759362074564LLU;
	uint16_t x4111 = UINT16_MAX;
	uint8_t x4112 = 8U;

    t59 = ((x4109|x4110)/(x4111>>x4112));

    if (t59 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x4225 = 179376U;
	int64_t x4226 = -1LL;
	static int32_t x4227 = 59293375;
	uint8_t x4228 = 1U;

    t60 = ((x4225|x4226)/(x4227>>x4228));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x4229 = INT32_MAX;
	uint64_t x4230 = UINT64_MAX;
	int32_t x4231 = INT32_MAX;
	uint8_t x4232 = 4U;
	uint64_t t61 = 405267LLU;

    t61 = ((x4229|x4230)/(x4231>>x4232));

    if (t61 != 137438954496LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x4269 = 2313LLU;
	volatile int32_t x4270 = -1;
	int64_t x4271 = 2008709584598320LL;
	int8_t x4272 = 0;

    t62 = ((x4269|x4270)/(x4271>>x4272));

    if (t62 != 9183LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x4411 = 101438;
	static int32_t t63 = 14541485;

    t63 = ((x4409|x4410)/(x4411>>x4412));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x4477 = -1;
	int32_t x4478 = INT32_MIN;
	int8_t x4480 = 0;
	int32_t t64 = -341811279;

    t64 = ((x4477|x4478)/(x4479>>x4480));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x4529 = UINT64_MAX;
	int32_t x4531 = INT32_MAX;
	static volatile uint64_t x4532 = 13LLU;

    t65 = ((x4529|x4530)/(x4531>>x4532));

    if (t65 != 70369012614144LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x4557 = 5U;
	uint8_t x4558 = 3U;
	uint32_t x4559 = UINT32_MAX;
	int16_t x4560 = 0;
	uint32_t t66 = 441U;

    t66 = ((x4557|x4558)/(x4559>>x4560));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x4685 = INT16_MAX;
	int16_t x4686 = INT16_MIN;
	uint32_t x4687 = UINT32_MAX;
	int16_t x4688 = 14;
	uint32_t t67 = 1542045U;

    t67 = ((x4685|x4686)/(x4687>>x4688));

    if (t67 != 16384U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x4741 = 218225607;
	static int8_t x4742 = 1;
	volatile int8_t x4744 = 1;
	int32_t t68 = -75599917;

    t68 = ((x4741|x4742)/(x4743>>x4744));

    if (t68 != 1718311) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x4853 = INT16_MIN;
	uint64_t x4855 = 12254304681LLU;
	uint8_t x4856 = 3U;
	uint64_t t69 = 1759LLU;

    t69 = ((x4853|x4854)/(x4855>>x4856));

    if (t69 != 12042621465LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x4885 = 57U;
	uint16_t x4886 = UINT16_MAX;
	uint32_t x4887 = 1517279U;
	uint32_t t70 = 178U;

    t70 = ((x4885|x4886)/(x4887>>x4888));

    if (t70 != 5U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x4901 = 14;
	int16_t x4902 = 2;
	uint32_t x4903 = UINT32_MAX;
	uint8_t x4904 = 0U;

    t71 = ((x4901|x4902)/(x4903>>x4904));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x4918 = INT16_MIN;
	volatile uint64_t x4919 = 1725005129780203477LLU;
	uint64_t t72 = 27LLU;

    t72 = ((x4917|x4918)/(x4919>>x4920));

    if (t72 != 10LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4941 = 104U;
	int8_t x4942 = 43;
	uint16_t x4943 = 92U;
	uint8_t x4944 = 0U;

    t73 = ((x4941|x4942)/(x4943>>x4944));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4966 = UINT16_MAX;
	uint64_t x4967 = UINT64_MAX;
	uint8_t x4968 = 4U;
	uint64_t t74 = 16908025LLU;

    t74 = ((x4965|x4966)/(x4967>>x4968));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x5137 = INT16_MIN;
	int32_t x5138 = INT32_MIN;
	int32_t x5139 = 3;
	volatile int16_t x5140 = 1;
	volatile int32_t t75 = 253617418;

    t75 = ((x5137|x5138)/(x5139>>x5140));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x5153 = 7797;
	static volatile int64_t x5155 = INT64_MAX;
	uint8_t x5156 = 1U;
	int64_t t76 = -141635478925LL;

    t76 = ((x5153|x5154)/(x5155>>x5156));

    if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x5237 = -1;
	int16_t x5238 = INT16_MIN;
	uint32_t x5240 = 1U;

    t77 = ((x5237|x5238)/(x5239>>x5240));

    if (t77 != 12416933636LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x5257 = 29;
	int64_t x5258 = INT64_MIN;
	uint64_t x5259 = 21395547063384LLU;
	static int16_t x5260 = 0;
	volatile uint64_t t78 = 4276947968012LLU;

    t78 = ((x5257|x5258)/(x5259>>x5260));

    if (t78 != 431088LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x5281 = -79479667;
	volatile int8_t x5282 = -1;
	volatile uint32_t x5283 = UINT32_MAX;

    t79 = ((x5281|x5282)/(x5283>>x5284));

    if (t79 != 16U) { NG(); } else { ; }
	
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


    return 0;
}

