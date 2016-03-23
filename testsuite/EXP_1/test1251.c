
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

volatile uint8_t x17 = 0U;
int8_t x18 = -1;
volatile uint8_t x19 = 12U;
int8_t x20 = -1;
int16_t x106 = -1;
volatile int64_t x124 = INT64_MIN;
int16_t x233 = INT16_MIN;
int8_t x251 = 1;
int8_t x274 = INT8_MAX;
int32_t x276 = -10320;
uint32_t x305 = UINT32_MAX;
volatile int16_t x306 = INT16_MAX;
int32_t t9 = -2350;
uint16_t x363 = 0U;
static int16_t x364 = INT16_MAX;
int32_t x370 = INT32_MAX;
int8_t x372 = INT8_MAX;
int64_t t13 = 640173LL;
uint32_t x483 = 3U;
static int8_t x514 = -1;
static int64_t x525 = INT64_MAX;
volatile uint8_t x527 = 1U;
uint32_t t17 = 843969714U;
volatile uint32_t t18 = 2U;
uint32_t x601 = 3270709U;
int8_t x603 = 5;
int32_t x643 = 0;
static int32_t x674 = INT32_MAX;
volatile int32_t t22 = 60475209;
volatile int16_t x689 = -59;
int8_t x692 = -4;
int8_t x696 = INT8_MIN;
volatile int32_t t25 = -3033;
volatile uint16_t x709 = 0U;
int64_t x744 = INT64_MAX;
uint64_t x776 = 64767059424108461LLU;
volatile uint64_t t28 = 1065845458227524LLU;
static int16_t x860 = 8;
uint8_t x895 = 7U;
static int8_t x905 = INT8_MIN;
static volatile uint8_t x907 = 2U;
int64_t x909 = INT64_MIN;
static int8_t x911 = 1;
int16_t x919 = 1;
static uint64_t x931 = 13LLU;
int64_t x1041 = -62135LL;
int32_t t37 = -4;
int32_t x1066 = -83462221;
volatile int32_t t38 = -917472;
static volatile int8_t x1115 = 0;
int32_t t40 = -1;
uint64_t x1213 = 25871079759LLU;
volatile uint64_t x1215 = 7LLU;
volatile int32_t t41 = 362;
int8_t x1255 = 12;
volatile int32_t t43 = 37;
int32_t x1310 = -1;
static uint8_t x1323 = 2U;
volatile int32_t t45 = -525965228;
int32_t x1325 = -1;
volatile int8_t x1332 = INT8_MAX;
volatile int32_t t49 = 521171370;
int8_t x1745 = -1;
int64_t x1810 = INT64_MAX;
int8_t x1812 = INT8_MIN;
volatile int32_t t54 = 1328;
int32_t x1817 = INT32_MIN;
static int64_t x1819 = 1LL;
int32_t t57 = 1019435759;
int8_t x1949 = -1;
static volatile int64_t x1950 = INT64_MAX;
int16_t x1963 = 2;
int64_t t59 = -92LL;
int8_t x1989 = -1;
int64_t x2005 = 558173061283582LL;
int64_t x2006 = INT64_MIN;
volatile uint64_t x2040 = 8LLU;
static uint64_t t65 = 31475LLU;
uint32_t x2087 = 5U;
uint8_t x2099 = 19U;
int16_t x2121 = INT16_MIN;
int16_t x2123 = 0;
int64_t t68 = -21585620LL;
uint16_t x2127 = 3U;
int8_t x2128 = 3;
static int32_t t71 = 463484;
uint8_t x2205 = UINT8_MAX;
int8_t x2206 = -1;
int64_t x2309 = -1LL;
int16_t x2312 = INT16_MAX;
volatile int64_t x2334 = 1075163721LL;
static int64_t t77 = 246738548LL;
volatile int16_t x2429 = -1;
int8_t x2430 = 1;
int64_t t78 = -55035LL;
volatile int16_t x2445 = INT16_MIN;
int32_t x2446 = 11182302;
uint64_t x2447 = 10LLU;
volatile int32_t t80 = 713443;
uint16_t x2456 = 11410U;
int64_t x2520 = 154LL;
int32_t x2669 = INT32_MIN;
volatile uint64_t x2725 = 245931LLU;
static volatile uint32_t x2768 = 34U;
int32_t t89 = 6;
volatile int8_t x2891 = 2;
volatile int8_t x2901 = -47;
uint8_t x2903 = 5U;
int64_t x2909 = INT64_MIN;
volatile int16_t x2911 = 8;
volatile int32_t x2913 = -1;
uint8_t x2926 = 62U;
volatile int32_t t96 = -978923;
uint8_t x2942 = 1U;
volatile int8_t x2949 = -1;
uint16_t x2951 = 4U;
uint16_t x2991 = 1U;
uint8_t x3011 = 15U;
int32_t x3012 = INT32_MIN;
int32_t t104 = 198556101;
int32_t x3241 = INT32_MIN;
int32_t x3244 = INT32_MAX;
uint64_t x3287 = 1LLU;
int32_t x3288 = INT32_MIN;
static volatile int32_t t107 = -68;
uint16_t x3291 = 1U;
uint16_t x3403 = 6U;
uint16_t x3404 = 102U;
uint16_t x3409 = UINT16_MAX;
uint64_t x3410 = UINT64_MAX;
volatile uint8_t x3412 = 7U;
uint8_t x3465 = 0U;
int16_t x3541 = -1;
static uint64_t x3548 = 6872593513885512873LLU;
static volatile int8_t x3619 = 1;
static int32_t t121 = 406649404;
volatile int16_t x3643 = 0;
uint32_t t124 = 16U;
int64_t x3762 = 87778LL;
int64_t x3764 = -86077992LL;
int32_t t128 = 1;
int8_t x3982 = -19;
volatile int32_t t132 = 51425109;
uint64_t x4129 = 18544925LLU;
int64_t x4130 = -1LL;
int8_t x4131 = 0;
volatile int64_t x4132 = -1LL;
uint64_t x4176 = 29072380LLU;
int16_t x4224 = INT16_MIN;
volatile uint16_t x4271 = 29U;
int8_t x4272 = 6;
static uint16_t x4275 = 1U;
static uint8_t x4315 = 0U;
volatile int32_t t144 = -32102400;
volatile int32_t x4338 = -564699726;
static volatile int32_t t146 = -115802695;
int64_t x4429 = INT64_MIN;
static volatile int32_t t147 = 185998;
uint64_t x4536 = 789141616355LLU;
static volatile uint64_t t150 = 1LLU;
volatile int32_t x4553 = 170255;
volatile int64_t x4604 = INT64_MAX;
volatile uint64_t t155 = 6353511343LLU;
int16_t x4654 = INT16_MIN;
static int32_t t156 = -223;
uint16_t x4741 = 10308U;
int8_t x4801 = INT8_MAX;
uint32_t t160 = 319U;
int64_t t162 = 6LL;
static int8_t x5055 = 12;
volatile int32_t x5082 = 16554415;
static volatile uint16_t x5083 = 8U;
static int32_t t167 = -1877;
volatile uint16_t x5150 = 277U;
int32_t x5152 = INT32_MIN;
uint16_t x5181 = UINT16_MAX;
static int64_t x5184 = -1LL;
int64_t t170 = 5534678497231LL;
volatile uint8_t x5261 = 1U;
uint8_t x5271 = 0U;
volatile int8_t x5276 = 51;
static int16_t x5299 = 0;
int8_t x5340 = INT8_MIN;
static uint8_t x5348 = 61U;
volatile int32_t t179 = 9;
static int32_t x5418 = INT32_MIN;
int64_t x5438 = INT64_MIN;
volatile int8_t x5453 = -52;
volatile int32_t x5454 = -1;
int64_t x5469 = INT64_MAX;
volatile int16_t x5577 = -1;
int8_t x5578 = INT8_MAX;
int16_t x5794 = 1400;
int8_t x5818 = -1;
static volatile int64_t t189 = -58LL;
int8_t x5876 = -1;
uint16_t x5904 = 29U;
int32_t t194 = -717;
int8_t x6051 = 0;
int32_t t197 = 20886975;
volatile int8_t x6059 = 0;
int8_t x6072 = INT8_MAX;
int32_t t199 = -1589;


