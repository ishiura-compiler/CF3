
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

int32_t x293 = INT32_MIN;
static uint32_t t1 = 342611643U;
volatile int32_t t5 = -68279321;
static uint32_t x1686 = 10671233U;
volatile int64_t t11 = 137616865836731892LL;
volatile int32_t x2231 = INT32_MIN;
uint32_t x2537 = 39U;
int32_t t18 = 110171413;
uint32_t x2709 = 313719802U;
uint8_t x2842 = UINT8_MAX;
int32_t x2866 = INT32_MIN;
static volatile int32_t x2881 = -25002;
int32_t x2882 = INT32_MIN;
static int16_t x2884 = -1;
uint64_t x3039 = UINT64_MAX;
static int16_t x3076 = INT16_MIN;
volatile uint16_t x3142 = 15U;
volatile int64_t t28 = 10866887832417LL;
uint8_t x3438 = 0U;
volatile uint32_t x3440 = UINT32_MAX;
volatile int32_t x3480 = -1;
int32_t x3481 = -344527;
int32_t x3690 = INT32_MAX;
volatile int32_t x3726 = -10798177;
int16_t x3727 = INT16_MAX;
int8_t x3846 = INT8_MIN;
uint64_t x3847 = UINT64_MAX;
static uint64_t x3929 = UINT64_MAX;
volatile uint64_t t37 = 241168694LLU;
volatile uint64_t x4002 = 21235LLU;
int32_t x4004 = INT32_MIN;
uint64_t t38 = 3971LLU;
volatile int64_t t39 = 642204554LL;
int32_t x4165 = INT32_MIN;
uint64_t x4220 = UINT64_MAX;
int64_t x4271 = INT64_MAX;
int32_t x4355 = -1;
int16_t x4372 = INT16_MAX;
int32_t x4842 = INT32_MIN;
static uint32_t x4844 = UINT32_MAX;
static volatile int16_t x5187 = INT16_MIN;
volatile int32_t t53 = 1;
static int32_t x5666 = INT32_MIN;
int32_t x5667 = INT32_MIN;
static volatile int64_t x5723 = INT64_MAX;
int64_t x5826 = -206278475897LL;
int16_t x5827 = -1;
int64_t t58 = 3276864238LL;
volatile int8_t x6146 = INT8_MIN;
volatile int8_t x6147 = -1;
volatile int8_t x6267 = -1;
volatile uint16_t x6806 = 151U;
int16_t x6807 = -1;
int32_t x6826 = -1;
static volatile int64_t x6872 = INT64_MIN;
int32_t t67 = 189;
volatile int8_t x6967 = -1;
uint64_t x7106 = 975651028LLU;
volatile int32_t x7108 = INT32_MIN;
uint32_t x7293 = 1980811686U;
int8_t x7325 = -1;
int32_t x7329 = INT32_MIN;
volatile int64_t t74 = 24810285956896131LL;
volatile int8_t x7418 = INT8_MIN;
int64_t x7558 = INT64_MIN;
uint32_t x7724 = UINT32_MAX;
static volatile uint64_t x7807 = UINT64_MAX;
uint64_t x7878 = 1278191419LLU;
volatile uint32_t t83 = 1U;
static int32_t x8239 = -1;
volatile int64_t t84 = 0LL;


