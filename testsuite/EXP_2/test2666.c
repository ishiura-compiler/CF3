
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

volatile int32_t x30 = -1;
volatile int32_t t0 = 14;
volatile int32_t x45 = -1;
static volatile int32_t t1 = 4003;
int64_t x98 = INT64_MIN;
uint64_t x99 = 1877948625297040457LLU;
uint16_t x117 = 2U;
volatile int64_t x119 = -1LL;
int64_t x131 = 4290722994853636511LL;
uint64_t x277 = 955027875212LLU;
int32_t t9 = 10982031;
volatile uint16_t x290 = 511U;
int8_t x292 = 0;
int32_t t10 = 7;
volatile int64_t x299 = -1LL;
int64_t x317 = 81531925158346253LL;
static int16_t x389 = 489;
int8_t x391 = INT8_MAX;
volatile uint8_t x392 = 0U;
int32_t x444 = 17;
volatile int32_t x462 = 183131484;
int64_t x469 = -679956750656923965LL;
int16_t x470 = -1;
volatile int32_t t20 = 2;
uint8_t x565 = UINT8_MAX;
uint8_t x597 = 25U;
uint32_t x618 = UINT32_MAX;
volatile int32_t t24 = -15788658;
int32_t t25 = 1567;
static int32_t t28 = 222;
int32_t x729 = -1429;
uint16_t x751 = 1U;
volatile int16_t x774 = INT16_MIN;
static volatile int8_t x775 = 10;
uint8_t x776 = 21U;
int8_t x790 = 0;
volatile int8_t x792 = 2;
static uint32_t x829 = 15062558U;
int64_t x831 = INT64_MAX;
volatile int32_t x842 = 85;
static int32_t t38 = -2100883;
volatile int64_t x1067 = 0LL;
int32_t t39 = -1837522;
uint32_t x1101 = UINT32_MAX;
volatile int16_t x1102 = -43;
int32_t x1121 = 41544833;
static int64_t x1123 = -828311296101817LL;
uint64_t x1185 = 994705894LLU;
uint8_t x1233 = 1U;
int16_t x1285 = 0;
static int64_t x1290 = -1LL;
uint16_t x1334 = UINT16_MAX;
int16_t x1336 = 12;
int32_t t48 = -25227006;
uint8_t x1344 = 9U;
int64_t x1483 = INT64_MIN;
static uint8_t x1578 = 94U;
int32_t x1607 = -1;
static uint8_t x1612 = 17U;
int64_t x1703 = -1LL;
volatile int32_t t60 = 144;
int8_t x1716 = 0;
static uint16_t x1734 = UINT16_MAX;
uint8_t x1936 = 0U;
int8_t x1937 = INT8_MAX;
static uint8_t x1940 = 17U;
static int32_t x2035 = -236709124;
int8_t x2071 = -31;
volatile uint16_t x2072 = 27U;
int16_t x2094 = INT16_MAX;
volatile uint32_t x2109 = UINT32_MAX;
uint32_t x2111 = 1086594877U;
int16_t x2189 = INT16_MIN;
volatile int32_t x2190 = INT32_MAX;
volatile int32_t t78 = -205460766;
static int32_t t79 = 488521968;
int32_t x2329 = INT32_MIN;
static int32_t t81 = 23670;
int64_t x2519 = -398LL;
int16_t x2523 = -1;
int32_t t86 = 45836;
int8_t x2573 = -1;
static uint8_t x2588 = 27U;
static volatile int32_t x2643 = INT32_MIN;
int8_t x2644 = 1;
int64_t x2647 = -791955390LL;
static volatile int8_t x2673 = INT8_MIN;
int32_t x2675 = -1;
volatile int8_t x2726 = 1;
int32_t t95 = 211344831;
uint16_t x2737 = UINT16_MAX;
static uint16_t x2742 = 2U;
uint32_t x2743 = 810714U;
uint32_t x2745 = 159357U;
volatile int32_t t98 = 0;
int32_t x2762 = -1;
uint32_t x2779 = UINT32_MAX;
volatile uint8_t x2884 = 7U;
int32_t x2910 = INT32_MIN;
int32_t t107 = 6904972;
uint8_t x2932 = 1U;
volatile int64_t x3031 = -1LL;
static uint16_t x3032 = 1U;
static volatile int16_t x3059 = INT16_MAX;
int32_t x3101 = -21525663;
volatile int16_t x3107 = -1;
uint16_t x3108 = 28U;
int8_t x3194 = -1;
uint16_t x3195 = UINT16_MAX;
int32_t t120 = 3;
int64_t x3359 = INT64_MAX;
int32_t t121 = -57593688;
volatile uint16_t x3411 = UINT16_MAX;
uint8_t x3412 = 3U;
int32_t x3431 = INT32_MIN;
int64_t x3439 = -952019422066133055LL;
int16_t x3449 = INT16_MIN;
uint8_t x3452 = 6U;
volatile uint64_t x3479 = UINT64_MAX;
uint64_t x3511 = 364984672350328LLU;
volatile int32_t t130 = 1;
static volatile uint16_t x3516 = 2U;
int16_t x3564 = 4;
volatile int32_t t133 = -7328;
uint32_t x3627 = 3971U;
volatile int16_t x3678 = INT16_MIN;
static uint8_t x3680 = 2U;
int8_t x3695 = -1;
int32_t x3707 = INT32_MIN;
uint8_t x3730 = UINT8_MAX;
static uint16_t x3732 = 3U;
int64_t x3774 = 1LL;
int16_t x3802 = INT16_MIN;
uint64_t x3814 = UINT64_MAX;
volatile int32_t t146 = 7527;
static int32_t x3891 = 82647;
volatile int16_t x3892 = 3;
int8_t x3944 = 1;
uint64_t x3947 = 431LLU;
static volatile int8_t x3960 = 7;
int8_t x4001 = INT8_MAX;
static int8_t x4003 = INT8_MIN;
volatile int32_t t156 = -1;
volatile uint64_t x4086 = 10740137331745535LLU;
volatile int32_t t157 = 7748;
uint16_t x4110 = UINT16_MAX;
static int8_t x4131 = INT8_MIN;
uint16_t x4172 = 15U;
int64_t x4281 = INT64_MIN;
int8_t x4282 = INT8_MIN;
static int8_t x4284 = 2;
static volatile int32_t t163 = -58;
int8_t x4288 = 0;
static int16_t x4314 = -1;
static uint8_t x4317 = 0U;
int64_t x4321 = INT64_MIN;
uint8_t x4419 = 15U;
static uint16_t x4420 = 0U;
int64_t x4437 = -1LL;
int32_t t170 = 14;
int16_t x4479 = -1;
static volatile uint8_t x4480 = 2U;
static int32_t t172 = -9382327;
int64_t x4499 = INT64_MAX;
int8_t x4500 = 0;
uint32_t x4558 = 35U;
int32_t x4594 = INT32_MIN;
static volatile int32_t t177 = -192499;
volatile int8_t x4615 = INT8_MIN;
uint32_t x4654 = UINT32_MAX;
uint32_t x4655 = UINT32_MAX;
int32_t t182 = -19;
static int64_t x4666 = -1LL;
static uint64_t x4667 = 7LLU;
int64_t x4685 = -1LL;
volatile int32_t t187 = -266140;
int32_t t190 = -8;
volatile int8_t x4868 = 1;
uint32_t x4883 = 4U;
uint64_t x4888 = 23LLU;
int64_t x5013 = 675968LL;
static int8_t x5037 = INT8_MAX;
uint32_t x5040 = 6U;
volatile int8_t x5099 = 4;


