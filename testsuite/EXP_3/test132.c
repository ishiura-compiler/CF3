
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

uint32_t x78 = 3101658U;
int16_t x79 = 3;
static volatile int8_t x263 = 0;
volatile int16_t x307 = -1;
int64_t x346 = -1LL;
int64_t x409 = -3945914LL;
uint64_t x498 = 106LLU;
int16_t x500 = 1;
uint64_t x837 = 638436LLU;
static volatile int64_t x886 = -1LL;
int64_t x888 = -1LL;
int32_t x922 = 1685650;
int16_t x923 = 3;
volatile int16_t x924 = -1;
static uint8_t x1004 = 3U;
int32_t t17 = -30870283;
uint32_t x1533 = 5071U;
int64_t x1649 = INT64_MIN;
int8_t x1651 = 3;
static int8_t x1740 = -1;
uint8_t x1811 = 7U;
volatile uint32_t x1915 = UINT32_MAX;
int32_t t26 = 6;
uint8_t x2135 = 2U;
volatile int16_t x2206 = 1141;
int64_t x2207 = -1LL;
volatile int32_t t28 = 1;
volatile int8_t x2413 = INT8_MIN;
static volatile uint8_t x2414 = UINT8_MAX;
int8_t x2416 = -1;
int16_t x2466 = INT16_MAX;
static volatile uint8_t x2844 = 6U;
int32_t t34 = 16946688;
uint16_t x2910 = 6U;
uint8_t x2911 = 2U;
static uint16_t x3173 = 1686U;
int32_t t39 = 82;
volatile int32_t t40 = 1;
int64_t x3372 = -1LL;
int32_t t42 = -1;
uint8_t x3404 = 2U;
int32_t t43 = -39045;
int64_t x3487 = 1LL;
int16_t x3488 = -1;
volatile int32_t t45 = -7513;
int8_t x4102 = INT8_MAX;
volatile int16_t x4229 = -15897;
int8_t x4231 = -1;
volatile uint64_t x4282 = 44247188LLU;
int32_t x4283 = -1;
int8_t x4325 = 49;
static int8_t x4327 = -1;
uint8_t x4393 = 89U;
static volatile uint32_t x4394 = 101U;
int8_t x4454 = INT8_MAX;