void f0(void) {
    	static volatile int32_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	static int32_t x296 = -1;
	int32_t t0 = INT32_MAX;

    t0 = ((x293^x294)/(x295==x296));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x397 = 6U;
	static uint32_t x398 = UINT32_MAX;
	static volatile int64_t x399 = -1LL;
	int64_t x400 = -1LL;

    t1 = ((x397^x398)/(x399==x400));

    if (t1 != 4294967289U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x729 = -1;
	uint8_t x730 = UINT8_MAX;
	int64_t x731 = INT64_MIN;
	static int64_t x732 = INT64_MIN;
	volatile int32_t t2 = 1981009;

    t2 = ((x729^x730)/(x731==x732));

    if (t2 != -256) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x781 = 2U;
	int16_t x782 = INT16_MIN;
	int8_t x783 = 0;
	uint8_t x784 = 0U;
	static int32_t t3 = -48620962;

    t3 = ((x781^x782)/(x783==x784));

    if (t3 != -32766) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x797 = -1LL;
	static volatile int16_t x798 = 47;
	int32_t x799 = -1;
	volatile int16_t x800 = -1;
	volatile int64_t t4 = -511160056511002LL;

    t4 = ((x797^x798)/(x799==x800));

    if (t4 != -48LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x961 = UINT16_MAX;
	uint8_t x962 = 1U;
	int16_t x963 = -1;
	static uint64_t x964 = UINT64_MAX;

    t5 = ((x961^x962)/(x963==x964));

    if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x1013 = 4U;
	static int8_t x1014 = 1;
	static volatile int64_t x1015 = -1LL;
	static int64_t x1016 = -1LL;
	static int32_t t6 = -7;

    t6 = ((x1013^x1014)/(x1015==x1016));

    if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x1393 = 3169;
	volatile int32_t x1394 = INT32_MIN;
	static volatile int8_t x1395 = -1;
	uint64_t x1396 = UINT64_MAX;
	int32_t t7 = -1;

    t7 = ((x1393^x1394)/(x1395==x1396));

    if (t7 != -2147480479) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x1589 = 3785517;
	int8_t x1590 = INT8_MIN;
	static int32_t x1591 = INT32_MAX;
	int32_t x1592 = INT32_MAX;
	static int32_t t8 = -40712533;

    t8 = ((x1589^x1590)/(x1591==x1592));

    if (t8 != -3785555) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x1629 = 30519U;
	static int16_t x1630 = -1;
	uint32_t x1631 = UINT32_MAX;
	uint32_t x1632 = UINT32_MAX;
	volatile int32_t t9 = -937906;

    t9 = ((x1629^x1630)/(x1631==x1632));

    if (t9 != -30520) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x1685 = 2013566U;
	int16_t x1687 = -1;
	int64_t x1688 = -1LL;
	static uint32_t t10 = 55907212U;

    t10 = ((x1685^x1686)/(x1687==x1688));

    if (t10 != 12348927U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x1765 = INT8_MIN;
	int64_t x1766 = -3LL;
	int8_t x1767 = INT8_MIN;
	int8_t x1768 = INT8_MIN;

    t11 = ((x1765^x1766)/(x1767==x1768));

    if (t11 != 125LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x1861 = 11122132LL;
	int32_t x1862 = -1;
	int8_t x1863 = -1;
	volatile int16_t x1864 = -1;
	int64_t t12 = -491959373285829LL;

    t12 = ((x1861^x1862)/(x1863==x1864));

    if (t12 != -11122133LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x2101 = INT64_MAX;
	uint16_t x2102 = UINT16_MAX;
	int8_t x2103 = INT8_MIN;
	static int8_t x2104 = INT8_MIN;
	volatile int64_t t13 = 3LL;

    t13 = ((x2101^x2102)/(x2103==x2104));

    if (t13 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x2229 = INT32_MIN;
	volatile uint32_t x2230 = 285U;
	static int32_t x2232 = INT32_MIN;
	uint32_t t14 = 4041760U;

    t14 = ((x2229^x2230)/(x2231==x2232));

    if (t14 != 2147483933U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x2361 = -143487150972LL;
	int16_t x2362 = INT16_MIN;
	static int8_t x2363 = -1;
	uint32_t x2364 = UINT32_MAX;
	int64_t t15 = 14063LL;

    t15 = ((x2361^x2362)/(x2363==x2364));

    if (t15 != 143487161476LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x2513 = INT32_MIN;
	int64_t x2514 = INT64_MAX;
	static int32_t x2515 = -1;
	int8_t x2516 = -1;
	static volatile int64_t t16 = -81003871958477773LL;

    t16 = ((x2513^x2514)/(x2515==x2516));

    if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x2538 = 47LLU;
	static volatile uint32_t x2539 = UINT32_MAX;
	static int32_t x2540 = -1;
	uint64_t t17 = 505757763451398LLU;

    t17 = ((x2537^x2538)/(x2539==x2540));

    if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x2545 = UINT16_MAX;
	int16_t x2546 = 346;
	static int32_t x2547 = -1;
	static uint64_t x2548 = UINT64_MAX;

    t18 = ((x2545^x2546)/(x2547==x2548));

    if (t18 != 65189) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x2621 = INT64_MAX;
	int16_t x2622 = INT16_MAX;
	int8_t x2623 = -1;
	static uint32_t x2624 = UINT32_MAX;
	static volatile int64_t t19 = -115146839898935LL;

    t19 = ((x2621^x2622)/(x2623==x2624));

    if (t19 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x2710 = 2297386906106332017LL;
	int32_t x2711 = INT32_MIN;
	int32_t x2712 = INT32_MIN;
	int64_t t20 = 4694263112388LL;

    t20 = ((x2709^x2710)/(x2711==x2712));

    if (t20 != 2297386905813710987LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x2841 = -1;
	int32_t x2843 = -1;
	int32_t x2844 = -1;
	volatile int32_t t21 = -355885;

    t21 = ((x2841^x2842)/(x2843==x2844));

    if (t21 != -256) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2865 = INT8_MIN;
	volatile uint64_t x2867 = 1LLU;
	int8_t x2868 = 1;
	int32_t t22 = -36;

    t22 = ((x2865^x2866)/(x2867==x2868));

    if (t22 != 2147483520) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x2883 = -1;
	int32_t t23 = 103;

    t23 = ((x2881^x2882)/(x2883==x2884));

    if (t23 != 2147458646) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2997 = 4U;
	int32_t x2998 = INT32_MIN;
	int64_t x2999 = INT64_MIN;
	int64_t x3000 = INT64_MIN;
	static int32_t t24 = 975;

    t24 = ((x2997^x2998)/(x2999==x3000));

    if (t24 != -2147483644) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x3033 = -1LL;
	static volatile int16_t x3034 = 11693;
	static int32_t x3035 = INT32_MIN;
	int32_t x3036 = INT32_MIN;
	volatile int64_t t25 = 5684312509496223LL;

    t25 = ((x3033^x3034)/(x3035==x3036));

    if (t25 != -11694LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x3037 = INT8_MIN;
	int16_t x3038 = INT16_MAX;
	uint64_t x3040 = UINT64_MAX;
	volatile int32_t t26 = 497;

    t26 = ((x3037^x3038)/(x3039==x3040));

    if (t26 != -32641) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x3073 = INT16_MIN;
	int8_t x3074 = 0;
	int16_t x3075 = INT16_MIN;
	volatile int32_t t27 = 1278071;

    t27 = ((x3073^x3074)/(x3075==x3076));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x3141 = 591942116712015150LL;
	uint8_t x3143 = UINT8_MAX;
	static uint8_t x3144 = UINT8_MAX;

    t28 = ((x3141^x3142)/(x3143==x3144));

    if (t28 != 591942116712015137LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x3381 = INT32_MIN;
	int16_t x3382 = INT16_MAX;
	int8_t x3383 = -1;
	int16_t x3384 = -1;
	static volatile int32_t t29 = -1;

    t29 = ((x3381^x3382)/(x3383==x3384));

    if (t29 != -2147450881) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x3437 = 7U;
	int16_t x3439 = -1;
	volatile int32_t t30 = 58153122;

    t30 = ((x3437^x3438)/(x3439==x3440));

    if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x3477 = INT64_MAX;
	static volatile int16_t x3478 = -1;
	int64_t x3479 = -1LL;
	volatile int64_t t31 = INT64_MIN;

    t31 = ((x3477^x3478)/(x3479==x3480));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x3482 = -1;
	uint64_t x3483 = UINT64_MAX;
	int32_t x3484 = -1;
	int32_t t32 = 43681702;

    t32 = ((x3481^x3482)/(x3483==x3484));

    if (t32 != 344526) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x3689 = -1894LL;
	static int16_t x3691 = -1;
	uint64_t x3692 = UINT64_MAX;
	int64_t t33 = -26964543972255570LL;

    t33 = ((x3689^x3690)/(x3691==x3692));

    if (t33 != -2147481755LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x3725 = -1;
	volatile int16_t x3728 = INT16_MAX;
	volatile int32_t t34 = -5;

    t34 = ((x3725^x3726)/(x3727==x3728));

    if (t34 != 10798176) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x3769 = 5715;
	volatile uint8_t x3770 = 0U;
	static uint64_t x3771 = UINT64_MAX;
	int64_t x3772 = -1LL;
	volatile int32_t t35 = 10937767;

    t35 = ((x3769^x3770)/(x3771==x3772));

    if (t35 != 5715) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3845 = INT64_MIN;
	int8_t x3848 = -1;
	volatile int64_t t36 = -4269610948932LL;

    t36 = ((x3845^x3846)/(x3847==x3848));

    if (t36 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x3930 = -1;
	volatile uint32_t x3931 = UINT32_MAX;
	int16_t x3932 = -1;

    t37 = ((x3929^x3930)/(x3931==x3932));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x4001 = -1;
	int32_t x4003 = INT32_MIN;

    t38 = ((x4001^x4002)/(x4003==x4004));

    if (t38 != 18446744073709530380LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x4041 = -1LL;
	int16_t x4042 = -2183;
	uint8_t x4043 = UINT8_MAX;
	uint8_t x4044 = UINT8_MAX;

    t39 = ((x4041^x4042)/(x4043==x4044));

    if (t39 != 2182LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x4166 = -10;
	uint8_t x4167 = 17U;
	static uint8_t x4168 = 17U;
	int32_t t40 = -913948839;

    t40 = ((x4165^x4166)/(x4167==x4168));

    if (t40 != 2147483638) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x4217 = INT64_MIN;
	uint8_t x4218 = UINT8_MAX;
	int64_t x4219 = -1LL;
	volatile int64_t t41 = -25360776266327LL;

    t41 = ((x4217^x4218)/(x4219==x4220));

    if (t41 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x4269 = -4;
	int8_t x4270 = 3;
	int64_t x4272 = INT64_MAX;
	int32_t t42 = -531589;

    t42 = ((x4269^x4270)/(x4271==x4272));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x4353 = UINT64_MAX;
	int64_t x4354 = 17128372827328173LL;
	volatile int16_t x4356 = -1;
	uint64_t t43 = 0LLU;

    t43 = ((x4353^x4354)/(x4355==x4356));

    if (t43 != 18429615700882223442LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x4369 = UINT8_MAX;
	volatile uint8_t x4370 = 3U;
	int16_t x4371 = INT16_MAX;
	static int32_t t44 = -1673;

    t44 = ((x4369^x4370)/(x4371==x4372));

    if (t44 != 252) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x4477 = INT32_MIN;
	int32_t x4478 = -92081;
	uint64_t x4479 = UINT64_MAX;
	static int8_t x4480 = -1;
	volatile int32_t t45 = 1410;

    t45 = ((x4477^x4478)/(x4479==x4480));

    if (t45 != 2147391567) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x4633 = UINT32_MAX;
	int64_t x4634 = -114LL;
	static int8_t x4635 = INT8_MIN;
	volatile int8_t x4636 = INT8_MIN;
	int64_t t46 = -17677732991658107LL;

    t46 = ((x4633^x4634)/(x4635==x4636));

    if (t46 != -4294967183LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x4777 = INT16_MIN;
	static uint16_t x4778 = 8U;
	volatile int16_t x4779 = -1;
	volatile int64_t x4780 = -1LL;
	int32_t t47 = -18969;

    t47 = ((x4777^x4778)/(x4779==x4780));

    if (t47 != -32760) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x4841 = -1;
	static uint32_t x4843 = UINT32_MAX;
	volatile int32_t t48 = INT32_MAX;

    t48 = ((x4841^x4842)/(x4843==x4844));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x4857 = 433U;
	static int32_t x4858 = 124;
	volatile int16_t x4859 = -1;
	int32_t x4860 = -1;
	volatile int32_t t49 = -78;

    t49 = ((x4857^x4858)/(x4859==x4860));

    if (t49 != 461) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x4933 = 18;
	uint32_t x4934 = 796U;
	static int32_t x4935 = -1;
	static volatile uint64_t x4936 = UINT64_MAX;
	uint32_t t50 = 226U;

    t50 = ((x4933^x4934)/(x4935==x4936));

    if (t50 != 782U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x5133 = -1;
	int8_t x5134 = INT8_MIN;
	int8_t x5135 = INT8_MIN;
	int8_t x5136 = INT8_MIN;
	static volatile int32_t t51 = -510896;

    t51 = ((x5133^x5134)/(x5135==x5136));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x5185 = INT64_MIN;
	uint8_t x5186 = UINT8_MAX;
	int16_t x5188 = INT16_MIN;
	int64_t t52 = 9833737LL;

    t52 = ((x5185^x5186)/(x5187==x5188));

    if (t52 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x5233 = INT32_MAX;
	int32_t x5234 = 728954;
	int16_t x5235 = INT16_MIN;
	static int16_t x5236 = INT16_MIN;

    t53 = ((x5233^x5234)/(x5235==x5236));

    if (t53 != 2146754693) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x5465 = 11423655726LLU;
	int32_t x5466 = 20477652;
	uint64_t x5467 = UINT64_MAX;
	int32_t x5468 = -1;
	uint64_t t54 = 145LLU;

    t54 = ((x5465^x5466)/(x5467==x5468));

    if (t54 != 11439919610LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x5469 = 674U;
	int8_t x5470 = -1;
	static int8_t x5471 = 0;
	uint8_t x5472 = 0U;
	int32_t t55 = -64565728;

    t55 = ((x5469^x5470)/(x5471==x5472));

    if (t55 != -675) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x5665 = INT16_MIN;
	volatile int32_t x5668 = INT32_MIN;
	int32_t t56 = 1;

    t56 = ((x5665^x5666)/(x5667==x5668));

    if (t56 != 2147450880) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x5721 = 656326LL;
	volatile int64_t x5722 = -1LL;
	int64_t x5724 = INT64_MAX;
	static volatile int64_t t57 = 67127729887788159LL;

    t57 = ((x5721^x5722)/(x5723==x5724));

    if (t57 != -656327LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x5825 = -1;
	int8_t x5828 = -1;

    t58 = ((x5825^x5826)/(x5827==x5828));

    if (t58 != 206278475896LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x6145 = INT8_MIN;
	static int16_t x6148 = -1;
	volatile int32_t t59 = -2087746;

    t59 = ((x6145^x6146)/(x6147==x6148));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x6265 = INT8_MIN;
	int32_t x6266 = INT32_MIN;
	static uint64_t x6268 = UINT64_MAX;
	int32_t t60 = 232;

    t60 = ((x6265^x6266)/(x6267==x6268));

    if (t60 != 2147483520) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x6409 = INT64_MIN;
	uint16_t x6410 = 18U;
	static volatile int8_t x6411 = -1;
	int32_t x6412 = -1;
	volatile int64_t t61 = -66332898LL;

    t61 = ((x6409^x6410)/(x6411==x6412));

    if (t61 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x6545 = 371U;
	volatile int16_t x6546 = INT16_MIN;
	static int8_t x6547 = INT8_MAX;
	static volatile int8_t x6548 = INT8_MAX;
	static volatile uint32_t t62 = 181062U;

    t62 = ((x6545^x6546)/(x6547==x6548));

    if (t62 != 4294934899U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x6661 = INT32_MIN;
	uint16_t x6662 = 18906U;
	int64_t x6663 = -1LL;
	int8_t x6664 = -1;
	static int32_t t63 = -47541081;

    t63 = ((x6661^x6662)/(x6663==x6664));

    if (t63 != -2147464742) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x6805 = 1U;
	static int16_t x6808 = -1;
	int32_t t64 = 151336246;

    t64 = ((x6805^x6806)/(x6807==x6808));

    if (t64 != 150) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x6825 = 10U;
	static uint8_t x6827 = UINT8_MAX;
	volatile uint8_t x6828 = UINT8_MAX;
	volatile int32_t t65 = -16909700;

    t65 = ((x6825^x6826)/(x6827==x6828));

    if (t65 != -11) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x6869 = INT16_MIN;
	volatile int16_t x6870 = INT16_MIN;
	int64_t x6871 = INT64_MIN;
	int32_t t66 = 1;

    t66 = ((x6869^x6870)/(x6871==x6872));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x6873 = 887;
	volatile int8_t x6874 = INT8_MIN;
	int64_t x6875 = -1LL;
	int8_t x6876 = -1;

    t67 = ((x6873^x6874)/(x6875==x6876));

    if (t67 != -777) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x6965 = INT8_MAX;
	static int8_t x6966 = INT8_MIN;
	int64_t x6968 = -1LL;
	int32_t t68 = 0;

    t68 = ((x6965^x6966)/(x6967==x6968));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x7105 = INT8_MAX;
	volatile int32_t x7107 = INT32_MIN;
	uint64_t t69 = 56LLU;

    t69 = ((x7105^x7106)/(x7107==x7108));

    if (t69 != 975650987LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x7237 = INT64_MAX;
	static volatile int16_t x7238 = INT16_MAX;
	static int16_t x7239 = 1;
	static int8_t x7240 = 1;
	int64_t t70 = 231902LL;

    t70 = ((x7237^x7238)/(x7239==x7240));

    if (t70 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x7294 = UINT32_MAX;
	volatile int16_t x7295 = -1;
	static int16_t x7296 = -1;
	volatile uint32_t t71 = 0U;

    t71 = ((x7293^x7294)/(x7295==x7296));

    if (t71 != 2314155609U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x7326 = -6LL;
	static int8_t x7327 = -1;
	uint32_t x7328 = UINT32_MAX;
	static int64_t t72 = 7259LL;

    t72 = ((x7325^x7326)/(x7327==x7328));

    if (t72 != 5LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x7330 = 6558U;
	int16_t x7331 = INT16_MIN;
	int16_t x7332 = INT16_MIN;
	volatile uint32_t t73 = 58957U;

    t73 = ((x7329^x7330)/(x7331==x7332));

    if (t73 != 2147490206U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x7381 = 83059390612LL;
	int64_t x7382 = -4460LL;
	int16_t x7383 = INT16_MIN;
	int16_t x7384 = INT16_MIN;

    t74 = ((x7381^x7382)/(x7383==x7384));

    if (t74 != -83059386880LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x7417 = -1;
	int32_t x7419 = -1;
	static uint64_t x7420 = UINT64_MAX;
	volatile int32_t t75 = 39;

    t75 = ((x7417^x7418)/(x7419==x7420));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x7557 = UINT8_MAX;
	int32_t x7559 = INT32_MIN;
	volatile int32_t x7560 = INT32_MIN;
	volatile int64_t t76 = 287738963LL;

    t76 = ((x7557^x7558)/(x7559==x7560));

    if (t76 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x7721 = 34;
	uint8_t x7722 = UINT8_MAX;
	int16_t x7723 = -1;
	static int32_t t77 = 199351162;

    t77 = ((x7721^x7722)/(x7723==x7724));

    if (t77 != 221) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x7725 = INT16_MIN;
	int8_t x7726 = INT8_MIN;
	volatile uint16_t x7727 = UINT16_MAX;
	uint16_t x7728 = UINT16_MAX;
	int32_t t78 = -295766603;

    t78 = ((x7725^x7726)/(x7727==x7728));

    if (t78 != 32640) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x7805 = UINT16_MAX;
	uint8_t x7806 = UINT8_MAX;
	volatile int16_t x7808 = -1;
	volatile int32_t t79 = 3630;

    t79 = ((x7805^x7806)/(x7807==x7808));

    if (t79 != 65280) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x7877 = INT32_MIN;
	volatile int64_t x7879 = -1LL;
	static int64_t x7880 = -1LL;
	volatile uint64_t t80 = 517035985506826803LLU;

    t80 = ((x7877^x7878)/(x7879==x7880));

    if (t80 != 18446744072840259387LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x7881 = INT32_MIN;
	int16_t x7882 = 1;
	volatile int32_t x7883 = -1;
	uint32_t x7884 = UINT32_MAX;
	int32_t t81 = 328;

    t81 = ((x7881^x7882)/(x7883==x7884));

    if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x7977 = 0U;
	uint16_t x7978 = 1U;
	int16_t x7979 = -1;
	int32_t x7980 = -1;
	int32_t t82 = -2;

    t82 = ((x7977^x7978)/(x7979==x7980));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x8137 = 57606;
	uint32_t x8138 = 8400053U;
	static volatile uint32_t x8139 = UINT32_MAX;
	static int8_t x8140 = -1;

    t83 = ((x8137^x8138)/(x8139==x8140));

    if (t83 != 8441267U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x8237 = 2U;
	volatile int64_t x8238 = INT64_MAX;
	int16_t x8240 = -1;

    t84 = ((x8237^x8238)/(x8239==x8240));

    if (t84 != 9223372036854775805LL) { NG(); } else { ; }
	
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


    return 0;
}