void f0(void) {
    	int32_t t0 = 2995;

    t0 = (((x17!=x18)<<x19)%x20);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x65 = INT16_MAX;
	volatile int64_t x66 = INT64_MIN;
	uint8_t x67 = 2U;
	volatile int8_t x68 = 6;
	int32_t t1 = 0;

    t1 = (((x65!=x66)<<x67)%x68);

    if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x105 = INT32_MAX;
	uint64_t x107 = 7LLU;
	static int64_t x108 = INT64_MAX;
	int64_t t2 = -121628546783LL;

    t2 = (((x105!=x106)<<x107)%x108);

    if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x121 = 3584689760LLU;
	static int64_t x122 = INT64_MIN;
	volatile int16_t x123 = 1;
	volatile int64_t t3 = -6770857120520LL;

    t3 = (((x121!=x122)<<x123)%x124);

    if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x234 = -1;
	uint8_t x235 = 0U;
	static uint8_t x236 = 57U;
	volatile int32_t t4 = -12;

    t4 = (((x233!=x234)<<x235)%x236);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	static int32_t t5 = 568;

    t5 = (((x249!=x250)<<x251)%x252);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x273 = 28LLU;
	int8_t x275 = 0;
	volatile int32_t t6 = -111346;

    t6 = (((x273!=x274)<<x275)%x276);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 12U;
	static uint8_t x291 = 6U;
	volatile uint64_t x292 = 3699242468678LLU;
	uint64_t t7 = 7231358878550360LLU;

    t7 = (((x289!=x290)<<x291)%x292);

    if (t7 != 64LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x307 = 2;
	int8_t x308 = INT8_MIN;
	static int32_t t8 = -11802;

    t8 = (((x305!=x306)<<x307)%x308);

    if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x325 = INT8_MAX;
	int16_t x326 = -1;
	uint16_t x327 = 0U;
	static int32_t x328 = INT32_MIN;

    t9 = (((x325!=x326)<<x327)%x328);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x361 = 1;
	int32_t x362 = -18;
	volatile int32_t t10 = -285472519;

    t10 = (((x361!=x362)<<x363)%x364);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x369 = INT16_MIN;
	int8_t x371 = 0;
	int32_t t11 = 28;

    t11 = (((x369!=x370)<<x371)%x372);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x401 = 3U;
	int32_t x402 = -1;
	static volatile uint16_t x403 = 6U;
	int64_t x404 = INT64_MAX;
	volatile int64_t t12 = 472LL;

    t12 = (((x401!=x402)<<x403)%x404);

    if (t12 != 64LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x425 = INT32_MIN;
	static int64_t x426 = INT64_MIN;
	uint16_t x427 = 0U;
	static int64_t x428 = INT64_MIN;

    t13 = (((x425!=x426)<<x427)%x428);

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x433 = 58305;
	int32_t x434 = 84185266;
	uint8_t x435 = 18U;
	volatile int32_t x436 = -9327;
	volatile int32_t t14 = -4;

    t14 = (((x433!=x434)<<x435)%x436);

    if (t14 != 988) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x481 = INT64_MIN;
	int8_t x482 = 2;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t15 = -364267909;

    t15 = (((x481!=x482)<<x483)%x484);

    if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x513 = 164U;
	uint8_t x515 = 0U;
	uint16_t x516 = 3U;
	int32_t t16 = 240;

    t16 = (((x513!=x514)<<x515)%x516);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x526 = UINT8_MAX;
	uint32_t x528 = 2009649487U;

    t17 = (((x525!=x526)<<x527)%x528);

    if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x541 = 1LL;
	static uint8_t x542 = UINT8_MAX;
	int16_t x543 = 24;
	uint32_t x544 = 432384U;

    t18 = (((x541!=x542)<<x543)%x544);

    if (t18 != 346624U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x602 = 4LLU;
	uint64_t x604 = UINT64_MAX;
	uint64_t t19 = 84886010968234195LLU;

    t19 = (((x601!=x602)<<x603)%x604);

    if (t19 != 32LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x641 = -1LL;
	uint8_t x642 = 3U;
	int8_t x644 = INT8_MIN;
	volatile int32_t t20 = -984;

    t20 = (((x641!=x642)<<x643)%x644);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x657 = INT16_MIN;
	uint64_t x658 = 5325278464067LLU;
	static uint16_t x659 = 30U;
	static int16_t x660 = 88;
	volatile int32_t t21 = -407253;

    t21 = (((x657!=x658)<<x659)%x660);

    if (t21 != 56) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x673 = -1;
	uint16_t x675 = 7U;
	int32_t x676 = INT32_MIN;

    t22 = (((x673!=x674)<<x675)%x676);

    if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x677 = INT32_MIN;
	static volatile int8_t x678 = -1;
	volatile int8_t x679 = 1;
	int32_t x680 = 13799820;
	static int32_t t23 = 46364650;

    t23 = (((x677!=x678)<<x679)%x680);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x690 = -1;
	uint16_t x691 = 7U;
	int32_t t24 = 5581177;

    t24 = (((x689!=x690)<<x691)%x692);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x693 = INT16_MAX;
	int16_t x694 = -4;
	volatile int8_t x695 = 7;

    t25 = (((x693!=x694)<<x695)%x696);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x710 = UINT16_MAX;
	uint8_t x711 = 0U;
	int64_t x712 = -1LL;
	static volatile int64_t t26 = 31345LL;

    t26 = (((x709!=x710)<<x711)%x712);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = -4;
	volatile uint16_t x743 = 7U;
	volatile int64_t t27 = -2577344004590LL;

    t27 = (((x741!=x742)<<x743)%x744);

    if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x773 = -1LL;
	static int32_t x774 = -52165;
	uint32_t x775 = 5U;

    t28 = (((x773!=x774)<<x775)%x776);

    if (t28 != 32LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x777 = 20040120;
	volatile int64_t x778 = INT64_MIN;
	volatile uint16_t x779 = 17U;
	uint8_t x780 = 10U;
	volatile int32_t t29 = 297268;

    t29 = (((x777!=x778)<<x779)%x780);

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x781 = INT8_MAX;
	int32_t x782 = -1;
	uint8_t x783 = 24U;
	int64_t x784 = INT64_MIN;
	int64_t t30 = 60LL;

    t30 = (((x781!=x782)<<x783)%x784);

    if (t30 != 16777216LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x857 = 36573371263665LLU;
	int8_t x858 = 17;
	int8_t x859 = 2;
	volatile int32_t t31 = 2;

    t31 = (((x857!=x858)<<x859)%x860);

    if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x893 = -1;
	int16_t x894 = 586;
	static volatile int8_t x896 = INT8_MIN;
	volatile int32_t t32 = 278421;

    t32 = (((x893!=x894)<<x895)%x896);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x906 = -1;
	int64_t x908 = INT64_MIN;
	volatile int64_t t33 = -1LL;

    t33 = (((x905!=x906)<<x907)%x908);

    if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x910 = 32U;
	static volatile int64_t x912 = INT64_MIN;
	int64_t t34 = -827LL;

    t34 = (((x909!=x910)<<x911)%x912);

    if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x917 = 3U;
	int16_t x918 = INT16_MAX;
	static uint8_t x920 = 1U;
	volatile int32_t t35 = -2380;

    t35 = (((x917!=x918)<<x919)%x920);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x929 = INT8_MAX;
	int8_t x930 = 0;
	uint16_t x932 = UINT16_MAX;
	int32_t t36 = 2798948;

    t36 = (((x929!=x930)<<x931)%x932);

    if (t36 != 8192) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x1042 = 7U;
	uint8_t x1043 = 9U;
	int8_t x1044 = -1;

    t37 = (((x1041!=x1042)<<x1043)%x1044);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1065 = 11888687U;
	int32_t x1067 = 0;
	int16_t x1068 = -1;

    t38 = (((x1065!=x1066)<<x1067)%x1068);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1069 = UINT32_MAX;
	int64_t x1070 = INT64_MIN;
	int16_t x1071 = 16;
	int64_t x1072 = INT64_MIN;
	static int64_t t39 = 6LL;

    t39 = (((x1069!=x1070)<<x1071)%x1072);

    if (t39 != 65536LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x1113 = -1;
	static int16_t x1114 = INT16_MIN;
	uint8_t x1116 = 5U;

    t40 = (((x1113!=x1114)<<x1115)%x1116);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1214 = 944;
	int32_t x1216 = -1;

    t41 = (((x1213!=x1214)<<x1215)%x1216);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1237 = INT64_MIN;
	volatile uint32_t x1238 = UINT32_MAX;
	int16_t x1239 = 1;
	int32_t x1240 = 245113;
	volatile int32_t t42 = 2;

    t42 = (((x1237!=x1238)<<x1239)%x1240);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1253 = -1;
	int16_t x1254 = INT16_MIN;
	volatile int32_t x1256 = INT32_MIN;

    t43 = (((x1253!=x1254)<<x1255)%x1256);

    if (t43 != 4096) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x1309 = 0U;
	uint8_t x1311 = 25U;
	volatile uint16_t x1312 = UINT16_MAX;
	int32_t t44 = 726342;

    t44 = (((x1309!=x1310)<<x1311)%x1312);

    if (t44 != 512) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1321 = 4080;
	volatile int8_t x1322 = 0;
	int32_t x1324 = -239;

    t45 = (((x1321!=x1322)<<x1323)%x1324);

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1326 = 650LLU;
	volatile uint8_t x1327 = 3U;
	int16_t x1328 = -1;
	static volatile int32_t t46 = 3;

    t46 = (((x1325!=x1326)<<x1327)%x1328);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1329 = -1;
	uint32_t x1330 = 244U;
	int16_t x1331 = 0;
	int32_t t47 = 75341997;

    t47 = (((x1329!=x1330)<<x1331)%x1332);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x1361 = INT64_MAX;
	int64_t x1362 = -54LL;
	uint8_t x1363 = 3U;
	uint32_t x1364 = 18U;
	volatile uint32_t t48 = 914U;

    t48 = (((x1361!=x1362)<<x1363)%x1364);

    if (t48 != 8U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x1393 = 217U;
	int8_t x1394 = -1;
	static int16_t x1395 = 14;
	int8_t x1396 = 3;

    t49 = (((x1393!=x1394)<<x1395)%x1396);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x1417 = -1;
	static int16_t x1418 = -1;
	uint64_t x1419 = 3LLU;
	int16_t x1420 = INT16_MIN;
	int32_t t50 = -3821325;

    t50 = (((x1417!=x1418)<<x1419)%x1420);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x1589 = 2U;
	volatile uint16_t x1590 = UINT16_MAX;
	volatile int8_t x1591 = 6;
	uint8_t x1592 = UINT8_MAX;
	int32_t t51 = -1;

    t51 = (((x1589!=x1590)<<x1591)%x1592);

    if (t51 != 64) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1746 = INT16_MIN;
	uint8_t x1747 = 3U;
	static uint32_t x1748 = 51U;
	static uint32_t t52 = 2926U;

    t52 = (((x1745!=x1746)<<x1747)%x1748);

    if (t52 != 8U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1805 = -1;
	int16_t x1806 = INT16_MIN;
	static volatile uint16_t x1807 = 23U;
	int8_t x1808 = -1;
	volatile int32_t t53 = 140;

    t53 = (((x1805!=x1806)<<x1807)%x1808);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1809 = INT16_MIN;
	int8_t x1811 = 7;

    t54 = (((x1809!=x1810)<<x1811)%x1812);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x1818 = 114U;
	int32_t x1820 = -1;
	int32_t t55 = 269315;

    t55 = (((x1817!=x1818)<<x1819)%x1820);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x1845 = 100443616U;
	uint32_t x1846 = UINT32_MAX;
	int16_t x1847 = 0;
	int64_t x1848 = -1019540911LL;
	static volatile int64_t t56 = 162919927229924LL;

    t56 = (((x1845!=x1846)<<x1847)%x1848);

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x1905 = -336369;
	int64_t x1906 = INT64_MAX;
	uint8_t x1907 = 0U;
	int8_t x1908 = INT8_MAX;

    t57 = (((x1905!=x1906)<<x1907)%x1908);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x1951 = 1;
	int32_t x1952 = -1;
	volatile int32_t t58 = -20;

    t58 = (((x1949!=x1950)<<x1951)%x1952);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1961 = -3472;
	int16_t x1962 = 135;
	static volatile int64_t x1964 = INT64_MIN;

    t59 = (((x1961!=x1962)<<x1963)%x1964);

    if (t59 != 4LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1965 = 62331;
	int8_t x1966 = INT8_MAX;
	static uint8_t x1967 = 25U;
	volatile int64_t x1968 = -1LL;
	volatile int64_t t60 = 23445838LL;

    t60 = (((x1965!=x1966)<<x1967)%x1968);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x1973 = INT16_MIN;
	int8_t x1974 = -2;
	int8_t x1975 = 1;
	int16_t x1976 = -1;
	volatile int32_t t61 = -10;

    t61 = (((x1973!=x1974)<<x1975)%x1976);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x1990 = 2876508U;
	uint8_t x1991 = 0U;
	volatile int16_t x1992 = INT16_MIN;
	volatile int32_t t62 = 15;

    t62 = (((x1989!=x1990)<<x1991)%x1992);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x2007 = 0;
	static int32_t x2008 = -1;
	int32_t t63 = -1844725;

    t63 = (((x2005!=x2006)<<x2007)%x2008);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x2037 = 24U;
	int64_t x2038 = 508174413982233942LL;
	static int8_t x2039 = 5;
	uint64_t t64 = 1711866009077723289LLU;

    t64 = (((x2037!=x2038)<<x2039)%x2040);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x2041 = 7U;
	int32_t x2042 = INT32_MIN;
	int32_t x2043 = 1;
	uint64_t x2044 = UINT64_MAX;

    t65 = (((x2041!=x2042)<<x2043)%x2044);

    if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2085 = -1;
	int8_t x2086 = -28;
	static uint8_t x2088 = 109U;
	volatile int32_t t66 = 176;

    t66 = (((x2085!=x2086)<<x2087)%x2088);

    if (t66 != 32) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x2097 = INT32_MAX;
	static volatile int64_t x2098 = INT64_MIN;
	int64_t x2100 = 5637917203LL;
	int64_t t67 = -1752677410507580LL;

    t67 = (((x2097!=x2098)<<x2099)%x2100);

    if (t67 != 524288LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x2122 = -1;
	volatile int64_t x2124 = INT64_MIN;

    t68 = (((x2121!=x2122)<<x2123)%x2124);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x2125 = INT8_MAX;
	volatile int32_t x2126 = INT32_MAX;
	static volatile int32_t t69 = -8181;

    t69 = (((x2125!=x2126)<<x2127)%x2128);

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x2149 = 113U;
	int64_t x2150 = -1LL;
	volatile int32_t x2151 = 8;
	int32_t x2152 = -1;
	int32_t t70 = 286698173;

    t70 = (((x2149!=x2150)<<x2151)%x2152);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2157 = 11435587071LLU;
	static int16_t x2158 = INT16_MAX;
	static int8_t x2159 = 2;
	int32_t x2160 = 73;

    t71 = (((x2157!=x2158)<<x2159)%x2160);

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x2193 = UINT16_MAX;
	uint8_t x2194 = 1U;
	static uint64_t x2195 = 6LLU;
	int8_t x2196 = INT8_MIN;
	int32_t t72 = -85;

    t72 = (((x2193!=x2194)<<x2195)%x2196);

    if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x2207 = 10U;
	static volatile int64_t x2208 = INT64_MIN;
	static volatile int64_t t73 = 5690680875186126LL;

    t73 = (((x2205!=x2206)<<x2207)%x2208);

    if (t73 != 1024LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2229 = 75LLU;
	static volatile int32_t x2230 = INT32_MIN;
	int8_t x2231 = 26;
	int64_t x2232 = INT64_MIN;
	int64_t t74 = 1063766228167LL;

    t74 = (((x2229!=x2230)<<x2231)%x2232);

    if (t74 != 67108864LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x2310 = -1;
	uint8_t x2311 = 5U;
	int32_t t75 = 198;

    t75 = (((x2309!=x2310)<<x2311)%x2312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x2333 = UINT64_MAX;
	volatile uint32_t x2335 = 3U;
	static int32_t x2336 = 866;
	volatile int32_t t76 = 1;

    t76 = (((x2333!=x2334)<<x2335)%x2336);

    if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x2365 = INT8_MIN;
	volatile int16_t x2366 = INT16_MIN;
	uint8_t x2367 = 24U;
	int64_t x2368 = INT64_MIN;

    t77 = (((x2365!=x2366)<<x2367)%x2368);

    if (t77 != 16777216LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x2431 = 0U;
	static int64_t x2432 = INT64_MAX;

    t78 = (((x2429!=x2430)<<x2431)%x2432);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2437 = INT32_MAX;
	int64_t x2438 = INT64_MIN;
	uint8_t x2439 = 2U;
	static volatile int16_t x2440 = INT16_MIN;
	static volatile int32_t t79 = -1141946;

    t79 = (((x2437!=x2438)<<x2439)%x2440);

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x2448 = INT16_MIN;

    t80 = (((x2445!=x2446)<<x2447)%x2448);

    if (t80 != 1024) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2453 = INT32_MIN;
	int8_t x2454 = -1;
	volatile uint16_t x2455 = 7U;
	static int32_t t81 = -33;

    t81 = (((x2453!=x2454)<<x2455)%x2456);

    if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x2517 = -1;
	static uint32_t x2518 = UINT32_MAX;
	static uint8_t x2519 = 25U;
	int64_t t82 = -12190562271922LL;

    t82 = (((x2517!=x2518)<<x2519)%x2520);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x2529 = -1LL;
	uint64_t x2530 = 7754193885584248LLU;
	int32_t x2531 = 6;
	int64_t x2532 = INT64_MAX;
	volatile int64_t t83 = -10128276LL;

    t83 = (((x2529!=x2530)<<x2531)%x2532);

    if (t83 != 64LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x2577 = INT64_MIN;
	uint16_t x2578 = 685U;
	int8_t x2579 = 5;
	int8_t x2580 = 1;
	volatile int32_t t84 = -822801369;

    t84 = (((x2577!=x2578)<<x2579)%x2580);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2665 = INT64_MIN;
	int16_t x2666 = 9483;
	volatile uint8_t x2667 = 0U;
	int16_t x2668 = INT16_MIN;
	volatile int32_t t85 = 33;

    t85 = (((x2665!=x2666)<<x2667)%x2668);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x2670 = 13425U;
	static uint16_t x2671 = 16U;
	uint64_t x2672 = UINT64_MAX;
	uint64_t t86 = 24664741LLU;

    t86 = (((x2669!=x2670)<<x2671)%x2672);

    if (t86 != 65536LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x2726 = 2U;
	int8_t x2727 = 1;
	int32_t x2728 = 30845338;
	volatile int32_t t87 = 1;

    t87 = (((x2725!=x2726)<<x2727)%x2728);

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x2765 = 0U;
	int8_t x2766 = INT8_MAX;
	uint64_t x2767 = 0LLU;
	volatile uint32_t t88 = 67U;

    t88 = (((x2765!=x2766)<<x2767)%x2768);

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x2845 = 499U;
	int16_t x2846 = INT16_MIN;
	int16_t x2847 = 6;
	uint8_t x2848 = UINT8_MAX;

    t89 = (((x2845!=x2846)<<x2847)%x2848);

    if (t89 != 64) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x2885 = INT32_MIN;
	int8_t x2886 = 39;
	uint16_t x2887 = 18U;
	int64_t x2888 = INT64_MIN;
	volatile int64_t t90 = -649468461150848489LL;

    t90 = (((x2885!=x2886)<<x2887)%x2888);

    if (t90 != 262144LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2889 = 1;
	uint64_t x2890 = 835939LLU;
	uint64_t x2892 = 46305LLU;
	volatile uint64_t t91 = 4407278004664549868LLU;

    t91 = (((x2889!=x2890)<<x2891)%x2892);

    if (t91 != 4LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x2902 = 98;
	uint8_t x2904 = UINT8_MAX;
	volatile int32_t t92 = -367;

    t92 = (((x2901!=x2902)<<x2903)%x2904);

    if (t92 != 32) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x2910 = -1;
	int16_t x2912 = 9235;
	int32_t t93 = 6278353;

    t93 = (((x2909!=x2910)<<x2911)%x2912);

    if (t93 != 256) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x2914 = 295;
	static volatile uint16_t x2915 = 7U;
	static uint8_t x2916 = UINT8_MAX;
	volatile int32_t t94 = -24;

    t94 = (((x2913!=x2914)<<x2915)%x2916);

    if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x2925 = -10;
	volatile int8_t x2927 = 6;
	int16_t x2928 = INT16_MIN;
	static volatile int32_t t95 = 341470;

    t95 = (((x2925!=x2926)<<x2927)%x2928);

    if (t95 != 64) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x2937 = INT8_MIN;
	int32_t x2938 = INT32_MIN;
	static uint32_t x2939 = 1U;
	static int8_t x2940 = 6;

    t96 = (((x2937!=x2938)<<x2939)%x2940);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x2941 = -1;
	uint8_t x2943 = 4U;
	int8_t x2944 = -1;
	int32_t t97 = -118760;

    t97 = (((x2941!=x2942)<<x2943)%x2944);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x2950 = INT8_MIN;
	uint32_t x2952 = UINT32_MAX;
	uint32_t t98 = 17U;

    t98 = (((x2949!=x2950)<<x2951)%x2952);

    if (t98 != 16U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x2953 = UINT16_MAX;
	int32_t x2954 = INT32_MIN;
	volatile int8_t x2955 = 2;
	int16_t x2956 = 46;
	volatile int32_t t99 = -13;

    t99 = (((x2953!=x2954)<<x2955)%x2956);

    if (t99 != 4) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x2957 = INT8_MAX;
	static uint16_t x2958 = UINT16_MAX;
	uint16_t x2959 = 30U;
	int16_t x2960 = -14;
	static volatile int32_t t100 = 65827692;

    t100 = (((x2957!=x2958)<<x2959)%x2960);

    if (t100 != 8) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x2985 = INT32_MIN;
	uint16_t x2986 = 60U;
	uint16_t x2987 = 2U;
	int16_t x2988 = INT16_MIN;
	int32_t t101 = -110313734;

    t101 = (((x2985!=x2986)<<x2987)%x2988);

    if (t101 != 4) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x2989 = INT16_MIN;
	uint32_t x2990 = 1U;
	static int64_t x2992 = -1LL;
	static int64_t t102 = 1LL;

    t102 = (((x2989!=x2990)<<x2991)%x2992);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x3009 = INT16_MIN;
	uint8_t x3010 = UINT8_MAX;
	static int32_t t103 = -13267827;

    t103 = (((x3009!=x3010)<<x3011)%x3012);

    if (t103 != 32768) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x3185 = 19425006LL;
	int16_t x3186 = INT16_MIN;
	volatile uint16_t x3187 = 11U;
	static uint8_t x3188 = 77U;

    t104 = (((x3185!=x3186)<<x3187)%x3188);

    if (t104 != 46) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3201 = INT64_MIN;
	static int8_t x3202 = INT8_MIN;
	static volatile int8_t x3203 = 13;
	int8_t x3204 = INT8_MIN;
	static int32_t t105 = 52279336;

    t105 = (((x3201!=x3202)<<x3203)%x3204);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x3242 = 20U;
	static uint32_t x3243 = 2U;
	int32_t t106 = 9249197;

    t106 = (((x3241!=x3242)<<x3243)%x3244);

    if (t106 != 4) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x3285 = 177089638LLU;
	uint64_t x3286 = UINT64_MAX;

    t107 = (((x3285!=x3286)<<x3287)%x3288);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x3289 = INT32_MAX;
	uint16_t x3290 = 1U;
	uint64_t x3292 = UINT64_MAX;
	volatile uint64_t t108 = 27993515614LLU;

    t108 = (((x3289!=x3290)<<x3291)%x3292);

    if (t108 != 2LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3305 = -1;
	int64_t x3306 = INT64_MAX;
	uint8_t x3307 = 2U;
	volatile int16_t x3308 = INT16_MIN;
	int32_t t109 = 117227;

    t109 = (((x3305!=x3306)<<x3307)%x3308);

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x3345 = 0U;
	int64_t x3346 = -1LL;
	volatile uint8_t x3347 = 0U;
	int32_t x3348 = -129888372;
	static volatile int32_t t110 = -129610350;

    t110 = (((x3345!=x3346)<<x3347)%x3348);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x3377 = INT64_MIN;
	uint32_t x3378 = 1U;
	uint32_t x3379 = 20U;
	int8_t x3380 = -1;
	int32_t t111 = -65;

    t111 = (((x3377!=x3378)<<x3379)%x3380);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x3401 = INT8_MIN;
	volatile int64_t x3402 = INT64_MIN;
	int32_t t112 = 11761878;

    t112 = (((x3401!=x3402)<<x3403)%x3404);

    if (t112 != 64) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x3411 = 11U;
	int32_t t113 = 249;

    t113 = (((x3409!=x3410)<<x3411)%x3412);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3466 = 143U;
	int16_t x3467 = 0;
	uint16_t x3468 = 3U;
	int32_t t114 = 142413484;

    t114 = (((x3465!=x3466)<<x3467)%x3468);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x3469 = 244U;
	volatile uint64_t x3470 = 429852901675LLU;
	static volatile uint8_t x3471 = 13U;
	int64_t x3472 = -2416917983LL;
	int64_t t115 = 193104606648739LL;

    t115 = (((x3469!=x3470)<<x3471)%x3472);

    if (t115 != 8192LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x3485 = 19U;
	static uint8_t x3486 = UINT8_MAX;
	int16_t x3487 = 0;
	uint32_t x3488 = 717U;
	volatile uint32_t t116 = 62370U;

    t116 = (((x3485!=x3486)<<x3487)%x3488);

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3525 = -1;
	int16_t x3526 = -3;
	uint16_t x3527 = 1U;
	volatile int32_t x3528 = -814;
	static int32_t t117 = 89;

    t117 = (((x3525!=x3526)<<x3527)%x3528);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x3542 = 27;
	static int16_t x3543 = 1;
	int64_t x3544 = INT64_MIN;
	int64_t t118 = 758252267LL;

    t118 = (((x3541!=x3542)<<x3543)%x3544);

    if (t118 != 2LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3545 = INT32_MIN;
	int64_t x3546 = INT64_MIN;
	int16_t x3547 = 2;
	uint64_t t119 = 0LLU;

    t119 = (((x3545!=x3546)<<x3547)%x3548);

    if (t119 != 4LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x3597 = -1;
	volatile uint32_t x3598 = 29485U;
	int8_t x3599 = 5;
	int8_t x3600 = -1;
	volatile int32_t t120 = -113;

    t120 = (((x3597!=x3598)<<x3599)%x3600);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3617 = -1LL;
	uint64_t x3618 = UINT64_MAX;
	volatile int8_t x3620 = -1;

    t121 = (((x3617!=x3618)<<x3619)%x3620);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x3641 = INT16_MAX;
	volatile int64_t x3642 = INT64_MAX;
	static int16_t x3644 = -1;
	int32_t t122 = -15023656;

    t122 = (((x3641!=x3642)<<x3643)%x3644);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x3741 = -813;
	int8_t x3742 = INT8_MIN;
	uint16_t x3743 = 0U;
	int16_t x3744 = 516;
	static int32_t t123 = -61;

    t123 = (((x3741!=x3742)<<x3743)%x3744);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x3745 = -11;
	int16_t x3746 = INT16_MIN;
	uint32_t x3747 = 3U;
	static uint32_t x3748 = 914382275U;

    t124 = (((x3745!=x3746)<<x3747)%x3748);

    if (t124 != 8U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x3761 = UINT8_MAX;
	uint32_t x3763 = 8U;
	volatile int64_t t125 = 86397LL;

    t125 = (((x3761!=x3762)<<x3763)%x3764);

    if (t125 != 256LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x3793 = 12016414U;
	uint16_t x3794 = UINT16_MAX;
	uint8_t x3795 = 3U;
	int32_t x3796 = -1;
	volatile int32_t t126 = -174488;

    t126 = (((x3793!=x3794)<<x3795)%x3796);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x3821 = 168457287759LLU;
	static int8_t x3822 = INT8_MIN;
	volatile int8_t x3823 = 1;
	int32_t x3824 = -142077;
	volatile int32_t t127 = -43178509;

    t127 = (((x3821!=x3822)<<x3823)%x3824);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x3829 = INT8_MAX;
	uint32_t x3830 = 29948U;
	static volatile int8_t x3831 = 1;
	static uint16_t x3832 = 191U;

    t128 = (((x3829!=x3830)<<x3831)%x3832);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x3929 = INT8_MAX;
	volatile int64_t x3930 = INT64_MIN;
	uint16_t x3931 = 22U;
	int16_t x3932 = INT16_MAX;
	volatile int32_t t129 = 461656;

    t129 = (((x3929!=x3930)<<x3931)%x3932);

    if (t129 != 128) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x3953 = 6024452U;
	static int32_t x3954 = INT32_MIN;
	uint64_t x3955 = 7LLU;
	volatile int8_t x3956 = -1;
	volatile int32_t t130 = 1156507;

    t130 = (((x3953!=x3954)<<x3955)%x3956);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x3981 = 171U;
	uint16_t x3983 = 0U;
	uint64_t x3984 = UINT64_MAX;
	static volatile uint64_t t131 = 1LLU;

    t131 = (((x3981!=x3982)<<x3983)%x3984);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4045 = -1;
	volatile int64_t x4046 = -363006725026431LL;
	int8_t x4047 = 1;
	uint8_t x4048 = 14U;

    t132 = (((x4045!=x4046)<<x4047)%x4048);

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4089 = -1138LL;
	volatile int16_t x4090 = 1;
	volatile int8_t x4091 = 0;
	int8_t x4092 = -1;
	volatile int32_t t133 = 825426;

    t133 = (((x4089!=x4090)<<x4091)%x4092);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t t134 = -312592515LL;

    t134 = (((x4129!=x4130)<<x4131)%x4132);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x4173 = INT16_MIN;
	int16_t x4174 = -6162;
	uint8_t x4175 = 9U;
	volatile uint64_t t135 = 4121157LLU;

    t135 = (((x4173!=x4174)<<x4175)%x4176);

    if (t135 != 512LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x4181 = INT32_MAX;
	volatile int16_t x4182 = INT16_MIN;
	int32_t x4183 = 20;
	uint8_t x4184 = UINT8_MAX;
	volatile int32_t t136 = 23717;

    t136 = (((x4181!=x4182)<<x4183)%x4184);

    if (t136 != 16) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x4189 = INT16_MIN;
	static uint64_t x4190 = 3540004753321302489LLU;
	uint16_t x4191 = 6U;
	int8_t x4192 = -1;
	volatile int32_t t137 = -1287;

    t137 = (((x4189!=x4190)<<x4191)%x4192);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x4221 = -1;
	uint16_t x4222 = 7337U;
	int8_t x4223 = 0;
	int32_t t138 = -3041;

    t138 = (((x4221!=x4222)<<x4223)%x4224);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4237 = 1;
	volatile int8_t x4238 = -1;
	volatile uint32_t x4239 = 0U;
	int8_t x4240 = INT8_MAX;
	int32_t t139 = -382406;

    t139 = (((x4237!=x4238)<<x4239)%x4240);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x4249 = UINT16_MAX;
	uint32_t x4250 = UINT32_MAX;
	int8_t x4251 = 5;
	uint8_t x4252 = 2U;
	static int32_t t140 = 42;

    t140 = (((x4249!=x4250)<<x4251)%x4252);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x4269 = INT32_MAX;
	static int8_t x4270 = -8;
	int32_t t141 = -630;

    t141 = (((x4269!=x4270)<<x4271)%x4272);

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x4273 = 146LLU;
	uint64_t x4274 = 318LLU;
	uint32_t x4276 = UINT32_MAX;
	volatile uint32_t t142 = 128016U;

    t142 = (((x4273!=x4274)<<x4275)%x4276);

    if (t142 != 2U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4313 = 0;
	volatile uint32_t x4314 = UINT32_MAX;
	int16_t x4316 = -96;
	int32_t t143 = 467;

    t143 = (((x4313!=x4314)<<x4315)%x4316);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4325 = -17LL;
	static int8_t x4326 = 0;
	uint64_t x4327 = 12LLU;
	static int16_t x4328 = 11993;

    t144 = (((x4325!=x4326)<<x4327)%x4328);

    if (t144 != 4096) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x4337 = -98746653411LL;
	uint8_t x4339 = 20U;
	int64_t x4340 = INT64_MIN;
	int64_t t145 = 4080276481344906LL;

    t145 = (((x4337!=x4338)<<x4339)%x4340);

    if (t145 != 1048576LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x4381 = INT64_MIN;
	volatile int16_t x4382 = -3;
	int32_t x4383 = 3;
	static int8_t x4384 = INT8_MIN;

    t146 = (((x4381!=x4382)<<x4383)%x4384);

    if (t146 != 8) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x4430 = INT16_MIN;
	int8_t x4431 = 5;
	int32_t x4432 = 759;

    t147 = (((x4429!=x4430)<<x4431)%x4432);

    if (t147 != 32) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x4513 = INT8_MIN;
	static volatile int32_t x4514 = 1538031;
	uint16_t x4515 = 2U;
	int64_t x4516 = INT64_MIN;
	volatile int64_t t148 = 46832361207119LL;

    t148 = (((x4513!=x4514)<<x4515)%x4516);

    if (t148 != 4LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x4517 = UINT32_MAX;
	volatile int8_t x4518 = -10;
	static int16_t x4519 = 13;
	static int64_t x4520 = -50007283562482802LL;
	static int64_t t149 = 3417202853268LL;

    t149 = (((x4517!=x4518)<<x4519)%x4520);

    if (t149 != 8192LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x4533 = 37;
	static volatile int32_t x4534 = INT32_MIN;
	uint16_t x4535 = 15U;

    t150 = (((x4533!=x4534)<<x4535)%x4536);

    if (t150 != 32768LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x4537 = INT16_MIN;
	int16_t x4538 = -69;
	int16_t x4539 = 25;
	uint32_t x4540 = UINT32_MAX;
	uint32_t t151 = 7139607U;

    t151 = (((x4537!=x4538)<<x4539)%x4540);

    if (t151 != 33554432U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x4554 = INT16_MAX;
	uint16_t x4555 = 1U;
	int8_t x4556 = INT8_MIN;
	volatile int32_t t152 = -403070;

    t152 = (((x4553!=x4554)<<x4555)%x4556);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x4561 = UINT64_MAX;
	int64_t x4562 = -1LL;
	uint8_t x4563 = 6U;
	int32_t x4564 = 3016764;
	volatile int32_t t153 = 532;

    t153 = (((x4561!=x4562)<<x4563)%x4564);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x4601 = UINT16_MAX;
	int32_t x4602 = -1;
	static int32_t x4603 = 7;
	volatile int64_t t154 = 1787277542LL;

    t154 = (((x4601!=x4602)<<x4603)%x4604);

    if (t154 != 128LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x4613 = UINT32_MAX;
	uint8_t x4614 = 1U;
	volatile uint32_t x4615 = 1U;
	uint64_t x4616 = 484593LLU;

    t155 = (((x4613!=x4614)<<x4615)%x4616);

    if (t155 != 2LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x4653 = INT8_MAX;
	int8_t x4655 = 0;
	int8_t x4656 = INT8_MAX;

    t156 = (((x4653!=x4654)<<x4655)%x4656);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x4733 = INT32_MIN;
	volatile int8_t x4734 = -1;
	static int16_t x4735 = 0;
	int32_t x4736 = INT32_MIN;
	static volatile int32_t t157 = 20487;

    t157 = (((x4733!=x4734)<<x4735)%x4736);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x4742 = INT32_MIN;
	int8_t x4743 = 1;
	uint8_t x4744 = UINT8_MAX;
	static volatile int32_t t158 = 4;

    t158 = (((x4741!=x4742)<<x4743)%x4744);

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x4802 = -35885416578864LL;
	static int16_t x4803 = 8;
	int16_t x4804 = 10385;
	int32_t t159 = -2728;

    t159 = (((x4801!=x4802)<<x4803)%x4804);

    if (t159 != 256) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x4817 = -11;
	uint64_t x4818 = UINT64_MAX;
	uint32_t x4819 = 2U;
	volatile uint32_t x4820 = UINT32_MAX;

    t160 = (((x4817!=x4818)<<x4819)%x4820);

    if (t160 != 4U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x4825 = -59748LL;
	static uint8_t x4826 = 14U;
	static uint64_t x4827 = 5LLU;
	static int16_t x4828 = -324;
	static volatile int32_t t161 = -65224;

    t161 = (((x4825!=x4826)<<x4827)%x4828);

    if (t161 != 32) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x4861 = -1;
	uint32_t x4862 = UINT32_MAX;
	volatile int32_t x4863 = 1;
	int64_t x4864 = INT64_MIN;

    t162 = (((x4861!=x4862)<<x4863)%x4864);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x4909 = -49;
	int8_t x4910 = 6;
	uint8_t x4911 = 30U;
	static volatile int64_t x4912 = 3730492LL;
	volatile int64_t t163 = 74391LL;

    t163 = (((x4909!=x4910)<<x4911)%x4912);

    if (t163 != 3090620LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x4969 = 7504155079LLU;
	int32_t x4970 = INT32_MIN;
	volatile uint16_t x4971 = 3U;
	static uint64_t x4972 = 1955LLU;
	uint64_t t164 = 2271628645278LLU;

    t164 = (((x4969!=x4970)<<x4971)%x4972);

    if (t164 != 8LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x4985 = 56493609U;
	int16_t x4986 = 190;
	static int64_t x4987 = 15LL;
	volatile int32_t x4988 = INT32_MAX;
	static int32_t t165 = 1;

    t165 = (((x4985!=x4986)<<x4987)%x4988);

    if (t165 != 32768) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x5053 = -1LL;
	static int8_t x5054 = -1;
	int64_t x5056 = INT64_MIN;
	volatile int64_t t166 = -4312293719503265171LL;

    t166 = (((x5053!=x5054)<<x5055)%x5056);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x5081 = 46532LLU;
	static int16_t x5084 = -1;

    t167 = (((x5081!=x5082)<<x5083)%x5084);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x5117 = 16595U;
	int16_t x5118 = INT16_MAX;
	static int8_t x5119 = 11;
	int16_t x5120 = 183;
	static int32_t t168 = -137;

    t168 = (((x5117!=x5118)<<x5119)%x5120);

    if (t168 != 35) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5149 = -1;
	volatile uint64_t x5151 = 2LLU;
	static int32_t t169 = 6096752;

    t169 = (((x5149!=x5150)<<x5151)%x5152);

    if (t169 != 4) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x5182 = INT32_MAX;
	volatile uint8_t x5183 = 21U;

    t170 = (((x5181!=x5182)<<x5183)%x5184);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5193 = INT32_MIN;
	static int16_t x5194 = INT16_MAX;
	volatile int16_t x5195 = 4;
	volatile int64_t x5196 = INT64_MAX;
	volatile int64_t t171 = -5343645439648LL;

    t171 = (((x5193!=x5194)<<x5195)%x5196);

    if (t171 != 16LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x5262 = UINT32_MAX;
	static uint8_t x5263 = 3U;
	uint16_t x5264 = 29U;
	static volatile int32_t t172 = -223981903;

    t172 = (((x5261!=x5262)<<x5263)%x5264);

    if (t172 != 8) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x5269 = UINT16_MAX;
	int32_t x5270 = -903;
	int16_t x5272 = INT16_MIN;
	int32_t t173 = 3;

    t173 = (((x5269!=x5270)<<x5271)%x5272);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x5273 = INT16_MIN;
	static int8_t x5274 = -4;
	static volatile int8_t x5275 = 6;
	int32_t t174 = -224;

    t174 = (((x5273!=x5274)<<x5275)%x5276);

    if (t174 != 13) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x5297 = INT64_MIN;
	volatile int16_t x5298 = 17;
	uint16_t x5300 = 200U;
	volatile int32_t t175 = 154;

    t175 = (((x5297!=x5298)<<x5299)%x5300);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x5321 = 4U;
	int64_t x5322 = 1588544LL;
	volatile int16_t x5323 = 10;
	uint8_t x5324 = 1U;
	volatile int32_t t176 = 63;

    t176 = (((x5321!=x5322)<<x5323)%x5324);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x5337 = INT32_MAX;
	int8_t x5338 = -1;
	static int16_t x5339 = 29;
	int32_t t177 = -129311;

    t177 = (((x5337!=x5338)<<x5339)%x5340);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x5345 = -3566898LL;
	uint32_t x5346 = 4U;
	int16_t x5347 = 10;
	int32_t t178 = -262;

    t178 = (((x5345!=x5346)<<x5347)%x5348);

    if (t178 != 48) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x5361 = INT16_MIN;
	static int64_t x5362 = -663405LL;
	int16_t x5363 = 0;
	int8_t x5364 = INT8_MAX;

    t179 = (((x5361!=x5362)<<x5363)%x5364);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5417 = -1;
	uint16_t x5419 = 7U;
	volatile int64_t x5420 = INT64_MIN;
	volatile int64_t t180 = 1804LL;

    t180 = (((x5417!=x5418)<<x5419)%x5420);

    if (t180 != 128LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x5425 = 18123U;
	volatile uint64_t x5426 = UINT64_MAX;
	int32_t x5427 = 1;
	int16_t x5428 = INT16_MIN;
	int32_t t181 = -15626319;

    t181 = (((x5425!=x5426)<<x5427)%x5428);

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x5437 = INT32_MIN;
	uint8_t x5439 = 5U;
	int8_t x5440 = 1;
	static volatile int32_t t182 = -280024986;

    t182 = (((x5437!=x5438)<<x5439)%x5440);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x5455 = 0LLU;
	int8_t x5456 = INT8_MAX;
	static volatile int32_t t183 = 1418422;

    t183 = (((x5453!=x5454)<<x5455)%x5456);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5470 = 0;
	uint8_t x5471 = 3U;
	volatile uint64_t x5472 = UINT64_MAX;
	volatile uint64_t t184 = 36515236321291477LLU;

    t184 = (((x5469!=x5470)<<x5471)%x5472);

    if (t184 != 8LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x5477 = 13U;
	int32_t x5478 = -201846;
	uint8_t x5479 = 22U;
	static int8_t x5480 = INT8_MAX;
	volatile int32_t t185 = -1;

    t185 = (((x5477!=x5478)<<x5479)%x5480);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x5579 = 0U;
	static int32_t x5580 = INT32_MIN;
	int32_t t186 = 23;

    t186 = (((x5577!=x5578)<<x5579)%x5580);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x5781 = 7665843;
	uint64_t x5782 = 9LLU;
	uint8_t x5783 = 0U;
	int8_t x5784 = INT8_MIN;
	int32_t t187 = 5989988;

    t187 = (((x5781!=x5782)<<x5783)%x5784);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x5793 = -4;
	uint32_t x5795 = 1U;
	int64_t x5796 = -1LL;
	volatile int64_t t188 = -326667552463LL;

    t188 = (((x5793!=x5794)<<x5795)%x5796);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x5817 = INT16_MIN;
	uint32_t x5819 = 0U;
	volatile int64_t x5820 = INT64_MIN;

    t189 = (((x5817!=x5818)<<x5819)%x5820);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x5821 = INT64_MAX;
	int32_t x5822 = -92470;
	uint8_t x5823 = 1U;
	static volatile uint16_t x5824 = 902U;
	int32_t t190 = 484;

    t190 = (((x5821!=x5822)<<x5823)%x5824);

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x5825 = INT32_MIN;
	uint32_t x5826 = 572U;
	int8_t x5827 = 1;
	int64_t x5828 = INT64_MAX;
	static volatile int64_t t191 = 261324LL;

    t191 = (((x5825!=x5826)<<x5827)%x5828);

    if (t191 != 2LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x5869 = 98U;
	volatile int16_t x5870 = INT16_MIN;
	uint16_t x5871 = 2U;
	int16_t x5872 = -1;
	int32_t t192 = -7310343;

    t192 = (((x5869!=x5870)<<x5871)%x5872);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x5873 = INT32_MIN;
	static uint16_t x5874 = UINT16_MAX;
	int8_t x5875 = 1;
	static volatile int32_t t193 = -29;

    t193 = (((x5873!=x5874)<<x5875)%x5876);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x5901 = INT64_MAX;
	int64_t x5902 = INT64_MAX;
	static uint8_t x5903 = 18U;

    t194 = (((x5901!=x5902)<<x5903)%x5904);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x5965 = UINT32_MAX;
	static uint32_t x5966 = 55797878U;
	int16_t x5967 = 0;
	static uint32_t x5968 = 3945621U;
	uint32_t t195 = 9U;

    t195 = (((x5965!=x5966)<<x5967)%x5968);

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x6029 = INT64_MAX;
	uint16_t x6030 = 2U;
	static volatile uint16_t x6031 = 0U;
	int16_t x6032 = -1;
	int32_t t196 = -123;

    t196 = (((x6029!=x6030)<<x6031)%x6032);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x6049 = INT32_MIN;
	int8_t x6050 = INT8_MIN;
	static int16_t x6052 = -7;

    t197 = (((x6049!=x6050)<<x6051)%x6052);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x6057 = 10156578LLU;
	uint8_t x6058 = 58U;
	int32_t x6060 = 37885223;
	volatile int32_t t198 = 1008;

    t198 = (((x6057!=x6058)<<x6059)%x6060);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x6069 = -108623259LL;
	uint64_t x6070 = 41964268LLU;
	int8_t x6071 = 1;

    t199 = (((x6069!=x6070)<<x6071)%x6072);

    if (t199 != 2) { NG(); } else { ; }
	
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
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