void f0(void) {
    	int8_t x77 = -14;
	uint32_t x80 = UINT32_MAX;
	int32_t t0 = 14;

    t0 = ((x77<=x78)<<(x79+x80));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x217 = 65U;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = 3;
	static volatile uint8_t x220 = 25U;
	int32_t t1 = 531;

    t1 = ((x217<=x218)<<(x219+x220));

    if (t1 != 268435456) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x261 = 16549492988933LL;
	static int32_t x262 = INT32_MIN;
	int64_t x264 = 3LL;
	volatile int32_t t2 = -4054997;

    t2 = ((x261<=x262)<<(x263+x264));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x305 = 1U;
	volatile int8_t x306 = INT8_MIN;
	uint32_t x308 = 13U;
	int32_t t3 = -23977;

    t3 = ((x305<=x306)<<(x307+x308));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x329 = -781924526;
	int8_t x330 = INT8_MAX;
	static volatile uint32_t x331 = 1U;
	int16_t x332 = 7;
	static volatile int32_t t4 = -17657937;

    t4 = ((x329<=x330)<<(x331+x332));

    if (t4 != 256) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x345 = 1459U;
	uint16_t x347 = 5U;
	static int8_t x348 = 2;
	int32_t t5 = 756863;

    t5 = ((x345<=x346)<<(x347+x348));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x410 = 495257726U;
	volatile uint32_t x411 = UINT32_MAX;
	uint8_t x412 = 15U;
	static int32_t t6 = 251030985;

    t6 = ((x409<=x410)<<(x411+x412));

    if (t6 != 16384) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x497 = 29U;
	int16_t x499 = -1;
	int32_t t7 = 117;

    t7 = ((x497<=x498)<<(x499+x500));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x549 = INT64_MAX;
	volatile int64_t x550 = 11252748378773LL;
	int16_t x551 = 1;
	volatile uint16_t x552 = 3U;
	volatile int32_t t8 = -1;

    t8 = ((x549<=x550)<<(x551+x552));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x785 = INT64_MAX;
	int8_t x786 = -21;
	static int16_t x787 = -1;
	uint8_t x788 = 1U;
	volatile int32_t t9 = 737685171;

    t9 = ((x785<=x786)<<(x787+x788));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x838 = -6;
	int8_t x839 = 0;
	volatile uint16_t x840 = 0U;
	int32_t t10 = 62;

    t10 = ((x837<=x838)<<(x839+x840));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x885 = UINT8_MAX;
	static uint32_t x887 = 22U;
	volatile int32_t t11 = 472560;

    t11 = ((x885<=x886)<<(x887+x888));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x921 = 88;
	int32_t t12 = -10938;

    t12 = ((x921<=x922)<<(x923+x924));

    if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x989 = 40U;
	static uint64_t x990 = UINT64_MAX;
	static int32_t x991 = 2;
	volatile uint32_t x992 = UINT32_MAX;
	volatile int32_t t13 = 841210826;

    t13 = ((x989<=x990)<<(x991+x992));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1001 = 545695800U;
	static uint8_t x1002 = UINT8_MAX;
	static volatile int16_t x1003 = 3;
	int32_t t14 = -1;

    t14 = ((x1001<=x1002)<<(x1003+x1004));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1013 = INT8_MIN;
	int16_t x1014 = 0;
	uint8_t x1015 = 2U;
	uint8_t x1016 = 14U;
	static volatile int32_t t15 = -189857;

    t15 = ((x1013<=x1014)<<(x1015+x1016));

    if (t15 != 65536) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1065 = INT16_MAX;
	volatile int16_t x1066 = INT16_MIN;
	static uint8_t x1067 = 11U;
	uint32_t x1068 = UINT32_MAX;
	volatile int32_t t16 = 1;

    t16 = ((x1065<=x1066)<<(x1067+x1068));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1077 = 380378539LLU;
	uint64_t x1078 = 228LLU;
	volatile int16_t x1079 = -1;
	static int8_t x1080 = 1;

    t17 = ((x1077<=x1078)<<(x1079+x1080));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x1289 = 8LL;
	volatile uint32_t x1290 = 0U;
	uint16_t x1291 = 7U;
	uint8_t x1292 = 7U;
	int32_t t18 = -446;

    t18 = ((x1289<=x1290)<<(x1291+x1292));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1381 = 134102247U;
	uint32_t x1382 = 114093983U;
	static int8_t x1383 = 1;
	volatile int64_t x1384 = -1LL;
	int32_t t19 = -159;

    t19 = ((x1381<=x1382)<<(x1383+x1384));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1534 = 9U;
	volatile int8_t x1535 = -1;
	uint16_t x1536 = 9U;
	int32_t t20 = -29800176;

    t20 = ((x1533<=x1534)<<(x1535+x1536));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x1581 = 46LL;
	int16_t x1582 = 816;
	static int8_t x1583 = 14;
	volatile int16_t x1584 = 2;
	int32_t t21 = 19394554;

    t21 = ((x1581<=x1582)<<(x1583+x1584));

    if (t21 != 65536) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1650 = 748;
	uint32_t x1652 = UINT32_MAX;
	int32_t t22 = -1828;

    t22 = ((x1649<=x1650)<<(x1651+x1652));

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1737 = UINT64_MAX;
	int16_t x1738 = 0;
	static int8_t x1739 = 5;
	volatile int32_t t23 = 34315;

    t23 = ((x1737<=x1738)<<(x1739+x1740));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x1809 = 66440U;
	uint16_t x1810 = 1U;
	int32_t x1812 = 1;
	static int32_t t24 = -7140;

    t24 = ((x1809<=x1810)<<(x1811+x1812));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x1913 = INT32_MIN;
	int64_t x1914 = 26419536347688LL;
	int8_t x1916 = 13;
	volatile int32_t t25 = 423917;

    t25 = ((x1913<=x1914)<<(x1915+x1916));

    if (t25 != 4096) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x2081 = 1110681;
	int32_t x2082 = -1;
	int16_t x2083 = 15;
	uint8_t x2084 = 5U;

    t26 = ((x2081<=x2082)<<(x2083+x2084));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x2133 = 1U;
	static uint64_t x2134 = UINT64_MAX;
	uint8_t x2136 = 0U;
	volatile int32_t t27 = -63270108;

    t27 = ((x2133<=x2134)<<(x2135+x2136));

    if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x2205 = 101U;
	int16_t x2208 = 30;

    t28 = ((x2205<=x2206)<<(x2207+x2208));

    if (t28 != 536870912) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2415 = 1;
	static int32_t t29 = 1;

    t29 = ((x2413<=x2414)<<(x2415+x2416));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x2465 = 250U;
	uint8_t x2467 = 2U;
	static uint64_t x2468 = UINT64_MAX;
	int32_t t30 = -115339873;

    t30 = ((x2465<=x2466)<<(x2467+x2468));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x2509 = -3375;
	int16_t x2510 = -1;
	volatile int16_t x2511 = -1;
	int8_t x2512 = 1;
	int32_t t31 = 11;

    t31 = ((x2509<=x2510)<<(x2511+x2512));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2529 = 12171902U;
	int64_t x2530 = -1LL;
	static int16_t x2531 = -1;
	static uint32_t x2532 = 6U;
	static volatile int32_t t32 = 84492389;

    t32 = ((x2529<=x2530)<<(x2531+x2532));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2745 = INT16_MIN;
	static uint32_t x2746 = 19U;
	int64_t x2747 = -1LL;
	static uint8_t x2748 = 26U;
	volatile int32_t t33 = 0;

    t33 = ((x2745<=x2746)<<(x2747+x2748));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2841 = 103;
	volatile uint64_t x2842 = UINT64_MAX;
	int16_t x2843 = -1;

    t34 = ((x2841<=x2842)<<(x2843+x2844));

    if (t34 != 32) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x2909 = -1LL;
	uint8_t x2912 = 1U;
	int32_t t35 = 204;

    t35 = ((x2909<=x2910)<<(x2911+x2912));

    if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x2917 = UINT16_MAX;
	int64_t x2918 = -1LL;
	int16_t x2919 = 6;
	volatile int32_t x2920 = -1;
	int32_t t36 = 1172269;

    t36 = ((x2917<=x2918)<<(x2919+x2920));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x3153 = 28;
	int64_t x3154 = -1LL;
	int32_t x3155 = 1;
	volatile uint8_t x3156 = 17U;
	volatile int32_t t37 = -1;

    t37 = ((x3153<=x3154)<<(x3155+x3156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x3174 = INT8_MAX;
	int8_t x3175 = 3;
	volatile int8_t x3176 = -1;
	int32_t t38 = -981539911;

    t38 = ((x3173<=x3174)<<(x3175+x3176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x3253 = -1;
	volatile int16_t x3254 = INT16_MIN;
	uint16_t x3255 = 31U;
	static volatile int8_t x3256 = -1;

    t39 = ((x3253<=x3254)<<(x3255+x3256));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x3301 = 812817186220984091LL;
	volatile int32_t x3302 = INT32_MIN;
	uint8_t x3303 = 1U;
	static volatile uint64_t x3304 = UINT64_MAX;

    t40 = ((x3301<=x3302)<<(x3303+x3304));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x3329 = 3742134138LL;
	int8_t x3330 = INT8_MIN;
	int8_t x3331 = 0;
	int16_t x3332 = 21;
	volatile int32_t t41 = 0;

    t41 = ((x3329<=x3330)<<(x3331+x3332));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x3369 = -1;
	int16_t x3370 = INT16_MAX;
	volatile uint16_t x3371 = 27U;

    t42 = ((x3369<=x3370)<<(x3371+x3372));

    if (t42 != 67108864) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x3401 = -1LL;
	int16_t x3402 = -1;
	int64_t x3403 = -1LL;

    t43 = ((x3401<=x3402)<<(x3403+x3404));

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x3485 = 40U;
	static uint16_t x3486 = 1368U;
	volatile int32_t t44 = 1;

    t44 = ((x3485<=x3486)<<(x3487+x3488));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3721 = -355;
	int64_t x3722 = INT64_MIN;
	volatile uint32_t x3723 = UINT32_MAX;
	volatile uint16_t x3724 = 4U;

    t45 = ((x3721<=x3722)<<(x3723+x3724));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x3765 = 157068692;
	volatile int32_t x3766 = INT32_MAX;
	static uint64_t x3767 = UINT64_MAX;
	int8_t x3768 = 2;
	int32_t t46 = -121912;

    t46 = ((x3765<=x3766)<<(x3767+x3768));

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x4101 = -5360;
	int16_t x4103 = 4;
	uint32_t x4104 = UINT32_MAX;
	static int32_t t47 = 593;

    t47 = ((x4101<=x4102)<<(x4103+x4104));

    if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x4230 = UINT32_MAX;
	uint16_t x4232 = 9U;
	int32_t t48 = 161;

    t48 = ((x4229<=x4230)<<(x4231+x4232));

    if (t48 != 256) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x4281 = INT64_MIN;
	volatile uint16_t x4284 = 2U;
	volatile int32_t t49 = 96795619;

    t49 = ((x4281<=x4282)<<(x4283+x4284));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x4326 = -1;
	uint32_t x4328 = 16U;
	volatile int32_t t50 = -22289010;

    t50 = ((x4325<=x4326)<<(x4327+x4328));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x4395 = 1U;
	volatile int64_t x4396 = -1LL;
	volatile int32_t t51 = -7186;

    t51 = ((x4393<=x4394)<<(x4395+x4396));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x4453 = 0LLU;
	uint16_t x4455 = 2U;
	static uint8_t x4456 = 2U;
	volatile int32_t t52 = -36223261;

    t52 = ((x4453<=x4454)<<(x4455+x4456));

    if (t52 != 16) { NG(); } else { ; }
	
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


    return 0;
}

