
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

int64_t x186 = 11LL;
int16_t x380 = 0;
int64_t x613 = INT64_MAX;
static int16_t x834 = -15;
uint32_t t7 = 152246651U;
int64_t x905 = INT64_MAX;
volatile int8_t x908 = 18;
uint64_t x1269 = 1159LLU;
volatile int8_t x1272 = INT8_MIN;
static int64_t t13 = -1806656364333561716LL;
static volatile int64_t x1536 = INT64_MIN;
uint8_t x1781 = 7U;
volatile uint32_t x2005 = 82960U;
uint16_t x2008 = 7U;
volatile uint32_t t18 = 373998500U;
static int16_t x2342 = INT16_MAX;
volatile int32_t t19 = 1;
static volatile uint32_t x2506 = UINT32_MAX;
static uint32_t x2618 = 61307253U;
uint64_t x2619 = UINT64_MAX;
uint32_t t22 = 138560U;
int32_t x2719 = -1;
volatile int64_t t23 = INT64_MAX;
uint64_t x2922 = 235693735LLU;
int16_t x2924 = -1;
int64_t x2941 = INT64_MAX;
int64_t x2943 = -1LL;
volatile int32_t x2995 = INT32_MAX;
int16_t x3016 = -1;
uint64_t t28 = 11401LLU;
volatile int8_t x3084 = -4;
int64_t x3273 = INT64_MAX;
static int8_t x3275 = INT8_MIN;
static uint8_t x3371 = 0U;
uint8_t x3421 = 1U;
int16_t x3423 = -1;
static uint32_t x3478 = 304062U;
static int16_t x3702 = -1;
volatile int32_t x3710 = INT32_MIN;
int16_t x3711 = INT16_MIN;
uint16_t x4000 = 29U;
int8_t x4250 = INT8_MAX;
int8_t x4642 = 0;
volatile int32_t t43 = -210043;
static int16_t x4749 = INT16_MIN;
volatile int16_t x4752 = INT16_MIN;
int16_t x5184 = -1;