void f0(void) {
    	int64_t x29 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 7U;

    t0 = ((x29>(x30^x31))<<x32);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x46 = INT32_MIN;
	int32_t x47 = 119734;
	uint32_t x48 = 15U;

    t1 = ((x45>(x46^x47))<<x48);

    if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	int32_t x51 = 0;
	uint8_t x52 = 0U;
	int32_t t2 = -155030;

    t2 = ((x49>(x50^x51))<<x52);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x97 = INT32_MIN;
	int8_t x100 = 4;
	int32_t t3 = 1;

    t3 = ((x97>(x98^x99))<<x100);

    if (t3 != 16) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x118 = INT32_MIN;
	uint8_t x120 = 24U;
	static int32_t t4 = -84;

    t4 = ((x117>(x118^x119))<<x120);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x129 = INT64_MIN;
	static int64_t x130 = INT64_MAX;
	uint8_t x132 = 1U;
	int32_t t5 = 58;

    t5 = ((x129>(x130^x131))<<x132);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	static volatile uint8_t x196 = 27U;
	static int32_t t6 = -16827;

    t6 = ((x193>(x194^x195))<<x196);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x249 = -1LL;
	int16_t x250 = -9;
	uint64_t x251 = 4564529340130548LLU;
	volatile uint8_t x252 = 12U;
	static int32_t t7 = -314227304;

    t7 = ((x249>(x250^x251))<<x252);

    if (t7 != 4096) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x278 = 59U;
	volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = 2U;
	int32_t t8 = 28133;

    t8 = ((x277>(x278^x279))<<x280);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x285 = INT16_MIN;
	uint32_t x286 = 19U;
	static int64_t x287 = -1LL;
	int8_t x288 = 1;

    t9 = ((x285>(x286^x287))<<x288);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x289 = 91188739393LL;
	int32_t x291 = -13278;

    t10 = ((x289>(x290^x291))<<x292);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x297 = INT8_MIN;
	uint16_t x298 = 14957U;
	uint16_t x300 = 5U;
	int32_t t11 = 89537;

    t11 = ((x297>(x298^x299))<<x300);

    if (t11 != 32) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MAX;
	uint32_t x320 = 15U;
	volatile int32_t t12 = -7835;

    t12 = ((x317>(x318^x319))<<x320);

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x321 = -1LL;
	int16_t x322 = -460;
	uint8_t x323 = 20U;
	volatile uint32_t x324 = 6U;
	volatile int32_t t13 = -678719;

    t13 = ((x321>(x322^x323))<<x324);

    if (t13 != 64) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x349 = 2034088;
	static uint8_t x350 = 90U;
	volatile int64_t x351 = INT64_MIN;
	uint16_t x352 = 1U;
	volatile int32_t t14 = -4292152;

    t14 = ((x349>(x350^x351))<<x352);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x390 = -1;
	static volatile int32_t t15 = -1;

    t15 = ((x389>(x390^x391))<<x392);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x421 = INT16_MAX;
	int16_t x422 = INT16_MIN;
	int8_t x423 = -1;
	static int8_t x424 = 11;
	static volatile int32_t t16 = 3;

    t16 = ((x421>(x422^x423))<<x424);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x441 = INT32_MIN;
	static uint64_t x442 = 101856504528312166LLU;
	int8_t x443 = -1;
	volatile int32_t t17 = -94005;

    t17 = ((x441>(x442^x443))<<x444);

    if (t17 != 131072) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x461 = INT16_MIN;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 1U;
	int32_t t18 = -340169;

    t18 = ((x461>(x462^x463))<<x464);

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x471 = -1;
	volatile uint16_t x472 = 4U;
	int32_t t19 = -414;

    t19 = ((x469>(x470^x471))<<x472);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x533 = -1;
	uint64_t x534 = 320363964080518763LLU;
	static int16_t x535 = -8705;
	static int8_t x536 = 12;

    t20 = ((x533>(x534^x535))<<x536);

    if (t20 != 4096) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x566 = INT8_MAX;
	int64_t x567 = -1LL;
	static uint32_t x568 = 2U;
	volatile int32_t t21 = -1491114;

    t21 = ((x565>(x566^x567))<<x568);

    if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x585 = -1;
	int32_t x586 = INT32_MIN;
	int16_t x587 = INT16_MAX;
	int8_t x588 = 18;
	int32_t t22 = 122271;

    t22 = ((x585>(x586^x587))<<x588);

    if (t22 != 262144) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x598 = -1LL;
	volatile int8_t x599 = -2;
	volatile uint8_t x600 = 9U;
	static volatile int32_t t23 = 1;

    t23 = ((x597>(x598^x599))<<x600);

    if (t23 != 512) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x617 = INT32_MIN;
	uint32_t x619 = UINT32_MAX;
	uint64_t x620 = 25LLU;

    t24 = ((x617>(x618^x619))<<x620);

    if (t24 != 33554432) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x626 = INT32_MAX;
	volatile int32_t x627 = INT32_MIN;
	int8_t x628 = 2;

    t25 = ((x625>(x626^x627))<<x628);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x637 = -3422;
	uint32_t x638 = 384276U;
	volatile uint32_t x639 = UINT32_MAX;
	uint8_t x640 = 1U;
	int32_t t26 = 2321;

    t26 = ((x637>(x638^x639))<<x640);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x661 = INT16_MIN;
	volatile uint8_t x662 = 2U;
	volatile int64_t x663 = INT64_MIN;
	uint8_t x664 = 0U;
	int32_t t27 = -105;

    t27 = ((x661>(x662^x663))<<x664);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x693 = 91330LL;
	uint8_t x694 = 36U;
	int16_t x695 = -1;
	uint16_t x696 = 1U;

    t28 = ((x693>(x694^x695))<<x696);

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x701 = 28U;
	int32_t x702 = -1;
	static int64_t x703 = INT64_MAX;
	uint8_t x704 = 25U;
	int32_t t29 = 6;

    t29 = ((x701>(x702^x703))<<x704);

    if (t29 != 33554432) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x709 = -128;
	int64_t x710 = INT64_MIN;
	int8_t x711 = INT8_MAX;
	static volatile uint32_t x712 = 1U;
	volatile int32_t t30 = -24;

    t30 = ((x709>(x710^x711))<<x712);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x730 = 629U;
	static int8_t x731 = -1;
	int16_t x732 = 1;
	static volatile int32_t t31 = 51;

    t31 = ((x729>(x730^x731))<<x732);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	uint64_t x750 = 1776082255LLU;
	uint16_t x752 = 3U;
	int32_t t32 = -26266441;

    t32 = ((x749>(x750^x751))<<x752);

    if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x773 = 2741U;
	volatile int32_t t33 = -9;

    t33 = ((x773>(x774^x775))<<x776);

    if (t33 != 2097152) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x781 = 3789;
	static uint16_t x782 = 16433U;
	static int16_t x783 = -1;
	volatile uint8_t x784 = 1U;
	int32_t t34 = -1501958;

    t34 = ((x781>(x782^x783))<<x784);

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x789 = UINT32_MAX;
	int16_t x791 = INT16_MIN;
	static int32_t t35 = 57987064;

    t35 = ((x789>(x790^x791))<<x792);

    if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x830 = INT16_MAX;
	int8_t x832 = 1;
	volatile int32_t t36 = 1;

    t36 = ((x829>(x830^x831))<<x832);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x841 = 1640U;
	uint16_t x843 = UINT16_MAX;
	volatile uint8_t x844 = 1U;
	volatile int32_t t37 = 1;

    t37 = ((x841>(x842^x843))<<x844);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x973 = INT16_MIN;
	int16_t x974 = -529;
	int16_t x975 = -1;
	static uint8_t x976 = 1U;

    t38 = ((x973>(x974^x975))<<x976);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1065 = -1;
	int8_t x1066 = INT8_MAX;
	int8_t x1068 = 0;

    t39 = ((x1065>(x1066^x1067))<<x1068);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1077 = INT8_MAX;
	int8_t x1078 = INT8_MIN;
	static uint16_t x1079 = UINT16_MAX;
	uint16_t x1080 = 6U;
	int32_t t40 = 12;

    t40 = ((x1077>(x1078^x1079))<<x1080);

    if (t40 != 64) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x1103 = 37534925288394396LLU;
	int16_t x1104 = 28;
	volatile int32_t t41 = -59526;

    t41 = ((x1101>(x1102^x1103))<<x1104);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x1122 = INT16_MIN;
	static int8_t x1124 = 2;
	volatile int32_t t42 = 23037930;

    t42 = ((x1121>(x1122^x1123))<<x1124);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1186 = 1;
	int64_t x1187 = INT64_MIN;
	volatile int32_t x1188 = 1;
	int32_t t43 = 25035;

    t43 = ((x1185>(x1186^x1187))<<x1188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x1234 = -1LL;
	static volatile int16_t x1235 = -1;
	int32_t x1236 = 0;
	int32_t t44 = -182128;

    t44 = ((x1233>(x1234^x1235))<<x1236);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x1237 = -1;
	int64_t x1238 = -1712346750527LL;
	int64_t x1239 = INT64_MIN;
	uint8_t x1240 = 7U;
	int32_t t45 = 540571070;

    t45 = ((x1237>(x1238^x1239))<<x1240);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1286 = -7051032;
	static uint8_t x1287 = 5U;
	int64_t x1288 = 7LL;
	volatile int32_t t46 = -177886335;

    t46 = ((x1285>(x1286^x1287))<<x1288);

    if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1289 = -1112148564211753566LL;
	int32_t x1291 = -622;
	int8_t x1292 = 30;
	static volatile int32_t t47 = -337697;

    t47 = ((x1289>(x1290^x1291))<<x1292);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x1333 = 153488727926341305LLU;
	static volatile int32_t x1335 = INT32_MIN;

    t48 = ((x1333>(x1334^x1335))<<x1336);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1341 = 2;
	uint8_t x1342 = 19U;
	uint8_t x1343 = 56U;
	int32_t t49 = -331373;

    t49 = ((x1341>(x1342^x1343))<<x1344);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x1361 = INT8_MAX;
	int32_t x1362 = -1;
	int8_t x1363 = INT8_MIN;
	static uint16_t x1364 = 4U;
	volatile int32_t t50 = 48385792;

    t50 = ((x1361>(x1362^x1363))<<x1364);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1413 = -229831;
	uint8_t x1414 = 12U;
	int64_t x1415 = INT64_MIN;
	int32_t x1416 = 0;
	static volatile int32_t t51 = 40147;

    t51 = ((x1413>(x1414^x1415))<<x1416);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1429 = INT64_MAX;
	uint16_t x1430 = UINT16_MAX;
	volatile uint8_t x1431 = 15U;
	int16_t x1432 = 28;
	volatile int32_t t52 = -4436172;

    t52 = ((x1429>(x1430^x1431))<<x1432);

    if (t52 != 268435456) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1453 = INT8_MAX;
	int32_t x1454 = INT32_MIN;
	static uint16_t x1455 = 12594U;
	static uint16_t x1456 = 20U;
	volatile int32_t t53 = -10212257;

    t53 = ((x1453>(x1454^x1455))<<x1456);

    if (t53 != 1048576) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x1481 = -1;
	int16_t x1482 = INT16_MAX;
	int8_t x1484 = 11;
	volatile int32_t t54 = 3277582;

    t54 = ((x1481>(x1482^x1483))<<x1484);

    if (t54 != 2048) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1577 = 119U;
	int16_t x1579 = -31;
	uint8_t x1580 = 3U;
	int32_t t55 = -7154;

    t55 = ((x1577>(x1578^x1579))<<x1580);

    if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x1605 = UINT32_MAX;
	volatile uint64_t x1606 = 29176268454LLU;
	uint32_t x1608 = 9U;
	volatile int32_t t56 = 1486;

    t56 = ((x1605>(x1606^x1607))<<x1608);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1609 = 71LLU;
	int64_t x1610 = -21365151568984212LL;
	int32_t x1611 = INT32_MAX;
	static int32_t t57 = 485631114;

    t57 = ((x1609>(x1610^x1611))<<x1612);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x1621 = 17U;
	static int32_t x1622 = INT32_MIN;
	uint8_t x1623 = UINT8_MAX;
	uint8_t x1624 = 30U;
	static int32_t t58 = 1528390;

    t58 = ((x1621>(x1622^x1623))<<x1624);

    if (t58 != 1073741824) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x1649 = INT64_MIN;
	static volatile uint64_t x1650 = UINT64_MAX;
	static int8_t x1651 = INT8_MAX;
	uint8_t x1652 = 0U;
	int32_t t59 = 107080;

    t59 = ((x1649>(x1650^x1651))<<x1652);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x1701 = 51U;
	int16_t x1702 = INT16_MAX;
	int8_t x1704 = 1;

    t60 = ((x1701>(x1702^x1703))<<x1704);

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x1713 = INT32_MIN;
	uint32_t x1714 = UINT32_MAX;
	volatile int16_t x1715 = INT16_MIN;
	int32_t t61 = -2;

    t61 = ((x1713>(x1714^x1715))<<x1716);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1725 = INT32_MIN;
	static volatile int16_t x1726 = INT16_MIN;
	int64_t x1727 = -1LL;
	uint16_t x1728 = 3U;
	volatile int32_t t62 = -749;

    t62 = ((x1725>(x1726^x1727))<<x1728);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x1733 = INT32_MAX;
	uint64_t x1735 = 2701306656LLU;
	volatile uint64_t x1736 = 27LLU;
	volatile int32_t t63 = 34218;

    t63 = ((x1733>(x1734^x1735))<<x1736);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x1805 = INT8_MIN;
	int64_t x1806 = INT64_MAX;
	int16_t x1807 = INT16_MIN;
	static volatile uint8_t x1808 = 1U;
	int32_t t64 = 37;

    t64 = ((x1805>(x1806^x1807))<<x1808);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x1865 = 20742374LLU;
	int8_t x1866 = INT8_MIN;
	static int16_t x1867 = 2;
	int8_t x1868 = 0;
	int32_t t65 = -233048496;

    t65 = ((x1865>(x1866^x1867))<<x1868);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x1901 = INT8_MAX;
	uint32_t x1902 = 299384U;
	int32_t x1903 = INT32_MAX;
	int16_t x1904 = 1;
	volatile int32_t t66 = -1894727;

    t66 = ((x1901>(x1902^x1903))<<x1904);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x1905 = 473U;
	volatile uint16_t x1906 = UINT16_MAX;
	int32_t x1907 = INT32_MAX;
	int8_t x1908 = 0;
	volatile int32_t t67 = 64352;

    t67 = ((x1905>(x1906^x1907))<<x1908);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x1933 = -1;
	uint8_t x1934 = 12U;
	volatile uint64_t x1935 = 1895385245320603377LLU;
	volatile int32_t t68 = 12483;

    t68 = ((x1933>(x1934^x1935))<<x1936);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x1938 = INT16_MIN;
	static int32_t x1939 = INT32_MIN;
	volatile int32_t t69 = 1;

    t69 = ((x1937>(x1938^x1939))<<x1940);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x2025 = 0U;
	int64_t x2026 = INT64_MAX;
	static int8_t x2027 = 4;
	uint16_t x2028 = 7U;
	static int32_t t70 = -215;

    t70 = ((x2025>(x2026^x2027))<<x2028);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2033 = INT8_MIN;
	uint16_t x2034 = 4U;
	int64_t x2036 = 3LL;
	volatile int32_t t71 = -19028365;

    t71 = ((x2033>(x2034^x2035))<<x2036);

    if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x2069 = UINT64_MAX;
	volatile int64_t x2070 = -1LL;
	volatile int32_t t72 = 55;

    t72 = ((x2069>(x2070^x2071))<<x2072);

    if (t72 != 134217728) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x2093 = INT32_MIN;
	static int8_t x2095 = INT8_MAX;
	static volatile uint8_t x2096 = 0U;
	volatile int32_t t73 = 396395453;

    t73 = ((x2093>(x2094^x2095))<<x2096);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x2097 = INT8_MIN;
	volatile int32_t x2098 = -241738435;
	uint64_t x2099 = 5930702LLU;
	int32_t x2100 = 8;
	volatile int32_t t74 = -748983;

    t74 = ((x2097>(x2098^x2099))<<x2100);

    if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x2110 = 22;
	uint8_t x2112 = 2U;
	volatile int32_t t75 = 34507;

    t75 = ((x2109>(x2110^x2111))<<x2112);

    if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2191 = -1;
	volatile int8_t x2192 = 1;
	int32_t t76 = 1355439;

    t76 = ((x2189>(x2190^x2191))<<x2192);

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x2193 = INT32_MIN;
	int64_t x2194 = INT64_MAX;
	int8_t x2195 = 1;
	static int8_t x2196 = 0;
	volatile int32_t t77 = -398060;

    t77 = ((x2193>(x2194^x2195))<<x2196);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2225 = INT32_MAX;
	int8_t x2226 = INT8_MIN;
	static volatile uint32_t x2227 = UINT32_MAX;
	int8_t x2228 = 3;

    t78 = ((x2225>(x2226^x2227))<<x2228);

    if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x2285 = UINT32_MAX;
	static uint64_t x2286 = 8677598LLU;
	int16_t x2287 = -1;
	uint64_t x2288 = 6LLU;

    t79 = ((x2285>(x2286^x2287))<<x2288);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x2330 = 291U;
	int16_t x2331 = INT16_MIN;
	int64_t x2332 = 0LL;
	static volatile int32_t t80 = -14;

    t80 = ((x2329>(x2330^x2331))<<x2332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x2373 = INT16_MIN;
	static uint16_t x2374 = 1837U;
	int64_t x2375 = -1LL;
	volatile uint32_t x2376 = 6U;

    t81 = ((x2373>(x2374^x2375))<<x2376);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2437 = INT64_MAX;
	int8_t x2438 = INT8_MIN;
	volatile uint16_t x2439 = UINT16_MAX;
	int16_t x2440 = 24;
	int32_t t82 = 255504447;

    t82 = ((x2437>(x2438^x2439))<<x2440);

    if (t82 != 16777216) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2457 = -6;
	uint32_t x2458 = UINT32_MAX;
	uint32_t x2459 = 1636147160U;
	uint8_t x2460 = 0U;
	volatile int32_t t83 = 178825840;

    t83 = ((x2457>(x2458^x2459))<<x2460);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2501 = INT16_MIN;
	static int8_t x2502 = -1;
	int64_t x2503 = -2165961LL;
	volatile int8_t x2504 = 4;
	volatile int32_t t84 = 267782;

    t84 = ((x2501>(x2502^x2503))<<x2504);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2517 = INT64_MIN;
	int64_t x2518 = 270192410202LL;
	uint32_t x2520 = 11U;
	static volatile int32_t t85 = -3450;

    t85 = ((x2517>(x2518^x2519))<<x2520);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x2521 = INT16_MIN;
	volatile uint64_t x2522 = UINT64_MAX;
	volatile uint8_t x2524 = 0U;

    t86 = ((x2521>(x2522^x2523))<<x2524);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x2529 = INT8_MAX;
	volatile uint8_t x2530 = 0U;
	volatile int16_t x2531 = INT16_MIN;
	int32_t x2532 = 4;
	static volatile int32_t t87 = 59;

    t87 = ((x2529>(x2530^x2531))<<x2532);

    if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x2574 = 142446165U;
	int16_t x2575 = INT16_MAX;
	static uint16_t x2576 = 15U;
	int32_t t88 = 11192;

    t88 = ((x2573>(x2574^x2575))<<x2576);

    if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x2585 = INT64_MIN;
	int32_t x2586 = 13701;
	int16_t x2587 = -1;
	int32_t t89 = -91;

    t89 = ((x2585>(x2586^x2587))<<x2588);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x2641 = INT64_MIN;
	int32_t x2642 = INT32_MAX;
	int32_t t90 = 0;

    t90 = ((x2641>(x2642^x2643))<<x2644);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2645 = INT64_MIN;
	int64_t x2646 = INT64_MIN;
	uint8_t x2648 = 0U;
	int32_t t91 = 932;

    t91 = ((x2645>(x2646^x2647))<<x2648);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x2657 = INT16_MAX;
	static int16_t x2658 = -1;
	static uint8_t x2659 = UINT8_MAX;
	static volatile int8_t x2660 = 11;
	int32_t t92 = -1533;

    t92 = ((x2657>(x2658^x2659))<<x2660);

    if (t92 != 2048) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x2674 = 55859255;
	static uint8_t x2676 = 13U;
	int32_t t93 = -15;

    t93 = ((x2673>(x2674^x2675))<<x2676);

    if (t93 != 8192) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x2709 = INT32_MIN;
	int16_t x2710 = -14868;
	int8_t x2711 = INT8_MIN;
	int16_t x2712 = 0;
	int32_t t94 = 8078012;

    t94 = ((x2709>(x2710^x2711))<<x2712);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x2725 = 752148U;
	volatile int64_t x2727 = INT64_MIN;
	static uint16_t x2728 = 3U;

    t95 = ((x2725>(x2726^x2727))<<x2728);

    if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x2738 = 59U;
	volatile int16_t x2739 = 606;
	volatile uint8_t x2740 = 1U;
	static int32_t t96 = 15;

    t96 = ((x2737>(x2738^x2739))<<x2740);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x2741 = 30556555215838LLU;
	uint16_t x2744 = 3U;
	int32_t t97 = 1;

    t97 = ((x2741>(x2742^x2743))<<x2744);

    if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x2746 = INT8_MIN;
	static uint32_t x2747 = UINT32_MAX;
	uint16_t x2748 = 10U;

    t98 = ((x2745>(x2746^x2747))<<x2748);

    if (t98 != 1024) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x2749 = 126U;
	int8_t x2750 = INT8_MAX;
	int32_t x2751 = INT32_MIN;
	uint32_t x2752 = 0U;
	static volatile int32_t t99 = 1991394;

    t99 = ((x2749>(x2750^x2751))<<x2752);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x2753 = INT32_MAX;
	int8_t x2754 = INT8_MIN;
	int64_t x2755 = INT64_MAX;
	int8_t x2756 = 7;
	int32_t t100 = -4030168;

    t100 = ((x2753>(x2754^x2755))<<x2756);

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x2761 = 104U;
	uint16_t x2763 = 247U;
	uint16_t x2764 = 1U;
	volatile int32_t t101 = 101;

    t101 = ((x2761>(x2762^x2763))<<x2764);

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x2777 = 8U;
	uint32_t x2778 = 1143U;
	uint16_t x2780 = 1U;
	int32_t t102 = -8740;

    t102 = ((x2777>(x2778^x2779))<<x2780);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x2809 = INT64_MIN;
	volatile int8_t x2810 = INT8_MIN;
	volatile int8_t x2811 = 2;
	volatile uint8_t x2812 = 0U;
	int32_t t103 = 4;

    t103 = ((x2809>(x2810^x2811))<<x2812);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x2845 = INT32_MIN;
	static int64_t x2846 = 94654333639LL;
	int8_t x2847 = INT8_MAX;
	int8_t x2848 = 1;
	int32_t t104 = 753;

    t104 = ((x2845>(x2846^x2847))<<x2848);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x2873 = 9U;
	int64_t x2874 = INT64_MIN;
	volatile uint64_t x2875 = 942899059635081979LLU;
	uint64_t x2876 = 9LLU;
	int32_t t105 = -1;

    t105 = ((x2873>(x2874^x2875))<<x2876);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x2881 = 3U;
	int32_t x2882 = INT32_MIN;
	static int32_t x2883 = INT32_MAX;
	int32_t t106 = -39;

    t106 = ((x2881>(x2882^x2883))<<x2884);

    if (t106 != 128) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x2909 = 0U;
	volatile int8_t x2911 = -1;
	uint8_t x2912 = 1U;

    t107 = ((x2909>(x2910^x2911))<<x2912);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x2913 = UINT8_MAX;
	volatile uint32_t x2914 = UINT32_MAX;
	static int8_t x2915 = 0;
	uint16_t x2916 = 5U;
	volatile int32_t t108 = -1;

    t108 = ((x2913>(x2914^x2915))<<x2916);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x2929 = INT64_MIN;
	static int32_t x2930 = 39371608;
	uint64_t x2931 = UINT64_MAX;
	static int32_t t109 = -9542039;

    t109 = ((x2929>(x2930^x2931))<<x2932);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3029 = INT64_MAX;
	uint32_t x3030 = 460519617U;
	int32_t t110 = 138;

    t110 = ((x3029>(x3030^x3031))<<x3032);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x3041 = 3U;
	static uint32_t x3042 = 702U;
	uint8_t x3043 = 0U;
	uint8_t x3044 = 2U;
	int32_t t111 = -2646633;

    t111 = ((x3041>(x3042^x3043))<<x3044);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x3057 = UINT8_MAX;
	uint16_t x3058 = UINT16_MAX;
	uint8_t x3060 = 21U;
	volatile int32_t t112 = -30380;

    t112 = ((x3057>(x3058^x3059))<<x3060);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x3077 = INT8_MIN;
	static volatile int16_t x3078 = -1;
	int64_t x3079 = 8087LL;
	uint8_t x3080 = 20U;
	int32_t t113 = 1;

    t113 = ((x3077>(x3078^x3079))<<x3080);

    if (t113 != 1048576) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x3102 = -1LL;
	static int64_t x3103 = 138837390157LL;
	volatile uint16_t x3104 = 0U;
	int32_t t114 = 13416;

    t114 = ((x3101>(x3102^x3103))<<x3104);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x3105 = 73LLU;
	int16_t x3106 = 9135;
	volatile int32_t t115 = 1;

    t115 = ((x3105>(x3106^x3107))<<x3108);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x3129 = 42U;
	int16_t x3130 = -1;
	int16_t x3131 = -1;
	volatile uint16_t x3132 = 13U;
	volatile int32_t t116 = 3;

    t116 = ((x3129>(x3130^x3131))<<x3132);

    if (t116 != 8192) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3137 = 35324083;
	int8_t x3138 = INT8_MIN;
	uint64_t x3139 = UINT64_MAX;
	int8_t x3140 = 0;
	static volatile int32_t t117 = 559439504;

    t117 = ((x3137>(x3138^x3139))<<x3140);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x3193 = 832902388LLU;
	static uint16_t x3196 = 20U;
	int32_t t118 = 3351;

    t118 = ((x3193>(x3194^x3195))<<x3196);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3241 = INT32_MAX;
	static int8_t x3242 = 34;
	uint16_t x3243 = UINT16_MAX;
	uint8_t x3244 = 5U;
	volatile int32_t t119 = 2563;

    t119 = ((x3241>(x3242^x3243))<<x3244);

    if (t119 != 32) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x3313 = -3565341LL;
	int8_t x3314 = -18;
	uint64_t x3315 = 29731116072097733LLU;
	volatile uint8_t x3316 = 1U;

    t120 = ((x3313>(x3314^x3315))<<x3316);

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x3357 = 557410015U;
	uint8_t x3358 = 3U;
	uint16_t x3360 = 1U;

    t121 = ((x3357>(x3358^x3359))<<x3360);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x3405 = INT64_MIN;
	static volatile int64_t x3406 = -1LL;
	int8_t x3407 = -7;
	uint8_t x3408 = 16U;
	int32_t t122 = -29210;

    t122 = ((x3405>(x3406^x3407))<<x3408);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x3409 = 218;
	int16_t x3410 = -1;
	volatile int32_t t123 = 2089122;

    t123 = ((x3409>(x3410^x3411))<<x3412);

    if (t123 != 8) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x3429 = 4479LL;
	uint16_t x3430 = UINT16_MAX;
	int16_t x3432 = 10;
	volatile int32_t t124 = 0;

    t124 = ((x3429>(x3430^x3431))<<x3432);

    if (t124 != 1024) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x3437 = 169LLU;
	int32_t x3438 = -1;
	volatile int16_t x3440 = 1;
	static volatile int32_t t125 = 30176687;

    t125 = ((x3437>(x3438^x3439))<<x3440);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x3445 = -1LL;
	uint8_t x3446 = 2U;
	int16_t x3447 = -8223;
	volatile uint16_t x3448 = 1U;
	static int32_t t126 = 36529;

    t126 = ((x3445>(x3446^x3447))<<x3448);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x3450 = INT8_MAX;
	uint16_t x3451 = 5733U;
	static volatile int32_t t127 = 387;

    t127 = ((x3449>(x3450^x3451))<<x3452);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x3477 = INT64_MAX;
	volatile int16_t x3478 = INT16_MIN;
	int8_t x3480 = 2;
	volatile int32_t t128 = 1339;

    t128 = ((x3477>(x3478^x3479))<<x3480);

    if (t128 != 4) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x3493 = INT32_MIN;
	volatile int16_t x3494 = -691;
	uint16_t x3495 = 13U;
	static uint8_t x3496 = 1U;
	volatile int32_t t129 = -5338387;

    t129 = ((x3493>(x3494^x3495))<<x3496);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x3509 = INT16_MIN;
	int16_t x3510 = 572;
	uint16_t x3512 = 0U;

    t130 = ((x3509>(x3510^x3511))<<x3512);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x3513 = -1;
	int16_t x3514 = INT16_MIN;
	uint8_t x3515 = UINT8_MAX;
	static int32_t t131 = -32349594;

    t131 = ((x3513>(x3514^x3515))<<x3516);

    if (t131 != 4) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x3529 = INT64_MIN;
	static int32_t x3530 = 26;
	uint16_t x3531 = 0U;
	volatile int8_t x3532 = 3;
	volatile int32_t t132 = -328;

    t132 = ((x3529>(x3530^x3531))<<x3532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x3561 = 1U;
	int32_t x3562 = 164799406;
	uint32_t x3563 = 1236U;

    t133 = ((x3561>(x3562^x3563))<<x3564);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x3565 = INT16_MIN;
	int64_t x3566 = 220964514453639816LL;
	int8_t x3567 = -1;
	uint8_t x3568 = 11U;
	static volatile int32_t t134 = 555740288;

    t134 = ((x3565>(x3566^x3567))<<x3568);

    if (t134 != 2048) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x3581 = INT32_MAX;
	volatile uint64_t x3582 = UINT64_MAX;
	int8_t x3583 = -3;
	uint8_t x3584 = 1U;
	int32_t t135 = 1;

    t135 = ((x3581>(x3582^x3583))<<x3584);

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x3625 = 1U;
	int16_t x3626 = INT16_MIN;
	static int16_t x3628 = 2;
	static volatile int32_t t136 = 14;

    t136 = ((x3625>(x3626^x3627))<<x3628);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x3657 = 31;
	int8_t x3658 = INT8_MAX;
	static int32_t x3659 = INT32_MIN;
	volatile int16_t x3660 = 11;
	int32_t t137 = -427;

    t137 = ((x3657>(x3658^x3659))<<x3660);

    if (t137 != 2048) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x3677 = 0U;
	static uint32_t x3679 = UINT32_MAX;
	int32_t t138 = -152;

    t138 = ((x3677>(x3678^x3679))<<x3680);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x3693 = 141448568LLU;
	uint16_t x3694 = 3951U;
	uint16_t x3696 = 0U;
	int32_t t139 = 0;

    t139 = ((x3693>(x3694^x3695))<<x3696);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x3697 = -1;
	uint32_t x3698 = UINT32_MAX;
	static uint32_t x3699 = UINT32_MAX;
	int8_t x3700 = 2;
	volatile int32_t t140 = 91470750;

    t140 = ((x3697>(x3698^x3699))<<x3700);

    if (t140 != 4) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x3705 = 458523568090LL;
	uint32_t x3706 = UINT32_MAX;
	uint32_t x3708 = 10U;
	static volatile int32_t t141 = 13;

    t141 = ((x3705>(x3706^x3707))<<x3708);

    if (t141 != 1024) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x3709 = UINT16_MAX;
	uint16_t x3710 = 380U;
	volatile int8_t x3711 = -1;
	uint8_t x3712 = 2U;
	volatile int32_t t142 = 850;

    t142 = ((x3709>(x3710^x3711))<<x3712);

    if (t142 != 4) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x3729 = UINT32_MAX;
	uint8_t x3731 = UINT8_MAX;
	static int32_t t143 = -1489119;

    t143 = ((x3729>(x3730^x3731))<<x3732);

    if (t143 != 8) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x3773 = 11U;
	static int64_t x3775 = INT64_MIN;
	uint16_t x3776 = 0U;
	static int32_t t144 = 2169820;

    t144 = ((x3773>(x3774^x3775))<<x3776);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x3801 = INT64_MAX;
	int32_t x3803 = -1;
	uint8_t x3804 = 1U;
	volatile int32_t t145 = -34;

    t145 = ((x3801>(x3802^x3803))<<x3804);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x3813 = UINT64_MAX;
	int64_t x3815 = INT64_MIN;
	int32_t x3816 = 0;

    t146 = ((x3813>(x3814^x3815))<<x3816);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x3817 = INT32_MAX;
	int64_t x3818 = -4155864LL;
	static uint64_t x3819 = 846189692462LLU;
	int64_t x3820 = 4LL;
	volatile int32_t t147 = 4233685;

    t147 = ((x3817>(x3818^x3819))<<x3820);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x3889 = 171167U;
	volatile uint16_t x3890 = 6U;
	static volatile int32_t t148 = -185220;

    t148 = ((x3889>(x3890^x3891))<<x3892);

    if (t148 != 8) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x3921 = 0U;
	static int16_t x3922 = -15814;
	static int16_t x3923 = INT16_MIN;
	uint8_t x3924 = 1U;
	int32_t t149 = -12577;

    t149 = ((x3921>(x3922^x3923))<<x3924);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x3929 = INT16_MAX;
	int16_t x3930 = 1;
	int8_t x3931 = -1;
	uint16_t x3932 = 7U;
	static int32_t t150 = -1;

    t150 = ((x3929>(x3930^x3931))<<x3932);

    if (t150 != 128) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x3941 = 578U;
	int32_t x3942 = INT32_MIN;
	static volatile int8_t x3943 = 1;
	int32_t t151 = 122863563;

    t151 = ((x3941>(x3942^x3943))<<x3944);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x3945 = INT16_MAX;
	static int64_t x3946 = 3025763734LL;
	uint32_t x3948 = 31U;
	int32_t t152 = -2449;

    t152 = ((x3945>(x3946^x3947))<<x3948);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x3957 = -1LL;
	int16_t x3958 = INT16_MIN;
	uint64_t x3959 = 114LLU;
	volatile int32_t t153 = 6;

    t153 = ((x3957>(x3958^x3959))<<x3960);

    if (t153 != 128) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x3973 = 56LLU;
	static int16_t x3974 = -1;
	int16_t x3975 = -1;
	uint16_t x3976 = 7U;
	int32_t t154 = -211552;

    t154 = ((x3973>(x3974^x3975))<<x3976);

    if (t154 != 128) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x4002 = INT32_MAX;
	static int8_t x4004 = 7;
	volatile int32_t t155 = 77791;

    t155 = ((x4001>(x4002^x4003))<<x4004);

    if (t155 != 128) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x4025 = -1;
	int64_t x4026 = INT64_MIN;
	uint16_t x4027 = UINT16_MAX;
	int64_t x4028 = 1LL;

    t156 = ((x4025>(x4026^x4027))<<x4028);

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x4085 = -3;
	volatile int32_t x4087 = INT32_MIN;
	uint8_t x4088 = 3U;

    t157 = ((x4085>(x4086^x4087))<<x4088);

    if (t157 != 8) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x4109 = INT64_MIN;
	static uint16_t x4111 = UINT16_MAX;
	volatile uint32_t x4112 = 1U;
	volatile int32_t t158 = -3837;

    t158 = ((x4109>(x4110^x4111))<<x4112);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x4117 = 48316218U;
	uint64_t x4118 = 13638788114LLU;
	static int16_t x4119 = 26;
	static int16_t x4120 = 6;
	volatile int32_t t159 = -200;

    t159 = ((x4117>(x4118^x4119))<<x4120);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x4129 = -4;
	static int16_t x4130 = 4;
	static uint32_t x4132 = 13U;
	volatile int32_t t160 = 470;

    t160 = ((x4129>(x4130^x4131))<<x4132);

    if (t160 != 8192) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4133 = UINT64_MAX;
	int32_t x4134 = INT32_MIN;
	uint16_t x4135 = UINT16_MAX;
	int32_t x4136 = 9;
	int32_t t161 = -246;

    t161 = ((x4133>(x4134^x4135))<<x4136);

    if (t161 != 512) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x4169 = -1;
	uint8_t x4170 = 2U;
	uint16_t x4171 = UINT16_MAX;
	volatile int32_t t162 = 11772;

    t162 = ((x4169>(x4170^x4171))<<x4172);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x4283 = 2046;

    t163 = ((x4281>(x4282^x4283))<<x4284);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x4285 = 2U;
	uint32_t x4286 = 415035U;
	int8_t x4287 = INT8_MAX;
	volatile int32_t t164 = -724;

    t164 = ((x4285>(x4286^x4287))<<x4288);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x4313 = INT64_MIN;
	int16_t x4315 = 15879;
	static uint16_t x4316 = 15U;
	int32_t t165 = -12122;

    t165 = ((x4313>(x4314^x4315))<<x4316);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x4318 = 0U;
	int32_t x4319 = INT32_MIN;
	uint16_t x4320 = 0U;
	volatile int32_t t166 = 487411083;

    t166 = ((x4317>(x4318^x4319))<<x4320);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x4322 = 2;
	volatile int16_t x4323 = INT16_MIN;
	volatile int8_t x4324 = 12;
	int32_t t167 = -1;

    t167 = ((x4321>(x4322^x4323))<<x4324);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x4417 = INT32_MAX;
	static volatile uint16_t x4418 = 1U;
	static int32_t t168 = -71299;

    t168 = ((x4417>(x4418^x4419))<<x4420);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x4438 = INT8_MIN;
	static int16_t x4439 = -1;
	uint32_t x4440 = 0U;
	volatile int32_t t169 = -1230934;

    t169 = ((x4437>(x4438^x4439))<<x4440);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x4453 = UINT16_MAX;
	uint16_t x4454 = UINT16_MAX;
	static int64_t x4455 = -1446333743134639LL;
	int16_t x4456 = 2;

    t170 = ((x4453>(x4454^x4455))<<x4456);

    if (t170 != 4) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x4477 = -1;
	static volatile int16_t x4478 = INT16_MIN;
	int32_t t171 = -1;

    t171 = ((x4477>(x4478^x4479))<<x4480);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x4493 = INT8_MIN;
	volatile uint32_t x4494 = 5U;
	static uint8_t x4495 = 33U;
	uint32_t x4496 = 1U;

    t172 = ((x4493>(x4494^x4495))<<x4496);

    if (t172 != 2) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x4497 = INT64_MAX;
	int64_t x4498 = -1LL;
	int32_t t173 = -237;

    t173 = ((x4497>(x4498^x4499))<<x4500);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x4545 = INT64_MIN;
	uint32_t x4546 = 347U;
	int16_t x4547 = INT16_MIN;
	uint32_t x4548 = 8U;
	static int32_t t174 = -3264971;

    t174 = ((x4545>(x4546^x4547))<<x4548);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x4557 = 125;
	int16_t x4559 = -1;
	static uint8_t x4560 = 16U;
	int32_t t175 = 155257839;

    t175 = ((x4557>(x4558^x4559))<<x4560);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x4593 = INT32_MAX;
	volatile int64_t x4595 = INT64_MIN;
	volatile uint32_t x4596 = 1U;
	int32_t t176 = -1015;

    t176 = ((x4593>(x4594^x4595))<<x4596);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x4597 = -1LL;
	int64_t x4598 = INT64_MIN;
	int8_t x4599 = -1;
	int8_t x4600 = 0;

    t177 = ((x4597>(x4598^x4599))<<x4600);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x4609 = UINT8_MAX;
	static volatile uint32_t x4610 = 623201256U;
	int16_t x4611 = -7543;
	int16_t x4612 = 28;
	volatile int32_t t178 = 2129;

    t178 = ((x4609>(x4610^x4611))<<x4612);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x4613 = UINT32_MAX;
	int16_t x4614 = INT16_MIN;
	int64_t x4616 = 1LL;
	static volatile int32_t t179 = 4645;

    t179 = ((x4613>(x4614^x4615))<<x4616);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x4621 = INT64_MAX;
	int64_t x4622 = -1LL;
	int16_t x4623 = -1;
	static int8_t x4624 = 1;
	static volatile int32_t t180 = 16370;

    t180 = ((x4621>(x4622^x4623))<<x4624);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x4625 = UINT16_MAX;
	uint16_t x4626 = 1742U;
	int32_t x4627 = INT32_MIN;
	uint8_t x4628 = 2U;
	int32_t t181 = -6;

    t181 = ((x4625>(x4626^x4627))<<x4628);

    if (t181 != 4) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x4653 = 12821U;
	uint16_t x4656 = 4U;

    t182 = ((x4653>(x4654^x4655))<<x4656);

    if (t182 != 16) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x4661 = INT8_MIN;
	uint32_t x4662 = UINT32_MAX;
	uint32_t x4663 = 17764U;
	uint8_t x4664 = 0U;
	volatile int32_t t183 = -1758;

    t183 = ((x4661>(x4662^x4663))<<x4664);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x4665 = 155;
	volatile int8_t x4668 = 3;
	volatile int32_t t184 = -216;

    t184 = ((x4665>(x4666^x4667))<<x4668);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x4686 = INT32_MAX;
	volatile int32_t x4687 = -1;
	static uint16_t x4688 = 21U;
	static volatile int32_t t185 = 850237446;

    t185 = ((x4685>(x4686^x4687))<<x4688);

    if (t185 != 2097152) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x4697 = UINT16_MAX;
	volatile int64_t x4698 = INT64_MIN;
	int8_t x4699 = INT8_MIN;
	volatile uint8_t x4700 = 9U;
	int32_t t186 = 96067;

    t186 = ((x4697>(x4698^x4699))<<x4700);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x4777 = UINT64_MAX;
	volatile uint64_t x4778 = UINT64_MAX;
	int64_t x4779 = 881343109187137729LL;
	volatile uint32_t x4780 = 29U;

    t187 = ((x4777>(x4778^x4779))<<x4780);

    if (t187 != 536870912) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x4781 = UINT16_MAX;
	int64_t x4782 = INT64_MIN;
	static uint64_t x4783 = 53LLU;
	static int32_t x4784 = 12;
	int32_t t188 = 1754210;

    t188 = ((x4781>(x4782^x4783))<<x4784);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x4825 = 23992982399LL;
	int16_t x4826 = -482;
	volatile int16_t x4827 = INT16_MAX;
	static volatile uint16_t x4828 = 1U;
	int32_t t189 = -101;

    t189 = ((x4825>(x4826^x4827))<<x4828);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x4841 = INT32_MIN;
	volatile int64_t x4842 = INT64_MIN;
	uint32_t x4843 = 6926146U;
	int8_t x4844 = 0;

    t190 = ((x4841>(x4842^x4843))<<x4844);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x4865 = INT16_MIN;
	int16_t x4866 = INT16_MIN;
	volatile int64_t x4867 = 154839834571LL;
	int32_t t191 = 126;

    t191 = ((x4865>(x4866^x4867))<<x4868);

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x4881 = -3;
	static int64_t x4882 = INT64_MAX;
	uint16_t x4884 = 2U;
	static volatile int32_t t192 = -3083402;

    t192 = ((x4881>(x4882^x4883))<<x4884);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x4885 = INT32_MIN;
	int8_t x4886 = 13;
	static uint16_t x4887 = 27U;
	volatile int32_t t193 = 1752;

    t193 = ((x4885>(x4886^x4887))<<x4888);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x4945 = INT32_MAX;
	uint32_t x4946 = 403931588U;
	volatile int64_t x4947 = -70438LL;
	volatile int8_t x4948 = 0;
	int32_t t194 = 4;

    t194 = ((x4945>(x4946^x4947))<<x4948);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x5014 = INT8_MAX;
	static int8_t x5015 = -1;
	static int8_t x5016 = 0;
	volatile int32_t t195 = -1000986878;

    t195 = ((x5013>(x5014^x5015))<<x5016);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x5038 = 208U;
	volatile int32_t x5039 = 96601887;
	int32_t t196 = 11;

    t196 = ((x5037>(x5038^x5039))<<x5040);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x5089 = -114288681050036LL;
	int16_t x5090 = INT16_MIN;
	static uint8_t x5091 = 3U;
	static int8_t x5092 = 4;
	static volatile int32_t t197 = -1023495;

    t197 = ((x5089>(x5090^x5091))<<x5092);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x5097 = 5U;
	uint32_t x5098 = 0U;
	uint8_t x5100 = 11U;
	int32_t t198 = -806305;

    t198 = ((x5097>(x5098^x5099))<<x5100);

    if (t198 != 2048) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x5125 = INT32_MIN;
	uint8_t x5126 = UINT8_MAX;
	int64_t x5127 = INT64_MIN;
	uint64_t x5128 = 19LLU;
	volatile int32_t t199 = -72901946;

    t199 = ((x5125>(x5126^x5127))<<x5128);

    if (t199 != 524288) { NG(); } else { ; }
	
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