void f0(void) {
    	uint32_t x185 = 295975875U;
	uint64_t x187 = UINT64_MAX;
	int16_t x188 = -10;
	volatile int64_t t0 = -312415065158LL;

    t0 = ((x185|x186)>>(x187^x188));

    if (t0 != 578077LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MAX;
	int16_t x280 = INT16_MAX;
	static uint32_t t1 = UINT32_MAX;

    t1 = ((x277|x278)>>(x279^x280));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x377 = 1237U;
	volatile uint8_t x378 = 1U;
	int8_t x379 = 1;
	volatile int32_t t2 = 79;

    t2 = ((x377|x378)>>(x379^x380));

    if (t2 != 618) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x565 = 35071964U;
	static uint16_t x566 = UINT16_MAX;
	uint8_t x567 = 1U;
	uint8_t x568 = 0U;
	uint32_t t3 = 65261943U;

    t3 = ((x565|x566)>>(x567^x568));

    if (t3 != 17563647U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x614 = INT32_MAX;
	int64_t x615 = -1LL;
	uint64_t x616 = UINT64_MAX;
	static int64_t t4 = INT64_MAX;

    t4 = ((x613|x614)>>(x615^x616));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x629 = UINT8_MAX;
	int16_t x630 = 198;
	uint16_t x631 = UINT16_MAX;
	static uint16_t x632 = UINT16_MAX;
	int32_t t5 = 2941;

    t5 = ((x629|x630)>>(x631^x632));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x649 = 5341U;
	int32_t x650 = 1208845;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = -6;
	int32_t t6 = -70;

    t6 = ((x649|x650)>>(x651^x652));

    if (t6 != 37814) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x833 = 12063169U;
	int16_t x835 = -1;
	int32_t x836 = -1;

    t7 = ((x833|x834)>>(x835^x836));

    if (t7 != 4294967281U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x906 = 56525545371319LLU;
	int8_t x907 = 1;
	uint64_t t8 = 2LLU;

    t8 = ((x905|x906)>>(x907^x908));

    if (t8 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1209 = 6U;
	int16_t x1210 = 1;
	uint64_t x1211 = UINT64_MAX;
	int64_t x1212 = -1LL;
	static volatile int32_t t9 = -5820058;

    t9 = ((x1209|x1210)>>(x1211^x1212));

    if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1217 = 23435U;
	int8_t x1218 = -1;
	static int32_t x1219 = -1;
	int64_t x1220 = -1LL;
	uint32_t t10 = UINT32_MAX;

    t10 = ((x1217|x1218)>>(x1219^x1220));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x1270 = 33U;
	static int8_t x1271 = INT8_MIN;
	uint64_t t11 = 295543453916LLU;

    t11 = ((x1269|x1270)>>(x1271^x1272));

    if (t11 != 1191LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1325 = UINT8_MAX;
	int8_t x1326 = 1;
	uint8_t x1327 = 1U;
	int32_t x1328 = 8;
	int32_t t12 = -1017;

    t12 = ((x1325|x1326)>>(x1327^x1328));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1409 = 1;
	int64_t x1410 = INT64_MAX;
	static int8_t x1411 = -42;
	int8_t x1412 = -1;

    t13 = ((x1409|x1410)>>(x1411^x1412));

    if (t13 != 4194303LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1533 = 493LLU;
	volatile uint16_t x1534 = UINT16_MAX;
	volatile int64_t x1535 = INT64_MIN;
	volatile uint64_t t14 = 12876LLU;

    t14 = ((x1533|x1534)>>(x1535^x1536));

    if (t14 != 65535LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1585 = UINT16_MAX;
	static int8_t x1586 = INT8_MAX;
	uint8_t x1587 = 3U;
	int8_t x1588 = 1;
	int32_t t15 = 502497;

    t15 = ((x1585|x1586)>>(x1587^x1588));

    if (t15 != 16383) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1782 = UINT16_MAX;
	int16_t x1783 = -1;
	uint64_t x1784 = UINT64_MAX;
	int32_t t16 = 1;

    t16 = ((x1781|x1782)>>(x1783^x1784));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x2006 = UINT8_MAX;
	uint8_t x2007 = 5U;
	uint32_t t17 = 5949390U;

    t17 = ((x2005|x2006)>>(x2007^x2008));

    if (t17 != 20799U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x2081 = INT16_MIN;
	uint32_t x2082 = 4U;
	int8_t x2083 = -1;
	uint64_t x2084 = UINT64_MAX;

    t18 = ((x2081|x2082)>>(x2083^x2084));

    if (t18 != 4294934532U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x2341 = INT16_MAX;
	int8_t x2343 = -1;
	uint64_t x2344 = UINT64_MAX;

    t19 = ((x2341|x2342)>>(x2343^x2344));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x2489 = 17U;
	int8_t x2490 = INT8_MAX;
	int32_t x2491 = INT32_MIN;
	static int32_t x2492 = INT32_MIN;
	static volatile int32_t t20 = 163298;

    t20 = ((x2489|x2490)>>(x2491^x2492));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x2505 = UINT8_MAX;
	int8_t x2507 = -1;
	uint64_t x2508 = UINT64_MAX;
	uint32_t t21 = UINT32_MAX;

    t21 = ((x2505|x2506)>>(x2507^x2508));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x2617 = 125189U;
	int32_t x2620 = -5;

    t22 = ((x2617|x2618)>>(x2619^x2620));

    if (t22 != 3833751U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x2717 = INT64_MAX;
	volatile int64_t x2718 = 2064LL;
	uint64_t x2720 = UINT64_MAX;

    t23 = ((x2717|x2718)>>(x2719^x2720));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2893 = 79U;
	int32_t x2894 = 60;
	uint16_t x2895 = 6U;
	uint16_t x2896 = 0U;
	volatile int32_t t24 = -449663235;

    t24 = ((x2893|x2894)>>(x2895^x2896));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x2921 = -1;
	int8_t x2923 = -1;
	uint64_t t25 = UINT64_MAX;

    t25 = ((x2921|x2922)>>(x2923^x2924));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x2942 = 9890U;
	int16_t x2944 = -11;
	int64_t t26 = -5333028406LL;

    t26 = ((x2941|x2942)>>(x2943^x2944));

    if (t26 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2993 = INT16_MAX;
	int8_t x2994 = 0;
	int32_t x2996 = INT32_MAX;
	volatile int32_t t27 = -498673;

    t27 = ((x2993|x2994)>>(x2995^x2996));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x3013 = 265LLU;
	static volatile int8_t x3014 = INT8_MAX;
	int16_t x3015 = -1;

    t28 = ((x3013|x3014)>>(x3015^x3016));

    if (t28 != 383LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x3081 = INT16_MAX;
	uint64_t x3082 = UINT64_MAX;
	int32_t x3083 = -1;
	volatile uint64_t t29 = 3634926613441LLU;

    t29 = ((x3081|x3082)>>(x3083^x3084));

    if (t29 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x3225 = INT16_MAX;
	uint64_t x3226 = 19173LLU;
	uint16_t x3227 = 3U;
	static int8_t x3228 = 0;
	uint64_t t30 = 1497869745LLU;

    t30 = ((x3225|x3226)>>(x3227^x3228));

    if (t30 != 4095LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x3274 = 47681138U;
	static int8_t x3276 = INT8_MIN;
	volatile int64_t t31 = INT64_MAX;

    t31 = ((x3273|x3274)>>(x3275^x3276));

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x3369 = INT16_MAX;
	static volatile uint8_t x3370 = 14U;
	int8_t x3372 = 5;
	int32_t t32 = 761157;

    t32 = ((x3369|x3370)>>(x3371^x3372));

    if (t32 != 1023) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x3422 = INT16_MAX;
	int8_t x3424 = -26;
	int32_t t33 = 7723030;

    t33 = ((x3421|x3422)>>(x3423^x3424));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x3477 = 4016704212790145261LL;
	int8_t x3479 = -1;
	int64_t x3480 = -1LL;
	volatile int64_t t34 = 5096777749LL;

    t34 = ((x3477|x3478)>>(x3479^x3480));

    if (t34 != 4016704212790408191LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x3529 = 31961466LLU;
	static int64_t x3530 = 11LL;
	static uint8_t x3531 = 0U;
	uint16_t x3532 = 45U;
	uint64_t t35 = 51656669LLU;

    t35 = ((x3529|x3530)>>(x3531^x3532));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x3541 = INT64_MIN;
	uint64_t x3542 = 5114665719783LLU;
	int64_t x3543 = -1LL;
	volatile int8_t x3544 = -48;
	uint64_t t36 = 2696LLU;

    t36 = ((x3541|x3542)>>(x3543^x3544));

    if (t36 != 65536LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x3573 = 69102384U;
	volatile int32_t x3574 = -1;
	int8_t x3575 = INT8_MIN;
	int8_t x3576 = INT8_MIN;
	uint32_t t37 = UINT32_MAX;

    t37 = ((x3573|x3574)>>(x3575^x3576));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x3637 = UINT32_MAX;
	int16_t x3638 = INT16_MIN;
	static volatile int32_t x3639 = -1;
	int64_t x3640 = -1LL;
	uint32_t t38 = UINT32_MAX;

    t38 = ((x3637|x3638)>>(x3639^x3640));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x3701 = 8U;
	uint64_t x3703 = UINT64_MAX;
	volatile int32_t x3704 = -1;
	uint32_t t39 = UINT32_MAX;

    t39 = ((x3701|x3702)>>(x3703^x3704));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x3709 = 24U;
	volatile int16_t x3712 = INT16_MIN;
	uint32_t t40 = 59U;

    t40 = ((x3709|x3710)>>(x3711^x3712));

    if (t40 != 2147483672U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3997 = 406U;
	int16_t x3998 = INT16_MIN;
	uint8_t x3999 = 18U;
	volatile uint32_t t41 = 76748114U;

    t41 = ((x3997|x3998)>>(x3999^x4000));

    if (t41 != 131071U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x4249 = UINT32_MAX;
	static int16_t x4251 = INT16_MIN;
	int16_t x4252 = INT16_MIN;
	static volatile uint32_t t42 = UINT32_MAX;

    t42 = ((x4249|x4250)>>(x4251^x4252));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x4641 = INT8_MAX;
	static int64_t x4643 = 245LL;
	static uint8_t x4644 = UINT8_MAX;

    t43 = ((x4641|x4642)>>(x4643^x4644));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x4653 = 4105985260032LL;
	uint16_t x4654 = 1U;
	uint8_t x4655 = 7U;
	volatile uint8_t x4656 = 5U;
	int64_t t44 = 16849593215441013LL;

    t44 = ((x4653|x4654)>>(x4655^x4656));

    if (t44 != 1026496315008LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x4750 = 45926356049281LLU;
	volatile int16_t x4751 = INT16_MIN;
	volatile uint64_t t45 = 69876242425353LLU;

    t45 = ((x4749|x4750)>>(x4751^x4752));

    if (t45 != 18446744073709542785LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x4805 = UINT64_MAX;
	static volatile uint16_t x4806 = UINT16_MAX;
	int32_t x4807 = 30;
	uint16_t x4808 = 14U;
	volatile uint64_t t46 = 75712835LLU;

    t46 = ((x4805|x4806)>>(x4807^x4808));

    if (t46 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x5181 = -871;
	uint64_t x5182 = UINT64_MAX;
	int64_t x5183 = -1LL;
	uint64_t t47 = UINT64_MAX;

    t47 = ((x5181|x5182)>>(x5183^x5184));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}

